/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093e8c18; end: 1093e8f2b;  */

void FUN_1093e8c18(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  byte bVar7;
  byte bVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if (((uVar11 >> 1 & 1) != 0) && ((*(uint *)(param_2 + 0x10) >> 0x11 & 1) != 0)) {
    *(bool *)(param_2 + 0x13c) =
         *(float *)(*(long *)(param_1 + 0x38) + 0x1c) <= *(float *)(param_2 + 0x134);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80000;
    uVar11 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar11 >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0)) {
    lVar13 = *(long *)(param_2 + 0xb8);
    if ((*(uint *)(lVar13 + 0x10) >> 3 & 1) != 0) {
      *(bool *)(lVar13 + 0x28) =
           *(float *)(*(long *)(param_1 + 0x40) + 0x1c) <= *(float *)(lVar13 + 0x24);
      *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 0x10;
      uVar11 = *(uint *)(param_1 + 0x10);
    }
  }
  if ((uVar11 >> 3 & 1) != 0) {
    uVar14 = *(ulong *)(param_2 + 0x18);
    puVar15 = (ulong *)(param_2 + 0x18);
    if ((uVar14 & 1) != 0) {
      puVar15 = (ulong *)(uVar14 + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar13 = (long)*(int *)(param_2 + 0x20) << 3;
      do {
        uVar14 = *puVar15;
        if ((*(uint *)(uVar14 + 0x10) >> 3 & 1) != 0) {
          ppuVar10 = &PTR_PTR_1132d8018;
          if (*(undefined ***)(param_1 + 0x48) != (undefined **)0x0) {
            ppuVar10 = *(undefined ***)(param_1 + 0x48);
          }
          *(bool *)(uVar14 + 0x28) = *(float *)((long)ppuVar10 + 0x1c) <= *(float *)(uVar14 + 0x24);
          *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 0x10;
        }
        puVar15 = puVar15 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      uVar11 = *(uint *)(param_1 + 0x10);
    }
  }
  if ((uVar11 >> 5 & 1) != 0) {
    uVar14 = *(ulong *)(param_2 + 0x30);
    puVar15 = (ulong *)(param_2 + 0x30);
    if ((uVar14 & 1) != 0) {
      puVar15 = (ulong *)(uVar14 + 7);
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      lVar13 = (long)*(int *)(param_2 + 0x38) << 3;
      do {
        uVar14 = *puVar15;
        if ((*(uint *)(uVar14 + 0x10) >> 3 & 1) != 0) {
          ppuVar10 = &PTR_PTR_1132d8018;
          if (*(undefined ***)(param_1 + 0x58) != (undefined **)0x0) {
            ppuVar10 = *(undefined ***)(param_1 + 0x58);
          }
          *(bool *)(uVar14 + 0x28) = *(float *)((long)ppuVar10 + 0x1c) <= *(float *)(uVar14 + 0x24);
          *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 0x10;
        }
        puVar15 = puVar15 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      uVar11 = *(uint *)(param_1 + 0x10);
    }
  }
  if (((uVar11 >> 4 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 4 & 1) != 0)) {
    lVar13 = *(long *)(param_2 + 0xd0);
    uVar14 = (ulong)*(uint *)(lVar13 + 0x88);
    if (0 < (int)*(uint *)(lVar13 + 0x88)) {
      pfVar16 = *(float **)(lVar13 + 0x90);
      lVar13 = *(long *)(lVar13 + 0xa0);
      do {
        ppuVar10 = &PTR_PTR_1132d8018;
        if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
          ppuVar10 = *(undefined ***)(param_1 + 0x50);
        }
        *(bool *)lVar13 = *(float *)((long)ppuVar10 + 0x1c) <= *pfVar16;
        uVar14 = uVar14 - 1;
        pfVar16 = pfVar16 + 1;
        lVar13 = lVar13 + 1;
      } while (uVar14 != 0);
    }
  }
  uVar14 = *(ulong *)(param_1 + 0x18);
  puVar15 = (ulong *)(param_1 + 0x18);
  if ((uVar14 & 1) != 0) {
    puVar15 = (ulong *)(uVar14 + 7);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = puVar15 + *(int *)(param_1 + 0x20);
    puVar1 = (ulong *)(param_2 + 0x48);
    do {
      uVar14 = *puVar15;
      if (((*(byte *)(uVar14 + 0x10) & 1) != 0) && (0 < *(int *)(param_2 + 0x50))) {
        lVar13 = 0;
        puVar17 = (undefined8 *)(*(ulong *)(uVar14 + 0x30) & 0xfffffffffffffffc);
        lVar18 = 8;
        do {
          puVar6 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar6 = (ulong *)(*puVar1 + lVar18 + -1);
          }
          if ((*(byte *)(*puVar6 + 0x10) & 1) != 0) {
            uVar12 = *(ulong *)(*puVar6 + 0xb0);
            if ((uVar12 & 3) == 0) {
              ppuVar10 = ppuRam00000001132d06b0;
              if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                ppuVar10 = &PTR_DAT_1132d0698;
                func_0x00010b4befb0();
              }
            }
            else {
              ppuVar10 = (undefined **)(uVar12 & 0xfffffffffffffffc);
            }
            bVar7 = *(byte *)((long)ppuVar10 + 0x17);
            puVar3 = ppuVar10[1];
            if (-1 < (char)bVar7) {
              puVar3 = (undefined *)(ulong)bVar7;
            }
            bVar8 = *(byte *)((long)puVar17 + 0x17);
            puVar4 = (undefined *)puVar17[1];
            if (-1 < (char)bVar8) {
              puVar4 = (undefined *)(ulong)bVar8;
            }
            if (puVar3 == puVar4) {
              ppuVar9 = (undefined **)*ppuVar10;
              if (-1 < (char)bVar7) {
                ppuVar9 = ppuVar10;
              }
              puVar5 = (undefined8 *)*puVar17;
              if (-1 < (char)bVar8) {
                puVar5 = puVar17;
              }
              _memcmp(ppuVar9,puVar5);
              if ((int)ppuVar9 == 0) {
                puVar6 = puVar1;
                if ((*puVar1 & 1) != 0) {
                  puVar6 = (ulong *)(*puVar1 + lVar18 + -1);
                }
                FUN_1093e8c18(uVar14,*puVar6);
                break;
              }
            }
          }
          lVar13 = lVar13 + 1;
          lVar18 = lVar18 + 8;
        } while (lVar13 < *(int *)(param_2 + 0x50));
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  return;
}



/* Entry: 1093e8f2c; end: 1093e928f;  */

void FUN_1093e8f2c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  uVar13 = *(ulong *)(param_1 + 0x30);
  puVar17 = (ulong *)(param_1 + 0x30);
  if ((uVar13 & 1) != 0) {
    puVar17 = (ulong *)(uVar13 + 7);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar6 = puVar17 + *(int *)(param_1 + 0x38);
    puVar1 = (ulong *)(param_2 + 0x48);
    do {
      if (0 < *(int *)(param_2 + 0x50)) {
        lVar18 = 0;
        uVar13 = *puVar17;
        puVar19 = (undefined8 *)(*(ulong *)(uVar13 + 0x48) & 0xfffffffffffffffc);
        lVar16 = 8;
        do {
          puVar5 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar5 = (ulong *)(*puVar1 + lVar16 + -1);
          }
          if ((*(byte *)(*puVar5 + 0x10) & 1) != 0) {
            uVar11 = *(ulong *)(*puVar5 + 0xb0);
            if ((uVar11 & 3) == 0) {
              ppuVar9 = ppuRam00000001132d06b0;
              if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                ppuVar9 = &PTR_DAT_1132d0698;
                func_0x00010b4befb0();
              }
            }
            else {
              ppuVar9 = (undefined **)(uVar11 & 0xfffffffffffffffc);
            }
            bVar14 = *(byte *)((long)ppuVar9 + 0x17);
            puVar2 = ppuVar9[1];
            if (-1 < (char)bVar14) {
              puVar2 = (undefined *)(ulong)bVar14;
            }
            bVar7 = *(byte *)((long)puVar19 + 0x17);
            puVar3 = (undefined *)puVar19[1];
            if (-1 < (char)bVar7) {
              puVar3 = (undefined *)(ulong)bVar7;
            }
            if (puVar2 == puVar3) {
              ppuVar8 = (undefined **)*ppuVar9;
              if (-1 < (char)bVar14) {
                ppuVar8 = ppuVar9;
              }
              puVar4 = (undefined8 *)*puVar19;
              if (-1 < (char)bVar7) {
                puVar4 = puVar19;
              }
              _memcmp(ppuVar8,puVar4);
              if ((int)ppuVar8 == 0) {
                puVar5 = puVar1;
                if ((*puVar1 & 1) != 0) {
                  puVar5 = (ulong *)(*puVar1 + lVar16 + -1);
                }
                FUN_1093e8f2c(uVar13,*puVar5);
                break;
              }
            }
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 8;
        } while (lVar18 < *(int *)(param_2 + 0x50));
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar6);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (0 < *(int *)(param_2 + 0x20)) {
      func_0x0001053936e4(param_2 + 0x18);
    }
    *(undefined4 *)(param_2 + 0x158) = 1;
    uVar10 = *(uint *)(param_2 + 0x10) & 0xfbffffff;
    *(uint *)(param_2 + 0x10) = uVar10;
    if (*(int *)(param_2 + 0x38) != 0) {
      uVar13 = *(ulong *)(param_1 + 0x18);
      puVar17 = (ulong *)(param_1 + 0x18);
      if ((uVar13 & 1) != 0) {
        puVar17 = (ulong *)(uVar13 + 7);
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        puVar1 = puVar17 + *(int *)(param_1 + 0x20);
        do {
          uVar13 = *puVar17;
          lVar18 = param_2 + 0x18;
          func_0x000107c303b0(lVar18,0x1093416e0);
          if (*(int *)(uVar13 + 0x18) != 0) {
            piVar12 = *(int **)(uVar13 + 0x20);
            lVar16 = (long)*(int *)(uVar13 + 0x18) << 2;
            do {
              if (*(int *)(param_2 + 0x38) <= *piVar12) {
                FUN_10937e740(auStack_88,&UNK_10f56c0cf);
                FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c0b8,0x83b,auStack_88);
                if (-1 < cStack_71) {
                  return;
                }
                __ZdlPv(auStack_88[0]);
                return;
              }
              uVar11 = *(ulong *)(param_2 + 0x30);
              puVar6 = (ulong *)(param_2 + 0x30);
              if ((uVar11 & 1) != 0) {
                puVar6 = (ulong *)(uVar11 + (long)*piVar12 * 8 + 7);
              }
              uVar11 = *puVar6;
              fVar20 = *(float *)(uVar11 + 0x18);
              uVar10 = *(uint *)(lVar18 + 0x10);
              *(uint *)(lVar18 + 0x10) = uVar10 | 1;
              fVar20 = *(float *)(lVar18 + 0x18) + fVar20;
              *(float *)(lVar18 + 0x18) = fVar20;
              fVar21 = *(float *)(lVar18 + 0x1c) + *(float *)(uVar11 + 0x1c);
              *(float *)(lVar18 + 0x1c) = fVar21;
              *(uint *)(lVar18 + 0x10) = uVar10 | 3;
              fVar23 = *(float *)(lVar18 + 0x20) + *(float *)(uVar11 + 0x20);
              *(float *)(lVar18 + 0x20) = fVar23;
              *(uint *)(lVar18 + 0x10) = uVar10 | 7;
              fVar24 = *(float *)(lVar18 + 0x24) + *(float *)(uVar11 + 0x24);
              *(float *)(lVar18 + 0x24) = fVar24;
              uVar15 = uVar10 | 0xf;
              *(uint *)(lVar18 + 0x10) = uVar15;
              if ((*(byte *)(uVar11 + 0x10) >> 4 & 1) != 0) {
                bVar14 = *(byte *)(uVar11 + 0x28);
                if ((uVar10 >> 4 & 1) != 0) {
                  bVar14 = *(byte *)(lVar18 + 0x28) & bVar14;
                }
                *(byte *)(lVar18 + 0x28) = bVar14;
                uVar15 = uVar10 | 0x1f;
                *(uint *)(lVar18 + 0x10) = uVar15;
              }
              piVar12 = piVar12 + 1;
              lVar16 = lVar16 + -4;
            } while (lVar16 != 0);
            if (0 < (int)*(uint *)(uVar13 + 0x18)) {
              fVar22 = 1.0 / (float)*(uint *)(uVar13 + 0x18);
              *(ulong *)(lVar18 + 0x20) = CONCAT44(fVar24 * fVar22,fVar23 * fVar22);
              *(ulong *)(lVar18 + 0x18) = CONCAT44(fVar21 * fVar22,fVar20 * fVar22);
              *(uint *)(lVar18 + 0x10) = uVar15;
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar1);
        uVar10 = *(uint *)(param_2 + 0x10);
      }
      if ((uVar10 >> 0x1b & 1) != 0) {
        *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_2 + 0x15c);
        *(uint *)(param_2 + 0x10) = uVar10 | 0x4000000;
      }
    }
  }
  return;
}



/* Entry: 1093e9290; end: 1093e9533;  */

bool FUN_1093e9290(long param_1,long param_2,long param_3,long param_4,long *param_5,long param_6)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  float fVar17;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  
  fStack_74 = *(float *)(param_1 + 0x20);
  fStack_80 = *(float *)(param_2 + 0x20) - fStack_74;
  uStack_7c = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) -
                       (float)((ulong)uStack_7c >> 0x20),
                       (float)*(undefined8 *)(param_2 + 0x18) - (float)uStack_7c);
  uVar11 = *(ulong *)(param_3 + 0x98);
  puVar14 = (ulong *)(param_3 + 0x98);
  if ((uVar11 & 1) != 0) {
    puVar14 = (ulong *)(uVar11 + 7);
  }
  if (*(int *)(param_3 + 0xa0) == 0) {
    bVar7 = false;
  }
  else {
    puVar3 = puVar14 + *(int *)(param_3 + 0xa0);
    puVar1 = (ulong *)(param_4 + 0x30);
    fVar17 = 3.4028235e+38;
    do {
      uVar11 = *puVar14;
      lVar15 = *param_5;
      FUN_1093ec090(lVar15,param_5[1],*(ulong *)(uVar11 + 0x30) & 0xfffffffffffffffc,&uStack_98);
      if (lVar15 != param_5[1]) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        puVar16 = (ulong *)(uVar11 + 0x18);
        if ((uVar10 & 1) != 0) {
          puVar16 = (ulong *)(uVar10 + 7);
        }
        if (*(int *)(uVar11 + 0x20) != 0) {
          puVar4 = puVar16 + *(int *)(uVar11 + 0x20);
          do {
            ppuVar5 = &PTR_PTR_1132d7ff8;
            if (*(undefined ***)(*puVar16 + 0x28) != (undefined **)0x0) {
              ppuVar5 = *(undefined ***)(*puVar16 + 0x28);
            }
            iVar9 = *(int *)((long)ppuVar5 + 0x1c);
            lVar15 = (long)*(int *)(ppuVar5 + 3);
            if (*(int *)(ppuVar5 + 3) < iVar9) {
              lVar12 = lVar15 * 8;
              do {
                lVar12 = lVar12 + 8;
                uVar11 = *(ulong *)(param_3 + 0x48);
                puVar6 = (ulong *)(param_3 + 0x48);
                if ((uVar11 & 1) != 0) {
                  puVar6 = (ulong *)(uVar11 + lVar12 + -1);
                }
                uVar11 = *puVar6;
                lVar2 = *puVar1 + 7;
                bVar7 = (*puVar1 & 1) != 0;
                puVar6 = puVar1;
                if (bVar7) {
                  puVar6 = (ulong *)(lVar2 + (long)*(int *)(uVar11 + 0x18) * 8);
                }
                uVar10 = *puVar6;
                puVar6 = puVar1;
                if (bVar7) {
                  puVar6 = (ulong *)(lVar2 + (long)*(int *)(uVar11 + 0x1c) * 8);
                }
                uVar13 = *puVar6;
                puVar6 = puVar1;
                if (bVar7) {
                  puVar6 = (ulong *)(lVar2 + (long)*(int *)(uVar11 + 0x20) * 8);
                }
                uVar11 = *puVar6;
                if ((((*(byte *)(uVar10 + 0x28) & 1) != 0) || ((*(byte *)(uVar13 + 0x28) & 1) != 0))
                   || (*(char *)(uVar11 + 0x28) == '\x01')) {
                  fStack_90 = *(float *)(uVar10 + 0x20);
                  uStack_98 = *(undefined8 *)(uVar10 + 0x18);
                  fStack_a0 = *(float *)(uVar13 + 0x20);
                  uStack_a8 = *(undefined8 *)(uVar13 + 0x18);
                  fStack_b0 = *(float *)(uVar11 + 0x20);
                  uStack_b8 = *(undefined8 *)(uVar11 + 0x18);
                  uStack_c0 = 0;
                  fStack_c4 = 0.0;
                  puVar8 = &uStack_7c;
                  FUN_1093e9534(puVar8,&uStack_88,&uStack_98,&uStack_a8,&uStack_b8,&uStack_c0,
                                &fStack_c4);
                  if (((int)puVar8 != 0) && (fStack_c4 < fVar17)) {
                    fVar17 = (1.0 - (float)uStack_c0) - uStack_c0._4_4_;
                    *(ulong *)(param_6 + 0x18) =
                         CONCAT44((float)((ulong)uStack_98 >> 0x20) * fVar17 +
                                  (float)((ulong)uStack_a8 >> 0x20) * (float)uStack_c0 +
                                  (float)((ulong)uStack_b8 >> 0x20) * uStack_c0._4_4_,
                                  (float)uStack_98 * fVar17 + (float)uStack_a8 * (float)uStack_c0 +
                                  (float)uStack_b8 * uStack_c0._4_4_);
                    *(float *)(param_6 + 0x20) =
                         fVar17 * fStack_90 + (float)uStack_c0 * fStack_a0 +
                         uStack_c0._4_4_ * fStack_b0;
                    *(uint *)(param_6 + 0x10) = *(uint *)(param_6 + 0x10) | 7;
                    fVar17 = fStack_c4;
                  }
                  iVar9 = *(int *)((long)ppuVar5 + 0x1c);
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar9);
            }
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar4);
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar3);
    bVar7 = fVar17 < 3.4028235e+38;
  }
  return bVar7;
}



/* Entry: 1093e9534; end: 1093e96e7;  */

undefined8
FUN_1093e9534(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,float *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
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
  
  fVar13 = *param_3;
  fVar11 = param_3[1];
  fVar9 = *param_4 - fVar13;
  fVar8 = param_4[1] - fVar11;
  fVar12 = param_3[2];
  fVar10 = param_4[2] - fVar12;
  fVar4 = *param_5 - fVar13;
  fVar5 = param_5[1] - fVar11;
  fVar6 = param_5[2] - fVar12;
  fVar14 = -(fVar5 * param_2[2]) + fVar6 * param_2[1];
  fVar15 = -(fVar6 * *param_2) + fVar4 * param_2[2];
  fVar16 = -(fVar4 * param_2[1]) + fVar5 * *param_2;
  fVar7 = fVar10 * fVar16 + fVar9 * fVar14 + fVar8 * fVar15;
  if (fVar7 <= 0.0) {
    if (fVar7 < 0.0) {
      fVar13 = *param_1 - fVar13;
      fVar11 = param_1[1] - fVar11;
      fVar12 = param_1[2] - fVar12;
      fVar14 = fVar14 * fVar13 + fVar15 * fVar11 + fVar16 * fVar12;
      *param_6 = fVar14;
      bVar1 = true;
      if ((fVar14 <= 0.0) && (bVar1 = false, !NAN(fVar14) && !NAN(fVar7))) {
        bVar1 = fVar14 < fVar7;
      }
      if (!bVar1) {
        fVar15 = -(fVar8 * fVar12) + fVar10 * fVar11;
        fVar10 = -(fVar10 * fVar13) + fVar9 * fVar12;
        fVar8 = -(fVar9 * fVar11) + fVar8 * fVar13;
        fVar9 = fVar15 * *param_2 + fVar10 * param_2[1] + fVar8 * param_2[2];
        param_6[1] = fVar9;
        bVar1 = true;
        if ((fVar9 <= 0.0) && (bVar1 = false, !NAN(fVar14 + fVar9) && !NAN(fVar7))) {
          bVar1 = fVar14 + fVar9 < fVar7;
        }
        if (!bVar1) goto LAB_1093e96b0;
      }
    }
  }
  else {
    fVar13 = *param_1 - fVar13;
    fVar11 = param_1[1] - fVar11;
    fVar12 = param_1[2] - fVar12;
    fVar14 = fVar14 * fVar13 + fVar15 * fVar11 + fVar16 * fVar12;
    *param_6 = fVar14;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar14) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14) && !NAN(fVar7)) {
        bVar1 = fVar14 < fVar7;
        bVar2 = fVar14 == fVar7;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar15 = -(fVar8 * fVar12) + fVar10 * fVar11;
      fVar10 = -(fVar10 * fVar13) + fVar9 * fVar12;
      fVar8 = -(fVar9 * fVar11) + fVar8 * fVar13;
      fVar9 = fVar15 * *param_2 + fVar10 * param_2[1] + fVar8 * param_2[2];
      param_6[1] = fVar9;
      fVar14 = fVar14 + fVar9;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar9) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar14) && !NAN(fVar7)) {
          bVar1 = fVar14 < fVar7;
          bVar2 = fVar14 == fVar7;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
LAB_1093e96b0:
        fVar7 = 1.0 / fVar7;
        *param_7 = fVar7 * (fVar4 * fVar15 + fVar5 * fVar10 + fVar6 * fVar8);
        *(ulong *)param_6 =
             CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar7,
                      (float)*(undefined8 *)param_6 * fVar7);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1093e96e8; end: 1093e991f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_1093e96e8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    FUN_1093c7e44(param_2,*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
    if (param_2 != 0) {
      plVar1 = (long *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(param_3 + 0x30) != 1) {
        plVar1 = (long *)&DAT_11383d918;
      }
      if (-1 < *(char *)((long)plVar1 + 0x17)) {
        lVar6 = plVar1[1];
        lVar5 = *plVar1;
        param_1[2] = plVar1[2];
        param_1[1] = lVar6;
        *param_1 = lVar5;
        return;
      }
      lVar5 = *plVar1;
      puVar2 = (undefined8 *)plVar1[1];
      if (puVar2 < (undefined8 *)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_1,lVar5,(long)puVar2 + 1);
        return;
      }
      if (puVar2 < (undefined8 *)0x7ffffffffffffff7) {
        lVar6 = 0x19;
        if (((ulong)puVar2 | 7) != 0x17) {
          lVar6 = ((ulong)puVar2 | 7) + 1;
        }
        puVar4 = &UNK_100033e00;
      }
      else {
        puVar4 = &UNK_100033e30;
        lVar6 = lVar5;
        func_0x000104bd47d4();
      }
      puStack_50 = puVar2;
      lStack_48 = lVar5;
      puStack_40 = &stack0xfffffffffffffff0;
      uStack_38 = puVar4;
      func_0x000107c60e20(lVar6);
      return;
    }
    puStack_50 = (undefined8 *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
    if (*(int *)(param_3 + 0x30) != 1) {
      puStack_50 = (undefined8 *)&DAT_11383d918;
    }
    if (*(char *)((long)puStack_50 + 0x17) < '\0') {
      puStack_50 = (undefined8 *)*puStack_50;
    }
    FUN_1093780e0(&lStack_48,&UNK_10f56c12b,&puStack_50);
    FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c0fe,0x89c,&lStack_48);
LAB_1093e9880:
    if (-1 < uStack_38._7_1_) goto LAB_1093e9890;
  }
  else {
    if (*(int *)(param_3 + 0x30) != 2) {
      FUN_10937e740(&lStack_48,&UNK_10f56c14d);
      FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c0fe,0x89f,&lStack_48);
      goto LAB_1093e9880;
    }
    __ZNSt3__19to_stringEi(param_1,*(undefined4 *)(param_3 + 0x28));
    FUN_1093c7e44(param_2,param_1);
    if (param_2 != 0) {
      return;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x28);
    if (*(int *)(param_3 + 0x30) != 2) {
      uVar3 = 0;
    }
    puStack_50 = (undefined8 *)CONCAT44(puStack_50._4_4_,uVar3);
    FUN_1093e9920(&lStack_48,&UNK_10f56c10b,&puStack_50);
    FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c0fe,0x896,&lStack_48);
    if (uStack_38._7_1_ < '\0') {
      __ZdlPv(lStack_48);
    }
    if (-1 < *(char *)((long)param_1 + 0x17)) goto LAB_1093e9890;
    lStack_48 = *param_1;
  }
  __ZdlPv(lStack_48);
LAB_1093e9890:
  func_0x000107c31940(param_1,"");
  return;
}



/* Entry: 1093e9920; end: 1093e9a33;  */

void FUN_1093e9920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_170);
  puStack_68 = &uStack_58;
  uStack_60 = 1;
  uStack_50 = 0x109389420;
  pcStack_48 = FUN_109389470;
  uStack_58 = param_3;
  FUN_10937ad5c(&ppuStack_170,param_2,puStack_68,1);
  FUN_10926dc5c(param_1,&ppuStack_168,&puStack_68);
  appuStack_100[0] = &PTR_DAT_11088d708;
  ppuStack_170 = &PTR_SUB_11088d6e0;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 1093e9a34; end: 1093e9a8b;  */

undefined ** FUN_1093e9a34(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar3 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      if (*(int *)(*puVar3 + 0x1c) == 9) {
        ppuVar4 = *(undefined ***)(*(long *)(*puVar3 + 0x10) + 0x30);
        ppuVar1 = &PTR_PTR_1132d70f0;
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar1 = ppuVar4;
        }
        return ppuVar1;
      }
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return (undefined **)0x0;
}



/* Entry: 1093e9a8c; end: 1093e9bd3;  */

void FUN_1093e9a8c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  char cStack_41;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  uVar4 = *(ulong *)(param_2 + 0x18);
  puVar7 = (ulong *)(param_2 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar7 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar1 = puVar7 + *(int *)(param_2 + 0x20);
    do {
      if (*(int *)(*puVar7 + 0x1c) == 0x11) {
        lVar5 = *(long *)(*puVar7 + 0x10);
        puVar6 = (ulong *)(lVar5 + 0x18);
        uVar4 = *puVar6;
        if ((uVar4 & 1) != 0) {
          puVar6 = (ulong *)(uVar4 + 7);
        }
        iVar3 = *(int *)(lVar5 + 0x20);
        if (iVar3 != 0) {
          lVar5 = (long)iVar3 << 3;
          do {
            uVar4 = *(ulong *)(*puVar6 + 0x18) & 0xfffffffffffffffc;
            cVar2 = *(char *)(uVar4 + 0x17);
            if (cVar2 < '\0') {
              if (*(long *)(uVar4 + 8) != 0) goto LAB_1093e9b28;
            }
            else if (cVar2 != '\0') {
LAB_1093e9b28:
              uVar4 = *(ulong *)(*puVar6 + 0x20) & 0xfffffffffffffffc;
              cVar2 = *(char *)(uVar4 + 0x17);
              if (cVar2 < '\0') {
                if (*(long *)(uVar4 + 8) != 0) goto LAB_1093e9b48;
              }
              else if (cVar2 != '\0') {
LAB_1093e9b48:
                FUN_1093ec120(auStack_70);
                FUN_1093ec574(param_1,auStack_70,auStack_70);
                if (cStack_41 < '\0') {
                  __ZdlPv(uStack_58);
                }
                if (cStack_59 < '\0') {
                  __ZdlPv(auStack_70[0]);
                }
              }
            }
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}



/* Entry: 1093e9bd4; end: 1093e9cdb;  */

void FUN_1093e9bd4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  uVar2 = *(ulong *)(param_2 + 0x30);
  puVar4 = (ulong *)(param_2 + 0x30);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar5 = (long)*(int *)(param_2 + 0x38) << 3;
    do {
      uVar2 = *puVar4;
      if (((*(byte *)(uVar2 + 0x10) & 1) != 0) && (uVar1 = uVar2, FUN_1093e9a34(), uVar1 != 0)) {
        puVar3 = (undefined8 *)(*(ulong *)(uVar2 + 0x48) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_60,*puVar3,puVar3[1]);
        }
        else {
          uStack_58 = puVar3[1];
          uStack_60 = *puVar3;
          lStack_50 = puVar3[2];
        }
        uStack_48 = uVar1;
        FUN_1093ec858(param_1,&uStack_60,&uStack_60);
        if (lStack_50 < 0) {
          __ZdlPv(uStack_60);
        }
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1093e9cdc; end: 1093e9dfb;  */

void FUN_1093e9cdc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_1093e9a8c(auStack_58);
  FUN_1093e9bd4(auStack_80,param_2);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (plVar2 = (long *)lStack_48; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    puVar1 = auStack_80;
    FUN_1093c8914(puVar1,plVar2 + 5);
    if (puVar1 != (undefined1 *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        func_0x000107c3192c(&uStack_a0,plVar2[2],plVar2[3]);
      }
      else {
        uStack_98 = plVar2[3];
        uStack_a0 = plVar2[2];
        lStack_90 = plVar2[4];
      }
      uStack_88 = *(undefined8 *)(puVar1 + 0x28);
      FUN_1093ec858(param_1,&uStack_a0,&uStack_a0);
      if (lStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
    }
  }
  FUN_1093c8898(auStack_80);
  func_0x000104c4f944(auStack_58);
  return;
}



/* Entry: 1093e9dfc; end: 1093e9f17;  */

void FUN_1093e9dfc(undefined4 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_24;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((*(uint *)(param_2 + 0x10) ^ 0xffffffff) & 3) == 0) {
    lVar4 = 0;
    param_1[0xf] = 0x3f800000;
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    param_1[3] = 0;
    param_1[7] = 0;
    param_1[0xb] = 0;
    uVar6 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar1 + 0x18);
    param_1[0xe] = uVar6;
    fVar5 = *(float *)(lVar2 + 0x18);
    fVar7 = *(float *)(lVar2 + 0x1c);
    fVar9 = *(float *)(lVar2 + 0x20);
    fVar8 = *(float *)(lVar2 + 0x24);
    fVar11 = fVar7 + fVar7;
    fVar12 = fVar9 + fVar9;
    fVar13 = fVar8 * (fVar5 + fVar5);
    fVar10 = fVar5 * (fVar5 + fVar5);
    fStack_24 = 1.0 - (fVar7 * fVar11 + fVar9 * fVar12);
    fStack_20 = fVar5 * fVar11 + fVar8 * fVar12;
    fStack_c = fVar8 * fVar11 + fVar5 * fVar12;
    fStack_8 = fVar7 * fVar12 - fVar13;
    afStack_1c[0] = fVar5 * fVar12 - fVar8 * fVar11;
    afStack_1c[1] = fVar5 * fVar11 - fVar8 * fVar12;
    afStack_1c[2] = 1.0 - (fVar10 + fVar9 * fVar12);
    afStack_1c[3] = fVar13 + fVar7 * fVar12;
    fStack_4 = 1.0 - (fVar10 + fVar7 * fVar11);
    puVar3 = param_1 + 2;
    do {
      *(undefined8 *)(puVar3 + -2) = *(undefined8 *)((long)&fStack_24 + lVar4);
      *puVar3 = *(undefined4 *)((long)afStack_1c + lVar4);
      lVar4 = lVar4 + 0xc;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0x24);
    return;
  }
  *param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = 0x3f800000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0x3f800000;
  return;
}



/* Entry: 1093e9f18; end: 1093ea163;  */

/* WARNING: Possible PIC construction at 0x0001093c05c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093c05c8) */

void FUN_1093e9f18(long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  float *pfVar7;
  long unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  undefined8 uStack_a0;
  float afStack_98 [17];
  undefined8 uStack_54;
  float afStack_4c [7];
  
  func_0x0001093c05e0(param_1,param_4);
  lVar4 = 0;
  fVar8 = (float)*param_3;
  fVar9 = *(float *)(param_3 + 2);
  fVar10 = (float)*(undefined8 *)((long)param_3 + 4);
  fVar12 = *(float *)((long)param_3 + 0x14);
  fVar11 = *(float *)(param_3 + 4);
  fVar13 = *(float *)((long)param_3 + 0x24);
  fVar16 = (float)param_3[1];
  fVar14 = *(float *)(param_3 + 3);
  fVar15 = *(float *)(param_3 + 5);
  fVar17 = *(float *)(param_3 + 6);
  fVar18 = *(float *)((long)param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 7);
  pfVar7 = (float *)(param_2 + 8);
  do {
    fVar20 = pfVar7[-2];
    fVar21 = pfVar7[-1];
    fVar22 = *pfVar7;
    *(ulong *)((long)&uStack_54 + lVar4) =
         CONCAT44(fVar9 * fVar20 + fVar12 * fVar21 + fVar14 * fVar22,
                  fVar8 * fVar20 + fVar10 * fVar21 + fVar16 * fVar22);
    *(float *)((long)afStack_4c + lVar4) = fVar11 * fVar20 + fVar13 * fVar21 + fVar15 * fVar22;
    lVar4 = lVar4 + 0xc;
    pfVar7 = pfVar7 + 4;
  } while (lVar4 != 0x24);
  lVar4 = 0;
  pfVar7 = afStack_4c;
  do {
    *(undefined8 *)((long)afStack_98 + lVar4 + -8) = *(undefined8 *)(pfVar7 + -2);
    *(float *)((long)afStack_98 + lVar4) = *pfVar7;
    lVar4 = lVar4 + 0x10;
    pfVar7 = pfVar7 + 3;
  } while (lVar4 != 0x30);
  fVar21 = *(float *)(param_2 + 0x30);
  fVar22 = *(float *)(param_2 + 0x34);
  fVar20 = *(float *)(param_2 + 0x38);
  fVar8 = ((-fVar8 * fVar17 - fVar10 * fVar18) - fVar16 * fVar19) +
          fVar8 * fVar21 + fVar10 * fVar22 + fVar16 * fVar20;
  fVar10 = ((-fVar9 * fVar17 - fVar12 * fVar18) - fVar14 * fVar19) +
           fVar9 * fVar21 + fVar12 * fVar22 + fVar14 * fVar20;
  fVar9 = ((-(fVar15 * fVar19) - fVar13 * fVar18) - fVar11 * fVar17) +
          fVar11 * fVar21 + fVar13 * fVar22 + fVar15 * fVar20;
  fVar11 = (float)((ulong)uStack_a0 >> 0x20);
  if (((*(byte *)(param_4 + 0x10) >> 1 & 1) != 0) && (*(int *)(param_4 + 0x154) == 4)) {
    lVar4 = *(long *)(param_4 + 0xb8);
    fVar13 = *(float *)(lVar4 + 0x20);
    fVar16 = *(float *)(lVar4 + 0x18);
    fVar12 = *(float *)(lVar4 + 0x1c);
    *(ulong *)(lVar4 + 0x18) =
         CONCAT44(fVar10 + fVar11 * fVar16 + SUB84(afStack_98._8_8_,4) * fVar12 +
                           SUB84(afStack_98._24_8_,4) * fVar13,
                  fVar8 + (float)uStack_a0 * fVar16 + (float)afStack_98._8_8_ * fVar12 +
                          (float)afStack_98._24_8_ * fVar13);
    *(float *)(lVar4 + 0x20) =
         fVar9 + afStack_98[0] * fVar16 + afStack_98[4] * fVar12 + afStack_98[8] * fVar13;
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 7;
  }
  if (*(int *)(param_4 + 0x158) == 4) {
    uVar5 = *(ulong *)(param_4 + 0x18);
    puVar6 = (ulong *)(param_4 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_4 + 0x20) != 0) {
      lVar4 = (long)*(int *)(param_4 + 0x20) << 3;
      do {
        uVar5 = *puVar6;
        fVar13 = *(float *)(uVar5 + 0x18);
        fVar16 = *(float *)(uVar5 + 0x20);
        fVar12 = *(float *)(uVar5 + 0x1c);
        *(ulong *)(uVar5 + 0x18) =
             CONCAT44(fVar10 + fVar11 * fVar13 + SUB84(afStack_98._8_8_,4) * fVar12 +
                               SUB84(afStack_98._24_8_,4) * fVar16,
                      fVar8 + (float)uStack_a0 * fVar13 + (float)afStack_98._8_8_ * fVar12 +
                              (float)afStack_98._24_8_ * fVar16);
        *(float *)(uVar5 + 0x20) =
             fVar9 + afStack_98[0] * fVar13 + afStack_98[4] * fVar12 + afStack_98[8] * fVar16;
        *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 7;
        lVar4 = lVar4 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0);
    }
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar3 = *(uint *)(param_4 + 0x10);
    if (((uVar3 >> 1 & 1) != 0) && (*(int *)(param_4 + 0x154) == 4)) {
      lVar4 = *(long *)(param_4 + 0xb8);
      fVar8 = *(float *)(lVar4 + 0x20);
      if (0.0 < fVar8) {
        ppuVar1 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(param_1 + 0x18);
        }
        ppuVar2 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(param_1 + 0x20);
        }
        *(ulong *)(lVar4 + 0x18) =
             CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20)) / fVar8 +
                      (float)((ulong)ppuVar2[3] >> 0x20),
                      (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(lVar4 + 0x18)) / fVar8 +
                      SUB84(ppuVar2[3],0));
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 3;
        uVar3 = *(uint *)(param_4 + 0x10);
      }
      *(undefined4 *)(param_4 + 0x154) = 3;
      uVar3 = uVar3 | 0x2000000;
      *(uint *)(param_4 + 0x10) = uVar3;
    }
    if (*(int *)(param_4 + 0x158) == 4) {
      uVar5 = *(ulong *)(param_4 + 0x18);
      puVar6 = (ulong *)(param_4 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)(uVar5 + 7);
      }
      if (*(int *)(param_4 + 0x20) != 0) {
        lVar4 = (long)*(int *)(param_4 + 0x20) << 3;
        do {
          uVar5 = *puVar6;
          fVar8 = *(float *)(uVar5 + 0x20);
          if (0.0 < fVar8) {
            ppuVar1 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x18);
            }
            ppuVar2 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(param_1 + 0x20);
            }
            *(ulong *)(uVar5 + 0x18) =
                 CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                          (float)((ulong)*(undefined8 *)(uVar5 + 0x18) >> 0x20)) / fVar8 +
                          (float)((ulong)ppuVar2[3] >> 0x20),
                          (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(uVar5 + 0x18)) / fVar8 +
                          SUB84(ppuVar2[3],0));
            *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 3;
          }
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
        uVar3 = *(uint *)(param_4 + 0x10);
      }
      *(undefined4 *)(param_4 + 0x158) = 3;
      uVar3 = uVar3 | 0x4000000;
      *(uint *)(param_4 + 0x10) = uVar3;
    }
    if (*(int *)(param_4 + 0x15c) == 4) {
      uVar5 = *(ulong *)(param_4 + 0x30);
      puVar6 = (ulong *)(param_4 + 0x30);
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)(uVar5 + 7);
      }
      if (*(int *)(param_4 + 0x38) != 0) {
        lVar4 = (long)*(int *)(param_4 + 0x38) << 3;
        do {
          uVar5 = *puVar6;
          fVar8 = *(float *)(uVar5 + 0x20);
          if (0.0 < fVar8) {
            ppuVar1 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x18);
            }
            ppuVar2 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(param_1 + 0x20);
            }
            *(ulong *)(uVar5 + 0x18) =
                 CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                          (float)((ulong)*(undefined8 *)(uVar5 + 0x18) >> 0x20)) / fVar8 +
                          (float)((ulong)ppuVar2[3] >> 0x20),
                          (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(uVar5 + 0x18)) / fVar8 +
                          SUB84(ppuVar2[3],0));
            *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 3;
          }
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
        uVar3 = *(uint *)(param_4 + 0x10);
      }
      *(undefined4 *)(param_4 + 0x15c) = 3;
      *(uint *)(param_4 + 0x10) = uVar3 | 0x8000000;
    }
    uVar5 = *(ulong *)(param_4 + 0x48);
    puVar6 = (ulong *)(param_4 + 0x48);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_4 + 0x50) == 0) break;
    unaff_x21 = (long)*(int *)(param_4 + 0x50) << 3;
    unaff_x20 = puVar6 + 1;
    param_4 = *puVar6;
    unaff_x30 = 0x1093c05c8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = param_1;
  }
  return;
}



/* Entry: 1093ea164; end: 1093ea257;  */

float FUN_1093ea164(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  long lStack_f0;
  undefined ***pppuStack_e8;
  long lStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  ulong auStack_a0 [4];
  undefined1 uStack_80;
  undefined **ppuStack_78;
  ulong auStack_70 [4];
  undefined1 uStack_50;
  undefined1 uStack_41;
  
  ppuStack_78 = &PTR_FUN_110aefb90;
  auStack_70[0] = 0;
  auStack_70[2] = 0;
  auStack_70[3] = 0;
  pppuStack_e8 = &ppuStack_78;
  auStack_70[1] = 0;
  uStack_50 = 0;
  pppuStack_d8 = &ppuStack_a8;
  ppuStack_a8 = &PTR_FUN_110aefb90;
  auStack_a0[0] = 0;
  auStack_a0[2] = 0;
  auStack_a0[3] = 0;
  auStack_a0[1] = 0;
  uStack_80 = 0;
  puStack_c8 = &uStack_41;
  lStack_f0 = param_3;
  lStack_e0 = param_2;
  uStack_d0 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1093ea258(&lStack_f0,*(undefined4 *)(param_2 + 0x164));
  fVar1 = param_1;
  FUN_1093ea258(&lStack_f0,*(undefined4 *)(param_3 + 0x164));
  if ((auStack_a0[0] & 1) != 0) {
    func_0x0001053936ac(auStack_a0);
  }
  if ((auStack_70[0] & 1) != 0) {
    func_0x0001053936ac(auStack_70);
  }
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  return fVar1;
}



/* Entry: 1093ea258; end: 1093ea81b;  */

/* WARNING: Removing unreachable block (ram,0x0001093ea410) */
/* WARNING: Type propagation algorithm not settling */

float FUN_1093ea258(long *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
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
  undefined1 auStack_b8 [8];
  byte abStack_b0 [8];
  uint uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined1 auStack_88 [8];
  byte abStack_80 [8];
  uint uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined1 auStack_58 [24];
  
  lVar9 = *param_1;
  uVar6 = param_1[1];
  if (param_2 == 0xffffffff) {
    if ((*(byte *)(lVar9 + 0x10) >> 1 & 1) == 0) {
      return 3.4028235e+38;
    }
    puVar8 = (ulong *)(lVar9 + 0xb8);
  }
  else {
    if ((int)param_2 < 0) {
      return 3.4028235e+38;
    }
    if (*(int *)(lVar9 + 0x20) <= (int)param_2) {
      return 3.4028235e+38;
    }
    uVar10 = *(ulong *)(lVar9 + 0x18);
    puVar8 = (ulong *)(lVar9 + 0x18);
    if ((uVar10 & 1) != 0) {
      puVar8 = (ulong *)(uVar10 + (ulong)param_2 * 8 + 7);
    }
  }
  uVar10 = *puVar8;
  if (uVar10 != uVar6) {
    func_0x000109340dd8(uVar6);
    func_0x000109340c8c(uVar6,uVar10);
  }
  lVar9 = param_1[2];
  uVar6 = param_1[3];
  if (param_2 == 0xffffffff) {
    if ((*(byte *)(lVar9 + 0x10) >> 1 & 1) == 0) {
      return 3.4028235e+38;
    }
    puVar8 = (ulong *)(lVar9 + 0xb8);
  }
  else {
    if (*(int *)(lVar9 + 0x20) <= (int)param_2) {
      return 3.4028235e+38;
    }
    uVar10 = *(ulong *)(lVar9 + 0x18);
    puVar8 = (ulong *)(lVar9 + 0x18);
    if ((uVar10 & 1) != 0) {
      puVar8 = (ulong *)(uVar10 + (ulong)param_2 * 8 + 7);
    }
  }
  uVar10 = *puVar8;
  if (uVar10 != uVar6) {
    func_0x000109340dd8(uVar6);
    func_0x000109340c8c(uVar6,uVar10);
    lVar9 = param_1[2];
  }
  piVar1 = (int *)(*param_1 + 0x154);
  if (param_2 != 0xffffffff) {
    piVar1 = (int *)(*param_1 + 0x158);
  }
  piVar2 = (int *)(lVar9 + 0x154);
  if (param_2 != 0xffffffff) {
    piVar2 = (int *)(lVar9 + 0x158);
  }
  if (2 < *piVar1 - 1U || 2 < *piVar2 - 1U) {
    FUN_10937e740(auStack_58,&UNK_10f56c2d4);
    FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c2b1,0x183,auStack_58);
    return 3.4028235e+38;
  }
  lVar9 = param_1[4];
  if ((((*(byte *)(lVar9 + 0x10) >> 1 & 1) != 0) || (*(char *)(lVar9 + 0x21) == '\x01')) &&
     (*piVar1 != 3 || *piVar2 != 3)) {
    FUN_10937e740(auStack_58,&UNK_10f56c31a);
    FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c2b1,0x188,auStack_58);
    return 3.4028235e+38;
  }
  lVar11 = param_1[6];
  FUN_109340d10(auStack_88,0,param_1[3]);
  FUN_109340d10(auStack_b8,0,param_1[1]);
  puVar5 = (undefined8 *)param_1[7];
  pfVar7 = (float *)param_1[8];
  fVar12 = (float)((ulong)uStack_70 >> 0x20);
  if ((*(byte *)(lVar9 + 0x10) >> 1 & 1) == 0) {
    if (*(char *)(lVar9 + 0x21) == '\x01') {
      if (0.0 < fStack_68) {
        ppuVar3 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar11 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(lVar11 + 0x18);
        }
        ppuVar4 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar11 + 0x20) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar11 + 0x20);
        }
        uStack_70 = CONCAT44((fStack_68 / (float)((ulong)ppuVar3[3] >> 0x20)) *
                             (fVar12 - (float)((ulong)ppuVar4[3] >> 0x20)),
                             (fStack_68 / SUB84(ppuVar3[3],0)) *
                             ((float)uStack_70 - SUB84(ppuVar4[3],0)));
        uStack_78 = uStack_78 | 3;
      }
      fVar13 = (float)uStack_70;
      fVar15 = (float)((ulong)uStack_70 >> 0x20);
      fVar12 = (float)puVar5[6] +
               (float)*puVar5 * fVar13 + (float)puVar5[2] * fVar15 + (float)puVar5[4] * fStack_68;
      fVar14 = (float)((ulong)puVar5[6] >> 0x20) +
               (float)((ulong)*puVar5 >> 0x20) * fVar13 + (float)((ulong)puVar5[2] >> 0x20) * fVar15
               + (float)((ulong)puVar5[4] >> 0x20) * fStack_68;
      fVar16 = (float)puVar5[7] +
               (float)puVar5[1] * fVar13 + (float)puVar5[3] * fVar15 + (float)puVar5[5] * fStack_68;
      uStack_78 = uStack_78 | 7;
      fVar17 = pfVar7[0xe];
      fVar18 = (float)*(undefined8 *)(pfVar7 + 8);
      fVar20 = (float)*(undefined8 *)(pfVar7 + 0xc);
      fVar19 = (float)((ulong)*(undefined8 *)(pfVar7 + 8) >> 0x20);
      fVar21 = (float)((ulong)*(undefined8 *)(pfVar7 + 0xc) >> 0x20);
      fVar13 = *pfVar7 * fVar12 + pfVar7[1] * fVar14 + pfVar7[2] * fVar16 +
               ((-*pfVar7 * fVar20 - pfVar7[1] * fVar21) - pfVar7[2] * fVar17);
      fVar15 = pfVar7[4] * fVar12 + pfVar7[5] * fVar14 + pfVar7[6] * fVar16 +
               ((-pfVar7[4] * fVar20 - pfVar7[5] * fVar21) - pfVar7[6] * fVar17);
      uStack_70 = CONCAT44(fVar15,fVar13);
      fStack_68 = fVar18 * fVar12 + fVar19 * fVar14 + pfVar7[10] * fVar16 +
                  ((-(pfVar7[10] * fVar17) - fVar19 * fVar21) - fVar18 * fVar20);
      if (0.0 < fStack_68) {
        ppuVar3 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar11 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(lVar11 + 0x18);
        }
        ppuVar4 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar11 + 0x20) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar11 + 0x20);
        }
        uStack_70 = CONCAT44((fVar15 * (float)((ulong)ppuVar3[3] >> 0x20)) / fStack_68 +
                             (float)((ulong)ppuVar4[3] >> 0x20),
                             (fVar13 * SUB84(ppuVar3[3],0)) / fStack_68 + SUB84(ppuVar4[3],0));
        goto LAB_1093ea778;
      }
    }
    else {
LAB_1093ea778:
      if ((((uStack_a8 ^ 0xffffffff) & 3) == 0) && (((uStack_78 ^ 0xffffffff) & 3) == 0)) {
        fVar13 = (float)uStack_70 - (float)uStack_a0;
        fVar12 = (uStack_70._4_4_ - uStack_a0._4_4_) * (uStack_70._4_4_ - uStack_a0._4_4_);
        goto LAB_1093ea7a8;
      }
    }
LAB_1093ea7b0:
    fVar12 = 3.4028235e+38;
  }
  else {
    if (0.0 < fStack_98) {
      ppuVar3 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(lVar11 + 0x18) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(lVar11 + 0x18);
      }
      ppuVar4 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(lVar11 + 0x20) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(lVar11 + 0x20);
      }
      uStack_a0 = CONCAT44((fStack_98 / (float)((ulong)ppuVar3[3] >> 0x20)) *
                           (uStack_a0._4_4_ - (float)((ulong)ppuVar4[3] >> 0x20)),
                           (fStack_98 / SUB84(ppuVar3[3],0)) *
                           ((float)uStack_a0 - SUB84(ppuVar4[3],0)));
      uStack_a8 = uStack_a8 | 3;
    }
    if (0.0 < fStack_68) {
      ppuVar3 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(lVar11 + 0x18) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(lVar11 + 0x18);
      }
      ppuVar4 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(lVar11 + 0x20) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(lVar11 + 0x20);
      }
      uStack_70 = CONCAT44((fStack_68 / (float)((ulong)ppuVar3[3] >> 0x20)) *
                           (fVar12 - (float)((ulong)ppuVar4[3] >> 0x20)),
                           (fStack_68 / SUB84(ppuVar3[3],0)) *
                           ((float)uStack_70 - SUB84(ppuVar4[3],0)));
      uStack_78 = uStack_78 | 3;
    }
    if (*(char *)(lVar9 + 0x21) == '\x01') {
      fVar12 = (float)uStack_a0;
      fVar13 = (float)((ulong)uStack_a0 >> 0x20);
      uStack_a0 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + 0xc) >> 0x20) +
                           (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar12 +
                           (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar13 +
                           (float)((ulong)*(undefined8 *)(pfVar7 + 8) >> 0x20) * fStack_98,
                           (float)*(undefined8 *)(pfVar7 + 0xc) +
                           (float)*(undefined8 *)pfVar7 * fVar12 +
                           (float)*(undefined8 *)(pfVar7 + 4) * fVar13 +
                           (float)*(undefined8 *)(pfVar7 + 8) * fStack_98);
      fStack_98 = (float)*(undefined8 *)(pfVar7 + 0xe) +
                  (float)*(undefined8 *)(pfVar7 + 2) * fVar12 +
                  (float)*(undefined8 *)(pfVar7 + 6) * fVar13 +
                  (float)*(undefined8 *)(pfVar7 + 10) * fStack_98;
      uStack_a8 = uStack_a8 | 7;
      fVar12 = (float)uStack_70;
      fVar13 = (float)((ulong)uStack_70 >> 0x20);
      uStack_70 = CONCAT44((float)((ulong)puVar5[6] >> 0x20) +
                           (float)((ulong)*puVar5 >> 0x20) * fVar12 +
                           (float)((ulong)puVar5[2] >> 0x20) * fVar13 +
                           (float)((ulong)puVar5[4] >> 0x20) * fStack_68,
                           (float)puVar5[6] +
                           (float)*puVar5 * fVar12 + (float)puVar5[2] * fVar13 +
                           (float)puVar5[4] * fStack_68);
      fStack_68 = (float)puVar5[7] +
                  (float)puVar5[1] * fVar12 + (float)puVar5[3] * fVar13 +
                  (float)puVar5[5] * fStack_68;
      uStack_78 = uStack_78 | 7;
    }
    else if ((((uStack_a8 ^ 0xffffffff) & 7) != 0) || (((uStack_78 ^ 0xffffffff) & 7) != 0))
    goto LAB_1093ea7b0;
    fVar13 = fStack_68 - fStack_98;
    fVar12 = (uStack_70._4_4_ - uStack_a0._4_4_) * (uStack_70._4_4_ - uStack_a0._4_4_) +
             ((float)uStack_70 - (float)uStack_a0) * ((float)uStack_70 - (float)uStack_a0);
LAB_1093ea7a8:
    fVar12 = fVar12 + fVar13 * fVar13;
  }
  if ((abStack_b0[0] & 1) != 0) {
    func_0x0001053936ac(abStack_b0);
  }
  if ((abStack_80[0] & 1) != 0) {
    func_0x0001053936ac(abStack_80);
    return fVar12;
  }
  return fVar12;
}



/* Entry: 1093ea81c; end: 1093ea937;  */

undefined8 FUN_1093ea81c(ulong param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  puVar6 = (ulong *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar7 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar7 == uVar1) {
    puVar8 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar8 = puVar6;
    }
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar2 = param_2;
    }
    _memcmp(puVar8,plVar2);
    if (((int)puVar8 == 0) && ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0)) {
LAB_1093ea930:
      return *(undefined8 *)(param_1 + 0xd0);
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x60);
  puVar6 = (ulong *)(param_1 + 0x60);
  if ((uVar7 & 1) != 0) {
    puVar6 = (ulong *)(uVar7 + 7);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar2 = param_2;
    }
    lVar9 = (long)*(int *)(param_1 + 0x68) << 3;
    do {
      param_1 = *puVar6;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      bVar3 = *(byte *)((long)puVar8 + 0x17);
      uVar7 = puVar8[1];
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
      }
      if (uVar7 == uVar1) {
        puVar5 = (ulong *)*puVar8;
        if (-1 < (char)bVar3) {
          puVar5 = puVar8;
        }
        _memcmp(puVar5,plVar2,uVar1);
        if (((int)puVar5 == 0) && ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0)) goto LAB_1093ea930;
      }
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return 0;
}



/* Entry: 1093ea938; end: 1093eaa5f;  */

void FUN_1093ea938(long *param_1,long param_2,uint *param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar3 = *param_3;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093c933c(param_1,(long)(int)uVar3,3);
  uVar4 = (ulong)*param_3;
  if (0 < (int)*param_3) {
    uVar6 = *(ulong *)(param_2 + 0x30);
    puVar7 = (undefined4 *)*param_1;
    lVar2 = param_1[1];
    puVar5 = *(uint **)(param_3 + 2);
    do {
      uVar3 = *puVar5;
      if (((int)uVar3 < 0) || (*(int *)(param_2 + 0x38) <= (int)uVar3)) {
        FUN_10937e740(auStack_48,&UNK_10f56c1a2);
        FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c17f,0x933,auStack_48);
        if (-1 < cStack_31) {
          return;
        }
        __ZdlPv(auStack_48[0]);
        return;
      }
      puVar1 = (ulong *)(param_2 + 0x30);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + 7 + (ulong)uVar3 * 8);
      }
      uVar8 = *puVar1;
      *puVar7 = *(undefined4 *)(uVar8 + 0x18);
      puVar7[lVar2] = *(undefined4 *)(uVar8 + 0x1c);
      puVar7[lVar2 * 2] = *(undefined4 *)(uVar8 + 0x20);
      puVar7 = puVar7 + 1;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 1093eaa60; end: 1093eabb3;  */

void FUN_1093eaa60(long *param_1,int *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (0 < *param_2) {
    lVar4 = 0;
    puVar1 = (ulong *)(param_3 + 0x30);
    do {
      uVar3 = *(uint *)(*(long *)(param_2 + 2) + lVar4 * 4);
      uVar5 = (ulong)uVar3;
      if (((int)uVar3 < 0) || (*(int *)(param_3 + 0x38) <= (int)uVar3)) {
        FUN_10937e740(auStack_38,&UNK_10f56c1f7);
        FUN_109388c6c(1,&UNK_10f56baee,&UNK_10f56c1d3,0x942,auStack_38);
        if (-1 < cStack_21) {
          return;
        }
        __ZdlPv(auStack_38[0]);
        return;
      }
      puVar2 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar2 = (ulong *)(*puVar1 + uVar5 * 8 + 7);
      }
      uVar6 = *puVar2;
      *(undefined4 *)(uVar6 + 0x18) = *(undefined4 *)(*param_1 + lVar4 * 4);
      *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) | 1;
      puVar2 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar2 = (ulong *)(*puVar1 + uVar5 * 8 + 7);
      }
      uVar6 = *puVar2;
      *(undefined4 *)(uVar6 + 0x1c) = *(undefined4 *)(*param_1 + param_1[1] * 4 + lVar4 * 4);
      *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) | 2;
      puVar2 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar2 = (ulong *)(*puVar1 + uVar5 * 8 + 7);
      }
      uVar5 = *puVar2;
      *(undefined4 *)(uVar5 + 0x20) = *(undefined4 *)(*param_1 + param_1[1] * 8 + lVar4 * 4);
      *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 4;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *param_2);
  }
  return;
}



/* Entry: 1093eabb4; end: 1093eb34f;  */

void FUN_1093eabb4(long param_1,long *param_2,long *param_3,float *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  float *pfVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  int *piVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined4 *puVar27;
  long lVar28;
  float *pfVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  undefined4 *puVar38;
  float *pfVar39;
  long lVar40;
  undefined *puVar41;
  long lVar42;
  float *pfVar43;
  undefined **ppuVar44;
  float *pfVar45;
  undefined *puVar46;
  undefined *puVar47;
  float *pfVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  undefined8 uVar58;
  undefined8 uVar59;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  int *piStack_98;
  long lStack_90;
  float *pfStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar44 = &PTR_PTR_1132d8038;
  if (*(undefined ***)(param_1 + 0xa8) != (undefined **)0x0) {
    ppuVar44 = *(undefined ***)(param_1 + 0xa8);
  }
  uVar30 = (ulong)*(int *)((long)ppuVar44 + 0x54);
  iVar9 = *(int *)(ppuVar44 + 0xb);
  puVar41 = ppuVar44[9];
  puVar46 = ppuVar44[6];
  puVar47 = ppuVar44[4];
  ppuVar44 = &PTR_PTR_1132d7fa0;
  if (*(undefined ***)(param_1 + 0xb0) != (undefined **)0x0) {
    ppuVar44 = *(undefined ***)(param_1 + 0xb0);
  }
  pfVar43 = (float *)ppuVar44[4];
  iVar6 = *(int *)(ppuVar44 + 5);
  piVar19 = (int *)(long)iVar6;
  iVar10 = *(int *)((long)ppuVar44 + 0x2c);
  pfVar21 = (float *)(long)iVar10;
  pfVar45 = *(float **)(param_1 + 0x80);
  lStack_c8 = 0;
  uStack_c0 = 0;
  pfVar20 = (float *)0x3;
  FUN_1093c933c(&lStack_c8,uVar30);
  if (uStack_c0 != uVar30) {
    pfVar20 = (float *)0x3;
    FUN_1093c933c(&lStack_c8,uVar30);
    uVar30 = uStack_c0;
  }
  if (0 < (long)uVar30) {
    _bzero(lStack_c8,uVar30 * 0xc);
  }
  lVar24 = 0;
  lVar22 = *param_2;
  lVar42 = param_2[1];
  do {
    if (0 < iVar9) {
      lVar28 = 0;
      lVar40 = lStack_c8 + uStack_c0 * lVar24 * 4;
      do {
        iVar7 = *(int *)(puVar41 + lVar28 * 4);
        lVar8 = (long)iVar7;
        iVar11 = *(int *)((long)(puVar41 + lVar28 * 4) + 4);
        if (iVar7 < iVar11) {
          fVar49 = *(float *)(lVar22 + lVar24 * lVar42 * 4 + lVar28 * 4);
          lVar32 = iVar11 - lVar8;
          piVar34 = (int *)(puVar46 + lVar8 * 4);
          pfVar26 = (float *)(puVar47 + lVar8 * 4);
          do {
            *(float *)(lVar40 + (long)*piVar34 * 4) =
                 *(float *)(lVar40 + (long)*piVar34 * 4) + fVar49 * *pfVar26;
            lVar32 = lVar32 + -1;
            piVar34 = piVar34 + 1;
            pfVar26 = pfVar26 + 1;
          } while (lVar32 != 0);
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != iVar9);
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 3);
  pfVar26 = (float *)*param_3;
  pfVar48 = (float *)param_3[1];
  pfVar29 = (float *)(lStack_c8 + (uStack_c0 - (long)pfVar48) * 4);
  if (((ulong)pfVar29 & 3) == 0) {
    lVar24 = 0;
    pfVar35 = (float *)((ulong)-((uint)pfVar29 >> 2) & 3);
    if ((long)pfVar48 <= (long)pfVar35) {
      pfVar35 = pfVar48;
    }
    do {
      pfVar16 = pfVar26;
      pfVar37 = pfVar35;
      pfVar20 = pfVar35;
      pfVar36 = pfVar29;
      pfVar39 = pfVar45;
      if (0 < (long)pfVar35) {
        do {
          *pfVar36 = *pfVar39 * *pfVar16;
          pfVar37 = (float *)((long)pfVar37 - 1);
          pfVar20 = (float *)0x0;
          pfVar16 = pfVar16 + 1;
          pfVar36 = pfVar36 + 1;
          pfVar39 = pfVar39 + 1;
        } while (pfVar37 != (float *)0x0);
      }
      lVar22 = ((long)pfVar48 - (long)pfVar35 & 0xfffffffffffffffcU) + (long)pfVar35;
      if (3 < (long)pfVar48 - (long)pfVar35) {
        lVar42 = (long)pfVar35 << 2;
        pfVar37 = pfVar35;
        do {
          uVar59 = ((undefined8 *)((long)pfVar26 + lVar42))[1];
          uVar58 = *(undefined8 *)((long)pfVar26 + lVar42);
          auVar54 = *(undefined1 (*) [16])((long)pfVar45 + lVar42);
          ((undefined8 *)((long)pfVar29 + lVar42))[1] =
               CONCAT44((float)((ulong)uVar59 >> 0x20) * auVar54._12_4_,
                        (float)uVar59 * auVar54._8_4_);
          *(undefined8 *)((long)pfVar29 + lVar42) =
               CONCAT44((float)((ulong)uVar58 >> 0x20) * auVar54._4_4_,(float)uVar58 * auVar54._0_4_
                       );
          pfVar37 = pfVar37 + 1;
          lVar42 = lVar42 + 0x10;
        } while ((long)pfVar37 < lVar22);
      }
      for (; lVar22 < (long)pfVar48; lVar22 = lVar22 + 1) {
        pfVar29[lVar22] = pfVar45[lVar22] * pfVar26[lVar22];
      }
      uVar30 = (long)pfVar35 + ((ulong)(uint)-(int)uStack_c0 & 3);
      pfVar37 = (float *)(uVar30 & 3);
      uVar30 = -uVar30;
      if (-1 < (long)uVar30) {
        pfVar37 = (float *)-(uVar30 & 3);
      }
      pfVar35 = pfVar48;
      if ((long)pfVar37 <= (long)pfVar48) {
        pfVar35 = pfVar37;
      }
      lVar24 = lVar24 + 1;
      pfVar26 = pfVar26 + (long)pfVar48;
      pfVar29 = pfVar29 + uStack_c0;
    } while (lVar24 != 3);
  }
  else {
    lVar24 = 0;
    lVar22 = lStack_c8 + uStack_c0 * 4;
    do {
      pfVar29 = pfVar45;
      pfVar35 = pfVar26;
      lVar42 = -(long)pfVar48;
      if (0 < (long)pfVar48) {
        do {
          *(float *)(lVar22 + lVar42 * 4) = *pfVar29 * *pfVar35;
          bVar15 = lVar42 != -1;
          lVar42 = lVar42 + 1;
          pfVar29 = pfVar29 + 1;
          pfVar35 = pfVar35 + 1;
        } while (bVar15);
      }
      lVar24 = lVar24 + 1;
      pfVar26 = pfVar26 + (long)pfVar48;
      lVar22 = lVar22 + uStack_c0 * 4;
    } while (lVar24 != 3);
  }
  uStack_b8 = (float *)0x0;
  piStack_b0 = (int *)0x0;
  if (iVar6 == 0) {
    if (0xf < uStack_c0 - 1) goto LAB_1093eb098;
    piVar19 = (int *)0x0;
  }
  else {
    pfVar20 = (float *)0x3;
    FUN_1093c933c(&uStack_b8);
    piVar34 = piStack_b0;
    if (((long)uStack_c0 < 1) || (0x10 < (long)(uStack_c0 + (long)piStack_b0))) {
      if (0 < (long)piStack_b0) {
        _bzero(uStack_b8,(long)piStack_b0 * 0xc);
      }
      if (iVar10 != 0) {
        if (piVar34 == (int *)0x1) {
          param_4 = uStack_b8;
          FUN_1093ecc98(0x3f800000,&lStack_c8,pfVar43,pfVar21,uStack_b8,&uStack_b8);
          pfVar20 = pfVar21;
        }
        else {
          plStack_a8 = (long *)0x0;
          uStack_a0 = 0;
          piStack_98 = piVar34;
          lStack_90 = 3;
          pfStack_88 = pfVar21;
          FUN_1093ecdf0(&pfStack_88,&piStack_98,&lStack_90,1);
          lStack_80 = (long)pfStack_88 * (long)piStack_98;
          lStack_78 = lStack_90 * (long)pfStack_88;
          FUN_1093ed160(0x3f800000,piVar19,3,pfVar21,pfVar43,pfVar21,lStack_c8,uStack_c0,uStack_b8,1
                        ,piStack_b0,&plStack_a8,0);
          _free(plStack_a8);
          _free(uStack_a0);
          pfVar20 = pfVar21;
          param_4 = pfVar43;
        }
      }
      goto LAB_1093eb098;
    }
    if (piStack_b0 != piVar19) {
      FUN_1093c933c(&uStack_b8,piVar19,3);
      piVar19 = piStack_b0;
    }
  }
  lVar24 = 0;
  uVar30 = uStack_c0 + 7;
  if (-1 < (long)uStack_c0) {
    uVar30 = uStack_c0;
  }
  uVar30 = uVar30 & 0xfffffffffffffff8;
  uVar3 = uStack_c0 + 3;
  if (-1 < (long)uStack_c0) {
    uVar3 = uStack_c0;
  }
  uVar33 = uVar3 & 0xfffffffffffffffc;
  puVar25 = (undefined8 *)(lStack_c8 + 0x30);
  pfVar20 = (float *)(lStack_c8 + (uVar3 & 0x3ffffffffffffffc) * 4);
  pfVar45 = (float *)(lStack_c8 + 4);
  piVar34 = piVar19;
  do {
    if (0 < (long)piVar34) {
      lVar22 = 0;
      pfVar26 = (float *)(lStack_c8 + lVar24 * uStack_c0 * 4);
      param_4 = pfVar43 + (uVar3 & 0x3ffffffffffffffc);
      pfVar29 = pfVar43 + 0xc;
      pfVar48 = pfVar43 + 1;
      do {
        if (uStack_c0 == 0) {
          fVar49 = 0.0;
        }
        else {
          pfVar35 = pfVar43 + lVar22 * (long)pfVar21;
          piVar34 = piStack_b0;
          if (uStack_c0 + 3 < 7) {
            fVar49 = *pfVar35 * *pfVar26;
            pfVar35 = pfVar48;
            pfVar37 = pfVar45;
            lVar42 = uStack_c0 - 1;
            if (1 < (long)uStack_c0) {
              do {
                fVar49 = fVar49 + *pfVar35 * *pfVar37;
                lVar42 = lVar42 + -1;
                pfVar35 = pfVar35 + 1;
                pfVar37 = pfVar37 + 1;
              } while (lVar42 != 0);
            }
          }
          else {
            fVar49 = (float)*(undefined8 *)pfVar35 * *pfVar26;
            fVar50 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) * pfVar26[1];
            fVar51 = (float)*(undefined8 *)(pfVar35 + 2) * pfVar26[2];
            fVar52 = (float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) * pfVar26[3];
            if (7 < (long)uStack_c0) {
              fVar53 = pfVar35[4] * (float)*(undefined8 *)(pfVar26 + 4);
              fVar55 = pfVar35[5] * (float)((ulong)*(undefined8 *)(pfVar26 + 4) >> 0x20);
              fVar56 = pfVar35[6] * (float)*(undefined8 *)(pfVar26 + 6);
              fVar57 = pfVar35[7] * (float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20);
              if (0xf < uStack_c0) {
                lVar42 = 8;
                puVar31 = puVar25;
                pfVar37 = pfVar29;
                do {
                  fVar49 = fVar49 + (float)*(undefined8 *)(pfVar37 + -4) * (float)puVar31[-2];
                  fVar50 = fVar50 + (float)((ulong)*(undefined8 *)(pfVar37 + -4) >> 0x20) *
                                    (float)((ulong)puVar31[-2] >> 0x20);
                  fVar51 = fVar51 + (float)*(undefined8 *)(pfVar37 + -2) * (float)puVar31[-1];
                  fVar52 = fVar52 + (float)((ulong)*(undefined8 *)(pfVar37 + -2) >> 0x20) *
                                    (float)((ulong)puVar31[-1] >> 0x20);
                  fVar53 = fVar53 + (float)*(undefined8 *)pfVar37 * (float)*puVar31;
                  fVar55 = fVar55 + (float)((ulong)*(undefined8 *)pfVar37 >> 0x20) *
                                    (float)((ulong)*puVar31 >> 0x20);
                  fVar56 = fVar56 + (float)*(undefined8 *)(pfVar37 + 2) * (float)puVar31[1];
                  fVar57 = fVar57 + (float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) *
                                    (float)((ulong)puVar31[1] >> 0x20);
                  lVar42 = lVar42 + 8;
                  puVar31 = puVar31 + 4;
                  pfVar37 = pfVar37 + 8;
                } while (lVar42 < (long)uVar30);
              }
              fVar49 = fVar53 + fVar49;
              fVar50 = fVar55 + fVar50;
              fVar51 = fVar56 + fVar51;
              fVar52 = fVar57 + fVar52;
              if ((long)uVar30 < (long)uVar33) {
                pfVar35 = pfVar35 + uVar30;
                uVar59 = *(undefined8 *)(pfVar26 + uVar30 + 2);
                uVar58 = *(undefined8 *)(pfVar26 + uVar30);
                fVar49 = fVar49 + *pfVar35 * (float)uVar58;
                fVar50 = fVar50 + pfVar35[1] * (float)((ulong)uVar58 >> 0x20);
                fVar51 = fVar51 + pfVar35[2] * (float)uVar59;
                fVar52 = fVar52 + pfVar35[3] * (float)((ulong)uVar59 >> 0x20);
              }
            }
            auVar54._4_4_ = fVar50;
            auVar54._0_4_ = fVar49;
            auVar54._8_4_ = fVar51;
            auVar54._12_4_ = fVar52;
            auVar14._4_4_ = fVar50;
            auVar14._0_4_ = fVar49;
            auVar14._8_4_ = fVar51;
            auVar14._12_4_ = fVar52;
            auVar54 = NEON_ext(auVar54,auVar14,8,1);
            fVar49 = fVar49 + auVar54._0_4_ + fVar50 + auVar54._4_4_;
            pfVar35 = param_4;
            pfVar37 = pfVar20;
            lVar42 = (long)uStack_c0 % 4;
            if (uStack_c0 != uVar33 && (long)uStack_c0 % 4 < 0 == SBORROW8(uStack_c0,uVar33)) {
              do {
                fVar49 = fVar49 + *pfVar35 * *pfVar37;
                lVar42 = lVar42 + -1;
                pfVar35 = pfVar35 + 1;
                pfVar37 = pfVar37 + 1;
              } while (lVar42 != 0);
            }
          }
        }
        uStack_b8[lVar24 * (long)piVar19 + lVar22] = fVar49;
        lVar22 = lVar22 + 1;
        pfVar29 = pfVar29 + (long)pfVar21;
        param_4 = param_4 + (long)pfVar21;
        pfVar48 = pfVar48 + (long)pfVar21;
      } while (lVar22 < (long)piVar34);
    }
    lVar24 = lVar24 + 1;
    puVar25 = (undefined8 *)((long)puVar25 + uStack_c0 * 4);
    pfVar20 = pfVar20 + uStack_c0;
    pfVar45 = pfVar45 + uStack_c0;
  } while (lVar24 != 3);
LAB_1093eb098:
  pfVar21 = uStack_b8;
  piVar19 = piStack_b0;
  if ((int *)param_2[1] != piStack_b0) {
    pfVar20 = (float *)0x3;
    FUN_1093c933c(param_2);
    piVar19 = (int *)param_2[1];
  }
  puVar25 = (undefined8 *)*param_2;
  uVar3 = (long)piVar19 * 3;
  uVar30 = uVar3 + 3;
  if (-1 < (long)uVar3) {
    uVar30 = uVar3;
  }
  if (1 < (long)piVar19) {
    lVar24 = 0;
    puVar31 = puVar25;
    pfVar43 = pfVar21;
    do {
      uVar58 = *(undefined8 *)pfVar43;
      puVar31[1] = *(undefined8 *)(pfVar43 + 2);
      *puVar31 = uVar58;
      lVar24 = lVar24 + 4;
      puVar31 = puVar31 + 2;
      pfVar43 = pfVar43 + 4;
    } while (lVar24 < (long)(uVar30 & 0xfffffffffffffffc));
  }
  lVar24 = (long)uVar3 % 4;
  if (lVar24 != 0 && (long)(uVar30 & 0xfffffffffffffffc) <= (long)uVar3) {
    pfVar43 = (float *)(puVar25 + ((long)uVar30 >> 2) * 2);
    pfVar21 = pfVar21 + ((long)uVar30 >> 2) * 4;
    do {
      *pfVar43 = *pfVar21;
      lVar24 = lVar24 + -1;
      pfVar43 = pfVar43 + 1;
      pfVar21 = pfVar21 + 1;
    } while (lVar24 != 0);
  }
  _free(uStack_b8);
  FUN_1093ed64c(&uStack_b8,param_1 + 0x60);
  puVar25 = &uStack_b8;
  plStack_a8 = param_2;
  FUN_1093ed64c(&uStack_a0);
  if ((0 < uStack_b8._4_4_) && (*(long *)(piStack_b0 + -2) == 0)) {
    __ZdlPv();
  }
  lVar24 = 0;
  puVar27 = (undefined4 *)*param_3;
  lVar42 = param_3[1];
  lVar22 = *plStack_a8;
  lVar28 = plStack_a8[1];
  do {
    if (0 < (int)uStack_a0) {
      piVar19 = piStack_98;
      puVar38 = puVar27;
      lVar40 = (long)(int)uStack_a0;
      do {
        puVar25 = (undefined8 *)(long)*piVar19;
        *(undefined4 *)(lVar22 + lVar24 * lVar28 * 4 + (long)puVar25 * 4) = *puVar38;
        lVar40 = lVar40 + -1;
        piVar19 = piVar19 + 1;
        puVar38 = puVar38 + 1;
      } while (lVar40 != 0);
    }
    lVar24 = lVar24 + 1;
    puVar27 = puVar27 + lVar42;
  } while (lVar24 != 3);
  if ((0 < uStack_a0._4_4_) && (*(long *)(piStack_98 + -2) == 0)) {
    __ZdlPv();
  }
  lVar24 = lStack_c8;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _free(plStack_a8);
  _free(uStack_a0);
  _free(uStack_b8);
  _free(lStack_c8);
  __Unwind_Resume();
  if (((int)param_4 == 0) || ((*(byte *)((long)puVar25 + 0x13c) & 1) != 0)) {
    uVar23 = *(uint *)(lVar24 + 0x10);
    if (((uVar23 >> 0x10 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x12) & 1) != 0)) {
      pfVar20[0x4c] = *(float *)(puVar25 + 0x26);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x10000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 & 1) != 0) && ((*(byte *)(puVar25 + 2) & 1) != 0)) {
      if ((puVar25[0x16] & 3) == 0) {
        ppuVar44 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar44 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0(&PTR_DAT_1132d0698);
        }
      }
      else {
        ppuVar44 = (undefined **)(puVar25[0x16] & 0xfffffffffffffffc);
      }
      pfVar20[4] = (float)((uint)pfVar20[4] | 1);
      uVar30 = *(ulong *)(pfVar20 + 2);
      if ((uVar30 & 1) != 0) {
        uVar30 = *(ulong *)(uVar30 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(pfVar20 + 0x2c,ppuVar44,uVar30);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x1d & 1) != 0) && ((*(byte *)((long)puVar25 + 0x13) >> 5 & 1) != 0)) {
      pfVar20[0x59] = *(float *)((long)puVar25 + 0x164);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x20000000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x11 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x12) >> 1 & 1) != 0)) {
      pfVar20[0x4d] = *(float *)((long)puVar25 + 0x134);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x20000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x12 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x12) >> 2 & 1) != 0)) {
      pfVar20[0x4e] = *(float *)(puVar25 + 0x27);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x40000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x13 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x12) >> 3 & 1) != 0)) {
      *(undefined1 *)(pfVar20 + 0x4f) = *(undefined1 *)((long)puVar25 + 0x13c);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x80000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 1 & 1) != 0) && ((*(byte *)(puVar25 + 2) >> 1 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 2);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x2e);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x0001093416e0();
        *(undefined ***)(pfVar20 + 0x2e) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132d8ba0;
      if ((undefined **)puVar25[0x17] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x17];
      }
      if (ppuVar18 != ppuVar44) {
        func_0x000109340dd8(ppuVar44);
        func_0x000109340c8c(ppuVar44,ppuVar18);
      }
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x19 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x13) >> 1 & 1) != 0)) {
      pfVar20[0x55] = *(float *)((long)puVar25 + 0x154);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x2000000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 2 & 1) != 0) && ((*(byte *)(puVar25 + 2) >> 2 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 4);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x30);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x000109312344();
        *(undefined ***)(pfVar20 + 0x30) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132cfa58;
      if ((undefined **)puVar25[0x18] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x18];
      }
      if (ppuVar18 != ppuVar44) {
        FUN_109308454(ppuVar44);
        FUN_1093086e0(ppuVar44,ppuVar18);
      }
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 5 & 1) != 0) && ((*(byte *)(puVar25 + 2) >> 5 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x20);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x36);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x0001093121f0();
        *(undefined ***)(pfVar20 + 0x36) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132cf958;
      if ((undefined **)puVar25[0x1b] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x1b];
      }
      if (ppuVar18 != ppuVar44) {
        FUN_10930894c(ppuVar44);
        FUN_109308c48(ppuVar44,ppuVar18);
      }
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0xb & 1) != 0) && ((*(byte *)((long)puVar25 + 0x11) >> 3 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x800);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x42);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x000109312344();
        *(undefined ***)(pfVar20 + 0x42) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132cfa58;
      if ((undefined **)puVar25[0x21] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x21];
      }
      if (ppuVar18 != ppuVar44) {
        FUN_109308454(ppuVar44);
        FUN_1093086e0(ppuVar44,ppuVar18);
      }
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0xc & 1) != 0) && ((*(byte *)((long)puVar25 + 0x11) >> 4 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x1000);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x44);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x0001093121f0();
        *(undefined ***)(pfVar20 + 0x44) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132cf958;
      if ((undefined **)puVar25[0x22] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x22];
      }
      if (ppuVar18 != ppuVar44) {
        FUN_10930894c(ppuVar44);
        FUN_109308c48(ppuVar44,ppuVar18);
      }
    }
    if ((0 < *(int *)(lVar24 + 0x20)) && (0 < *(int *)(puVar25 + 4))) {
      FUN_1093c87cc(pfVar20 + 6,puVar25 + 3);
    }
    if (((*(byte *)(lVar24 + 0x13) >> 2 & 1) != 0) &&
       ((*(byte *)((long)puVar25 + 0x13) >> 2 & 1) != 0)) {
      pfVar20[0x56] = *(float *)(puVar25 + 0x2b);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x4000000);
    }
    if ((0 < *(int *)(lVar24 + 0x38)) && (0 < *(int *)(puVar25 + 7))) {
      FUN_1093c87cc(pfVar20 + 0xc,puVar25 + 6);
    }
    uVar23 = *(uint *)(lVar24 + 0x10);
    if (((uVar23 >> 0x1b & 1) != 0) && ((*(byte *)((long)puVar25 + 0x13) >> 3 & 1) != 0)) {
      pfVar20[0x57] = *(float *)((long)puVar25 + 0x15c);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x8000000);
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 4 & 1) != 0) && ((*(byte *)(puVar25 + 2) >> 4 & 1) != 0)) {
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x10);
      ppuVar44 = *(undefined ***)(pfVar20 + 0x34);
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = *(undefined ***)(pfVar20 + 2);
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x00010933b59c();
        *(undefined ***)(pfVar20 + 0x34) = ppuVar44;
      }
      ppuVar18 = &PTR_PTR_1132d6de0;
      if ((undefined **)puVar25[0x1a] != (undefined **)0x0) {
        ppuVar18 = (undefined **)puVar25[0x1a];
      }
      if (ppuVar18 != ppuVar44) {
        func_0x000109338834(ppuVar44);
        FUN_10933aa98(ppuVar44,ppuVar18);
      }
      uVar23 = *(uint *)(lVar24 + 0x10);
    }
    if (((uVar23 >> 0x1c & 1) != 0) && ((*(byte *)((long)puVar25 + 0x13) >> 4 & 1) != 0)) {
      pfVar20[0x58] = *(float *)(puVar25 + 0x2c);
      pfVar20[4] = (float)((uint)pfVar20[4] | 0x10000000);
    }
    if (0 < *(int *)(puVar25 + 10)) {
      lVar22 = 0;
      puVar1 = puVar25 + 9;
      puVar2 = (ulong *)(lVar24 + 0x48);
      pfVar21 = pfVar20 + 0x12;
      pfVar43 = param_4;
LAB_1093eb884:
      puVar4 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar4 = (ulong *)(*puVar1 + lVar22 * 8 + 7);
      }
      if ((*(ulong *)(*puVar4 + 0xb0) & 3) == 0) {
        ppuVar44 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar44 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0();
        }
      }
      else {
        ppuVar44 = (undefined **)(*(ulong *)(*puVar4 + 0xb0) & 0xfffffffffffffffc);
      }
      if (0 < *(int *)(lVar24 + 0x50)) {
        lVar42 = 0;
        lVar28 = 8;
        do {
          puVar4 = puVar2;
          if ((*puVar2 & 1) != 0) {
            puVar4 = (ulong *)(*puVar2 + lVar28 + -1);
          }
          if ((*(byte *)(*puVar4 + 0x10) & 1) != 0) {
            uVar30 = *(ulong *)(*puVar4 + 0xb0);
            if ((uVar30 & 3) == 0) {
              ppuVar18 = ppuRam00000001132d06b0;
              if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                ppuVar18 = &PTR_DAT_1132d0698;
                func_0x00010b4befb0();
              }
            }
            else {
              ppuVar18 = (undefined **)(uVar30 & 0xfffffffffffffffc);
            }
            bVar12 = *(byte *)((long)ppuVar18 + 0x17);
            puVar41 = ppuVar18[1];
            if (-1 < (char)bVar12) {
              puVar41 = (undefined *)(ulong)bVar12;
            }
            bVar13 = *(byte *)((long)ppuVar44 + 0x17);
            puVar46 = ppuVar44[1];
            if (-1 < (char)bVar13) {
              puVar46 = (undefined *)(ulong)bVar13;
            }
            if (puVar41 == puVar46) {
              ppuVar17 = (undefined **)*ppuVar18;
              if (-1 < (char)bVar12) {
                ppuVar17 = ppuVar18;
              }
              ppuVar18 = (undefined **)*ppuVar44;
              if (-1 < (char)bVar13) {
                ppuVar18 = ppuVar44;
              }
              _memcmp(ppuVar17,ppuVar18);
              if ((int)ppuVar17 == 0) {
                uVar30 = *puVar1;
                if (((ulong)pfVar43 & 1) != 0) {
                  puVar4 = puVar1;
                  if ((uVar30 & 1) != 0) {
                    puVar4 = (ulong *)((uVar30 - 1) + lVar22 * 8 + 8);
                  }
                  if (*(char *)(*puVar4 + 0x13c) != '\x01') break;
                }
                puVar4 = puVar1;
                if ((uVar30 & 1) != 0) {
                  puVar4 = (ulong *)((uVar30 - 1) + lVar22 * 8 + 8);
                }
                if ((*(ulong *)(*puVar4 + 0xb0) & 3) == 0) {
                  ppuVar44 = ppuRam00000001132d06b0;
                  if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                    ppuVar44 = &PTR_DAT_1132d0698;
                    func_0x00010b4befb0();
                  }
                }
                else {
                  ppuVar44 = (undefined **)(*(ulong *)(*puVar4 + 0xb0) & 0xfffffffffffffffc);
                }
                if ((int)pfVar20[0x14] < 1) goto LAB_1093ebaac;
                lVar42 = 0;
                lVar40 = 8;
                goto LAB_1093eb9f4;
              }
            }
          }
          lVar42 = lVar42 + 1;
          lVar28 = lVar28 + 8;
        } while (lVar42 < *(int *)(lVar24 + 0x50));
      }
      goto LAB_1093ebafc;
    }
  }
  return;
LAB_1093eb9f4:
  do {
    pfVar43 = pfVar21;
    if ((*(ulong *)pfVar21 & 1) != 0) {
      pfVar43 = (float *)(*(ulong *)pfVar21 + lVar40 + -1);
    }
    if ((*(byte *)(*(ulong *)pfVar43 + 0x10) & 1) != 0) {
      uVar30 = *(ulong *)(*(ulong *)pfVar43 + 0xb0);
      if ((uVar30 & 3) == 0) {
        ppuVar18 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar18 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0();
        }
      }
      else {
        ppuVar18 = (undefined **)(uVar30 & 0xfffffffffffffffc);
      }
      bVar12 = *(byte *)((long)ppuVar18 + 0x17);
      puVar41 = ppuVar18[1];
      if (-1 < (char)bVar12) {
        puVar41 = (undefined *)(ulong)bVar12;
      }
      bVar13 = *(byte *)((long)ppuVar44 + 0x17);
      puVar46 = ppuVar44[1];
      if (-1 < (char)bVar13) {
        puVar46 = (undefined *)(ulong)bVar13;
      }
      if (puVar41 == puVar46) {
        ppuVar17 = (undefined **)*ppuVar18;
        if (-1 < (char)bVar12) {
          ppuVar17 = ppuVar18;
        }
        ppuVar18 = (undefined **)*ppuVar44;
        if (-1 < (char)bVar13) {
          ppuVar18 = ppuVar44;
        }
        _memcmp(ppuVar17,ppuVar18);
        if ((int)ppuVar17 == 0) {
          pfVar45 = pfVar21;
          if ((*(ulong *)pfVar21 & 1) != 0) {
            pfVar45 = (float *)(*(ulong *)pfVar21 + lVar40 + -1);
          }
          pfVar45 = *(float **)pfVar45;
          goto LAB_1093ebac0;
        }
      }
    }
    lVar42 = lVar42 + 1;
    lVar40 = lVar40 + 8;
  } while (lVar42 < (int)pfVar20[0x14]);
LAB_1093ebaac:
  pfVar45 = pfVar21;
  func_0x000107c303b0(pfVar21,0x109312438);
LAB_1093ebac0:
  puVar4 = puVar2;
  if ((*puVar2 & 1) != 0) {
    puVar4 = (ulong *)(*puVar2 + lVar28 + -1);
  }
  puVar5 = puVar1;
  if ((*puVar1 & 1) != 0) {
    puVar5 = (ulong *)(*puVar1 + lVar22 * 8 + 7);
  }
  pfVar43 = (float *)((ulong)param_4 & 0xffffffff);
  FUN_1093eb350(*puVar4,*puVar5,pfVar45,pfVar43);
LAB_1093ebafc:
  lVar22 = lVar22 + 1;
  if (*(int *)(puVar25 + 10) <= lVar22) {
    return;
  }
  goto LAB_1093eb884;
}



/* Entry: 1093eb350; end: 1093ebbdf;  */

void FUN_1093eb350(long param_1,long param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  byte bVar8;
  byte bVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  
  if ((param_4 == 0) || ((*(byte *)(param_2 + 0x13c) & 1) != 0)) {
    uVar14 = *(uint *)(param_1 + 0x10);
    if (((uVar14 >> 0x10 & 1) != 0) && ((*(byte *)(param_2 + 0x12) & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x130) = *(undefined4 *)(param_2 + 0x130);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 & 1) != 0) && ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
      if ((*(ulong *)(param_2 + 0xb0) & 3) == 0) {
        ppuVar18 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar18 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0(&PTR_DAT_1132d0698);
        }
      }
      else {
        ppuVar18 = (undefined **)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
      }
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
      uVar12 = *(ulong *)(param_3 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_3 + 0xb0,ppuVar18,uVar12);
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x1d & 1) != 0) && ((*(byte *)(param_2 + 0x13) >> 5 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x164) = *(undefined4 *)(param_2 + 0x164);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20000000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x11 & 1) != 0) && ((*(byte *)(param_2 + 0x12) >> 1 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x134) = *(undefined4 *)(param_2 + 0x134);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x12 & 1) != 0) && ((*(byte *)(param_2 + 0x12) >> 2 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x138) = *(undefined4 *)(param_2 + 0x138);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x13 & 1) != 0) && ((*(byte *)(param_2 + 0x12) >> 3 & 1) != 0)) {
      *(undefined1 *)(param_3 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 1 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
      ppuVar18 = *(undefined ***)(param_3 + 0xb8);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x0001093416e0();
        *(undefined ***)(param_3 + 0xb8) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132d8ba0;
      if (*(undefined ***)(param_2 + 0xb8) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0xb8);
      }
      if (ppuVar11 != ppuVar18) {
        func_0x000109340dd8(ppuVar18);
        func_0x000109340c8c(ppuVar18,ppuVar11);
      }
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x19 & 1) != 0) && ((*(byte *)(param_2 + 0x13) >> 1 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x154) = *(undefined4 *)(param_2 + 0x154);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x2000000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
      ppuVar18 = *(undefined ***)(param_3 + 0xc0);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x000109312344();
        *(undefined ***)(param_3 + 0xc0) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132cfa58;
      if (*(undefined ***)(param_2 + 0xc0) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0xc0);
      }
      if (ppuVar11 != ppuVar18) {
        FUN_109308454(ppuVar18);
        FUN_1093086e0(ppuVar18,ppuVar11);
      }
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 5 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20;
      ppuVar18 = *(undefined ***)(param_3 + 0xd8);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x0001093121f0();
        *(undefined ***)(param_3 + 0xd8) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132cf958;
      if (*(undefined ***)(param_2 + 0xd8) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0xd8);
      }
      if (ppuVar11 != ppuVar18) {
        FUN_10930894c(ppuVar18);
        FUN_109308c48(ppuVar18,ppuVar11);
      }
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0xb & 1) != 0) && ((*(byte *)(param_2 + 0x11) >> 3 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x800;
      ppuVar18 = *(undefined ***)(param_3 + 0x108);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x000109312344();
        *(undefined ***)(param_3 + 0x108) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132cfa58;
      if (*(undefined ***)(param_2 + 0x108) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0x108);
      }
      if (ppuVar11 != ppuVar18) {
        FUN_109308454(ppuVar18);
        FUN_1093086e0(ppuVar18,ppuVar11);
      }
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0xc & 1) != 0) && ((*(byte *)(param_2 + 0x11) >> 4 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x1000;
      ppuVar18 = *(undefined ***)(param_3 + 0x110);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x0001093121f0();
        *(undefined ***)(param_3 + 0x110) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132cf958;
      if (*(undefined ***)(param_2 + 0x110) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0x110);
      }
      if (ppuVar11 != ppuVar18) {
        FUN_10930894c(ppuVar18);
        FUN_109308c48(ppuVar18,ppuVar11);
      }
    }
    if ((0 < *(int *)(param_1 + 0x20)) && (0 < *(int *)(param_2 + 0x20))) {
      FUN_1093c87cc(param_3 + 0x18,param_2 + 0x18);
    }
    if (((*(byte *)(param_1 + 0x13) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x13) >> 2 & 1) != 0))
    {
      *(undefined4 *)(param_3 + 0x158) = *(undefined4 *)(param_2 + 0x158);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000000;
    }
    if ((0 < *(int *)(param_1 + 0x38)) && (0 < *(int *)(param_2 + 0x38))) {
      FUN_1093c87cc(param_3 + 0x30,param_2 + 0x30);
    }
    uVar14 = *(uint *)(param_1 + 0x10);
    if (((uVar14 >> 0x1b & 1) != 0) && ((*(byte *)(param_2 + 0x13) >> 3 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x8000000;
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 4 & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 4 & 1) != 0)) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10;
      ppuVar18 = *(undefined ***)(param_3 + 0xd0);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        func_0x00010933b59c();
        *(undefined ***)(param_3 + 0xd0) = ppuVar18;
      }
      ppuVar11 = &PTR_PTR_1132d6de0;
      if (*(undefined ***)(param_2 + 0xd0) != (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_2 + 0xd0);
      }
      if (ppuVar11 != ppuVar18) {
        func_0x000109338834(ppuVar18);
        FUN_10933aa98(ppuVar18,ppuVar11);
      }
      uVar14 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar14 >> 0x1c & 1) != 0) && ((*(byte *)(param_2 + 0x13) >> 4 & 1) != 0)) {
      *(undefined4 *)(param_3 + 0x160) = *(undefined4 *)(param_2 + 0x160);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000000;
    }
    if (0 < *(int *)(param_2 + 0x50)) {
      lVar19 = 0;
      puVar1 = (ulong *)(param_2 + 0x48);
      puVar2 = (ulong *)(param_1 + 0x48);
      puVar3 = (ulong *)(param_3 + 0x48);
LAB_1093eb884:
      puVar13 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar13 = (ulong *)(*puVar1 + lVar19 * 8 + 7);
      }
      if ((*(ulong *)(*puVar13 + 0xb0) & 3) == 0) {
        ppuVar18 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar18 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0();
        }
      }
      else {
        ppuVar18 = (undefined **)(*(ulong *)(*puVar13 + 0xb0) & 0xfffffffffffffffc);
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar17 = 0;
        lVar15 = 8;
        do {
          puVar13 = puVar2;
          if ((*puVar2 & 1) != 0) {
            puVar13 = (ulong *)(*puVar2 + lVar15 + -1);
          }
          if ((*(byte *)(*puVar13 + 0x10) & 1) != 0) {
            uVar12 = *(ulong *)(*puVar13 + 0xb0);
            if ((uVar12 & 3) == 0) {
              ppuVar11 = ppuRam00000001132d06b0;
              if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                ppuVar11 = &PTR_DAT_1132d0698;
                func_0x00010b4befb0();
              }
            }
            else {
              ppuVar11 = (undefined **)(uVar12 & 0xfffffffffffffffc);
            }
            bVar8 = *(byte *)((long)ppuVar11 + 0x17);
            puVar4 = ppuVar11[1];
            if (-1 < (char)bVar8) {
              puVar4 = (undefined *)(ulong)bVar8;
            }
            bVar9 = *(byte *)((long)ppuVar18 + 0x17);
            puVar5 = ppuVar18[1];
            if (-1 < (char)bVar9) {
              puVar5 = (undefined *)(ulong)bVar9;
            }
            if (puVar4 == puVar5) {
              ppuVar10 = (undefined **)*ppuVar11;
              if (-1 < (char)bVar8) {
                ppuVar10 = ppuVar11;
              }
              ppuVar11 = (undefined **)*ppuVar18;
              if (-1 < (char)bVar9) {
                ppuVar11 = ppuVar18;
              }
              _memcmp(ppuVar10,ppuVar11);
              if ((int)ppuVar10 == 0) {
                uVar12 = *puVar1;
                if ((param_4 & 1) != 0) {
                  puVar13 = puVar1;
                  if ((uVar12 & 1) != 0) {
                    puVar13 = (ulong *)((uVar12 - 1) + lVar19 * 8 + 8);
                  }
                  if (*(char *)(*puVar13 + 0x13c) != '\x01') break;
                }
                puVar13 = puVar1;
                if ((uVar12 & 1) != 0) {
                  puVar13 = (ulong *)((uVar12 - 1) + lVar19 * 8 + 8);
                }
                if ((*(ulong *)(*puVar13 + 0xb0) & 3) == 0) {
                  ppuVar18 = ppuRam00000001132d06b0;
                  if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                    ppuVar18 = &PTR_DAT_1132d0698;
                    func_0x00010b4befb0();
                  }
                }
                else {
                  ppuVar18 = (undefined **)(*(ulong *)(*puVar13 + 0xb0) & 0xfffffffffffffffc);
                }
                if (*(int *)(param_3 + 0x50) < 1) goto LAB_1093ebaac;
                lVar17 = 0;
                lVar16 = 8;
                goto LAB_1093eb9f4;
              }
            }
          }
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 8;
        } while (lVar17 < *(int *)(param_1 + 0x50));
      }
      goto LAB_1093ebafc;
    }
  }
  return;
LAB_1093eb9f4:
  do {
    puVar13 = puVar3;
    if ((*puVar3 & 1) != 0) {
      puVar13 = (ulong *)(*puVar3 + lVar16 + -1);
    }
    if ((*(byte *)(*puVar13 + 0x10) & 1) != 0) {
      uVar12 = *(ulong *)(*puVar13 + 0xb0);
      if ((uVar12 & 3) == 0) {
        ppuVar11 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar11 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0();
        }
      }
      else {
        ppuVar11 = (undefined **)(uVar12 & 0xfffffffffffffffc);
      }
      bVar8 = *(byte *)((long)ppuVar11 + 0x17);
      puVar4 = ppuVar11[1];
      if (-1 < (char)bVar8) {
        puVar4 = (undefined *)(ulong)bVar8;
      }
      bVar9 = *(byte *)((long)ppuVar18 + 0x17);
      puVar5 = ppuVar18[1];
      if (-1 < (char)bVar9) {
        puVar5 = (undefined *)(ulong)bVar9;
      }
      if (puVar4 == puVar5) {
        ppuVar10 = (undefined **)*ppuVar11;
        if (-1 < (char)bVar8) {
          ppuVar10 = ppuVar11;
        }
        ppuVar11 = (undefined **)*ppuVar18;
        if (-1 < (char)bVar9) {
          ppuVar11 = ppuVar18;
        }
        _memcmp(ppuVar10,ppuVar11);
        if ((int)ppuVar10 == 0) {
          puVar13 = puVar3;
          if ((*puVar3 & 1) != 0) {
            puVar13 = (ulong *)(*puVar3 + lVar16 + -1);
          }
          puVar13 = (ulong *)*puVar13;
          goto LAB_1093ebac0;
        }
      }
    }
    lVar17 = lVar17 + 1;
    lVar16 = lVar16 + 8;
  } while (lVar17 < *(int *)(param_3 + 0x50));
LAB_1093ebaac:
  puVar13 = puVar3;
  func_0x000107c303b0(puVar3,0x109312438);
LAB_1093ebac0:
  puVar6 = puVar2;
  if ((*puVar2 & 1) != 0) {
    puVar6 = (ulong *)(*puVar2 + lVar15 + -1);
  }
  puVar7 = puVar1;
  if ((*puVar1 & 1) != 0) {
    puVar7 = (ulong *)(*puVar1 + lVar19 * 8 + 7);
  }
  FUN_1093eb350(*puVar6,*puVar7,puVar13,param_4);
LAB_1093ebafc:
  lVar19 = lVar19 + 1;
  if (*(int *)(param_2 + 0x50) <= lVar19) {
    return;
  }
  goto LAB_1093eb884;
}



/* Entry: 1093ebbe0; end: 1093ebcc7;  */

void FUN_1093ebbe0(int param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  iVar1 = (int)param_2[1];
  uVar2 = iVar1 - param_1;
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0 || iVar1 < param_1) {
    if (iVar1 < param_1) {
      if (0 < (int)(param_1 + ~*(uint *)((long)param_2 + 0xc))) {
        func_0x000107c303a8(param_2);
        iVar1 = (int)param_2[1];
      }
      while (iVar1 < param_1) {
        func_0x000107c303b0(param_2,0x1093416e0);
        iVar1 = (int)param_2[1];
      }
    }
    return;
  }
  puVar7 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar7 = (ulong *)(*param_2 + 7);
  }
  puVar7 = puVar7 + param_1;
  uVar8 = param_2[2];
  do {
    if ((uVar8 == 0) && ((long *)*puVar7 != (long *)0x0)) {
      (**(code **)(*(long *)*puVar7 + 8))();
    }
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  if ((*param_2 & 1) == 0) {
    if ((param_1 == 0) && (uVar2 == 1)) {
      *param_2 = 0;
    }
  }
  else {
    piVar3 = (int *)(*param_2 - 1);
    iVar1 = *piVar3;
    lVar5 = (long)(int)(uVar2 + param_1);
    while (lVar4 = lVar5 + 1, lVar5 < iVar1) {
      *(undefined8 *)(piVar3 + (long)(int)uVar2 * -2 + lVar4 * 2) =
           *(undefined8 *)(piVar3 + lVar4 * 2);
      lVar5 = lVar4;
    }
    *piVar3 = iVar1 - uVar2;
  }
  *(uint *)(param_2 + 1) = (int)param_2[1] - uVar2;
  return;
}



/* Entry: 1093ebcc8; end: 1093ec08f;  */

void FUN_1093ebcc8(long param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                  long param_7,long param_8,undefined8 *param_9,float *param_10,long param_11,
                  long param_12)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 in_b0;
  undefined1 uVar6;
  undefined1 in_register_00005001;
  undefined1 uVar7;
  undefined1 in_register_00005002;
  undefined1 uVar8;
  undefined1 in_register_00005003;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_3 != 0) {
    fVar14 = *(float *)(param_7 + 0x20);
    if (0.0 < fVar14) {
      ppuVar1 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      ppuVar2 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_2 + 0x20);
      }
      *(ulong *)(param_7 + 0x18) =
           CONCAT44((fVar14 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                    ((float)((ulong)*(undefined8 *)(param_7 + 0x18) >> 0x20) -
                    (float)((ulong)ppuVar2[3] >> 0x20)),
                    (fVar14 / SUB84(ppuVar1[3],0)) *
                    ((float)*(undefined8 *)(param_7 + 0x18) - SUB84(ppuVar2[3],0)));
      *(uint *)(param_7 + 0x10) = *(uint *)(param_7 + 0x10) | 3;
    }
    fVar14 = *(float *)(param_11 + 0x20);
    if (0.0 < fVar14) {
      ppuVar1 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      ppuVar2 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_2 + 0x20);
      }
      *(ulong *)(param_11 + 0x18) =
           CONCAT44((fVar14 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                    ((float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20) -
                    (float)((ulong)ppuVar2[3] >> 0x20)),
                    (fVar14 / SUB84(ppuVar1[3],0)) *
                    ((float)*(undefined8 *)(param_11 + 0x18) - SUB84(ppuVar2[3],0)));
      *(uint *)(param_11 + 0x10) = *(uint *)(param_11 + 0x10) | 3;
    }
  }
  fVar15 = *(float *)(param_7 + 0x18);
  fVar17 = *(float *)(param_7 + 0x20);
  fVar14 = *(float *)(param_7 + 0x1c);
  uVar19 = param_9[1];
  uVar21 = param_9[3];
  uVar20 = param_9[5];
  uVar22 = param_9[7];
  *(ulong *)(param_7 + 0x18) =
       CONCAT44((float)((ulong)param_9[6] >> 0x20) +
                (float)((ulong)*param_9 >> 0x20) * fVar15 +
                (float)((ulong)param_9[2] >> 0x20) * fVar14 +
                (float)((ulong)param_9[4] >> 0x20) * fVar17,
                (float)param_9[6] +
                (float)*param_9 * fVar15 + (float)param_9[2] * fVar14 + (float)param_9[4] * fVar17);
  *(float *)(param_7 + 0x20) =
       (float)uVar22 + (float)uVar19 * fVar15 + (float)uVar21 * fVar14 + (float)uVar20 * fVar17;
  *(uint *)(param_7 + 0x10) = *(uint *)(param_7 + 0x10) | 7;
  fVar15 = *(float *)(param_11 + 0x18);
  fVar18 = *(float *)(param_11 + 0x20);
  fVar14 = *(float *)(param_11 + 0x1c);
  uVar19 = *(undefined8 *)(param_10 + 2);
  uVar21 = *(undefined8 *)(param_10 + 6);
  uVar20 = *(undefined8 *)(param_10 + 10);
  uVar22 = *(undefined8 *)(param_10 + 0xe);
  fVar17 = (float)*(undefined8 *)(param_10 + 0xc) +
           (float)*(undefined8 *)param_10 * fVar15 + (float)*(undefined8 *)(param_10 + 4) * fVar14 +
           (float)*(undefined8 *)(param_10 + 8) * fVar18;
  *(ulong *)(param_11 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_10 + 0xc) >> 0x20) +
                (float)((ulong)*(undefined8 *)param_10 >> 0x20) * fVar15 +
                (float)((ulong)*(undefined8 *)(param_10 + 4) >> 0x20) * fVar14 +
                (float)((ulong)*(undefined8 *)(param_10 + 8) >> 0x20) * fVar18,fVar17);
  *(float *)(param_11 + 0x20) =
       (float)uVar22 + (float)uVar19 * fVar15 + (float)uVar21 * fVar14 + (float)uVar20 * fVar18;
  *(uint *)(param_11 + 0x10) = *(uint *)(param_11 + 0x10) | 7;
  fVar15 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) *
           (fVar17 - *(float *)(param_7 + 0x18));
  *(float *)(param_12 + 0x18) = fVar15;
  uVar3 = *(uint *)(param_12 + 0x10);
  *(uint *)(param_12 + 0x10) = uVar3 | 1;
  fVar17 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) *
           (*(float *)(param_11 + 0x1c) - *(float *)(param_7 + 0x1c));
  *(float *)(param_12 + 0x1c) = fVar17;
  *(uint *)(param_12 + 0x10) = uVar3 | 3;
  fVar18 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) *
           (*(float *)(param_11 + 0x20) - *(float *)(param_7 + 0x20));
  *(float *)(param_12 + 0x20) = fVar18;
  uVar3 = uVar3 | 7;
  *(uint *)(param_12 + 0x10) = uVar3;
  fVar14 = 0.0;
  fVar23 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar23 = 1.0 / ((float)CONCAT13(in_register_00005003,
                                    CONCAT12(in_register_00005002,
                                             CONCAT11(in_register_00005001,in_b0))) /
                    (*(float *)(param_1 + 0x20) * 6.2831855) + 1.0);
  }
  fVar24 = 1.0 - fVar23;
  fVar15 = *(float *)(param_8 + 0x18) * fVar24 + fVar15 * fVar23;
  *(float *)(param_12 + 0x18) = fVar15;
  *(uint *)(param_12 + 0x10) = uVar3;
  fVar17 = fVar24 * *(float *)(param_8 + 0x1c) + fVar17 * fVar23;
  *(float *)(param_12 + 0x1c) = fVar17;
  *(uint *)(param_12 + 0x10) = uVar3;
  fVar18 = fVar24 * *(float *)(param_8 + 0x20) + fVar18 * fVar23;
  *(float *)(param_12 + 0x20) = fVar18;
  *(uint *)(param_12 + 0x10) = uVar3;
  fVar15 = *(float *)(param_1 + 0x18) +
           *(float *)(param_1 + 0x1c) * SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar18 * fVar18);
  if (0.0 < fVar15) {
    fVar14 = 1.0 / ((float)CONCAT13(in_register_00005003,
                                    CONCAT12(in_register_00005002,
                                             CONCAT11(in_register_00005001,in_b0))) /
                    (fVar15 * 6.2831855) + 1.0);
  }
  fVar17 = 1.0 - fVar14;
  fVar15 = fVar17 * *(float *)(param_7 + 0x18) + *(float *)(param_11 + 0x18) * fVar14;
  *(float *)(param_11 + 0x18) = fVar15;
  uVar3 = *(uint *)(param_11 + 0x10);
  *(uint *)(param_11 + 0x10) = uVar3 | 1;
  fVar23 = fVar17 * *(float *)(param_7 + 0x1c) + *(float *)(param_11 + 0x1c) * fVar14;
  *(float *)(param_11 + 0x1c) = fVar23;
  *(uint *)(param_11 + 0x10) = uVar3 | 3;
  fVar18 = fVar17 * *(float *)(param_7 + 0x20) + *(float *)(param_11 + 0x20) * fVar14;
  *(float *)(param_11 + 0x20) = fVar18;
  fVar24 = param_10[0xe];
  fVar25 = (float)*(undefined8 *)(param_10 + 8);
  fVar27 = (float)*(undefined8 *)(param_10 + 0xc);
  fVar26 = (float)((ulong)*(undefined8 *)(param_10 + 8) >> 0x20);
  fVar28 = (float)((ulong)*(undefined8 *)(param_10 + 0xc) >> 0x20);
  uVar3 = uVar3 | 7;
  fVar14 = *param_10 * fVar15 + param_10[1] * fVar23 + param_10[2] * fVar18 +
           ((-*param_10 * fVar27 - param_10[1] * fVar28) - param_10[2] * fVar24);
  uVar6 = SUB41(fVar14,0);
  uVar7 = (undefined1)((uint)fVar14 >> 8);
  uVar8 = (undefined1)((uint)fVar14 >> 0x10);
  uVar9 = (undefined1)((uint)fVar14 >> 0x18);
  fVar17 = param_10[4] * fVar15 + param_10[5] * fVar23 + param_10[6] * fVar18 +
           ((-param_10[4] * fVar27 - param_10[5] * fVar28) - param_10[6] * fVar24);
  uVar10 = SUB41(fVar17,0);
  uVar11 = (undefined1)((uint)fVar17 >> 8);
  uVar12 = (undefined1)((uint)fVar17 >> 0x10);
  uVar13 = (undefined1)((uint)fVar17 >> 0x18);
  fVar15 = fVar25 * fVar15 + fVar26 * fVar23 + param_10[10] * fVar18 +
           ((-(param_10[10] * fVar24) - fVar26 * fVar28) - fVar25 * fVar27);
  *(ulong *)(param_11 + 0x18) =
       CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,fVar14))));
  *(float *)(param_11 + 0x20) = fVar15;
  *(uint *)(param_11 + 0x10) = uVar3;
  if (param_3 != 0) {
    if (0.0 < fVar15) {
      ppuVar1 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      ppuVar2 = &PTR_PTR_1132d8bd0;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_2 + 0x20);
      }
      fVar14 = (fVar14 * SUB84(ppuVar1[3],0)) / fVar15 + SUB84(ppuVar2[3],0);
      uVar6 = SUB41(fVar14,0);
      uVar7 = (undefined1)((uint)fVar14 >> 8);
      uVar8 = (undefined1)((uint)fVar14 >> 0x10);
      uVar9 = (undefined1)((uint)fVar14 >> 0x18);
      fVar15 = (fVar17 * (float)((ulong)ppuVar1[3] >> 0x20)) / fVar15 +
               (float)((ulong)ppuVar2[3] >> 0x20);
      uVar10 = SUB41(fVar15,0);
      uVar11 = (undefined1)((uint)fVar15 >> 8);
      uVar12 = (undefined1)((uint)fVar15 >> 0x10);
      uVar13 = (undefined1)((uint)fVar15 >> 0x18);
      *(ulong *)(param_11 + 0x18) =
           CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,fVar14))));
      *(uint *)(param_11 + 0x10) = uVar3;
    }
    if (param_6 != 0) {
      uVar16 = NEON_scvtf(CONCAT44(param_5 + -1,param_4 + -1),4);
      uVar16 = uVar16 ^ (uVar16 ^ CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,
                                                  CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6
                                                                                        )))))))) &
                        ~CONCAT44(-(uint)((float)(uVar16 >> 0x20) <
                                         (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,
                                                  uVar10)))),
                                  -(uint)((float)uVar16 <
                                         (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))
                                                        )));
      iVar4 = -(uint)((float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) < 0.0);
      iVar5 = -(uint)((float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) < 0.0);
      *(ulong *)(param_11 + 0x18) =
           CONCAT17((byte)(uVar16 >> 0x38) & ~(byte)((uint)iVar5 >> 0x18),
                    CONCAT16((byte)(uVar16 >> 0x30) & ~(byte)((uint)iVar5 >> 0x10),
                             CONCAT15((byte)(uVar16 >> 0x28) & ~(byte)((uint)iVar5 >> 8),
                                      CONCAT14((byte)(uVar16 >> 0x20) & ~(byte)iVar5,
                                               CONCAT13((byte)(uVar16 >> 0x18) &
                                                        ~(byte)((uint)iVar4 >> 0x18),
                                                        CONCAT12((byte)(uVar16 >> 0x10) &
                                                                 ~(byte)((uint)iVar4 >> 0x10),
                                                                 CONCAT11((byte)(uVar16 >> 8) &
                                                                          ~(byte)((uint)iVar4 >> 8),
                                                                          (byte)uVar16 &
                                                                          ~(byte)iVar4)))))));
      *(uint *)(param_11 + 0x10) = uVar3;
    }
  }
  return;
}



/* Entry: 1093ec090; end: 1093ec11f;  */

undefined8 * FUN_1093ec090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Entry: 1093ec120; end: 1093ec1b3;  */

undefined8 * FUN_1093ec120(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 1093ec1b4; end: 1093ec207;  */

void FUN_1093ec1b4(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
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
    FUN_1092b4db8(param_1,&stack0xffffffffffffffef,1);
    return;
  }
  if (param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf_1103464d0)(*param_5);
    return;
  }
  FUN_10926db08(&ppuStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_5,&ppuStack_150);
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
  return;
}



/* Entry: 1093ec208; end: 1093ec213;  */

int FUN_1093ec208(float *param_1)

{
  return (int)*param_1;
}



/* Entry: 1093ec214; end: 1093ec353;  */

void FUN_1093ec214(undefined8 param_1,undefined4 *param_2,int param_3)

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
  
  FUN_10926db08(&ppuStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2,&ppuStack_150);
  FUN_10926dc5c(&ppuStack_168,&ppuStack_148,&uStack_41);
  pppuVar1 = (undefined8 ***)ppuStack_168;
  if (-1 < cStack_151) {
    iStack_160 = (int)cStack_151;
    pppuVar1 = &ppuStack_168;
  }
  if (param_3 <= iStack_160) {
    iStack_160 = param_3;
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
  return;
}



/* Entry: 1093ec354; end: 1093ec503;  */

byte ** FUN_1093ec354(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  long *plStack_58;
  
  ppbVar7 = (byte **)param_1[1];
  if (ppbVar7 < (byte **)param_1[2]) {
    ppbVar6 = ppbVar7;
    FUN_10934121c(ppbVar7,0,param_2);
    ppbVar7 = ppbVar7 + 6;
    param_1[1] = (long)ppbVar7;
  }
  else {
    lVar12 = (long)ppbVar7 - *param_1;
    uVar11 = (lVar12 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar11) {
      FUN_1093ec504();
LAB_1093ec4e0:
      func_0x000104c4f740();
      FUN_1093ec518(&pbStack_78);
      __Unwind_Resume(param_1);
      ppbVar7 = (byte **)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      pbVar4 = ppbVar7[1];
      pbVar8 = ppbVar7[2];
      while (pbVar8 != pbVar4) {
        ppbVar7[2] = pbVar8 + -0x30;
        pbVar13 = pbVar8 + -0x28;
        pbVar8 = pbVar8 + -0x30;
        if ((*pbVar13 & 1) != 0) {
          func_0x0001053936ac();
          pbVar8 = ppbVar7[2];
        }
      }
      if (*ppbVar7 != (byte *)0x0) {
        __ZdlPv();
      }
      return ppbVar7;
    }
    lVar9 = param_1[2] - *param_1 >> 4;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
      uVar10 = uVar11;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0x555555555555555;
    }
    plStack_58 = param_1;
    if (uVar10 == 0) {
      pbVar4 = (byte *)0x0;
    }
    else {
      if (0x555555555555555 < uVar10) goto LAB_1093ec4e0;
      pbVar4 = (byte *)(uVar10 * 0x30);
      __Znwm();
    }
    pbVar1 = pbVar4 + lVar12;
    pbStack_78 = pbVar4;
    pbStack_70 = pbVar1;
    pbStack_68 = pbVar1;
    pbStack_60 = pbVar4 + uVar10 * 0x30;
    FUN_10934121c(pbVar1,0,param_2);
    pbVar13 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    pbVar2 = pbVar13 + ((long)pbVar1 - (long)pbVar3);
    pbVar5 = pbVar2;
    pbVar8 = pbVar13;
    if (pbVar3 != pbVar13) {
      do {
        FUN_1093c8690(pbVar5,0,pbVar8);
        pbVar8 = pbVar8 + 0x30;
        pbVar5 = pbVar5 + 0x30;
      } while (pbVar8 != pbVar3);
      pbVar13 = pbVar13 + 8;
      do {
        if ((*pbVar13 & 1) != 0) {
          func_0x0001053936ac(pbVar13);
        }
        pbVar8 = pbVar13 + 0x28;
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar8 != pbVar3);
      pbVar13 = (byte *)*param_1;
    }
    ppbVar7 = (byte **)(pbVar1 + 0x30);
    *param_1 = (long)pbVar2;
    param_1[1] = (long)ppbVar7;
    pbStack_60 = (byte *)param_1[2];
    param_1[2] = (long)(pbVar4 + uVar10 * 0x30);
    ppbVar6 = &pbStack_78;
    pbStack_78 = pbVar13;
    pbStack_70 = pbVar13;
    pbStack_68 = pbVar13;
    FUN_1093ec518(ppbVar6);
  }
  param_1[1] = (long)ppbVar7;
  return ppbVar6;
}



/* Entry: 1093ec504; end: 1093ec517;  */

long * FUN_1093ec504(void)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar4 = plVar2[2];
  while (lVar4 != lVar1) {
    plVar2[2] = lVar4 + -0x30;
    pbVar3 = (byte *)(lVar4 + -0x28);
    lVar4 = lVar4 + -0x30;
    if ((*pbVar3 & 1) != 0) {
      func_0x0001053936ac();
      lVar4 = plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1093ec518; end: 1093ec573;  */

long * FUN_1093ec518(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x30;
    pbVar2 = (byte *)(lVar3 + -0x28);
    lVar3 = lVar3 + -0x30;
    if ((*pbVar2 & 1) != 0) {
      func_0x0001053936ac();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093ec574; end: 1093ec7a7;  */

undefined1  [16] FUN_1093ec574(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1093ec768;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_1093ec7a8(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x000104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_1093ec768:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1093ec7a8; end: 1093ec857;  */

void FUN_1093ec7a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  uVar2 = param_4[3];
  puVar1[6] = param_4[4];
  puVar1[5] = uVar2;
  puVar1[7] = param_4[5];
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[3] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1093ec858; end: 1093ecc63;  */

undefined1  [16] FUN_1093ec858(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c31944();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = param_1;
          func_0x000104c4fbc4(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_1093ecbd4;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x30;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar14[3] = param_3[1];
    plVar14[2] = lVar3;
    plVar14[4] = param_3[2];
  }
  plVar14[5] = param_3[3];
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_1093ecb5c;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_1093ec9e4:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1093ecc3c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar7;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
            **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_1093ec9e4;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_1093ecb5c:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_1093ecbd4:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 1093ecc64; end: 1093ecc97;  */

void FUN_1093ecc64(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1093ecc98; end: 1093ecdef;  */

void FUN_1093ecc98(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong **param_5)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x19;
  ulong *unaff_x22;
  ulong uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  long lStack_58;
  
  puVar3 = &uStack_80;
  puVar4 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    if (param_3 == (ulong *)0x0) {
      param_3 = (ulong *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar1 = -((long)param_3 + 0x1eU & 0xfffffffffffffff0);
        puVar3 = (ulong *)((long)&uStack_80 + lVar1);
        param_3 = (ulong *)((long)&uStack_80 + lVar1);
        unaff_x22 = param_3;
      }
      else {
        _malloc();
        unaff_x22 = param_3;
        if (param_3 == (ulong *)0x0) goto LAB_1093ecdb0;
      }
    }
    else {
      puVar3 = &uStack_80;
      unaff_x22 = (ulong *)0x0;
    }
    uStack_68 = *param_2;
    puVar7 = (ulong *)param_2[1];
    uStack_70 = 1;
    puVar8 = &uStack_68;
    param_5 = &puStack_78;
    puVar6 = (ulong *)0x3;
    puStack_78 = param_3;
    puStack_60 = puVar7;
    FUN_1093c55d4(param_1);
    if (0x8000 < param_4) {
      puVar6 = unaff_x22;
      _free();
    }
    puVar4 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_1093ecdb0:
    puVar6 = (ulong *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar7 = (ulong *)PTR___ZTISt9bad_alloc_110346a68;
    puVar8 = (ulong *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x22);
  }
  __Unwind_Resume();
  *(undefined1 **)((long)puVar4 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar4 + -8) = FUN_1093ecdf0;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar5 = 0x132dfa18;
    *(ulong **)((long)puVar4 + -0x18) = puVar6;
    *(ulong **)((long)puVar4 + -0x30) = puVar8;
    *(ulong **)((long)puVar4 + -0x28) = puVar7;
    *(ulong ***)((long)puVar4 + -0x20) = param_5;
    ___cxa_guard_acquire();
    puVar7 = *(ulong **)((long)puVar4 + -0x28);
    param_5 = *(ulong ***)((long)puVar4 + -0x20);
    puVar8 = *(ulong **)((long)puVar4 + -0x30);
    puVar6 = *(ulong **)((long)puVar4 + -0x18);
    if (iVar5 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18);
      puVar7 = *(ulong **)((long)puVar4 + -0x28);
      param_5 = *(ulong ***)((long)puVar4 + -0x20);
      puVar6 = *(ulong **)((long)puVar4 + -0x18);
      puVar8 = *(ulong **)((long)puVar4 + -0x30);
    }
  }
  lVar1 = lRam00000001132dfa10;
  uVar9 = uRam00000001132dfa08;
  uVar14 = uRam00000001132dfa00;
  if ((long)param_5 < 2) {
    uVar13 = *puVar7;
    uVar12 = uVar13;
    if ((long)uVar13 <= (long)*puVar8) {
      uVar12 = *puVar8;
    }
    uVar15 = *puVar6;
    uVar18 = uVar15;
    if ((long)uVar15 <= (long)uVar12) {
      uVar18 = uVar12;
    }
    if ((long)uVar18 < 0x30) {
      return;
    }
    lVar11 = uRam00000001132dfa00 - 0xc0;
    lVar10 = uRam00000001132dfa00 - 0x81;
    if (0xbf < (long)uRam00000001132dfa00) {
      lVar10 = lVar11;
    }
    uVar12 = lVar10 >> 6 & 0xfffffffffffffff8;
    if ((long)uVar12 < 2) {
      uVar12 = 1;
    }
    uVar18 = uVar15;
    if ((long)uVar12 < (long)uVar15) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar15 / uVar12;
      }
      uVar16 = uVar15 - uVar13 * uVar12;
      uVar18 = uVar12;
      if (uVar16 != 0) {
        lVar10 = uVar13 * 8 + 8;
        lVar2 = 0;
        if (lVar10 != 0) {
          lVar2 = (long)(uVar12 + ~uVar16) / lVar10;
        }
        uVar18 = uVar12 + lVar2 * -8;
      }
      *puVar6 = uVar18;
      uVar13 = *puVar7;
    }
    uVar19 = uVar18 * 4;
    uVar16 = lVar11 - uVar19 * uVar13;
    if ((long)uVar16 < (long)(uVar18 * 0x10)) {
      uVar17 = 0;
      if (uVar12 << 4 != 0) {
        uVar17 = 0x480000 / (uVar12 << 4);
      }
    }
    else {
      uVar17 = 0;
      if (uVar19 != 0) {
        uVar17 = uVar16 / uVar19;
      }
    }
    uVar12 = 0;
    if (uVar18 << 3 != 0) {
      uVar12 = 0x180000 / (uVar18 << 3);
    }
    if ((long)uVar12 <= (long)uVar17) {
      uVar17 = uVar12;
    }
    uVar17 = uVar17 & 0xfffffffffffffffc;
    uVar12 = *puVar8;
    if ((long)uVar17 < (long)uVar12) {
      lVar1 = 0;
      if (uVar17 != 0) {
        lVar1 = (long)uVar12 / (long)uVar17;
      }
      lVar10 = uVar12 - lVar1 * uVar17;
      if (lVar10 != 0) {
        lVar1 = lVar1 * 4 + 4;
        lVar11 = 0;
        if (lVar1 != 0) {
          lVar11 = (long)(uVar17 - lVar10) / lVar1;
        }
        uVar17 = uVar17 + lVar11 * -4;
      }
      *puVar8 = uVar17;
      return;
    }
    if (uVar15 != uVar18) {
      return;
    }
    uVar18 = uVar15 * uVar12 * 4;
    uVar12 = uVar13;
    if (0x400 < (long)uVar18) {
      if (0x23f < (long)uVar13) {
        uVar12 = 0x240;
      }
      uVar14 = uVar9;
      if (lVar1 == 0 || 0x8000 < uVar18) {
        uVar14 = 0x180000;
        uVar12 = uVar13;
      }
    }
    uVar9 = 0;
    if (uVar15 * 0xc != 0) {
      uVar9 = uVar14 / (uVar15 * 0xc);
    }
    if ((long)uVar9 <= (long)uVar12) {
      uVar12 = uVar9;
    }
    if ((long)uVar12 < 0xd) {
      if (uVar12 == 0) {
        return;
      }
    }
    else {
      uVar12 = ((uVar12 / 0xc) * 2 + uVar12 / 0xc) * 4;
    }
    lVar1 = 0;
    if (uVar12 != 0) {
      lVar1 = (long)uVar13 / (long)uVar12;
    }
    lVar10 = uVar13 - lVar1 * uVar12;
    if (lVar10 != 0) {
      lVar11 = lVar1 * 0xc + 0xc;
      lVar1 = 0;
      if (lVar11 != 0) {
        lVar1 = (long)(uVar12 - lVar10) / lVar11;
      }
      uVar12 = uVar12 + lVar1 * -0xc;
    }
  }
  else {
    lVar10 = uRam00000001132dfa00 - 0x81;
    if (0xbf < (long)uRam00000001132dfa00) {
      lVar10 = uRam00000001132dfa00 - 0xc0;
    }
    uVar12 = lVar10 >> 6;
    if ((long)uVar12 < 9) {
      uVar12 = 8;
    }
    if (0x13f < (long)uVar12) {
      uVar12 = 0x140;
    }
    uVar13 = *puVar6;
    if ((long)uVar12 < (long)uVar13) {
      uVar13 = uVar12 & 0x1f8;
      *puVar6 = uVar13;
    }
    uVar12 = 0;
    if (uVar13 << 4 != 0) {
      uVar12 = (uVar9 - uVar14) / (uVar13 << 4);
    }
    uVar14 = *puVar8;
    lVar10 = 0;
    if (param_5 != (ulong **)0x0) {
      lVar10 = (long)((long)param_5 + (uVar14 - 1)) / (long)param_5;
    }
    uVar13 = lVar10 + 3;
    uVar18 = uVar13 & 3;
    if (-1 < (long)-uVar13) {
      uVar18 = -(-uVar13 & 3);
    }
    uVar15 = uVar13 - uVar18;
    if ((long)uVar14 <= (long)(uVar13 - uVar18)) {
      uVar15 = uVar14;
    }
    uVar14 = uVar12 & 3;
    if (-1 < (long)-uVar12) {
      uVar14 = -(-uVar12 & 3);
    }
    if ((long)uVar12 <= lVar10) {
      uVar15 = uVar12 - uVar14;
    }
    *puVar8 = uVar15;
    if (lVar1 - uVar9 == 0 || lVar1 < (long)uVar9) {
      return;
    }
    uVar12 = (long)param_5 * *puVar6 * 4;
    uVar14 = 0;
    if (uVar12 != 0) {
      uVar14 = (lVar1 - uVar9) / uVar12;
    }
    uVar9 = *puVar7;
    lVar1 = 0;
    if (param_5 != (ulong **)0x0) {
      lVar1 = (long)((long)param_5 + (uVar9 - 1)) / (long)param_5;
    }
    if ((uVar14 < 0xc) || (lVar1 <= (long)uVar14)) {
      lVar10 = lVar1 + 0xb >> 0x3f;
      uVar12 = (((ulong)((lVar1 + 0xb) / 6 + lVar10) >> 1) - lVar10) * 0xc;
      if ((long)uVar9 <= (long)uVar12) {
        uVar12 = uVar9;
      }
    }
    else {
      uVar12 = ((uVar14 / 0xc) * 2 + uVar14 / 0xc) * 4;
    }
  }
  *puVar7 = uVar12;
  return;
}



/* Entry: 1093ecdf0; end: 1093ed15f;  */

void FUN_1093ecdf0(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar3 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18);
    }
  }
  lVar1 = lRam00000001132dfa10;
  uVar4 = uRam00000001132dfa08;
  uVar9 = uRam00000001132dfa00;
  if (param_4 < 2) {
    uVar8 = *param_2;
    uVar7 = uVar8;
    if ((long)uVar8 <= (long)*param_3) {
      uVar7 = *param_3;
    }
    uVar10 = *param_1;
    uVar13 = uVar10;
    if ((long)uVar10 <= (long)uVar7) {
      uVar13 = uVar7;
    }
    if ((long)uVar13 < 0x30) {
      return;
    }
    lVar6 = uRam00000001132dfa00 - 0xc0;
    lVar5 = uRam00000001132dfa00 - 0x81;
    if (0xbf < (long)uRam00000001132dfa00) {
      lVar5 = lVar6;
    }
    uVar7 = lVar5 >> 6 & 0xfffffffffffffff8;
    if ((long)uVar7 < 2) {
      uVar7 = 1;
    }
    uVar13 = uVar10;
    if ((long)uVar7 < (long)uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar11 = uVar10 - uVar8 * uVar7;
      uVar13 = uVar7;
      if (uVar11 != 0) {
        lVar5 = uVar8 * 8 + 8;
        lVar2 = 0;
        if (lVar5 != 0) {
          lVar2 = (long)(uVar7 + ~uVar11) / lVar5;
        }
        uVar13 = uVar7 + lVar2 * -8;
      }
      *param_1 = uVar13;
      uVar8 = *param_2;
    }
    uVar14 = uVar13 * 4;
    uVar11 = lVar6 - uVar14 * uVar8;
    if ((long)uVar11 < (long)(uVar13 * 0x10)) {
      uVar12 = 0;
      if (uVar7 << 4 != 0) {
        uVar12 = 0x480000 / (uVar7 << 4);
      }
    }
    else {
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = uVar11 / uVar14;
      }
    }
    uVar7 = 0;
    if (uVar13 << 3 != 0) {
      uVar7 = 0x180000 / (uVar13 << 3);
    }
    if ((long)uVar7 <= (long)uVar12) {
      uVar12 = uVar7;
    }
    uVar12 = uVar12 & 0xfffffffffffffffc;
    uVar7 = *param_3;
    if ((long)uVar12 < (long)uVar7) {
      lVar1 = 0;
      if (uVar12 != 0) {
        lVar1 = (long)uVar7 / (long)uVar12;
      }
      lVar5 = uVar7 - lVar1 * uVar12;
      if (lVar5 != 0) {
        lVar1 = lVar1 * 4 + 4;
        lVar6 = 0;
        if (lVar1 != 0) {
          lVar6 = (long)(uVar12 - lVar5) / lVar1;
        }
        uVar12 = uVar12 + lVar6 * -4;
      }
      *param_3 = uVar12;
      return;
    }
    if (uVar10 != uVar13) {
      return;
    }
    uVar13 = uVar10 * uVar7 * 4;
    uVar7 = uVar8;
    if (0x400 < (long)uVar13) {
      if (0x23f < (long)uVar8) {
        uVar7 = 0x240;
      }
      uVar9 = uVar4;
      if (lVar1 == 0 || 0x8000 < uVar13) {
        uVar9 = 0x180000;
        uVar7 = uVar8;
      }
    }
    uVar4 = 0;
    if (uVar10 * 0xc != 0) {
      uVar4 = uVar9 / (uVar10 * 0xc);
    }
    if ((long)uVar4 <= (long)uVar7) {
      uVar7 = uVar4;
    }
    if ((long)uVar7 < 0xd) {
      if (uVar7 == 0) {
        return;
      }
    }
    else {
      uVar7 = ((uVar7 / 0xc) * 2 + uVar7 / 0xc) * 4;
    }
    lVar1 = 0;
    if (uVar7 != 0) {
      lVar1 = (long)uVar8 / (long)uVar7;
    }
    lVar5 = uVar8 - lVar1 * uVar7;
    if (lVar5 != 0) {
      lVar6 = lVar1 * 0xc + 0xc;
      lVar1 = 0;
      if (lVar6 != 0) {
        lVar1 = (long)(uVar7 - lVar5) / lVar6;
      }
      uVar7 = uVar7 + lVar1 * -0xc;
    }
  }
  else {
    lVar5 = uRam00000001132dfa00 - 0x81;
    if (0xbf < (long)uRam00000001132dfa00) {
      lVar5 = uRam00000001132dfa00 - 0xc0;
    }
    uVar7 = lVar5 >> 6;
    if ((long)uVar7 < 9) {
      uVar7 = 8;
    }
    if (0x13f < (long)uVar7) {
      uVar7 = 0x140;
    }
    uVar8 = *param_1;
    if ((long)uVar7 < (long)uVar8) {
      uVar8 = uVar7 & 0x1f8;
      *param_1 = uVar8;
    }
    uVar7 = 0;
    if (uVar8 << 4 != 0) {
      uVar7 = (uVar4 - uVar9) / (uVar8 << 4);
    }
    uVar9 = *param_3;
    lVar5 = 0;
    if (param_4 != 0) {
      lVar5 = (long)(uVar9 + param_4 + -1) / param_4;
    }
    uVar8 = lVar5 + 3;
    uVar13 = uVar8 & 3;
    if (-1 < (long)-uVar8) {
      uVar13 = -(-uVar8 & 3);
    }
    uVar10 = uVar8 - uVar13;
    if ((long)uVar9 <= (long)(uVar8 - uVar13)) {
      uVar10 = uVar9;
    }
    uVar9 = uVar7 & 3;
    if (-1 < (long)-uVar7) {
      uVar9 = -(-uVar7 & 3);
    }
    if ((long)uVar7 <= lVar5) {
      uVar10 = uVar7 - uVar9;
    }
    *param_3 = uVar10;
    if (lVar1 - uVar4 == 0 || lVar1 < (long)uVar4) {
      return;
    }
    uVar7 = param_4 * *param_1 * 4;
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = (lVar1 - uVar4) / uVar7;
    }
    uVar4 = *param_2;
    lVar1 = 0;
    if (param_4 != 0) {
      lVar1 = (long)(uVar4 + param_4 + -1) / param_4;
    }
    if ((uVar9 < 0xc) || (lVar1 <= (long)uVar9)) {
      lVar5 = lVar1 + 0xb >> 0x3f;
      uVar7 = (((ulong)((lVar1 + 0xb) / 6 + lVar5) >> 1) - lVar5) * 0xc;
      if ((long)uVar4 <= (long)uVar7) {
        uVar7 = uVar4;
      }
    }
    else {
      uVar7 = ((uVar9 / 0xc) * 2 + uVar9 / 0xc) * 4;
    }
  }
  *param_2 = uVar7;
  return;
}



/* Entry: 1093ed160; end: 1093ed64b;  */

void FUN_1093ed160(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined4 param_10,
                  undefined4 param_11,long param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar5 = auStack_170;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_13[3];
  lStack_f8 = param_13[4];
  lVar9 = param_13[2];
  lStack_120 = lVar9;
  if (param_2 <= lVar9) {
    lStack_120 = param_2;
  }
  lVar1 = lVar12;
  if (param_3 <= lVar12) {
    lVar1 = param_3;
  }
  uVar7 = lStack_120 * lStack_f8;
  lStack_140 = param_5;
  lStack_138 = param_7;
  lStack_110 = param_9;
  lStack_e8 = param_6;
  lStack_d0 = param_8;
  if (uVar7 >> 0x3e == 0) {
    puStack_a8 = (undefined1 *)*param_13;
    if (puStack_a8 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 * 4);
      if (uVar7 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_160 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_a8 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_160 = puVar4;
        puStack_a8 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_1093ed57c;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x0;
      puVar5 = auStack_170;
    }
    uVar6 = lVar1 * lStack_f8;
    if (uVar6 >> 0x3e == 0) {
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      if ((undefined1 *)param_13[1] == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 4);
        if (uVar6 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puVar4 = puVar5;
          puStack_168 = puVar5;
          goto LAB_1093ed2f4;
        }
        _malloc();
        puStack_168 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_1093ed2f4;
      }
      else {
        puStack_168 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)param_13[1];
LAB_1093ed2f4:
        uStack_144 = (uint)((lStack_f8 != param_4 || param_2 <= lVar9) || lVar12 < param_3);
        if (0 < param_2) {
          lStack_118 = 0;
          lStack_130 = lStack_120 << 2;
          lStack_c0 = param_12 * lVar1 * 4;
          lStack_b8 = param_12;
          lStack_108 = lStack_f8 << 2;
          lStack_c8 = lStack_d0 * lVar1 * 4;
          lStack_128 = param_2;
          lStack_100 = param_4;
          do {
            lVar12 = lStack_118 + lStack_120;
            lVar9 = lVar12;
            if (lStack_128 <= lVar12) {
              lVar9 = lStack_128;
            }
            if (0 < param_4) {
              lStack_a0 = lVar9 - lStack_118;
              lStack_f0 = lStack_140 + lStack_118 * lStack_e8 * 4;
              uStack_ac = uStack_144;
              if (lStack_118 == 0) {
                uStack_ac = 1;
              }
              lStack_d8 = lStack_138;
              lVar9 = 0;
              lStack_118 = lVar12;
              do {
                lVar12 = lVar9 + lStack_f8;
                lVar10 = lVar12;
                if (param_4 <= lVar12) {
                  lVar10 = param_4;
                }
                lVar10 = lVar10 - lVar9;
                lStack_98 = lStack_f0 + lVar9 * 4;
                lStack_90 = lStack_e8;
                FUN_1093db8c4(&uStack_81,puStack_a8,&lStack_98,lVar10,lStack_a0,0,0);
                lStack_e0 = lVar12;
                if (0 < param_3) {
                  lVar13 = 0;
                  lVar12 = 0;
                  lVar8 = lVar1;
                  lVar9 = lStack_110;
                  lVar11 = lStack_d8;
                  do {
                    lVar2 = param_3;
                    if (lVar8 <= param_3) {
                      lVar2 = lVar8;
                    }
                    if (uStack_ac != 0) {
                      lStack_90 = lStack_d0;
                      lStack_98 = lVar11;
                      FUN_1093db31c(&uStack_82,puVar4,&lStack_98,lVar10,lVar2 + lVar13,0,0);
                    }
                    lStack_90 = lStack_b8;
                    lStack_98 = lVar9;
                    *(undefined8 *)(puVar5 + -0x18) = 0;
                    *(undefined8 *)(puVar5 + -0x10) = 0;
                    *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(param_1,&uStack_83,&lStack_98,puStack_a8,puVar4,lStack_a0,lVar10,
                                  lVar2 + lVar13,0xffffffffffffffff);
                    lVar12 = lVar12 + lVar1;
                    lVar9 = lVar9 + lStack_c0;
                    lVar11 = lVar11 + lStack_c8;
                    lVar8 = lVar8 + lVar1;
                    lVar13 = lVar13 - lVar1;
                  } while (lVar12 < param_3);
                }
                lStack_d8 = lStack_d8 + lStack_108;
                lVar9 = lStack_e0;
                param_4 = lStack_100;
                lVar12 = lStack_118;
              } while (lStack_e0 < lStack_100);
            }
            lStack_118 = lVar12;
            lStack_110 = lStack_110 + lStack_130;
          } while (lStack_118 < lStack_128);
        }
        if (0x8000 < uStack_158) {
          _free(puStack_168);
        }
        if (0x8000 < uStack_150) {
          _free(puStack_160);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1093ed5e4;
    }
  }
  else {
LAB_1093ed57c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1093ed5e4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1093ed5e8);
  (*pcVar3)();
}



/* Entry: 1093ed64c; end: 1093ed6bf;  */

int * FUN_1093ed64c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    func_0x000107c282d8(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined4 **)(param_1 + 2);
      puVar3 = *(undefined4 **)(param_2 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 1093ed6c0; end: 1093ee5e3;  */

void FUN_1093ed6c0(float *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  undefined8 *puVar28;
  float *pfVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float *pfStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float *pfStack_298;
  ulong uStack_290;
  float *pfStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  undefined8 uStack_230;
  float afStack_228 [4];
  long lStack_218;
  float fStack_210;
  float fStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  float fStack_1e0;
  undefined8 uStack_1dc;
  ushort uStack_1d4;
  byte bStack_1d2;
  undefined4 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  float fStack_1a4;
  undefined1 auStack_1a0 [4];
  float afStack_19c [6];
  float fStack_184;
  undefined8 auStack_150 [4];
  float fStack_130;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float afStack_f0 [2];
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  float afStack_c8 [4];
  undefined8 uStack_b8;
  float fStack_b0;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  FUN_1093ef090(&pfStack_288,param_2);
  FUN_1093ef090(&pfStack_298,param_3);
  fVar57 = 0.0;
  if (uStack_290 != 0) {
    uVar31 = uStack_290 + 3;
    uVar25 = uStack_290 + 7;
    if (-1 < (long)uStack_290) {
      uVar31 = uStack_290;
      uVar25 = uStack_290;
    }
    if (uStack_290 + 3 < 7) {
      fVar57 = *pfStack_288 * *pfStack_298;
      if (1 < (long)uStack_290) {
        lVar24 = uStack_290 - 1;
        pfVar22 = pfStack_288;
        pfVar12 = pfStack_298;
        do {
          pfVar12 = pfVar12 + 1;
          pfVar22 = pfVar22 + 1;
          fVar57 = fVar57 + *pfVar22 * *pfVar12;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    else {
      fVar57 = (float)*(undefined8 *)pfStack_288 * *pfStack_298;
      uVar33 = SUB41(fVar57,0);
      uVar34 = (undefined1)((uint)fVar57 >> 8);
      uVar35 = (undefined1)((uint)fVar57 >> 0x10);
      uVar36 = (undefined1)((uint)fVar57 >> 0x18);
      fVar57 = (float)((ulong)*(undefined8 *)pfStack_288 >> 0x20) * pfStack_298[1];
      uVar37 = SUB41(fVar57,0);
      uVar38 = (undefined1)((uint)fVar57 >> 8);
      uVar39 = (undefined1)((uint)fVar57 >> 0x10);
      uVar40 = (undefined1)((uint)fVar57 >> 0x18);
      fVar57 = (float)*(undefined8 *)(pfStack_288 + 2) * pfStack_298[2];
      uVar41 = SUB41(fVar57,0);
      uVar42 = (undefined1)((uint)fVar57 >> 8);
      uVar43 = (undefined1)((uint)fVar57 >> 0x10);
      uVar44 = (undefined1)((uint)fVar57 >> 0x18);
      fVar57 = (float)((ulong)*(undefined8 *)(pfStack_288 + 2) >> 0x20) * pfStack_298[3];
      uVar45 = SUB41(fVar57,0);
      uVar46 = (undefined1)((uint)fVar57 >> 8);
      uVar47 = (undefined1)((uint)fVar57 >> 0x10);
      uVar48 = (undefined1)((uint)fVar57 >> 0x18);
      if (7 < (long)uStack_290) {
        uVar25 = uVar25 & 0xfffffffffffffff8;
        fVar57 = pfStack_288[4] * (float)*(undefined8 *)(pfStack_298 + 4);
        fVar49 = pfStack_288[5] * (float)((ulong)*(undefined8 *)(pfStack_298 + 4) >> 0x20);
        fVar50 = pfStack_288[6] * (float)*(undefined8 *)(pfStack_298 + 6);
        fVar68 = pfStack_288[7] * (float)((ulong)*(undefined8 *)(pfStack_298 + 6) >> 0x20);
        if (0xf < uStack_290) {
          pfVar22 = pfStack_298 + 0xc;
          pauVar26 = (undefined1 (*) [16])(pfStack_288 + 0xc);
          lVar24 = 8;
          do {
            auVar59 = *pauVar26;
            fVar58 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
                     (float)*(undefined8 *)pauVar26[-1] * (float)*(undefined8 *)(pfVar22 + -4);
            uVar33 = SUB41(fVar58,0);
            uVar34 = (undefined1)((uint)fVar58 >> 8);
            uVar35 = (undefined1)((uint)fVar58 >> 0x10);
            uVar36 = (undefined1)((uint)fVar58 >> 0x18);
            fVar58 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) +
                     (float)((ulong)*(undefined8 *)pauVar26[-1] >> 0x20) *
                     (float)((ulong)*(undefined8 *)(pfVar22 + -4) >> 0x20);
            uVar37 = SUB41(fVar58,0);
            uVar38 = (undefined1)((uint)fVar58 >> 8);
            uVar39 = (undefined1)((uint)fVar58 >> 0x10);
            uVar40 = (undefined1)((uint)fVar58 >> 0x18);
            fVar58 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
                     (float)*(undefined8 *)((long)pauVar26[-1] + 8) *
                     (float)*(undefined8 *)(pfVar22 + -2);
            uVar41 = SUB41(fVar58,0);
            uVar42 = (undefined1)((uint)fVar58 >> 8);
            uVar43 = (undefined1)((uint)fVar58 >> 0x10);
            uVar44 = (undefined1)((uint)fVar58 >> 0x18);
            fVar58 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                     (float)((ulong)*(undefined8 *)((long)pauVar26[-1] + 8) >> 0x20) *
                     (float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20);
            uVar45 = SUB41(fVar58,0);
            uVar46 = (undefined1)((uint)fVar58 >> 8);
            uVar47 = (undefined1)((uint)fVar58 >> 0x10);
            uVar48 = (undefined1)((uint)fVar58 >> 0x18);
            fVar57 = fVar57 + auVar59._0_4_ * (float)*(undefined8 *)pfVar22;
            fVar49 = fVar49 + auVar59._4_4_ * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20);
            fVar50 = fVar50 + auVar59._8_4_ * (float)*(undefined8 *)(pfVar22 + 2);
            fVar68 = fVar68 + auVar59._12_4_ * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20);
            lVar24 = lVar24 + 8;
            pfVar22 = pfVar22 + 8;
            pauVar26 = pauVar26 + 2;
          } while (lVar24 < (long)uVar25);
        }
        fVar57 = fVar57 + (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
        uVar33 = SUB41(fVar57,0);
        uVar34 = (undefined1)((uint)fVar57 >> 8);
        uVar35 = (undefined1)((uint)fVar57 >> 0x10);
        uVar36 = (undefined1)((uint)fVar57 >> 0x18);
        fVar49 = fVar49 + (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
        uVar37 = SUB41(fVar49,0);
        uVar38 = (undefined1)((uint)fVar49 >> 8);
        uVar39 = (undefined1)((uint)fVar49 >> 0x10);
        uVar40 = (undefined1)((uint)fVar49 >> 0x18);
        fVar50 = fVar50 + (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
        uVar41 = SUB41(fVar50,0);
        uVar42 = (undefined1)((uint)fVar50 >> 8);
        uVar43 = (undefined1)((uint)fVar50 >> 0x10);
        uVar44 = (undefined1)((uint)fVar50 >> 0x18);
        fVar68 = fVar68 + (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
        uVar45 = SUB41(fVar68,0);
        uVar46 = (undefined1)((uint)fVar68 >> 8);
        uVar47 = (undefined1)((uint)fVar68 >> 0x10);
        uVar48 = (undefined1)((uint)fVar68 >> 0x18);
        if ((long)uVar25 < (long)(uVar31 & 0xfffffffffffffffc)) {
          pfVar22 = pfStack_288 + uVar25;
          uVar52 = *(undefined8 *)(pfStack_298 + uVar25 + 2);
          uVar65 = *(undefined8 *)(pfStack_298 + uVar25);
          fVar57 = fVar57 + *pfVar22 * (float)uVar65;
          uVar33 = SUB41(fVar57,0);
          uVar34 = (undefined1)((uint)fVar57 >> 8);
          uVar35 = (undefined1)((uint)fVar57 >> 0x10);
          uVar36 = (undefined1)((uint)fVar57 >> 0x18);
          fVar49 = fVar49 + pfVar22[1] * (float)((ulong)uVar65 >> 0x20);
          uVar37 = SUB41(fVar49,0);
          uVar38 = (undefined1)((uint)fVar49 >> 8);
          uVar39 = (undefined1)((uint)fVar49 >> 0x10);
          uVar40 = (undefined1)((uint)fVar49 >> 0x18);
          fVar50 = fVar50 + pfVar22[2] * (float)uVar52;
          uVar41 = SUB41(fVar50,0);
          uVar42 = (undefined1)((uint)fVar50 >> 8);
          uVar43 = (undefined1)((uint)fVar50 >> 0x10);
          uVar44 = (undefined1)((uint)fVar50 >> 0x18);
          fVar68 = fVar68 + pfVar22[3] * (float)((ulong)uVar52 >> 0x20);
          uVar45 = SUB41(fVar68,0);
          uVar46 = (undefined1)((uint)fVar68 >> 8);
          uVar47 = (undefined1)((uint)fVar68 >> 0x10);
          uVar48 = (undefined1)((uint)fVar68 >> 0x18);
        }
      }
      auVar59[1] = uVar34;
      auVar59[0] = uVar33;
      auVar59[2] = uVar35;
      auVar59[3] = uVar36;
      auVar59[4] = uVar37;
      auVar59[5] = uVar38;
      auVar59[6] = uVar39;
      auVar59[7] = uVar40;
      auVar59[8] = uVar41;
      auVar59[9] = uVar42;
      auVar59[10] = uVar43;
      auVar59[0xb] = uVar44;
      auVar59[0xc] = uVar45;
      auVar59[0xd] = uVar46;
      auVar59[0xe] = uVar47;
      auVar59[0xf] = uVar48;
      auVar64[1] = uVar34;
      auVar64[0] = uVar33;
      auVar64[2] = uVar35;
      auVar64[3] = uVar36;
      auVar64[4] = uVar37;
      auVar64[5] = uVar38;
      auVar64[6] = uVar39;
      auVar64[7] = uVar40;
      auVar64[8] = uVar41;
      auVar64[9] = uVar42;
      auVar64[10] = uVar43;
      auVar64[0xb] = uVar44;
      auVar64[0xc] = uVar45;
      auVar64[0xd] = uVar46;
      auVar64[0xe] = uVar47;
      auVar64[0xf] = uVar48;
      auVar59 = NEON_ext(auVar59,auVar64,8,1);
      fVar57 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) + auVar59._0_4_ +
               (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) + auVar59._4_4_;
      lVar24 = (long)uStack_290 % 4;
      if (lVar24 != 0 && lVar24 < 0 == SBORROW8(uStack_290,uVar31 & 0xfffffffffffffffc)) {
        pfVar22 = pfStack_288 + ((long)uVar31 >> 2) * 4;
        pfVar12 = pfStack_298 + ((long)uVar31 >> 2) * 4;
        do {
          fVar57 = fVar57 + *pfVar22 * *pfVar12;
          lVar24 = lVar24 + -1;
          pfVar22 = pfVar22 + 1;
          pfVar12 = pfVar12 + 1;
        } while (lVar24 != 0);
      }
    }
  }
  fVar49 = 0.0;
  if (uStack_280 != 0) {
    uVar31 = uStack_280 + 3;
    uVar25 = uStack_280 + 7;
    if (-1 < (long)uStack_280) {
      uVar31 = uStack_280;
      uVar25 = uStack_280;
    }
    if (uStack_280 + 3 < 7) {
      fVar49 = *pfStack_288 * *pfStack_288;
      if (1 < (long)uStack_280) {
        lVar24 = uStack_280 - 1;
        pfVar22 = pfStack_288;
        do {
          pfVar22 = pfVar22 + 1;
          fVar49 = fVar49 + *pfVar22 * *pfVar22;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    else {
      fVar49 = (float)*(undefined8 *)pfStack_288;
      fVar49 = fVar49 * fVar49;
      uVar33 = SUB41(fVar49,0);
      uVar34 = (undefined1)((uint)fVar49 >> 8);
      uVar35 = (undefined1)((uint)fVar49 >> 0x10);
      uVar36 = (undefined1)((uint)fVar49 >> 0x18);
      fVar49 = (float)((ulong)*(undefined8 *)pfStack_288 >> 0x20);
      fVar49 = fVar49 * fVar49;
      uVar37 = SUB41(fVar49,0);
      uVar38 = (undefined1)((uint)fVar49 >> 8);
      uVar39 = (undefined1)((uint)fVar49 >> 0x10);
      uVar40 = (undefined1)((uint)fVar49 >> 0x18);
      fVar49 = (float)*(undefined8 *)(pfStack_288 + 2);
      fVar49 = fVar49 * fVar49;
      uVar41 = SUB41(fVar49,0);
      uVar42 = (undefined1)((uint)fVar49 >> 8);
      uVar43 = (undefined1)((uint)fVar49 >> 0x10);
      uVar44 = (undefined1)((uint)fVar49 >> 0x18);
      fVar49 = (float)((ulong)*(undefined8 *)(pfStack_288 + 2) >> 0x20);
      fVar49 = fVar49 * fVar49;
      uVar45 = SUB41(fVar49,0);
      uVar46 = (undefined1)((uint)fVar49 >> 8);
      uVar47 = (undefined1)((uint)fVar49 >> 0x10);
      uVar48 = (undefined1)((uint)fVar49 >> 0x18);
      if (7 < (long)uStack_280) {
        uVar25 = uVar25 & 0xfffffffffffffff8;
        fVar49 = pfStack_288[4] * pfStack_288[4];
        fVar50 = pfStack_288[5] * pfStack_288[5];
        fVar68 = pfStack_288[6] * pfStack_288[6];
        fVar58 = pfStack_288[7] * pfStack_288[7];
        if (0xf < uStack_280) {
          pauVar26 = (undefined1 (*) [16])(pfStack_288 + 0xc);
          lVar24 = 8;
          do {
            fVar67 = (float)*(undefined8 *)((long)pauVar26[-1] + 8);
            fVar69 = (float)((ulong)*(undefined8 *)((long)pauVar26[-1] + 8) >> 0x20);
            fVar51 = (float)*(undefined8 *)pauVar26[-1];
            fVar66 = (float)((ulong)*(undefined8 *)pauVar26[-1] >> 0x20);
            auVar59 = *pauVar26;
            fVar51 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
                     fVar51 * fVar51;
            uVar33 = SUB41(fVar51,0);
            uVar34 = (undefined1)((uint)fVar51 >> 8);
            uVar35 = (undefined1)((uint)fVar51 >> 0x10);
            uVar36 = (undefined1)((uint)fVar51 >> 0x18);
            fVar51 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) +
                     fVar66 * fVar66;
            uVar37 = SUB41(fVar51,0);
            uVar38 = (undefined1)((uint)fVar51 >> 8);
            uVar39 = (undefined1)((uint)fVar51 >> 0x10);
            uVar40 = (undefined1)((uint)fVar51 >> 0x18);
            fVar51 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
                     fVar67 * fVar67;
            uVar41 = SUB41(fVar51,0);
            uVar42 = (undefined1)((uint)fVar51 >> 8);
            uVar43 = (undefined1)((uint)fVar51 >> 0x10);
            uVar44 = (undefined1)((uint)fVar51 >> 0x18);
            fVar51 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                     fVar69 * fVar69;
            uVar45 = SUB41(fVar51,0);
            uVar46 = (undefined1)((uint)fVar51 >> 8);
            uVar47 = (undefined1)((uint)fVar51 >> 0x10);
            uVar48 = (undefined1)((uint)fVar51 >> 0x18);
            fVar49 = fVar49 + auVar59._0_4_ * auVar59._0_4_;
            fVar50 = fVar50 + auVar59._4_4_ * auVar59._4_4_;
            fVar68 = fVar68 + auVar59._8_4_ * auVar59._8_4_;
            fVar58 = fVar58 + auVar59._12_4_ * auVar59._12_4_;
            lVar24 = lVar24 + 8;
            pauVar26 = pauVar26 + 2;
          } while (lVar24 < (long)uVar25);
        }
        fVar49 = fVar49 + (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
        uVar33 = SUB41(fVar49,0);
        uVar34 = (undefined1)((uint)fVar49 >> 8);
        uVar35 = (undefined1)((uint)fVar49 >> 0x10);
        uVar36 = (undefined1)((uint)fVar49 >> 0x18);
        fVar50 = fVar50 + (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
        uVar37 = SUB41(fVar50,0);
        uVar38 = (undefined1)((uint)fVar50 >> 8);
        uVar39 = (undefined1)((uint)fVar50 >> 0x10);
        uVar40 = (undefined1)((uint)fVar50 >> 0x18);
        fVar68 = fVar68 + (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
        uVar41 = SUB41(fVar68,0);
        uVar42 = (undefined1)((uint)fVar68 >> 8);
        uVar43 = (undefined1)((uint)fVar68 >> 0x10);
        uVar44 = (undefined1)((uint)fVar68 >> 0x18);
        fVar58 = fVar58 + (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
        uVar45 = SUB41(fVar58,0);
        uVar46 = (undefined1)((uint)fVar58 >> 8);
        uVar47 = (undefined1)((uint)fVar58 >> 0x10);
        uVar48 = (undefined1)((uint)fVar58 >> 0x18);
        if ((long)uVar25 < (long)(uVar31 & 0xfffffffffffffffc)) {
          pfVar22 = pfStack_288 + uVar25;
          fVar49 = fVar49 + *pfVar22 * *pfVar22;
          uVar33 = SUB41(fVar49,0);
          uVar34 = (undefined1)((uint)fVar49 >> 8);
          uVar35 = (undefined1)((uint)fVar49 >> 0x10);
          uVar36 = (undefined1)((uint)fVar49 >> 0x18);
          fVar50 = fVar50 + pfVar22[1] * pfVar22[1];
          uVar37 = SUB41(fVar50,0);
          uVar38 = (undefined1)((uint)fVar50 >> 8);
          uVar39 = (undefined1)((uint)fVar50 >> 0x10);
          uVar40 = (undefined1)((uint)fVar50 >> 0x18);
          fVar68 = fVar68 + pfVar22[2] * pfVar22[2];
          uVar41 = SUB41(fVar68,0);
          uVar42 = (undefined1)((uint)fVar68 >> 8);
          uVar43 = (undefined1)((uint)fVar68 >> 0x10);
          uVar44 = (undefined1)((uint)fVar68 >> 0x18);
          fVar58 = fVar58 + pfVar22[3] * pfVar22[3];
          uVar45 = SUB41(fVar58,0);
          uVar46 = (undefined1)((uint)fVar58 >> 8);
          uVar47 = (undefined1)((uint)fVar58 >> 0x10);
          uVar48 = (undefined1)((uint)fVar58 >> 0x18);
        }
      }
      auVar1[1] = uVar34;
      auVar1[0] = uVar33;
      auVar1[2] = uVar35;
      auVar1[3] = uVar36;
      auVar1[4] = uVar37;
      auVar1[5] = uVar38;
      auVar1[6] = uVar39;
      auVar1[7] = uVar40;
      auVar1[8] = uVar41;
      auVar1[9] = uVar42;
      auVar1[10] = uVar43;
      auVar1[0xb] = uVar44;
      auVar1[0xc] = uVar45;
      auVar1[0xd] = uVar46;
      auVar1[0xe] = uVar47;
      auVar1[0xf] = uVar48;
      auVar2[1] = uVar34;
      auVar2[0] = uVar33;
      auVar2[2] = uVar35;
      auVar2[3] = uVar36;
      auVar2[4] = uVar37;
      auVar2[5] = uVar38;
      auVar2[6] = uVar39;
      auVar2[7] = uVar40;
      auVar2[8] = uVar41;
      auVar2[9] = uVar42;
      auVar2[10] = uVar43;
      auVar2[0xb] = uVar44;
      auVar2[0xc] = uVar45;
      auVar2[0xd] = uVar46;
      auVar2[0xe] = uVar47;
      auVar2[0xf] = uVar48;
      auVar59 = NEON_ext(auVar1,auVar2,8,1);
      fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) + auVar59._0_4_ +
               (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) + auVar59._4_4_;
      lVar24 = (long)uStack_280 % 4;
      if (lVar24 != 0 && lVar24 < 0 == SBORROW8(uStack_280,uVar31 & 0xfffffffffffffffc)) {
        pfVar22 = pfStack_288 + ((long)uVar31 >> 2) * 4;
        do {
          fVar49 = fVar49 + *pfVar22 * *pfVar22;
          lVar24 = lVar24 + -1;
          pfVar22 = pfVar22 + 1;
        } while (lVar24 != 0);
      }
    }
  }
  uVar31 = param_2[1];
  pfStack_2c0 = (float *)0x0;
  uStack_2b8 = 0;
  if (uVar31 != 0) {
    lVar24 = 0;
    if (uVar31 != 0) {
      lVar24 = 0x7fffffffffffffff / (long)uVar31;
    }
    if (lVar24 < 3) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1093ee598);
      (*pcVar7)();
    }
  }
  FUN_1093d521c(&pfStack_2c0,3,uVar31);
  param_2 = (undefined8 *)*param_2;
  if (uStack_2b8 != uVar31) {
    FUN_1093d521c(&pfStack_2c0,3,uVar31);
    uVar31 = uStack_2b8;
  }
  uVar13 = uVar31 * 3;
  uVar25 = uVar13 + 3;
  if (-1 < (long)uVar13) {
    uVar25 = uVar13;
  }
  fVar57 = fVar57 / fVar49;
  if (1 < (long)uVar31) {
    lVar24 = 0;
    pfVar22 = pfStack_2c0;
    puVar16 = param_2;
    do {
      uVar65 = *puVar16;
      fVar49 = (float)((ulong)uVar65 >> 0x20) * fVar57;
      fVar50 = (float)((ulong)puVar16[1] >> 0x20) * fVar57;
      *(ulong *)(pfVar22 + 2) =
           CONCAT17((char)((uint)fVar50 >> 0x18),
                    CONCAT16((char)((uint)fVar50 >> 0x10),
                             CONCAT15((char)((uint)fVar50 >> 8),
                                      CONCAT14(SUB41(fVar50,0),(float)puVar16[1] * fVar57))));
      *(ulong *)pfVar22 =
           CONCAT17((char)((uint)fVar49 >> 0x18),
                    CONCAT16((char)((uint)fVar49 >> 0x10),
                             CONCAT15((char)((uint)fVar49 >> 8),
                                      CONCAT14(SUB41(fVar49,0),(float)uVar65 * fVar57))));
      lVar24 = lVar24 + 4;
      pfVar22 = pfVar22 + 4;
      puVar16 = puVar16 + 2;
    } while (lVar24 < (long)(uVar25 & 0xfffffffffffffffc));
  }
  lVar24 = (long)uVar13 % 4;
  if (lVar24 != 0 && (long)(uVar25 & 0xfffffffffffffffc) <= (long)uVar13) {
    pfVar22 = pfStack_2c0 + ((long)uVar25 >> 2) * 4;
    pfVar12 = (float *)(param_2 + ((long)uVar25 >> 2) * 2);
    do {
      *pfVar22 = fVar57 * *pfVar12;
      lVar24 = lVar24 + -1;
      pfVar22 = pfVar22 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar24 != 0);
  }
  uVar31 = uStack_2b8 - 1;
  if (uVar31 < 0xd) {
    lVar24 = 0;
    uVar25 = 0;
    lVar23 = *param_3;
    lVar21 = param_3[1];
    pfVar22 = pfStack_2c0 + 3;
    pfVar12 = pfStack_2c0;
    do {
      uVar13 = uVar25 + 2;
      lVar14 = lVar24 * 0xc;
      if (uVar25 != 0) {
        uVar15 = 0;
        pfVar18 = (float *)(lVar23 + 0xc);
        do {
          fVar49 = *(float *)(lVar23 + uVar15 * 4) * pfStack_2c0[lVar24];
          uVar33 = SUB41(fVar49,0);
          uVar34 = (undefined1)((uint)fVar49 >> 8);
          uVar35 = (undefined1)((uint)fVar49 >> 0x10);
          uVar36 = (undefined1)((uint)fVar49 >> 0x18);
          pfVar20 = pfVar18;
          pfVar29 = pfVar22;
          uVar30 = uVar31;
          if (1 < uStack_2b8) {
            do {
              fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
                       *pfVar20 * *pfVar29;
              uVar33 = SUB41(fVar49,0);
              uVar34 = (undefined1)((uint)fVar49 >> 8);
              uVar35 = (undefined1)((uint)fVar49 >> 0x10);
              uVar36 = (undefined1)((uint)fVar49 >> 0x18);
              uVar30 = uVar30 - 1;
              pfVar20 = pfVar20 + 3;
              pfVar29 = pfVar29 + 3;
            } while (uVar30 != 0);
          }
          *(uint *)((long)auStack_150 + uVar15 * 4 + lVar14) =
               CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
          uVar15 = uVar15 + 1;
          pfVar18 = pfVar18 + 1;
        } while (uVar15 != uVar25);
      }
      puVar16 = (undefined8 *)(lVar23 + uVar25 * 4);
      uVar15 = uVar25;
      do {
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        puVar19 = puVar16;
        pfVar18 = pfVar12;
        lVar27 = lVar21;
        if (0 < lVar21) {
          do {
            fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
                     (float)*puVar19 * *pfVar18;
            uVar33 = SUB41(fVar49,0);
            uVar34 = (undefined1)((uint)fVar49 >> 8);
            uVar35 = (undefined1)((uint)fVar49 >> 0x10);
            uVar36 = (undefined1)((uint)fVar49 >> 0x18);
            fVar49 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) +
                     (float)((ulong)*puVar19 >> 0x20) * *pfVar18;
            uVar37 = SUB41(fVar49,0);
            uVar38 = (undefined1)((uint)fVar49 >> 8);
            uVar39 = (undefined1)((uint)fVar49 >> 0x10);
            uVar40 = (undefined1)((uint)fVar49 >> 0x18);
            lVar27 = lVar27 + -1;
            puVar19 = (undefined8 *)((long)puVar19 + 0xc);
            pfVar18 = pfVar18 + 3;
          } while (lVar27 != 0);
        }
        *(ulong *)((long)auStack_150 + uVar15 * 4 + lVar14) =
             CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13(uVar36,
                                                  CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))))));
        uVar15 = uVar15 + 2;
        puVar16 = puVar16 + 1;
      } while (uVar15 < uVar13);
      if (uVar13 < 3) {
        lVar27 = lVar23 + uVar13 * 4;
        do {
          fVar49 = *(float *)(lVar23 + uVar13 * 4) * pfStack_2c0[lVar24];
          uVar33 = SUB41(fVar49,0);
          uVar34 = (undefined1)((uint)fVar49 >> 8);
          uVar35 = (undefined1)((uint)fVar49 >> 0x10);
          uVar36 = (undefined1)((uint)fVar49 >> 0x18);
          if (1 < uStack_2b8) {
            lVar17 = 0xc;
            uVar15 = uVar31;
            do {
              fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
                       *(float *)(lVar27 + lVar17) * *(float *)((long)pfVar12 + lVar17);
              uVar33 = SUB41(fVar49,0);
              uVar34 = (undefined1)((uint)fVar49 >> 8);
              uVar35 = (undefined1)((uint)fVar49 >> 0x10);
              uVar36 = (undefined1)((uint)fVar49 >> 0x18);
              lVar17 = lVar17 + 0xc;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          *(uint *)((long)auStack_150 + uVar13 * 4 + lVar14) =
               CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
          uVar13 = uVar13 + 1;
          lVar27 = lVar27 + 4;
        } while (uVar13 != 3);
      }
      uVar25 = (ulong)~(uint)uVar25 & 1;
      lVar24 = lVar24 + 1;
      pfVar22 = pfVar22 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar24 != 3);
  }
  else {
    fStack_130 = 0.0;
    auStack_150[1] = 0;
    auStack_150[0] = 0;
    auStack_150[3] = 0;
    auStack_150[2] = 0;
    lVar24 = param_3[1];
    uStack_200 = CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
    if (lVar24 != 0) {
      uStack_230 = 0;
      afStack_228[0] = 0.0;
      afStack_228[1] = 0.0;
      lStack_218 = 3;
      afStack_228[2] = 4.2039e-45;
      afStack_228[3] = 0.0;
      fStack_210 = (float)lVar24;
      fStack_20c = (float)((ulong)lVar24 >> 0x20);
      FUN_1093ecdf0(&fStack_210,afStack_228 + 2,&lStack_218,1);
      uStack_208 = CONCAT44(fStack_20c,fStack_210) * CONCAT44(afStack_228[3],afStack_228[2]);
      uStack_200 = lStack_218 * CONCAT44(fStack_20c,fStack_210);
      FUN_1093eea40(3,3,param_3[1],*param_3,3,pfStack_2c0,3,auStack_150,1,3,&uStack_230,0);
      _free(uStack_230);
      _free(CONCAT44(afStack_228[1],afStack_228[0]));
    }
  }
  afStack_c8[0] = (float)auStack_150[1];
  afStack_c8[1] = (float)((ulong)auStack_150[1] >> 0x20);
  uStack_d0 = auStack_150[0];
  uStack_b8 = auStack_150[3];
  afStack_c8[2] = (float)auStack_150[2];
  afStack_c8[3] = (float)((ulong)auStack_150[2] >> 0x20);
  fStack_b0 = fStack_130;
  uStack_1b8 = 3;
  uStack_1c0 = 3;
  uStack_1dc = 0x100010000000000;
  uStack_1d0 = 0x14;
  uStack_1d4 = 0x100;
  bStack_1d2 = 0;
  lStack_1b0 = 3;
  fVar49 = ABS((float)((ulong)auStack_150[0] >> 0x20));
  uVar65 = NEON_fmax(CONCAT17((char)((uint)fVar49 >> 0x18),
                              CONCAT16((char)((uint)fVar49 >> 0x10),
                                       CONCAT15((char)((uint)fVar49 >> 8),
                                                CONCAT14(SUB41(fVar49,0),ABS((float)auStack_150[0]))
                                               ))),CONCAT44(ABS(afStack_c8[1]),ABS(afStack_c8[0])),4
                    );
  uVar52 = NEON_fmax(CONCAT44(ABS(afStack_c8[3]),ABS(afStack_c8[2])),
                     CONCAT44(ABS((float)((ulong)auStack_150[3] >> 0x20)),ABS((float)auStack_150[3])
                             ),4);
  uVar65 = NEON_fmax(uVar65,uVar52,4);
  fVar50 = (float)((ulong)uVar65 >> 0x20);
  fVar49 = (float)uVar65;
  bVar10 = true;
  if ((fVar50 <= fVar49) && (bVar10 = true, !NAN(fVar50))) {
    bVar10 = false;
  }
  if (!bVar10) {
    fVar50 = fVar49;
  }
  uVar36 = (undefined1)((ulong)uVar65 >> 0x18);
  uVar35 = (undefined1)((ulong)uVar65 >> 0x10);
  uVar34 = (undefined1)((ulong)uVar65 >> 8);
  uVar33 = (undefined1)uVar65;
  if (!NAN(fVar49)) {
    uVar33 = SUB41(fVar50,0);
    uVar34 = (undefined1)((uint)fVar50 >> 8);
    uVar35 = (undefined1)((uint)fVar50 >> 0x10);
    uVar36 = (undefined1)((uint)fVar50 >> 0x18);
  }
  bVar10 = true;
  if ((ABS(fStack_130) <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) &&
     (bVar10 = true, !NAN(fStack_130))) {
    bVar10 = false;
  }
  fVar49 = ABS(fStack_130);
  if (!bVar10) {
    fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
  }
  if (!NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) &&
      !NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))))) {
    uVar33 = SUB41(fVar49,0);
    uVar34 = (undefined1)((uint)fVar49 >> 8);
    uVar35 = (undefined1)((uint)fVar49 >> 0x10);
    uVar36 = (undefined1)((uint)fVar49 >> 0x18);
  }
  uVar40 = 0;
  uVar39 = 0;
  uVar38 = 0;
  uVar37 = 0;
  if ((CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) & 0x7fffffff) < 0x7f800000) {
    lVar24 = 0;
    fVar49 = 1.0;
    if (NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) ||
        (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) != 0.0) {
      fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
    }
    do {
      *(ulong *)(auStack_1a0 + lVar24 + -4) =
           CONCAT44((float)((ulong)*(undefined8 *)((long)&uStack_d0 + lVar24) >> 0x20) / fVar49,
                    (float)*(undefined8 *)((long)&uStack_d0 + lVar24) / fVar49);
      *(float *)((long)afStack_19c + lVar24) = *(float *)((long)afStack_c8 + lVar24) / fVar49;
      lVar24 = lVar24 + 0xc;
    } while (lVar24 != 0x24);
    afStack_228[0] = 0.0;
    afStack_228[1] = 0.0;
    uStack_230 = 0x3f800000;
    lStack_218 = 0;
    afStack_228[2] = 1.0;
    afStack_228[3] = 0.0;
    uStack_208 = 0;
    fStack_210 = 1.0;
    fStack_20c = 1.0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200._0_4_ = 0;
    uStack_200._4_4_ = 0x3f800000;
    uStack_1f0 = 0;
    uStack_1ec = 0x3f800000;
    fVar50 = ABS(fStack_184);
    if (ABS(fStack_184) <= ABS(afStack_19c[2])) {
      fVar50 = ABS(afStack_19c[2]);
    }
    if (fVar50 <= ABS(fStack_1a4)) {
      fVar50 = ABS(fStack_1a4);
    }
    do {
      if (lStack_1b0 < 2) break;
      bVar10 = true;
      lVar24 = 1;
      puVar32 = auStack_1a0;
      uVar31 = (ulong)&uStack_230 | 0xc;
      do {
        lVar23 = 0;
        pfVar12 = &fStack_1a4 + lVar24 * 3;
        puVar16 = &uStack_230;
        pfVar22 = &fStack_1a4;
        do {
          fVar68 = fVar50 * 2.3841858e-07;
          uVar33 = SUB41(fVar68,0);
          uVar34 = (undefined1)((uint)fVar68 >> 8);
          uVar35 = (undefined1)((uint)fVar68 >> 0x10);
          uVar36 = (undefined1)((uint)fVar68 >> 0x18);
          if (fVar68 <= 1.1754944e-38) {
            uVar33 = 0;
            uVar34 = 0;
            uVar35 = 0x80;
            uVar36 = 0;
          }
          fVar68 = (&fStack_1a4)[lVar23 * 3 + lVar24];
          fVar58 = pfVar12[lVar23];
          fVar51 = ABS(fVar58);
          bVar8 = false;
          bVar9 = false;
          bVar11 = false;
          if (ABS(fVar68) == (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) ||
              ABS(fVar68) < (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
            bVar8 = false;
            bVar9 = false;
            bVar11 = true;
            if (!NAN(fVar51) &&
                !NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))))) {
              bVar8 = fVar51 < (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
              bVar9 = fVar51 == (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
              bVar11 = false;
            }
          }
          fVar51 = fVar50;
          if (!bVar9 && bVar8 == bVar11) {
            fVar51 = pfVar12[lVar24];
            uVar33 = SUB41(fVar51,0);
            uVar34 = (undefined1)((uint)fVar51 >> 8);
            uVar35 = (undefined1)((uint)fVar51 >> 0x10);
            uVar36 = (undefined1)((uint)fVar51 >> 0x18);
            afStack_118[1] = (&fStack_1a4)[lVar23 * 4];
            if (1.1754944e-38 <= ABS(fVar58 - fVar68)) {
              fVar66 = (fVar51 + afStack_118[1]) / (fVar58 - fVar68);
              fVar67 = SQRT(fVar66 * fVar66 + 1.0);
              fVar69 = 1.0 / fVar67;
              fVar66 = fVar66 / fVar67;
            }
            else {
              fVar66 = 1.0;
              fVar69 = 0.0;
            }
            if ((fVar66 != 1.0) ||
               (fStack_120 = fVar51, fStack_11c = fVar58, afStack_118[0] = fVar68, fVar69 != 0.0)) {
              fStack_120 = fVar58 * fVar69 + fVar51 * fVar66;
              afStack_118[0] = afStack_118[1] * fVar69 + fVar68 * fVar66;
              fStack_11c = fVar58 * fVar66 - fVar51 * fVar69;
              afStack_118[1] = afStack_118[1] * fVar66 - fVar68 * fVar69;
              uVar33 = SUB41(fStack_120,0);
              uVar34 = (undefined1)((uint)fStack_120 >> 8);
              uVar35 = (undefined1)((uint)fStack_120 >> 0x10);
              uVar36 = (undefined1)((uint)fStack_120 >> 0x18);
            }
            uStack_278 = CONCAT44(uStack_278._4_4_,
                                  CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))));
            afStack_f0[0] = afStack_118[1];
            func_0x0001093eeff0(&uStack_254,&uStack_278,(ulong)&fStack_120 | 8,afStack_f0);
            fVar68 = fVar69 * uStack_254._4_4_ + (float)uStack_254 * fVar66;
            fVar58 = fVar69 * (float)uStack_254 - uStack_254._4_4_ * fVar66;
            if ((fVar68 != 1.0) || (fVar58 != 0.0)) {
              lVar21 = 0;
              do {
                fVar51 = *(float *)(puVar32 + lVar21);
                fVar66 = *(float *)((long)pfVar22 + lVar21);
                *(float *)(puVar32 + lVar21) = fVar58 * fVar66 + fVar51 * fVar68;
                *(float *)((long)pfVar22 + lVar21) = fVar68 * fVar66 + fVar51 * -fVar58;
                lVar21 = lVar21 + 0xc;
              } while (lVar21 != 0x24);
              if (((uStack_1dc & 0x100000000000000) != 0) || ((uStack_1d4 & 1) != 0)) {
                lVar21 = 0;
                do {
                  fVar51 = *(float *)(uVar31 + lVar21);
                  fVar66 = *(float *)((long)puVar16 + lVar21);
                  *(float *)(uVar31 + lVar21) = fVar58 * fVar66 + fVar51 * fVar68;
                  *(float *)((long)puVar16 + lVar21) = fVar68 * fVar66 + fVar51 * -fVar58;
                  lVar21 = lVar21 + 4;
                } while (lVar21 != 0xc);
              }
            }
            if (((float)uStack_254 != 1.0) || (uStack_254._4_4_ != 0.0)) {
              lVar21 = 0x8c;
              pfVar18 = pfVar12;
              do {
                fVar68 = *pfVar18;
                fVar58 = *(float *)((long)puVar16 + lVar21);
                *pfVar18 = fVar58 * -uStack_254._4_4_ + fVar68 * (float)uStack_254;
                *(float *)((long)puVar16 + lVar21) =
                     (float)uStack_254 * fVar58 + fVar68 * uStack_254._4_4_;
                lVar21 = lVar21 + 4;
                pfVar18 = pfVar18 + 1;
              } while (lVar21 != 0x98);
              if (((uStack_1d4 & 0x100) != 0) || ((bStack_1d2 & 1) != 0)) {
                lVar21 = 0x24;
                pfVar18 = &fStack_20c + lVar24 * 3;
                do {
                  fVar68 = *pfVar18;
                  fVar58 = *(float *)((long)puVar16 + lVar21);
                  *pfVar18 = fVar58 * -uStack_254._4_4_ + fVar68 * (float)uStack_254;
                  *(float *)((long)puVar16 + lVar21) =
                       (float)uStack_254 * fVar58 + fVar68 * uStack_254._4_4_;
                  lVar21 = lVar21 + 4;
                  pfVar18 = pfVar18 + 1;
                } while (lVar21 != 0x30);
              }
            }
            bVar10 = false;
            fVar68 = ABS((&fStack_1a4)[lVar24 * 4]);
            fVar58 = ABS((&fStack_1a4)[lVar23 * 4]);
            uVar33 = SUB41(fVar58,0);
            uVar34 = (undefined1)((uint)fVar58 >> 8);
            uVar35 = (undefined1)((uint)fVar58 >> 0x10);
            uVar36 = (undefined1)((uint)fVar58 >> 0x18);
            if (fVar58 <= fVar68) {
              uVar33 = SUB41(fVar68,0);
              uVar34 = (undefined1)((uint)fVar68 >> 8);
              uVar35 = (undefined1)((uint)fVar68 >> 0x10);
              uVar36 = (undefined1)((uint)fVar68 >> 0x18);
            }
            fVar51 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
            if ((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) <= fVar50) {
              fVar51 = fVar50;
            }
          }
          fVar50 = fVar51;
          lVar23 = lVar23 + 1;
          pfVar22 = pfVar22 + 1;
          puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        } while (lVar23 != lVar24);
        lVar24 = lVar24 + 1;
        puVar32 = puVar32 + 4;
        uVar31 = uVar31 + 0xc;
      } while (lVar24 < lStack_1b0);
    } while (!bVar10);
    lVar24 = lStack_1b0;
    if (0 < lStack_1b0) {
      lVar21 = 0;
      lVar23 = 0;
      pfVar22 = &fStack_1a4;
      do {
        fVar50 = *(float *)((long)&fStack_1a4 + lVar21);
        *(float *)((long)&uStack_1e8 + lVar23 * 4) = ABS(fVar50);
        if (fVar50 < 0.0) {
          if (((uStack_1dc._7_1_ | (byte)uStack_1d4) & 1) != 0) {
            fVar50 = -(float)((ulong)*(undefined8 *)(pfVar22 + -0x23) >> 0x20);
            *(ulong *)(pfVar22 + -0x23) =
                 CONCAT17((char)((uint)fVar50 >> 0x18),
                          CONCAT16((char)((uint)fVar50 >> 0x10),
                                   CONCAT15((char)((uint)fVar50 >> 8),
                                            CONCAT14(SUB41(fVar50,0),
                                                     -(float)*(undefined8 *)(pfVar22 + -0x23)))));
            pfVar22[-0x21] = -pfVar22[-0x21];
            lVar24 = lStack_1b0;
          }
        }
        lVar23 = lVar23 + 1;
        pfVar22 = pfVar22 + 3;
        lVar21 = lVar21 + 0x10;
      } while (lVar23 < lVar24);
    }
    fVar50 = (float)((ulong)uStack_1e8 >> 0x20) * fVar49;
    uStack_1e8 = CONCAT17((char)((uint)fVar50 >> 0x18),
                          CONCAT16((char)((uint)fVar50 >> 0x10),
                                   CONCAT15((char)((uint)fVar50 >> 8),
                                            CONCAT14(SUB41(fVar50,0),(float)uStack_1e8 * fVar49))));
    fStack_1e0 = fVar49 * fStack_1e0;
    lStack_1c8 = lVar24;
    if (0 < lVar24) {
      lVar21 = 0;
      lVar23 = 0;
      puVar16 = &uStack_1dc;
      do {
        puVar16 = (undefined8 *)((long)puVar16 + 4);
        fVar49 = *(float *)((long)&uStack_1e8 + (3 - (lVar24 - lVar23)) * 4);
        uVar33 = SUB41(fVar49,0);
        uVar34 = (undefined1)((uint)fVar49 >> 8);
        uVar35 = (undefined1)((uint)fVar49 >> 0x10);
        uVar36 = (undefined1)((uint)fVar49 >> 0x18);
        if (lVar24 - lVar23 < 2) {
          if (fVar49 == 0.0) goto LAB_1093ee220;
        }
        else {
          lVar27 = 0;
          lVar14 = 1;
          pfVar22 = (float *)((long)puVar16 + lVar24 * -4);
          do {
            fVar50 = *pfVar22;
            uVar37 = SUB41(fVar50,0);
            uVar38 = (char)((uint)fVar50 >> 8);
            uVar39 = (char)((uint)fVar50 >> 0x10);
            uVar40 = (char)((uint)fVar50 >> 0x18);
            lVar17 = lVar14;
            if (fVar50 <= fVar49) {
              fVar50 = fVar49;
              uVar37 = uVar33;
              uVar38 = uVar34;
              uVar39 = uVar35;
              uVar40 = uVar36;
              lVar17 = lVar27;
            }
            lVar27 = lVar17;
            uVar36 = uVar40;
            uVar35 = uVar39;
            uVar34 = uVar38;
            uVar33 = uVar37;
            lVar14 = lVar14 + 1;
            pfVar22 = pfVar22 + 1;
            fVar49 = fVar50;
          } while (lVar24 + lVar21 != lVar14);
          if (!NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) &&
              (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) == 0.0) {
LAB_1093ee220:
            lStack_1c8 = lVar23;
            break;
          }
          if (lVar27 != 0) {
            lVar27 = lVar27 + lVar23;
            uVar3 = *(undefined4 *)((long)&uStack_1e8 + lVar23 * 4);
            *(undefined4 *)((long)&uStack_1e8 + lVar23 * 4) =
                 *(undefined4 *)((long)&uStack_1e8 + lVar27 * 4);
            *(undefined4 *)((long)&uStack_1e8 + lVar27 * 4) = uVar3;
            if (((uStack_1dc & 0x100000000000000) != 0) || ((uStack_1d4 & 1) != 0)) {
              puVar19 = (undefined8 *)((long)&uStack_230 + lVar27 * 0xc);
              puVar28 = (undefined8 *)((long)&uStack_230 + lVar23 * 0xc);
              uVar65 = *puVar28;
              *puVar28 = *puVar19;
              *puVar19 = uVar65;
              fVar49 = afStack_228[lVar27 * 3];
              afStack_228[lVar27 * 3] = afStack_228[lVar23 * 3];
              afStack_228[lVar23 * 3] = fVar49;
            }
            if (((uStack_1d4 & 0x100) != 0) || ((bStack_1d2 & 1) != 0)) {
              uVar65 = *(undefined8 *)(&fStack_20c + lVar23 * 3);
              *(undefined8 *)(&fStack_20c + lVar23 * 3) = *(undefined8 *)(&fStack_20c + lVar27 * 3);
              *(undefined8 *)(&fStack_20c + lVar27 * 3) = uVar65;
              uVar3 = *(undefined4 *)((long)&uStack_208 + lVar27 * 0xc + 4);
              *(undefined4 *)((long)&uStack_208 + lVar27 * 0xc + 4) =
                   *(undefined4 *)((long)&uStack_208 + lVar23 * 0xc + 4);
              *(undefined4 *)((long)&uStack_208 + lVar23 * 0xc + 4) = uVar3;
            }
          }
        }
        lVar23 = lVar23 + 1;
        lVar21 = lVar21 + -1;
        lVar24 = lStack_1b0;
      } while (lVar23 < lStack_1b0);
    }
    lVar24 = CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
    uStack_1dc._0_5_ = CONCAT14(1,(undefined4)uStack_1dc);
    uVar33 = (undefined1)uStack_230;
    uVar34 = (undefined1)((ulong)uStack_230 >> 8);
    uVar35 = (undefined1)((ulong)uStack_230 >> 0x10);
    uVar36 = (undefined1)((ulong)uStack_230 >> 0x18);
    uVar37 = (undefined1)((ulong)uStack_230 >> 0x20);
    uVar38 = (undefined1)((ulong)uStack_230 >> 0x28);
    uVar39 = (undefined1)((ulong)uStack_230 >> 0x30);
    uVar40 = (undefined1)((ulong)uStack_230 >> 0x38);
  }
  else {
    uStack_1dc = 0x100010100000003;
    lVar24 = uStack_200;
  }
  fVar51 = fStack_210;
  lVar21 = lStack_218;
  fVar58 = afStack_228[3];
  fVar68 = afStack_228[2];
  fVar50 = afStack_228[1];
  fVar49 = afStack_228[0];
  uStack_200._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
  uStack_200._0_4_ = (undefined4)lVar24;
  lVar23 = 0;
  auVar6._4_8_ = uStack_208;
  auVar6._0_4_ = fStack_20c;
  auVar6._12_4_ = (undefined4)uStack_200;
  auVar5._4_4_ = uStack_1f8;
  auVar5._0_4_ = uStack_200._4_4_;
  auVar5._8_4_ = uStack_1f4;
  auVar4._4_4_ = uStack_1f8;
  auVar4._0_4_ = uStack_200._4_4_;
  auVar4._8_4_ = uStack_1f4;
  auVar4._12_4_ = uStack_1f0;
  auVar59 = NEON_ext(auVar4,auVar6,4,1);
  auVar60._4_12_ = auVar59._4_12_;
  auVar60._0_4_ = auVar59._4_4_;
  auVar62._0_8_ = auVar60._0_8_;
  auVar62._8_4_ = auVar59._12_4_;
  auVar62._12_4_ = auVar59._12_4_;
  auVar61._8_8_ = auVar62._8_8_;
  auVar61._4_4_ = (int)uStack_208;
  auVar61._0_4_ = auVar59._4_4_;
  auVar63._0_12_ = auVar61._0_12_;
  auVar63._12_4_ = (undefined4)uStack_200;
  auVar64 = NEON_ext(auVar63,auVar63,8,1);
  auVar5._12_4_ = uStack_1f0;
  auVar59 = NEON_ext(auVar6,auVar5,4,1);
  auVar53._4_12_ = auVar59._4_12_;
  auVar53._0_4_ = auVar59._4_4_;
  auVar55._0_8_ = auVar53._0_8_;
  auVar55._8_4_ = auVar59._12_4_;
  auVar55._12_4_ = auVar59._12_4_;
  auVar54._8_8_ = auVar55._8_8_;
  auVar54._4_4_ = uStack_1f8;
  auVar54._0_4_ = auVar59._4_4_;
  auVar56._0_12_ = auVar54._0_12_;
  auVar56._12_4_ = uStack_1f0;
  auVar59 = NEON_ext(auVar56,auVar56,8,1);
  uStack_23c = auVar59._8_8_;
  uStack_244 = auVar59._0_8_;
  uStack_24c = auVar64._8_8_;
  uStack_254 = auVar64._0_8_;
  uStack_234 = uStack_1ec;
  uStack_200 = lVar24;
  do {
    fVar66 = *(float *)((long)&uStack_254 + lVar23);
    fVar67 = *(float *)((long)&uStack_254 + lVar23 + 4);
    fVar69 = *(float *)((long)&uStack_24c + lVar23);
    *(ulong *)((long)&uStack_278 + lVar23) =
         CONCAT44((float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) * fVar66 +
                  fVar68 * fVar67 + (float)((ulong)lVar21 >> 0x20) * fVar69,
                  (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) * fVar66 +
                  fVar50 * fVar67 + (float)lVar21 * fVar69);
    *(float *)(auStack_270 + lVar23) = fVar49 * fVar66 + fVar58 * fVar67 + fVar51 * fVar69;
    lVar23 = lVar23 + 0xc;
  } while (lVar23 != 0x24);
  uVar33 = (undefined1)uStack_278;
  uVar34 = (undefined1)((ulong)uStack_278 >> 8);
  uVar35 = (undefined1)((ulong)uStack_278 >> 0x10);
  uVar36 = (undefined1)((ulong)uStack_278 >> 0x18);
  uVar65 = CONCAT44(fStack_260,fStack_264);
  if (0.0 <= (-(fStack_268 * (float)auStack_270._0_4_) + fStack_264 * uStack_278._4_4_) * fStack_260
             + ((float)uStack_278 * (-fStack_25c * fStack_264 + fStack_258 * fStack_268) -
               (float)auStack_270._4_4_ *
               (-(fStack_25c * (float)auStack_270._0_4_) + fStack_258 * uStack_278._4_4_))) {
    uVar52 = CONCAT44(auStack_270._0_4_,fStack_25c);
    fVar50 = (float)auStack_270._4_4_;
    fVar49 = uStack_278._4_4_;
  }
  else {
    lVar24 = 0;
    uStack_e8 = NEON_fmov(0x3f800000,4);
    uStack_e0 = 0xbf800000;
    lVar23 = 8;
    do {
      fVar50 = *(float *)((long)afStack_f0 + lVar23);
      fVar49 = (float)((ulong)*(undefined8 *)((long)&uStack_230 + lVar24) >> 0x20) * fVar50;
      *(ulong *)((long)&uStack_d0 + lVar24) =
           CONCAT17((char)((uint)fVar49 >> 0x18),
                    CONCAT16((char)((uint)fVar49 >> 0x10),
                             CONCAT15((char)((uint)fVar49 >> 8),
                                      CONCAT14(SUB41(fVar49,0),
                                               (float)*(undefined8 *)((long)&uStack_230 + lVar24) *
                                               fVar50))));
      uVar65 = uStack_d0;
      *(float *)((long)afStack_c8 + lVar24) = fVar50 * *(float *)((long)afStack_228 + lVar24);
      fVar51 = fStack_b0;
      fVar58 = afStack_c8[3];
      fVar68 = afStack_c8[2];
      fVar50 = afStack_c8[1];
      fVar49 = afStack_c8[0];
      lVar24 = lVar24 + 0xc;
      lVar23 = lVar23 + 4;
    } while (lVar24 != 0x24);
    lVar24 = 0;
    fVar66 = (float)uStack_b8;
    uVar31 = (ulong)uStack_b8 >> 0x20;
    do {
      fVar67 = *(float *)((long)&uStack_254 + lVar24);
      fVar69 = *(float *)((long)&uStack_254 + lVar24 + 4);
      fVar70 = *(float *)((long)&uStack_24c + lVar24);
      *(ulong *)((long)&fStack_120 + lVar24) =
           CONCAT44((float)((ulong)uVar65 >> 0x20) * fVar67 + fVar68 * fVar69 +
                    (float)uVar31 * fVar70,
                    (float)uVar65 * fVar67 + fVar50 * fVar69 + fVar66 * fVar70);
      *(float *)((long)afStack_118 + lVar24) = fVar49 * fVar67 + fVar58 * fVar69 + fVar51 * fVar70;
      lVar24 = lVar24 + 0xc;
    } while (lVar24 != 0x24);
    uVar33 = SUB41(fStack_120,0);
    uVar34 = (undefined1)((uint)fStack_120 >> 8);
    uVar35 = (undefined1)((uint)fStack_120 >> 0x10);
    uVar36 = (undefined1)((uint)fStack_120 >> 0x18);
    uStack_278 = CONCAT44(fStack_11c,fStack_120);
    auStack_270 = (undefined1  [8])CONCAT44(afStack_118[1],afStack_118[0]);
    fStack_268 = (float)uStack_110;
    fStack_264 = (float)((ulong)uStack_110 >> 0x20);
    fStack_260 = (float)uStack_108;
    fStack_25c = (float)((ulong)uStack_108 >> 0x20);
    fStack_258 = fStack_100;
    uVar65 = NEON_ext(uStack_110,uStack_108,4,1);
    uVar52 = NEON_ext(uStack_108,CONCAT44(afStack_118[1],afStack_118[0]),4,1);
    fVar50 = afStack_118[1];
    fVar49 = fStack_11c;
  }
  fVar68 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) +
           fStack_258 + fStack_268;
  if (fVar68 <= 0.0) {
    bVar8 = fStack_268 != (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
    bVar10 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) <= fStack_268;
    uVar31 = (ulong)(bVar8 && bVar10);
    puVar16 = (undefined8 *)(auStack_270 + 4);
    if (!bVar8 || !bVar10) {
      puVar16 = &uStack_278;
    }
    uVar25 = 2;
    if (fStack_258 <= *(float *)((long)puVar16 + uVar31 * 4)) {
      uVar25 = uVar31;
    }
    lVar24 = 0;
    if (uVar25 != 2) {
      lVar24 = uVar25 + 1;
    }
    lVar23 = lVar24 + -2;
    if (lVar24 + 1U < 3) {
      lVar23 = lVar24 + 1;
    }
    fVar49 = SQRT(((*(float *)(&uStack_278 + uVar25 * 2) - *(float *)(&uStack_278 + lVar24 * 2)) -
                  *(float *)(&uStack_278 + lVar23 * 2)) + 1.0);
    *(float *)((ulong)&uStack_2b0 | uVar25 << 2) = fVar49 * 0.5;
    fVar49 = 0.5 / fVar49;
    _uStack_2a8 = CONCAT44((*(float *)((long)&uStack_278 + lVar23 * 4 + lVar24 * 0xc) -
                           *(float *)((long)&uStack_278 + lVar24 * 4 + lVar23 * 0xc)) * fVar49,
                           uStack_2a8);
    *(float *)((long)&uStack_2b0 + lVar24 * 4) =
         fVar49 * (*(float *)((long)&uStack_278 + lVar24 * 4 + uVar25 * 0xc) +
                  *(float *)((long)&uStack_278 + uVar25 * 4 + lVar24 * 0xc));
    *(float *)((long)&uStack_2b0 + lVar23 * 4) =
         fVar49 * (*(float *)((long)&uStack_278 + lVar23 * 4 + uVar25 * 0xc) +
                  *(float *)((long)&uStack_278 + uVar25 * 4 + lVar23 * 0xc));
  }
  else {
    fVar68 = SQRT(fVar68 + 1.0);
    fVar51 = 0.5 / fVar68;
    fVar58 = ((float)((ulong)uVar65 >> 0x20) - (float)((ulong)uVar52 >> 0x20)) * fVar51;
    fVar68 = fVar68 * 0.5;
    _uStack_2a8 = CONCAT17((char)((uint)fVar68 >> 0x18),
                           CONCAT16((char)((uint)fVar68 >> 0x10),
                                    CONCAT15((char)((uint)fVar68 >> 8),
                                             CONCAT14(SUB41(fVar68,0),(fVar49 - fVar50) * fVar51))))
    ;
    uStack_2b0 = CONCAT17((char)((uint)fVar58 >> 0x18),
                          CONCAT16((char)((uint)fVar58 >> 0x10),
                                   CONCAT15((char)((uint)fVar58 >> 8),
                                            CONCAT14(SUB41(fVar58,0),
                                                     ((float)uVar65 - (float)uVar52) * fVar51))));
  }
  *param_1 = fVar57;
  *(undefined8 *)(param_1 + 6) = _uStack_2a8;
  *(undefined8 *)(param_1 + 4) = uStack_2b0;
  _free(pfStack_2c0);
  _free(pfStack_298);
  _free(pfStack_288);
  return;
}



/* Entry: 1093ee5e4; end: 1093eea3f;  */

void FUN_1093ee5e4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6,long param_7,long param_8,long param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auStack_250 [8];
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  uint uStack_224;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  uint uStack_18c;
  undefined1 *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  long lStack_160;
  long lStack_d8;
  undefined8 *puStack_d0;
  long alStack_c8 [2];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  long *plStack_a0;
  undefined8 *puStack_98;
  long lStack_88;
  long *plStack_78;
  undefined8 *puStack_70;
  long lStack_60;
  undefined4 auStack_50 [4];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2[1];
  fVar21 = (float)lVar11;
  uVar13 = -((ulong)&uStack_ac >> 2);
  uVar15 = uVar13 & 2;
  uVar13 = uVar13 & 3;
  if (uVar13 != 0) {
    uVar18 = 0;
    lVar19 = *param_2;
    pfVar17 = (float *)(lVar19 + 0xc);
    do {
      if (lVar11 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar19 + uVar18 * 4);
        lVar16 = lVar11 + -1;
        pfVar7 = pfVar17;
        if (1 < lVar11) {
          do {
            fVar22 = fVar22 + *pfVar7;
            lVar16 = lVar16 + -1;
            pfVar7 = pfVar7 + 3;
          } while (lVar16 != 0);
        }
      }
      *(float *)((long)&uStack_ac + uVar18 * 4) = fVar22 / fVar21;
      uVar18 = uVar18 + 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar18 != uVar13);
  }
  uVar18 = (uVar15 ^ 2) + uVar13;
  if (uVar15 == 0) {
    lVar16 = *param_2;
    uVar15 = lVar11 - 1U & 0xfffffffffffffffc;
    lVar19 = lVar16 + uVar13 * 4;
    puVar14 = (undefined8 *)(lVar19 + 0x18);
    do {
      if (lVar11 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar16 + uVar13 * 4);
        if (lVar11 < 5) {
          param_4 = (undefined8 *)0x1;
        }
        else {
          lVar9 = 1;
          puVar6 = puVar14;
          do {
            uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                              (float)((ulong)*(undefined8 *)((long)puVar6 + -0xc) >> 0x20) +
                              (float)((ulong)*puVar6 >> 0x20) +
                              (float)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20) +
                              (float)((ulong)puVar6[3] >> 0x20),
                              (float)uVar23 +
                              (float)*(undefined8 *)((long)puVar6 + -0xc) + (float)*puVar6 +
                              (float)*(undefined8 *)((long)puVar6 + 0xc) + (float)puVar6[3]);
            lVar9 = lVar9 + 4;
            puVar6 = puVar6 + 6;
            param_4 = (undefined8 *)(uVar15 + 1);
          } while (lVar9 < (long)uVar15);
        }
        lVar9 = lVar11 - (long)param_4;
        if (lVar9 != 0 && (long)param_4 <= lVar11) {
          puVar6 = (undefined8 *)(lVar19 + (long)param_4 * 0xc);
          do {
            param_4 = (undefined8 *)((long)puVar6 + 0xc);
            uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                              (float)uVar23 + (float)*puVar6);
            lVar9 = lVar9 + -1;
            puVar6 = param_4;
          } while (lVar9 != 0);
        }
      }
      *(ulong *)((long)&uStack_ac + uVar13 * 4) =
           CONCAT44((float)((ulong)uVar23 >> 0x20) / fVar21,(float)uVar23 / fVar21);
      uVar13 = uVar13 + 2;
      puVar14 = puVar14 + 1;
      lVar19 = lVar19 + 8;
    } while (uVar13 < uVar18);
  }
  if (uVar18 < 3) {
    lVar19 = *param_2;
    pfVar17 = (float *)(lVar19 + uVar18 * 4 + 0xc);
    do {
      if (lVar11 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar19 + uVar18 * 4);
        pfVar7 = pfVar17;
        lVar16 = lVar11 + -1;
        if (1 < lVar11) {
          do {
            fVar22 = fVar22 + *pfVar7;
            lVar16 = lVar16 + -1;
            pfVar7 = pfVar7 + 3;
          } while (lVar16 != 0);
        }
      }
      *(float *)((long)&uStack_ac + uVar18 * 4) = fVar22 / fVar21;
      uVar18 = uVar18 + 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar18 != 3);
  }
  lVar19 = param_3[1];
  fVar21 = (float)lVar19;
  uVar13 = -((ulong)&uStack_b8 >> 2);
  uVar15 = uVar13 & 2;
  uVar13 = uVar13 & 3;
  if (uVar13 != 0) {
    uVar18 = 0;
    lVar16 = *param_3;
    pfVar17 = (float *)(lVar16 + 0xc);
    do {
      if (lVar19 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar16 + uVar18 * 4);
        pfVar7 = pfVar17;
        lVar9 = lVar19 + -1;
        if (1 < lVar19) {
          do {
            fVar22 = fVar22 + *pfVar7;
            lVar9 = lVar9 + -1;
            pfVar7 = pfVar7 + 3;
          } while (lVar9 != 0);
          param_4 = (undefined8 *)0x0;
        }
      }
      *(float *)((long)&uStack_b8 + uVar18 * 4) = fVar22 / fVar21;
      uVar18 = uVar18 + 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar18 != uVar13);
  }
  uVar18 = (uVar15 ^ 2) + uVar13;
  if (uVar15 == 0) {
    lVar9 = *param_3;
    uVar15 = lVar19 - 1U & 0xfffffffffffffffc;
    lVar16 = lVar9 + uVar13 * 4;
    puVar14 = (undefined8 *)(lVar16 + 0x18);
    do {
      if (lVar19 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar9 + uVar13 * 4);
        if (lVar19 < 5) {
          param_5 = (undefined8 *)0x1;
        }
        else {
          lVar10 = 1;
          puVar6 = puVar14;
          do {
            uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                              (float)((ulong)*(undefined8 *)((long)puVar6 + -0xc) >> 0x20) +
                              (float)((ulong)*puVar6 >> 0x20) +
                              (float)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20) +
                              (float)((ulong)puVar6[3] >> 0x20),
                              (float)uVar23 +
                              (float)*(undefined8 *)((long)puVar6 + -0xc) + (float)*puVar6 +
                              (float)*(undefined8 *)((long)puVar6 + 0xc) + (float)puVar6[3]);
            lVar10 = lVar10 + 4;
            puVar6 = puVar6 + 6;
            param_5 = (undefined8 *)(uVar15 + 1);
          } while (lVar10 < (long)uVar15);
        }
        lVar10 = lVar19 - (long)param_5;
        if (lVar10 != 0 && (long)param_5 <= lVar19) {
          puVar6 = (undefined8 *)(lVar16 + (long)param_5 * 0xc);
          do {
            param_5 = (undefined8 *)((long)puVar6 + 0xc);
            uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                              (float)uVar23 + (float)*puVar6);
            lVar10 = lVar10 + -1;
            puVar6 = param_5;
          } while (lVar10 != 0);
        }
      }
      param_4 = (undefined8 *)((long)&uStack_b8 + uVar13 * 4);
      *param_4 = CONCAT44((float)((ulong)uVar23 >> 0x20) / fVar21,(float)uVar23 / fVar21);
      uVar13 = uVar13 + 2;
      puVar14 = puVar14 + 1;
      lVar16 = lVar16 + 8;
    } while (uVar13 < uVar18);
  }
  if (uVar18 < 3) {
    lVar16 = *param_3;
    pfVar17 = (float *)(lVar16 + uVar18 * 4 + 0xc);
    do {
      if (lVar19 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar16 + uVar18 * 4);
        pfVar7 = pfVar17;
        lVar9 = lVar19 + -1;
        if (1 < lVar19) {
          do {
            fVar22 = fVar22 + *pfVar7;
            lVar9 = lVar9 + -1;
            pfVar7 = pfVar7 + 3;
          } while (lVar9 != 0);
        }
      }
      *(float *)((long)&uStack_b8 + uVar18 * 4) = fVar22 / fVar21;
      uVar18 = uVar18 + 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar18 != 3);
  }
  puStack_70 = &uStack_ac;
  plStack_78 = param_2;
  lStack_60 = lVar11;
  FUN_1093ef170(alStack_c8,&plStack_78);
  lStack_88 = param_3[1];
  puStack_98 = &uStack_b8;
  plStack_a0 = param_3;
  FUN_1093ef170(&lStack_d8,&plStack_a0);
  plVar8 = &lStack_d8;
  FUN_1093ed6c0(auStack_50,alStack_c8);
  _free(lStack_d8);
  lVar11 = alStack_c8[0];
  _free();
  *param_1 = uStack_ac;
  *(undefined4 *)(param_1 + 1) = uStack_a4;
  *(undefined8 *)((long)param_1 + 0xc) = uStack_b8;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_b0;
  *(undefined4 *)(param_1 + 3) = auStack_50[0];
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _free(lStack_d8);
  _free(alStack_c8[0]);
  uVar23 = uStack_40;
  __Unwind_Resume();
  puVar12 = auStack_250;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = (long *)puStack_d0[3];
  puStack_1d0 = (undefined8 *)puStack_d0[4];
  lVar19 = puStack_d0[2];
  lStack_200 = lVar19;
  if (lVar11 <= lVar19) {
    lStack_200 = lVar11;
  }
  plVar1 = plVar20;
  if ((long)plVar8 <= (long)plVar20) {
    plVar1 = plVar8;
  }
  uVar13 = lStack_200 * (long)puStack_1d0;
  puStack_220 = param_5;
  lStack_218 = param_7;
  lStack_1f0 = param_9;
  lStack_1d8 = param_6;
  lStack_1b0 = param_8;
  if (uVar13 >> 0x3e == 0) {
    puStack_188 = (undefined1 *)*puStack_d0;
    if (puStack_188 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(uVar13 * 4);
      if (uVar13 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar12 = auStack_250 + -((ulong)(puVar5 + 0x1e) & 0xfffffffffffffff0);
        puStack_240 = auStack_250 + -((ulong)(puVar5 + 0x1e) & 0xfffffffffffffff0);
        puStack_188 = auStack_250 + -((ulong)(puVar5 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_240 = puVar5;
        puStack_188 = puVar5;
        if (puVar5 == (undefined1 *)0x0) goto LAB_1093eee5c;
      }
    }
    else {
      puStack_240 = (undefined1 *)0x0;
      puVar12 = auStack_250;
    }
    uVar15 = (long)plVar1 * (long)puStack_1d0;
    if (uVar15 >> 0x3e == 0) {
      uStack_238 = uVar15;
      uStack_230 = uVar13;
      if ((undefined1 *)puStack_d0[1] == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(uVar15 * 4);
        if (uVar15 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar12 = puVar12 + -((ulong)(puVar5 + 0x1e) & 0xfffffffffffffff0);
          puVar5 = puVar12;
          puStack_248 = puVar12;
          goto LAB_1093eebd4;
        }
        _malloc();
        puStack_248 = puVar5;
        if (puVar5 != (undefined1 *)0x0) goto LAB_1093eebd4;
      }
      else {
        puStack_248 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)puStack_d0[1];
LAB_1093eebd4:
        uStack_224 = (uint)((puStack_1d0 != param_4 || lVar11 <= lVar19) ||
                           (long)plVar20 < (long)plVar8);
        if (0 < lVar11) {
          lStack_1f8 = 0;
          lStack_210 = lStack_200 << 2;
          lStack_1a0 = lStack_d8 * (long)plVar1 * 4;
          lStack_198 = lStack_d8;
          lStack_1e8 = (long)puStack_1d0 * lStack_1b0 * 4;
          lStack_1a8 = (long)plVar1 << 2;
          lStack_208 = lVar11;
          puStack_1e0 = param_4;
          do {
            lVar11 = lStack_1f8 + lStack_200;
            lVar19 = lVar11;
            if (lStack_208 <= lVar11) {
              lVar19 = lStack_208;
            }
            if (0 < (long)param_4) {
              lStack_180 = lVar19 - lStack_1f8;
              lStack_1c8 = (long)puStack_220 + lStack_1f8 * 4;
              uStack_18c = uStack_224;
              if (lStack_1f8 == 0) {
                uStack_18c = 1;
              }
              lStack_1b8 = lStack_218;
              puVar14 = (undefined8 *)0x0;
              lStack_1f8 = lVar11;
              do {
                puVar6 = (undefined8 *)((long)puVar14 + (long)puStack_1d0);
                puVar2 = puVar6;
                if ((long)param_4 <= (long)puVar6) {
                  puVar2 = param_4;
                }
                lVar11 = (long)puVar2 - (long)puVar14;
                lStack_178 = lStack_1c8 + (long)puVar14 * lStack_1d8 * 4;
                lStack_170 = lStack_1d8;
                FUN_1093df154(&uStack_161,puStack_188,&lStack_178,lVar11,lStack_180,0,0);
                puStack_1c0 = puVar6;
                if (0 < (long)plVar8) {
                  lVar10 = 0;
                  lVar19 = 0;
                  plVar20 = plVar1;
                  lVar16 = lStack_1f0;
                  lVar9 = lStack_1b8;
                  do {
                    plVar3 = plVar8;
                    if ((long)plVar20 <= (long)plVar8) {
                      plVar3 = plVar20;
                    }
                    if (uStack_18c != 0) {
                      lStack_170 = lStack_1b0;
                      lStack_178 = lVar9;
                      FUN_1093eef2c(&uStack_162,puVar5,&lStack_178,lVar11,(long)plVar3 + lVar10,0,0)
                      ;
                    }
                    lStack_170 = lStack_198;
                    lStack_178 = lVar16;
                    *(undefined8 *)(puVar12 + -0x18) = 0;
                    *(undefined8 *)(puVar12 + -0x10) = 0;
                    *(undefined8 *)(puVar12 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(uVar23,&uStack_163,&lStack_178,puStack_188,puVar5,lStack_180,
                                  lVar11,(long)plVar3 + lVar10,0xffffffffffffffff);
                    lVar19 = lVar19 + (long)plVar1;
                    lVar16 = lVar16 + lStack_1a0;
                    lVar9 = lVar9 + lStack_1a8;
                    plVar20 = (long *)((long)plVar20 + (long)plVar1);
                    lVar10 = lVar10 - (long)plVar1;
                  } while (lVar19 < (long)plVar8);
                }
                lStack_1b8 = lStack_1b8 + lStack_1e8;
                puVar14 = puStack_1c0;
                param_4 = puStack_1e0;
                lVar11 = lStack_1f8;
              } while ((long)puStack_1c0 < (long)puStack_1e0);
            }
            lStack_1f8 = lVar11;
            lStack_1f0 = lStack_1f0 + lStack_210;
          } while (lStack_1f8 < lStack_208);
        }
        if (0x8000 < uStack_238) {
          _free(puStack_248);
        }
        if (0x8000 < uStack_230) {
          _free(puStack_240);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1093eeec4;
    }
  }
  else {
LAB_1093eee5c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1093eeec4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1093eeec8);
  (*pcVar4)();
}



/* Entry: 1093eea40; end: 1093eef2b;  */

void FUN_1093eea40(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined4 param_10,
                  undefined4 param_11,long param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar5 = auStack_170;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_13[3];
  lStack_f0 = param_13[4];
  lVar9 = param_13[2];
  lStack_120 = lVar9;
  if (param_2 <= lVar9) {
    lStack_120 = param_2;
  }
  lVar1 = lVar12;
  if (param_3 <= lVar12) {
    lVar1 = param_3;
  }
  uVar7 = lStack_120 * lStack_f0;
  lStack_140 = param_5;
  lStack_138 = param_7;
  lStack_110 = param_9;
  lStack_f8 = param_6;
  lStack_d0 = param_8;
  if (uVar7 >> 0x3e == 0) {
    puStack_a8 = (undefined1 *)*param_13;
    if (puStack_a8 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 * 4);
      if (uVar7 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_160 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_a8 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_160 = puVar4;
        puStack_a8 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_1093eee5c;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x0;
      puVar5 = auStack_170;
    }
    uVar6 = lVar1 * lStack_f0;
    if (uVar6 >> 0x3e == 0) {
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      if ((undefined1 *)param_13[1] == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 4);
        if (uVar6 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puVar4 = puVar5;
          puStack_168 = puVar5;
          goto LAB_1093eebd4;
        }
        _malloc();
        puStack_168 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_1093eebd4;
      }
      else {
        puStack_168 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)param_13[1];
LAB_1093eebd4:
        uStack_144 = (uint)((lStack_f0 != param_4 || param_2 <= lVar9) || lVar12 < param_3);
        if (0 < param_2) {
          lStack_118 = 0;
          lStack_130 = lStack_120 << 2;
          lStack_c0 = param_12 * lVar1 * 4;
          lStack_b8 = param_12;
          lStack_108 = lStack_f0 * lStack_d0 * 4;
          lStack_c8 = lVar1 << 2;
          lStack_128 = param_2;
          lStack_100 = param_4;
          do {
            lVar12 = lStack_118 + lStack_120;
            lVar9 = lVar12;
            if (lStack_128 <= lVar12) {
              lVar9 = lStack_128;
            }
            if (0 < param_4) {
              lStack_a0 = lVar9 - lStack_118;
              lStack_e8 = lStack_140 + lStack_118 * 4;
              uStack_ac = uStack_144;
              if (lStack_118 == 0) {
                uStack_ac = 1;
              }
              lStack_d8 = lStack_138;
              lVar9 = 0;
              lStack_118 = lVar12;
              do {
                lVar12 = lVar9 + lStack_f0;
                lVar10 = lVar12;
                if (param_4 <= lVar12) {
                  lVar10 = param_4;
                }
                lVar10 = lVar10 - lVar9;
                lStack_98 = lStack_e8 + lVar9 * lStack_f8 * 4;
                lStack_90 = lStack_f8;
                FUN_1093df154(&uStack_81,puStack_a8,&lStack_98,lVar10,lStack_a0,0,0);
                lStack_e0 = lVar12;
                if (0 < param_3) {
                  lVar13 = 0;
                  lVar12 = 0;
                  lVar8 = lVar1;
                  lVar9 = lStack_110;
                  lVar11 = lStack_d8;
                  do {
                    lVar2 = param_3;
                    if (lVar8 <= param_3) {
                      lVar2 = lVar8;
                    }
                    if (uStack_ac != 0) {
                      lStack_90 = lStack_d0;
                      lStack_98 = lVar11;
                      FUN_1093eef2c(&uStack_82,puVar4,&lStack_98,lVar10,lVar2 + lVar13,0,0);
                    }
                    lStack_90 = lStack_b8;
                    lStack_98 = lVar9;
                    *(undefined8 *)(puVar5 + -0x18) = 0;
                    *(undefined8 *)(puVar5 + -0x10) = 0;
                    *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(param_1,&uStack_83,&lStack_98,puStack_a8,puVar4,lStack_a0,lVar10,
                                  lVar2 + lVar13,0xffffffffffffffff);
                    lVar12 = lVar12 + lVar1;
                    lVar9 = lVar9 + lStack_c0;
                    lVar11 = lVar11 + lStack_c8;
                    lVar8 = lVar8 + lVar1;
                    lVar13 = lVar13 - lVar1;
                  } while (lVar12 < param_3);
                }
                lStack_d8 = lStack_d8 + lStack_108;
                lVar9 = lStack_e0;
                param_4 = lStack_100;
                lVar12 = lStack_118;
              } while (lStack_e0 < lStack_100);
            }
            lStack_118 = lVar12;
            lStack_110 = lStack_110 + lStack_130;
          } while (lStack_118 < lStack_128);
        }
        if (0x8000 < uStack_158) {
          _free(puStack_168);
        }
        if (0x8000 < uStack_150) {
          _free(puStack_160);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1093eeec4;
    }
  }
  else {
LAB_1093eee5c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1093eeec4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1093eeec8);
  (*pcVar3)();
}



/* Entry: 1093eef2c; end: 1093ef08f;  */

void FUN_1093eef2c(undefined8 param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar1 = param_5 + 3;
  if (-1 < (long)param_5) {
    uVar1 = param_5;
  }
  uVar4 = uVar1 & 0xfffffffffffffffc;
  if ((long)param_5 < 4) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    do {
      if (0 < param_4) {
        lVar9 = 0;
        lVar10 = lVar5 * 4;
        lVar5 = param_4 * 4 + lVar5;
        do {
          puVar2 = (undefined8 *)(*param_3 + param_3[1] * lVar9 * 4 + lVar7 * 4);
          uVar11 = *puVar2;
          puVar3 = (undefined8 *)(param_2 + lVar10 + lVar9 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar11;
          lVar9 = lVar9 + 1;
        } while (param_4 != lVar9);
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 < (long)uVar4);
  }
  if ((long)uVar4 < (long)param_5) {
    lVar7 = param_3[1];
    puVar6 = (undefined4 *)(*param_3 + ((long)uVar1 >> 2) * 0x10);
    do {
      puVar8 = puVar6;
      lVar10 = param_4;
      if (0 < param_4) {
        do {
          *(undefined4 *)(param_2 + lVar5 * 4) = *puVar8;
          lVar5 = lVar5 + 1;
          puVar8 = puVar8 + lVar7;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != param_5);
  }
  return;
}



/* Entry: 1093ef090; end: 1093ef16f;  */

long * FUN_1093ef090(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar3;
    }
    if (lVar1 < 1) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1093ef15c);
      (*pcVar2)();
    }
  }
  FUN_1093c61bc(param_1,lVar3,1);
  lVar3 = param_2[1];
  if (param_1[1] != lVar3) {
    FUN_1093c61bc(param_1,lVar3,1);
    lVar3 = param_1[1];
  }
  if (0 < lVar3) {
    pfVar4 = (float *)*param_1;
    pfVar5 = (float *)(*param_2 + 8);
    do {
      fVar6 = (float)*(undefined8 *)(pfVar5 + -2);
      fVar7 = (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20);
      *pfVar4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + *pfVar5 * *pfVar5);
      lVar3 = lVar3 + -1;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 3;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1093ef170; end: 1093ef26f;  */

long * FUN_1093ef170(long *param_1,undefined8 *param_2)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    lVar6 = 0;
    if (lVar3 != 0) {
      lVar6 = 0x7fffffffffffffff / lVar3;
    }
    if (lVar6 < 3) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1093ef25c);
      (*pcVar2)();
    }
  }
  FUN_1093d521c(param_1,3);
  pfVar1 = (float *)param_2[1];
  lVar6 = *(long *)*param_2;
  lVar3 = param_2[3];
  if (param_1[1] != lVar3) {
    FUN_1093d521c(param_1,3);
    lVar3 = param_1[1];
  }
  if (0 < lVar3) {
    pfVar4 = (float *)(lVar6 + 8);
    pfVar5 = (float *)(*param_1 + 8);
    do {
      pfVar5[-2] = pfVar4[-2] - *pfVar1;
      pfVar5[-1] = pfVar4[-1] - pfVar1[1];
      *pfVar5 = *pfVar4 - pfVar1[2];
      lVar3 = lVar3 + -1;
      pfVar4 = pfVar4 + 3;
      pfVar5 = pfVar5 + 3;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1093ef270; end: 1093ef3df;  */

void FUN_1093ef270(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  ppuVar1 = &PTR_PTR_1132d18f0;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x50);
  }
  if ((*(byte *)(ppuVar1 + 2) >> 2 & 1) != 0) {
    puVar2 = (undefined8 *)0x240;
    __Znwm();
    puVar2[0x3f] = 0;
    puVar2[0x3e] = 0;
    puVar2[0x41] = 0;
    puVar2[0x40] = 0;
    puVar2[0x3b] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x3d] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x37] = 0;
    puVar2[0x36] = 0;
    puVar2[0x39] = 0;
    puVar2[0x38] = 0;
    puVar2[0x33] = 0;
    puVar2[0x32] = 0;
    puVar2[0x35] = 0;
    puVar2[0x34] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x31] = 0;
    puVar2[0x30] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x27] = 0;
    puVar2[0x26] = 0;
    puVar2[0x29] = 0;
    puVar2[0x28] = 0;
    puVar2[0x23] = 0;
    puVar2[0x22] = 0;
    puVar2[0x25] = 0;
    puVar2[0x24] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x20] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110af5748;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    puVar2[0x12] = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0x13) = 0x3f800000;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0x3f800000;
    *(undefined4 *)((long)puVar2 + 0xcc) = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x20] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x22] = 0;
    puVar2[0x21] = 0;
    puVar2[0x24] = 0;
    puVar2[0x23] = 0;
    puVar2[0x26] = 0;
    puVar2[0x25] = 0;
    puVar2[0x27] = &PTR_FUN_110aec578;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2e] = &PTR_FUN_110aec578;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x38] = 0;
    puVar2[0x37] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x39] = 0;
    puVar2[0x36] = 0;
    puVar2[0x35] = 0;
    puVar2[0x3b] = &PTR_FUN_110aec578;
    puVar2[0x3d] = 0;
    puVar2[0x3e] = 0;
    puVar2[0x3f] = 0;
    puVar2[0x43] = 0;
    puVar2[0x42] = 0;
    puVar2[0x45] = 0;
    puVar2[0x44] = 0;
    puVar2[0x47] = 0;
    puVar2[0x46] = 0;
    *param_1 = puVar2;
    FUN_1093ef574();
  }
  return;
}



/* Entry: 1093ef3e0; end: 1093ef407;  */

void FUN_1093ef3e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109d0503c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1093ef408; end: 1093ef55b;  */

undefined8 * FUN_1093ef408(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af5748;
  FUN_10938cda4(param_1 + 5,0);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  if (*(char *)((long)param_1 + 0x227) < '\0') {
    __ZdlPv(param_1[0x42]);
  }
  func_0x0001093131f4(param_1 + 0x3b);
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    __ZdlPv(param_1[0x35]);
  }
  func_0x0001093131f4(param_1 + 0x2e);
  func_0x0001093131f4(param_1 + 0x27);
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  func_0x000109379fe8(param_1 + 0x14);
  func_0x000109379fe8(param_1 + 0xf);
  puStack_28 = param_1 + 0xc;
  func_0x000104c607c8(&puStack_28);
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 7) == '\x01') && (plVar4 = (long *)param_1[6], plVar4 != (long *)0x0)) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10938cda4(param_1 + 5,0);
  FUN_1093ef3e0(param_1 + 4,0);
  return param_1;
}



/* Entry: 1093ef55c; end: 1093ef55f;  */

undefined8 * FUN_1093ef55c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af5748;
  FUN_10938cda4(param_1 + 5,0);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  if (*(char *)((long)param_1 + 0x227) < '\0') {
    __ZdlPv(param_1[0x42]);
  }
  func_0x0001093131f4(param_1 + 0x3b);
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    __ZdlPv(param_1[0x35]);
  }
  func_0x0001093131f4(param_1 + 0x2e);
  func_0x0001093131f4(param_1 + 0x27);
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  func_0x000109379fe8(param_1 + 0x14);
  func_0x000109379fe8(param_1 + 0xf);
  puStack_28 = param_1 + 0xc;
  func_0x000104c607c8(&puStack_28);
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 7) == '\x01') && (plVar4 = (long *)param_1[6], plVar4 != (long *)0x0)) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10938cda4(param_1 + 5,0);
  FUN_1093ef3e0(param_1 + 4,0);
  return param_1;
}



/* Entry: 1093ef560; end: 1093ef573;  */

void FUN_1093ef560(void)

{
  FUN_1093ef408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093ef574; end: 1093f0527;  */

void FUN_1093ef574(long param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined **ppuVar9;
  ulong *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  char cStack_69;
  undefined1 *puStack_68;
  
  ppuVar9 = &PTR_PTR_1132d18f0;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x50);
  }
  ppuVar11 = &PTR_PTR_1132d1630;
  if ((undefined **)ppuVar9[5] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[5];
  }
  *(undefined ***)(param_1 + 8) = ppuVar11;
  cVar4 = *(char *)(((ulong)ppuVar11[8] & 0xfffffffffffffffc) + 0x17);
  if (cVar4 < '\0') {
    if (*(long *)(((ulong)ppuVar11[8] & 0xfffffffffffffffc) + 8) != 0) goto LAB_1093ef5e8;
  }
  else if (cVar4 != '\0') {
LAB_1093ef5e8:
    uStack_b0 = 0;
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    puVar7 = ppuVar11[3];
    ppuVar9 = ppuVar11 + 3;
    if (((ulong)puVar7 & 1) != 0) {
      ppuVar9 = (undefined **)(puVar7 + 7);
    }
    if (*(int *)(ppuVar11 + 4) != 0) {
      lVar16 = (long)*(int *)(ppuVar11 + 4) << 3;
      do {
        func_0x000107c2ac70(&uStack_b0,*ppuVar9);
        lVar16 = lVar16 + -8;
        ppuVar9 = ppuVar9 + 1;
      } while (lVar16 != 0);
    }
    FUN_10937dae0(&uStack_80,&uStack_b0);
    puStack_68 = (undefined1 *)&uStack_b0;
    func_0x000104c607c8(&puStack_68);
    lVar16 = *(long *)(param_1 + 0x48);
    if (lVar16 != 0) {
      *(long *)(param_1 + 0x50) = lVar16;
      __ZdlPv();
      *(long *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *(undefined8 *)(param_1 + 0x50) = uStack_78;
    *(undefined8 *)(param_1 + 0x48) = uStack_80;
    *(ulong *)(param_1 + 0x58) = CONCAT17(cStack_69,uStack_70);
  }
  func_0x000104c60808(param_1 + 0x60);
  ppuVar9 = &PTR_PTR_1132d18a0;
  if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x58);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[3] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[3];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xd8,puVar7);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_90 = 0x3f800000;
  ppuVar9 = &PTR_PTR_1132d18a0;
  if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x58);
  }
  uVar8 = *(uint *)(ppuVar9 + 2);
  if ((((uVar8 >> 1 & 1) != 0) && ((uVar8 >> 2 & 1) != 0)) && ((uVar8 >> 3 & 1) != 0)) {
    ppuVar9 = &PTR_PTR_1132d19d0;
    if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_2 + 0x60);
    }
    if (*(char *)((long)ppuVar9 + 0x12) < '\0') {
      *(undefined1 *)(param_1 + 200) = 1;
      if (((*(byte *)(param_2 + 0x12) & 1) == 0) || (*(int *)(param_2 + 0x9c) == 0)) {
        FUN_10937e740(&uStack_80,&UNK_10f56c3e5);
        FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f500fc6,0x57,&uStack_80);
      }
      else {
        *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0x9c);
        if (((*(byte *)(param_2 + 0x12) >> 1 & 1) != 0) && (*(int *)(param_2 + 0xa0) != 0)) {
          *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xa0);
          ppuVar9 = &PTR_PTR_1132d18a0;
          if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
            ppuVar9 = *(undefined ***)(param_2 + 0x58);
          }
          ppuVar11 = &PTR_PTR_1132d15f8;
          if ((undefined **)ppuVar9[4] != (undefined **)0x0) {
            ppuVar11 = (undefined **)ppuVar9[4];
          }
          if (*(int *)(ppuVar11 + 6) == 1) {
            puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
          }
          else {
            puVar7 = &DAT_11383d918;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0xf0,puVar7);
          ppuVar9 = &PTR_PTR_1132d18a0;
          if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
            ppuVar9 = *(undefined ***)(param_2 + 0x58);
          }
          ppuVar11 = &PTR_PTR_1132d15f8;
          if ((undefined **)ppuVar9[5] != (undefined **)0x0) {
            ppuVar11 = (undefined **)ppuVar9[5];
          }
          if (*(int *)(ppuVar11 + 6) == 1) {
            puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
          }
          else {
            puVar7 = &DAT_11383d918;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0x108,puVar7);
          ppuVar9 = &PTR_PTR_1132d18a0;
          if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
            ppuVar9 = *(undefined ***)(param_2 + 0x58);
          }
          ppuVar11 = &PTR_PTR_1132d15f8;
          if ((undefined **)ppuVar9[6] != (undefined **)0x0) {
            ppuVar11 = (undefined **)ppuVar9[6];
          }
          if (*(int *)(ppuVar11 + 6) == 1) {
            puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
          }
          else {
            puVar7 = &DAT_11383d918;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0x120,puVar7);
          ppuVar9 = &PTR_PTR_1132d19d0;
          if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
            ppuVar9 = *(undefined ***)(param_2 + 0x60);
          }
          ppuVar11 = &PTR_PTR_1132d15f8;
          if ((undefined **)ppuVar9[0x1a] != (undefined **)0x0) {
            ppuVar11 = (undefined **)ppuVar9[0x1a];
          }
          if (*(int *)(ppuVar11 + 6) == 1) {
            puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
          }
          else {
            puVar7 = &DAT_11383d918;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0x228,puVar7);
          func_0x000107c2827c(&uStack_b0,param_1 + 0x228,param_1 + 0x228);
          goto LAB_1093ef708;
        }
        FUN_10937e740(&uStack_80,&UNK_10f56c41a);
        FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f500fc6,0x5c,&uStack_80);
      }
      if (cStack_69 < '\0') {
        __ZdlPv(uStack_80);
      }
      goto LAB_1093f02d4;
    }
  }
LAB_1093ef708:
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[3] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[3];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x15] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x15];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[4] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[4];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[5] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[5];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[6] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[6];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[7] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[7];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x14] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x14];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[8] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[8];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[9] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[9];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[10] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[10];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0xb] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0xb];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0xc] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0xc];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x17] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x17];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x16] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x16];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x1c] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x1c];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x1d] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x1d];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x1e] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x1e];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0xd] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0xd];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x18] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x18];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x1f] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x1f];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x1b] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x1b];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x12] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x12];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0xe] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0xe];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0xf] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0xf];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x13] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x13];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x10] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x10];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x11] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x11];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  ppuVar9 = &PTR_PTR_1132d19d0;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x60);
  }
  ppuVar11 = &PTR_PTR_1132d15f8;
  if ((undefined **)ppuVar9[0x19] != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar9[0x19];
  }
  if (*(int *)(ppuVar11 + 6) == 1) {
    puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
  }
  else {
    puVar7 = &DAT_11383d918;
  }
  func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
  uVar13 = *(ulong *)(param_2 + 0x18);
  puVar15 = (ulong *)(param_2 + 0x18);
  if ((uVar13 & 1) != 0) {
    puVar15 = (ulong *)(uVar13 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar1 = puVar15 + *(int *)(param_2 + 0x20);
    do {
      uVar13 = *puVar15;
      iVar3 = *(int *)(uVar13 + 0x1c);
      if (iVar3 < 0x21) {
        if (iVar3 != 0xf) {
          if (iVar3 == 0x1e) {
            ppuVar11 = *(undefined ***)(*(long *)(uVar13 + 0x10) + 0x18);
            ppuVar9 = &PTR_PTR_1132d15f8;
            if (ppuVar11 != (undefined **)0x0) {
              ppuVar9 = ppuVar11;
            }
            puVar7 = &DAT_11383d918;
            if (*(int *)(ppuVar9 + 6) == 1) {
              puVar7 = (undefined *)((ulong)ppuVar9[5] & 0xfffffffffffffffc);
            }
            func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
            ppuVar9 = &PTR_PTR_1132d1708;
            if (*(int *)(uVar13 + 0x1c) == 0x1e) {
LAB_1093eff34:
              ppuVar9 = *(undefined ***)(uVar13 + 0x10);
            }
          }
          else {
            if (iVar3 != 0x1f) goto LAB_1093f0078;
            ppuVar11 = *(undefined ***)(*(long *)(uVar13 + 0x10) + 0x18);
            ppuVar9 = &PTR_PTR_1132d15f8;
            if (ppuVar11 != (undefined **)0x0) {
              ppuVar9 = ppuVar11;
            }
            puVar7 = &DAT_11383d918;
            if (*(int *)(ppuVar9 + 6) == 1) {
              puVar7 = (undefined *)((ulong)ppuVar9[5] & 0xfffffffffffffffc);
            }
            func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
            ppuVar9 = &PTR_PTR_1132d1738;
            if (*(int *)(uVar13 + 0x1c) == 0x1f) goto LAB_1093eff34;
          }
          ppuVar9 = (undefined **)ppuVar9[4];
          goto LAB_1093f0048;
        }
        puVar10 = (ulong *)(*(long *)(uVar13 + 0x10) + 0x10);
        uVar14 = *puVar10;
        if ((uVar14 & 1) != 0) {
          puVar10 = (ulong *)(uVar14 + 7);
        }
        iVar3 = *(int *)(*(long *)(uVar13 + 0x10) + 0x18);
        if (iVar3 != 0) {
          lVar16 = (long)iVar3 << 3;
          do {
            uVar13 = *puVar10;
            uVar8 = *(uint *)(uVar13 + 0x10);
            if ((uVar8 >> 1 & 1) != 0) {
              puVar7 = &DAT_11383d918;
              if (*(int *)(*(long *)(uVar13 + 0x50) + 0x30) == 1) {
                puVar7 = (undefined *)
                         (*(ulong *)(*(long *)(uVar13 + 0x50) + 0x28) & 0xfffffffffffffffc);
              }
              func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
              uVar8 = *(uint *)(uVar13 + 0x10);
            }
            if ((uVar8 >> 2 & 1) != 0) {
              puVar7 = &DAT_11383d918;
              if (*(int *)(*(long *)(uVar13 + 0x58) + 0x30) == 1) {
                puVar7 = (undefined *)
                         (*(ulong *)(*(long *)(uVar13 + 0x58) + 0x28) & 0xfffffffffffffffc);
              }
              func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
            }
            puVar10 = puVar10 + 1;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
        }
      }
      else {
        if (iVar3 < 0x2c) {
          if (iVar3 == 0x21) {
            ppuVar11 = *(undefined ***)(*(long *)(uVar13 + 0x10) + 0x38);
            ppuVar9 = &PTR_PTR_1132d15f8;
            if (ppuVar11 != (undefined **)0x0) {
              ppuVar9 = ppuVar11;
            }
            puVar7 = &DAT_11383d918;
            if (*(int *)(ppuVar9 + 6) == 1) {
              puVar7 = (undefined *)((ulong)ppuVar9[5] & 0xfffffffffffffffc);
            }
            func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
            ppuVar9 = &PTR_PTR_1132d1920;
            if (*(int *)(uVar13 + 0x1c) == 0x21) {
              ppuVar9 = *(undefined ***)(uVar13 + 0x10);
            }
            ppuVar9 = (undefined **)ppuVar9[8];
          }
          else {
            if (iVar3 != 0x2b) goto LAB_1093f0078;
LAB_1093eff50:
            ppuVar9 = *(undefined ***)(*(long *)(uVar13 + 0x10) + 0x18);
          }
        }
        else {
          if (iVar3 != 0x2c) {
            if (iVar3 == 0x2d) goto LAB_1093eff50;
            goto LAB_1093f0078;
          }
          ppuVar9 = *(undefined ***)(*(long *)(uVar13 + 0x10) + 0x28);
        }
LAB_1093f0048:
        ppuVar11 = &PTR_PTR_1132d15f8;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar11 = ppuVar9;
        }
        puVar7 = &DAT_11383d918;
        if (*(int *)(ppuVar11 + 6) == 1) {
          puVar7 = (undefined *)((ulong)ppuVar11[5] & 0xfffffffffffffffc);
        }
        func_0x000107c2827c(&uStack_b0,puVar7,puVar7);
      }
LAB_1093f0078:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
  }
  ppuVar11 = *(undefined ***)(param_2 + 0x58);
  ppuVar9 = &PTR_PTR_1132d18a0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = ppuVar11;
  }
  if ((*(byte *)(ppuVar9 + 2) >> 4 & 1) != 0) {
    if (*(int *)(ppuVar9[7] + 0x30) == 1) {
      puVar7 = (undefined *)(*(ulong *)(ppuVar9[7] + 0x28) & 0xfffffffffffffffc);
    }
    else {
      puVar7 = &DAT_11383d918;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x1a8,puVar7)
    ;
    ppuVar11 = *(undefined ***)(param_2 + 0x58);
    ppuVar9 = &PTR_PTR_1132d18a0;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar9 = ppuVar11;
    }
    ppuVar2 = &PTR_PTR_1132d15f8;
    if ((undefined **)ppuVar9[7] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar9[7];
    }
    ppuVar9 = (undefined **)(param_1 + 0x138);
    if (ppuVar2 != ppuVar9) {
      FUN_109313260(ppuVar9);
      FUN_1093135dc(ppuVar9,ppuVar2);
      ppuVar11 = *(undefined ***)(param_2 + 0x58);
    }
  }
  ppuVar9 = &PTR_PTR_1132d18a0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = ppuVar11;
  }
  if ((*(byte *)(ppuVar9 + 2) >> 5 & 1) != 0) {
    if (*(int *)(ppuVar9[8] + 0x30) == 1) {
      puVar7 = (undefined *)(*(ulong *)(ppuVar9[8] + 0x28) & 0xfffffffffffffffc);
    }
    else {
      puVar7 = &DAT_11383d918;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x1c0,puVar7)
    ;
    ppuVar11 = *(undefined ***)(param_2 + 0x58);
    ppuVar9 = &PTR_PTR_1132d18a0;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar9 = ppuVar11;
    }
    ppuVar2 = &PTR_PTR_1132d15f8;
    if ((undefined **)ppuVar9[8] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar9[8];
    }
    ppuVar9 = (undefined **)(param_1 + 0x170);
    if (ppuVar2 != ppuVar9) {
      FUN_109313260(ppuVar9);
      FUN_1093135dc(ppuVar9,ppuVar2);
      ppuVar11 = *(undefined ***)(param_2 + 0x58);
    }
  }
  ppuVar9 = &PTR_PTR_1132d18a0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = ppuVar11;
  }
  plVar5 = plStack_a0;
  if ((*(byte *)(ppuVar9 + 2) >> 6 & 1) != 0) {
    if (*(int *)(ppuVar9[9] + 0x30) == 1) {
      puVar7 = (undefined *)(*(ulong *)(ppuVar9[9] + 0x28) & 0xfffffffffffffffc);
    }
    else {
      puVar7 = &DAT_11383d918;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x210,puVar7)
    ;
    ppuVar9 = &PTR_PTR_1132d18a0;
    if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_2 + 0x58);
    }
    ppuVar11 = &PTR_PTR_1132d15f8;
    if ((undefined **)ppuVar9[9] != (undefined **)0x0) {
      ppuVar11 = (undefined **)ppuVar9[9];
    }
    ppuVar9 = (undefined **)(param_1 + 0x1d8);
    plVar5 = plStack_a0;
    if (ppuVar11 != ppuVar9) {
      FUN_109313260(ppuVar9);
      FUN_1093135dc(ppuVar9,ppuVar11);
      plVar5 = plStack_a0;
    }
  }
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar12 = plVar5 + 2;
    cVar4 = *(char *)((long)plVar5 + 0x27);
    if (cVar4 < '\0') {
      if (plVar5[3] != 0) {
        if (plVar5[3] == 2) {
          plVar12 = (long *)*plVar12;
          goto LAB_1093f0288;
        }
        goto LAB_1093f0294;
      }
    }
    else if (cVar4 != '\0') {
      if (cVar4 == '\x02') {
LAB_1093f0288:
        if (*(short *)plVar12 == 0x303a) goto LAB_1093f029c;
      }
LAB_1093f0294:
      func_0x000107c2ac70(param_1 + 0x60);
    }
LAB_1093f029c:
  }
  uVar13 = *(ulong *)(*(long *)(param_1 + 8) + 0x40);
  uVar6 = 0x10;
  __Znwm(0x10);
  func_0x000109d05694(uVar6,&uStack_80,uVar13 & 0xfffffffffffffffc);
  FUN_1093ef3e0(param_1 + 0x20,uVar6);
LAB_1093f02d4:
  func_0x000107c2826c(&uStack_b0);
  return;
}



/* Entry: 1093f0528; end: 1093f062b;  */

void FUN_1093f0528(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uStack_69;
  long lStack_68;
  
  iVar3 = *(int *)(param_2 + 5);
  uVar9 = *(undefined4 *)(param_2 + 3);
  if ((*(int *)(param_1 + 0x10) != *(int *)((long)param_2 + 0x24)) ||
     (*(int *)(param_1 + 0x14) != iVar3)) {
    *(int *)(param_1 + 0x10) = *(int *)((long)param_2 + 0x24);
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar9;
    FUN_10938cda4(param_1 + 0x28,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_1093f062c(param_1);
  }
  FUN_1093f062c(param_1);
  if (*(int *)(param_1 + 0x40) == 2) {
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uVar9 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((long)param_2 + 0x14);
    uVar1 = *(undefined4 *)(param_2 + 3);
    uVar5 = *(undefined4 *)((long)param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)((long)param_2 + 0x24);
    uVar10 = *(undefined4 *)(param_2 + 5);
    lStack_68 = param_1 + 0xd8;
    FUN_10937a098(param_1 + 0x78,lStack_68,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
    FUN_1093f4660(0,uVar7,uVar8,uVar9,uVar4,uVar1,uVar5,uVar2,uVar6,uVar10);
  }
  return;
}



/* Entry: 1093f062c; end: 1093f12b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f062c(long *******param_1)

{
  long ******pppppplVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long *******ppppppplVar9;
  dword *pdVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long ******pppppplVar14;
  long *******ppppppplVar15;
  long *****ppppplVar16;
  long *******ppppppplVar17;
  dword *pdVar18;
  long *******ppppppplStack_180;
  long *plStack_178;
  long *******ppppppplStack_170;
  dword *pdStack_168;
  long ******pppppplStack_160;
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined1 uStack_152;
  char cStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined4 uStack_136;
  undefined1 uStack_132;
  undefined2 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *****appppplStack_d8 [3];
  undefined8 uStack_c0;
  char cStack_a9;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  long ******pppppplStack_98;
  undefined1 uStack_89;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  byte bStack_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar17 = param_1;
  if (*(int *)(param_1 + 8) == 2) goto LAB_1093f10f8;
  if (*(int *)(param_1 + 8) == 1) {
    ppppppplVar15 = param_1 + 6;
    ppppppplVar17 = (long *******)*ppppppplVar15;
    ppppppplVar9 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppppppplStack_170 = ppppppplVar9;
    FUN_1093f25b0(ppppppplVar17,&ppppppplStack_170);
    if ((int)ppppppplVar17 == 0) {
      FUN_10938ab98(&ppppppplStack_170,ppppppplVar15);
      ppppppplVar17 = ppppppplStack_170;
      ppppppplStack_170 = (long *******)0x0;
      FUN_10938cda4(param_1 + 5,ppppppplVar17);
      if (cStack_151 < '\0') {
        __ZdlPv(pdStack_168);
      }
      ppppppplVar17 = ppppppplStack_170;
      ppppppplStack_170 = (long *******)0x0;
      if (ppppppplVar17 != (long *******)0x0) {
        func_0x000109cda590();
        __ZdlPv();
      }
      if (*(char *)(param_1 + 7) == '\x01') {
        ppppppplVar17 = (long *******)*ppppppplVar15;
        if (ppppppplVar17 != (long *******)0x0) {
          ppppppplVar9 = ppppppplVar17 + 1;
          do {
            pppppplVar14 = *ppppppplVar9;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
            if (bVar8) {
              *ppppppplVar9 = (long ******)((long)pppppplVar14 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppplVar14 == (long ******)0x0) {
            (*(code *)(*ppppppplVar17)[2])();
          }
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      *(undefined4 *)(param_1 + 8) = 2;
    }
    goto LAB_1093f10f8;
  }
  if (((ulong)param_1[1][2] & 3) == 0) goto LAB_1093f10f8;
  pppppplStack_a8 = (long ******)0x0;
  pppppplStack_a0 = (long ******)0x0;
  pppppplStack_98 = (long ******)0x0;
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    if (param_1[0x1c] != (long ******)0x0) goto LAB_1093f0748;
  }
  else if (*(char *)((long)param_1 + 0xef) != '\0') {
LAB_1093f0748:
    uStack_f0 = param_1[2];
    uStack_e8 = (dword *)CONCAT44(1,*(undefined4 *)(param_1 + 3));
    ppppppplStack_180 = (long *******)((long)&MACH_HEADER.magic + 1);
    func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_180);
    ppppppplVar17 = param_1 + 0x1b;
    ppppppplVar9 = param_1 + 0xf;
    ppppppplStack_80 = ppppppplVar17;
    FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_88);
    ppppppplVar9[7] = pppppplStack_160;
    ppppppplVar9[6] = (long ******)pdStack_168;
    ppppppplVar9[8] =
         (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
    func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
    func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
    func_0x000105675c90(&ppppppplStack_170);
    pppppplVar14 = pppppplStack_a0;
    if (pppppplStack_a0 < pppppplStack_98) {
      FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
      pppppplStack_a0 = pppppplVar14 + 0xb;
    }
    else {
      pppppplVar14 = (long ******)&pppppplStack_a8;
      FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
      pppppplStack_a0 = pppppplVar14;
    }
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    pppppplVar14 = (long ******)(long)*(char *)((long)param_1 + 0x107);
    if ((long)pppppplVar14 < 0) {
      pppppplVar14 = param_1[0x1f];
    }
    if (pppppplVar14 != (long ******)0x0) {
      iVar3 = *(int *)((long)param_1 + 0xcc);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = (*(int *)(param_1 + 2) + -1) / iVar3;
      }
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = (*(int *)((long)param_1 + 0x14) + -1) / iVar3;
      }
      uStack_f0 = (long ******)CONCAT44(iVar6 + 1,iVar5 + 1);
      uStack_e8 = (dword *)CONCAT44(1,*(undefined4 *)(param_1 + 0x1a));
      ppppppplStack_180 = (long *******)((long)&MACH_HEADER.magic + 1);
      func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_180);
      ppppppplVar17 = param_1 + 0x1e;
      ppppppplVar9 = param_1 + 0xf;
      ppppppplStack_80 = ppppppplVar17;
      FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_88);
      ppppppplVar9[7] = pppppplStack_160;
      ppppppplVar9[6] = (long ******)pdStack_168;
      ppppppplVar9[8] =
           (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
      func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
      func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
      func_0x000105675c90(&ppppppplStack_170);
      pppppplVar14 = pppppplStack_a0;
      if (pppppplStack_a0 < pppppplStack_98) {
        FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
        pppppplVar14 = pppppplVar14 + 0xb;
      }
      else {
        pppppplVar14 = (long ******)&pppppplStack_a8;
        FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
      }
      pppppplStack_a0 = pppppplVar14;
      if (((ulong)param_1[0x19] & 1) == 0) goto LAB_1093f0ab0;
    }
    pppppplVar14 = (long ******)(long)*(char *)((long)param_1 + 0x11f);
    if ((long)pppppplVar14 < 0) {
      pppppplVar14 = param_1[0x22];
    }
    if (pppppplVar14 != (long ******)0x0) {
      uStack_f0 = (long ******)((long)&MACH_HEADER.magic + 1);
      uStack_e8 = (dword *)CONCAT44(1,*(undefined4 *)(param_1 + 0x1a));
      ppppppplStack_180 = (long *******)((long)&MACH_HEADER.magic + 1);
      func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_180);
      ppppppplVar17 = param_1 + 0x21;
      ppppppplVar9 = param_1 + 0xf;
      ppppppplStack_80 = ppppppplVar17;
      FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_88);
      ppppppplVar9[7] = pppppplStack_160;
      ppppppplVar9[6] = (long ******)pdStack_168;
      ppppppplVar9[8] =
           (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
      func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
      func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
      func_0x000105675c90(&ppppppplStack_170);
      pppppplVar14 = pppppplStack_a0;
      if (pppppplStack_a0 < pppppplStack_98) {
        FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
        pppppplVar14 = pppppplVar14 + 0xb;
      }
      else {
        pppppplVar14 = (long ******)&pppppplStack_a8;
        FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
      }
      pppppplStack_a0 = pppppplVar14;
      if (*(char *)(param_1 + 0x19) != '\x01') goto LAB_1093f0ab0;
    }
    pppppplVar14 = (long ******)(long)*(char *)((long)param_1 + 0x137);
    if ((long)pppppplVar14 < 0) {
      pppppplVar14 = param_1[0x25];
    }
    if (pppppplVar14 != (long ******)0x0) {
      uStack_f0 = (long ******)((long)&MACH_HEADER.magic + 1);
      uStack_e8 = (dword *)CONCAT44(1,*(undefined4 *)(param_1 + 0x1a));
      ppppppplStack_180 = (long *******)((long)&MACH_HEADER.magic + 1);
      func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_180);
      ppppppplVar17 = param_1 + 0x24;
      ppppppplVar9 = param_1 + 0xf;
      ppppppplStack_80 = ppppppplVar17;
      FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_88);
      ppppppplVar9[7] = pppppplStack_160;
      ppppppplVar9[6] = (long ******)pdStack_168;
      ppppppplVar9[8] =
           (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
      func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
      func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
      func_0x000105675c90(&ppppppplStack_170);
      pppppplVar14 = pppppplStack_a0;
      if (pppppplStack_a0 < pppppplStack_98) {
        FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
        pppppplStack_a0 = pppppplVar14 + 0xb;
      }
      else {
        pppppplVar14 = (long ******)&pppppplStack_a8;
        FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
        pppppplStack_a0 = pppppplVar14;
      }
    }
  }
LAB_1093f0ab0:
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    if (param_1[0x36] != (long ******)0x0) goto LAB_1093f0ac8;
  }
  else if (*(char *)((long)param_1 + 0x1bf) != '\0') {
LAB_1093f0ac8:
    uStack_f0 = (long ******)NEON_rev64(param_1[0x2a],4);
    uStack_e8 = (dword *)CONCAT44(1,*(undefined4 *)(param_1 + 0x2b));
    ppppppplStack_88 = (long *******)((long)&MACH_HEADER.magic + 1);
    func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_88);
    ppppppplVar17 = param_1 + 0x35;
    ppppppplVar9 = param_1 + 0xf;
    ppppppplStack_80 = ppppppplVar17;
    FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_180);
    ppppppplVar9[7] = pppppplStack_160;
    ppppppplVar9[6] = (long ******)pdStack_168;
    ppppppplVar9[8] =
         (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
    func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
    func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
    func_0x000105675c90(&ppppppplStack_170);
    pppppplVar14 = pppppplStack_a0;
    if (pppppplStack_a0 < pppppplStack_98) {
      FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
      pppppplVar14 = pppppplVar14 + 0xb;
    }
    else {
      pppppplVar14 = (long ******)&pppppplStack_a8;
      FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
    }
    uStack_78 = *(undefined4 *)(param_1 + 0x32);
    ppppppplStack_80 = (long *******)NEON_rev64(param_1[0x31],4);
    uStack_74 = 1;
    pppppplStack_a0 = pppppplVar14;
    func_0x000109d0eb9c(&ppppppplStack_170,&ppppppplStack_80,&ppppppplStack_88);
    ppppppplVar17 = param_1 + 0x38;
    ppppppplVar9 = param_1 + 0xf;
    ppppppplStack_180 = ppppppplVar17;
    FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_180,&uStack_89);
    ppppppplVar9[7] = pppppplStack_160;
    ppppppplVar9[6] = (long ******)pdStack_168;
    ppppppplVar9[8] =
         (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
    func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
    func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
    func_0x000105675c90(&ppppppplStack_170);
    pppppplVar14 = pppppplStack_a0;
    if (pppppplStack_a0 < pppppplStack_98) {
      FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&ppppppplStack_80);
      pppppplStack_a0 = pppppplVar14 + 0xb;
    }
    else {
      pppppplVar14 = (long ******)&pppppplStack_a8;
      FUN_1093f22d4(pppppplVar14,ppppppplVar17,&ppppppplStack_80);
      pppppplStack_a0 = pppppplVar14;
    }
  }
  if (*(char *)((long)param_1 + 0x227) < '\0') {
    if (param_1[0x43] != (long ******)0x0) goto LAB_1093f0c60;
  }
  else if (*(char *)((long)param_1 + 0x227) != '\0') {
LAB_1093f0c60:
    if ((*(byte *)(param_1 + 0x3d) >> 3 & 1) == 0) {
      FUN_10937e740(&ppppppplStack_170,&UNK_10f56c460);
      FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f56c451,0x145,&ppppppplStack_170);
      if ((long)pppppplStack_160 < 0) {
        __ZdlPv(ppppppplStack_170);
      }
    }
    iVar3 = *(int *)((long)param_1 + 0x1fc);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = (*(int *)(param_1 + 2) + -1) / iVar3;
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = (*(int *)((long)param_1 + 0x14) + -1) / iVar3;
    }
    uStack_f0 = (long ******)CONCAT44(iVar6 + 1,iVar5 + 1);
    uStack_e8 = &MACH_HEADER.cpusubtype;
    ppppppplStack_180 = (long *******)((long)&MACH_HEADER.magic + 1);
    func_0x000109d0eb9c(&ppppppplStack_170,&uStack_f0,&ppppppplStack_180);
    ppppppplVar17 = param_1 + 0x42;
    ppppppplVar9 = param_1 + 0xf;
    ppppppplStack_80 = ppppppplVar17;
    FUN_10937a098(ppppppplVar9,ppppppplVar17,&UNK_10dd5b8f9,&ppppppplStack_80,&ppppppplStack_88);
    ppppppplVar9[7] = pppppplStack_160;
    ppppppplVar9[6] = (long ******)pdStack_168;
    ppppppplVar9[8] =
         (long ******)CONCAT17(cStack_151,CONCAT16(uStack_152,CONCAT24(uStack_154,uStack_158)));
    func_0x0001093783c0(ppppppplVar9 + 9,&uStack_150);
    func_0x00010937843c(ppppppplVar9 + 0xb,&lStack_140);
    func_0x000105675c90(&ppppppplStack_170);
    pppppplVar14 = pppppplStack_a0;
    if (pppppplStack_a0 < pppppplStack_98) {
      FUN_1093f241c(pppppplStack_a0,ppppppplVar17,&uStack_f0);
      pppppplStack_a0 = pppppplVar14 + 0xb;
    }
    else {
      pppppplVar14 = (long ******)&pppppplStack_a8;
      FUN_1093f22d4(pppppplVar14,ppppppplVar17,&uStack_f0);
      pppppplStack_a0 = pppppplVar14;
    }
  }
  pppppplVar14 = param_1[1];
  if (((ulong)pppppplVar14[2] & 1) == 0) {
    ppppplVar16 = pppppplVar14[7];
    pdVar10 = (dword *)0x258;
    __Znwm();
    pdVar18 = pdVar10 + 2;
    *(undefined8 *)pdVar18 = 0;
    *(undefined8 *)(pdVar10 + 4) = 0;
    pppppplVar14 = (long ******)(pdVar10 + 6);
    *(undefined ***)pdVar10 = &PTR_DAT_11087cef0;
    func_0x000107c28038(pppppplVar14,(ulong)ppppplVar16 & 0xfffffffffffffffc,8);
    lVar11 = 0x28;
    ppppppplStack_170 = (long *******)pppppplVar14;
    pdStack_168 = pdVar10;
    __Znwm();
    func_0x000109d0a180();
    do {
      lVar13 = *(long *)pdVar18;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pdVar18,0x10);
      if (bVar8) {
        *(long *)pdVar18 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
joined_r0x0001093f0e44:
    if (lVar13 == 0) {
      (**(code **)(*(long *)pdVar10 + 0x10))(pdVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pdVar10);
    }
  }
  else {
    FUN_1093f2710(&uStack_f0,&ppppppplStack_80,(ulong)pppppplVar14[6] & 0xfffffffffffffffc);
    pdVar10 = uStack_e8;
    pdStack_168 = uStack_e8;
    ppppppplStack_170 = (long *******)uStack_f0;
    lVar11 = 0x28;
    __Znwm();
    func_0x000109d0a180();
    if (pdVar10 != (dword *)0x0) {
      pdVar18 = pdVar10 + 2;
      do {
        lVar13 = *(long *)pdVar18;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pdVar18,0x10);
        if (bVar8) {
          *(long *)pdVar18 = lVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto joined_r0x0001093f0e44;
    }
  }
  FUN_109378950(&uStack_f0,&pppppplStack_a8,param_1 + 0xc);
  ppppppplStack_170 = (long *******)0x0;
  pdStack_168 = (dword *)0x0;
  pppppplStack_160 = (long ******)0x0;
  uStack_158 = 0x3f800000;
  uStack_152 = 0;
  uStack_148 = 0;
  lStack_140 = 0;
  uStack_150 = 0;
  uStack_138 = 0x200;
  uStack_136 = 0;
  uStack_132 = 0;
  uStack_130 = 1;
  uStack_12c = 0;
  uStack_128 = 0x10000;
  uStack_124 = 0x100;
  uStack_122 = 1;
  uStack_120 = 0x1000000;
  uStack_11c = 1;
  uStack_118 = 0x100;
  uStack_115 = 0;
  uStack_110 = 100000;
  uStack_108 = 0;
  uStack_104 = 1;
  uStack_100 = 0;
  uStack_154 = 0;
  uVar4 = *(uint *)((long)param_1[1] + 0x4c);
  if (4 < uVar4) {
    uVar4 = 0;
  }
  uStack_116 = (undefined1)uVar4;
  plVar12 = (long *)0x120;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110af4c20;
  bStack_68 = 3;
  ppppppplStack_88 = (long *******)&ppppppplStack_80;
  if (*(char *)(lVar11 + 0x18) == '\0') {
    bStack_68 = 0;
  }
  else {
    FUN_1093f2978(&ppppppplStack_88,lVar11);
    bStack_68 = *(byte *)(lVar11 + 0x18);
  }
  uStack_60 = *(undefined2 *)(lVar11 + 0x20);
  uStack_5e = *(undefined1 *)(lVar11 + 0x22);
  func_0x000109d03aac(plVar12 + 3,&uStack_f0,1,&ppppppplStack_80,param_1 + 9,&ppppppplStack_170,2);
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_68])(&ppppppplStack_80);
  *(undefined4 *)(param_1 + 8) = 1;
  ppppppplStack_180 = (long *******)(plVar12 + 3);
  plStack_178 = plVar12;
  func_0x000109d03fe8(&ppppppplStack_80,*param_1[4],&ppppppplStack_180,
                      *(undefined1 *)(param_1[1] + 9));
  ppppppplVar17 = ppppppplStack_80;
  if (*(char *)(param_1 + 7) == '\x01') {
    ppppppplStack_80 = (long *******)0x0;
    pppppplVar14 = param_1[6];
    param_1[6] = (long ******)ppppppplVar17;
    if (pppppplVar14 != (long ******)0x0) {
      pppppplVar1 = pppppplVar14 + 1;
      do {
        ppppplVar16 = *pppppplVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
        if (bVar8) {
          *pppppplVar1 = (long *****)((long)ppppplVar16 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (ppppplVar16 == (long *****)0x0) {
        (*(code *)(*pppppplVar14)[2])();
      }
      if (ppppppplStack_80 != (long *******)0x0) {
        ppppppplVar17 = ppppppplStack_80 + 1;
        do {
          pppppplVar14 = *ppppppplVar17;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
          if (bVar8) {
            *ppppppplVar17 = (long ******)((long)pppppplVar14 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar14 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_80)[2])();
        }
      }
    }
  }
  else {
    param_1[6] = (long ******)ppppppplStack_80;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  FUN_1093f062c(param_1);
  plVar12 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar2 = plStack_178 + 1;
    do {
      lVar13 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (ppppppplStack_170 != (long *******)0x0) {
    __ZdlPv();
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  ppppppplStack_170 = (long *******)appppplStack_d8;
  FUN_109378cec(&ppppppplStack_170);
  ppppppplStack_170 = (long *******)&uStack_f0;
  FUN_109378cec(&ppppppplStack_170);
  (*(code *)(&PTR_FUN_110af4bf0)[*(byte *)(lVar11 + 0x18)])(lVar11);
  __ZdlPv(lVar11);
  ppppppplStack_170 = &pppppplStack_a8;
  ppppppplVar17 = (long *******)&ppppppplStack_170;
  FUN_109378cec(ppppppplVar17);
LAB_1093f10f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppppppplStack_170 = &pppppplStack_a8;
    FUN_109378cec(&ppppppplStack_170);
    do {
      __Unwind_Resume(ppppppplVar17);
    } while( true );
  }
  return;
}



/* Entry: 1093f12b4; end: 1093f133f;  */

void FUN_1093f12b4(long param_1,int param_2,int param_3,int param_4,undefined1 *param_5)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 uStack_39;
  long lStack_38;
  
  lStack_38 = param_1 + 0xd8;
  param_1 = param_1 + 0x78;
  FUN_10937a098(param_1,lStack_38,&UNK_10dd5b8f9,&lStack_38,&uStack_39);
  uVar1 = param_3 * param_2 * param_4;
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    pfVar3 = *(float **)(param_1 + 0x48);
    do {
      *param_5 = (char)(int)(*pfVar3 * 127.5 + 127.5);
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1093f1340; end: 1093f153f;  */

void FUN_1093f1340(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined1 uStack_59;
  long lStack_58;
  
  if (*(char *)(param_2 + 200) == '\x01') {
    lStack_b8 = param_2 + 0x108;
    lVar2 = param_2 + 0x78;
    FUN_10937a098(lVar2,lStack_b8,&UNK_10dd5b8f9,&lStack_b8,&lStack_58);
    if (0 < *(int *)(param_2 + 0xd0)) {
      uVar5 = *(int *)(param_2 + 0xd0) + 1;
      pfVar4 = *(float **)(lVar2 + 0x48);
      do {
        *pfVar4 = param_1;
        uVar5 = uVar5 - 1;
        pfVar4 = pfVar4 + 1;
      } while (1 < uVar5);
    }
    lStack_b8 = param_2 + 0x120;
    lVar2 = param_2 + 0x78;
    FUN_10937a098(lVar2,lStack_b8,&UNK_10dd5b8f9,&lStack_b8,&lStack_58);
    if (0 < *(int *)(param_2 + 0xd0)) {
      uVar5 = *(int *)(param_2 + 0xd0) + 1;
      pfVar4 = *(float **)(lVar2 + 0x48);
      do {
        *pfVar4 = 1.0 - param_1;
        uVar5 = uVar5 - 1;
        pfVar4 = pfVar4 + 1;
      } while (1 < uVar5);
    }
  }
  func_0x000109cdb3f0(&lStack_b8,*(undefined8 *)(param_2 + 0x28),param_2 + 0x78,1);
  func_0x0001093f2488(param_2 + 0xa0,&lStack_b8);
  func_0x000109379fe8(&lStack_b8);
  uStack_68 = 0x100000001;
  lVar1 = *(long *)(param_2 + 0x68);
  for (lVar2 = *(long *)(param_2 + 0x60); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    lVar3 = param_2 + 0xa0;
    lStack_b8 = lVar2;
    FUN_10937a098(lVar3,lVar2,&UNK_10dd5b8f9,&lStack_b8,&lStack_58);
    if ((*(int *)(lVar3 + 0x40) != (int)uStack_68) || (*(int *)(lVar3 + 0x44) != uStack_68._4_4_)) {
      lVar3 = param_2 + 0xa0;
      lStack_58 = lVar2;
      FUN_10937a098(lVar3,lVar2,&UNK_10dd5b8f9,&lStack_58,&uStack_59);
      func_0x000109d0e828(&lStack_b8,lVar3 + 0x28,&uStack_68,0);
      lVar3 = param_2 + 0xa0;
      lStack_58 = lVar2;
      FUN_10937a098(lVar3,lVar2,&UNK_10dd5b8f9,&lStack_58,&uStack_59);
      *(undefined8 *)(lVar3 + 0x38) = uStack_a8;
      *(undefined8 *)(lVar3 + 0x30) = uStack_b0;
      *(undefined8 *)(lVar3 + 0x40) = uStack_a0;
      func_0x0001093783c0(lVar3 + 0x48,auStack_98);
      func_0x00010937843c(lVar3 + 0x58,auStack_88);
      func_0x000105675c90(&lStack_b8);
    }
  }
  return;
}



/* Entry: 1093f1540; end: 1093f1a3f;  */

void FUN_1093f1540(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *unaff_x24;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  
  func_0x0001093a2140(param_2);
  lVar15 = *(long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != lVar15) {
    uVar19 = 0;
    plVar2 = param_2 + 2;
    do {
      puVar17 = (undefined8 *)(lVar15 + uVar19 * 0x18);
      lVar15 = param_1 + 0xa0;
      puStack_b0 = puVar17;
      FUN_10937a098(lVar15,puVar17,&UNK_10dd5b8f9,&puStack_b0,&uStack_61);
      pauVar1 = (undefined1 (*) [16])(lVar15 + 0x30);
      uVar21 = *(undefined8 *)(lVar15 + 0x38);
      uVar4 = *(undefined8 *)*pauVar1;
      auVar5 = *pauVar1;
      auVar20 = *pauVar1;
      lVar15 = *(long *)(lVar15 + 0x48);
      if (*(char *)((long)puVar17 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_b0,*puVar17,puVar17[1]);
      }
      else {
        puStack_b0 = (undefined8 *)*puVar17;
        lStack_a8 = puVar17[1];
        lStack_a0 = puVar17[2];
      }
      uStack_90 = (undefined4)uVar4;
      auVar20 = NEON_ext(auVar20,auVar5,0xc,1);
      uStack_94 = auVar20._8_4_;
      uStack_98 = auVar20._0_4_;
      uStack_8c = (undefined4)uVar21;
      uStack_88 = 1;
      plVar10 = param_2;
      lStack_80 = lVar15;
      func_0x000107c31944(param_2,&puStack_b0);
      plVar16 = (long *)param_2[1];
      if (plVar16 != (long *)0x0) {
        uVar18 = (long)plVar16 - 1;
        if (((ulong)plVar16 & uVar18) == 0) {
          unaff_x24 = (long *)(uVar18 & (ulong)plVar10);
        }
        else {
          unaff_x24 = plVar10;
          if (plVar16 <= plVar10) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x24 = (long *)((long)plVar10 - uVar3 * (long)plVar16);
          }
        }
        plVar8 = *(long **)(*param_2 + (long)unaff_x24 * 8);
        if (plVar8 != (long *)0x0) {
          for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            plVar9 = (long *)plVar8[1];
            if (plVar9 == plVar10) {
              plVar9 = param_2;
              func_0x000104c4fbc4(param_2,plVar8 + 2,&puStack_b0);
              if (((ulong)plVar9 & 1) != 0) goto LAB_1093f1960;
            }
            else {
              if (((ulong)plVar16 & uVar18) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar18);
              }
              else if (plVar16 <= plVar9) {
                uVar3 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar3 = (ulong)plVar9 / (ulong)plVar16;
                }
                plVar9 = (long *)((long)plVar9 - uVar3 * (long)plVar16);
              }
              if (plVar9 != unaff_x24) break;
            }
          }
        }
      }
      plVar8 = (long *)0x50;
      __Znwm();
      *plVar8 = 0;
      plVar8[1] = (long)plVar10;
      if (lStack_a0 < 0) {
        func_0x000107c3192c(plVar8 + 2,puStack_b0,lStack_a8);
      }
      else {
        plVar8[3] = lStack_a8;
        plVar8[2] = (long)puStack_b0;
        plVar8[4] = lStack_a0;
      }
      plVar8[6] = CONCAT44(uStack_8c,uStack_90);
      plVar8[5] = CONCAT44(uStack_94,uStack_98);
      plVar8[8] = lStack_80;
      plVar8[7] = CONCAT44(uStack_84,uStack_88);
      plVar8[9] = lStack_78;
      if ((plVar16 == (long *)0x0) ||
         (*(float *)(param_2 + 4) * (float)plVar16 < (float)(param_2[3] + 1))) {
        uVar18 = 1;
        if ((long *)0x2 < plVar16) {
          uVar18 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar9 = (long *)(uVar18 | (long)plVar16 << 1);
        plVar16 = (long *)(long)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
        if (plVar9 <= plVar16) {
          plVar9 = plVar16;
        }
        if ((long)plVar9 - 1U == 0) {
          plVar9 = (long *)0x2;
        }
        else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar16 = (long *)param_2[1];
        if (plVar16 < plVar9) {
LAB_1093f177c:
          plVar16 = plVar9;
          if ((ulong)plVar16 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1093f19fc);
            (*pcVar6)();
          }
          lVar15 = (long)plVar16 << 3;
          __Znwm();
          lVar7 = *param_2;
          *param_2 = lVar15;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          plVar9 = (long *)0x0;
          param_2[1] = (long)plVar16;
          do {
            *(undefined8 *)(*param_2 + (long)plVar9 * 8) = 0;
            plVar9 = (long *)((long)plVar9 + 1);
          } while (plVar16 != plVar9);
          plVar9 = (long *)*plVar2;
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[1];
            uVar18 = (long)plVar16 - 1;
            if (((ulong)plVar16 & uVar18) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar18);
            }
            else if (plVar16 <= plVar11) {
              uVar3 = 0;
              if (plVar16 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plVar16;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar16);
            }
            *(long **)(*param_2 + (long)plVar11 * 8) = plVar2;
            plVar12 = (long *)*plVar9;
            while (plVar12 != (long *)0x0) {
              plVar14 = (long *)plVar12[1];
              if (((ulong)plVar16 & uVar18) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar18);
              }
              else if (plVar16 <= plVar14) {
                uVar3 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar3 = (ulong)plVar14 / (ulong)plVar16;
                }
                plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar16);
              }
              plVar13 = plVar12;
              if (plVar14 != plVar11) {
                lVar15 = *param_2;
                if (*(long *)(lVar15 + (long)plVar14 * 8) == 0) {
                  *(long **)(lVar15 + (long)plVar14 * 8) = plVar9;
                  plVar11 = plVar14;
                }
                else {
                  *plVar9 = *plVar12;
                  *plVar12 = **(undefined8 **)(lVar15 + (long)plVar14 * 8);
                  **(long **)(lVar15 + (long)plVar14 * 8) = (long)plVar12;
                  plVar13 = plVar9;
                }
              }
              plVar9 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else if (plVar9 < plVar16) {
          plVar11 = (long *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
          if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
          }
          if (plVar9 <= plVar11) {
            plVar9 = plVar11;
          }
          if (plVar9 < plVar16) {
            if (plVar9 != (long *)0x0) goto LAB_1093f177c;
            lVar15 = *param_2;
            *param_2 = 0;
            if (lVar15 != 0) {
              __ZdlPv();
            }
            plVar16 = (long *)0x0;
            param_2[1] = 0;
          }
          else {
            plVar16 = (long *)param_2[1];
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
        }
        else {
          unaff_x24 = plVar10;
          if (plVar16 <= plVar10) {
            uVar18 = 0;
            if (plVar16 != (long *)0x0) {
              uVar18 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x24 = (long *)((long)plVar10 - uVar18 * (long)plVar16);
          }
        }
      }
      lVar15 = *param_2;
      plVar10 = *(long **)(lVar15 + (long)unaff_x24 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar8 = *plVar2;
        *plVar2 = (long)plVar8;
        *(long **)(lVar15 + (long)unaff_x24 * 8) = plVar2;
        if (*plVar8 != 0) {
          plVar10 = *(long **)(*plVar8 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar10) {
            uVar18 = 0;
            if (plVar16 != (long *)0x0) {
              uVar18 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar18 * (long)plVar16);
          }
          *(long **)(*param_2 + (long)plVar10 * 8) = plVar8;
        }
      }
      else {
        *plVar8 = *plVar10;
        *plVar10 = (long)plVar8;
      }
      param_2[3] = param_2[3] + 1;
LAB_1093f1960:
      if (lStack_a0 < 0) {
        __ZdlPv(puStack_b0);
      }
      uVar19 = uVar19 + 1;
      lVar15 = *(long *)(param_1 + 0x60);
    } while (uVar19 < (ulong)((*(long *)(param_1 + 0x68) - lVar15 >> 3) * -0x5555555555555555));
  }
  return;
}



/* Entry: 1093f1a40; end: 1093f1a47;  */

undefined4 FUN_1093f1a40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* Entry: 1093f1a48; end: 1093f1b37;  */

void FUN_1093f1a48(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uStack_39;
  long lStack_38;
  
  lVar1 = param_1 + 0xf0;
  lVar2 = param_1 + 0x78;
  lStack_38 = lVar1;
  FUN_10937a098(lVar2,lVar1,&UNK_10dd5b8f9,&lStack_38,&uStack_39);
  if ((*(byte *)(lVar2 + 0x70) & 1) == 0) {
    uVar5 = (ulong)(uint)(*(int *)(lVar2 + 0x38) * *(int *)(lVar2 + 0x3c) * *(int *)(lVar2 + 0x34) *
                         *(int *)(lVar2 + 0x30));
  }
  else {
    uVar5 = 1;
    for (piVar3 = *(int **)(lVar2 + 0x58); piVar3 != *(int **)(lVar2 + 0x60); piVar3 = piVar3 + 1) {
      uVar5 = (ulong)(uint)(*piVar3 * (int)uVar5);
    }
  }
  param_1 = param_1 + 0x78;
  lStack_38 = lVar1;
  FUN_10937a098(param_1,lVar1,&UNK_10dd5b8f9,&lStack_38,&uStack_39);
  iVar4 = (int)uVar5;
  if (param_2[1] * *param_2 * param_2[2] * param_2[3] == iVar4) {
    if (iVar4 != 0) {
      _memmove(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 6),
               -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
    }
  }
  else if (0 < iVar4) {
    _bzero(*(undefined8 *)(param_1 + 0x48),uVar5 << 2);
  }
  return;
}



/* Entry: 1093f1b38; end: 1093f1f9b;  */

void FUN_1093f1b38(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  byte abStack_b0 [15];
  char cStack_a1;
  float fStack_a0;
  float fStack_9c;
  long lStack_88;
  long lStack_80;
  ulong uStack_70;
  ulong uStack_68;
  
  ppuVar7 = &PTR_PTR_1132cfaf0;
  if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_2 + 0x78);
  }
  FUN_109367d10(&lStack_88,(long)*(int *)(ppuVar7 + 7) << 1);
  ppuVar3 = *(undefined ***)(param_2 + 0x78);
  ppuVar7 = &PTR_PTR_1132cfaf0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3;
  }
  uVar2 = *(uint *)(ppuVar7 + 7);
  if (0 < (int)uVar2) {
    lVar10 = 0;
    lVar11 = 8;
    do {
      ppuVar7 = &PTR_PTR_1132cfaf0;
      if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
        ppuVar7 = *(undefined ***)(param_2 + 0x78);
      }
      puVar4 = ppuVar7[6];
      ppuVar7 = ppuVar7 + 6;
      if (((ulong)puVar4 & 1) != 0) {
        ppuVar7 = (undefined **)(puVar4 + lVar11 + -1);
      }
      FUN_109340d10(&lStack_b8,0,*ppuVar7);
      *(float *)(lStack_88 + lVar10) =
           (fStack_a0 + fStack_a0) / (float)*(int *)(param_3 + 0x24) + -1.0;
      ((float *)(lStack_88 + lVar10))[uVar2] =
           (fStack_9c + fStack_9c) / (float)*(int *)(param_3 + 0x28) + -1.0;
      if ((abStack_b0[0] & 1) != 0) {
        func_0x0001053936ac(abStack_b0);
      }
      lVar10 = lVar10 + 4;
      lVar11 = lVar11 + 8;
    } while ((ulong)uVar2 * 4 - lVar10 != 0);
    ppuVar3 = *(undefined ***)(param_2 + 0x78);
  }
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  ppuVar7 = &PTR_PTR_1132cfaf0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3;
  }
  ppuVar3 = &PTR_PTR_1132d70f0;
  if ((undefined **)ppuVar7[0x25] != (undefined **)0x0) {
    ppuVar3 = (undefined **)ppuVar7[0x25];
  }
  puVar4 = ppuVar3[0x1e];
  ppuVar7 = ppuVar3 + 0x1e;
  if (((ulong)puVar4 & 1) != 0) {
    ppuVar7 = (undefined **)(puVar4 + 7);
  }
  if (*(int *)(ppuVar3 + 0x1f) != 0) {
    lVar10 = (long)*(int *)(ppuVar3 + 0x1f) << 3;
    do {
      puVar4 = *ppuVar7;
      lStack_b8._0_4_ = *(undefined4 *)(puVar4 + 0x18);
      FUN_10939f5b4(&lStack_d0,&lStack_b8);
      lStack_b8._0_4_ = *(undefined4 *)(puVar4 + 0x1c);
      FUN_10939f5b4(&lStack_d0,&lStack_b8);
      lStack_b8 = CONCAT44(lStack_b8._4_4_,*(undefined4 *)(puVar4 + 0x20));
      FUN_10939f5b4(&lStack_d0,&lStack_b8);
      lVar10 = lVar10 + -8;
      ppuVar7 = ppuVar7 + 1;
    } while (lVar10 != 0);
  }
  lVar10 = param_1 + 0x1c0;
  lVar11 = param_1 + 0x78;
  lStack_b8 = lVar10;
  FUN_10937a098(lVar11,lVar10,&UNK_10dd5b8f9,&lStack_b8,&uStack_68);
  lVar8 = *(long *)(lVar11 + 0x48);
  lVar11 = param_1 + 0x78;
  lStack_b8 = lVar10;
  FUN_10937a098(lVar11,lVar10,&UNK_10dd5b8f9,&lStack_b8,&uStack_70);
  if ((*(byte *)(lVar11 + 0x70) & 1) == 0) {
    uVar2 = *(int *)(lVar11 + 0x38) * *(int *)(lVar11 + 0x3c) * *(int *)(lVar11 + 0x34) *
            *(int *)(lVar11 + 0x30);
  }
  else {
    uVar2 = 1;
    for (piVar6 = *(int **)(lVar11 + 0x58); piVar6 != *(int **)(lVar11 + 0x60); piVar6 = piVar6 + 1)
    {
      uVar2 = *piVar6 * uVar2;
    }
  }
  uStack_68 = (ulong)uVar2;
  uVar5 = lStack_80 - lStack_88 >> 2;
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uStack_68;
  }
  if (uVar5 != uVar2) {
    uStack_70 = uVar5;
    FUN_1093b4440(&lStack_b8,&UNK_10f56c4ad,&uStack_70,&uStack_68);
    FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f56c493,0x1a9,&lStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(lStack_b8);
    }
  }
  if (1 < uVar1) {
    _memmove(lVar8,lStack_88,uVar1 << 1 & 0x1fffffffc);
    _memmove(lVar8 + (uStack_68 >> 1) * 4,lStack_88 + (lStack_80 - lStack_88 >> 3) * 4,
             uVar1 << 1 & 0x1fffffffc);
  }
  lVar10 = param_1 + 0x1a8;
  lVar11 = param_1 + 0x78;
  lStack_b8 = lVar10;
  FUN_10937a098(lVar11,lVar10,&UNK_10dd5b8f9,&lStack_b8,&uStack_68);
  uVar9 = *(undefined8 *)(lVar11 + 0x48);
  param_1 = param_1 + 0x78;
  lStack_b8 = lVar10;
  FUN_10937a098(param_1,lVar10,&UNK_10dd5b8f9,&lStack_b8,&uStack_70);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    uVar2 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x34) *
            *(int *)(param_1 + 0x30);
  }
  else {
    uVar2 = 1;
    for (piVar6 = *(int **)(param_1 + 0x58); piVar6 != *(int **)(param_1 + 0x60);
        piVar6 = piVar6 + 1) {
      uVar2 = *piVar6 * uVar2;
    }
  }
  uStack_68 = (ulong)uVar2;
  uVar5 = lStack_c8 - lStack_d0 >> 2;
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uStack_68;
  }
  if (uVar5 != uVar2) {
    uStack_70 = uVar5;
    FUN_1093b4440(&lStack_b8,&UNK_10f56c4ad,&uStack_70,&uStack_68);
    FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f56c4e4,0x1b4,&lStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(lStack_b8);
    }
  }
  if (uVar1 != 0) {
    _memmove(uVar9,lStack_d0,uVar1 << 2);
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv(lStack_d0);
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  return;
}



/* Entry: 1093f1f9c; end: 1093f20ef;  */

void FUN_1093f1f9c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uStack_68;
  long alStack_60 [2];
  char cStack_49;
  ulong uStack_48;
  
  lVar3 = param_1 + 0x210;
  lVar2 = param_1 + 0x78;
  alStack_60[0] = lVar3;
  FUN_10937a098(lVar2,lVar3,&UNK_10dd5b8f9,alStack_60,&uStack_48);
  uVar7 = *(undefined8 *)(lVar2 + 0x48);
  param_1 = param_1 + 0x78;
  alStack_60[0] = lVar3;
  FUN_10937a098(param_1,lVar3,&UNK_10dd5b8f9,alStack_60,&uStack_68);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    uVar4 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x34) *
            *(int *)(param_1 + 0x30);
  }
  else {
    uVar4 = 1;
    for (piVar5 = *(int **)(param_1 + 0x58); piVar5 != *(int **)(param_1 + 0x60);
        piVar5 = piVar5 + 1) {
      uVar4 = *piVar5 * uVar4;
    }
  }
  uStack_48 = (ulong)uVar4;
  lVar3 = *param_2;
  uVar6 = param_2[1] - lVar3 >> 2;
  uVar1 = uVar6;
  if (uVar4 <= uVar6) {
    uVar1 = uStack_48;
  }
  if (uVar6 != uVar4) {
    uStack_68 = uVar6;
    FUN_1093b4440(alStack_60,&UNK_10f56c4ad,&uStack_68,&uStack_48);
    FUN_109388c6c(1,&UNK_10f56c368,&UNK_10f56c500,0x1be,alStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(alStack_60[0]);
    }
    lVar3 = *param_2;
  }
  if (uVar1 != 0) {
    _memmove(uVar7,lVar3,uVar1 << 2);
  }
  return;
}



/* Entry: 1093f20f0; end: 1093f22d3;  */

void FUN_1093f20f0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_d0 [32];
  float *pfStack_b0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float *pfStack_68;
  float *pfStack_60;
  undefined1 uStack_49;
  long lStack_48;
  
  puVar5 = (ulong *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    puVar5 = (ulong *)*puVar5;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  FUN_109367d10(&pfStack_68,6);
  pfVar3 = *(float **)(param_2 + 0x20);
  fVar8 = 1.0 / (-(pfVar3[1] * pfVar3[3]) + pfVar3[4] * *pfVar3);
  *pfStack_68 = pfVar3[4] * fVar8;
  pfStack_68[1] = -(fVar8 * pfVar3[1]);
  pfStack_68[2] = fVar8 * (-(pfVar3[2] * pfVar3[4]) + pfVar3[5] * pfVar3[1]);
  pfStack_68[3] = -(fVar8 * pfVar3[3]);
  pfStack_68[4] = fVar8 * *pfVar3;
  pfStack_68[5] = fVar8 * (-(*pfVar3 * pfVar3[5]) + pfVar3[3] * pfVar3[2]);
  uStack_78 = *(undefined8 *)(param_3 + 0x24);
  uStack_70 = 0x100000001;
  uStack_80 = 0x100000001;
  func_0x000109d0eb9c(auStack_d0,&uStack_78,&uStack_80);
  FUN_1093f4660(0xbf800000,puVar5,pfStack_68,*(undefined4 *)(param_2 + 0x30),
                *(undefined4 *)(param_2 + 0x34),1,1,uVar1,*(undefined4 *)(param_3 + 0x24),
                *(undefined4 *)(param_3 + 0x28));
  lStack_48 = param_1 + 0xd8;
  param_1 = param_1 + 0x78;
  FUN_10937a098(param_1,lStack_48,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
  uVar2 = *(int *)(param_3 + 0x28) * *(int *)(param_3 + 0x24);
  uVar4 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_3 + 0x18);
    pfVar3 = pfStack_b0;
    do {
      if (*pfVar3 < 0.0 && 0 < (int)uVar2) {
        _bzero(lVar7 + uVar6 * 4,(ulong)uVar2 << 2);
      }
      uVar6 = (ulong)((int)uVar6 + uVar2);
      uVar4 = uVar4 - 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar4 != 0);
  }
  func_0x000105675c90(auStack_d0);
  if (pfStack_68 != (float *)0x0) {
    pfStack_60 = pfStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 1093f22d4; end: 1093f241b;  */

long * FUN_1093f22d4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x1745d1745d1745c < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_109378aac();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 0xb;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_1093f241c(lVar5,param_2,param_3);
    plStack_48 = (long *)(lVar5 + 0x58);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_109378f10(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x0001056754bc(&plStack_58);
    return plVar1;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  lVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 1093f241c; end: 1093f25af;  */

undefined8 * FUN_1093f241c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 1093f25b0; end: 1093f270f;  */

uint FUN_1093f25b0(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uStack_50;
  char cStack_48;
  
  uVar4 = param_1 + 0x18;
  cStack_48 = '\x01';
  uVar1 = uVar4;
  uStack_50 = uVar4;
  __ZNSt3__15mutex4lockEv();
  if ((*(uint *)(param_1 + 0x88) >> 3 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x88) >> 2 & 1) == 0) {
      do {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (*param_2 <= (long)uVar1) {
          uVar2 = *(uint *)(param_1 + 0x88);
          break;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        lVar3 = *param_2;
        if ((long)uVar1 < lVar3) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          uVar4 = lVar3 - uVar1;
          if (0 < (long)uVar4) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            __ZNSt3__16chrono12system_clock3nowEv();
            if (uVar1 == 0) {
              lVar3 = 0;
LAB_1093f269c:
              lVar3 = lVar3 + uVar4;
            }
            else {
              if ((long)uVar1 < 1) {
                if (0xffdf3b645a1cac08 < uVar1) goto LAB_1093f2684;
                lVar3 = -0x8000000000000000;
                goto LAB_1093f269c;
              }
              if (uVar1 < 0x20c49ba5e353f8) {
LAB_1093f2684:
                lVar3 = uVar1 * 1000;
              }
              else {
                lVar3 = 0x7fffffffffffffff;
              }
              if (lVar3 <= (long)(uVar4 ^ 0x7fffffffffffffff)) goto LAB_1093f269c;
              lVar3 = 0x7fffffffffffffff;
            }
            uVar1 = param_1 + 0x58;
            __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                      (uVar1,&uStack_50,lVar3);
            __ZNSt3__16chrono12steady_clock3nowEv();
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
        }
        uVar2 = *(uint *)(param_1 + 0x88);
      } while ((uVar2 >> 2 & 1) == 0);
      uVar2 = (uVar2 >> 2 ^ 0xffffffff) & 1;
      uVar4 = uStack_50;
      if (cStack_48 != '\x01') {
        return uVar2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 2;
  }
  __ZNSt3__15mutex6unlockEv(uVar4);
  return uVar2;
}



/* Entry: 1093f2710; end: 1093f2767;  */

void FUN_1093f2710(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x128;
  __Znwm();
  FUN_1093f2768();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1093f2768; end: 1093f27b7;  */

undefined8 * FUN_1093f2768(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af57e0;
  param_1[1] = 0;
  FUN_1093f2800(param_1 + 3,param_2,8);
  return param_1;
}



/* Entry: 1093f27b8; end: 1093f27cb;  */

void FUN_1093f27b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af57e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1093f27cc; end: 1093f27ef;  */

void FUN_1093f27cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af57e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093f27f0; end: 1093f27ff;  */

void FUN_1093f27f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001093f27f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1093f2800; end: 1093f28bf;  */

undefined8 * FUN_1093f2800(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[0xf] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df7b0;
  param_1[0x15] = 0;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df788;
  param_1[1] = 0;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xf,param_1 + 2);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *param_1 = &PTR_DAT_1108df718;
  param_1[0xf] = &PTR_DAT_1108df740;
  FUN_1093f28c0(param_1 + 2,param_2,param_3 | 8);
  return param_1;
}



/* Entry: 1093f28c0; end: 1093f2977;  */

long * FUN_1093f28c0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_2);
  FUN_109242f54(param_1);
  return param_1;
}



/* Entry: 1093f2978; end: 1093f29df;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_1093f2978(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 == 2) {
    plVar4 = (long *)*param_1;
    lVar5 = param_2[1];
    lVar6 = *param_2;
    plVar4[1] = param_2[1];
    *plVar4 = lVar6;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else if (param_3 == 1) {
    plVar4 = (long *)*param_1;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      lVar6 = param_2[1];
      lVar5 = *param_2;
      plVar4[2] = param_2[2];
      plVar4[1] = lVar6;
      *plVar4 = lVar5;
      return;
    }
    lVar5 = *param_2;
    uVar1 = param_2[1];
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar5 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar5 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar5);
      return;
    }
    *(char *)((long)plVar4 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(plVar4,lVar5,uVar1 + 1);
    return;
  }
  return;
}



/* Entry: 1093f29e0; end: 1093f2f17;  */

ulong * FUN_1093f29e0(ulong *param_1,undefined8 param_2,ulong param_3,long param_4,ulong *param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x19;
  ulong uVar13;
  ulong *puVar14;
  long *plVar15;
  long *unaff_x23;
  long lVar16;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  long lStack_88;
  long *aplStack_80 [2];
  char cStack_69;
  ulong *puStack_68;
  ulong *puStack_60;
  char cStack_51;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    if (cStack_51 < '\0') {
      __ZdlPv(puStack_68);
    }
    if (*unaff_x23 != 0) {
      __ZdlPv();
    }
    plVar7 = (long *)unaff_x19[4];
    unaff_x19[4] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = (long *)0x0;
    func_0x0001093a209c();
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      __ZdlPv(*unaff_x19);
    }
    __Unwind_Resume();
    uVar10 = param_1[3];
    puVar14 = param_1 + 3;
    if ((uVar10 & 1) != 0) {
      puVar14 = (ulong *)(uVar10 + 7);
    }
    puVar8 = param_1;
    if ((int)param_1[4] != 0) {
      lVar12 = (long)(int)param_1[4] << 3;
      do {
        uVar10 = *puVar14;
        iVar9 = *(int *)(uVar10 + 0x1c);
        if (iVar9 == 9) {
          uStack_d2 = *(undefined1 *)(*(long *)(uVar10 + 0x10) + 0x55);
          puVar8 = (ulong *)(*plVar7 + 0x28);
          func_0x0001078db3d4(puVar8,&uStack_d2);
          iVar9 = *(int *)(uVar10 + 0x1c);
        }
        if (iVar9 == 0x1a) {
          uStack_d1 = *(undefined1 *)(*(long *)(uVar10 + 0x10) + 0x41);
          puVar8 = (ulong *)(*plVar7 + 0x28);
          func_0x0001078db3d4(puVar8,&uStack_d1);
        }
        puVar14 = puVar14 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    plVar2 = (long *)param_1[0x17];
    for (plVar15 = (long *)param_1[0x16]; plVar15 != plVar2; plVar15 = plVar15 + 1) {
      puVar8 = (ulong *)*plVar15;
      FUN_1093f2f18(puVar8,plVar7);
    }
    return puVar8;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar8 = param_1;
    if (param_3 != 0) goto LAB_1093f2a5c;
  }
  else {
    puVar14 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar14 = (ulong *)((param_3 | 7) + 1);
    }
    puVar8 = puVar14;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar14 | 0x8000000000000000;
    *param_1 = (ulong)puVar8;
LAB_1093f2a5c:
    _memmove(puVar8,param_2,param_3);
  }
  *(undefined1 *)((long)puVar8 + param_3) = 0;
  uVar10 = *param_5;
  *param_5 = 0;
  param_1[5] = 0;
  puVar14 = param_1 + 3;
  *puVar14 = 0;
  param_1[4] = uVar10;
  param_1[6] = 0;
  param_1[7] = 0;
  ppuVar1 = &PTR_PTR_1132cfc60;
  if (*(undefined ***)(param_4 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_4 + 0x68);
  }
  if (((*(byte *)(ppuVar1 + 2) >> 1 & 1) != 0) && (*(int *)(ppuVar1[0x1a] + 0x134) != 6)) {
    FUN_10937e740(&puStack_68,&UNK_10f56c5dd);
    FUN_109388c6c(1,&UNK_10f56c51c,&UNK_10f56c5ce,0x1f,&puStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(puStack_68);
    }
  }
  FUN_10939f730(&lStack_88,param_4);
  lVar12 = lStack_88;
  *(uint *)(lStack_88 + 0x10) = *(uint *)(lStack_88 + 0x10) | 2;
  uVar10 = *(ulong *)(lStack_88 + 0x50);
  if (uVar10 == 0) {
    uVar10 = *(ulong *)(lStack_88 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x00010932f598();
    *(ulong *)(lVar12 + 0x50) = uVar10;
  }
  *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 4;
  uVar13 = *(ulong *)(uVar10 + 0x28);
  if (uVar13 == 0) {
    uVar13 = *(ulong *)(uVar10 + 8);
    if ((uVar13 & 1) != 0) {
      uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    func_0x00010932ed6c();
    *(ulong *)(uVar10 + 0x28) = uVar13;
  }
  uVar10 = *(ulong *)(uVar13 + 0x30) & 0xfffffffffffffffc;
  cVar3 = *(char *)(uVar10 + 0x17);
  if (cVar3 < '\0') {
    if (*(long *)(uVar10 + 8) == 0) goto LAB_1093f2b80;
  }
  else if (cVar3 == '\0') {
LAB_1093f2b80:
    (**(code **)(*(long *)param_1[4] + 0x10))
              (aplStack_80,(long *)param_1[4],*(ulong *)(uVar13 + 0x38) & 0xfffffffffffffffc);
    (**(code **)(*aplStack_80[0] + 0x10))(&puStack_68);
    plVar7 = aplStack_80[0];
    aplStack_80[0] = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    func_0x000104c58c64(aplStack_80,puStack_68,puStack_60,(long)puStack_60 - (long)puStack_68);
    *(uint *)(uVar13 + 0x10) = *(uint *)(uVar13 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar13 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c((ulong *)(uVar13 + 0x30),aplStack_80,uVar10);
    if (cStack_69 < '\0') {
      __ZdlPv(aplStack_80[0]);
    }
    if (puStack_68 != (ulong *)0x0) {
      puStack_60 = puStack_68;
      __ZdlPv();
    }
  }
  if ((*(ulong *)(uVar13 + 0x38) & 3) != 0) {
    puVar11 = (undefined8 *)(*(ulong *)(uVar13 + 0x38) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      *(undefined1 *)*puVar11 = 0;
      puVar11[1] = 0;
    }
    else {
      *(undefined1 *)puVar11 = 0;
      *(undefined1 *)((long)puVar11 + 0x17) = 0;
    }
  }
  *(uint *)(uVar13 + 0x10) = *(uint *)(uVar13 + 0x10) & 0xfffffffd;
  plVar15 = *(long **)(lStack_88 + 0xb8);
  lVar12 = lStack_88;
  for (plVar7 = *(long **)(lStack_88 + 0xb0); plVar7 != plVar15; plVar7 = plVar7 + 1) {
    lVar16 = *plVar7;
    *(uint *)(lVar16 + 0x10) = *(uint *)(lVar16 + 0x10) | 2;
    uVar10 = *(ulong *)(lVar16 + 0x50);
    lStack_88 = lVar12;
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(lVar16 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x00010932f598();
      *(ulong *)(lVar16 + 0x50) = uVar10;
    }
    *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 4;
    uVar13 = *(ulong *)(uVar10 + 0x28);
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(uVar10 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      func_0x00010932ed6c();
      *(ulong *)(uVar10 + 0x28) = uVar13;
    }
    if ((*(ulong *)(uVar13 + 0x38) & 3) != 0) {
      puVar11 = (undefined8 *)(*(ulong *)(uVar13 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        *(undefined1 *)*puVar11 = 0;
        puVar11[1] = 0;
      }
      else {
        *(undefined1 *)puVar11 = 0;
        *(undefined1 *)((long)puVar11 + 0x17) = 0;
      }
    }
    *(uint *)(uVar13 + 0x10) = *(uint *)(uVar13 + 0x10) & 0xfffffffd;
    lVar12 = lStack_88;
  }
  lStack_88 = 0;
  func_0x0001093a209c(puVar14,lVar12);
  lVar12 = lStack_88;
  lStack_88 = 0;
  if (lVar12 != 0) {
    func_0x00010939f86c();
    __ZdlPv();
  }
  puVar6 = (ulong *)(*puVar14 + 0x18);
  puVar8 = puVar6;
  if ((*puVar6 & 1) != 0) {
    puVar8 = (ulong *)(*puVar6 + 7);
  }
  iVar9 = *(int *)(*puVar14 + 0x20);
  if (iVar9 != 0) {
    lVar12 = (long)iVar9 << 3;
    bVar5 = false;
    do {
      bVar4 = bVar5;
      iVar9 = *(int *)(*puVar8 + 0x1c);
      lVar12 = lVar12 + -8;
      puVar8 = puVar8 + 1;
      bVar5 = (bool)(bVar4 | (iVar9 == 0x28 || iVar9 == 0x3c));
    } while (lVar12 != 0);
    if (((bVar4) || (iVar9 == 0x28)) || (iVar9 == 0x3c)) goto LAB_1093f2dd8;
  }
  func_0x000107c303b0(puVar6,0x10932fc18);
  if (*(int *)((long)puVar6 + 0x1c) != 0x28) {
    FUN_1093295a0(puVar6);
    *(undefined4 *)((long)puVar6 + 0x1c) = 0x28;
    uVar10 = puVar6[1];
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x00010932ec3c();
    puVar6[2] = uVar10;
  }
LAB_1093f2dd8:
  puStack_68 = param_1;
  FUN_1093f2f18(param_1[3],&puStack_68);
  return param_1;
}



/* Entry: 1093f2f18; end: 1093f30bb;  */

void FUN_1093f2f18(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  puVar4 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar6 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      uVar3 = *puVar4;
      iVar2 = *(int *)(uVar3 + 0x1c);
      if (iVar2 == 9) {
        uStack_42 = *(undefined1 *)(*(long *)(uVar3 + 0x10) + 0x55);
        func_0x0001078db3d4(*param_2 + 0x28,&uStack_42);
        iVar2 = *(int *)(uVar3 + 0x1c);
      }
      if (iVar2 == 0x1a) {
        uStack_41 = *(undefined1 *)(*(long *)(uVar3 + 0x10) + 0x41);
        func_0x0001078db3d4(*param_2 + 0x28,&uStack_41);
      }
      puVar4 = puVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar5 = *(undefined8 **)(param_1 + 0xb0); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    FUN_1093f2f18(*puVar5,param_2);
  }
  return;
}



/* Entry: 1093f30bc; end: 1093f32d3;  */

void FUN_1093f30bc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *aplStack_70 [2];
  char cStack_59;
  long lStack_58;
  long lStack_50;
  
  plVar9 = *(long **)(*(long *)(param_1 + 0x18) + 0xb0);
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0xb8);
  if (plVar9 != plVar2) {
    uVar8 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar8 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      puVar5 = (ulong *)(*(ulong *)(*plVar9 + 0x48) & 0xfffffffffffffffc);
      bVar3 = *(byte *)((long)puVar5 + 0x17);
      uVar7 = puVar5[1];
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
      }
      if (uVar7 == uVar8) {
        puVar4 = (ulong *)*puVar5;
        if (-1 < (char)bVar3) {
          puVar4 = puVar5;
        }
        _memcmp(puVar4,puVar1,uVar8);
        if ((int)puVar4 == 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (aplStack_70,*(long **)(param_1 + 0x20),param_3);
          (**(code **)(*aplStack_70[0] + 0x10))(&lStack_58);
          plVar2 = aplStack_70[0];
          aplStack_70[0] = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          lVar6 = *plVar9;
          *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 2;
          uVar8 = *(ulong *)(lVar6 + 0x50);
          if (uVar8 == 0) {
            uVar8 = *(ulong *)(lVar6 + 8);
            if ((uVar8 & 1) != 0) {
              uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
            }
            func_0x00010932f598();
            *(ulong *)(lVar6 + 0x50) = uVar8;
          }
          *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 4;
          uVar7 = *(ulong *)(uVar8 + 0x28);
          if (uVar7 == 0) {
            uVar7 = *(ulong *)(uVar8 + 8);
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x00010932ed6c();
            *(ulong *)(uVar8 + 0x28) = uVar7;
          }
          func_0x000104c58c64(aplStack_70,lStack_58,lStack_50,lStack_50 - lStack_58);
          *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
          uVar8 = *(ulong *)(uVar7 + 8);
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          func_0x000107c3024c(uVar7 + 0x30,aplStack_70,uVar8);
          if (cStack_59 < '\0') {
            __ZdlPv(aplStack_70[0]);
          }
          if (lStack_58 == 0) {
            return;
          }
          lStack_50 = lStack_58;
          __ZdlPv();
          return;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}



/* Entry: 1093f32d4; end: 1093f3883;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f32d4(long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char cVar12;
  bool bVar13;
  code *pcVar14;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  ulong ***pppuVar18;
  long *plVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong ***pppuVar24;
  long lVar25;
  ulong ***pppuVar26;
  ulong uVar27;
  int iVar28;
  undefined **ppuVar29;
  ulong ***pppuVar30;
  byte bVar31;
  ulong ***pppuVar32;
  long lVar33;
  long lVar34;
  ulong ***pppuVar35;
  long lVar36;
  ulong **ppuVar37;
  undefined8 ***pppuVar38;
  ulong ***pppuVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined8 uVar42;
  ulong **ppuVar43;
  undefined8 uVar44;
  ulong **ppuVar45;
  undefined8 uVar46;
  ulong **ppuVar47;
  undefined8 uVar48;
  ulong **ppuVar49;
  undefined8 uVar50;
  undefined4 auStack_2f0 [2];
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  long *plStack_278;
  long alStack_270 [2];
  undefined8 uStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  ulong uStack_250;
  ulong uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  int *piStack_220;
  long *plStack_218;
  long alStack_210 [2];
  undefined8 ****ppppuStack_e0;
  ulong ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  int iStack_c8;
  uint uStack_c4;
  ulong ***pppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  ulong ***pppuStack_a8;
  ulong ***pppuStack_a0;
  ulong ***pppuStack_98;
  undefined8 ****ppppuStack_90;
  ulong ***pppuStack_88;
  ulong ***pppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  
  lVar34 = *param_3;
  lVar33 = param_3[1];
  pppuVar39 = (ulong ***)((lVar33 - lVar34 >> 4) * -0x5555555555555555);
  if ((long)pppuVar39 + (param_4[1] - *param_4 >> 4) * -0x6db6db6db6db6db7 != 0) {
    puVar16 = &UNK_10f56c51c;
    plVar19 = (long *)0x75;
    FUN_109389218(&UNK_10f56c51c,0x75,&UNK_10f56c5a0);
    FUN_10930ef1c(lVar33);
    ppppuStack_e0 = &pppuStack_c0;
    func_0x0001093957f8(&ppppuStack_e0);
    if (pppuStack_a8 != (undefined8 ***)0x0) {
      pppuStack_a0 = pppuStack_a8;
      __ZdlPv();
    }
    __Unwind_Resume();
    uVar22 = *(ulong *)(puVar16 + 0x18);
    puVar23 = (ulong *)(puVar16 + 0x18);
    if ((uVar22 & 1) != 0) {
      puVar23 = (ulong *)(uVar22 + 7);
    }
    if (*(int *)(puVar16 + 0x20) != 0) {
      lVar34 = (long)*(int *)(puVar16 + 0x20) << 3;
      do {
        uVar22 = *puVar23;
        iVar28 = *(int *)(uVar22 + 0x1c);
        if (iVar28 == 9) {
          lVar33 = *plVar19;
          uVar27 = *(ulong *)plVar19[1];
          if (*(ulong *)(lVar33 + 0x30) <= uVar27) goto LAB_1093f39a4;
          lVar41 = *(long *)(uVar22 + 0x10);
          *(ulong *)plVar19[1] = uVar27 + 1;
          if ((*(ulong *)(*(long *)(lVar33 + 0x28) + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) != 0
             ) {
            *(undefined1 *)(lVar41 + 0x55) = *(undefined1 *)plVar19[2];
            *(uint *)(lVar41 + 0x10) = *(uint *)(lVar41 + 0x10) | 0x400;
          }
          iVar28 = *(int *)(uVar22 + 0x1c);
        }
        if (iVar28 == 0x1a) {
          lVar33 = *plVar19;
          uVar27 = *(ulong *)plVar19[1];
          if (*(ulong *)(lVar33 + 0x30) <= uVar27) {
LAB_1093f39a4:
            puVar20 = (undefined *)0xb2;
            FUN_109389218(&UNK_10f56c51c,0xb2,&UNK_10f56c61b);
            puVar16 = &DAT_10f62a4d8;
            func_0x000104c4f6cc();
            if (puVar16 < (undefined *)0x555555555555556) {
              __Znwm((long)puVar16 * 0x30);
              return;
            }
            func_0x000104c4f740();
            if (*(int *)(puVar16 + 0x20) == 0) {
              return;
            }
            if (*(int *)(puVar16 + 0x24) == 0) {
              return;
            }
            if (*(int *)(puVar16 + 0x28) != 1) {
              *(int *)(puVar20 + 0x20) = *(int *)(puVar16 + 0x20);
              uVar5 = *(uint *)(puVar20 + 0x10);
              *(uint *)(puVar20 + 0x10) = uVar5 | 2;
              *(undefined4 *)(puVar20 + 0x24) = *(undefined4 *)(puVar16 + 0x24);
              *(undefined4 *)(puVar20 + 0x28) = 1;
              *(uint *)(puVar20 + 0x10) = uVar5 | 0xf;
              puVar40 = *(undefined8 **)(puVar20 + 8);
              if (((ulong)puVar40 & 1) != 0) {
                puVar40 = *(undefined8 **)((ulong)puVar40 & 0xfffffffffffffffe);
              }
              if (((uint)*(undefined8 *)(puVar20 + 0x18) >> 1 & 1) == 0) {
                if (puVar40 == (undefined8 *)0x0) {
                  puVar40 = (undefined8 *)0x18;
                  __Znwm();
                  uVar22 = 2;
                }
                else {
                  func_0x00010b4d80a4();
                  uVar22 = 3;
                }
                *puVar40 = 0;
                puVar40[1] = 0;
                puVar40[2] = 0;
                *(ulong *)(puVar20 + 0x18) = uVar22 | (ulong)puVar40;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
              iVar28 = *(int *)(puVar16 + 0x20);
              iVar10 = *(int *)(puVar16 + 0x24);
              uStack_250 = *(ulong *)(puVar16 + 0x18) & 0xfffffffffffffffc;
              if (*(char *)(uStack_250 + 0x17) < '\0') {
                uStack_250 = *(ulong *)uStack_250;
              }
              uStack_260 = 0x242ff0010;
              piStack_220 = &iStack_258;
              lStack_238 = 0;
              lStack_240 = 0;
              lStack_228 = 0;
              uStack_230 = 0;
              alStack_210[0] = 0;
              alStack_210[1] = 0;
              lVar34 = (long)iVar28 * (long)iVar10;
              iStack_258 = iVar10;
              iStack_254 = iVar28;
              uStack_248 = uStack_250;
              plStack_218 = alStack_210;
              if ((lVar34 == 0) || (uStack_250 != 0)) {
                alStack_210[0] = (long)iVar28 * 3;
                uStack_260 = 0x242ff4010;
                alStack_210[1] = 3;
                lStack_240 = uStack_250 + alStack_210[0] * iVar10;
                *(uint *)(puVar20 + 0x10) = *(uint *)(puVar20 + 0x10) | 1;
                puVar40 = *(undefined8 **)(puVar20 + 8);
                if (((ulong)puVar40 & 1) != 0) {
                  puVar40 = *(undefined8 **)((ulong)puVar40 & 0xfffffffffffffffe);
                }
                lStack_238 = lStack_240;
                if (((uint)*(ulong *)(puVar20 + 0x18) >> 1 & 1) == 0) {
                  if (puVar40 == (undefined8 *)0x0) {
                    puVar40 = (undefined8 *)0x18;
                    __Znwm();
                    uVar22 = 2;
                  }
                  else {
                    func_0x00010b4d80a4();
                    uVar22 = 3;
                  }
                  *puVar40 = 0;
                  puVar40[1] = 0;
                  puVar40[2] = 0;
                  *(ulong *)(puVar20 + 0x18) = uVar22 | (ulong)puVar40;
                }
                else {
                  puVar40 = (undefined8 *)(*(ulong *)(puVar20 + 0x18) & 0xfffffffffffffffc);
                }
                if (*(char *)((long)puVar40 + 0x17) < '\0') {
                  puVar40 = (undefined8 *)*puVar40;
                }
                uStack_2c0 = (undefined4 *)0x242ff0000;
                puStack_2e8 = &uStack_2c0;
                puStack_280 = &uStack_2b8;
                uStack_2b8 = CONCAT44(iVar28,iVar10);
                puStack_298 = (undefined8 *)0x0;
                puStack_2a0 = (undefined8 *)0x0;
                lStack_288 = 0;
                uStack_290 = 0;
                alStack_270[0] = 0;
                alStack_270[1] = 0;
                puStack_2b0 = puVar40;
                puStack_2a8 = puVar40;
                plStack_278 = alStack_270;
                if ((lVar34 == 0) || (puVar40 != (undefined8 *)0x0)) {
                  uStack_2c0 = (undefined4 *)0x242ff4000;
                  alStack_270[1] = 1;
                  puStack_2a0 = (undefined8 *)((long)puVar40 + lVar34);
                  puStack_2d8 = (undefined4 *)CONCAT44(puStack_2d8._4_4_,0x1010000);
                  puStack_2d0 = &stack0xfffffffffffffda0;
                  uStack_2c8 = 0;
                  auStack_2f0[0] = 0xc2010000;
                  uStack_2e0 = 0;
                  puStack_298 = puStack_2a0;
                  alStack_270[0] = (long)iVar28;
                  FUN_109ac9fc8(&puStack_2d8,auStack_2f0,7,0);
                  if (lStack_288 != 0) {
                    piVar2 = (int *)(lStack_288 + 0x14);
                    do {
                      iVar28 = *piVar2;
                      cVar12 = '\x01';
                      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar13) {
                        *piVar2 = iVar28 + -1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(&uStack_2c0);
                    }
                  }
                  lStack_288 = 0;
                  puStack_2a8 = (undefined8 *)0x0;
                  puStack_2b0 = (undefined8 *)0x0;
                  puStack_298 = (undefined8 *)0x0;
                  puStack_2a0 = (undefined8 *)0x0;
                  if (0 < uStack_2c0._4_4_) {
                    lVar34 = 0;
                    do {
                      *(undefined4 *)((long)puStack_280 + lVar34 * 4) = 0;
                      lVar34 = lVar34 + 1;
                    } while (lVar34 < uStack_2c0._4_4_);
                  }
                  if (plStack_278 != alStack_270 && plStack_278 != (long *)0x0) {
                    _free(plStack_278[-1]);
                  }
                  if (lStack_228 != 0) {
                    piVar2 = (int *)(lStack_228 + 0x14);
                    do {
                      iVar28 = *piVar2;
                      cVar12 = '\x01';
                      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar13) {
                        *piVar2 = iVar28 + -1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(&stack0xfffffffffffffda0);
                    }
                  }
                  lStack_228 = 0;
                  uStack_248 = 0;
                  uStack_250 = 0;
                  lStack_238 = 0;
                  lStack_240 = 0;
                  if (0 < iStack_25c) {
                    lVar34 = 0;
                    do {
                      piStack_220[lVar34] = 0;
                      lVar34 = lVar34 + 1;
                    } while (lVar34 < iStack_25c);
                  }
                  if (plStack_218 != alStack_210 && plStack_218 != (long *)0x0) {
                    _free(plStack_218[-1]);
                  }
                  return;
                }
                puVar17 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar17 = 1;
                puStack_2d8 = puVar17 + 1;
                puStack_2d0 = (undefined8 *)0x1c;
                *(undefined1 *)(puVar17 + 8) = 0;
                *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
                FUN_109ac3188(0xffffff29,&puStack_2d8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              }
              else {
                puVar17 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar17 = 1;
                uStack_2c0 = puVar17 + 1;
                uStack_2b8 = 0x1c;
                *(undefined1 *)(puVar17 + 8) = 0;
                *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
                FUN_109ac3188(0xffffff29,&uStack_2c0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              }
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1093f3e40);
              (*pcVar14)();
            }
            if (puVar16 == puVar20) {
              return;
            }
            func_0x000109308014(puVar20);
            uVar5 = *(uint *)(puVar16 + 0x10);
            if ((uVar5 & 0xf) != 0) {
              if ((uVar5 & 1) != 0) {
                uVar27 = *(ulong *)(puVar16 + 0x18);
                *(uint *)(puVar20 + 0x10) = *(uint *)(puVar20 + 0x10) | 1;
                uVar22 = *(ulong *)(puVar20 + 8);
                if ((uVar22 & 1) != 0) {
                  uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
                }
                func_0x000107c30248(puVar20 + 0x18,uVar27 & 0xfffffffffffffffc,uVar22);
              }
              if ((uVar5 >> 1 & 1) != 0) {
                *(undefined4 *)(puVar20 + 0x20) = *(undefined4 *)(puVar16 + 0x20);
              }
              if ((uVar5 >> 2 & 1) != 0) {
                *(undefined4 *)(puVar20 + 0x24) = *(undefined4 *)(puVar16 + 0x24);
              }
              if ((uVar5 >> 3 & 1) != 0) {
                *(undefined4 *)(puVar20 + 0x28) = *(undefined4 *)(puVar16 + 0x28);
              }
            }
            *(uint *)(puVar20 + 0x10) = *(uint *)(puVar20 + 0x10) | uVar5;
            if ((*(ulong *)(puVar16 + 8) & 1) != 0) {
              if ((*(ulong *)(puVar20 + 8) & 1) == 0) {
                func_0x00010b4c3590();
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
              )();
              return;
            }
            return;
          }
          lVar41 = *(long *)(uVar22 + 0x10);
          *(ulong *)plVar19[1] = uVar27 + 1;
          if ((*(ulong *)(*(long *)(lVar33 + 0x28) + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) != 0
             ) {
            *(undefined1 *)(lVar41 + 0x41) = *(undefined1 *)plVar19[2];
            *(uint *)(lVar41 + 0x10) = *(uint *)(lVar41 + 0x10) | 8;
          }
        }
        puVar23 = puVar23 + 1;
        lVar34 = lVar34 + -8;
      } while (lVar34 != 0);
    }
    puVar3 = *(undefined8 **)(puVar16 + 0xb8);
    for (puVar40 = *(undefined8 **)(puVar16 + 0xb0); puVar40 != puVar3; puVar40 = puVar40 + 1) {
      FUN_1093f3884(*puVar40,plVar19);
    }
    return;
  }
  pppuStack_a8 = (ulong ***)0x0;
  pppuStack_a0 = (ulong ***)0x0;
  pppuStack_98 = (ulong ***)0x0;
  pppuStack_c0 = (ulong ***)0x0;
  ppppuStack_b8 = (undefined8 ****)0x0;
  ppppuStack_b0 = (undefined8 ****)0x0;
  pppuVar18 = pppuVar39;
  func_0x000108a11934(&pppuStack_c0);
  if (lVar33 != lVar34) {
    lVar33 = 0;
    pppuVar30 = (ulong ***)0x0;
    lVar34 = 0x14;
    pppuVar24 = (ulong ***)0x0;
    do {
      pppuVar32 = pppuStack_a8;
      lVar36 = *param_3;
      lVar41 = lVar36 + lVar34;
      puVar40 = (undefined8 *)(lVar41 + -0x14);
      uVar5 = *(uint *)(lVar41 + 0x10);
      iVar28 = *(int *)(lVar41 + 0x14);
      pppuVar38 = *(undefined8 ****)(lVar41 + -0xc);
      if ((uVar5 == 0 || iVar28 == 0) || (pppuVar38 == (undefined8 ***)0x0)) {
        ppuVar29 = *(undefined ***)(*(long *)(param_2 + 0x18) + 0x70);
        ppuVar4 = &PTR_PTR_1132d1970;
        if (ppuVar29 != (undefined **)0x0) {
          ppuVar4 = ppuVar29;
        }
        if ((int)pppuVar30 < *(int *)(ppuVar4 + 3)) {
          bVar31 = ppuVar4[4][lVar33 >> 0x20];
        }
        else {
          bVar31 = 0;
        }
        iStack_c8 = iVar28;
        uStack_c4 = uVar5;
        if (uVar5 == 0 || iVar28 == 0) {
          pppuVar18 = (ulong ***)(ulong)(uint)((undefined4 *)(lVar36 + lVar34))[-1];
          FUN_1093e291c(*(long *)(param_2 + 0x18),pppuVar18,*(undefined4 *)(lVar36 + lVar34),
                        bVar31 & 1,&uStack_c4,&iStack_c8);
          pppuVar38 = *(undefined8 ****)(lVar41 + -0xc);
        }
        uVar5 = uStack_c4;
        iVar28 = iStack_c8;
        if (pppuVar38 == (undefined8 ***)0x0) {
          pppuVar18 = (ulong ***)(ulong)uStack_c4;
          FUN_1093e27e0(&ppppuStack_e0,ppuVar4,pppuVar18,iStack_c8,
                        ((undefined4 *)(lVar36 + lVar34))[-1],*(undefined4 *)(lVar36 + lVar34),
                        bVar31 & 1);
          if (ppppuStack_b8 < ppppuStack_b0) {
            *ppppuStack_b8 = (undefined8 ***)0x0;
            ppppuStack_b8[1] = (undefined8 ***)0x0;
            ppppuStack_b8[2] = (undefined8 ***)0x0;
            ppppuStack_b8[1] = pppuStack_d8;
            *ppppuStack_b8 = ppppuStack_e0;
            ppppuStack_b8[2] = pppuStack_d0;
            ppppuStack_b8 = ppppuStack_b8 + 3;
          }
          else {
            lVar21 = (long)ppppuStack_b8 - (long)pppuStack_c0;
            uVar22 = (lVar21 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar22) {
              FUN_1093957a0();
              goto LAB_1093f37f8;
            }
            lVar25 = (long)ppppuStack_b0 - (long)pppuStack_c0 >> 3;
            uVar27 = lVar25 * 0x5555555555555556;
            if (uVar27 < uVar22 || uVar27 - uVar22 == 0) {
              uVar27 = uVar22;
            }
            if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
              uVar27 = 0xaaaaaaaaaaaaaaa;
            }
            ppppuStack_70 = &pppuStack_c0;
            ppppuVar15 = &pppuStack_c0;
            func_0x0001093957b4();
            puVar3 = (undefined8 *)((long)ppppuVar15 + lVar21);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[1] = pppuStack_d8;
            *puVar3 = ppppuStack_e0;
            puVar3[2] = pppuStack_d0;
            ppppuStack_e0 = (undefined8 ****)0x0;
            pppuStack_d8 = (ulong ***)0x0;
            pppuStack_d0 = (undefined8 ***)0x0;
            ppppuVar1 = (undefined8 ****)(puVar3 + 3);
            pppuVar32 = (ulong ***)((long)puVar3 - ((long)ppppuStack_b8 - (long)pppuStack_c0));
            pppuVar18 = pppuStack_c0;
            _memcpy(pppuVar32);
            pppuStack_80 = pppuStack_c0;
            ppppuStack_78 = ppppuStack_b0;
            ppppuStack_90 = (undefined8 ****)pppuStack_c0;
            pppuStack_88 = pppuStack_c0;
            pppuStack_c0 = pppuVar32;
            ppppuStack_b8 = ppppuVar1;
            ppppuStack_b0 = ppppuVar15 + uVar27 * 3;
            func_0x000108a11c04(&ppppuStack_90);
            ppppuStack_b8 = ppppuVar1;
            if (ppppuStack_e0 != (undefined8 ****)0x0) {
              pppuStack_d8 = (ulong ***)ppppuStack_e0;
              __ZdlPv();
            }
          }
          pppuVar38 = *(undefined8 ****)(lVar41 + -0xc);
          ppuVar37 = (ulong **)*puVar40;
          if (pppuVar38 == (undefined8 ***)0x0) {
            pppuVar38 = ppppuStack_b8[-3];
          }
        }
        else {
          ppuVar37 = (ulong **)*puVar40;
        }
        pppuVar32 = pppuStack_a8;
        puVar17 = (undefined4 *)(lVar36 + lVar34);
        uVar6 = puVar17[-1];
        uVar8 = *puVar17;
        uVar7 = puVar17[1];
        uVar9 = puVar17[2];
        uVar11 = puVar17[3];
        if (pppuVar24 < pppuStack_98) {
          *pppuVar24 = ppuVar37;
          pppuVar24[1] = (ulong **)pppuVar38;
          *(undefined4 *)(pppuVar24 + 2) = uVar6;
          *(undefined4 *)((long)pppuVar24 + 0x14) = uVar8;
          *(undefined4 *)(pppuVar24 + 3) = uVar7;
          *(undefined4 *)((long)pppuVar24 + 0x1c) = uVar9;
          *(undefined4 *)(pppuVar24 + 4) = uVar11;
          *(uint *)((long)pppuVar24 + 0x24) = uVar5;
          *(int *)(pppuVar24 + 5) = iVar28;
          pppuVar35 = pppuVar24 + 6;
        }
        else {
          lVar41 = (long)pppuVar24 - (long)pppuStack_a8;
          pppuVar24 = (ulong ***)((lVar41 >> 4) * -0x5555555555555555 + 1);
          if ((ulong ***)0x555555555555555 < pppuVar24) {
            FUN_1093f39bc();
            goto LAB_1093f37f8;
          }
          lVar36 = (long)pppuStack_98 - (long)pppuStack_a8 >> 4;
          pppuVar26 = (ulong ***)(lVar36 * 0x5555555555555556);
          if (pppuVar26 < pppuVar24 || (long)pppuVar26 - (long)pppuVar24 == 0) {
            pppuVar26 = pppuVar24;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar36 * -0x5555555555555555)) {
            pppuVar26 = (ulong ***)0x555555555555555;
          }
          FUN_1093f39d0();
          puVar40 = (undefined8 *)((long)pppuVar26 + lVar41);
          *puVar40 = ppuVar37;
          puVar40[1] = pppuVar38;
          lVar41 = (long)pppuVar18 * 6;
          *(undefined4 *)(puVar40 + 2) = uVar6;
          *(undefined4 *)((long)puVar40 + 0x14) = uVar8;
          *(undefined4 *)(puVar40 + 3) = uVar7;
          *(undefined4 *)((long)puVar40 + 0x1c) = uVar9;
          *(undefined4 *)(puVar40 + 4) = uVar11;
          *(uint *)((long)puVar40 + 0x24) = uVar5;
          pppuVar35 = (ulong ***)(puVar40 + 6);
          *(int *)(puVar40 + 5) = iVar28;
          pppuVar18 = pppuVar32;
          _memcpy();
          pppuStack_a8 = pppuVar26;
          pppuStack_98 = pppuVar26 + lVar41;
          if (pppuVar32 != (ulong ***)0x0) {
            pppuStack_a0 = pppuVar35;
            __ZdlPv(pppuVar32);
          }
        }
      }
      else if (pppuVar24 < pppuStack_98) {
        ppuVar43 = *(ulong ***)(lVar41 + -0xc);
        ppuVar37 = (ulong **)*puVar40;
        ppuVar45 = *(ulong ***)(lVar41 + -4);
        ppuVar49 = *(ulong ***)(lVar41 + 0x14);
        ppuVar47 = *(ulong ***)(lVar41 + 0xc);
        pppuVar24[3] = *(ulong ***)(lVar41 + 4);
        pppuVar24[2] = ppuVar45;
        pppuVar24[5] = ppuVar49;
        pppuVar24[4] = ppuVar47;
        pppuVar35 = pppuVar24 + 6;
        pppuVar24[1] = ppuVar43;
        *pppuVar24 = ppuVar37;
      }
      else {
        lVar36 = (long)pppuVar24 - (long)pppuStack_a8;
        pppuVar24 = (ulong ***)((lVar36 >> 4) * -0x5555555555555555 + 1);
        if ((ulong ***)0x555555555555555 < pppuVar24) {
          FUN_1093f39bc();
LAB_1093f37f8:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1093f37fc);
          (*pcVar14)();
        }
        lVar21 = (long)pppuStack_98 - (long)pppuStack_a8 >> 4;
        pppuVar26 = (ulong ***)(lVar21 * 0x5555555555555556);
        if (pppuVar26 < pppuVar24 || (long)pppuVar26 - (long)pppuVar24 == 0) {
          pppuVar26 = pppuVar24;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar21 * -0x5555555555555555)) {
          pppuVar26 = (ulong ***)0x555555555555555;
        }
        FUN_1093f39d0();
        puVar3 = (undefined8 *)((long)pppuVar26 + lVar36);
        lVar36 = (long)pppuVar18 * 6;
        uVar44 = *(undefined8 *)(lVar41 + -0xc);
        uVar42 = *puVar40;
        uVar46 = *(undefined8 *)(lVar41 + -4);
        uVar50 = *(undefined8 *)(lVar41 + 0x14);
        uVar48 = *(undefined8 *)(lVar41 + 0xc);
        puVar3[3] = *(undefined8 *)(lVar41 + 4);
        puVar3[2] = uVar46;
        puVar3[5] = uVar50;
        puVar3[4] = uVar48;
        puVar3[1] = uVar44;
        *puVar3 = uVar42;
        pppuVar35 = (ulong ***)(puVar3 + 6);
        pppuVar18 = pppuVar32;
        _memcpy();
        pppuStack_a8 = pppuVar26;
        pppuStack_98 = pppuVar26 + lVar36;
        if (pppuVar32 != (ulong ***)0x0) {
          pppuStack_a0 = pppuVar35;
          __ZdlPv(pppuVar32);
        }
      }
      pppuVar30 = (ulong ***)((long)pppuVar30 + 1);
      lVar33 = lVar33 + 0x100000000;
      lVar34 = lVar34 + 0x30;
      pppuVar24 = pppuVar35;
      pppuStack_a0 = pppuVar35;
    } while (pppuVar39 != pppuVar30);
  }
  FUN_1093a16b8(param_1,*(undefined8 *)(param_2 + 0x18),&pppuStack_a8,param_4,param_5);
  if (*(int *)(param_1 + 0x4c) != 1) {
    func_0x000107c30320(param_1 + 0x48,0x10500580020,0);
  }
  func_0x0001093c08b8(param_1);
  ppppuStack_90 = &pppuStack_c0;
  func_0x0001093957f8(&ppppuStack_90);
  if (pppuStack_a8 != (ulong ***)0x0) {
    pppuStack_a0 = pppuStack_a8;
    __ZdlPv();
  }
  return;
}



/* Entry: 1093f3884; end: 1093f39bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f3884(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  undefined4 auStack_1b0 [2];
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long alStack_130 [2];
  undefined8 uStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  int *piStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  
  uVar13 = *(ulong *)(param_1 + 0x18);
  puVar14 = (ulong *)(param_1 + 0x18);
  if ((uVar13 & 1) != 0) {
    puVar14 = (ulong *)(uVar13 + 7);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar15 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      uVar13 = *puVar14;
      iVar16 = *(int *)(uVar13 + 0x1c);
      if (iVar16 == 9) {
        lVar3 = *param_2;
        uVar18 = *(ulong *)param_2[1];
        if (*(ulong *)(lVar3 + 0x30) <= uVar18) goto LAB_1093f39a4;
        lVar17 = *(long *)(uVar13 + 0x10);
        *(ulong *)param_2[1] = uVar18 + 1;
        if ((*(ulong *)(*(long *)(lVar3 + 0x28) + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
          *(undefined1 *)(lVar17 + 0x55) = *(undefined1 *)param_2[2];
          *(uint *)(lVar17 + 0x10) = *(uint *)(lVar17 + 0x10) | 0x400;
        }
        iVar16 = *(int *)(uVar13 + 0x1c);
      }
      if (iVar16 == 0x1a) {
        lVar3 = *param_2;
        uVar18 = *(ulong *)param_2[1];
        if (*(ulong *)(lVar3 + 0x30) <= uVar18) {
LAB_1093f39a4:
          puVar12 = (undefined *)0xb2;
          FUN_109389218(&UNK_10f56c51c,0xb2,&UNK_10f56c61b);
          puVar9 = &DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if (puVar9 < (undefined *)0x555555555555556) {
            __Znwm((long)puVar9 * 0x30);
            return;
          }
          func_0x000104c4f740();
          if (*(int *)(puVar9 + 0x20) == 0) {
            return;
          }
          if (*(int *)(puVar9 + 0x24) == 0) {
            return;
          }
          if (*(int *)(puVar9 + 0x28) != 1) {
            *(int *)(puVar12 + 0x20) = *(int *)(puVar9 + 0x20);
            uVar5 = *(uint *)(puVar12 + 0x10);
            *(uint *)(puVar12 + 0x10) = uVar5 | 2;
            *(undefined4 *)(puVar12 + 0x24) = *(undefined4 *)(puVar9 + 0x24);
            *(undefined4 *)(puVar12 + 0x28) = 1;
            *(uint *)(puVar12 + 0x10) = uVar5 | 0xf;
            puVar10 = *(undefined8 **)(puVar12 + 8);
            if (((ulong)puVar10 & 1) != 0) {
              puVar10 = *(undefined8 **)((ulong)puVar10 & 0xfffffffffffffffe);
            }
            if (((uint)*(undefined8 *)(puVar12 + 0x18) >> 1 & 1) == 0) {
              if (puVar10 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)0x18;
                __Znwm();
                uVar13 = 2;
              }
              else {
                func_0x00010b4d80a4();
                uVar13 = 3;
              }
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              *(ulong *)(puVar12 + 0x18) = uVar13 | (ulong)puVar10;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
            iVar16 = *(int *)(puVar9 + 0x20);
            iVar2 = *(int *)(puVar9 + 0x24);
            uStack_110 = *(ulong *)(puVar9 + 0x18) & 0xfffffffffffffffc;
            if (*(char *)(uStack_110 + 0x17) < '\0') {
              uStack_110 = *(ulong *)uStack_110;
            }
            uStack_120 = 0x242ff0010;
            piStack_e0 = &iStack_118;
            lStack_f8 = 0;
            lStack_100 = 0;
            lStack_e8 = 0;
            uStack_f0 = 0;
            alStack_d0[0] = 0;
            alStack_d0[1] = 0;
            lVar15 = (long)iVar16 * (long)iVar2;
            iStack_118 = iVar2;
            iStack_114 = iVar16;
            uStack_108 = uStack_110;
            plStack_d8 = alStack_d0;
            if ((lVar15 == 0) || (uStack_110 != 0)) {
              alStack_d0[0] = (long)iVar16 * 3;
              uStack_120 = 0x242ff4010;
              alStack_d0[1] = 3;
              lStack_100 = uStack_110 + alStack_d0[0] * iVar2;
              *(uint *)(puVar12 + 0x10) = *(uint *)(puVar12 + 0x10) | 1;
              puVar10 = *(undefined8 **)(puVar12 + 8);
              if (((ulong)puVar10 & 1) != 0) {
                puVar10 = *(undefined8 **)((ulong)puVar10 & 0xfffffffffffffffe);
              }
              lStack_f8 = lStack_100;
              if (((uint)*(ulong *)(puVar12 + 0x18) >> 1 & 1) == 0) {
                if (puVar10 == (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)0x18;
                  __Znwm();
                  uVar13 = 2;
                }
                else {
                  func_0x00010b4d80a4();
                  uVar13 = 3;
                }
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                *(ulong *)(puVar12 + 0x18) = uVar13 | (ulong)puVar10;
              }
              else {
                puVar10 = (undefined8 *)(*(ulong *)(puVar12 + 0x18) & 0xfffffffffffffffc);
              }
              if (*(char *)((long)puVar10 + 0x17) < '\0') {
                puVar10 = (undefined8 *)*puVar10;
              }
              uStack_180 = (undefined4 *)0x242ff0000;
              puStack_1a8 = &uStack_180;
              puStack_140 = &uStack_178;
              uStack_178 = CONCAT44(iVar16,iVar2);
              puStack_158 = (undefined8 *)0x0;
              puStack_160 = (undefined8 *)0x0;
              lStack_148 = 0;
              uStack_150 = 0;
              alStack_130[0] = 0;
              alStack_130[1] = 0;
              puStack_170 = puVar10;
              puStack_168 = puVar10;
              plStack_138 = alStack_130;
              if ((lVar15 == 0) || (puVar10 != (undefined8 *)0x0)) {
                uStack_180 = (undefined4 *)0x242ff4000;
                alStack_130[1] = 1;
                puStack_160 = (undefined8 *)((long)puVar10 + lVar15);
                puStack_198 = (undefined4 *)CONCAT44(puStack_198._4_4_,0x1010000);
                puStack_190 = &stack0xfffffffffffffee0;
                uStack_188 = 0;
                auStack_1b0[0] = 0xc2010000;
                uStack_1a0 = 0;
                puStack_158 = puStack_160;
                alStack_130[0] = (long)iVar16;
                FUN_109ac9fc8(&puStack_198,auStack_1b0,7,0);
                if (lStack_148 != 0) {
                  piVar1 = (int *)(lStack_148 + 0x14);
                  do {
                    iVar16 = *piVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar7) {
                      *piVar1 = iVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar16 + -1 == 0) {
                    func_0x000109a848d4(&uStack_180);
                  }
                }
                lStack_148 = 0;
                puStack_168 = (undefined8 *)0x0;
                puStack_170 = (undefined8 *)0x0;
                puStack_158 = (undefined8 *)0x0;
                puStack_160 = (undefined8 *)0x0;
                if (0 < uStack_180._4_4_) {
                  lVar15 = 0;
                  do {
                    *(undefined4 *)((long)puStack_140 + lVar15 * 4) = 0;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 < uStack_180._4_4_);
                }
                if (plStack_138 != alStack_130 && plStack_138 != (long *)0x0) {
                  _free(plStack_138[-1]);
                }
                if (lStack_e8 != 0) {
                  piVar1 = (int *)(lStack_e8 + 0x14);
                  do {
                    iVar16 = *piVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar7) {
                      *piVar1 = iVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar16 + -1 == 0) {
                    func_0x000109a848d4(&stack0xfffffffffffffee0);
                  }
                }
                lStack_e8 = 0;
                uStack_108 = 0;
                uStack_110 = 0;
                lStack_f8 = 0;
                lStack_100 = 0;
                if (0 < iStack_11c) {
                  lVar15 = 0;
                  do {
                    piStack_e0[lVar15] = 0;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 < iStack_11c);
                }
                if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
                  _free(plStack_d8[-1]);
                }
                return;
              }
              puVar11 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar11 = 1;
              puStack_198 = puVar11 + 1;
              puStack_190 = (undefined8 *)0x1c;
              *(undefined1 *)(puVar11 + 8) = 0;
              *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&puStack_198,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
            }
            else {
              puVar11 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar11 = 1;
              uStack_180 = puVar11 + 1;
              uStack_178 = 0x1c;
              *(undefined1 *)(puVar11 + 8) = 0;
              *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
            }
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1093f3e40);
            (*pcVar8)();
          }
          if (puVar9 == puVar12) {
            return;
          }
          func_0x000109308014(puVar12);
          uVar5 = *(uint *)(puVar9 + 0x10);
          if ((uVar5 & 0xf) != 0) {
            if ((uVar5 & 1) != 0) {
              uVar18 = *(ulong *)(puVar9 + 0x18);
              *(uint *)(puVar12 + 0x10) = *(uint *)(puVar12 + 0x10) | 1;
              uVar13 = *(ulong *)(puVar12 + 8);
              if ((uVar13 & 1) != 0) {
                uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
              }
              func_0x000107c30248(puVar12 + 0x18,uVar18 & 0xfffffffffffffffc,uVar13);
            }
            if ((uVar5 >> 1 & 1) != 0) {
              *(undefined4 *)(puVar12 + 0x20) = *(undefined4 *)(puVar9 + 0x20);
            }
            if ((uVar5 >> 2 & 1) != 0) {
              *(undefined4 *)(puVar12 + 0x24) = *(undefined4 *)(puVar9 + 0x24);
            }
            if ((uVar5 >> 3 & 1) != 0) {
              *(undefined4 *)(puVar12 + 0x28) = *(undefined4 *)(puVar9 + 0x28);
            }
          }
          *(uint *)(puVar12 + 0x10) = *(uint *)(puVar12 + 0x10) | uVar5;
          if ((*(ulong *)(puVar9 + 8) & 1) != 0) {
            if ((*(ulong *)(puVar12 + 8) & 1) == 0) {
              func_0x00010b4c3590();
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
            )();
            return;
          }
          return;
        }
        lVar17 = *(long *)(uVar13 + 0x10);
        *(ulong *)param_2[1] = uVar18 + 1;
        if ((*(ulong *)(*(long *)(lVar3 + 0x28) + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
          *(undefined1 *)(lVar17 + 0x41) = *(undefined1 *)param_2[2];
          *(uint *)(lVar17 + 0x10) = *(uint *)(lVar17 + 0x10) | 8;
        }
      }
      puVar14 = puVar14 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar10 = *(undefined8 **)(param_1 + 0xb0); puVar10 != puVar4; puVar10 = puVar10 + 1) {
    FUN_1093f3884(*puVar10,param_2);
  }
  return;
}



/* Entry: 1093f39bc; end: 1093f39cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f39bc(undefined8 param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 auStack_180 [2];
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long alStack_100 [2];
  undefined8 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  int *piStack_b0;
  long *plStack_a8;
  long alStack_a0 [2];
  
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x555555555555556) {
    __Znwm((long)puVar8 * 0x30);
    return;
  }
  func_0x000104c4f740();
  if ((*(int *)(puVar8 + 0x20) != 0) && (*(int *)(puVar8 + 0x24) != 0)) {
    if (*(int *)(puVar8 + 0x28) != 1) {
      *(int *)(param_2 + 0x20) = *(int *)(puVar8 + 0x20);
      uVar4 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x10) = uVar4 | 2;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar8 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(uint *)(param_2 + 0x10) = uVar4 | 0xf;
      puVar9 = *(undefined8 **)(param_2 + 8);
      if (((ulong)puVar9 & 1) != 0) {
        puVar9 = *(undefined8 **)((ulong)puVar9 & 0xfffffffffffffffe);
      }
      if (((uint)*(undefined8 *)(param_2 + 0x18) >> 1 & 1) == 0) {
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x18;
          __Znwm();
          uVar11 = 2;
        }
        else {
          func_0x00010b4d80a4();
          uVar11 = 3;
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *(ulong *)(param_2 + 0x18) = uVar11 | (ulong)puVar9;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
      iVar2 = *(int *)(puVar8 + 0x20);
      iVar3 = *(int *)(puVar8 + 0x24);
      uStack_e0 = *(ulong *)(puVar8 + 0x18) & 0xfffffffffffffffc;
      if (*(char *)(uStack_e0 + 0x17) < '\0') {
        uStack_e0 = *(ulong *)uStack_e0;
      }
      uStack_f0 = 0x242ff0010;
      piStack_b0 = &iStack_e8;
      lStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      alStack_a0[0] = 0;
      alStack_a0[1] = 0;
      lVar13 = (long)iVar2 * (long)iVar3;
      iStack_e8 = iVar3;
      iStack_e4 = iVar2;
      uStack_d8 = uStack_e0;
      plStack_a8 = alStack_a0;
      if ((lVar13 == 0) || (uStack_e0 != 0)) {
        alStack_a0[0] = (long)iVar2 * 3;
        uStack_f0 = 0x242ff4010;
        alStack_a0[1] = 3;
        lStack_d0 = uStack_e0 + alStack_a0[0] * iVar3;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
        puVar9 = *(undefined8 **)(param_2 + 8);
        if (((ulong)puVar9 & 1) != 0) {
          puVar9 = *(undefined8 **)((ulong)puVar9 & 0xfffffffffffffffe);
        }
        lStack_c8 = lStack_d0;
        if (((uint)*(ulong *)(param_2 + 0x18) >> 1 & 1) == 0) {
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)0x18;
            __Znwm();
            uVar11 = 2;
          }
          else {
            func_0x00010b4d80a4();
            uVar11 = 3;
          }
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *(ulong *)(param_2 + 0x18) = uVar11 | (ulong)puVar9;
        }
        else {
          puVar9 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
        }
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        uStack_150 = (undefined4 *)0x242ff0000;
        puStack_178 = &uStack_150;
        puStack_110 = &uStack_148;
        uStack_148 = CONCAT44(iVar2,iVar3);
        puStack_128 = (undefined8 *)0x0;
        puStack_130 = (undefined8 *)0x0;
        lStack_118 = 0;
        uStack_120 = 0;
        alStack_100[0] = 0;
        alStack_100[1] = 0;
        puStack_140 = puVar9;
        puStack_138 = puVar9;
        plStack_108 = alStack_100;
        if ((lVar13 == 0) || (puVar9 != (undefined8 *)0x0)) {
          uStack_150 = (undefined4 *)0x242ff4000;
          alStack_100[1] = 1;
          puStack_130 = (undefined8 *)((long)puVar9 + lVar13);
          puStack_168 = (undefined4 *)CONCAT44(puStack_168._4_4_,0x1010000);
          puStack_160 = &stack0xffffffffffffff10;
          uStack_158 = 0;
          auStack_180[0] = 0xc2010000;
          uStack_170 = 0;
          puStack_128 = puStack_130;
          alStack_100[0] = (long)iVar2;
          FUN_109ac9fc8(&puStack_168,auStack_180,7,0);
          if (lStack_118 != 0) {
            piVar1 = (int *)(lStack_118 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_150);
            }
          }
          lStack_118 = 0;
          puStack_138 = (undefined8 *)0x0;
          puStack_140 = (undefined8 *)0x0;
          puStack_128 = (undefined8 *)0x0;
          puStack_130 = (undefined8 *)0x0;
          if (0 < uStack_150._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)((long)puStack_110 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_150._4_4_);
          }
          if (plStack_108 != alStack_100 && plStack_108 != (long *)0x0) {
            _free(plStack_108[-1]);
          }
          if (lStack_b8 != 0) {
            piVar1 = (int *)(lStack_b8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&stack0xffffffffffffff10);
            }
          }
          lStack_b8 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          lStack_d0 = 0;
          if (0 < iStack_ec) {
            lVar13 = 0;
            do {
              piStack_b0[lVar13] = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < iStack_ec);
          }
          if (plStack_a8 == alStack_a0 || plStack_a8 == (long *)0x0) {
            return;
          }
          _free(plStack_a8[-1]);
          return;
        }
        puVar10 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        puStack_168 = puVar10 + 1;
        puStack_160 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar10 + 8) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar10 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar10 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar10 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_168,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        puVar10 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        uStack_150 = puVar10 + 1;
        uStack_148 = 0x1c;
        *(undefined1 *)(puVar10 + 8) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar10 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar10 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar10 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1093f3e40);
      (*pcVar7)();
    }
    if (puVar8 != param_2) {
      func_0x000109308014(param_2);
      uVar4 = *(uint *)(puVar8 + 0x10);
      if ((uVar4 & 0xf) != 0) {
        if ((uVar4 & 1) != 0) {
          uVar12 = *(ulong *)(puVar8 + 0x18);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
          uVar11 = *(ulong *)(param_2 + 8);
          if ((uVar11 & 1) != 0) {
            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(param_2 + 0x18,uVar12 & 0xfffffffffffffffc,uVar11);
        }
        if ((uVar4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar8 + 0x20);
        }
        if ((uVar4 >> 2 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar8 + 0x24);
        }
        if ((uVar4 >> 3 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar8 + 0x28);
        }
      }
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar4;
      if ((*(ulong *)(puVar8 + 8) & 1) != 0) {
        if ((*(ulong *)(param_2 + 8) & 1) == 0) {
          func_0x00010b4c3590();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
        )();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1093f39d0; end: 1093f3a13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f39d0(ulong param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 auStack_170 [2];
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  long alStack_f0 [2];
  undefined8 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  int *piStack_a0;
  long *plStack_98;
  long alStack_90 [2];
  
  if (param_1 < 0x555555555555556) {
    __Znwm(param_1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    if (*(int *)(param_1 + 0x28) != 1) {
      *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x20);
      uVar4 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x10) = uVar4 | 2;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(uint *)(param_2 + 0x10) = uVar4 | 0xf;
      puVar8 = *(undefined8 **)(param_2 + 8);
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = *(undefined8 **)((ulong)puVar8 & 0xfffffffffffffffe);
      }
      if (((uint)*(undefined8 *)(param_2 + 0x18) >> 1 & 1) == 0) {
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x18;
          __Znwm();
          uVar10 = 2;
        }
        else {
          func_0x00010b4d80a4();
          uVar10 = 3;
        }
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(ulong *)(param_2 + 0x18) = uVar10 | (ulong)puVar8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
      iVar2 = *(int *)(param_1 + 0x20);
      iVar3 = *(int *)(param_1 + 0x24);
      uStack_d0 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      if (*(char *)(uStack_d0 + 0x17) < '\0') {
        uStack_d0 = *(ulong *)uStack_d0;
      }
      uStack_e0 = 0x242ff0010;
      piStack_a0 = &iStack_d8;
      lStack_b8 = 0;
      lStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      lVar12 = (long)iVar2 * (long)iVar3;
      iStack_d8 = iVar3;
      iStack_d4 = iVar2;
      uStack_c8 = uStack_d0;
      plStack_98 = alStack_90;
      if ((lVar12 == 0) || (uStack_d0 != 0)) {
        alStack_90[0] = (long)iVar2 * 3;
        uStack_e0 = 0x242ff4010;
        alStack_90[1] = 3;
        lStack_c0 = uStack_d0 + alStack_90[0] * iVar3;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
        puVar8 = *(undefined8 **)(param_2 + 8);
        if (((ulong)puVar8 & 1) != 0) {
          puVar8 = *(undefined8 **)((ulong)puVar8 & 0xfffffffffffffffe);
        }
        lStack_b8 = lStack_c0;
        if (((uint)*(ulong *)(param_2 + 0x18) >> 1 & 1) == 0) {
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x18;
            __Znwm();
            uVar10 = 2;
          }
          else {
            func_0x00010b4d80a4();
            uVar10 = 3;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(ulong *)(param_2 + 0x18) = uVar10 | (ulong)puVar8;
        }
        else {
          puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
        }
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          puVar8 = (undefined8 *)*puVar8;
        }
        uStack_140 = (undefined4 *)0x242ff0000;
        puStack_168 = &uStack_140;
        puStack_100 = &uStack_138;
        uStack_138 = CONCAT44(iVar2,iVar3);
        puStack_118 = (undefined8 *)0x0;
        puStack_120 = (undefined8 *)0x0;
        lStack_108 = 0;
        uStack_110 = 0;
        alStack_f0[0] = 0;
        alStack_f0[1] = 0;
        puStack_130 = puVar8;
        puStack_128 = puVar8;
        plStack_f8 = alStack_f0;
        if ((lVar12 == 0) || (puVar8 != (undefined8 *)0x0)) {
          uStack_140 = (undefined4 *)0x242ff4000;
          alStack_f0[1] = 1;
          puStack_120 = (undefined8 *)((long)puVar8 + lVar12);
          puStack_158 = (undefined4 *)CONCAT44(puStack_158._4_4_,0x1010000);
          puStack_150 = &stack0xffffffffffffff20;
          uStack_148 = 0;
          auStack_170[0] = 0xc2010000;
          uStack_160 = 0;
          puStack_118 = puStack_120;
          alStack_f0[0] = (long)iVar2;
          FUN_109ac9fc8(&puStack_158,auStack_170,7,0);
          if (lStack_108 != 0) {
            piVar1 = (int *)(lStack_108 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_140);
            }
          }
          lStack_108 = 0;
          puStack_128 = (undefined8 *)0x0;
          puStack_130 = (undefined8 *)0x0;
          puStack_118 = (undefined8 *)0x0;
          puStack_120 = (undefined8 *)0x0;
          if (0 < uStack_140._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_100 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_140._4_4_);
          }
          if (plStack_f8 != alStack_f0 && plStack_f8 != (long *)0x0) {
            _free(plStack_f8[-1]);
          }
          if (lStack_a8 != 0) {
            piVar1 = (int *)(lStack_a8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&stack0xffffffffffffff20);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          lStack_b8 = 0;
          lStack_c0 = 0;
          if (0 < iStack_dc) {
            lVar12 = 0;
            do {
              piStack_a0[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_dc);
          }
          if (plStack_98 == alStack_90 || plStack_98 == (long *)0x0) {
            return;
          }
          _free(plStack_98[-1]);
          return;
        }
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        puStack_158 = puVar9 + 1;
        puStack_150 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_158,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        uStack_140 = puVar9 + 1;
        uStack_138 = 0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_140,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1093f3e40);
      (*pcVar7)();
    }
    if (param_1 != param_2) {
      func_0x000109308014(param_2);
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 & 0xf) != 0) {
        if ((uVar4 & 1) != 0) {
          uVar11 = *(ulong *)(param_1 + 0x18);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
          uVar10 = *(ulong *)(param_2 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(param_2 + 0x18,uVar11 & 0xfffffffffffffffc,uVar10);
        }
        if ((uVar4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        }
        if ((uVar4 >> 2 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        }
        if ((uVar4 >> 3 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
        }
      }
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar4;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        if ((*(ulong *)(param_2 + 8) & 1) == 0) {
          func_0x00010b4c3590();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
        )();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1093f3a14; end: 1093f3ebb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f3a14(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 auStack_150 [2];
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  int *piStack_80;
  long *plStack_78;
  long alStack_70 [2];
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    if (*(int *)(param_1 + 0x28) != 1) {
      *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x20);
      uVar4 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x10) = uVar4 | 2;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(uint *)(param_2 + 0x10) = uVar4 | 0xf;
      puVar8 = *(undefined8 **)(param_2 + 8);
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = *(undefined8 **)((ulong)puVar8 & 0xfffffffffffffffe);
      }
      if (((uint)*(undefined8 *)(param_2 + 0x18) >> 1 & 1) == 0) {
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x18;
          __Znwm();
          uVar10 = 2;
        }
        else {
          func_0x00010b4d80a4();
          uVar10 = 3;
        }
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(ulong *)(param_2 + 0x18) = uVar10 | (ulong)puVar8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
      iVar2 = *(int *)(param_1 + 0x20);
      iVar3 = *(int *)(param_1 + 0x24);
      uStack_b0 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      if (*(char *)(uStack_b0 + 0x17) < '\0') {
        uStack_b0 = *(ulong *)uStack_b0;
      }
      uStack_c0 = 0x242ff0010;
      piStack_80 = &iStack_b8;
      lStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      alStack_70[0] = 0;
      alStack_70[1] = 0;
      lVar12 = (long)iVar2 * (long)iVar3;
      iStack_b8 = iVar3;
      iStack_b4 = iVar2;
      uStack_a8 = uStack_b0;
      plStack_78 = alStack_70;
      if ((lVar12 == 0) || (uStack_b0 != 0)) {
        alStack_70[0] = (long)iVar2 * 3;
        uStack_c0 = 0x242ff4010;
        alStack_70[1] = 3;
        lStack_a0 = uStack_b0 + alStack_70[0] * iVar3;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
        puVar8 = *(undefined8 **)(param_2 + 8);
        if (((ulong)puVar8 & 1) != 0) {
          puVar8 = *(undefined8 **)((ulong)puVar8 & 0xfffffffffffffffe);
        }
        lStack_98 = lStack_a0;
        if (((uint)*(ulong *)(param_2 + 0x18) >> 1 & 1) == 0) {
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x18;
            __Znwm();
            uVar10 = 2;
          }
          else {
            func_0x00010b4d80a4();
            uVar10 = 3;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(ulong *)(param_2 + 0x18) = uVar10 | (ulong)puVar8;
        }
        else {
          puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
        }
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          puVar8 = (undefined8 *)*puVar8;
        }
        uStack_120 = (undefined4 *)0x242ff0000;
        puStack_148 = &uStack_120;
        puStack_e0 = &uStack_118;
        uStack_118 = CONCAT44(iVar2,iVar3);
        puStack_f8 = (undefined8 *)0x0;
        puStack_100 = (undefined8 *)0x0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        alStack_d0[0] = 0;
        alStack_d0[1] = 0;
        puStack_110 = puVar8;
        puStack_108 = puVar8;
        plStack_d8 = alStack_d0;
        if ((lVar12 == 0) || (puVar8 != (undefined8 *)0x0)) {
          uStack_120 = (undefined4 *)0x242ff4000;
          alStack_d0[1] = 1;
          puStack_100 = (undefined8 *)((long)puVar8 + lVar12);
          puStack_138 = (undefined4 *)CONCAT44(puStack_138._4_4_,0x1010000);
          puStack_130 = &stack0xffffffffffffff40;
          uStack_128 = 0;
          auStack_150[0] = 0xc2010000;
          uStack_140 = 0;
          puStack_f8 = puStack_100;
          alStack_d0[0] = (long)iVar2;
          FUN_109ac9fc8(&puStack_138,auStack_150,7,0);
          if (lStack_e8 != 0) {
            piVar1 = (int *)(lStack_e8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_120);
            }
          }
          lStack_e8 = 0;
          puStack_108 = (undefined8 *)0x0;
          puStack_110 = (undefined8 *)0x0;
          puStack_f8 = (undefined8 *)0x0;
          puStack_100 = (undefined8 *)0x0;
          if (0 < uStack_120._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_e0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_120._4_4_);
          }
          if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
            _free(plStack_d8[-1]);
          }
          if (lStack_88 != 0) {
            piVar1 = (int *)(lStack_88 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&stack0xffffffffffffff40);
            }
          }
          lStack_88 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          lStack_a0 = 0;
          if (0 < iStack_bc) {
            lVar12 = 0;
            do {
              piStack_80[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_bc);
          }
          if (plStack_78 == alStack_70 || plStack_78 == (long *)0x0) {
            return;
          }
          _free(plStack_78[-1]);
          return;
        }
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        puStack_138 = puVar9 + 1;
        puStack_130 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        uStack_120 = puVar9 + 1;
        uStack_118 = 0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_120,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1093f3e40);
      (*pcVar7)();
    }
    if (param_1 != param_2) {
      func_0x000109308014(param_2);
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 & 0xf) != 0) {
        if ((uVar4 & 1) != 0) {
          uVar11 = *(ulong *)(param_1 + 0x18);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
          uVar10 = *(ulong *)(param_2 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(param_2 + 0x18,uVar11 & 0xfffffffffffffffc,uVar10);
        }
        if ((uVar4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        }
        if ((uVar4 >> 2 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        }
        if ((uVar4 >> 3 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
        }
      }
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar4;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        if ((*(ulong *)(param_2 + 8) & 1) == 0) {
          func_0x00010b4c3590();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
        )();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1093f3ebc; end: 1093f44cf;  */

/* WARNING: Removing unreachable block (ram,0x0001093f4064) */

void FUN_1093f3ebc(long param_1,long param_2,long param_3,long *param_4,long *param_5,long *param_6)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 auStack_210 [2];
  long *plStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined4 auStack_1e0 [2];
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  undefined4 **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined1 *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  int *piStack_80;
  long *plStack_78;
  long alStack_70 [2];
  
  lVar8 = param_4[1] - *param_4;
  if (lVar8 != 0) {
    lVar11 = (lVar8 >> 4) * -0x5555555555555555;
    if ((lVar11 - (param_5[1] - *param_5 >> 2) == 0) && (param_6[1] - *param_6 == lVar8)) {
      iStack_b4 = *(int *)(param_1 + 0x20);
      iStack_b8 = *(int *)(param_1 + 0x24);
      uStack_b0 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      if (*(char *)(uStack_b0 + 0x17) < '\0') {
        uStack_b0 = *(ulong *)uStack_b0;
      }
      uStack_c0 = 0x242ff0000;
      piStack_80 = &iStack_b8;
      lStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      alStack_70[0] = 0;
      alStack_70[1] = 0;
      uStack_a8 = uStack_b0;
      plStack_78 = alStack_70;
      if (((long)iStack_b4 * (long)iStack_b8 == 0) || (uStack_b0 != 0)) {
        uStack_c0 = 0x242ff4000;
        alStack_70[1] = 1;
        lStack_a0 = uStack_b0 + (long)iStack_b4 * (long)iStack_b8;
        iVar3 = *(int *)(param_2 + 0x20);
        uStack_110 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
        if (*(char *)(uStack_110 + 0x17) < '\0') {
          uStack_110 = *(ulong *)uStack_110;
        }
        uStack_120 = (undefined4 *)0x242ff0000;
        puStack_e0 = &uStack_118;
        uStack_118 = CONCAT44(iVar3,*(int *)(param_2 + 0x24));
        lStack_f8 = 0;
        lStack_100 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        lVar8 = (long)iVar3 * (long)*(int *)(param_2 + 0x24);
        alStack_d0[0] = 0;
        alStack_d0[1] = 0;
        uStack_108 = uStack_110;
        plStack_d8 = alStack_d0;
        lStack_98 = lStack_a0;
        alStack_70[0] = (long)iStack_b4;
        if ((lVar8 == 0) || (uStack_110 != 0)) {
          uStack_120 = (undefined4 *)0x242ff4000;
          alStack_d0[1] = 1;
          lStack_100 = uStack_110 + lVar8;
          lStack_f8 = lStack_100;
          alStack_d0[0] = (long)iVar3;
          FUN_1093f44d0(&puStack_138,param_4);
          if (*(char *)(param_3 + 0x18) == '\x01') {
            FUN_1093f44d0(&lStack_150,param_6);
          }
          else {
            lStack_150 = 0;
            lStack_148 = 0;
            uStack_140 = 0;
            FUN_10939e580(&lStack_150,puStack_138,puStack_130,
                          (long)puStack_130 - (long)puStack_138 >> 3);
          }
          lStack_168 = 0;
          lStack_160 = 0;
          uStack_158 = 0;
          lStack_180 = 0;
          lStack_178 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          auStack_198[0] = 0x1010000;
          puStack_190 = (undefined1 *)&uStack_c0;
          uStack_1a0 = 0;
          auStack_1b0[0] = 0x1010000;
          puStack_1a8 = &uStack_120;
          uStack_1b8 = 0;
          auStack_1c8[0] = 0x8103000d;
          ppuStack_1c0 = &puStack_138;
          auStack_1e0[0] = 0x8303000d;
          plStack_1d8 = &lStack_150;
          uStack_1d0 = 0;
          auStack_1f8[0] = 0x82030000;
          plStack_1f0 = &lStack_168;
          uStack_1e8 = 0;
          auStack_210[0] = 0x82030005;
          plStack_208 = &lStack_180;
          uStack_200 = 0;
          uStack_218 = *(undefined4 *)(param_3 + 0x20);
          uStack_214 = uStack_218;
          FUN_109a25464((double)*(float *)(param_3 + 0x1c),auStack_198,auStack_1b0,auStack_1c8,
                        auStack_1e0,auStack_1f8,auStack_210,&uStack_218,
                        *(undefined4 *)(param_3 + 0x24),(ulong)*(uint *)(param_3 + 0x28) << 0x20 | 3
                        ,(double)*(float *)(param_3 + 0x2c),4);
          lVar9 = 0;
          lVar10 = 0;
          lVar8 = 0;
          do {
            if (*(char *)(lStack_168 + lVar8) == '\0') {
              *(undefined4 *)(*param_5 + lVar8 * 4) = 0;
            }
            else {
              lVar2 = *param_6 + lVar9;
              *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lStack_150 + lVar10);
              *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
              lVar2 = *param_6 + lVar9;
              *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lStack_150 + lVar10 + 4);
              *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 2;
            }
            lVar8 = lVar8 + 1;
            lVar10 = lVar10 + 8;
            lVar9 = lVar9 + 0x30;
          } while (lVar11 - lVar8 != 0);
          if (lStack_180 != 0) {
            lStack_178 = lStack_180;
            __ZdlPv();
          }
          if (lStack_168 != 0) {
            lStack_160 = lStack_168;
            __ZdlPv();
          }
          if (lStack_150 != 0) {
            lStack_148 = lStack_150;
            __ZdlPv();
          }
          if (puStack_138 != (undefined4 *)0x0) {
            puStack_130 = puStack_138;
            __ZdlPv();
          }
          if (lStack_e8 != 0) {
            piVar1 = (int *)(lStack_e8 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_120);
            }
          }
          lStack_e8 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          lStack_100 = 0;
          if (0 < uStack_120._4_4_) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_e0 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_120._4_4_);
          }
          if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
            _free(plStack_d8[-1]);
          }
          if (lStack_88 != 0) {
            piVar1 = (int *)(lStack_88 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_c0);
            }
          }
          lStack_88 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          lStack_a0 = 0;
          if (0 < uStack_c0._4_4_) {
            lVar8 = 0;
            do {
              piStack_80[lVar8] = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_c0._4_4_);
          }
          if (plStack_78 == alStack_70 || plStack_78 == (long *)0x0) {
            return;
          }
          _free(plStack_78[-1]);
          return;
        }
        puVar7 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar7 = 1;
        puStack_138 = puVar7 + 1;
        puStack_130 = (undefined4 *)0x1c;
        *(undefined1 *)(puVar7 + 8) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        puVar7 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar7 = 1;
        uStack_120 = puVar7 + 1;
        uStack_118 = 0x1c;
        *(undefined1 *)(puVar7 + 8) = 0;
        *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_120,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1093f43ec);
      (*pcVar6)();
    }
    FUN_10937e740(&uStack_c0,&UNK_10f56c6f9);
    FUN_109388c6c(1,&UNK_10f56c65f,&UNK_10f56c6da,0x37,&uStack_c0);
  }
  return;
}



/* Entry: 1093f44d0; end: 1093f458b;  */

void FUN_1093f44d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1093f458c(param_1,(param_2[1] - *param_2 >> 4) * -0x5555555555555555);
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if (lVar4 != lVar1) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      uStack_38 = *(undefined4 *)(lVar4 + 0x18);
      uStack_34 = *(undefined4 *)(lVar4 + 0x1c);
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar3 = puVar2 + 1;
        *(undefined4 *)puVar2 = uStack_38;
        *(undefined4 *)((long)puVar2 + 4) = uStack_34;
      }
      else {
        puVar3 = param_1;
        FUN_1092de294(param_1,&uStack_38);
      }
      param_1[1] = puVar3;
      lVar4 = lVar4 + 0x30;
      puVar2 = puVar3;
    } while (lVar4 != lVar1);
  }
  return;
}



/* Entry: 1093f458c; end: 1093f465f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1093f458c(undefined4 param_1,long *param_2,float *param_3,int param_4,int param_5,
                  ulong param_6,int param_7,int param_8,ulong param_9)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  unkbyte9 Var13;
  undefined1 auVar14 [16];
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  float *pfVar31;
  long *plVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  long *plVar38;
  long lVar39;
  ulong uVar40;
  undefined1 (*pauVar41) [16];
  long lVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  undefined8 *puVar46;
  long lVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  uint uStack_d4;
  uint uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar25 = *param_2;
  if ((float *)(param_2[2] - lVar25 >> 3) < param_3) {
    if ((ulong)param_3 >> 0x3d != 0) {
      FUN_1092cc094();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar19 = (uint)param_6;
      uVar20 = (uint)param_9;
      iVar3 = uVar20 * uVar19;
      uVar21 = iVar3 * uStack_50;
      uVar29 = (ulong)uVar21;
      if (0 < (int)uVar21) {
        plVar32 = plStack_48;
        if (7 < uVar21) {
          uVar26 = uVar29 & 0x7ffffff8;
          uVar21 = uVar21 - (int)uVar26;
          plVar32 = plStack_48 + 2;
          uVar16 = uVar26;
          do {
            plVar32[-1] = CONCAT44(param_1,param_1);
            plVar32[-2] = CONCAT44(param_1,param_1);
            plVar32[1] = CONCAT44(param_1,param_1);
            *plVar32 = CONCAT44(param_1,param_1);
            plVar32 = plVar32 + 4;
            uVar16 = uVar16 - 8;
          } while (uVar16 != 0);
          plVar32 = (long *)((long)plStack_48 + uVar26 * 4);
          if (uVar26 == uVar29) goto LAB_1093f46f8;
        }
        uVar21 = uVar21 + 1;
        do {
          *(undefined4 *)plVar32 = param_1;
          uVar21 = uVar21 - 1;
          plVar32 = (long *)((long)plVar32 + 4);
        } while (1 < uVar21);
      }
LAB_1093f46f8:
      auVar14 = _UNK_10dfc9160;
      Var13 = _UNK_10dfc9150;
      auVar12 = _UNK_10dfc9140;
      auVar11 = _UNK_10dfc9130;
      if (7 < param_8) {
        if ((((param_3[1] != 0.0) || (param_3[3] != 0.0)) || (4 < (int)uVar19)) ||
           (fVar51 = param_3[4], fVar51 < 1.0)) {
          if (((0 < (int)uStack_50) && (0 < (int)uVar19)) && (0 < (int)uVar20)) {
            uVar29 = 0;
            uVar21 = 0;
            uVar16 = param_6 & 0xffffffff;
            fVar56 = param_3[3];
            fVar51 = *param_3;
            uVar26 = param_6 & 0x7ffffff0;
            auVar53 = NEON_fmov(0xbf800000,4);
            do {
              uVar23 = 0;
              fVar49 = param_3[4] * ((float)uVar21 + 0.5) + fVar56 * 0.5 + param_3[5];
              uVar34 = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
              puVar1 = (undefined8 *)((long)plStack_48 + uVar34);
              fVar50 = param_3[1] * ((float)uVar21 + 0.5) + fVar51 * 0.5 + param_3[2];
              puVar46 = puVar1;
              do {
                iVar22 = (int)fVar50;
                if (((-1 < iVar22) && (iVar22 < param_4)) &&
                   ((iVar27 = (int)fVar49, -1 < iVar27 && (iVar27 < param_5)))) {
                  lVar25 = (long)(param_8 * iVar27 + param_7 * iVar22);
                  pauVar2 = (undefined1 (*) [16])((long)param_2 + lVar25);
                  if ((uVar19 < 4) ||
                     (puVar1 < (undefined8 *)((long)param_2 + lVar25 + uVar16) &&
                      pauVar2 < (undefined1 (*) [16])
                                ((long)plStack_48 +
                                uVar34 + (uVar16 + (long)(int)uVar19 * (ulong)(uVar20 - 1)) * 4))) {
                    uVar40 = 0;
                    goto LAB_1093f48e4;
                  }
                  fVar67 = auVar53._4_4_;
                  fVar68 = auVar53._12_4_;
                  fVar51 = auVar53._0_4_;
                  fVar56 = auVar53._8_4_;
                  uVar40 = uVar26;
                  puVar30 = puVar46;
                  pauVar41 = pauVar2;
                  if (uVar19 < 0x10) {
                    uVar40 = 0;
LAB_1093f497c:
                    lVar44 = uVar40 - (param_6 & 0x7ffffffc);
                    lVar28 = uVar40 << 2;
                    puVar18 = (undefined4 *)((long)param_2 + lVar25 + uVar40);
                    do {
                      uVar54 = *puVar18;
                      uVar48 = (undefined1)((uint)uVar54 >> 8);
                      auVar64._6_2_ = 0;
                      auVar64._0_6_ =
                           (uint6)CONCAT14(uVar48,(uint)CONCAT12(uVar48,(ushort)(byte)uVar54)) &
                           0xffff0000ffff;
                      auVar64[8] = (char)((uint)uVar54 >> 0x10);
                      auVar64._9_3_ = 0;
                      auVar64[0xc] = (char)((uint)uVar54 >> 0x18);
                      auVar64._13_3_ = 0;
                      auVar52 = NEON_ucvtf(auVar64,4);
                      pfVar31 = (float *)((long)puVar46 + lVar28);
                      pfVar31[2] = fVar56 + auVar52._8_4_ * 0.007843138;
                      pfVar31[3] = fVar68 + auVar52._12_4_ * 0.007843138;
                      *pfVar31 = fVar51 + auVar52._0_4_ * 0.007843138;
                      pfVar31[1] = fVar67 + auVar52._4_4_ * 0.007843138;
                      lVar28 = lVar28 + 0x10;
                      lVar44 = lVar44 + 4;
                      puVar18 = puVar18 + 1;
                      uVar40 = param_6 & 0x7ffffffc;
                    } while (lVar44 != 0);
                    for (; uVar40 != uVar16; uVar40 = uVar40 + 1) {
LAB_1093f48e4:
                      fVar51 = (float)NEON_ucvtf((uint)(byte)(*pauVar2)[uVar40]);
                      *(float *)((long)puVar46 + uVar40 * 4) = fVar51 * 0.007843138 + -1.0;
                    }
                  }
                  else {
                    do {
                      auVar64 = *pauVar41;
                      auVar52._12_4_ = 0xffffff0f;
                      auVar52._0_12_ = auVar11;
                      auVar65 = a64_TBL(ZEXT816(0),auVar64,auVar52);
                      auVar60._12_4_ = 0xffffff0b;
                      auVar60._0_12_ = auVar12;
                      auVar60 = a64_TBL(ZEXT816(0),auVar64,auVar60);
                      auVar63[9] = 0xff;
                      auVar63._0_9_ = Var13;
                      auVar63[10] = 0xff;
                      auVar63[0xb] = 0xff;
                      auVar63[0xc] = 7;
                      auVar63[0xd] = 0xff;
                      auVar63[0xe] = 0xff;
                      auVar63[0xf] = 0xff;
                      auVar63 = a64_TBL(ZEXT816(0),auVar64,auVar63);
                      auVar52 = a64_TBL(ZEXT816(0),auVar64,auVar14);
                      auVar52 = NEON_ucvtf(auVar52,4);
                      auVar64 = NEON_ucvtf(auVar63,4);
                      auVar63 = NEON_ucvtf(auVar60,4);
                      auVar60 = NEON_ucvtf(auVar65,4);
                      auVar65._0_8_ =
                           CONCAT44(fVar67 + auVar52._4_4_ * 0.007843138,
                                    fVar51 + auVar52._0_4_ * 0.007843138);
                      auVar65._8_4_ = fVar56 + auVar52._8_4_ * 0.007843138;
                      auVar65._12_4_ = fVar68 + auVar52._12_4_ * 0.007843138;
                      *(float *)(puVar30 + 5) = fVar56 + auVar63._8_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x2c) = fVar68 + auVar63._12_4_ * 0.007843138;
                      *(float *)(puVar30 + 4) = fVar51 + auVar63._0_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x24) = fVar67 + auVar63._4_4_ * 0.007843138;
                      *(float *)(puVar30 + 7) = fVar56 + auVar60._8_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x3c) = fVar68 + auVar60._12_4_ * 0.007843138;
                      *(float *)(puVar30 + 6) = fVar51 + auVar60._0_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x34) = fVar67 + auVar60._4_4_ * 0.007843138;
                      puVar30[1] = auVar65._8_8_;
                      *puVar30 = auVar65._0_8_;
                      *(float *)(puVar30 + 3) = fVar56 + auVar64._8_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x1c) = fVar68 + auVar64._12_4_ * 0.007843138;
                      *(float *)(puVar30 + 2) = fVar51 + auVar64._0_4_ * 0.007843138;
                      *(float *)((long)puVar30 + 0x14) = fVar67 + auVar64._4_4_ * 0.007843138;
                      uVar40 = uVar40 - 0x10;
                      puVar30 = puVar30 + 8;
                      pauVar41 = pauVar41 + 1;
                    } while (uVar40 != 0);
                    if (uVar26 != uVar16) {
                      uVar40 = uVar26;
                      if ((param_6 & 0xc) == 0) goto LAB_1093f48e4;
                      goto LAB_1093f497c;
                    }
                  }
                  fVar51 = *param_3;
                  fVar56 = param_3[3];
                }
                fVar50 = fVar51 + fVar50;
                fVar49 = fVar56 + fVar49;
                uVar23 = uVar23 + 1;
                puVar46 = (undefined8 *)((long)puVar46 + (long)(int)uVar19 * 4);
              } while (uVar23 != uVar20);
              uVar21 = uVar21 + 1;
              uVar29 = (ulong)(uint)((int)uVar29 + iVar3);
            } while (uVar21 != uStack_50);
          }
        }
        else {
          fVar56 = *param_3;
          fVar49 = param_3[2] + fVar56 * 0.5;
          if (0 < (int)uVar20) {
            uVar21 = 0;
            do {
              iVar22 = (int)(fVar49 + (float)uVar21 * fVar56);
              if ((-1 < iVar22) && (iVar22 < param_4)) goto LAB_1093f49c8;
              uVar21 = uVar21 + 1;
            } while (uVar20 != uVar21);
          }
          uVar21 = 0;
LAB_1093f49c8:
          fVar50 = param_3[5] + fVar51 * 0.5;
          iVar22 = 0;
          if (uVar19 != 0) {
            iVar22 = 3 / (int)uVar19;
          }
          do {
            uVar23 = (uint)param_9;
            param_9 = (ulong)(uVar23 - 1);
            if ((int)uVar23 < 1) {
              uStack_d4 = 0;
              break;
            }
            iVar27 = (int)(fVar49 + (float)param_9 * fVar56);
          } while ((iVar27 < 0) || (uStack_d4 = uVar23, param_4 <= iVar27));
          if (0 < (int)uStack_50) {
            uVar15 = 0;
            do {
              iVar27 = (int)(fVar50 + (float)uVar15 * fVar51);
              if ((-1 < iVar27) && (iVar27 < param_5)) goto LAB_1093f4a4c;
              uVar15 = uVar15 + 1;
            } while (uStack_50 != uVar15);
          }
          uVar15 = 0;
LAB_1093f4a4c:
          do {
            uVar33 = uStack_50;
            uStack_50 = uVar33 - 1;
            if ((int)uVar33 < 1) {
              uVar24 = 0;
              break;
            }
            iVar27 = (int)(fVar50 + (float)uStack_50 * fVar51);
          } while ((iVar27 < 0) || (uVar24 = uVar33, param_5 <= iVar27));
          if (((int)uVar21 < (int)uStack_d4) && ((int)uVar15 < (int)uVar24)) {
            iVar27 = uVar24 - 1;
            if ((int)uVar15 < iVar27) {
              lVar25 = 0;
              uVar34 = param_6 & 0xffffffff;
              iVar36 = (uVar21 + uVar15 * uVar20) * uVar19;
              uVar16 = (ulong)uVar15;
              lVar35 = (long)(int)uVar20;
              uVar40 = (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU));
              uVar43 = -(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
              lVar44 = lVar35 * uVar16;
              lVar28 = lVar44 + uVar40;
              uVar26 = param_6 & 0x7ffffff0;
              auVar52 = NEON_fmov(0xbf800000,4);
              auVar53._12_4_ = _UNK_10dfc914c;
              auVar53._0_12_ = _UNK_10dfc9140;
              auVar9._9_7_ = _UNK_10dfc9159;
              auVar9._0_9_ = _UNK_10dfc9150;
              uVar29 = uVar16;
              do {
                fVar68 = auVar52._0_4_;
                fVar51 = auVar52._4_4_;
                fVar67 = auVar52._12_4_;
                fVar56 = auVar52._8_4_;
                uVar23 = uVar21;
                if ((int)uVar21 < (int)(uStack_d4 - iVar22)) {
                  pfVar31 = (float *)((long)plStack_48 + (long)iVar36 * 4);
                  fVar57 = param_3[4];
                  do {
                    uVar58 = *(undefined8 *)
                              ((long)param_2 +
                              (long)(param_8 * (int)(fVar50 + (float)(uVar29 & 0xffffffff) * fVar57)
                                    + param_7 * (int)(fVar49 + (float)uVar23 * *param_3)));
                    auVar59._0_3_ = (uint3)uVar58 & 0xff;
                    auVar59[3] = 0;
                    auVar59[4] = (char)((ulong)uVar58 >> 8);
                    auVar59._5_3_ = 0;
                    auVar59[8] = (char)((ulong)uVar58 >> 0x10);
                    auVar59._9_3_ = 0;
                    auVar59[0xc] = (char)((ulong)uVar58 >> 0x18);
                    auVar59._13_3_ = 0;
                    auVar60 = NEON_ucvtf(auVar59,4);
                    pfVar31[2] = fVar56 + auVar60._8_4_ * 0.007843138;
                    pfVar31[3] = fVar67 + auVar60._12_4_ * 0.007843138;
                    *pfVar31 = fVar68 + auVar60._0_4_ * 0.007843138;
                    pfVar31[1] = fVar51 + auVar60._4_4_ * 0.007843138;
                    uVar23 = uVar23 + 1;
                    pfVar31 = (float *)((long)pfVar31 + uVar43);
                  } while ((int)uVar23 < (int)(uStack_d4 - iVar22));
                }
                if ((0 < (int)uVar19) && ((int)uVar23 < (int)uStack_d4)) {
                  uVar45 = (ulong)uVar23;
                  lVar42 = (lVar25 + uVar16) * lVar35 + uVar45;
                  plVar32 = (long *)((long)plStack_48 + uVar43 * (lVar44 + uVar45));
                  do {
                    iVar4 = param_7 * (int)(fVar49 + (float)(int)uVar45 * *param_3);
                    iVar5 = param_8 * (int)(fVar50 + (float)(uVar29 & 0xffffffff) * param_3[4]);
                    lVar17 = (long)(iVar5 + iVar4);
                    pauVar2 = (undefined1 (*) [16])((long)param_2 + lVar17);
                    if (uVar19 < 4) {
                      uVar37 = 0;
LAB_1093f4d74:
                      do {
                        fVar57 = (float)NEON_ucvtf((uint)(byte)(*pauVar2)[uVar37]);
                        *(float *)((long)plVar32 + uVar37 * 4) = fVar57 * 0.007843138 + -1.0;
                        uVar37 = uVar37 + 1;
joined_r0x0001093f4d70:
                      } while (uVar37 != uVar34);
                    }
                    else {
                      if ((long *)((long)plStack_48 + uVar43 * lVar42) <
                          (long *)((long)param_2 + (long)iVar5 + (long)iVar4 + uVar34) &&
                          pauVar2 < (undefined1 (*) [16])
                                    ((long)plStack_48 +
                                    (long)(int)uVar20 * (long)(int)uVar19 * 4 * lVar25 +
                                    (lVar28 * 4 + -4) * (long)(int)uVar19 +
                                    (param_6 & 0xffffffff) * 4)) {
                        uVar37 = 0;
                        goto LAB_1093f4d74;
                      }
                      plVar38 = plVar32;
                      uVar37 = uVar26;
                      pauVar41 = pauVar2;
                      if (uVar19 < 0x10) {
                        uVar37 = 0;
LAB_1093f4d2c:
                        lVar39 = uVar37 - (param_6 & 0x7ffffffc);
                        lVar47 = uVar37 << 2;
                        puVar18 = (undefined4 *)((long)param_2 + lVar17 + uVar37);
                        do {
                          uVar54 = *puVar18;
                          uVar48 = (undefined1)((uint)uVar54 >> 8);
                          auVar62._6_2_ = 0;
                          auVar62._0_6_ =
                               (uint6)CONCAT14(uVar48,(uint)CONCAT12(uVar48,(ushort)(byte)uVar54)) &
                               0xffff0000ffff;
                          auVar62[8] = (char)((uint)uVar54 >> 0x10);
                          auVar62._9_3_ = 0;
                          auVar62[0xc] = (char)((uint)uVar54 >> 0x18);
                          auVar62._13_3_ = 0;
                          auVar60 = NEON_ucvtf(auVar62,4);
                          pfVar31 = (float *)((long)plVar32 + lVar47);
                          pfVar31[2] = fVar56 + auVar60._8_4_ * 0.007843138;
                          pfVar31[3] = fVar67 + auVar60._12_4_ * 0.007843138;
                          *pfVar31 = fVar68 + auVar60._0_4_ * 0.007843138;
                          pfVar31[1] = fVar51 + auVar60._4_4_ * 0.007843138;
                          lVar47 = lVar47 + 0x10;
                          lVar39 = lVar39 + 4;
                          puVar18 = puVar18 + 1;
                          uVar37 = param_6 & 0x7ffffffc;
                          if (lVar39 == 0) goto joined_r0x0001093f4d70;
                        } while( true );
                      }
                      do {
                        auVar60 = *pauVar41;
                        auVar7._12_4_ = 0xffffff0f;
                        auVar7._0_12_ = auVar11;
                        auVar63 = a64_TBL(ZEXT816(0),auVar60,auVar7);
                        auVar64 = a64_TBL(ZEXT816(0),auVar60,auVar53);
                        auVar65 = a64_TBL(ZEXT816(0),auVar60,auVar9);
                        auVar60 = a64_TBL(ZEXT816(0),auVar60,auVar14);
                        auVar60 = NEON_ucvtf(auVar60,4);
                        auVar65 = NEON_ucvtf(auVar65,4);
                        auVar64 = NEON_ucvtf(auVar64,4);
                        auVar63 = NEON_ucvtf(auVar63,4);
                        auVar61._0_8_ =
                             CONCAT44(fVar51 + auVar64._4_4_ * 0.007843138,
                                      fVar68 + auVar64._0_4_ * 0.007843138);
                        auVar61._8_4_ = fVar56 + auVar64._8_4_ * 0.007843138;
                        auVar61._12_4_ = fVar67 + auVar64._12_4_ * 0.007843138;
                        plVar38[5] = auVar61._8_8_;
                        plVar38[4] = auVar61._0_8_;
                        *(float *)(plVar38 + 7) = fVar56 + auVar63._8_4_ * 0.007843138;
                        *(float *)((long)plVar38 + 0x3c) = fVar67 + auVar63._12_4_ * 0.007843138;
                        *(float *)(plVar38 + 6) = fVar68 + auVar63._0_4_ * 0.007843138;
                        *(float *)((long)plVar38 + 0x34) = fVar51 + auVar63._4_4_ * 0.007843138;
                        plVar38[1] = CONCAT44(fVar67 + auVar60._12_4_ * 0.007843138,
                                              fVar56 + auVar60._8_4_ * 0.007843138);
                        *plVar38 = CONCAT44(fVar51 + auVar60._4_4_ * 0.007843138,
                                            fVar68 + auVar60._0_4_ * 0.007843138);
                        *(float *)(plVar38 + 3) = fVar56 + auVar65._8_4_ * 0.007843138;
                        *(float *)((long)plVar38 + 0x1c) = fVar67 + auVar65._12_4_ * 0.007843138;
                        *(float *)(plVar38 + 2) = fVar68 + auVar65._0_4_ * 0.007843138;
                        *(float *)((long)plVar38 + 0x14) = fVar51 + auVar65._4_4_ * 0.007843138;
                        uVar37 = uVar37 - 0x10;
                        plVar38 = plVar38 + 8;
                        pauVar41 = pauVar41 + 1;
                      } while (uVar37 != 0);
                      if (uVar26 != uVar34) {
                        uVar37 = uVar26;
                        if ((param_6 & 0xc) != 0) goto LAB_1093f4d2c;
                        goto LAB_1093f4d74;
                      }
                    }
                    uVar45 = uVar45 + 1;
                    plVar32 = (long *)((long)plVar32 + uVar43);
                  } while (uVar45 != uVar40);
                }
                uVar29 = uVar29 + 1;
                iVar36 = iVar36 + iVar3;
                lVar25 = lVar25 + 1;
                lVar44 = lVar44 + lVar35;
              } while ((long)uVar29 < (long)iVar27);
            }
            auVar14 = _UNK_10dfc9160;
            auVar11 = _UNK_10dfc9130;
            uVar29 = param_6 & 0xffffffff;
            if (0 < (int)uVar19) {
              uVar16 = (ulong)uVar21;
              uVar34 = (ulong)uStack_d4;
              lVar28 = uVar29 * 4;
              lVar25 = uVar16 + (long)(int)(iVar27 * uVar20);
              uVar26 = uVar34;
              if (uVar34 < uVar16 + 1) {
                uVar26 = uVar16 + 1;
              }
              uVar40 = param_6 & 0xfffffff0;
              plVar32 = (long *)((long)plStack_48 +
                                lVar28 * (uVar16 + (long)(int)(uVar20 * ((uVar33 & ((int)uVar33 >>
                                                                                    0x1f ^ 
                                                  0xffffffffU)) - 1))));
              auVar53 = NEON_fmov(0xbf800000,4);
              auVar8._12_4_ = _UNK_10dfc914c;
              auVar8._0_12_ = _UNK_10dfc9140;
              auVar10._9_7_ = _UNK_10dfc9159;
              auVar10._0_9_ = _UNK_10dfc9150;
              do {
                iVar3 = param_7 * (int)(fVar49 + (float)(uVar16 & 0xffffffff) * *param_3);
                iVar22 = param_8 * (int)(fVar50 + (float)iVar27 * param_3[4]);
                lVar44 = (long)(iVar22 + iVar3);
                pauVar2 = (undefined1 (*) [16])((long)param_2 + lVar44);
                if (uVar29 < 4) {
                  uVar43 = 0;
LAB_1093f4f7c:
                  do {
                    fVar51 = (float)NEON_ucvtf((uint)(byte)(*pauVar2)[uVar43]);
                    *(float *)((long)plVar32 + uVar43 * 4) = fVar51 * 0.007843138 + -1.0;
                    uVar43 = uVar43 + 1;
joined_r0x0001093f4f78:
                  } while (uVar29 != uVar43);
                }
                else {
                  if ((long *)((long)plStack_48 + lVar28 * lVar25) <
                      (long *)((long)param_2 + (long)iVar22 + (long)iVar3 + uVar29) &&
                      pauVar2 < (undefined1 (*) [16])
                                ((long)plStack_48 + lVar28 * (uVar26 + (long)(int)(iVar27 * uVar20))
                                )) {
                    uVar43 = 0;
                    goto LAB_1093f4f7c;
                  }
                  fVar67 = auVar53._4_4_;
                  fVar68 = auVar53._12_4_;
                  fVar51 = auVar53._0_4_;
                  fVar56 = auVar53._8_4_;
                  pauVar41 = pauVar2;
                  plVar38 = plVar32;
                  uVar43 = uVar40;
                  if (uVar29 < 0x10) {
                    uVar43 = 0;
LAB_1093f4f38:
                    lVar42 = uVar43 - (param_6 & 0xfffffffc);
                    lVar35 = uVar43 << 2;
                    puVar18 = (undefined4 *)((long)param_2 + lVar44 + uVar43);
                    do {
                      uVar54 = *puVar18;
                      uVar48 = (undefined1)((uint)uVar54 >> 8);
                      auVar55._6_2_ = 0;
                      auVar55._0_6_ =
                           (uint6)CONCAT14(uVar48,(uint)CONCAT12(uVar48,(ushort)(byte)uVar54)) &
                           0xffff0000ffff;
                      auVar55[8] = (char)((uint)uVar54 >> 0x10);
                      auVar55._9_3_ = 0;
                      auVar55[0xc] = (char)((uint)uVar54 >> 0x18);
                      auVar55._13_3_ = 0;
                      auVar52 = NEON_ucvtf(auVar55,4);
                      pfVar31 = (float *)((long)plVar32 + lVar35);
                      pfVar31[2] = fVar56 + auVar52._8_4_ * 0.007843138;
                      pfVar31[3] = fVar68 + auVar52._12_4_ * 0.007843138;
                      *pfVar31 = fVar51 + auVar52._0_4_ * 0.007843138;
                      pfVar31[1] = fVar67 + auVar52._4_4_ * 0.007843138;
                      lVar35 = lVar35 + 0x10;
                      lVar42 = lVar42 + 4;
                      puVar18 = puVar18 + 1;
                      uVar43 = param_6 & 0xfffffffc;
                      if (lVar42 == 0) goto joined_r0x0001093f4f78;
                    } while( true );
                  }
                  do {
                    auVar52 = *pauVar41;
                    auVar6._12_4_ = 0xffffff0f;
                    auVar6._0_12_ = auVar11;
                    auVar60 = a64_TBL(ZEXT816(0),auVar52,auVar6);
                    auVar63 = a64_TBL(ZEXT816(0),auVar52,auVar8);
                    auVar64 = a64_TBL(ZEXT816(0),auVar52,auVar10);
                    auVar52 = a64_TBL(ZEXT816(0),auVar52,auVar14);
                    auVar52 = NEON_ucvtf(auVar52,4);
                    auVar64 = NEON_ucvtf(auVar64,4);
                    auVar63 = NEON_ucvtf(auVar63,4);
                    auVar60 = NEON_ucvtf(auVar60,4);
                    auVar66._0_8_ =
                         CONCAT44(fVar67 + auVar52._4_4_ * 0.007843138,
                                  fVar51 + auVar52._0_4_ * 0.007843138);
                    auVar66._8_4_ = fVar56 + auVar52._8_4_ * 0.007843138;
                    auVar66._12_4_ = fVar68 + auVar52._12_4_ * 0.007843138;
                    *(float *)(plVar38 + 5) = fVar56 + auVar63._8_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x2c) = fVar68 + auVar63._12_4_ * 0.007843138;
                    *(float *)(plVar38 + 4) = fVar51 + auVar63._0_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x24) = fVar67 + auVar63._4_4_ * 0.007843138;
                    *(float *)(plVar38 + 7) = fVar56 + auVar60._8_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x3c) = fVar68 + auVar60._12_4_ * 0.007843138;
                    *(float *)(plVar38 + 6) = fVar51 + auVar60._0_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x34) = fVar67 + auVar60._4_4_ * 0.007843138;
                    plVar38[1] = auVar66._8_8_;
                    *plVar38 = auVar66._0_8_;
                    *(float *)(plVar38 + 3) = fVar56 + auVar64._8_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x1c) = fVar68 + auVar64._12_4_ * 0.007843138;
                    *(float *)(plVar38 + 2) = fVar51 + auVar64._0_4_ * 0.007843138;
                    *(float *)((long)plVar38 + 0x14) = fVar67 + auVar64._4_4_ * 0.007843138;
                    uVar43 = uVar43 - 0x10;
                    pauVar41 = pauVar41 + 1;
                    plVar38 = plVar38 + 8;
                  } while (uVar43 != 0);
                  if (uVar29 != uVar40) {
                    uVar43 = uVar40;
                    if ((param_6 & 0xc) != 0) goto LAB_1093f4f38;
                    goto LAB_1093f4f7c;
                  }
                }
                uVar16 = uVar16 + 1;
                plVar32 = (long *)((long)plVar32 + lVar28);
              } while (uVar16 < uVar34);
            }
          }
        }
      }
      return;
    }
    lVar28 = param_2[1];
    plVar32 = param_2;
    plStack_28 = param_2;
    FUN_1092cc0a8();
    lStack_40 = (long)plVar32 + (lVar28 - lVar25);
    plStack_30 = plVar32 + (long)param_3;
    plStack_48 = plVar32;
    lStack_38 = lStack_40;
    FUN_1092cc028(param_2,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1093f4660; end: 1093f4fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1093f4660(undefined4 param_1,long param_2,float *param_3,int param_4,int param_5,
                  ulong param_6,int param_7,int param_8,uint param_9,uint param_10,
                  undefined4 param_11,undefined4 *param_12)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  unkbyte9 Var12;
  undefined1 auVar13 [16];
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  undefined8 *puVar36;
  long lVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  long lVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  uint uStack_84;
  
  uVar17 = (uint)param_6;
  iVar2 = param_9 * uVar17;
  uVar18 = iVar2 * param_10;
  uVar24 = (ulong)uVar18;
  if (0 < (int)uVar18) {
    puVar16 = param_12;
    if (7 < uVar18) {
      uVar22 = uVar24 & 0x7ffffff8;
      uVar18 = uVar18 - (int)uVar22;
      puVar27 = (undefined8 *)(param_12 + 4);
      uVar14 = uVar22;
      do {
        puVar27[-1] = CONCAT44(param_1,param_1);
        puVar27[-2] = CONCAT44(param_1,param_1);
        puVar27[1] = CONCAT44(param_1,param_1);
        *puVar27 = CONCAT44(param_1,param_1);
        puVar27 = puVar27 + 4;
        uVar14 = uVar14 - 8;
      } while (uVar14 != 0);
      puVar16 = param_12 + uVar22;
      if (uVar22 == uVar24) goto LAB_1093f46f8;
    }
    uVar18 = uVar18 + 1;
    do {
      *puVar16 = param_1;
      uVar18 = uVar18 - 1;
      puVar16 = puVar16 + 1;
    } while (1 < uVar18);
  }
LAB_1093f46f8:
  auVar13 = _UNK_10dfc9160;
  Var12 = _UNK_10dfc9150;
  auVar11 = _UNK_10dfc9140;
  auVar10 = _UNK_10dfc9130;
  if (7 < param_8) {
    if ((((param_3[1] != 0.0) || (param_3[3] != 0.0)) || (4 < (int)uVar17)) ||
       (fVar48 = param_3[4], fVar48 < 1.0)) {
      if (((0 < (int)param_10) && (0 < (int)uVar17)) && (0 < (int)param_9)) {
        uVar24 = 0;
        uVar18 = 0;
        uVar14 = param_6 & 0xffffffff;
        fVar53 = param_3[3];
        fVar48 = *param_3;
        uVar22 = param_6 & 0x7ffffff0;
        auVar50 = NEON_fmov(0xbf800000,4);
        do {
          uVar30 = 0;
          fVar46 = param_3[4] * ((float)uVar18 + 0.5) + fVar53 * 0.5 + param_3[5];
          uVar29 = -(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2;
          puVar27 = (undefined8 *)((long)param_12 + uVar29);
          fVar47 = param_3[1] * ((float)uVar18 + 0.5) + fVar48 * 0.5 + param_3[2];
          puVar36 = puVar27;
          do {
            iVar19 = (int)fVar47;
            if (((-1 < iVar19) && (iVar19 < param_4)) &&
               ((iVar23 = (int)fVar46, -1 < iVar23 && (iVar23 < param_5)))) {
              lVar33 = (long)(param_8 * iVar23 + param_7 * iVar19);
              pauVar1 = (undefined1 (*) [16])(param_2 + lVar33);
              if ((uVar17 < 4) ||
                 (puVar27 < (undefined8 *)(param_2 + uVar14 + lVar33) &&
                  pauVar1 < (undefined1 (*) [16])
                            ((long)param_12 +
                            uVar29 + (uVar14 + (long)(int)uVar17 * (ulong)(param_9 - 1)) * 4))) {
                uVar38 = 0;
                goto LAB_1093f48e4;
              }
              fVar64 = auVar50._4_4_;
              fVar65 = auVar50._12_4_;
              fVar48 = auVar50._0_4_;
              fVar53 = auVar50._8_4_;
              uVar38 = uVar22;
              puVar25 = puVar36;
              pauVar39 = pauVar1;
              if (uVar17 < 0x10) {
                uVar38 = 0;
LAB_1093f497c:
                lVar42 = uVar38 - (param_6 & 0x7ffffffc);
                lVar31 = uVar38 << 2;
                puVar16 = (undefined4 *)(param_2 + uVar38 + lVar33);
                do {
                  uVar51 = *puVar16;
                  uVar45 = (undefined1)((uint)uVar51 >> 8);
                  auVar61._6_2_ = 0;
                  auVar61._0_6_ =
                       (uint6)CONCAT14(uVar45,(uint)CONCAT12(uVar45,(ushort)(byte)uVar51)) &
                       0xffff0000ffff;
                  auVar61[8] = (char)((uint)uVar51 >> 0x10);
                  auVar61._9_3_ = 0;
                  auVar61[0xc] = (char)((uint)uVar51 >> 0x18);
                  auVar61._13_3_ = 0;
                  auVar49 = NEON_ucvtf(auVar61,4);
                  pfVar26 = (float *)((long)puVar36 + lVar31);
                  pfVar26[2] = fVar53 + auVar49._8_4_ * 0.007843138;
                  pfVar26[3] = fVar65 + auVar49._12_4_ * 0.007843138;
                  *pfVar26 = fVar48 + auVar49._0_4_ * 0.007843138;
                  pfVar26[1] = fVar64 + auVar49._4_4_ * 0.007843138;
                  lVar31 = lVar31 + 0x10;
                  lVar42 = lVar42 + 4;
                  puVar16 = puVar16 + 1;
                  uVar38 = param_6 & 0x7ffffffc;
                } while (lVar42 != 0);
                for (; uVar38 != uVar14; uVar38 = uVar38 + 1) {
LAB_1093f48e4:
                  fVar48 = (float)NEON_ucvtf((uint)(byte)(*pauVar1)[uVar38]);
                  *(float *)((long)puVar36 + uVar38 * 4) = fVar48 * 0.007843138 + -1.0;
                }
              }
              else {
                do {
                  auVar61 = *pauVar39;
                  auVar49._12_4_ = 0xffffff0f;
                  auVar49._0_12_ = auVar10;
                  auVar62 = a64_TBL(ZEXT816(0),auVar61,auVar49);
                  auVar57._12_4_ = 0xffffff0b;
                  auVar57._0_12_ = auVar11;
                  auVar57 = a64_TBL(ZEXT816(0),auVar61,auVar57);
                  auVar60[9] = 0xff;
                  auVar60._0_9_ = Var12;
                  auVar60[10] = 0xff;
                  auVar60[0xb] = 0xff;
                  auVar60[0xc] = 7;
                  auVar60[0xd] = 0xff;
                  auVar60[0xe] = 0xff;
                  auVar60[0xf] = 0xff;
                  auVar60 = a64_TBL(ZEXT816(0),auVar61,auVar60);
                  auVar49 = a64_TBL(ZEXT816(0),auVar61,auVar13);
                  auVar49 = NEON_ucvtf(auVar49,4);
                  auVar61 = NEON_ucvtf(auVar60,4);
                  auVar60 = NEON_ucvtf(auVar57,4);
                  auVar57 = NEON_ucvtf(auVar62,4);
                  auVar62._0_8_ =
                       CONCAT44(fVar64 + auVar49._4_4_ * 0.007843138,
                                fVar48 + auVar49._0_4_ * 0.007843138);
                  auVar62._8_4_ = fVar53 + auVar49._8_4_ * 0.007843138;
                  auVar62._12_4_ = fVar65 + auVar49._12_4_ * 0.007843138;
                  *(float *)(puVar25 + 5) = fVar53 + auVar60._8_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x2c) = fVar65 + auVar60._12_4_ * 0.007843138;
                  *(float *)(puVar25 + 4) = fVar48 + auVar60._0_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x24) = fVar64 + auVar60._4_4_ * 0.007843138;
                  *(float *)(puVar25 + 7) = fVar53 + auVar57._8_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x3c) = fVar65 + auVar57._12_4_ * 0.007843138;
                  *(float *)(puVar25 + 6) = fVar48 + auVar57._0_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x34) = fVar64 + auVar57._4_4_ * 0.007843138;
                  puVar25[1] = auVar62._8_8_;
                  *puVar25 = auVar62._0_8_;
                  *(float *)(puVar25 + 3) = fVar53 + auVar61._8_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x1c) = fVar65 + auVar61._12_4_ * 0.007843138;
                  *(float *)(puVar25 + 2) = fVar48 + auVar61._0_4_ * 0.007843138;
                  *(float *)((long)puVar25 + 0x14) = fVar64 + auVar61._4_4_ * 0.007843138;
                  uVar38 = uVar38 - 0x10;
                  puVar25 = puVar25 + 8;
                  pauVar39 = pauVar39 + 1;
                } while (uVar38 != 0);
                if (uVar22 != uVar14) {
                  uVar38 = uVar22;
                  if ((param_6 & 0xc) == 0) goto LAB_1093f48e4;
                  goto LAB_1093f497c;
                }
              }
              fVar48 = *param_3;
              fVar53 = param_3[3];
            }
            fVar47 = fVar48 + fVar47;
            fVar46 = fVar53 + fVar46;
            uVar30 = uVar30 + 1;
            puVar36 = (undefined8 *)((long)puVar36 + (long)(int)uVar17 * 4);
          } while (uVar30 != param_9);
          uVar18 = uVar18 + 1;
          uVar24 = (ulong)(uint)((int)uVar24 + iVar2);
        } while (uVar18 != param_10);
      }
    }
    else {
      fVar53 = *param_3;
      fVar46 = param_3[2] + fVar53 * 0.5;
      if (0 < (int)param_9) {
        uVar18 = 0;
        do {
          iVar19 = (int)(fVar46 + (float)uVar18 * fVar53);
          if ((-1 < iVar19) && (iVar19 < param_4)) goto LAB_1093f49c8;
          uVar18 = uVar18 + 1;
        } while (param_9 != uVar18);
      }
      uVar18 = 0;
LAB_1093f49c8:
      fVar47 = param_3[5] + fVar48 * 0.5;
      iVar19 = 0;
      uVar30 = param_9;
      if (uVar17 != 0) {
        iVar19 = 3 / (int)uVar17;
      }
      do {
        uVar20 = uVar30;
        uVar30 = uVar20 - 1;
        if ((int)uVar20 < 1) {
          uStack_84 = 0;
          break;
        }
        iVar23 = (int)(fVar46 + (float)uVar30 * fVar53);
      } while ((iVar23 < 0) || (uStack_84 = uVar20, param_4 <= iVar23));
      if (0 < (int)param_10) {
        uVar30 = 0;
        do {
          iVar23 = (int)(fVar47 + (float)uVar30 * fVar48);
          if ((-1 < iVar23) && (iVar23 < param_5)) goto LAB_1093f4a4c;
          uVar30 = uVar30 + 1;
        } while (param_10 != uVar30);
      }
      uVar30 = 0;
LAB_1093f4a4c:
      do {
        uVar28 = param_10;
        param_10 = uVar28 - 1;
        if ((int)uVar28 < 1) {
          uVar21 = 0;
          break;
        }
        iVar23 = (int)(fVar47 + (float)param_10 * fVar48);
      } while ((iVar23 < 0) || (uVar21 = uVar28, param_5 <= iVar23));
      if (((int)uVar18 < (int)uStack_84) && ((int)uVar30 < (int)uVar21)) {
        iVar23 = uVar21 - 1;
        if ((int)uVar30 < iVar23) {
          lVar33 = 0;
          uVar29 = param_6 & 0xffffffff;
          iVar34 = (uVar18 + uVar30 * param_9) * uVar17;
          uVar14 = (ulong)uVar30;
          lVar32 = (long)(int)param_9;
          uVar38 = (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
          uVar41 = -(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
          lVar42 = lVar32 * uVar14;
          lVar31 = lVar42 + uVar38;
          uVar22 = param_6 & 0x7ffffff0;
          auVar49 = NEON_fmov(0xbf800000,4);
          auVar50._12_4_ = _UNK_10dfc914c;
          auVar50._0_12_ = _UNK_10dfc9140;
          auVar8._9_7_ = _UNK_10dfc9159;
          auVar8._0_9_ = _UNK_10dfc9150;
          uVar24 = uVar14;
          do {
            fVar65 = auVar49._0_4_;
            fVar48 = auVar49._4_4_;
            fVar64 = auVar49._12_4_;
            fVar53 = auVar49._8_4_;
            uVar30 = uVar18;
            if ((int)uVar18 < (int)(uStack_84 - iVar19)) {
              pfVar26 = (float *)(param_12 + iVar34);
              fVar54 = param_3[4];
              do {
                uVar55 = *(undefined8 *)
                          (param_2 +
                          (param_8 * (int)(fVar47 + (float)(uVar24 & 0xffffffff) * fVar54) +
                          param_7 * (int)(fVar46 + (float)uVar30 * *param_3)));
                auVar56._0_3_ = (uint3)uVar55 & 0xff;
                auVar56[3] = 0;
                auVar56[4] = (char)((ulong)uVar55 >> 8);
                auVar56._5_3_ = 0;
                auVar56[8] = (char)((ulong)uVar55 >> 0x10);
                auVar56._9_3_ = 0;
                auVar56[0xc] = (char)((ulong)uVar55 >> 0x18);
                auVar56._13_3_ = 0;
                auVar57 = NEON_ucvtf(auVar56,4);
                pfVar26[2] = fVar53 + auVar57._8_4_ * 0.007843138;
                pfVar26[3] = fVar64 + auVar57._12_4_ * 0.007843138;
                *pfVar26 = fVar65 + auVar57._0_4_ * 0.007843138;
                pfVar26[1] = fVar48 + auVar57._4_4_ * 0.007843138;
                uVar30 = uVar30 + 1;
                pfVar26 = (float *)((long)pfVar26 + uVar41);
              } while ((int)uVar30 < (int)(uStack_84 - iVar19));
            }
            if ((0 < (int)uVar17) && ((int)uVar30 < (int)uStack_84)) {
              uVar43 = (ulong)uVar30;
              lVar40 = (lVar33 + uVar14) * lVar32 + uVar43;
              puVar27 = (undefined8 *)((long)param_12 + uVar41 * (lVar42 + uVar43));
              do {
                iVar3 = param_7 * (int)(fVar46 + (float)(int)uVar43 * *param_3);
                iVar4 = param_8 * (int)(fVar47 + (float)(uVar24 & 0xffffffff) * param_3[4]);
                lVar15 = (long)(iVar4 + iVar3);
                pauVar1 = (undefined1 (*) [16])(param_2 + lVar15);
                if (uVar17 < 4) {
                  uVar35 = 0;
LAB_1093f4d74:
                  do {
                    fVar54 = (float)NEON_ucvtf((uint)(byte)(*pauVar1)[uVar35]);
                    *(float *)((long)puVar27 + uVar35 * 4) = fVar54 * 0.007843138 + -1.0;
                    uVar35 = uVar35 + 1;
joined_r0x0001093f4d70:
                  } while (uVar35 != uVar29);
                }
                else {
                  if ((undefined4 *)((long)param_12 + uVar41 * lVar40) <
                      (undefined4 *)(param_2 + uVar29 + (long)iVar3 + (long)iVar4) &&
                      pauVar1 < (undefined1 (*) [16])
                                ((long)param_12 +
                                (long)(int)param_9 * (long)(int)uVar17 * 4 * lVar33 +
                                (lVar31 * 4 + -4) * (long)(int)uVar17 + (param_6 & 0xffffffff) * 4))
                  {
                    uVar35 = 0;
                    goto LAB_1093f4d74;
                  }
                  puVar36 = puVar27;
                  uVar35 = uVar22;
                  pauVar39 = pauVar1;
                  if (uVar17 < 0x10) {
                    uVar35 = 0;
LAB_1093f4d2c:
                    lVar37 = uVar35 - (param_6 & 0x7ffffffc);
                    lVar44 = uVar35 << 2;
                    puVar16 = (undefined4 *)(param_2 + uVar35 + lVar15);
                    do {
                      uVar51 = *puVar16;
                      uVar45 = (undefined1)((uint)uVar51 >> 8);
                      auVar59._6_2_ = 0;
                      auVar59._0_6_ =
                           (uint6)CONCAT14(uVar45,(uint)CONCAT12(uVar45,(ushort)(byte)uVar51)) &
                           0xffff0000ffff;
                      auVar59[8] = (char)((uint)uVar51 >> 0x10);
                      auVar59._9_3_ = 0;
                      auVar59[0xc] = (char)((uint)uVar51 >> 0x18);
                      auVar59._13_3_ = 0;
                      auVar57 = NEON_ucvtf(auVar59,4);
                      pfVar26 = (float *)((long)puVar27 + lVar44);
                      pfVar26[2] = fVar53 + auVar57._8_4_ * 0.007843138;
                      pfVar26[3] = fVar64 + auVar57._12_4_ * 0.007843138;
                      *pfVar26 = fVar65 + auVar57._0_4_ * 0.007843138;
                      pfVar26[1] = fVar48 + auVar57._4_4_ * 0.007843138;
                      lVar44 = lVar44 + 0x10;
                      lVar37 = lVar37 + 4;
                      puVar16 = puVar16 + 1;
                      uVar35 = param_6 & 0x7ffffffc;
                      if (lVar37 == 0) goto joined_r0x0001093f4d70;
                    } while( true );
                  }
                  do {
                    auVar57 = *pauVar39;
                    auVar6._12_4_ = 0xffffff0f;
                    auVar6._0_12_ = auVar10;
                    auVar60 = a64_TBL(ZEXT816(0),auVar57,auVar6);
                    auVar61 = a64_TBL(ZEXT816(0),auVar57,auVar50);
                    auVar62 = a64_TBL(ZEXT816(0),auVar57,auVar8);
                    auVar57 = a64_TBL(ZEXT816(0),auVar57,auVar13);
                    auVar57 = NEON_ucvtf(auVar57,4);
                    auVar62 = NEON_ucvtf(auVar62,4);
                    auVar61 = NEON_ucvtf(auVar61,4);
                    auVar60 = NEON_ucvtf(auVar60,4);
                    auVar58._0_8_ =
                         CONCAT44(fVar48 + auVar61._4_4_ * 0.007843138,
                                  fVar65 + auVar61._0_4_ * 0.007843138);
                    auVar58._8_4_ = fVar53 + auVar61._8_4_ * 0.007843138;
                    auVar58._12_4_ = fVar64 + auVar61._12_4_ * 0.007843138;
                    puVar36[5] = auVar58._8_8_;
                    puVar36[4] = auVar58._0_8_;
                    *(float *)(puVar36 + 7) = fVar53 + auVar60._8_4_ * 0.007843138;
                    *(float *)((long)puVar36 + 0x3c) = fVar64 + auVar60._12_4_ * 0.007843138;
                    *(float *)(puVar36 + 6) = fVar65 + auVar60._0_4_ * 0.007843138;
                    *(float *)((long)puVar36 + 0x34) = fVar48 + auVar60._4_4_ * 0.007843138;
                    puVar36[1] = CONCAT44(fVar64 + auVar57._12_4_ * 0.007843138,
                                          fVar53 + auVar57._8_4_ * 0.007843138);
                    *puVar36 = CONCAT44(fVar48 + auVar57._4_4_ * 0.007843138,
                                        fVar65 + auVar57._0_4_ * 0.007843138);
                    *(float *)(puVar36 + 3) = fVar53 + auVar62._8_4_ * 0.007843138;
                    *(float *)((long)puVar36 + 0x1c) = fVar64 + auVar62._12_4_ * 0.007843138;
                    *(float *)(puVar36 + 2) = fVar65 + auVar62._0_4_ * 0.007843138;
                    *(float *)((long)puVar36 + 0x14) = fVar48 + auVar62._4_4_ * 0.007843138;
                    uVar35 = uVar35 - 0x10;
                    puVar36 = puVar36 + 8;
                    pauVar39 = pauVar39 + 1;
                  } while (uVar35 != 0);
                  if (uVar22 != uVar29) {
                    uVar35 = uVar22;
                    if ((param_6 & 0xc) != 0) goto LAB_1093f4d2c;
                    goto LAB_1093f4d74;
                  }
                }
                uVar43 = uVar43 + 1;
                puVar27 = (undefined8 *)((long)puVar27 + uVar41);
              } while (uVar43 != uVar38);
            }
            uVar24 = uVar24 + 1;
            iVar34 = iVar34 + iVar2;
            lVar33 = lVar33 + 1;
            lVar42 = lVar42 + lVar32;
          } while ((long)uVar24 < (long)iVar23);
        }
        auVar13 = _UNK_10dfc9160;
        auVar10 = _UNK_10dfc9130;
        uVar24 = param_6 & 0xffffffff;
        if (0 < (int)uVar17) {
          uVar14 = (ulong)uVar18;
          uVar29 = (ulong)uStack_84;
          lVar31 = uVar24 * 4;
          lVar33 = uVar14 + (long)(int)(iVar23 * param_9);
          uVar22 = uVar29;
          if (uVar29 < uVar14 + 1) {
            uVar22 = uVar14 + 1;
          }
          uVar38 = param_6 & 0xfffffff0;
          puVar27 = (undefined8 *)
                    ((long)param_12 +
                    lVar31 * (uVar14 + (long)(int)(param_9 *
                                                  ((uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU)) -
                                                  1))));
          auVar50 = NEON_fmov(0xbf800000,4);
          auVar7._12_4_ = _UNK_10dfc914c;
          auVar7._0_12_ = _UNK_10dfc9140;
          auVar9._9_7_ = _UNK_10dfc9159;
          auVar9._0_9_ = _UNK_10dfc9150;
          do {
            iVar2 = param_7 * (int)(fVar46 + (float)(uVar14 & 0xffffffff) * *param_3);
            iVar19 = param_8 * (int)(fVar47 + (float)iVar23 * param_3[4]);
            lVar42 = (long)(iVar19 + iVar2);
            pauVar1 = (undefined1 (*) [16])(param_2 + lVar42);
            if (uVar24 < 4) {
              uVar41 = 0;
LAB_1093f4f7c:
              do {
                fVar48 = (float)NEON_ucvtf((uint)(byte)(*pauVar1)[uVar41]);
                *(float *)((long)puVar27 + uVar41 * 4) = fVar48 * 0.007843138 + -1.0;
                uVar41 = uVar41 + 1;
joined_r0x0001093f4f78:
              } while (uVar24 != uVar41);
            }
            else {
              if ((undefined4 *)((long)param_12 + lVar31 * lVar33) <
                  (undefined4 *)(param_2 + uVar24 + (long)iVar2 + (long)iVar19) &&
                  pauVar1 < (undefined1 (*) [16])
                            ((long)param_12 + lVar31 * (uVar22 + (long)(int)(iVar23 * param_9)))) {
                uVar41 = 0;
                goto LAB_1093f4f7c;
              }
              fVar64 = auVar50._4_4_;
              fVar65 = auVar50._12_4_;
              fVar48 = auVar50._0_4_;
              fVar53 = auVar50._8_4_;
              pauVar39 = pauVar1;
              puVar36 = puVar27;
              uVar41 = uVar38;
              if (uVar24 < 0x10) {
                uVar41 = 0;
LAB_1093f4f38:
                lVar40 = uVar41 - (param_6 & 0xfffffffc);
                lVar32 = uVar41 << 2;
                puVar16 = (undefined4 *)(param_2 + uVar41 + lVar42);
                do {
                  uVar51 = *puVar16;
                  uVar45 = (undefined1)((uint)uVar51 >> 8);
                  auVar52._6_2_ = 0;
                  auVar52._0_6_ =
                       (uint6)CONCAT14(uVar45,(uint)CONCAT12(uVar45,(ushort)(byte)uVar51)) &
                       0xffff0000ffff;
                  auVar52[8] = (char)((uint)uVar51 >> 0x10);
                  auVar52._9_3_ = 0;
                  auVar52[0xc] = (char)((uint)uVar51 >> 0x18);
                  auVar52._13_3_ = 0;
                  auVar49 = NEON_ucvtf(auVar52,4);
                  pfVar26 = (float *)((long)puVar27 + lVar32);
                  pfVar26[2] = fVar53 + auVar49._8_4_ * 0.007843138;
                  pfVar26[3] = fVar65 + auVar49._12_4_ * 0.007843138;
                  *pfVar26 = fVar48 + auVar49._0_4_ * 0.007843138;
                  pfVar26[1] = fVar64 + auVar49._4_4_ * 0.007843138;
                  lVar32 = lVar32 + 0x10;
                  lVar40 = lVar40 + 4;
                  puVar16 = puVar16 + 1;
                  uVar41 = param_6 & 0xfffffffc;
                  if (lVar40 == 0) goto joined_r0x0001093f4f78;
                } while( true );
              }
              do {
                auVar49 = *pauVar39;
                auVar5._12_4_ = 0xffffff0f;
                auVar5._0_12_ = auVar10;
                auVar57 = a64_TBL(ZEXT816(0),auVar49,auVar5);
                auVar60 = a64_TBL(ZEXT816(0),auVar49,auVar7);
                auVar61 = a64_TBL(ZEXT816(0),auVar49,auVar9);
                auVar49 = a64_TBL(ZEXT816(0),auVar49,auVar13);
                auVar49 = NEON_ucvtf(auVar49,4);
                auVar61 = NEON_ucvtf(auVar61,4);
                auVar60 = NEON_ucvtf(auVar60,4);
                auVar57 = NEON_ucvtf(auVar57,4);
                auVar63._0_8_ =
                     CONCAT44(fVar64 + auVar49._4_4_ * 0.007843138,
                              fVar48 + auVar49._0_4_ * 0.007843138);
                auVar63._8_4_ = fVar53 + auVar49._8_4_ * 0.007843138;
                auVar63._12_4_ = fVar65 + auVar49._12_4_ * 0.007843138;
                *(float *)(puVar36 + 5) = fVar53 + auVar60._8_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x2c) = fVar65 + auVar60._12_4_ * 0.007843138;
                *(float *)(puVar36 + 4) = fVar48 + auVar60._0_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x24) = fVar64 + auVar60._4_4_ * 0.007843138;
                *(float *)(puVar36 + 7) = fVar53 + auVar57._8_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x3c) = fVar65 + auVar57._12_4_ * 0.007843138;
                *(float *)(puVar36 + 6) = fVar48 + auVar57._0_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x34) = fVar64 + auVar57._4_4_ * 0.007843138;
                puVar36[1] = auVar63._8_8_;
                *puVar36 = auVar63._0_8_;
                *(float *)(puVar36 + 3) = fVar53 + auVar61._8_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x1c) = fVar65 + auVar61._12_4_ * 0.007843138;
                *(float *)(puVar36 + 2) = fVar48 + auVar61._0_4_ * 0.007843138;
                *(float *)((long)puVar36 + 0x14) = fVar64 + auVar61._4_4_ * 0.007843138;
                uVar41 = uVar41 - 0x10;
                pauVar39 = pauVar39 + 1;
                puVar36 = puVar36 + 8;
              } while (uVar41 != 0);
              if (uVar24 != uVar38) {
                uVar41 = uVar38;
                if ((param_6 & 0xc) != 0) goto LAB_1093f4f38;
                goto LAB_1093f4f7c;
              }
            }
            uVar14 = uVar14 + 1;
            puVar27 = (undefined8 *)((long)puVar27 + lVar31);
          } while (uVar14 < uVar29);
        }
      }
    }
  }
  return;
}



/* Entry: 1093f4fc0; end: 1093f5303;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f4fc0(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int **ppiVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long *extraout_x8;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dStack_280;
  double dStack_278;
  char cStack_269;
  int iStack_264;
  int **appiStack_260 [4];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_218;
  char cStack_201;
  undefined **appuStack_1f0 [20];
  int **ppiStack_150;
  double dStack_148;
  int *piStack_140;
  code *pcStack_138;
  code *pcStack_130;
  ulong uStack_120;
  long alStack_b8 [2];
  char cStack_a1;
  
  lVar14 = param_2;
  if ((*(byte *)(param_4 + 0x10) >> 3 & 1) == 0) {
    FUN_10937e740(alStack_b8,&UNK_10f56c460);
    lVar14 = 1;
    FUN_109388c6c(1,&UNK_10f56c730,&UNK_10f56c7b2,0xda,alStack_b8);
    if (cStack_a1 < '\0') {
      lVar14 = alStack_b8[0];
      __ZdlPv();
    }
  }
  iVar5 = *(int *)(param_4 + 0x24);
  iVar16 = *(int *)(param_2 + 0x28);
  iVar22 = 0;
  if (iVar5 != 0) {
    iVar22 = (*(int *)(param_2 + 0x24) + -1) / iVar5;
  }
  iVar1 = iVar22 + 1;
  ppuVar4 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_3 + 0x18);
  }
  fVar39 = *(float *)(ppuVar4 + 3);
  fVar41 = *(float *)((long)ppuVar4 + 0x1c);
  ppuVar4 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_3 + 0x20);
  }
  fVar28 = *(float *)(ppuVar4 + 3);
  fVar25 = *(float *)((long)ppuVar4 + 0x1c);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = (iVar16 + -1) / iVar5;
  }
  iVar16 = iVar1 + iVar1 * iVar6;
  if (iVar16 == 0) {
    lVar14 = 0;
    lVar15 = 0;
  }
  else {
    if (iVar16 < 0) {
      FUN_1092cc18c();
      if (cStack_a1 < '\0') {
        __ZdlPv(alStack_b8[0]);
      }
      __Unwind_Resume();
      uStack_120 = (ulong)(uint)fVar39;
      FUN_1093f6250(extraout_x8);
      uVar17 = *(uint *)(lVar14 + 0x10);
      if ((uVar17 & 1) != 0) {
        lVar15 = *(long *)(lVar14 + 0x40);
        auVar27._0_8_ = (long)(int)*(undefined8 *)(lVar15 + 0x28);
        auVar27._8_8_ = (long)(int)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
        auVar27 = NEON_scvtf(auVar27,8);
        appiStack_260[1] = auVar27._8_8_;
        appiStack_260[0] = auVar27._0_8_;
        ppuVar4 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar15 + 0x18) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar15 + 0x18);
        }
        ppiStack_150 = (int **)(double)SUB84(ppuVar4[3],0);
        dStack_148 = (double)(float)((ulong)ppuVar4[3] >> 0x20);
        ppuVar4 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(lVar15 + 0x20) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar15 + 0x20);
        }
        dStack_280 = (double)SUB84(ppuVar4[3],0);
        dStack_278 = (double)(float)((ulong)ppuVar4[3] >> 0x20);
        FUN_1093f56e8(extraout_x8,appiStack_260,&ppiStack_150,&dStack_280);
        uVar17 = *(uint *)(lVar14 + 0x10);
      }
      uVar8 = uStack_238;
      if ((uVar17 >> 5 & 1) == 0) {
        return;
      }
      iStack_264 = *(int *)(lVar14 + 100);
      if (iStack_264 < 2) {
        if (iStack_264 != 0) {
          if (iStack_264 == 1) {
            lVar15 = 0;
            puVar19 = *(undefined8 **)(lVar14 + 0x38);
            dStack_148 = (double)puVar19[1];
            ppiStack_150 = (int **)*puVar19;
            pcStack_138 = (code *)puVar19[3];
            piStack_140 = (int *)puVar19[2];
            pcStack_130 = (code *)puVar19[4];
            uStack_238 = CONCAT44(uStack_238._4_4_,10);
            appiStack_260[1] = (int **)puVar19[1];
            appiStack_260[0] = (int **)*puVar19;
            appiStack_260[3] = (int **)puVar19[3];
            appiStack_260[2] = (int **)puVar19[2];
            uStack_240 = puVar19[4];
            do {
              pdVar7 = (double *)((long)&ppiStack_150 + lVar15);
              if (2.220446049250313e-16 < ABS(*pdVar7)) break;
              bVar13 = lVar15 != 0x20;
              lVar15 = lVar15 + 8;
            } while (bVar13);
            uStack_238._5_3_ = SUB83(uVar8,5);
            uStack_238._0_5_ = CONCAT14(ABS(*pdVar7) <= 2.220446049250313e-16,10);
            FUN_1093f57c4(extraout_x8,appiStack_260);
            return;
          }
LAB_1093f54a8:
          FUN_10926db08(appiStack_260);
          ppiStack_150 = &piStack_140;
          dStack_148 = (double)CONCAT44(dStack_148._4_4_,1);
          piStack_140 = &iStack_264;
          pcStack_138 = FUN_1093fafa4;
          pcStack_130 = FUN_1093fb130;
          FUN_10937ad5c(appiStack_260,&UNK_10f56c86b,ppiStack_150,1);
          FUN_10926dc5c(&dStack_280,appiStack_260 + 1,&ppiStack_150);
          appuStack_1f0[0] = &PTR_DAT_11088d708;
          appiStack_260[0] = (int **)&PTR_SUB_11088d6e0;
          appiStack_260[1] = (int **)&PTR_DAT_11088d7b0;
          if (cStack_201 < '\0') {
            __ZdlPv(uStack_218);
          }
          appiStack_260[1] =
               (int **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
          __ZNSt3__16localeD1Ev(appiStack_260 + 2);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(appiStack_260,&PTR_PTR_11088d720);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_1f0);
          FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c847,0x68,&dStack_280);
          if (-1 < cStack_269) {
            return;
          }
          __ZdlPv(dStack_280);
          return;
        }
        puVar19 = (undefined8 *)0x10;
        __Znwm();
        *puVar19 = &PTR_DAT_110af5830;
        puVar19[1] = 0;
      }
      else if (iStack_264 == 2) {
        lVar15 = 0;
        puVar19 = *(undefined8 **)(lVar14 + 0x38);
        ppiVar11 = (int **)*puVar19;
        uVar8 = puVar19[1];
        uVar38 = puVar19[3];
        uVar33 = puVar19[2];
        appiStack_260[1] = (int **)uVar8;
        appiStack_260[0] = ppiVar11;
        appiStack_260[3] = (int **)uVar38;
        appiStack_260[2] = (int **)uVar33;
        uVar9 = puVar19[4];
        uVar10 = puVar19[5];
        uVar31 = puVar19[7];
        uVar34 = puVar19[6];
        uStack_238 = uVar10;
        uStack_240 = uVar9;
        uStack_228 = uVar31;
        uStack_230 = uVar34;
        do {
          dVar35 = *(double *)((long)appiStack_260 + lVar15);
          if (2.220446049250313e-16 < ABS(dVar35)) break;
          bVar13 = lVar15 != 0x38;
          lVar15 = lVar15 + 8;
        } while (bVar13);
        puVar19 = (undefined8 *)0x50;
        __Znwm();
        puVar19[9] = 0;
        *puVar19 = &PTR_DAT_110af5ab0;
        puVar19[2] = uVar8;
        puVar19[1] = ppiVar11;
        puVar19[4] = uVar38;
        puVar19[3] = uVar33;
        puVar19[6] = uVar10;
        puVar19[5] = uVar9;
        puVar19[8] = uVar31;
        puVar19[7] = uVar34;
        *(undefined4 *)(puVar19 + 9) = 10;
        *(bool *)((long)puVar19 + 0x4c) = ABS(dVar35) <= 2.220446049250313e-16;
      }
      else {
        if (iStack_264 != 3) goto LAB_1093f54a8;
        puVar19 = *(undefined8 **)(lVar14 + 0x38);
        uVar36 = puVar19[1];
        uVar31 = *puVar19;
        uVar8 = puVar19[2];
        uVar9 = puVar19[3];
        uVar37 = puVar19[5];
        uVar32 = puVar19[4];
        uVar10 = puVar19[6];
        uVar33 = puVar19[7];
        uVar34 = puVar19[8];
        uVar38 = puVar19[9];
        puVar19 = (undefined8 *)0x68;
        __Znwm();
        *puVar19 = &PTR_FUN_110af5be0;
        *(undefined4 *)(puVar19 + 1) = 0xf;
        puVar19[2] = 0x3ddb7cdfd9d7bdbb;
        puVar19[4] = uVar36;
        puVar19[3] = uVar31;
        puVar19[6] = uVar9;
        puVar19[5] = uVar8;
        puVar19[8] = uVar37;
        puVar19[7] = uVar32;
        puVar19[10] = uVar33;
        puVar19[9] = uVar10;
        puVar19[0xc] = uVar38;
        puVar19[0xb] = uVar34;
      }
      plVar18 = (long *)*extraout_x8;
      *extraout_x8 = (long)puVar19;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      return;
    }
    lVar14 = (long)(iVar16 * 8) * 4;
    lVar15 = lVar14;
    __Znwm();
    lVar14 = lVar15 + lVar14;
    *param_1 = lVar15;
    param_1[1] = lVar15;
    param_1[2] = lVar14;
  }
  if (-1 < iVar6) {
    if (iVar22 < 0) {
      *param_1 = lVar15;
      param_1[2] = lVar14;
    }
    else {
      iVar16 = 0;
      fVar41 = 1.0 / fVar41;
      do {
        iVar22 = 0;
        fVar26 = (float)(iVar16 * iVar5) - fVar25;
        fVar29 = fVar26 * fVar41;
        fVar29 = SQRT(fVar29 * fVar29 + 1.0);
        fVar42 = 1.0 / fVar29;
        fVar29 = -(fVar26 * fVar41) / fVar29;
        lVar21 = lVar15;
        iVar23 = iVar1;
        do {
          while( true ) {
            fVar26 = ((float)iVar22 - fVar28) * (1.0 / fVar39);
            fVar30 = SQRT(fVar26 * fVar26 + 1.0);
            fVar40 = 1.0 / fVar30;
            fVar26 = fVar26 / fVar30;
            pfVar24 = (float *)param_1[1];
            if (lVar14 - (long)pfVar24 < 0x20) break;
            *pfVar24 = fVar40;
            pfVar24[1] = fVar26;
            pfVar24[2] = fVar26 * fVar29;
            pfVar24[3] = fVar42;
            pfVar24[4] = fVar40 * -fVar29;
            pfVar24[5] = fVar26 * -fVar42;
            pfVar24[6] = fVar29;
            pfVar24[7] = fVar40 * fVar42;
            param_1[1] = (long)(pfVar24 + 8);
            iVar22 = iVar22 + iVar5;
            iVar23 = iVar23 + -1;
            lVar15 = lVar21;
            if (iVar23 == 0) goto LAB_1093f5108;
          }
          uVar2 = ((long)pfVar24 - lVar21 >> 2) + 8;
          if (uVar2 >> 0x3e != 0) {
            *param_1 = lVar21;
            param_1[2] = lVar14;
            FUN_1092cc18c();
LAB_1093f52c0:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1093f52c4);
            (*pcVar12)();
          }
          uVar20 = lVar14 - lVar21 >> 1;
          if (uVar20 <= uVar2) {
            uVar20 = uVar2;
          }
          if (0x7ffffffffffffffb < (ulong)(lVar14 - lVar21)) {
            uVar20 = 0x3fffffffffffffff;
          }
          if (uVar20 >> 0x3e != 0) {
            *param_1 = lVar21;
            param_1[2] = lVar14;
            func_0x000104c4f740();
            goto LAB_1093f52c0;
          }
          lVar15 = uVar20 << 2;
          __Znwm();
          pfVar3 = (float *)(lVar15 + ((long)pfVar24 - lVar21));
          *pfVar3 = fVar40;
          pfVar3[1] = fVar26;
          lVar14 = lVar15 + uVar20 * 4;
          pfVar3[2] = fVar26 * fVar29;
          pfVar3[3] = fVar42;
          pfVar3[4] = fVar40 * -fVar29;
          pfVar3[5] = fVar26 * -fVar42;
          pfVar3[6] = fVar29;
          pfVar3[7] = fVar40 * fVar42;
          param_1[1] = (long)pfVar24;
          _memcpy();
          param_1[1] = (long)(pfVar3 + 8);
          if (lVar21 != 0) {
            __ZdlPv(lVar21);
          }
          iVar22 = iVar22 + iVar5;
          iVar23 = iVar23 + -1;
          lVar21 = lVar15;
        } while (iVar23 != 0);
LAB_1093f5108:
        *param_1 = lVar15;
        param_1[2] = lVar14;
        bVar13 = iVar16 != iVar6;
        iVar16 = iVar16 + 1;
      } while (bVar13);
    }
  }
  return;
}



/* Entry: 1093f5304; end: 1093f56e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093f5304(long *param_1,long param_2)

{
  undefined **ppuVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int **ppiVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dStack_1a0;
  double dStack_198;
  char cStack_189;
  int iStack_184;
  int **appiStack_180 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [20];
  int **ppiStack_70;
  double dStack_68;
  int *piStack_60;
  code *pcStack_58;
  code *pcStack_50;
  
  FUN_1093f6250(param_1);
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 1) != 0) {
    lVar9 = *(long *)(param_2 + 0x40);
    auVar12._0_8_ = (long)(int)*(undefined8 *)(lVar9 + 0x28);
    auVar12._8_8_ = (long)(int)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
    auVar12 = NEON_scvtf(auVar12,8);
    appiStack_180[1] = auVar12._8_8_;
    appiStack_180[0] = auVar12._0_8_;
    ppuVar1 = &PTR_PTR_1132d8bd0;
    if (*(undefined ***)(lVar9 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar9 + 0x18);
    }
    ppiStack_70 = (int **)(double)SUB84(ppuVar1[3],0);
    dStack_68 = (double)(float)((ulong)ppuVar1[3] >> 0x20);
    ppuVar1 = &PTR_PTR_1132d8bd0;
    if (*(undefined ***)(lVar9 + 0x20) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar9 + 0x20);
    }
    dStack_1a0 = (double)SUB84(ppuVar1[3],0);
    dStack_198 = (double)(float)((ulong)ppuVar1[3] >> 0x20);
    FUN_1093f56e8(param_1,appiStack_180,&ppiStack_70,&dStack_1a0);
    uVar8 = *(uint *)(param_2 + 0x10);
  }
  uVar3 = uStack_158;
  if ((uVar8 >> 5 & 1) == 0) {
    return;
  }
  iStack_184 = *(int *)(param_2 + 100);
  if (iStack_184 < 2) {
    if (iStack_184 != 0) {
      if (iStack_184 == 1) {
        lVar9 = 0;
        puVar11 = *(undefined8 **)(param_2 + 0x38);
        dStack_68 = (double)puVar11[1];
        ppiStack_70 = (int **)*puVar11;
        pcStack_58 = (code *)puVar11[3];
        piStack_60 = (int *)puVar11[2];
        pcStack_50 = (code *)puVar11[4];
        uStack_158 = CONCAT44(uStack_158._4_4_,10);
        appiStack_180[1] = (int **)puVar11[1];
        appiStack_180[0] = (int **)*puVar11;
        appiStack_180[3] = (int **)puVar11[3];
        appiStack_180[2] = (int **)puVar11[2];
        uStack_160 = puVar11[4];
        do {
          pdVar2 = (double *)((long)&ppiStack_70 + lVar9);
          if (2.220446049250313e-16 < ABS(*pdVar2)) break;
          bVar7 = lVar9 != 0x20;
          lVar9 = lVar9 + 8;
        } while (bVar7);
        uStack_158._5_3_ = SUB83(uVar3,5);
        uStack_158._0_5_ = CONCAT14(ABS(*pdVar2) <= 2.220446049250313e-16,10);
        FUN_1093f57c4(param_1,appiStack_180);
        return;
      }
LAB_1093f54a8:
      FUN_10926db08(appiStack_180);
      ppiStack_70 = &piStack_60;
      dStack_68 = (double)CONCAT44(dStack_68._4_4_,1);
      piStack_60 = &iStack_184;
      pcStack_58 = FUN_1093fafa4;
      pcStack_50 = FUN_1093fb130;
      FUN_10937ad5c(appiStack_180,&UNK_10f56c86b,ppiStack_70,1);
      FUN_10926dc5c(&dStack_1a0,appiStack_180 + 1,&ppiStack_70);
      appuStack_110[0] = &PTR_DAT_11088d708;
      appiStack_180[0] = (int **)&PTR_SUB_11088d6e0;
      appiStack_180[1] = (int **)&PTR_DAT_11088d7b0;
      if (cStack_121 < '\0') {
        __ZdlPv(uStack_138);
      }
      appiStack_180[1] =
           (int **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(appiStack_180 + 2);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(appiStack_180,&PTR_PTR_11088d720);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
      FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c847,0x68,&dStack_1a0);
      if (-1 < cStack_189) {
        return;
      }
      __ZdlPv(dStack_1a0);
      return;
    }
    puVar11 = (undefined8 *)0x10;
    __Znwm();
    *puVar11 = &PTR_DAT_110af5830;
    puVar11[1] = 0;
  }
  else if (iStack_184 == 2) {
    lVar9 = 0;
    puVar11 = *(undefined8 **)(param_2 + 0x38);
    ppiVar6 = (int **)*puVar11;
    uVar3 = puVar11[1];
    uVar20 = puVar11[3];
    uVar15 = puVar11[2];
    appiStack_180[1] = (int **)uVar3;
    appiStack_180[0] = ppiVar6;
    appiStack_180[3] = (int **)uVar20;
    appiStack_180[2] = (int **)uVar15;
    uVar4 = puVar11[4];
    uVar5 = puVar11[5];
    uVar13 = puVar11[7];
    uVar16 = puVar11[6];
    uStack_158 = uVar5;
    uStack_160 = uVar4;
    uStack_148 = uVar13;
    uStack_150 = uVar16;
    do {
      dVar17 = *(double *)((long)appiStack_180 + lVar9);
      if (2.220446049250313e-16 < ABS(dVar17)) break;
      bVar7 = lVar9 != 0x38;
      lVar9 = lVar9 + 8;
    } while (bVar7);
    puVar11 = (undefined8 *)0x50;
    __Znwm();
    puVar11[9] = 0;
    *puVar11 = &PTR_DAT_110af5ab0;
    puVar11[2] = uVar3;
    puVar11[1] = ppiVar6;
    puVar11[4] = uVar20;
    puVar11[3] = uVar15;
    puVar11[6] = uVar5;
    puVar11[5] = uVar4;
    puVar11[8] = uVar13;
    puVar11[7] = uVar16;
    *(undefined4 *)(puVar11 + 9) = 10;
    *(bool *)((long)puVar11 + 0x4c) = ABS(dVar17) <= 2.220446049250313e-16;
  }
  else {
    if (iStack_184 != 3) goto LAB_1093f54a8;
    puVar11 = *(undefined8 **)(param_2 + 0x38);
    uVar18 = puVar11[1];
    uVar13 = *puVar11;
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    uVar19 = puVar11[5];
    uVar14 = puVar11[4];
    uVar5 = puVar11[6];
    uVar15 = puVar11[7];
    uVar16 = puVar11[8];
    uVar20 = puVar11[9];
    puVar11 = (undefined8 *)0x68;
    __Znwm();
    *puVar11 = &PTR_FUN_110af5be0;
    *(undefined4 *)(puVar11 + 1) = 0xf;
    puVar11[2] = 0x3ddb7cdfd9d7bdbb;
    puVar11[4] = uVar18;
    puVar11[3] = uVar13;
    puVar11[6] = uVar4;
    puVar11[5] = uVar3;
    puVar11[8] = uVar19;
    puVar11[7] = uVar14;
    puVar11[10] = uVar15;
    puVar11[9] = uVar5;
    puVar11[0xc] = uVar20;
    puVar11[0xb] = uVar16;
  }
  plVar10 = (long *)*param_1;
  *param_1 = (long)puVar11;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  return;
}



/* Entry: 1093f56e8; end: 1093f57c3;  */

void FUN_1093f56e8(long param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  undefined8 uVar2;
  double *pdStack_30;
  undefined1 uStack_21;
  
  dVar1 = *param_2;
  *(double *)(param_1 + 0x10) = param_2[1];
  *(double *)(param_1 + 8) = dVar1;
  *(ulong *)(param_1 + 0x18) =
       CONCAT44((int)(long)(double)(long)param_2[1],(int)(long)(double)(long)*param_2);
  dVar1 = *param_3;
  *(double *)(param_1 + 0x28) = param_3[1];
  *(double *)(param_1 + 0x20) = dVar1;
  *(double *)(param_1 + 0x30) = 1.0 / *param_3;
  *(double *)(param_1 + 0x38) = 1.0 / param_3[1];
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x48) = param_4[1];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  pdStack_30 = (double *)(param_1 + 0x50);
  *pdStack_30 = *param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = *param_4;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(double *)(param_1 + 0x70) = param_3[1];
  *(undefined8 *)(param_1 + 0x88) = param_4[1];
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  FUN_1093f6380(param_1 + 0x98,&pdStack_30,&uStack_21);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1093f57c4; end: 1093f587b;  */

void FUN_1093f57c4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  puVar1[2] = param_2[1];
  puVar1[1] = uVar3;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  puVar1[5] = param_2[4];
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)puVar1 + 0x34) = *(undefined1 *)((long)param_2 + 0x2c);
  plVar2 = (long *)*param_1;
  *param_1 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



/* Entry: 1093f587c; end: 1093f58fb;  */

void FUN_1093f587c(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    param_1[1] = 0x3f80000000000000;
    *param_1 = 0;
    param_1[2] = 0;
    uVar5 = 0;
  }
  else {
    ppuVar2 = *(undefined ***)(*(long *)(param_2 + 0x48) + 0x18);
    ppuVar3 = *(undefined ***)(*(long *)(param_2 + 0x48) + 0x20);
    ppuVar1 = &PTR_PTR_1132d7fd0;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    ppuVar3 = &PTR_PTR_1132d8bd0;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    uVar5 = *(undefined4 *)(ppuVar3 + 4);
    fVar6 = SUB84(ppuVar1[3],0);
    fVar10 = fVar6 * fVar6;
    fVar7 = (float)((ulong)ppuVar1[3] >> 0x20);
    fVar11 = fVar7 * fVar7;
    fVar8 = SUB84(ppuVar1[4],0);
    fVar9 = (float)((ulong)ppuVar1[4] >> 0x20);
    auVar12._4_4_ = fVar11;
    auVar12._0_4_ = fVar10;
    auVar12._8_4_ = fVar8 * fVar8;
    auVar12._12_4_ = fVar9 * fVar9;
    auVar4._4_4_ = fVar11;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = fVar8 * fVar8;
    auVar4._12_4_ = fVar9 * fVar9;
    auVar12 = NEON_ext(auVar12,auVar4,8,1);
    fVar10 = SQRT(fVar10 + auVar12._0_4_ + fVar11 + auVar12._4_4_);
    param_1[1] = CONCAT44(fVar9 / fVar10,fVar8 / fVar10);
    *param_1 = CONCAT44(fVar7 / fVar10,fVar6 / fVar10);
    param_1[2] = ppuVar3[3];
  }
  *(undefined4 *)(param_1 + 3) = uVar5;
  return;
}



/* Entry: 1093f58fc; end: 1093f596b;  */

void FUN_1093f58fc(undefined8 *param_1,undefined8 *param_2)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  dStack_30 = (double)param_1[6] * ((double)(float)*param_2 - (double)param_1[8]);
  dStack_28 = (double)param_1[7] * ((double)(float)((ulong)*param_2 >> 0x20) - (double)param_1[9]);
  (**(code **)(*(long *)*param_1 + 0x20))(&dStack_40,(long *)*param_1,&dStack_30);
  *param_2 = CONCAT44((float)((double)param_1[9] + dStack_38 * (double)param_1[5]),
                      (float)((double)param_1[8] + dStack_40 * (double)param_1[4]));
  return;
}



/* Entry: 1093f596c; end: 1093f5a73;  */

void FUN_1093f596c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  double dStack_40;
  double dStack_38;
  
  if (((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) && (*(int *)(param_2 + 0x154) - 1U < 3)) {
    FUN_1093f5a74(param_1,*(undefined8 *)(param_2 + 0xb8));
  }
  if (*(int *)(param_2 + 0x158) - 1U < 3) {
    uVar2 = *(ulong *)(param_2 + 0x18);
    puVar3 = (ulong *)(param_2 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar4 = (long)*(int *)(param_2 + 0x20) << 3;
      do {
        FUN_1093f5a74(param_1,*puVar3);
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  if (*(int *)(param_2 + 0x15c) - 1U < 3) {
    uVar2 = *(ulong *)(param_2 + 0x30);
    puVar3 = (ulong *)(param_2 + 0x30);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      lVar4 = (long)*(int *)(param_2 + 0x38) << 3;
      do {
        FUN_1093f5a74(param_1,*puVar3);
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  if (((*(byte *)(param_2 + 0x10) >> 4 & 1) != 0) && (*(int *)(param_2 + 0x160) - 1U < 3)) {
    puVar1 = *(undefined8 **)(*(long *)(param_2 + 0xd0) + 0x40);
    (**(code **)(*(long *)*param_1 + 0x20))(&dStack_40,(long *)*param_1,&stack0xffffffffffffffd0);
    *puVar1 = CONCAT44((float)((double)param_1[9] + dStack_38 * (double)param_1[5]),
                       (float)((double)param_1[8] + dStack_40 * (double)param_1[4]));
    return;
  }
  return;
}



/* Entry: 1093f5a74; end: 1093f5aef;  */

void FUN_1093f5a74(undefined8 *param_1,long param_2)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  dStack_30 = (double)param_1[6] *
              ((double)(float)*(undefined8 *)(param_2 + 0x18) - (double)param_1[8]);
  dStack_28 = (double)param_1[7] *
              ((double)(float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) - (double)param_1[9])
  ;
  (**(code **)(*(long *)*param_1 + 0x20))(&dStack_40,(long *)*param_1,&dStack_30);
  *(ulong *)(param_2 + 0x18) =
       CONCAT44((float)((double)param_1[9] + dStack_38 * (double)param_1[5]),
                (float)((double)param_1[8] + dStack_40 * (double)param_1[4]));
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 3;
  return;
}



/* Entry: 1093f5af0; end: 1093f5c67;  */

void FUN_1093f5af0(undefined8 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float afStack_44 [17];
  
  lVar2 = 0;
  puVar3 = (undefined4 *)(param_2 + (long)(param_3 * 9) * 4 + 4);
  do {
    uVar5 = *puVar3;
    *(undefined4 *)((long)afStack_44 + lVar2 + 0x20) = puVar3[-1];
    *(undefined4 *)((long)afStack_44 + lVar2 + 0x2c) = uVar5;
    *(undefined4 *)((long)afStack_44 + lVar2 + 0x38) = puVar3[1];
    lVar2 = lVar2 + 4;
    puVar3 = puVar3 + 3;
  } while (lVar2 != 0xc);
  fVar7 = afStack_44[8] + afStack_44[0xc] + afStack_44[0x10];
  if (fVar7 <= 0.0) {
    lVar2 = 0xc;
    if (afStack_44[0xc] <= afStack_44[8]) {
      lVar2 = 0;
    }
    uVar1 = 2;
    if (afStack_44[0x10] <=
        *(float *)((long)afStack_44 + (ulong)(afStack_44[8] < afStack_44[0xc]) * 4 + lVar2 + 0x20))
    {
      uVar1 = (ulong)(afStack_44[8] < afStack_44[0xc]);
    }
    lVar2 = 0;
    if (uVar1 != 2) {
      lVar2 = uVar1 + 1;
    }
    lVar4 = lVar2 + -2;
    if (lVar2 + 1U < 3) {
      lVar4 = lVar2 + 1;
    }
    fVar7 = SQRT(((afStack_44[uVar1 * 4 + 8] - afStack_44[lVar2 * 4 + 8]) -
                 afStack_44[lVar4 * 4 + 8]) + 1.0);
    *(float *)((long)param_1 + uVar1 * 4) = fVar7 * 0.5;
    fVar7 = 0.5 / fVar7;
    *(float *)((long)param_1 + 0xc) =
         (afStack_44[lVar2 * 3 + lVar4 + 8] - afStack_44[lVar4 * 3 + lVar2 + 8]) * fVar7;
    *(float *)((long)param_1 + lVar2 * 4) =
         fVar7 * (afStack_44[uVar1 * 3 + lVar2 + 8] + afStack_44[lVar2 * 3 + uVar1 + 8]);
    *(float *)((long)param_1 + lVar4 * 4) =
         fVar7 * (afStack_44[uVar1 * 3 + lVar4 + 8] + afStack_44[lVar4 * 3 + uVar1 + 8]);
  }
  else {
    fVar7 = SQRT(fVar7 + 1.0);
    fVar6 = 0.5 / fVar7;
    param_1[1] = CONCAT44(fVar7 * 0.5,fVar6 * (afStack_44[9] - afStack_44[0xb]));
    *param_1 = CONCAT44(fVar6 * (SUB84(afStack_44._52_8_,4) - afStack_44[10]),
                        fVar6 * ((float)afStack_44._52_8_ - afStack_44[0xf]));
  }
  return;
}



/* Entry: 1093f5c68; end: 1093f5e47;  */

/* WARNING: Removing unreachable block (ram,0x0001093ce838) */
/* WARNING: Removing unreachable block (ram,0x0001093cae64) */
/* WARNING: Removing unreachable block (ram,0x0001093cacdc) */
/* WARNING: Removing unreachable block (ram,0x0001093ca87c) */
/* WARNING: Removing unreachable block (ram,0x0001093cdf3c) */
/* WARNING: Removing unreachable block (ram,0x0001093cdc88) */
/* WARNING: Removing unreachable block (ram,0x0001093cae18) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1093f5c68(long param_1,uint *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  double dVar5;
  undefined1 auVar6 [12];
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined8 **ppuVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined4 *puVar30;
  ulong *puVar31;
  undefined1 (*pauVar32) [16];
  undefined **ppuVar33;
  long *plVar34;
  long lVar35;
  undefined4 *puVar36;
  undefined **ppuVar37;
  undefined *puVar38;
  ulong uVar39;
  undefined4 *puVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  int *piVar44;
  long lVar45;
  int *piVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  long lVar50;
  int iVar51;
  uint *puVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined ***pppuVar56;
  int iVar57;
  float fVar58;
  undefined4 uVar59;
  int iVar71;
  undefined8 uVar60;
  float fVar72;
  float fVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined8 uVar78;
  ulong uVar79;
  float fVar88;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar101;
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined8 uVar102;
  float fVar112;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar113;
  undefined1 auVar111 [16];
  float fVar118;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined8 uVar138;
  float fVar143;
  undefined1 auVar139 [16];
  float fVar142;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar144;
  undefined1 auVar145 [16];
  float fVar146;
  float fVar147;
  float fVar148;
  undefined8 *puStack_640;
  float *pfStack_628;
  long lStack_620;
  float *pfStack_610;
  undefined8 *puStack_5f0;
  float *pfStack_5a0;
  float fStack_590;
  float fStack_560;
  float fStack_55c;
  float fStack_550;
  long lStack_540;
  undefined **ppuStack_528;
  float fStack_520;
  undefined8 uStack_51c;
  float fStack_514;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined4 *puStack_4f8;
  undefined8 uStack_4f0;
  float *pfStack_4e8;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined4 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined4 *puStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  long lStack_498;
  ulong uStack_490;
  long lStack_488;
  uint uStack_480;
  int iStack_47c;
  int iStack_478;
  int iStack_474;
  int iStack_470;
  float fStack_46c;
  undefined8 uStack_468;
  float fStack_460;
  undefined **ppuStack_458;
  ulong uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined1 auStack_3a8 [8];
  long *plStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  float fStack_348;
  undefined8 uStack_344;
  float fStack_33c;
  double dStack_338;
  float fStack_330;
  undefined **ppuStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined1 uStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined4 uStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  long lStack_258;
  float fStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  float fStack_170;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 in_stack_ffffffffffffffb8;
  long in_stack_ffffffffffffffc8;
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  
  iVar25 = (int)param_8;
  if ((*(int *)(param_3 + 0x38) != 3) || (*(int *)(param_3 + 0x48) != 9)) {
    FUN_10937e740(&stack0xffffffffffffffb8,&UNK_10f56c267);
    FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c8ae,0x102,&stack0xffffffffffffffb8);
LAB_1093f5e08:
    if (in_stack_ffffffffffffffc8 < 0) {
      __ZdlPv(in_stack_ffffffffffffffb8);
    }
    return;
  }
  if (((-1 < (char)param_2[4]) || (((byte)param_3[0x10] >> 1 & 1) == 0)) ||
     (param_2[0x4d] != *(uint *)(param_3 + 0x10c))) {
    FUN_10937e740(&stack0xffffffffffffffb8,&UNK_10f56c8d6);
    FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c8ae,0x108,&stack0xffffffffffffffb8);
    goto LAB_1093f5e08;
  }
  puVar36 = *(undefined4 **)(param_3 + 0x40);
  *puVar36 = *(undefined4 *)(param_1 + 0x10);
  puVar36[1] = *(undefined4 *)(param_1 + 0x14);
  puVar36[2] = *(undefined4 *)(param_1 + 0x18);
  lVar41 = -0xc;
  puVar36 = (undefined4 *)(*(long *)(param_3 + 0x50) + 8);
  do {
    puVar36[-2] = *(undefined4 *)(&stack0xffffffffffffffc4 + lVar41);
    puVar36[-1] = *(undefined4 *)(&stack0xffffffffffffffd0 + lVar41);
    *puVar36 = *(undefined4 *)(&stack0xffffffffffffffdc + lVar41);
    lVar41 = lVar41 + 4;
    puVar36 = puVar36 + 3;
  } while (lVar41 != 0);
  uVar26 = param_2[8];
  puVar23 = (undefined *)(ulong)uVar26;
  lVar41 = 0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar27 = 0;
  if (((int)uVar26 < 1) || ((int)param_2[8] < (int)uVar26)) {
    FUN_10937e740(auStack_a8,&UNK_10f56afc7);
    puVar29 = &UNK_10f56aeeb;
    puVar23 = &UNK_10f56afae;
    puVar24 = auStack_a8;
    puVar11 = (uint *)0x1;
    lVar41 = 0x48e;
    FUN_109388c6c();
  }
  else {
    puVar52 = (uint *)(param_3 + 200);
    uVar21 = *puVar52;
    puVar11 = param_2;
    puVar24 = param_3;
    if ((int)uVar21 < (int)uVar26) {
      if (*(int *)(param_3 + 0xcc) < (int)uVar26) {
        puVar11 = puVar52;
        FUN_109311970();
        uVar21 = *puVar52;
      }
      *(uint *)(param_3 + 200) = uVar26;
      if (uVar21 != uVar26) {
        puVar11 = (uint *)(*(long *)(param_3 + 0xd0) + (long)(int)uVar21 * 4);
        _bzero(puVar11,((long)(int)uVar26 - (long)(int)uVar21) * 4);
      }
    }
    uVar22 = uVar26 * 9;
    puVar29 = (undefined *)(ulong)uVar22;
    puVar52 = (uint *)(param_3 + 0xd8);
    uVar21 = *puVar52;
    if ((int)uVar21 < (int)uVar22) {
      if (*(int *)(param_3 + 0xdc) < (int)uVar22) {
        puVar11 = puVar52;
        FUN_109311970();
        uVar21 = *puVar52;
        puVar23 = puVar29;
      }
      *(uint *)(param_3 + 0xd8) = uVar22;
      if (uVar21 != uVar22) {
        puVar11 = (uint *)(*(long *)(param_3 + 0xe0) + (long)(int)uVar21 * 4);
        _bzero(puVar11,((long)(int)uVar22 - (long)(int)uVar21) * 4);
      }
    }
    uVar21 = uVar26 * 3;
    puVar38 = (undefined *)(ulong)uVar21;
    puVar52 = (uint *)(param_3 + 0xe8);
    puVar29 = (undefined *)(ulong)*puVar52;
    if ((int)*puVar52 < (int)uVar21) {
      if (*(int *)(param_3 + 0xec) < (int)uVar21) {
        puVar11 = puVar52;
        FUN_109311970();
        puVar29 = (undefined *)(ulong)*puVar52;
        puVar23 = puVar38;
      }
      *(uint *)(param_3 + 0xe8) = uVar21;
      uVar22 = (uint)puVar29;
      if (uVar22 != uVar21) {
        puVar11 = (uint *)(*(long *)(param_3 + 0xf0) + (long)(int)uVar22 * 4);
        puVar29 = (undefined *)(((long)(int)uVar21 - (long)(int)uVar22) * 4);
        _bzero();
      }
    }
    lVar54 = 0;
    lVar35 = 0x20;
    lVar50 = 8;
    iVar57 = 2;
    uVar28 = 0;
    do {
      iVar71 = *(int *)(*(long *)(param_2 + 0xe) + lVar54);
      if (lVar35 == 0x20) {
        fStack_170 = *(float *)(param_3 + 0x108);
        **(float **)(param_3 + 0xd0) = **(float **)(param_3 + 0x30) * fStack_170;
        pfVar15 = *(float **)(param_3 + 0x50);
      }
      else {
        fStack_170 = *(float *)(*(long *)(param_3 + 0xd0) + (long)iVar71 * 4);
        *(float *)(*(long *)(param_3 + 0xd0) + lVar54) =
             *(float *)(*(long *)(param_3 + 0x30) + lVar54) * fStack_170;
        pfVar15 = (float *)(*(long *)(param_3 + 0xe0) + (long)iVar71 * 0x24);
      }
      fVar72 = *pfVar15;
      fVar74 = pfVar15[1];
      fVar146 = pfVar15[3];
      fVar88 = pfVar15[4];
      fVar148 = pfVar15[2];
      fVar58 = pfVar15[5];
      uVar60 = *(undefined8 *)(pfVar15 + 6);
      ppuVar16 = &PTR_PTR_1132d6d90;
      if (*(undefined ***)(param_2 + 0x46) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(param_2 + 0x46);
      }
      iVar51 = (int)uVar28;
      pfVar12 = (float *)(ppuVar16[4] + uVar28 * 4);
      fStack_d0 = *pfVar12;
      fStack_c4 = pfVar12[1];
      fStack_b8 = pfVar12[2];
      fStack_cc = pfVar12[4];
      fStack_c0 = pfVar12[5];
      fStack_b4 = pfVar12[6];
      fStack_c8 = pfVar12[8];
      fStack_bc = pfVar12[9];
      fVar147 = pfVar15[8];
      fStack_b0 = pfVar12[10];
      if (iVar57 < *(int *)(param_3 + 0x58)) {
        uVar78 = *(undefined8 *)((float *)(*(long *)(param_3 + 0x60) + lVar50) + -2);
        fVar75 = *(float *)(*(long *)(param_3 + 0x60) + lVar50);
        fVar76 = (float)uVar78;
        fVar118 = (float)((ulong)uVar78 >> 0x20);
        fVar89 = SQRT(fVar76 * fVar76 + fVar118 * fVar118 + fVar75 * fVar75) + 1e-06;
        fVar76 = fVar76 / fVar89;
        fVar118 = fVar118 / fVar89;
        lStack_1a0 = CONCAT44(fVar118,fVar76);
        lStack_198 = 0;
        fStack_1b0 = fVar75 / fVar89;
        lStack_1a8 = 0;
        uVar78 = ___sincosf_stret();
        fVar77 = (float)((ulong)uVar78 >> 0x20);
        fVar73 = (float)uVar78;
        auVar106._0_4_ = fVar76 * fVar73;
        auVar106._4_4_ = fVar118 * fVar73;
        auVar106._8_8_ = 0;
        fVar135 = 1.0 - fVar77;
        fVar136 = fVar76 * fVar135;
        auVar139._4_4_ = fVar118;
        auVar139._0_4_ = fStack_1b0;
        auVar139._8_8_ = 0;
        auVar83 = NEON_rev64(auVar139,4);
        fVar75 = fVar136 * fStack_1b0;
        fVar89 = fVar136 * auVar83._0_4_;
        uVar119 = (undefined1)((uint)fVar89 >> 8);
        uVar120 = (undefined1)((uint)fVar89 >> 0x10);
        uVar121 = (undefined1)((uint)fVar89 >> 0x18);
        fStack_f0 = fVar118 * fVar135 * fVar118;
        uVar122 = (undefined1)((uint)fStack_f0 >> 8);
        uVar123 = (undefined1)((uint)fStack_f0 >> 0x10);
        uVar124 = (undefined1)((uint)fStack_f0 >> 0x18);
        fStack_ec = fVar118 * fVar135 * auVar83._4_4_;
        uVar125 = (undefined1)((uint)fStack_ec >> 8);
        uVar126 = (undefined1)((uint)fStack_ec >> 0x10);
        uVar127 = (undefined1)((uint)fStack_ec >> 0x18);
        auVar139 = NEON_ext(auVar106,auVar106,4,1);
        fStack_f8 = fVar75 - auVar139._0_4_;
        fStack_f4 = fVar89 - fStack_1b0 * fVar73;
        fStack_e0 = fVar77 + fVar135 * fStack_1b0 * fStack_1b0;
        fStack_100 = fVar77 + fVar76 * fVar136;
        fStack_fc = fStack_1b0 * fVar73 + fVar118 * fVar136;
        auVar83[4] = SUB41(fVar89,0);
        auVar83._0_4_ = fVar75;
        auVar83[5] = uVar119;
        auVar83[6] = uVar120;
        auVar83[7] = uVar121;
        auVar83[8] = SUB41(fStack_f0,0);
        auVar83[9] = uVar122;
        auVar83[10] = uVar123;
        auVar83[0xb] = uVar124;
        auVar83[0xc] = SUB41(fStack_ec,0);
        auVar83[0xd] = uVar125;
        auVar83[0xe] = uVar126;
        auVar83[0xf] = uVar127;
        auVar145[4] = SUB41(fVar89,0);
        auVar145._0_4_ = fVar75;
        auVar145[5] = uVar119;
        auVar145[6] = uVar120;
        auVar145[7] = uVar121;
        auVar145[8] = SUB41(fStack_f0,0);
        auVar145[9] = uVar122;
        auVar145[10] = uVar123;
        auVar145[0xb] = uVar124;
        auVar145[0xc] = SUB41(fStack_ec,0);
        auVar145[0xd] = uVar125;
        auVar145[0xe] = uVar126;
        auVar145[0xf] = uVar127;
        auVar83 = NEON_ext(auVar83,auVar145,0xc,1);
        uVar78 = NEON_ext(CONCAT44(auVar83._4_4_ + auVar106._4_4_,auVar83._0_4_ + auVar106._0_4_),
                          CONCAT44(auVar83._4_4_ - auVar106._4_4_,auVar83._0_4_ - auVar106._0_4_),4,
                          1);
        fStack_e8 = (float)uVar78;
        fStack_e4 = (float)((ulong)uVar78 >> 0x20);
        fStack_f0 = fStack_f0 + fVar77;
        fStack_ec = fStack_ec + auVar139._12_4_;
      }
      else {
        FUN_10937e740(auStack_a8,&UNK_10f56b5bf);
        puVar24 = auStack_a8;
        puVar11 = (uint *)0x1;
        puVar29 = &UNK_10f56aeeb;
        puVar23 = &UNK_10f56b5ae;
        lVar41 = 0x162;
        FUN_109388c6c();
        fStack_f8 = 0.0;
        fStack_f4 = 0.0;
        fStack_100 = 1.0;
        fStack_fc = 0.0;
        fStack_e8 = 0.0;
        fStack_e4 = 0.0;
        fStack_f0 = 1.0;
        fStack_ec = 0.0;
        fStack_e0 = 1.0;
      }
      iVar25 = (int)param_8;
      pfVar15 = (float *)(*(long *)(param_3 + 0xe0) + lVar35);
      fVar75 = fVar72 * fStack_d0 + fVar74 * fStack_cc + fVar148 * fStack_c8;
      fVar89 = fVar146 * fStack_d0 + fVar88 * fStack_cc + fVar58 * fStack_c8;
      fVar76 = fVar72 * fStack_c4 + fVar74 * fStack_c0 + fVar148 * fStack_bc;
      fVar77 = fVar146 * fStack_c4 + fVar88 * fStack_c0 + fVar58 * fStack_bc;
      fVar144 = (float)((ulong)uVar60 >> 0x20);
      fVar118 = fVar72 * fStack_b8 + fVar74 * fStack_b4 + fVar148 * fStack_b0;
      fVar135 = fVar146 * fStack_b8 + fVar88 * fStack_b4 + fVar58 * fStack_b0;
      fVar136 = (float)uVar60;
      fVar73 = fStack_b4 * fVar144 + fStack_b8 * fVar136 + fStack_b0 * fVar147;
      *(ulong *)(pfVar15 + -8) =
           CONCAT44(fVar75 * fStack_f4 + fVar76 * fStack_f0 + fVar118 * fStack_ec,
                    fVar75 * fStack_100 + fVar76 * fStack_fc + fVar118 * fStack_f8);
      *(ulong *)(pfVar15 + -4) =
           CONCAT44(fVar89 * fStack_e8 + fVar77 * fStack_e4 + fVar135 * fStack_e0,
                    fVar89 * fStack_f4 + fVar77 * fStack_f0 + fVar135 * fStack_ec);
      *(ulong *)(pfVar15 + -6) =
           CONCAT44(fVar89 * fStack_100 + fVar77 * fStack_fc + fVar135 * fStack_f8,
                    fVar75 * fStack_e8 + fVar76 * fStack_e4 + fVar118 * fStack_e0);
      uVar60 = NEON_rev64(uVar60,4);
      fVar75 = fStack_cc * (float)uVar60 + fStack_d0 * fVar136 + fStack_c8 * fVar147;
      fVar89 = fStack_c4 * (float)((ulong)uVar60 >> 0x20) + fStack_c0 * fVar144 +
               fStack_bc * fVar147;
      uVar60 = NEON_rev64(CONCAT44(fVar89,fVar75),4);
      *(ulong *)(pfVar15 + -2) =
           CONCAT44(fStack_f4 * (float)((ulong)uVar60 >> 0x20) + fStack_f0 * fVar89 +
                    fStack_ec * fVar73,
                    fStack_fc * (float)uVar60 + fStack_100 * fVar75 + fStack_f8 * fVar73);
      *pfVar15 = fStack_e8 * fVar75 + fStack_e4 * fVar89 + fVar73 * fStack_e0;
      if (lVar35 == 0x20) {
        puVar19 = *(undefined8 **)(param_3 + 0x40);
        lVar55 = *(long *)(param_3 + 0xf0);
      }
      else {
        lVar55 = *(long *)(param_3 + 0xf0);
        puVar19 = (undefined8 *)(lVar55 + (long)iVar71 * 0xc);
      }
      fStack_108 = *(float *)(puVar19 + 1);
      uStack_110 = *puVar19;
      ppuVar16 = &PTR_PTR_1132d6d90;
      if (*(undefined ***)(param_2 + 0x46) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(param_2 + 0x46);
      }
      puVar38 = ppuVar16[4];
      fVar75 = *(float *)(puVar38 + (long)iVar51 * 4 + 0x1c);
      fVar89 = *(float *)(puVar38 + (long)iVar51 * 4 + 0x2c);
      fVar73 = *(float *)(puVar38 + (long)iVar51 * 4 + 0xc) * fStack_170;
      fVar72 = fVar72 * fVar73 + fVar74 * fStack_170 * fVar75 + fVar148 * fStack_170 * fVar89;
      fVar148 = fVar146 * fVar73 + fVar88 * fStack_170 * fVar75 + fVar58 * fStack_170 * fVar89;
      uStack_98 = CONCAT44(fVar148,fVar72);
      fStack_90 = (*(float *)(puVar38 + (long)iVar51 * 4 + 0xc) * fVar136 + fVar75 * fVar144 +
                  fVar147 * fVar89) * fStack_170;
      puStack_88 = &uStack_110;
      *(ulong *)((float *)(lVar55 + lVar50) + -2) =
           CONCAT44((float)((ulong)uStack_110 >> 0x20) + fVar148,(float)uStack_110 + fVar72);
      lVar54 = lVar54 + 4;
      iVar27 = iVar27 + 1;
      lVar35 = lVar35 + 0x24;
      *(float *)(lVar55 + lVar50) = fStack_108 + fStack_90;
      lVar50 = lVar50 + 0xc;
      iVar57 = iVar57 + 3;
      uVar28 = (ulong)(iVar51 + 0x10);
      puStack_a0 = &uStack_98;
    } while (iVar27 < (int)uVar26);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_458 = &PTR_FUN_110aefb90;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_430 = 0;
  fStack_460 = 0.0;
  iStack_478 = 0;
  iStack_474 = 0;
  uStack_480 = 0;
  iStack_47c = 0;
  uStack_468 = 0;
  iStack_470 = 0;
  fStack_46c = 0.0;
  if ((*(byte *)(lStack_198 + 0x10) >> 2 & 1) == 0) {
    if ((*(byte *)(lStack_190 + 0x10) >> 1 & 1) != 0) {
      pppuVar56 = *(undefined ****)(lStack_190 + 0xb8);
      if (pppuVar56 != &ppuStack_458) {
        func_0x000109340dd8(&ppuStack_458);
        func_0x000109340c8c(&ppuStack_458,pppuVar56);
      }
      fStack_550 = 1.0 / (float)*(int *)(lStack_198 + 0x70);
      uVar60 = CONCAT44((float)((ulong)uStack_440 >> 0x20) * fStack_550,
                        (float)uStack_440 * fStack_550);
      goto LAB_1093cafb8;
    }
  }
  else {
    ppuVar37 = *(undefined ***)(*(long *)(lStack_198 + 0x40) + 0x18);
    ppuVar16 = &PTR_PTR_1132d8bd0;
    if (ppuVar37 != (undefined **)0x0) {
      ppuVar16 = ppuVar37;
    }
    ppuVar33 = *(undefined ***)(*(long *)(lStack_198 + 0x40) + 0x18);
    ppuVar37 = &PTR_PTR_1132d8bd0;
    if (ppuVar33 != (undefined **)0x0) {
      ppuVar37 = ppuVar33;
    }
    uStack_440 = CONCAT44(*(undefined4 *)((long)ppuVar37 + 0x1c),*(undefined4 *)(ppuVar16 + 3));
    uStack_448 = 3;
    uVar60 = 0;
    fStack_550 = 0.0;
LAB_1093cafb8:
    uVar78 = NEON_scvtf(CONCAT44((int)fStack_1b0 + -1,iVar25 + -1),4);
    ppuVar16 = &PTR_PTR_1132d70f0;
    if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
      ppuVar16 = *(undefined ***)(lStack_198 + 0x30);
    }
    ppuVar37 = &PTR_PTR_1132d6ef0;
    if ((undefined **)ppuVar16[0x21] != (undefined **)0x0) {
      ppuVar37 = (undefined **)ppuVar16[0x21];
    }
    uStack_480 = *(uint *)((long)ppuVar37 + 0x3c);
    uVar28 = (ulong)uStack_480;
    fStack_560 = (float)uVar78;
    fStack_55c = (float)((ulong)uVar78 >> 0x20);
    uVar79 = NEON_fminnm(uVar60,uVar78,4);
    uVar79 = CONCAT44(-(uint)(0.0 <= (float)((ulong)uVar60 >> 0x20)),-(uint)(0.0 <= (float)uVar60))
             & uVar79;
    fVar148 = (float)uVar79;
    iVar57 = (int)fVar148;
    fVar72 = (float)(uVar79 >> 0x20);
    iVar71 = (int)fVar72;
    fVar146 = (float)iVar57;
    iVar27 = iVar57 + iVar25 * iVar71;
    iStack_47c = iVar27 * uStack_480;
    uVar26 = uStack_480;
    if (fVar148 == fVar146) {
      uVar26 = 0;
    }
    iStack_478 = uVar26 + iStack_47c;
    iVar51 = iVar25;
    if (fVar72 == (float)iVar71) {
      iVar51 = 0;
    }
    iVar51 = iVar51 + iVar27;
    iStack_474 = iVar51 * uStack_480;
    iStack_470 = iStack_474 + uVar26;
    uVar60 = NEON_scvtf(CONCAT44(iVar71 + 1,iVar57 + 1),4);
    fVar58 = (float)uVar60 - fVar148;
    fVar72 = (float)((ulong)uVar60 >> 0x20) - fVar72;
    fVar147 = fVar58 * fVar72;
    uVar60 = NEON_fmov(0x3f800000,4);
    fVar74 = (float)uVar60 - fVar58;
    fVar88 = (float)((ulong)uVar60 >> 0x20) - fVar72;
    uVar60 = NEON_rev64(CONCAT44(fVar72,fVar58),4);
    uVar60 = CONCAT44(fVar88 * (float)((ulong)uVar60 >> 0x20),fVar74 * (float)uVar60);
    fVar74 = fVar74 * fVar88;
    uStack_468 = uVar60;
    fStack_460 = fVar74;
    fStack_46c = fVar147;
    if (uStack_480 == 0) {
      lVar50 = 0;
      lVar35 = 0;
    }
    else {
      if ((int)uStack_480 < 0) {
        FUN_1092cc18c();
        goto LAB_1093cef5c;
      }
      lVar50 = uVar28 * 4;
      __Znwm();
      _bzero();
      lVar35 = lVar50 + uVar28 * 4;
    }
    FUN_1093e3a78(puVar24,&uStack_480,lVar50);
    ppuVar16 = &PTR_PTR_1132d70f0;
    if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
      ppuVar16 = *(undefined ***)(lStack_198 + 0x30);
    }
    if (*(int *)(ppuVar16 + 0x10) == 0) {
LAB_1093cb19c:
      lStack_620 = 0;
      lVar54 = 0;
    }
    else {
      puVar38 = ppuVar16[0xf];
      ppuVar16 = ppuVar16 + 0xf;
      if (((ulong)puVar38 & 1) != 0) {
        ppuVar16 = (undefined **)(puVar38 + 7);
      }
      uVar26 = *(uint *)(*ppuVar16 + 0x3c);
      if (uVar26 == 0) goto LAB_1093cb19c;
      iStack_47c = uVar26 * iVar27;
      uVar21 = uVar26;
      if (fVar148 == fVar146) {
        uVar21 = 0;
      }
      iStack_478 = iStack_47c + uVar21;
      iStack_474 = uVar26 * iVar51;
      iStack_470 = iStack_474 + uVar21;
      uStack_480 = uVar26;
      if ((int)uVar26 < 0) {
        uStack_468 = uVar60;
        fStack_460 = fVar74;
        fStack_46c = fVar147;
        FUN_1092cc18c();
        goto LAB_1093cef5c;
      }
      lVar54 = (ulong)uVar26 * 4;
      uStack_468 = uVar60;
      fStack_460 = fVar74;
      fStack_46c = fVar147;
      __Znwm();
      _bzero();
      FUN_1093e3a78(param_6,&uStack_480,lVar54);
      lStack_620 = lVar54 + (ulong)uVar26 * 4;
    }
    lStack_498 = 0;
    uStack_490 = 0;
    lStack_488 = 0;
    if (*(char *)(lStack_198 + 0x57) == '\x01') {
      iVar57 = *(int *)(lStack_190 + 0x20);
      ppuVar16 = &PTR_PTR_1132d1810;
      if (*(undefined ***)(lStack_198 + 0x38) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(lStack_198 + 0x38);
      }
      if (iVar57 == *(int *)(ppuVar16 + 0x10)) {
        if (*(int *)(lStack_190 + 0x158) == 3) {
          if (iVar57 == 0) {
            pfVar47 = (float *)0x0;
            pfVar12 = (float *)0x0;
          }
          else {
            if (iVar57 < 0) {
              FUN_1092cc18c();
              goto LAB_1093cef5c;
            }
            pfVar12 = (float *)((long)(iVar57 * 9) << 2);
            __Znwm();
            pfVar47 = pfVar12 + iVar57 * 9;
          }
          func_0x000104becb10(&lStack_498,iVar57);
          piVar13 = (int *)0x18;
          __Znwm();
          uStack_388 = piVar13 + 6;
          piVar13[2] = 0;
          piVar13[3] = 0;
          piVar13[4] = 0;
          piVar13[5] = 0;
          piVar13[0] = 0;
          piVar13[1] = 0;
          fStack_298 = 0.0;
          fStack_294 = 0.0;
          fStack_2a0 = 1.0;
          fStack_29c = 0.0;
          uStack_290._0_4_ = 1.0;
          uStack_290._4_4_ = 0.0;
          pfVar15 = pfVar12;
          uStack_390 = piVar13;
          uStack_380 = uStack_388;
          if (0 < *(int *)(lStack_190 + 0x20)) {
            iVar71 = 0;
            lVar55 = 0;
            uVar26 = iVar57 * 6;
            lVar53 = 8;
            do {
              uVar28 = *(ulong *)(lStack_190 + 0x18);
              puVar31 = (ulong *)(lStack_190 + 0x18);
              if ((uVar28 & 1) != 0) {
                puVar31 = (ulong *)(uVar28 + lVar53 + -1);
              }
              uVar79 = *puVar31;
              ppuStack_528 = &PTR_FUN_110aefb90;
              fStack_520 = 0.0;
              uStack_51c._0_4_ = 0;
              uStack_510 = 0.0;
              uStack_508 = (undefined4 *)0x0;
              fStack_514 = 0.0;
              uVar28 = uStack_500 >> 8;
              uStack_500 = uStack_500 & 0xffffffffffffff00;
              uStack_51c._4_4_ = *(uint *)(uVar79 + 0x10);
              fVar72 = 0.0;
              fVar58 = 0.0;
              if ((uStack_51c._4_4_ & 0x1f) != 0) {
                fVar58 = 0.0;
                if ((uStack_51c._4_4_ & 1) != 0) {
                  uStack_510 = (double)(ulong)(uint)*(float *)(uVar79 + 0x18);
                  fVar58 = *(float *)(uVar79 + 0x18);
                }
                fVar72 = 0.0;
                if ((uStack_51c._4_4_ >> 1 & 1) != 0) {
                  uStack_510 = (double)CONCAT44(*(float *)(uVar79 + 0x1c),(float)uStack_510);
                  fVar72 = *(float *)(uVar79 + 0x1c);
                }
                if ((uStack_51c._4_4_ >> 2 & 1) != 0) {
                  uStack_508 = (undefined4 *)(ulong)*(uint *)(uVar79 + 0x20);
                }
                if ((uStack_51c._4_4_ >> 3 & 1) != 0) {
                  uStack_508 = (undefined4 *)
                               CONCAT44(*(undefined4 *)(uVar79 + 0x24),(float)uStack_508);
                }
                if ((uStack_51c._4_4_ >> 4 & 1) != 0) {
                  uStack_500 = CONCAT71((int7)uVar28,*(undefined1 *)(uVar79 + 0x28));
                }
              }
              if ((*(ulong *)(uVar79 + 8) & 1) != 0) {
                func_0x00010b4d197c(&fStack_520,(*(ulong *)(uVar79 + 8) & 0xfffffffffffffffe) + 8);
                fVar72 = uStack_510._4_4_;
                fVar58 = (float)uStack_510;
              }
              bVar10 = false;
              if (0.0 <= fVar58) {
                fVar58 = fVar58 * fStack_550;
                bVar8 = false;
                bVar9 = true;
                if (0.0 <= fVar72) {
                  bVar8 = false;
                  bVar9 = true;
                  if (!NAN(fVar58) && !NAN(fStack_560)) {
                    bVar8 = fVar58 == fStack_560;
                    bVar9 = fStack_560 <= fVar58;
                  }
                }
                if (!bVar9 || bVar8) {
                  bVar10 = fVar72 * fStack_550 <= fStack_55c;
                }
              }
              if (uStack_490 == lStack_488 * 0x40) {
                if ((long)(uStack_490 + 1) < 0) goto LAB_1093cef18;
                if (uStack_490 < 0x3fffffffffffffff) {
                  uVar28 = lStack_488 * 0x80;
                  uVar79 = (uStack_490 & 0x3fffffffffffffc0) + 0x40;
                  if (uVar28 < uVar79 || uVar28 - uVar79 == 0) {
                    uVar28 = uVar79;
                  }
                }
                else {
                  uVar28 = 0x7fffffffffffffff;
                }
                func_0x000104becb10(&lStack_498,uVar28);
              }
              uVar79 = uStack_490 >> 6;
              uVar28 = 1L << (uStack_490 & 0x3f);
              if (bVar10) {
                uVar28 = *(ulong *)(lStack_498 + uVar79 * 8) | uVar28;
              }
              else {
                uVar28 = *(ulong *)(lStack_498 + uVar79 * 8) & (uVar28 ^ 0xffffffffffffffff);
              }
              *(ulong *)(lStack_498 + uVar79 * 8) = uVar28;
              *uStack_390 = iVar71;
              uStack_390[3] = iVar71 + 3;
              uStack_390[4] = iVar71 + 4;
              uStack_390[1] = iVar71 + 1;
              uStack_390[2] = iVar71 + 2;
              uStack_390[5] = iVar71 + 5;
              fVar72 = SUB84(uStack_510,0) * fStack_550;
              fVar58 = (float)((ulong)uStack_510 >> 0x20) * fStack_550;
              uVar28 = NEON_fminnm(CONCAT44(fVar58,fVar72),uVar78,4);
              uVar28 = CONCAT44(-(uint)(0.0 <= fVar58),-(uint)(0.0 <= fVar72)) & uVar28;
              fVar72 = (float)uVar28;
              fVar58 = (float)(uVar28 >> 0x20);
              iVar57 = (int)fVar72 + iVar25 * (int)fVar58;
              uVar21 = uVar26;
              if (fVar72 == (float)(int)fVar72) {
                uVar21 = 0;
              }
              iVar2 = iVar25;
              if (fVar58 == (float)(int)fVar58) {
                iVar2 = 0;
              }
              iStack_47c = iVar57 * uVar26;
              iStack_478 = iStack_47c + uVar21;
              iStack_474 = (iVar2 + iVar57) * uVar26;
              iStack_470 = iStack_474 + uVar21;
              fVar75 = (float)((int)fVar72 + 1) - fVar72;
              fVar88 = (float)((int)fVar58 + 1) - fVar58;
              fStack_46c = fVar88 * fVar75;
              fStack_460 = (1.0 - fVar88) * (1.0 - fVar75);
              uStack_468 = CONCAT44((1.0 - fVar88) * fVar75,(1.0 - fVar75) * fVar88);
              uStack_490 = uStack_490 + 1;
              uStack_480 = uVar26;
              FUN_1093e3bfc(&fStack_2f0,puVar11,&uStack_480,&uStack_390);
              puVar19 = (undefined8 *)CONCAT44(fStack_2ec,fStack_2f0);
              uVar138 = *puVar19;
              fStack_298 = *(float *)(puVar19 + 1);
              fVar75 = (float)uVar138;
              fVar89 = (float)((ulong)uVar138 >> 0x20);
              fVar88 = fVar75 * fVar75 + fVar89 * fVar89 + fStack_298 * fStack_298;
              if (0.0 < fVar88) {
                fVar88 = SQRT(fVar88);
                uVar138 = CONCAT44(fVar89 / fVar88,fVar75 / fVar88);
                fStack_298 = fStack_298 / fVar88;
              }
              uVar102 = NEON_rev64(uVar138,4);
              fVar89 = (float)((ulong)puVar19[2] >> 0x20);
              fVar88 = fStack_298 * *(float *)((long)puVar19 + 0xc);
              fVar75 = (float)puVar19[2];
              dVar5 = (double)CONCAT17((char)((uint)fVar88 >> 0x18),
                                       CONCAT16((char)((uint)fVar88 >> 0x10),
                                                CONCAT15((char)((uint)fVar88 >> 8),
                                                         CONCAT14(SUB41(fVar88,0),
                                                                  (float)uVar102 * fVar89)))) -
                      (double)CONCAT44((float)((ulong)uVar102 >> 0x20) * fVar89,fStack_298 * fVar75)
              ;
              uVar119 = SUB81(dVar5,0);
              uVar120 = (undefined1)((ulong)dVar5 >> 8);
              uVar121 = (undefined1)((ulong)dVar5 >> 0x10);
              uVar122 = (undefined1)((ulong)dVar5 >> 0x18);
              uVar123 = (undefined1)((ulong)dVar5 >> 0x20);
              uVar124 = (undefined1)((ulong)dVar5 >> 0x28);
              uVar125 = (undefined1)((ulong)dVar5 >> 0x30);
              uVar126 = (undefined1)((ulong)dVar5 >> 0x38);
              fVar73 = (float)uVar138;
              fStack_29c = (float)((ulong)uVar138 >> 0x20);
              uStack_280._0_4_ = fVar73 * fVar75 - *(float *)((long)puVar19 + 0xc) * fStack_29c;
              fVar88 = SUB84(dVar5,0);
              fVar75 = (float)((ulong)dVar5 >> 0x20);
              fVar89 = fVar88 * fVar88 + fVar75 * fVar75 + (float)uStack_280 * (float)uStack_280;
              if (0.0 < fVar89) {
                fVar89 = SQRT(fVar89);
                fVar88 = fVar88 / fVar89;
                uVar119 = SUB41(fVar88,0);
                uVar120 = (undefined1)((uint)fVar88 >> 8);
                uVar121 = (undefined1)((uint)fVar88 >> 0x10);
                uVar122 = (undefined1)((uint)fVar88 >> 0x18);
                fVar75 = fVar75 / fVar89;
                uVar123 = SUB41(fVar75,0);
                uVar124 = (undefined1)((uint)fVar75 >> 8);
                uVar125 = (undefined1)((uint)fVar75 >> 0x10);
                uVar126 = (undefined1)((uint)fVar75 >> 0x18);
                uStack_280._0_4_ = (float)uStack_280 / fVar89;
              }
              fVar75 = fStack_298 *
                       (float)CONCAT13(uVar126,CONCAT12(uVar125,CONCAT11(uVar124,uVar123))) -
                       fStack_29c * (float)uStack_280;
              uStack_290._0_4_ =
                   (float)uStack_280 * fVar73 -
                   fStack_298 * (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,uVar119)))
              ;
              uStack_290._4_4_ =
                   fStack_29c * (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,uVar119)))
                   - fVar73 * (float)CONCAT13(uVar126,CONCAT12(uVar125,CONCAT11(uVar124,uVar123)));
              fVar88 = (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,uVar119)));
              fStack_288 = (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,uVar119)));
              fStack_284 = (float)(CONCAT17(uVar126,CONCAT16(uVar125,CONCAT15(uVar124,CONCAT14(
                                                  uVar123,fStack_288)))) >> 0x20);
              fStack_2e8 = fStack_2f0;
              fStack_2e4 = fStack_2ec;
              fStack_2a0 = fVar73;
              fStack_294 = fVar75;
              __ZdlPv();
              if (((*(char *)(lStack_198 + 100) == '\x01') && (*(int *)(lStack_198 + 0x48) == 1)) &&
                 (0.0 < (float)uStack_508)) {
                ppuVar16 = &PTR_PTR_1132d8bd0;
                if (*(undefined ***)(lStack_1a8 + 0x18) != (undefined **)0x0) {
                  ppuVar16 = *(undefined ***)(lStack_1a8 + 0x18);
                }
                ppuVar37 = &PTR_PTR_1132d8bd0;
                if (*(undefined ***)(lStack_1a8 + 0x20) != (undefined **)0x0) {
                  ppuVar37 = *(undefined ***)(lStack_1a8 + 0x20);
                }
                fVar76 = (((fVar72 * (float)*(int *)(lStack_198 + 0x70) + 0.5) -
                          SUB84(ppuVar37[3],0)) * (float)uStack_508) / SUB84(ppuVar16[3],0);
                fVar72 = (((fVar58 * (float)*(int *)(lStack_198 + 0x70) + 0.5) -
                          (float)((ulong)ppuVar37[3] >> 0x20)) * (float)uStack_508) /
                         (float)((ulong)ppuVar16[3] >> 0x20);
                uStack_510 = (double)CONCAT44(fVar72,fVar76);
                fVar58 = SQRT((float)uStack_508 * (float)uStack_508 + fVar76 * fVar76);
                fVar89 = SQRT((float)uStack_508 * (float)uStack_508 + fVar72 * fVar72);
                fVar76 = fVar76 / fVar58;
                fVar58 = (float)uStack_508 / fVar58;
                fVar118 = (float)uStack_508 / fVar89;
                fVar89 = -fVar72 / fVar89;
                fVar72 = fVar89 * fVar76;
                fVar135 = -(fVar58 * fVar89);
                fVar144 = -fVar76 * fVar118;
                fVar77 = fVar58 * fVar118;
                fVar136 = fVar89 * fStack_29c;
                fStack_2a0 = fVar58 * fVar73 + fStack_29c * 0.0 + fVar76 * fStack_298;
                fStack_29c = fVar72 * fVar73 + fVar118 * fStack_29c + fVar135 * fStack_298;
                uVar138 = CONCAT44(fStack_29c,fStack_2a0);
                fStack_2f0 = fVar136 + fVar73 * fVar144 + fStack_298 * fVar77;
                fStack_2ec = fVar58 * fVar75 + (float)uStack_290 * 0.0 + fVar76 * uStack_290._4_4_;
                fStack_2e8 = fVar72 * fVar75 + fVar118 * (float)uStack_290 +
                             fVar135 * uStack_290._4_4_;
                uStack_51c._4_4_ = uStack_51c._4_4_ | 3;
                fStack_2e4 = fVar144 * fVar75 + (float)uStack_290 * fVar89 +
                             uStack_290._4_4_ * fVar77;
                fStack_288 = fVar58 * fVar88 + fStack_284 * 0.0 + fVar76 * (float)uStack_280;
                fVar72 = fVar72 * fVar88 + fVar118 * fStack_284 + fVar135 * (float)uStack_280;
                uStack_280._0_4_ =
                     fVar144 * fVar88 + fStack_284 * fVar89 + fVar77 * (float)uStack_280;
                fStack_298 = fStack_2f0;
                fStack_294 = fStack_2ec;
                uStack_290._0_4_ = fStack_2e8;
                uStack_290._4_4_ = fStack_2e4;
                fStack_284 = fVar72;
                if (pfVar47 <= pfVar12) goto LAB_1093cbcc8;
LAB_1093cc138:
                pfVar49 = pfVar12 + 1;
                *pfVar12 = (float)uVar138;
                pfVar14 = pfVar15;
                if (pfVar47 <= pfVar49) goto LAB_1093cbd48;
LAB_1093cc144:
                pfVar48 = pfVar49 + 1;
                *pfVar49 = fStack_294;
                pfVar12 = pfVar15;
                if (pfVar48 < pfVar47) goto LAB_1093cc154;
                goto LAB_1093cbdc4;
              }
              if (pfVar12 < pfVar47) goto LAB_1093cc138;
LAB_1093cbcc8:
              uVar28 = ((long)pfVar12 - (long)pfVar15 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) {
LAB_1093ceecc:
                FUN_1092cc18c();
                goto LAB_1093cef5c;
              }
              uVar79 = (long)pfVar47 - (long)pfVar15 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar15)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) {
LAB_1093ceed8:
                func_0x000104c4f740();
                goto LAB_1093cef5c;
              }
              pfVar14 = (float *)(uVar79 << 2);
              __Znwm();
              puVar36 = (undefined4 *)((long)pfVar14 + ((long)pfVar12 - (long)pfVar15));
              pfVar47 = pfVar14 + uVar79;
              pfVar49 = (float *)(puVar36 + 1);
              *puVar36 = (int)uVar138;
              _memcpy();
              if (pfVar15 != (float *)0x0) {
                __ZdlPv(pfVar15);
              }
              pfVar15 = pfVar14;
              if (pfVar49 < pfVar47) goto LAB_1093cc144;
LAB_1093cbd48:
              uVar28 = ((long)pfVar49 - (long)pfVar14 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar14 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar14)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar12 = (float *)((long)pfVar15 + ((long)pfVar49 - (long)pfVar14));
              pfVar47 = pfVar15 + uVar79;
              pfVar48 = pfVar12 + 1;
              *pfVar12 = fStack_294;
              _memcpy();
              pfVar12 = pfVar15;
              if (pfVar14 == (float *)0x0) {
                if (pfVar47 <= pfVar48) goto LAB_1093cbdc4;
LAB_1093cc154:
                pfVar49 = pfVar48 + 1;
                *pfVar48 = fStack_288;
                pfVar14 = pfVar15;
                if (pfVar49 < pfVar47) goto LAB_1093cc164;
                goto LAB_1093cbe40;
              }
              __ZdlPv(pfVar14);
              if (pfVar48 < pfVar47) goto LAB_1093cc154;
LAB_1093cbdc4:
              uVar28 = ((long)pfVar48 - (long)pfVar12 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar12 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar12)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar14 = (float *)((long)pfVar15 + ((long)pfVar48 - (long)pfVar12));
              pfVar47 = pfVar15 + uVar79;
              pfVar49 = pfVar14 + 1;
              *pfVar14 = fStack_288;
              _memcpy();
              pfVar14 = pfVar15;
              if (pfVar12 == (float *)0x0) {
                if (pfVar47 <= pfVar49) goto LAB_1093cbe40;
LAB_1093cc164:
                pfVar48 = pfVar49 + 1;
                *pfVar49 = fStack_29c;
                pfVar12 = pfVar15;
                if (pfVar48 < pfVar47) goto LAB_1093cc174;
                goto LAB_1093cbebc;
              }
              __ZdlPv(pfVar12);
              if (pfVar49 < pfVar47) goto LAB_1093cc164;
LAB_1093cbe40:
              uVar28 = ((long)pfVar49 - (long)pfVar14 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar14 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar14)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar12 = (float *)((long)pfVar15 + ((long)pfVar49 - (long)pfVar14));
              pfVar47 = pfVar15 + uVar79;
              pfVar48 = pfVar12 + 1;
              *pfVar12 = fStack_29c;
              _memcpy();
              pfVar12 = pfVar15;
              if (pfVar14 == (float *)0x0) {
                if (pfVar47 <= pfVar48) goto LAB_1093cbebc;
LAB_1093cc174:
                pfVar49 = pfVar48 + 1;
                *pfVar48 = (float)uStack_290;
                pfVar14 = pfVar15;
                if (pfVar49 < pfVar47) goto LAB_1093cc184;
                goto LAB_1093cbf38;
              }
              __ZdlPv(pfVar14);
              if (pfVar48 < pfVar47) goto LAB_1093cc174;
LAB_1093cbebc:
              uVar28 = ((long)pfVar48 - (long)pfVar12 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar12 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar12)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar14 = (float *)((long)pfVar15 + ((long)pfVar48 - (long)pfVar12));
              pfVar47 = pfVar15 + uVar79;
              pfVar49 = pfVar14 + 1;
              *pfVar14 = (float)uStack_290;
              _memcpy();
              pfVar14 = pfVar15;
              if (pfVar12 == (float *)0x0) {
                if (pfVar47 <= pfVar49) goto LAB_1093cbf38;
LAB_1093cc184:
                pfVar48 = pfVar49 + 1;
                *pfVar49 = fStack_284;
                pfVar12 = pfVar15;
                if (pfVar48 < pfVar47) goto LAB_1093cc194;
                goto LAB_1093cbfb4;
              }
              __ZdlPv(pfVar12);
              if (pfVar49 < pfVar47) goto LAB_1093cc184;
LAB_1093cbf38:
              uVar28 = ((long)pfVar49 - (long)pfVar14 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar14 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar14)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar12 = (float *)((long)pfVar15 + ((long)pfVar49 - (long)pfVar14));
              pfVar47 = pfVar15 + uVar79;
              pfVar48 = pfVar12 + 1;
              *pfVar12 = fStack_284;
              _memcpy();
              pfVar12 = pfVar15;
              if (pfVar14 == (float *)0x0) {
                if (pfVar47 <= pfVar48) goto LAB_1093cbfb4;
LAB_1093cc194:
                pfVar49 = pfVar48 + 1;
                *pfVar48 = fStack_298;
                pfVar14 = pfVar15;
                if (pfVar49 < pfVar47) goto LAB_1093cc1a4;
                goto LAB_1093cc030;
              }
              __ZdlPv(pfVar14);
              if (pfVar48 < pfVar47) goto LAB_1093cc194;
LAB_1093cbfb4:
              uVar28 = ((long)pfVar48 - (long)pfVar12 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar12 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar12)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar14 = (float *)((long)pfVar15 + ((long)pfVar48 - (long)pfVar12));
              pfVar47 = pfVar15 + uVar79;
              pfVar49 = pfVar14 + 1;
              *pfVar14 = fStack_298;
              _memcpy();
              pfVar14 = pfVar15;
              if (pfVar12 == (float *)0x0) {
                if (pfVar47 <= pfVar49) goto LAB_1093cc030;
LAB_1093cc1a4:
                pfVar12 = pfVar49 + 1;
                *pfVar49 = uStack_290._4_4_;
                if (pfVar47 <= pfVar12) goto LAB_1093cc0ac;
                goto LAB_1093cc1b4;
              }
              __ZdlPv(pfVar12);
              if (pfVar49 < pfVar47) goto LAB_1093cc1a4;
LAB_1093cc030:
              uVar28 = ((long)pfVar49 - (long)pfVar14 >> 2) + 1;
              if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
              uVar79 = (long)pfVar47 - (long)pfVar14 >> 1;
              if (uVar79 <= uVar28) {
                uVar79 = uVar28;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar14)) {
                uVar79 = 0x3fffffffffffffff;
              }
              if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
              pfVar15 = (float *)(uVar79 << 2);
              __Znwm();
              pfVar49 = (float *)((long)pfVar15 + ((long)pfVar49 - (long)pfVar14));
              pfVar47 = pfVar15 + uVar79;
              pfVar12 = pfVar49 + 1;
              *pfVar49 = uStack_290._4_4_;
              _memcpy();
              if (pfVar14 == (float *)0x0) {
                if (pfVar47 <= pfVar12) goto LAB_1093cc0ac;
LAB_1093cc1b4:
                *pfVar12 = (float)uStack_280;
                pfVar14 = pfVar15;
              }
              else {
                __ZdlPv(pfVar14);
                if (pfVar12 < pfVar47) goto LAB_1093cc1b4;
LAB_1093cc0ac:
                uVar28 = ((long)pfVar12 - (long)pfVar15 >> 2) + 1;
                if (uVar28 >> 0x3e != 0) goto LAB_1093ceecc;
                uVar79 = (long)pfVar47 - (long)pfVar15 >> 1;
                if (uVar79 <= uVar28) {
                  uVar79 = uVar28;
                }
                if (0x7ffffffffffffffb < (ulong)((long)pfVar47 - (long)pfVar15)) {
                  uVar79 = 0x3fffffffffffffff;
                }
                if (uVar79 >> 0x3e != 0) goto LAB_1093ceed8;
                pfVar14 = (float *)(uVar79 << 2);
                __Znwm();
                pfVar12 = (float *)((long)pfVar14 + ((long)pfVar12 - (long)pfVar15));
                pfVar47 = pfVar14 + uVar79;
                *pfVar12 = (float)uStack_280;
                _memcpy();
                if (pfVar15 != (float *)0x0) {
                  __ZdlPv(pfVar15);
                }
              }
              pfVar15 = pfVar14;
              pfVar12 = pfVar12 + 1;
              if (((uint)fStack_520 & 1) != 0) {
                func_0x0001053936ac(&fStack_520);
              }
              lVar55 = lVar55 + 1;
              iVar71 = iVar71 + 6;
              lVar53 = lVar53 + 8;
            } while (lVar55 < *(int *)(lStack_190 + 0x20));
            if (uStack_390 == (int *)0x0) goto LAB_1093cc250;
          }
          uStack_388 = uStack_390;
          __ZdlPv();
          goto LAB_1093cc250;
        }
        FUN_10937e740(&ppuStack_528,&UNK_10f56b064);
        FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b018,0x4f0,&ppuStack_528);
      }
      else {
        FUN_10937e740(&ppuStack_528,&UNK_10f56b029);
        FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b018,0x4ec,&ppuStack_528);
      }
      if ((int)fStack_514 < 0) {
        __ZdlPv(ppuStack_528);
      }
      pfStack_5a0 = (float *)0x0;
    }
    else {
      ppuVar16 = &PTR_PTR_1132d70f0;
      if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(lStack_198 + 0x30);
      }
      if (*(char *)(lStack_198 + 0x52) == '\x01') {
        uVar21 = *(uint *)(ppuVar16 + 4);
        uVar28 = (ulong)uVar21;
        uStack_480 = uVar21 * 6;
        iStack_47c = uStack_480 * iVar27;
        uVar26 = uStack_480;
        if (fVar148 == fVar146) {
          uVar26 = 0;
        }
        iStack_478 = iStack_47c + uVar26;
        iStack_474 = uStack_480 * iVar51;
        iStack_470 = iStack_474 + uVar26;
        if (uVar21 == 0) {
          lVar55 = 0;
          uStack_468 = uVar60;
          fStack_460 = fVar74;
          fStack_46c = fVar147;
        }
        else {
          if ((int)uVar21 < 0) {
            uStack_468 = uVar60;
            fStack_460 = fVar74;
            fStack_46c = fVar147;
            FUN_1092cc18c();
            goto LAB_1093cef5c;
          }
          lVar55 = (ulong)uStack_480 << 2;
          uStack_468 = uVar60;
          fStack_460 = fVar74;
          fStack_46c = fVar147;
          __Znwm();
          _bzero();
        }
        FUN_1093e3a78(puVar11,&uStack_480,lVar55);
        if (uVar21 == 0) {
          pfVar15 = (float *)0x0;
          pfVar12 = (float *)0x0;
          pfVar47 = (float *)0x0;
          if (lVar55 == 0) goto LAB_1093cc250;
        }
        else {
          pfVar47 = (float *)((ulong)(uVar21 * 3) << 2);
          __Znwm();
          puVar19 = (undefined8 *)(lVar55 + 0x10);
          pfVar12 = pfVar47 + uVar21 * 3;
          pfStack_5a0 = pfVar47;
          do {
            while( true ) {
              ppuStack_528 = (undefined **)puVar19[-2];
              fStack_520 = *(float *)(puVar19 + -1);
              fVar72 = SUB84(ppuStack_528,0);
              fVar58 = (float)((ulong)ppuStack_528 >> 0x20);
              fVar88 = fVar72 * fVar72 + fVar58 * fVar58 + fStack_520 * fStack_520;
              if (0.0 < fVar88) {
                fVar88 = SQRT(fVar88);
                ppuStack_528 = (undefined **)CONCAT44(fVar58 / fVar88,fVar72 / fVar88);
                fStack_520 = fStack_520 / fVar88;
              }
              uVar78 = NEON_rev64(ppuStack_528,4);
              fVar72 = (float)((ulong)*puVar19 >> 0x20);
              fVar58 = (float)*puVar19;
              uStack_510 = (double)CONCAT44(fStack_520 * *(float *)((long)puVar19 + -4),
                                            (float)uVar78 * fVar72) -
                           (double)CONCAT44((float)((ulong)uVar78 >> 0x20) * fVar72,
                                            fStack_520 * fVar58);
              fVar72 = (float)((ulong)ppuStack_528 >> 0x20);
              fVar75 = SUB84(ppuStack_528,0) * fVar58 - *(float *)((long)puVar19 + -4) * fVar72;
              fVar58 = SUB84(uStack_510,0);
              fVar88 = (float)((ulong)uStack_510 >> 0x20);
              fVar89 = fVar58 * fVar58 + fVar88 * fVar88 + fVar75 * fVar75;
              if (0.0 < fVar89) {
                fVar89 = SQRT(fVar89);
                uStack_510 = (double)CONCAT44(fVar88 / fVar89,fVar58 / fVar89);
                fVar75 = fVar75 / fVar89;
              }
              uVar78 = NEON_ext(uStack_510,ppuStack_528,4,1);
              fVar58 = (float)((ulong)uVar78 >> 0x20) * fVar75;
              uVar138 = NEON_rev64(CONCAT44(fVar75,fStack_520),4);
              uVar102 = NEON_ext(ppuStack_528,uStack_510,4,1);
              uStack_51c = (double)CONCAT17((char)((uint)fVar58 >> 0x18),
                                            CONCAT16((char)((uint)fVar58 >> 0x10),
                                                     CONCAT15((char)((uint)fVar58 >> 8),
                                                              CONCAT14(SUB41(fVar58,0),
                                                                       (float)uVar78 * fStack_520)))
                                           ) -
                           (double)CONCAT44((float)((ulong)uVar138 >> 0x20) *
                                            (float)((ulong)uVar102 >> 0x20),
                                            (float)uVar138 * (float)uVar102);
              fStack_514 = fVar72 * SUB84(uStack_510,0) -
                           SUB84(ppuStack_528,0) * (float)((ulong)uStack_510 >> 0x20);
              uStack_508 = (undefined4 *)CONCAT44(uStack_508._4_4_,fVar75);
              FUN_1093dfd04(&fStack_2a0,&ppuStack_528);
              fVar58 = fStack_294;
              fVar72 = fStack_298;
              fVar88 = fStack_2a0 * fStack_294;
              fVar75 = fStack_29c * fStack_294;
              if (pfVar47 < pfVar12) break;
              uVar79 = ((long)pfVar47 - (long)pfStack_5a0 >> 2) + 1;
              if (uVar79 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_1093cef5c;
              }
              uVar42 = (long)pfVar12 - (long)pfStack_5a0 >> 1;
              if (uVar42 <= uVar79) {
                uVar42 = uVar79;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar12 - (long)pfStack_5a0)) {
                uVar42 = 0x3fffffffffffffff;
              }
              if (uVar42 >> 0x3e != 0) {
                func_0x000104c4f740();
                goto LAB_1093cef5c;
              }
              pfVar14 = (float *)(uVar42 << 2);
              __Znwm();
              pfVar47 = (float *)((long)pfVar14 + ((long)pfVar47 - (long)pfStack_5a0));
              *pfVar47 = fVar88;
              _memcpy();
              pfVar12 = pfVar14 + uVar42;
              __ZdlPv(pfStack_5a0);
              pfVar15 = pfVar47 + 1;
              pfStack_5a0 = pfVar14;
              if (pfVar15 < pfVar12) goto LAB_1093cb4b8;
LAB_1093cb554:
              uVar79 = ((long)pfVar15 - (long)pfVar14 >> 2) + 1;
              if (uVar79 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_1093cef5c;
              }
              uVar42 = (long)pfVar12 - (long)pfVar14 >> 1;
              if (uVar42 <= uVar79) {
                uVar42 = uVar79;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar12 - (long)pfVar14)) {
                uVar42 = 0x3fffffffffffffff;
              }
              if (uVar42 >> 0x3e != 0) {
                func_0x000104c4f740();
                goto LAB_1093cef5c;
              }
              pfStack_5a0 = (float *)(uVar42 << 2);
              __Znwm();
              pfVar47 = (float *)((long)pfStack_5a0 + ((long)pfVar15 - (long)pfVar14));
              *pfVar47 = fVar75;
              pfVar47 = pfVar47 + 1;
              _memcpy();
              pfVar12 = pfStack_5a0 + uVar42;
              __ZdlPv(pfVar14);
              if (pfVar47 < pfVar12) goto LAB_1093cb3a4;
LAB_1093cb5d0:
              uVar79 = ((long)pfVar47 - (long)pfStack_5a0 >> 2) + 1;
              if (uVar79 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_1093cef5c;
              }
              uVar42 = (long)pfVar12 - (long)pfStack_5a0 >> 1;
              if (uVar42 <= uVar79) {
                uVar42 = uVar79;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar12 - (long)pfStack_5a0)) {
                uVar42 = 0x3fffffffffffffff;
              }
              if (uVar42 >> 0x3e != 0) {
                func_0x000104c4f740();
                goto LAB_1093cef5c;
              }
              pfVar15 = (float *)(uVar42 << 2);
              __Znwm();
              pfVar47 = (float *)((long)pfVar15 + ((long)pfVar47 - (long)pfStack_5a0));
              *pfVar47 = fVar72 * fVar58;
              _memcpy();
              pfVar12 = pfVar15 + uVar42;
              __ZdlPv(pfStack_5a0);
              puVar19 = puVar19 + 3;
              pfVar47 = pfVar47 + 1;
              uVar28 = uVar28 - 1;
              pfStack_5a0 = pfVar15;
              if (uVar28 == 0) goto LAB_1093cb66c;
            }
            *pfVar47 = fVar88;
            pfVar15 = pfVar47 + 1;
            pfVar14 = pfStack_5a0;
            if (pfVar12 <= pfVar15) goto LAB_1093cb554;
LAB_1093cb4b8:
            *pfVar15 = fVar75;
            pfVar47 = pfVar47 + 2;
            if (pfVar12 <= pfVar47) goto LAB_1093cb5d0;
LAB_1093cb3a4:
            *pfVar47 = fVar72 * fVar58;
            puVar19 = puVar19 + 3;
            pfVar47 = pfVar47 + 1;
            uVar28 = uVar28 - 1;
            pfVar15 = pfStack_5a0;
          } while (uVar28 != 0);
        }
LAB_1093cb66c:
        pfVar12 = pfVar47;
        __ZdlPv(lVar55);
      }
      else {
        puVar38 = ppuVar16[0x12];
        ppuVar37 = ppuVar16 + 0x12;
        if (((ulong)puVar38 & 1) != 0) {
          ppuVar37 = (undefined **)(puVar38 + 7);
        }
        iVar25 = *(int *)(ppuVar16 + 0x13);
        if (iVar25 == 0) {
          uStack_480 = 0;
        }
        else {
          if (iVar25 == 1) {
            uStack_480 = 0;
            ppuVar33 = ppuVar37;
          }
          else {
            iVar57 = 0;
            iVar71 = 0;
            uVar28 = ((long)iVar25 - 1U & 0x1fffffffffffffff) + 1;
            uVar42 = uVar28 & 0x3ffffffffffffffe;
            ppuVar33 = ppuVar37 + uVar42;
            ppuVar16 = ppuVar37 + 1;
            uVar79 = uVar42;
            do {
              iVar57 = *(int *)(ppuVar16[-1] + 0x48) + iVar57;
              iVar71 = *(int *)(*ppuVar16 + 0x48) + iVar71;
              ppuVar16 = ppuVar16 + 2;
              uVar79 = uVar79 - 2;
            } while (uVar79 != 0);
            uStack_480 = iVar71 + iVar57;
            if (uVar28 == uVar42) goto LAB_1093cb6e4;
          }
          do {
            ppuVar16 = ppuVar33 + 1;
            uStack_480 = *(int *)(*ppuVar33 + 0x48) + uStack_480;
            ppuVar33 = ppuVar16;
          } while (ppuVar16 != ppuVar37 + iVar25);
        }
LAB_1093cb6e4:
        iStack_47c = uStack_480 * iVar27;
        uVar26 = uStack_480;
        if (fVar148 == fVar146) {
          uVar26 = 0;
        }
        iStack_478 = iStack_47c + uVar26;
        iStack_474 = uStack_480 * iVar51;
        iStack_470 = iStack_474 + uVar26;
        if (uStack_480 == 0) {
          pfVar15 = (float *)0x0;
          pfVar12 = (float *)0x0;
          uStack_468 = uVar60;
          fStack_460 = fVar74;
          fStack_46c = fVar147;
        }
        else {
          uVar28 = (ulong)uStack_480;
          if ((int)uStack_480 < 0) {
            uStack_468 = uVar60;
            fStack_460 = fVar74;
            fStack_46c = fVar147;
            FUN_1092cc18c();
            goto LAB_1093cef5c;
          }
          pfVar15 = (float *)(uVar28 * 4);
          uStack_468 = uVar60;
          fStack_460 = fVar74;
          fStack_46c = fVar147;
          __Znwm();
          _bzero();
          pfVar12 = pfVar15 + uVar28;
        }
        FUN_1093e3a78(puVar11,&uStack_480,pfVar15);
      }
LAB_1093cc250:
      pfStack_5a0 = pfVar15;
      if ((puVar23 == (undefined *)0x0) || ((*(byte *)(lStack_198 + 0x62) & 1) != 0)) {
        if ((*(byte *)(lStack_190 + 0x12) >> 2 & 1) != 0) {
          fVar72 = *(float *)(lStack_190 + 0x138);
          ppuVar16 = (undefined **)0x4;
          __Znwm();
          *(float *)ppuVar16 = fVar72;
          goto joined_r0x0001093cc530;
        }
        FUN_10937e740(&ppuStack_528,&UNK_10f56b0ac);
        FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b018,0x527,&ppuStack_528);
        ppuVar16 = ppuStack_528;
        if (-1 < (int)fStack_514) goto LAB_1093cde6c;
      }
      else {
        uStack_480 = 1;
        iStack_470 = iVar51;
        iStack_478 = iVar27;
        if (fVar148 != fVar146) {
          iStack_478 = iVar27 + 1;
          iStack_470 = iVar51 + 1;
        }
        ppuVar16 = (undefined **)0x4;
        uStack_468 = uVar60;
        fStack_460 = fVar74;
        iStack_47c = iVar27;
        iStack_474 = iVar51;
        fStack_46c = fVar147;
        __Znwm();
        *(float *)ppuVar16 = 0.0;
        FUN_1093e3a78(puVar23,&uStack_480,ppuVar16);
joined_r0x0001093cc530:
        if (puVar29 == (undefined *)0x0) {
          puStack_640 = (undefined8 *)0x0;
          puStack_5f0 = (undefined8 *)0x0;
          if (lVar41 != 0) goto LAB_1093cc37c;
LAB_1093cc544:
          pfStack_628 = (float *)0x0;
          pfStack_610 = (float *)0x0;
          if (param_7 != 0) goto LAB_1093cc424;
LAB_1093cc558:
          lVar55 = 0;
          lVar41 = lVar55;
        }
        else {
          puStack_5f0 = (undefined8 *)0x0;
          puStack_640 = (undefined8 *)0x0;
          if ((*(byte *)(lStack_198 + 0x61) & 1) == 0) {
            iStack_47c = iVar27 * 6;
            iStack_470 = 6;
            uStack_480 = 6;
            if (fVar148 == fVar146) {
              iStack_470 = 0;
            }
            iStack_478 = iStack_470 + iStack_47c;
            iStack_474 = iVar51 * 6;
            iStack_470 = iStack_474 + iStack_470;
            puStack_5f0 = (undefined8 *)0x18;
            uStack_468 = uVar60;
            fStack_460 = fVar74;
            fStack_46c = fVar147;
            __Znwm();
            *puStack_5f0 = 0;
            puStack_5f0[1] = 0;
            puStack_5f0[2] = 0;
            FUN_1093e3a78(puVar29,&uStack_480,puStack_5f0);
            puStack_640 = puStack_5f0 + 3;
          }
          if (lVar41 == 0) goto LAB_1093cc544;
LAB_1093cc37c:
          pfStack_610 = (float *)0x0;
          pfStack_628 = (float *)0x0;
          if ((*(uint *)(lStack_198 + 0x10) >> 0xd & 1) == 0) {
            uStack_480 = 2;
            if (*(char *)(lStack_198 + 0x54) == '\0') {
              uStack_480 = 3;
            }
            iStack_47c = uStack_480 * iVar27;
            uVar26 = uStack_480;
            if (fVar148 == fVar146) {
              uVar26 = 0;
            }
            iStack_478 = iStack_47c + uVar26;
            iStack_474 = uStack_480 * iVar51;
            iStack_470 = iStack_474 + uVar26;
            uVar26 = uStack_480 << 2;
            pfStack_610 = (float *)(ulong)uVar26;
            uStack_468 = uVar60;
            fStack_460 = fVar74;
            fStack_46c = fVar147;
            __Znwm();
            _bzero();
            FUN_1093e3a78(lVar41,&uStack_480,pfStack_610);
            pfStack_628 = (float *)((long)pfStack_610 + (long)(ulong)uVar26);
          }
          if (param_7 == 0) goto LAB_1093cc558;
LAB_1093cc424:
          lVar55 = 0;
          lVar41 = 0;
          if ((*(byte *)(lStack_198 + 99) & 1) != 0) {
            ppuVar37 = &PTR_PTR_1132d70f0;
            if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
              ppuVar37 = *(undefined ***)(lStack_198 + 0x30);
            }
            uStack_480 = *(uint *)(ppuVar37 + 0x27);
            uVar28 = (ulong)uStack_480;
            iStack_47c = uStack_480 * iVar27;
            uVar26 = uStack_480;
            if (fVar148 == fVar146) {
              uVar26 = 0;
            }
            iStack_478 = iStack_47c + uVar26;
            iStack_474 = uStack_480 * iVar51;
            iStack_470 = iStack_474 + uVar26;
            if (uStack_480 == 0) {
              lVar55 = 0;
              lVar41 = 0;
              uStack_468 = uVar60;
              fStack_460 = fVar74;
              fStack_46c = fVar147;
            }
            else {
              if ((int)uStack_480 < 0) {
                uStack_468 = uVar60;
                fStack_460 = fVar74;
                fStack_46c = fVar147;
                FUN_1092cc18c();
                goto LAB_1093cef5c;
              }
              lVar55 = uVar28 * 4;
              uStack_468 = uVar60;
              fStack_460 = fVar74;
              fStack_46c = fVar147;
              __Znwm();
              _bzero();
              lVar41 = lVar55 + uVar28 * 4;
            }
            FUN_1093e3a78(param_7,&uStack_480,lVar55);
          }
        }
        ppuStack_528 = &PTR_FUN_110aeee58;
        fStack_520 = 0.0;
        uStack_51c._0_4_ = 0;
        uStack_510 = 0.0;
        uStack_51c._4_4_ = 0;
        fStack_514 = 0.0;
        uStack_500 = 0;
        uStack_508 = (undefined4 *)0x0;
        uStack_4f0 = 0;
        puStack_4f8 = (undefined4 *)0x0;
        uStack_4e0 = 0;
        pfStack_4e8 = (float *)0x0;
        uStack_4d0 = 0;
        puStack_4d8 = (undefined8 *)0x0;
        uStack_4c0 = 0;
        puStack_4c8 = (undefined4 *)0x0;
        uStack_4b0 = 0;
        puStack_4b8 = (undefined4 *)0x0;
        lStack_4a8 = 0;
        fStack_4a0 = 1.0;
        pcVar7 = (code *)0x1093d4b94;
        if (*(int *)(lStack_198 + 0x80) != 2) {
          pcVar7 = (code *)0x1093d4bb4;
        }
        lVar53 = lVar50;
        pcVar3 = FUN_1093d4b6c;
        if (*(int *)(lStack_198 + 0x80) != 1) {
          pcVar3 = pcVar7;
        }
        for (; lVar45 = lVar54, lVar53 != lVar35; lVar53 = lVar53 + 4) {
          uVar59 = (*pcVar3)(lStack_198);
          iVar25 = (int)(float)uStack_510;
          if ((float)uStack_510 == uStack_510._4_4_) {
            FUN_109311970(&uStack_510,uStack_510._4_4_,(int)uStack_510._4_4_ + 1);
            iVar25 = (int)(float)uStack_510;
          }
          uStack_510 = (double)CONCAT44(uStack_510._4_4_,iVar25 + 1);
          uStack_508[iVar25] = uVar59;
        }
        for (; lVar45 != lStack_620; lVar45 = lVar45 + 4) {
          uVar59 = (*pcVar3)(lStack_198);
          iVar25 = (int)uStack_500;
          if ((int)uStack_500 == uStack_500._4_4_) {
            FUN_109311970(&uStack_500,uStack_500._4_4_,uStack_500._4_4_ + 1);
            iVar25 = (int)uStack_500;
          }
          uStack_500 = CONCAT44(uStack_500._4_4_,iVar25 + 1);
          puStack_4f8[iVar25] = uVar59;
        }
        uVar60 = uStack_4d0;
        if (*(char *)(lStack_198 + 0x57) == '\x01') {
          if (pfVar15 != pfVar12) {
            iVar25 = (int)uStack_4b0;
            do {
              fVar72 = *pfVar15;
              iVar27 = iVar25;
              if (iVar25 == uStack_4b0._4_4_) {
                FUN_109311970(&uStack_4b0,iVar25,iVar25 + 1);
                iVar27 = (int)uStack_4b0;
              }
              iVar25 = iVar27 + 1;
              uStack_4b0 = CONCAT44(uStack_4b0._4_4_,iVar25);
              *(float *)(lStack_4a8 + (long)iVar27 * 4) = fVar72;
              pfVar15 = pfVar15 + 1;
              uVar60 = uStack_4d0;
            } while (pfVar15 != pfVar12);
          }
        }
        else if (*(char *)(lStack_198 + 0x51) == '\x01') {
          ppuVar33 = *(undefined ***)(lStack_198 + 0x30);
          ppuVar37 = &PTR_PTR_1132d70f0;
          if (ppuVar33 != (undefined **)0x0) {
            ppuVar37 = ppuVar33;
          }
          if (0 < *(int *)(ppuVar37 + 4)) {
            iVar25 = *(int *)(ppuVar37 + 4) * 3;
            iVar27 = (int)uStack_4d0;
            if (iVar25 < 2) {
              iVar25 = 1;
            }
            do {
              if (iVar27 == uStack_4d0._4_4_) {
                FUN_109311970(&uStack_4d0,iVar27,iVar27 + 1);
                iVar27 = (int)uStack_4d0;
              }
              uStack_4d0 = CONCAT44(uStack_4d0._4_4_,iVar27 + 1);
              puStack_4c8[iVar27] = 0;
              iVar25 = iVar25 + -1;
              iVar27 = iVar27 + 1;
            } while (iVar25 != 0);
            ppuVar33 = *(undefined ***)(lStack_198 + 0x30);
          }
          puVar36 = puStack_4c8;
          ppuVar37 = &PTR_PTR_1132d70f0;
          if (ppuVar33 != (undefined **)0x0) {
            ppuVar37 = ppuVar33;
          }
          puVar23 = ppuVar37[0x12];
          ppuVar33 = ppuVar37 + 0x12;
          if (((ulong)puVar23 & 1) != 0) {
            ppuVar33 = (undefined **)(puVar23 + 7);
          }
          uVar60 = uStack_4d0;
          if (*(int *)(ppuVar37 + 0x13) != 0) {
            iVar25 = 0;
            ppuVar37 = ppuVar33 + *(int *)(ppuVar37 + 0x13);
            do {
              puVar23 = *ppuVar33;
              uVar26 = *(uint *)(puVar23 + 0x48);
              uVar28 = (ulong)uVar26;
              fStack_590 = pfVar15[iVar25];
              if ((int)uVar26 < 2) {
                if (uVar26 == 1) {
                  uVar28 = 1;
                  goto LAB_1093cc8dc;
                }
              }
              else {
                lVar35 = uVar28 - 1;
                pfVar12 = pfVar15 + (long)iVar25 + 1;
                fVar72 = fStack_590;
                do {
                  fStack_590 = *pfVar12;
                  if (*pfVar12 <= fVar72) {
                    fStack_590 = fVar72;
                  }
                  lVar35 = lVar35 + -1;
                  pfVar12 = pfVar12 + 1;
                  fVar72 = fStack_590;
                } while (lVar35 != 0);
                if (uVar28 < 4) {
LAB_1093cc8dc:
                  uVar42 = 0;
                  fVar72 = 0.0;
LAB_1093cc9b4:
                  lVar35 = uVar28 - uVar42;
                  pfVar12 = pfVar15 + (long)iVar25 + uVar42;
                  do {
                    fVar148 = (float)_expf(*pfVar12 - fStack_590,fStack_590);
                    *pfVar12 = fVar148;
                    fVar72 = fVar72 + fVar148;
                    lVar35 = lVar35 + -1;
                    pfVar12 = pfVar12 + 1;
                  } while (lVar35 != 0);
                }
                else {
                  uVar42 = uVar28 & 0x7ffffffc;
                  pfVar12 = pfVar15 + (long)iVar25 + 2;
                  fVar72 = 0.0;
                  uVar79 = uVar42;
                  do {
                    uVar60 = *(undefined8 *)(pfVar12 + -2);
                    uVar78 = *(undefined8 *)pfVar12;
                    fVar148 = (float)_expf();
                    fVar146 = (float)_expf(CONCAT44((float)((ulong)uVar60 >> 0x20) - fStack_590,
                                                    (float)uVar60 - fStack_590));
                    fVar58 = (float)_expf();
                    fVar74 = (float)_expf(CONCAT44((float)((ulong)uVar78 >> 0x20) - fStack_590,
                                                   (float)uVar78 - fStack_590));
                    *(ulong *)(pfVar12 + -2) = CONCAT44(fVar148,fVar146);
                    *(ulong *)pfVar12 = CONCAT44(fVar58,fVar74);
                    fVar72 = fVar72 + fVar146 + fVar148 + fVar74 + fVar58;
                    pfVar12 = pfVar12 + 4;
                    uVar79 = uVar79 - 4;
                  } while (uVar79 != 0);
                  if (uVar28 != uVar42) goto LAB_1093cc9b4;
                }
                fVar72 = 1.0 / fVar72;
                if (uVar28 < 8) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = uVar28 & 0x7ffffff8;
                  pfVar12 = pfVar15 + (long)iVar25 + 4;
                  uVar79 = uVar42;
                  do {
                    auVar80._0_8_ = CONCAT44(pfVar12[-3] * fVar72,pfVar12[-4] * fVar72);
                    auVar80._8_4_ = pfVar12[-2] * fVar72;
                    auVar80._12_4_ = pfVar12[-1] * fVar72;
                    auVar90._0_8_ = CONCAT44(pfVar12[1] * fVar72,*pfVar12 * fVar72);
                    auVar90._8_4_ = pfVar12[2] * fVar72;
                    auVar90._12_4_ = pfVar12[3] * fVar72;
                    *(long *)(pfVar12 + -2) = auVar80._8_8_;
                    *(undefined8 *)(pfVar12 + -4) = auVar80._0_8_;
                    *(long *)(pfVar12 + 2) = auVar90._8_8_;
                    *(undefined8 *)pfVar12 = auVar90._0_8_;
                    pfVar12 = pfVar12 + 8;
                    uVar79 = uVar79 - 8;
                  } while (uVar79 != 0);
                  if (uVar28 == uVar42) goto LAB_1093cca58;
                }
                lVar35 = uVar28 - uVar42;
                pfVar12 = pfVar15 + (long)iVar25 + uVar42;
                do {
                  *pfVar12 = fVar72 * *pfVar12;
                  lVar35 = lVar35 + -1;
                  pfVar12 = pfVar12 + 1;
                } while (lVar35 != 0);
              }
LAB_1093cca58:
              uVar21 = *(uint *)(puVar23 + 0x18);
              if (0 < (int)uVar21) {
                lVar35 = *(long *)(puVar23 + 0x20);
                uVar79 = *(ulong *)(puVar23 + 0x28);
                uVar28 = 0;
                if ((uVar79 & 1) == 0) {
                  do {
                    fVar72 = 0.0;
                    fVar148 = 0.0;
                    fVar146 = 0.0;
                    if (*(int *)(uVar79 + 0x38) == 3) {
                      auVar83 = ZEXT816(0);
                      fVar148 = 0.0;
                      fVar146 = 0.0;
                      if (*(int *)(uVar79 + 0x18) == 3) {
                        puVar11 = *(uint **)(uVar79 + 0x20);
                        auVar83 = ZEXT416(*puVar11);
                        fVar148 = (float)puVar11[1];
                        fVar146 = (float)puVar11[2];
                      }
                      fVar72 = auVar83._0_4_;
                      uVar22 = *(uint *)(uVar79 + 0x3c);
                      uVar42 = (ulong)uVar22;
                      if (0 < (int)uVar22) {
                        if (uVar22 < 8) {
                          uVar43 = 0;
                        }
                        else {
                          uVar43 = uVar42 & 0x7ffffff8;
                          uVar123 = 0;
                          uVar124 = 0;
                          uVar125 = 0;
                          uVar126 = 0;
                          uVar127 = 0;
                          uVar128 = 0;
                          uVar129 = 0;
                          uVar130 = 0;
                          uVar131 = 0;
                          uVar132 = 0;
                          uVar133 = 0;
                          uVar134 = 0;
                          uVar119 = auVar83[0];
                          uVar120 = auVar83[1];
                          uVar121 = auVar83[2];
                          uVar122 = auVar83[3];
                          pauVar32 = (undefined1 (*) [16])(pfVar15 + (long)iVar25 + 4);
                          uVar39 = uVar43;
                          pfVar12 = *(float **)(uVar79 + 0x30);
                          auVar83 = ZEXT216(0);
                          auVar145 = ZEXT216(0);
                          auVar106 = ZEXT216(0);
                          auVar139 = ZEXT416((uint)fVar146);
                          auVar80 = ZEXT416((uint)fVar148);
                          do {
                            auVar90 = pauVar32[-1];
                            auVar62 = *pauVar32;
                            fVar74 = auVar90._0_4_;
                            fVar88 = auVar90._4_4_;
                            fVar147 = auVar90._8_4_;
                            fVar75 = auVar90._12_4_;
                            fVar72 = (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,
                                                  uVar119))) + *pfVar12 * fVar74;
                            uVar119 = SUB41(fVar72,0);
                            uVar120 = (undefined1)((uint)fVar72 >> 8);
                            uVar121 = (undefined1)((uint)fVar72 >> 0x10);
                            uVar122 = (undefined1)((uint)fVar72 >> 0x18);
                            fVar148 = (float)CONCAT13(uVar126,CONCAT12(uVar125,CONCAT11(uVar124,
                                                  uVar123))) + pfVar12[3] * fVar88;
                            uVar123 = SUB41(fVar148,0);
                            uVar124 = (undefined1)((uint)fVar148 >> 8);
                            uVar125 = (undefined1)((uint)fVar148 >> 0x10);
                            uVar126 = (undefined1)((uint)fVar148 >> 0x18);
                            fVar146 = (float)CONCAT13(uVar130,CONCAT12(uVar129,CONCAT11(uVar128,
                                                  uVar127))) + pfVar12[6] * fVar147;
                            uVar127 = SUB41(fVar146,0);
                            uVar128 = (undefined1)((uint)fVar146 >> 8);
                            uVar129 = (undefined1)((uint)fVar146 >> 0x10);
                            uVar130 = (undefined1)((uint)fVar146 >> 0x18);
                            fVar58 = (float)CONCAT13(uVar134,CONCAT12(uVar133,CONCAT11(uVar132,
                                                  uVar131))) + pfVar12[9] * fVar75;
                            uVar131 = SUB41(fVar58,0);
                            uVar132 = (undefined1)((uint)fVar58 >> 8);
                            uVar133 = (undefined1)((uint)fVar58 >> 0x10);
                            uVar134 = (undefined1)((uint)fVar58 >> 0x18);
                            fVar89 = auVar62._0_4_;
                            fVar73 = auVar62._4_4_;
                            fVar76 = auVar62._8_4_;
                            fVar77 = auVar62._12_4_;
                            auVar61._0_4_ = auVar83._0_4_ + pfVar12[0xc] * fVar89;
                            auVar61._4_4_ = auVar83._4_4_ + pfVar12[0xf] * fVar73;
                            auVar61._8_4_ = auVar83._8_4_ + pfVar12[0x12] * fVar76;
                            auVar61._12_4_ = auVar83._12_4_ + pfVar12[0x15] * fVar77;
                            auVar114._0_4_ = auVar80._0_4_ + pfVar12[1] * fVar74;
                            auVar114._4_4_ = auVar80._4_4_ + pfVar12[4] * fVar88;
                            auVar114._8_4_ = auVar80._8_4_ + pfVar12[7] * fVar147;
                            auVar114._12_4_ = auVar80._12_4_ + pfVar12[10] * fVar75;
                            auVar81._0_4_ = auVar145._0_4_ + pfVar12[0xd] * fVar89;
                            auVar81._4_4_ = auVar145._4_4_ + pfVar12[0x10] * fVar73;
                            auVar81._8_4_ = auVar145._8_4_ + pfVar12[0x13] * fVar76;
                            auVar81._12_4_ = auVar145._12_4_ + pfVar12[0x16] * fVar77;
                            auVar103._0_4_ = auVar139._0_4_ + pfVar12[2] * fVar74;
                            auVar103._4_4_ = auVar139._4_4_ + pfVar12[5] * fVar88;
                            auVar103._8_4_ = auVar139._8_4_ + pfVar12[8] * fVar147;
                            auVar103._12_4_ = auVar139._12_4_ + pfVar12[0xb] * fVar75;
                            auVar91._0_4_ = auVar106._0_4_ + pfVar12[0xe] * fVar89;
                            auVar91._4_4_ = auVar106._4_4_ + pfVar12[0x11] * fVar73;
                            auVar91._8_4_ = auVar106._8_4_ + pfVar12[0x14] * fVar76;
                            auVar91._12_4_ = auVar106._12_4_ + pfVar12[0x17] * fVar77;
                            pfVar12 = pfVar12 + 0x18;
                            pauVar32 = pauVar32 + 2;
                            uVar39 = uVar39 - 8;
                            auVar83 = auVar61;
                            auVar145 = auVar81;
                            auVar106 = auVar91;
                            auVar139 = auVar103;
                            auVar80 = auVar114;
                          } while (uVar39 != 0);
                          fVar72 = auVar61._0_4_ + fVar72 + auVar61._4_4_ + fVar148 +
                                   auVar61._8_4_ + fVar146 + auVar61._12_4_ + fVar58;
                          auVar83 = ZEXT416((uint)fVar72);
                          fVar148 = auVar81._0_4_ + auVar114._0_4_ + auVar81._4_4_ + auVar114._4_4_
                                    + auVar81._8_4_ + auVar114._8_4_ +
                                      auVar81._12_4_ + auVar114._12_4_;
                          fVar146 = auVar91._0_4_ + auVar103._0_4_ + auVar91._4_4_ + auVar103._4_4_
                                    + auVar91._8_4_ + auVar103._8_4_ +
                                      auVar91._12_4_ + auVar103._12_4_;
                          if (uVar43 == uVar42) goto LAB_1093cca80;
                        }
                        lVar53 = uVar42 - uVar43;
                        pfVar12 = *(float **)(uVar79 + 0x30) + uVar43 * 3 + 2;
                        pfVar47 = pfVar15 + (long)iVar25 + uVar43;
                        do {
                          fVar58 = *pfVar47;
                          fVar72 = auVar83._0_4_ + fVar58 * pfVar12[-2];
                          auVar83 = ZEXT416((uint)fVar72);
                          fVar148 = fVar148 + fVar58 * pfVar12[-1];
                          fVar146 = fVar146 + fVar58 * *pfVar12;
                          lVar53 = lVar53 + -1;
                          pfVar12 = pfVar12 + 3;
                          pfVar47 = pfVar47 + 1;
                        } while (lVar53 != 0);
                      }
                    }
LAB_1093cca80:
                    pfVar12 = (float *)(puVar36 + (long)*(int *)(lVar35 + uVar28 * 4) * 3);
                    *pfVar12 = fVar72;
                    pfVar12[1] = fVar148;
                    pfVar12[2] = fVar146;
                    uVar28 = uVar28 + 1;
                  } while (uVar28 != uVar21);
                }
                else {
                  do {
                    lVar53 = *(long *)(uVar79 + 7 + uVar28 * 8);
                    fVar72 = 0.0;
                    fVar148 = 0.0;
                    fVar146 = 0.0;
                    if (*(int *)(lVar53 + 0x38) == 3) {
                      auVar83 = ZEXT816(0);
                      fVar148 = 0.0;
                      fVar146 = 0.0;
                      if (*(int *)(lVar53 + 0x18) == 3) {
                        puVar11 = *(uint **)(lVar53 + 0x20);
                        auVar83 = ZEXT416(*puVar11);
                        fVar148 = (float)puVar11[1];
                        fVar146 = (float)puVar11[2];
                      }
                      fVar72 = auVar83._0_4_;
                      uVar22 = *(uint *)(lVar53 + 0x3c);
                      uVar42 = (ulong)uVar22;
                      if (0 < (int)uVar22) {
                        if (uVar22 < 8) {
                          uVar43 = 0;
                        }
                        else {
                          uVar43 = uVar42 & 0x7ffffff8;
                          uVar123 = 0;
                          uVar124 = 0;
                          uVar125 = 0;
                          uVar126 = 0;
                          uVar127 = 0;
                          uVar128 = 0;
                          uVar129 = 0;
                          uVar130 = 0;
                          uVar131 = 0;
                          uVar132 = 0;
                          uVar133 = 0;
                          uVar134 = 0;
                          uVar119 = auVar83[0];
                          uVar120 = auVar83[1];
                          uVar121 = auVar83[2];
                          uVar122 = auVar83[3];
                          pauVar32 = (undefined1 (*) [16])(pfVar15 + (long)iVar25 + 4);
                          uVar39 = uVar43;
                          pfVar12 = *(float **)(lVar53 + 0x30);
                          auVar83 = ZEXT216(0);
                          auVar145 = ZEXT216(0);
                          auVar106 = ZEXT216(0);
                          auVar139 = ZEXT416((uint)fVar146);
                          auVar80 = ZEXT416((uint)fVar148);
                          do {
                            auVar90 = pauVar32[-1];
                            auVar62 = *pauVar32;
                            fVar74 = auVar90._0_4_;
                            fVar88 = auVar90._4_4_;
                            fVar147 = auVar90._8_4_;
                            fVar75 = auVar90._12_4_;
                            fVar72 = (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,
                                                  uVar119))) + *pfVar12 * fVar74;
                            uVar119 = SUB41(fVar72,0);
                            uVar120 = (undefined1)((uint)fVar72 >> 8);
                            uVar121 = (undefined1)((uint)fVar72 >> 0x10);
                            uVar122 = (undefined1)((uint)fVar72 >> 0x18);
                            fVar148 = (float)CONCAT13(uVar126,CONCAT12(uVar125,CONCAT11(uVar124,
                                                  uVar123))) + pfVar12[3] * fVar88;
                            uVar123 = SUB41(fVar148,0);
                            uVar124 = (undefined1)((uint)fVar148 >> 8);
                            uVar125 = (undefined1)((uint)fVar148 >> 0x10);
                            uVar126 = (undefined1)((uint)fVar148 >> 0x18);
                            fVar146 = (float)CONCAT13(uVar130,CONCAT12(uVar129,CONCAT11(uVar128,
                                                  uVar127))) + pfVar12[6] * fVar147;
                            uVar127 = SUB41(fVar146,0);
                            uVar128 = (undefined1)((uint)fVar146 >> 8);
                            uVar129 = (undefined1)((uint)fVar146 >> 0x10);
                            uVar130 = (undefined1)((uint)fVar146 >> 0x18);
                            fVar58 = (float)CONCAT13(uVar134,CONCAT12(uVar133,CONCAT11(uVar132,
                                                  uVar131))) + pfVar12[9] * fVar75;
                            uVar131 = SUB41(fVar58,0);
                            uVar132 = (undefined1)((uint)fVar58 >> 8);
                            uVar133 = (undefined1)((uint)fVar58 >> 0x10);
                            uVar134 = (undefined1)((uint)fVar58 >> 0x18);
                            fVar89 = auVar62._0_4_;
                            fVar73 = auVar62._4_4_;
                            fVar76 = auVar62._8_4_;
                            fVar77 = auVar62._12_4_;
                            auVar62._0_4_ = auVar83._0_4_ + pfVar12[0xc] * fVar89;
                            auVar62._4_4_ = auVar83._4_4_ + pfVar12[0xf] * fVar73;
                            auVar62._8_4_ = auVar83._8_4_ + pfVar12[0x12] * fVar76;
                            auVar62._12_4_ = auVar83._12_4_ + pfVar12[0x15] * fVar77;
                            auVar115._0_4_ = auVar80._0_4_ + pfVar12[1] * fVar74;
                            auVar115._4_4_ = auVar80._4_4_ + pfVar12[4] * fVar88;
                            auVar115._8_4_ = auVar80._8_4_ + pfVar12[7] * fVar147;
                            auVar115._12_4_ = auVar80._12_4_ + pfVar12[10] * fVar75;
                            auVar82._0_4_ = auVar145._0_4_ + pfVar12[0xd] * fVar89;
                            auVar82._4_4_ = auVar145._4_4_ + pfVar12[0x10] * fVar73;
                            auVar82._8_4_ = auVar145._8_4_ + pfVar12[0x13] * fVar76;
                            auVar82._12_4_ = auVar145._12_4_ + pfVar12[0x16] * fVar77;
                            auVar104._0_4_ = auVar139._0_4_ + pfVar12[2] * fVar74;
                            auVar104._4_4_ = auVar139._4_4_ + pfVar12[5] * fVar88;
                            auVar104._8_4_ = auVar139._8_4_ + pfVar12[8] * fVar147;
                            auVar104._12_4_ = auVar139._12_4_ + pfVar12[0xb] * fVar75;
                            auVar92._0_4_ = auVar106._0_4_ + pfVar12[0xe] * fVar89;
                            auVar92._4_4_ = auVar106._4_4_ + pfVar12[0x11] * fVar73;
                            auVar92._8_4_ = auVar106._8_4_ + pfVar12[0x14] * fVar76;
                            auVar92._12_4_ = auVar106._12_4_ + pfVar12[0x17] * fVar77;
                            pfVar12 = pfVar12 + 0x18;
                            pauVar32 = pauVar32 + 2;
                            uVar39 = uVar39 - 8;
                            auVar83 = auVar62;
                            auVar145 = auVar82;
                            auVar106 = auVar92;
                            auVar139 = auVar104;
                            auVar80 = auVar115;
                          } while (uVar39 != 0);
                          fVar72 = auVar62._0_4_ + fVar72 + auVar62._4_4_ + fVar148 +
                                   auVar62._8_4_ + fVar146 + auVar62._12_4_ + fVar58;
                          auVar83 = ZEXT416((uint)fVar72);
                          fVar148 = auVar82._0_4_ + auVar115._0_4_ + auVar82._4_4_ + auVar115._4_4_
                                    + auVar82._8_4_ + auVar115._8_4_ +
                                      auVar82._12_4_ + auVar115._12_4_;
                          fVar146 = auVar92._0_4_ + auVar104._0_4_ + auVar92._4_4_ + auVar104._4_4_
                                    + auVar92._8_4_ + auVar104._8_4_ +
                                      auVar92._12_4_ + auVar104._12_4_;
                          if (uVar43 == uVar42) goto LAB_1093ccbd4;
                        }
                        lVar45 = uVar42 - uVar43;
                        pfVar12 = *(float **)(lVar53 + 0x30) + uVar43 * 3 + 2;
                        pfVar47 = pfVar15 + (long)iVar25 + uVar43;
                        do {
                          fVar58 = *pfVar47;
                          fVar72 = auVar83._0_4_ + fVar58 * pfVar12[-2];
                          auVar83 = ZEXT416((uint)fVar72);
                          fVar148 = fVar148 + fVar58 * pfVar12[-1];
                          fVar146 = fVar146 + fVar58 * *pfVar12;
                          lVar45 = lVar45 + -1;
                          pfVar12 = pfVar12 + 3;
                          pfVar47 = pfVar47 + 1;
                        } while (lVar45 != 0);
                      }
                    }
LAB_1093ccbd4:
                    pfVar12 = (float *)(puVar36 + (long)*(int *)(lVar35 + uVar28 * 4) * 3);
                    *pfVar12 = fVar72;
                    pfVar12[1] = fVar148;
                    pfVar12[2] = fVar146;
                    uVar28 = uVar28 + 1;
                  } while (uVar28 != uVar21);
                }
              }
              iVar25 = uVar26 + iVar25;
              ppuVar33 = ppuVar33 + 1;
              uVar60 = uStack_4d0;
            } while (ppuVar33 != ppuVar37);
          }
        }
        else {
          iVar25 = (int)uStack_4d0;
          if (*(char *)(lStack_198 + 0x52) == '\x01') {
            for (; pfVar15 != pfVar12; pfVar15 = pfVar15 + 1) {
              fVar72 = *pfVar15;
              uStack_4d0._4_4_ = (int)((ulong)uVar60 >> 0x20);
              bVar10 = iVar25 == uStack_4d0._4_4_;
              uStack_4d0 = uVar60;
              if (bVar10) {
                FUN_109311970(&uStack_4d0,iVar25,iVar25 + 1);
                iVar25 = (int)uStack_4d0;
              }
              uStack_4d0 = CONCAT44(uStack_4d0._4_4_,iVar25 + 1);
              puStack_4c8[iVar25] = fVar72;
              uVar60 = uStack_4d0;
              iVar25 = iVar25 + 1;
            }
          }
        }
        uStack_4d0 = uVar60;
        if (((*(byte *)(lStack_198 + 0x61) & 1) == 0) && (puStack_5f0 != puStack_640)) {
          puVar19 = puStack_5f0;
          iVar25 = (int)uStack_4e0;
          do {
            uVar59 = *(undefined4 *)puVar19;
            iVar27 = iVar25;
            if (iVar25 == uStack_4e0._4_4_) {
              FUN_109311970(&uStack_4e0,iVar25,iVar25 + 1);
              iVar27 = (int)uStack_4e0;
            }
            iVar25 = iVar27 + 1;
            uStack_4e0 = CONCAT44(uStack_4e0._4_4_,iVar25);
            *(undefined4 *)((long)puStack_4d8 + (long)iVar27 * 4) = uVar59;
            puVar19 = (undefined8 *)((long)puVar19 + 4);
          } while (puVar19 != puStack_640);
        }
        fStack_4a0 = *(float *)ppuVar16;
        if (*(char *)(lStack_198 + 0x62) == '\0') {
          fStack_4a0 = *(float *)ppuVar16 + *(float *)(lStack_198 + 0x7c);
        }
        uStack_51c._4_4_ = uStack_51c._4_4_ | 1;
        if ((*(byte *)(lStack_198 + 0x11) >> 5 & 1) == 0) {
          pfVar15 = pfStack_610;
          uVar60 = uStack_4f0;
          uVar26 = (uint)uStack_4f0;
          if (*(char *)(lStack_198 + 0x50) == '\x01') {
            for (; uStack_4f0 = uVar60, pfVar15 != pfStack_628; pfVar15 = pfVar15 + 1) {
              fVar72 = *pfVar15;
              fVar148 = *(float *)(lStack_198 + 0x74);
              uStack_4f0._4_4_ = (uint)((ulong)uVar60 >> 0x20);
              bVar10 = uVar26 == uStack_4f0._4_4_;
              if (bVar10) {
                FUN_109311970(&uStack_4f0,uVar26,uVar26 + 1);
                uVar26 = (uint)uStack_4f0;
              }
              uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar26 + 1);
              pfStack_4e8[(int)uVar26] = fVar148 * fVar72;
              uVar60 = uStack_4f0;
              uVar26 = uVar26 + 1;
            }
            pfStack_4e8[1] = pfStack_4e8[1] + 1.0;
            if (0 < (int)uVar26) {
              uVar28 = (ulong)uVar26;
              if (uVar26 < 8) {
                uVar79 = 0;
              }
              else if ((pfStack_4e8 < &fStack_49c) && (&fStack_4a0 < pfStack_4e8 + uVar28)) {
                uVar79 = 0;
              }
              else {
                uVar79 = uVar28 & 0x7ffffff8;
                pauVar32 = (undefined1 (*) [16])(pfStack_4e8 + 4);
                uVar42 = uVar79;
                do {
                  fVar72 = *(float *)pauVar32[-1];
                  fVar148 = *(float *)(pauVar32[-1] + 4);
                  fVar146 = *(float *)(pauVar32[-1] + 0xc);
                  auVar83 = *pauVar32;
                  *(float *)(pauVar32[-1] + 8) = *(float *)(pauVar32[-1] + 8) * fStack_4a0;
                  *(float *)(pauVar32[-1] + 0xc) = fVar146 * fStack_4a0;
                  *(float *)pauVar32[-1] = fVar72 * fStack_4a0;
                  *(float *)(pauVar32[-1] + 4) = fVar148 * fStack_4a0;
                  *(float *)(*pauVar32 + 8) = auVar83._8_4_ * fStack_4a0;
                  *(float *)(*pauVar32 + 0xc) = auVar83._12_4_ * fStack_4a0;
                  *(float *)*pauVar32 = auVar83._0_4_ * fStack_4a0;
                  *(float *)(*pauVar32 + 4) = auVar83._4_4_ * fStack_4a0;
                  pauVar32 = pauVar32 + 2;
                  uVar42 = uVar42 - 8;
                } while (uVar42 != 0);
                if (uVar79 == uVar28) goto LAB_1093ccf48;
              }
              do {
                pfStack_4e8[uVar79] = pfStack_4e8[uVar79] * fStack_4a0;
                uVar79 = uVar79 + 1;
              } while (uVar28 != uVar79);
            }
          }
          else {
            for (; uStack_4f0 = uVar60, pfVar15 != pfStack_628; pfVar15 = pfVar15 + 1) {
              fVar72 = *pfVar15;
              uStack_4f0._4_4_ = (uint)((ulong)uVar60 >> 0x20);
              bVar10 = uVar26 == uStack_4f0._4_4_;
              if (bVar10) {
                FUN_109311970(&uStack_4f0,uVar26,uVar26 + 1);
                uVar26 = (uint)uStack_4f0;
              }
              uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar26 + 1);
              pfStack_4e8[(int)uVar26] = fVar72;
              uVar60 = uStack_4f0;
              uVar26 = uVar26 + 1;
            }
          }
LAB_1093ccf48:
          *pfStack_4e8 = (float)uStack_440 + *pfStack_4e8;
          pfStack_4e8[1] = uStack_440._4_4_ + pfStack_4e8[1];
        }
        if (*(char *)(lStack_198 + 99) == '\x01' && lVar55 != lVar41) {
          lVar35 = lVar55;
          iVar25 = (int)uStack_4c0;
          do {
            fVar72 = (float)_expf();
            iVar27 = iVar25;
            if (iVar25 == uStack_4c0._4_4_) {
              FUN_109311970(&uStack_4c0,iVar25,iVar25 + 1);
              iVar27 = (int)uStack_4c0;
            }
            iVar25 = iVar27 + 1;
            uStack_4c0 = CONCAT44(uStack_4c0._4_4_,iVar25);
            puStack_4b8[iVar27] = 1.0 / (fVar72 + 1.0);
            lVar35 = lVar35 + 4;
          } while (lVar35 != lVar41);
        }
        uVar26 = *(uint *)(lStack_190 + 0x10);
        if (((uVar26 >> 0x10 & 1) == 0) || ((int)*(uint *)(lStack_1a0 + 0x20) < 1)) {
LAB_1093cd078:
          lStack_540 = 0;
          *(uint *)(lStack_190 + 0x10) = uVar26 | 0x10;
          uVar28 = *(ulong *)(lStack_190 + 0xd0);
        }
        else {
          uVar28 = *(ulong *)(lStack_1a0 + 0x18);
          if ((uVar28 & 1) != 0) {
            uVar79 = 0;
            do {
              lVar41 = *(long *)(uVar28 + 7 + uVar79 * 8);
              if (((*(byte *)(lVar41 + 0x12) & 1) != 0) &&
                 (*(int *)(lVar41 + 0x130) == *(int *)(lStack_190 + 0x130))) goto LAB_1093cd058;
              uVar79 = uVar79 + 1;
            } while (*(uint *)(lStack_1a0 + 0x20) != uVar79);
            goto LAB_1093cd078;
          }
          if ((*(byte *)(uVar28 + 0x12) & 1) == 0) goto LAB_1093cd078;
          uVar79 = (ulong)-(uint)(*(int *)(uVar28 + 0x130) != *(int *)(lStack_190 + 0x130));
LAB_1093cd058:
          if ((int)uVar79 == -1) goto LAB_1093cd078;
          puVar31 = (ulong *)(lStack_1a0 + 0x18);
          if ((uVar28 & 1) != 0) {
            puVar31 = (ulong *)(uVar28 + 7 + (long)(int)uVar79 * 8);
          }
          if ((*(byte *)(*puVar31 + 0x10) >> 4 & 1) == 0) goto LAB_1093cd078;
          lStack_540 = *(long *)(*puVar31 + 0xd0);
          *(uint *)(lStack_190 + 0x10) = uVar26 | 0x10;
          uVar28 = *(ulong *)(lStack_190 + 0xd0);
        }
        if (uVar28 == 0) {
          uVar28 = *(ulong *)(lStack_190 + 8);
          if ((uVar28 & 1) != 0) {
            uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
          }
          func_0x00010933b59c();
          *(ulong *)(lStack_190 + 0xd0) = uVar28;
        }
        ppuVar37 = &PTR_PTR_1132d70f0;
        if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
          ppuVar37 = *(undefined ***)(lStack_198 + 0x30);
        }
        if ((float)uStack_510 != 0.0) {
          piVar13 = (int *)(uVar28 + 0x18);
          iVar25 = *piVar13;
          lVar41 = (long)(int)(float)uStack_510 << 2;
          puVar36 = uStack_508;
          do {
            uVar59 = *puVar36;
            iVar27 = iVar25;
            if (iVar25 == *(int *)(uVar28 + 0x1c)) {
              FUN_109311970(piVar13,iVar25,iVar25 + 1);
              iVar27 = *piVar13;
            }
            iVar25 = iVar27 + 1;
            *(int *)(uVar28 + 0x18) = iVar25;
            *(undefined4 *)(*(long *)(uVar28 + 0x20) + (long)iVar27 * 4) = uVar59;
            puVar36 = puVar36 + 1;
            lVar41 = lVar41 + -4;
          } while (lVar41 != 0);
        }
        if ((int)uStack_500 != 0) {
          piVar13 = (int *)(uVar28 + 0x18);
          iVar25 = *piVar13;
          lVar41 = (long)(int)uStack_500 << 2;
          puVar36 = puStack_4f8;
          do {
            uVar59 = *puVar36;
            iVar27 = iVar25;
            if (iVar25 == *(int *)(uVar28 + 0x1c)) {
              FUN_109311970(piVar13,iVar25,iVar25 + 1);
              iVar27 = *piVar13;
            }
            iVar25 = iVar27 + 1;
            *(int *)(uVar28 + 0x18) = iVar25;
            *(undefined4 *)(*(long *)(uVar28 + 0x20) + (long)iVar27 * 4) = uVar59;
            puVar36 = puVar36 + 1;
            lVar41 = lVar41 + -4;
          } while (lVar41 != 0);
        }
        puVar36 = uStack_508;
        iVar25 = *(int *)(ppuVar37 + 4);
        ppuVar33 = &PTR_PTR_1132d6ef0;
        if ((undefined **)ppuVar37[0x21] != (undefined **)0x0) {
          ppuVar33 = (undefined **)ppuVar37[0x21];
        }
        iVar27 = *(int *)(ppuVar33 + 7);
        uVar79 = (ulong)iVar27;
        if (iVar27 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          if (iVar27 < 0) {
            FUN_1092cc18c();
            goto LAB_1093cef5c;
          }
          puVar23 = (undefined *)(uVar79 << 2);
          __Znwm();
          _bzero();
          if (*(int *)(ppuVar33 + 3) == iVar27) {
            uVar39 = 0;
            puVar29 = ppuVar33[4];
            uVar42 = uVar79;
            if ((long)uVar79 < 2) {
              uVar42 = 1;
            }
            if ((7 < iVar27) && (0x1f < (ulong)((long)puVar23 - (long)puVar29))) {
              uVar39 = uVar42 & 0x7ffffff8;
              puVar19 = (undefined8 *)(puVar23 + 0x10);
              pauVar32 = (undefined1 (*) [16])(puVar29 + 0x10);
              uVar43 = uVar39;
              do {
                auVar83 = pauVar32[-1];
                auVar145 = *pauVar32;
                puVar19[-1] = auVar83._8_8_;
                puVar19[-2] = auVar83._0_8_;
                puVar19[1] = auVar145._8_8_;
                *puVar19 = auVar145._0_8_;
                puVar19 = puVar19 + 4;
                pauVar32 = pauVar32 + 2;
                uVar43 = uVar43 - 8;
              } while (uVar43 != 0);
              if (uVar42 == uVar39) goto LAB_1093cd234;
            }
            lVar41 = uVar42 - uVar39;
            puVar30 = (undefined4 *)(puVar29 + uVar39 * 4);
            puVar40 = (undefined4 *)(puVar23 + uVar39 * 4);
            do {
              *puVar40 = *puVar30;
              lVar41 = lVar41 + -1;
              puVar30 = puVar30 + 1;
              puVar40 = puVar40 + 1;
            } while (lVar41 != 0);
          }
LAB_1093cd234:
          uVar26 = *(uint *)((long)ppuVar33 + 0x3c);
          if (0 < (int)uVar26) {
            iVar57 = 0;
            uVar42 = 0;
            puVar29 = ppuVar33[6];
            if ((long)uVar79 < 2) {
              uVar79 = 1;
            }
            uVar39 = uVar79 & 0x7ffffff8;
            do {
              fVar72 = (float)puVar36[uVar42];
              if (((iVar27 < 8) ||
                  (iVar71 = iVar27 * (int)uVar42, iVar71 + (int)uVar79 + -1 < iVar71)) ||
                 (uVar21 = iVar27 * (int)uVar42,
                 uVar17 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2,
                 pfVar15 = (float *)(puVar23 + 0x10), uVar43 = uVar39, iVar71 = iVar57,
                 puVar23 < puVar29 + uVar17 + uVar79 * 4 && puVar29 + uVar17 < puVar23 + uVar79 * 4)
                 ) {
                uVar43 = 0;
LAB_1093cd2ec:
                lVar41 = uVar79 - uVar43;
                iVar71 = iVar57 + (int)uVar43;
                pfVar15 = (float *)(puVar23 + uVar43 * 4);
                do {
                  *pfVar15 = *pfVar15 + fVar72 * *(float *)(puVar29 + (long)iVar71 * 4);
                  iVar71 = iVar71 + 1;
                  lVar41 = lVar41 + -1;
                  pfVar15 = pfVar15 + 1;
                } while (lVar41 != 0);
              }
              else {
                do {
                  auVar83 = *(undefined1 (*) [16])(puVar29 + (long)iVar71 * 4);
                  auVar145 = ((undefined1 (*) [16])(puVar29 + (long)iVar71 * 4))[1];
                  auVar105._0_8_ =
                       CONCAT44(pfVar15[-3] + auVar83._4_4_ * fVar72,
                                pfVar15[-4] + auVar83._0_4_ * fVar72);
                  auVar105._8_4_ = pfVar15[-2] + auVar83._8_4_ * fVar72;
                  auVar105._12_4_ = pfVar15[-1] + auVar83._12_4_ * fVar72;
                  auVar116._0_8_ =
                       CONCAT44(pfVar15[1] + auVar145._4_4_ * fVar72,
                                *pfVar15 + auVar145._0_4_ * fVar72);
                  auVar116._8_4_ = pfVar15[2] + auVar145._8_4_ * fVar72;
                  auVar116._12_4_ = pfVar15[3] + auVar145._12_4_ * fVar72;
                  *(long *)(pfVar15 + -2) = auVar105._8_8_;
                  *(undefined8 *)(pfVar15 + -4) = auVar105._0_8_;
                  *(long *)(pfVar15 + 2) = auVar116._8_8_;
                  *(undefined8 *)pfVar15 = auVar116._0_8_;
                  uVar43 = uVar43 - 8;
                  pfVar15 = pfVar15 + 8;
                  iVar71 = iVar71 + 8;
                } while (uVar43 != 0);
                uVar43 = uVar39;
                if (uVar79 != uVar39) goto LAB_1093cd2ec;
              }
              uVar42 = uVar42 + 1;
              iVar57 = iVar57 + iVar27;
            } while (uVar42 != uVar26);
          }
        }
        if (0 < iVar25) {
          piVar13 = (int *)(uVar28 + 0x28);
          iVar27 = *piVar13;
          do {
            iVar57 = iVar27;
            if (iVar27 == *(int *)(uVar28 + 0x2c)) {
              FUN_109311970(piVar13,iVar27,iVar27 + 1);
              iVar57 = *piVar13;
            }
            iVar27 = iVar57 + 1;
            *(int *)(uVar28 + 0x28) = iVar27;
            *(undefined4 *)(*(long *)(uVar28 + 0x30) + (long)iVar57 * 4) = 0x3f800000;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        uVar26 = *(uint *)(ppuVar37 + 0xd);
        if (0 < (int)uVar26) {
          uVar79 = 0;
          do {
            if (0.0 < *(float *)(puVar23 + uVar79 * 4)) {
              puVar29 = ppuVar37[0xc];
              ppuVar33 = ppuVar37 + 0xc;
              if (((ulong)puVar29 & 1) != 0) {
                ppuVar33 = (undefined **)(puVar29 + uVar79 * 8 + 7);
              }
              iVar25 = *(int *)(*ppuVar33 + 0x18);
              if (iVar25 != 0) {
                piVar13 = *(int **)(*ppuVar33 + 0x20);
                piVar1 = piVar13 + iVar25;
                lVar41 = *(long *)(uVar28 + 0x30);
                puVar29 = ppuVar37[9];
                if (((ulong)puVar29 & 1) == 0) {
                  iVar27 = *(int *)(puVar29 + 0x10);
                  if (iVar27 == 0) {
                    lVar35 = (long)iVar25 << 2;
                    do {
                      *(float *)(lVar41 + (long)*piVar13 * 4) =
                           *(float *)(puVar23 + uVar79 * 4) *
                           *(float *)(lVar41 + (long)*piVar13 * 4);
                      lVar35 = lVar35 + -4;
                      piVar13 = piVar13 + 1;
                    } while (lVar35 != 0);
                  }
                  else {
                    piVar44 = *(int **)(puVar29 + 0x18);
                    do {
                      *(float *)(lVar41 + (long)*piVar13 * 4) =
                           *(float *)(puVar23 + uVar79 * 4) *
                           *(float *)(lVar41 + (long)*piVar13 * 4);
                      lVar35 = (long)iVar27 << 2;
                      piVar46 = piVar44;
                      do {
                        *(float *)(lVar41 + (long)*piVar46 * 4) =
                             *(float *)(lVar41 + (long)*piVar46 * 4) /
                             *(float *)(puVar23 + uVar79 * 4);
                        lVar35 = lVar35 + -4;
                        piVar46 = piVar46 + 1;
                      } while (lVar35 != 0);
                      piVar13 = piVar13 + 1;
                    } while (piVar13 != piVar1);
                  }
                }
                else {
                  do {
                    lVar35 = (long)*piVar13;
                    *(float *)(lVar41 + lVar35 * 4) =
                         *(float *)(puVar23 + uVar79 * 4) * *(float *)(lVar41 + lVar35 * 4);
                    iVar25 = *(int *)(*(long *)(puVar29 + lVar35 * 8 + 7) + 0x10);
                    if (iVar25 != 0) {
                      lVar53 = (long)iVar25 << 2;
                      piVar44 = *(int **)(*(long *)(puVar29 + lVar35 * 8 + 7) + 0x18);
                      do {
                        *(float *)(lVar41 + (long)*piVar44 * 4) =
                             *(float *)(lVar41 + (long)*piVar44 * 4) /
                             *(float *)(puVar23 + uVar79 * 4);
                        lVar53 = lVar53 + -4;
                        piVar44 = piVar44 + 1;
                      } while (lVar53 != 0);
                    }
                    piVar13 = piVar13 + 1;
                  } while (piVar13 != piVar1);
                }
              }
            }
            uVar79 = uVar79 + 1;
          } while (uVar79 != uVar26);
        }
        if ((*(byte *)(lStack_198 + 0x57) & 1) == 0) {
          if ((int)uStack_4d0 != 0) {
            piVar13 = (int *)(uVar28 + 0x58);
            iVar25 = *piVar13;
            lVar41 = (long)(int)uStack_4d0 << 2;
            puVar36 = puStack_4c8;
            do {
              uVar59 = *puVar36;
              iVar27 = iVar25;
              if (iVar25 == *(int *)(uVar28 + 0x5c)) {
                FUN_109311970(piVar13,iVar25,iVar25 + 1);
                iVar27 = *piVar13;
              }
              iVar25 = iVar27 + 1;
              *(int *)(uVar28 + 0x58) = iVar25;
              *(undefined4 *)(*(long *)(uVar28 + 0x60) + (long)iVar27 * 4) = uVar59;
              puVar36 = puVar36 + 1;
              lVar41 = lVar41 + -4;
            } while (lVar41 != 0);
          }
        }
        if ((*(uint *)(lStack_190 + 0x10) >> 0x12 & 1) == 0) {
          *(float *)(lStack_190 + 0x138) = fStack_4a0;
          *(uint *)(lStack_190 + 0x10) = *(uint *)(lStack_190 + 0x10) | 0x40000;
        }
        uStack_318 = 0;
        ppuStack_320 = &PTR_FUN_110aefb90;
        uStack_300 = 0;
        uStack_310 = 0;
        uStack_308 = 0;
        uStack_2f8 = 0;
        if (*(int *)(lStack_198 + 0x48) == 1) {
          *(undefined4 *)(uVar28 + 0x108) = 0x3f800000;
          *(uint *)(uVar28 + 0x10) = *(uint *)(uVar28 + 0x10) | 1;
          if ((*(byte *)(lStack_198 + 0x11) >> 5 & 1) == 0) {
            uVar79 = (ulong)(uint)*pfStack_4e8;
            fVar72 = pfStack_4e8[1];
            ppuVar33 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(lStack_1a8 + 0x18) != (undefined **)0x0) {
              ppuVar33 = *(undefined ***)(lStack_1a8 + 0x18);
            }
            fVar148 = *(float *)(ppuVar33 + 3) / *(float *)(lStack_190 + 0x138);
            uStack_300 = (ulong)(uint)fVar148;
            uVar26 = 7;
            uStack_310 = 7;
            uStack_308 = *(ulong *)pfStack_4e8;
            if (fVar148 <= 0.0) goto LAB_1093cd7f4;
LAB_1093cd5e4:
            ppuVar33 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(lStack_1a8 + 0x18) != (undefined **)0x0) {
              ppuVar33 = *(undefined ***)(lStack_1a8 + 0x18);
            }
            ppuVar20 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(lStack_1a8 + 0x20) != (undefined **)0x0) {
              ppuVar20 = *(undefined ***)(lStack_1a8 + 0x20);
            }
            fVar72 = (((float)(uStack_308 >> 0x20) - (float)((ulong)ppuVar20[3] >> 0x20)) * fVar148)
                     / (float)((ulong)ppuVar33[3] >> 0x20);
            uVar79 = CONCAT44(fVar72,(((float)uStack_308 - SUB84(ppuVar20[3],0)) * fVar148) /
                                     SUB84(ppuVar33[3],0));
            uVar59 = 4;
            uStack_308 = uVar79;
LAB_1093cd72c:
            fVar146 = (float)uVar79;
            uStack_310 = CONCAT44(uStack_310._4_4_,uVar26);
          }
          else {
            uVar26 = *(uint *)(lStack_198 + 0x58);
            if (uVar26 == 0xffffffff) {
              if ((*(int *)(lStack_190 + 0x154) != 3) ||
                 ((*(byte *)(lStack_190 + 0x10) >> 1 & 1) == 0)) goto LAB_1093cd748;
              puVar31 = (ulong *)(lStack_190 + 0xb8);
            }
            else {
              if (((*(int *)(lStack_190 + 0x158) != 3) || ((int)uVar26 < 0)) ||
                 (*(int *)(lStack_190 + 0x20) <= (int)uVar26)) {
LAB_1093cd748:
                FUN_10937e740(&fStack_2a0,&UNK_10f56b606);
                FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x28c,&fStack_2a0);
                goto joined_r0x0001093cdb98;
              }
              uVar79 = *(ulong *)(lStack_190 + 0x18);
              puVar31 = (ulong *)(lStack_190 + 0x18);
              if ((uVar79 & 1) != 0) {
                puVar31 = (ulong *)(uVar79 + (ulong)uVar26 * 8 + 7);
              }
            }
            pppuVar56 = (undefined ***)*puVar31;
            if (pppuVar56 != &ppuStack_320) {
              func_0x000109340dd8(&ppuStack_320);
              func_0x000109340c8c(&ppuStack_320,pppuVar56);
            }
            fVar72 = (float)(uStack_308 >> 0x20) + 0.5;
            uVar79 = CONCAT44(fVar72,(float)uStack_308 + 0.5);
            uVar26 = (uint)uStack_310 | 3;
            uStack_310 = uStack_310 | 3;
            fVar148 = (float)uStack_300;
            uStack_308 = uVar79;
            if (0.0 < (float)uStack_300) goto LAB_1093cd5e4;
LAB_1093cd7f4:
            fVar146 = (float)uVar79;
            uVar59 = 4;
          }
          *(undefined4 *)(lStack_190 + 0x160) = uVar59;
          *(uint *)(lStack_190 + 0x10) = *(uint *)(lStack_190 + 0x10) | 0x10000000;
          fStack_348 = 0.0;
          uStack_344._0_4_ = 0.0;
          uStack_350 = 0x3f800000;
          dStack_338 = 0.0;
          uStack_344._4_4_ = 1.0;
          fStack_33c = 0.0;
          fStack_330 = 1.0;
          if (*(char *)(lStack_198 + 0x61) == '\x01') {
            ppuVar33 = &PTR_PTR_1132d1810;
            if (*(undefined ***)(lStack_198 + 0x38) != (undefined **)0x0) {
              ppuVar33 = *(undefined ***)(lStack_198 + 0x38);
            }
            uVar26 = *(uint *)ppuVar33[4];
            if (((int)uVar26 < 0) || (*(int *)(lStack_190 + 0x20) <= (int)uVar26)) {
              FUN_10937e740(&fStack_2a0,&UNK_10f56b6aa);
              FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2b5,&fStack_2a0);
            }
            else {
              pauVar32 = (undefined1 (*) [16])(lStack_4a8 + (ulong)uVar26 * 0x24);
              fStack_330 = *(float *)pauVar32[2];
              auVar145 = *pauVar32;
              auVar83 = pauVar32[1];
              auVar106 = NEON_ext(auVar145,auVar83,4,1);
              auVar107._4_12_ = auVar106._4_12_;
              auVar107._0_4_ = auVar106._4_4_;
              auVar109._0_8_ = auVar107._0_8_;
              auVar109._8_4_ = auVar106._12_4_;
              auVar109._12_4_ = auVar106._12_4_;
              auVar108._8_8_ = auVar109._8_8_;
              auVar108._4_4_ = auVar83._4_4_;
              auVar108._0_4_ = auVar106._4_4_;
              auVar110._0_12_ = auVar108._0_12_;
              auVar110._12_4_ = auVar83._12_4_;
              auVar106 = NEON_ext(auVar110,auVar110,8,1);
              auVar83 = NEON_ext(auVar83,auVar145,4,1);
              auVar84._4_12_ = auVar83._4_12_;
              auVar84._0_4_ = auVar83._4_4_;
              auVar86._0_8_ = auVar84._0_8_;
              auVar86._8_4_ = auVar83._12_4_;
              auVar86._12_4_ = auVar83._12_4_;
              auVar85._8_8_ = auVar86._8_8_;
              auVar85._4_4_ = auVar145._4_4_;
              auVar85._0_4_ = auVar83._4_4_;
              auVar87._0_12_ = auVar85._0_12_;
              auVar87._12_4_ = auVar145._12_4_;
              auVar83 = NEON_ext(auVar87,auVar87,8,1);
              fStack_348 = auVar83._8_4_;
              uStack_344._0_4_ = auVar83._12_4_;
              uStack_350 = auVar83._0_8_;
              dStack_338 = auVar106._8_8_;
              uStack_344._4_4_ = auVar106._0_4_;
              fStack_33c = auVar106._4_4_;
LAB_1093cdb1c:
              FUN_1093d3d98(&uStack_350,uVar28 + 0x48);
              if (*(int *)((long)ppuVar37 + 0x134) == 4) {
                *(undefined4 *)(uVar28 + 0x10c) = 4;
                *(uint *)(uVar28 + 0x10) = *(uint *)(uVar28 + 0x10) | 2;
                if ((*(byte *)(lStack_198 + 0x11) >> 6 & 1) == 0) {
                  fStack_550 = (float)uStack_308;
                  dVar5 = uStack_344;
                }
                else {
                  iVar25 = *(int *)(lStack_198 + 0x5c);
                  if ((iVar25 < 0) || (*(int *)(ppuVar37 + 4) <= iVar25)) {
                    FUN_10937e740(&fStack_2a0,&UNK_10f56b728);
                    FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2e0,&fStack_2a0);
                  }
                  if (*(char *)(lStack_198 + 0x57) == '\x01') {
                    if (iVar25 != 0) {
                      FUN_10937e740(&fStack_2a0,&UNK_10f56b741);
                      FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2e8,&fStack_2a0);
                      goto joined_r0x0001093cdb98;
                    }
                    ppuVar33 = &PTR_PTR_1132d6d90;
                    if ((undefined **)ppuVar37[0x23] != (undefined **)0x0) {
                      ppuVar33 = (undefined **)ppuVar37[0x23];
                    }
                    puVar29 = ppuVar33[4];
                    uStack_390 = (int *)CONCAT44(*(undefined4 *)(puVar29 + 0x1c),
                                                 *(undefined4 *)(puVar29 + 0xc));
                    uStack_388 = (int *)CONCAT44(uStack_388._4_4_,*(undefined4 *)(puVar29 + 0x2c));
                    fStack_298 = *(float *)(uVar28 + 0x108);
                    uStack_290 = &uStack_350;
                    uStack_280 = &uStack_390;
                    func_0x0001093d4bc4(&fStack_428,&fStack_2a0);
                    fVar72 = fStack_420;
                    fStack_550 = fStack_428;
                    fVar148 = fStack_424;
                    dVar5 = uStack_344;
                  }
                  else {
                    fStack_294 = 0.0;
                    uStack_290._0_4_ = 0.0;
                    fStack_29c = 0.0;
                    fStack_298 = 0.0;
                    fStack_2a0 = 1.0;
                    uStack_290._4_4_ = 1.0;
                    fStack_288 = 0.0;
                    fStack_284 = 0.0;
                    uStack_280._0_4_ = 0.0;
                    uStack_280._4_4_ = 0.0;
                    fStack_26c = 0.0;
                    fStack_268 = 0.0;
                    fStack_274 = 0.0;
                    fStack_270 = 0.0;
                    fStack_278 = 1.0;
                    fStack_264 = 1.0;
                    dVar5 = uStack_344;
                    if (iVar25 != -1) {
                      do {
                        ppuVar33 = &PTR_PTR_1132d6d90;
                        if ((undefined **)ppuVar37[0x23] != (undefined **)0x0) {
                          ppuVar33 = (undefined **)ppuVar37[0x23];
                        }
                        uStack_344 = dVar5;
                        FUN_1093ca0a8(&uStack_390,ppuVar33,iVar25);
                        fVar72 = *(float *)(*(long *)(uVar28 + 0x30) + (long)iVar25 * 4);
                        lVar41 = (long)iVar25 + (long)iVar25 * 2;
                        if ((int)lVar41 + 2 < *(int *)(uVar28 + 0x58)) {
                          puVar19 = (undefined8 *)(*(long *)(uVar28 + 0x60) + lVar41 * 4);
                          uVar60 = *puVar19;
                          fVar74 = *(float *)(puVar19 + 1);
                          fVar58 = (float)uVar60;
                          fVar88 = (float)((ulong)uVar60 >> 0x20);
                          fVar148 = SQRT(fVar58 * fVar58 + fVar88 * fVar88 + fVar74 * fVar74) +
                                    1e-06;
                          fVar58 = fVar58 / fVar148;
                          fVar88 = fVar88 / fVar148;
                          fVar74 = fVar74 / fVar148;
                          uVar60 = ___sincosf_stret();
                          fStack_2c8 = (float)((ulong)uVar60 >> 0x20);
                          fVar146 = (float)uVar60;
                          uVar78 = CONCAT44(fVar88 * fVar146,fVar58 * fVar146);
                          fVar75 = 1.0 - fStack_2c8;
                          fVar147 = fVar58 * fVar75;
                          uVar60 = NEON_rev64(uVar78,4);
                          fVar148 = fVar147 * fVar74;
                          fVar89 = fVar88 * fVar75 * fVar74;
                          fStack_2e8 = fVar148 - fVar88 * fVar146;
                          fStack_2d0 = fVar148 + (float)uVar60;
                          fStack_2cc = fVar89 - (float)((ulong)uVar60 >> 0x20);
                          uVar60 = NEON_ext(CONCAT44(fVar89,fVar148),uVar78,4,1);
                          fStack_2d8 = (float)uVar60 + (float)((ulong)uVar60 >> 0x20);
                          fVar148 = fVar147 * fVar88 + fVar74 * fVar146;
                          uVar119 = SUB41(fVar148,0);
                          uVar120 = (undefined1)((uint)fVar148 >> 8);
                          uVar121 = (undefined1)((uint)fVar148 >> 0x10);
                          uVar122 = (undefined1)((uint)fVar148 >> 0x18);
                          fStack_2e0 = fVar147 * fVar88 - fVar74 * fVar146;
                          fStack_2f0 = fVar147 * fVar58 + fStack_2c8;
                          fStack_2dc = fVar88 * fVar75 * fVar88 + fStack_2c8;
                          fStack_2c8 = fStack_2c8 + fVar75 * fVar74 * fVar74;
                          dVar5 = uStack_344;
                        }
                        else {
                          FUN_10937e740(&uStack_400,&UNK_10f56b5bf);
                          FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5ae,0x162,&uStack_400);
                          if (lStack_3f0 < 0) {
                            __ZdlPv(uStack_400);
                          }
                          fStack_2e0 = 0.0;
                          fStack_2dc = 1.0;
                          fStack_2d0 = 0.0;
                          fStack_2cc = 0.0;
                          fStack_2f0 = 1.0;
                          fStack_2d8 = 0.0;
                          fStack_2e8 = 0.0;
                          uVar119 = 0;
                          uVar120 = 0;
                          uVar121 = 0;
                          uVar122 = 0;
                          fStack_2c8 = 1.0;
                          dVar5 = uStack_344;
                        }
                        fStack_2e4 = 0.0;
                        fStack_2d4 = 0.0;
                        uStack_2bc = 0;
                        uStack_2c4 = 0;
                        uStack_2b4 = 0x3f800000;
                        fStack_2f0 = fStack_2f0 * fVar72;
                        fStack_2ec = (float)CONCAT13(uVar122,CONCAT12(uVar121,CONCAT11(uVar120,
                                                  uVar119))) * fVar72;
                        fStack_2e8 = fStack_2e8 * fVar72;
                        fStack_2e0 = fStack_2e0 * fVar72;
                        fStack_2dc = fStack_2dc * fVar72;
                        fStack_2d8 = fStack_2d8 * fVar72;
                        fStack_2d0 = fStack_2d0 * fVar72;
                        fStack_2cc = fStack_2cc * fVar72;
                        fStack_2c8 = fStack_2c8 * fVar72;
                        fVar72 = (float)uStack_360;
                        fVar148 = (float)((ulong)uStack_360 >> 0x20);
                        fVar146 = (float)uStack_358;
                        fVar58 = (float)((ulong)uStack_358 >> 0x20);
                        fVar75 = (float)uStack_390 * fStack_2f0 + (float)uStack_380 * fStack_2ec +
                                 fStack_370 * fStack_2e8 + fVar72 * 0.0;
                        fVar89 = uStack_390._4_4_ * fStack_2f0 + uStack_380._4_4_ * fStack_2ec +
                                 fStack_36c * fStack_2e8 + fVar148 * 0.0;
                        fVar73 = (float)uStack_388 * fStack_2f0 + (float)uStack_378 * fStack_2ec +
                                 fStack_368 * fStack_2e8 + fVar146 * 0.0;
                        fVar76 = uStack_388._4_4_ * fStack_2f0 + uStack_378._4_4_ * fStack_2ec +
                                 fStack_364 * fStack_2e8 + fVar58 * 0.0;
                        fVar77 = (float)uStack_390 * fStack_2e0 + (float)uStack_380 * fStack_2dc +
                                 fStack_370 * fStack_2d8 + fVar72 * 0.0;
                        fVar118 = uStack_390._4_4_ * fStack_2e0 + uStack_380._4_4_ * fStack_2dc +
                                  fStack_36c * fStack_2d8 + fVar148 * 0.0;
                        fVar74 = (float)uStack_388 * fStack_2e0 + (float)uStack_378 * fStack_2dc +
                                 fStack_368 * fStack_2d8 + fVar146 * 0.0;
                        fVar88 = uStack_388._4_4_ * fStack_2e0 + uStack_378._4_4_ * fStack_2dc +
                                 fStack_364 * fStack_2d8 + fVar58 * 0.0;
                        fVar137 = (float)uStack_390 * fStack_2d0 + (float)uStack_380 * fStack_2cc +
                                  fStack_370 * fStack_2c8;
                        fVar142 = uStack_390._4_4_ * fStack_2d0 + uStack_380._4_4_ * fStack_2cc +
                                  fStack_36c * fStack_2c8;
                        fVar143 = (float)uStack_388 * fStack_2d0 + (float)uStack_378 * fStack_2cc +
                                  fStack_368 * fStack_2c8;
                        fVar147 = uStack_388._4_4_ * fStack_2d0 + uStack_378._4_4_ * fStack_2cc +
                                  fStack_364 * fStack_2c8;
                        fVar135 = (float)uStack_390 * 0.0 + (float)uStack_380 * 0.0 +
                                  fStack_370 * 0.0 + fVar72 * 1.0;
                        fVar136 = uStack_390._4_4_ * 0.0 + uStack_380._4_4_ * 0.0 + fStack_36c * 0.0
                                  + fVar148 * 1.0;
                        fVar144 = (float)uStack_388 * 0.0 + (float)uStack_378 * 0.0 +
                                  fStack_368 * 0.0 + fVar146 * 1.0;
                        fVar101 = uStack_388._4_4_ * 0.0 + uStack_378._4_4_ * 0.0 + fStack_364 * 0.0
                                  + fVar58 * 1.0;
                        fVar58 = fVar89 * fStack_2a0;
                        fVar112 = fVar73 * fStack_2a0;
                        fVar113 = fVar76 * fStack_2a0;
                        fVar72 = fVar74 * fStack_29c;
                        fVar148 = fVar88 * fStack_29c;
                        fVar146 = fVar147 * fStack_298;
                        fStack_2a0 = fVar75 * fStack_2a0 + fVar77 * fStack_29c +
                                     fVar137 * fStack_298 + fVar135 * fStack_294;
                        fStack_29c = fVar58 + fVar118 * fStack_29c + fVar142 * fStack_298 +
                                     fVar136 * fStack_294;
                        fStack_298 = fVar112 + fVar72 + fVar143 * fStack_298 + fVar144 * fStack_294;
                        fStack_294 = fVar113 + fVar148 + fVar146 + fVar101 * fStack_294;
                        fVar58 = fVar89 * (float)uStack_290;
                        fVar112 = fVar73 * (float)uStack_290;
                        fVar113 = fVar76 * (float)uStack_290;
                        fVar72 = fVar74 * uStack_290._4_4_;
                        fVar148 = fVar88 * uStack_290._4_4_;
                        fVar146 = fVar147 * fStack_288;
                        uStack_290._0_4_ =
                             fVar75 * (float)uStack_290 + fVar77 * uStack_290._4_4_ +
                             fVar137 * fStack_288 + fVar135 * fStack_284;
                        uStack_290._4_4_ =
                             fVar58 + fVar118 * uStack_290._4_4_ + fVar142 * fStack_288 +
                             fVar136 * fStack_284;
                        fStack_288 = fVar112 + fVar72 + fVar143 * fStack_288 + fVar144 * fStack_284;
                        fStack_284 = fVar113 + fVar148 + fVar146 + fVar101 * fStack_284;
                        fVar72 = fVar89 * (float)uStack_280;
                        fVar148 = fVar73 * (float)uStack_280;
                        fVar146 = fVar76 * (float)uStack_280;
                        fVar58 = fVar147 * fStack_278;
                        uStack_280._0_4_ =
                             fVar75 * (float)uStack_280 + fVar77 * uStack_280._4_4_ +
                             fVar137 * fStack_278 + fVar135 * fStack_274;
                        fVar72 = fVar72 + fVar118 * uStack_280._4_4_ + fVar142 * fStack_278 +
                                 fVar136 * fStack_274;
                        fStack_278 = fVar148 + fVar74 * uStack_280._4_4_ + fVar143 * fStack_278 +
                                     fVar144 * fStack_274;
                        fVar148 = fVar146 + fVar88 * uStack_280._4_4_ + fVar58 +
                                  fVar101 * fStack_274;
                        fVar89 = fVar89 * fStack_270;
                        fVar73 = fVar73 * fStack_270;
                        fVar76 = fVar76 * fStack_270;
                        fVar74 = fVar74 * fStack_26c;
                        fVar88 = fVar88 * fStack_26c;
                        fVar147 = fVar147 * fStack_268;
                        fStack_270 = fVar75 * fStack_270 + fVar77 * fStack_26c +
                                     fVar137 * fStack_268 + fVar135 * fStack_264;
                        fStack_26c = fVar89 + fVar118 * fStack_26c + fVar142 * fStack_268 +
                                     fVar136 * fStack_264;
                        fStack_268 = fVar73 + fVar74 + fVar143 * fStack_268 + fVar144 * fStack_264;
                        fStack_264 = fVar76 + fVar88 + fVar147 + fVar101 * fStack_264;
                        fStack_274 = (float)(CONCAT17((char)((uint)fVar148 >> 0x18),
                                                      CONCAT16((char)((uint)fVar148 >> 0x10),
                                                               CONCAT15((char)((uint)fVar148 >> 8),
                                                                        CONCAT14(SUB41(fVar148,0),
                                                                                 fStack_278)))) >>
                                            0x20);
                        uStack_280._4_4_ =
                             (float)(CONCAT17((char)((uint)fVar72 >> 0x18),
                                              CONCAT16((char)((uint)fVar72 >> 0x10),
                                                       CONCAT15((char)((uint)fVar72 >> 8),
                                                                CONCAT14(SUB41(fVar72,0),
                                                                         (float)uStack_280)))) >>
                                    0x20);
                        iVar25 = *(int *)(ppuVar37[7] + (long)iVar25 * 4);
                      } while (iVar25 != -1);
                    }
                    uStack_344._4_4_ = (float)((ulong)dVar5 >> 0x20);
                    uStack_344._0_4_ = SUB84(dVar5,0);
                    fVar72 = *(float *)(uVar28 + 0x108);
                    fStack_550 = ((float)uStack_350 * fStack_270 + (float)uStack_344 * fStack_26c +
                                 SUB84(dStack_338,0) * fStack_268) * fVar72;
                    fVar148 = ((float)((ulong)uStack_350 >> 0x20) * fStack_270 +
                               uStack_344._4_4_ * fStack_26c +
                              (float)((ulong)dStack_338 >> 0x20) * fStack_268) * fVar72;
                    fVar72 = (fStack_348 * fStack_270 + fStack_26c * fStack_33c +
                             fStack_330 * fStack_268) * fVar72;
                    fStack_428 = fStack_270;
                    fStack_424 = fStack_26c;
                    fStack_420 = fStack_268;
                  }
                  fStack_550 = (float)uStack_308 - fStack_550;
                  uStack_308 = CONCAT44((float)(uStack_308 >> 0x20) - fVar148,fStack_550);
                  uStack_300 = CONCAT44(uStack_300._4_4_,(float)uStack_300 - fVar72);
                  uStack_310 = uStack_310 | 7;
                }
                piVar13 = (int *)(uVar28 + 0x38);
                iVar25 = *piVar13;
                iVar27 = *(int *)(uVar28 + 0x3c);
                uStack_344 = dVar5;
                if (iVar25 == iVar27) {
                  FUN_109311970(piVar13,iVar27,iVar27 + 1);
                  iVar25 = *(int *)(uVar28 + 0x38);
                  iVar27 = *(int *)(uVar28 + 0x3c);
                }
                lVar41 = *(long *)(uVar28 + 0x40);
                iVar57 = iVar25 + 1;
                *(int *)(uVar28 + 0x38) = iVar57;
                *(float *)(lVar41 + (long)iVar25 * 4) = fStack_550;
                uVar59 = uStack_308._4_4_;
                if (iVar57 == iVar27) {
                  FUN_109311970(piVar13,iVar27,iVar27 + 1);
                  lVar41 = *(long *)(uVar28 + 0x40);
                  iVar57 = *(int *)(uVar28 + 0x38);
                  iVar27 = *(int *)(uVar28 + 0x3c);
                  iVar25 = iVar57 + 1;
                  *piVar13 = iVar25;
                  *(undefined4 *)(lVar41 + (long)iVar57 * 4) = uVar59;
                  uVar59 = (float)uStack_300;
                  if (iVar25 != iVar27) goto LAB_1093ce420;
LAB_1093ceea0:
                  FUN_109311970(piVar13,iVar27,iVar27 + 1);
                  iVar25 = *(int *)(uVar28 + 0x38);
                  *piVar13 = iVar25 + 1;
                  *(undefined4 *)(*(long *)(uVar28 + 0x40) + (long)iVar25 * 4) = uVar59;
                  bVar4 = *(byte *)(lStack_198 + 0x10);
                }
                else {
                  iVar25 = iVar25 + 2;
                  *piVar13 = iVar25;
                  *(undefined4 *)(lVar41 + (long)iVar57 * 4) = uStack_308._4_4_;
                  uVar59 = (float)uStack_300;
                  if (iVar25 == iVar27) goto LAB_1093ceea0;
LAB_1093ce420:
                  *piVar13 = iVar25 + 1;
                  *(float *)(lVar41 + (long)iVar25 * 4) = (float)uStack_300;
                  bVar4 = *(byte *)(lStack_198 + 0x10);
                }
                if (((bVar4 >> 1 & 1) == 0) || (*(int *)(lStack_190 + 0x158) == 3)) {
                  FUN_1093dfc14(auStack_3a8,*(long *)(lStack_198 + 0x20),
                                *(long *)(lStack_198 + 0x20) + (long)*(int *)(lStack_198 + 0x18) * 4
                               );
                  lStack_3b0 = 0;
                  uStack_3b8 = 0;
                  lStack_3c8 = 0;
                  uStack_3d0 = 0;
                  puStack_3d8 = &uStack_3d0;
                  puStack_3c0 = &uStack_3b8;
                  if ((*(byte *)(lStack_198 + 0x10) >> 1 & 1) != 0) {
                    ppuVar33 = *(undefined ***)(lStack_198 + 0x38);
                    if (*(int *)(ppuVar33 + 6) != 0) {
                      puVar36 = (undefined4 *)ppuVar33[7];
                      lVar41 = (long)*(int *)(ppuVar33 + 6) << 2;
                      do {
                        ppuVar18 = &puStack_3c0;
                        func_0x000108a2a39c(ppuVar18,&uStack_3b8,&fStack_2a0,&uStack_390,puVar36);
                        if (*ppuVar18 == (undefined8 *)0x0) {
                          puVar19 = (undefined8 *)0x20;
                          __Znwm();
                          *(undefined4 *)((long)puVar19 + 0x1c) = *puVar36;
                          *puVar19 = 0;
                          puVar19[1] = 0;
                          puVar19[2] = CONCAT44(fStack_29c,fStack_2a0);
                          *ppuVar18 = puVar19;
                          if ((undefined8 *)*puStack_3c0 != (undefined8 *)0x0) {
                            puStack_3c0 = (undefined8 *)*puStack_3c0;
                          }
                          func_0x000107c27d40(uStack_3b8);
                          lStack_3b0 = lStack_3b0 + 1;
                        }
                        puVar36 = puVar36 + 1;
                        lVar41 = lVar41 + -4;
                      } while (lVar41 != 0);
                      ppuVar33 = *(undefined ***)(lStack_198 + 0x38);
                    }
                    ppuVar20 = &PTR_PTR_1132d1810;
                    if (ppuVar33 != (undefined **)0x0) {
                      ppuVar20 = ppuVar33;
                    }
                    if (*(int *)(ppuVar20 + 0xc) != 0) {
                      puVar36 = (undefined4 *)ppuVar20[0xd];
                      lVar41 = (long)*(int *)(ppuVar20 + 0xc) << 2;
                      do {
                        ppuVar18 = &puStack_3d8;
                        func_0x000108a2a39c(ppuVar18,&uStack_3d0,&fStack_2a0,&uStack_390,puVar36);
                        if (*ppuVar18 == (undefined8 *)0x0) {
                          puVar19 = (undefined8 *)0x20;
                          __Znwm();
                          *(undefined4 *)((long)puVar19 + 0x1c) = *puVar36;
                          *puVar19 = 0;
                          puVar19[1] = 0;
                          puVar19[2] = CONCAT44(fStack_29c,fStack_2a0);
                          *ppuVar18 = puVar19;
                          if ((undefined8 *)*puStack_3d8 != (undefined8 *)0x0) {
                            puStack_3d8 = (undefined8 *)*puStack_3d8;
                          }
                          func_0x000107c27d40(uStack_3d0);
                          lStack_3c8 = lStack_3c8 + 1;
                        }
                        puVar36 = puVar36 + 1;
                        lVar41 = lVar41 + -4;
                      } while (lVar41 != 0);
                    }
                  }
                  uVar79 = (ulong)*(uint *)(ppuVar37 + 4);
                  if (0 < (int)*(uint *)(ppuVar37 + 4)) {
                    lVar41 = 0;
                    do {
                      plVar34 = plStack_3a0;
                      if (*(char *)(lStack_198 + 0x57) == '\x01') {
                        uStack_388 = (int *)0x0;
                        uStack_390 = (int *)0x3f800000;
                        uStack_378 = 0;
                        uStack_380 = (int *)0x3f800000;
                        fStack_370 = 1.0;
                        for (; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
                          if (*(int *)((long)plVar34 + 0x1c) <= lVar41) {
                            if (lVar41 <= *(int *)((long)plVar34 + 0x1c)) goto LAB_1093ce868;
                            plVar34 = plVar34 + 1;
                          }
                        }
                        ppuVar33 = &PTR_PTR_1132d1810;
                        if (*(undefined ***)(lStack_198 + 0x38) != (undefined **)0x0) {
                          ppuVar33 = *(undefined ***)(lStack_198 + 0x38);
                        }
                        uVar26 = *(uint *)(ppuVar33[4] + lVar41 * 4);
                        if ((((int)uVar26 < 0) || (*(int *)(lStack_190 + 0x20) <= (int)uVar26)) ||
                           ((*(ulong *)(lStack_498 + (ulong)(uVar26 >> 6) * 8) >>
                             ((ulong)uVar26 & 0x3f) & 1) == 0)) {
LAB_1093ce6c4:
                          if ((lStack_540 != 0) && ((*(byte *)(lStack_198 + 0x60) & 1) != 0)) {
                            if ((int)lVar41 * 3 + 2 < *(int *)(lStack_540 + 0x58)) {
                              puVar19 = (undefined8 *)(*(long *)(lStack_540 + 0x60) + lVar41 * 0xc);
                              uVar60 = *puVar19;
                              fVar74 = *(float *)(puVar19 + 1);
                              fVar58 = (float)uVar60;
                              fVar147 = (float)((ulong)uVar60 >> 0x20);
                              fVar72 = SQRT(fVar58 * fVar58 + fVar147 * fVar147 + fVar74 * fVar74) +
                                       1e-06;
                              fVar58 = fVar58 / fVar72;
                              fVar147 = fVar147 / fVar72;
                              fVar74 = fVar74 / fVar72;
                              uVar60 = ___sincosf_stret();
                              fVar88 = (float)((ulong)uVar60 >> 0x20);
                              fVar146 = (float)uVar60;
                              auVar111._0_4_ = fVar58 * fVar146;
                              auVar111._4_4_ = fVar147 * fVar146;
                              auVar111._8_8_ = 0;
                              fVar146 = fVar74 * fVar146;
                              fVar75 = 1.0 - fVar88;
                              fVar72 = fVar58 * fVar75;
                              fVar148 = fVar147 * fVar75;
                              uVar119 = (undefined1)((uint)fVar148 >> 8);
                              uVar120 = (undefined1)((uint)fVar148 >> 0x10);
                              uVar121 = (undefined1)((uint)fVar148 >> 0x18);
                              auVar140._4_4_ = fVar147;
                              auVar140._0_4_ = fVar74;
                              auVar140._8_8_ = 0;
                              auVar83 = NEON_rev64(auVar140,4);
                              auVar141._0_4_ = fVar72 * fVar74;
                              auVar141._4_4_ = fVar72 * auVar83._0_4_;
                              auVar141._8_4_ =
                                   (float)(CONCAT17(uVar121,CONCAT16(uVar120,CONCAT15(uVar119,
                                                  CONCAT14(SUB41(fVar148,0),fVar72)))) >> 0x20) *
                                   fVar147;
                              auVar141._12_4_ =
                                   (float)(CONCAT17(uVar121,CONCAT16(uVar120,CONCAT15(uVar119,
                                                  CONCAT14(SUB41(fVar148,0),fVar72)))) >> 0x20) *
                                   auVar83._4_4_;
                              auVar145 = NEON_ext(auVar111,auVar111,4,1);
                              uStack_388 = (int *)CONCAT44(auVar141._4_4_ - fVar146,
                                                           auVar141._0_4_ - auVar145._0_4_);
                              fStack_370 = fVar88 + fVar75 * fVar74 * fVar74;
                              uStack_390 = (int *)CONCAT44(fVar146 + fVar147 * fVar72,
                                                           fVar88 + fVar58 * fVar72);
                              auVar83 = NEON_ext(auVar141,auVar141,0xc,1);
                              fVar72 = auVar83._4_4_ + auVar111._4_4_;
                              uStack_378 = NEON_ext(CONCAT17((char)((uint)fVar72 >> 0x18),
                                                             CONCAT16((char)((uint)fVar72 >> 0x10),
                                                                      CONCAT15((char)((uint)fVar72
                                                                                     >> 8),
                                                                               CONCAT14(SUB41(fVar72
                                                  ,0),auVar83._0_4_ + auVar111._0_4_)))),
                                                  CONCAT44(auVar83._4_4_ - auVar111._4_4_,
                                                           auVar83._0_4_ - auVar111._0_4_),4,1);
                              auVar6._4_8_ = auVar83._8_8_;
                              auVar6._0_4_ = auVar141._4_4_ + fVar146;
                              auVar117._0_8_ = auVar6._0_8_ << 0x20;
                              auVar117._8_4_ = auVar141._8_4_ + fVar88;
                              auVar117._12_4_ = auVar141._12_4_ + auVar145._12_4_;
                              uStack_380 = auVar117._8_8_;
                            }
                            else {
                              FUN_10937e740(&fStack_2a0,&UNK_10f56b5bf);
                              FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5ae,0x162,&fStack_2a0);
                              uStack_390 = (int *)0x3f800000;
                              uStack_388 = (int *)0x0;
                              uStack_380 = (int *)0x3f800000;
                              uStack_378 = 0;
                              fStack_370 = 1.0;
                            }
                          }
                        }
                        else {
                          uVar79 = *(ulong *)(lStack_190 + 0x18);
                          puVar31 = (ulong *)(lStack_190 + 0x18);
                          if ((uVar79 & 1) != 0) {
                            puVar31 = (ulong *)(uVar79 + (ulong)uVar26 * 8 + 7);
                          }
                          if (*(float *)(*puVar31 + 0x24) < *(float *)(ppuVar33 + 0x11))
                          goto LAB_1093ce6c4;
                          pauVar32 = (undefined1 (*) [16])(lStack_4a8 + (ulong)(uVar26 * 9) * 4);
                          auVar83 = *pauVar32;
                          auVar145 = pauVar32[1];
                          auVar106 = NEON_ext(auVar145,auVar83,4,1);
                          auVar93._4_12_ = auVar106._4_12_;
                          auVar93._0_4_ = auVar106._4_4_;
                          auVar95._0_8_ = auVar93._0_8_;
                          auVar95._8_4_ = auVar106._12_4_;
                          auVar95._12_4_ = auVar106._12_4_;
                          auVar94._8_8_ = auVar95._8_8_;
                          auVar94._4_4_ = auVar83._4_4_;
                          auVar94._0_4_ = auVar106._4_4_;
                          auVar96._0_12_ = auVar94._0_12_;
                          auVar96._12_4_ = auVar83._12_4_;
                          auVar106 = NEON_ext(auVar96,auVar96,8,1);
                          auVar83 = NEON_ext(auVar83,auVar145,4,1);
                          auVar63._4_12_ = auVar83._4_12_;
                          auVar63._0_4_ = auVar83._4_4_;
                          auVar65._0_8_ = auVar63._0_8_;
                          auVar65._8_4_ = auVar83._12_4_;
                          auVar65._12_4_ = auVar83._12_4_;
                          auVar64._8_8_ = auVar65._8_8_;
                          auVar64._4_4_ = auVar145._4_4_;
                          auVar64._0_4_ = auVar83._4_4_;
                          auVar66._0_12_ = auVar64._0_12_;
                          auVar66._12_4_ = auVar145._12_4_;
                          auVar83 = NEON_ext(auVar66,auVar66,8,1);
                          fStack_2e8 = auVar106._8_4_;
                          fStack_2e4 = auVar106._12_4_;
                          fStack_2f0 = auVar106._0_4_;
                          fStack_2ec = auVar106._4_4_;
                          fStack_2d8 = auVar83._8_4_;
                          fStack_2d4 = auVar83._12_4_;
                          fStack_2e0 = auVar83._0_4_;
                          fStack_2dc = auVar83._4_4_;
                          fStack_2d0 = *(float *)pauVar32[2];
                          if (lVar41 == 0) {
                            pauVar32 = *(undefined1 (**) [16])(uVar28 + 0x50);
                          }
                          else {
                            pauVar32 = (undefined1 (*) [16])
                                       (*(long *)(uVar28 + 0xe0) +
                                       (long)*(int *)(ppuVar37[7] + lVar41 * 4) * 0x24);
                          }
                          auVar83 = *pauVar32;
                          auVar145 = pauVar32[1];
                          auVar106 = NEON_ext(auVar145,auVar83,4,1);
                          auVar97._4_12_ = auVar106._4_12_;
                          auVar97._0_4_ = auVar106._4_4_;
                          auVar99._0_8_ = auVar97._0_8_;
                          auVar99._8_4_ = auVar106._12_4_;
                          auVar99._12_4_ = auVar106._12_4_;
                          auVar98._8_8_ = auVar99._8_8_;
                          auVar98._4_4_ = auVar83._4_4_;
                          auVar98._0_4_ = auVar106._4_4_;
                          auVar100._0_12_ = auVar98._0_12_;
                          auVar100._12_4_ = auVar83._12_4_;
                          auVar106 = NEON_ext(auVar100,auVar100,8,1);
                          auVar83 = NEON_ext(auVar83,auVar145,4,1);
                          auVar67._4_12_ = auVar83._4_12_;
                          auVar67._0_4_ = auVar83._4_4_;
                          auVar69._0_8_ = auVar67._0_8_;
                          auVar69._8_4_ = auVar83._12_4_;
                          auVar69._12_4_ = auVar83._12_4_;
                          auVar68._8_8_ = auVar69._8_8_;
                          auVar68._4_4_ = auVar145._4_4_;
                          auVar68._0_4_ = auVar83._4_4_;
                          auVar70._0_12_ = auVar68._0_12_;
                          auVar70._12_4_ = auVar145._12_4_;
                          auVar83 = NEON_ext(auVar70,auVar70,8,1);
                          uStack_3f8 = auVar106._8_8_;
                          uStack_400 = auVar106._0_8_;
                          uStack_3e8 = auVar83._8_8_;
                          lStack_3f0 = auVar83._0_8_;
                          uStack_3e0 = *(undefined4 *)pauVar32[2];
                          ppuVar33 = &PTR_PTR_1132d6d90;
                          if ((undefined **)ppuVar37[0x23] != (undefined **)0x0) {
                            ppuVar33 = (undefined **)ppuVar37[0x23];
                          }
                          pfVar15 = (float *)(ppuVar33[4] + lVar41 * 0x40);
                          fStack_428 = *pfVar15;
                          fStack_41c = pfVar15[1];
                          fStack_410 = pfVar15[2];
                          fStack_424 = pfVar15[4];
                          fStack_418 = pfVar15[5];
                          fStack_40c = pfVar15[6];
                          fStack_420 = pfVar15[8];
                          fStack_414 = pfVar15[9];
                          fStack_408 = pfVar15[10];
                          FUN_1093d4d98(&fStack_2a0,&fStack_428,&uStack_400);
                          uStack_390 = (int *)CONCAT44(fStack_29c * fStack_2f0 +
                                                       (float)uStack_290 * fStack_2ec +
                                                       fStack_284 * fStack_2e8,
                                                       fStack_2a0 * fStack_2f0 +
                                                       fStack_294 * fStack_2ec +
                                                       fStack_288 * fStack_2e8);
                          fStack_2b0 = fStack_298 * fStack_2f0 + fStack_2ec * uStack_290._4_4_ +
                                       fStack_2e8 * (float)uStack_280;
                          fStack_2ac = fStack_2a0 * fStack_2e4 + fStack_294 * fStack_2e0 +
                                       fStack_288 * fStack_2dc;
                          fVar72 = fStack_29c * fStack_2e4 + (float)uStack_290 * fStack_2e0 +
                                   fStack_284 * fStack_2dc;
                          uStack_2a8 = (undefined4)
                                       (CONCAT17((char)((uint)fVar72 >> 0x18),
                                                 CONCAT16((char)((uint)fVar72 >> 0x10),
                                                          CONCAT15((char)((uint)fVar72 >> 8),
                                                                   CONCAT14(SUB41(fVar72,0),
                                                                            fStack_2ac)))) >> 0x20);
                          fStack_2a4 = fStack_298 * fStack_2e4 + fStack_2e0 * uStack_290._4_4_ +
                                       fStack_2dc * (float)uStack_280;
                          uStack_378 = CONCAT44(fStack_29c * fStack_2d8 +
                                                (float)uStack_290 * fStack_2d4 +
                                                fStack_284 * fStack_2d0,
                                                fStack_2a0 * fStack_2d8 + fStack_294 * fStack_2d4 +
                                                fStack_288 * fStack_2d0);
                          fStack_370 = fStack_298 * fStack_2d8 + fStack_2d4 * uStack_290._4_4_ +
                                       (float)uStack_280 * fStack_2d0;
                          uStack_388 = (int *)CONCAT44(fStack_2ac,fStack_2b0);
                          uStack_380 = (int *)CONCAT44(fStack_2a4,uStack_2a8);
                        }
LAB_1093ce868:
                        FUN_1093dfd04(&fStack_2a0,&uStack_390);
                        fVar58 = fStack_294;
                        fVar146 = fStack_298;
                        fVar148 = fStack_29c;
                        fVar72 = fStack_2a0;
                        iVar25 = *(int *)(uVar28 + 0x58);
                        iVar27 = *(int *)(uVar28 + 0x5c);
                        if (iVar25 == iVar27) {
                          FUN_109311970(uVar28 + 0x58,iVar27,iVar27 + 1);
                          iVar25 = *(int *)(uVar28 + 0x58);
                          iVar27 = *(int *)(uVar28 + 0x5c);
                        }
                        lVar35 = *(long *)(uVar28 + 0x60);
                        iVar57 = iVar25 + 1;
                        *(int *)(uVar28 + 0x58) = iVar57;
                        *(float *)(lVar35 + (long)iVar25 * 4) = fVar72 * fVar58;
                        if (iVar57 == iVar27) {
                          FUN_109311970(uVar28 + 0x58,iVar27,iVar27 + 1);
                          lVar35 = *(long *)(uVar28 + 0x60);
                          iVar57 = *(int *)(uVar28 + 0x58);
                          iVar27 = *(int *)(uVar28 + 0x5c);
                        }
                        iVar25 = iVar57 + 1;
                        *(int *)(uVar28 + 0x58) = iVar25;
                        *(float *)(lVar35 + (long)iVar57 * 4) = fVar148 * fVar58;
                        if (iVar25 == iVar27) {
                          FUN_109311970(uVar28 + 0x58,iVar27,iVar27 + 1);
                          iVar25 = *(int *)(uVar28 + 0x58);
                          lVar35 = *(long *)(uVar28 + 0x60);
                        }
                        *(int *)(uVar28 + 0x58) = iVar25 + 1;
                        *(float *)(lVar35 + (long)iVar25 * 4) = fVar146 * fVar58;
                      }
                      else {
                        for (; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
                          if (*(int *)((long)plVar34 + 0x1c) <= lVar41) {
                            if (lVar41 <= *(int *)((long)plVar34 + 0x1c)) {
                              puVar19 = (undefined8 *)
                                        (*(long *)(uVar28 + 0x60) +
                                        (ulong)(uint)((int)lVar41 * 3) * 4);
                              *(undefined4 *)(puVar19 + 1) = 0;
                              *puVar19 = 0;
                              break;
                            }
                            plVar34 = plVar34 + 1;
                          }
                        }
                      }
                      lVar35 = lVar41 + 1;
                      FUN_1093ca7e0(ppuVar37,lVar41,lVar35,0,uVar28);
                      if ((*(byte *)(lStack_198 + 0x10) >> 1 & 1) != 0) {
                        FUN_1093d26ec(*(undefined8 *)(lStack_198 + 0x38),ppuVar37,&puStack_3c0,
                                      &puStack_3d8,lStack_1a8,lVar41,1,lStack_190);
                      }
                      uVar79 = (ulong)*(int *)(ppuVar37 + 4);
                      lVar41 = lVar35;
                    } while (lVar35 < (long)uVar79);
                  }
                  iVar25 = (int)uVar79;
                  if ((*(byte *)(lStack_198 + 0x12) >> 6 & 1) == 0) {
                    *(undefined4 *)(uVar28 + 0x88) = 0;
                    if (0 < iVar25) goto LAB_1093cebdc;
LAB_1093ceb68:
                    if (iVar25 < 0) {
                      *(int *)(uVar28 + 0x88) = iVar25;
                    }
                    *(int *)(uVar28 + 0x98) = iVar25;
                  }
                  else {
                    lVar41 = *(long *)(uVar28 + 0xf0);
                    fVar72 = *(float *)(lVar41 + (long)*(int *)(lStack_198 + 0x6c) * 0xc + 8);
                    *(float *)(*(long *)(uVar28 + 0x40) + 8) =
                         *(float *)(*(long *)(uVar28 + 0x40) + 8) - fVar72;
                    if (iVar25 < 1) {
                      *(undefined4 *)(uVar28 + 0x88) = 0;
                      goto LAB_1093ceb68;
                    }
                    if (iVar25 == 1) {
                      uVar39 = 0;
LAB_1093cebb0:
                      lVar35 = (uVar79 & 0xffffffff) - uVar39;
                      pfVar15 = (float *)(lVar41 + uVar39 * 0xc + 8);
                      do {
                        *pfVar15 = *pfVar15 - fVar72;
                        lVar35 = lVar35 + -1;
                        pfVar15 = pfVar15 + 3;
                      } while (lVar35 != 0);
                    }
                    else {
                      uVar39 = uVar79 & 0x7ffffffe;
                      pfVar15 = (float *)(lVar41 + 0x14);
                      uVar42 = uVar39;
                      do {
                        pfVar15[-3] = pfVar15[-3] - fVar72;
                        *pfVar15 = *pfVar15 - fVar72;
                        uVar42 = uVar42 - 2;
                        pfVar15 = pfVar15 + 6;
                      } while (uVar42 != 0);
                      if (uVar39 != (uVar79 & 0xffffffff)) goto LAB_1093cebb0;
                    }
                    *(undefined4 *)(uVar28 + 0x88) = 0;
LAB_1093cebdc:
                    if (*(int *)(uVar28 + 0x8c) < iVar25) {
                      FUN_109311970((int *)(uVar28 + 0x88),0,uVar79);
                      iVar27 = *(int *)(uVar28 + 0x88);
                    }
                    else {
                      iVar27 = 0;
                    }
                    *(int *)(uVar28 + 0x88) = iVar25;
                    if (iVar27 != iVar25) {
                      _memset_pattern16(*(long *)(uVar28 + 0x90) + (long)iVar27 * 4,&UNK_10dfc9020,
                                        ((uVar79 & 0xffffffff) - (long)iVar27) * 4);
                    }
                    iVar27 = 0;
                    piVar13 = (int *)(uVar28 + 0x98);
                    *piVar13 = 0;
                    if (*(int *)(uVar28 + 0x9c) < iVar25) {
                      FUN_109311b98(piVar13,0,uVar79);
                      iVar27 = *piVar13;
                    }
                    *(int *)(uVar28 + 0x98) = iVar25;
                    if (iVar27 != iVar25) {
                      _memset(*(long *)(uVar28 + 0xa0) + (long)iVar27,1,
                              (uVar79 & 0xffffffff) - (long)iVar27);
                    }
                  }
                  uVar26 = *(uint *)(lStack_198 + 0x10);
                  if (((uVar26 >> 1 & 1) == 0) ||
                     (ppuVar33 = *(undefined ***)(lStack_198 + 0x38),
                     *(char *)((long)ppuVar33 + 0x84) != '\x01')) {
                    if (*(char *)(lStack_198 + 99) == '\x01') {
                      if ((int)uStack_4c0 != 0) {
                        piVar13 = (int *)(uVar28 + 0x68);
                        iVar25 = *piVar13;
                        lVar41 = (long)(int)uStack_4c0 << 2;
                        puVar36 = puStack_4b8;
                        do {
                          uVar59 = *puVar36;
                          iVar27 = iVar25;
                          if (iVar25 == *(int *)(uVar28 + 0x6c)) {
                            FUN_109311970(piVar13,iVar25,iVar25 + 1);
                            iVar27 = *piVar13;
                          }
                          iVar25 = iVar27 + 1;
                          *(int *)(uVar28 + 0x68) = iVar25;
                          *(undefined4 *)(*(long *)(uVar28 + 0x70) + (long)iVar27 * 4) = uVar59;
                          puVar36 = puVar36 + 1;
                          lVar41 = lVar41 + -4;
                        } while (lVar41 != 0);
                      }
                      ppuVar20 = ppuVar37 + 0x15;
                      goto LAB_1093ceda8;
                    }
                  }
                  else {
                    uVar79 = *(ulong *)(lStack_190 + 0x18);
                    puVar31 = (ulong *)(lStack_190 + 0x18);
                    if ((uVar79 & 1) != 0) {
                      puVar31 = (ulong *)(uVar79 + 7);
                    }
                    if (*(int *)(lStack_190 + 0x20) != 0) {
                      piVar13 = (int *)(uVar28 + 0x68);
                      iVar25 = *piVar13;
                      lVar41 = (long)*(int *)(lStack_190 + 0x20) << 3;
                      do {
                        uVar59 = *(undefined4 *)(*puVar31 + 0x24);
                        iVar27 = iVar25;
                        if (iVar25 == *(int *)(uVar28 + 0x6c)) {
                          FUN_109311970(piVar13,iVar25,iVar25 + 1);
                          iVar27 = *piVar13;
                        }
                        iVar25 = iVar27 + 1;
                        *(int *)(uVar28 + 0x68) = iVar25;
                        *(undefined4 *)(*(long *)(uVar28 + 0x70) + (long)iVar27 * 4) = uVar59;
                        puVar31 = puVar31 + 1;
                        lVar41 = lVar41 + -8;
                      } while (lVar41 != 0);
                      ppuVar33 = *(undefined ***)(lStack_198 + 0x38);
                    }
                    ppuVar20 = &PTR_PTR_1132d1810;
                    if (ppuVar33 != (undefined **)0x0) {
                      ppuVar20 = ppuVar33;
                    }
                    ppuVar20 = ppuVar20 + 9;
LAB_1093ceda8:
                    FUN_1093d4c24(ppuVar20,*(undefined4 *)(ppuVar37 + 4),uVar28);
                    uVar26 = *(uint *)(lStack_198 + 0x10);
                  }
                  if ((uVar26 >> 0x15 & 1) != 0) {
                    iVar25 = *(int *)(lStack_198 + 0x68);
                    if (iVar25 < *(int *)(uVar28 + 0x88)) {
                      *(undefined4 *)(lStack_190 + 0x134) =
                           *(undefined4 *)(*(long *)(uVar28 + 0x90) + (long)iVar25 * 4);
                      *(uint *)(lStack_190 + 0x10) = *(uint *)(lStack_190 + 0x10) | 0x20000;
                      iVar25 = *(int *)(lStack_198 + 0x68);
                    }
                    if (iVar25 < *(int *)(uVar28 + 0x98)) {
                      *(undefined1 *)(lStack_190 + 0x13c) =
                           *(undefined1 *)(*(long *)(uVar28 + 0xa0) + (long)iVar25);
                      *(uint *)(lStack_190 + 0x10) = *(uint *)(lStack_190 + 0x10) | 0x80000;
                    }
                  }
                  func_0x000105340e88(&puStack_3d8,uStack_3d0);
                  func_0x000105340e88(&puStack_3c0,uStack_3b8);
                  func_0x000105340e88(auStack_3a8,plStack_3a0);
                }
                else {
                  FUN_10937e740(&fStack_2a0,&UNK_10f56b781);
                  FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x307,&fStack_2a0);
                }
              }
              else {
                FUN_10937e740(&fStack_2a0,&UNK_10f56b704);
                FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2d1,&fStack_2a0);
              }
            }
          }
          else {
            if (0 < (int)uStack_4e0) {
              uStack_350 = *puStack_4d8;
              fStack_348 = *(float *)(puStack_4d8 + 1);
              fVar74 = (float)uStack_350;
              fVar88 = (float)((ulong)uStack_350 >> 0x20);
              fVar58 = fVar74 * fVar74 + fVar88 * fVar88 + fStack_348 * fStack_348;
              if (0.0 < fVar58) {
                fVar58 = SQRT(fVar58);
                uStack_350 = CONCAT44(fVar88 / fVar58,fVar74 / fVar58);
                fStack_348 = fStack_348 / fVar58;
              }
              fVar58 = (float)((ulong)uStack_350 >> 0x20);
              uVar60 = NEON_rev64(uStack_350,4);
              fVar88 = (float)((ulong)puStack_4d8[2] >> 0x20);
              fVar74 = (float)puStack_4d8[2];
              dStack_338 = (double)CONCAT44(fStack_348 * *(float *)((long)puStack_4d8 + 0xc),
                                            (float)uVar60 * fVar88) -
                           (double)CONCAT44((float)((ulong)uVar60 >> 0x20) * fVar88,
                                            fStack_348 * fVar74);
              fStack_330 = (float)uStack_350 * fVar74 - *(float *)((long)puStack_4d8 + 0xc) * fVar58
              ;
              fVar74 = SUB84(dStack_338,0);
              fVar88 = (float)((ulong)dStack_338 >> 0x20);
              fVar147 = fVar74 * fVar74 + fVar88 * fVar88 + fStack_330 * fStack_330;
              if (0.0 < fVar147) {
                fVar147 = SQRT(fVar147);
                dStack_338 = (double)CONCAT44(fVar88 / fVar147,fVar74 / fVar147);
                fStack_330 = fStack_330 / fVar147;
              }
              uVar60 = NEON_ext(dStack_338,uStack_350,4,1);
              uVar78 = NEON_rev64(CONCAT44(fStack_330,fStack_348),4);
              uVar138 = NEON_ext(uStack_350,dStack_338,4,1);
              uStack_344 = (double)CONCAT44((float)((ulong)uVar60 >> 0x20) * fStack_330,
                                            (float)uVar60 * fStack_348) -
                           (double)CONCAT44((float)((ulong)uVar78 >> 0x20) *
                                            (float)((ulong)uVar138 >> 0x20),
                                            (float)uVar78 * (float)uVar138);
              fStack_33c = fVar58 * SUB84(dStack_338,0) -
                           (float)uStack_350 * (float)((ulong)dStack_338 >> 0x20);
              if ((*(char *)(lStack_198 + 100) == '\x01') && (*(int *)(lStack_198 + 0x48) == 1)) {
                if (*(char *)(lStack_198 + 0x65) == '\x01') {
                  fStack_288 = SQRT(fVar148 * fVar148 + fVar146 * fVar146);
                  fStack_2a0 = fVar148 / fStack_288;
                  fStack_288 = fVar146 / fStack_288;
                  uStack_290._4_4_ = SQRT(fVar148 * fVar148 + fVar72 * fVar72);
                  uStack_290._0_4_ = fVar148 / uStack_290._4_4_;
                  fStack_294 = 0.0;
                  uStack_290._4_4_ = -fVar72 / uStack_290._4_4_;
                  fStack_29c = fStack_288 * uStack_290._4_4_;
                  fStack_284 = -(uStack_290._4_4_ * fStack_2a0);
                  fStack_298 = -((float)uStack_290 * fStack_288);
                  uStack_280._0_4_ = fStack_2a0 * (float)uStack_290;
                  FUN_1093cf3e4(&uStack_350,&fStack_2a0,&uStack_350);
                }
                else {
                  ppuVar33 = &PTR_PTR_1132d8ba0;
                  if (*(undefined ***)(lStack_190 + 0xb8) != (undefined **)0x0) {
                    ppuVar33 = *(undefined ***)(lStack_190 + 0xb8);
                  }
                  FUN_109340d10(&fStack_2a0,0,ppuVar33);
                  FUN_1093cf390(lStack_1a8,&fStack_2a0);
                  fVar148 = SQRT((float)uStack_280 * (float)uStack_280 + fStack_288 * fStack_288);
                  fVar72 = (float)uStack_280 / fVar148;
                  fVar148 = fStack_288 / fVar148;
                  fVar146 = SQRT((float)uStack_280 * (float)uStack_280 + fStack_284 * fStack_284);
                  fStack_370 = (float)uStack_280 / fVar146;
                  fVar146 = -fStack_284 / fVar146;
                  uStack_390 = (int *)CONCAT44(fVar146 * fVar148,fVar72);
                  uStack_378 = CONCAT44(-(fVar146 * fVar72),fVar148);
                  uStack_388 = (int *)(ulong)(uint)-(fStack_370 * fVar148);
                  uStack_380 = (int *)CONCAT44(fVar146,fStack_370);
                  fStack_370 = fStack_370 * fVar72;
                  FUN_1093cf3e4(&uStack_350,&uStack_390,&uStack_350);
                  if (((uint)fStack_298 & 1) != 0) {
                    func_0x0001053936ac(&fStack_298);
                  }
                }
              }
              goto LAB_1093cdb1c;
            }
            FUN_10937e740(&fStack_2a0,&UNK_10f56b6e4);
            FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2be,&fStack_2a0);
          }
        }
        else {
          *(float *)(uVar28 + 0x108) = fStack_4a0;
          *(uint *)(uVar28 + 0x10) = *(uint *)(uVar28 + 0x10) | 1;
          if ((*(byte *)(lStack_198 + 0x11) >> 5 & 1) == 0) {
            if (*(char *)(lStack_198 + 0x54) != '\x01') {
              uVar79 = (ulong)(uint)*pfStack_4e8;
              fVar72 = pfStack_4e8[1];
              uStack_308 = *(ulong *)pfStack_4e8;
              fVar148 = pfStack_4e8[2];
              uStack_300 = (ulong)(uint)fVar148;
              uVar26 = 7;
              uVar59 = 2;
              goto LAB_1093cd72c;
            }
            FUN_10937e740(&fStack_2a0,&UNK_10f56b67a);
            FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2a7,&fStack_2a0);
          }
          else {
            FUN_10937e740(&fStack_2a0,&UNK_10f56b640);
            FUN_109388c6c(1,&UNK_10f56aeeb,&UNK_10f56b5e3,0x2a2,&fStack_2a0);
          }
        }
joined_r0x0001093cdb98:
        if ((uStack_318 & 1) != 0) {
          func_0x0001053936ac(&uStack_318);
        }
        if (puVar23 != (undefined *)0x0) {
          __ZdlPv(puVar23);
        }
        if ((lStack_540 != 0) && (0.0 < *(float *)(lStack_198 + 0x4c))) {
          *(uint *)(lStack_190 + 0x10) = *(uint *)(lStack_190 + 0x10) | 0x10;
          uVar28 = *(ulong *)(lStack_190 + 0xd0);
          if (uVar28 == 0) {
            uVar28 = *(ulong *)(lStack_190 + 8);
            if ((uVar28 & 1) != 0) {
              uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
            }
            func_0x00010933b59c();
            *(ulong *)(lStack_190 + 0xd0) = uVar28;
          }
          fVar72 = *(float *)(lStack_198 + 0x4c);
          if ((fVar72 <= 0.0) || (1.0 < fVar72)) {
code_r0x0001093cdcb0:
            bVar10 = false;
            bVar8 = false;
            bVar9 = false;
            if (0.0 < fVar72) {
              bVar10 = false;
              bVar8 = false;
              bVar9 = true;
              if (!NAN(fVar72)) {
                bVar10 = fVar72 < 1.0;
                bVar8 = fVar72 == 1.0;
                bVar9 = false;
              }
            }
            if (bVar8 || bVar10 != bVar9) {
LAB_1093cdcbc:
              uVar26 = *(uint *)(lStack_540 + 0x28);
              uVar79 = (ulong)uVar26;
              if (0 < (int)uVar26 && *(uint *)(uVar28 + 0x28) == uVar26) {
                uVar42 = *(ulong *)(lStack_540 + 0x30);
                uVar28 = *(ulong *)(uVar28 + 0x30);
                if ((uVar26 < 8) || (uVar28 < uVar42 + uVar79 * 4 && uVar42 < uVar28 + uVar79 * 4))
                {
                  uVar39 = 0;
                }
                else {
                  uVar39 = uVar79 & 0x7ffffff8;
                  pfVar15 = (float *)(uVar28 + 0x10);
                  pfVar12 = (float *)(uVar42 + 0x10);
                  uVar43 = uVar39;
                  do {
                    fVar148 = pfVar12[-4];
                    fVar146 = pfVar12[-3];
                    fVar58 = pfVar12[-1];
                    fVar74 = *pfVar12;
                    fVar88 = pfVar12[1];
                    fVar147 = pfVar12[2];
                    fVar75 = pfVar12[3];
                    pfVar15[-2] = pfVar15[-2] + (pfVar12[-2] - pfVar15[-2]) * fVar72;
                    pfVar15[-1] = pfVar15[-1] + (fVar58 - pfVar15[-1]) * fVar72;
                    pfVar15[-4] = pfVar15[-4] + (fVar148 - pfVar15[-4]) * fVar72;
                    pfVar15[-3] = pfVar15[-3] + (fVar146 - pfVar15[-3]) * fVar72;
                    pfVar15[2] = pfVar15[2] + (fVar147 - pfVar15[2]) * fVar72;
                    pfVar15[3] = pfVar15[3] + (fVar75 - pfVar15[3]) * fVar72;
                    *pfVar15 = *pfVar15 + (fVar74 - *pfVar15) * fVar72;
                    pfVar15[1] = pfVar15[1] + (fVar88 - pfVar15[1]) * fVar72;
                    pfVar15 = pfVar15 + 8;
                    pfVar12 = pfVar12 + 8;
                    uVar43 = uVar43 - 8;
                  } while (uVar43 != 0);
                  if (uVar39 == uVar79) goto LAB_1093cdd70;
                }
                lVar41 = uVar79 - uVar39;
                pfVar15 = (float *)(uVar42 + uVar39 * 4);
                pfVar12 = (float *)(uVar28 + uVar39 * 4);
                do {
                  *pfVar12 = *pfVar12 + fVar72 * (*pfVar15 - *pfVar12);
                  lVar41 = lVar41 + -1;
                  pfVar15 = pfVar15 + 1;
                  pfVar12 = pfVar12 + 1;
                } while (lVar41 != 0);
              }
            }
          }
          else {
            uVar26 = *(uint *)(lStack_540 + 0x18);
            uVar79 = (ulong)uVar26;
            if (((int)uVar26 < 1) || (*(uint *)(uVar28 + 0x18) != uVar26))
            goto code_r0x0001093cdcb0;
            uVar42 = *(ulong *)(lStack_540 + 0x20);
            uVar39 = *(ulong *)(uVar28 + 0x20);
            if ((uVar26 < 8) || ((uVar39 < uVar42 + uVar79 * 4 && (uVar42 < uVar39 + uVar79 * 4))))
            {
              uVar43 = 0;
LAB_1093cdc44:
              lVar41 = uVar79 - uVar43;
              pfVar15 = (float *)(uVar42 + uVar43 * 4);
              pfVar12 = (float *)(uVar39 + uVar43 * 4);
              do {
                *pfVar12 = *pfVar12 + fVar72 * (*pfVar15 - *pfVar12);
                lVar41 = lVar41 + -1;
                pfVar15 = pfVar15 + 1;
                pfVar12 = pfVar12 + 1;
              } while (lVar41 != 0);
            }
            else {
              uVar43 = uVar79 & 0x7ffffff8;
              pfVar15 = (float *)(uVar39 + 0x10);
              pfVar12 = (float *)(uVar42 + 0x10);
              uVar17 = uVar43;
              do {
                fVar148 = pfVar12[-4];
                fVar146 = pfVar12[-3];
                fVar58 = pfVar12[-1];
                fVar74 = *pfVar12;
                fVar88 = pfVar12[1];
                fVar147 = pfVar12[2];
                fVar75 = pfVar12[3];
                pfVar15[-2] = pfVar15[-2] + (pfVar12[-2] - pfVar15[-2]) * fVar72;
                pfVar15[-1] = pfVar15[-1] + (fVar58 - pfVar15[-1]) * fVar72;
                pfVar15[-4] = pfVar15[-4] + (fVar148 - pfVar15[-4]) * fVar72;
                pfVar15[-3] = pfVar15[-3] + (fVar146 - pfVar15[-3]) * fVar72;
                pfVar15[2] = pfVar15[2] + (fVar147 - pfVar15[2]) * fVar72;
                pfVar15[3] = pfVar15[3] + (fVar75 - pfVar15[3]) * fVar72;
                *pfVar15 = *pfVar15 + (fVar74 - *pfVar15) * fVar72;
                pfVar15[1] = pfVar15[1] + (fVar88 - pfVar15[1]) * fVar72;
                pfVar15 = pfVar15 + 8;
                pfVar12 = pfVar12 + 8;
                uVar17 = uVar17 - 8;
              } while (uVar17 != 0);
              if (uVar43 != uVar79) goto LAB_1093cdc44;
            }
            fVar72 = *(float *)(lStack_198 + 0x4c);
            bVar10 = false;
            bVar8 = false;
            bVar9 = false;
            if (0.0 < fVar72) {
              bVar10 = false;
              bVar8 = false;
              bVar9 = true;
              if (!NAN(fVar72)) {
                bVar10 = fVar72 < 1.0;
                bVar8 = fVar72 == 1.0;
                bVar9 = false;
              }
            }
            if (bVar8 || bVar10 != bVar9) goto LAB_1093cdcbc;
          }
LAB_1093cdd70:
          ppuVar37 = &PTR_PTR_1132d70f0;
          if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
            ppuVar37 = *(undefined ***)(lStack_198 + 0x30);
          }
          FUN_1093ca7e0(ppuVar37,0,*(undefined4 *)(ppuVar37 + 4),0);
        }
        if (*(int *)(lStack_198 + 0x48) == 0) {
          bVar10 = (*(byte *)(lStack_198 + 0x10) & 4) == 0;
        }
        else {
          bVar10 = false;
        }
        if (*(char *)(lStack_198 + 0x56) == '\x01') {
          ppuVar37 = &PTR_PTR_1132d70f0;
          if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
            ppuVar37 = *(undefined ***)(lStack_198 + 0x30);
          }
          FUN_1093cf4c0(ppuVar37,bVar10,lStack_190);
        }
        if (*(char *)(lStack_198 + 0x55) == '\x01') {
          ppuVar37 = &PTR_PTR_1132d70f0;
          if (*(undefined ***)(lStack_198 + 0x30) != (undefined **)0x0) {
            ppuVar37 = *(undefined ***)(lStack_198 + 0x30);
          }
          FUN_1093cf750(ppuVar37,bVar10,lStack_190);
        }
        if (((uint)fStack_520 & 1) != 0) {
          func_0x0001053936ac(&fStack_520);
        }
        func_0x00010933b25c((long)&uStack_51c + 4);
        if (lVar55 != 0) {
          __ZdlPv(lVar55);
        }
        if (pfStack_610 != (float *)0x0) {
          __ZdlPv(pfStack_610);
        }
        if (puStack_5f0 != (undefined8 *)0x0) {
          __ZdlPv(puStack_5f0);
        }
      }
      __ZdlPv(ppuVar16);
    }
LAB_1093cde6c:
    if (lStack_498 != 0) {
      __ZdlPv();
    }
    if (pfStack_5a0 != (float *)0x0) {
      __ZdlPv();
    }
    if (lVar54 != 0) {
      __ZdlPv(lVar54);
    }
    if (lVar50 != 0) {
      __ZdlPv(lVar50);
    }
  }
  if ((uStack_450 & 1) != 0) {
    func_0x0001053936ac(&uStack_450);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
LAB_1093cef18:
  FUN_109265f98();
LAB_1093cef5c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1093cef60);
  (*pcVar7)();
}



/* Entry: 1093f5e48; end: 1093f5edf;  */

void FUN_1093f5e48(float *param_1,long param_2)

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
  
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = param_1[2];
  fVar6 = param_1[3];
  fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar9 = *param_1;
  fVar8 = param_1[1];
  fVar7 = -fVar4 * fVar2 + fVar3 * fVar8;
  fVar1 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar10 = -(fVar9 * fVar3) + fVar1 * fVar4;
  fVar11 = -fVar8 * fVar1 + fVar9 * fVar2;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar5 = param_1[6];
  *(ulong *)(param_2 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
                fVar2 + fVar10 * fVar6 + -(fVar9 * fVar11) + fVar7 * fVar4,
                (float)*(undefined8 *)(param_1 + 4) +
                fVar1 + fVar7 * fVar6 + -fVar4 * fVar10 + fVar11 * fVar8);
  *(float *)(param_2 + 0x20) = fVar5 + fVar3 + fVar6 * fVar11 + -fVar8 * fVar7 + fVar9 * fVar10;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 7;
  return;
}



/* Entry: 1093f5ee0; end: 1093f614b;  */

void FUN_1093f5ee0(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar1 = *(uint *)(param_3 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    ppuVar3 = &PTR_PTR_1132cfc60;
    if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(param_2 + 0x68);
    }
    if ((*(ulong *)(param_3 + 0xb0) & 3) == 0) {
      ppuVar4 = ppuRam00000001132d06b0;
      if (ppuRam00000001132d06b0 == (undefined **)0x0) {
        ppuVar4 = &PTR_DAT_1132d0698;
        func_0x00010b4befb0(&PTR_DAT_1132d0698);
      }
    }
    else {
      ppuVar4 = (undefined **)(*(ulong *)(param_3 + 0xb0) & 0xfffffffffffffffc);
    }
    FUN_1093ea81c(ppuVar3,ppuVar4);
    if (ppuVar3 == (undefined **)0x0) {
      FUN_10937e740(&uStack_70,&UNK_10f56c92a);
      FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c957,0x13d,&uStack_70);
      if (-1 < uStack_60._7_1_) {
        return;
      }
      __ZdlPv(uStack_70);
      return;
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10;
    uVar6 = *(ulong *)(param_3 + 0xd0);
    if (uVar6 == 0) {
      uVar6 = *(ulong *)(param_3 + 8);
      if ((uVar6 & 1) != 0) {
        uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
      }
      func_0x00010933b59c();
      *(ulong *)(param_3 + 0xd0) = uVar6;
    }
    uVar15 = *(undefined4 *)(*(undefined8 **)(uVar6 + 0x40) + 1);
    uVar16 = **(undefined8 **)(uVar6 + 0x40);
    FUN_1093f5af0(&uStack_70,*(undefined8 *)(uVar6 + 0x50),0);
    fVar8 = (float)uStack_70;
    fVar12 = fVar8 * fVar8;
    fVar9 = (float)((ulong)uStack_70 >> 0x20);
    fVar13 = fVar9 * fVar9;
    fVar10 = (float)uStack_68;
    fVar11 = (float)((ulong)uStack_68 >> 0x20);
    auVar14._4_4_ = fVar13;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = fVar10 * fVar10;
    auVar14._12_4_ = fVar11 * fVar11;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar12;
    auVar2._8_4_ = fVar10 * fVar10;
    auVar2._12_4_ = fVar11 * fVar11;
    auVar14 = NEON_ext(auVar14,auVar2,8,1);
    fVar12 = SQRT(fVar12 + auVar14._0_4_ + fVar13 + auVar14._4_4_);
    uStack_90 = CONCAT44(fVar9 / fVar12,fVar8 / fVar12);
    uStack_88 = CONCAT44(fVar11 / fVar12,fVar10 / fVar12);
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_60 = param_1[2];
    uStack_58 = *(undefined4 *)(param_1 + 3);
    uStack_80 = uVar16;
    uStack_78 = uVar15;
    FUN_1093e26e8(&uStack_70,&uStack_90);
    FUN_1093f5c68(&uStack_70,ppuVar3,uVar6);
    uVar1 = *(uint *)(param_3 + 0x10);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(uint *)(param_3 + 0x10) = uVar1;
    FUN_1093f5e48(param_1,*(undefined8 *)(param_3 + 0xb8));
  }
  uVar6 = *(ulong *)(param_3 + 0x18);
  puVar5 = (ulong *)(param_3 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    lVar7 = (long)*(int *)(param_3 + 0x20) << 3;
    do {
      FUN_1093f5e48(param_1,*puVar5);
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *(ulong *)(param_3 + 0x30);
  puVar5 = (ulong *)(param_3 + 0x30);
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    lVar7 = (long)*(int *)(param_3 + 0x38) << 3;
    do {
      FUN_1093f5e48(param_1,*puVar5);
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *(ulong *)(param_3 + 0x48);
  puVar5 = (ulong *)(param_3 + 0x48);
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_3 + 0x50) != 0) {
    lVar7 = (long)*(int *)(param_3 + 0x50) << 3;
    do {
      FUN_1093f5ee0(param_1,param_2,*puVar5);
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 1093f614c; end: 1093f61df;  */

void FUN_1093f614c(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar5 = *(ulong *)(param_3 + 0x18);
  puVar6 = (ulong *)(param_3 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar6 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    lVar8 = (long)*(int *)(param_3 + 0x20) << 3;
    do {
      FUN_1093f5ee0(param_1,param_2,*puVar6);
      lVar8 = lVar8 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar8 != 0);
  }
  if ((*(byte *)(param_3 + 0x10) >> 2 & 1) != 0) {
    lVar8 = *(long *)(param_3 + 0x78);
    uVar1 = *(uint *)(lVar8 + 0x10);
    if ((uVar1 >> 4 & 1) != 0) {
      ppuVar3 = &PTR_PTR_1132cfc60;
      if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(param_2 + 0x68);
      }
      if ((*(ulong *)(lVar8 + 0xb0) & 3) == 0) {
        ppuVar4 = ppuRam00000001132d06b0;
        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
          ppuVar4 = &PTR_DAT_1132d0698;
          func_0x00010b4befb0(&PTR_DAT_1132d0698);
        }
      }
      else {
        ppuVar4 = (undefined **)(*(ulong *)(lVar8 + 0xb0) & 0xfffffffffffffffc);
      }
      FUN_1093ea81c(ppuVar3,ppuVar4);
      if (ppuVar3 == (undefined **)0x0) {
        FUN_10937e740(&uStack_70,&UNK_10f56c92a);
        FUN_109388c6c(1,&UNK_10f56c7c8,&UNK_10f56c957,0x13d,&uStack_70);
        if (-1 < uStack_60._7_1_) {
          return;
        }
        __ZdlPv(uStack_70);
        return;
      }
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x10;
      uVar5 = *(ulong *)(lVar8 + 0xd0);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(lVar8 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x00010933b59c();
        *(ulong *)(lVar8 + 0xd0) = uVar5;
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(uVar5 + 0x40) + 1);
      uVar17 = **(undefined8 **)(uVar5 + 0x40);
      FUN_1093f5af0(&uStack_70,*(undefined8 *)(uVar5 + 0x50),0);
      fVar9 = (float)uStack_70;
      fVar13 = fVar9 * fVar9;
      fVar10 = (float)((ulong)uStack_70 >> 0x20);
      fVar14 = fVar10 * fVar10;
      fVar11 = (float)uStack_68;
      fVar12 = (float)((ulong)uStack_68 >> 0x20);
      auVar15._4_4_ = fVar14;
      auVar15._0_4_ = fVar13;
      auVar15._8_4_ = fVar11 * fVar11;
      auVar15._12_4_ = fVar12 * fVar12;
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar13;
      auVar2._8_4_ = fVar11 * fVar11;
      auVar2._12_4_ = fVar12 * fVar12;
      auVar15 = NEON_ext(auVar15,auVar2,8,1);
      fVar13 = SQRT(fVar13 + auVar15._0_4_ + fVar14 + auVar15._4_4_);
      uStack_90 = CONCAT44(fVar10 / fVar13,fVar9 / fVar13);
      uStack_88 = CONCAT44(fVar12 / fVar13,fVar11 / fVar13);
      uStack_68 = param_1[1];
      uStack_70 = *param_1;
      uStack_60 = param_1[2];
      uStack_58 = *(undefined4 *)(param_1 + 3);
      uStack_80 = uVar17;
      uStack_78 = uVar16;
      FUN_1093e26e8(&uStack_70,&uStack_90);
      FUN_1093f5c68(&uStack_70,ppuVar3,uVar5);
      uVar1 = *(uint *)(lVar8 + 0x10);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(uint *)(lVar8 + 0x10) = uVar1;
      FUN_1093f5e48(param_1,*(undefined8 *)(lVar8 + 0xb8));
    }
    uVar5 = *(ulong *)(lVar8 + 0x18);
    puVar6 = (ulong *)(lVar8 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(lVar8 + 0x20) != 0) {
      lVar7 = (long)*(int *)(lVar8 + 0x20) << 3;
      do {
        FUN_1093f5e48(param_1,*puVar6);
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    uVar5 = *(ulong *)(lVar8 + 0x30);
    puVar6 = (ulong *)(lVar8 + 0x30);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(lVar8 + 0x38) != 0) {
      lVar7 = (long)*(int *)(lVar8 + 0x38) << 3;
      do {
        FUN_1093f5e48(param_1,*puVar6);
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    uVar5 = *(ulong *)(lVar8 + 0x48);
    puVar6 = (ulong *)(lVar8 + 0x48);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(lVar8 + 0x50) != 0) {
      lVar8 = (long)*(int *)(lVar8 + 0x50) << 3;
      do {
        FUN_1093f5ee0(param_1,param_2,*puVar6);
        lVar8 = lVar8 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    return;
  }
  return;
}



/* Entry: 1093f61e0; end: 1093f624f;  */

void FUN_1093f61e0(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 1093f6250; end: 1093f62df;  */

long FUN_1093f6250(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  FUN_1093f62e0();
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  auVar2 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)(lVar1 + 0x98) = auVar2._8_8_;
  *(long *)(lVar1 + 0x90) = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0x3ff0000000000000;
  FUN_1093f632c();
  return param_1;
}



/* Entry: 1093f62e0; end: 1093f632b;  */

undefined8 * FUN_1093f62e0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1093f632c();
  return param_1;
}



/* Entry: 1093f632c; end: 1093f637f;  */

void FUN_1093f632c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af5830;
  puVar1[1] = 0;
  plVar2 = (long *)*param_1;
  *param_1 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001093f6370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1093f6380; end: 1093f64c3;  */

void FUN_1093f6380(double *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  undefined1 (*pauVar3) [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  pauVar3 = (undefined1 (*) [16])*param_2;
  dVar5 = *(double *)(*pauVar3 + 8);
  dVar4 = *(double *)*pauVar3;
  dVar6 = *(double *)pauVar3[1];
  pauVar1 = (undefined1 (*) [16])(pauVar3[3] + 8);
  dVar10 = *(double *)pauVar3[4];
  dVar8 = *(double *)*pauVar1;
  auVar11 = NEON_ext(*pauVar1,*pauVar1,8,1);
  dVar2 = *(double *)pauVar3[2];
  dVar15 = *(double *)pauVar3[3];
  dVar16 = -dVar15 * dVar2 + dVar8 * *(double *)(pauVar3[1] + 8);
  dVar14 = *(double *)*(undefined1 (*) [16])(pauVar3[2] + 8);
  dVar9 = *(double *)(pauVar3[2] + 8) * -dVar8 + dVar2 * auVar11._0_8_;
  auVar13 = NEON_ext(*pauVar3,*(undefined1 (*) [16])(pauVar3[2] + 8),8,1);
  dVar12 = *(double *)(pauVar3[1] + 8) * -dVar10 + *(double *)pauVar3[3] * auVar13._8_8_;
  dVar7 = 1.0 / (dVar16 * dVar6 + dVar4 * dVar9 + dVar5 * dVar12);
  param_1[7] = (-dVar4 * dVar8 + dVar15 * dVar5) * dVar7;
  param_1[5] = dVar7 * (-(*(double *)(pauVar3[2] + 8) * *(double *)*pauVar3) +
                       *(double *)(pauVar3[1] + 8) * *(double *)pauVar3[1]);
  param_1[8] = dVar7 * (-(*(double *)(pauVar3[1] + 8) * *(double *)(*pauVar3 + 8)) +
                       *(double *)pauVar3[2] * *(double *)*pauVar3);
  param_1[4] = (-(dVar6 * dVar15) + dVar4 * dVar10) * dVar7;
  param_1[1] = (dVar10 * -dVar5 + dVar6 * auVar11._8_8_) * dVar7;
  *param_1 = dVar9 * dVar7;
  param_1[3] = dVar12 * dVar7;
  param_1[2] = (dVar6 * -dVar2 + dVar14 * auVar13._0_8_) * dVar7;
  param_1[6] = dVar16 * dVar7;
  return;
}


