/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1099cd018; end: 1099cd0f7;  */

/* WARNING: Removing unreachable block (ram,0x0001099ccdac) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdb0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccde0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdcc) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdd4) */
/* WARNING: Removing unreachable block (ram,0x0001099ccde8) */
/* WARNING: Removing unreachable block (ram,0x0001099cce00) */
/* WARNING: Removing unreachable block (ram,0x0001099cce18) */
/* WARNING: Removing unreachable block (ram,0x0001099cce48) */
/* WARNING: Removing unreachable block (ram,0x0001099cce5c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccea8) */
/* WARNING: Removing unreachable block (ram,0x0001099cceac) */
/* WARNING: Removing unreachable block (ram,0x0001099cceec) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf64) */
/* WARNING: Removing unreachable block (ram,0x0001099ccef8) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf34) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf48) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf60) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf6c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfa8) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf8c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf98) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfb4) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfbc) */

byte * FUN_1099cd018(long param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong *puVar13;
  long lVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong *puVar24;
  uint *puVar25;
  ulong *puVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  byte *pbVar42;
  ulong uVar43;
  long lVar44;
  uint uStack_70;
  uint auStack_6c [3];
  
  if (*(int *)(param_1 + 200) - 6U < 2) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return (byte *)0x0;
    }
    iVar40 = 6;
  }
  else if (*(int *)(param_1 + 200) == 5) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return (byte *)0x0;
    }
    iVar40 = 5;
  }
  else {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return (byte *)0x0;
    }
    iVar40 = 4;
  }
  func_0x0001099cc50c(param_1,param_2,iVar40);
  lVar14 = *(long *)(param_1 + 0x30);
  if (iVar40 == 5) {
    lVar19 = *param_2;
    uVar23 = 0xbb000000;
  }
  else {
    if (iVar40 != 6) {
      uVar23 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                      (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
      goto LAB_1099cc66c;
    }
    lVar19 = *param_2;
    uVar23 = 0xbf9b0000;
  }
  uVar23 = lVar19 * (uVar23 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
  ;
LAB_1099cc66c:
  lVar19 = *(long *)(param_1 + 8);
  uVar9 = (int)param_2 - (int)lVar19;
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar3 = uVar9 - uVar6;
  if (uVar9 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
  }
  lVar32 = *(long *)(param_1 + 0x40);
  uVar8 = ~(-1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f));
  uVar6 = 0;
  if (uVar8 <= uVar9) {
    uVar6 = uVar9 - uVar8;
  }
  uVar37 = uVar6;
  if (uVar6 <= uVar3) {
    uVar37 = uVar3;
  }
  uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
  uVar5 = *(uint *)(lVar14 + uVar23 * 4);
  if (uVar37 < uVar5) {
    uVar35 = uVar10;
    uVar18 = 0;
    do {
      uVar27 = uVar5;
      puVar15 = (uint *)(lVar32 + (ulong)((uVar27 & uVar8) << 1) * 4);
      if (puVar15[1] != 1 || uVar35 < 2) {
        if (puVar15[1] == 1) {
          puVar15[0] = 0;
          puVar15[1] = 0;
        }
        uVar27 = uVar18;
        if (uVar18 == 0) goto LAB_1099cca9c;
        break;
      }
      puVar15[1] = uVar18;
      uVar35 = uVar35 - 1;
      uVar18 = uVar27;
      uVar5 = *puVar15;
    } while (uVar37 < *puVar15);
    lVar44 = *(long *)(param_1 + 0x10);
    do {
      uVar18 = *(uint *)(lVar32 + 4 + (ulong)((uVar27 & uVar8) << 1) * 4);
      uVar7 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar29 = (ulong)uVar5;
      lVar2 = lVar44;
      if (uVar5 <= uVar27) {
        lVar2 = lVar19;
      }
      puVar15 = (uint *)(lVar32 + (ulong)((uVar27 & (uVar7 ^ 0xffffffff)) << 1) * 4);
      puVar12 = puVar15 + 1;
      uVar34 = *puVar15;
      puVar13 = (ulong *)(lVar44 + uVar29);
      if (uVar5 <= uVar27) {
        puVar13 = param_3;
      }
      uVar36 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar4 = uVar27 - uVar36;
      if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar36) {
        uVar4 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar35 != 0) && (uVar4 < uVar34)) {
        uVar43 = 0;
        uVar41 = 0;
        lVar1 = lVar2 + (ulong)uVar27;
        lVar2 = lVar2 + (ulong)uVar27 + 8;
        uVar36 = uVar35;
        do {
          uVar20 = uVar43;
          if (uVar41 <= uVar43) {
            uVar20 = uVar41;
          }
          uVar33 = (ulong)uVar34;
          if ((uVar27 < uVar5) || (uVar29 <= uVar20 + uVar33)) {
            lVar11 = lVar44;
            if (uVar29 <= uVar20 + uVar33) {
              lVar11 = lVar19;
            }
            puVar21 = (ulong *)(lVar1 + uVar20);
            puVar26 = (ulong *)(lVar11 + uVar33 + uVar20);
            puVar24 = puVar21;
            if (puVar21 < (ulong *)((long)puVar13 - 7U)) {
              if (*puVar26 == *puVar21) {
                lVar28 = 0;
                do {
                  puVar26 = (ulong *)(lVar2 + uVar20 + lVar28);
                  if ((ulong *)((long)puVar13 - 7U) <= puVar26) {
                    puVar26 = (ulong *)(lVar11 + lVar28 + uVar20 + uVar33 + 8);
                    puVar24 = (ulong *)(lVar2 + uVar20 + lVar28);
                    goto LAB_1099cc978;
                  }
                  uVar30 = *(ulong *)(lVar11 + uVar20 + uVar33 + 8 + lVar28);
                  uVar31 = *puVar26;
                  lVar28 = lVar28 + 8;
                } while (uVar30 == uVar31);
                uVar31 = uVar31 ^ uVar30;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar31 = lVar28 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
              }
              else {
                uVar31 = *puVar21 ^ *puVar26;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
              }
            }
            else {
LAB_1099cc978:
              if (puVar24 < (ulong *)((long)puVar13 - 3U)) {
                if ((int)*puVar26 == (int)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
              }
              if (puVar24 < (ulong *)((long)puVar13 - 1U)) {
                if ((short)*puVar26 == (short)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
              }
              if ((puVar24 < puVar13) && ((byte)*puVar26 == (byte)*puVar24)) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
              uVar31 = (long)puVar24 - (long)puVar21;
            }
            uVar20 = uVar31 + uVar20;
            lVar11 = lVar11 + uVar33;
          }
          else {
            lVar11 = lVar1 + uVar20;
            func_0x0001099cc318(lVar11,lVar44 + uVar33 + uVar20,puVar13,(ulong *)(lVar44 + uVar29),
                                lVar19 + uVar29);
            uVar20 = lVar11 + uVar20;
            lVar11 = lVar44 + uVar33;
            if (uVar29 <= uVar20 + uVar33) {
              lVar11 = lVar19 + uVar33;
            }
          }
          if ((ulong *)(lVar1 + uVar20) == puVar13) break;
          puVar25 = (uint *)(lVar32 + (ulong)((uVar34 & ~uVar7) << 1) * 4);
          if (*(byte *)(lVar11 + uVar20) < (byte)*(ulong *)(lVar1 + uVar20)) {
            *puVar15 = uVar34;
            if (uVar34 <= uVar37) {
              puVar15 = auStack_6c;
              break;
            }
            puVar15 = puVar25 + 1;
            puVar25 = puVar15;
            uVar43 = uVar20;
          }
          else {
            *puVar12 = uVar34;
            puVar12 = puVar25;
            uVar41 = uVar20;
            if (uVar34 <= uVar37) {
              puVar12 = auStack_6c;
              break;
            }
          }
          uVar36 = uVar36 - 1;
          if ((uVar36 == 0) || (uVar34 = *puVar25, uVar34 <= uVar4)) break;
        } while( true );
      }
      *puVar12 = 0;
      *puVar15 = 0;
      uVar35 = uVar35 + 1;
      uVar27 = uVar18;
    } while (uVar18 != 0);
  }
  else {
LAB_1099cca9c:
    lVar44 = *(long *)(param_1 + 0x10);
  }
  pbVar42 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  puVar15 = (uint *)(lVar32 + (ulong)((uVar8 & uVar9) << 1) * 4);
  puVar12 = puVar15 + 1;
  iVar40 = uVar9 + 9;
  uVar37 = *(uint *)(lVar14 + uVar23 * 4);
  *(uint *)(lVar14 + uVar23 * 4) = uVar9;
  if (uVar3 < uVar37) {
    pbVar16 = (byte *)0x0;
    pbVar17 = (byte *)0x0;
    pbVar38 = (byte *)0x0;
    iVar39 = iVar40;
    do {
      uVar10 = uVar10 - 1;
      pbVar22 = pbVar17;
      if (pbVar38 <= pbVar17) {
        pbVar22 = pbVar38;
      }
      uVar23 = (ulong)uVar37;
      puVar13 = (ulong *)((long)param_2 + (long)pbVar22);
      if (pbVar22 + uVar37 < pbVar42) {
        func_0x0001099cc318(puVar13,pbVar22 + lVar44 + uVar23,param_3,pbVar42 + lVar44,
                            pbVar42 + lVar19);
        pbVar22 = (byte *)((long)puVar13 + (long)pbVar22);
        lVar14 = lVar44 + uVar23;
        if (pbVar42 <= pbVar22 + uVar23) {
          lVar14 = lVar19 + uVar23;
        }
      }
      else {
        puVar26 = (ulong *)(pbVar22 + lVar19 + uVar23);
        puVar21 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar26 == *puVar13) {
            lVar14 = 0;
            puVar21 = (ulong *)((long)(param_2 + 1) + (long)pbVar22);
            puVar26 = (ulong *)(pbVar22 + lVar19 + 8 + uVar23);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar21) goto LAB_1099ccc10;
              uVar41 = *puVar26;
              uVar29 = *puVar21;
              lVar14 = lVar14 + 8;
              puVar21 = puVar21 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar41 == uVar29);
            uVar29 = uVar29 ^ uVar41;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = lVar14 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
          }
          else {
            uVar29 = *puVar13 ^ *puVar26;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
          }
        }
        else {
LAB_1099ccc10:
          if (puVar21 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar26 == (int)*puVar21) {
              puVar21 = (ulong *)((long)puVar21 + 4);
              puVar26 = (ulong *)((long)puVar26 + 4);
            }
          }
          if (puVar21 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar26 == (short)*puVar21) {
              puVar21 = (ulong *)((long)puVar21 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
          }
          if ((puVar21 < param_3) && ((byte)*puVar26 == (byte)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          uVar29 = (long)puVar21 - (long)puVar13;
        }
        pbVar22 = pbVar22 + uVar29;
        lVar14 = lVar19 + uVar23;
      }
      iVar40 = iVar39;
      if (pbVar16 < pbVar22) {
        iVar40 = uVar37 + (int)pbVar22;
        if (pbVar22 <= (byte *)(ulong)(iVar39 - uVar37)) {
          iVar40 = iVar39;
        }
        if ((int)(((uint)LZCOUNT((uVar9 + 1) - uVar37) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)pbVar22 - (int)pbVar16) * 4) {
          *param_4 = (ulong)((uVar9 + 2) - uVar37);
          pbVar16 = pbVar22;
        }
        if ((ulong *)((long)param_2 + (long)pbVar22) == param_3) goto LAB_1099ccd9c;
      }
      puVar25 = (uint *)(lVar32 + (ulong)((uVar37 & uVar8) << 1) * 4);
      if (pbVar22[lVar14] < *(byte *)((long)param_2 + (long)pbVar22)) {
        *puVar15 = uVar37;
        if (uVar37 <= uVar6) {
          puVar15 = &uStack_70;
          goto LAB_1099ccd9c;
        }
        puVar15 = puVar25 + 1;
        pbVar17 = pbVar22;
        puVar25 = puVar15;
        pbVar22 = pbVar38;
      }
      else {
        *puVar12 = uVar37;
        puVar12 = puVar25;
        if (uVar37 <= uVar6) {
          puVar12 = &uStack_70;
          goto LAB_1099ccd9c;
        }
      }
      if ((uVar10 == 0) || (uVar37 = *puVar25, pbVar38 = pbVar22, iVar39 = iVar40, uVar37 <= uVar3))
      goto LAB_1099ccd9c;
    } while( true );
  }
  pbVar16 = (byte *)0x0;
LAB_1099ccd9c:
  *puVar12 = 0;
  *puVar15 = 0;
  *(int *)(param_1 + 0x24) = iVar40 + -8;
  return pbVar16;
}



/* Entry: 1099cd0f8; end: 1099cd17b;  */

void FUN_1099cd0f8(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  *(uint *)(param_1 + 0x14) = uVar3;
  uVar4 = *(uint *)(param_1 + 0xc);
  if (uVar4 == 0) {
    uVar4 = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 0x40;
  }
  if (6 < param_2[6]) {
    uVar1 = param_2[5];
    if (param_2[5] <= uVar4) {
      uVar1 = uVar4;
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0) {
    uVar4 = uVar3 - 7;
    if (uVar4 < 7) {
      uVar4 = 6;
    }
    *(uint *)(param_1 + 4) = uVar4;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = 0;
    if (uVar4 <= uVar3) {
      iVar2 = uVar3 - uVar4;
    }
    *(int *)(param_1 + 0x10) = iVar2;
  }
  uVar3 = 3;
  if (*(uint *)(param_1 + 8) != 0) {
    uVar3 = *(uint *)(param_1 + 8);
  }
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  *(uint *)(param_1 + 8) = uVar3;
  return;
}



/* Entry: 1099cd17c; end: 1099cdb6b;  */

ulong FUN_1099cd17c(long param_1,long *param_2,long param_3,byte *param_4,ulong param_5)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  byte *pbVar34;
  uint *puVar35;
  ulong uVar36;
  long lVar37;
  ulong *puVar38;
  ulong uVar39;
  long lVar40;
  uint *puVar41;
  int *piVar42;
  ulong uVar43;
  ulong uVar44;
  ulong *puVar45;
  ulong *puVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  int iVar52;
  ulong *puVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  ulong *puVar57;
  ulong uVar58;
  byte *pbStack_158;
  
  uVar31 = param_5 >> 0x14;
  if ((param_5 & 0xfffff) != 0) {
    uVar31 = uVar31 + 1;
  }
  if (param_5 == 0) {
    return 0;
  }
  uVar43 = 0;
  uVar16 = 1 << (ulong)(*(uint *)(param_3 + 0x14) & 0x1f);
  uVar24 = 0;
  uVar25 = param_2[2];
  pbStack_158 = param_4;
  do {
    if ((ulong)param_2[3] <= uVar25) {
      return 0;
    }
    puVar4 = (ulong *)(param_4 + uVar43 * 0x100000);
    puVar8 = (ulong *)(param_4 + param_5);
    if (0xfffff < param_5 + uVar43 * -0x100000) {
      puVar8 = puVar4 + 0x20000;
    }
    lVar56 = *(long *)(param_1 + 8);
    uVar29 = (int)puVar8 - (int)lVar56;
    uVar13 = *(uint *)(param_1 + 0x1c);
    if (0xe0000000 < uVar29) {
      lVar32 = 1L << ((ulong)*(uint *)(param_3 + 4) & 0x3f);
      uVar29 = ((int)puVar4 - (int)lVar56) - uVar16;
      lVar56 = lVar56 + (ulong)uVar29;
      *(long *)(param_1 + 8) = lVar56;
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar29;
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar29;
      *(uint *)(param_1 + 0x1c) = uVar13 - uVar29;
      puVar35 = *(uint **)(param_1 + 0x20);
      do {
        uVar13 = 0;
        if (uVar29 <= *puVar35) {
          uVar13 = *puVar35 - uVar29;
        }
        *puVar35 = uVar13;
        lVar32 = lVar32 + -1;
        puVar35 = puVar35 + 2;
      } while (lVar32 != 0);
      uVar29 = (int)puVar8 - (int)lVar56;
      uVar13 = *(uint *)(param_1 + 0x1c);
    }
    uVar48 = (ulong)uVar13;
    uVar20 = uVar29 - uVar16;
    if (uVar29 < uVar16 || uVar20 == 0) {
      uVar36 = (ulong)*(uint *)(param_1 + 0x18);
    }
    else {
      if (uVar13 < uVar20) {
        *(uint *)(param_1 + 0x1c) = uVar20;
        uVar48 = (ulong)uVar20;
      }
      uVar36 = (ulong)*(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) < (uint)uVar48) {
        *(uint *)(param_1 + 0x18) = (uint)uVar48;
        uVar36 = uVar48;
      }
    }
    lVar32 = *(long *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_3 + 4);
    uVar20 = *(uint *)(param_3 + 8);
    uVar29 = *(uint *)(param_3 + 0xc);
    uVar11 = (ulong)uVar29;
    uVar12 = *(uint *)(param_3 + 0x10);
    uVar28 = (uint)uVar36;
    uVar47 = (uint)uVar48;
    if (uVar47 < uVar28) {
      lVar40 = *(long *)(param_1 + 0x10);
      uVar30 = uVar47;
    }
    else {
      lVar40 = 0;
      uVar30 = uVar28;
    }
    uVar48 = (long)puVar8 - (long)puVar4;
    puVar2 = (ulong *)(lVar40 + (ulong)uVar30);
    if (uVar28 <= uVar47) {
      puVar2 = (ulong *)0x0;
    }
    uVar7 = uVar29;
    if (uVar29 < 9) {
      uVar7 = 8;
    }
    uVar55 = uVar48;
    if ((long)(ulong)uVar7 <= (long)uVar48) {
      puVar33 = (ulong *)0x0;
      uVar55 = 0;
      iVar17 = uVar13 - uVar20;
      puVar5 = (ulong *)((long)puVar4 + uVar48);
      puVar46 = (ulong *)((long)puVar5 - (ulong)uVar7);
      uVar18 = 0x20 - iVar17;
      puVar38 = (ulong *)((long)puVar5 - 7);
      uVar7 = 0;
      if (uVar12 <= uVar18) {
        uVar7 = uVar18 - uVar12;
      }
      puVar3 = (ulong *)(lVar56 + uVar36);
      puVar53 = puVar4;
      puVar57 = puVar4;
      do {
        if (puVar53 == puVar4) {
          uVar55 = 0;
          pbVar34 = pbStack_158;
          uVar44 = uVar11;
          if (uVar29 != 0) {
            do {
              uVar55 = (ulong)*pbVar34 + uVar55 * -0x30e44323485a9b9d + 10;
              uVar44 = uVar44 - 1;
              pbVar34 = pbVar34 + 1;
            } while (uVar44 != 0);
          }
        }
        else {
          uVar55 = (ulong)*(byte *)((long)puVar33 + uVar11) +
                   (uVar55 - ((ulong)(byte)*puVar33 + 10) * lVar32) * -0x30e44323485a9b9d + 10;
        }
        puVar33 = puVar53;
        if ((-1 << (ulong)(uVar12 & 0x1f) | (uint)(uVar55 >> ((ulong)uVar7 & 0x3f))) == 0xffffffff)
        {
          uVar58 = 0;
          lVar37 = 0;
          puVar35 = (uint *)0x0;
          uVar39 = 0;
          iVar52 = (int)puVar53;
          iVar19 = iVar52 - (int)lVar56;
          uVar44 = 0;
          if (uVar13 != uVar20) {
            uVar44 = uVar55 >> ((ulong)(0x40 - iVar17) & 0x3f) & 0xffffffff;
          }
          puVar41 = (uint *)(*(long *)(param_1 + 0x20) +
                            (uVar44 << ((ulong)*(uint *)(param_3 + 8) & 0x3f)) * 8);
          puVar6 = puVar41 + (1L << ((ulong)uVar20 & 0x3f)) * 2;
          puVar21 = puVar53 + 1;
          do {
            if (puVar41[1] == (uint)(uVar55 >> ((ulong)uVar18 & 0x3f))) {
              uVar14 = *puVar41;
              uVar44 = (ulong)uVar14;
              if (uVar30 < uVar14) {
                if (uVar47 < uVar28) {
                  lVar9 = lVar40;
                  if (uVar28 <= uVar14) {
                    lVar9 = lVar56;
                  }
                  puVar45 = (ulong *)(lVar9 + uVar44);
                  puVar22 = (ulong *)(lVar40 + uVar36);
                  if (uVar28 <= uVar14) {
                    puVar22 = puVar5;
                  }
                  puVar23 = (ulong *)((long)puVar53 + ((long)puVar22 - (long)puVar45));
                  if (puVar8 <= puVar23) {
                    puVar23 = puVar5;
                  }
                  puVar26 = puVar53;
                  puVar27 = puVar45;
                  if (puVar53 < (ulong *)((long)puVar23 - 7U)) {
                    if (*puVar45 == *puVar53) {
                      lVar49 = 0;
                      puVar27 = (ulong *)(lVar9 + uVar44);
                      puVar26 = puVar21;
                      do {
                        puVar27 = puVar27 + 1;
                        if ((ulong *)((long)puVar23 - 7U) <= puVar26) goto LAB_1099cd61c;
                        uVar54 = *puVar26;
                        lVar49 = lVar49 + 8;
                        puVar26 = puVar26 + 1;
                      } while (*puVar27 == uVar54);
                      uVar54 = uVar54 ^ *puVar27;
                      uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar54 & 0x5555555555555555) << 1;
                      uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
                               (uVar54 & 0x3333333333333333) << 2;
                      uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      uVar54 = lVar49 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                    }
                    else {
                      uVar54 = *puVar53 ^ *puVar45;
                      uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar54 & 0x5555555555555555) << 1;
                      uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
                               (uVar54 & 0x3333333333333333) << 2;
                      uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                    }
                  }
                  else {
LAB_1099cd61c:
                    if (puVar26 < (ulong *)((long)puVar23 - 3U)) {
                      if ((int)*puVar27 == (int)*puVar26) {
                        puVar26 = (ulong *)((long)puVar26 + 4);
                        puVar27 = (ulong *)((long)puVar27 + 4);
                      }
                    }
                    if (puVar26 < (ulong *)((long)puVar23 - 1U)) {
                      if ((short)*puVar27 == (short)*puVar26) {
                        puVar26 = (ulong *)((long)puVar26 + 2);
                        puVar27 = (ulong *)((long)puVar27 + 2);
                      }
                    }
                    if ((puVar26 < puVar23) && ((byte)*puVar27 == (byte)*puVar26)) {
                      puVar26 = (ulong *)((long)puVar26 + 1);
                    }
                    uVar54 = (long)puVar26 - (long)puVar53;
                  }
                  if ((ulong *)((long)puVar45 + uVar54) == puVar22) {
                    puVar22 = (ulong *)((long)puVar53 + uVar54);
                    puVar23 = puVar22;
                    puVar27 = puVar3;
                    if (puVar22 < puVar38) {
                      if (*puVar3 == *puVar22) {
                        lVar49 = 0;
                        puVar23 = (ulong *)((long)puVar21 + uVar54);
                        puVar27 = (ulong *)(lVar56 + 8 + uVar36);
                        do {
                          if (puVar38 <= puVar23) goto LAB_1099cd81c;
                          uVar50 = *puVar27;
                          uVar51 = *puVar23;
                          lVar49 = lVar49 + 8;
                          puVar23 = puVar23 + 1;
                          puVar27 = puVar27 + 1;
                        } while (uVar50 == uVar51);
                        uVar51 = uVar51 ^ uVar50;
                        uVar51 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar51 & 0x5555555555555555) << 1;
                        uVar51 = (uVar51 & 0xcccccccccccccccc) >> 2 |
                                 (uVar51 & 0x3333333333333333) << 2;
                        uVar51 = (uVar51 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar51 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar51 = (uVar51 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar51 & 0xff00ff00ff00ff) << 8;
                        uVar51 = (uVar51 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar51 & 0xffff0000ffff) << 0x10;
                        uVar51 = lVar49 + ((ulong)LZCOUNT(uVar51 >> 0x20 | uVar51 << 0x20) >> 3);
                      }
                      else {
                        uVar51 = *puVar22 ^ *puVar3;
                        uVar51 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar51 & 0x5555555555555555) << 1;
                        uVar51 = (uVar51 & 0xcccccccccccccccc) >> 2 |
                                 (uVar51 & 0x3333333333333333) << 2;
                        uVar51 = (uVar51 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar51 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar51 = (uVar51 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar51 & 0xff00ff00ff00ff) << 8;
                        uVar51 = (uVar51 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar51 & 0xffff0000ffff) << 0x10;
                        uVar51 = (ulong)LZCOUNT(uVar51 >> 0x20 | uVar51 << 0x20) >> 3;
                      }
                    }
                    else {
LAB_1099cd81c:
                      if (puVar23 < (ulong *)((long)puVar5 - 3U)) {
                        if ((int)*puVar27 == (int)*puVar23) {
                          puVar23 = (ulong *)((long)puVar23 + 4);
                          puVar27 = (ulong *)((long)puVar27 + 4);
                        }
                      }
                      if (puVar23 < (ulong *)((long)puVar5 - 1U)) {
                        if ((short)*puVar27 == (short)*puVar23) {
                          puVar23 = (ulong *)((long)puVar23 + 2);
                          puVar27 = (ulong *)((long)puVar27 + 2);
                        }
                      }
                      if ((puVar23 < puVar8) && ((byte)*puVar27 == (byte)*puVar23)) {
                        puVar23 = (ulong *)((long)puVar23 + 1);
                      }
                      uVar51 = (long)puVar23 - (long)puVar22;
                    }
                    uVar54 = uVar51 + uVar54;
                  }
                  if (uVar11 <= uVar54) {
                    lVar49 = 0;
                    puVar22 = puVar2;
                    if (uVar28 <= uVar14) {
                      puVar22 = puVar3;
                    }
                    uVar51 = uVar54;
                    if ((puVar57 < puVar53) && (puVar22 < puVar45)) {
                      lVar49 = 0;
                      puVar45 = (ulong *)(lVar9 + uVar44);
                      puVar23 = (ulong *)((long)puVar53 + -1);
                      do {
                        puVar45 = (ulong *)((long)puVar45 + -1);
                        if (((byte)*puVar23 != *(byte *)puVar45) ||
                           (lVar49 = lVar49 + 1, puVar23 <= puVar57)) break;
                        puVar23 = (ulong *)((long)puVar23 + -1);
                      } while (puVar22 < puVar45);
                      uVar51 = lVar49 + uVar54;
                    }
LAB_1099cd928:
                    if (uVar39 < uVar51) {
                      puVar35 = puVar41;
                      lVar37 = lVar49;
                      uVar39 = uVar51;
                      uVar58 = uVar54;
                    }
                  }
                }
                else {
                  puVar45 = (ulong *)(lVar56 + uVar44);
                  puVar22 = puVar53;
                  if (puVar53 < puVar38) {
                    if (*puVar45 == *puVar53) {
                      lVar49 = 0;
                      puVar22 = puVar21;
                      puVar45 = (ulong *)(lVar56 + 8 + uVar44);
                      do {
                        if (puVar38 <= puVar22) goto LAB_1099cd720;
                        uVar54 = *puVar45;
                        uVar51 = *puVar22;
                        lVar49 = lVar49 + 8;
                        puVar22 = puVar22 + 1;
                        puVar45 = puVar45 + 1;
                      } while (uVar54 == uVar51);
                      uVar51 = uVar51 ^ uVar54;
                      uVar54 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar51 & 0x5555555555555555) << 1;
                      uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
                               (uVar54 & 0x3333333333333333) << 2;
                      uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      uVar54 = lVar49 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                    }
                    else {
                      uVar54 = *puVar53 ^ *puVar45;
                      uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar54 & 0x5555555555555555) << 1;
                      uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
                               (uVar54 & 0x3333333333333333) << 2;
                      uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                    }
                  }
                  else {
LAB_1099cd720:
                    if (puVar22 < (ulong *)((long)puVar5 - 3U)) {
                      if ((int)*puVar45 == (int)*puVar22) {
                        puVar22 = (ulong *)((long)puVar22 + 4);
                        puVar45 = (ulong *)((long)puVar45 + 4);
                      }
                    }
                    if (puVar22 < (ulong *)((long)puVar5 - 1U)) {
                      if ((short)*puVar45 == (short)*puVar22) {
                        puVar22 = (ulong *)((long)puVar22 + 2);
                        puVar45 = (ulong *)((long)puVar45 + 2);
                      }
                    }
                    if ((puVar22 < puVar8) && ((byte)*puVar45 == (byte)*puVar22)) {
                      puVar22 = (ulong *)((long)puVar22 + 1);
                    }
                    uVar54 = (long)puVar22 - (long)puVar53;
                  }
                  if (uVar11 <= uVar54) {
                    lVar49 = 0;
                    uVar51 = uVar54;
                    if ((puVar57 < puVar53) && (uVar28 < uVar14)) {
                      lVar49 = 0;
                      puVar45 = (ulong *)((long)puVar53 + -1);
                      puVar22 = (ulong *)(lVar56 + -1 + uVar44);
                      do {
                        if (((byte)*puVar45 != (byte)*puVar22) ||
                           (lVar49 = lVar49 + 1, puVar45 <= puVar57)) break;
                        puVar45 = (ulong *)((long)puVar45 + -1);
                        bVar1 = puVar3 < puVar22;
                        puVar22 = (ulong *)((long)puVar22 + -1);
                      } while (bVar1);
                      uVar51 = lVar49 + uVar54;
                    }
                    goto LAB_1099cd928;
                  }
                }
              }
            }
            puVar41 = puVar41 + 2;
          } while (puVar41 < puVar6);
          if (puVar35 == (uint *)0x0) {
            func_0x0001099cdf94(param_1,uVar55,iVar17,iVar19,(ulong)*(uint *)(param_3 + 8),
                                *(undefined4 *)(param_3 + 0x10));
            puVar21 = (ulong *)((long)puVar53 + 1);
          }
          else {
            lVar49 = param_2[2];
            if (lVar49 == param_2[3]) {
              return 0xffffffffffffffba;
            }
            piVar42 = (int *)(*param_2 + lVar49 * 0xc);
            uVar14 = *puVar35;
            piVar42[1] = (iVar52 - (int)lVar37) - (int)puVar57;
            piVar42[2] = (int)uVar58 + (int)lVar37;
            *piVar42 = iVar19 - uVar14;
            param_2[2] = lVar49 + 1;
            func_0x0001099cdf94(param_1,uVar55,iVar17,iVar19,*(undefined4 *)(param_3 + 8),
                                *(undefined4 *)(param_3 + 0x10));
            puVar57 = (ulong *)((long)puVar53 + uVar58);
            puVar21 = puVar57;
            if (puVar57 <= puVar46) {
              if (1 < (long)uVar58) {
                uVar15 = *(undefined4 *)(param_3 + 0x10);
                uVar10 = *(undefined4 *)(param_3 + 8);
                iVar19 = *(int *)(param_3 + 0xc);
                lVar37 = uVar58 - 1;
                iVar52 = (1 - (int)lVar56) + iVar52;
                do {
                  uVar55 = (ulong)*(byte *)((long)puVar53 + (ulong)(iVar19 - 1) + 1) +
                           (uVar55 - *(long *)(param_1 + 0x30) * ((ulong)(byte)*puVar53 + 10)) *
                           -0x30e44323485a9b9d + 10;
                  func_0x0001099cdf94(param_1,uVar55,iVar17,iVar52,uVar10,uVar15);
                  iVar52 = iVar52 + 1;
                  lVar37 = lVar37 + -1;
                  puVar53 = (ulong *)((long)puVar53 + 1);
                } while (lVar37 != 0);
              }
              puVar33 = (ulong *)((long)puVar57 - 1);
            }
          }
        }
        else {
          puVar21 = (ulong *)((long)puVar53 + 1);
        }
        puVar53 = puVar21;
      } while (puVar53 <= puVar46);
      uVar55 = (long)puVar8 - (long)puVar57;
    }
    if (0xffffffffffffff88 < uVar55) {
      return uVar55;
    }
    uVar36 = param_2[2];
    if (uVar25 < uVar36) {
      lVar56 = *param_2 + uVar25 * 0xc;
      *(int *)(lVar56 + 4) = *(int *)(lVar56 + 4) + (int)uVar24;
    }
    else {
      uVar55 = uVar48 + uVar24;
    }
    uVar43 = uVar43 + 1;
    pbStack_158 = pbStack_158 + 0x100000;
    uVar24 = uVar55;
    uVar25 = uVar36;
    if (uVar43 == uVar31) {
      return 0;
    }
  } while( true );
}



/* Entry: 1099cdb6c; end: 1099cdc13;  */

void FUN_1099cdb6c(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 != 0) {
    uVar6 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = uVar6;
    if (uVar6 <= uVar3) {
      uVar2 = uVar3;
    }
    lVar7 = uVar6 * 0xc;
    do {
      uVar6 = uVar6 + 1;
      if (uVar6 - uVar2 == 1) {
        return;
      }
      lVar8 = *param_1;
      lVar1 = lVar8 + lVar7;
      uVar4 = *(uint *)(lVar1 + 4);
      uVar5 = param_2 - uVar4;
      if (param_2 < uVar4 || uVar5 == 0) {
        *(uint *)(lVar1 + 4) = uVar4 - (int)param_2;
        return;
      }
      *(undefined4 *)(lVar1 + 4) = 0;
      uVar4 = *(uint *)(lVar1 + 8);
      param_2 = uVar5 - uVar4;
      if (uVar5 < uVar4) {
        uVar4 = uVar4 - (int)uVar5;
        *(uint *)(lVar8 + lVar7 + 8) = uVar4;
        if (param_3 <= uVar4) {
          return;
        }
        if (uVar6 < uVar3) {
          *(uint *)(lVar8 + lVar7 + 0x10) = *(int *)(lVar8 + lVar7 + 0x10) + uVar4;
        }
        param_1[1] = uVar6;
        return;
      }
      *(undefined4 *)(lVar1 + 8) = 0;
      param_1[1] = uVar6;
      lVar7 = lVar7 + 0xc;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 1099cdc14; end: 1099cdf6b;  */

void FUN_1099cdc14(long *param_1,ulong param_2,long *param_3,int *param_4,undefined1 *param_5,
                  long param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_2 + 0x18)) {
    lVar8 = 1;
  }
  else {
    lVar8 = 0;
    if (*(long *)(param_2 + 0xb0) != 0) {
      lVar8 = 2;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_110b1f268)[lVar8 * 10 + (long)*(int *)(param_2 + 0xd0)];
  puVar1 = param_5 + param_6;
  if ((0 < param_6) && (uVar6 = param_1[1], uVar6 < (ulong)param_1[2])) {
    puVar17 = (undefined8 *)(puVar1 + -0x20);
    uVar3 = *(uint *)(param_2 + 200);
    while( true ) {
      puVar12 = (ulong *)(*param_1 + uVar6 * 0xc);
      uVar19 = *puVar12;
      uVar16 = uVar19 >> 0x20;
      uVar4 = (uint)puVar12[1];
      uVar15 = (uint)(uVar19 >> 0x20);
      uVar7 = (uint)((long)puVar1 - (long)param_5);
      if (uVar7 < uVar4 + uVar15) {
        uVar6 = 0;
        if (uVar3 <= uVar7 - uVar15) {
          uVar6 = uVar19;
        }
        uVar5 = uVar7 - uVar15;
        if (uVar7 < uVar15 || uVar7 - uVar15 == 0) {
          uVar6 = 0;
          uVar5 = uVar4;
        }
        FUN_1099cdb6c(param_1,(long)puVar1 - (long)param_5 & 0xffffffff);
        iVar18 = (int)uVar6;
      }
      else {
        param_1[1] = uVar6 + 1;
        iVar18 = (int)uVar19;
        uVar6 = uVar19;
        uVar5 = uVar4;
      }
      if (iVar18 == 0) break;
      uVar4 = (int)param_5 - *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x24) + 0x400U < uVar4) {
        uVar7 = (uVar4 - *(int *)(param_2 + 0x24)) - 0x400;
        if (0x1ff < uVar7) {
          uVar7 = 0x200;
        }
        *(uint *)(param_2 + 0x24) = uVar4 - uVar7;
      }
      FUN_1099cdf6c(param_2,param_5);
      uVar19 = param_2;
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,uVar16);
      *(undefined8 *)(param_4 + 1) = *(undefined8 *)param_4;
      puVar2 = (undefined8 *)(param_5 + uVar16);
      *param_4 = (int)uVar6;
      puVar9 = (undefined8 *)((long)puVar2 - uVar19);
      puVar13 = (undefined8 *)param_3[3];
      if (puVar17 < puVar2) {
        puVar10 = puVar9;
        puVar14 = puVar13;
        if (puVar9 <= puVar17) {
          puVar14 = (undefined8 *)((long)puVar13 + ((long)puVar17 - (long)puVar9));
          uVar20 = *puVar9;
          puVar13[1] = puVar9[1];
          *puVar13 = uVar20;
          uVar20 = puVar9[2];
          puVar13[3] = puVar9[3];
          puVar13[2] = uVar20;
          puVar10 = puVar17;
          if (0x20 < (long)puVar17 - (long)puVar9) {
            puVar13 = puVar13 + 4;
            puVar9 = (undefined8 *)(param_5 + (uVar16 - uVar19) + 0x30);
            do {
              uVar20 = puVar9[-2];
              puVar13[1] = puVar9[-1];
              *puVar13 = uVar20;
              uVar20 = *puVar9;
              puVar13[3] = puVar9[1];
              puVar13[2] = uVar20;
              puVar13 = puVar13 + 4;
              puVar9 = puVar9 + 4;
            } while (puVar13 < puVar14);
          }
        }
        if (puVar10 < puVar2) {
          do {
            puVar13 = (undefined8 *)((long)puVar10 + 1);
            *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
            puVar10 = puVar13;
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar13 != puVar2);
        }
LAB_1099cde60:
        param_3[3] = param_3[3] + uVar19;
        piVar11 = (int *)param_3[1];
        if (0xffff < uVar19) {
          *(undefined4 *)(param_3 + 9) = 1;
          *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar11 - *param_3) >> 3);
        }
      }
      else {
        uVar20 = *puVar9;
        puVar13[1] = puVar9[1];
        *puVar13 = uVar20;
        lVar8 = param_3[3];
        if (0x10 < uVar19) {
          uVar20 = puVar9[2];
          *(undefined8 *)(lVar8 + 0x18) = puVar9[3];
          *(undefined8 *)(lVar8 + 0x10) = uVar20;
          uVar20 = puVar9[4];
          *(undefined8 *)(lVar8 + 0x28) = puVar9[5];
          *(undefined8 *)(lVar8 + 0x20) = uVar20;
          if (0x30 < (long)uVar19) {
            puVar13 = (undefined8 *)(lVar8 + 0x30);
            puVar9 = (undefined8 *)(param_5 + (uVar16 - uVar19) + 0x40);
            do {
              uVar20 = puVar9[-2];
              puVar13[1] = puVar9[-1];
              *puVar13 = uVar20;
              uVar20 = *puVar9;
              puVar13[3] = puVar9[1];
              puVar13[2] = uVar20;
              puVar13 = puVar13 + 4;
              puVar9 = puVar9 + 4;
            } while (puVar13 < (undefined8 *)(lVar8 + uVar19));
          }
          goto LAB_1099cde60;
        }
        param_3[3] = lVar8 + uVar19;
        piVar11 = (int *)param_3[1];
      }
      uVar16 = (ulong)uVar5 + 0xfffffffd;
      *(short *)(piVar11 + 1) = (short)uVar19;
      *piVar11 = (int)uVar6 + 3;
      if ((uVar16 & 0xffff0000) != 0) {
        *(undefined4 *)(param_3 + 9) = 2;
        *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar11 - *param_3) >> 3);
      }
      *(short *)((long)piVar11 + 6) = (short)uVar16;
      param_3[1] = (long)(piVar11 + 2);
      param_5 = (undefined1 *)((long)puVar2 + (ulong)uVar5);
      uVar6 = param_1[1];
      if (((ulong)param_1[2] <= uVar6) || (puVar1 <= param_5)) break;
    }
  }
  uVar3 = (int)param_5 - *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x24) + 0x400U < uVar3) {
    uVar4 = (uVar3 - *(int *)(param_2 + 0x24)) - 0x400;
    if (0x1ff < uVar4) {
      uVar4 = 0x200;
    }
    *(uint *)(param_2 + 0x24) = uVar3 - uVar4;
  }
  FUN_1099cdf6c(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001099cdf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,(long)puVar1 - (long)param_5);
  return;
}



/* Entry: 1099cdf6c; end: 1099ce01b;  */

/* WARNING: Removing unreachable block (ram,0x0001099b54f8) */
/* WARNING: Removing unreachable block (ram,0x0001099b550c) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd48) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd50) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd78) */
/* WARNING: Removing unreachable block (ram,0x0001099bcdb0) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd80) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd88) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd5c) */
/* WARNING: Removing unreachable block (ram,0x0001099bcda4) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd64) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd6c) */
/* WARNING: Removing unreachable block (ram,0x0001099bcdb8) */
/* WARNING: Removing unreachable block (ram,0x0001099bcd94) */
/* WARNING: Removing unreachable block (ram,0x0001099bcdbc) */
/* WARNING: Removing unreachable block (ram,0x0001099bcdc4) */
/* WARNING: Removing unreachable block (ram,0x0001099bcdcc) */
/* WARNING: Removing unreachable block (ram,0x0001099b54ec) */
/* WARNING: Removing unreachable block (ram,0x0001099b54f4) */

void FUN_1099cdf6c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(int *)(param_1 + 0xd0) == 2) {
    lVar10 = *(long *)(param_1 + 8);
    uVar7 = (ulong)*(uint *)(param_1 + 0x24);
    lVar8 = lVar10 + uVar7;
    if (lVar8 + 2U <= param_2 - 8U) {
      lVar11 = *(long *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = *(int *)(param_1 + 0xbc);
      iVar4 = *(int *)(param_1 + 0xc0);
      lVar5 = *(long *)(param_1 + 0x40);
      do {
        plVar1 = (long *)(lVar10 + uVar7);
        if (iVar2 < 7) {
          if (iVar2 == 5) {
            lVar12 = *plVar1;
            uVar13 = lVar12 * -0x30e4432345000000;
            goto LAB_1099b54dc;
          }
          if (iVar2 == 6) {
            lVar12 = *plVar1;
            uVar13 = lVar12 * -0x30e4432340650000;
            goto LAB_1099b54dc;
          }
LAB_1099b54b4:
          uVar13 = (ulong)((uint)((int)*plVar1 * -0x61c8864f) >> (ulong)(0x20U - iVar3 & 0x1f));
          lVar12 = *plVar1;
        }
        else {
          if (iVar2 == 7) {
            lVar12 = *plVar1;
            uVar13 = lVar12 * -0x30e44323405a9d00;
          }
          else {
            if (iVar2 != 8) goto LAB_1099b54b4;
            lVar12 = *plVar1;
            uVar13 = lVar12 * -0x30e44323485a9b9d;
          }
LAB_1099b54dc:
          uVar13 = uVar13 >> ((ulong)(0x40 - iVar3) & 0x3f);
        }
        *(int *)(lVar5 + uVar13 * 4) = (int)lVar8 - (int)lVar10;
        *(int *)(lVar11 + ((ulong)(lVar12 * -0x30e44323485a9b9d) >> ((ulong)(0x40 - iVar4) & 0x3f))
                          * 4) = (int)uVar7;
        uVar13 = lVar8 + 5;
        lVar8 = lVar8 + 3;
        uVar7 = uVar7 + 3;
      } while (uVar13 <= param_2 - 8U);
    }
    return;
  }
  if (*(int *)(param_1 + 0xd0) != 1) {
    return;
  }
  lVar8 = *(long *)(param_1 + 8);
  plVar9 = (long *)(lVar8 + (ulong)*(uint *)(param_1 + 0x24));
  plVar1 = (long *)((long)plVar9 + 3);
  if (plVar1 < (long *)(param_2 + -6)) {
    lVar10 = *(long *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 200);
    iVar4 = *(int *)(param_1 + 0xc0);
    do {
      plVar6 = plVar1;
      if (iVar3 < 7) {
        if (iVar3 == 5) {
          uVar7 = *plVar9 * -0x30e4432345000000;
          goto LAB_1099bcd38;
        }
        if (iVar3 == 6) {
          uVar7 = *plVar9 * -0x30e4432340650000;
          goto LAB_1099bcd38;
        }
LAB_1099bcd14:
        uVar7 = (ulong)((uint)((int)*plVar9 * -0x61c8864f) >> (ulong)(0x20U - iVar4 & 0x1f));
      }
      else {
        if (iVar3 == 7) {
          uVar7 = *plVar9 * -0x30e44323405a9d00;
        }
        else {
          if (iVar3 != 8) goto LAB_1099bcd14;
          uVar7 = *plVar9 * -0x30e44323485a9b9d;
        }
LAB_1099bcd38:
        uVar7 = uVar7 >> ((ulong)(0x40 - iVar4) & 0x3f);
      }
      *(int *)(lVar10 + uVar7 * 4) = (int)plVar9 - (int)lVar8;
      plVar1 = (long *)((long)plVar6 + 3);
      plVar9 = plVar6;
    } while (plVar1 < (long *)(param_2 + -6));
  }
  return;
}



/* Entry: 1099ce01c; end: 1099ce08b;  */

void FUN_1099ce01c(long param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = param_2 - (int)lVar4;
  uVar5 = *(uint *)(param_1 + 0x24);
  if (uVar5 < uVar2) {
    uVar1 = *(undefined4 *)(param_1 + 200);
    do {
      lVar3 = param_1;
      func_0x0001099ec738(param_1,lVar4 + (ulong)uVar5,param_3,uVar1,0);
      uVar5 = (int)lVar3 + uVar5;
    } while (uVar5 < uVar2);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}



/* Entry: 1099ecb30; end: 1099ecd23;  */

ulong FUN_1099ecb30(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = (ulong *)((long)param_1 + (param_4 - (long)param_2));
  if (param_3 <= puVar1) {
    puVar1 = param_3;
  }
  puVar3 = param_1;
  puVar5 = param_2;
  if (param_1 < (ulong *)((long)puVar1 - 7U)) {
    if (*param_2 == *param_1) {
      lVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        if ((ulong *)((long)puVar1 - 7U) <= puVar3) goto LAB_1099ecba4;
        lVar6 = lVar6 + 8;
      } while (*puVar5 == *puVar3);
      uVar4 = *puVar3 ^ *puVar5;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = lVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
    }
    else {
      uVar4 = *param_1 ^ *param_2;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    }
  }
  else {
LAB_1099ecba4:
    if (puVar3 < (ulong *)((long)puVar1 - 3U)) {
      if ((int)*puVar5 == (int)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 4);
        puVar5 = (ulong *)((long)puVar5 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)puVar1 - 1U)) {
      if ((short)*puVar5 == (short)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar5 = (ulong *)((long)puVar5 + 2);
      }
    }
    if ((puVar3 < puVar1) && ((char)*puVar5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar4 = (long)puVar3 - (long)param_1;
  }
  if ((long)param_2 + uVar4 != param_4) {
    return uVar4;
  }
  puVar1 = (ulong *)((long)param_1 + uVar4);
  puVar3 = puVar1;
  if (puVar1 < (ulong *)((long)param_3 + -7)) {
    if (*param_5 == *puVar1) {
      lVar6 = 0;
      puVar3 = (ulong *)(uVar4 + (long)param_1);
      do {
        puVar3 = puVar3 + 1;
        param_5 = param_5 + 1;
        if ((ulong *)((long)param_3 + -7) <= puVar3) goto LAB_1099ecc98;
        lVar6 = lVar6 + 8;
      } while (*param_5 == *puVar3);
      uVar2 = *puVar3 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
    }
    else {
      uVar2 = *puVar1 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = (ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3;
    }
  }
  else {
LAB_1099ecc98:
    if (puVar3 < (ulong *)((long)param_3 + -3)) {
      if ((int)*param_5 == (int)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 4);
        puVar3 = (ulong *)((long)puVar3 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)param_3 + -1)) {
      if ((short)*param_5 == (short)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 2);
        puVar3 = (ulong *)((long)puVar3 + 2);
      }
    }
    if ((puVar3 < param_3) && ((char)*param_5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar2 = (long)puVar3 - (long)puVar1;
  }
  return uVar2 + uVar4;
}



/* Entry: 1099ecd24; end: 1099ed1b3;  */

void FUN_1099ecd24(long *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar11;
  undefined8 uVar9;
  ulong uVar10;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uStack_34;
  
  iVar8 = (int)param_1[0xc];
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if (param_3 < 0x401) {
      *(undefined4 *)(param_1 + 10) = 1;
    }
    lVar2 = param_1[0xb];
    if (*(int *)(lVar2 + 0x400) == 2) {
      *(undefined4 *)(param_1 + 10) = 0;
      if (iVar8 != 2) {
        lVar5 = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        lVar6 = *param_1;
        do {
          uVar4 = (uint)*(byte *)(lVar2 + 2 + lVar5);
          iVar8 = 1 << (ulong)(0xb - uVar4 & 0x1f);
          if (uVar4 == 0) {
            iVar8 = 1;
          }
          *(int *)(lVar6 + lVar5) = iVar8;
          *(int *)(param_1 + 6) = iVar8 + (int)param_1[6];
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0x400);
      }
      lVar5 = 0;
      lVar6 = (long)(1 << (ulong)(*(ushort *)(lVar2 + 0xcb4) - 1 & 0x1f));
      if (*(ushort *)(lVar2 + 0xcb4) == 0) {
        lVar6 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      lVar7 = param_1[1];
      piVar3 = (int *)(lVar2 + lVar6 * 4 + 0xcbc);
      do {
        iVar8 = 1 << (ulong)(10 - (*piVar3 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar3 + 0xffffU < 0x10000) {
          iVar8 = 1;
        }
        *(int *)(lVar7 + lVar5) = iVar8;
        *(int *)((long)param_1 + 0x34) = iVar8 + *(int *)((long)param_1 + 0x34);
        lVar5 = lVar5 + 4;
        piVar3 = piVar3 + 2;
      } while (lVar5 != 0x90);
      lVar5 = 0;
      lVar6 = (long)(1 << (ulong)(*(ushort *)(lVar2 + 0x708) - 1 & 0x1f));
      if (*(ushort *)(lVar2 + 0x708) == 0) {
        lVar6 = 1;
      }
      *(undefined4 *)(param_1 + 7) = 0;
      lVar7 = param_1[2];
      piVar3 = (int *)(lVar2 + lVar6 * 4 + 0x710);
      do {
        iVar8 = 1 << (ulong)(10 - (*piVar3 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar3 + 0xffffU < 0x10000) {
          iVar8 = 1;
        }
        *(int *)(lVar7 + lVar5) = iVar8;
        *(int *)(param_1 + 7) = iVar8 + (int)param_1[7];
        lVar5 = lVar5 + 4;
        piVar3 = piVar3 + 2;
      } while (lVar5 != 0xd4);
      lVar5 = 0;
      lVar6 = (long)(1 << (ulong)(*(ushort *)(lVar2 + 0x404) - 1 & 0x1f));
      if (*(ushort *)(lVar2 + 0x404) == 0) {
        lVar6 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      lVar7 = param_1[3];
      piVar3 = (int *)(lVar2 + lVar6 * 4 + 0x40c);
      do {
        iVar8 = 1 << (ulong)(10 - (*piVar3 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar3 + 0xffffU < 0x10000) {
          iVar8 = 1;
        }
        *(int *)(lVar7 + lVar5) = iVar8;
        *(int *)((long)param_1 + 0x3c) = iVar8 + *(int *)((long)param_1 + 0x3c);
        lVar5 = lVar5 + 4;
        piVar3 = piVar3 + 2;
      } while (lVar5 != 0x80);
      goto SUB_1099ed440;
    }
    if (iVar8 != 2) {
      uStack_34 = 0xff;
      FUN_1099afb48(*param_1,&uStack_34,param_2);
      lVar2 = 0;
      lVar5 = *param_1;
      iVar8 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar2);
        uVar16 = puVar1[1];
        uVar9 = *puVar1;
        iVar17 = ((uint)uVar9 >> 5) + 1;
        iVar18 = (uint)((ulong)uVar9 >> 0x25) + 1;
        iVar19 = ((uint)uVar16 >> 5) + 1;
        iVar20 = (uint)((ulong)uVar16 >> 0x25) + 1;
        puVar1 = (undefined8 *)(lVar5 + lVar2);
        puVar1[1] = CONCAT44(iVar20,iVar19);
        *puVar1 = CONCAT44(iVar18,iVar17);
        iVar8 = iVar17 + iVar8;
        iVar11 = iVar18 + iVar11;
        iVar12 = iVar19 + iVar12;
        iVar13 = iVar20 + iVar13;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x400);
      *(int *)(param_1 + 6) = iVar8 + iVar11 + iVar12 + iVar13;
    }
    _memset_pattern16(param_1[1],&UNK_10dfd94a0,0x90);
    *(undefined4 *)((long)param_1 + 0x34) = 0x24;
    _memset_pattern16(param_1[2],&UNK_10dfd94a0,0xd4);
    *(undefined4 *)(param_1 + 7) = 0x35;
    _memset_pattern16(param_1[3],&UNK_10dfd94a0,0x80);
    iVar8 = 0x20;
  }
  else {
    if (iVar8 != 2) {
      lVar2 = 0;
      lVar5 = *param_1;
      iVar8 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar2);
        uVar16 = puVar1[1];
        uVar9 = *puVar1;
        iVar17 = ((uint)uVar9 >> 5) + 1;
        iVar18 = (uint)((ulong)uVar9 >> 0x25) + 1;
        iVar19 = ((uint)uVar16 >> 5) + 1;
        iVar20 = (uint)((ulong)uVar16 >> 0x25) + 1;
        puVar1 = (undefined8 *)(lVar5 + lVar2);
        puVar1[1] = CONCAT44(iVar20,iVar19);
        *puVar1 = CONCAT44(iVar18,iVar17);
        iVar8 = iVar17 + iVar8;
        iVar11 = iVar18 + iVar11;
        iVar12 = iVar19 + iVar12;
        iVar13 = iVar20 + iVar13;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x400);
      *(int *)(param_1 + 6) = iVar8 + iVar11 + iVar12 + iVar13;
    }
    lVar2 = 0;
    lVar5 = param_1[1];
    iVar8 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar2);
      uVar16 = puVar1[1];
      uVar9 = *puVar1;
      iVar17 = ((uint)uVar9 >> 4) + 1;
      iVar18 = (uint)((ulong)uVar9 >> 0x24) + 1;
      iVar19 = ((uint)uVar16 >> 4) + 1;
      iVar20 = (uint)((ulong)uVar16 >> 0x24) + 1;
      puVar1 = (undefined8 *)(lVar5 + lVar2);
      puVar1[1] = CONCAT44(iVar20,iVar19);
      *puVar1 = CONCAT44(iVar18,iVar17);
      iVar8 = iVar17 + iVar8;
      iVar11 = iVar18 + iVar11;
      iVar12 = iVar19 + iVar12;
      iVar13 = iVar20 + iVar13;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x90);
    lVar2 = 0;
    iVar17 = 0;
    *(int *)((long)param_1 + 0x34) = iVar8 + iVar11 + iVar12 + iVar13;
    lVar5 = param_1[2];
    do {
      iVar8 = (*(uint *)(lVar5 + lVar2) >> 4) + 1;
      *(int *)(lVar5 + lVar2) = iVar8;
      iVar17 = iVar8 + iVar17;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xd4);
    lVar2 = 0;
    *(int *)(param_1 + 7) = iVar17;
    lVar5 = param_1[3];
    iVar8 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar2);
      uVar16 = puVar1[1];
      uVar9 = *puVar1;
      iVar17 = ((uint)uVar9 >> 4) + 1;
      iVar18 = (uint)((ulong)uVar9 >> 0x24) + 1;
      iVar19 = ((uint)uVar16 >> 4) + 1;
      iVar20 = (uint)((ulong)uVar16 >> 0x24) + 1;
      puVar1 = (undefined8 *)(lVar5 + lVar2);
      puVar1[1] = CONCAT44(iVar20,iVar19);
      *puVar1 = CONCAT44(iVar18,iVar17);
      iVar8 = iVar17 + iVar8;
      iVar11 = iVar18 + iVar11;
      iVar12 = iVar19 + iVar12;
      iVar13 = iVar20 + iVar13;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x80);
    iVar8 = iVar8 + iVar11 + iVar12 + iVar13;
  }
  *(int *)((long)param_1 + 0x3c) = iVar8;
SUB_1099ed440:
  if ((int)param_1[0xc] != 2) {
    iVar8 = (int)param_1[6] + 1;
    uVar4 = (uint)LZCOUNT(iVar8);
    uVar14 = uVar4 ^ 0x1f;
    uVar4 = uVar4 << 8 ^ 0x1f00;
    if (param_4 != 0) {
      uVar4 = ((uint)(iVar8 * 0x100) >> (ulong)(uVar14 & 0x1f)) + uVar14 * 0x100;
    }
    *(uint *)(param_1 + 8) = uVar4;
  }
  iVar8 = *(int *)((long)param_1 + 0x34) + 1;
  uVar4 = (uint)LZCOUNT(iVar8);
  if (param_4 == 0) {
    uVar4 = uVar4 << 8 ^ 0x1f00;
    uVar10 = (ulong)CONCAT15((char)LZCOUNT((int)((ulong)param_1[7] >> 0x20) + 1),
                             (uint5)(uint3)LZCOUNT((int)param_1[7] + 1) << 8) ^ 0x1f0000001f00;
  }
  else {
    uVar4 = uVar4 ^ 0x1f;
    uVar4 = ((uint)(iVar8 * 0x100) >> (ulong)(uVar4 & 0x1f)) + uVar4 * 0x100;
    iVar8 = (int)param_1[7] + 1;
    iVar11 = (int)((ulong)param_1[7] >> 0x20) + 1;
    uVar14 = (uint)(byte)((byte)LZCOUNT(iVar8) ^ 0x1f);
    uVar15 = (uint)(byte)((byte)LZCOUNT(iVar11) ^ 0x1f);
    uVar9 = NEON_ushl(CONCAT44(iVar11 * 0x100,iVar8 * 0x100),CONCAT44(-uVar15,-uVar14),4);
    uVar10 = CONCAT44(uVar15 * 0x100 + (int)((ulong)uVar9 >> 0x20),uVar14 * 0x100 + (int)uVar9);
  }
  *(uint *)((long)param_1 + 0x44) = uVar4;
  param_1[9] = uVar10;
  return;
}



/* Entry: 1099ed1b4; end: 1099ed77f;  */

uint FUN_1099ed1b4(uint param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_2 + 0x50) == 1) {
    uVar3 = (uint)LZCOUNT(param_1 + 1);
    uVar2 = uVar3 ^ 0x1f;
    uVar3 = uVar3 << 8 ^ 0x1f00;
    if (param_3 != 0) {
      uVar3 = ((param_1 + 1) * 0x100 >> (ulong)(uVar2 & 0x1f)) + uVar2 * 0x100;
    }
    return uVar3;
  }
  if (param_1 < 0x40) {
    uVar3 = (uint)(byte)(&UNK_10e010bcc)[param_1];
  }
  else {
    uVar3 = 0x32 - (int)LZCOUNT(param_1);
  }
  iVar1 = *(int *)(*(long *)(param_2 + 8) + (ulong)uVar3 * 4) + 1;
  uVar4 = (uint)LZCOUNT(iVar1);
  uVar2 = uVar4 ^ 0x1f;
  iVar1 = -(((uint)(iVar1 * 0x100) >> (ulong)(uVar2 & 0x1f)) + uVar2 * 0x100);
  if (param_3 == 0) {
    iVar1 = (uVar4 << 8 ^ 0xffffe0ff) + 1;
  }
  return *(int *)(param_2 + 0x44) + *(int *)(&UNK_10e010b3c + (ulong)uVar3 * 4) * 0x100 + iVar1;
}



/* Entry: 1099ed780; end: 1099edb1f;  */

uint * FUN_1099ed780(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_4;
  if (param_5 < (uint *)0x5dc) {
LAB_1099ed7ec:
    puVar11 = (uint *)0xffffffffffffffd4;
  }
  else {
    uVar21 = *param_1;
    puVar18 = param_4 + 0x9c;
    param_4[0xb5] = 0;
    param_4[0xb6] = 0;
    param_4[0xb3] = 0;
    param_4[0xb4] = 0;
    uVar4 = uVar21 & 0xff;
    param_4[0xae] = 0;
    param_4[0xaf] = 0;
    param_4[0xac] = 0;
    param_4[0xad] = 0;
    param_4[0xb2] = 0;
    param_4[0xb3] = 0;
    param_4[0xb0] = 0;
    param_4[0xb1] = 0;
    param_4[0xa6] = 0;
    param_4[0xa7] = 0;
    param_4[0xa4] = 0;
    param_4[0xa5] = 0;
    param_4[0xaa] = 0;
    param_4[0xab] = 0;
    param_4[0xa8] = 0;
    param_4[0xa9] = 0;
    param_4[0x9e] = 0;
    param_4[0x9f] = 0;
    puVar18[0] = 0;
    puVar18[1] = 0;
    param_4[0xa2] = 0;
    param_4[0xa3] = 0;
    param_4[0xa0] = 0;
    param_4[0xa1] = 0;
    if (0xc < uVar4) goto LAB_1099ed7ec;
    puVar13 = &uStack_f8;
    param_5 = &uStack_f4;
    param_2 = (uint *)0x100;
    puVar11 = param_4 + 0x137;
    param_3 = puVar18;
    func_0x000107c2ae28();
    if (puVar11 < (uint *)0xffffffffffffff89) {
      uVar20 = uVar4 - uStack_f4;
      if (uVar4 < uStack_f4) goto LAB_1099ed7ec;
      puVar17 = param_4 + 0xaa;
      iVar1 = uStack_f4 + 1;
      iVar10 = -1;
      do {
        iVar23 = iVar10;
        uVar19 = uStack_f4;
        uStack_f4 = uVar19 - 1;
        iVar10 = iVar23 + 1;
      } while (puVar18[uVar19] == 0);
      uVar15 = (ulong)(uVar19 + 1);
      if (uStack_f4 < 0xfffffffe) {
        param_2 = (uint *)0x0;
        lVar14 = uVar15 - 1;
        puVar18 = param_4 + 0xab;
        do {
          uVar12 = (uint)param_2;
          uVar19 = puVar18[-0xe] + uVar12;
          param_2 = (uint *)(ulong)uVar19;
          *puVar18 = uVar12;
          lVar14 = lVar14 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar14 != 0);
      }
      else {
        uVar19 = 0;
      }
      *puVar17 = uVar19;
      if (uStack_f8 != 0) {
        uVar22 = 0;
        do {
          bVar9 = *(byte *)((long)(param_4 + 0x137) + uVar22);
          param_2 = (uint *)(ulong)bVar9;
          uVar26 = puVar17[(long)param_2];
          uVar12 = uVar26 + 1;
          puVar13 = (uint *)(ulong)uVar12;
          puVar17[(long)param_2] = uVar12;
          param_3 = (uint *)((long)param_4 + (ulong)uVar26 * 2 + 0x2dc);
          *(byte *)param_3 = (byte)uVar22;
          *(byte *)((long)param_3 + 1) = bVar9;
          uVar22 = uVar22 + 1;
        } while (uStack_f8 != uVar22);
      }
      uVar12 = uVar4 - (iVar23 + 1);
      *puVar17 = 0;
      if (uStack_f4 < 0xfffffffe) {
        uVar26 = 0;
        lVar14 = uVar15 - 1;
        puVar18 = param_4;
        do {
          puVar18[1] = uVar26;
          uVar25 = puVar18[0x9d] << (ulong)(uVar20 & 0x1f);
          param_3 = (uint *)(ulong)uVar25;
          uVar26 = uVar25 + uVar26;
          uVar20 = uVar20 + 1;
          lVar14 = lVar14 + -1;
          param_2 = (uint *)0x0;
          puVar18 = puVar18 + 1;
        } while (lVar14 != 0);
      }
      if (iVar23 + 2U < uVar12) {
        uVar20 = iVar23 + 2;
        lVar14 = (ulong)uVar20 * 0x34;
        param_2 = param_4 + 1;
        do {
          puVar18 = (uint *)(uVar15 - 1);
          puVar17 = param_2;
          if (uStack_f4 < 0xfffffffe) {
            do {
              uVar26 = *puVar17 >> (ulong)(uVar20 & 0x1f);
              puVar13 = (uint *)(ulong)uVar26;
              *(uint *)((long)puVar17 + lVar14) = uVar26;
              param_3 = (uint *)((long)puVar18 + -1);
              puVar18 = param_3;
              puVar17 = puVar17 + 1;
            } while (param_3 != (uint *)0x0);
          }
          uVar20 = uVar20 + 1;
          lVar14 = lVar14 + 0x34;
        } while (uVar12 != uVar20);
      }
      uStack_e8 = *(undefined8 *)(param_4 + 2);
      uStack_f0 = *(undefined8 *)param_4;
      uStack_d8 = *(undefined8 *)(param_4 + 6);
      uStack_e0 = *(undefined8 *)(param_4 + 4);
      uStack_c8 = *(undefined8 *)(param_4 + 10);
      uStack_d0 = *(undefined8 *)(param_4 + 8);
      uStack_c0 = param_4[0xc];
      if (uVar19 != 0) {
        puVar18 = (uint *)0x0;
        param_3 = (uint *)&uStack_b0;
        puVar13 = (uint *)(ulong)uVar19;
        do {
          pbVar2 = (byte *)((long)param_4 + (long)puVar18 * 2 + 0x2dc);
          bVar9 = *pbVar2;
          bVar7 = pbVar2[1];
          param_5 = (uint *)(ulong)bVar7;
          uVar12 = iVar1 - (uint)bVar7;
          uVar20 = *(uint *)((long)&uStack_f0 + (long)param_5 * 4);
          uVar15 = (ulong)uVar20;
          uVar26 = uVar4 - uVar12;
          iVar10 = 1 << (ulong)(uVar26 & 0x1f);
          if (uVar26 < iVar23 + 2U) {
            uVar26 = iVar10 + uVar20;
            if (uVar20 < uVar26) {
              lVar14 = uVar26 - uVar15;
              puVar17 = param_1 + uVar15 + 1;
              do {
                param_2 = puVar17 + 1;
                *puVar17 = (uint)bVar9 | (uVar12 & 0xff) << 0x10 | 0x1000000;
                lVar14 = lVar14 + -1;
                puVar17 = param_2;
              } while (lVar14 != 0);
            }
          }
          else {
            uVar25 = uVar12 + (iVar1 - uVar4);
            uVar5 = uVar25;
            if ((int)uVar25 < 2) {
              uVar5 = 1;
            }
            uVar6 = param_4[(ulong)uVar5 + 0xa9];
            puVar17 = param_4 + (ulong)uVar12 * 0xd;
            uStack_a8 = *(undefined8 *)(puVar17 + 2);
            uStack_b0 = *(undefined8 *)puVar17;
            uStack_98 = *(undefined8 *)(puVar17 + 6);
            uStack_a0 = *(undefined8 *)(puVar17 + 4);
            uStack_88 = *(undefined8 *)(puVar17 + 10);
            uStack_90 = *(undefined8 *)(puVar17 + 8);
            param_2 = (uint *)(ulong)puVar17[0xc];
            uStack_80 = puVar17[0xc];
            if ((1 < (int)uVar25) && (uVar22 = (ulong)param_3[uVar5], param_3[uVar5] != 0)) {
              puVar17 = param_1 + uVar15 + 1;
              do {
                param_2 = puVar17 + 1;
                *puVar17 = (uint)bVar9 | (uVar12 & 0xff) << 0x10 | 0x1000000;
                uVar22 = uVar22 - 1;
                puVar17 = param_2;
              } while (uVar22 != 0);
            }
            if (uVar19 != uVar6) {
              uVar22 = 0;
              do {
                pbVar2 = (byte *)((long)param_4 + uVar22 * 2 + (ulong)uVar6 * 2 + 0x2dc);
                bVar7 = *pbVar2;
                bVar8 = pbVar2[1];
                uVar25 = param_3[bVar8];
                uVar5 = (1 << (ulong)(uVar26 - (iVar1 - (uint)bVar8) & 0x1f)) + uVar25;
                param_2 = (uint *)(ulong)uVar5;
                do {
                  (param_1 + uVar15 + 1)[uVar25] =
                       (uint)bVar7 << 8 | ((iVar1 - (uint)bVar8) + uVar12 & 0xff) << 0x10 |
                       bVar9 | 0x2000000;
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar5);
                param_3[bVar8] = uVar5;
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar19 - uVar6);
            }
          }
          *(uint *)((long)&uStack_f0 + (long)param_5 * 4) = iVar10 + uVar20;
          puVar18 = (uint *)((long)puVar18 + 1);
        } while (puVar18 != puVar13);
      }
      *param_1 = uVar21 & 0xff000000 | uVar21 & 0xf | (uVar21 & 0xf) << 0x10 | 0x100;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (puVar13 == (uint *)0x0) {
    return (uint *)0xffffffffffffffb8;
  }
  puVar18 = puVar13 + -2;
  if ((uint *)0x7 < puVar13) {
    uVar15 = *(ulong *)((long)param_3 + (long)puVar18);
    if (uVar15 >> 0x38 == 0) {
      return (uint *)0xffffffffffffffff;
    }
    if ((uint *)0xffffffffffffff88 < puVar13) {
      return puVar13;
    }
    uVar4 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar15 >> 0x38)) ^ 0x1f);
    goto LAB_1099edbf0;
  }
  uVar15 = (ulong)(byte)*param_3;
  if ((long)puVar13 < 5) {
    if (puVar13 == (uint *)0x2) goto LAB_1099edbcc;
    if (puVar13 == (uint *)0x3) goto LAB_1099edbc4;
    if (puVar13 == (uint *)0x4) goto LAB_1099edbbc;
  }
  else {
    if (puVar13 != (uint *)0x5) {
      if (puVar13 != (uint *)0x6) {
        if (puVar13 != (uint *)0x7) goto LAB_1099edbd4;
        uVar15 = uVar15 | (ulong)*(byte *)((long)param_3 + 6) << 0x30;
      }
      uVar15 = uVar15 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
    }
    uVar15 = uVar15 + ((ulong)(byte)param_3[1] << 0x20);
LAB_1099edbbc:
    uVar15 = uVar15 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
LAB_1099edbc4:
    uVar15 = uVar15 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
LAB_1099edbcc:
    uVar15 = uVar15 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
  }
LAB_1099edbd4:
  if (((byte *)((long)param_3 + (long)puVar13))[-1] == 0) {
    return (uint *)0xffffffffffffffec;
  }
  puVar18 = (uint *)0x0;
  uVar4 = (int)LZCOUNT((uint)((byte *)((long)param_3 + (long)puVar13))[-1]) + (int)puVar13 * -8 +
          0x29;
LAB_1099edbf0:
  uVar22 = (ulong)uVar4;
  puVar13 = (uint *)((long)puVar11 + (long)param_2);
  uVar4 = -(uint)*(ushort *)((long)param_5 + 2) & 0x3f;
  do {
    uVar21 = (uint)uVar22;
    if ((long)puVar18 < 8) {
      if (puVar18 != (uint *)0x0) {
        puVar16 = (uint *)(uVar22 >> 3);
        bVar24 = (long)puVar16 <= (long)puVar18;
        puVar17 = puVar18;
        if ((long)puVar16 <= (long)puVar18) {
          puVar17 = puVar16;
        }
        uVar21 = uVar21 + (int)puVar17 * -8;
        goto LAB_1099edc38;
      }
LAB_1099edcf4:
      goto LAB_1099edcf8;
    }
    puVar17 = (uint *)(ulong)(uVar21 >> 3);
    uVar21 = uVar21 & 7;
    bVar24 = true;
LAB_1099edc38:
    uVar22 = (ulong)uVar21;
    puVar18 = (uint *)((long)puVar18 - ((ulong)puVar17 & 0xffffffff));
    uVar15 = *(ulong *)((long)param_3 + (long)puVar18);
    if (((uint *)((long)puVar13 - 7U) <= puVar11) || (!bVar24)) goto LAB_1099edcf4;
    puVar17 = param_5 + ((uVar15 << (uVar22 & 0x3f)) >> uVar4) + 1;
    *(short *)puVar11 = (short)*puVar17;
    uVar21 = uVar21 + *(byte *)((long)puVar17 + 2);
    puVar3 = (undefined2 *)((long)puVar11 + (ulong)*(byte *)((long)puVar17 + 3));
    puVar11 = param_5 + ((uVar15 << ((ulong)uVar21 & 0x3f)) >> uVar4) + 1;
    *puVar3 = (short)*puVar11;
    uVar21 = uVar21 + *(byte *)((long)puVar11 + 2);
    puVar3 = (undefined2 *)((long)puVar3 + (ulong)*(byte *)((long)puVar11 + 3));
    puVar11 = param_5 + ((uVar15 << ((ulong)uVar21 & 0x3f)) >> uVar4) + 1;
    *puVar3 = (short)*puVar11;
    uVar21 = uVar21 + *(byte *)((long)puVar11 + 2);
    puVar3 = (undefined2 *)((long)puVar3 + (ulong)*(byte *)((long)puVar11 + 3));
    puVar11 = param_5 + ((uVar15 << ((ulong)uVar21 & 0x3f)) >> uVar4) + 1;
    *puVar3 = (short)*puVar11;
    uVar21 = uVar21 + *(byte *)((long)puVar11 + 2);
    uVar22 = (ulong)uVar21;
    puVar11 = (uint *)((long)puVar3 + (ulong)*(byte *)((long)puVar11 + 3));
  } while (uVar21 < 0x41);
LAB_1099edd94:
  for (; uVar21 = (uint)uVar22, puVar11 <= (uint *)((long)puVar13 - 2U);
      puVar11 = (uint *)((long)puVar11 + (ulong)*(byte *)((long)puVar17 + 3))) {
    puVar17 = param_5 + ((uVar15 << (uVar22 & 0x3f)) >> uVar4) + 1;
    *(short *)puVar11 = (short)*puVar17;
    uVar22 = (ulong)(uVar21 + *(byte *)((long)puVar17 + 2));
  }
  if (puVar11 < puVar13) {
    param_5 = param_5 + ((uVar15 << (uVar22 & 0x3f)) >> uVar4) + 1;
    *(char *)puVar11 = (char)*param_5;
    if (*(char *)((long)param_5 + 3) == '\x01') {
      uVar21 = uVar21 + *(byte *)((long)param_5 + 2);
    }
    else if ((uVar21 < 0x40) && (uVar21 = uVar21 + *(byte *)((long)param_5 + 2), 0x3f < uVar21)) {
      uVar21 = 0x40;
    }
  }
  if (uVar21 != 0x40 || puVar18 != (uint *)0x0) {
    param_2 = (uint *)0xffffffffffffffec;
  }
  return param_2;
LAB_1099edcf8:
  uVar21 = (uint)uVar22;
  if (0x40 < uVar21) goto LAB_1099edd94;
  if ((long)puVar18 < 8) {
    if (puVar18 == (uint *)0x0) goto LAB_1099edd94;
    puVar16 = (uint *)(ulong)(uVar21 >> 3);
    bVar24 = (long)puVar16 <= (long)puVar18;
    puVar17 = puVar18;
    if ((long)puVar16 <= (long)puVar18) {
      puVar17 = puVar16;
    }
    uVar21 = uVar21 + (int)puVar17 * -8;
  }
  else {
    puVar17 = (uint *)(ulong)(uVar21 >> 3);
    uVar21 = uVar21 & 7;
    bVar24 = true;
  }
  uVar22 = (ulong)uVar21;
  puVar18 = (uint *)((long)puVar18 - ((ulong)puVar17 & 0xffffffff));
  uVar15 = *(ulong *)((long)param_3 + (long)puVar18);
  if (((uint *)((long)puVar13 - 2U) < puVar11) || (!bVar24)) goto LAB_1099edd94;
  puVar17 = param_5 + ((uVar15 << (uVar22 & 0x3f)) >> uVar4) + 1;
  *(short *)puVar11 = (short)*puVar17;
  uVar22 = (ulong)(uVar21 + *(byte *)((long)puVar17 + 2));
  puVar11 = (uint *)((long)puVar11 + (ulong)*(byte *)((long)puVar17 + 3));
  goto LAB_1099edcf8;
}



/* Entry: 1099edb20; end: 1099ede03;  */

ulong FUN_1099edb20(undefined2 *param_1,ulong param_2,byte *param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar8 = param_4 - 8;
  if (7 < param_4) {
    uVar7 = *(ulong *)(param_3 + uVar8);
    if (uVar7 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    uVar6 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar7 >> 0x38)) ^ 0x1f);
    goto LAB_1099edbf0;
  }
  uVar7 = (ulong)*param_3;
  if ((long)param_4 < 5) {
    if (param_4 == 2) goto LAB_1099edbcc;
    if (param_4 == 3) goto LAB_1099edbc4;
    if (param_4 == 4) goto LAB_1099edbbc;
  }
  else {
    if (param_4 != 5) {
      if (param_4 != 6) {
        if (param_4 != 7) goto LAB_1099edbd4;
        uVar7 = uVar7 | (ulong)param_3[6] << 0x30;
      }
      uVar7 = uVar7 + ((ulong)param_3[5] << 0x28);
    }
    uVar7 = uVar7 + ((ulong)param_3[4] << 0x20);
LAB_1099edbbc:
    uVar7 = uVar7 + (ulong)param_3[3] * 0x1000000;
LAB_1099edbc4:
    uVar7 = uVar7 + (ulong)param_3[2] * 0x10000;
LAB_1099edbcc:
    uVar7 = uVar7 + (ulong)param_3[1] * 0x100;
  }
LAB_1099edbd4:
  if (param_3[param_4 - 1] == 0) {
    return 0xffffffffffffffec;
  }
  uVar8 = 0;
  uVar6 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
LAB_1099edbf0:
  uVar10 = (ulong)uVar6;
  puVar2 = (undefined2 *)((long)param_1 + param_2);
  lVar1 = param_5 + 4;
  uVar6 = -(uint)*(ushort *)(param_5 + 2) & 0x3f;
  do {
    uVar9 = (uint)uVar10;
    if ((long)uVar8 < 8) {
      if (uVar8 != 0) {
        uVar10 = uVar10 >> 3;
        bVar11 = (long)uVar10 <= (long)uVar8;
        uVar7 = uVar8;
        if ((long)uVar10 <= (long)uVar8) {
          uVar7 = uVar10;
        }
        uVar9 = uVar9 + (int)uVar7 * -8;
        goto LAB_1099edc38;
      }
LAB_1099edcf4:
      goto LAB_1099edcf8;
    }
    uVar7 = (ulong)(uVar9 >> 3);
    uVar9 = uVar9 & 7;
    bVar11 = true;
LAB_1099edc38:
    uVar10 = (ulong)uVar9;
    uVar8 = uVar8 - (uVar7 & 0xffffffff);
    uVar7 = *(ulong *)(param_3 + uVar8);
    if (((undefined2 *)((long)puVar2 - 7U) <= param_1) || (!bVar11)) goto LAB_1099edcf4;
    puVar3 = (undefined2 *)(lVar1 + ((uVar7 << (uVar10 & 0x3f)) >> uVar6) * 4);
    *param_1 = *puVar3;
    bVar5 = *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar7 << ((ulong)(uVar9 + bVar5) & 0x3f)) >> uVar6) * 4);
    *param_1 = *puVar3;
    uVar9 = uVar9 + bVar5 + (uint)*(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar7 << ((ulong)uVar9 & 0x3f)) >> uVar6) * 4);
    *param_1 = *puVar3;
    uVar9 = uVar9 + *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar7 << ((ulong)uVar9 & 0x3f)) >> uVar6) * 4);
    *param_1 = *puVar3;
    uVar9 = uVar9 + *(byte *)(puVar3 + 1);
    uVar10 = (ulong)uVar9;
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  } while (uVar9 < 0x41);
LAB_1099edd94:
  for (; uVar9 = (uint)uVar10, param_1 <= puVar2 + -1;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3))) {
    puVar3 = (undefined2 *)(lVar1 + ((uVar7 << (uVar10 & 0x3f)) >> uVar6) * 4);
    *param_1 = *puVar3;
    uVar10 = (ulong)(uVar9 + *(byte *)(puVar3 + 1));
  }
  if (param_1 < puVar2) {
    puVar4 = (undefined1 *)(lVar1 + ((uVar7 << (uVar10 & 0x3f)) >> uVar6) * 4);
    *(undefined1 *)param_1 = *puVar4;
    if (puVar4[3] == '\x01') {
      uVar9 = uVar9 + (byte)puVar4[2];
    }
    else if ((uVar9 < 0x40) && (uVar9 = uVar9 + (byte)puVar4[2], 0x3f < uVar9)) {
      uVar9 = 0x40;
    }
  }
  if (uVar9 != 0x40 || uVar8 != 0) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
LAB_1099edcf8:
  uVar9 = (uint)uVar10;
  if (0x40 < uVar9) goto LAB_1099edd94;
  if ((long)uVar8 < 8) {
    if (uVar8 == 0) goto LAB_1099edd94;
    uVar10 = (ulong)(uVar9 >> 3);
    bVar11 = (long)uVar10 <= (long)uVar8;
    uVar7 = uVar8;
    if ((long)uVar10 <= (long)uVar8) {
      uVar7 = uVar10;
    }
    uVar9 = uVar9 + (int)uVar7 * -8;
  }
  else {
    uVar7 = (ulong)(uVar9 >> 3);
    uVar9 = uVar9 & 7;
    bVar11 = true;
  }
  uVar10 = (ulong)uVar9;
  uVar8 = uVar8 - (uVar7 & 0xffffffff);
  uVar7 = *(ulong *)(param_3 + uVar8);
  if ((puVar2 + -1 < param_1) || (!bVar11)) goto LAB_1099edd94;
  puVar3 = (undefined2 *)(lVar1 + ((uVar7 << (uVar10 & 0x3f)) >> uVar6) * 4);
  *param_1 = *puVar3;
  uVar10 = (ulong)(uVar9 + *(byte *)(puVar3 + 1));
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  goto LAB_1099edcf8;
}



/* Entry: 1099ede04; end: 1099ef0cf;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1099ede04(undefined2 *param_1,long *param_2,ushort *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  undefined2 *puVar32;
  undefined2 *puVar33;
  uint uVar34;
  undefined2 *puVar35;
  uint uVar36;
  int iVar37;
  undefined2 *puVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  int iVar44;
  int iVar45;
  long *plStack_118;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if (param_4 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar15 = *param_3;
  uVar16 = param_3[1];
  uVar17 = param_3[2];
  uVar30 = (ulong)uVar15 + (ulong)uVar16 + (ulong)uVar17 + 6;
  if (param_4 < uVar30) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar15 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(param_3 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar15);
  uVar18 = *(ushort *)(param_5 + 2);
  puStack_70 = (ulong *)(param_3 + 7);
  if (uVar15 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar36 = (uint)uVar15;
    if (uVar15 < 5) {
      if (uVar36 == 2) goto LAB_1099edf28;
      if (uVar36 == 3) goto LAB_1099edf20;
      if (uVar36 == 4) goto LAB_1099edf18;
    }
    else {
      if (uVar15 != 5) {
        if (uVar15 != 6) {
          if (uVar36 != 7) goto LAB_1099edf34;
          uStack_90 = uStack_90 | (ulong)(byte)param_3[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)param_3[5] << 0x20);
LAB_1099edf18:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
LAB_1099edf20:
      uStack_90 = uStack_90 + (ulong)(byte)param_3[4] * 0x10000;
LAB_1099edf28:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
LAB_1099edf34:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar36 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto LAB_1099edf48;
    }
LAB_1099ee648:
    plVar29 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
LAB_1099edf48:
    if (uVar16 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar16);
      puStack_98 = puStack_a0 + 1;
      if (uVar16 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar36 = (uint)uVar16;
        if (uVar16 < 5) {
          if (uVar36 == 2) goto LAB_1099ee000;
          if (uVar36 == 3) goto LAB_1099edff8;
          if (uVar36 == 4) goto LAB_1099edff0;
        }
        else {
          if (uVar16 != 5) {
            if (uVar16 != 6) {
              if (uVar36 != 7) goto LAB_1099ee00c;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1099edff0:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1099edff8:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1099ee000:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
LAB_1099ee00c:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1099ee648;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar36 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar17 != 0) {
        pbVar3 = (byte *)((long)puStack_c8 + (ulong)uVar17);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar17) {
          uStack_e0 = *(ulong *)(pbVar3 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar3 + -8);
          goto LAB_1099ee108;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar36 = (uint)uVar17;
        if (uVar17 < 5) {
          if (uVar36 == 2) goto LAB_1099ee0e8;
          if (uVar36 == 3) goto LAB_1099ee0e0;
          if (uVar36 == 4) goto LAB_1099ee0d8;
        }
        else {
          if (uVar17 != 5) {
            if (uVar17 != 6) {
              if (uVar36 != 7) goto LAB_1099ee0f4;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1099ee0d8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1099ee0e0:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1099ee0e8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
LAB_1099ee0f4:
        if (pbVar3[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar3[-1]) + uVar36 * -8 + 0x29;
          puStack_d0 = puStack_c8;
LAB_1099ee108:
          plVar29 = &lStack_108;
          func_0x000107c2ae50(plVar29,pbVar3,param_4 - uVar30);
          if ((long *)0xffffffffffffff88 < plVar29) {
            return plVar29;
          }
          puVar4 = (undefined2 *)((long)param_1 + (long)param_2);
          param_5 = param_5 + 4;
          uVar30 = (long)param_2 + 3;
          puVar5 = (undefined2 *)((long)param_1 + (uVar30 >> 2));
          puVar6 = (undefined2 *)((long)puVar5 + (uVar30 >> 2));
          puVar7 = (undefined2 *)((long)puVar6 + (uVar30 >> 2));
          iVar25 = (int)&uStack_90;
          func_0x000107c2ae54();
          iVar26 = (int)&uStack_b8;
          func_0x000107c2ae54();
          iVar27 = (int)&uStack_e0;
          func_0x000107c2ae54();
          iVar28 = (int)&lStack_108;
          func_0x000107c2ae54();
          puVar32 = (undefined2 *)((long)puVar4 - 7);
          iVar42 = (int)puStack_78;
          iVar37 = (int)puStack_a0;
          iVar45 = (int)puStack_c8;
          iVar44 = (int)plStack_f0;
          puVar33 = puVar7;
          puVar35 = puVar6;
          puVar38 = puVar5;
          if ((puVar7 < puVar32) && ((iVar26 == 0 && iVar25 == 0) && (iVar27 == 0 && iVar28 == 0)))
          {
            uVar36 = -(uint)uVar18 & 0x3f;
            uVar43 = (ulong)uStack_88;
            uVar40 = (ulong)uStack_b0;
            uVar31 = (ulong)uStack_d8;
            uVar30 = (ulong)uStack_100;
            plStack_118 = plStack_f8;
            lVar41 = lStack_108;
            do {
              puVar8 = (undefined2 *)(param_5 + ((uStack_90 << (uVar43 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uVar39 = (int)uVar43 + (uint)*(byte *)(puVar8 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar40 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar8;
              uVar34 = (int)uVar40 + (uint)*(byte *)(puVar8 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar8;
              uVar1 = (int)uVar31 + (uint)*(byte *)(puVar8 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)(param_5 + ((ulong)(lVar41 << (uVar30 & 0x3f)) >> uVar36) * 4);
              *puVar33 = *puVar8;
              uVar2 = (int)uVar30 + (uint)*(byte *)(puVar8 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar39 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uVar39 = uVar39 + *(byte *)(puVar8 + 1);
              bVar10 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar34 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar8;
              uVar34 = uVar34 + *(byte *)(puVar8 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar8;
              uVar1 = uVar1 + *(byte *)(puVar8 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((ulong)(lVar41 << ((ulong)uVar2 & 0x3f)) >> uVar36) * 4);
              *puVar33 = *puVar8;
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar8 + 3));
              param_1 = (undefined2 *)((long)param_1 + (ulong)bVar10);
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar39 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uVar39 = uVar39 + *(byte *)(puVar8 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar34 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar8;
              uVar34 = uVar34 + *(byte *)(puVar8 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar8;
              uVar1 = uVar1 + *(byte *)(puVar8 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((ulong)(lVar41 << ((ulong)uVar2 & 0x3f)) >> uVar36) * 4);
              *puVar33 = *puVar8;
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar39 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uVar39 = uVar39 + *(byte *)(puVar8 + 1);
              uVar43 = (ulong)uVar39;
              bVar10 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar34 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar8;
              bVar11 = *(byte *)(puVar8 + 1);
              bVar12 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar8;
              bVar13 = *(byte *)(puVar8 + 1);
              bVar14 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       (param_5 + ((ulong)(lVar41 << ((ulong)uVar2 & 0x3f)) >> uVar36) * 4);
              *puVar33 = *puVar8;
              if (uVar39 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) {
                    cVar20 = '\x01';
                    if (uVar39 == 0x40) {
                      cVar20 = '\x02';
                    }
                    goto LAB_1099ee47c;
                  }
                  cVar20 = (ulong *)((long)puStack_80 - (ulong)(uVar39 >> 3)) < puStack_78;
                  uVar19 = (int)puStack_80 - iVar42;
                  if (!(bool)cVar20) {
                    uVar19 = uVar39 >> 3;
                  }
                  uVar39 = uVar39 + uVar19 * -8;
                }
                else {
                  cVar20 = false;
                  uVar19 = uVar39 >> 3;
                  uVar39 = uVar39 & 7;
                }
                uVar43 = (ulong)uVar39;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar19);
                uStack_90 = *puStack_80;
              }
              else {
                cVar20 = '\x03';
              }
LAB_1099ee47c:
              uVar34 = uVar34 + bVar11;
              uVar40 = (ulong)uVar34;
              if (uVar34 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) {
                    cVar21 = '\x01';
                    if (uVar34 == 0x40) {
                      cVar21 = '\x02';
                    }
                    goto LAB_1099ee4e8;
                  }
                  cVar21 = (ulong *)((long)puStack_a8 - (ulong)(uVar34 >> 3)) < puStack_a0;
                  uVar39 = (int)puStack_a8 - iVar37;
                  if (!(bool)cVar21) {
                    uVar39 = uVar34 >> 3;
                  }
                  uVar34 = uVar34 + uVar39 * -8;
                }
                else {
                  cVar21 = false;
                  uVar39 = uVar34 >> 3;
                  uVar34 = uVar34 & 7;
                }
                uVar40 = (ulong)uVar34;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar39);
                uStack_b8 = *puStack_a8;
              }
              else {
                cVar21 = '\x03';
              }
LAB_1099ee4e8:
              uVar1 = uVar1 + bVar13;
              uVar31 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) {
                    cVar22 = '\x01';
                    if (uVar1 == 0x40) {
                      cVar22 = '\x02';
                    }
                    goto LAB_1099ee558;
                  }
                  cVar22 = (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3)) < puStack_c8;
                  uVar39 = (int)puStack_d0 - iVar45;
                  if (!(bool)cVar22) {
                    uVar39 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar39 * -8;
                }
                else {
                  cVar22 = false;
                  uVar39 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar39);
                uVar31 = (ulong)uVar1;
                uStack_e0 = *puStack_d0;
              }
              else {
                cVar22 = '\x03';
              }
LAB_1099ee558:
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              uVar30 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (plStack_118 < plStack_e8) {
                  if (plStack_118 == plStack_f0) {
                    cVar23 = '\x03';
                    goto LAB_1099ee5dc;
                  }
                  cVar23 = (long *)((long)plStack_118 - (ulong)(uVar2 >> 3)) < plStack_f0;
                  uVar39 = (int)plStack_118 - iVar44;
                  if (!(bool)cVar23) {
                    uVar39 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar39 * -8;
                }
                else {
                  cVar23 = false;
                  uVar39 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                plStack_118 = (long *)((long)plStack_118 - (ulong)uVar39);
                uVar30 = (ulong)uVar2;
                lVar41 = *plStack_118;
                lStack_108 = lVar41;
                plStack_f8 = plStack_118;
              }
              else {
                cVar23 = '\x03';
              }
LAB_1099ee5dc:
              param_1 = (undefined2 *)((long)param_1 + (ulong)bVar10);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)bVar12);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)bVar14);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar8 + 3));
            } while (puVar33 < puVar32 &&
                     (((cVar21 == '\0' && cVar20 == '\0') && cVar22 == '\0') && cVar23 == '\0'));
            uStack_88 = (uint)uVar43;
            uStack_b0 = (uint)uVar40;
            uStack_d8 = (uint)uVar31;
            uStack_100 = (uint)uVar30;
          }
          if (puVar5 < param_1) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar6 < puVar38) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar7 < puVar35) {
            return (long *)0xffffffffffffffec;
          }
          uVar36 = -(uint)uVar18 & 0x3f;
          uVar30 = (ulong)uStack_88;
          if (uStack_88 < 0x41) {
            do {
              uVar39 = (uint)uVar30;
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) goto LAB_1099ee81c;
                bVar24 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar30 >> 3));
                uVar34 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar34 = (int)puStack_80 - iVar42;
                }
                uStack_88 = uVar39 + uVar34 * -8;
              }
              else {
                uVar34 = uVar39 >> 3;
                uStack_88 = uVar39 & 7;
                bVar24 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar34);
              uVar30 = (ulong)uStack_88;
              uStack_90 = *puStack_80;
              if (((undefined2 *)((long)puVar5 - 7U) <= param_1) || (!bVar24)) {
                if (uStack_88 < 0x41) goto LAB_1099ee81c;
                break;
              }
              puVar8 = (undefined2 *)(param_5 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              bVar10 = *(byte *)(puVar8 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 +
                       ((uStack_90 << ((ulong)(uStack_88 + bVar10) & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uStack_88 = uStack_88 + bVar10 + (uint)*(byte *)(puVar8 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar36) * 4);
              *param_1 = *puVar8;
              uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
              uVar30 = (ulong)uStack_88;
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
            } while (uStack_88 < 0x41);
          }
LAB_1099ee8ec:
          for (; uVar39 = (uint)uVar30, param_1 <= puVar5 + -1;
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3))) {
            puVar8 = (undefined2 *)(param_5 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *param_1 = *puVar8;
            uStack_88 = uVar39 + *(byte *)(puVar8 + 1);
            uVar30 = (ulong)uStack_88;
          }
          if (param_1 < puVar5) {
            puVar9 = (undefined1 *)(param_5 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *(undefined1 *)param_1 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_88 = uVar39 + (byte)puVar9[2];
            }
            else if ((uVar39 < 0x40) && (uStack_88 = uVar39 + (byte)puVar9[2], 0x3f < uStack_88)) {
              uStack_88 = 0x40;
            }
          }
          uVar30 = (ulong)uStack_b0;
          if (uStack_b0 < 0x41) {
            do {
              uVar39 = (uint)uVar30;
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) goto LAB_1099eea84;
                bVar24 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar30 >> 3));
                uVar34 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar34 = (int)puStack_a8 - iVar37;
                }
                uStack_b0 = uVar39 + uVar34 * -8;
              }
              else {
                uVar34 = uVar39 >> 3;
                uStack_b0 = uVar39 & 7;
                bVar24 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar34);
              uVar30 = (ulong)uStack_b0;
              uStack_b8 = *puStack_a8;
              if (((undefined2 *)((long)puVar6 - 7U) <= puVar38) || (!bVar24)) {
                if (uStack_b0 < 0x41) goto LAB_1099eea84;
                break;
              }
              puVar5 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar5;
              bVar10 = *(byte *)(puVar5 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 +
                       ((uStack_b8 << ((ulong)(uStack_b0 + bVar10) & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar5;
              uStack_b0 = uStack_b0 + bVar10 + (uint)*(byte *)(puVar5 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar5;
              uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar36) * 4);
              *puVar38 = *puVar5;
              uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
              uVar30 = (ulong)uStack_b0;
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3));
            } while (uStack_b0 < 0x41);
          }
LAB_1099eeb54:
          for (; uVar39 = (uint)uVar30, puVar38 <= puVar6 + -1;
              puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *puVar38 = *puVar5;
            uStack_b0 = uVar39 + *(byte *)(puVar5 + 1);
            uVar30 = (ulong)uStack_b0;
          }
          if (puVar38 < puVar6) {
            puVar9 = (undefined1 *)(param_5 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *(undefined1 *)puVar38 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_b0 = uVar39 + (byte)puVar9[2];
            }
            else if ((uVar39 < 0x40) && (uStack_b0 = uVar39 + (byte)puVar9[2], 0x3f < uStack_b0)) {
              uStack_b0 = 0x40;
            }
          }
          uVar30 = (ulong)uStack_d8;
          if (uStack_d8 < 0x41) {
            do {
              uVar39 = (uint)uVar30;
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) goto LAB_1099eecec;
                bVar24 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar30 >> 3));
                uVar34 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar34 = (int)puStack_d0 - iVar45;
                }
                uStack_d8 = uVar39 + uVar34 * -8;
              }
              else {
                uVar34 = uVar39 >> 3;
                uStack_d8 = uVar39 & 7;
                bVar24 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar34);
              uVar30 = (ulong)uStack_d8;
              uStack_e0 = *puStack_d0;
              if (((undefined2 *)((long)puVar7 - 7U) <= puVar35) || (!bVar24)) {
                if (uStack_d8 < 0x41) goto LAB_1099eecec;
                break;
              }
              puVar5 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar5;
              bVar10 = *(byte *)(puVar5 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 +
                       ((uStack_e0 << ((ulong)(uStack_d8 + bVar10) & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar5;
              uStack_d8 = uStack_d8 + bVar10 + (uint)*(byte *)(puVar5 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar5;
              uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar36) * 4);
              *puVar35 = *puVar5;
              uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
              uVar30 = (ulong)uStack_d8;
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3));
            } while (uStack_d8 < 0x41);
          }
LAB_1099eedbc:
          for (; uVar39 = (uint)uVar30, puVar35 <= puVar7 + -1;
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *puVar35 = *puVar5;
            uStack_d8 = uVar39 + *(byte *)(puVar5 + 1);
            uVar30 = (ulong)uStack_d8;
          }
          if (puVar35 < puVar7) {
            puVar9 = (undefined1 *)(param_5 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *(undefined1 *)puVar35 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_d8 = uVar39 + (byte)puVar9[2];
            }
            else if ((uVar39 < 0x40) && (uStack_d8 = uVar39 + (byte)puVar9[2], 0x3f < uStack_d8)) {
              uStack_d8 = 0x40;
            }
          }
          for (; uVar30 = (ulong)uStack_100, uStack_100 < 0x41;
              uStack_100 = uStack_100 + *(byte *)(puVar5 + 1)) {
            if (plStack_f8 < plStack_e8) {
              if (plStack_f8 == plStack_f0) goto LAB_1099eef50;
              bVar24 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
              uVar39 = uStack_100 >> 3;
              if (!bVar24) {
                uVar39 = (int)plStack_f8 - iVar44;
              }
              uStack_100 = uStack_100 + uVar39 * -8;
            }
            else {
              uVar39 = uStack_100 >> 3;
              uStack_100 = uStack_100 & 7;
              bVar24 = true;
            }
            plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar39);
            uVar30 = (ulong)uStack_100;
            lStack_108 = *plStack_f8;
            if ((puVar32 <= puVar33) || (!bVar24)) {
              if (uStack_100 < 0x41) goto LAB_1099eef50;
              break;
            }
            puVar5 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *puVar33 = *puVar5;
            bVar10 = *(byte *)(puVar5 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     (param_5 +
                     ((ulong)(lStack_108 << ((ulong)(uStack_100 + bVar10) & 0x3f)) >> uVar36) * 4);
            *puVar33 = *puVar5;
            uStack_100 = uStack_100 + bVar10 + (uint)*(byte *)(puVar5 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar36) * 4);
            *puVar33 = *puVar5;
            uStack_100 = uStack_100 + *(byte *)(puVar5 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar36) * 4);
            *puVar33 = *puVar5;
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3));
          }
LAB_1099ef020:
          for (; uVar39 = (uint)uVar30, puVar33 <= puVar4 + -1;
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *puVar33 = *puVar5;
            uStack_100 = uVar39 + *(byte *)(puVar5 + 1);
            uVar30 = (ulong)uStack_100;
          }
          uVar34 = uVar39;
          if (puVar33 < puVar4) {
            puVar9 = (undefined1 *)
                     (param_5 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar36) * 4);
            *(undefined1 *)puVar33 = *puVar9;
            if (puVar9[3] == '\x01') {
              uVar34 = uVar39 + (byte)puVar9[2];
            }
            else {
              uVar34 = uStack_100;
              if ((uVar39 < 0x40) && (uVar34 = uVar39 + (byte)puVar9[2], 0x3f < uVar34)) {
                uVar34 = 0x40;
              }
            }
          }
          if (((((((uVar34 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_2;
          }
          return (long *)0xffffffffffffffec;
        }
        goto LAB_1099ee648;
      }
    }
    plVar29 = (long *)0xffffffffffffffb8;
  }
  return plVar29;
LAB_1099ee81c:
  uVar39 = (uint)uVar30;
  if (puStack_80 < puStack_70) {
    if (puStack_80 == puStack_78) goto LAB_1099ee8ec;
    bVar24 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar30 >> 3));
    uVar34 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar34 = (int)puStack_80 - iVar42;
    }
    uStack_88 = uVar39 + uVar34 * -8;
  }
  else {
    uVar34 = uVar39 >> 3;
    uStack_88 = uVar39 & 7;
    bVar24 = true;
  }
  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar34);
  uVar30 = (ulong)uStack_88;
  uStack_90 = *puStack_80;
  if ((puVar5 + -1 < param_1) || (!bVar24)) goto LAB_1099ee8ec;
  puVar8 = (undefined2 *)(param_5 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar36) * 4);
  *param_1 = *puVar8;
  uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
  uVar30 = (ulong)uStack_88;
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar8 + 3));
  if (0x40 < uStack_88) goto LAB_1099ee8ec;
  goto LAB_1099ee81c;
LAB_1099eea84:
  uVar39 = (uint)uVar30;
  if (puStack_a8 < puStack_98) {
    if (puStack_a8 == puStack_a0) goto LAB_1099eeb54;
    bVar24 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar30 >> 3));
    uVar34 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar34 = (int)puStack_a8 - iVar37;
    }
    uStack_b0 = uVar39 + uVar34 * -8;
  }
  else {
    uVar34 = uVar39 >> 3;
    uStack_b0 = uVar39 & 7;
    bVar24 = true;
  }
  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar34);
  uVar30 = (ulong)uStack_b0;
  uStack_b8 = *puStack_a8;
  if ((puVar6 + -1 < puVar38) || (!bVar24)) goto LAB_1099eeb54;
  puVar5 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar36) * 4);
  *puVar38 = *puVar5;
  uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
  uVar30 = (ulong)uStack_b0;
  puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_b0) goto LAB_1099eeb54;
  goto LAB_1099eea84;
LAB_1099eecec:
  uVar39 = (uint)uVar30;
  if (puStack_d0 < puStack_c0) {
    if (puStack_d0 == puStack_c8) goto LAB_1099eedbc;
    bVar24 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar30 >> 3));
    uVar34 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar34 = (int)puStack_d0 - iVar45;
    }
    uStack_d8 = uVar39 + uVar34 * -8;
  }
  else {
    uVar34 = uVar39 >> 3;
    uStack_d8 = uVar39 & 7;
    bVar24 = true;
  }
  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar34);
  uVar30 = (ulong)uStack_d8;
  uStack_e0 = *puStack_d0;
  if ((puVar7 + -1 < puVar35) || (!bVar24)) goto LAB_1099eedbc;
  puVar5 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar36) * 4);
  *puVar35 = *puVar5;
  uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
  uVar30 = (ulong)uStack_d8;
  puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_d8) goto LAB_1099eedbc;
  goto LAB_1099eecec;
LAB_1099eef50:
  uVar39 = (uint)uVar30;
  if (plStack_f8 < plStack_e8) {
    if (plStack_f8 == plStack_f0) goto LAB_1099ef020;
    bVar24 = plStack_f0 <= (long *)((long)plStack_f8 - (uVar30 >> 3));
    uVar34 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar34 = (int)plStack_f8 - iVar44;
    }
    uStack_100 = uVar39 + uVar34 * -8;
  }
  else {
    uVar34 = uVar39 >> 3;
    uStack_100 = uVar39 & 7;
    bVar24 = true;
  }
  plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar34);
  uVar30 = (ulong)uStack_100;
  lStack_108 = *plStack_f8;
  if ((puVar4 + -1 < puVar33) || (!bVar24)) goto LAB_1099ef020;
  puVar5 = (undefined2 *)(param_5 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar36) * 4);
  *puVar33 = *puVar5;
  uStack_100 = uStack_100 + *(byte *)(puVar5 + 1);
  uVar30 = (ulong)uStack_100;
  puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_100) goto LAB_1099ef020;
  goto LAB_1099eef50;
}



/* Entry: 1099ef0d0; end: 1099ef157;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1099ef0d0(long *param_1,undefined2 *param_2,long *param_3,long param_4,long *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  long *plVar30;
  ulong uVar31;
  ulong uVar32;
  undefined2 *puVar33;
  undefined2 *puVar34;
  uint uVar35;
  undefined2 *puVar36;
  uint uVar37;
  int iVar38;
  undefined2 *puVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  int iVar43;
  ulong uVar44;
  int iVar45;
  int iVar46;
  long *plStack_118;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  plVar30 = param_1;
  FUN_1099ed780(param_1,param_4,param_5,param_6,param_7);
  if ((long *)0xffffffffffffff88 < plVar30) {
    return plVar30;
  }
  uVar31 = (long)param_5 - (long)plVar30;
  if (param_5 < plVar30 || uVar31 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puVar10 = (ushort *)(param_4 + (long)plVar30);
  if (uVar31 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar16 = *puVar10;
  uVar17 = puVar10[1];
  uVar18 = puVar10[2];
  uVar32 = (ulong)uVar16 + (ulong)uVar17 + (ulong)uVar18 + 6;
  if (uVar31 < uVar32) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar16 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(puVar10 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar16);
  uVar19 = *(ushort *)((long)param_1 + 2);
  puStack_70 = (ulong *)(puVar10 + 7);
  if (uVar16 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar37 = (uint)uVar16;
    if (uVar16 < 5) {
      if (uVar37 == 2) goto LAB_1099edf28;
      if (uVar37 == 3) goto LAB_1099edf20;
      if (uVar37 == 4) goto LAB_1099edf18;
    }
    else {
      if (uVar16 != 5) {
        if (uVar16 != 6) {
          if (uVar37 != 7) goto LAB_1099edf34;
          uStack_90 = uStack_90 | (ulong)(byte)puVar10[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)puVar10 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)puVar10[5] << 0x20);
LAB_1099edf18:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 9) * 0x1000000;
LAB_1099edf20:
      uStack_90 = uStack_90 + (ulong)(byte)puVar10[4] * 0x10000;
LAB_1099edf28:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 7) * 0x100;
    }
LAB_1099edf34:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar37 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto LAB_1099edf48;
    }
LAB_1099ee648:
    plVar30 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
LAB_1099edf48:
    if (uVar17 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar17);
      puStack_98 = puStack_a0 + 1;
      if (uVar17 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar37 = (uint)uVar17;
        if (uVar17 < 5) {
          if (uVar37 == 2) goto LAB_1099ee000;
          if (uVar37 == 3) goto LAB_1099edff8;
          if (uVar37 == 4) goto LAB_1099edff0;
        }
        else {
          if (uVar17 != 5) {
            if (uVar17 != 6) {
              if (uVar37 != 7) goto LAB_1099ee00c;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1099edff0:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1099edff8:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1099ee000:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
LAB_1099ee00c:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1099ee648;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar37 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar18 != 0) {
        pbVar3 = (byte *)((long)puStack_c8 + (ulong)uVar18);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar18) {
          uStack_e0 = *(ulong *)(pbVar3 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar3 + -8);
          goto LAB_1099ee108;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar37 = (uint)uVar18;
        if (uVar18 < 5) {
          if (uVar37 == 2) goto LAB_1099ee0e8;
          if (uVar37 == 3) goto LAB_1099ee0e0;
          if (uVar37 == 4) goto LAB_1099ee0d8;
        }
        else {
          if (uVar18 != 5) {
            if (uVar18 != 6) {
              if (uVar37 != 7) goto LAB_1099ee0f4;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1099ee0d8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1099ee0e0:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1099ee0e8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
LAB_1099ee0f4:
        if (pbVar3[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar3[-1]) + uVar37 * -8 + 0x29;
          puStack_d0 = puStack_c8;
LAB_1099ee108:
          plVar30 = &lStack_108;
          func_0x000107c2ae50(plVar30,pbVar3,uVar31 - uVar32);
          if ((long *)0xffffffffffffff88 < plVar30) {
            return plVar30;
          }
          puVar4 = (undefined2 *)((long)param_2 + (long)param_3);
          uVar31 = (long)param_3 + 3;
          puVar5 = (undefined2 *)((long)param_2 + (uVar31 >> 2));
          puVar6 = (undefined2 *)((long)puVar5 + (uVar31 >> 2));
          puVar7 = (undefined2 *)((long)puVar6 + (uVar31 >> 2));
          iVar26 = (int)&uStack_90;
          func_0x000107c2ae54();
          iVar27 = (int)&uStack_b8;
          func_0x000107c2ae54();
          iVar28 = (int)&uStack_e0;
          func_0x000107c2ae54();
          iVar29 = (int)&lStack_108;
          func_0x000107c2ae54();
          puVar33 = (undefined2 *)((long)puVar4 - 7);
          iVar43 = (int)puStack_78;
          iVar38 = (int)puStack_a0;
          iVar46 = (int)puStack_c8;
          iVar45 = (int)plStack_f0;
          puVar34 = puVar7;
          puVar36 = puVar6;
          puVar39 = puVar5;
          if ((puVar7 < puVar33) && ((iVar27 == 0 && iVar26 == 0) && (iVar28 == 0 && iVar29 == 0)))
          {
            uVar37 = -(uint)uVar19 & 0x3f;
            uVar44 = (ulong)uStack_88;
            uVar41 = (ulong)uStack_b0;
            uVar32 = (ulong)uStack_d8;
            uVar31 = (ulong)uStack_100;
            plStack_118 = plStack_f8;
            lVar42 = lStack_108;
            do {
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << (uVar44 & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              uVar40 = (int)uVar44 + (uint)*(byte *)(puVar8 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << (uVar41 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar8;
              uVar35 = (int)uVar41 + (uint)*(byte *)(puVar8 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << (uVar32 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar8;
              uVar1 = (int)uVar32 + (uint)*(byte *)(puVar8 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar42 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar34 = *puVar8;
              uVar2 = (int)uVar31 + (uint)*(byte *)(puVar8 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              uVar40 = uVar40 + *(byte *)(puVar8 + 1);
              bVar11 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar35 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar8;
              uVar35 = uVar35 + *(byte *)(puVar8 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar8;
              uVar1 = uVar1 + *(byte *)(puVar8 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar42 << ((ulong)uVar2 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar34 = *puVar8;
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar8 + 3));
              param_2 = (undefined2 *)((long)param_2 + (ulong)bVar11);
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              uVar40 = uVar40 + *(byte *)(puVar8 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar35 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar8;
              uVar35 = uVar35 + *(byte *)(puVar8 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar8;
              uVar1 = uVar1 + *(byte *)(puVar8 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar42 << ((ulong)uVar2 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar34 = *puVar8;
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              uVar40 = uVar40 + *(byte *)(puVar8 + 1);
              uVar44 = (ulong)uVar40;
              bVar11 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar35 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar8;
              bVar12 = *(byte *)(puVar8 + 1);
              bVar13 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar8;
              bVar14 = *(byte *)(puVar8 + 1);
              bVar15 = *(byte *)((long)puVar8 + 3);
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar42 << ((ulong)uVar2 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar34 = *puVar8;
              if (uVar40 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) {
                    cVar21 = '\x01';
                    if (uVar40 == 0x40) {
                      cVar21 = '\x02';
                    }
                    goto LAB_1099ee47c;
                  }
                  cVar21 = (ulong *)((long)puStack_80 - (ulong)(uVar40 >> 3)) < puStack_78;
                  uVar20 = (int)puStack_80 - iVar43;
                  if (!(bool)cVar21) {
                    uVar20 = uVar40 >> 3;
                  }
                  uVar40 = uVar40 + uVar20 * -8;
                }
                else {
                  cVar21 = false;
                  uVar20 = uVar40 >> 3;
                  uVar40 = uVar40 & 7;
                }
                uVar44 = (ulong)uVar40;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar20);
                uStack_90 = *puStack_80;
              }
              else {
                cVar21 = '\x03';
              }
LAB_1099ee47c:
              uVar35 = uVar35 + bVar12;
              uVar41 = (ulong)uVar35;
              if (uVar35 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) {
                    cVar22 = '\x01';
                    if (uVar35 == 0x40) {
                      cVar22 = '\x02';
                    }
                    goto LAB_1099ee4e8;
                  }
                  cVar22 = (ulong *)((long)puStack_a8 - (ulong)(uVar35 >> 3)) < puStack_a0;
                  uVar40 = (int)puStack_a8 - iVar38;
                  if (!(bool)cVar22) {
                    uVar40 = uVar35 >> 3;
                  }
                  uVar35 = uVar35 + uVar40 * -8;
                }
                else {
                  cVar22 = false;
                  uVar40 = uVar35 >> 3;
                  uVar35 = uVar35 & 7;
                }
                uVar41 = (ulong)uVar35;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar40);
                uStack_b8 = *puStack_a8;
              }
              else {
                cVar22 = '\x03';
              }
LAB_1099ee4e8:
              uVar1 = uVar1 + bVar14;
              uVar32 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) {
                    cVar23 = '\x01';
                    if (uVar1 == 0x40) {
                      cVar23 = '\x02';
                    }
                    goto LAB_1099ee558;
                  }
                  cVar23 = (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3)) < puStack_c8;
                  uVar40 = (int)puStack_d0 - iVar46;
                  if (!(bool)cVar23) {
                    uVar40 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar40 * -8;
                }
                else {
                  cVar23 = false;
                  uVar40 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar40);
                uVar32 = (ulong)uVar1;
                uStack_e0 = *puStack_d0;
              }
              else {
                cVar23 = '\x03';
              }
LAB_1099ee558:
              uVar2 = uVar2 + *(byte *)(puVar8 + 1);
              uVar31 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (plStack_118 < plStack_e8) {
                  if (plStack_118 == plStack_f0) {
                    cVar24 = '\x03';
                    goto LAB_1099ee5dc;
                  }
                  cVar24 = (long *)((long)plStack_118 - (ulong)(uVar2 >> 3)) < plStack_f0;
                  uVar40 = (int)plStack_118 - iVar45;
                  if (!(bool)cVar24) {
                    uVar40 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar40 * -8;
                }
                else {
                  cVar24 = false;
                  uVar40 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                plStack_118 = (long *)((long)plStack_118 - (ulong)uVar40);
                uVar31 = (ulong)uVar2;
                lVar42 = *plStack_118;
                lStack_108 = lVar42;
                plStack_f8 = plStack_118;
              }
              else {
                cVar24 = '\x03';
              }
LAB_1099ee5dc:
              param_2 = (undefined2 *)((long)param_2 + (ulong)bVar11);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)bVar13);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)bVar15);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar8 + 3));
            } while (puVar34 < puVar33 &&
                     (((cVar22 == '\0' && cVar21 == '\0') && cVar23 == '\0') && cVar24 == '\0'));
            uStack_88 = (uint)uVar44;
            uStack_b0 = (uint)uVar41;
            uStack_d8 = (uint)uVar32;
            uStack_100 = (uint)uVar31;
          }
          if (puVar5 < param_2) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar6 < puVar39) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar7 < puVar36) {
            return (long *)0xffffffffffffffec;
          }
          uVar37 = -(uint)uVar19 & 0x3f;
          uVar31 = (ulong)uStack_88;
          if (uStack_88 < 0x41) {
            do {
              uVar40 = (uint)uVar31;
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) goto LAB_1099ee81c;
                bVar25 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar31 >> 3));
                uVar35 = (uint)(uVar31 >> 3);
                if (!bVar25) {
                  uVar35 = (int)puStack_80 - iVar43;
                }
                uStack_88 = uVar40 + uVar35 * -8;
              }
              else {
                uVar35 = uVar40 >> 3;
                uStack_88 = uVar40 & 7;
                bVar25 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar35);
              uVar31 = (ulong)uStack_88;
              uStack_90 = *puStack_80;
              if (((undefined2 *)((long)puVar5 - 7U) <= param_2) || (!bVar25)) {
                if (uStack_88 < 0x41) goto LAB_1099ee81c;
                break;
              }
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              bVar11 = *(byte *)(puVar8 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_90 << ((ulong)(uStack_88 + bVar11) & 0x3f)) >> uVar37) * 4 + 4);
              *param_2 = *puVar8;
              uStack_88 = uStack_88 + bVar11 + (uint)*(byte *)(puVar8 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *param_2 = *puVar8;
              uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
              puVar8 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *param_2 = *puVar8;
              uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
              uVar31 = (ulong)uStack_88;
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
            } while (uStack_88 < 0x41);
          }
LAB_1099ee8ec:
          for (; uVar40 = (uint)uVar31, param_2 <= puVar5 + -1;
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3))) {
            puVar8 = (undefined2 *)
                     ((long)param_1 + ((uStack_90 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *param_2 = *puVar8;
            uStack_88 = uVar40 + *(byte *)(puVar8 + 1);
            uVar31 = (ulong)uStack_88;
          }
          if (param_2 < puVar5) {
            puVar9 = (undefined1 *)
                     ((long)param_1 + ((uStack_90 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *(undefined1 *)param_2 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_88 = uVar40 + (byte)puVar9[2];
            }
            else if ((uVar40 < 0x40) && (uStack_88 = uVar40 + (byte)puVar9[2], 0x3f < uStack_88)) {
              uStack_88 = 0x40;
            }
          }
          uVar31 = (ulong)uStack_b0;
          if (uStack_b0 < 0x41) {
            do {
              uVar40 = (uint)uVar31;
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) goto LAB_1099eea84;
                bVar25 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar31 >> 3));
                uVar35 = (uint)(uVar31 >> 3);
                if (!bVar25) {
                  uVar35 = (int)puStack_a8 - iVar38;
                }
                uStack_b0 = uVar40 + uVar35 * -8;
              }
              else {
                uVar35 = uVar40 >> 3;
                uStack_b0 = uVar40 & 7;
                bVar25 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar35);
              uVar31 = (ulong)uStack_b0;
              uStack_b8 = *puStack_a8;
              if (((undefined2 *)((long)puVar6 - 7U) <= puVar39) || (!bVar25)) {
                if (uStack_b0 < 0x41) goto LAB_1099eea84;
                break;
              }
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar5;
              bVar11 = *(byte *)(puVar5 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_b8 << ((ulong)(uStack_b0 + bVar11) & 0x3f)) >> uVar37) * 4 + 4);
              *puVar39 = *puVar5;
              uStack_b0 = uStack_b0 + bVar11 + (uint)*(byte *)(puVar5 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar39 = *puVar5;
              uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar39 = *puVar5;
              uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
              uVar31 = (ulong)uStack_b0;
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3));
            } while (uStack_b0 < 0x41);
          }
LAB_1099eeb54:
          for (; uVar40 = (uint)uVar31, puVar39 <= puVar6 + -1;
              puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)
                     ((long)param_1 + ((uStack_b8 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar39 = *puVar5;
            uStack_b0 = uVar40 + *(byte *)(puVar5 + 1);
            uVar31 = (ulong)uStack_b0;
          }
          if (puVar39 < puVar6) {
            puVar9 = (undefined1 *)
                     ((long)param_1 + ((uStack_b8 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *(undefined1 *)puVar39 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_b0 = uVar40 + (byte)puVar9[2];
            }
            else if ((uVar40 < 0x40) && (uStack_b0 = uVar40 + (byte)puVar9[2], 0x3f < uStack_b0)) {
              uStack_b0 = 0x40;
            }
          }
          uVar31 = (ulong)uStack_d8;
          if (uStack_d8 < 0x41) {
            do {
              uVar40 = (uint)uVar31;
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) goto LAB_1099eecec;
                bVar25 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar31 >> 3));
                uVar35 = (uint)(uVar31 >> 3);
                if (!bVar25) {
                  uVar35 = (int)puStack_d0 - iVar46;
                }
                uStack_d8 = uVar40 + uVar35 * -8;
              }
              else {
                uVar35 = uVar40 >> 3;
                uStack_d8 = uVar40 & 7;
                bVar25 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar35);
              uVar31 = (ulong)uStack_d8;
              uStack_e0 = *puStack_d0;
              if (((undefined2 *)((long)puVar7 - 7U) <= puVar36) || (!bVar25)) {
                if (uStack_d8 < 0x41) goto LAB_1099eecec;
                break;
              }
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar5;
              bVar11 = *(byte *)(puVar5 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_e0 << ((ulong)(uStack_d8 + bVar11) & 0x3f)) >> uVar37) * 4 + 4);
              *puVar36 = *puVar5;
              uStack_d8 = uStack_d8 + bVar11 + (uint)*(byte *)(puVar5 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar36 = *puVar5;
              uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3));
              puVar5 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar37) * 4 + 4
                       );
              *puVar36 = *puVar5;
              uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
              uVar31 = (ulong)uStack_d8;
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3));
            } while (uStack_d8 < 0x41);
          }
LAB_1099eedbc:
          for (; uVar40 = (uint)uVar31, puVar36 <= puVar7 + -1;
              puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)
                     ((long)param_1 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar36 = *puVar5;
            uStack_d8 = uVar40 + *(byte *)(puVar5 + 1);
            uVar31 = (ulong)uStack_d8;
          }
          if (puVar36 < puVar7) {
            puVar9 = (undefined1 *)
                     ((long)param_1 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *(undefined1 *)puVar36 = *puVar9;
            if (puVar9[3] == '\x01') {
              uStack_d8 = uVar40 + (byte)puVar9[2];
            }
            else if ((uVar40 < 0x40) && (uStack_d8 = uVar40 + (byte)puVar9[2], 0x3f < uStack_d8)) {
              uStack_d8 = 0x40;
            }
          }
          for (; uVar31 = (ulong)uStack_100, uStack_100 < 0x41;
              uStack_100 = uStack_100 + *(byte *)(puVar5 + 1)) {
            if (plStack_f8 < plStack_e8) {
              if (plStack_f8 == plStack_f0) goto LAB_1099eef50;
              bVar25 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
              uVar40 = uStack_100 >> 3;
              if (!bVar25) {
                uVar40 = (int)plStack_f8 - iVar45;
              }
              uStack_100 = uStack_100 + uVar40 * -8;
            }
            else {
              uVar40 = uStack_100 >> 3;
              uStack_100 = uStack_100 & 7;
              bVar25 = true;
            }
            plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar40);
            uVar31 = (ulong)uStack_100;
            lStack_108 = *plStack_f8;
            if ((puVar33 <= puVar34) || (!bVar25)) {
              if (uStack_100 < 0x41) goto LAB_1099eef50;
              break;
            }
            puVar5 = (undefined2 *)
                     ((long)param_1 + ((ulong)(lStack_108 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar34 = *puVar5;
            bVar11 = *(byte *)(puVar5 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)(uStack_100 + bVar11) & 0x3f)) >> uVar37) * 4 +
                     4);
            *puVar34 = *puVar5;
            uStack_100 = uStack_100 + bVar11 + (uint)*(byte *)(puVar5 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar34 = *puVar5;
            uStack_100 = uStack_100 + *(byte *)(puVar5 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3));
            puVar5 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar34 = *puVar5;
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3));
          }
LAB_1099ef020:
          for (; uVar40 = (uint)uVar31, puVar34 <= puVar4 + -1;
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3))) {
            puVar5 = (undefined2 *)
                     ((long)param_1 + ((ulong)(lStack_108 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *puVar34 = *puVar5;
            uStack_100 = uVar40 + *(byte *)(puVar5 + 1);
            uVar31 = (ulong)uStack_100;
          }
          uVar35 = uVar40;
          if (puVar34 < puVar4) {
            puVar9 = (undefined1 *)
                     ((long)param_1 + ((ulong)(lStack_108 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
            *(undefined1 *)puVar34 = *puVar9;
            if (puVar9[3] == '\x01') {
              uVar35 = uVar40 + (byte)puVar9[2];
            }
            else {
              uVar35 = uStack_100;
              if ((uVar40 < 0x40) && (uVar35 = uVar40 + (byte)puVar9[2], 0x3f < uVar35)) {
                uVar35 = 0x40;
              }
            }
          }
          if (((((((uVar35 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_3;
          }
          return (long *)0xffffffffffffffec;
        }
        goto LAB_1099ee648;
      }
    }
    plVar30 = (long *)0xffffffffffffffb8;
  }
  return plVar30;
LAB_1099ee81c:
  uVar40 = (uint)uVar31;
  if (puStack_80 < puStack_70) {
    if (puStack_80 == puStack_78) goto LAB_1099ee8ec;
    bVar25 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar31 >> 3));
    uVar35 = (uint)(uVar31 >> 3);
    if (!bVar25) {
      uVar35 = (int)puStack_80 - iVar43;
    }
    uStack_88 = uVar40 + uVar35 * -8;
  }
  else {
    uVar35 = uVar40 >> 3;
    uStack_88 = uVar40 & 7;
    bVar25 = true;
  }
  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar35);
  uVar31 = (ulong)uStack_88;
  uStack_90 = *puStack_80;
  if ((puVar5 + -1 < param_2) || (!bVar25)) goto LAB_1099ee8ec;
  puVar8 = (undefined2 *)((long)param_1 + ((uStack_90 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
  *param_2 = *puVar8;
  uStack_88 = uStack_88 + *(byte *)(puVar8 + 1);
  uVar31 = (ulong)uStack_88;
  param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar8 + 3));
  if (0x40 < uStack_88) goto LAB_1099ee8ec;
  goto LAB_1099ee81c;
LAB_1099eea84:
  uVar40 = (uint)uVar31;
  if (puStack_a8 < puStack_98) {
    if (puStack_a8 == puStack_a0) goto LAB_1099eeb54;
    bVar25 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar31 >> 3));
    uVar35 = (uint)(uVar31 >> 3);
    if (!bVar25) {
      uVar35 = (int)puStack_a8 - iVar38;
    }
    uStack_b0 = uVar40 + uVar35 * -8;
  }
  else {
    uVar35 = uVar40 >> 3;
    uStack_b0 = uVar40 & 7;
    bVar25 = true;
  }
  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar35);
  uVar31 = (ulong)uStack_b0;
  uStack_b8 = *puStack_a8;
  if ((puVar6 + -1 < puVar39) || (!bVar25)) goto LAB_1099eeb54;
  puVar5 = (undefined2 *)((long)param_1 + ((uStack_b8 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
  *puVar39 = *puVar5;
  uStack_b0 = uStack_b0 + *(byte *)(puVar5 + 1);
  uVar31 = (ulong)uStack_b0;
  puVar39 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_b0) goto LAB_1099eeb54;
  goto LAB_1099eea84;
LAB_1099eecec:
  uVar40 = (uint)uVar31;
  if (puStack_d0 < puStack_c0) {
    if (puStack_d0 == puStack_c8) goto LAB_1099eedbc;
    bVar25 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar31 >> 3));
    uVar35 = (uint)(uVar31 >> 3);
    if (!bVar25) {
      uVar35 = (int)puStack_d0 - iVar46;
    }
    uStack_d8 = uVar40 + uVar35 * -8;
  }
  else {
    uVar35 = uVar40 >> 3;
    uStack_d8 = uVar40 & 7;
    bVar25 = true;
  }
  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar35);
  uVar31 = (ulong)uStack_d8;
  uStack_e0 = *puStack_d0;
  if ((puVar7 + -1 < puVar36) || (!bVar25)) goto LAB_1099eedbc;
  puVar5 = (undefined2 *)((long)param_1 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
  *puVar36 = *puVar5;
  uStack_d8 = uStack_d8 + *(byte *)(puVar5 + 1);
  uVar31 = (ulong)uStack_d8;
  puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_d8) goto LAB_1099eedbc;
  goto LAB_1099eecec;
LAB_1099eef50:
  uVar40 = (uint)uVar31;
  if (plStack_f8 < plStack_e8) {
    if (plStack_f8 == plStack_f0) goto LAB_1099ef020;
    bVar25 = plStack_f0 <= (long *)((long)plStack_f8 - (uVar31 >> 3));
    uVar35 = (uint)(uVar31 >> 3);
    if (!bVar25) {
      uVar35 = (int)plStack_f8 - iVar45;
    }
    uStack_100 = uVar40 + uVar35 * -8;
  }
  else {
    uVar35 = uVar40 >> 3;
    uStack_100 = uVar40 & 7;
    bVar25 = true;
  }
  plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar35);
  uVar31 = (ulong)uStack_100;
  lStack_108 = *plStack_f8;
  if ((puVar4 + -1 < puVar34) || (!bVar25)) goto LAB_1099ef020;
  puVar5 = (undefined2 *)
           ((long)param_1 + ((ulong)(lStack_108 << (uVar31 & 0x3f)) >> uVar37) * 4 + 4);
  *puVar34 = *puVar5;
  uStack_100 = uStack_100 + *(byte *)(puVar5 + 1);
  uVar31 = (ulong)uStack_100;
  puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar5 + 3));
  if (0x40 < uStack_100) goto LAB_1099ef020;
  goto LAB_1099eef50;
}



/* Entry: 1099ef158; end: 1099ef167;  */

ulong FUN_1099ef158(undefined2 *param_1,ulong param_2,byte *param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  bool bVar13;
  
  if (*(char *)(param_5 + 1) == '\0') {
    if (param_4 == 0) {
      return 0xffffffffffffffb8;
    }
    uVar7 = param_4 - 8;
    if (7 < param_4) {
      uVar6 = *(ulong *)(param_3 + uVar7);
      if (uVar6 >> 0x38 == 0) {
        return 0xffffffffffffffff;
      }
      if (0xffffffffffffff88 < param_4) {
        return param_4;
      }
      uVar5 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar6 >> 0x38)) ^ 0x1f);
      goto LAB_1099ed634;
    }
    uVar6 = (ulong)*param_3;
    if ((long)param_4 < 5) {
      if (param_4 == 2) goto LAB_1099ed610;
      if (param_4 == 3) goto LAB_1099ed608;
      if (param_4 == 4) goto LAB_1099ed600;
    }
    else {
      if (param_4 != 5) {
        if (param_4 != 6) {
          if (param_4 != 7) goto LAB_1099ed618;
          uVar6 = uVar6 | (ulong)param_3[6] << 0x30;
        }
        uVar6 = uVar6 + ((ulong)param_3[5] << 0x28);
      }
      uVar6 = uVar6 + ((ulong)param_3[4] << 0x20);
LAB_1099ed600:
      uVar6 = uVar6 + (ulong)param_3[3] * 0x1000000;
LAB_1099ed608:
      uVar6 = uVar6 + (ulong)param_3[2] * 0x10000;
LAB_1099ed610:
      uVar6 = uVar6 + (ulong)param_3[1] * 0x100;
    }
LAB_1099ed618:
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar7 = 0;
    uVar5 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
LAB_1099ed634:
    uVar11 = (ulong)uVar5;
    lVar1 = param_5 + 4;
    uVar5 = -(uint)*(ushort *)(param_5 + 2) & 0x3f;
    puVar9 = param_1;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((long)uVar7 < 8) {
        pbVar8 = param_3;
        if (uVar7 == 0) goto LAB_1099ed730;
        uVar11 = uVar11 >> 3;
        bVar13 = (long)uVar11 <= (long)uVar7;
        uVar6 = uVar7;
        if ((long)uVar11 <= (long)uVar7) {
          uVar6 = uVar11;
        }
        uVar10 = uVar10 + (int)uVar6 * -8;
      }
      else {
        uVar6 = (ulong)(uVar10 >> 3);
        uVar10 = uVar10 & 7;
        bVar13 = true;
      }
      uVar11 = (ulong)uVar10;
      uVar7 = uVar7 - (uVar6 & 0xffffffff);
      uVar6 = *(ulong *)(param_3 + uVar7);
      if (((undefined2 *)((long)((long)param_1 + param_2) - 3U) <= puVar9) || (!bVar13)) break;
      puVar12 = (undefined1 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 2);
      uVar10 = uVar10 + (byte)puVar12[1];
      *(undefined1 *)puVar9 = *puVar12;
      puVar12 = (undefined1 *)(lVar1 + ((uVar6 << ((ulong)uVar10 & 0x3f)) >> uVar5) * 2);
      uVar10 = uVar10 + (byte)puVar12[1];
      *(undefined1 *)((long)puVar9 + 1) = *puVar12;
      puVar12 = (undefined1 *)(lVar1 + ((uVar6 << ((ulong)uVar10 & 0x3f)) >> uVar5) * 2);
      uVar10 = uVar10 + (byte)puVar12[1];
      *(undefined1 *)(puVar9 + 1) = *puVar12;
      puVar12 = (undefined1 *)(lVar1 + ((uVar6 << ((ulong)uVar10 & 0x3f)) >> uVar5) * 2);
      uVar10 = uVar10 + (byte)puVar12[1];
      uVar11 = (ulong)uVar10;
      puVar3 = puVar9 + 2;
      *(undefined1 *)((long)puVar9 + 3) = *puVar12;
      puVar9 = puVar3;
      if (0x40 < uVar10) {
        pbVar8 = param_3 + uVar7;
LAB_1099ed730:
        uVar10 = (uint)uVar11;
        if (puVar9 < (undefined2 *)((long)param_1 + param_2)) {
          puVar12 = (undefined1 *)((long)param_1 + (param_2 - (long)puVar9));
          do {
            puVar2 = (undefined1 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 2);
            uVar10 = (int)uVar11 + (uint)(byte)puVar2[1];
            uVar11 = (ulong)uVar10;
            *(undefined1 *)puVar9 = *puVar2;
            puVar12 = puVar12 + -1;
            puVar9 = (undefined2 *)((long)puVar9 + 1);
          } while (puVar12 != (undefined1 *)0x0);
        }
        if (uVar10 != 0x40 || pbVar8 != param_3) {
          param_2 = 0xffffffffffffffec;
        }
        return param_2;
      }
    }
    pbVar8 = param_3 + uVar7;
    goto LAB_1099ed730;
  }
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar7 = param_4 - 8;
  if (7 < param_4) {
    uVar6 = *(ulong *)(param_3 + uVar7);
    if (uVar6 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    uVar5 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar6 >> 0x38)) ^ 0x1f);
    goto LAB_1099edbf0;
  }
  uVar6 = (ulong)*param_3;
  if ((long)param_4 < 5) {
    if (param_4 == 2) goto LAB_1099edbcc;
    if (param_4 == 3) goto LAB_1099edbc4;
    if (param_4 == 4) goto LAB_1099edbbc;
  }
  else {
    if (param_4 != 5) {
      if (param_4 != 6) {
        if (param_4 != 7) goto LAB_1099edbd4;
        uVar6 = uVar6 | (ulong)param_3[6] << 0x30;
      }
      uVar6 = uVar6 + ((ulong)param_3[5] << 0x28);
    }
    uVar6 = uVar6 + ((ulong)param_3[4] << 0x20);
LAB_1099edbbc:
    uVar6 = uVar6 + (ulong)param_3[3] * 0x1000000;
LAB_1099edbc4:
    uVar6 = uVar6 + (ulong)param_3[2] * 0x10000;
LAB_1099edbcc:
    uVar6 = uVar6 + (ulong)param_3[1] * 0x100;
  }
LAB_1099edbd4:
  if (param_3[param_4 - 1] == 0) {
    return 0xffffffffffffffec;
  }
  uVar7 = 0;
  uVar5 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
LAB_1099edbf0:
  uVar11 = (ulong)uVar5;
  puVar9 = (undefined2 *)((long)param_1 + param_2);
  lVar1 = param_5 + 4;
  uVar5 = -(uint)*(ushort *)(param_5 + 2) & 0x3f;
  do {
    uVar10 = (uint)uVar11;
    if ((long)uVar7 < 8) {
      if (uVar7 != 0) {
        uVar11 = uVar11 >> 3;
        bVar13 = (long)uVar11 <= (long)uVar7;
        uVar6 = uVar7;
        if ((long)uVar11 <= (long)uVar7) {
          uVar6 = uVar11;
        }
        uVar10 = uVar10 + (int)uVar6 * -8;
        goto LAB_1099edc38;
      }
LAB_1099edcf4:
      goto LAB_1099edcf8;
    }
    uVar6 = (ulong)(uVar10 >> 3);
    uVar10 = uVar10 & 7;
    bVar13 = true;
LAB_1099edc38:
    uVar11 = (ulong)uVar10;
    uVar7 = uVar7 - (uVar6 & 0xffffffff);
    uVar6 = *(ulong *)(param_3 + uVar7);
    if (((undefined2 *)((long)puVar9 - 7U) <= param_1) || (!bVar13)) goto LAB_1099edcf4;
    puVar3 = (undefined2 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 4);
    *param_1 = *puVar3;
    bVar4 = *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar6 << ((ulong)(uVar10 + bVar4) & 0x3f)) >> uVar5) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + bVar4 + (uint)*(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar6 << ((ulong)uVar10 & 0x3f)) >> uVar5) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar6 << ((ulong)uVar10 & 0x3f)) >> uVar5) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + *(byte *)(puVar3 + 1);
    uVar11 = (ulong)uVar10;
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  } while (uVar10 < 0x41);
LAB_1099edd94:
  for (; uVar10 = (uint)uVar11, param_1 <= puVar9 + -1;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3))) {
    puVar3 = (undefined2 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 4);
    *param_1 = *puVar3;
    uVar11 = (ulong)(uVar10 + *(byte *)(puVar3 + 1));
  }
  if (param_1 < puVar9) {
    puVar12 = (undefined1 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 4);
    *(undefined1 *)param_1 = *puVar12;
    if (puVar12[3] == '\x01') {
      uVar10 = uVar10 + (byte)puVar12[2];
    }
    else if ((uVar10 < 0x40) && (uVar10 = uVar10 + (byte)puVar12[2], 0x3f < uVar10)) {
      uVar10 = 0x40;
    }
  }
  if (uVar10 != 0x40 || uVar7 != 0) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
LAB_1099edcf8:
  uVar10 = (uint)uVar11;
  if (0x40 < uVar10) goto LAB_1099edd94;
  if ((long)uVar7 < 8) {
    if (uVar7 == 0) goto LAB_1099edd94;
    uVar11 = (ulong)(uVar10 >> 3);
    bVar13 = (long)uVar11 <= (long)uVar7;
    uVar6 = uVar7;
    if ((long)uVar11 <= (long)uVar7) {
      uVar6 = uVar11;
    }
    uVar10 = uVar10 + (int)uVar6 * -8;
  }
  else {
    uVar6 = (ulong)(uVar10 >> 3);
    uVar10 = uVar10 & 7;
    bVar13 = true;
  }
  uVar11 = (ulong)uVar10;
  uVar7 = uVar7 - (uVar6 & 0xffffffff);
  uVar6 = *(ulong *)(param_3 + uVar7);
  if ((puVar9 + -1 < param_1) || (!bVar13)) goto LAB_1099edd94;
  puVar3 = (undefined2 *)(lVar1 + ((uVar6 << (uVar11 & 0x3f)) >> uVar5) * 4);
  *param_1 = *puVar3;
  uVar11 = (ulong)(uVar10 + *(byte *)(puVar3 + 1));
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  goto LAB_1099edcf8;
}



/* Entry: 1099ef168; end: 1099ef1ef;  */

ulong FUN_1099ef168(ulong param_1,undefined1 *param_2,ulong param_3,long param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar8 = param_1;
  func_0x000107c2ae40(param_1,param_4,param_5,param_6,param_7);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  uVar12 = param_5 - uVar8;
  if (param_5 < uVar8 || uVar12 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar5 = (byte *)(param_4 + uVar8);
  if (uVar12 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar8 = uVar12 - 8;
  if (7 < uVar12) {
    uVar7 = *(ulong *)(pbVar5 + uVar8);
    if (uVar7 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    uVar6 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar7 >> 0x38)) ^ 0x1f);
    goto LAB_1099ed634;
  }
  uVar7 = (ulong)*pbVar5;
  if ((long)uVar12 < 5) {
    if (uVar12 == 2) goto LAB_1099ed610;
    if (uVar12 == 3) goto LAB_1099ed608;
    if (uVar12 == 4) goto LAB_1099ed600;
  }
  else {
    if (uVar12 != 5) {
      if (uVar12 != 6) {
        if (uVar12 != 7) goto LAB_1099ed618;
        uVar7 = uVar7 | (ulong)pbVar5[6] << 0x30;
      }
      uVar7 = uVar7 + ((ulong)pbVar5[5] << 0x28);
    }
    uVar7 = uVar7 + ((ulong)pbVar5[4] << 0x20);
LAB_1099ed600:
    uVar7 = uVar7 + (ulong)pbVar5[3] * 0x1000000;
LAB_1099ed608:
    uVar7 = uVar7 + (ulong)pbVar5[2] * 0x10000;
LAB_1099ed610:
    uVar7 = uVar7 + (ulong)pbVar5[1] * 0x100;
  }
LAB_1099ed618:
  if (pbVar5[uVar12 - 1] == 0) {
    return 0xffffffffffffffec;
  }
  uVar8 = 0;
  uVar6 = (int)LZCOUNT((uint)pbVar5[uVar12 - 1]) + (int)uVar12 * -8 + 0x29;
LAB_1099ed634:
  uVar12 = (ulong)uVar6;
  lVar2 = param_1 + 4;
  uVar6 = -(uint)*(ushort *)(param_1 + 2) & 0x3f;
  puVar10 = param_2;
  while( true ) {
    uVar11 = (uint)uVar12;
    if ((long)uVar8 < 8) {
      pbVar9 = pbVar5;
      if (uVar8 == 0) goto LAB_1099ed730;
      uVar12 = uVar12 >> 3;
      bVar1 = (long)uVar12 <= (long)uVar8;
      uVar7 = uVar8;
      if ((long)uVar12 <= (long)uVar8) {
        uVar7 = uVar12;
      }
      uVar11 = uVar11 + (int)uVar7 * -8;
    }
    else {
      uVar7 = (ulong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
      bVar1 = true;
    }
    uVar12 = (ulong)uVar11;
    uVar8 = uVar8 - (uVar7 & 0xffffffff);
    uVar7 = *(ulong *)(pbVar5 + uVar8);
    if ((param_2 + param_3 + -3 <= puVar10) || (!bVar1)) break;
    puVar3 = (undefined1 *)(lVar2 + ((uVar7 << (uVar12 & 0x3f)) >> uVar6) * 2);
    uVar11 = uVar11 + (byte)puVar3[1];
    *puVar10 = *puVar3;
    puVar3 = (undefined1 *)(lVar2 + ((uVar7 << ((ulong)uVar11 & 0x3f)) >> uVar6) * 2);
    uVar11 = uVar11 + (byte)puVar3[1];
    puVar10[1] = *puVar3;
    puVar3 = (undefined1 *)(lVar2 + ((uVar7 << ((ulong)uVar11 & 0x3f)) >> uVar6) * 2);
    uVar11 = uVar11 + (byte)puVar3[1];
    puVar10[2] = *puVar3;
    puVar4 = (undefined1 *)(lVar2 + ((uVar7 << ((ulong)uVar11 & 0x3f)) >> uVar6) * 2);
    uVar11 = uVar11 + (byte)puVar4[1];
    uVar12 = (ulong)uVar11;
    puVar3 = puVar10 + 4;
    puVar10[3] = *puVar4;
    puVar10 = puVar3;
    if (0x40 < uVar11) {
      pbVar9 = pbVar5 + uVar8;
LAB_1099ed730:
      uVar11 = (uint)uVar12;
      if (puVar10 < param_2 + param_3) {
        param_2 = param_2 + (param_3 - (long)puVar10);
        do {
          puVar3 = (undefined1 *)(lVar2 + ((uVar7 << (uVar12 & 0x3f)) >> uVar6) * 2);
          uVar11 = (int)uVar12 + (uint)(byte)puVar3[1];
          uVar12 = (ulong)uVar11;
          *puVar10 = *puVar3;
          param_2 = param_2 + -1;
          puVar10 = puVar10 + 1;
        } while (param_2 != (undefined1 *)0x0);
      }
      if (uVar11 != 0x40 || pbVar9 != pbVar5) {
        param_3 = 0xffffffffffffffec;
      }
      return param_3;
    }
  }
  pbVar9 = pbVar5 + uVar8;
  goto LAB_1099ed730;
}



/* Entry: 1099ef1f0; end: 1099ef287;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1099ef1f0(undefined2 *param_1,long *param_2,ushort *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  undefined2 *puVar31;
  undefined2 *puVar32;
  undefined2 *puVar33;
  undefined2 *puVar34;
  uint uVar35;
  uint uVar36;
  undefined1 *puVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  undefined2 *puVar41;
  ulong uVar42;
  long lVar43;
  int iVar44;
  ulong uVar45;
  ulong uVar46;
  int iVar47;
  int iVar48;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if (*(char *)(param_5 + 1) == '\0') {
    if (param_4 < 10) {
      return (long *)0xffffffffffffffec;
    }
    uVar15 = *param_3;
    uVar16 = param_3[1];
    uVar17 = param_3[2];
    uVar29 = (ulong)uVar15 + (ulong)uVar16 + (ulong)uVar17 + 6;
    if (param_4 < uVar29) {
      return (long *)0xffffffffffffffec;
    }
    if (uVar15 == 0) {
      return (long *)0xffffffffffffffb8;
    }
    puStack_78 = (ulong *)(param_3 + 3);
    puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar15);
    uVar18 = *(ushort *)(param_5 + 2);
    puStack_70 = (ulong *)(param_3 + 7);
    if (uVar15 < 8) {
      uStack_90 = (ulong)(byte)*puStack_78;
      uVar38 = (uint)uVar15;
      if (uVar15 < 5) {
        if (uVar38 == 2) goto code_r0x0001000cf560;
        if (uVar38 == 3) goto code_r0x0001000cf558;
        if (uVar38 == 4) goto code_r0x0001000cf550;
      }
      else {
        if (uVar15 != 5) {
          if (uVar15 != 6) {
            if (uVar38 != 7) goto code_r0x0001000cf56c;
            uStack_90 = uStack_90 | (ulong)(byte)param_3[6] << 0x30;
          }
          uStack_90 = uStack_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
        }
        uStack_90 = uStack_90 + ((ulong)(byte)param_3[5] << 0x20);
code_r0x0001000cf550:
        uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
code_r0x0001000cf558:
        uStack_90 = uStack_90 + (ulong)(byte)param_3[4] * 0x10000;
code_r0x0001000cf560:
        uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
      }
code_r0x0001000cf56c:
      if (*(byte *)((long)puStack_a0 + -1) != 0) {
        uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar38 * -8 + 0x29;
        puStack_80 = puStack_78;
        goto code_r0x0001000cf580;
      }
code_r0x0001000cfb9c:
      plVar28 = (long *)0xffffffffffffffec;
    }
    else {
      uStack_90 = puStack_a0[-1];
      if (uStack_90 >> 0x38 == 0) {
        return (long *)0xffffffffffffffff;
      }
      uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
      puStack_80 = puStack_a0 + -1;
code_r0x0001000cf580:
      if (uVar16 != 0) {
        puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar16);
        puStack_98 = puStack_a0 + 1;
        if (uVar16 < 8) {
          uStack_b8 = (ulong)(byte)*puStack_a0;
          uVar38 = (uint)uVar16;
          if (uVar16 < 5) {
            if (uVar38 == 2) goto code_r0x0001000cf638;
            if (uVar38 == 3) goto code_r0x0001000cf630;
            if (uVar38 == 4) goto code_r0x0001000cf628;
          }
          else {
            if (uVar16 != 5) {
              if (uVar16 != 6) {
                if (uVar38 != 7) goto code_r0x0001000cf644;
                uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
              }
              uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
code_r0x0001000cf628:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
code_r0x0001000cf630:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
code_r0x0001000cf638:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
          }
code_r0x0001000cf644:
          if (*(byte *)((long)puStack_c8 + -1) == 0) goto code_r0x0001000cfb9c;
          uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar38 * -8 + 0x29;
          puStack_a8 = puStack_a0;
        }
        else {
          uStack_b8 = puStack_c8[-1];
          if (uStack_b8 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
          puStack_a8 = puStack_c8 + -1;
        }
        if (uVar17 != 0) {
          pbVar5 = (byte *)((long)puStack_c8 + (ulong)uVar17);
          puStack_c0 = puStack_c8 + 1;
          if (7 < uVar17) {
            uStack_e0 = *(ulong *)(pbVar5 + -8);
            if (uStack_e0 >> 0x38 == 0) {
              return (long *)0xffffffffffffffff;
            }
            uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
            puStack_d0 = (ulong *)(pbVar5 + -8);
            goto code_r0x0001000cf740;
          }
          uStack_e0 = (ulong)(byte)*puStack_c8;
          uVar38 = (uint)uVar17;
          if (uVar17 < 5) {
            if (uVar38 == 2) goto code_r0x0001000cf720;
            if (uVar38 == 3) goto code_r0x0001000cf718;
            if (uVar38 == 4) goto code_r0x0001000cf710;
          }
          else {
            if (uVar17 != 5) {
              if (uVar17 != 6) {
                if (uVar38 != 7) goto code_r0x0001000cf72c;
                uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
              }
              uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
code_r0x0001000cf710:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
code_r0x0001000cf718:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
code_r0x0001000cf720:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
          }
code_r0x0001000cf72c:
          if (pbVar5[-1] != 0) {
            uStack_d8 = (int)LZCOUNT((uint)pbVar5[-1]) + uVar38 * -8 + 0x29;
            puStack_d0 = puStack_c8;
code_r0x0001000cf740:
            plVar28 = &lStack_108;
            func_0x0001000d01fc(plVar28,pbVar5,param_4 - uVar29);
            if ((long *)0xffffffffffffff88 < plVar28) {
              return plVar28;
            }
            param_5 = param_5 + 4;
            uVar29 = (long)param_2 + 3;
            uVar30 = uVar29 >> 2;
            puVar6 = (undefined2 *)((long)param_1 + (uVar29 >> 2));
            puVar7 = (undefined2 *)((long)puVar6 + (uVar29 >> 2));
            puVar8 = (undefined2 *)((long)puVar7 + (uVar29 >> 2));
            iVar24 = (int)&uStack_90;
            func_0x0001000d031c();
            iVar25 = (int)&uStack_b8;
            func_0x0001000d031c();
            iVar26 = (int)&uStack_e0;
            func_0x0001000d031c();
            iVar27 = (int)&lStack_108;
            func_0x0001000d031c();
            puVar31 = (undefined2 *)(((long)param_1 + (long)param_2) - 3);
            puVar41 = param_1;
            puVar32 = puVar8;
            puVar34 = puVar7;
            puVar33 = puVar6;
            if (((iVar25 == 0 && iVar24 == 0) && (iVar26 == 0 && iVar27 == 0)) && (puVar8 < puVar31)
               ) {
              uVar38 = -(uint)uVar18 & 0x3f;
              uVar46 = (ulong)uStack_88;
              uVar45 = (ulong)uStack_b0;
              uVar29 = (ulong)uStack_d8;
              uVar42 = (ulong)uStack_100;
              plStack_110 = plStack_f8;
              puVar32 = param_1;
              lVar43 = lStack_108;
              do {
                puVar41 = puVar32;
                puVar37 = (undefined1 *)((long)puVar41 + uVar30);
                puVar32 = puVar41 + uVar30;
                puVar3 = (undefined1 *)((long)puVar41 + uVar30 * 3);
                puVar4 = (undefined1 *)(param_5 + ((uStack_90 << (uVar46 & 0x3f)) >> uVar38) * 2);
                uVar40 = (int)uVar46 + (uint)(byte)puVar4[1];
                *(undefined1 *)puVar41 = *puVar4;
                puVar4 = (undefined1 *)(param_5 + ((uStack_b8 << (uVar45 & 0x3f)) >> uVar38) * 2);
                uVar36 = (int)uVar45 + (uint)(byte)puVar4[1];
                *puVar37 = *puVar4;
                puVar4 = (undefined1 *)(param_5 + ((uStack_e0 << (uVar29 & 0x3f)) >> uVar38) * 2);
                uVar1 = (int)uVar29 + (uint)(byte)puVar4[1];
                *(undefined1 *)puVar32 = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((ulong)(lVar43 << (uVar42 & 0x3f)) >> uVar38) * 2);
                uVar2 = (int)uVar42 + (uint)(byte)puVar4[1];
                *puVar3 = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 2);
                uVar40 = uVar40 + (byte)puVar4[1];
                *(undefined1 *)((long)puVar41 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 2);
                uVar36 = uVar36 + (byte)puVar4[1];
                puVar37[1] = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 2);
                uVar1 = uVar1 + (byte)puVar4[1];
                *(undefined1 *)((long)puVar32 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 2);
                uVar2 = uVar2 + (byte)puVar4[1];
                puVar3[1] = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 2);
                uVar40 = uVar40 + (byte)puVar4[1];
                *(undefined1 *)(puVar41 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 2);
                uVar36 = uVar36 + (byte)puVar4[1];
                puVar37[2] = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 2);
                uVar1 = uVar1 + (byte)puVar4[1];
                *(undefined1 *)(puVar32 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 2);
                uVar2 = uVar2 + (byte)puVar4[1];
                puVar3[2] = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 2);
                uVar40 = uVar40 + (byte)puVar4[1];
                uVar46 = (ulong)uVar40;
                *(undefined1 *)((long)puVar41 + 3) = *puVar4;
                puVar4 = (undefined1 *)
                         (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 2);
                bVar10 = puVar4[1];
                puVar37[3] = *puVar4;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 2);
                bVar11 = puVar37[1];
                *(undefined1 *)((long)puVar32 + 3) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 2);
                bVar12 = puVar37[1];
                puVar3[3] = *puVar37;
                if (uVar40 < 0x41) {
                  if (puStack_80 < puStack_70) {
                    if (puStack_80 == puStack_78) goto code_r0x0001000cfa6c;
                    uVar35 = (int)puStack_80 - (int)puStack_78;
                    if (puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uVar40 >> 3))) {
                      uVar35 = uVar40 >> 3;
                    }
                    uVar40 = uVar40 + uVar35 * -8;
                  }
                  else {
                    uVar35 = uVar40 >> 3;
                    uVar40 = uVar40 & 7;
                  }
                  uVar46 = (ulong)uVar40;
                  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar35);
                  uStack_90 = *puStack_80;
                }
code_r0x0001000cfa6c:
                uVar36 = uVar36 + bVar10;
                uVar45 = (ulong)uVar36;
                if (uVar36 < 0x41) {
                  if (puStack_a8 < puStack_98) {
                    if (puStack_a8 == puStack_a0) goto code_r0x0001000cfad0;
                    uVar40 = (int)puStack_a8 - (int)puStack_a0;
                    if (puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uVar36 >> 3))) {
                      uVar40 = uVar36 >> 3;
                    }
                    uVar36 = uVar36 + uVar40 * -8;
                  }
                  else {
                    uVar40 = uVar36 >> 3;
                    uVar36 = uVar36 & 7;
                  }
                  uVar45 = (ulong)uVar36;
                  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar40);
                  uStack_b8 = *puStack_a8;
                }
code_r0x0001000cfad0:
                uVar1 = uVar1 + bVar11;
                uVar29 = (ulong)uVar1;
                if (uVar1 < 0x41) {
                  if (puStack_d0 < puStack_c0) {
                    if (puStack_d0 == puStack_c8) goto code_r0x0001000cfb18;
                    uVar40 = (int)puStack_d0 - (int)puStack_c8;
                    if (puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3))) {
                      uVar40 = uVar1 >> 3;
                    }
                    uVar1 = uVar1 + uVar40 * -8;
                  }
                  else {
                    uVar40 = uVar1 >> 3;
                    uVar1 = uVar1 & 7;
                  }
                  uVar29 = (ulong)uVar1;
                  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar40);
                  uStack_e0 = *puStack_d0;
                }
code_r0x0001000cfb18:
                uVar2 = uVar2 + bVar12;
                uVar42 = (ulong)uVar2;
                if (uVar2 < 0x41) {
                  if (plStack_110 < plStack_e8) {
                    if (plStack_110 == plStack_f0) goto code_r0x0001000cfb80;
                    uVar40 = (int)plStack_110 - (int)plStack_f0;
                    if (plStack_f0 <= (long *)((long)plStack_110 - (ulong)(uVar2 >> 3))) {
                      uVar40 = uVar2 >> 3;
                    }
                    uVar2 = uVar2 + uVar40 * -8;
                  }
                  else {
                    uVar40 = uVar2 >> 3;
                    uVar2 = uVar2 & 7;
                  }
                  plStack_110 = (long *)((long)plStack_110 - (ulong)uVar40);
                  uVar42 = (ulong)uVar2;
                  lVar43 = *plStack_110;
                  lStack_108 = lVar43;
                  plStack_f8 = plStack_110;
                }
code_r0x0001000cfb80:
                puVar32 = puVar41 + 2;
              } while (puVar3 + 4 < puVar31);
              puVar41 = puVar41 + 2;
              uStack_88 = (uint)uVar46;
              uStack_b0 = (uint)uVar45;
              uStack_d8 = (uint)uVar29;
              uStack_100 = (uint)uVar42;
              puVar32 = (undefined2 *)((long)puVar41 + uVar30 * 3);
              puVar34 = puVar41 + uVar30;
              puVar33 = (undefined2 *)((long)puVar41 + uVar30);
            }
            uVar38 = (uint)uVar18;
            if (puVar6 < puVar41) {
              return (long *)0xffffffffffffffec;
            }
            if (puVar7 < puVar33) {
              return (long *)0xffffffffffffffec;
            }
            if (puVar8 < puVar34) {
              return (long *)0xffffffffffffffec;
            }
            if (uStack_88 < 0x41) {
              uVar40 = -uVar38 & 0x3f;
              do {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) break;
                  bVar23 = puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uStack_88 >> 3));
                  uVar36 = uStack_88 >> 3;
                  if (!bVar23) {
                    uVar36 = (int)puStack_80 - (int)puStack_78;
                  }
                  uStack_88 = uStack_88 + uVar36 * -8;
                }
                else {
                  uVar36 = uStack_88 >> 3;
                  uStack_88 = uStack_88 & 7;
                  bVar23 = true;
                }
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar36);
                uStack_90 = *puStack_80;
                if (((undefined2 *)((long)puVar6 - 3U) <= puVar41) || (!bVar23)) break;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar40) * 2);
                uStack_88 = uStack_88 + (byte)puVar37[1];
                *(undefined1 *)puVar41 = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar40) * 2);
                uStack_88 = uStack_88 + (byte)puVar37[1];
                *(undefined1 *)((long)puVar41 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar40) * 2);
                uStack_88 = uStack_88 + (byte)puVar37[1];
                *(undefined1 *)(puVar41 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar40) * 2);
                uStack_88 = uStack_88 + (byte)puVar37[1];
                puVar9 = puVar41 + 2;
                *(undefined1 *)((long)puVar41 + 3) = *puVar37;
                puVar41 = puVar9;
                if (0x40 < uStack_88) break;
              } while( true );
            }
            if (puVar41 < puVar6) {
              puVar37 = (undefined1 *)((long)param_1 + (uVar30 - (long)puVar41));
              do {
                puVar3 = (undefined1 *)
                         (param_5 +
                         ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> (-uVar38 & 0x3f)) * 2);
                uStack_88 = uStack_88 + (byte)puVar3[1];
                *(undefined1 *)puVar41 = *puVar3;
                puVar37 = puVar37 + -1;
                puVar41 = (undefined2 *)((long)puVar41 + 1);
              } while (puVar37 != (undefined1 *)0x0);
            }
            if (uStack_b0 < 0x41) {
              uVar40 = -uVar38 & 0x3f;
              do {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) break;
                  bVar23 = puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uStack_b0 >> 3));
                  uVar36 = uStack_b0 >> 3;
                  if (!bVar23) {
                    uVar36 = (int)puStack_a8 - (int)puStack_a0;
                  }
                  uStack_b0 = uStack_b0 + uVar36 * -8;
                }
                else {
                  uVar36 = uStack_b0 >> 3;
                  uStack_b0 = uStack_b0 & 7;
                  bVar23 = true;
                }
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar36);
                uStack_b8 = *puStack_a8;
                if (((undefined2 *)((long)puVar7 - 3U) <= puVar33) || (!bVar23)) break;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar40) * 2);
                uStack_b0 = uStack_b0 + (byte)puVar37[1];
                *(undefined1 *)puVar33 = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar40) * 2);
                uStack_b0 = uStack_b0 + (byte)puVar37[1];
                *(undefined1 *)((long)puVar33 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar40) * 2);
                uStack_b0 = uStack_b0 + (byte)puVar37[1];
                *(undefined1 *)(puVar33 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar40) * 2);
                uStack_b0 = uStack_b0 + (byte)puVar37[1];
                puVar41 = puVar33 + 2;
                *(undefined1 *)((long)puVar33 + 3) = *puVar37;
                puVar33 = puVar41;
                if (0x40 < uStack_b0) break;
              } while( true );
            }
            if (puVar33 < puVar7) {
              do {
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> (-uVar38 & 0x3f)) * 2);
                uStack_b0 = uStack_b0 + (byte)puVar37[1];
                puVar41 = (undefined2 *)((long)puVar33 + 1);
                *(undefined1 *)puVar33 = *puVar37;
                puVar33 = puVar41;
              } while (puVar41 < puVar7);
            }
            if (uStack_d8 < 0x41) {
              uVar40 = -uVar38 & 0x3f;
              do {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) break;
                  bVar23 = puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uStack_d8 >> 3));
                  uVar36 = uStack_d8 >> 3;
                  if (!bVar23) {
                    uVar36 = (int)puStack_d0 - (int)puStack_c8;
                  }
                  uStack_d8 = uStack_d8 + uVar36 * -8;
                }
                else {
                  uVar36 = uStack_d8 >> 3;
                  uStack_d8 = uStack_d8 & 7;
                  bVar23 = true;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar36);
                uStack_e0 = *puStack_d0;
                if (((undefined2 *)((long)puVar8 - 3U) <= puVar34) || (!bVar23)) break;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar40) * 2);
                uStack_d8 = uStack_d8 + (byte)puVar37[1];
                *(undefined1 *)puVar34 = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar40) * 2);
                uStack_d8 = uStack_d8 + (byte)puVar37[1];
                *(undefined1 *)((long)puVar34 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar40) * 2);
                uStack_d8 = uStack_d8 + (byte)puVar37[1];
                *(undefined1 *)(puVar34 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar40) * 2);
                uStack_d8 = uStack_d8 + (byte)puVar37[1];
                puVar41 = puVar34 + 2;
                *(undefined1 *)((long)puVar34 + 3) = *puVar37;
                puVar34 = puVar41;
                if (0x40 < uStack_d8) break;
              } while( true );
            }
            if (puVar34 < puVar8) {
              do {
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> (-uVar38 & 0x3f)) * 2);
                uStack_d8 = uStack_d8 + (byte)puVar37[1];
                puVar41 = (undefined2 *)((long)puVar34 + 1);
                *(undefined1 *)puVar34 = *puVar37;
                puVar34 = puVar41;
              } while (puVar41 < puVar8);
            }
            if (uStack_100 < 0x41) {
              uVar40 = -uVar38 & 0x3f;
              do {
                if (plStack_f8 < plStack_e8) {
                  if (plStack_f8 == plStack_f0) break;
                  bVar23 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
                  uVar36 = uStack_100 >> 3;
                  if (!bVar23) {
                    uVar36 = (int)plStack_f8 - (int)plStack_f0;
                  }
                  uStack_100 = uStack_100 + uVar36 * -8;
                }
                else {
                  uVar36 = uStack_100 >> 3;
                  uStack_100 = uStack_100 & 7;
                  bVar23 = true;
                }
                plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar36);
                lStack_108 = *plStack_f8;
                if ((puVar31 <= puVar32) || (!bVar23)) break;
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar40) * 2);
                uStack_100 = uStack_100 + (byte)puVar37[1];
                *(undefined1 *)puVar32 = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar40) * 2);
                uStack_100 = uStack_100 + (byte)puVar37[1];
                *(undefined1 *)((long)puVar32 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar40) * 2);
                uStack_100 = uStack_100 + (byte)puVar37[1];
                *(undefined1 *)(puVar32 + 1) = *puVar37;
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar40) * 2);
                uStack_100 = uStack_100 + (byte)puVar37[1];
                puVar41 = puVar32 + 2;
                *(undefined1 *)((long)puVar32 + 3) = *puVar37;
                puVar32 = puVar41;
                if (0x40 < uStack_100) break;
              } while( true );
            }
            if (puVar32 < (undefined2 *)((long)param_1 + (long)param_2)) {
              lVar43 = (long)((long)param_2 + (long)param_1) - (long)puVar32;
              do {
                puVar37 = (undefined1 *)
                          (param_5 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> (-uVar38 & 0x3f)) *
                          2);
                uStack_100 = uStack_100 + (byte)puVar37[1];
                *(undefined1 *)puVar32 = *puVar37;
                lVar43 = lVar43 + -1;
                puVar32 = (undefined2 *)((long)puVar32 + 1);
              } while (lVar43 != 0);
            }
            if (((((((uStack_100 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                   puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
                uStack_88 == 0x40) && puStack_80 == puStack_78) {
              return param_2;
            }
            return (long *)0xffffffffffffffec;
          }
          goto code_r0x0001000cfb9c;
        }
      }
      plVar28 = (long *)0xffffffffffffffb8;
    }
    return plVar28;
  }
  if (param_4 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar15 = *param_3;
  uVar16 = param_3[1];
  uVar17 = param_3[2];
  uVar29 = (ulong)uVar15 + (ulong)uVar16 + (ulong)uVar17 + 6;
  if (param_4 < uVar29) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar15 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(param_3 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar15);
  uVar18 = *(ushort *)(param_5 + 2);
  puStack_70 = (ulong *)(param_3 + 7);
  if (uVar15 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar38 = (uint)uVar15;
    if (uVar15 < 5) {
      if (uVar38 == 2) goto LAB_1099edf28;
      if (uVar38 == 3) goto LAB_1099edf20;
      if (uVar38 == 4) goto LAB_1099edf18;
    }
    else {
      if (uVar15 != 5) {
        if (uVar15 != 6) {
          if (uVar38 != 7) goto LAB_1099edf34;
          uStack_90 = uStack_90 | (ulong)(byte)param_3[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)param_3[5] << 0x20);
LAB_1099edf18:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
LAB_1099edf20:
      uStack_90 = uStack_90 + (ulong)(byte)param_3[4] * 0x10000;
LAB_1099edf28:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
LAB_1099edf34:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar38 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto LAB_1099edf48;
    }
LAB_1099ee648:
    plVar28 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
LAB_1099edf48:
    if (uVar16 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar16);
      puStack_98 = puStack_a0 + 1;
      if (uVar16 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar38 = (uint)uVar16;
        if (uVar16 < 5) {
          if (uVar38 == 2) goto LAB_1099ee000;
          if (uVar38 == 3) goto LAB_1099edff8;
          if (uVar38 == 4) goto LAB_1099edff0;
        }
        else {
          if (uVar16 != 5) {
            if (uVar16 != 6) {
              if (uVar38 != 7) goto LAB_1099ee00c;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1099edff0:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1099edff8:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1099ee000:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
LAB_1099ee00c:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1099ee648;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar38 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar17 != 0) {
        pbVar5 = (byte *)((long)puStack_c8 + (ulong)uVar17);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar17) {
          uStack_e0 = *(ulong *)(pbVar5 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar5 + -8);
          goto LAB_1099ee108;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar38 = (uint)uVar17;
        if (uVar17 < 5) {
          if (uVar38 == 2) goto LAB_1099ee0e8;
          if (uVar38 == 3) goto LAB_1099ee0e0;
          if (uVar38 == 4) goto LAB_1099ee0d8;
        }
        else {
          if (uVar17 != 5) {
            if (uVar17 != 6) {
              if (uVar38 != 7) goto LAB_1099ee0f4;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1099ee0d8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1099ee0e0:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1099ee0e8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
LAB_1099ee0f4:
        if (pbVar5[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar5[-1]) + uVar38 * -8 + 0x29;
          puStack_d0 = puStack_c8;
LAB_1099ee108:
          plVar28 = &lStack_108;
          func_0x000107c2ae50(plVar28,pbVar5,param_4 - uVar29);
          if ((long *)0xffffffffffffff88 < plVar28) {
            return plVar28;
          }
          puVar41 = (undefined2 *)((long)param_1 + (long)param_2);
          param_5 = param_5 + 4;
          uVar29 = (long)param_2 + 3;
          puVar6 = (undefined2 *)((long)param_1 + (uVar29 >> 2));
          puVar7 = (undefined2 *)((long)puVar6 + (uVar29 >> 2));
          puVar8 = (undefined2 *)((long)puVar7 + (uVar29 >> 2));
          iVar24 = (int)&uStack_90;
          func_0x000107c2ae54();
          iVar25 = (int)&uStack_b8;
          func_0x000107c2ae54();
          iVar26 = (int)&uStack_e0;
          func_0x000107c2ae54();
          iVar27 = (int)&lStack_108;
          func_0x000107c2ae54();
          puVar31 = (undefined2 *)((long)puVar41 - 7);
          iVar44 = (int)puStack_78;
          iVar39 = (int)puStack_a0;
          iVar48 = (int)puStack_c8;
          iVar47 = (int)plStack_f0;
          puVar33 = puVar8;
          puVar34 = puVar7;
          puVar32 = puVar6;
          if ((puVar8 < puVar31) && ((iVar25 == 0 && iVar24 == 0) && (iVar26 == 0 && iVar27 == 0)))
          {
            uVar38 = -(uint)uVar18 & 0x3f;
            uVar46 = (ulong)uStack_88;
            uVar42 = (ulong)uStack_b0;
            uVar30 = (ulong)uStack_d8;
            uVar29 = (ulong)uStack_100;
            plStack_118 = plStack_f8;
            lVar43 = lStack_108;
            do {
              puVar9 = (undefined2 *)(param_5 + ((uStack_90 << (uVar46 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uVar40 = (int)uVar46 + (uint)*(byte *)(puVar9 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar42 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar9;
              uVar36 = (int)uVar42 + (uint)*(byte *)(puVar9 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar9;
              uVar1 = (int)uVar30 + (uint)*(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)(param_5 + ((ulong)(lVar43 << (uVar29 & 0x3f)) >> uVar38) * 4);
              *puVar33 = *puVar9;
              uVar2 = (int)uVar29 + (uint)*(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uVar40 = uVar40 + *(byte *)(puVar9 + 1);
              bVar10 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar9;
              uVar36 = uVar36 + *(byte *)(puVar9 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar9;
              uVar1 = uVar1 + *(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 4);
              *puVar33 = *puVar9;
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              param_1 = (undefined2 *)((long)param_1 + (ulong)bVar10);
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uVar40 = uVar40 + *(byte *)(puVar9 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar9;
              uVar36 = uVar36 + *(byte *)(puVar9 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar9;
              uVar1 = uVar1 + *(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 4);
              *puVar33 = *puVar9;
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar40 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uVar40 = uVar40 + *(byte *)(puVar9 + 1);
              uVar46 = (ulong)uVar40;
              bVar10 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar36 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar9;
              bVar11 = *(byte *)(puVar9 + 1);
              bVar12 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar9;
              bVar13 = *(byte *)(puVar9 + 1);
              bVar14 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       (param_5 + ((ulong)(lVar43 << ((ulong)uVar2 & 0x3f)) >> uVar38) * 4);
              *puVar33 = *puVar9;
              if (uVar40 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) {
                    cVar19 = '\x01';
                    if (uVar40 == 0x40) {
                      cVar19 = '\x02';
                    }
                    goto LAB_1099ee47c;
                  }
                  cVar19 = (ulong *)((long)puStack_80 - (ulong)(uVar40 >> 3)) < puStack_78;
                  uVar35 = (int)puStack_80 - iVar44;
                  if (!(bool)cVar19) {
                    uVar35 = uVar40 >> 3;
                  }
                  uVar40 = uVar40 + uVar35 * -8;
                }
                else {
                  cVar19 = false;
                  uVar35 = uVar40 >> 3;
                  uVar40 = uVar40 & 7;
                }
                uVar46 = (ulong)uVar40;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar35);
                uStack_90 = *puStack_80;
              }
              else {
                cVar19 = '\x03';
              }
LAB_1099ee47c:
              uVar36 = uVar36 + bVar11;
              uVar42 = (ulong)uVar36;
              if (uVar36 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) {
                    cVar20 = '\x01';
                    if (uVar36 == 0x40) {
                      cVar20 = '\x02';
                    }
                    goto LAB_1099ee4e8;
                  }
                  cVar20 = (ulong *)((long)puStack_a8 - (ulong)(uVar36 >> 3)) < puStack_a0;
                  uVar40 = (int)puStack_a8 - iVar39;
                  if (!(bool)cVar20) {
                    uVar40 = uVar36 >> 3;
                  }
                  uVar36 = uVar36 + uVar40 * -8;
                }
                else {
                  cVar20 = false;
                  uVar40 = uVar36 >> 3;
                  uVar36 = uVar36 & 7;
                }
                uVar42 = (ulong)uVar36;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar40);
                uStack_b8 = *puStack_a8;
              }
              else {
                cVar20 = '\x03';
              }
LAB_1099ee4e8:
              uVar1 = uVar1 + bVar13;
              uVar30 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) {
                    cVar21 = '\x01';
                    if (uVar1 == 0x40) {
                      cVar21 = '\x02';
                    }
                    goto LAB_1099ee558;
                  }
                  cVar21 = (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3)) < puStack_c8;
                  uVar40 = (int)puStack_d0 - iVar48;
                  if (!(bool)cVar21) {
                    uVar40 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar40 * -8;
                }
                else {
                  cVar21 = false;
                  uVar40 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar40);
                uVar30 = (ulong)uVar1;
                uStack_e0 = *puStack_d0;
              }
              else {
                cVar21 = '\x03';
              }
LAB_1099ee558:
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              uVar29 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (plStack_118 < plStack_e8) {
                  if (plStack_118 == plStack_f0) {
                    cVar22 = '\x03';
                    goto LAB_1099ee5dc;
                  }
                  cVar22 = (long *)((long)plStack_118 - (ulong)(uVar2 >> 3)) < plStack_f0;
                  uVar40 = (int)plStack_118 - iVar47;
                  if (!(bool)cVar22) {
                    uVar40 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar40 * -8;
                }
                else {
                  cVar22 = false;
                  uVar40 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                plStack_118 = (long *)((long)plStack_118 - (ulong)uVar40);
                uVar29 = (ulong)uVar2;
                lVar43 = *plStack_118;
                lStack_108 = lVar43;
                plStack_f8 = plStack_118;
              }
              else {
                cVar22 = '\x03';
              }
LAB_1099ee5dc:
              param_1 = (undefined2 *)((long)param_1 + (ulong)bVar10);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)bVar12);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)bVar14);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
            } while (puVar33 < puVar31 &&
                     (((cVar20 == '\0' && cVar19 == '\0') && cVar21 == '\0') && cVar22 == '\0'));
            uStack_88 = (uint)uVar46;
            uStack_b0 = (uint)uVar42;
            uStack_d8 = (uint)uVar30;
            uStack_100 = (uint)uVar29;
          }
          if (puVar6 < param_1) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar7 < puVar32) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar8 < puVar34) {
            return (long *)0xffffffffffffffec;
          }
          uVar38 = -(uint)uVar18 & 0x3f;
          uVar29 = (ulong)uStack_88;
          if (uStack_88 < 0x41) {
            do {
              uVar40 = (uint)uVar29;
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) goto LAB_1099ee81c;
                bVar23 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar29 >> 3));
                uVar36 = (uint)(uVar29 >> 3);
                if (!bVar23) {
                  uVar36 = (int)puStack_80 - iVar44;
                }
                uStack_88 = uVar40 + uVar36 * -8;
              }
              else {
                uVar36 = uVar40 >> 3;
                uStack_88 = uVar40 & 7;
                bVar23 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar36);
              uVar29 = (ulong)uStack_88;
              uStack_90 = *puStack_80;
              if (((undefined2 *)((long)puVar6 - 7U) <= param_1) || (!bVar23)) {
                if (uStack_88 < 0x41) goto LAB_1099ee81c;
                break;
              }
              puVar9 = (undefined2 *)(param_5 + ((uStack_90 << (uVar29 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              bVar10 = *(byte *)(puVar9 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 +
                       ((uStack_90 << ((ulong)(uStack_88 + bVar10) & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uStack_88 = uStack_88 + bVar10 + (uint)*(byte *)(puVar9 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar38) * 4);
              *param_1 = *puVar9;
              uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
              uVar29 = (ulong)uStack_88;
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
            } while (uStack_88 < 0x41);
          }
LAB_1099ee8ec:
          for (; uVar40 = (uint)uVar29, param_1 <= puVar6 + -1;
              param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3))) {
            puVar9 = (undefined2 *)(param_5 + ((uStack_90 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *param_1 = *puVar9;
            uStack_88 = uVar40 + *(byte *)(puVar9 + 1);
            uVar29 = (ulong)uStack_88;
          }
          if (param_1 < puVar6) {
            puVar37 = (undefined1 *)(param_5 + ((uStack_90 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *(undefined1 *)param_1 = *puVar37;
            if (puVar37[3] == '\x01') {
              uStack_88 = uVar40 + (byte)puVar37[2];
            }
            else if ((uVar40 < 0x40) && (uStack_88 = uVar40 + (byte)puVar37[2], 0x3f < uStack_88)) {
              uStack_88 = 0x40;
            }
          }
          uVar29 = (ulong)uStack_b0;
          if (uStack_b0 < 0x41) {
            do {
              uVar40 = (uint)uVar29;
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) goto LAB_1099eea84;
                bVar23 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar29 >> 3));
                uVar36 = (uint)(uVar29 >> 3);
                if (!bVar23) {
                  uVar36 = (int)puStack_a8 - iVar39;
                }
                uStack_b0 = uVar40 + uVar36 * -8;
              }
              else {
                uVar36 = uVar40 >> 3;
                uStack_b0 = uVar40 & 7;
                bVar23 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar36);
              uVar29 = (ulong)uStack_b0;
              uStack_b8 = *puStack_a8;
              if (((undefined2 *)((long)puVar7 - 7U) <= puVar32) || (!bVar23)) {
                if (uStack_b0 < 0x41) goto LAB_1099eea84;
                break;
              }
              puVar6 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar29 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar6;
              bVar10 = *(byte *)(puVar6 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 +
                       ((uStack_b8 << ((ulong)(uStack_b0 + bVar10) & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar6;
              uStack_b0 = uStack_b0 + bVar10 + (uint)*(byte *)(puVar6 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar6;
              uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar38) * 4);
              *puVar32 = *puVar6;
              uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
              uVar29 = (ulong)uStack_b0;
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3));
            } while (uStack_b0 < 0x41);
          }
LAB_1099eeb54:
          for (; uVar40 = (uint)uVar29, puVar32 <= puVar7 + -1;
              puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *puVar32 = *puVar6;
            uStack_b0 = uVar40 + *(byte *)(puVar6 + 1);
            uVar29 = (ulong)uStack_b0;
          }
          if (puVar32 < puVar7) {
            puVar37 = (undefined1 *)(param_5 + ((uStack_b8 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *(undefined1 *)puVar32 = *puVar37;
            if (puVar37[3] == '\x01') {
              uStack_b0 = uVar40 + (byte)puVar37[2];
            }
            else if ((uVar40 < 0x40) && (uStack_b0 = uVar40 + (byte)puVar37[2], 0x3f < uStack_b0)) {
              uStack_b0 = 0x40;
            }
          }
          uVar29 = (ulong)uStack_d8;
          if (uStack_d8 < 0x41) {
            do {
              uVar40 = (uint)uVar29;
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) goto LAB_1099eecec;
                bVar23 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar29 >> 3));
                uVar36 = (uint)(uVar29 >> 3);
                if (!bVar23) {
                  uVar36 = (int)puStack_d0 - iVar48;
                }
                uStack_d8 = uVar40 + uVar36 * -8;
              }
              else {
                uVar36 = uVar40 >> 3;
                uStack_d8 = uVar40 & 7;
                bVar23 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar36);
              uVar29 = (ulong)uStack_d8;
              uStack_e0 = *puStack_d0;
              if (((undefined2 *)((long)puVar8 - 7U) <= puVar34) || (!bVar23)) {
                if (uStack_d8 < 0x41) goto LAB_1099eecec;
                break;
              }
              puVar6 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar29 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar6;
              bVar10 = *(byte *)(puVar6 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 +
                       ((uStack_e0 << ((ulong)(uStack_d8 + bVar10) & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar6;
              uStack_d8 = uStack_d8 + bVar10 + (uint)*(byte *)(puVar6 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar6;
              uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar38) * 4);
              *puVar34 = *puVar6;
              uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
              uVar29 = (ulong)uStack_d8;
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
            } while (uStack_d8 < 0x41);
          }
LAB_1099eedbc:
          for (; uVar40 = (uint)uVar29, puVar34 <= puVar8 + -1;
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *puVar34 = *puVar6;
            uStack_d8 = uVar40 + *(byte *)(puVar6 + 1);
            uVar29 = (ulong)uStack_d8;
          }
          if (puVar34 < puVar8) {
            puVar37 = (undefined1 *)(param_5 + ((uStack_e0 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *(undefined1 *)puVar34 = *puVar37;
            if (puVar37[3] == '\x01') {
              uStack_d8 = uVar40 + (byte)puVar37[2];
            }
            else if ((uVar40 < 0x40) && (uStack_d8 = uVar40 + (byte)puVar37[2], 0x3f < uStack_d8)) {
              uStack_d8 = 0x40;
            }
          }
          for (; uVar29 = (ulong)uStack_100, uStack_100 < 0x41;
              uStack_100 = uStack_100 + *(byte *)(puVar6 + 1)) {
            if (plStack_f8 < plStack_e8) {
              if (plStack_f8 == plStack_f0) goto LAB_1099eef50;
              bVar23 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
              uVar40 = uStack_100 >> 3;
              if (!bVar23) {
                uVar40 = (int)plStack_f8 - iVar47;
              }
              uStack_100 = uStack_100 + uVar40 * -8;
            }
            else {
              uVar40 = uStack_100 >> 3;
              uStack_100 = uStack_100 & 7;
              bVar23 = true;
            }
            plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar40);
            uVar29 = (ulong)uStack_100;
            lStack_108 = *plStack_f8;
            if ((puVar31 <= puVar33) || (!bVar23)) {
              if (uStack_100 < 0x41) goto LAB_1099eef50;
              break;
            }
            puVar6 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *puVar33 = *puVar6;
            bVar10 = *(byte *)(puVar6 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     (param_5 +
                     ((ulong)(lStack_108 << ((ulong)(uStack_100 + bVar10) & 0x3f)) >> uVar38) * 4);
            *puVar33 = *puVar6;
            uStack_100 = uStack_100 + bVar10 + (uint)*(byte *)(puVar6 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar38) * 4);
            *puVar33 = *puVar6;
            uStack_100 = uStack_100 + *(byte *)(puVar6 + 1);
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar38) * 4);
            *puVar33 = *puVar6;
            puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
          }
LAB_1099ef020:
          for (; uVar40 = (uint)uVar29, puVar33 <= puVar41 + -1;
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)
                     (param_5 + ((ulong)(lStack_108 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *puVar33 = *puVar6;
            uStack_100 = uVar40 + *(byte *)(puVar6 + 1);
            uVar29 = (ulong)uStack_100;
          }
          uVar36 = uVar40;
          if (puVar33 < puVar41) {
            puVar37 = (undefined1 *)
                      (param_5 + ((ulong)(lStack_108 << (uVar29 & 0x3f)) >> uVar38) * 4);
            *(undefined1 *)puVar33 = *puVar37;
            if (puVar37[3] == '\x01') {
              uVar36 = uVar40 + (byte)puVar37[2];
            }
            else {
              uVar36 = uStack_100;
              if ((uVar40 < 0x40) && (uVar36 = uVar40 + (byte)puVar37[2], 0x3f < uVar36)) {
                uVar36 = 0x40;
              }
            }
          }
          if (((((((uVar36 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_2;
          }
          return (long *)0xffffffffffffffec;
        }
        goto LAB_1099ee648;
      }
    }
    plVar28 = (long *)0xffffffffffffffb8;
  }
  return plVar28;
LAB_1099ee81c:
  uVar40 = (uint)uVar29;
  if (puStack_80 < puStack_70) {
    if (puStack_80 == puStack_78) goto LAB_1099ee8ec;
    bVar23 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar29 >> 3));
    uVar36 = (uint)(uVar29 >> 3);
    if (!bVar23) {
      uVar36 = (int)puStack_80 - iVar44;
    }
    uStack_88 = uVar40 + uVar36 * -8;
  }
  else {
    uVar36 = uVar40 >> 3;
    uStack_88 = uVar40 & 7;
    bVar23 = true;
  }
  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar36);
  uVar29 = (ulong)uStack_88;
  uStack_90 = *puStack_80;
  if ((puVar6 + -1 < param_1) || (!bVar23)) goto LAB_1099ee8ec;
  puVar9 = (undefined2 *)(param_5 + ((uStack_90 << (uVar29 & 0x3f)) >> uVar38) * 4);
  *param_1 = *puVar9;
  uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
  uVar29 = (ulong)uStack_88;
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
  if (0x40 < uStack_88) goto LAB_1099ee8ec;
  goto LAB_1099ee81c;
LAB_1099eea84:
  uVar40 = (uint)uVar29;
  if (puStack_a8 < puStack_98) {
    if (puStack_a8 == puStack_a0) goto LAB_1099eeb54;
    bVar23 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar29 >> 3));
    uVar36 = (uint)(uVar29 >> 3);
    if (!bVar23) {
      uVar36 = (int)puStack_a8 - iVar39;
    }
    uStack_b0 = uVar40 + uVar36 * -8;
  }
  else {
    uVar36 = uVar40 >> 3;
    uStack_b0 = uVar40 & 7;
    bVar23 = true;
  }
  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar36);
  uVar29 = (ulong)uStack_b0;
  uStack_b8 = *puStack_a8;
  if ((puVar7 + -1 < puVar32) || (!bVar23)) goto LAB_1099eeb54;
  puVar6 = (undefined2 *)(param_5 + ((uStack_b8 << (uVar29 & 0x3f)) >> uVar38) * 4);
  *puVar32 = *puVar6;
  uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
  uVar29 = (ulong)uStack_b0;
  puVar32 = (undefined2 *)((long)puVar32 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_b0) goto LAB_1099eeb54;
  goto LAB_1099eea84;
LAB_1099eecec:
  uVar40 = (uint)uVar29;
  if (puStack_d0 < puStack_c0) {
    if (puStack_d0 == puStack_c8) goto LAB_1099eedbc;
    bVar23 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar29 >> 3));
    uVar36 = (uint)(uVar29 >> 3);
    if (!bVar23) {
      uVar36 = (int)puStack_d0 - iVar48;
    }
    uStack_d8 = uVar40 + uVar36 * -8;
  }
  else {
    uVar36 = uVar40 >> 3;
    uStack_d8 = uVar40 & 7;
    bVar23 = true;
  }
  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar36);
  uVar29 = (ulong)uStack_d8;
  uStack_e0 = *puStack_d0;
  if ((puVar8 + -1 < puVar34) || (!bVar23)) goto LAB_1099eedbc;
  puVar6 = (undefined2 *)(param_5 + ((uStack_e0 << (uVar29 & 0x3f)) >> uVar38) * 4);
  *puVar34 = *puVar6;
  uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
  uVar29 = (ulong)uStack_d8;
  puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_d8) goto LAB_1099eedbc;
  goto LAB_1099eecec;
LAB_1099eef50:
  uVar40 = (uint)uVar29;
  if (plStack_f8 < plStack_e8) {
    if (plStack_f8 == plStack_f0) goto LAB_1099ef020;
    bVar23 = plStack_f0 <= (long *)((long)plStack_f8 - (uVar29 >> 3));
    uVar36 = (uint)(uVar29 >> 3);
    if (!bVar23) {
      uVar36 = (int)plStack_f8 - iVar47;
    }
    uStack_100 = uVar40 + uVar36 * -8;
  }
  else {
    uVar36 = uVar40 >> 3;
    uStack_100 = uVar40 & 7;
    bVar23 = true;
  }
  plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar36);
  uVar29 = (ulong)uStack_100;
  lStack_108 = *plStack_f8;
  if ((puVar41 + -1 < puVar33) || (!bVar23)) goto LAB_1099ef020;
  puVar6 = (undefined2 *)(param_5 + ((ulong)(lStack_108 << (uVar29 & 0x3f)) >> uVar38) * 4);
  *puVar33 = *puVar6;
  uStack_100 = uStack_100 + *(byte *)(puVar6 + 1);
  uVar29 = (ulong)uStack_100;
  puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_100) goto LAB_1099ef020;
  goto LAB_1099eef50;
}



/* Entry: 1099ef288; end: 1099ef2cf;  */

undefined8 FUN_1099ef288(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 auStack_38 [2];
  int iStack_24;
  
  puVar2 = auStack_38;
  func_0x000107c2ae68(puVar2,param_1,param_2,0);
  uVar1 = 0;
  if (iStack_24 != 1) {
    uVar1 = auStack_38[0];
  }
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = 0xfffffffffffffffe;
  }
  return uVar1;
}



/* Entry: 1099ef2d0; end: 1099ef403;  */

void FUN_1099ef2d0(uint *param_1,ulong param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 auStack_48 [3];
  uint uStack_30;
  
  if ((param_2 < 8) || (*param_1 >> 4 != 0x184d2a5)) {
    puVar4 = auStack_48;
    func_0x000107c2ae68(puVar4,param_1,param_2,0);
    if ((puVar4 < (undefined8 *)0xffffffffffffff89) && (puVar4 == (undefined8 *)0x0)) {
      puVar5 = (ushort *)((long)param_1 + (ulong)uStack_30);
      param_2 = param_2 - uStack_30;
      while (2 < param_2) {
        uVar1 = *puVar5;
        uVar2 = uVar1 >> 1 & 3;
        if (uVar2 == 1) {
          uVar6 = 4;
        }
        else {
          if (uVar2 == 3) {
            return;
          }
          uVar6 = (ulong)((uint3)(CONCAT12((char)puVar5[1],uVar1) >> 3) + 3);
        }
        bVar3 = param_2 < uVar6;
        param_2 = param_2 - uVar6;
        if (bVar3) {
          return;
        }
        puVar5 = (ushort *)((long)puVar5 + uVar6);
        if ((uVar1 & 1) != 0) {
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1099ef404; end: 1099ef7ef;  */

uint * FUN_1099ef404(uint *param_1,long param_2,uint *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  ushort uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (*(uint **)(param_1 + 0x1c1a) != param_5) {
    return (uint *)0xffffffffffffffb8;
  }
  if ((param_3 != (uint *)0x0) && (lVar4 = *(long *)(param_1 + 0x1c12), lVar4 != param_2)) {
    *(long *)(param_1 + 0x1c18) = lVar4;
    *(long *)(param_1 + 0x1c16) = param_2 + (*(long *)(param_1 + 0x1c14) - lVar4);
    *(long *)(param_1 + 0x1c14) = param_2;
    *(long *)(param_1 + 0x1c12) = param_2;
  }
  uVar6 = param_1[0x1c29];
  if ((int)uVar6 < 3) {
    if (uVar6 == 0) {
      if ((param_1[0x1c44] != 0) || (*param_4 >> 4 != 0x184d2a5)) {
        puVar3 = param_4;
        func_0x000107c2ae64(param_4,param_5);
        *(uint **)(param_1 + 0x1c42) = puVar3;
        if (puVar3 < (uint *)0xffffffffffffff89) {
          _memcpy(param_1 + 0x9c7e,param_4,param_5);
          *(long *)(param_1 + 0x1c1a) = (long)puVar3 - (long)param_5;
          param_1[0x1c29] = 1;
          return (uint *)0x0;
        }
        return puVar3;
      }
      _memcpy(param_1 + 0x9c7e,param_4,param_5);
      *(long *)(param_1 + 0x1c1a) = 8 - (long)param_5;
      uVar6 = 6;
    }
    else if (uVar6 == 1) {
      _memcpy((long)(param_1 + 0x9c7e) + (*(long *)(param_1 + 0x1c42) - (long)param_5),param_4,
              param_5);
      puVar3 = param_1;
      func_0x000107c2ae70(param_1,param_1 + 0x9c7e,*(undefined8 *)(param_1 + 0x1c42));
      if ((uint *)0xffffffffffffff88 < puVar3) {
        return puVar3;
      }
      param_1[0x1c1a] = 3;
      param_1[0x1c1b] = 0;
      uVar6 = 2;
    }
    else {
      if (uVar6 != 2) {
        return (uint *)0xffffffffffffffff;
      }
      uVar2 = (ushort)*param_4;
      uVar5 = (ulong)((uVar2 & 0xfff8 | (uint)*(byte *)((long)param_4 + 2) << 0x10) >> 3);
      uVar7 = (ulong)(uVar2 >> 1) & 3;
      uVar6 = (uint)uVar7;
      if ((uVar6 != 1) && (uVar7 = uVar5, uVar6 == 3)) {
        return (uint *)0xffffffffffffffec;
      }
      if (param_1[0x1c20] < uVar7) {
        return (uint *)0xffffffffffffffec;
      }
      *(ulong *)(param_1 + 0x1c1a) = uVar7;
      param_1[0x1c28] = uVar6;
      *(ulong *)(param_1 + 0x1c50) = uVar5;
      if (uVar7 == 0) {
        if ((uVar2 & 1) == 0) {
          param_1[0x1c1a] = 3;
          param_1[0x1c1b] = 0;
          uVar6 = 2;
        }
        else if (param_1[0x1c24] == 0) {
          param_1[0x1c1a] = 0;
          param_1[0x1c1b] = 0;
          uVar6 = 0;
        }
        else {
          param_1[0x1c1a] = 4;
          param_1[0x1c1b] = 0;
          uVar6 = 5;
        }
      }
      else {
        uVar6 = (uVar2 & 1) + 3;
      }
    }
LAB_1099ef7e8:
    param_1[0x1c29] = uVar6;
    return (uint *)0x0;
  }
  if (5 < (int)uVar6) {
    if (uVar6 == 6) {
      _memcpy((long)param_1 + (0x27200 - (long)param_5),param_4,param_5);
      *(ulong *)(param_1 + 0x1c1a) = (ulong)param_1[0x9c7f];
      uVar6 = 7;
      goto LAB_1099ef7e8;
    }
    if (uVar6 != 7) {
      return (uint *)0xffffffffffffffff;
    }
LAB_1099ef558:
    param_1[0x1c1a] = 0;
    param_1[0x1c1b] = 0;
    param_1[0x1c29] = 0;
    return (uint *)0x0;
  }
  if (1 < uVar6 - 3) {
    if (uVar6 != 5) {
      return (uint *)0xffffffffffffffff;
    }
    uVar6 = (int)param_1 + 0x70b0;
    func_0x000107c2ae30();
    if (*param_4 != uVar6) {
      return (uint *)0xffffffffffffffea;
    }
    goto LAB_1099ef558;
  }
  uVar6 = param_1[0x1c28];
  if (uVar6 == 0) {
    if (param_2 == 0) {
LAB_1099ef6bc:
      bVar1 = param_5 != (uint *)0x0;
      param_5 = (uint *)0x0;
      if (bVar1) {
        return (uint *)0xffffffffffffffb6;
      }
      goto LAB_1099ef718;
    }
    if (param_3 < param_5) {
      return (uint *)0xffffffffffffffba;
    }
    _memcpy(param_2,param_4,param_5);
  }
  else if (uVar6 == 1) {
    param_5 = *(uint **)(param_1 + 0x1c50);
    if (param_2 == 0) goto LAB_1099ef6bc;
    if (param_3 < param_5) {
      return (uint *)0xffffffffffffffba;
    }
    _memset(param_2,(char)*param_4,param_5);
  }
  else {
    if (uVar6 != 2) {
      return (uint *)0xffffffffffffffec;
    }
    puVar3 = param_1;
    func_0x000107c2ae80(param_1,param_2,param_3,param_4,param_5,1);
    param_5 = puVar3;
  }
  if ((uint *)0xffffffffffffff88 < param_5) {
    return param_5;
  }
  if ((uint *)(ulong)param_1[0x1c20] < param_5) {
    return (uint *)0xffffffffffffffec;
  }
LAB_1099ef718:
  *(long *)(param_1 + 0x1c26) = *(long *)(param_1 + 0x1c26) + (long)param_5;
  if (param_1[0x1c24] != 0) {
    func_0x000107c2ae2c(param_1 + 0x1c2c,param_2,param_5);
  }
  if (param_1[0x1c29] == 4) {
    if ((*(long *)(param_1 + 0x1c1c) != -1) &&
       (*(long *)(param_1 + 0x1c26) != *(long *)(param_1 + 0x1c1c))) {
      return (uint *)0xffffffffffffffec;
    }
    if (param_1[0x1c24] == 0) {
      param_1[0x1c1a] = 0;
      param_1[0x1c1b] = 0;
      param_1[0x1c29] = 0;
      return param_5;
    }
    param_1[0x1c1a] = 4;
    param_1[0x1c1b] = 0;
    param_1[0x1c29] = 5;
    return param_5;
  }
  param_1[0x1c29] = 2;
  param_1[0x1c1a] = 3;
  param_1[0x1c1b] = 0;
  *(long *)(param_1 + 0x1c12) = param_2 + (long)param_5;
  return param_5;
}



/* Entry: 1099ef7f0; end: 1099efa5b;  */

void FUN_1099ef7f0(long param_1,uint *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  uint uStack_dc;
  uint uStack_d8;
  uint auStack_d2 [26];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  if (8 < param_3) {
    puVar5 = param_2 + 2;
    uVar3 = param_1 + 0x2818;
    puVar8 = puVar5;
    FUN_1099ed780(uVar3,puVar5,param_3 - 8,param_1,0x2818);
    if (uVar3 < 0xffffffffffffff89) {
      uStack_d8 = 0x1f;
      puVar4 = auStack_d2;
      puVar8 = &uStack_d8;
      func_0x000107c2ae24(puVar4,puVar8,&uStack_dc,(long)puVar5 + uVar3,param_3 - (uVar3 + 8));
      if (((puVar4 < (uint *)0xffffffffffffff89) && (uStack_d8 < 0x20)) && (uStack_dc < 9)) {
        func_0x000107c2ae7c(param_1 + 0x1008,auStack_d2,uStack_d8,&UNK_10e010ef8,&UNK_10e010f78);
        lVar9 = (long)puVar4 + (long)puVar5 + uVar3;
        uStack_d8 = 0x34;
        lVar1 = (long)puVar4 + uVar3 + 8;
        puVar5 = auStack_d2;
        puVar8 = &uStack_d8;
        func_0x000107c2ae24(puVar5,puVar8,&uStack_dc,lVar9,param_3 - lVar1);
        if (((puVar5 < (uint *)0xffffffffffffff89) && (uStack_d8 < 0x35)) && (uStack_dc < 10)) {
          func_0x000107c2ae7c(param_1 + 0x1810,auStack_d2,uStack_d8,&UNK_10e010ff8,&UNK_10e0110cc);
          lVar9 = lVar9 + (long)puVar5;
          uStack_d8 = 0x23;
          lVar1 = (long)puVar5 + lVar1;
          puVar6 = auStack_d2;
          puVar8 = &uStack_d8;
          func_0x000107c2ae24(puVar6,puVar8,&uStack_dc,lVar9,param_3 - lVar1);
          if (((puVar6 < (uint *)0xffffffffffffff89) && (uStack_d8 < 0x24)) && (uStack_dc < 10)) {
            puVar8 = auStack_d2;
            func_0x000107c2ae7c(param_1,puVar8,uStack_d8,&UNK_10e0111a0,&UNK_10e011230);
            if ((ulong)((long)puVar6 + lVar9 + 0xc) <= (long)param_2 + param_3) {
              lVar9 = 0;
              lVar10 = -8 - ((long)puVar4 + uVar3 + (long)puVar5 + (long)puVar6);
              do {
                uVar2 = *(uint *)((long)puVar6 +
                                 lVar9 * 4 + 8 + (long)puVar5 + (long)param_2 + (long)puVar4 + uVar3
                                 );
                if (uVar2 == 0 || (param_3 - (lVar1 + (long)puVar6)) - 0xc < (ulong)uVar2)
                goto LAB_1099ef9b4;
                *(uint *)(param_1 + 0x681c + lVar9 * 4) = uVar2;
                lVar9 = lVar9 + 1;
                lVar10 = lVar10 + -4;
              } while (lVar9 != 3);
              plVar7 = (long *)-lVar10;
              goto LAB_1099ef9b8;
            }
          }
        }
      }
    }
  }
LAB_1099ef9b4:
  plVar7 = (long *)0xffffffffffffffe2;
LAB_1099ef9b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puVar8 != (uint *)0x0) {
    *(uint *)((long)plVar7 + 0x716c) =
         (uint)(plVar7[0xe0c] != *(long *)(puVar8 + 2) + *(long *)(puVar8 + 4));
  }
  lVar9 = 5;
  if ((int)plVar7[0xe22] != 0) {
    lVar9 = 1;
  }
  plVar7[0xe0d] = lVar9;
  plVar7[0xe13] = 0;
  plVar7[0xe0a] = 0;
  plVar7[0xe09] = 0;
  plVar7[0xe0c] = 0;
  plVar7[0xe0b] = 0;
  *(undefined4 *)(plVar7 + 0x507) = 0xc00000c;
  plVar7[0xe15] = 0;
  *(undefined4 *)((long)plVar7 + 0x70a4) = 0;
  *(undefined4 *)(plVar7 + 0xe2d) = 0;
  *(undefined8 *)((long)plVar7 + 0x683c) = 0x400000001;
  *(undefined4 *)((long)plVar7 + 0x6844) = 8;
  *plVar7 = (long)(plVar7 + 4);
  plVar7[1] = (long)(plVar7 + 0x306);
  plVar7[2] = (long)(plVar7 + 0x205);
  plVar7[3] = (long)(plVar7 + 0x507);
  if (puVar8 != (uint *)0x0) {
    *(uint *)(plVar7 + 0xe2d) = puVar8[0x1a10];
    lVar9 = *(long *)(puVar8 + 2);
    lVar1 = *(long *)(puVar8 + 4);
    plVar7[0xe0a] = lVar9;
    plVar7[0xe0b] = lVar9;
    plVar7[0xe0c] = lVar9 + lVar1;
    plVar7[0xe09] = lVar9 + lVar1;
    if (puVar8[0x1a11] != 0) {
      *plVar7 = (long)(puVar8 + 6);
      plVar7[1] = (long)(puVar8 + 0x60a);
      plVar7[0xe15] = 0x100000001;
      plVar7[2] = (long)(puVar8 + 0x408);
      plVar7[3] = (long)(puVar8 + 0xa0c);
      *(uint *)((long)plVar7 + 0x683c) = puVar8[0x1a0d];
      *(uint *)(plVar7 + 0xd08) = puVar8[0x1a0e];
      *(uint *)((long)plVar7 + 0x6844) = puVar8[0x1a0f];
      return;
    }
    plVar7[0xe15] = 0;
    return;
  }
  return;
}



/* Entry: 1099efa5c; end: 1099efb13;  */

void FUN_1099efa5c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    *(uint *)((long)param_1 + 0x716c) =
         (uint)(param_1[0xe0c] != *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10));
  }
  lVar1 = 5;
  if ((int)param_1[0xe22] != 0) {
    lVar1 = 1;
  }
  param_1[0xe0d] = lVar1;
  param_1[0xe13] = 0;
  param_1[0xe0a] = 0;
  param_1[0xe09] = 0;
  param_1[0xe0c] = 0;
  param_1[0xe0b] = 0;
  *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
  param_1[0xe15] = 0;
  *(undefined4 *)((long)param_1 + 0x70a4) = 0;
  *(undefined4 *)(param_1 + 0xe2d) = 0;
  *(undefined8 *)((long)param_1 + 0x683c) = 0x400000001;
  *(undefined4 *)((long)param_1 + 0x6844) = 8;
  *param_1 = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 0x306);
  param_1[2] = (long)(param_1 + 0x205);
  param_1[3] = (long)(param_1 + 0x507);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xe2d) = *(undefined4 *)(param_2 + 0x6840);
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    param_1[0xe0a] = lVar1;
    param_1[0xe0b] = lVar1;
    lVar1 = lVar1 + lVar2;
    param_1[0xe0c] = lVar1;
    param_1[0xe09] = lVar1;
    if (*(int *)(param_2 + 0x6844) != 0) {
      *param_1 = param_2 + 0x18;
      param_1[1] = param_2 + 0x1828;
      param_1[0xe15] = 0x100000001;
      param_1[2] = param_2 + 0x1020;
      param_1[3] = param_2 + 0x2830;
      *(undefined4 *)((long)param_1 + 0x683c) = *(undefined4 *)(param_2 + 0x6834);
      *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_2 + 0x6838);
      *(undefined4 *)((long)param_1 + 0x6844) = *(undefined4 *)(param_2 + 0x683c);
      return;
    }
    param_1[0xe15] = 0;
    return;
  }
  return;
}



/* Entry: 1099efb14; end: 1099efb63;  */

undefined8 FUN_1099efb14(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x7174) = 0;
  *(undefined4 *)(param_1 + 0x71d4) = 0;
  func_0x000107c2ae58(*(undefined8 *)(param_1 + 0x7158));
  *(undefined8 *)(param_1 + 0x7160) = 0;
  *(undefined8 *)(param_1 + 0x7158) = 0;
  *(undefined4 *)(param_1 + 0x7170) = 0;
  uVar1 = 5;
  if (*(int *)(param_1 + 0x7110) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1099efb64; end: 1099f0353;  */

ulong FUN_1099efb64(ulong param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  
  uVar22 = param_3[1];
  uVar5 = param_3[2];
  if (uVar22 < uVar5) {
    return 0xffffffffffffffb8;
  }
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  if (uVar4 < uVar6) {
    return 0xffffffffffffffba;
  }
  puVar1 = (uint *)(param_1 + 0x271f8);
  uVar2 = *param_3 + uVar5;
  uVar15 = *param_3 + uVar22;
  lVar11 = *param_2;
  lVar3 = lVar11 + uVar6;
  uVar20 = uVar2;
  lVar21 = lVar3;
LAB_1099efc24:
  uVar12 = (lVar11 + uVar4) - lVar21;
LAB_1099efc30:
  do {
    while (iVar7 = *(int *)(param_1 + 0x7174), iVar7 < 2) {
      if (iVar7 == 0) {
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x7174) = 1;
        *(undefined8 *)(param_1 + 0x7188) = 0;
        *(undefined8 *)(param_1 + 0x71cc) = 0;
        *(undefined8 *)(param_1 + 0x71b0) = 0;
        *(undefined8 *)(param_1 + 0x71b8) = 0;
        *(undefined8 *)(param_1 + 0x71a8) = 0;
      }
      else {
        if (iVar7 != 1) {
          return 0xffffffffffffffff;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x71b8);
      }
      uVar18 = param_1 + 0x7070;
      func_0x000107c2ae68(uVar18,puVar1,uVar9,*(undefined4 *)(param_1 + 0x7110));
      if (0xffffffffffffff88 < uVar18) {
        return uVar18;
      }
      if (uVar18 == 0) {
        if ((((*(ulong *)(param_1 + 0x7070) == 0) || (*(long *)(param_1 + 0x7078) == 0)) ||
            (uVar12 < *(ulong *)(param_1 + 0x7070))) ||
           (uVar18 = uVar2, FUN_1099ef2d0(uVar2,uVar22 - uVar5), uVar22 - uVar5 < uVar18)) {
          uVar18 = param_1;
          func_0x000107c34f10(param_1);
          FUN_1099efa5c(param_1,uVar18);
          if (*puVar1 >> 4 == 0x184d2a5) {
            uVar18 = (ulong)*(uint *)(param_1 + 0x271fc);
            uVar10 = 7;
          }
          else {
            uVar18 = param_1;
            func_0x000107c2ae70(param_1,puVar1,*(undefined8 *)(param_1 + 0x71b8));
            if (0xffffffffffffff88 < uVar18) {
              return uVar18;
            }
            uVar10 = 2;
            uVar18 = 3;
          }
          *(ulong *)(param_1 + 0x7068) = uVar18;
          *(undefined4 *)(param_1 + 0x70a4) = uVar10;
          uVar18 = *(ulong *)(param_1 + 0x7078);
          if (uVar18 < 0x401) {
            uVar18 = 0x400;
          }
          *(ulong *)(param_1 + 0x7078) = uVar18;
          if (*(ulong *)(param_1 + 0x7190) < uVar18) {
            return 0xfffffffffffffff0;
          }
          uVar8 = *(uint *)(param_1 + 0x7080);
          if (uVar8 < 5) {
            uVar8 = 4;
          }
          uVar17 = (ulong)uVar8;
          uVar19 = uVar18;
          if (0x1ffff < uVar18) {
            uVar19 = 0x20000;
          }
          uVar18 = uVar18 + uVar19 + 0x40;
          if (*(ulong *)(param_1 + 0x7070) <= uVar18) {
            uVar18 = *(ulong *)(param_1 + 0x7070);
          }
          if ((*(ulong *)(param_1 + 0x7180) < uVar17) || (*(ulong *)(param_1 + 0x71a0) < uVar18)) {
            uVar19 = uVar18 + uVar17;
            if (*(long *)(param_1 + 29000) == 0) {
              if (*(long *)(param_1 + 0x7178) != 0) {
                if (*(code **)(param_1 + 0x7128) == (code *)0x0) {
                  _free(*(long *)(param_1 + 0x7178));
                }
                else {
                  (**(code **)(param_1 + 0x7128))(*(undefined8 *)(param_1 + 0x7130));
                }
              }
              *(undefined8 *)(param_1 + 0x7180) = 0;
              *(undefined8 *)(param_1 + 0x71a0) = 0;
              if (*(code **)(param_1 + 0x7120) == (code *)0x0) {
                _malloc();
              }
              else {
                uVar16 = *(ulong *)(param_1 + 0x7130);
                (**(code **)(param_1 + 0x7120))(uVar16,uVar19);
                uVar19 = uVar16;
              }
              *(ulong *)(param_1 + 0x7178) = uVar19;
              if (uVar19 == 0) {
                return 0xffffffffffffffc0;
              }
            }
            else {
              if (*(long *)(param_1 + 29000) - 0x27210U < uVar19) {
                return 0xffffffffffffffc0;
              }
              uVar19 = *(ulong *)(param_1 + 0x7178);
            }
            *(ulong *)(param_1 + 0x7180) = uVar17;
            *(ulong *)(param_1 + 0x7198) = uVar19 + uVar17;
            *(ulong *)(param_1 + 0x71a0) = uVar18;
          }
          *(undefined4 *)(param_1 + 0x7174) = 2;
          goto LAB_1099efe74;
        }
        uVar15 = param_1;
        func_0x000107c34f10(param_1);
        uVar19 = param_1;
        func_0x000107c34f0c(param_1,lVar21,uVar12,uVar2,uVar18,0,0,uVar15);
        if (0xffffffffffffff88 < uVar19) {
          return uVar19;
        }
        uVar20 = uVar2 + uVar18;
        lVar21 = lVar21 + uVar19;
        *(undefined8 *)(param_1 + 0x7068) = 0;
LAB_1099f006c:
        *(undefined4 *)(param_1 + 0x7174) = 0;
        uVar19 = uVar20;
        goto LAB_1099f0074;
      }
      lVar13 = *(long *)(param_1 + 0x71b8);
      uVar17 = uVar18 - lVar13;
      uVar19 = uVar15 - uVar20;
      if (uVar19 < uVar17) {
        if (uVar15 != uVar20) {
          _memcpy((long)puVar1 + lVar13,uVar20,uVar19);
          lVar13 = *(long *)(param_1 + 0x71b8) + uVar19;
          *(long *)(param_1 + 0x71b8) = lVar13;
        }
        param_3[2] = param_3[1];
        uVar22 = 6;
        if (*(int *)(param_1 + 0x7110) != 0) {
          uVar22 = 2;
        }
        if (uVar22 <= uVar18) {
          uVar22 = uVar18;
        }
        return (uVar22 - lVar13) + 3;
      }
      _memcpy((long)puVar1 + lVar13,uVar20,uVar17);
      *(ulong *)(param_1 + 0x71b8) = uVar18;
      uVar20 = uVar20 + uVar17;
    }
    if (iVar7 == 2) {
LAB_1099efe74:
      uVar18 = *(ulong *)(param_1 + 0x7068);
      if (uVar18 == 0) goto LAB_1099f006c;
      if (uVar18 <= uVar15 - uVar20) {
        iVar7 = *(int *)(param_1 + 0x70a4);
        if (iVar7 == 7) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(param_1 + 0x71a0) - *(long *)(param_1 + 0x71a8);
        }
        uVar19 = param_1;
        FUN_1099ef404(param_1,*(long *)(param_1 + 0x7198) + *(long *)(param_1 + 0x71a8),lVar13,
                      uVar20,uVar18);
        if (0xffffffffffffff88 < uVar19) {
          return uVar19;
        }
        uVar20 = uVar20 + uVar18;
        if ((iVar7 == 7) || (uVar19 != 0)) {
          *(ulong *)(param_1 + 0x71b0) = *(long *)(param_1 + 0x71a8) + uVar19;
          *(undefined4 *)(param_1 + 0x7174) = 4;
        }
        goto LAB_1099efc30;
      }
      uVar19 = uVar15;
      if (uVar20 == uVar15) goto LAB_1099f0074;
      *(undefined4 *)(param_1 + 0x7174) = 3;
    }
    else {
      if (iVar7 != 3) {
        if (iVar7 != 4) {
          return 0xffffffffffffffff;
        }
        lVar13 = *(long *)(param_1 + 0x71b0);
        lVar14 = *(long *)(param_1 + 0x71a8);
        goto LAB_1099effe4;
      }
      uVar18 = *(ulong *)(param_1 + 0x7068);
    }
    lVar13 = *(long *)(param_1 + 0x7188);
    uVar16 = uVar18 - lVar13;
    iVar7 = *(int *)(param_1 + 0x70a4);
    uVar17 = uVar16;
    if (iVar7 == 7) {
      if (uVar15 - uVar20 <= uVar16) {
        uVar17 = uVar15 - uVar20;
      }
    }
    else {
      if ((ulong)(*(long *)(param_1 + 0x7180) - lVar13) < uVar16) {
        return 0xffffffffffffffec;
      }
      if (uVar15 - uVar20 <= uVar16) {
        uVar17 = uVar15 - uVar20;
      }
      _memcpy(*(long *)(param_1 + 0x7178) + lVar13,uVar20,uVar17);
      lVar13 = *(long *)(param_1 + 0x7188);
    }
    uVar19 = uVar20 + uVar17;
    *(ulong *)(param_1 + 0x7188) = uVar17 + lVar13;
    if (uVar17 < uVar16) goto LAB_1099f0074;
    uVar17 = param_1;
    FUN_1099ef404(param_1,*(long *)(param_1 + 0x7198) + *(long *)(param_1 + 0x71a8),
                  *(long *)(param_1 + 0x71a0) - *(long *)(param_1 + 0x71a8),
                  *(undefined8 *)(param_1 + 0x7178),uVar18);
    if (0xffffffffffffff88 < uVar17) {
      return uVar17;
    }
    *(undefined8 *)(param_1 + 0x7188) = 0;
    uVar20 = uVar19;
    if ((iVar7 == 7) || (uVar17 != 0)) break;
    *(undefined4 *)(param_1 + 0x7174) = 2;
  } while( true );
  lVar14 = *(long *)(param_1 + 0x71a8);
  lVar13 = lVar14 + uVar17;
  *(long *)(param_1 + 0x71b0) = lVar13;
  *(undefined4 *)(param_1 + 0x7174) = 4;
LAB_1099effe4:
  uVar17 = lVar13 - lVar14;
  uVar18 = uVar12;
  if (uVar17 <= uVar12) {
    uVar18 = uVar17;
  }
  _memcpy(lVar21,*(long *)(param_1 + 0x7198) + lVar14,uVar18);
  lVar21 = lVar21 + uVar18;
  lVar13 = *(long *)(param_1 + 0x71a8) + uVar18;
  *(long *)(param_1 + 0x71a8) = lVar13;
  uVar19 = uVar20;
  if (uVar12 < uVar17) {
LAB_1099f0074:
    uVar15 = uVar19 - *param_3;
    param_3[2] = uVar15;
    param_2[2] = lVar21 - *param_2;
    if ((uVar19 == uVar2) && (lVar21 == lVar3)) {
      iVar7 = *(int *)(param_1 + 0x71d4);
      *(int *)(param_1 + 0x71d4) = iVar7 + 1;
      if (0xe < iVar7) {
        if (uVar6 == uVar4) {
          return 0xffffffffffffffba;
        }
        if (uVar22 == uVar5) {
          return 0xffffffffffffffb8;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x71d4) = 0;
    }
    if (*(long *)(param_1 + 0x7068) == 0) {
      if (*(long *)(param_1 + 0x71b0) == *(long *)(param_1 + 0x71a8)) {
        if (*(int *)(param_1 + 0x71d0) == 0) {
          uVar22 = 0;
        }
        else if (uVar15 < (ulong)param_3[1]) {
          uVar22 = 0;
          param_3[2] = uVar15 + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x7174) = 2;
          uVar22 = 1;
        }
      }
      else {
        uVar22 = 1;
        if (*(int *)(param_1 + 0x71d0) == 0) {
          param_3[2] = uVar15 - 1;
          *(undefined4 *)(param_1 + 0x71d0) = 1;
        }
      }
    }
    else {
      lVar3 = 3;
      if (*(int *)(param_1 + 0x70a4) != 3) {
        lVar3 = 0;
      }
      uVar22 = (*(long *)(param_1 + 0x7068) - *(long *)(param_1 + 0x7188)) + lVar3;
    }
    return uVar22;
  }
  *(undefined4 *)(param_1 + 0x7174) = 2;
  if ((*(ulong *)(param_1 + 0x71a0) < *(ulong *)(param_1 + 0x7070)) &&
     (*(ulong *)(param_1 + 0x71a0) < lVar13 + (ulong)*(uint *)(param_1 + 0x7080))) {
    *(undefined8 *)(param_1 + 0x71a8) = 0;
    *(undefined8 *)(param_1 + 0x71b0) = 0;
  }
  goto LAB_1099efc24;
}



/* Entry: 1099f0354; end: 1099f04eb;  */

void FUN_1099f0354(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)((long)param_1 + param_4);
  if ((long)param_4 < 8) {
    if (0 < (long)param_4) {
      do {
        puVar3 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        param_1 = puVar3;
        param_3 = (undefined8 *)((long)param_3 + 1);
      } while (puVar3 < puVar4);
    }
  }
  else {
    if (param_5 != 0) {
      uVar6 = (long)param_1 - (long)param_3;
      if (uVar6 < 8) {
        iVar2 = *(int *)(&UNK_10e011c80 + uVar6 * 4);
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_3 + 1);
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_3 + 2);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_3 + 3);
        uVar1 = *(uint *)(&UNK_10e011c60 + uVar6 * 4);
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_3 + (ulong)uVar1);
        param_3 = (undefined8 *)((long)((long)param_3 + (ulong)uVar1) - (long)iVar2);
      }
      else {
        *param_1 = *param_3;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    if (param_2 < puVar4) {
      if (param_1 <= param_2) {
        lVar7 = (long)param_2 - (long)param_1;
        if ((param_5 == 0) || (puVar3 = param_3, 0xf < (long)param_1 - (long)param_3)) {
          uVar8 = *param_3;
          param_1[1] = param_3[1];
          *param_1 = uVar8;
          uVar8 = param_3[2];
          param_1[3] = param_3[3];
          param_1[2] = uVar8;
          if (0x20 < lVar7) {
            param_1 = param_1 + 4;
            puVar3 = param_3 + 6;
            do {
              uVar8 = puVar3[-2];
              param_1[1] = puVar3[-1];
              *param_1 = uVar8;
              uVar8 = *puVar3;
              param_1[3] = puVar3[1];
              param_1[2] = uVar8;
              param_1 = param_1 + 4;
              puVar3 = puVar3 + 4;
            } while (param_1 < param_2);
          }
        }
        else {
          do {
            puVar5 = param_1 + 1;
            *param_1 = *puVar3;
            param_1 = puVar5;
            puVar3 = puVar3 + 1;
          } while (puVar5 < param_2);
        }
        param_3 = (undefined8 *)((long)param_3 + lVar7);
        param_1 = param_2;
      }
      for (; param_1 < puVar4; param_1 = (undefined8 *)((long)param_1 + 1)) {
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        param_3 = (undefined8 *)((long)param_3 + 1);
      }
    }
    else if ((param_5 == 0) || (puVar4 = param_1, 0xf < (long)param_1 - (long)param_3)) {
      uVar8 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar8;
      uVar8 = param_3[2];
      param_1[3] = param_3[3];
      param_1[2] = uVar8;
      if (0x20 < param_4) {
        puVar4 = param_1 + 4;
        puVar3 = param_3 + 6;
        do {
          uVar8 = puVar3[-2];
          puVar4[1] = puVar3[-1];
          *puVar4 = uVar8;
          uVar8 = *puVar3;
          puVar4[3] = puVar3[1];
          puVar4[2] = uVar8;
          puVar4 = puVar4 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar4 < (undefined8 *)((long)param_1 + param_4));
      }
    }
    else {
      do {
        puVar3 = puVar4 + 1;
        *puVar4 = *param_3;
        puVar4 = puVar3;
        param_3 = param_3 + 1;
      } while (puVar3 < (undefined8 *)((long)param_1 + param_4));
    }
  }
  return;
}



/* Entry: 1099f04ec; end: 1099f07bb;  */

int FUN_1099f04ec(ushort *param_1,undefined8 *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  if (param_4 == 0) {
    if (param_3 == 1) {
      return -(uint)((byte)*param_1 != 0);
    }
  }
  else if (param_3 != 0) {
    puVar1 = (ushort *)((long)param_1 + (long)param_3);
    puVar2 = (undefined8 *)((long)param_2 + (long)param_4);
    puVar15 = (undefined8 *)((long)puVar2 + -7);
    puVar7 = param_1;
    puVar9 = param_2;
LAB_1099f0548:
    do {
      puVar13 = (ushort *)((long)puVar7 + 1);
      bVar4 = (byte)*puVar7;
      uVar8 = (ulong)(bVar4 >> 4);
      if (bVar4 >> 4 == 0xf) {
        if ((ushort *)((long)puVar1 - 0xfU) <= puVar13) goto LAB_1099f0764;
        puVar7 = puVar7 + 1;
        uVar8 = 0xf;
        puVar6 = puVar13;
        do {
          puVar13 = (ushort *)((long)puVar6 + 1);
          uVar5 = *puVar6;
          uVar8 = uVar8 + (byte)uVar5;
          puVar7 = (ushort *)((long)puVar7 + 1);
          if ((ushort *)((long)puVar1 - 0xfU) <= puVar13) break;
          puVar6 = puVar13;
        } while ((byte)uVar5 == 0xff);
        if ((CARRY8((ulong)puVar9,uVar8)) || ((ulong)-(long)puVar7 < uVar8)) goto LAB_1099f0764;
LAB_1099f05a0:
        puVar11 = (undefined8 *)((long)puVar9 + uVar8);
        puVar6 = (ushort *)((long)puVar13 + uVar8);
        if ((undefined8 *)((long)puVar2 + -0xc) < puVar11 || puVar1 + -4 < puVar6) {
          if (puVar11 <= puVar2 && puVar6 == puVar1) {
            _memcpy(puVar9);
            return (int)puVar11 - (int)param_2;
          }
LAB_1099f0764:
          return ~(uint)puVar13 + (int)param_1;
        }
        do {
          puVar10 = puVar9 + 1;
          *puVar9 = *(undefined8 *)puVar13;
          puVar13 = puVar13 + 4;
          puVar9 = puVar10;
        } while (puVar10 < puVar11);
        puVar7 = puVar6 + 1;
        uVar8 = (ulong)*puVar6;
        puVar9 = (undefined8 *)((long)puVar11 - uVar8);
      }
      else {
        if ((puVar2 + -4 < puVar9) || (puVar1 + -8 <= puVar13)) goto LAB_1099f05a0;
        uVar18 = *(undefined8 *)puVar13;
        puVar9[1] = *(undefined8 *)((long)puVar7 + 9);
        *puVar9 = uVar18;
        puVar11 = (undefined8 *)((long)puVar9 + uVar8);
        uVar14 = (ulong)bVar4 & 0xf;
        puVar7 = (ushort *)((long)puVar13 + uVar8) + 1;
        uVar5 = *(ushort *)((long)puVar13 + uVar8);
        uVar8 = (ulong)uVar5;
        puVar9 = (undefined8 *)((long)puVar11 - uVar8);
        if (((int)uVar14 != 0xf && 7 < uVar5) && param_2 <= puVar9) {
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
          *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar9 + 2);
          puVar9 = (undefined8 *)((long)puVar11 + uVar14 + 4);
          goto LAB_1099f0548;
        }
      }
      uVar14 = (ulong)bVar4 & 0xf;
      puVar13 = puVar7;
      if (puVar9 < param_2) goto LAB_1099f0764;
      *(undefined4 *)puVar11 = 0;
      puVar6 = puVar7;
      if (uVar14 == 0xf) {
        do {
          puVar7 = (ushort *)((long)puVar6 + 1);
          puVar13 = puVar7;
          if ((ushort *)((long)puVar1 - 5U) < puVar7) goto LAB_1099f0764;
          uVar5 = *puVar6;
          uVar14 = uVar14 + (byte)uVar5;
          puVar6 = puVar7;
        } while ((ulong)(byte)uVar5 == 0xff);
        if (CARRY8((ulong)puVar11,uVar14)) goto LAB_1099f0764;
      }
      if (uVar8 < 8) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        *(undefined1 *)((long)puVar11 + 1) = *(undefined1 *)((long)puVar9 + 1);
        *(undefined1 *)((long)puVar11 + 2) = *(undefined1 *)((long)puVar9 + 2);
        *(undefined1 *)((long)puVar11 + 3) = *(undefined1 *)((long)puVar9 + 3);
        uVar3 = *(uint *)(&UNK_10e011ca0 + uVar8 * 4);
        *(undefined4 *)((long)puVar11 + 4) = *(undefined4 *)((long)puVar9 + (ulong)uVar3);
        puVar10 = (undefined8 *)
                  ((long)((long)puVar9 + (ulong)uVar3) - (long)*(int *)(&UNK_10e011cc0 + uVar8 * 4))
        ;
      }
      else {
        puVar10 = puVar9 + 1;
        *puVar11 = *puVar9;
      }
      puVar9 = (undefined8 *)((long)puVar11 + uVar14 + 4);
      puVar12 = puVar11 + 1;
      if ((undefined8 *)((long)puVar2 + -0xc) < puVar9) {
        puVar13 = puVar7;
        if ((undefined8 *)((long)puVar2 + -5) < puVar9) goto LAB_1099f0764;
        puVar11 = puVar10;
        puVar16 = puVar12;
        if (puVar12 < puVar15) {
          do {
            puVar17 = puVar16 + 1;
            *puVar16 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar16 = puVar17;
          } while (puVar17 < puVar15);
          puVar10 = (undefined8 *)((long)puVar10 + ((long)puVar15 - (long)puVar12));
          puVar12 = puVar15;
        }
        for (; puVar12 < puVar9; puVar12 = (undefined8 *)((long)puVar12 + 1)) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        }
      }
      else {
        *puVar12 = *puVar10;
        if (0x10 < uVar14 + 4) {
          puVar11 = puVar11 + 2;
          do {
            puVar10 = puVar10 + 1;
            puVar12 = puVar11 + 1;
            *puVar11 = *puVar10;
            puVar11 = puVar12;
          } while (puVar12 < puVar9);
        }
      }
    } while( true );
  }
  return -1;
}



/* Entry: 1099f07bc; end: 1099f082b;  */

undefined8 FUN_1099f07bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uVar1 = 0x10;
  __Znwm();
  uStack_40 = *param_1;
  FUN_1099f0a68(uVar1,&uStack_31,&uStack_40);
  *param_2 = uVar1;
  return 0;
}



/* Entry: 1099f082c; end: 1099f08f7;  */

undefined8 FUN_1099f082c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_109a03a18(&uStack_30,*param_1);
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  puVar4[1] = plStack_28;
  *puVar4 = uStack_30;
  if (plStack_28 == (long *)0x0) {
    *param_3 = (long)puVar4;
  }
  else {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_3 = (long)puVar4;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return 0;
}



/* Entry: 1099f08f8; end: 1099f09af;  */

undefined8 FUN_1099f08f8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_109a03aac(&uStack_30,*param_1);
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  puVar4[1] = plStack_28;
  *puVar4 = uStack_30;
  if (plStack_28 == (long *)0x0) {
    *param_3 = (long)puVar4;
  }
  else {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_3 = (long)puVar4;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return 0;
}



/* Entry: 1099f09b0; end: 1099f0a67;  */

undefined8 FUN_1099f09b0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_109a03b50(&uStack_30,*param_1);
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  puVar4[1] = plStack_28;
  *puVar4 = uStack_30;
  if (plStack_28 == (long *)0x0) {
    *param_3 = (long)puVar4;
  }
  else {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_3 = (long)puVar4;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return 0;
}



/* Entry: 1099f0a68; end: 1099f0ac7;  */

void FUN_1099f0a68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x48;
  __Znwm();
  FUN_1099f0ac8();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 1099f0ac8; end: 1099f0b13;  */

undefined8 * FUN_1099f0ac8(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b1f840;
  FUN_109a038c0(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 1099f0b14; end: 1099f0b23;  */

void FUN_1099f0b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1f840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1099f0b24; end: 1099f0b43;  */

void FUN_1099f0b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1f840;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f0b44; end: 1099f0b83;  */

void FUN_1099f0b44(long param_1)

{
  FUN_1099f0b88(param_1 + 0x38);
  func_0x0001099f0be0(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1099f0b84; end: 1099f0b87;  */

void FUN_1099f0b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f0b88; end: 1099f0ed3;  */

long FUN_1099f0b88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1099f0ed4; end: 1099f108b;  */

void FUN_1099f0ed4(undefined8 *param_1,long param_2,long param_3)

{
  float *pfVar1;
  
  if (param_3 != 0) {
    pfVar1 = (float *)(param_2 + 8);
    do {
      *(ulong *)(pfVar1 + -2) =
           CONCAT44((float)param_1[2] * pfVar1[-2] + (float)((ulong)param_1[2] >> 0x20) * pfVar1[-1]
                    + *(float *)(param_1 + 3) * *pfVar1,
                    (float)*param_1 * pfVar1[-2] + (float)((ulong)*param_1 >> 0x20) * pfVar1[-1] +
                    *(float *)(param_1 + 1) * *pfVar1);
      *pfVar1 = 0.0;
      param_3 = param_3 + -1;
      pfVar1 = pfVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1099f108c; end: 1099f109f;  */

undefined * FUN_1099f108c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
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
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 auStack_358 [2];
  undefined8 uStack_350;
  undefined4 auStack_348 [2];
  undefined8 uStack_340;
  undefined4 auStack_338 [2];
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  undefined8 uStack_320;
  undefined4 auStack_318 [2];
  undefined8 uStack_310;
  undefined4 auStack_308 [2];
  undefined8 uStack_300;
  undefined4 auStack_2f8 [2];
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined *)((long)param_2 << 4);
    __Znwm(puVar2);
    return puVar2;
  }
  func_0x000104c4f740();
  func_0x000109a15944();
  lVar3 = 0;
  do {
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x0001099f0e48(puVar2 + lVar3 + 0xc0,&uStack_370);
    *(undefined8 *)(puVar2 + lVar3 + 0x128) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x120) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x138) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x130) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x108) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x100) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x118) = 0;
    *(undefined8 *)(puVar2 + lVar3 + 0x110) = 0;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0x300);
  *(undefined8 *)(puVar2 + 0x3c8) = 0;
  *(undefined8 *)(puVar2 + 0x3c0) = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 0x3d8) = 0;
  *(undefined8 *)(puVar2 + 0x3d0) = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 1000) = 0;
  *(undefined8 *)(puVar2 + 0x3e0) = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 0x3f8) = 0;
  *(undefined8 *)(puVar2 + 0x3f0) = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 0x408) = 0;
  *(undefined8 *)(puVar2 + 0x400) = 0x3f80000000000000;
  *(undefined8 *)(puVar2 + 0x418) = 0;
  *(undefined8 *)(puVar2 + 0x410) = 0x3f80000000000000;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  uVar20 = param_2[5];
  uVar18 = param_2[4];
  fVar5 = (float)((ulong)param_2[6] >> 0x20);
  fVar4 = (float)param_2[6];
  fVar8 = (float)*param_2;
  fVar21 = fVar8 + fVar4;
  fVar6 = (float)param_2[7];
  fVar9 = (float)param_2[1];
  fVar22 = fVar9 + fVar6;
  fVar7 = (float)((ulong)param_2[7] >> 0x20);
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar23 = SQRT((fVar10 + fVar5) * (fVar10 + fVar5) + fVar21 * fVar21 + fVar22 * fVar22);
  fVar8 = fVar4 - fVar8;
  fVar9 = fVar6 - fVar9;
  fVar16 = SQRT((fVar5 - fVar10) * (fVar5 - fVar10) + fVar8 * fVar8 + fVar9 * fVar9);
  fVar13 = (float)((ulong)param_2[2] >> 0x20);
  fVar12 = (float)param_2[2];
  fVar24 = fVar12 + fVar4;
  fVar14 = (float)param_2[3];
  fVar25 = fVar14 + fVar6;
  fVar15 = (float)((ulong)param_2[3] >> 0x20);
  fVar26 = SQRT((fVar13 + fVar5) * (fVar13 + fVar5) + fVar24 * fVar24 + fVar25 * fVar25);
  fVar12 = fVar4 - fVar12;
  fVar14 = fVar6 - fVar14;
  fVar17 = SQRT((fVar5 - fVar13) * (fVar5 - fVar13) + fVar12 * fVar12 + fVar14 * fVar14);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  *(ulong *)(puVar2 + 0x3c8) = CONCAT44((fVar11 + fVar7) / fVar23,fVar22 / fVar23);
  *(ulong *)(puVar2 + 0x3c0) = CONCAT44((fVar10 + fVar5) / fVar23,fVar21 / fVar23);
  *(ulong *)(puVar2 + 0x3d8) = CONCAT44((fVar7 - fVar11) / fVar16,fVar9 / fVar16);
  *(ulong *)(puVar2 + 0x3d0) = CONCAT44((fVar5 - fVar10) / fVar16,fVar8 / fVar16);
  *(ulong *)(puVar2 + 1000) = CONCAT44((fVar7 - fVar15) / fVar17,fVar14 / fVar17);
  *(ulong *)(puVar2 + 0x3e0) = CONCAT44((fVar5 - fVar13) / fVar17,fVar12 / fVar17);
  *(ulong *)(puVar2 + 0x3f8) = CONCAT44((fVar15 + fVar7) / fVar26,fVar25 / fVar26);
  *(ulong *)(puVar2 + 0x3f0) = CONCAT44((fVar13 + fVar5) / fVar26,fVar24 / fVar26);
  fVar11 = (float)uVar18;
  fVar8 = fVar11 + fVar4;
  fVar12 = (float)uVar20;
  fVar10 = fVar12 + fVar6;
  fVar13 = (float)((ulong)uVar20 >> 0x20);
  fVar9 = SQRT((fVar19 + fVar5) * (fVar19 + fVar5) + fVar8 * fVar8 + fVar10 * fVar10);
  *(ulong *)(puVar2 + 0x408) = CONCAT44((fVar13 + fVar7) / fVar9,fVar10 / fVar9);
  *(ulong *)(puVar2 + 0x400) = CONCAT44((fVar19 + fVar5) / fVar9,fVar8 / fVar9);
  fVar4 = fVar4 - fVar11;
  fVar6 = fVar6 - fVar12;
  fVar8 = SQRT((fVar5 - fVar19) * (fVar5 - fVar19) + fVar4 * fVar4 + fVar6 * fVar6);
  *(ulong *)(puVar2 + 0x418) = CONCAT44((fVar7 - fVar13) / fVar8,fVar6 / fVar8);
  *(ulong *)(puVar2 + 0x410) = CONCAT44((fVar5 - fVar19) / fVar8,fVar4 / fVar8);
  FUN_1099f1760(&uStack_370,puVar2 + 0x400,puVar2 + 0x3c0,puVar2 + 0x3e0);
  *(undefined8 *)(puVar2 + 0x40) = uStack_370;
  *(undefined4 *)(puVar2 + 0x48) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x400,puVar2 + 0x3c0,puVar2 + 0x3f0);
  *(undefined8 *)(puVar2 + 0x50) = uStack_370;
  *(undefined4 *)(puVar2 + 0x58) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x400,puVar2 + 0x3d0,puVar2 + 0x3f0);
  *(undefined8 *)(puVar2 + 0x60) = uStack_370;
  *(undefined4 *)(puVar2 + 0x68) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x400,puVar2 + 0x3d0,puVar2 + 0x3e0);
  *(undefined8 *)(puVar2 + 0x70) = uStack_370;
  *(undefined4 *)(puVar2 + 0x78) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x410,puVar2 + 0x3c0,puVar2 + 0x3e0);
  *(undefined8 *)(puVar2 + 0x80) = uStack_370;
  *(undefined4 *)(puVar2 + 0x88) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x410,puVar2 + 0x3c0,puVar2 + 0x3f0);
  *(undefined8 *)(puVar2 + 0x90) = uStack_370;
  *(undefined4 *)(puVar2 + 0x98) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x410,puVar2 + 0x3d0,puVar2 + 0x3f0);
  *(undefined8 *)(puVar2 + 0xa0) = uStack_370;
  *(undefined4 *)(puVar2 + 0xa8) = (undefined4)uStack_368;
  FUN_1099f1760(&uStack_370,puVar2 + 0x410,puVar2 + 0x3d0,puVar2 + 0x3e0);
  *(undefined8 *)(puVar2 + 0xb0) = uStack_370;
  *(undefined4 *)(puVar2 + 0xb8) = (undefined4)uStack_368;
  func_0x0001099f0e48(&uStack_3b0,puVar2 + 0x3c0);
  auStack_328[0] = *(undefined4 *)(puVar2 + 0x48);
  auStack_318[0] = *(undefined4 *)(puVar2 + 0x58);
  auStack_308[0] = *(undefined4 *)(puVar2 + 0x98);
  auStack_2f8[0] = *(undefined4 *)(puVar2 + 0x88);
  uStack_370 = uStack_3b0;
  uStack_368 = CONCAT44(uStack_368._4_4_,uStack_3a8);
  uStack_360 = uStack_3a0;
  auStack_358[0] = uStack_398;
  uStack_350 = uStack_390;
  auStack_348[0] = uStack_388;
  uStack_340 = uStack_380;
  auStack_338[0] = uStack_378;
  uStack_330 = *(undefined8 *)(puVar2 + 0x40);
  uStack_320 = *(undefined8 *)(puVar2 + 0x50);
  uStack_310 = *(undefined8 *)(puVar2 + 0x90);
  uStack_300 = *(undefined8 *)(puVar2 + 0x80);
  func_0x0001099f0e48(&uStack_3f0,puVar2 + 0x3d0);
  uStack_2a8 = *(undefined4 *)(puVar2 + 0x68);
  uStack_298 = *(undefined4 *)(puVar2 + 0x78);
  uStack_288 = *(undefined4 *)(puVar2 + 0xb8);
  uStack_278 = *(undefined4 *)(puVar2 + 0xa8);
  uStack_2f0 = uStack_3f0;
  uStack_2e8 = uStack_3e8;
  uStack_2e0 = uStack_3e0;
  uStack_2d8 = uStack_3d8;
  uStack_2d0 = uStack_3d0;
  uStack_2c8 = uStack_3c8;
  uStack_2c0 = uStack_3c0;
  uStack_2b8 = uStack_3b8;
  uStack_2b0 = *(undefined8 *)(puVar2 + 0x60);
  uStack_2a0 = *(undefined8 *)(puVar2 + 0x70);
  uStack_290 = *(undefined8 *)(puVar2 + 0xb0);
  uStack_280 = *(undefined8 *)(puVar2 + 0xa0);
  func_0x0001099f0e48(&uStack_430,puVar2 + 0x400);
  uStack_228 = *(undefined4 *)(puVar2 + 0x48);
  uStack_218 = *(undefined4 *)(puVar2 + 0x58);
  uStack_208 = *(undefined4 *)(puVar2 + 0x68);
  uStack_1f8 = *(undefined4 *)(puVar2 + 0x78);
  uStack_270 = uStack_430;
  uStack_268 = uStack_428;
  uStack_260 = uStack_420;
  uStack_258 = uStack_418;
  uStack_250 = uStack_410;
  uStack_248 = uStack_408;
  uStack_240 = uStack_400;
  uStack_238 = uStack_3f8;
  uStack_230 = *(undefined8 *)(puVar2 + 0x40);
  uStack_220 = *(undefined8 *)(puVar2 + 0x50);
  uStack_210 = *(undefined8 *)(puVar2 + 0x60);
  uStack_200 = *(undefined8 *)(puVar2 + 0x70);
  func_0x0001099f0e48(&uStack_470,puVar2 + 0x410);
  uStack_1a8 = *(undefined4 *)(puVar2 + 0x88);
  uStack_198 = *(undefined4 *)(puVar2 + 0x98);
  uStack_188 = *(undefined4 *)(puVar2 + 0xa8);
  uStack_178 = *(undefined4 *)(puVar2 + 0xb8);
  uStack_1f0 = uStack_470;
  uStack_1e8 = uStack_468;
  uStack_1e0 = uStack_460;
  uStack_1d8 = uStack_458;
  uStack_1d0 = uStack_450;
  uStack_1c8 = uStack_448;
  uStack_1c0 = uStack_440;
  uStack_1b8 = uStack_438;
  uStack_1b0 = *(undefined8 *)(puVar2 + 0x80);
  uStack_1a0 = *(undefined8 *)(puVar2 + 0x90);
  uStack_190 = *(undefined8 *)(puVar2 + 0xa0);
  uStack_180 = *(undefined8 *)(puVar2 + 0xb0);
  func_0x0001099f0e48(&uStack_4b0,puVar2 + 0x3e0);
  uStack_128 = *(undefined4 *)(puVar2 + 0x48);
  uStack_118 = *(undefined4 *)(puVar2 + 0x78);
  uStack_108 = *(undefined4 *)(puVar2 + 0xb8);
  uStack_f8 = *(undefined4 *)(puVar2 + 0x88);
  uStack_170 = uStack_4b0;
  uStack_168 = uStack_4a8;
  uStack_160 = uStack_4a0;
  uStack_158 = uStack_498;
  uStack_150 = uStack_490;
  uStack_148 = uStack_488;
  uStack_140 = uStack_480;
  uStack_138 = uStack_478;
  uStack_130 = *(undefined8 *)(puVar2 + 0x40);
  uStack_120 = *(undefined8 *)(puVar2 + 0x70);
  uStack_110 = *(undefined8 *)(puVar2 + 0xb0);
  uStack_100 = *(undefined8 *)(puVar2 + 0x80);
  func_0x0001099f0e48(&uStack_4f0,puVar2 + 0x3f0);
  uStack_f0 = uStack_4f0;
  uStack_e8 = uStack_4e8;
  uStack_e0 = uStack_4e0;
  uStack_d8 = uStack_4d8;
  uStack_d0 = uStack_4d0;
  uStack_c8 = uStack_4c8;
  uStack_c0 = uStack_4c0;
  uStack_b8 = uStack_4b8;
  uStack_b0 = *(undefined8 *)(puVar2 + 0x50);
  uStack_a8 = *(undefined4 *)(puVar2 + 0x58);
  uStack_a0 = *(undefined8 *)(puVar2 + 0x60);
  uStack_98 = *(undefined4 *)(puVar2 + 0x68);
  uStack_90 = *(undefined8 *)(puVar2 + 0xa0);
  uStack_88 = *(undefined4 *)(puVar2 + 0xa8);
  uStack_80 = *(undefined8 *)(puVar2 + 0x90);
  uStack_78 = *(undefined4 *)(puVar2 + 0x98);
  lVar3 = 0;
  do {
    *(undefined8 *)(puVar2 + lVar3 + 0xc0) = *(undefined8 *)((long)&uStack_370 + lVar3);
    *(undefined4 *)(puVar2 + lVar3 + 200) = *(undefined4 *)((long)&uStack_368 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0xd0) = *(undefined8 *)((long)auStack_358 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0xd8) = *(undefined4 *)((long)auStack_358 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0xe0) = *(undefined8 *)((long)auStack_348 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0xe8) = *(undefined4 *)((long)auStack_348 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0xf0) = *(undefined8 *)((long)auStack_338 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0xf8) = *(undefined4 *)((long)auStack_338 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0x100) = *(undefined8 *)((long)auStack_328 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0x108) = *(undefined4 *)((long)auStack_328 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0x110) = *(undefined8 *)((long)auStack_318 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0x118) = *(undefined4 *)((long)auStack_318 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0x120) = *(undefined8 *)((long)auStack_308 + lVar3 + -8);
    *(undefined4 *)(puVar2 + lVar3 + 0x128) = *(undefined4 *)((long)auStack_308 + lVar3);
    *(undefined8 *)(puVar2 + lVar3 + 0x130) = *(undefined8 *)((long)auStack_2f8 + lVar3 + -8);
    lVar1 = lVar3 + 0x80;
    *(undefined4 *)(puVar2 + lVar3 + 0x138) = *(undefined4 *)((long)auStack_2f8 + lVar3);
    lVar3 = lVar1;
  } while (lVar1 != 0x300);
  return puVar2;
}



/* Entry: 1099f10a0; end: 1099f10d3;  */

long FUN_1099f10a0(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 auStack_348 [2];
  undefined8 uStack_340;
  undefined4 auStack_338 [2];
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  undefined8 uStack_320;
  undefined4 auStack_318 [2];
  undefined8 uStack_310;
  undefined4 auStack_308 [2];
  undefined8 uStack_300;
  undefined4 auStack_2f8 [2];
  undefined8 uStack_2f0;
  undefined4 auStack_2e8 [2];
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar3 = (long)param_2 << 4;
    __Znwm(lVar3);
    return lVar3;
  }
  func_0x000104c4f740();
  func_0x000109a15944();
  lVar3 = 0;
  do {
    lVar2 = param_1 + lVar3;
    uStack_360 = 0;
    uStack_358 = 0;
    func_0x0001099f0e48(lVar2 + 0xc0,&uStack_360);
    *(undefined8 *)(lVar2 + 0x128) = 0;
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0x300);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0x3f80000000000000;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  uVar20 = param_2[5];
  uVar18 = param_2[4];
  fVar5 = (float)((ulong)param_2[6] >> 0x20);
  fVar4 = (float)param_2[6];
  fVar8 = (float)*param_2;
  fVar21 = fVar8 + fVar4;
  fVar6 = (float)param_2[7];
  fVar9 = (float)param_2[1];
  fVar22 = fVar9 + fVar6;
  fVar7 = (float)((ulong)param_2[7] >> 0x20);
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar23 = SQRT((fVar10 + fVar5) * (fVar10 + fVar5) + fVar21 * fVar21 + fVar22 * fVar22);
  fVar8 = fVar4 - fVar8;
  fVar9 = fVar6 - fVar9;
  fVar16 = SQRT((fVar5 - fVar10) * (fVar5 - fVar10) + fVar8 * fVar8 + fVar9 * fVar9);
  fVar13 = (float)((ulong)param_2[2] >> 0x20);
  fVar12 = (float)param_2[2];
  fVar24 = fVar12 + fVar4;
  fVar14 = (float)param_2[3];
  fVar25 = fVar14 + fVar6;
  fVar15 = (float)((ulong)param_2[3] >> 0x20);
  fVar26 = SQRT((fVar13 + fVar5) * (fVar13 + fVar5) + fVar24 * fVar24 + fVar25 * fVar25);
  fVar12 = fVar4 - fVar12;
  fVar14 = fVar6 - fVar14;
  fVar17 = SQRT((fVar5 - fVar13) * (fVar5 - fVar13) + fVar12 * fVar12 + fVar14 * fVar14);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  *(ulong *)(param_1 + 0x3c8) = CONCAT44((fVar11 + fVar7) / fVar23,fVar22 / fVar23);
  *(ulong *)(param_1 + 0x3c0) = CONCAT44((fVar10 + fVar5) / fVar23,fVar21 / fVar23);
  *(ulong *)(param_1 + 0x3d8) = CONCAT44((fVar7 - fVar11) / fVar16,fVar9 / fVar16);
  *(ulong *)(param_1 + 0x3d0) = CONCAT44((fVar5 - fVar10) / fVar16,fVar8 / fVar16);
  *(ulong *)(param_1 + 1000) = CONCAT44((fVar7 - fVar15) / fVar17,fVar14 / fVar17);
  *(ulong *)(param_1 + 0x3e0) = CONCAT44((fVar5 - fVar13) / fVar17,fVar12 / fVar17);
  *(ulong *)(param_1 + 0x3f8) = CONCAT44((fVar15 + fVar7) / fVar26,fVar25 / fVar26);
  *(ulong *)(param_1 + 0x3f0) = CONCAT44((fVar13 + fVar5) / fVar26,fVar24 / fVar26);
  fVar11 = (float)uVar18;
  fVar8 = fVar11 + fVar4;
  fVar12 = (float)uVar20;
  fVar10 = fVar12 + fVar6;
  fVar13 = (float)((ulong)uVar20 >> 0x20);
  fVar9 = SQRT((fVar19 + fVar5) * (fVar19 + fVar5) + fVar8 * fVar8 + fVar10 * fVar10);
  *(ulong *)(param_1 + 0x408) = CONCAT44((fVar13 + fVar7) / fVar9,fVar10 / fVar9);
  *(ulong *)(param_1 + 0x400) = CONCAT44((fVar19 + fVar5) / fVar9,fVar8 / fVar9);
  fVar4 = fVar4 - fVar11;
  fVar6 = fVar6 - fVar12;
  fVar8 = SQRT((fVar5 - fVar19) * (fVar5 - fVar19) + fVar4 * fVar4 + fVar6 * fVar6);
  *(ulong *)(param_1 + 0x418) = CONCAT44((fVar7 - fVar13) / fVar8,fVar6 / fVar8);
  *(ulong *)(param_1 + 0x410) = CONCAT44((fVar5 - fVar19) / fVar8,fVar4 / fVar8);
  FUN_1099f1760(&uStack_360,param_1 + 0x400,param_1 + 0x3c0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x40) = uStack_360;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x400,param_1 + 0x3c0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x50) = uStack_360;
  *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x400,param_1 + 0x3d0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x60) = uStack_360;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x400,param_1 + 0x3d0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x70) = uStack_360;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x410,param_1 + 0x3c0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x80) = uStack_360;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x410,param_1 + 0x3c0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x90) = uStack_360;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x410,param_1 + 0x3d0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0xa0) = uStack_360;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_358;
  FUN_1099f1760(&uStack_360,param_1 + 0x410,param_1 + 0x3d0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0xb0) = uStack_360;
  *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_358;
  func_0x0001099f0e48(&uStack_3a0,param_1 + 0x3c0);
  auStack_318[0] = *(undefined4 *)(param_1 + 0x48);
  auStack_308[0] = *(undefined4 *)(param_1 + 0x58);
  auStack_2f8[0] = *(undefined4 *)(param_1 + 0x98);
  auStack_2e8[0] = *(undefined4 *)(param_1 + 0x88);
  uStack_360 = uStack_3a0;
  uStack_358 = CONCAT44(uStack_358._4_4_,uStack_398);
  uStack_350 = uStack_390;
  auStack_348[0] = uStack_388;
  uStack_340 = uStack_380;
  auStack_338[0] = uStack_378;
  uStack_330 = uStack_370;
  auStack_328[0] = uStack_368;
  uStack_320 = *(undefined8 *)(param_1 + 0x40);
  uStack_310 = *(undefined8 *)(param_1 + 0x50);
  uStack_300 = *(undefined8 *)(param_1 + 0x90);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001099f0e48(&uStack_3e0,param_1 + 0x3d0);
  uStack_298 = *(undefined4 *)(param_1 + 0x68);
  uStack_288 = *(undefined4 *)(param_1 + 0x78);
  uStack_278 = *(undefined4 *)(param_1 + 0xb8);
  uStack_268 = *(undefined4 *)(param_1 + 0xa8);
  uStack_2e0 = uStack_3e0;
  uStack_2d8 = uStack_3d8;
  uStack_2d0 = uStack_3d0;
  uStack_2c8 = uStack_3c8;
  uStack_2c0 = uStack_3c0;
  uStack_2b8 = uStack_3b8;
  uStack_2b0 = uStack_3b0;
  uStack_2a8 = uStack_3a8;
  uStack_2a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_290 = *(undefined8 *)(param_1 + 0x70);
  uStack_280 = *(undefined8 *)(param_1 + 0xb0);
  uStack_270 = *(undefined8 *)(param_1 + 0xa0);
  func_0x0001099f0e48(&uStack_420,param_1 + 0x400);
  uStack_218 = *(undefined4 *)(param_1 + 0x48);
  uStack_208 = *(undefined4 *)(param_1 + 0x58);
  uStack_1f8 = *(undefined4 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined4 *)(param_1 + 0x78);
  uStack_260 = uStack_420;
  uStack_258 = uStack_418;
  uStack_250 = uStack_410;
  uStack_248 = uStack_408;
  uStack_240 = uStack_400;
  uStack_238 = uStack_3f8;
  uStack_230 = uStack_3f0;
  uStack_228 = uStack_3e8;
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  func_0x0001099f0e48(&uStack_460,param_1 + 0x410);
  uStack_198 = *(undefined4 *)(param_1 + 0x88);
  uStack_188 = *(undefined4 *)(param_1 + 0x98);
  uStack_178 = *(undefined4 *)(param_1 + 0xa8);
  uStack_168 = *(undefined4 *)(param_1 + 0xb8);
  uStack_1e0 = uStack_460;
  uStack_1d8 = uStack_458;
  uStack_1d0 = uStack_450;
  uStack_1c8 = uStack_448;
  uStack_1c0 = uStack_440;
  uStack_1b8 = uStack_438;
  uStack_1b0 = uStack_430;
  uStack_1a8 = uStack_428;
  uStack_1a0 = *(undefined8 *)(param_1 + 0x80);
  uStack_190 = *(undefined8 *)(param_1 + 0x90);
  uStack_180 = *(undefined8 *)(param_1 + 0xa0);
  uStack_170 = *(undefined8 *)(param_1 + 0xb0);
  func_0x0001099f0e48(&uStack_4a0,param_1 + 0x3e0);
  uStack_118 = *(undefined4 *)(param_1 + 0x48);
  uStack_108 = *(undefined4 *)(param_1 + 0x78);
  uStack_f8 = *(undefined4 *)(param_1 + 0xb8);
  uStack_e8 = *(undefined4 *)(param_1 + 0x88);
  uStack_160 = uStack_4a0;
  uStack_158 = uStack_498;
  uStack_150 = uStack_490;
  uStack_148 = uStack_488;
  uStack_140 = uStack_480;
  uStack_138 = uStack_478;
  uStack_130 = uStack_470;
  uStack_128 = uStack_468;
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001099f0e48(&uStack_4e0,param_1 + 0x3f0);
  lVar3 = 0;
  uStack_e0 = uStack_4e0;
  uStack_d8 = uStack_4d8;
  uStack_d0 = uStack_4d0;
  uStack_c8 = uStack_4c8;
  uStack_c0 = uStack_4c0;
  uStack_b8 = uStack_4b8;
  uStack_b0 = uStack_4b0;
  uStack_a8 = uStack_4a8;
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  uStack_98 = *(undefined4 *)(param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = *(undefined4 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0xa0);
  uStack_78 = *(undefined4 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined4 *)(param_1 + 0x98);
  do {
    lVar2 = param_1 + lVar3;
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)((long)&uStack_360 + lVar3);
    *(undefined4 *)(lVar2 + 200) = *(undefined4 *)((long)&uStack_358 + lVar3);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)((long)auStack_348 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)((long)auStack_348 + lVar3);
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)((long)auStack_338 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)((long)auStack_338 + lVar3);
    *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)((long)auStack_328 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xf8) = *(undefined4 *)((long)auStack_328 + lVar3);
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)((long)auStack_318 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)((long)auStack_318 + lVar3);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)((long)auStack_308 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)((long)auStack_308 + lVar3);
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)((long)auStack_2f8 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x128) = *(undefined4 *)((long)auStack_2f8 + lVar3);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)((long)auStack_2e8 + lVar3 + -8);
    puVar1 = (undefined4 *)((long)auStack_2e8 + lVar3);
    lVar3 = lVar3 + 0x80;
    *(undefined4 *)(lVar2 + 0x138) = *puVar1;
  } while (lVar3 != 0x300);
  return param_1;
}



/* Entry: 1099f10d4; end: 1099f175f;  */

long FUN_1099f10d4(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  undefined8 uStack_320;
  undefined4 auStack_318 [2];
  undefined8 uStack_310;
  undefined4 auStack_308 [2];
  undefined8 uStack_300;
  undefined4 auStack_2f8 [2];
  undefined8 uStack_2f0;
  undefined4 auStack_2e8 [2];
  undefined8 uStack_2e0;
  undefined4 auStack_2d8 [2];
  undefined8 uStack_2d0;
  undefined4 auStack_2c8 [2];
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x000109a15944();
  lVar3 = 0;
  do {
    lVar2 = param_1 + lVar3;
    uStack_340 = 0;
    uStack_338 = 0;
    func_0x0001099f0e48(lVar2 + 0xc0,&uStack_340);
    *(undefined8 *)(lVar2 + 0x128) = 0;
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0x300);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0x3f80000000000000;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  uVar20 = param_2[5];
  uVar18 = param_2[4];
  fVar5 = (float)((ulong)param_2[6] >> 0x20);
  fVar4 = (float)param_2[6];
  fVar8 = (float)*param_2;
  fVar21 = fVar8 + fVar4;
  fVar6 = (float)param_2[7];
  fVar9 = (float)param_2[1];
  fVar22 = fVar9 + fVar6;
  fVar7 = (float)((ulong)param_2[7] >> 0x20);
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar23 = SQRT((fVar10 + fVar5) * (fVar10 + fVar5) + fVar21 * fVar21 + fVar22 * fVar22);
  fVar8 = fVar4 - fVar8;
  fVar9 = fVar6 - fVar9;
  fVar16 = SQRT((fVar5 - fVar10) * (fVar5 - fVar10) + fVar8 * fVar8 + fVar9 * fVar9);
  fVar13 = (float)((ulong)param_2[2] >> 0x20);
  fVar12 = (float)param_2[2];
  fVar24 = fVar12 + fVar4;
  fVar14 = (float)param_2[3];
  fVar25 = fVar14 + fVar6;
  fVar15 = (float)((ulong)param_2[3] >> 0x20);
  fVar26 = SQRT((fVar13 + fVar5) * (fVar13 + fVar5) + fVar24 * fVar24 + fVar25 * fVar25);
  fVar12 = fVar4 - fVar12;
  fVar14 = fVar6 - fVar14;
  fVar17 = SQRT((fVar5 - fVar13) * (fVar5 - fVar13) + fVar12 * fVar12 + fVar14 * fVar14);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  *(ulong *)(param_1 + 0x3c8) = CONCAT44((fVar11 + fVar7) / fVar23,fVar22 / fVar23);
  *(ulong *)(param_1 + 0x3c0) = CONCAT44((fVar10 + fVar5) / fVar23,fVar21 / fVar23);
  *(ulong *)(param_1 + 0x3d8) = CONCAT44((fVar7 - fVar11) / fVar16,fVar9 / fVar16);
  *(ulong *)(param_1 + 0x3d0) = CONCAT44((fVar5 - fVar10) / fVar16,fVar8 / fVar16);
  *(ulong *)(param_1 + 1000) = CONCAT44((fVar7 - fVar15) / fVar17,fVar14 / fVar17);
  *(ulong *)(param_1 + 0x3e0) = CONCAT44((fVar5 - fVar13) / fVar17,fVar12 / fVar17);
  *(ulong *)(param_1 + 0x3f8) = CONCAT44((fVar15 + fVar7) / fVar26,fVar25 / fVar26);
  *(ulong *)(param_1 + 0x3f0) = CONCAT44((fVar13 + fVar5) / fVar26,fVar24 / fVar26);
  fVar11 = (float)uVar18;
  fVar8 = fVar11 + fVar4;
  fVar12 = (float)uVar20;
  fVar10 = fVar12 + fVar6;
  fVar13 = (float)((ulong)uVar20 >> 0x20);
  fVar9 = SQRT((fVar19 + fVar5) * (fVar19 + fVar5) + fVar8 * fVar8 + fVar10 * fVar10);
  *(ulong *)(param_1 + 0x408) = CONCAT44((fVar13 + fVar7) / fVar9,fVar10 / fVar9);
  *(ulong *)(param_1 + 0x400) = CONCAT44((fVar19 + fVar5) / fVar9,fVar8 / fVar9);
  fVar4 = fVar4 - fVar11;
  fVar6 = fVar6 - fVar12;
  fVar8 = SQRT((fVar5 - fVar19) * (fVar5 - fVar19) + fVar4 * fVar4 + fVar6 * fVar6);
  *(ulong *)(param_1 + 0x418) = CONCAT44((fVar7 - fVar13) / fVar8,fVar6 / fVar8);
  *(ulong *)(param_1 + 0x410) = CONCAT44((fVar5 - fVar19) / fVar8,fVar4 / fVar8);
  FUN_1099f1760(&uStack_340,param_1 + 0x400,param_1 + 0x3c0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x40) = uStack_340;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x400,param_1 + 0x3c0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x50) = uStack_340;
  *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x400,param_1 + 0x3d0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x60) = uStack_340;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x400,param_1 + 0x3d0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x70) = uStack_340;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x410,param_1 + 0x3c0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x80) = uStack_340;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x410,param_1 + 0x3c0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x90) = uStack_340;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x410,param_1 + 0x3d0,param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0xa0) = uStack_340;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_338;
  FUN_1099f1760(&uStack_340,param_1 + 0x410,param_1 + 0x3d0,param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0xb0) = uStack_340;
  *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_338;
  func_0x0001099f0e48(&uStack_380,param_1 + 0x3c0);
  auStack_2f8[0] = *(undefined4 *)(param_1 + 0x48);
  auStack_2e8[0] = *(undefined4 *)(param_1 + 0x58);
  auStack_2d8[0] = *(undefined4 *)(param_1 + 0x98);
  auStack_2c8[0] = *(undefined4 *)(param_1 + 0x88);
  uStack_340 = uStack_380;
  uStack_338 = CONCAT44(uStack_338._4_4_,uStack_378);
  uStack_330 = uStack_370;
  auStack_328[0] = uStack_368;
  uStack_320 = uStack_360;
  auStack_318[0] = uStack_358;
  uStack_310 = uStack_350;
  auStack_308[0] = uStack_348;
  uStack_300 = *(undefined8 *)(param_1 + 0x40);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001099f0e48(&uStack_3c0,param_1 + 0x3d0);
  uStack_278 = *(undefined4 *)(param_1 + 0x68);
  uStack_268 = *(undefined4 *)(param_1 + 0x78);
  uStack_258 = *(undefined4 *)(param_1 + 0xb8);
  uStack_248 = *(undefined4 *)(param_1 + 0xa8);
  uStack_2c0 = uStack_3c0;
  uStack_2b8 = uStack_3b8;
  uStack_2b0 = uStack_3b0;
  uStack_2a8 = uStack_3a8;
  uStack_2a0 = uStack_3a0;
  uStack_298 = uStack_398;
  uStack_290 = uStack_390;
  uStack_288 = uStack_388;
  uStack_280 = *(undefined8 *)(param_1 + 0x60);
  uStack_270 = *(undefined8 *)(param_1 + 0x70);
  uStack_260 = *(undefined8 *)(param_1 + 0xb0);
  uStack_250 = *(undefined8 *)(param_1 + 0xa0);
  func_0x0001099f0e48(&uStack_400,param_1 + 0x400);
  uStack_1f8 = *(undefined4 *)(param_1 + 0x48);
  uStack_1e8 = *(undefined4 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined4 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined4 *)(param_1 + 0x78);
  uStack_240 = uStack_400;
  uStack_238 = uStack_3f8;
  uStack_230 = uStack_3f0;
  uStack_228 = uStack_3e8;
  uStack_220 = uStack_3e0;
  uStack_218 = uStack_3d8;
  uStack_210 = uStack_3d0;
  uStack_208 = uStack_3c8;
  uStack_200 = *(undefined8 *)(param_1 + 0x40);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
  func_0x0001099f0e48(&uStack_440,param_1 + 0x410);
  uStack_178 = *(undefined4 *)(param_1 + 0x88);
  uStack_168 = *(undefined4 *)(param_1 + 0x98);
  uStack_158 = *(undefined4 *)(param_1 + 0xa8);
  uStack_148 = *(undefined4 *)(param_1 + 0xb8);
  uStack_1c0 = uStack_440;
  uStack_1b8 = uStack_438;
  uStack_1b0 = uStack_430;
  uStack_1a8 = uStack_428;
  uStack_1a0 = uStack_420;
  uStack_198 = uStack_418;
  uStack_190 = uStack_410;
  uStack_188 = uStack_408;
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  func_0x0001099f0e48(&uStack_480,param_1 + 0x3e0);
  uStack_f8 = *(undefined4 *)(param_1 + 0x48);
  uStack_e8 = *(undefined4 *)(param_1 + 0x78);
  uStack_d8 = *(undefined4 *)(param_1 + 0xb8);
  uStack_c8 = *(undefined4 *)(param_1 + 0x88);
  uStack_140 = uStack_480;
  uStack_138 = uStack_478;
  uStack_130 = uStack_470;
  uStack_128 = uStack_468;
  uStack_120 = uStack_460;
  uStack_118 = uStack_458;
  uStack_110 = uStack_450;
  uStack_108 = uStack_448;
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001099f0e48(&uStack_4c0,param_1 + 0x3f0);
  lVar3 = 0;
  uStack_c0 = uStack_4c0;
  uStack_b8 = uStack_4b8;
  uStack_b0 = uStack_4b0;
  uStack_a8 = uStack_4a8;
  uStack_a0 = uStack_4a0;
  uStack_98 = uStack_498;
  uStack_90 = uStack_490;
  uStack_88 = uStack_488;
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined4 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined4 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined4 *)(param_1 + 0xa8);
  uStack_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_48 = *(undefined4 *)(param_1 + 0x98);
  do {
    lVar2 = param_1 + lVar3;
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)((long)&uStack_340 + lVar3);
    *(undefined4 *)(lVar2 + 200) = *(undefined4 *)((long)&uStack_338 + lVar3);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)((long)auStack_328 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)((long)auStack_328 + lVar3);
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)((long)auStack_318 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)((long)auStack_318 + lVar3);
    *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)((long)auStack_308 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0xf8) = *(undefined4 *)((long)auStack_308 + lVar3);
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)((long)auStack_2f8 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)((long)auStack_2f8 + lVar3);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)((long)auStack_2e8 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)((long)auStack_2e8 + lVar3);
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)((long)auStack_2d8 + lVar3 + -8);
    *(undefined4 *)(lVar2 + 0x128) = *(undefined4 *)((long)auStack_2d8 + lVar3);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)((long)auStack_2c8 + lVar3 + -8);
    puVar1 = (undefined4 *)((long)auStack_2c8 + lVar3);
    lVar3 = lVar3 + 0x80;
    *(undefined4 *)(lVar2 + 0x138) = *puVar1;
  } while (lVar3 != 0x300);
  return param_1;
}



/* Entry: 1099f1760; end: 1099f1843;  */

void FUN_1099f1760(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar4 = *param_2;
  fVar5 = param_2[3];
  fVar6 = *param_3;
  fVar7 = param_3[3];
  fVar8 = *param_4;
  fVar9 = param_4[3];
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_3 + 1);
  fVar12 = (float)*(undefined8 *)(param_4 + 1);
  fVar13 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
  fVar14 = fVar6 * fVar12 - fVar8 * fVar10;
  fVar15 = fVar10 * fVar13 - fVar11 * fVar12;
  fVar16 = fVar11 * fVar8 - fVar6 * fVar13;
  fVar1 = (float)*(undefined8 *)(param_2 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar2 = fVar3 * fVar14 + fVar4 * fVar15 + fVar1 * fVar16;
  *param_1 = CONCAT44(((-fVar16 * fVar5 - (fVar4 * fVar13 - fVar3 * fVar8) * fVar7) -
                      (fVar3 * fVar6 - fVar4 * fVar11) * fVar9) / fVar2,
                      ((-fVar15 * fVar5 - (fVar3 * fVar12 - fVar1 * fVar13) * fVar7) -
                      (fVar1 * fVar11 - fVar3 * fVar10) * fVar9) / fVar2);
  *(float *)(param_1 + 1) =
       ((-(fVar14 * fVar5) - fVar7 * (fVar8 * fVar1 - fVar4 * fVar12)) -
       (fVar4 * fVar10 - fVar6 * fVar1) * fVar9) / fVar2;
  return;
}



/* Entry: 1099f1844; end: 1099f1a37;  */

void FUN_1099f1844(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lVar5 = 0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_ac._4_4_ = *(undefined4 *)(param_2 + 1);
  _auStack_b0 = *param_2;
  auStack_ac._8_4_ = 0;
  uStack_a0 = *param_2;
  uVar8 = *(uint *)(param_2 + 3);
  uStack_98 = (ulong)uVar8;
  puVar4 = param_2 + 2;
  _uStack_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)param_2);
  uStack_88 = (ulong)(uint)auStack_ac._4_4_;
  _uStack_80 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)param_2);
  uStack_78 = (ulong)uVar8;
  _uStack_70 = CONCAT44(*(undefined4 *)((long)param_2 + 4),*(undefined4 *)puVar4);
  uStack_68 = (ulong)(uint)auStack_ac._4_4_;
  _uStack_60 = CONCAT44(*(undefined4 *)((long)param_2 + 4),*(undefined4 *)puVar4);
  uStack_58 = (ulong)uVar8;
  uStack_50 = *puVar4;
  uStack_48 = (ulong)(uint)auStack_ac._4_4_;
  uStack_40 = *puVar4;
  uStack_38 = (ulong)uVar8;
  do {
    *(undefined8 *)((long)&uStack_108 + lVar5) = 0;
    *(undefined8 *)(auStack_110 + lVar5) = 0x3f80000000000000;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x60);
  lVar5 = 0;
  uStack_108 = *(undefined8 *)(param_1 + 0x3c8);
  _auStack_110 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_100 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_e8 = *(undefined8 *)(param_1 + 1000);
  uStack_f0 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_e0 = *(undefined8 *)(param_1 + 0x3f0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x408);
  uStack_d0 = *(undefined8 *)(param_1 + 0x400);
  uStack_b8 = *(undefined8 *)(param_1 + 0x418);
  uStack_c0 = *(undefined8 *)(param_1 + 0x410);
  do {
    lVar7 = 0;
    lVar6 = lVar5 * 0x10;
    bVar1 = true;
    do {
      bVar1 = (bool)(bVar1 & *(float *)((long)&uStack_108 + lVar6 + 4) +
                             *(float *)(auStack_110 + lVar6) * *(float *)(auStack_b0 + lVar7) +
                             (float)*(undefined8 *)(auStack_110 + lVar6 + 4) *
                             (float)*(undefined8 *)(auStack_b0 + lVar7 + 4) +
                             (float)((ulong)*(undefined8 *)(auStack_110 + lVar6 + 4) >> 0x20) *
                             (float)((ulong)*(undefined8 *)(auStack_b0 + lVar7 + 4) >> 0x20) < 0.0);
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x80);
    if (bVar1) goto LAB_1099f1a08;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  lVar5 = 0;
  param_1 = param_1 + 0x40;
  lVar6 = param_1;
  do {
    lVar7 = 0;
    bVar1 = true;
    do {
      bVar1 = (bool)(bVar1 & *(float *)(lVar6 + lVar7) < *(float *)((long)param_2 + lVar5 * 4));
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x80);
    if (bVar1) goto LAB_1099f1a08;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 4;
  } while (lVar5 != 3);
  lVar5 = 0;
  do {
    lVar6 = 0;
    puVar2 = (undefined4 *)0x1;
    do {
      uVar8 = (uint)puVar2 &
              (uint)(*(float *)((long)puVar4 + lVar5 * 4) < *(float *)(param_1 + lVar6));
      puVar2 = (undefined4 *)(ulong)uVar8;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x80);
    lVar5 = lVar5 + 1;
    if (lVar5 == 3) {
      uVar8 = 1;
    }
    param_1 = param_1 + 4;
  } while (uVar8 != 1);
LAB_1099f1a0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined4 **)(puVar2 + 2);
  if (puVar3 < *(undefined4 **)(puVar2 + 4)) {
    *puVar3 = *(undefined4 *)param_2;
    puVar3[1] = *(undefined4 *)((long)param_2 + 4);
    puVar3[2] = *(undefined4 *)(param_2 + 1);
    puVar3 = puVar3 + 4;
  }
  else {
    puVar3 = puVar2;
    FUN_1099f1c28();
  }
  *(undefined4 **)(puVar2 + 2) = puVar3;
  return;
LAB_1099f1a08:
  puVar2 = (undefined4 *)0x1;
  goto LAB_1099f1a0c;
}



/* Entry: 1099f1a38; end: 1099f1a8b;  */

void FUN_1099f1a38(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1 = puVar1 + 4;
  }
  else {
    puVar1 = param_1;
    FUN_1099f1c28();
  }
  *(undefined4 **)(param_1 + 2) = puVar1;
  return;
}



/* Entry: 1099f1a8c; end: 1099f1c27;  */

long * FUN_1099f1a8c(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long *plVar2;
  float fVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar19 [16];
  long *plStack_138;
  long *plStack_130;
  long *plStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *plStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  int aiStack_a0 [8];
  undefined8 auStack_80 [5];
  long lStack_58;
  
  lVar4 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2 + 8;
  uVar15 = *param_3;
  uVar10 = param_3[1];
  uVar13 = *(undefined8 *)((long)param_3 + 4);
  fVar3 = *(float *)((long)param_3 + 0xc);
  pfVar6 = (float *)(param_2 + 0xf);
  auVar16 = NEON_fmov(0x3f800000,4);
  do {
    fVar14 = (float)uVar15;
    fVar12 = (float)uVar13;
    fVar18 = (float)uVar10;
    auVar19._0_4_ = (pfVar6[-0xe] * fVar14 + pfVar6[-0xd] * fVar12 + pfVar6[-0xc] * fVar18) - fVar3;
    auVar19._4_4_ = (pfVar6[-10] * fVar14 + pfVar6[-9] * fVar12 + pfVar6[-8] * fVar18) - fVar3;
    auVar19._8_4_ = (pfVar6[-6] * fVar14 + pfVar6[-5] * fVar12 + pfVar6[-4] * fVar18) - fVar3;
    auVar19._12_4_ = (pfVar6[-2] * fVar14 + pfVar6[-1] * fVar12 + *pfVar6 * fVar18) - fVar3;
    auVar1._8_4_ = 0x7fffffff;
    auVar1._0_8_ = 0x7fffffff7fffffff;
    auVar1._12_4_ = 0x7fffffff;
    auVar19 = auVar19 ^ (auVar19 ^ auVar16) & auVar1;
    *(int *)((long)aiStack_a0 + lVar4 + 8) = (int)auVar19._8_4_;
    *(int *)((long)aiStack_a0 + lVar4 + 0xc) = (int)auVar19._12_4_;
    *(int *)((long)aiStack_a0 + lVar4) = (int)auVar19._0_4_;
    *(int *)((long)aiStack_a0 + lVar4 + 4) = (int)auVar19._4_4_;
    lVar4 = lVar4 + 0x10;
    pfVar6 = pfVar6 + 0x10;
  } while (lVar4 != 0x20);
  lVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (aiStack_a0[*(uint *)(&UNK_10e0298c0 + lVar4)] *
        aiStack_a0[*(uint *)(&UNK_10e029890 + lVar4)] == -1) {
      func_0x0001099f0f80(auStack_80,param_4,plVar8 + (ulong)*(uint *)(&UNK_10e029890 + lVar4) * 2,
                          plVar8 + (ulong)*(uint *)(&UNK_10e0298c0 + lVar4) * 2);
      param_3 = auStack_80;
      param_2 = param_1;
      FUN_1099f1a38();
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    plVar2 = param_2;
    __Unwind_Resume();
    pcStack_a8 = FUN_1099f1c28;
    lVar9 = plVar2[1] - *plVar2;
    uVar11 = (lVar9 >> 4) + 1;
    lStack_d0 = lVar4;
    plStack_c8 = plVar8;
    plStack_c0 = param_2;
    plStack_b8 = param_1;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (uVar11 >> 0x3c == 0) {
      uVar5 = plVar2[2] - *plVar2;
      uVar7 = (long)uVar5 >> 3;
      if (uVar7 <= uVar11) {
        uVar7 = uVar11;
      }
      if (0x7fffffffffffffef < uVar5) {
        uVar7 = 0xfffffffffffffff;
      }
      plVar8 = plVar2;
      plStack_d8 = plVar2;
      FUN_1099f10a0();
      puStack_f0 = (undefined4 *)((long)plVar8 + lVar9);
      plStack_e0 = plVar8 + uVar7 * 2;
      *puStack_f0 = *(undefined4 *)param_3;
      puStack_f0[1] = *(undefined4 *)((long)param_3 + 4);
      puStack_f0[2] = *(undefined4 *)(param_3 + 1);
      puStack_e8 = puStack_f0 + 4;
      plStack_f8 = plVar8;
      func_0x0001099f100c(plVar2,&plStack_f8);
      plVar8 = (long *)plVar2[1];
      if (puStack_e8 != puStack_f0) {
        puStack_e8 = (undefined4 *)
                     ((long)puStack_e8 +
                     ((long)puStack_f0 + (0xf - (long)puStack_e8) & 0xfffffffffffffff0U));
      }
      if (plStack_f8 != (long *)0x0) {
        __ZdlPv();
      }
      return plVar8;
    }
    FUN_1099f108c();
    if (puStack_e8 != puStack_f0) {
      puStack_e8 = (undefined4 *)
                   ((long)puStack_e8 +
                   (((long)puStack_f0 - (long)puStack_e8) + 0xfU & 0xfffffffffffffff0));
    }
    if (plStack_f8 != (long *)0x0) {
      __ZdlPv();
    }
    plVar8 = plVar2;
    __Unwind_Resume();
    pcStack_108 = FUN_1099f1d48;
    if (param_3 != (undefined8 *)0x0) {
      plStack_120 = param_2;
      plStack_118 = plVar2;
      ppuStack_110 = &puStack_b0;
      FUN_1099f1a8c(&plStack_138,param_3,plVar8,plVar8 + 2);
      func_0x0001099f0ed4(plVar8 + 2,plStack_138,(long)plStack_130 - (long)plStack_138 >> 4);
      if ((long)plStack_130 - (long)plStack_138 == 0) {
        uVar11 = 0xff7fffffff7fffff;
        uVar7 = 0x7f7fffff7f7fffff;
        fVar3 = 3.4028235e+38;
        fVar18 = -3.4028235e+38;
      }
      else {
        lVar4 = (long)plStack_130 - (long)plStack_138 >> 4;
        uVar11 = 0xff7fffffff7fffff;
        uVar7 = 0x7f7fffff7f7fffff;
        fVar3 = 3.4028235e+38;
        pfVar6 = (float *)(plStack_138 + 1);
        fVar12 = -3.4028235e+38;
        do {
          uVar5 = *(ulong *)(pfVar6 + -2);
          fVar17 = (float)(uVar5 >> 0x20);
          uVar7 = uVar7 ^ (uVar7 ^ uVar5) &
                          CONCAT44(-(uint)(fVar17 < (float)(uVar7 >> 0x20)),
                                   -(uint)((float)uVar5 < (float)uVar7));
          fVar18 = *pfVar6;
          fVar14 = fVar18;
          if (fVar3 <= fVar18) {
            fVar14 = fVar3;
          }
          fVar3 = fVar14;
          uVar11 = uVar11 ^ (uVar11 ^ uVar5) &
                            CONCAT44(-(uint)((float)(uVar11 >> 0x20) < fVar17),
                                     -(uint)((float)uVar11 < (float)uVar5));
          if (fVar18 <= fVar12) {
            fVar18 = fVar12;
          }
          lVar4 = lVar4 + -1;
          pfVar6 = pfVar6 + 4;
          fVar12 = fVar18;
        } while (lVar4 != 0);
      }
      if (fVar3 <= *(float *)(plVar8 + 0xb)) {
        fVar3 = *(float *)(plVar8 + 0xb);
      }
      if (*(float *)(plVar8 + 0xd) <= fVar18) {
        fVar18 = *(float *)(plVar8 + 0xd);
      }
      uVar5 = plVar8[10];
      plVar8[10] = uVar7 ^ (uVar7 ^ uVar5) &
                           ~CONCAT44(-(uint)((float)(uVar5 >> 0x20) < (float)(uVar7 >> 0x20)),
                                     -(uint)((float)uVar5 < (float)uVar7));
      *(float *)(plVar8 + 0xb) = fVar3;
      uVar7 = plVar8[0xc];
      plVar8[0xc] = uVar11 ^ (uVar11 ^ uVar7) &
                             ~CONCAT44(-(uint)((float)(uVar11 >> 0x20) < (float)(uVar7 >> 0x20)),
                                       -(uint)((float)uVar11 < (float)uVar7));
      *(float *)(plVar8 + 0xd) = fVar18;
      plVar8 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plStack_130 = plStack_138;
        __ZdlPv();
        plVar8 = plStack_138;
      }
    }
    return plVar8;
  }
  return param_2;
}



/* Entry: 1099f1c28; end: 1099f1d47;  */

long * FUN_1099f1c28(long *param_1,undefined4 *param_2)

{
  float fVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long *plStack_98;
  long *plStack_90;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar7 = (lVar6 >> 4) + 1;
  if (uVar7 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar4 = (long)uVar2 >> 3;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (0x7fffffffffffffef < uVar2) {
      uVar4 = 0xfffffffffffffff;
    }
    plVar5 = param_1;
    plStack_38 = param_1;
    FUN_1099f10a0();
    puStack_50 = (undefined4 *)((long)plVar5 + lVar6);
    plStack_40 = plVar5 + uVar4 * 2;
    *puStack_50 = *param_2;
    puStack_50[1] = param_2[1];
    puStack_50[2] = param_2[2];
    puStack_48 = puStack_50 + 4;
    plStack_58 = plVar5;
    func_0x0001099f100c(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (0xf - (long)puStack_48) & 0xfffffffffffffff0U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar5;
  }
  FUN_1099f108c();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 0xfU & 0xfffffffffffffff0));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_2 != (undefined4 *)0x0) {
    FUN_1099f1a8c(&plStack_98,param_2,param_1,param_1 + 2);
    func_0x0001099f0ed4(param_1 + 2,plStack_98,(long)plStack_90 - (long)plStack_98 >> 4);
    if ((long)plStack_90 - (long)plStack_98 == 0) {
      uVar7 = 0xff7fffffff7fffff;
      uVar4 = 0x7f7fffff7f7fffff;
      fVar1 = 3.4028235e+38;
      fVar11 = -3.4028235e+38;
    }
    else {
      lVar6 = (long)plStack_90 - (long)plStack_98 >> 4;
      uVar7 = 0xff7fffffff7fffff;
      uVar4 = 0x7f7fffff7f7fffff;
      pfVar3 = (float *)(plStack_98 + 1);
      fVar8 = 3.4028235e+38;
      fVar9 = -3.4028235e+38;
      do {
        uVar2 = *(ulong *)(pfVar3 + -2);
        fVar10 = (float)(uVar2 >> 0x20);
        uVar4 = uVar4 ^ (uVar4 ^ uVar2) &
                        CONCAT44(-(uint)(fVar10 < (float)(uVar4 >> 0x20)),
                                 -(uint)((float)uVar2 < (float)uVar4));
        fVar11 = *pfVar3;
        fVar1 = fVar11;
        if (fVar8 <= fVar11) {
          fVar1 = fVar8;
        }
        uVar7 = uVar7 ^ (uVar7 ^ uVar2) &
                        CONCAT44(-(uint)((float)(uVar7 >> 0x20) < fVar10),
                                 -(uint)((float)uVar7 < (float)uVar2));
        if (fVar11 <= fVar9) {
          fVar11 = fVar9;
        }
        lVar6 = lVar6 + -1;
        pfVar3 = pfVar3 + 4;
        fVar8 = fVar1;
        fVar9 = fVar11;
      } while (lVar6 != 0);
    }
    if (fVar1 <= *(float *)(param_1 + 0xb)) {
      fVar1 = *(float *)(param_1 + 0xb);
    }
    if (*(float *)(param_1 + 0xd) <= fVar11) {
      fVar11 = *(float *)(param_1 + 0xd);
    }
    uVar2 = param_1[10];
    param_1[10] = uVar4 ^ (uVar4 ^ uVar2) &
                          ~CONCAT44(-(uint)((float)(uVar2 >> 0x20) < (float)(uVar4 >> 0x20)),
                                    -(uint)((float)uVar2 < (float)uVar4));
    *(float *)(param_1 + 0xb) = fVar1;
    uVar4 = param_1[0xc];
    param_1[0xc] = uVar7 ^ (uVar7 ^ uVar4) &
                           ~CONCAT44(-(uint)((float)(uVar7 >> 0x20) < (float)(uVar4 >> 0x20)),
                                     -(uint)((float)uVar7 < (float)uVar4));
    *(float *)(param_1 + 0xd) = fVar11;
    param_1 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plStack_90 = plStack_98;
      __ZdlPv();
      param_1 = plStack_98;
    }
  }
  return param_1;
}



/* Entry: 1099f1d48; end: 1099f1e77;  */

void FUN_1099f1d48(long param_1,long param_2)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  long lStack_38;
  long lStack_30;
  
  if (param_2 != 0) {
    FUN_1099f1a8c(&lStack_38,param_2,param_1,param_1 + 0x10);
    FUN_1099f0ed4(param_1 + 0x10,lStack_38,lStack_30 - lStack_38 >> 4);
    if (lStack_30 - lStack_38 == 0) {
      uVar4 = 0xff7fffffff7fffff;
      uVar5 = 0x7f7fffff7f7fffff;
      fVar1 = 3.4028235e+38;
      fVar10 = -3.4028235e+38;
    }
    else {
      lVar2 = lStack_30 - lStack_38 >> 4;
      uVar4 = 0xff7fffffff7fffff;
      uVar5 = 0x7f7fffff7f7fffff;
      pfVar3 = (float *)(lStack_38 + 8);
      fVar6 = 3.4028235e+38;
      fVar7 = -3.4028235e+38;
      do {
        uVar8 = *(ulong *)(pfVar3 + -2);
        fVar9 = (float)(uVar8 >> 0x20);
        uVar5 = uVar5 ^ (uVar5 ^ uVar8) &
                        CONCAT44(-(uint)(fVar9 < (float)(uVar5 >> 0x20)),
                                 -(uint)((float)uVar8 < (float)uVar5));
        fVar10 = *pfVar3;
        fVar1 = fVar10;
        if (fVar6 <= fVar10) {
          fVar1 = fVar6;
        }
        uVar4 = uVar4 ^ (uVar4 ^ uVar8) &
                        CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fVar9),
                                 -(uint)((float)uVar4 < (float)uVar8));
        if (fVar10 <= fVar7) {
          fVar10 = fVar7;
        }
        lVar2 = lVar2 + -1;
        pfVar3 = pfVar3 + 4;
        fVar6 = fVar1;
        fVar7 = fVar10;
      } while (lVar2 != 0);
    }
    if (fVar1 <= *(float *)(param_1 + 0x58)) {
      fVar1 = *(float *)(param_1 + 0x58);
    }
    if (*(float *)(param_1 + 0x68) <= fVar10) {
      fVar10 = *(float *)(param_1 + 0x68);
    }
    uVar8 = *(ulong *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) =
         uVar5 ^ (uVar5 ^ uVar8) &
                 ~CONCAT44(-(uint)((float)(uVar8 >> 0x20) < (float)(uVar5 >> 0x20)),
                           -(uint)((float)uVar8 < (float)uVar5));
    *(float *)(param_1 + 0x58) = fVar1;
    uVar5 = *(ulong *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) =
         uVar4 ^ (uVar4 ^ uVar5) &
                 ~CONCAT44(-(uint)((float)(uVar4 >> 0x20) < (float)(uVar5 >> 0x20)),
                           -(uint)((float)uVar4 < (float)uVar5));
    *(float *)(param_1 + 0x68) = fVar10;
    if (lStack_38 != 0) {
      lStack_30 = lStack_38;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1099f1e78; end: 1099f1f67;  */

undefined4 *
FUN_1099f1e78(undefined4 *param_1,undefined4 *param_2,long param_3,long param_4,undefined8 param_5)

{
  float fVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  func_0x0001099f0e48(param_1 + 4);
  uVar3 = 0xff7fffffff7fffff;
  uVar4 = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x14) = 0x7f7fffff7f7fffff;
  fVar1 = 3.4028235e+38;
  param_1[0x16] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x18) = 0xff7fffffff7fffff;
  fVar9 = -3.4028235e+38;
  param_1[0x1a] = 0xff7fffff;
  if (param_4 != 0) {
    uVar4 = 0x7f7fffff7f7fffff;
    pfVar2 = (float *)(param_3 + 8);
    fVar5 = 3.4028235e+38;
    fVar6 = -3.4028235e+38;
    do {
      uVar7 = *(ulong *)(pfVar2 + -2);
      fVar8 = (float)(uVar7 >> 0x20);
      uVar4 = uVar4 ^ (uVar4 ^ uVar7) &
                      CONCAT44(-(uint)(fVar8 < (float)(uVar4 >> 0x20)),
                               -(uint)((float)uVar7 < (float)uVar4));
      fVar9 = *pfVar2;
      fVar1 = fVar9;
      if (fVar5 <= fVar9) {
        fVar1 = fVar5;
      }
      uVar3 = uVar3 ^ (uVar3 ^ uVar7) &
                      CONCAT44(-(uint)((float)(uVar3 >> 0x20) < fVar8),
                               -(uint)((float)uVar3 < (float)uVar7));
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
      param_4 = param_4 + -1;
      pfVar2 = pfVar2 + 4;
      fVar5 = fVar1;
      fVar6 = fVar9;
    } while (param_4 != 0);
  }
  *(ulong *)(param_1 + 0x14) = uVar4;
  param_1[0x16] = fVar1;
  *(ulong *)(param_1 + 0x18) = uVar3;
  param_1[0x1a] = fVar9;
  FUN_1099f1d48(param_1,param_5);
  return param_1;
}



/* Entry: 1099f1f68; end: 1099f2667;  */

void FUN_1099f1f68(float *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined8 *extraout_x8;
  float fVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  byte bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 uStack_2b0;
  float fStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [30];
  undefined8 uStack_220;
  float afStack_218 [14];
  undefined8 uStack_160;
  float fStack_158;
  int aiStack_150 [8];
  float fStack_130;
  undefined8 uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar4 = param_2;
  if (param_2[3] == 0.0) {
    uVar3 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    if (param_1[0x1a] < param_1[0x16]) {
      uVar6 = 0;
    }
    if ((int)(-(uint)((float)*(undefined8 *)(param_1 + 0x14) <=
                      (float)*(undefined8 *)(param_1 + 0x18) &&
                     (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20)) & uVar6) < 0) {
      lVar9 = 0;
      uVar3 = 0;
      fStack_130 = *param_3;
      uStack_12c._0_4_ = param_3[1];
      uStack_12c._4_4_ = param_3[2];
      fStack_120 = param_3[4];
      fStack_10c = param_3[5];
      fStack_11c = (float)uStack_12c;
      fStack_118 = uStack_12c._4_4_;
      fStack_110 = fStack_130;
      fStack_108 = uStack_12c._4_4_;
      fStack_100 = fStack_120;
      fStack_fc = fStack_10c;
      fStack_f8 = uStack_12c._4_4_;
      fStack_e8 = param_3[6];
      fStack_f0 = fStack_130;
      fStack_ec = (float)uStack_12c;
      fStack_e0 = fStack_120;
      fStack_dc = (float)uStack_12c;
      fStack_d8 = fStack_e8;
      fStack_d0 = fStack_130;
      fStack_cc = fStack_10c;
      uVar14 = 0xff7fffffff7fffff;
      uVar18 = 0x7f7fffff7f7fffff;
      pfVar8 = &fStack_130;
      fStack_c8 = fStack_e8;
      fStack_c0 = fStack_120;
      fStack_bc = fStack_10c;
      fVar20 = -3.4028235e+38;
      fVar21 = 3.4028235e+38;
      fStack_b8 = fStack_e8;
      do {
        fVar22 = (*param_1 * *pfVar8 +
                  (float)*(undefined8 *)(param_1 + 1) * (float)*(undefined8 *)(pfVar8 + 1) +
                 (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20)) - param_1[3];
        iVar5 = (int)(float)((uint)fVar22 ^ ((uint)fVar22 ^ 0x3f800000) & 0x7fffffff);
        *(int *)((long)aiStack_150 + lVar9) = iVar5;
        if (-1 < iVar5) {
          uStack_160 = *(undefined8 *)param_2;
          fStack_158 = param_2[2];
          pfVar4 = (float *)&uStack_160;
          param_3 = pfVar8;
          func_0x0001099f0f80(&fStack_b0,param_1 + 4,&uStack_160);
          fVar22 = 0.0;
          if (fVar21 <= 0.0) {
            fVar22 = fVar21;
          }
          fVar21 = fVar22;
          fVar22 = (float)*(undefined8 *)(param_1 + 4) * fStack_b0 +
                   (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fStack_ac +
                   param_1[6] * fStack_a8;
          fVar23 = (float)*(undefined8 *)(param_1 + 8) * fStack_b0 +
                   (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fStack_ac +
                   param_1[10] * fStack_a8;
          uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar23,fVar22)) &
                            CONCAT44(-(uint)(fVar23 < (float)(uVar18 >> 0x20)),
                                     -(uint)(fVar22 < (float)uVar18));
          uVar14 = uVar14 ^ (uVar14 ^ CONCAT44(fVar23,fVar22)) &
                            CONCAT44(-(uint)((float)(uVar14 >> 0x20) < fVar23),
                                     -(uint)((float)uVar14 < fVar22));
          fVar22 = 0.0;
          if (0.0 <= fVar20) {
            fVar22 = fVar20;
          }
          uVar3 = uVar3 + 1;
          fVar20 = fVar22;
        }
        pfVar8 = pfVar8 + 4;
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x20);
      if (uVar3 != 0) {
        if (uVar3 < 8) {
          lVar9 = 0;
          do {
            fVar22 = fVar20;
            if (aiStack_150[*(uint *)(&UNK_10e029920 + lVar9)] *
                aiStack_150[*(uint *)(&UNK_10e0298f0 + lVar9)] == -1) {
              pfVar4 = &fStack_130 + (ulong)*(uint *)(&UNK_10e0298f0 + lVar9) * 4;
              param_3 = &fStack_130 + (ulong)*(uint *)(&UNK_10e029920 + lVar9) * 4;
              func_0x0001099f0f80(&fStack_b0,param_1 + 4,pfVar4);
              fVar22 = 0.0;
              if (fVar21 <= 0.0) {
                fVar22 = fVar21;
              }
              fVar21 = fVar22;
              fVar22 = (float)*(undefined8 *)(param_1 + 4) * fStack_b0 +
                       (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fStack_ac +
                       param_1[6] * fStack_a8;
              fVar23 = (float)*(undefined8 *)(param_1 + 8) * fStack_b0 +
                       (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fStack_ac +
                       param_1[10] * fStack_a8;
              uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar23,fVar22)) &
                                CONCAT44(-(uint)(fVar23 < (float)(uVar18 >> 0x20)),
                                         -(uint)(fVar22 < (float)uVar18));
              uVar14 = uVar14 ^ (uVar14 ^ CONCAT44(fVar23,fVar22)) &
                                CONCAT44(-(uint)((float)(uVar14 >> 0x20) < fVar23),
                                         -(uint)((float)uVar14 < fVar22));
              fVar22 = 0.0;
              if (0.0 <= fVar20) {
                fVar22 = fVar20;
              }
            }
            fVar20 = fVar22;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x30);
        }
        if (fVar21 <= param_1[0x16]) {
          fVar21 = param_1[0x16];
        }
        if (param_1[0x1a] <= fVar20) {
          fVar20 = param_1[0x1a];
        }
        uVar6 = 0xffffffff;
        if (fVar20 < fVar21) {
          uVar6 = 0;
        }
        uVar3 = *(ulong *)(param_1 + 0x14);
        uVar3 = uVar3 ^ (uVar3 ^ uVar18) &
                        CONCAT44(-(uint)((float)(uVar3 >> 0x20) < (float)(uVar18 >> 0x20)),
                                 -(uint)((float)uVar3 < (float)uVar18));
        uVar18 = *(ulong *)(param_1 + 0x18);
        uVar18 = uVar18 ^ (uVar18 ^ uVar14) &
                          CONCAT44(-(uint)((float)(uVar14 >> 0x20) < (float)(uVar18 >> 0x20)),
                                   -(uint)((float)uVar14 < (float)uVar18));
        uVar3 = (ulong)(~(-(uint)((float)uVar3 <= (float)uVar18 &&
                                 (float)(uVar3 >> 0x20) <= (float)(uVar18 >> 0x20)) & uVar6) >> 0x1f
                       );
        goto LAB_1099f2278;
      }
    }
    uVar3 = 1;
  }
LAB_1099f2278:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(param_3 + 0xc);
  uVar19 = *(undefined8 *)(param_3 + 8);
  fVar20 = param_3[0xe];
  fVar21 = param_3[0xf];
  fVar22 = param_3[10];
  fVar23 = param_3[0xb];
  uStack_220._0_4_ = *(undefined4 *)(uVar3 + 0x50);
  uStack_220._4_4_ = *(undefined4 *)(uVar3 + 0x54);
  afStack_218[0] = *(float *)(uVar3 + 0x58);
  afStack_218[2] = *(float *)(uVar3 + 0x60);
  afStack_218[7] = *(float *)(uVar3 + 100);
  afStack_218[3] = (float)uStack_220._4_4_;
  afStack_218[4] = afStack_218[0];
  afStack_218[6] = (float)(undefined4)uStack_220;
  afStack_218[8] = afStack_218[0];
  afStack_218[10] = afStack_218[2];
  afStack_218[0xb] = afStack_218[7];
  afStack_218[0xc] = afStack_218[0];
  func_0x0001099f0f28(uVar3 + 0x10,&uStack_220,4);
  lVar9 = 0;
  do {
    puVar1 = (undefined8 *)((long)afStack_218 + lVar9 + -8);
    fStack_2b8 = *(float *)((long)afStack_218 + lVar9);
    uStack_2c0 = *puVar1;
    fStack_2b4 = 1.0;
    func_0x000109a159c8(&fStack_2a0,pfVar4,&uStack_2c0);
    *puVar1 = CONCAT44(fStack_29c,fStack_2a0);
    *(float *)((long)afStack_218 + lVar9) = afStack_298[0];
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x40);
  lVar9 = 0;
  fVar7 = -3.4028235e+38;
  fStack_29c = 3.4028235e+38;
  fVar12 = fStack_29c;
  fVar13 = -3.4028235e+38;
  fVar15 = fStack_29c;
  fVar10 = -3.4028235e+38;
  do {
    afStack_298[2] = *(float *)((long)afStack_218 + lVar9 + -8);
    afStack_298[7] = *(float *)((long)afStack_218 + lVar9 + -4);
    fStack_2a0 = afStack_298[2];
    if (fVar12 <= afStack_298[2]) {
      fStack_2a0 = fVar12;
    }
    fVar12 = afStack_298[7];
    if (fStack_29c <= afStack_298[7]) {
      fVar12 = fStack_29c;
    }
    fStack_29c = fVar12;
    fVar24 = *(float *)((long)afStack_218 + lVar9);
    fVar12 = fVar24;
    if (fVar15 <= fVar24) {
      fVar12 = fVar15;
    }
    fVar15 = fVar12;
    if (afStack_298[2] <= fVar10) {
      afStack_298[2] = fVar10;
    }
    if (afStack_298[7] <= fVar13) {
      afStack_298[7] = fVar13;
    }
    if (fVar24 <= fVar7) {
      fVar24 = fVar7;
    }
    fVar7 = fVar24;
    lVar9 = lVar9 + 0x10;
    fVar12 = fStack_2a0;
    fVar13 = afStack_298[7];
    fVar10 = afStack_298[2];
  } while (lVar9 != 0x40);
  lVar9 = 0;
  fVar12 = (float)uVar17 + (float)uVar19;
  fVar13 = (float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar19 >> 0x20);
  afStack_298[0x10] =
       -(fVar21 + fVar23) /
       SQRT(fVar12 * fVar12 + fVar13 * fVar13 + (fVar20 + fVar22) * (fVar20 + fVar22));
  afStack_298[0] = afStack_298[0x10];
  if (fVar15 <= afStack_298[0x10]) {
    afStack_298[0] = fVar15;
  }
  afStack_298[3] = fStack_29c;
  afStack_298[4] = afStack_298[0];
  afStack_298[6] = fStack_2a0;
  afStack_298[8] = afStack_298[0];
  afStack_298[10] = afStack_298[2];
  afStack_298[0xb] = afStack_298[7];
  afStack_298[0xc] = afStack_298[0];
  afStack_298[0xe] = fStack_2a0;
  afStack_298[0xf] = fStack_29c;
  if (fVar7 <= afStack_298[0x10]) {
    afStack_298[0x10] = fVar7;
  }
  afStack_298[0x12] = afStack_298[2];
  afStack_298[0x13] = fStack_29c;
  afStack_298[0x14] = afStack_298[0x10];
  afStack_298[0x16] = fStack_2a0;
  afStack_298[0x17] = afStack_298[7];
  afStack_298[0x18] = afStack_298[0x10];
  afStack_298[0x1a] = afStack_298[2];
  afStack_298[0x1b] = afStack_298[7];
  afStack_298[0x1c] = afStack_298[0x10];
  do {
    puVar1 = (undefined8 *)((long)afStack_298 + lVar9 + -8);
    uStack_2d8 = *(undefined4 *)((long)afStack_298 + lVar9);
    uStack_2e0 = *puVar1;
    uStack_2d4 = 0x3f800000;
    func_0x000109a159c8(&uStack_2c0,param_3,&uStack_2e0);
    *puVar1 = CONCAT44((float)((ulong)uStack_2c0 >> 0x20) / fStack_2b4,
                       (float)uStack_2c0 / fStack_2b4);
    *(float *)((long)afStack_298 + lVar9) = fStack_2b8 / fStack_2b4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x80);
  lVar9 = 0;
  auVar11 = ZEXT816(0xff7fffffff7fffff);
  fVar21 = 3.4028235e+38;
  fVar22 = 3.4028235e+38;
  fStack_2b8 = 3.4028235e+38;
  fVar20 = -3.4028235e+38;
  do {
    fVar23 = *(float *)((long)afStack_298 + lVar9);
    fVar12 = fVar23;
    if (fStack_2b8 <= fVar23) {
      fVar12 = fStack_2b8;
    }
    fStack_2b8 = fVar12;
    uVar14 = *(ulong *)((long)afStack_298 + lVar9 + -8);
    fVar12 = (float)(uVar14 >> 0x20);
    iVar5 = -(uint)(fVar12 < fVar22);
    uVar3 = CONCAT44(fVar22,fVar21) ^
            (CONCAT44(fVar22,fVar21) ^ uVar14) &
            CONCAT17((char)((uint)iVar5 >> 0x18),
                     CONCAT16((char)((uint)iVar5 >> 0x10),
                              CONCAT15((char)((uint)iVar5 >> 8),
                                       CONCAT14((char)iVar5,-(uint)((float)uVar14 < fVar21)))));
    fVar21 = (float)uVar3;
    fVar22 = (float)(uVar3 >> 0x20);
    iVar5 = -(uint)(auVar11._4_4_ < fVar12);
    auVar11._0_8_ =
         auVar11._0_8_ ^
         (auVar11._0_8_ ^ uVar14) &
         CONCAT17((char)((uint)iVar5 >> 0x18),
                  CONCAT16((char)((uint)iVar5 >> 0x10),
                           CONCAT15((char)((uint)iVar5 >> 8),
                                    CONCAT14((char)iVar5,-(uint)(auVar11._0_4_ < (float)uVar14)))));
    if (fVar23 <= fVar20) {
      fVar23 = fVar20;
    }
    lVar9 = lVar9 + 0x10;
    fVar20 = fVar23;
  } while (lVar9 != 0x80);
  uVar6 = 0xffffffff;
  bVar16 = 0xff;
  if (fVar22 < 1.0) {
    bVar16 = 0;
  }
  if (fStack_2b8 <= fVar23) {
    uVar6 = 0;
  }
  uStack_2d0 = NEON_fmov(0x3f800000,4);
  fVar20 = (float)auVar11._0_8_;
  fVar12 = (float)(auVar11._0_8_ >> 0x20);
  uVar2 = (uint)bVar16 << 0x18;
  if ((byte)((-((float)uStack_2d0 <= fVar21) & 1U) +
             (-((float)((ulong)uStack_2d0 >> 0x20) <= fStack_2b8) & 2U) +
            (-(fVar20 < fVar21) & 4U) + (-(fVar12 < fVar22) & 8U)) != '\0') {
    uVar2 = 0x80000000;
  }
  if ((int)(uVar2 | uVar6) < 0) {
    *extraout_x8 = 0x7f7fffff7f7fffff;
    *(undefined4 *)(extraout_x8 + 1) = 0x7f7fffff;
    extraout_x8[2] = 0xff7fffffff7fffff;
    *(undefined4 *)(extraout_x8 + 3) = 0xff7fffff;
  }
  else {
    fStack_2a8 = (fVar23 - fStack_2b8) * 0.05;
    fStack_2b8 = fStack_2b8 - fStack_2a8;
    fVar13 = (fVar20 - fVar21) * 0.05;
    fVar15 = (fVar12 - fVar22) * 0.05;
    uStack_2c0 = CONCAT44(fVar22 - fVar15,fVar21 - fVar13);
    fStack_2a8 = fStack_2a8 + fVar23;
    uStack_2b0 = CONCAT44(fVar15 + fVar12,fVar13 + fVar20);
    uStack_2e0 = NEON_fmov(0xbf800000,4);
    uStack_2d8 = 0xbf800000;
    uStack_2c8 = 0x3f800000;
    func_0x000109a158e0(extraout_x8,&uStack_2c0,&uStack_2e0);
  }
  return;
}



/* Entry: 1099f2668; end: 1099f2dd3;  */

long * FUN_1099f2668(long *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                    ulong param_5,byte param_6)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  
  lVar11 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (2 < param_3) {
    if (2 < param_3 >> 0x3b) {
      func_0x0001099f2dd8();
      goto LAB_1099f2d50;
    }
    lVar12 = (param_3 / 3) * 0x20;
    lVar11 = lVar12;
    __Znwm();
    *param_1 = lVar11;
    param_1[2] = lVar11 + (param_3 / 3) * 0x20;
    _bzero();
    param_1[1] = lVar11 + lVar12;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (2 < param_5) {
    if (2 < param_5 >> 0x3b) {
      func_0x0001099f2dec();
LAB_1099f2d50:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1099f2d54);
      (*pcVar1)();
    }
    lVar13 = (param_5 / 3) * 0x20;
    lVar12 = lVar13;
    __Znwm();
    param_1[3] = lVar12;
    param_1[5] = lVar12 + (param_5 / 3) * 0x20;
    _bzero();
    param_1[4] = lVar12 + lVar13;
  }
  *(byte *)(param_1 + 6) = param_6;
  if (param_3 != 0) {
    uVar2 = 0;
    uVar5 = 0;
    puVar10 = param_2;
    do {
      uVar15 = *(undefined4 *)((long)param_2 + uVar2 * 4 + 8);
      puVar9 = (undefined8 *)(lVar11 + uVar5 * 0x20);
      *puVar9 = *puVar10;
      *(undefined4 *)(puVar9 + 1) = uVar15;
      lVar11 = *param_1;
      *(int *)(lVar11 + uVar5 * 0x20 + 0x10) = (int)uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar2 = uVar2 + 3;
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
    } while (uVar2 < param_3);
  }
  puVar10 = param_4;
  if (param_5 != 0) {
    uVar2 = 0;
    uVar5 = 0;
    puVar9 = param_4;
    do {
      uVar15 = *(undefined4 *)((long)param_4 + uVar2 * 4 + 8);
      puVar10 = (undefined8 *)((long)puVar9 + 0xc);
      puVar14 = (undefined8 *)(param_1[3] + uVar5 * 0x20);
      *puVar14 = *puVar9;
      *(undefined4 *)(puVar14 + 1) = uVar15;
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar2 = uVar2 + 3;
      puVar9 = puVar10;
    } while (uVar2 < param_5);
  }
  if ((param_6 & 1) != 0) {
    puStack_98 = (undefined8 *)0x0;
    lStack_a0 = 0;
    lStack_88 = 0;
    plStack_90 = (long *)0x0;
    fStack_80 = 1.0;
    if (param_1[1] - *param_1 != 0) {
      lVar12 = 0;
      lVar11 = 0;
      lVar13 = param_1[1] - *param_1 >> 5;
      do {
        puVar9 = puStack_98;
        lVar3 = 0;
        lVar6 = *param_1;
        do {
          *(float *)((long)&puStack_c0 + lVar3) =
               (float)(long)(*(float *)(lVar6 + lVar12 + lVar3) * 1e+13 + 0.5) / 1e+13;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0xc);
        lVar3 = 0;
        puVar14 = (undefined8 *)0x1;
        do {
          uVar2 = 0;
          if (*(float *)((long)&puStack_c0 + lVar3) != 0.0) {
            uVar2 = (ulong)(uint)*(float *)((long)&puStack_c0 + lVar3);
          }
          puVar14 = (undefined8 *)(uVar2 + (long)puVar14 * 0x1f);
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0xc);
        if (puStack_98 != (undefined8 *)0x0) {
          uVar2 = (long)puStack_98 - 1;
          if (((ulong)puStack_98 & uVar2) == 0) {
            puVar10 = (undefined8 *)(uVar2 & (ulong)puVar14);
          }
          else {
            puVar10 = puVar14;
            if (puStack_98 <= puVar14) {
              uVar5 = 0;
              if (puStack_98 != (undefined8 *)0x0) {
                uVar5 = (ulong)puVar14 / (ulong)puStack_98;
              }
              puVar10 = (undefined8 *)((long)puVar14 - uVar5 * (long)puStack_98);
            }
          }
          puVar4 = *(undefined8 **)(lStack_a0 + (long)puVar10 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            for (plVar8 = (long *)*puVar4; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              puVar4 = (undefined8 *)plVar8[1];
              if (puVar4 == puVar14) {
                plVar7 = plVar8 + 2;
                FUN_1099f2e78(plVar7,&puStack_c0);
                if (((ulong)plVar7 & 1) != 0) goto LAB_1099f2a48;
              }
              else {
                if (((ulong)puVar9 & uVar2) == 0) {
                  puVar4 = (undefined8 *)((ulong)puVar4 & uVar2);
                }
                else if (puVar9 <= puVar4) {
                  uVar5 = 0;
                  if (puVar9 != (undefined8 *)0x0) {
                    uVar5 = (ulong)puVar4 / (ulong)puVar9;
                  }
                  puVar4 = (undefined8 *)((long)puVar4 - uVar5 * (long)puVar9);
                }
                if (puVar4 != puVar10) break;
              }
            }
          }
        }
        plVar8 = (long *)0x40;
        __Znwm();
        *plVar8 = 0;
        plVar8[1] = (long)puVar14;
        plVar8[2] = (long)puStack_c0;
        *(undefined4 *)(plVar8 + 3) = puStack_b8._0_4_;
        plVar8[5] = 0;
        plVar8[6] = 0;
        plVar8[4] = 0;
        if ((puVar9 == (undefined8 *)0x0) || (fStack_80 * (float)puVar9 < (float)(lStack_88 + 1))) {
          uVar2 = 1;
          if ((undefined8 *)0x2 < puVar9) {
            uVar2 = (ulong)(((ulong)puVar9 & (long)puVar9 - 1U) != 0);
          }
          uVar2 = uVar2 | (long)puVar9 << 1;
          uVar5 = (ulong)((float)(lStack_88 + 1) / fStack_80);
          if (uVar2 <= uVar5) {
            uVar2 = uVar5;
          }
          FUN_1099f2f10(&lStack_a0,uVar2);
          puVar9 = puStack_98;
          if (((ulong)puStack_98 & (long)puStack_98 - 1U) == 0) {
            puVar10 = (undefined8 *)((long)puStack_98 - 1U & (ulong)puVar14);
          }
          else {
            puVar10 = puVar14;
            if (puStack_98 <= puVar14) {
              uVar2 = 0;
              if (puStack_98 != (undefined8 *)0x0) {
                uVar2 = (ulong)puVar14 / (ulong)puStack_98;
              }
              puVar10 = (undefined8 *)((long)puVar14 - uVar2 * (long)puStack_98);
            }
          }
        }
        plVar7 = *(long **)(lStack_a0 + (long)puVar10 * 8);
        if (plVar7 == (long *)0x0) {
          *plVar8 = (long)plStack_90;
          *(long ***)(lStack_a0 + (long)puVar10 * 8) = &plStack_90;
          plStack_90 = plVar8;
          if (*plVar8 != 0) {
            puVar14 = *(undefined8 **)(*plVar8 + 8);
            if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
              puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar9 - 1U);
            }
            else if (puVar9 <= puVar14) {
              uVar2 = 0;
              if (puVar9 != (undefined8 *)0x0) {
                uVar2 = (ulong)puVar14 / (ulong)puVar9;
              }
              puVar14 = (undefined8 *)((long)puVar14 - uVar2 * (long)puVar9);
            }
            *(long **)(lStack_a0 + (long)puVar14 * 8) = plVar8;
          }
        }
        else {
          *plVar8 = *plVar7;
          *plVar7 = (long)plVar8;
        }
        lStack_88 = lStack_88 + 1;
LAB_1099f2a48:
        puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,(int)lVar11);
        func_0x0001093aa148(plVar8 + 4,&puStack_c0);
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar11 != lVar13);
      lVar12 = 0;
      lVar11 = 0;
      do {
        puVar9 = puStack_98;
        lVar3 = 0;
        lVar6 = *param_1;
        do {
          *(float *)((long)&lStack_d0 + lVar3) =
               (float)(long)(*(float *)(lVar6 + lVar12 + lVar3) * 1e+13 + 0.5) / 1e+13;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0xc);
        lVar3 = 0;
        puVar14 = (undefined8 *)0x1;
        do {
          uVar2 = 0;
          if (*(float *)((long)&lStack_d0 + lVar3) != 0.0) {
            uVar2 = (ulong)(uint)*(float *)((long)&lStack_d0 + lVar3);
          }
          puVar14 = (undefined8 *)(uVar2 + (long)puVar14 * 0x1f);
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0xc);
        if (puStack_98 != (undefined8 *)0x0) {
          uVar2 = (long)puStack_98 - 1;
          if (((ulong)puStack_98 & uVar2) == 0) {
            puVar10 = (undefined8 *)(uVar2 & (ulong)puVar14);
          }
          else {
            puVar10 = puVar14;
            if (puStack_98 <= puVar14) {
              uVar5 = 0;
              if (puStack_98 != (undefined8 *)0x0) {
                uVar5 = (ulong)puVar14 / (ulong)puStack_98;
              }
              puVar10 = (undefined8 *)((long)puVar14 - uVar5 * (long)puStack_98);
            }
          }
          puVar4 = *(undefined8 **)(lStack_a0 + (long)puVar10 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            for (plVar8 = (long *)*puVar4; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              puVar4 = (undefined8 *)plVar8[1];
              if (puVar4 == puVar14) {
                plVar7 = plVar8 + 2;
                FUN_1099f2e78(plVar7,&lStack_d0);
                if (((ulong)plVar7 & 1) != 0) goto LAB_1099f2c98;
              }
              else {
                if (((ulong)puVar9 & uVar2) == 0) {
                  puVar4 = (undefined8 *)((ulong)puVar4 & uVar2);
                }
                else if (puVar9 <= puVar4) {
                  uVar5 = 0;
                  if (puVar9 != (undefined8 *)0x0) {
                    uVar5 = (ulong)puVar4 / (ulong)puVar9;
                  }
                  puVar4 = (undefined8 *)((long)puVar4 - uVar5 * (long)puVar9);
                }
                if (puVar4 != puVar10) break;
              }
            }
          }
        }
        plVar8 = (long *)0x40;
        __Znwm();
        *plVar8 = 0;
        plVar8[1] = (long)puVar14;
        plVar8[2] = lStack_d0;
        *(undefined4 *)(plVar8 + 3) = uStack_c8;
        plVar8[5] = 0;
        plVar8[6] = 0;
        plVar8[4] = 0;
        if ((puVar9 == (undefined8 *)0x0) || (fStack_80 * (float)puVar9 < (float)(lStack_88 + 1))) {
          uVar2 = 1;
          if ((undefined8 *)0x2 < puVar9) {
            uVar2 = (ulong)(((ulong)puVar9 & (long)puVar9 - 1U) != 0);
          }
          uVar2 = uVar2 | (long)puVar9 << 1;
          uVar5 = (ulong)((float)(lStack_88 + 1) / fStack_80);
          if (uVar2 <= uVar5) {
            uVar2 = uVar5;
          }
          FUN_1099f2f10(&lStack_a0,uVar2);
          puVar9 = puStack_98;
          if (((ulong)puStack_98 & (long)puStack_98 - 1U) == 0) {
            puVar10 = (undefined8 *)((long)puStack_98 - 1U & (ulong)puVar14);
          }
          else {
            puVar10 = puVar14;
            if (puStack_98 <= puVar14) {
              uVar2 = 0;
              if (puStack_98 != (undefined8 *)0x0) {
                uVar2 = (ulong)puVar14 / (ulong)puStack_98;
              }
              puVar10 = (undefined8 *)((long)puVar14 - uVar2 * (long)puStack_98);
            }
          }
        }
        plVar7 = *(long **)(lStack_a0 + (long)puVar10 * 8);
        if (plVar7 == (long *)0x0) {
          *plVar8 = (long)plStack_90;
          *(long ***)(lStack_a0 + (long)puVar10 * 8) = &plStack_90;
          plStack_90 = plVar8;
          if (*plVar8 != 0) {
            puVar14 = *(undefined8 **)(*plVar8 + 8);
            if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
              puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar9 - 1U);
            }
            else if (puVar9 <= puVar14) {
              uVar2 = 0;
              if (puVar9 != (undefined8 *)0x0) {
                uVar2 = (ulong)puVar14 / (ulong)puVar9;
              }
              puVar14 = (undefined8 *)((long)puVar14 - uVar2 * (long)puVar9);
            }
            *(long **)(lStack_a0 + (long)puVar14 * 8) = plVar8;
          }
        }
        else {
          *plVar8 = *plVar7;
          *plVar7 = (long)plVar8;
        }
        lStack_88 = lStack_88 + 1;
LAB_1099f2c98:
        puStack_c0 = (undefined4 *)0x0;
        puStack_b8 = (undefined4 *)0x0;
        uStack_b0 = 0;
        FUN_109378600(&puStack_c0,plVar8[4],plVar8[5],plVar8[5] - plVar8[4] >> 2);
        if (puStack_c0 == puStack_b8) {
          puVar10 = (undefined8 *)0x8;
          ___cxa_allocate_exception();
          *puVar10 = &PTR_FUN_110b1f8a8;
          ___cxa_throw();
          goto LAB_1099f2d50;
        }
        *(undefined4 *)(*param_1 + lVar11 * 0x20 + 0x10) = *puStack_c0;
        puStack_b8 = puStack_c0;
        __ZdlPv();
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar11 != lVar13);
    }
    FUN_1099f2e14(&lStack_a0);
  }
  return param_1;
}



/* Entry: 1099f2dd4; end: 1099f2dd7;  */

void FUN_1099f2dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1099f2dd8; end: 1099f2e13;  */

void FUN_1099f2dd8(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f2e14; end: 1099f2e77;  */

long * FUN_1099f2e14(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[4] != 0) {
      plVar1[5] = plVar1[4];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099f2e78; end: 1099f2f0f;  */

uint FUN_1099f2e78(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  
  fVar1 = ABS(*(float *)(param_1 + 1));
  fVar3 = ABS(*(float *)(param_2 + 1));
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  uVar2 = 0xffffffff;
  if (fVar3 * 1e-13 < ABS(*(float *)(param_1 + 1) - *(float *)(param_2 + 1))) {
    uVar2 = 0;
  }
  fVar3 = (float)*param_1;
  fVar4 = (float)*param_2;
  fVar1 = (float)((ulong)*param_1 >> 0x20);
  fVar6 = (float)((ulong)*param_2 >> 0x20);
  uVar5 = NEON_fmov(0x3f800000,4);
  uVar5 = NEON_fmaxnm(CONCAT44(ABS(fVar1),ABS(fVar3)) ^
                      (CONCAT44(ABS(fVar1),ABS(fVar3)) ^ CONCAT44(ABS(fVar6),ABS(fVar4))) &
                      CONCAT44(-(uint)(ABS(fVar1) < ABS(fVar6)),-(uint)(ABS(fVar3) < ABS(fVar4))),
                      uVar5,4);
  return (-(uint)(ABS(fVar3 - fVar4) <= (float)uVar5 * 1e-13 &&
                 ABS(fVar1 - fVar6) <= (float)((ulong)uVar5 >> 0x20) * 1e-13) & uVar2) >> 0x1f;
}



/* Entry: 1099f2f10; end: 1099f30df;  */

void FUN_1099f2f10(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  if ((((ulong)plVar4 & 1) != 0) && (plVar6[4] != 0)) {
    plVar6[5] = plVar6[4];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 1099f30e0; end: 1099f3113;  */

void FUN_1099f30e0(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x20);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1099f3114; end: 1099f391b;  */

undefined1 *
FUN_1099f3114(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  ulong unaff_x23;
  long *plVar25;
  long *plVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  ulong uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint auStack_c0 [4];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  
  *param_1 = 0;
  FUN_1099f2668();
  plVar14 = (long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *plVar14 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar1 = (long *)(param_1 + 0x80);
  uVar22 = param_5 / 3;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  uVar27 = 0;
  uVar29 = 0;
  uVar31 = 0x80;
  uVar33 = 0x3f;
  plStack_f0 = plVar1;
  if (2 < param_5) {
    FUN_1099f4b58(plVar1,uVar22);
    puVar11 = *(undefined8 **)(param_1 + 0x88);
    puVar20 = puVar11 + uVar22 * 0x14;
    do {
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      *(undefined8 *)((long)puVar11 + 4) = 0xffffffff00000001;
      *(undefined4 *)(puVar11 + 8) = 0x3f800000;
      puVar11[0xc] = 0x7f7fffff7f7fffff;
      *(undefined4 *)(puVar11 + 0xd) = 0x7f7fffff;
      puVar11[0xe] = 0xff7fffffff7fffff;
      *(undefined4 *)(puVar11 + 0xf) = 0xff7fffff;
      puVar11[0x12] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = puVar11 + 0x11;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar20);
    *(undefined8 **)(param_1 + 0x88) = puVar20;
    uVar23 = *(undefined4 *)(param_1 + 0x60);
    uVar27 = (undefined1)uVar23;
    uVar29 = (undefined1)((uint)uVar23 >> 8);
    uVar31 = (undefined1)((uint)uVar23 >> 0x10);
    uVar33 = (undefined1)((uint)uVar23 >> 0x18);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  puVar11 = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_1099f55a4(plVar14,(long)((float)(uVar22 << 1) /
                              (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)))));
  func_0x000107c27e9c(puVar11,uVar22);
  if (2 < param_5) {
    uVar24 = 0;
    plVar25 = (long *)(param_1 + 0x50);
    uVar48 = NEON_fmov(0x40400000,4);
    do {
      uVar23 = (undefined4)uVar24;
      plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,uVar23);
      FUN_1092d7128(puVar11,&plStack_f0);
      puVar15 = (uint *)(*(long *)(param_1 + 0x20) + (uVar24 & 0xffffffff) * 0x20);
      if (param_1[0x38] == '\x01') {
        lVar12 = *(long *)(param_1 + 8);
        puVar17 = puVar15 + 1;
        puVar18 = puVar15 + 2;
        puVar15 = (uint *)(lVar12 + (ulong)*puVar15 * 0x20 + 0x10);
        puVar17 = (uint *)(lVar12 + (ulong)*puVar17 * 0x20 + 0x10);
        puVar18 = (uint *)(lVar12 + (ulong)*puVar18 * 0x20 + 0x10);
      }
      else {
        puVar17 = puVar15 + 1;
        puVar18 = puVar15 + 2;
      }
      auStack_c0[0] = *puVar15;
      auStack_c0[1] = *puVar17;
      auStack_c0[2] = *puVar18;
      puVar20 = (undefined8 *)(param_2 + (ulong)*puVar15 * 0xc);
      fVar46 = *(float *)(puVar20 + 1);
      puVar21 = (ulong *)(param_2 + (ulong)*puVar17 * 0xc);
      fVar35 = *(float *)(puVar21 + 1);
      puVar19 = (ulong *)(param_2 + (ulong)*puVar18 * 0xc);
      fVar9 = *(float *)(puVar19 + 1);
      lVar12 = *plVar1 + uVar24 * 0xa0;
      *(undefined4 *)(lVar12 + 8) = uVar23;
      *(undefined4 *)(lVar12 + 0xc) = uVar23;
      uVar37 = *puVar20;
      fVar50 = fVar9 - fVar46;
      uVar40 = *puVar21;
      uVar43 = *puVar19;
      fVar45 = (float)uVar37;
      fVar39 = (float)uVar40;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      fVar41 = (float)(uVar40 >> 0x20);
      fVar47 = SQRT((fVar45 - fVar39) * (fVar45 - fVar39) + (fVar38 - fVar41) * (fVar38 - fVar41) +
                    (fVar46 - fVar35) * (fVar46 - fVar35));
      fVar42 = (float)uVar43;
      fVar44 = (float)(uVar43 >> 0x20);
      fVar49 = SQRT((fVar39 - fVar42) * (fVar39 - fVar42) + (fVar41 - fVar44) * (fVar41 - fVar44) +
                    (fVar35 - fVar9) * (fVar35 - fVar9));
      fVar52 = fVar42 - fVar45;
      fVar53 = fVar44 - fVar38;
      fVar51 = SQRT(fVar52 * fVar52 + fVar53 * fVar53 + fVar50 * fVar50);
      fVar54 = (fVar51 + fVar47 + fVar49) * 0.5;
      *(float *)(lVar12 + 0x10) =
           SQRT((fVar54 - fVar51) * (fVar54 - fVar49) * fVar54 * (fVar54 - fVar47));
      fVar47 = fVar53 * (fVar39 - fVar45) - (fVar41 - fVar38) * fVar52;
      fVar49 = (fVar41 - fVar38) * fVar50 - (fVar35 - fVar46) * fVar53;
      fVar50 = (fVar35 - fVar46) * fVar52 - fVar50 * (fVar39 - fVar45);
      fVar51 = SQRT(fVar47 * fVar47 + fVar49 * fVar49 + fVar50 * fVar50);
      *(float *)(lVar12 + 0x20) = fVar49 / fVar51;
      *(float *)(lVar12 + 0x24) = fVar50 / fVar51;
      *(float *)(lVar12 + 0x28) = fVar47 / fVar51;
      *(undefined8 *)(lVar12 + 0x30) = 0;
      *(undefined4 *)(lVar12 + 0x38) = 0;
      *(undefined4 *)(lVar12 + 0x40) = 0x3f800000;
      lVar12 = *plVar1 + uVar24 * 0xa0;
      *(ulong *)(lVar12 + 0x50) =
           CONCAT44((fVar38 + fVar41 + fVar44) / (float)((ulong)uVar48 >> 0x20),
                    (fVar45 + fVar39 + fVar42) / (float)uVar48);
      *(float *)(lVar12 + 0x58) = (fVar46 + fVar35 + fVar9) / 3.0;
      fVar45 = (float)NEON_fminnm(fVar46,0x7f7fffff);
      uVar27 = SUB41(fVar46,0);
      uVar29 = (undefined1)((uint)fVar46 >> 8);
      uVar31 = (undefined1)((uint)fVar46 >> 0x10);
      uVar33 = (undefined1)((uint)fVar46 >> 0x18);
      if (fVar46 <= -3.4028235e+38) {
        uVar27 = 0xff;
        uVar29 = 0xff;
        uVar31 = 0x7f;
        uVar33 = 0xff;
      }
      fVar46 = fVar35;
      if (fVar45 <= fVar35) {
        fVar46 = fVar45;
      }
      if (fVar35 <= (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)))) {
        fVar35 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
      }
      uVar28 = SUB41(fVar9,0);
      uVar30 = (undefined1)((uint)fVar9 >> 8);
      uVar32 = (undefined1)((uint)fVar9 >> 0x10);
      uVar34 = (undefined1)((uint)fVar9 >> 0x18);
      uVar27 = uVar28;
      uVar29 = uVar30;
      uVar31 = uVar32;
      uVar33 = uVar34;
      if (fVar46 <= fVar9) {
        uVar27 = SUB41(fVar46,0);
        uVar29 = (undefined1)((uint)fVar46 >> 8);
        uVar31 = (undefined1)((uint)fVar46 >> 0x10);
        uVar33 = (undefined1)((uint)fVar46 >> 0x18);
      }
      if (fVar9 <= fVar35) {
        uVar28 = SUB41(fVar35,0);
        uVar30 = (undefined1)((uint)fVar35 >> 8);
        uVar32 = (undefined1)((uint)fVar35 >> 0x10);
        uVar34 = (undefined1)((uint)fVar35 >> 0x18);
      }
      lVar12 = *plVar1 + uVar24 * 0xa0;
      uVar36 = NEON_fminnm(uVar37,0x7f7fffff7f7fffff,4);
      uVar36 = uVar36 ^ (uVar36 ^ uVar40) &
                        CONCAT44(-(uint)(fVar41 < (float)(uVar36 >> 0x20)),
                                 -(uint)(fVar39 < (float)uVar36));
      *(ulong *)(lVar12 + 0x60) =
           uVar36 ^ (uVar36 ^ uVar43) &
                    CONCAT44(-(uint)(fVar44 < (float)(uVar36 >> 0x20)),
                             -(uint)(fVar42 < (float)uVar36));
      *(uint *)(lVar12 + 0x68) = CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
      uVar36 = NEON_fmaxnm(uVar37,0xff7fffffff7fffff,4);
      iVar10 = -(uint)((float)(uVar36 >> 0x20) < fVar41);
      uVar36 = uVar36 ^ (uVar36 ^ uVar40) &
                        CONCAT17((char)((uint)iVar10 >> 0x18),
                                 CONCAT16((char)((uint)iVar10 >> 0x10),
                                          CONCAT15((char)((uint)iVar10 >> 8),
                                                   CONCAT14((char)iVar10,
                                                            -(uint)((float)uVar36 < fVar39)))));
      iVar10 = -(uint)((float)(uVar36 >> 0x20) < fVar44);
      *(ulong *)(lVar12 + 0x70) =
           uVar36 ^ (uVar36 ^ uVar43) &
                    CONCAT17((char)((uint)iVar10 >> 0x18),
                             CONCAT16((char)((uint)iVar10 >> 0x10),
                                      CONCAT15((char)((uint)iVar10 >> 8),
                                               CONCAT14((char)iVar10,-(uint)((float)uVar36 < fVar42)
                                                       ))));
      *(uint *)(lVar12 + 0x78) = CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28)));
      lVar12 = 0;
      do {
        uVar6 = auStack_c0[lVar12];
        lVar2 = lVar12 + 1;
        lVar5 = 0;
        if (lVar2 != 3) {
          lVar5 = lVar12 + 1;
        }
        uVar7 = auStack_c0[lVar5];
        uStack_e8 = 0;
        plStack_f0 = (long *)0x0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_d0 = 0x3f800000;
        uVar3 = uVar6;
        if (uVar6 <= uVar7) {
          uVar3 = uVar7;
        }
        uVar4 = uVar6;
        if (uVar7 <= uVar6) {
          uVar4 = uVar7;
        }
        uVar40 = (ulong)uVar4 * 0x1f + (ulong)uVar3;
        uVar43 = *(ulong *)(param_1 + 0x48);
        if (uVar43 != 0) {
          uVar36 = uVar43 - 1;
          if ((uVar43 & uVar36) == 0) {
            unaff_x23 = uVar43 + 0x3fffffffff & uVar40;
          }
          else {
            unaff_x23 = uVar40;
            if (uVar43 <= uVar40) {
              uVar16 = 0;
              if (uVar43 != 0) {
                uVar16 = uVar40 / uVar43;
              }
              unaff_x23 = uVar40 - uVar16 * uVar43;
            }
          }
          puVar20 = *(undefined8 **)(*plVar14 + unaff_x23 * 8);
          if (puVar20 != (undefined8 *)0x0) {
            for (plVar26 = (long *)*puVar20; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
              uVar16 = plVar26[1];
              if (uVar16 == uVar40) {
                if ((*(uint *)(plVar26 + 2) == uVar6 && *(uint *)((long)plVar26 + 0x14) == uVar7) ||
                   (*(uint *)((long)plVar26 + 0x14) == uVar6 && *(uint *)(plVar26 + 2) == uVar7))
                goto LAB_1099f3740;
              }
              else {
                if ((uVar43 & uVar36) == 0) {
                  uVar16 = uVar16 & uVar36;
                }
                else if (uVar43 <= uVar16) {
                  uVar8 = 0;
                  if (uVar43 != 0) {
                    uVar8 = uVar16 / uVar43;
                  }
                  uVar16 = uVar16 - uVar8 * uVar43;
                }
                if (uVar16 != unaff_x23) break;
              }
            }
          }
        }
        plVar26 = (long *)0x40;
        __Znwm();
        uStack_a0 = 1;
        *plVar26 = 0;
        plVar26[1] = uVar40;
        plVar26[2] = CONCAT44(uVar7,uVar6);
        plStack_b0 = plVar26;
        plStack_a8 = plVar14;
        func_0x0001074b2b38(plVar26 + 3,&plStack_f0);
        if ((uVar43 == 0) ||
           (*(float *)(param_1 + 0x60) * (float)uVar43 < (float)(*(long *)(param_1 + 0x58) + 1))) {
          uVar36 = 1;
          if (2 < uVar43) {
            uVar36 = (ulong)((uVar43 & uVar43 - 1) != 0);
          }
          uVar36 = uVar36 | uVar43 << 1;
          uVar43 = (ulong)((float)(*(long *)(param_1 + 0x58) + 1) / *(float *)(param_1 + 0x60));
          if (uVar36 <= uVar43) {
            uVar36 = uVar43;
          }
          FUN_1099f55a4(plVar14,uVar36);
          uVar43 = *(ulong *)(param_1 + 0x48);
          if ((uVar43 & uVar43 - 1) == 0) {
            unaff_x23 = uVar43 + 0x3fffffffff & uVar40;
          }
          else {
            unaff_x23 = uVar40;
            if (uVar43 <= uVar40) {
              uVar36 = 0;
              if (uVar43 != 0) {
                uVar36 = uVar40 / uVar43;
              }
              unaff_x23 = uVar40 - uVar36 * uVar43;
            }
          }
        }
        lVar12 = *plVar14;
        plVar13 = *(long **)(lVar12 + unaff_x23 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar26 = *plVar25;
          *plVar25 = (long)plVar26;
          *(long **)(lVar12 + unaff_x23 * 8) = plVar25;
          if (*plVar26 != 0) {
            uVar40 = *(ulong *)(*plVar26 + 8);
            if ((uVar43 & uVar43 - 1) == 0) {
              uVar40 = uVar40 & uVar43 - 1;
            }
            else if (uVar43 <= uVar40) {
              uVar36 = 0;
              if (uVar43 != 0) {
                uVar36 = uVar40 / uVar43;
              }
              uVar40 = uVar40 - uVar36 * uVar43;
            }
            plVar13 = (long *)(*plVar14 + uVar40 * 8);
            goto LAB_1099f3730;
          }
        }
        else {
          *plVar26 = *plVar13;
LAB_1099f3730:
          *plVar13 = (long)plVar26;
        }
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
LAB_1099f3740:
        func_0x00010726f2e4(&plStack_f0);
        plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,uVar23);
        func_0x00010879b884(plVar26 + 3,&plStack_f0,&plStack_f0);
        lVar12 = lVar2;
      } while (lVar2 != 3);
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar22);
  }
  for (plVar14 = *(long **)(param_1 + 0x50); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    plVar25 = (long *)plVar14[5];
    plVar26 = plVar25;
    if (plVar25 != (long *)0x0) {
      while( true ) {
        if (plVar26 != (long *)0x0) {
          uVar6 = *(uint *)(plVar25 + 2);
          do {
            if (uVar6 != *(uint *)(plVar26 + 2)) {
              plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,*(uint *)(plVar26 + 2));
              FUN_1093c89f8(*plVar1 + (ulong)uVar6 * 0xa0 + 0x80,&plStack_f0,&plStack_f0);
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        plVar25 = (long *)*plVar25;
        if (plVar25 == (long *)0x0) break;
        plVar26 = (long *)plVar14[5];
      }
    }
  }
  FUN_1099f4c34(param_1 + 0x98,*(long *)(param_1 + 0x80),*(long *)(param_1 + 0x88),
                (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 5) * -0x3333333333333333);
  func_0x0001056c5718(param_1 + 0xb0,*(long *)(param_1 + 0x58) << 1);
  return param_1;
}



/* Entry: 1099f391c; end: 1099f459f;  */

void FUN_1099f391c(undefined8 *param_1,byte *param_2,int param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long **pplVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  long *plVar27;
  long *plVar28;
  long **pplVar29;
  long *plVar30;
  undefined8 *puVar31;
  long **pplVar32;
  long **pplVar33;
  int *piVar34;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  pbVar24 = param_2 + 200;
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)pbVar24;
  pbVar12 = param_2 + 0x68;
  FUN_1092a9afc();
  lVar16 = *(long *)(param_2 + 0x80);
  lVar18 = *(long *)(param_2 + 0x88);
  if (lVar18 != lVar16) {
    uVar23 = 0;
    do {
      pplStack_108 = (long **)0x0;
      pplStack_110 = (long **)0x0;
      lStack_f8 = 0;
      pplStack_100 = (long **)0x0;
      pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,0x3f800000);
      uStack_c8 = 0;
      puStack_d0 = (undefined8 *)0x0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      puStack_d8 = (undefined8 *)0x0;
      plStack_e0 = (long *)0x0;
      lVar16 = *(long *)(param_2 + 0x98) + uVar23 * 0xa0;
      plVar27 = *(long **)(lVar16 + 0x80);
      plVar19 = (long *)(lVar16 + 0x88);
      if (plVar27 != plVar19) {
        do {
          FUN_1099f473c(&plStack_e0,*(undefined4 *)((long)plVar27 + 0x1c));
          plVar30 = (long *)plVar27[1];
          plVar28 = plVar27;
          if ((long *)plVar27[1] == (long *)0x0) {
            do {
              plVar27 = (long *)plVar28[2];
              bVar11 = (long *)*plVar27 != plVar28;
              plVar28 = plVar27;
            } while (bVar11);
          }
          else {
            do {
              plVar27 = plVar30;
              plVar30 = (long *)*plVar27;
            } while ((long *)*plVar27 != (long *)0x0);
          }
          lVar16 = lStack_b8;
          puVar31 = uStack_160;
        } while (plVar27 != plVar19);
LAB_1099f3a20:
        uStack_160 = puVar31;
        uVar17 = uStack_c0;
        pplVar33 = (long **)0xa0;
        if (lVar16 != 0) {
          uStack_160 = *(undefined8 **)(puStack_d8[uStack_c0 >> 9] + (uStack_c0 & 0x1ff) * 8);
          lVar16 = lVar16 + -1;
          uStack_c0 = uStack_c0 + 1;
          lStack_b8 = lVar16;
          if (uStack_c0 < 0x400) {
            iVar15 = (int)((ulong)uStack_160 >> 0x20);
          }
          else {
            puVar31 = puStack_d8 + 1;
            __ZdlPv(*puStack_d8);
            uStack_c0 = uVar17 - 0x1ff;
            iVar15 = (int)((ulong)uStack_160 >> 0x20);
            puStack_d8 = puVar31;
          }
          pplVar32 = pplStack_108;
          if (param_5 < iVar15) goto LAB_1099f3ccc;
          iVar15 = (int)uStack_160;
          puVar31 = uStack_160;
          if (uVar23 != ((ulong)uStack_160 & 0xffffffff)) {
            pplVar29 = (long **)(long)(int)uStack_160;
            if (pplStack_108 != (long **)0x0) {
              uVar17 = (long)pplStack_108 - 1;
              if (((ulong)pplStack_108 & uVar17) == 0) {
                pplVar33 = (long **)(uVar17 & (ulong)pplVar29);
              }
              else {
                pplVar33 = pplVar29;
                if (pplStack_108 <= pplVar29) {
                  uVar20 = 0;
                  if (pplStack_108 != (long **)0x0) {
                    uVar20 = (ulong)pplVar29 / (ulong)pplStack_108;
                  }
                  pplVar33 = (long **)((long)pplVar29 - uVar20 * (long)pplStack_108);
                }
              }
              plVar19 = pplStack_110[(long)pplVar33];
              if (plVar19 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar19 = (long *)*plVar19;
                    if (plVar19 == (long *)0x0) goto LAB_1099f3b14;
                    pplVar22 = (long **)plVar19[1];
                    if (pplVar22 != pplVar29) break;
                    if ((int)plVar19[2] == (int)uStack_160) goto LAB_1099f3a20;
                  }
                  if (((ulong)pplStack_108 & uVar17) == 0) {
                    pplVar22 = (long **)((ulong)pplVar22 & uVar17);
                  }
                  else if (pplStack_108 <= pplVar22) {
                    uVar20 = 0;
                    if (pplStack_108 != (long **)0x0) {
                      uVar20 = (ulong)pplVar22 / (ulong)pplStack_108;
                    }
                    pplVar22 = (long **)((long)pplVar22 - uVar20 * (long)pplStack_108);
                  }
                } while (pplVar22 == pplVar33);
              }
            }
LAB_1099f3b14:
            pplVar22 = (long **)0x18;
            __Znwm();
            *pplVar22 = (long *)0x0;
            pplVar22[1] = (long *)pplVar29;
            *(int *)(pplVar22 + 2) = iVar15;
            if ((pplVar32 == (long **)0x0) ||
               (pbStack_f0._0_4_ * (float)pplVar32 < (float)(lStack_f8 + 1))) {
              uVar17 = 1;
              if ((long **)0x2 < pplVar32) {
                uVar17 = (ulong)(((ulong)pplVar32 & (long)pplVar32 - 1U) != 0);
              }
              uVar17 = uVar17 | (long)pplVar32 << 1;
              uVar20 = (ulong)((float)(lStack_f8 + 1) / pbStack_f0._0_4_);
              if (uVar17 <= uVar20) {
                uVar17 = uVar20;
              }
              func_0x000107c2ab20(&pplStack_110,uVar17);
              pplVar32 = pplStack_108;
              if (((ulong)pplStack_108 & (long)pplStack_108 - 1U) == 0) {
                pplVar33 = (long **)((long)pplStack_108 - 1U & (ulong)pplVar29);
              }
              else {
                pplVar33 = pplVar29;
                if (pplStack_108 <= pplVar29) {
                  uVar17 = 0;
                  if (pplStack_108 != (long **)0x0) {
                    uVar17 = (ulong)pplVar29 / (ulong)pplStack_108;
                  }
                  pplVar33 = (long **)((long)pplVar29 - uVar17 * (long)pplStack_108);
                }
              }
            }
            pplVar29 = (long **)pplStack_110[(long)pplVar33];
            if (pplVar29 == (long **)0x0) {
              *pplVar22 = (long *)pplStack_100;
              pplStack_110[(long)pplVar33] = (long *)&pplStack_100;
              pplStack_100 = pplVar22;
              if (*pplVar22 != (long *)0x0) {
                pplVar29 = (long **)(*pplVar22)[1];
                if (((ulong)pplVar32 & (long)pplVar32 - 1U) == 0) {
                  pplVar29 = (long **)((ulong)pplVar29 & (long)pplVar32 - 1U);
                }
                else if (pplVar32 <= pplVar29) {
                  uVar17 = 0;
                  if (pplVar32 != (long **)0x0) {
                    uVar17 = (ulong)pplVar29 / (ulong)pplVar32;
                  }
                  pplVar29 = (long **)((long)pplVar29 - uVar17 * (long)pplVar32);
                }
                pplVar29 = pplStack_110 + (long)pplVar29;
                goto LAB_1099f3c20;
              }
            }
            else {
              *pplVar22 = *pplVar29;
LAB_1099f3c20:
              *pplVar29 = (long *)pplVar22;
            }
            lStack_f8 = lStack_f8 + 1;
            func_0x000105341058(*(long *)(param_2 + 0x80) + uVar23 * 0xa0 + 0x80,&uStack_160,
                                &uStack_160);
            lVar18 = *(long *)(param_2 + 0x98) + (long)(int)uStack_160 * 0xa0;
            plVar19 = *(long **)(lVar18 + 0x80);
            puVar31 = uStack_160;
            while (plVar19 != (long *)(lVar18 + 0x88)) {
              uStack_160._4_4_ = (int)((ulong)puVar31 >> 0x20);
              iVar15 = uStack_160._4_4_ + 1;
              uStack_160 = puVar31;
              FUN_1099f473c(&plStack_e0,CONCAT44(iVar15,*(undefined4 *)((long)plVar19 + 0x1c)));
              plVar27 = (long *)plVar19[1];
              plVar30 = plVar19;
              lVar16 = lStack_b8;
              puVar31 = uStack_160;
              if ((long *)plVar19[1] == (long *)0x0) {
                do {
                  plVar19 = (long *)plVar30[2];
                  bVar11 = (long *)*plVar19 != plVar30;
                  plVar30 = plVar19;
                } while (bVar11);
              }
              else {
                do {
                  plVar19 = plVar27;
                  plVar27 = (long *)*plVar19;
                } while ((long *)*plVar19 != (long *)0x0);
              }
            }
          }
          goto LAB_1099f3a20;
        }
      }
LAB_1099f3ccc:
      puVar9 = puStack_d0;
      puVar31 = puStack_d8;
      for (uVar17 = (long)puStack_d0 - (long)puStack_d8; 0x10 < uVar17; uVar17 = uVar17 - 8) {
        __ZdlPv(*puVar31);
        puVar31 = puVar31 + 1;
      }
      for (; puVar31 != puVar9; puVar31 = puVar31 + 1) {
        __ZdlPv(*puVar31);
      }
      if (plStack_e0 != (long *)0x0) {
        __ZdlPv();
      }
      func_0x000107c2ab24(&pplStack_110);
      uVar23 = uVar23 + 1;
      lVar16 = *(long *)(param_2 + 0x80);
      lVar18 = *(long *)(param_2 + 0x88);
      uVar17 = (lVar18 - lVar16 >> 5) * -0x3333333333333333;
    } while (uVar23 <= uVar17 && uVar17 - uVar23 != 0);
  }
  iStack_144 = 0;
  if (lVar18 == lVar16) {
    lVar16 = 0;
  }
  else {
    uVar23 = 0;
    iVar15 = 0;
    do {
      if ((*(byte *)(lVar16 + uVar23 * 0xa0) & 1) == 0) {
        func_0x000108a5413c(&uStack_140,&iStack_144);
        while (lStack_118 != 0) {
          iStack_148 = *(int *)(puStack_138[uStack_120 >> 10] + (uStack_120 & 0x3ff) * 4);
          lStack_118 = lStack_118 + -1;
          uStack_120 = uStack_120 + 1;
          if (0x7ff < uStack_120) {
            __ZdlPv(*puStack_138);
            puStack_138 = puStack_138 + 1;
            uStack_120 = uStack_120 - 0x400;
          }
          if ((*(byte *)(*(long *)(param_2 + 0x80) + (long)iStack_148 * 0xa0) & 1) == 0) {
            FUN_1099f6588(&plStack_e0,param_2,iStack_148,iVar15);
            uStack_158 = 0;
            uStack_150 = 0;
            uStack_160 = &uStack_158;
            func_0x000105341058(&uStack_160,&iStack_148,&iStack_148);
            puVar31 = *(undefined8 **)(param_2 + 0x70);
            if (puVar31 < *(undefined8 **)(param_2 + 0x78)) {
              pbVar25 = (byte *)(puVar31 + 3);
              *puVar31 = 0;
              puVar31[1] = 0;
              puVar31[2] = 0;
            }
            else {
              lVar16 = (long)puVar31 - *(long *)pbVar12;
              uVar23 = (lVar16 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar23) {
                FUN_1092a9a64();
                goto LAB_1099f44f0;
              }
              lVar18 = (long)*(undefined8 **)(param_2 + 0x78) - *(long *)pbVar12 >> 3;
              uVar17 = lVar18 * 0x5555555555555556;
              if (uVar17 < uVar23 || uVar17 - uVar23 == 0) {
                uVar17 = uVar23;
              }
              if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
                uVar17 = 0xaaaaaaaaaaaaaaa;
              }
              pbStack_f0 = pbVar12;
              if (uVar17 == 0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar12;
                FUN_1092a9a78();
              }
              pbVar2 = pbVar13 + lVar16;
              pbVar25 = pbVar2 + 0x18;
              pbVar2[0] = 0;
              pbVar2[1] = 0;
              pbVar2[2] = 0;
              pbVar2[3] = 0;
              pbVar2[4] = 0;
              pbVar2[5] = 0;
              pbVar2[6] = 0;
              pbVar2[7] = 0;
              pbVar2[8] = 0;
              pbVar2[9] = 0;
              pbVar2[10] = 0;
              pbVar2[0xb] = 0;
              pbVar2[0xc] = 0;
              pbVar2[0xd] = 0;
              pbVar2[0xe] = 0;
              pbVar2[0xf] = 0;
              pbVar2[0x10] = 0;
              pbVar2[0x11] = 0;
              pbVar2[0x12] = 0;
              pbVar2[0x13] = 0;
              pbVar2[0x14] = 0;
              pbVar2[0x15] = 0;
              pbVar2[0x16] = 0;
              pbVar2[0x17] = 0;
              lVar16 = (long)pbVar2 - (*(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68));
              _memcpy(lVar16);
              pplStack_110 = *(long ***)(param_2 + 0x68);
              *(long *)(param_2 + 0x68) = lVar16;
              *(byte **)(param_2 + 0x70) = pbVar25;
              lStack_f8 = *(long *)(param_2 + 0x78);
              *(byte **)(param_2 + 0x78) = pbVar13 + uVar17 * 0x18;
              pplStack_108 = pplStack_110;
              pplStack_100 = pplStack_110;
              func_0x00010937ce88(&pplStack_110);
            }
            *(byte **)(param_2 + 0x70) = pbVar25;
            FUN_1099f45a0(param_2,iStack_148,iVar15);
            iVar26 = param_3 + -1;
            if (1 < param_3) {
              do {
                if (*(long *)(*(long *)(param_2 + 0x80) + (long)iStack_148 * 0xa0 + 0x90) == 0)
                break;
                pplVar33 = &plStack_e0;
                FUN_1099f668c(pplVar33,param_4);
                pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,(int)pplVar33);
                FUN_1099f6760(&plStack_e0);
                func_0x000105341058(&uStack_160,&pplStack_110,&pplStack_110);
                iVar7 = iStack_148;
                iVar8 = (int)pplStack_110;
                lVar18 = (long)(int)pplStack_110;
                lVar16 = *(long *)(param_2 + 0x80) + (long)(int)pplStack_110 * 0xa0;
                func_0x0001099f4644(*(long *)(param_2 + 0x80) + (long)iStack_148 * 0xa0 + 0x80,
                                    *(undefined8 *)(lVar16 + 0x80),lVar16 + 0x88);
                lVar16 = *(long *)(param_2 + 0x80) + (long)iVar7 * 0xa0;
                *(int *)(lVar16 + 4) =
                     *(int *)(lVar16 + 4) +
                     *(int *)(*(long *)(param_2 + 0x80) + (long)iVar8 * 0xa0 + 4);
                func_0x0001099f46c4(lVar16 + 0x80,&uStack_160);
                lVar16 = *(long *)(param_2 + 0x80) + lVar18 * 0xa0;
                puVar31 = (undefined8 *)(lVar16 + 0x88);
                func_0x000105340e88(lVar16 + 0x80,*puVar31);
                *puVar31 = 0;
                *(undefined8 *)(lVar16 + 0x90) = 0;
                *(undefined8 **)(lVar16 + 0x80) = puVar31;
                *(undefined4 *)(*(long *)(param_2 + 0x80) + lVar18 * 0xa0 + 4) = 0;
                FUN_1099f45a0(param_2,(ulong)pplStack_110 & 0xffffffff,iVar15);
                iVar26 = iVar26 + -1;
              } while (iVar26 != 0);
            }
            iVar26 = iStack_148;
            lVar16 = *(long *)(param_2 + 0x80) + (long)iStack_148 * 0xa0;
            *(undefined8 **)(lVar16 + 0x60) = puStack_d0;
            *(undefined4 *)(lVar16 + 0x68) = (undefined4)uStack_c8;
            *(ulong *)(lVar16 + 0x70) = uStack_c0;
            *(undefined4 *)(lVar16 + 0x78) = (undefined4)lStack_b8;
            lVar16 = *(long *)(param_2 + 0x80) + (long)iStack_148 * 0xa0;
            *(undefined4 *)(lVar16 + 0x10) = uStack_b0;
            *(undefined8 *)(lVar16 + 0x20) = uStack_a0;
            *(undefined4 *)(lVar16 + 0x28) = uStack_98;
            *(undefined8 *)(lVar16 + 0x30) = uStack_90;
            *(undefined4 *)(lVar16 + 0x38) = uStack_88;
            *(undefined4 *)(lVar16 + 0x40) = uStack_80;
            lVar16 = *(long *)(param_2 + 0x80);
            lVar18 = lVar16 + (long)iStack_148 * 0xa0;
            plVar27 = *(long **)(lVar18 + 0x80);
            plVar19 = (long *)(lVar18 + 0x88);
            if (plVar27 != plVar19) {
              do {
                piVar34 = (int *)((long)plVar27 + 0x1c);
                func_0x0001099f46c4(*(long *)(param_2 + 0x80) + (long)*piVar34 * 0xa0 + 0x80,
                                    &uStack_160);
                if ((*(byte *)(*(long *)(param_2 + 0x80) + (long)*piVar34 * 0xa0) & 1) == 0) {
                  func_0x000108a5413c(&uStack_140,piVar34);
                }
                plVar30 = (long *)plVar27[1];
                plVar28 = plVar27;
                if ((long *)plVar27[1] == (long *)0x0) {
                  do {
                    plVar27 = (long *)plVar28[2];
                    bVar11 = (long *)*plVar27 != plVar28;
                    plVar28 = plVar27;
                  } while (bVar11);
                }
                else {
                  do {
                    plVar27 = plVar30;
                    plVar30 = (long *)*plVar27;
                  } while ((long *)*plVar27 != (long *)0x0);
                }
              } while (plVar27 != plVar19);
              lVar16 = *(long *)(param_2 + 0x80);
            }
            lVar16 = lVar16 + (long)iVar26 * 0xa0;
            puVar31 = (undefined8 *)(lVar16 + 0x88);
            func_0x000105340e88(lVar16 + 0x80,*puVar31);
            *puVar31 = 0;
            *(undefined8 *)(lVar16 + 0x90) = 0;
            *(undefined8 **)(lVar16 + 0x80) = puVar31;
            FUN_10923b3a0(pbVar24,&iStack_148);
            iVar15 = iVar15 + 1;
            func_0x000105340e88(&uStack_160,uStack_158);
          }
        }
      }
      uVar23 = (long)iStack_144 + 1;
      iStack_144 = (int)uVar23;
      lVar16 = *(long *)(param_2 + 0x80);
      uVar17 = (*(long *)(param_2 + 0x88) - lVar16 >> 5) * -0x3333333333333333;
    } while (uVar23 <= uVar17 && uVar17 - uVar23 != 0);
    lVar16 = (long)iVar15;
  }
  pbVar12 = param_2 + 0xb0;
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)pbVar12;
  for (plVar19 = *(long **)(param_2 + 0x50); plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    if ((ulong)plVar19[6] < 2) {
LAB_1099f417c:
      FUN_109231afc(pbVar12,plVar19 + 2);
      FUN_109231afc(pbVar12,(long)plVar19 + 0x14);
    }
    else {
      for (plVar27 = (long *)plVar19[5]; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar30 = (long *)plVar19[5];
        do {
          if ((*(uint *)(plVar27 + 2) != *(uint *)(plVar30 + 2)) &&
             (*(int *)(*(long *)(param_2 + 0x80) + (ulong)*(uint *)(plVar27 + 2) * 0xa0 + 8) !=
              *(int *)(*(long *)(param_2 + 0x80) + (ulong)*(uint *)(plVar30 + 2) * 0xa0 + 8)))
          goto LAB_1099f417c;
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
    }
  }
  FUN_1099f5490(&plStack_e0,lVar16);
  lVar16 = *(long *)(param_2 + 0x88);
  if (*(long *)(param_2 + 0x80) != lVar16) {
    lVar18 = *(long *)(param_2 + 0x80) + 0xc;
    do {
      FUN_109231afc(plStack_e0 + (long)*(int *)(lVar18 + -4) * 3,lVar18);
      lVar1 = lVar18 + 0x94;
      lVar18 = lVar18 + 0xa0;
    } while (lVar1 != lVar16);
  }
  puVar31 = puStack_d8;
  plVar19 = plStack_e0;
  pplVar33 = (long **)(param_2 + 0xe0);
  if (pplVar33 != &plStack_e0) {
    uVar23 = (long)puStack_d8 - (long)plStack_e0;
    if ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe0)) < uVar23) {
      uVar17 = ((long)uVar23 >> 3) * -0x5555555555555555;
      func_0x0001099f53f4(pplVar33);
      if (0xaaaaaaaaaaaaaaa < uVar17) goto LAB_1099f44ec;
      lVar16 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe0) >> 3;
      uVar20 = lVar16 * 0x5555555555555556;
      if (uVar20 < uVar17 || uVar20 + ((long)uVar23 >> 3) * 0x5555555555555555 == 0) {
        uVar20 = uVar17;
      }
      if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
        uVar20 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10984a6e8(pplVar33,uVar20);
      FUN_1099f5118(pplVar33,plVar19,puVar31,*(undefined8 *)(param_2 + 0xe8));
    }
    else {
      uVar17 = *(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xe0);
      if (uVar23 <= uVar17) {
        FUN_1099f542c(plStack_e0,puStack_d8);
        plVar27 = *(long **)(param_2 + 0xe8);
        while (plVar30 = plVar27, plVar30 != plVar19) {
          plVar27 = plVar30 + -3;
          if (*plVar27 != 0) {
            plVar30[-2] = *plVar27;
            __ZdlPv();
          }
        }
        *(long **)(param_2 + 0xe8) = plVar19;
        goto LAB_1099f4360;
      }
      FUN_1099f542c(plStack_e0,(long)plStack_e0 + uVar17);
      FUN_1099f5118(pplVar33,(long)plVar19 + uVar17,puVar31,*(undefined8 *)(param_2 + 0xe8));
    }
    *(long ***)(param_2 + 0xe8) = pplVar33;
  }
LAB_1099f4360:
  for (plVar19 = *(long **)(param_2 + 0x50); plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    plVar27 = (long *)plVar19[5];
    plVar30 = plVar27;
    if (plVar27 != (long *)0x0) {
      while( true ) {
        if (plVar30 != (long *)0x0) {
          uVar5 = *(uint *)(plVar27 + 2);
          do {
            uVar6 = *(uint *)(plVar30 + 2);
            if ((uVar5 != uVar6) &&
               (lVar16 = *(long *)(param_2 + 0x80),
               *(int *)(lVar16 + (ulong)uVar5 * 0xa0 + 8) !=
               *(int *)(lVar16 + (ulong)uVar6 * 0xa0 + 8))) {
              pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,
                                               *(undefined4 *)
                                                (*(long *)pbVar24 +
                                                (long)*(int *)(lVar16 + (long)(int)uVar6 * 0xa0 + 8)
                                                * 4));
              FUN_1093c89f8(lVar16 + (long)*(int *)(*(long *)pbVar24 +
                                                   (long)*(int *)(lVar16 + (long)(int)uVar5 * 0xa0 +
                                                                 8) * 4) * 0xa0 + 0x80,&pplStack_110
                            ,&pplStack_110);
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) break;
        plVar30 = (long *)plVar19[5];
      }
    }
  }
  bVar14 = 1;
  *param_2 = 1;
  puVar3 = *(undefined1 **)(param_2 + 0x80);
  puVar4 = *(undefined1 **)(param_2 + 0x88);
  puVar21 = puVar3;
  if (puVar3 != puVar4) {
    do {
      if (0 < *(int *)(puVar21 + 4)) {
        *puVar21 = 0;
      }
      bVar14 = bVar14 & *(long *)(puVar21 + 0x90) == 0;
      puVar21 = puVar21 + 0xa0;
    } while (puVar21 != puVar4);
    *param_2 = bVar14;
  }
  FUN_1099f4c34(param_2 + 0x98,puVar3,puVar4,
                ((long)puVar4 - (long)puVar3 >> 5) * -0x3333333333333333);
  pplStack_110 = &plStack_e0;
  func_0x000109848f28(&pplStack_110);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1099f5094();
  FUN_1098b5494(&uStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1099f44ec:
  FUN_109452bbc();
LAB_1099f44f0:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1099f44f4);
  (*pcVar10)();
}



/* Entry: 1099f45a0; end: 1099f473b;  */

void FUN_1099f45a0(long param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  
  FUN_10923b3a0(*(long *)(param_1 + 0x70) + -0x18,
                *(long *)(param_1 + 0x80) + (long)param_2 * 0xa0 + 8);
  lVar2 = *(long *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0xe0) != *(long *)(param_1 + 0xe8)) {
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0xe0) + (long)*(int *)(lVar2 + (long)param_2 * 0xa0 + 8) * 0x18);
    puVar1 = (uint *)puVar5[1];
    for (puVar4 = (uint *)*puVar5; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *(undefined4 *)(lVar2 + (ulong)*puVar4 * 0xa0 + 8) = param_3;
    }
  }
  puVar3 = (undefined1 *)(lVar2 + (long)param_2 * 0xa0);
  *puVar3 = 1;
  *(undefined4 *)(puVar3 + 8) = param_3;
  return;
}



/* Entry: 1099f473c; end: 1099f4a8f;  */

void FUN_1099f473c(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)param_1[2];
  puVar15 = (undefined8 *)((long)puVar11 - (long)puVar9);
  lVar8 = 0;
  if (puVar15 != (undefined8 *)0x0) {
    lVar8 = ((long)puVar11 - (long)puVar9) * 0x40 + -1;
  }
  uVar10 = param_1[4];
  if (lVar8 != param_1[5] + uVar10) goto LAB_1099f497c;
  if (uVar10 < 0x200) {
    puVar14 = (undefined8 *)param_1[3];
    puVar13 = (undefined8 *)*param_1;
    if ((undefined8 *)((long)puVar14 - (long)puVar13) <= puVar15) {
      uVar10 = (long)puVar14 - (long)puVar13 >> 2;
      if (puVar14 == puVar13) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d == 0) {
        puVar14 = (undefined8 *)(uVar10 * 8);
        __Znwm();
        uVar7 = 0x1000;
        __Znwm();
        puVar13 = puVar14 + uVar10;
        puVar5 = puVar14;
        puVar12 = (undefined8 *)((long)puVar14 + (long)puVar15);
        if (puVar15 == (undefined8 *)(uVar10 * 8)) {
          if ((long)puVar15 < 1) {
            uVar10 = (long)puVar15 >> 2;
            if (puVar11 == puVar9) {
              uVar10 = 1;
            }
            if (uVar10 >> 0x3d != 0) goto LAB_1099f4a5c;
            puVar5 = (undefined8 *)(uVar10 << 3);
            __Znwm();
            puVar13 = puVar5 + uVar10;
            __ZdlPv(puVar14);
            puVar9 = (undefined8 *)param_1[1];
            puVar11 = (undefined8 *)param_1[2];
            puVar12 = puVar5;
          }
          else {
            puVar12 = (undefined8 *)
                      (((long)puVar14 + (long)puVar15) -
                      (((ulong)puVar15 >> 1) + 4 & 0xfffffffffffffff8));
          }
        }
        puVar15 = puVar12 + 1;
        *puVar12 = uVar7;
        if (puVar11 != puVar9) {
          do {
            puVar9 = puVar12;
            if (puVar12 == puVar5) {
              if (puVar15 < puVar13) {
                lVar8 = ((long)puVar13 - (long)puVar15 >> 3) + 1;
                lVar2 = (long)puVar15 - (long)puVar12;
                lVar3 = (long)puVar15 - (long)puVar12;
                puVar15 = puVar15 + ((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
                puVar9 = (undefined8 *)((long)puVar15 - lVar2);
                if (lVar3 != 0) {
                  _memmove(puVar9,puVar12,lVar3);
                }
              }
              else {
                uVar10 = (long)puVar13 - (long)puVar12 >> 2;
                if ((long)puVar13 - (long)puVar12 == 0) {
                  uVar10 = 1;
                }
                if (uVar10 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_1099f4a60;
                }
                puVar14 = (undefined8 *)(uVar10 << 3);
                __Znwm();
                puVar9 = (undefined8 *)((long)puVar14 + (uVar10 * 2 + 6 & 0xfffffffffffffff8));
                lVar8 = (long)puVar15 - (long)puVar12;
                puVar15 = puVar9;
                if (lVar8 != 0) {
                  puVar15 = (undefined8 *)((long)puVar9 + lVar8);
                  puVar13 = puVar9;
                  do {
                    *puVar13 = *puVar12;
                    lVar8 = lVar8 + -8;
                    puVar13 = puVar13 + 1;
                    puVar12 = puVar12 + 1;
                  } while (lVar8 != 0);
                }
                puVar13 = puVar14 + uVar10;
                __ZdlPv(puVar5);
                puVar5 = puVar14;
              }
            }
            puVar11 = puVar11 + -1;
            puVar12 = puVar9 + -1;
            *puVar12 = *puVar11;
          } while (puVar11 != (undefined8 *)param_1[1]);
        }
        uVar10 = *param_1;
        *param_1 = (ulong)puVar5;
        param_1[1] = (ulong)puVar12;
        param_1[2] = (ulong)puVar15;
        param_1[3] = (ulong)puVar13;
        if (uVar10 != 0) {
          __ZdlPv();
        }
        goto LAB_1099f497c;
      }
LAB_1099f4a58:
      func_0x000104c4f740();
LAB_1099f4a5c:
      func_0x000104c4f740();
LAB_1099f4a60:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1099f4a64);
      (*pcVar4)();
    }
    uVar7 = 0x1000;
    __Znwm();
    if (puVar14 != puVar11) {
      *puVar11 = uVar7;
      param_1[2] = param_1[2] + 8;
      goto LAB_1099f497c;
    }
    if (puVar9 == puVar13) {
      uVar10 = (long)puVar14 - (long)puVar9 >> 2;
      if (puVar11 == puVar9) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d != 0) goto LAB_1099f4a58;
      uVar6 = uVar10 << 3;
      __Znwm();
      puVar14 = (undefined8 *)(uVar6 + (uVar10 * 2 + 6 & 0xfffffffffffffff8));
      puVar5 = puVar14;
      if (puVar11 != puVar9) {
        puVar5 = (undefined8 *)((long)puVar14 + (long)puVar15);
        puVar11 = puVar14;
        puVar12 = puVar9;
        do {
          *puVar11 = *puVar12;
          puVar15 = puVar15 + -1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar15 != (undefined8 *)0x0);
      }
      *param_1 = uVar6;
      param_1[1] = (ulong)puVar14;
      param_1[2] = (ulong)puVar5;
      param_1[3] = uVar6 + uVar10 * 8;
      bVar1 = puVar9 != (undefined8 *)0x0;
      puVar9 = puVar14;
      if (bVar1) {
        __ZdlPv(puVar13);
        puVar9 = (undefined8 *)param_1[1];
      }
    }
    puVar9[-1] = uVar7;
    uVar10 = param_1[1];
    param_1[1] = uVar10 - 8;
    uVar7 = *(undefined8 *)(uVar10 - 8);
    param_1[1] = uVar10;
  }
  else {
    param_1[4] = uVar10 - 0x200;
    uVar7 = *puVar9;
    param_1[1] = (ulong)(puVar9 + 1);
  }
  FUN_1099f57bc(param_1,uVar7);
LAB_1099f497c:
  *(undefined8 *)
   (*(long *)(param_1[1] + (param_1[5] + param_1[4] >> 9) * 8) +
   (param_1[5] + param_1[4] & 0x1ff) * 8) = param_2;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 1099f4a90; end: 1099f4b57;  */

long * FUN_1099f4a90(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_1099f4b00;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_1099f4b00:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099f4b58; end: 1099f4ba3;  */

void FUN_1099f4b58(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0xa0;
    return;
  }
  FUN_1099f4ba4();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar5 = (long *)*plVar2;
  lVar1 = *plVar5;
  if (lVar1 != 0) {
    lVar4 = lVar1;
    if (plVar5[1] != lVar1) {
      lVar4 = plVar5[1] + -0x20;
      do {
        func_0x000105340e88(lVar4,*(undefined8 *)(lVar4 + 8));
        lVar3 = lVar4 + -0x80;
        lVar4 = lVar4 + -0xa0;
      } while (lVar3 != lVar1);
      lVar4 = *(long *)*plVar2;
    }
    plVar5[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 1099f4ba4; end: 1099f4bb7;  */

void FUN_1099f4ba4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = lVar5;
    if (plVar4[1] != lVar5) {
      lVar3 = plVar4[1] + -0x20;
      do {
        func_0x000105340e88(lVar3,*(undefined8 *)(lVar3 + 8));
        lVar2 = lVar3 + -0x80;
        lVar3 = lVar3 + -0xa0;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 1099f4bb8; end: 1099f4c33;  */

void FUN_1099f4bb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = lVar4;
    if (plVar3[1] != lVar4) {
      lVar2 = plVar3[1] + -0x20;
      do {
        func_0x000105340e88(lVar2,*(undefined8 *)(lVar2 + 8));
        lVar1 = lVar2 + -0x80;
        lVar2 = lVar2 + -0xa0;
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1099f4c34; end: 1099f4dd7;  */

long * FUN_1099f4c34(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_1[2];
  lVar7 = *param_1;
  plVar1 = param_1;
  if ((long *)((lVar5 - lVar7 >> 5) * -0x3333333333333333) < param_4) {
    plVar2 = param_2;
    plVar3 = param_3;
    plVar4 = param_4;
    if (lVar7 != 0) {
      if (param_1[1] != lVar7) {
        lVar5 = param_1[1] + -0x20;
        do {
          plVar2 = *(long **)(lVar5 + 8);
          func_0x000105340e88(lVar5);
          lVar6 = lVar5 + -0x80;
          lVar5 = lVar5 + -0xa0;
        } while (lVar6 != lVar7);
      }
      param_1[1] = lVar7;
      __ZdlPv();
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long *)0x199999999999999 < param_4) {
      FUN_1099f4ba4();
      param_1[1] = (long)param_4;
      __Unwind_Resume();
      if (plVar2 != plVar3) {
        plVar1 = plVar2 + 0x11;
        do {
          lVar7 = plVar2[1];
          lVar5 = *plVar2;
          *(int *)(plVar4 + 2) = (int)plVar2[2];
          plVar4[1] = lVar7;
          *plVar4 = lVar5;
          *(int *)(plVar4 + 4) = (int)plVar2[4];
          *(undefined4 *)((long)plVar4 + 0x24) = *(undefined4 *)((long)plVar2 + 0x24);
          *(int *)(plVar4 + 5) = (int)plVar2[5];
          *(int *)(plVar4 + 6) = (int)plVar2[6];
          *(undefined4 *)((long)plVar4 + 0x34) = *(undefined4 *)((long)plVar2 + 0x34);
          *(int *)(plVar4 + 7) = (int)plVar2[7];
          *(int *)(plVar4 + 8) = (int)plVar2[8];
          *(int *)(plVar4 + 10) = (int)plVar2[10];
          *(undefined4 *)((long)plVar4 + 0x54) = *(undefined4 *)((long)plVar2 + 0x54);
          *(int *)(plVar4 + 0xb) = (int)plVar2[0xb];
          *(int *)(plVar4 + 0xc) = (int)plVar2[0xc];
          *(undefined4 *)((long)plVar4 + 100) = *(undefined4 *)((long)plVar2 + 100);
          *(int *)(plVar4 + 0xd) = (int)plVar2[0xd];
          *(int *)(plVar4 + 0xe) = (int)plVar2[0xe];
          *(undefined4 *)((long)plVar4 + 0x74) = *(undefined4 *)((long)plVar2 + 0x74);
          lVar5 = plVar2[0xf];
          plVar4[0x11] = 0;
          plVar4[0x10] = (long)(plVar4 + 0x11);
          *(int *)(plVar4 + 0xf) = (int)lVar5;
          plVar4[0x12] = 0;
          func_0x0001099f4644(plVar4 + 0x10,plVar2[0x10],plVar1);
          plVar2 = plVar2 + 0x14;
          plVar4 = plVar4 + 0x14;
          plVar1 = plVar1 + 0x14;
        } while (plVar2 != plVar3);
      }
      return plVar4;
    }
    plVar2 = (long *)((lVar5 >> 5) * -0x6666666666666666);
    if (plVar2 < param_4 || (long)plVar2 - (long)param_4 == 0) {
      plVar2 = param_4;
    }
    if (0xcccccccccccccb < (ulong)((lVar5 >> 5) * -0x3333333333333333)) {
      plVar2 = (long *)0x199999999999999;
    }
    FUN_1099f4b58(param_1,plVar2);
    FUN_1099f4dd8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar5 = param_1[1] - lVar7;
    if (param_4 <= (long *)((lVar5 >> 5) * -0x3333333333333333)) {
      FUN_1099f4f8c(param_2,param_3,lVar7);
      plVar1 = param_2;
      if ((long *)param_1[1] != param_2) {
        plVar2 = (long *)param_1[1] + -4;
        do {
          plVar1 = plVar2;
          func_0x000105340e88(plVar2,plVar2[1]);
          plVar4 = plVar2 + -0x10;
          plVar2 = plVar2 + -0x14;
        } while (plVar4 != param_2);
      }
      param_1[1] = (long)param_2;
      return plVar1;
    }
    FUN_1099f4f8c(param_2,(long)param_2 + lVar5,lVar7);
    FUN_1099f4dd8(param_1,(long)param_2 + lVar5,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar1;
  return plVar1;
}



/* Entry: 1099f4dd8; end: 1099f4f27;  */

undefined8 *
FUN_1099f4dd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != param_3) {
    puVar1 = param_2 + 0x11;
    do {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_2 + 2);
      param_4[1] = uVar4;
      *param_4 = uVar3;
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((long)param_4 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)param_4 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
      *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_4 + 10) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)((long)param_4 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
      *(undefined4 *)(param_4 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)((long)param_4 + 100) = *(undefined4 *)((long)param_2 + 100);
      *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)(param_4 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)((long)param_4 + 0x74) = *(undefined4 *)((long)param_2 + 0x74);
      uVar2 = *(undefined4 *)(param_2 + 0xf);
      param_4[0x11] = 0;
      param_4[0x10] = param_4 + 0x11;
      *(undefined4 *)(param_4 + 0xf) = uVar2;
      param_4[0x12] = 0;
      func_0x0001099f4644(param_4 + 0x10,param_2[0x10],puVar1);
      param_2 = param_2 + 0x14;
      param_4 = param_4 + 0x14;
      puVar1 = puVar1 + 0x14;
    } while (param_2 != param_3);
  }
  return param_4;
}



/* Entry: 1099f4f28; end: 1099f4f8b;  */

long FUN_1099f4f28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar3 = **(long **)(param_1 + 8);
    if (**(long **)(param_1 + 0x10) != lVar3) {
      lVar2 = **(long **)(param_1 + 0x10) + -0x20;
      do {
        func_0x000105340e88(lVar2,*(undefined8 *)(lVar2 + 8));
        lVar1 = lVar2 + -0x80;
        lVar2 = lVar2 + -0xa0;
      } while (lVar1 != lVar3);
    }
  }
  return param_1;
}



/* Entry: 1099f4f8c; end: 1099f5093;  */

undefined8 * FUN_1099f4f8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x11;
    puVar3 = param_1 + 0x10;
    do {
      uVar5 = puVar3[-0xf];
      uVar4 = puVar3[-0x10];
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar3 + -0xe);
      param_3[1] = uVar5;
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar3 + -0xc);
      *(undefined4 *)((long)param_3 + 0x24) = *(undefined4 *)((long)puVar3 + -0x5c);
      *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar3 + -0xb);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar3 + -10);
      *(undefined4 *)((long)param_3 + 0x34) = *(undefined4 *)((long)puVar3 + -0x4c);
      *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar3 + -9);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar3 + -8);
      *(undefined4 *)(param_3 + 10) = *(undefined4 *)(puVar3 + -6);
      *(undefined4 *)((long)param_3 + 0x54) = *(undefined4 *)((long)puVar3 + -0x2c);
      *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(puVar3 + -5);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(puVar3 + -4);
      *(undefined4 *)((long)param_3 + 100) = *(undefined4 *)((long)puVar3 + -0x1c);
      *(undefined4 *)(param_3 + 0xd) = *(undefined4 *)(puVar3 + -3);
      *(undefined4 *)(param_3 + 0xe) = *(undefined4 *)(puVar3 + -2);
      *(undefined4 *)((long)param_3 + 0x74) = *(undefined4 *)((long)puVar3 + -0xc);
      *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)(puVar3 + -1);
      if (param_3 != puVar3 + -0x10) {
        func_0x000108a29cd4(param_3 + 0x10,*puVar3,puVar2);
      }
      param_3 = param_3 + 0x14;
      puVar2 = puVar2 + 0x14;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 0x14;
    } while (puVar1 != param_2);
  }
  return param_3;
}



/* Entry: 1099f5094; end: 1099f5117;  */

void FUN_1099f5094(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10984a6e8(param_1,param_4);
    lVar1 = param_1;
    FUN_1099f5118(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1099f5118; end: 1099f51c3;  */

undefined8 * FUN_1099f5118(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_109378600(param_4,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_1099f51c4(&uStack_60);
  return param_4;
}



/* Entry: 1099f51c4; end: 1099f51f7;  */

long FUN_1099f51c4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1099f51f8(param_1);
  }
  return param_1;
}



/* Entry: 1099f51f8; end: 1099f5243;  */

void FUN_1099f51f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -3;
    if (*plVar3 != 0) {
      plVar1[-2] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1099f5244; end: 1099f52c7;  */

void FUN_1099f5244(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1092a9a1c(param_1,param_4);
    lVar1 = param_1;
    FUN_1099f52c8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1099f52c8; end: 1099f5373;  */

undefined8 * FUN_1099f52c8(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_109285684(param_4,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_1099f5374(&uStack_60);
  return param_4;
}



/* Entry: 1099f5374; end: 1099f53a7;  */

long FUN_1099f5374(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1099f53a8(param_1);
  }
  return param_1;
}



/* Entry: 1099f53a8; end: 1099f542b;  */

void FUN_1099f53a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -3;
    if (*plVar3 != 0) {
      plVar1[-2] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1099f542c; end: 1099f548f;  */

long * FUN_1099f542c(long *param_1,long *param_2,long *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != param_3) {
      FUN_1093784d8(param_3,*param_1,param_1[1],param_1[1] - *param_1 >> 2);
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* Entry: 1099f5490; end: 1099f552f;  */

undefined8 * FUN_1099f5490(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10984a6e8(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 1099f5530; end: 1099f55a3;  */

long * FUN_1099f5530(long *param_1)

{
  long lVar1;
  
  func_0x0001099f5568(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099f55a4; end: 1099f5773;  */

void FUN_1099f55a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010726f2e4(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1099f5774; end: 1099f57bb;  */

void FUN_1099f5774(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010726f2e4(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1099f57bc; end: 1099f58bf;  */

ulong * FUN_1099f57bc(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                     ulong param_5,int *param_6,long param_7,long param_8)

{
  ulong *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  puVar13 = (ulong *)param_1[2];
  puVar4 = param_1;
  if (puVar13 == (ulong *)param_1[3]) {
    puVar5 = (ulong *)*param_1;
    puVar12 = (ulong *)param_1[1];
    if (puVar12 < puVar5 || (long)puVar12 - (long)puVar5 == 0) {
      uVar6 = (long)puVar13 - (long)puVar5 >> 2;
      if ((long)puVar13 - (long)puVar5 == 0) {
        uVar6 = 1;
      }
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
        puVar13 = param_1;
        FUN_1099f3114();
        puVar4 = puVar13 + 0x1f;
        *puVar4 = 0;
        puVar13[0x20] = 0;
        puVar13[0x21] = 0;
        uVar6 = 0;
        if (param_7 != 0) {
          lVar8 = 1;
          piVar10 = param_6;
          do {
            lVar8 = lVar8 * *piVar10;
            if ((ulong)(lVar8 * param_8) < param_5 / 3) {
              uVar6 = uVar6 + 1;
            }
            param_7 = param_7 + -1;
            piVar10 = piVar10 + 3;
          } while (param_7 != 0);
        }
        if (uVar6 < 4) {
          uVar6 = 3;
        }
        FUN_1099f59c4(puVar4,uVar6);
        lVar8 = 0;
        uVar7 = 0;
        do {
          puVar2 = (undefined4 *)(*puVar4 + lVar8);
          *puVar2 = (int)uVar7;
          uVar11 = *(undefined8 *)param_6;
          puVar2[3] = param_6[2];
          *(undefined8 *)(puVar2 + 1) = uVar11;
          uVar7 = uVar7 + 1;
          param_6 = param_6 + 3;
          lVar8 = lVar8 + 0x58;
        } while (uVar6 != uVar7);
        return param_1;
      }
      puVar4 = (ulong *)(uVar6 << 3);
      __Znwm();
      puVar1 = puVar4 + (uVar6 >> 2);
      lVar8 = (long)puVar13 - (long)puVar12;
      puVar13 = puVar1;
      if (lVar8 != 0) {
        puVar13 = (ulong *)((long)puVar1 + lVar8);
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar12;
          lVar8 = lVar8 + -8;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
      }
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar13;
      param_1[3] = (ulong)(puVar4 + uVar6);
      if (puVar5 != (ulong *)0x0) {
        __ZdlPv(puVar5);
        puVar13 = (ulong *)param_1[2];
        puVar4 = puVar5;
      }
    }
    else {
      lVar8 = (((long)puVar12 - (long)puVar5 >> 3) + 1) / 2;
      puVar5 = puVar12 + -lVar8;
      lVar3 = (long)puVar13 - (long)puVar12;
      if (lVar3 != 0) {
        puVar4 = puVar5;
        _memmove(puVar5,puVar12,lVar3);
        puVar12 = (ulong *)param_1[1];
      }
      puVar13 = (ulong *)((long)puVar5 + lVar3);
      param_1[1] = (ulong)(puVar12 + -lVar8);
      param_1[2] = (ulong)puVar13;
    }
  }
  *puVar13 = param_2;
  param_1[2] = param_1[2] + 8;
  return puVar4;
}



/* Entry: 1099f58c0; end: 1099f59c3;  */

long FUN_1099f58c0(long param_1)

{
  undefined4 *puVar1;
  ulong in_x4;
  int *in_x5;
  long in_x6;
  long in_x7;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  lVar4 = param_1;
  FUN_1099f3114();
  plVar7 = (long *)(lVar4 + 0xf8);
  *plVar7 = 0;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
  uVar2 = 0;
  if (in_x6 != 0) {
    lVar4 = 1;
    piVar5 = in_x5;
    do {
      lVar4 = lVar4 * *piVar5;
      if ((ulong)(lVar4 * in_x7) < in_x4 / 3) {
        uVar2 = uVar2 + 1;
      }
      in_x6 = in_x6 + -1;
      piVar5 = piVar5 + 3;
    } while (in_x6 != 0);
  }
  if (uVar2 < 4) {
    uVar2 = 3;
  }
  FUN_1099f59c4(plVar7,uVar2);
  lVar4 = 0;
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)(*plVar7 + lVar4);
    *puVar1 = (int)uVar3;
    uVar6 = *(undefined8 *)in_x5;
    puVar1[3] = in_x5[2];
    *(undefined8 *)(puVar1 + 1) = uVar6;
    uVar3 = uVar3 + 1;
    in_x5 = in_x5 + 3;
    lVar4 = lVar4 + 0x58;
  } while (uVar2 != uVar3);
  return param_1;
}



/* Entry: 1099f59c4; end: 1099f5a4f;  */

void FUN_1099f59c4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar12 = param_1[1];
  lVar5 = lVar12 - *param_1 >> 3;
  bVar3 = param_2 < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3);
  uVar2 = param_2 + lVar5 * -0x2e8ba2e8ba2e8ba3;
  if (bVar3 || uVar2 == 0) {
    if (bVar3) {
      lVar5 = *param_1 + param_2 * 0x58;
      while (lVar12 != lVar5) {
        lVar12 = lVar12 + -0x58;
        FUN_1099f6180(lVar12);
      }
      param_1[1] = lVar5;
    }
    return;
  }
  puVar8 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar8 >> 3) * 0x2e8ba2e8ba2e8ba3) < uVar2) {
    lVar12 = (long)puVar8 - *param_1;
    uVar6 = uVar2 + (lVar12 >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (0x2e8ba2e8ba2e8ba < uVar6) {
      FUN_1099f616c();
LAB_1099f6168:
      func_0x000104c4f740();
      pcStack_68 = FUN_1099f616c;
      puVar4 = &DAT_10f62a4d8;
      puStack_70 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_78 = FUN_1099f6180;
      puStack_98 = puVar4 + 0x40;
      uStack_90 = uVar2;
      plStack_88 = param_1;
      puStack_80 = (undefined1 *)&puStack_70;
      func_0x0001092a9abc(&puStack_98);
      if (*(long *)(puVar4 + 0x28) != 0) {
        *(long *)(puVar4 + 0x30) = *(long *)(puVar4 + 0x28);
        __ZdlPv();
      }
      puStack_98 = puVar4 + 0x10;
      func_0x000109848f28(&puStack_98);
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar5 * 0x5d1745d1745d1746;
    if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
      uVar10 = uVar6;
    }
    if (0x1745d1745d1745c < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
      uVar10 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar10) goto LAB_1099f6168;
      lVar5 = uVar10 * 0x58;
      __Znwm();
    }
    puVar7 = (undefined8 *)(lVar5 + lVar12);
    lStack_40 = lVar5 + uVar10 * 0x58;
    puStack_48 = puVar7 + uVar2 * 0xb;
    puVar8 = puVar7;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 *)((long)puVar8 + 0x14) = 0;
      *(undefined8 *)((long)puVar8 + 0xc) = 0;
      *(undefined8 *)((long)puVar8 + 0x24) = 0;
      *(undefined8 *)((long)puVar8 + 0x1c) = 0;
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      *(undefined8 *)((long)puVar8 + 0x44) = 0;
      *(undefined8 *)((long)puVar8 + 0x3c) = 0;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8 = puVar8 + 0xb;
    } while (puVar8 != puStack_48);
    puVar11 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)((long)puVar7 + ((long)puVar11 - (long)puVar1));
    puVar8 = puVar11;
    puVar9 = puVar7;
    if ((long)puVar11 - (long)puVar1 != 0) {
      do {
        uVar13 = *puVar8;
        puVar9[1] = puVar8[1];
        *puVar9 = uVar13;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[2] = 0;
        uVar13 = puVar8[2];
        puVar9[3] = puVar8[3];
        puVar9[2] = uVar13;
        puVar9[4] = puVar8[4];
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        uVar13 = puVar8[5];
        puVar9[6] = puVar8[6];
        puVar9[5] = uVar13;
        puVar9[7] = puVar8[7];
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        uVar13 = puVar8[8];
        puVar9[9] = puVar8[9];
        puVar9[8] = uVar13;
        puVar9[10] = puVar8[10];
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8 = puVar8 + 0xb;
        puVar9 = puVar9 + 0xb;
      } while (puVar8 != puVar1);
      do {
        FUN_1099f6180(puVar11);
        puVar11 = puVar11 + 0xb;
      } while (puVar11 != puVar1);
      puVar11 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puStack_48;
    lVar12 = param_1[2];
    param_1[2] = lStack_40;
    puStack_58 = puVar11;
    puStack_50 = puVar11;
    puStack_48 = puVar11;
    lStack_40 = lVar12;
    func_0x0001099f61d4(&puStack_58);
  }
  else {
    puVar7 = puVar8;
    if (uVar2 != 0) {
      puVar7 = puVar8 + uVar2 * 0xb;
      do {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 1;
        *(undefined8 *)((long)puVar8 + 0x14) = 0;
        *(undefined8 *)((long)puVar8 + 0xc) = 0;
        *(undefined8 *)((long)puVar8 + 0x24) = 0;
        *(undefined8 *)((long)puVar8 + 0x1c) = 0;
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        *(undefined8 *)((long)puVar8 + 0x44) = 0;
        *(undefined8 *)((long)puVar8 + 0x3c) = 0;
        puVar8[10] = 0;
        puVar8[9] = 0;
        puVar8 = puVar8 + 0xb;
      } while (puVar8 != puVar7);
    }
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 1099f5a50; end: 1099f5bf3;  */

int FUN_1099f5a50(char *param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  
  puVar4 = *(uint **)(param_1 + 0xf8);
  puVar1 = *(uint **)(param_1 + 0x100);
  lVar5 = (long)puVar1 - (long)puVar4;
  if (lVar5 == 0) {
    iVar3 = 1;
  }
  else {
    lVar5 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3;
    iVar3 = 1;
    do {
      FUN_1099f391c(&uStack_70,param_1,puVar4[1],puVar4[2],puVar4[3]);
      func_0x0001099f53f4(puVar4 + 4);
      *(undefined8 *)(puVar4 + 6) = uStack_68;
      *(undefined8 *)(puVar4 + 4) = uStack_70;
      *(undefined8 *)(puVar4 + 8) = uStack_60;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      puStack_58 = (undefined1 *)&uStack_70;
      func_0x000109848f28(&puStack_58);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_109378600(&uStack_70,*(long *)(param_1 + 0xb0),*(long *)(param_1 + 0xb8),
                    *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2);
      if (*(long *)(puVar4 + 10) != 0) {
        *(long *)(puVar4 + 0xc) = *(long *)(puVar4 + 10);
        __ZdlPv();
      }
      *(undefined8 *)(puVar4 + 0xc) = uStack_68;
      *(undefined8 *)(puVar4 + 10) = uStack_70;
      *(undefined8 *)(puVar4 + 0xe) = uStack_60;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_1099f5244(&uStack_70,*(long *)(param_1 + 0x68),*(long *)(param_1 + 0x70),
                    (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3) *
                    -0x5555555555555555);
      FUN_10937d1e4(puVar4 + 0x10);
      *(undefined8 *)(puVar4 + 0x12) = uStack_68;
      *(undefined8 *)(puVar4 + 0x10) = uStack_70;
      *(undefined8 *)(puVar4 + 0x14) = uStack_60;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      puStack_58 = (undefined1 *)&uStack_70;
      func_0x0001092a9abc(&puStack_58);
      iVar3 = puVar4[1] * iVar3;
      if (*param_1 == '\x01') {
        if (lVar5 + (int)~*puVar4 == 0) {
          return iVar3;
        }
        uVar6 = 0;
        lVar2 = *(long *)(param_1 + 0x100);
        do {
          lVar2 = lVar2 + -0x58;
          FUN_1099f6180(lVar2);
          *(long *)(param_1 + 0x100) = lVar2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulong)(lVar5 + (int)~*puVar4));
        return iVar3;
      }
      puVar4 = puVar4 + 0x16;
    } while (puVar4 != puVar1);
  }
  return iVar3;
}



/* Entry: 1099f5bf4; end: 1099f5f33;  */

void FUN_1099f5bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  uint *puVar9;
  long **pplVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  long **pplVar17;
  int *piVar18;
  uint *puVar19;
  long *plVar20;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long **pplStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  long **pplStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
  uStack_64 = (uint)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 5);
  pplStack_78 = (long **)0x0;
  uStack_70 = 0;
  pplStack_80 = (long **)0x0;
  lVar14 = *(long *)(*(long *)(param_1 + 0xf8) + 0x10);
  lVar4 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
  FUN_1099f5094(&pplStack_80,lVar14,lVar4,(lVar4 - lVar14 >> 3) * -0x5555555555555555);
  pplVar10 = pplStack_78;
  piVar18 = *(int **)(param_1 + 0xf8);
  for (pplVar17 = pplStack_80; pplVar17 != pplVar10; pplVar17 = pplVar17 + 3) {
    lVar14 = (long)pplVar17[1] - (long)*pplVar17 >> 2;
    if (lVar14 != piVar18[1]) {
      uVar16 = 0;
      do {
        FUN_109231afc(pplVar17,&uStack_64);
        uVar16 = uVar16 + 1;
        piVar18 = *(int **)(param_1 + 0xf8);
      } while (uVar16 < (ulong)(piVar18[1] - lVar14));
    }
  }
  piVar13 = *(int **)(param_1 + 0x100);
  pplVar17 = pplStack_80;
  pplVar10 = pplStack_78;
  for (; pplStack_80 = pplVar17, pplStack_78 = pplVar10, piVar18 != piVar13;
      piVar18 = piVar18 + 0x16) {
    if (*piVar18 != 0) {
      FUN_1099f5490(&pplStack_a0,
                    (*(long *)(piVar18 + 0x12) - *(long *)(piVar18 + 0x10) >> 3) *
                    -0x5555555555555555);
      plVar20 = *(long **)(piVar18 + 0x10);
      plVar5 = *(long **)(piVar18 + 0x12);
      if (plVar20 != plVar5) {
        lVar14 = 0;
        do {
          plVar2 = *pplStack_80;
          plVar6 = pplStack_80[1];
          piVar7 = (int *)plVar20[1];
          for (piVar15 = (int *)*plVar20; piVar15 != piVar7; piVar15 = piVar15 + 1) {
            plVar3 = pplStack_80[(long)*piVar15 * 3];
            plVar8 = (pplStack_80 + (long)*piVar15 * 3)[1];
            FUN_1099f6340(pplStack_a0 + lVar14 * 3,(pplStack_a0 + lVar14 * 3)[1],plVar3,plVar8,
                          (long)plVar8 - (long)plVar3 >> 2);
          }
          FUN_109849bf0(&ppplStack_b8,(long)plVar6 - (long)plVar2 >> 2,&uStack_64);
          if ((long)piVar18[1] != plVar20[1] - *plVar20 >> 2) {
            uVar16 = 0;
            do {
              FUN_1099f6340(pplStack_a0 + lVar14 * 3,(pplStack_a0 + lVar14 * 3)[1],ppplStack_b8,
                            ppplStack_b0,(long)ppplStack_b0 - (long)ppplStack_b8 >> 2);
              uVar16 = uVar16 + 1;
            } while (uVar16 < (ulong)((long)piVar18[1] - (plVar20[1] - *plVar20 >> 2)));
          }
          if (ppplStack_b8 != (long ***)0x0) {
            ppplStack_b0 = ppplStack_b8;
            __ZdlPv();
          }
          lVar14 = lVar14 + 1;
          plVar20 = plVar20 + 3;
        } while (plVar20 != plVar5);
      }
      uVar11 = uStack_70;
      pplVar10 = pplStack_78;
      pplVar17 = pplStack_80;
      pplStack_78 = pplStack_98;
      pplStack_80 = pplStack_a0;
      pplStack_98 = pplVar10;
      pplStack_a0 = pplVar17;
      uStack_70 = uStack_90;
      uStack_90 = uVar11;
      ppplStack_b8 = &pplStack_a0;
      func_0x000109848f28(&ppplStack_b8);
    }
    pplVar17 = pplStack_80;
    pplVar10 = pplStack_78;
  }
  if (pplVar17 != pplVar10) {
    do {
      puVar9 = (uint *)pplVar17[1];
      for (puVar19 = (uint *)*pplVar17; puVar19 != puVar9; puVar19 = puVar19 + 1) {
        if (*puVar19 == uStack_64) {
          pplStack_a0 = (long **)0xffffffffffffffff;
          uVar12 = 0xffffffff;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*puVar19 * 0x20);
          pplStack_a0 = (long **)*puVar1;
          uVar12 = *(undefined4 *)(puVar1 + 1);
        }
        pplStack_98 = (long **)CONCAT44(pplStack_98._4_4_,uVar12);
        ppplStack_b8 = (long ***)CONCAT44(ppplStack_b8._4_4_,*puVar19);
        FUN_109231afc(param_2,&pplStack_a0);
        FUN_109231afc(param_2,(ulong)&pplStack_a0 | 4);
        FUN_109231afc(param_2,(ulong)&pplStack_a0 | 8);
        FUN_109231afc(param_3,&ppplStack_b8);
      }
      pplVar17 = pplVar17 + 3;
    } while (pplVar17 != pplVar10);
  }
  pplStack_a0 = (long **)&pplStack_80;
  func_0x000109848f28(&pplStack_a0);
  return;
}



/* Entry: 1099f5f34; end: 1099f616b;  */

void FUN_1099f5f34(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar5 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    lVar10 = (long)puVar5 - *param_1;
    uVar3 = param_2 + (lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (0x2e8ba2e8ba2e8ba < uVar3) {
      FUN_1099f616c();
LAB_1099f6168:
      func_0x000104c4f740();
      pcStack_68 = FUN_1099f616c;
      puVar2 = &DAT_10f62a4d8;
      puStack_70 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_78 = FUN_1099f6180;
      puStack_98 = puVar2 + 0x40;
      uStack_90 = param_2;
      plStack_88 = param_1;
      puStack_80 = (undefined1 *)&puStack_70;
      func_0x0001092a9abc(&puStack_98);
      if (*(long *)(puVar2 + 0x28) != 0) {
        *(long *)(puVar2 + 0x30) = *(long *)(puVar2 + 0x28);
        __ZdlPv();
      }
      puStack_98 = puVar2 + 0x10;
      func_0x000109848f28(&puStack_98);
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    if (uVar8 < uVar3 || uVar8 - uVar3 == 0) {
      uVar8 = uVar3;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar8 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar8) goto LAB_1099f6168;
      lVar7 = uVar8 * 0x58;
      __Znwm();
    }
    puVar4 = (undefined8 *)(lVar7 + lVar10);
    lStack_40 = lVar7 + uVar8 * 0x58;
    puStack_48 = puVar4 + param_2 * 0xb;
    puVar5 = puVar4;
    do {
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 1;
      *(undefined8 *)((long)puVar5 + 0x14) = 0;
      *(undefined8 *)((long)puVar5 + 0xc) = 0;
      *(undefined8 *)((long)puVar5 + 0x24) = 0;
      *(undefined8 *)((long)puVar5 + 0x1c) = 0;
      *(undefined8 *)((long)puVar5 + 0x34) = 0;
      *(undefined8 *)((long)puVar5 + 0x2c) = 0;
      *(undefined8 *)((long)puVar5 + 0x44) = 0;
      *(undefined8 *)((long)puVar5 + 0x3c) = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5 = puVar5 + 0xb;
    } while (puVar5 != puStack_48);
    puVar9 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)((long)puVar4 + ((long)puVar9 - (long)puVar1));
    puVar5 = puVar9;
    puVar6 = puVar4;
    if ((long)puVar9 - (long)puVar1 != 0) {
      do {
        uVar11 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar6 = uVar11;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        uVar11 = puVar5[2];
        puVar6[3] = puVar5[3];
        puVar6[2] = uVar11;
        puVar6[4] = puVar5[4];
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        uVar11 = puVar5[5];
        puVar6[6] = puVar5[6];
        puVar6[5] = uVar11;
        puVar6[7] = puVar5[7];
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        uVar11 = puVar5[8];
        puVar6[9] = puVar5[9];
        puVar6[8] = uVar11;
        puVar6[10] = puVar5[10];
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5 = puVar5 + 0xb;
        puVar6 = puVar6 + 0xb;
      } while (puVar5 != puVar1);
      do {
        FUN_1099f6180(puVar9);
        puVar9 = puVar9 + 0xb;
      } while (puVar9 != puVar1);
      puVar9 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar4;
    param_1[1] = (long)puStack_48;
    lVar10 = param_1[2];
    param_1[2] = lStack_40;
    puStack_58 = puVar9;
    puStack_50 = puVar9;
    puStack_48 = puVar9;
    lStack_40 = lVar10;
    func_0x0001099f61d4(&puStack_58);
  }
  else {
    puVar4 = puVar5;
    if (param_2 != 0) {
      puVar4 = puVar5 + param_2 * 0xb;
      do {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 1;
        *(undefined8 *)((long)puVar5 + 0x14) = 0;
        *(undefined8 *)((long)puVar5 + 0xc) = 0;
        *(undefined8 *)((long)puVar5 + 0x24) = 0;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0;
        *(undefined8 *)((long)puVar5 + 0x34) = 0;
        *(undefined8 *)((long)puVar5 + 0x2c) = 0;
        *(undefined8 *)((long)puVar5 + 0x44) = 0;
        *(undefined8 *)((long)puVar5 + 0x3c) = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5 = puVar5 + 0xb;
      } while (puVar5 != puVar4);
    }
    param_1[1] = (long)puVar4;
  }
  return;
}



/* Entry: 1099f616c; end: 1099f617f;  */

void FUN_1099f616c(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puStack_38 = puVar1 + 0x40;
  func_0x0001092a9abc(&puStack_38);
  if (*(long *)(puVar1 + 0x28) != 0) {
    *(long *)(puVar1 + 0x30) = *(long *)(puVar1 + 0x28);
    __ZdlPv();
  }
  puStack_38 = puVar1 + 0x10;
  func_0x000109848f28(&puStack_38);
  return;
}



/* Entry: 1099f6180; end: 1099f621f;  */

void FUN_1099f6180(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x40;
  func_0x0001092a9abc(&lStack_28);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x10;
  func_0x000109848f28(&lStack_28);
  return;
}



/* Entry: 1099f6220; end: 1099f628f;  */

void FUN_1099f6220(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_1099f6180(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1099f6290; end: 1099f633f;  */

long FUN_1099f6290(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xe0;
  func_0x000109848f28(&lStack_28);
  if (*(long *)(param_1 + 200) != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 200);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x98;
  FUN_1099f4bb8(&lStack_28);
  lStack_28 = param_1 + 0x80;
  FUN_1099f4bb8(&lStack_28);
  lStack_28 = param_1 + 0x68;
  func_0x0001092a9abc(&lStack_28);
  FUN_1099f5530(param_1 + 0x40);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099f6340; end: 1099f6587;  */

ulong * FUN_1099f6340(ulong *param_1,ulong *param_2,undefined4 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uStack_c0;
  undefined4 uStack_b8;
  ulong uStack_b0;
  undefined4 uStack_a8;
  
  uVar6 = (undefined4)param_4;
  puVar3 = param_1;
  if (0 < param_5) {
    puVar4 = (ulong *)param_1[1];
    if ((long)(param_1[2] - (long)puVar4) >> 2 < param_5) {
      uVar11 = *param_1;
      uVar1 = param_5 + ((long)((long)puVar4 - uVar11) >> 2);
      if (uVar1 >> 0x3e != 0) {
        FUN_109231bc0();
        *param_1 = (ulong)param_2;
        iVar5 = (int)param_3;
        *(int *)(param_1 + 1) = iVar5;
        *(undefined4 *)((long)param_1 + 0xc) = uVar6;
        puVar3 = param_1 + 2;
        *puVar3 = 0x7f7fffff7f7fffff;
        *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
        param_1[4] = 0xff7fffffff7fffff;
        *(undefined4 *)(param_1 + 5) = 0xff7fffff;
        *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
        FUN_109a1588c(&uStack_c0,puVar3,param_2[0x10] + (long)iVar5 * 0xa0 + 0x60);
        *puVar3 = uStack_c0;
        *(undefined4 *)(param_1 + 3) = uStack_b8;
        param_1[4] = uStack_b0;
        *(undefined4 *)(param_1 + 5) = uStack_a8;
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2[0x10] + (long)iVar5 * 0xa0 + 0x10);
        lVar8 = *(long *)(*param_1 + 0x80) + (long)iVar5 * 0xa0;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar8 + 0x20);
        *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(lVar8 + 0x24);
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar8 + 0x28);
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar8 + 0x30);
        *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(lVar8 + 0x34);
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar8 + 0x38);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar8 + 0x40);
        return param_1;
      }
      uVar7 = param_1[2] - uVar11;
      uVar12 = (long)uVar7 >> 1;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar7) {
        uVar12 = 0x3fffffffffffffff;
      }
      if (uVar12 == 0) {
        puVar3 = (ulong *)0x0;
      }
      else {
        func_0x000107c2ab8c();
      }
      puVar2 = (undefined4 *)((long)puVar3 + ((long)param_2 - uVar11));
      lVar8 = param_5 << 2;
      puVar10 = puVar2;
      do {
        *puVar10 = *param_3;
        lVar8 = lVar8 + -4;
        puVar10 = puVar10 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      _memcpy(puVar2 + param_5,param_2,param_1[1] - (long)param_2);
      uVar1 = param_1[1];
      param_1[1] = (ulong)param_2;
      uVar11 = (long)puVar2 - ((long)param_2 - *param_1);
      _memcpy(uVar11);
      puVar4 = (ulong *)*param_1;
      *param_1 = uVar11;
      param_1[1] = (long)(puVar2 + param_5) + (uVar1 - (long)param_2);
      param_1[2] = (long)puVar3 + uVar12 * 4;
      puVar3 = (ulong *)0x0;
      if (puVar4 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return puVar4;
      }
    }
    else {
      lVar8 = (long)puVar4 - (long)param_2;
      if (param_5 <= lVar8 >> 2) {
        puVar3 = (ulong *)((long)param_2 + param_5 * 4);
        puVar15 = puVar4;
        for (puVar9 = (ulong *)((long)puVar4 + param_5 * -4); puVar9 < puVar4;
            puVar9 = (ulong *)((long)puVar9 + 4)) {
          *(int *)puVar15 = (int)*puVar9;
          puVar15 = (ulong *)((long)puVar15 + 4);
        }
        param_1[1] = (ulong)puVar15;
        if (puVar4 != puVar3) {
          _memmove(puVar3,param_2);
        }
        lVar8 = param_5 << 2;
LAB_1099f64c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar8);
        return param_2;
      }
      lVar16 = param_4 - (lVar8 + (long)param_3);
      if (lVar16 != 0) {
        puVar3 = puVar4;
        _memmove(puVar4,lVar8 + (long)param_3,lVar16);
      }
      puVar15 = (ulong *)((long)puVar4 + lVar16);
      param_1[1] = (ulong)puVar15;
      if (0 < lVar8 >> 2) {
        puVar9 = (ulong *)((long)param_2 + param_5 * 4);
        puVar14 = puVar15;
        if ((ulong)((long)puVar15 + param_5 * -4) < puVar4) {
          lVar13 = -(long)param_3;
          param_4 = param_4 + (long)param_2;
          lVar16 = param_4 + param_5 * -4;
          do {
            *(undefined4 *)(param_4 + lVar13) = *(undefined4 *)(lVar16 + lVar13);
            lVar16 = lVar16 + 4;
            param_4 = param_4 + 4;
          } while ((ulong)(lVar16 + lVar13) < puVar4);
          puVar14 = (ulong *)(param_4 - (long)param_3);
        }
        param_1[1] = (ulong)puVar14;
        if (puVar15 != puVar9) {
          _memmove(puVar9,param_2);
          puVar3 = puVar9;
        }
        if (puVar4 != param_2) goto LAB_1099f64c4;
      }
    }
  }
  return puVar3;
}



/* Entry: 1099f6588; end: 1099f668b;  */

long * FUN_1099f6588(long *param_1,long param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  plVar2 = param_1 + 2;
  *plVar2 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
  param_1[4] = -0x80000000800001;
  *(undefined4 *)(param_1 + 5) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  FUN_109a1588c(&lStack_60,plVar2,*(long *)(param_2 + 0x80) + (long)param_3 * 0xa0 + 0x60);
  *plVar2 = lStack_60;
  *(undefined4 *)(param_1 + 3) = uStack_58;
  param_1[4] = lStack_50;
  *(undefined4 *)(param_1 + 5) = uStack_48;
  *(undefined4 *)(param_1 + 6) =
       *(undefined4 *)(*(long *)(param_2 + 0x80) + (long)param_3 * 0xa0 + 0x10);
  lVar1 = *(long *)(*param_1 + 0x80) + (long)param_3 * 0xa0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(lVar1 + 0x24);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(lVar1 + 0x34);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0x40);
  return param_1;
}



/* Entry: 1099f668c; end: 1099f675f;  */

undefined4 FUN_1099f668c(float param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  
  lVar5 = *(long *)(*param_2 + 0x80) + (long)(int)param_2[1] * 0xa0;
  plVar7 = *(long **)(lVar5 + 0x80);
  plVar1 = (long *)(lVar5 + 0x88);
  plVar3 = plVar7;
  plVar8 = plVar1;
  if (plVar7 != plVar1) {
    while( true ) {
      plVar8 = plVar3;
      plVar3 = (long *)plVar7[1];
      plVar6 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar4 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar4);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 == plVar1) break;
      uVar2 = *(undefined4 *)((long)plVar8 + 0x1c);
      FUN_1099f6874(param_2,*(undefined4 *)((long)plVar7 + 0x1c),param_3);
      fVar9 = param_1;
      FUN_1099f6874(param_2,uVar2,param_3);
      bVar4 = fVar9 <= param_1;
      plVar3 = plVar7;
      param_1 = fVar9;
      if (bVar4) {
        plVar3 = plVar8;
      }
    }
  }
  return *(undefined4 *)((long)plVar8 + 0x1c);
}



/* Entry: 1099f6760; end: 1099f67ef;  */

/* WARNING: Possible PIC construction at 0x0001099f6958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001099f69c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001099f695c) */
/* WARNING: Removing unreachable block (ram,0x0001099f69cc) */
/* WARNING: Removing unreachable block (ram,0x0001099f6a14) */
/* WARNING: Removing unreachable block (ram,0x0001099f69e4) */

long * FUN_1099f6760(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  long lStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  FUN_109a1588c(&lStack_50,param_1 + 2,*(long *)(*param_1 + 0x80) + (long)param_2 * 0xa0 + 0x60);
  param_1[2] = lStack_50;
  *(undefined4 *)(param_1 + 3) = uStack_48;
  param_1[4] = CONCAT44(uStack_3c,uStack_40);
  *(undefined4 *)(param_1 + 5) = uStack_38;
  lVar6 = *(long *)(*param_1 + 0x80) + (long)param_2 * 0xa0;
  *(float *)(param_1 + 6) = *(float *)(lVar6 + 0x10) + *(float *)(param_1 + 6);
  plVar1 = param_1 + 8;
  iVar5 = (int)lVar6 + 0x20;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar1;
  func_0x0001099f6ac0(&lStack_60);
  *plVar1 = lStack_60;
  *(undefined4 *)(param_1 + 9) = uStack_58;
  param_1[10] = lStack_50;
  *(undefined4 *)(param_1 + 0xb) = uStack_48;
  *(undefined4 *)(param_1 + 0xc) = uStack_40;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (param_3 == 2) {
    uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x0001099f6ac0(auStack_d0,*(long *)(*plVar4 + 0x80) + (long)iVar5 * 0xa0 + 0x20,plVar4 + 8)
    ;
  }
  else if ((param_3 != 1) && (param_3 == 0)) {
    return plVar4;
  }
  lVar6 = *(long *)(*plVar4 + 0x98) + (long)iVar5 * 0xa0;
  plVar7 = *(long **)(lVar6 + 0x80);
  plVar1 = (long *)(lVar6 + 0x88);
  if (plVar7 != plVar1) {
    do {
      plVar8 = plVar7;
      plVar2 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != plVar1);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 1099f67f0; end: 1099f6873;  */

/* WARNING: Possible PIC construction at 0x0001099f6958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001099f69c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001099f695c) */
/* WARNING: Removing unreachable block (ram,0x0001099f69cc) */
/* WARNING: Removing unreachable block (ram,0x0001099f6a14) */
/* WARNING: Removing unreachable block (ram,0x0001099f69e4) */

long * FUN_1099f67f0(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  long lStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  func_0x0001099f6ac0(&lStack_60);
  *param_1 = lStack_60;
  *(undefined4 *)(param_1 + 1) = uStack_58;
  param_1[2] = lStack_50;
  *(undefined4 *)(param_1 + 3) = uStack_48;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_3 == 2) {
    uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x0001099f6ac0(auStack_d0,*(long *)(*plVar4 + 0x80) + (long)param_2 * 0xa0 + 0x20,
                        plVar4 + 8);
  }
  else if ((param_3 != 1) && (param_3 == 0)) {
    return plVar4;
  }
  lVar5 = *(long *)(*plVar4 + 0x98) + (long)param_2 * 0xa0;
  plVar6 = *(long **)(lVar5 + 0x80);
  plVar1 = (long *)(lVar5 + 0x88);
  if (plVar6 != plVar1) {
    do {
      plVar7 = plVar6;
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != plVar1);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 1099f6874; end: 1099f68d7;  */

float FUN_1099f6874(float param_1,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar15;
  ulong uVar14;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_70 [16];
  float fStack_60;
  undefined8 uStack_5c;
  long lStack_38;
  
  if (param_4 != 2) {
    if ((param_4 != 1) && (param_4 == 0)) {
      lVar6 = *(long *)(*param_2 + 0x80) + (long)(int)param_2[1] * 0xa0;
      lVar5 = *(long *)(*param_2 + 0x80) + (long)param_3 * 0xa0;
      uVar13 = *(undefined8 *)(lVar6 + 0x50);
      uVar16 = *(undefined8 *)(lVar5 + 0x50);
      fVar12 = ABS((float)uVar13 - (float)uVar16);
      fVar15 = ABS((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar16 >> 0x20));
      fVar9 = ABS(*(float *)(lVar6 + 0x58) - *(float *)(lVar5 + 0x58));
      if (fVar15 <= fVar12) {
        fVar15 = fVar12;
      }
      if (fVar9 <= fVar15) {
        fVar9 = fVar15;
      }
      return fVar9;
    }
    lVar5 = *(long *)(*param_2 + 0x80) + (long)param_3 * 0xa0;
    fVar9 = *(float *)(param_2 + 3);
    if (*(float *)(lVar5 + 0x68) <= *(float *)(param_2 + 3)) {
      fVar9 = *(float *)(lVar5 + 0x68);
    }
    fVar15 = *(float *)(param_2 + 5);
    if (*(float *)(param_2 + 5) <= *(float *)(lVar5 + 0x78)) {
      fVar15 = *(float *)(lVar5 + 0x78);
    }
    uVar10 = *(ulong *)(lVar5 + 0x60);
    uVar14 = *(ulong *)(lVar5 + 0x70);
    uVar17 = param_2[2];
    uVar10 = uVar10 ^ (uVar10 ^ uVar17) &
                      CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar10 >> 0x20)),
                               -(uint)((float)uVar17 < (float)uVar10));
    uVar17 = param_2[4];
    uVar14 = uVar14 ^ (uVar14 ^ uVar17) &
                      CONCAT44(-(uint)((float)(uVar14 >> 0x20) < (float)(uVar17 >> 0x20)),
                               -(uint)((float)uVar14 < (float)uVar17));
    fVar12 = (float)uVar14 - (float)uVar10;
    fVar11 = (float)(uVar14 >> 0x20) - (float)(uVar10 >> 0x20);
    fVar9 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + (fVar15 - fVar9) * (fVar15 - fVar9));
    fVar15 = fVar9 / *(float *)(param_2 + 6);
    FUN_1099f6a18(fVar9);
    return fVar15 - fVar9;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001099f6ac0(auStack_70,*(long *)(*param_2 + 0x80) + (long)param_3 * 0xa0 + 0x20,
                      param_2 + 8);
  FUN_1099f6a18();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    fVar9 = (float)((ulong)uStack_5c >> 0x20);
    return SQRT(fStack_60 * fStack_60 + (float)uStack_5c * (float)uStack_5c + fVar9 * fVar9) -
           param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(*param_2 + 0x98) + (long)param_3 * 0xa0;
  plVar7 = *(long **)(lVar5 + 0x80);
  plVar1 = (long *)(lVar5 + 0x88);
  if (plVar7 != plVar1) {
    fVar15 = 0.0;
    fVar9 = 0.0;
    do {
      iVar2 = *(int *)(*(long *)(*param_2 + 0x80) + (long)*(int *)((long)plVar7 + 0x1c) * 0xa0 + 8);
      fVar12 = fVar9 + 1.0;
      if (iVar2 != *(int *)((long)param_2 + 0xc)) {
        fVar12 = fVar9;
      }
      fVar9 = fVar15 + 1.0;
      if (*(int *)((long)param_2 + 0xc) <= iVar2) {
        fVar9 = fVar15;
      }
      if (-1 < iVar2) {
        fVar15 = fVar9;
      }
      plVar8 = plVar7;
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar4 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar4);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      fVar9 = fVar12;
    } while (plVar7 != plVar1);
    return fVar12 + fVar15;
  }
  return 0.0;
}



/* Entry: 1099f68d8; end: 1099f696b;  */

float FUN_1099f68d8(long *param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  
  lVar1 = *(long *)(*param_1 + 0x80) + (long)param_2 * 0xa0;
  fVar2 = *(float *)(param_1 + 3);
  if (*(float *)(lVar1 + 0x68) <= *(float *)(param_1 + 3)) {
    fVar2 = *(float *)(lVar1 + 0x68);
  }
  fVar8 = *(float *)(param_1 + 5);
  if (*(float *)(param_1 + 5) <= *(float *)(lVar1 + 0x78)) {
    fVar8 = *(float *)(lVar1 + 0x78);
  }
  uVar4 = *(ulong *)(lVar1 + 0x60);
  uVar6 = *(ulong *)(lVar1 + 0x70);
  uVar7 = param_1[2];
  uVar4 = uVar4 ^ (uVar4 ^ uVar7) &
                  CONCAT44(-(uint)((float)(uVar7 >> 0x20) < (float)(uVar4 >> 0x20)),
                           -(uint)((float)uVar7 < (float)uVar4));
  uVar7 = param_1[4];
  uVar6 = uVar6 ^ (uVar6 ^ uVar7) &
                  CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(uVar7 >> 0x20)),
                           -(uint)((float)uVar6 < (float)uVar7));
  fVar3 = (float)uVar6 - (float)uVar4;
  fVar5 = (float)(uVar6 >> 0x20) - (float)(uVar4 >> 0x20);
  fVar2 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + (fVar8 - fVar2) * (fVar8 - fVar2));
  fVar8 = fVar2 / *(float *)(param_1 + 6);
  FUN_1099f6a18(fVar2);
  return fVar8 - fVar2;
}



/* Entry: 1099f696c; end: 1099f6a17;  */

/* WARNING: Possible PIC construction at 0x0001099f69c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001099f69cc) */
/* WARNING: Removing unreachable block (ram,0x0001099f6a14) */
/* WARNING: Removing unreachable block (ram,0x0001099f69e4) */

float FUN_1099f696c(long *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001099f6ac0(auStack_70,*(long *)(*param_1 + 0x80) + (long)param_2 * 0xa0 + 0x20,
                      param_1 + 8);
  lVar5 = *(long *)(*param_1 + 0x98) + (long)param_2 * 0xa0;
  plVar6 = *(long **)(lVar5 + 0x80);
  plVar1 = (long *)(lVar5 + 0x88);
  if (plVar6 == plVar1) {
    return 0.0;
  }
  fVar10 = 0.0;
  fVar8 = 0.0;
  do {
    iVar2 = *(int *)(*(long *)(*param_1 + 0x80) + (long)*(int *)((long)plVar6 + 0x1c) * 0xa0 + 8);
    fVar9 = fVar8 + 1.0;
    if (iVar2 != *(int *)((long)param_1 + 0xc)) {
      fVar9 = fVar8;
    }
    fVar8 = fVar10 + 1.0;
    if (*(int *)((long)param_1 + 0xc) <= iVar2) {
      fVar8 = fVar10;
    }
    if (-1 < iVar2) {
      fVar10 = fVar8;
    }
    plVar7 = plVar6;
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar4 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar4);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    fVar8 = fVar9;
  } while (plVar6 != plVar1);
  return fVar9 + fVar10;
}



/* Entry: 1099f6a18; end: 1099f6b87;  */

float FUN_1099f6a18(long *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar5 = *(long *)(*param_1 + 0x98) + (long)param_2 * 0xa0;
  plVar6 = *(long **)(lVar5 + 0x80);
  plVar1 = (long *)(lVar5 + 0x88);
  if (plVar6 == plVar1) {
    return 0.0;
  }
  fVar10 = 0.0;
  fVar8 = 0.0;
  do {
    iVar2 = *(int *)(*(long *)(*param_1 + 0x80) + (long)*(int *)((long)plVar6 + 0x1c) * 0xa0 + 8);
    fVar9 = fVar8 + 1.0;
    if (iVar2 != *(int *)((long)param_1 + 0xc)) {
      fVar9 = fVar8;
    }
    fVar8 = fVar10 + 1.0;
    if (*(int *)((long)param_1 + 0xc) <= iVar2) {
      fVar8 = fVar10;
    }
    if (-1 < iVar2) {
      fVar10 = fVar8;
    }
    plVar7 = plVar6;
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar4 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar4);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    fVar8 = fVar9;
  } while (plVar6 != plVar1);
  return fVar9 + fVar10;
}


