/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109299e8c; end: 109299eff;  */

undefined8 FUN_109299e8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x40038;
  _malloc(0x40038);
  uVar2 = uVar1;
  FUN_109299e48();
  _free(uVar1);
  return uVar2;
}



/* Entry: 109299f00; end: 10929c3fb;  */

void FUN_109299f00(long param_1,ulong *param_2,short *param_3,uint *param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  short sVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  short *psVar19;
  short *psVar20;
  ulong *puVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  ulong *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong *puVar39;
  short *psVar40;
  short *psVar41;
  ulong *puVar42;
  long lVar43;
  int iVar44;
  ulong *puVar45;
  ulong *puVar46;
  ulong *puVar47;
  long lVar48;
  ulong *puVar49;
  ulong *puVar50;
  ulong *puVar51;
  long lVar52;
  long lVar53;
  int iVar54;
  int iVar55;
  ulong *puVar56;
  uint uVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  ulong uVar61;
  short *psVar62;
  ulong *puVar63;
  ulong *puVar64;
  int iVar65;
  ulong *puVar66;
  ulong uVar67;
  ulong *puVar68;
  ulong *puVar69;
  long lVar70;
  uint *puStack_200;
  uint *puStack_1c8;
  ulong *puStack_1c0;
  short *psStack_1b8;
  ulong *puStack_1a0;
  uint *puStack_190;
  ulong *puStack_180;
  ulong uStack_170;
  uint *puStack_160;
  ulong *puStack_150;
  ulong uStack_d8;
  ulong uStack_c0;
  uint uStack_74;
  uint uStack_70;
  uint auStack_6c [3];
  
  uVar9 = *param_4;
  uVar67 = (ulong)uVar9;
  if (uVar9 < 0x7e000001) {
    *(long *)(param_1 + 0x40000) = *(long *)(param_1 + 0x40000) + uVar67;
    uVar7 = param_6;
    if (0xb < param_6) {
      uVar7 = 0xc;
    }
    uVar24 = 9;
    if (0 < (int)param_6) {
      uVar24 = uVar7;
    }
    lVar10 = (ulong)uVar24 * 0xc;
    uVar7 = *(uint *)(&UNK_10dfc0e84 + lVar10);
    if (*(int *)(&UNK_10dfc0e80 + lVar10) == 0) {
      iVar23 = (int)param_7;
      pcVar2 = (char *)((long)param_3 + (long)(int)param_5);
      *param_4 = 0;
      puStack_180 = param_2;
      if (0xc < uVar9) {
        puStack_1c8 = (uint *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_160 = (uint *)0x0;
        puStack_190 = (uint *)0x0;
        puVar56 = (ulong *)((long)param_2 + (uVar67 - 0xc));
        puVar21 = (ulong *)((long)param_2 + (uVar67 - 5));
        lVar10 = param_1 + 0x20000;
        puVar42 = (ulong *)((long)param_2 + (uVar67 - 8));
        puVar32 = (ulong *)((long)param_2 + (uVar67 - 6));
        puStack_150 = (ulong *)0x0;
        puStack_180 = param_2;
LAB_10929a060:
        uVar6 = *(uint *)(param_1 + 0x40018);
        uVar8 = *(uint *)(param_1 + 0x4001c);
        lVar70 = *(long *)(param_1 + 0x40008);
        lVar59 = *(long *)(param_1 + 0x40010);
        puVar64 = (ulong *)(lVar70 + (ulong)uVar6);
        uVar24 = (int)puStack_180 - (int)lVar70;
        iVar27 = -4 - (int)puStack_180;
        puVar66 = puStack_180;
        puVar22 = puStack_190;
        puVar63 = puStack_180;
        uVar28 = *(uint *)(param_1 + 0x40020);
LAB_10929a0b4:
        uVar57 = (int)puVar66 - (int)lVar70;
        uVar25 = uVar8;
        if (uVar8 + 0x10000 <= uVar57) {
          uVar25 = uVar57 - 0xffff;
        }
        uVar30 = (uint)*puVar66;
        if (uVar28 < uVar57) {
          uVar33 = (ulong)uVar28;
          do {
            uVar26 = (uint)(*(int *)(lVar70 + uVar33) * -0x61c8864f) >> 0x11;
            uVar28 = (int)uVar33 - *(int *)(param_1 + (ulong)uVar26 * 4);
            if (0xfffe < uVar28) {
              uVar28 = 0xffff;
            }
            *(short *)(lVar10 + (uVar33 & 0xffff) * 2) = (short)uVar28;
            *(int *)(param_1 + (ulong)uVar26 * 4) = (int)uVar33;
            uVar33 = uVar33 + 1;
          } while (uVar24 != uVar33);
        }
        *(uint *)(param_1 + 0x40020) = uVar57;
        uVar28 = *(uint *)(param_1 + (ulong)((uint)*puVar66 * -0x61c8864f >> 0x11) * 4);
        if (uVar25 <= uVar28 && uVar7 != 0) {
          iVar65 = 0;
          uStack_c0 = 0;
          puVar68 = (ulong *)((long)puVar66 + 4);
          puVar69 = (ulong *)((long)puVar66 - 0xffff);
          if (puVar66 <= (ulong *)((long)puVar64 + 0xffffU)) {
            puVar69 = puVar64;
          }
          uVar33 = 3;
          uVar26 = uVar7;
          do {
            uVar58 = (ulong)uVar28;
            uVar36 = (uint)uVar33;
            if (uVar28 < uVar6) {
              puVar16 = (uint *)(lVar59 + uVar58);
              if (*puVar16 == uVar30) {
                puVar17 = (ulong *)((long)puVar66 + (ulong)(uVar6 - uVar28));
                puVar39 = puVar21;
                if (puVar17 <= puVar21) {
                  puVar39 = puVar17;
                }
                puVar17 = (ulong *)(puVar16 + 1);
                puVar50 = (ulong *)((long)puVar39 - 7);
                puVar18 = puVar68;
                if (puVar68 < puVar50) {
                  if (*puVar17 == *puVar68) {
                    puVar17 = (ulong *)(puVar16 + 3);
                    puVar18 = (ulong *)((long)puVar66 + 0xc);
                    goto LAB_10929a1fc;
                  }
                  uVar33 = *puVar68 ^ *puVar17;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar38 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
                }
                else {
LAB_10929a1fc:
                  if (puVar18 < puVar50) {
                    iVar54 = iVar27 + (int)puVar18;
                    puVar45 = puVar18;
                    puVar51 = puVar17;
                    do {
                      puVar17 = puVar51 + 1;
                      puVar18 = puVar45 + 1;
                      if (*puVar51 != *puVar45) {
                        uVar33 = *puVar45 ^ *puVar51;
                        uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar33 & 0x5555555555555555) << 1;
                        uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                                 (uVar33 & 0x3333333333333333) << 2;
                        uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar33 & 0xff00ff00ff00ff) << 8;
                        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar33 & 0xffff0000ffff) << 0x10;
                        uVar38 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) +
                                 iVar54;
                        goto LAB_10929a3ac;
                      }
                      iVar54 = iVar54 + 8;
                      puVar45 = puVar18;
                      puVar51 = puVar17;
                    } while (puVar18 < puVar50);
                  }
                  if (puVar18 < (ulong *)((long)puVar39 - 3U)) {
                    if ((uint)*puVar17 == (uint)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar17 = (ulong *)((long)puVar17 + 4);
                    }
                  }
                  if (puVar18 < (ulong *)((long)puVar39 - 1U)) {
                    if ((short)*puVar17 == (short)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar17 = (ulong *)((long)puVar17 + 2);
                    }
                  }
                  if ((puVar18 < puVar39) && ((char)*puVar17 == (char)*puVar18)) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                  uVar38 = (int)puVar18 - (int)puVar68;
                }
LAB_10929a3ac:
                uVar38 = uVar38 + 4;
                if ((puVar39 < puVar21) &&
                   (puVar17 = (ulong *)((long)puVar66 + (long)(int)uVar38), puVar17 == puVar39)) {
                  puVar18 = puVar17;
                  puVar50 = puVar64;
                  if (puVar39 < puVar56) {
                    puVar18 = puVar17 + 1;
                    puVar50 = puVar64 + 1;
                    if (*puVar64 == *puVar17) goto LAB_10929a3e4;
                    uVar33 = *puVar17 ^ *puVar64;
                    uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1
                    ;
                    uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2
                    ;
                    uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                    uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar33 & 0xffff0000ffff) << 0x10;
                    uVar37 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
                  }
                  else {
LAB_10929a3e4:
                    if (puVar18 < puVar56) {
                      puVar17 = (ulong *)((long)puVar63 + (ulong)(uVar6 - uVar28));
                      puVar45 = puVar21;
                      if (puVar17 <= puVar21) {
                        puVar45 = puVar17;
                      }
                      iVar54 = (int)puVar18 - (int)puVar45;
                      puVar17 = puVar18;
                      puVar45 = puVar50;
                      do {
                        puVar50 = puVar45 + 1;
                        puVar18 = puVar17 + 1;
                        if (*puVar45 != *puVar17) {
                          uVar33 = *puVar17 ^ *puVar45;
                          uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar33 & 0x5555555555555555) << 1;
                          uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                                   (uVar33 & 0x3333333333333333) << 2;
                          uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar33 & 0xff00ff00ff00ff) << 8;
                          uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar33 & 0xffff0000ffff) << 0x10;
                          uVar37 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) +
                                   iVar54;
                          goto LAB_10929a4f4;
                        }
                        iVar54 = iVar54 + 8;
                        puVar17 = puVar18;
                        puVar45 = puVar50;
                      } while (puVar18 < puVar56);
                    }
                    if (puVar18 < puVar42) {
                      if ((uint)*puVar50 == (uint)*puVar18) {
                        puVar18 = (ulong *)((long)puVar18 + 4);
                        puVar50 = (ulong *)((long)puVar50 + 4);
                      }
                    }
                    if (puVar18 < puVar32) {
                      if ((short)*puVar50 == (short)*puVar18) {
                        puVar18 = (ulong *)((long)puVar18 + 2);
                        puVar50 = (ulong *)((long)puVar50 + 2);
                      }
                    }
                    if ((puVar18 < puVar21) && ((char)*puVar50 == (char)*puVar18)) {
                      puVar18 = (ulong *)((long)puVar18 + 1);
                    }
                    uVar37 = (int)puVar18 - (int)puVar39;
                  }
LAB_10929a4f4:
                  uVar38 = uVar37 + uVar38;
                }
                puVar16 = (uint *)(lVar70 + uVar58);
                if ((int)uVar38 <= (int)uVar36) {
                  uVar38 = uVar36;
                  puVar16 = puVar22;
                }
                puVar22 = puVar16;
                uVar33 = (ulong)uVar38;
              }
            }
            else {
              puVar16 = (uint *)(lVar70 + uVar58);
              if ((*(short *)((long)puVar66 + (long)(int)uVar36 + -1) !=
                   *(short *)((long)puVar16 + (long)(int)uVar36 + -1)) || (*puVar16 != uVar30))
              goto LAB_10929a508;
              puVar17 = (ulong *)(puVar16 + 1);
              puVar39 = puVar68;
              if (puVar68 < puVar56) {
                if (*puVar17 == *puVar68) {
                  puVar17 = (ulong *)(puVar16 + 3);
                  puVar39 = (ulong *)((long)puVar66 + 0xc);
                  goto LAB_10929a2e4;
                }
                uVar33 = *puVar68 ^ *puVar17;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar38 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              else {
LAB_10929a2e4:
                if (puVar39 < puVar56) {
                  iVar54 = iVar27 + (int)puVar39;
                  puVar18 = puVar39;
                  puVar50 = puVar17;
                  do {
                    puVar17 = puVar50 + 1;
                    puVar39 = puVar18 + 1;
                    if (*puVar50 != *puVar18) {
                      uVar33 = *puVar18 ^ *puVar50;
                      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar33 & 0x5555555555555555) << 1;
                      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                               (uVar33 & 0x3333333333333333) << 2;
                      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar33 & 0xffff0000ffff) << 0x10;
                      uVar38 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar54;
                      goto LAB_10929a4cc;
                    }
                    iVar54 = iVar54 + 8;
                    puVar18 = puVar39;
                    puVar50 = puVar17;
                  } while (puVar39 < puVar56);
                }
                if (puVar39 < puVar42) {
                  if ((uint)*puVar17 == (uint)*puVar39) {
                    puVar39 = (ulong *)((long)puVar39 + 4);
                    puVar17 = (ulong *)((long)puVar17 + 4);
                  }
                }
                if (puVar39 < puVar32) {
                  if ((short)*puVar17 == (short)*puVar39) {
                    puVar39 = (ulong *)((long)puVar39 + 2);
                    puVar17 = (ulong *)((long)puVar17 + 2);
                  }
                }
                if ((puVar39 < puVar21) && ((char)*puVar17 == (char)*puVar39)) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
                uVar38 = (int)puVar39 - (int)puVar68;
              }
LAB_10929a4cc:
              uVar37 = uVar38 + 4;
              if ((int)(uVar38 + 4) <= (int)uVar36) {
                uVar37 = uVar36;
                puVar16 = puVar22;
              }
              puVar22 = puVar16;
              uVar33 = (ulong)uVar37;
            }
LAB_10929a508:
            uVar36 = (uint)*(ushort *)(lVar10 + (ulong)(uVar28 & 0xffff) * 2);
            if ((uVar7 < 0x81) || (uVar36 != 1)) {
LAB_10929a648:
              uVar28 = uVar28 - uVar36;
            }
            else {
              if (iVar65 == 0) {
                if ((uVar30 & 0xffff) != uVar30 >> 0x10 || (uVar30 & 0xff) != uVar30 >> 0x18) {
                  iVar65 = 1;
                  goto LAB_10929a648;
                }
                puVar17 = puVar68;
                FUN_10929e9fc(puVar68,puVar21,uVar30);
                uStack_c0 = ((ulong)puVar17 & 0xffffffff) + 4;
                iVar65 = 2;
              }
              if ((iVar65 != 2) || (uVar38 = uVar28 - 1, uVar38 < uVar6)) goto LAB_10929a648;
              puVar17 = (ulong *)(lVar70 + (ulong)uVar38);
              if ((uint)*puVar17 != uVar30) {
                iVar65 = 2;
                goto LAB_10929a648;
              }
              puVar16 = (uint *)((long)puVar17 + 4);
              FUN_10929e9fc(puVar16,puVar21,uVar30);
              uVar58 = ((ulong)puVar16 & 0xffffffff) + 4;
              puVar39 = puVar17;
              do {
                puVar18 = puVar39;
                pcVar1 = (char *)((ulong)&uStack_74 | 3);
                puVar50 = puVar18;
                if (puVar18 < (ulong *)((long)puVar69 + 4U)) break;
                puVar39 = (ulong *)((long)puVar18 + -4);
              } while (*(uint *)((long)puVar18 + -4) == uVar30);
              do {
                puVar39 = puVar50;
                if (puVar18 <= puVar69) break;
                puVar45 = (ulong *)((long)puVar18 + -1);
                cVar35 = *pcVar1;
                puVar39 = puVar18;
                pcVar1 = pcVar1 + -1;
                puVar18 = puVar45;
                puVar50 = puVar69;
              } while (*(char *)puVar45 == cVar35);
              uVar60 = uVar58 + ((long)puVar17 - (long)puVar39 & 0xffffffffU);
              uStack_74 = uVar30;
              if ((uStack_c0 < uVar58) || (uVar60 < uStack_c0)) {
                uVar38 = uVar38 - (int)((long)puVar17 - (long)puVar39);
                if (uStack_c0 <= uVar60) {
                  uVar60 = uStack_c0;
                }
                puVar16 = puVar22;
                uVar58 = uVar33;
                if ((((ulong)(long)(int)uVar33 < uVar60) &&
                    (puVar16 = (uint *)(lVar70 + (ulong)uVar38), uVar58 = uVar60,
                    0xffff < (long)puVar66 - (long)puVar16)) ||
                   (uVar36 = (uint)*(ushort *)(lVar10 + (ulong)(uVar38 & 0xffff) * 2),
                   uVar28 = uVar38 - uVar36, puVar22 = puVar16, uVar33 = uVar58, uVar38 < uVar36))
                goto LAB_10929a70c;
                iVar65 = 2;
              }
              else {
                uVar28 = (uVar38 - (int)uStack_c0) + (int)uVar58;
                iVar65 = 2;
              }
            }
            if ((uVar28 < uVar25) || (uVar26 = uVar26 - 1, uVar26 == 0)) goto LAB_10929a70c;
          } while( true );
        }
        goto LAB_10929a738;
      }
LAB_10929c318:
      uVar67 = (long)param_2 + (uVar67 - (long)puStack_180);
      if ((iVar23 == 0) || ((char *)((long)param_3 + uVar67 + (uVar67 + 0xf0) / 0xff + 1) <= pcVar2)
         ) {
        psVar19 = (short *)((long)param_3 + 1);
        uVar33 = uVar67 - 0xf;
        if (uVar67 < 0xf) {
          *(char *)param_3 = (char)((int)uVar67 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          psVar20 = param_3;
          if (0xfe < uVar33) {
            uVar58 = uVar67 - 0x10e;
            lVar10 = uVar58 / 0xff + 1;
            _memset(psVar19,0xff,lVar10);
            psVar20 = (short *)((long)param_3 + lVar10);
            uVar33 = uVar58 % 0xff;
            psVar19 = (short *)((long)param_3 + uVar58 / 0xff + 2);
          }
          *(char *)psVar19 = (char)uVar33;
          psVar19 = psVar20 + 1;
        }
        _memcpy(psVar19,puStack_180,uVar67);
        *param_4 = uVar9;
      }
    }
    else {
      FUN_10929c3fc(param_1,param_2,param_3,param_4,param_5,uVar7,
                    *(undefined4 *)(&UNK_10dfc0e88 + lVar10),param_7,uVar24 == 0xc,0,
                    *(short *)(param_1 + 0x40026) != 0);
    }
  }
  return;
LAB_10929a70c:
  uStack_170 = uVar33;
  puStack_200 = puVar22;
  psStack_1b8 = param_3;
  puStack_1a0 = puVar66;
  if (3 < (int)uVar33) goto LAB_10929a76c;
LAB_10929a738:
  puVar66 = (ulong *)((long)puVar66 + 1);
  uVar24 = uVar24 + 1;
  iVar27 = iVar27 + -1;
  puVar63 = (ulong *)((long)puVar63 + 1);
  uVar28 = uVar57;
  if (puVar56 < puVar66) goto LAB_10929c318;
  goto LAB_10929a0b4;
LAB_10929a76c:
  puVar63 = puVar66;
  puVar66 = puStack_150;
LAB_10929a77c:
  puStack_190 = puVar22;
  uVar24 = (uint)uVar33;
  puVar64 = (ulong *)((long)puVar63 + (long)(int)uVar24);
  if (puVar64 <= puVar56) {
    puVar68 = (ulong *)((long)puVar64 - 2);
    uVar28 = (uint)*puVar68;
    lVar70 = *(long *)(param_1 + 0x40008);
    uVar8 = *(uint *)(param_1 + 0x4001c);
    uVar58 = (ulong)*(uint *)(param_1 + 0x40020);
    uVar25 = (uint)((long)puVar68 - lVar70);
    uVar6 = uVar8;
    if (uVar8 + 0x10000 <= uVar25) {
      uVar6 = uVar25 - 0xffff;
    }
    if (*(uint *)(param_1 + 0x40020) < uVar25) {
      do {
        uVar30 = (uint)(*(int *)(lVar70 + uVar58) * -0x61c8864f) >> 0x11;
        uVar57 = (int)uVar58 - *(int *)(param_1 + (ulong)uVar30 * 4);
        if (0xfffe < uVar57) {
          uVar57 = 0xffff;
        }
        *(short *)(lVar10 + (uVar58 & 0xffff) * 2) = (short)uVar57;
        *(int *)(param_1 + (ulong)uVar30 * 4) = (int)uVar58;
        uVar58 = uVar58 + 1;
      } while (((long)puVar68 - lVar70 & 0xffffffffU) != uVar58);
    }
    uVar57 = *(uint *)(param_1 + 0x40018);
    lVar59 = *(long *)(param_1 + 0x40010);
    *(uint *)(param_1 + 0x40020) = uVar25;
    uVar25 = *(uint *)(param_1 + (ulong)((uint)*puVar68 * -0x61c8864f >> 0x11) * 4);
    if (uVar6 <= uVar25) {
      iVar27 = 0;
      lVar43 = (long)(int)uVar24;
      puVar17 = (ulong *)(lVar70 + (ulong)uVar57);
      uVar58 = lVar43 - 2U & 0xffffffff;
      lVar48 = 2 - lVar43;
      puVar69 = (ulong *)((long)puVar64 + 2);
      puVar39 = (ulong *)((long)puVar64 - 0x10001);
      if (puVar68 <= (ulong *)((long)puVar17 + 0xffffU)) {
        puVar39 = puVar17;
      }
      iVar65 = -2 - (uVar24 + (int)puVar63);
      uStack_d8 = 0;
      puVar22 = puStack_160;
      uVar30 = uVar7;
      do {
        uVar60 = (ulong)uVar25;
        uVar26 = (uint)uVar33;
        if (uVar25 < uVar57) {
          puVar16 = (uint *)(lVar59 + uVar60);
          if (*puVar16 == uVar28) {
            puVar18 = (ulong *)((long)puVar68 + (ulong)(uVar57 - uVar25));
            puVar50 = puVar21;
            if (puVar18 <= puVar21) {
              puVar50 = puVar18;
            }
            puVar18 = (ulong *)(puVar16 + 1);
            puVar51 = (ulong *)((long)puVar50 - 7);
            puVar45 = puVar69;
            if (puVar69 < puVar51) {
              if (*puVar18 == *puVar69) {
                puVar18 = (ulong *)(puVar16 + 3);
                puVar45 = (ulong *)((long)puVar64 + 10U);
                goto LAB_10929a958;
              }
              uVar33 = *puVar69 ^ *puVar18;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
              uVar36 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
            }
            else {
LAB_10929a958:
              if (puVar45 < puVar51) {
                iVar54 = iVar65 + (int)puVar45;
                puVar46 = puVar45;
                puVar47 = puVar18;
                do {
                  puVar18 = puVar47 + 1;
                  puVar45 = puVar46 + 1;
                  if (*puVar47 != *puVar46) {
                    uVar33 = *puVar46 ^ *puVar47;
                    uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1
                    ;
                    uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2
                    ;
                    uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                    uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar33 & 0xffff0000ffff) << 0x10;
                    uVar36 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar54;
                    goto LAB_10929aaa0;
                  }
                  iVar54 = iVar54 + 8;
                  puVar46 = puVar45;
                  puVar47 = puVar18;
                } while (puVar45 < puVar51);
              }
              if (puVar45 < (ulong *)((long)puVar50 - 3U)) {
                if ((uint)*puVar18 == (uint)*puVar45) {
                  puVar45 = (ulong *)((long)puVar45 + 4);
                  puVar18 = (ulong *)((long)puVar18 + 4);
                }
              }
              if (puVar45 < (ulong *)((long)puVar50 - 1U)) {
                if ((short)*puVar18 == (short)*puVar45) {
                  puVar45 = (ulong *)((long)puVar45 + 2);
                  puVar18 = (ulong *)((long)puVar18 + 2);
                }
              }
              if ((puVar45 < puVar50) && ((char)*puVar18 == (char)*puVar45)) {
                puVar45 = (ulong *)((long)puVar45 + 1);
              }
              uVar36 = (int)puVar45 - (int)puVar69;
            }
LAB_10929aaa0:
            iVar54 = uVar36 + 4;
            if ((puVar50 < puVar21) &&
               (puVar18 = (ulong *)((long)puVar68 + (long)iVar54), puVar18 == puVar50)) {
              puVar45 = puVar18;
              puVar51 = puVar17;
              if (puVar50 < puVar56) {
                puVar45 = puVar18 + 1;
                puVar51 = puVar17 + 1;
                if (*puVar17 == *puVar18) goto LAB_10929aad8;
                uVar33 = *puVar18 ^ *puVar17;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar36 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              else {
LAB_10929aad8:
                if (puVar45 < puVar56) {
                  puVar18 = (ulong *)((long)puVar63 + (ulong)(uVar57 - uVar25) + lVar43 + -2);
                  if (puVar21 <= puVar18) {
                    puVar18 = puVar21;
                  }
                  iVar15 = (int)puVar45 - (int)puVar18;
                  puVar18 = puVar45;
                  puVar46 = puVar51;
                  do {
                    puVar51 = puVar46 + 1;
                    puVar45 = puVar18 + 1;
                    if (*puVar46 != *puVar18) {
                      uVar33 = *puVar18 ^ *puVar46;
                      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar33 & 0x5555555555555555) << 1;
                      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                               (uVar33 & 0x3333333333333333) << 2;
                      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar33 & 0xffff0000ffff) << 0x10;
                      uVar36 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar15;
                      goto LAB_10929abac;
                    }
                    iVar15 = iVar15 + 8;
                    puVar18 = puVar45;
                    puVar46 = puVar51;
                  } while (puVar45 < puVar56);
                }
                if (puVar45 < puVar42) {
                  if ((uint)*puVar51 == (uint)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar51 = (ulong *)((long)puVar51 + 4);
                  }
                }
                if (puVar45 < puVar32) {
                  if ((short)*puVar51 == (short)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar51 = (ulong *)((long)puVar51 + 2);
                  }
                }
                if ((puVar45 < puVar21) && ((char)*puVar51 == (char)*puVar45)) {
                  puVar45 = (ulong *)((long)puVar45 + 1);
                }
                uVar36 = (int)puVar45 - (int)puVar50;
              }
LAB_10929abac:
              iVar54 = uVar36 + iVar54;
            }
            uVar36 = 0;
            if (uVar58 != 0) {
              lVar52 = 0;
              lVar5 = lVar48;
              if (lVar48 <= (long)(uVar8 - uVar60)) {
                lVar5 = uVar8 - uVar60;
              }
              uVar37 = (uint)lVar5;
              uVar38 = 1;
              do {
                uVar36 = uVar37 & (int)uVar37 >> 0x1f;
                if (lVar52 <= (int)uVar37) break;
                lVar5 = lVar52 + lVar43 + -3;
                pcVar1 = (char *)(lVar59 + -1 + uVar60 + lVar52);
                lVar52 = lVar52 + -1;
                uVar36 = uVar38 - 1;
                uVar38 = uVar36;
              } while (*(char *)((long)puVar63 + lVar5) == *pcVar1);
            }
            if ((int)uVar26 < (int)(iVar54 - uVar36)) {
              uVar26 = iVar54 - uVar36;
              puVar22 = (uint *)(lVar70 + uVar60 + (long)(int)uVar36);
              puVar66 = (ulong *)((long)puVar68 + (long)(int)uVar36);
            }
            uVar33 = (ulong)uVar26;
          }
        }
        else {
          puVar16 = (uint *)(lVar70 + uVar60);
          if ((*(short *)((long)puVar63 + (long)(int)uVar26 + -1) !=
               *(short *)((long)puVar16 + ((long)(int)uVar26 - (long)(int)(lVar43 - 2U)) + -1)) ||
             (*puVar16 != uVar28)) goto LAB_10929ad40;
          uVar36 = 0;
          if (uVar58 != 0) {
            lVar53 = 0;
            lVar52 = uVar57 - uVar60;
            lVar5 = lVar48;
            if (lVar48 <= lVar52) {
              lVar5 = lVar52;
            }
            uVar37 = (uint)lVar5;
            uVar38 = 1;
            do {
              uVar36 = uVar37 & (int)uVar37 >> 0x1f;
              if (lVar53 <= (int)uVar37) break;
              lVar5 = lVar53 + lVar43 + -3;
              pcVar1 = (char *)(lVar70 + -1 + uVar60 + lVar53);
              lVar53 = lVar53 + -1;
              uVar36 = uVar38 - 1;
              uVar38 = uVar36;
            } while (*(char *)((long)puVar63 + lVar5) == *pcVar1);
          }
          puVar18 = (ulong *)(puVar16 + 1);
          puVar50 = puVar69;
          if (puVar69 < puVar56) {
            if (*puVar18 == *puVar69) {
              puVar18 = (ulong *)(puVar16 + 3);
              puVar50 = (ulong *)((long)puVar64 + 10U);
              goto LAB_10929ac58;
            }
            uVar33 = *puVar69 ^ *puVar18;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar38 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
          }
          else {
LAB_10929ac58:
            if (puVar50 < puVar56) {
              iVar54 = iVar65 + (int)puVar50;
              puVar45 = puVar50;
              puVar51 = puVar18;
              do {
                puVar18 = puVar51 + 1;
                puVar50 = puVar45 + 1;
                if (*puVar51 != *puVar45) {
                  uVar33 = *puVar45 ^ *puVar51;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar38 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar54;
                  goto LAB_10929ad20;
                }
                iVar54 = iVar54 + 8;
                puVar45 = puVar50;
                puVar51 = puVar18;
              } while (puVar50 < puVar56);
            }
            if (puVar50 < puVar42) {
              if ((uint)*puVar18 == (uint)*puVar50) {
                puVar50 = (ulong *)((long)puVar50 + 4);
                puVar18 = (ulong *)((long)puVar18 + 4);
              }
            }
            if (puVar50 < puVar32) {
              if ((short)*puVar18 == (short)*puVar50) {
                puVar50 = (ulong *)((long)puVar50 + 2);
                puVar18 = (ulong *)((long)puVar18 + 2);
              }
            }
            if ((puVar50 < puVar21) && ((char)*puVar18 == (char)*puVar50)) {
              puVar50 = (ulong *)((long)puVar50 + 1);
            }
            uVar38 = (int)puVar50 - (int)puVar69;
          }
LAB_10929ad20:
          uVar38 = (uVar38 - uVar36) + 4;
          if ((int)uVar26 < (int)uVar38) {
            uVar26 = uVar38;
            puVar22 = (uint *)((long)puVar16 + (long)(int)uVar36);
            puVar66 = (ulong *)((long)puVar68 + (long)(int)uVar36);
          }
          uVar33 = (ulong)uVar26;
        }
LAB_10929ad40:
        uVar26 = (uint)*(ushort *)(lVar10 + (ulong)(uVar25 & 0xffff) * 2);
        if ((uVar7 < 0x81) || (uVar26 != 1)) {
LAB_10929ae90:
          uVar25 = uVar25 - uVar26;
        }
        else {
          if (iVar27 == 0) {
            if ((uVar28 & 0xffff) != uVar28 >> 0x10 || (uVar28 & 0xff) != uVar28 >> 0x18) {
              iVar27 = 1;
              goto LAB_10929ae90;
            }
            puVar18 = puVar69;
            FUN_10929e9fc(puVar69,puVar21,uVar28);
            uStack_d8 = ((ulong)puVar18 & 0xffffffff) + 4;
            iVar27 = 2;
          }
          if ((iVar27 != 2) || (uVar36 = uVar25 - 1, uVar36 < uVar57)) goto LAB_10929ae90;
          puVar18 = (ulong *)(lVar70 + (ulong)uVar36);
          if ((uint)*puVar18 != uVar28) {
            iVar27 = 2;
            goto LAB_10929ae90;
          }
          puVar16 = (uint *)((long)puVar18 + 4);
          FUN_10929e9fc(puVar16,puVar21,uVar28);
          uVar60 = ((ulong)puVar16 & 0xffffffff) + 4;
          puVar50 = puVar18;
          do {
            puVar45 = puVar50;
            pcVar1 = (char *)((ulong)&uStack_70 | 3);
            puVar51 = puVar45;
            if (puVar45 < (ulong *)((long)puVar39 + 4U)) break;
            puVar50 = (ulong *)((long)puVar45 + -4);
          } while (*(uint *)((long)puVar45 + -4) == uVar28);
          do {
            puVar50 = puVar51;
            if (puVar45 <= puVar39) break;
            puVar46 = (ulong *)((long)puVar45 + -1);
            cVar35 = *pcVar1;
            puVar50 = puVar45;
            pcVar1 = pcVar1 + -1;
            puVar45 = puVar46;
            puVar51 = puVar39;
          } while (*(char *)puVar46 == cVar35);
          uVar61 = uVar60 + ((long)puVar18 - (long)puVar50 & 0xffffffffU);
          uStack_70 = uVar28;
          if ((uStack_d8 < uVar60) || (uVar61 < uStack_d8)) {
            uVar25 = uVar36 - (int)((long)puVar18 - (long)puVar50);
            if (uVar58 == 0) {
              if (uStack_d8 <= uVar61) {
                uVar61 = uStack_d8;
              }
              puVar18 = puVar66;
              puVar16 = puVar22;
              uVar60 = uVar33;
              if ((((ulong)(long)(int)uVar33 < uVar61) &&
                  (puVar16 = (uint *)(lVar70 + (ulong)uVar25), puVar18 = puVar68, uVar60 = uVar61,
                  0xffff < (long)puVar68 - (long)puVar16)) ||
                 (uVar26 = (uint)*(ushort *)(lVar10 + (ulong)(uVar25 & 0xffff) * 2),
                 bVar13 = uVar25 < uVar26, uVar25 = uVar25 - uVar26, puVar66 = puVar18,
                 puVar22 = puVar16, uVar33 = uVar60, bVar13)) goto LAB_10929af78;
              iVar27 = 2;
            }
            else {
              iVar27 = 2;
            }
          }
          else {
            uVar25 = (uVar36 - (int)uStack_d8) + (int)uVar60;
            iVar27 = 2;
          }
        }
        if ((uVar25 < uVar6) || (uVar30 = uVar30 - 1, uVar30 == 0)) goto LAB_10929af78;
      } while( true );
    }
  }
  goto LAB_10929bd60;
LAB_10929af78:
  puStack_160 = puVar22;
  if ((uint)uVar33 != uVar24) {
    bVar13 = puVar63 <= puStack_1a0;
    bVar14 = (ulong *)((long)puVar63 + (long)(int)(uint)uStack_170) <= puVar66;
    puVar68 = puStack_1a0;
    if (bVar13 || bVar14) {
      puVar68 = puVar63;
    }
    puVar63 = puVar66;
    if (2 < (long)puVar66 - (long)puVar68) goto code_r0x00010929afcc;
    goto LAB_10929a77c;
  }
LAB_10929bd60:
  puVar68 = (ulong *)((long)psStack_1b8 + 1);
  uVar33 = (long)puVar63 - (long)puStack_180;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)puVar68 + uVar33 + (uVar33 >> 8) + 8))) {
    return;
  }
  uVar58 = uVar33 - 0xf;
  if (uVar33 < 0xf) {
    *(char *)psStack_1b8 = (char)((int)uVar33 << 4);
  }
  else {
    *(char *)psStack_1b8 = -0x10;
    puVar69 = puVar68;
    if (0xfe < uVar58) {
      uVar58 = uVar33 - 0x10e;
      _memset(puVar68,0xff,uVar58 / 0xff + 1);
      puVar69 = (ulong *)((long)psStack_1b8 + uVar58 / 0xff + 2);
      uVar58 = uVar58 % 0xff;
    }
    puVar68 = (ulong *)((long)puVar69 + 1);
    *(char *)puVar69 = (char)uVar58;
  }
  puVar69 = (ulong *)((long)puVar68 + uVar33);
  puVar17 = puStack_180;
  puVar39 = puVar68;
  do {
    puVar18 = puVar39 + 1;
    *puVar39 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar39 = puVar18;
  } while (puVar18 < puVar69);
  param_3 = (short *)((long)puVar69 + 2);
  *(short *)puVar69 = (short)puVar63 - (short)puStack_190;
  uVar24 = uVar24 - 4;
  uVar33 = (ulong)(int)uVar24;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)param_3 + (uVar33 >> 8) + 6))) {
    return;
  }
  if (uVar24 < 0xf) {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + (char)uVar24;
    goto LAB_10929bf54;
  }
  *(char *)psStack_1b8 = (char)*psStack_1b8 + '\x0f';
  uVar58 = uVar33 - 0xf;
  psVar19 = param_3;
  if (0x1fd < uVar58) {
    uVar58 = (uVar33 - 0x20d) / 0x1fe;
    _memset(param_3,0xff,uVar58 * 2 + 2);
    psVar19 = (short *)((long)puVar63 + (long)((long)puVar68 + (uVar58 * 2 - (long)puStack_180) + 4)
                       );
    uVar58 = (uVar33 - 0x20d) % 0x1fe;
  }
joined_r0x00010929bf20:
  cVar35 = (char)uVar58;
  if (0xfe < uVar58) {
    cVar35 = cVar35 + '\x01';
    *(char *)psVar19 = -1;
    psVar19 = (short *)((long)psVar19 + 1);
  }
  param_3 = (short *)((long)psVar19 + 1);
  *(char *)psVar19 = cVar35;
LAB_10929bf54:
  puStack_150 = puVar66;
  puStack_180 = puVar64;
  if (puVar56 < puVar64) goto LAB_10929c318;
  goto LAB_10929a060;
code_r0x00010929afcc:
  uVar6 = (uint)uStack_170;
  puVar16 = puStack_200;
  if (bVar13 || bVar14) {
    uVar6 = uVar24;
    puVar16 = puStack_190;
  }
  puStack_190 = puVar16;
  uVar58 = (ulong)uVar6;
LAB_10929afec:
  iVar65 = (int)uVar58;
  iVar27 = iVar65;
  if (0x11 < iVar65) {
    iVar27 = 0x12;
  }
  puVar63 = (ulong *)((long)puVar68 + (long)iVar65);
LAB_10929b01c:
  uStack_170 = uVar33;
  iVar54 = (int)puVar68;
  puStack_150 = puVar66;
  puStack_160 = puVar22;
  if ((long)puVar66 - (long)puVar68 < 0x12) {
    iVar31 = (int)uStack_170;
    iVar15 = (int)((long)puVar66 - (long)puVar68) + iVar31 + -4;
    if ((uint *)((long)puVar68 + (long)iVar27) <= (uint *)((long)puVar66 + (long)iVar31 + -4)) {
      iVar15 = iVar27;
    }
    uVar24 = iVar15 + (iVar54 - (int)puVar66);
    if (0 < (int)uVar24) {
      uStack_170 = (ulong)(iVar31 - uVar24);
      puStack_150 = (ulong *)((long)puVar66 + (ulong)uVar24);
      puStack_160 = (uint *)((long)puVar22 + (ulong)uVar24);
    }
  }
  iVar15 = (int)uStack_170;
  puVar64 = (ulong *)((long)puStack_150 + (long)iVar15);
  iVar31 = (int)puStack_150;
  sVar11 = (short)puVar68;
  sVar12 = (short)puStack_190;
  if (puVar64 <= puVar56) {
    puVar69 = (ulong *)((long)puVar64 - 3);
    uVar8 = (uint)*puVar69;
    lVar70 = *(long *)(param_1 + 0x40008);
    uVar6 = *(uint *)(param_1 + 0x4001c);
    uVar33 = (ulong)*(uint *)(param_1 + 0x40020);
    uVar28 = (uint)((long)puVar69 - lVar70);
    uVar24 = uVar6;
    if (uVar6 + 0x10000 <= uVar28) {
      uVar24 = uVar28 - 0xffff;
    }
    if (*(uint *)(param_1 + 0x40020) < uVar28) {
      do {
        uVar57 = (uint)(*(int *)(lVar70 + uVar33) * -0x61c8864f) >> 0x11;
        uVar25 = (int)uVar33 - *(int *)(param_1 + (ulong)uVar57 * 4);
        if (0xfffe < uVar25) {
          uVar25 = 0xffff;
        }
        *(short *)(lVar10 + (uVar33 & 0xffff) * 2) = (short)uVar25;
        *(int *)(param_1 + (ulong)uVar57 * 4) = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while (((long)puVar69 - lVar70 & 0xffffffffU) != uVar33);
    }
    uVar25 = *(uint *)(param_1 + 0x40018);
    lVar59 = *(long *)(param_1 + 0x40010);
    *(uint *)(param_1 + 0x40020) = uVar28;
    uVar28 = *(uint *)(param_1 + (ulong)((uint)*puVar69 * -0x61c8864f >> 0x11) * 4);
    if (uVar24 <= uVar28) {
      iVar29 = 0;
      lVar43 = (long)iVar15;
      puVar39 = (ulong *)(lVar70 + (ulong)uVar25);
      uVar60 = lVar43 - 3U & 0xffffffff;
      lVar48 = 3 - lVar43;
      puVar17 = (ulong *)((long)puVar64 + 1);
      puVar18 = (ulong *)((long)puVar64 - 0x10002);
      if (puVar69 <= (ulong *)((long)puVar39 + 0xffffU)) {
        puVar18 = puVar39;
      }
      uStack_d8 = 0;
      puVar66 = puStack_1c0;
      puVar22 = puStack_1c8;
      uVar33 = uStack_170;
      uVar57 = uVar7;
      do {
        uVar61 = (ulong)uVar28;
        uVar30 = (uint)uVar33;
        if (uVar28 < uVar25) {
          puVar16 = (uint *)(lVar59 + uVar61);
          if (*puVar16 == uVar8) {
            puVar50 = (ulong *)((long)puVar69 + (ulong)(uVar25 - uVar28));
            puVar45 = puVar21;
            if (puVar50 <= puVar21) {
              puVar45 = puVar50;
            }
            puVar50 = (ulong *)(puVar16 + 1);
            puVar46 = (ulong *)((long)puVar45 - 7);
            puVar51 = puVar17;
            if (puVar17 < puVar46) {
              if (*puVar50 == *puVar17) {
                puVar50 = (ulong *)(puVar16 + 3);
                puVar51 = (ulong *)((long)puVar64 + 9U);
                goto LAB_10929b250;
              }
              uVar33 = *puVar17 ^ *puVar50;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
              uVar26 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
            }
            else {
LAB_10929b250:
              if (puVar51 < puVar46) {
                iVar55 = ~(iVar15 + iVar31) + (int)puVar51;
                puVar47 = puVar51;
                puVar49 = puVar50;
                do {
                  puVar50 = puVar49 + 1;
                  puVar51 = puVar47 + 1;
                  if (*puVar49 != *puVar47) {
                    uVar33 = *puVar47 ^ *puVar49;
                    uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1
                    ;
                    uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2
                    ;
                    uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                    uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar33 & 0xffff0000ffff) << 0x10;
                    uVar26 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar55;
                    goto LAB_10929b398;
                  }
                  iVar55 = iVar55 + 8;
                  puVar47 = puVar51;
                  puVar49 = puVar50;
                } while (puVar51 < puVar46);
              }
              if (puVar51 < (ulong *)((long)puVar45 - 3U)) {
                if ((uint)*puVar50 == (uint)*puVar51) {
                  puVar51 = (ulong *)((long)puVar51 + 4);
                  puVar50 = (ulong *)((long)puVar50 + 4);
                }
              }
              if (puVar51 < (ulong *)((long)puVar45 - 1U)) {
                if ((short)*puVar50 == (short)*puVar51) {
                  puVar51 = (ulong *)((long)puVar51 + 2);
                  puVar50 = (ulong *)((long)puVar50 + 2);
                }
              }
              if ((puVar51 < puVar45) && ((char)*puVar50 == (char)*puVar51)) {
                puVar51 = (ulong *)((long)puVar51 + 1);
              }
              uVar26 = (int)puVar51 - (int)puVar17;
            }
LAB_10929b398:
            iVar55 = uVar26 + 4;
            if ((puVar45 < puVar21) &&
               (puVar50 = (ulong *)((long)puVar69 + (long)iVar55), puVar50 == puVar45)) {
              puVar51 = puVar50;
              puVar46 = puVar39;
              if (puVar45 < puVar56) {
                puVar51 = puVar50 + 1;
                puVar46 = puVar39 + 1;
                if (*puVar39 == *puVar50) goto LAB_10929b3d0;
                uVar33 = *puVar50 ^ *puVar39;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar26 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              else {
LAB_10929b3d0:
                if (puVar51 < puVar56) {
                  puVar50 = (ulong *)((long)puStack_150 + (ulong)(uVar25 - uVar28) + lVar43 + -3);
                  if (puVar21 <= puVar50) {
                    puVar50 = puVar21;
                  }
                  iVar44 = (int)puVar51 - (int)puVar50;
                  puVar50 = puVar51;
                  puVar47 = puVar46;
                  do {
                    puVar46 = puVar47 + 1;
                    puVar51 = puVar50 + 1;
                    if (*puVar47 != *puVar50) {
                      uVar33 = *puVar50 ^ *puVar47;
                      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar33 & 0x5555555555555555) << 1;
                      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 |
                               (uVar33 & 0x3333333333333333) << 2;
                      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar33 & 0xffff0000ffff) << 0x10;
                      uVar26 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar44;
                      goto LAB_10929b4a4;
                    }
                    iVar44 = iVar44 + 8;
                    puVar50 = puVar51;
                    puVar47 = puVar46;
                  } while (puVar51 < puVar56);
                }
                if (puVar51 < puVar42) {
                  if ((uint)*puVar46 == (uint)*puVar51) {
                    puVar51 = (ulong *)((long)puVar51 + 4);
                    puVar46 = (ulong *)((long)puVar46 + 4);
                  }
                }
                if (puVar51 < puVar32) {
                  if ((short)*puVar46 == (short)*puVar51) {
                    puVar51 = (ulong *)((long)puVar51 + 2);
                    puVar46 = (ulong *)((long)puVar46 + 2);
                  }
                }
                if ((puVar51 < puVar21) && ((char)*puVar46 == (char)*puVar51)) {
                  puVar51 = (ulong *)((long)puVar51 + 1);
                }
                uVar26 = (int)puVar51 - (int)puVar45;
              }
LAB_10929b4a4:
              iVar55 = uVar26 + iVar55;
            }
            uVar26 = 0;
            if (uVar60 != 0) {
              lVar52 = 0;
              lVar5 = lVar48;
              if (lVar48 <= (long)(uVar6 - uVar61)) {
                lVar5 = uVar6 - uVar61;
              }
              uVar38 = (uint)lVar5;
              uVar36 = 1;
              do {
                uVar26 = uVar38 & (int)uVar38 >> 0x1f;
                if (lVar52 <= (int)uVar38) break;
                lVar5 = lVar52 + lVar43 + -4;
                pcVar1 = (char *)(lVar59 + -1 + uVar61 + lVar52);
                lVar52 = lVar52 + -1;
                uVar26 = uVar36 - 1;
                uVar36 = uVar26;
              } while (*(char *)((long)puStack_150 + lVar5) == *pcVar1);
            }
            if ((int)uVar30 < (int)(iVar55 - uVar26)) {
              uVar30 = iVar55 - uVar26;
              puVar22 = (uint *)(lVar70 + uVar61 + (long)(int)uVar26);
              puVar66 = (ulong *)((long)puVar69 + (long)(int)uVar26);
            }
            uVar33 = (ulong)uVar30;
          }
        }
        else {
          puVar16 = (uint *)(lVar70 + uVar61);
          if ((*(short *)((long)puStack_150 + (long)(int)uVar30 + -1) !=
               *(short *)((long)puVar16 + ((long)(int)uVar30 - (long)(int)(lVar43 - 3U)) + -1)) ||
             (*puVar16 != uVar8)) goto LAB_10929b638;
          uVar26 = 0;
          if (uVar60 != 0) {
            lVar53 = 0;
            lVar52 = uVar25 - uVar61;
            lVar5 = lVar48;
            if (lVar48 <= lVar52) {
              lVar5 = lVar52;
            }
            uVar38 = (uint)lVar5;
            uVar36 = 1;
            do {
              uVar26 = uVar38 & (int)uVar38 >> 0x1f;
              if (lVar53 <= (int)uVar38) break;
              lVar5 = lVar53 + lVar43 + -4;
              pcVar1 = (char *)(lVar70 + -1 + uVar61 + lVar53);
              lVar53 = lVar53 + -1;
              uVar26 = uVar36 - 1;
              uVar36 = uVar26;
            } while (*(char *)((long)puStack_150 + lVar5) == *pcVar1);
          }
          puVar50 = (ulong *)(puVar16 + 1);
          puVar45 = puVar17;
          if (puVar17 < puVar56) {
            if (*puVar50 == *puVar17) {
              puVar50 = (ulong *)(puVar16 + 3);
              puVar45 = (ulong *)((long)puVar64 + 9U);
              goto LAB_10929b550;
            }
            uVar33 = *puVar17 ^ *puVar50;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar36 = (uint)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
          }
          else {
LAB_10929b550:
            if (puVar45 < puVar56) {
              iVar55 = ~(iVar15 + iVar31) + (int)puVar45;
              puVar51 = puVar45;
              puVar46 = puVar50;
              do {
                puVar50 = puVar46 + 1;
                puVar45 = puVar51 + 1;
                if (*puVar46 != *puVar51) {
                  uVar33 = *puVar51 ^ *puVar46;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar36 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) + iVar55;
                  goto LAB_10929b618;
                }
                iVar55 = iVar55 + 8;
                puVar51 = puVar45;
                puVar46 = puVar50;
              } while (puVar45 < puVar56);
            }
            if (puVar45 < puVar42) {
              if ((uint)*puVar50 == (uint)*puVar45) {
                puVar45 = (ulong *)((long)puVar45 + 4);
                puVar50 = (ulong *)((long)puVar50 + 4);
              }
            }
            if (puVar45 < puVar32) {
              if ((short)*puVar50 == (short)*puVar45) {
                puVar45 = (ulong *)((long)puVar45 + 2);
                puVar50 = (ulong *)((long)puVar50 + 2);
              }
            }
            if ((puVar45 < puVar21) && ((char)*puVar50 == (char)*puVar45)) {
              puVar45 = (ulong *)((long)puVar45 + 1);
            }
            uVar36 = (int)puVar45 - (int)puVar17;
          }
LAB_10929b618:
          uVar36 = (uVar36 - uVar26) + 4;
          if ((int)uVar30 < (int)uVar36) {
            uVar30 = uVar36;
            puVar22 = (uint *)((long)puVar16 + (long)(int)uVar26);
            puVar66 = (ulong *)((long)puVar69 + (long)(int)uVar26);
          }
          uVar33 = (ulong)uVar30;
        }
LAB_10929b638:
        uVar30 = (uint)*(ushort *)(lVar10 + (ulong)(uVar28 & 0xffff) * 2);
        if ((uVar7 < 0x81) || (uVar30 != 1)) {
LAB_10929b788:
          uVar28 = uVar28 - uVar30;
        }
        else {
          if (iVar29 == 0) {
            if ((uVar8 & 0xffff) != uVar8 >> 0x10 || (uVar8 & 0xff) != uVar8 >> 0x18) {
              iVar29 = 1;
              goto LAB_10929b788;
            }
            puVar50 = puVar17;
            FUN_10929e9fc(puVar17,puVar21,uVar8);
            uStack_d8 = ((ulong)puVar50 & 0xffffffff) + 4;
            iVar29 = 2;
          }
          if ((iVar29 != 2) || (uVar26 = uVar28 - 1, uVar26 < uVar25)) goto LAB_10929b788;
          puVar50 = (ulong *)(lVar70 + (ulong)uVar26);
          if ((uint)*puVar50 != uVar8) {
            iVar29 = 2;
            goto LAB_10929b788;
          }
          puVar16 = (uint *)((long)puVar50 + 4);
          FUN_10929e9fc(puVar16,puVar21,uVar8);
          uVar61 = ((ulong)puVar16 & 0xffffffff) + 4;
          puVar45 = puVar50;
          do {
            puVar51 = puVar45;
            pcVar1 = (char *)((ulong)auStack_6c | 3);
            puVar46 = puVar51;
            if (puVar51 < (ulong *)((long)puVar18 + 4U)) break;
            puVar45 = (ulong *)((long)puVar51 + -4);
          } while (*(uint *)((long)puVar51 + -4) == uVar8);
          do {
            puVar45 = puVar46;
            if (puVar51 <= puVar18) break;
            puVar47 = (ulong *)((long)puVar51 + -1);
            cVar35 = *pcVar1;
            puVar45 = puVar51;
            pcVar1 = pcVar1 + -1;
            puVar51 = puVar47;
            puVar46 = puVar18;
          } while (*(char *)puVar47 == cVar35);
          uVar3 = uVar61 + ((long)puVar50 - (long)puVar45 & 0xffffffffU);
          auStack_6c[0] = uVar8;
          if ((uStack_d8 < uVar61) || (uVar3 < uStack_d8)) {
            uVar28 = uVar26 - (int)((long)puVar50 - (long)puVar45);
            if (uVar60 == 0) {
              if (uStack_d8 <= uVar3) {
                uVar3 = uStack_d8;
              }
              puVar50 = puVar66;
              puVar16 = puVar22;
              uVar61 = uVar33;
              if ((((ulong)(long)(int)uVar33 < uVar3) &&
                  (puVar16 = (uint *)(lVar70 + (ulong)uVar28), puVar50 = puVar69, uVar61 = uVar3,
                  0xffff < (long)puVar69 - (long)puVar16)) ||
                 (uVar30 = (uint)*(ushort *)(lVar10 + (ulong)(uVar28 & 0xffff) * 2),
                 bVar13 = uVar28 < uVar30, uVar28 = uVar28 - uVar30, puVar66 = puVar50,
                 puVar22 = puVar16, uVar33 = uVar61, bVar13)) goto LAB_10929b870;
              iVar29 = 2;
            }
            else {
              iVar29 = 2;
            }
          }
          else {
            uVar28 = (uVar26 - (int)uStack_d8) + (int)uVar61;
            iVar29 = 2;
          }
        }
        if ((uVar28 < uVar24) || (uVar57 = uVar57 - 1, uVar57 == 0)) goto LAB_10929b870;
      } while( true );
    }
  }
  goto LAB_10929bf88;
LAB_10929b870:
  puStack_1c8 = puVar22;
  puStack_1c0 = puVar66;
  if ((int)uVar33 == iVar15) goto LAB_10929bf88;
  if ((ulong *)((long)puVar63 + 3U) <= puVar66) goto LAB_10929b8b4;
  if (puVar66 < puVar63) goto LAB_10929b01c;
  puVar16 = puStack_160;
  puVar64 = puStack_150;
  if (puStack_150 < puVar63) {
    iVar31 = (int)puVar63 - iVar31;
    uStack_170 = uVar33;
    puVar16 = puVar22;
    puVar64 = puVar66;
    if (3 < iVar15 - iVar31) {
      uStack_170 = (ulong)(uint)(iVar15 - iVar31);
      puVar16 = (uint *)((long)puStack_160 + (long)iVar31);
      puVar64 = (ulong *)((long)puStack_150 + (long)iVar31);
    }
  }
  puStack_150 = puVar64;
  puStack_160 = puVar16;
  puVar64 = (ulong *)((long)psStack_1b8 + 1);
  uVar58 = (long)puVar68 - (long)puStack_180;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)puVar64 + uVar58 + (uVar58 >> 8) + 8))) {
    return;
  }
  uVar60 = uVar58 - 0xf;
  if (uVar58 < 0xf) {
    *(char *)psStack_1b8 = (char)((int)uVar58 << 4);
  }
  else {
    *(char *)psStack_1b8 = -0x10;
    puVar68 = puVar64;
    if (0xfe < uVar60) {
      uVar60 = uVar58 - 0x10e;
      _memset(puVar64,0xff,uVar60 / 0xff + 1);
      puVar68 = (ulong *)((long)psStack_1b8 + uVar60 / 0xff + 2);
      uVar60 = uVar60 % 0xff;
    }
    puVar64 = (ulong *)((long)puVar68 + 1);
    *(char *)puVar68 = (char)uVar60;
  }
  puVar68 = (ulong *)((long)puVar64 + uVar58);
  puVar69 = puVar64;
  do {
    puVar17 = puVar69 + 1;
    *puVar69 = *puStack_180;
    puVar69 = puVar17;
    puStack_180 = puStack_180 + 1;
  } while (puVar17 < puVar68);
  psVar19 = (short *)((long)puVar68 + 2);
  *(short *)puVar68 = sVar11 - sVar12;
  uVar24 = iVar65 - 4;
  uVar60 = (ulong)(int)uVar24;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)psVar19 + (uVar60 >> 8) + 6))) {
    return;
  }
  puStack_180 = puVar63;
  if (uVar24 < 0xf) {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + (char)uVar24;
    puStack_1a0 = puStack_150;
    puStack_200 = puStack_160;
    psStack_1b8 = psVar19;
  }
  else {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + '\x0f';
    uVar61 = uVar60 - 0xf;
    if (0x1fd < uVar61) {
      uVar61 = (uVar60 - 0x20d) / 0x1fe;
      _memset(psVar19,0xff,uVar61 * 2 + 2);
      psVar19 = (short *)((long)puVar64 + uVar61 * 2 + uVar58 + 4);
      uVar61 = (uVar60 - 0x20d) % 0x1fe;
    }
    psVar20 = psVar19;
    if (0xfe < uVar61) {
      psVar20 = (short *)((long)psVar19 + 1);
      *(char *)psVar19 = -1;
      uVar61 = uVar61 - 0xff;
    }
    *(char *)psVar20 = (char)uVar61;
    puStack_1a0 = puStack_150;
    puStack_200 = puStack_160;
    psStack_1b8 = (short *)((long)psVar20 + 1);
  }
  goto LAB_10929a76c;
LAB_10929b8b4:
  if (puStack_150 < puVar63) {
    uVar58 = (long)puStack_150 - (long)puVar68;
    if ((long)uVar58 < 0x12) {
      iVar65 = iVar15 + (int)uVar58 + -4;
      if ((uint *)((long)puVar68 + (long)iVar27) <= (uint *)((long)puVar64 - 4U)) {
        iVar65 = iVar27;
      }
      uVar24 = iVar65 + (iVar54 - iVar31);
      if (0 < (int)uVar24) {
        puStack_150 = (ulong *)((long)puStack_150 + (ulong)uVar24);
        uStack_170 = (ulong)(iVar15 - uVar24);
        puStack_160 = (uint *)((long)puStack_160 + (ulong)uVar24);
      }
      goto LAB_10929b92c;
    }
  }
  else {
    uVar58 = uVar58 & 0xffffffff;
  }
  iVar65 = (int)uVar58;
LAB_10929b92c:
  puVar63 = (ulong *)((long)psStack_1b8 + 1);
  uVar58 = (long)puVar68 - (long)puStack_180;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)puVar63 + uVar58 + (uVar58 >> 8) + 8))) {
    return;
  }
  uVar60 = uVar58 - 0xf;
  if (uVar58 < 0xf) {
    *(char *)psStack_1b8 = (char)((int)uVar58 << 4);
  }
  else {
    *(char *)psStack_1b8 = -0x10;
    puVar64 = puVar63;
    if (0xfe < uVar60) {
      uVar60 = uVar58 - 0x10e;
      _memset(puVar63,0xff,uVar60 / 0xff + 1);
      uStack_170 = uStack_170 & 0xffffffff;
      puVar64 = (ulong *)((long)psStack_1b8 + uVar60 / 0xff + 2);
      uVar60 = uVar60 % 0xff;
    }
    puVar63 = (ulong *)((long)puVar64 + 1);
    *(char *)puVar64 = (char)uVar60;
  }
  puVar64 = (ulong *)((long)puVar63 + uVar58);
  puVar69 = puVar63;
  do {
    puVar17 = puVar69 + 1;
    *puVar69 = *puStack_180;
    puVar69 = puVar17;
    puStack_180 = puStack_180 + 1;
  } while (puVar17 < puVar64);
  psVar19 = (short *)((long)puVar64 + 2);
  *(short *)puVar64 = sVar11 - sVar12;
  uVar24 = iVar65 - 4;
  uVar60 = (ulong)(int)uVar24;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)psVar19 + (uVar60 >> 8) + 6))) {
    return;
  }
  if (uVar24 < 0xf) {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + (char)uVar24;
  }
  else {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + '\x0f';
    uVar61 = uVar60 - 0xf;
    if (0x1fd < uVar61) {
      uVar61 = (uVar60 - 0x20d) / 0x1fe;
      _memset(psVar19,0xff,uVar61 * 2 + 2);
      psVar19 = (short *)((long)puVar63 + uVar61 * 2 + uVar58 + 4);
      uVar61 = (uVar60 - 0x20d) % 0x1fe;
    }
    psVar20 = psVar19;
    if (0xfe < uVar61) {
      psVar20 = (short *)((long)psVar19 + 1);
      *(char *)psVar19 = -1;
      uVar61 = uVar61 - 0xff;
    }
    psVar19 = (short *)((long)psVar20 + 1);
    *(char *)psVar20 = (char)uVar61;
  }
  puStack_180 = (ulong *)((long)puVar68 + (long)iVar65);
  puStack_190 = puStack_160;
  puVar68 = puStack_150;
  uVar58 = uStack_170;
  psStack_1b8 = psVar19;
  goto LAB_10929afec;
LAB_10929bf88:
  iVar27 = iVar31 - iVar54;
  if (puVar63 <= puStack_150) {
    iVar27 = iVar65;
  }
  puVar66 = (ulong *)((long)psStack_1b8 + 1);
  uVar33 = (long)puVar68 - (long)puStack_180;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)puVar66 + uVar33 + (uVar33 >> 8) + 8))) {
    return;
  }
  uVar58 = uVar33 - 0xf;
  if (uVar33 < 0xf) {
    *(char *)psStack_1b8 = (char)((int)uVar33 << 4);
  }
  else {
    *(char *)psStack_1b8 = -0x10;
    puVar63 = puVar66;
    if (0xfe < uVar58) {
      uVar58 = uVar33 - 0x10e;
      _memset(puVar66,0xff,uVar58 / 0xff + 1);
      puVar63 = (ulong *)((long)psStack_1b8 + uVar58 / 0xff + 2);
      uVar58 = uVar58 % 0xff;
    }
    puVar66 = (ulong *)((long)puVar63 + 1);
    *(char *)puVar63 = (char)uVar58;
  }
  puVar63 = (ulong *)((long)puVar66 + uVar33);
  puVar69 = puVar66;
  do {
    puVar17 = puVar69 + 1;
    *puVar69 = *puStack_180;
    puVar69 = puVar17;
    puStack_180 = puStack_180 + 1;
  } while (puVar17 < puVar63);
  psVar19 = (short *)((long)puVar63 + 2);
  *(short *)puVar63 = sVar11 - sVar12;
  uVar24 = iVar27 - 4;
  uVar58 = (ulong)(int)uVar24;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)psVar19 + (uVar58 >> 8) + 6))) {
    return;
  }
  if (uVar24 < 0xf) {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + (char)uVar24;
  }
  else {
    *(char *)psStack_1b8 = (char)*psStack_1b8 + '\x0f';
    uVar60 = uVar58 - 0xf;
    if (0x1fd < uVar60) {
      uVar60 = (uVar58 - 0x20d) / 0x1fe;
      _memset(psVar19,0xff,uVar60 * 2 + 2);
      psVar19 = (short *)((long)puVar66 + uVar33 + uVar60 * 2 + 4);
      uVar60 = (uVar58 - 0x20d) % 0x1fe;
    }
    psVar20 = psVar19;
    if (0xfe < uVar60) {
      psVar20 = (short *)((long)psVar19 + 1);
      *(char *)psVar19 = -1;
      uVar60 = uVar60 - 0xff;
    }
    psVar19 = (short *)((long)psVar20 + 1);
    *(char *)psVar20 = (char)uVar60;
  }
  puVar4 = (undefined8 *)((long)puVar68 + (long)iVar27);
  psVar20 = (short *)((long)psVar19 + 1);
  uVar33 = (long)puStack_150 - (long)puVar4;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)psVar20 + uVar33 + (uVar33 >> 8) + 8))) {
    return;
  }
  uVar58 = uVar33 - 0xf;
  if (uVar33 < 0xf) {
    *(char *)psVar19 = (char)((int)uVar33 << 4);
  }
  else {
    *(char *)psVar19 = -0x10;
    psVar62 = psVar20;
    if (0xfe < uVar58) {
      uVar58 = uVar33 - 0x10e;
      _memset(psVar20,0xff,uVar58 / 0xff + 1);
      psVar62 = (short *)((long)psVar19 + uVar58 / 0xff + 2);
      uVar58 = uVar58 % 0xff;
    }
    psVar20 = (short *)((long)psVar62 + 1);
    *(char *)psVar62 = (char)uVar58;
  }
  psVar62 = (short *)((long)psVar20 + uVar33);
  puVar34 = puVar4;
  psVar40 = psVar20;
  do {
    psVar41 = psVar40 + 4;
    *(undefined8 *)psVar40 = *puVar34;
    puVar34 = puVar34 + 1;
    psVar40 = psVar41;
  } while (psVar41 < psVar62);
  param_3 = psVar62 + 1;
  *psVar62 = (short)puStack_150 - (short)puStack_160;
  uVar24 = iVar15 - 4;
  uVar33 = (ulong)(int)uVar24;
  if ((iVar23 != 0) && (pcVar2 < (char *)((long)param_3 + (uVar33 >> 8) + 6))) {
    return;
  }
  puVar66 = puStack_150;
  if (uVar24 < 0xf) {
    *(char *)psVar19 = (char)*psVar19 + (char)uVar24;
    goto LAB_10929bf54;
  }
  *(char *)psVar19 = (char)*psVar19 + '\x0f';
  uVar58 = uVar33 - 0xf;
  psVar19 = param_3;
  if (0x1fd < uVar58) {
    uVar60 = (uVar33 - 0x20d) / 0x1fe;
    _memset(param_3,0xff,uVar60 * 2 + 2);
    uVar58 = (uVar33 - 0x20d) % 0x1fe;
    psVar19 = (short *)((long)puStack_150 + (long)((long)psVar20 + (uVar60 * 2 - (long)puVar4) + 4))
    ;
  }
  goto joined_r0x00010929bf20;
}



/* Entry: 10929c3fc; end: 10929e9fb;  */

ulong * FUN_10929c3fc(long param_1,ulong *param_2,char *param_3,int *param_4,int param_5,
                     ulong param_6,ulong param_7,int param_8,int param_9,int param_10,int param_11)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 auVar11 [11];
  undefined1 auVar12 [12];
  bool bVar13;
  ulong *puVar14;
  uint *puVar15;
  ulong *puVar16;
  uint *puVar17;
  char *pcVar18;
  ulong *puVar19;
  ulong *puVar20;
  char *pcVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong *puVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *puVar33;
  uint uVar34;
  uint uVar35;
  ulong *puVar36;
  long lVar37;
  long lVar38;
  ulong *puVar39;
  long lVar40;
  long lVar41;
  ulong *puVar42;
  ulong uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  ulong *puVar47;
  ulong *puVar48;
  uint uVar49;
  int iVar50;
  ulong *puVar51;
  ulong *puVar52;
  ulong *puVar53;
  ulong *puVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  ulong *puVar58;
  int iVar59;
  long lVar60;
  ulong *puVar61;
  char *pcVar62;
  int iVar63;
  uint *puVar64;
  ulong uVar65;
  ulong uVar66;
  char *pcVar67;
  char *pcVar68;
  uint uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong *puVar72;
  ulong *puVar73;
  int iVar74;
  int iVar75;
  uint uVar76;
  ulong uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 uVar80;
  long lStack_100d0;
  uint uStack_100b4;
  uint auStack_100b0 [8];
  uint auStack_10090 [4];
  uint uStack_10080;
  undefined4 uStack_1007c;
  undefined4 uStack_10078;
  uint uStack_10074;
  int aiStack_10070 [4];
  uint auStack_10060 [16376];
  long lStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = *param_4;
  pcVar67 = param_3 + param_5;
  *param_4 = 0;
  if (0xffe < param_7) {
    param_7 = 0xfff;
  }
  puVar19 = param_2;
  pcVar22 = param_3;
  pcVar18 = param_3;
  puVar20 = param_2;
  if (0xb < iVar7) {
    puVar26 = (ulong *)((long)param_2 + (long)iVar7 + -0xc);
    puVar19 = (ulong *)((long)param_2 + (long)iVar7 + -5);
    lVar3 = param_1 + 0x20000;
    puVar47 = (ulong *)((long)param_2 + (long)iVar7 + -8);
    puVar36 = (ulong *)((long)param_2 + (long)iVar7 + -6);
    pcVar68 = (char *)((ulong)&uStack_100b4 | 3);
    uVar31 = (long)param_2 + (long)iVar7 + -5;
    iVar25 = (int)param_6;
    uVar43 = param_6;
    puVar14 = param_2;
    do {
      lVar60 = *(long *)(param_1 + 0x40008);
      uVar6 = *(uint *)(param_1 + 0x4001c);
      uVar77 = (ulong)*(uint *)(param_1 + 0x40020);
      uVar2 = uVar6 + 0x10000;
      uVar27 = (uint)((long)puVar14 - lVar60);
      uVar29 = uVar6;
      if (uVar2 <= uVar27) {
        uVar29 = uVar27 - 0xffff;
      }
      uVar46 = (uint)*puVar14;
      if (*(uint *)(param_1 + 0x40020) < uVar27) {
        do {
          uVar10 = (uint)(*(int *)(lVar60 + uVar77) * -0x61c8864f) >> 0x11;
          uVar69 = (int)uVar77 - *(int *)(param_1 + (ulong)uVar10 * 4);
          if (0xfffe < uVar69) {
            uVar69 = 0xffff;
          }
          *(short *)(lVar3 + (uVar77 & 0xffff) * 2) = (short)uVar69;
          *(int *)(param_1 + (ulong)uVar10 * 4) = (int)uVar77;
          uVar77 = uVar77 + 1;
        } while (((long)puVar14 - lVar60 & 0xffffffffU) != uVar77);
      }
      lVar37 = *(long *)(param_1 + 0x40028);
      uVar10 = *(uint *)(param_1 + 0x40018);
      pcVar21 = (char *)(ulong)uVar10;
      puVar32 = (ulong *)(pcVar21 + lVar60);
      lVar38 = *(long *)(param_1 + 0x40010);
      *(uint *)(param_1 + 0x40020) = uVar27;
      puVar39 = (ulong *)((long)puVar14 + 0xc);
      uVar69 = *(uint *)(param_1 + (ulong)((uint)*puVar14 * -0x61c8864f >> 0x11) * 4);
      puVar72 = (ulong *)((long)puVar14 + 4);
      puVar73 = puVar32 + 1;
      puVar33 = (ulong *)((long)puVar32 + 0xffff);
      puVar58 = (ulong *)((long)puVar14 + -0xffff);
      if (puVar14 <= puVar33) {
        puVar58 = puVar32;
      }
      iVar50 = (int)puVar14;
      iVar63 = (int)puVar72;
      if (uVar29 <= uVar69 && (int)uVar43 != 0) {
        iVar59 = 0;
        iVar28 = 0;
        uVar77 = 0;
        lVar41 = 0;
        uVar65 = 3;
LAB_10929c9a0:
        uVar44 = (int)uVar43 - 1;
        uVar43 = (ulong)uVar44;
        uVar66 = uVar65;
        if ((param_11 == 0) || (7 < uVar27 - uVar69)) {
          uVar70 = (ulong)uVar69;
          uVar49 = uVar10 - uVar69;
          uVar24 = (uint)uVar65;
          if (uVar10 < uVar69 || uVar49 == 0) {
            puVar15 = (uint *)(lVar60 + uVar70);
            if ((*(short *)((long)puVar14 + (long)(int)uVar24 + -1) !=
                 *(short *)((long)puVar15 + (long)(int)uVar24 + -1)) || (*puVar15 != uVar46))
            goto LAB_10929c9b8;
            puVar16 = (ulong *)(puVar15 + 1);
            puVar42 = puVar72;
            if (puVar72 < puVar26) {
              if (*puVar16 == *puVar72) {
                puVar16 = (ulong *)(puVar15 + 3);
                puVar42 = puVar39;
                goto LAB_10929cbd0;
              }
              uVar65 = *puVar72 ^ *puVar16;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              uVar49 = (uint)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
            }
            else {
LAB_10929cbd0:
              if (puVar42 < puVar26) {
                iVar55 = (-4 - iVar50) + (int)puVar42;
                puVar61 = puVar42;
                puVar52 = puVar16;
                do {
                  puVar16 = puVar52 + 1;
                  puVar42 = puVar61 + 1;
                  if (*puVar52 != *puVar61) {
                    uVar65 = *puVar61 ^ *puVar52;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    uVar49 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3) + iVar55;
                    goto LAB_10929ce48;
                  }
                  iVar55 = iVar55 + 8;
                  puVar61 = puVar42;
                  puVar52 = puVar16;
                } while (puVar42 < puVar26);
              }
              if (puVar42 < puVar47) {
                if ((uint)*puVar16 == (uint)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 4);
                  puVar16 = (ulong *)((long)puVar16 + 4);
                }
              }
              if (puVar42 < puVar36) {
                if ((short)*puVar16 == (short)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 2);
                  puVar16 = (ulong *)((long)puVar16 + 2);
                }
              }
              if ((puVar42 < puVar19) && ((char)*puVar16 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              uVar49 = (int)puVar42 - iVar63;
            }
LAB_10929ce48:
            uVar65 = (ulong)(uVar49 + 4);
          }
          else {
            puVar15 = (uint *)(lVar38 + uVar70);
            if (*puVar15 != uVar46) goto LAB_10929c9b8;
            puVar16 = (ulong *)((long)puVar14 + (ulong)uVar49);
            puVar42 = puVar19;
            if (puVar16 <= puVar19) {
              puVar42 = puVar16;
            }
            puVar16 = (ulong *)(puVar15 + 1);
            puVar52 = (ulong *)((long)puVar42 + -7);
            puVar61 = puVar72;
            if (puVar72 < puVar52) {
              if (*puVar16 == *puVar72) {
                puVar16 = (ulong *)(puVar15 + 3);
                puVar61 = puVar39;
                goto LAB_10929cae0;
              }
              uVar65 = *puVar72 ^ *puVar16;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              uVar34 = (uint)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
            }
            else {
LAB_10929cae0:
              if (puVar61 < puVar52) {
                iVar55 = (-4 - iVar50) + (int)puVar61;
                puVar53 = puVar61;
                puVar54 = puVar16;
                do {
                  puVar16 = puVar54 + 1;
                  puVar61 = puVar53 + 1;
                  if (*puVar54 != *puVar53) {
                    uVar65 = *puVar53 ^ *puVar54;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    uVar34 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3) + iVar55;
                    goto LAB_10929cd1c;
                  }
                  iVar55 = iVar55 + 8;
                  puVar53 = puVar61;
                  puVar54 = puVar16;
                } while (puVar61 < puVar52);
              }
              if (puVar61 < (ulong *)((long)puVar42 + -3)) {
                if ((uint)*puVar16 == (uint)*puVar61) {
                  puVar61 = (ulong *)((long)puVar61 + 4);
                  puVar16 = (ulong *)((long)puVar16 + 4);
                }
              }
              if (puVar61 < (ulong *)((long)puVar42 + -1)) {
                if ((short)*puVar16 == (short)*puVar61) {
                  puVar61 = (ulong *)((long)puVar61 + 2);
                  puVar16 = (ulong *)((long)puVar16 + 2);
                }
              }
              if ((puVar61 < puVar42) && ((char)*puVar16 == (char)*puVar61)) {
                puVar61 = (ulong *)((long)puVar61 + 1);
              }
              uVar34 = (int)puVar61 - iVar63;
            }
LAB_10929cd1c:
            uVar34 = uVar34 + 4;
            uVar65 = (ulong)uVar34;
            if ((puVar42 < puVar19) && ((ulong *)((long)puVar14 + (long)(int)uVar34) == puVar42)) {
              puVar16 = puVar42;
              puVar61 = puVar32;
              if (puVar42 < puVar26) {
                if (*puVar32 == *puVar42) {
                  puVar16 = puVar42 + 1;
                  puVar61 = puVar73;
                  goto LAB_10929cd60;
                }
                uVar65 = *puVar42 ^ *puVar32;
                uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
                uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
                uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
                uVar49 = (uint)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
              }
              else {
LAB_10929cd60:
                if (puVar16 < puVar26) {
                  uVar65 = (long)puVar14 + (ulong)uVar49;
                  uVar66 = uVar31;
                  if (uVar65 <= uVar31) {
                    uVar66 = uVar65;
                  }
                  iVar55 = (int)puVar16 - (int)uVar66;
                  puVar52 = puVar16;
                  puVar53 = puVar61;
                  do {
                    puVar61 = puVar53 + 1;
                    puVar16 = puVar52 + 1;
                    if (*puVar53 != *puVar52) {
                      uVar65 = *puVar52 ^ *puVar53;
                      uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar65 & 0x5555555555555555) << 1;
                      uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 |
                               (uVar65 & 0x3333333333333333) << 2;
                      uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar65 & 0xffff0000ffff) << 0x10;
                      uVar49 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3) + iVar55;
                      goto LAB_10929ce64;
                    }
                    iVar55 = iVar55 + 8;
                    puVar52 = puVar16;
                    puVar53 = puVar61;
                  } while (puVar16 < puVar26);
                }
                if (puVar16 < puVar47) {
                  if ((uint)*puVar61 == (uint)*puVar16) {
                    puVar16 = (ulong *)((long)puVar16 + 4);
                    puVar61 = (ulong *)((long)puVar61 + 4);
                  }
                }
                if (puVar16 < puVar36) {
                  if ((short)*puVar61 == (short)*puVar16) {
                    puVar16 = (ulong *)((long)puVar16 + 2);
                    puVar61 = (ulong *)((long)puVar61 + 2);
                  }
                }
                if ((puVar16 < puVar19) && ((char)*puVar61 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar49 = (int)puVar16 - (int)puVar42;
              }
LAB_10929ce64:
              uVar65 = (ulong)(uVar49 + uVar34);
            }
          }
          uVar34 = (uint)uVar65;
          uVar49 = uVar34;
          lVar40 = lVar60 + uVar70;
          if ((int)uVar34 <= (int)uVar24) {
            uVar49 = uVar24;
            lVar40 = lVar41;
          }
          lVar41 = lVar40;
          uVar66 = (ulong)uVar49;
          if (((int)uVar34 < 4 || (int)uVar34 < (int)uVar24) || uVar27 < uVar49 + uVar69)
          goto LAB_10929c9b8;
          iVar55 = 0;
          uVar49 = 1;
          iVar75 = iVar59;
          do {
            uVar9 = *(ushort *)(lVar3 + (ulong)(uVar69 + iVar55 & 0xffff) * 2);
            bVar13 = uVar9 <= uVar49;
            if (uVar49 <= uVar9) {
              uVar49 = (uint)uVar9;
            }
            iVar59 = iVar55;
            if (bVar13) {
              iVar59 = iVar75;
            }
            iVar55 = iVar55 + 1;
            iVar75 = iVar59;
          } while (uVar34 - 3 != iVar55);
          uVar66 = uVar65;
          if (uVar49 < 2) goto LAB_10929c9b8;
          if (uVar69 < uVar49) goto LAB_10929c6bc;
          uVar69 = uVar69 - uVar49;
        }
        else {
LAB_10929c9b8:
          uVar65 = uVar66;
          if (*(short *)(lVar3 + (ulong)(uVar69 & 0xffff) * 2) == 1 && iVar59 == 0) {
            if (iVar28 == 0) {
              if ((uVar46 & 0xffff) != uVar46 >> 0x10 || (uVar46 & 0xff) != uVar46 >> 0x18) {
                iVar28 = 1;
                goto LAB_10929cccc;
              }
              puVar16 = puVar72;
              FUN_10929e9fc(puVar72,puVar19,uVar46);
              uVar77 = ((ulong)puVar16 & 0xffffffff) + 4;
              iVar28 = 2;
            }
            if ((iVar28 == 2) && (uVar49 = uVar69 - 1, uVar10 <= uVar49)) {
              puVar16 = (ulong *)(lVar60 + (ulong)uVar49);
              if ((uint)*puVar16 == uVar46) {
                puVar15 = (uint *)((long)puVar16 + 4);
                FUN_10929e9fc(puVar15,puVar19,uVar46);
                uVar66 = ((ulong)puVar15 & 0xffffffff) + 4;
                puVar42 = puVar16;
                do {
                  puVar61 = puVar42;
                  pcVar22 = pcVar68;
                  puVar52 = puVar61;
                  if (puVar61 < (ulong *)((long)puVar58 + 4)) break;
                  puVar42 = (ulong *)((long)puVar61 + -4);
                } while (*(uint *)((long)puVar61 + -4) == uVar46);
                do {
                  puVar42 = puVar52;
                  if (puVar61 <= puVar58) break;
                  puVar53 = (ulong *)((long)puVar61 + -1);
                  cVar8 = *pcVar22;
                  puVar42 = puVar61;
                  pcVar22 = pcVar22 + -1;
                  puVar61 = puVar53;
                  puVar52 = puVar58;
                } while (*(char *)puVar53 == cVar8);
                uVar70 = uVar66 + ((long)puVar16 - (long)puVar42 & 0xffffffffU);
                uStack_100b4 = uVar46;
                if ((uVar66 <= uVar77) && (uVar77 <= uVar70)) {
                  iVar59 = 0;
                  uVar69 = (uVar49 - (int)uVar77) + (int)uVar66;
                  iVar28 = 2;
                  goto LAB_10929ccdc;
                }
                uVar49 = uVar49 - (int)((long)puVar16 - (long)puVar42);
                if (uVar77 <= uVar70) {
                  uVar70 = uVar77;
                }
                lVar40 = lVar41;
                uVar66 = uVar65;
                if ((((ulong)(long)(int)uVar65 < uVar70) &&
                    (lVar40 = lVar60 + (ulong)uVar49, uVar66 = uVar70,
                    0xffff < (long)puVar14 - lVar40)) ||
                   (uVar24 = (uint)*(ushort *)(lVar3 + (ulong)(uVar49 & 0xffff) * 2),
                   uVar69 = uVar49 - uVar24, lVar41 = lVar40, uVar65 = uVar66, uVar49 < uVar24))
                goto LAB_10929c6bc;
                iVar59 = 0;
                iVar28 = 2;
                goto LAB_10929ccdc;
              }
              iVar28 = 2;
            }
          }
LAB_10929cccc:
          uVar69 = uVar69 - *(ushort *)(lVar3 + (ulong)(iVar59 + uVar69 & 0xffff) * 2);
        }
LAB_10929ccdc:
        if (uVar69 < uVar29 || uVar44 == 0) goto LAB_10929c6bc;
        goto LAB_10929c9a0;
      }
      lVar41 = 0;
      uVar65 = 3;
LAB_10929c6bc:
      iVar59 = (int)lVar41;
      uVar69 = (uint)uVar65;
      plVar4 = (long *)(lVar37 + 0x40000);
      pcVar22 = pcVar21;
      if (((param_10 != 0) && ((int)uVar43 != 0)) && (uVar27 - uVar29 < 0xffff)) {
        lVar40 = *plVar4 - *(long *)(lVar37 + 0x40008);
        uVar44 = *(uint *)(lVar37 + (ulong)((uint)*puVar14 * -0x61c8864f >> 0x11) * 4);
        uVar29 = (uVar44 + uVar29) - (int)lVar40;
        if (uVar27 - uVar29 >> 0x10 == 0) {
          do {
            iVar59 = (int)lVar41;
            uVar69 = (uint)uVar65;
            if ((int)uVar43 == 0) break;
            puVar15 = (uint *)(*(long *)(lVar37 + 0x40008) + (ulong)uVar44);
            if (*puVar15 == uVar46) {
              puVar58 = (ulong *)((long)puVar14 + (lVar40 - (ulong)uVar44));
              puVar16 = puVar19;
              if (puVar58 <= puVar19) {
                puVar16 = puVar58;
              }
              puVar58 = (ulong *)(puVar15 + 1);
              puVar61 = (ulong *)((long)puVar16 + -7);
              puVar42 = puVar72;
              if (puVar72 < puVar61) {
                if (*puVar58 == *puVar72) {
                  puVar58 = (ulong *)(puVar15 + 3);
                  puVar42 = puVar39;
                  goto LAB_10929c774;
                }
                uVar77 = *puVar72 ^ *puVar58;
                uVar77 = (uVar77 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar77 & 0x5555555555555555) << 1;
                uVar77 = (uVar77 & 0xcccccccccccccccc) >> 2 | (uVar77 & 0x3333333333333333) << 2;
                uVar77 = (uVar77 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar77 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar77 = (uVar77 & 0xff00ff00ff00ff00) >> 8 | (uVar77 & 0xff00ff00ff00ff) << 8;
                uVar77 = (uVar77 & 0xffff0000ffff0000) >> 0x10 | (uVar77 & 0xffff0000ffff) << 0x10;
                uVar49 = (uint)LZCOUNT(uVar77 >> 0x20 | uVar77 << 0x20) >> 3;
              }
              else {
LAB_10929c774:
                if (puVar42 < puVar61) {
                  iVar59 = (-4 - iVar50) + (int)puVar42;
                  puVar52 = puVar42;
                  puVar53 = puVar58;
                  do {
                    puVar58 = puVar53 + 1;
                    puVar42 = puVar52 + 1;
                    pcVar22 = (char *)*puVar52;
                    if ((char *)*puVar53 != pcVar22) {
                      uVar77 = (ulong)pcVar22 ^ *puVar53;
                      uVar77 = (uVar77 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar77 & 0x5555555555555555) << 1;
                      uVar77 = (uVar77 & 0xcccccccccccccccc) >> 2 |
                               (uVar77 & 0x3333333333333333) << 2;
                      uVar77 = (uVar77 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar77 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar77 = (uVar77 & 0xff00ff00ff00ff00) >> 8 | (uVar77 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar77 = (uVar77 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar77 & 0xffff0000ffff) << 0x10;
                      uVar49 = (int)((ulong)LZCOUNT(uVar77 >> 0x20 | uVar77 << 0x20) >> 3) + iVar59;
                      goto LAB_10929c850;
                    }
                    iVar59 = iVar59 + 8;
                    puVar52 = puVar42;
                    puVar53 = puVar58;
                  } while (puVar42 < puVar61);
                }
                if (puVar42 < (ulong *)((long)puVar16 + -3)) {
                  if ((uint)*puVar58 == (uint)*puVar42) {
                    puVar42 = (ulong *)((long)puVar42 + 4);
                    puVar58 = (ulong *)((long)puVar58 + 4);
                  }
                }
                if (puVar42 < (ulong *)((long)puVar16 + -1)) {
                  if ((short)*puVar58 == (short)*puVar42) {
                    puVar42 = (ulong *)((long)puVar42 + 2);
                    puVar58 = (ulong *)((long)puVar58 + 2);
                  }
                }
                if ((puVar42 < puVar16) && ((char)*puVar58 == (char)*puVar42)) {
                  puVar42 = (ulong *)((long)puVar42 + 1);
                }
                uVar49 = (int)puVar42 - iVar63;
              }
LAB_10929c850:
              if ((int)uVar69 < (int)(uVar49 + 4)) {
                uVar69 = uVar49 + 4;
                lVar41 = lVar60 + (ulong)uVar29;
              }
              uVar65 = (ulong)uVar69;
            }
            iVar59 = (int)lVar41;
            uVar69 = (uint)uVar65;
            uVar43 = (ulong)((int)uVar43 - 1);
            uVar49 = (uint)*(ushort *)(lVar37 + 0x20000 + (ulong)(uVar44 & 0xffff) * 2);
            uVar44 = uVar44 - uVar49;
            uVar29 = uVar29 - uVar49;
          } while (uVar27 - uVar29 < 0x10000);
        }
      }
      if ((int)uVar69 < 4) {
        puVar14 = (ulong *)((long)puVar14 + 1);
      }
      else {
        uVar43 = (long)puVar14 - (long)puVar20;
        uVar29 = 0x12;
        if (0x11 < uVar69 - 0x13) {
          uVar29 = uVar69;
        }
        if (param_11 != 0) {
          uVar69 = uVar29;
        }
        uVar77 = (ulong)uVar69;
        uVar29 = (uint)uVar43;
        if (param_7 < uVar77) {
          puVar72 = (ulong *)(pcVar18 + 1);
          if ((param_8 != 0) && (pcVar67 < (char *)((long)puVar72 + uVar43 + (uVar43 >> 8) + 8)))
          goto LAB_10929c4c0;
          uVar65 = uVar43 - 0xf;
          if (uVar43 < 0xf) {
            *pcVar18 = (char)(uVar29 << 4);
          }
          else {
            *pcVar18 = -0x10;
            puVar73 = puVar72;
            if (0xfe < uVar65) {
              uVar65 = uVar43 - 0x10e;
              pcVar22 = (char *)(uVar65 / 0xff + 1);
              _memset(puVar72,0xff);
              puVar73 = (ulong *)(pcVar18 + uVar65 / 0xff + 2);
              uVar65 = uVar65 % 0xff;
            }
            puVar72 = (ulong *)((long)puVar73 + 1);
            *(char *)puVar73 = (char)uVar65;
          }
          puVar73 = (ulong *)((long)puVar72 + uVar43);
          puVar32 = puVar72;
          do {
            puVar33 = puVar32 + 1;
            *puVar32 = *puVar20;
            puVar32 = puVar33;
            puVar20 = puVar20 + 1;
          } while (puVar33 < puVar73);
          pcVar21 = (char *)((long)puVar73 + 2);
          *(short *)puVar73 = (short)(iVar50 - iVar59);
          uVar69 = uVar69 - 4;
          if ((param_8 != 0) && (pcVar67 < pcVar21 + (ulong)(uVar69 >> 8) + 6)) goto LAB_10929c4c0;
          if (uVar69 < 0xf) {
            *pcVar18 = *pcVar18 + (char)uVar69;
          }
          else {
            *pcVar18 = *pcVar18 + '\x0f';
            uVar65 = (ulong)uVar69 - 0xf;
            if (0x1fd < uVar65) {
              uVar65 = (ulong)uVar69 - 0x20d;
              uVar66 = uVar65 / 0x1fe;
              pcVar22 = (char *)(uVar66 * 2 + 2);
              _memset(pcVar21,0xff);
              pcVar21 = (char *)((long)puVar72 + uVar66 * 2 + uVar43 + 4);
              uVar65 = uVar65 % 0x1fe;
            }
            pcVar18 = pcVar21;
            if (0xfe < uVar65) {
              pcVar18 = pcVar21 + 1;
              *pcVar21 = -1;
              uVar65 = uVar65 - 0xff;
            }
            pcVar21 = pcVar18 + 1;
            *pcVar18 = (char)uVar65;
          }
          puVar20 = (ulong *)((long)puVar14 + uVar77);
          pcVar18 = pcVar21;
          puVar14 = puVar20;
        }
        else {
          lVar40 = (long)(int)uVar29;
          lVar41 = lVar40 + 1;
          uVar80 = (undefined1)((ulong)lVar41 >> 0x18);
          auVar11[8] = (char)lVar41;
          auVar11._0_8_ = lVar40;
          auVar11[9] = (char)((ulong)lVar41 >> 8);
          auVar11[10] = (char)((ulong)lVar41 >> 0x10);
          auVar12[0xb] = uVar80;
          auVar12._0_11_ = auVar11;
          auStack_100b0[7] = auVar12._8_4_;
          auStack_10090[3] = (uint)(lVar40 + 2);
          uStack_10074 = (uint)(lVar40 + 3);
          auVar78._0_8_ = CONCAT44(auStack_100b0[7] - 0xf,uVar29 - 0xf);
          auVar78._8_4_ = auStack_10090[3] - 0xf;
          auVar78._12_4_ = uStack_10074 - 0xf;
          auVar79 = NEON_umull(auVar78._0_8_,0x8080808180808081,4);
          auStack_100b0[0] =
               uVar29 ^ (uVar29 ^ uVar29 + (auVar79._4_4_ >> 7) + 1) & -(uint)(0xe < lVar40);
          auStack_100b0[1] = 0;
          auStack_100b0[2] = 1;
          auStack_100b0[3] = uVar29;
          auStack_100b0[4] =
               auStack_100b0[7] ^
               (auStack_100b0[7] ^ CONCAT13(uVar80,auVar11._8_3_) + (auVar79._12_4_ >> 7) + 1) &
               -(uint)(0xe < lVar41);
          auStack_100b0[5] = 0;
          auStack_100b0[6] = 1;
          auStack_10090[0] =
               auStack_10090[3] ^
               (auStack_10090[3] ^ auStack_10090[3] + (int)((auVar78._8_8_ & 0xffffffff) / 0xff) + 1
               ) & -(uint)(0xe < lVar40 + 2);
          auStack_10090[1] = 0;
          auStack_10090[2] = 1;
          uStack_10080 = uStack_10074 ^
                         (uStack_10074 ^ uStack_10074 + (int)(auVar78._8_8_ / 0xff00000000) + 1) &
                         -(uint)(0xe < lVar40 + 3);
          uStack_1007c = 0;
          uStack_10078 = 1;
          uVar27 = uVar29;
          if (0xe < (int)uVar29) {
            uVar27 = uVar29 + (uVar29 - 0xf) / 0xff + 1;
          }
          uVar65 = 0xfffffff1;
          uVar43 = 4;
          puVar15 = (uint *)(aiStack_10070 + 3);
          do {
            uVar46 = uVar27 + 3;
            if (0x12 < uVar43) {
              uVar46 = uVar27 + 4 + (int)(uVar65 / 0xff);
            }
            puVar15[-1] = (uint)uVar43;
            *puVar15 = uVar29;
            puVar15[-3] = uVar46;
            puVar15[-2] = iVar50 - iVar59;
            uVar43 = uVar43 + 1;
            uVar65 = (ulong)((int)uVar65 + 1);
            puVar15 = puVar15 + 4;
          } while (uVar69 + 1 != uVar43);
          lVar41 = -3;
          puVar15 = auStack_100b0 + uVar77 * 4 + 7;
          do {
            puVar15[-2] = 0;
            puVar15[-1] = 1;
            *puVar15 = (int)lVar41 + 4;
            puVar15[-3] = (int)lVar41 + auStack_100b0[uVar77 * 4] + 4;
            puVar15 = puVar15 + 4;
            bVar13 = lVar41 != -1;
            lVar41 = lVar41 + 1;
          } while (bVar13);
          pcVar62 = (char *)(lVar37 + 0x20000);
          iVar59 = (int)lVar60;
          uVar29 = iVar50 - iVar59;
          iVar50 = -5 - iVar50;
          iVar63 = 5;
          uVar43 = 1;
          puVar64 = auStack_10060;
          puVar15 = auStack_100b0 + 8;
          puVar72 = puVar14;
          do {
            uVar29 = uVar29 + 1;
            puVar72 = (ulong *)((long)puVar72 + 1);
            puVar58 = (ulong *)((long)puVar14 + uVar43);
            if (puVar26 < puVar58) break;
            uVar65 = uVar43 + 1;
            uVar27 = auStack_100b0[uVar43 * 4];
            iVar28 = (int)uVar43;
            if (param_9 == 0) {
              if ((int)uVar27 < (int)auStack_100b0[uVar65 * 4]) {
                uVar69 = (int)puVar58 - iVar59;
                uVar46 = uVar6;
                if (uVar2 <= uVar69) {
                  uVar46 = uVar69 - 0xffff;
                }
                uVar44 = (uint)*puVar58;
                uVar66 = (ulong)*(uint *)(param_1 + 0x40020);
                if (*(uint *)(param_1 + 0x40020) < uVar69) {
                  do {
                    uVar24 = (uint)(*(int *)(lVar60 + uVar66) * -0x61c8864f) >> 0x11;
                    uVar49 = (int)uVar66 - *(int *)(param_1 + (ulong)uVar24 * 4);
                    if (0xfffe < uVar49) {
                      uVar49 = 0xffff;
                    }
                    *(short *)(lVar3 + (uVar66 & 0xffff) * 2) = (short)uVar49;
                    *(int *)(param_1 + (ulong)uVar24 * 4) = (int)uVar66;
                    uVar66 = uVar66 + 1;
                  } while (uVar29 != uVar66);
                }
                uVar24 = (int)uVar77 - iVar28;
                uVar66 = (ulong)uVar24;
                *(uint *)(param_1 + 0x40020) = uVar69;
                puVar42 = (ulong *)((long)puVar58 + 0xc);
                uVar49 = *(uint *)(param_1 + (ulong)((uint)*puVar58 * -0x61c8864f >> 0x11) * 4);
                puVar39 = (ulong *)((long)puVar58 + 4);
                puVar16 = (ulong *)((long)puVar58 + -0xffff);
                if (puVar58 <= puVar33) {
                  puVar16 = puVar32;
                }
                iVar75 = (int)puVar39;
                iVar55 = iVar25;
                if (uVar46 <= uVar49 && iVar25 != 0) {
                  iVar56 = 0;
                  iVar30 = 0;
                  uVar70 = 0;
                  lStack_100d0 = 0;
LAB_10929dd2c:
                  iVar55 = iVar55 + -1;
                  uVar71 = uVar66;
                  if ((param_11 == 0) || (7 < uVar69 - uVar49)) {
                    uVar45 = (ulong)uVar49;
                    uVar34 = uVar10 - uVar49;
                    uVar35 = (uint)uVar66;
                    if (uVar10 < uVar49 || uVar34 == 0) {
                      puVar17 = (uint *)(lVar60 + uVar45);
                      if ((*(short *)((long)puVar58 + (long)(int)uVar35 + -1) !=
                           *(short *)((long)puVar17 + (long)(int)uVar35 + -1)) ||
                         (*puVar17 != uVar44)) goto LAB_10929dd44;
                      puVar61 = (ulong *)(puVar17 + 1);
                      puVar52 = puVar39;
                      if (puVar39 < puVar26) {
                        if (*puVar61 == *puVar39) {
                          puVar61 = (ulong *)(puVar17 + 3);
                          puVar52 = puVar42;
                          goto LAB_10929df80;
                        }
                        uVar66 = *puVar39 ^ *puVar61;
                        uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar66 & 0x5555555555555555) << 1;
                        uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                 (uVar66 & 0x3333333333333333) << 2;
                        uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar66 & 0xff00ff00ff00ff) << 8;
                        uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar66 & 0xffff0000ffff) << 0x10;
                        uVar34 = (uint)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
                      }
                      else {
LAB_10929df80:
                        if (puVar52 < puVar26) {
                          iVar57 = iVar50 + (int)puVar52;
                          puVar53 = puVar52;
                          puVar54 = puVar61;
                          do {
                            puVar61 = puVar54 + 1;
                            puVar52 = puVar53 + 1;
                            if (*puVar54 != *puVar53) {
                              uVar66 = *puVar53 ^ *puVar54;
                              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar66 & 0x5555555555555555) << 1;
                              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                       (uVar66 & 0x3333333333333333) << 2;
                              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar66 & 0xff00ff00ff00ff) << 8;
                              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar66 & 0xffff0000ffff) << 0x10;
                              uVar34 = (int)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                       iVar57;
                              goto LAB_10929e1d8;
                            }
                            iVar57 = iVar57 + 8;
                            puVar53 = puVar52;
                            puVar54 = puVar61;
                          } while (puVar52 < puVar26);
                        }
                        if (puVar52 < puVar47) {
                          if ((uint)*puVar61 == (uint)*puVar52) {
                            puVar52 = (ulong *)((long)puVar52 + 4);
                            puVar61 = (ulong *)((long)puVar61 + 4);
                          }
                        }
                        if (puVar52 < puVar36) {
                          if ((short)*puVar61 == (short)*puVar52) {
                            puVar52 = (ulong *)((long)puVar52 + 2);
                            puVar61 = (ulong *)((long)puVar61 + 2);
                          }
                        }
                        if ((puVar52 < puVar19) && ((char)*puVar61 == (char)*puVar52)) {
                          puVar52 = (ulong *)((long)puVar52 + 1);
                        }
                        uVar34 = (int)puVar52 - iVar75;
                      }
LAB_10929e1d8:
                      uVar66 = (ulong)(uVar34 + 4);
                    }
                    else {
                      puVar17 = (uint *)(lVar38 + uVar45);
                      if (*puVar17 != uVar44) goto LAB_10929dd44;
                      puVar61 = (ulong *)((long)puVar58 + (ulong)uVar34);
                      puVar52 = puVar19;
                      if (puVar61 <= puVar19) {
                        puVar52 = puVar61;
                      }
                      puVar61 = (ulong *)(puVar17 + 1);
                      puVar54 = (ulong *)((long)puVar52 + -7);
                      puVar53 = puVar39;
                      if (puVar39 < puVar54) {
                        if (*puVar61 == *puVar39) {
                          puVar61 = (ulong *)(puVar17 + 3);
                          puVar53 = puVar42;
                          goto LAB_10929ddd0;
                        }
                        uVar66 = *puVar39 ^ *puVar61;
                        uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar66 & 0x5555555555555555) << 1;
                        uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                 (uVar66 & 0x3333333333333333) << 2;
                        uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar66 & 0xff00ff00ff00ff) << 8;
                        uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar66 & 0xffff0000ffff) << 0x10;
                        uVar23 = (uint)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
                      }
                      else {
LAB_10929ddd0:
                        if (puVar53 < puVar54) {
                          iVar57 = iVar50 + (int)puVar53;
                          puVar48 = puVar53;
                          puVar51 = puVar61;
                          do {
                            puVar61 = puVar51 + 1;
                            puVar53 = puVar48 + 1;
                            if (*puVar51 != *puVar48) {
                              uVar66 = *puVar48 ^ *puVar51;
                              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar66 & 0x5555555555555555) << 1;
                              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                       (uVar66 & 0x3333333333333333) << 2;
                              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar66 & 0xff00ff00ff00ff) << 8;
                              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar66 & 0xffff0000ffff) << 0x10;
                              uVar23 = (int)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                       iVar57;
                              goto LAB_10929e0a8;
                            }
                            iVar57 = iVar57 + 8;
                            puVar48 = puVar53;
                            puVar51 = puVar61;
                          } while (puVar53 < puVar54);
                        }
                        if (puVar53 < (ulong *)((long)puVar52 + -3)) {
                          if ((uint)*puVar61 == (uint)*puVar53) {
                            puVar53 = (ulong *)((long)puVar53 + 4);
                            puVar61 = (ulong *)((long)puVar61 + 4);
                          }
                        }
                        if (puVar53 < (ulong *)((long)puVar52 + -1)) {
                          if ((short)*puVar61 == (short)*puVar53) {
                            puVar53 = (ulong *)((long)puVar53 + 2);
                            puVar61 = (ulong *)((long)puVar61 + 2);
                          }
                        }
                        if ((puVar53 < puVar52) && ((char)*puVar61 == (char)*puVar53)) {
                          puVar53 = (ulong *)((long)puVar53 + 1);
                        }
                        uVar23 = (int)puVar53 - iVar75;
                      }
LAB_10929e0a8:
                      uVar23 = uVar23 + 4;
                      uVar66 = (ulong)uVar23;
                      if ((puVar52 < puVar19) &&
                         ((ulong *)((long)puVar58 + (long)(int)uVar23) == puVar52)) {
                        puVar61 = puVar52;
                        puVar53 = puVar32;
                        if (puVar52 < puVar26) {
                          if (*puVar32 == *puVar52) {
                            puVar61 = puVar52 + 1;
                            puVar53 = puVar73;
                            goto LAB_10929e0ec;
                          }
                          uVar66 = *puVar52 ^ *puVar32;
                          uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar66 & 0x5555555555555555) << 1;
                          uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                   (uVar66 & 0x3333333333333333) << 2;
                          uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar66 & 0xff00ff00ff00ff) << 8;
                          uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar66 & 0xffff0000ffff) << 0x10;
                          uVar34 = (uint)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
                        }
                        else {
LAB_10929e0ec:
                          if (puVar61 < puVar26) {
                            uVar66 = (long)puVar72 + (ulong)uVar34;
                            uVar71 = uVar31;
                            if (uVar66 <= uVar31) {
                              uVar71 = uVar66;
                            }
                            iVar57 = (int)puVar61 - (int)uVar71;
                            puVar54 = puVar61;
                            puVar48 = puVar53;
                            do {
                              puVar53 = puVar48 + 1;
                              puVar61 = puVar54 + 1;
                              if (*puVar48 != *puVar54) {
                                uVar66 = *puVar54 ^ *puVar48;
                                uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                         (uVar66 & 0x5555555555555555) << 1;
                                uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                         (uVar66 & 0x3333333333333333) << 2;
                                uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                         (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                                uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                         (uVar66 & 0xff00ff00ff00ff) << 8;
                                uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                         (uVar66 & 0xffff0000ffff) << 0x10;
                                uVar34 = (int)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3)
                                         + iVar57;
                                goto LAB_10929e1f4;
                              }
                              iVar57 = iVar57 + 8;
                              puVar54 = puVar61;
                              puVar48 = puVar53;
                            } while (puVar61 < puVar26);
                          }
                          if (puVar61 < puVar47) {
                            if ((uint)*puVar53 == (uint)*puVar61) {
                              puVar61 = (ulong *)((long)puVar61 + 4);
                              puVar53 = (ulong *)((long)puVar53 + 4);
                            }
                          }
                          if (puVar61 < puVar36) {
                            if ((short)*puVar53 == (short)*puVar61) {
                              puVar61 = (ulong *)((long)puVar61 + 2);
                              puVar53 = (ulong *)((long)puVar53 + 2);
                            }
                          }
                          if ((puVar61 < puVar19) && ((char)*puVar53 == (char)*puVar61)) {
                            puVar61 = (ulong *)((long)puVar61 + 1);
                          }
                          uVar34 = (int)puVar61 - (int)puVar52;
                        }
LAB_10929e1f4:
                        uVar66 = (ulong)(uVar34 + uVar23);
                      }
                    }
                    uVar23 = (uint)uVar66;
                    uVar34 = uVar23;
                    lVar41 = lVar60 + uVar45;
                    if ((int)uVar23 <= (int)uVar35) {
                      uVar34 = uVar35;
                      lVar41 = lStack_100d0;
                    }
                    lStack_100d0 = lVar41;
                    uVar71 = (ulong)uVar34;
                    if (((int)uVar23 < 4 || (int)uVar23 < (int)uVar35) || uVar69 < uVar34 + uVar49)
                    goto LAB_10929dd44;
                    iVar57 = 0;
                    uVar34 = 1;
                    iVar74 = iVar56;
                    do {
                      uVar9 = *(ushort *)(lVar3 + (ulong)(uVar49 + iVar57 & 0xffff) * 2);
                      bVar13 = uVar9 <= uVar34;
                      if (uVar34 <= uVar9) {
                        uVar34 = (uint)uVar9;
                      }
                      iVar56 = iVar57;
                      if (bVar13) {
                        iVar56 = iVar74;
                      }
                      iVar57 = iVar57 + 1;
                      iVar74 = iVar56;
                    } while (uVar23 - 3 != iVar57);
                    uVar71 = uVar66;
                    if (uVar34 < 2) goto LAB_10929dd44;
                    pcVar22 = pcVar21;
                    if (uVar49 < uVar34) goto LAB_10929d510;
                    uVar49 = uVar49 - uVar34;
                  }
                  else {
LAB_10929dd44:
                    uVar66 = uVar71;
                    if (*(short *)(lVar3 + (ulong)(uVar49 & 0xffff) * 2) == 1 && iVar56 == 0) {
                      if (iVar30 == 0) {
                        if ((uVar44 & 0xffff) != uVar44 >> 0x10 || (uVar44 & 0xff) != uVar44 >> 0x18
                           ) {
                          iVar30 = 1;
                          goto LAB_10929dd58;
                        }
                        puVar61 = puVar39;
                        FUN_10929e9fc(puVar39,puVar19,uVar44);
                        uVar70 = ((ulong)puVar61 & 0xffffffff) + 4;
                        iVar30 = 2;
                      }
                      if ((iVar30 == 2) && (uVar34 = uVar49 - 1, uVar10 <= uVar34)) {
                        puVar61 = (ulong *)(lVar60 + (ulong)uVar34);
                        if ((uint)*puVar61 == uVar44) {
                          puVar17 = (uint *)((long)puVar61 + 4);
                          FUN_10929e9fc(puVar17,puVar19,uVar44);
                          uVar45 = ((ulong)puVar17 & 0xffffffff) + 4;
                          puVar52 = puVar61;
                          do {
                            puVar53 = puVar52;
                            pcVar22 = pcVar68;
                            puVar54 = puVar53;
                            if (puVar53 < (ulong *)((long)puVar16 + 4)) break;
                            puVar52 = (ulong *)((long)puVar53 + -4);
                          } while (*(uint *)((long)puVar53 + -4) == uVar44);
                          do {
                            puVar52 = puVar54;
                            if (puVar53 <= puVar16) break;
                            puVar48 = (ulong *)((long)puVar53 + -1);
                            cVar8 = *pcVar22;
                            puVar52 = puVar53;
                            pcVar22 = pcVar22 + -1;
                            puVar53 = puVar48;
                            puVar54 = puVar16;
                          } while (*(char *)puVar48 == cVar8);
                          uVar1 = uVar45 + ((long)puVar61 - (long)puVar52 & 0xffffffffU);
                          uStack_100b4 = uVar44;
                          if ((uVar45 <= uVar70) && (uVar70 <= uVar1)) {
                            iVar56 = 0;
                            uVar49 = (uVar34 - (int)uVar70) + (int)uVar45;
                            iVar30 = 2;
                            goto LAB_10929dd68;
                          }
                          uVar34 = uVar34 - (int)((long)puVar61 - (long)puVar52);
                          if (uVar70 <= uVar1) {
                            uVar1 = uVar70;
                          }
                          lVar41 = lStack_100d0;
                          if ((((ulong)(long)(int)uVar71 < uVar1) &&
                              (pcVar22 = pcVar21, uVar71 = uVar1, lVar41 = lVar60 + (ulong)uVar34,
                              0xffff < (long)((long)puVar58 - (lVar60 + (ulong)uVar34)))) ||
                             (lStack_100d0 = lVar41,
                             uVar35 = (uint)*(ushort *)(lVar3 + (ulong)(uVar34 & 0xffff) * 2),
                             uVar49 = uVar34 - uVar35, pcVar22 = pcVar21, uVar66 = uVar71,
                             uVar34 < uVar35)) goto LAB_10929d510;
                          iVar56 = 0;
                          iVar30 = 2;
                          goto LAB_10929dd68;
                        }
                        iVar30 = 2;
                      }
                    }
LAB_10929dd58:
                    uVar49 = uVar49 - *(ushort *)(lVar3 + (ulong)(iVar56 + uVar49 & 0xffff) * 2);
                  }
LAB_10929dd68:
                  pcVar22 = pcVar21;
                  if (uVar49 < uVar46 || iVar55 == 0) goto LAB_10929d510;
                  goto LAB_10929dd2c;
                }
                lStack_100d0 = 0;
LAB_10929d510:
                uVar49 = (uint)uVar66;
                if (((param_10 != 0) && (pcVar22 = pcVar62, iVar55 != 0)) &&
                   (uVar69 - uVar46 < 0xffff)) {
                  lVar41 = *plVar4 - *(long *)(lVar37 + 0x40008);
                  uVar34 = *(uint *)(lVar37 + (ulong)((uint)*puVar58 * -0x61c8864f >> 0x11) * 4);
                  uVar46 = (uVar34 + uVar46) - (int)lVar41;
                  if (uVar69 - uVar46 >> 0x10 == 0) {
                    do {
                      uVar49 = (uint)uVar66;
                      if (iVar55 == 0) break;
                      puVar17 = (uint *)(*(long *)(lVar37 + 0x40008) + (ulong)uVar34);
                      if (*puVar17 == uVar44) {
                        puVar16 = (ulong *)((long)puVar58 + (lVar41 - (ulong)uVar34));
                        puVar61 = puVar19;
                        if (puVar16 <= puVar19) {
                          puVar61 = puVar16;
                        }
                        puVar16 = (ulong *)(puVar17 + 1);
                        puVar53 = (ulong *)((long)puVar61 + -7);
                        puVar52 = puVar39;
                        if (puVar39 < puVar53) {
                          if (*puVar16 == *puVar39) {
                            puVar16 = (ulong *)(puVar17 + 3);
                            puVar52 = puVar42;
                            goto LAB_10929d5c8;
                          }
                          uVar66 = *puVar39 ^ *puVar16;
                          uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar66 & 0x5555555555555555) << 1;
                          uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                   (uVar66 & 0x3333333333333333) << 2;
                          uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar66 & 0xff00ff00ff00ff) << 8;
                          uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar66 & 0xffff0000ffff) << 0x10;
                          uVar35 = (uint)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
                        }
                        else {
LAB_10929d5c8:
                          if (puVar52 < puVar53) {
                            iVar56 = iVar50 + (int)puVar52;
                            puVar54 = puVar52;
                            puVar48 = puVar16;
                            do {
                              puVar16 = puVar48 + 1;
                              puVar52 = puVar54 + 1;
                              if (*puVar48 != *puVar54) {
                                uVar66 = *puVar54 ^ *puVar48;
                                uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                         (uVar66 & 0x5555555555555555) << 1;
                                uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                         (uVar66 & 0x3333333333333333) << 2;
                                uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                         (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                                uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                         (uVar66 & 0xff00ff00ff00ff) << 8;
                                uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                         (uVar66 & 0xffff0000ffff) << 0x10;
                                uVar35 = (int)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3)
                                         + iVar56;
                                goto LAB_10929d698;
                              }
                              iVar56 = iVar56 + 8;
                              puVar54 = puVar52;
                              puVar48 = puVar16;
                            } while (puVar52 < puVar53);
                          }
                          if (puVar52 < (ulong *)((long)puVar61 + -3)) {
                            if ((uint)*puVar16 == (uint)*puVar52) {
                              puVar52 = (ulong *)((long)puVar52 + 4);
                              puVar16 = (ulong *)((long)puVar16 + 4);
                            }
                          }
                          if (puVar52 < (ulong *)((long)puVar61 + -1)) {
                            if ((short)*puVar16 == (short)*puVar52) {
                              puVar52 = (ulong *)((long)puVar52 + 2);
                              puVar16 = (ulong *)((long)puVar16 + 2);
                            }
                          }
                          if ((puVar52 < puVar61) && ((char)*puVar16 == (char)*puVar52)) {
                            puVar52 = (ulong *)((long)puVar52 + 1);
                          }
                          uVar35 = (int)puVar52 - iVar75;
                        }
LAB_10929d698:
                        if ((int)uVar49 < (int)(uVar35 + 4)) {
                          uVar49 = uVar35 + 4;
                          lStack_100d0 = lVar60 + (ulong)uVar46;
                        }
                        uVar66 = (ulong)uVar49;
                      }
                      uVar49 = (uint)uVar66;
                      iVar55 = iVar55 + -1;
                      uVar35 = uVar34 & 0xffff;
                      uVar34 = uVar34 - *(ushort *)(pcVar62 + (ulong)uVar35 * 2);
                      uVar46 = uVar46 - *(ushort *)(pcVar62 + (ulong)uVar35 * 2);
                    } while (uVar69 - uVar46 < 0x10000);
                  }
                }
                if ((int)uVar24 < (int)uVar49) {
                  uVar46 = 0x12;
                  if (0x11 < uVar49 - 0x13) {
                    uVar46 = uVar49;
                  }
                  if (param_11 != 0) {
                    uVar49 = uVar46;
                  }
                  if (uVar49 != 0) goto LAB_10929e374;
                }
              }
            }
            else if (((int)uVar27 < (int)auStack_100b0[uVar65 * 4]) ||
                    ((int)(uVar27 + 3) <= aiStack_10070[uVar43 * 4])) {
              uVar69 = (int)puVar58 - iVar59;
              uVar46 = uVar6;
              if (uVar2 <= uVar69) {
                uVar46 = uVar69 - 0xffff;
              }
              uVar44 = (uint)*puVar58;
              uVar66 = (ulong)*(uint *)(param_1 + 0x40020);
              if (*(uint *)(param_1 + 0x40020) < uVar69) {
                do {
                  uVar24 = (uint)(*(int *)(lVar60 + uVar66) * -0x61c8864f) >> 0x11;
                  uVar49 = (int)uVar66 - *(int *)(param_1 + (ulong)uVar24 * 4);
                  if (0xfffe < uVar49) {
                    uVar49 = 0xffff;
                  }
                  *(short *)(lVar3 + (uVar66 & 0xffff) * 2) = (short)uVar49;
                  *(int *)(param_1 + (ulong)uVar24 * 4) = (int)uVar66;
                  uVar66 = uVar66 + 1;
                } while (uVar29 != uVar66);
              }
              *(uint *)(param_1 + 0x40020) = uVar69;
              puVar42 = (ulong *)((long)puVar58 + 0xc);
              uVar49 = *(uint *)(param_1 + (ulong)((uint)*puVar58 * -0x61c8864f >> 0x11) * 4);
              puVar39 = (ulong *)((long)puVar58 + 4);
              puVar16 = (ulong *)((long)puVar58 + -0xffff);
              if (puVar58 <= puVar33) {
                puVar16 = puVar32;
              }
              iVar75 = (int)puVar39;
              iVar55 = iVar25;
              if (uVar46 <= uVar49 && iVar25 != 0) {
                iVar56 = 0;
                iVar30 = 0;
                uVar66 = 0;
                lStack_100d0 = 0;
                uVar70 = 3;
LAB_10929d704:
                iVar55 = iVar55 + -1;
                uVar71 = uVar70;
                if ((param_11 == 0) || (7 < uVar69 - uVar49)) {
                  uVar45 = (ulong)uVar49;
                  uVar24 = uVar10 - uVar49;
                  uVar34 = (uint)uVar70;
                  if (uVar10 < uVar49 || uVar24 == 0) {
                    puVar17 = (uint *)(lVar60 + uVar45);
                    if ((*(short *)((long)puVar58 + (long)(int)uVar34 + -1) !=
                         *(short *)((long)puVar17 + (long)(int)uVar34 + -1)) || (*puVar17 != uVar44)
                       ) goto LAB_10929d71c;
                    puVar61 = (ulong *)(puVar17 + 1);
                    puVar52 = puVar39;
                    if (puVar39 < puVar26) {
                      if (*puVar61 == *puVar39) {
                        puVar61 = (ulong *)(puVar17 + 3);
                        puVar52 = puVar42;
                        goto LAB_10929d958;
                      }
                      uVar70 = *puVar39 ^ *puVar61;
                      uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar70 & 0x5555555555555555) << 1;
                      uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                               (uVar70 & 0x3333333333333333) << 2;
                      uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 | (uVar70 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar70 & 0xffff0000ffff) << 0x10;
                      uVar24 = (uint)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3;
                    }
                    else {
LAB_10929d958:
                      if (puVar52 < puVar26) {
                        iVar57 = iVar50 + (int)puVar52;
                        puVar53 = puVar52;
                        puVar54 = puVar61;
                        do {
                          puVar61 = puVar54 + 1;
                          puVar52 = puVar53 + 1;
                          if (*puVar54 != *puVar53) {
                            uVar70 = *puVar53 ^ *puVar54;
                            uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar70 & 0x5555555555555555) << 1;
                            uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                                     (uVar70 & 0x3333333333333333) << 2;
                            uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar70 & 0xff00ff00ff00ff) << 8;
                            uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar70 & 0xffff0000ffff) << 0x10;
                            uVar24 = (int)((ulong)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3) +
                                     iVar57;
                            goto LAB_10929dbb0;
                          }
                          iVar57 = iVar57 + 8;
                          puVar53 = puVar52;
                          puVar54 = puVar61;
                        } while (puVar52 < puVar26);
                      }
                      if (puVar52 < puVar47) {
                        if ((uint)*puVar61 == (uint)*puVar52) {
                          puVar52 = (ulong *)((long)puVar52 + 4);
                          puVar61 = (ulong *)((long)puVar61 + 4);
                        }
                      }
                      if (puVar52 < puVar36) {
                        if ((short)*puVar61 == (short)*puVar52) {
                          puVar52 = (ulong *)((long)puVar52 + 2);
                          puVar61 = (ulong *)((long)puVar61 + 2);
                        }
                      }
                      if ((puVar52 < puVar19) && ((char)*puVar61 == (char)*puVar52)) {
                        puVar52 = (ulong *)((long)puVar52 + 1);
                      }
                      uVar24 = (int)puVar52 - iVar75;
                    }
LAB_10929dbb0:
                    uVar70 = (ulong)(uVar24 + 4);
                  }
                  else {
                    puVar17 = (uint *)(lVar38 + uVar45);
                    if (*puVar17 != uVar44) goto LAB_10929d71c;
                    puVar61 = (ulong *)((long)puVar58 + (ulong)uVar24);
                    puVar52 = puVar19;
                    if (puVar61 <= puVar19) {
                      puVar52 = puVar61;
                    }
                    puVar61 = (ulong *)(puVar17 + 1);
                    puVar54 = (ulong *)((long)puVar52 + -7);
                    puVar53 = puVar39;
                    if (puVar39 < puVar54) {
                      if (*puVar61 == *puVar39) {
                        puVar61 = (ulong *)(puVar17 + 3);
                        puVar53 = puVar42;
                        goto LAB_10929d7a8;
                      }
                      uVar70 = *puVar39 ^ *puVar61;
                      uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar70 & 0x5555555555555555) << 1;
                      uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                               (uVar70 & 0x3333333333333333) << 2;
                      uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 | (uVar70 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar70 & 0xffff0000ffff) << 0x10;
                      uVar35 = (uint)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3;
                    }
                    else {
LAB_10929d7a8:
                      if (puVar53 < puVar54) {
                        iVar57 = iVar50 + (int)puVar53;
                        puVar48 = puVar53;
                        puVar51 = puVar61;
                        do {
                          puVar61 = puVar51 + 1;
                          puVar53 = puVar48 + 1;
                          if (*puVar51 != *puVar48) {
                            uVar70 = *puVar48 ^ *puVar51;
                            uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar70 & 0x5555555555555555) << 1;
                            uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                                     (uVar70 & 0x3333333333333333) << 2;
                            uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar70 & 0xff00ff00ff00ff) << 8;
                            uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar70 & 0xffff0000ffff) << 0x10;
                            uVar35 = (int)((ulong)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3) +
                                     iVar57;
                            goto LAB_10929da80;
                          }
                          iVar57 = iVar57 + 8;
                          puVar48 = puVar53;
                          puVar51 = puVar61;
                        } while (puVar53 < puVar54);
                      }
                      if (puVar53 < (ulong *)((long)puVar52 + -3)) {
                        if ((uint)*puVar61 == (uint)*puVar53) {
                          puVar53 = (ulong *)((long)puVar53 + 4);
                          puVar61 = (ulong *)((long)puVar61 + 4);
                        }
                      }
                      if (puVar53 < (ulong *)((long)puVar52 + -1)) {
                        if ((short)*puVar61 == (short)*puVar53) {
                          puVar53 = (ulong *)((long)puVar53 + 2);
                          puVar61 = (ulong *)((long)puVar61 + 2);
                        }
                      }
                      if ((puVar53 < puVar52) && ((char)*puVar61 == (char)*puVar53)) {
                        puVar53 = (ulong *)((long)puVar53 + 1);
                      }
                      uVar35 = (int)puVar53 - iVar75;
                    }
LAB_10929da80:
                    uVar35 = uVar35 + 4;
                    uVar70 = (ulong)uVar35;
                    if ((puVar52 < puVar19) &&
                       ((ulong *)((long)puVar58 + (long)(int)uVar35) == puVar52)) {
                      puVar61 = puVar52;
                      puVar53 = puVar32;
                      if (puVar52 < puVar26) {
                        if (*puVar32 == *puVar52) {
                          puVar61 = puVar52 + 1;
                          puVar53 = puVar73;
                          goto LAB_10929dac4;
                        }
                        uVar70 = *puVar52 ^ *puVar32;
                        uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar70 & 0x5555555555555555) << 1;
                        uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                                 (uVar70 & 0x3333333333333333) << 2;
                        uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar70 & 0xff00ff00ff00ff) << 8;
                        uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar70 & 0xffff0000ffff) << 0x10;
                        uVar24 = (uint)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3;
                      }
                      else {
LAB_10929dac4:
                        if (puVar61 < puVar26) {
                          uVar70 = (long)puVar72 + (ulong)uVar24;
                          uVar71 = uVar31;
                          if (uVar70 <= uVar31) {
                            uVar71 = uVar70;
                          }
                          iVar57 = (int)puVar61 - (int)uVar71;
                          puVar54 = puVar61;
                          puVar48 = puVar53;
                          do {
                            puVar53 = puVar48 + 1;
                            puVar61 = puVar54 + 1;
                            if (*puVar48 != *puVar54) {
                              uVar70 = *puVar54 ^ *puVar48;
                              uVar70 = (uVar70 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar70 & 0x5555555555555555) << 1;
                              uVar70 = (uVar70 & 0xcccccccccccccccc) >> 2 |
                                       (uVar70 & 0x3333333333333333) << 2;
                              uVar70 = (uVar70 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar70 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar70 = (uVar70 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar70 & 0xff00ff00ff00ff) << 8;
                              uVar70 = (uVar70 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar70 & 0xffff0000ffff) << 0x10;
                              uVar24 = (int)((ulong)LZCOUNT(uVar70 >> 0x20 | uVar70 << 0x20) >> 3) +
                                       iVar57;
                              goto LAB_10929dbcc;
                            }
                            iVar57 = iVar57 + 8;
                            puVar54 = puVar61;
                            puVar48 = puVar53;
                          } while (puVar61 < puVar26);
                        }
                        if (puVar61 < puVar47) {
                          if ((uint)*puVar53 == (uint)*puVar61) {
                            puVar61 = (ulong *)((long)puVar61 + 4);
                            puVar53 = (ulong *)((long)puVar53 + 4);
                          }
                        }
                        if (puVar61 < puVar36) {
                          if ((short)*puVar53 == (short)*puVar61) {
                            puVar61 = (ulong *)((long)puVar61 + 2);
                            puVar53 = (ulong *)((long)puVar53 + 2);
                          }
                        }
                        if ((puVar61 < puVar19) && ((char)*puVar53 == (char)*puVar61)) {
                          puVar61 = (ulong *)((long)puVar61 + 1);
                        }
                        uVar24 = (int)puVar61 - (int)puVar52;
                      }
LAB_10929dbcc:
                      uVar70 = (ulong)(uVar24 + uVar35);
                    }
                  }
                  uVar35 = (uint)uVar70;
                  uVar24 = uVar35;
                  lVar41 = lVar60 + uVar45;
                  if ((int)uVar35 <= (int)uVar34) {
                    uVar24 = uVar34;
                    lVar41 = lStack_100d0;
                  }
                  lStack_100d0 = lVar41;
                  uVar71 = (ulong)uVar24;
                  if (((int)uVar35 < 4 || (int)uVar35 < (int)uVar34) || uVar69 < uVar24 + uVar49)
                  goto LAB_10929d71c;
                  iVar57 = 0;
                  uVar24 = 1;
                  iVar74 = iVar56;
                  do {
                    uVar9 = *(ushort *)(lVar3 + (ulong)(uVar49 + iVar57 & 0xffff) * 2);
                    bVar13 = uVar9 <= uVar24;
                    if (uVar24 <= uVar9) {
                      uVar24 = (uint)uVar9;
                    }
                    iVar56 = iVar57;
                    if (bVar13) {
                      iVar56 = iVar74;
                    }
                    iVar57 = iVar57 + 1;
                    iVar74 = iVar56;
                  } while (uVar35 - 3 != iVar57);
                  uVar71 = uVar70;
                  if (uVar24 < 2) goto LAB_10929d71c;
                  pcVar22 = pcVar21;
                  if (uVar49 < uVar24) goto LAB_10929d244;
                  uVar49 = uVar49 - uVar24;
                }
                else {
LAB_10929d71c:
                  uVar70 = uVar71;
                  if (*(short *)(lVar3 + (ulong)(uVar49 & 0xffff) * 2) == 1 && iVar56 == 0) {
                    if (iVar30 == 0) {
                      if ((uVar44 & 0xffff) != uVar44 >> 0x10 || (uVar44 & 0xff) != uVar44 >> 0x18)
                      {
                        iVar30 = 1;
                        goto LAB_10929d730;
                      }
                      puVar61 = puVar39;
                      FUN_10929e9fc(puVar39,puVar19,uVar44);
                      uVar66 = ((ulong)puVar61 & 0xffffffff) + 4;
                      iVar30 = 2;
                    }
                    if ((iVar30 == 2) && (uVar24 = uVar49 - 1, uVar10 <= uVar24)) {
                      puVar61 = (ulong *)(lVar60 + (ulong)uVar24);
                      if ((uint)*puVar61 == uVar44) {
                        puVar17 = (uint *)((long)puVar61 + 4);
                        FUN_10929e9fc(puVar17,puVar19,uVar44);
                        uVar45 = ((ulong)puVar17 & 0xffffffff) + 4;
                        puVar52 = puVar61;
                        do {
                          puVar53 = puVar52;
                          pcVar22 = pcVar68;
                          puVar54 = puVar53;
                          if (puVar53 < (ulong *)((long)puVar16 + 4)) break;
                          puVar52 = (ulong *)((long)puVar53 + -4);
                        } while (*(uint *)((long)puVar53 + -4) == uVar44);
                        do {
                          puVar52 = puVar54;
                          if (puVar53 <= puVar16) break;
                          puVar48 = (ulong *)((long)puVar53 + -1);
                          cVar8 = *pcVar22;
                          puVar52 = puVar53;
                          pcVar22 = pcVar22 + -1;
                          puVar53 = puVar48;
                          puVar54 = puVar16;
                        } while (*(char *)puVar48 == cVar8);
                        uVar1 = uVar45 + ((long)puVar61 - (long)puVar52 & 0xffffffffU);
                        uStack_100b4 = uVar44;
                        if ((uVar45 <= uVar66) && (uVar66 <= uVar1)) {
                          iVar56 = 0;
                          uVar49 = (uVar24 - (int)uVar66) + (int)uVar45;
                          iVar30 = 2;
                          goto LAB_10929d740;
                        }
                        uVar24 = uVar24 - (int)((long)puVar61 - (long)puVar52);
                        if (uVar66 <= uVar1) {
                          uVar1 = uVar66;
                        }
                        lVar41 = lStack_100d0;
                        if ((((ulong)(long)(int)uVar71 < uVar1) &&
                            (pcVar22 = pcVar21, uVar71 = uVar1, lVar41 = lVar60 + (ulong)uVar24,
                            0xffff < (long)((long)puVar58 - (lVar60 + (ulong)uVar24)))) ||
                           (lStack_100d0 = lVar41,
                           uVar34 = (uint)*(ushort *)(lVar3 + (ulong)(uVar24 & 0xffff) * 2),
                           uVar49 = uVar24 - uVar34, pcVar22 = pcVar21, uVar70 = uVar71,
                           uVar24 < uVar34)) goto LAB_10929d244;
                        iVar56 = 0;
                        iVar30 = 2;
                        goto LAB_10929d740;
                      }
                      iVar30 = 2;
                    }
                  }
LAB_10929d730:
                  uVar49 = uVar49 - *(ushort *)(lVar3 + (ulong)(iVar56 + uVar49 & 0xffff) * 2);
                }
LAB_10929d740:
                pcVar22 = pcVar21;
                if (uVar49 < uVar46 || iVar55 == 0) goto LAB_10929d244;
                goto LAB_10929d704;
              }
              lStack_100d0 = 0;
              uVar70 = 3;
LAB_10929d244:
              uVar49 = (uint)uVar70;
              if (((param_10 != 0) && (pcVar22 = pcVar62, iVar55 != 0)) &&
                 (uVar69 - uVar46 < 0xffff)) {
                lVar41 = *plVar4 - *(long *)(lVar37 + 0x40008);
                uVar24 = *(uint *)(lVar37 + (ulong)((uint)*puVar58 * -0x61c8864f >> 0x11) * 4);
                uVar46 = (uVar24 + uVar46) - (int)lVar41;
                if (uVar69 - uVar46 >> 0x10 == 0) {
                  do {
                    uVar49 = (uint)uVar70;
                    if (iVar55 == 0) break;
                    puVar17 = (uint *)(*(long *)(lVar37 + 0x40008) + (ulong)uVar24);
                    if (*puVar17 == uVar44) {
                      puVar16 = (ulong *)((long)puVar58 + (lVar41 - (ulong)uVar24));
                      puVar61 = puVar19;
                      if (puVar16 <= puVar19) {
                        puVar61 = puVar16;
                      }
                      puVar16 = (ulong *)(puVar17 + 1);
                      puVar53 = (ulong *)((long)puVar61 + -7);
                      puVar52 = puVar39;
                      if (puVar39 < puVar53) {
                        if (*puVar16 == *puVar39) {
                          puVar16 = (ulong *)(puVar17 + 3);
                          puVar52 = puVar42;
                          goto LAB_10929d2fc;
                        }
                        uVar66 = *puVar39 ^ *puVar16;
                        uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar66 & 0x5555555555555555) << 1;
                        uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                 (uVar66 & 0x3333333333333333) << 2;
                        uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar66 & 0xff00ff00ff00ff) << 8;
                        uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar66 & 0xffff0000ffff) << 0x10;
                        uVar34 = (uint)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
                      }
                      else {
LAB_10929d2fc:
                        if (puVar52 < puVar53) {
                          iVar56 = iVar50 + (int)puVar52;
                          puVar54 = puVar52;
                          puVar48 = puVar16;
                          do {
                            puVar16 = puVar48 + 1;
                            puVar52 = puVar54 + 1;
                            if (*puVar48 != *puVar54) {
                              uVar66 = *puVar54 ^ *puVar48;
                              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar66 & 0x5555555555555555) << 1;
                              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 |
                                       (uVar66 & 0x3333333333333333) << 2;
                              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar66 & 0xff00ff00ff00ff) << 8;
                              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar66 & 0xffff0000ffff) << 0x10;
                              uVar34 = (int)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                       iVar56;
                              goto LAB_10929d3cc;
                            }
                            iVar56 = iVar56 + 8;
                            puVar54 = puVar52;
                            puVar48 = puVar16;
                          } while (puVar52 < puVar53);
                        }
                        if (puVar52 < (ulong *)((long)puVar61 + -3)) {
                          if ((uint)*puVar16 == (uint)*puVar52) {
                            puVar52 = (ulong *)((long)puVar52 + 4);
                            puVar16 = (ulong *)((long)puVar16 + 4);
                          }
                        }
                        if (puVar52 < (ulong *)((long)puVar61 + -1)) {
                          if ((short)*puVar16 == (short)*puVar52) {
                            puVar52 = (ulong *)((long)puVar52 + 2);
                            puVar16 = (ulong *)((long)puVar16 + 2);
                          }
                        }
                        if ((puVar52 < puVar61) && ((char)*puVar16 == (char)*puVar52)) {
                          puVar52 = (ulong *)((long)puVar52 + 1);
                        }
                        uVar34 = (int)puVar52 - iVar75;
                      }
LAB_10929d3cc:
                      if ((int)uVar49 < (int)(uVar34 + 4)) {
                        uVar49 = uVar34 + 4;
                        lStack_100d0 = lVar60 + (ulong)uVar46;
                      }
                      uVar70 = (ulong)uVar49;
                    }
                    uVar49 = (uint)uVar70;
                    iVar55 = iVar55 + -1;
                    uVar34 = uVar24 & 0xffff;
                    uVar24 = uVar24 - *(ushort *)(pcVar62 + (ulong)uVar34 * 2);
                    uVar46 = uVar46 - *(ushort *)(pcVar62 + (ulong)uVar34 * 2);
                  } while (uVar69 - uVar46 < 0x10000);
                }
              }
              if (3 < (int)uVar49) {
                uVar46 = 0x12;
                if (0x11 < uVar49 - 0x13) {
                  uVar46 = uVar49;
                }
                if (param_11 != 0) {
                  uVar49 = uVar46;
                }
LAB_10929e374:
                uVar66 = (long)puVar58 - lStack_100d0;
                if ((param_7 < (ulong)(long)(int)uVar49) || (0xfff < (int)(uVar49 + iVar28))) {
                  uVar77 = (ulong)(iVar28 + 1);
                  goto LAB_10929e620;
                }
                lVar41 = 0;
                uVar69 = auStack_100b0[uVar43 * 4 + 3];
                uVar46 = uVar69;
                if (uVar69 - 0xe != 0 && 0xd < (int)uVar69) {
                  uVar46 = uVar69 + (uVar69 - 0xf) / 0xff + 1;
                }
                iVar55 = 1;
                puVar17 = puVar15;
                do {
                  uVar24 = uVar69 + (int)lVar41 + 1;
                  uVar44 = uVar24;
                  if (0xe < (long)(int)uVar69 + 1 + lVar41) {
                    uVar44 = iVar55 + uVar69 + ((uVar69 - 0xe) + (int)lVar41) / 0xff + 1;
                  }
                  uVar44 = uVar44 + (uVar27 - uVar46);
                  if ((int)uVar44 < (int)*puVar17) {
                    puVar17[1] = 0;
                    puVar17[2] = 1;
                    puVar17[3] = uVar24;
                    *puVar17 = uVar44;
                  }
                  iVar55 = iVar55 + 1;
                  lVar41 = lVar41 + 1;
                  puVar17 = puVar17 + 4;
                } while (lVar41 != 3);
                if (3 < (int)uVar49) {
                  uVar24 = auStack_100b0[uVar43 * 4 + 2];
                  uVar70 = 4;
                  puVar17 = puVar64;
                  do {
                    uVar34 = (uint)uVar70;
                    if (uVar24 == 1) {
                      if ((long)(int)uVar69 < (long)uVar43) {
                        uVar44 = auStack_100b0[(long)(int)(iVar28 - uVar69) * 4];
                      }
                      else {
                        uVar44 = 0;
                      }
                      iVar55 = uVar46 + 3;
                      if (0x12 < uVar70) {
                        iVar55 = uVar46 + 4 + (uVar34 - 0x13) / 0xff;
                      }
                      uVar44 = iVar55 + uVar44;
                      uVar35 = uVar69;
                    }
                    else {
                      uVar35 = 0;
                      iVar55 = 3;
                      if (0x12 < uVar70) {
                        iVar55 = (uVar34 - 0x13) / 0xff + 4;
                      }
                      uVar44 = iVar55 + uVar27;
                    }
                    uVar76 = (uint)uVar77;
                    uVar23 = (iVar63 + uVar34) - 4;
                    if (((int)(uVar76 + 3) < (int)uVar23) ||
                       ((int)uVar44 <= (int)(*puVar17 - param_11))) {
                      uVar5 = uVar76;
                      if ((int)uVar76 <= (int)uVar23) {
                        uVar5 = uVar23;
                      }
                      puVar17[2] = uVar34;
                      puVar17[3] = uVar35;
                      if (uVar49 != uVar70) {
                        uVar5 = uVar76;
                      }
                      uVar77 = (ulong)uVar5;
                      *puVar17 = uVar44;
                      puVar17[1] = (uint)uVar66;
                    }
                    uVar70 = uVar70 + 1;
                    puVar17 = puVar17 + 4;
                  } while (uVar49 + 1 != uVar70);
                }
                pcVar22 = (char *)(ulong)uVar44;
                lVar41 = -3;
                puVar17 = auStack_100b0 + uVar77 * 4 + 7;
                do {
                  puVar17[-2] = 0;
                  puVar17[-1] = 1;
                  *puVar17 = (int)lVar41 + 4;
                  puVar17[-3] = (int)lVar41 + auStack_100b0[uVar77 * 4] + 4;
                  puVar17 = puVar17 + 4;
                  bVar13 = lVar41 != -1;
                  lVar41 = lVar41 + 1;
                } while (bVar13);
              }
            }
            iVar50 = iVar50 + -1;
            puVar15 = puVar15 + 4;
            iVar63 = iVar63 + 1;
            puVar64 = puVar64 + 4;
            uVar43 = uVar65;
          } while (uVar65 < uVar77);
          uVar43 = (ulong)((int)uVar77 - auStack_100b0[uVar77 * 4 + 2]);
          uVar66 = (ulong)auStack_100b0[uVar77 * 4 + 1];
          uVar49 = auStack_100b0[uVar77 * 4 + 2];
LAB_10929e620:
          do {
            iVar50 = (int)uVar43;
            lVar60 = (long)iVar50;
            uVar2 = auStack_100b0[lVar60 * 4 + 1];
            uVar29 = auStack_100b0[lVar60 * 4 + 2];
            auStack_100b0[lVar60 * 4 + 1] = (uint)uVar66;
            auStack_100b0[lVar60 * 4 + 2] = uVar49;
            uVar43 = (ulong)(iVar50 - uVar29);
            uVar66 = (ulong)uVar2;
            uVar49 = uVar29;
          } while ((int)uVar29 <= iVar50);
          if (0 < (int)uVar77) {
            iVar50 = 0;
            pcVar21 = pcVar18;
            do {
              uVar2 = auStack_100b0[(long)iVar50 * 4 + 2];
              if (uVar2 == 1) {
                iVar50 = iVar50 + 1;
                pcVar18 = pcVar21;
                puVar14 = (ulong *)((long)puVar14 + 1);
              }
              else {
                uVar29 = auStack_100b0[(long)iVar50 * 4 + 1];
                puVar72 = (ulong *)(pcVar21 + 1);
                uVar43 = (long)puVar14 - (long)puVar20;
                if ((param_8 != 0) &&
                   (pcVar67 < (char *)((long)puVar72 + uVar43 + (uVar43 >> 8) + 8)))
                goto LAB_10929c4c0;
                uVar65 = uVar43 - 0xf;
                if (uVar43 < 0xf) {
                  *pcVar21 = (char)((int)uVar43 << 4);
                }
                else {
                  *pcVar21 = -0x10;
                  puVar73 = puVar72;
                  if (0xfe < uVar65) {
                    uVar65 = uVar43 - 0x10e;
                    pcVar22 = (char *)(uVar65 / 0xff + 1);
                    _memset(puVar72,0xff);
                    puVar73 = (ulong *)(pcVar21 + uVar65 / 0xff + 2);
                    uVar65 = uVar65 % 0xff;
                  }
                  puVar72 = (ulong *)((long)puVar73 + 1);
                  *(char *)puVar73 = (char)uVar65;
                }
                iVar50 = uVar2 + iVar50;
                puVar73 = (ulong *)((long)puVar72 + uVar43);
                puVar32 = puVar72;
                do {
                  puVar33 = puVar32 + 1;
                  *puVar32 = *puVar20;
                  puVar32 = puVar33;
                  puVar20 = puVar20 + 1;
                } while (puVar33 < puVar73);
                pcVar18 = (char *)((long)puVar73 + 2);
                *(short *)puVar73 = (short)uVar29;
                uVar29 = uVar2 - 4;
                uVar65 = (ulong)(int)uVar29;
                if ((param_8 != 0) && (pcVar67 < pcVar18 + (uVar65 >> 8) + 6)) goto LAB_10929c4c0;
                if (uVar29 < 0xf) {
                  *pcVar21 = *pcVar21 + (char)uVar29;
                }
                else {
                  *pcVar21 = *pcVar21 + '\x0f';
                  uVar66 = uVar65 - 0xf;
                  if (0x1fd < uVar66) {
                    uVar66 = (uVar65 - 0x20d) / 0x1fe;
                    pcVar22 = (char *)(uVar66 * 2 + 2);
                    _memset(pcVar18,0xff);
                    pcVar18 = (char *)((long)puVar72 + uVar66 * 2 + uVar43 + 4);
                    uVar66 = (uVar65 - 0x20d) % 0x1fe;
                  }
                  pcVar21 = pcVar18;
                  if (0xfe < uVar66) {
                    pcVar21 = pcVar18 + 1;
                    *pcVar18 = -1;
                    uVar66 = uVar66 - 0xff;
                  }
                  pcVar18 = pcVar21 + 1;
                  *pcVar21 = (char)uVar66;
                }
                puVar20 = (ulong *)((long)puVar14 + (long)(int)uVar2);
                puVar14 = puVar20;
              }
              pcVar21 = pcVar18;
            } while (iVar50 < (int)uVar77);
          }
        }
      }
      uVar43 = param_6 & 0xffffffff;
    } while (puVar14 <= puVar26);
  }
  pcVar68 = (char *)((long)param_2 + ((long)iVar7 - (long)puVar20));
  if ((param_8 == 0) || (pcVar18 + (ulong)(pcVar68 + 0xf0) / 0xff + (long)pcVar68 + 1 <= pcVar67)) {
    pcVar67 = pcVar18 + 1;
    pcVar22 = pcVar68 + -0xf;
    iVar25 = (int)pcVar68;
    if (pcVar68 < (char *)0xf) {
      *pcVar18 = (char)(iVar25 << 4);
    }
    else {
      *pcVar18 = -0x10;
      pcVar21 = pcVar18;
      if ((char *)0xfe < pcVar22) {
        pcVar62 = pcVar68 + -0x10e;
        lVar3 = (ulong)pcVar62 / 0xff + 1;
        _memset(pcVar67,0xff,lVar3);
        pcVar21 = pcVar18 + lVar3;
        pcVar22 = (char *)((ulong)pcVar62 % 0xff);
        pcVar67 = pcVar18 + (ulong)pcVar62 / 0xff + 2;
      }
      *pcVar67 = (char)pcVar22;
      pcVar67 = pcVar21 + 2;
    }
    _memcpy(pcVar67);
    *param_4 = iVar7;
    puVar14 = (ulong *)(ulong)(uint)(((int)pcVar67 + iVar25) - (int)param_3);
  }
  else {
LAB_10929c4c0:
    puVar14 = (ulong *)0x0;
    puVar20 = puVar19;
    pcVar68 = pcVar22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar14;
  }
  ___stack_chk_fail();
  uVar43 = (ulong)pcVar68 & 0xffffffff | (long)pcVar68 << 0x20;
  puVar26 = puVar14;
  puVar19 = puVar14;
  while (puVar26 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar26 != uVar43) {
      uVar43 = *puVar26 ^ uVar43;
      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
      puVar19 = (ulong *)((long)puVar19 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3));
      goto LAB_10929ea70;
    }
    puVar19 = puVar19 + 1;
    puVar26 = puVar26 + 1;
  }
  puVar19 = puVar26;
  if (puVar26 < puVar20) {
    do {
      puVar19 = puVar26;
      if ((uint)(byte)*puVar26 != ((uint)uVar43 & 0xff)) break;
      puVar26 = (ulong *)((long)puVar26 + 1);
      uVar43 = uVar43 >> 8;
      puVar19 = puVar20;
    } while (puVar26 != puVar20);
  }
LAB_10929ea70:
  return (ulong *)(ulong)(uint)((int)puVar19 - (int)puVar14);
}



/* Entry: 10929e9fc; end: 10929eb23;  */

int FUN_10929e9fc(ulong *param_1,ulong *param_2,undefined4 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = CONCAT44(param_3,param_3);
  puVar1 = param_1;
  puVar2 = param_1;
  while (puVar1 < (ulong *)((long)param_2 + -7)) {
    if (*puVar1 != uVar3) {
      uVar3 = *puVar1 ^ uVar3;
      uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar2 = (ulong *)((long)puVar2 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3));
      goto LAB_10929ea70;
    }
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar2 = puVar1;
  if (puVar1 < param_2) {
    do {
      puVar2 = puVar1;
      if ((uint)(byte)*puVar1 != ((uint)uVar3 & 0xff)) break;
      puVar1 = (ulong *)((long)puVar1 + 1);
      uVar3 = uVar3 >> 8;
      puVar2 = param_2;
    } while (puVar1 != param_2);
  }
LAB_10929ea70:
  return (int)puVar2 - (int)param_1;
}



/* Entry: 10929eb24; end: 10929eb5b;  */

long FUN_10929eb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((uint)param_4 < 3) {
    _fseeko(param_2,param_3,param_4);
    return -(ulong)((int)param_2 != 0);
  }
  return -1;
}



/* Entry: 10929eb5c; end: 10929ec7b;  */

long * FUN_10929eb5c(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = (long *)0x1;
  _calloc(1,0x20);
  if (plVar1 != (long *)0x0) {
    lStack_38 = 0;
    _strtoull(param_2,&lStack_38,0x10);
    if ((param_2 != 0) && (_strtoul(lStack_38,&lStack_38,0x10), lStack_38 != 0)) {
      *plVar1 = param_2;
      plVar1[1] = lStack_38;
      if ((param_3 & 8) != 0) {
        lStack_38 = 0;
      }
      plVar1[2] = lStack_38;
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10929ec7c; end: 10929ed27;  */

ulong FUN_10929ec7c(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_2[1] - param_2[3];
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  _memcpy(param_3,*param_2 + param_2[3],uVar1);
  param_2[3] = param_2[3] + uVar1;
  return uVar1;
}



/* Entry: 10929ed28; end: 10929ed2f;  */

undefined8 FUN_10929ed28(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x18);
}



/* Entry: 10929ed30; end: 10929edb3;  */

undefined8 FUN_10929ed30(undefined8 param_1,long *param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_4 != 0) {
    if (param_4 == 1) {
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 2) {
        return 0xffffffffffffffff;
      }
      lVar2 = 0x10;
    }
    param_3 = *(long *)((long)param_2 + lVar2) + param_3;
  }
  if ((ulong)param_2[1] < param_3) {
    uVar1 = 1;
  }
  else {
    uVar3 = param_2[2];
    if (uVar3 <= param_3 && param_3 - uVar3 != 0) {
      _bzero(*param_2 + uVar3,param_3 - uVar3);
    }
    uVar1 = 0;
    param_2[3] = param_3;
  }
  return uVar1;
}



/* Entry: 10929edb4; end: 10929edcf;  */

undefined8 FUN_10929edb4(undefined8 param_1,undefined8 param_2)

{
  _free(param_2);
  return 0;
}



/* Entry: 10929edd0; end: 10929edd7;  */

undefined8 FUN_10929edd0(void)

{
  return 0;
}



/* Entry: 10929edd8; end: 10929f573;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10929edd8(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **ppcVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  code *pcVar25;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  long lStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined4 uStack_178;
  ulong uStack_170;
  long alStack_168 [6];
  ulong uStack_138;
  long lStack_130;
  long alStack_128 [19];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong uStack_78;
  long alStack_70 [2];
  
  pcStack_188 = (code *)0x0;
  pcStack_180 = (code *)0x0;
  if (param_2 == (undefined8 *)0x0) {
    pcStack_1d0 = (code *)0x10929eab8;
    pcStack_1c8 = (code *)0x10929ea78;
    uStack_1c0 = 0x10929ea90;
    pcStack_1b8 = (code *)0x10929eb1c;
    pcVar25 = FUN_10929eb24;
    pcStack_1b0 = FUN_10929eb24;
    pcStack_1a8 = (code *)0x10929eaa8;
    uStack_1a0 = 0x10929eab0;
    uStack_198 = 0;
  }
  else {
    uStack_198 = param_2[7];
    uStack_1a0 = param_2[6];
    pcStack_188 = (code *)param_2[9];
    pcVar25 = (code *)param_2[8];
    pcStack_1b8 = (code *)param_2[3];
    uStack_1c0 = param_2[2];
    pcStack_1a8 = (code *)param_2[5];
    pcStack_1b0 = (code *)param_2[4];
    pcStack_180 = (code *)param_2[10];
    pcStack_1c8 = (code *)param_2[1];
    pcStack_1d0 = (code *)*param_2;
    pcStack_190 = pcVar25;
  }
  uVar21 = uStack_198;
  if (pcStack_1d0 != (code *)0x0) {
    pcVar25 = pcStack_1d0;
  }
  uVar5 = uStack_198;
  uStack_178 = param_3;
  (*pcVar25)(uStack_198,param_1,5);
  pcVar25 = pcStack_1b0;
  if (uVar5 == 0) {
    return 0;
  }
  pcVar3 = pcStack_180;
  if (pcStack_1b0 != (code *)0x0) {
    pcVar3 = pcStack_1b0;
  }
  uVar6 = uVar21;
  uStack_170 = uVar5;
  (*pcVar3)(uVar21,uVar5,0,2);
  if (uVar6 == 0) {
    uVar6 = uVar21;
    if (pcVar25 == (code *)0x0) {
      (*pcStack_188)(uVar21,uVar5);
      if (uVar6 == 0xffffffff) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    else {
      (*pcStack_1b8)(uVar21,uVar5);
    }
    uVar4 = uVar6;
    if (0xfffe < uVar6) {
      uVar4 = 0xffff;
    }
    lVar7 = 0x404;
    _malloc();
    pcVar25 = pcStack_1c8;
    if (lVar7 != 0) {
      if (4 < uVar6) {
        uVar24 = 4;
        do {
          uVar2 = uVar24 + 0x400;
          uVar24 = uVar2;
          if (uVar4 <= uVar2) {
            uVar24 = uVar4;
          }
          uVar16 = uVar24;
          if (0x403 < uVar24) {
            uVar16 = 0x404;
          }
          uVar19 = uVar21;
          (*pcVar3)(uVar21,uVar5,uVar6 - uVar24,0);
          if ((uVar19 != 0) ||
             (uVar19 = uVar21, (*pcVar25)(uVar21,uVar5,lVar7,uVar16), uVar19 != uVar16)) break;
          uVar16 = (ulong)((int)uVar16 - 4);
          lVar22 = (uVar24 - uVar6) - uVar16;
          lVar17 = uVar16 + 1;
          do {
            if ((((*(char *)(lVar7 + lVar17 + -1) == 'P') && (*(char *)(lVar7 + lVar17) == 'K')) &&
                (*(char *)(lVar7 + lVar17 + 1) == '\x06')) &&
               (*(char *)(lVar7 + lVar17 + 2) == '\a')) {
              if (lVar22 != 0) {
                _free(lVar7);
                (*pcVar3)(uVar21,uVar5,-lVar22,0);
                if (uVar21 != 0) goto LAB_10929f234;
                ppcVar8 = &pcStack_1d0;
                FUN_1092a057c(ppcVar8,uVar5,alStack_70);
                if ((int)ppcVar8 != 0) goto LAB_10929f234;
                ppcVar8 = &pcStack_1d0;
                FUN_1092a057c(ppcVar8,uVar5,alStack_70);
                if (((int)ppcVar8 != 0) || (alStack_70[0] != 0)) goto LAB_10929f234;
                ppcVar8 = &pcStack_1d0;
                FUN_1092a0634(ppcVar8,uVar5,&uStack_78);
                if ((int)ppcVar8 != 0) goto LAB_10929f234;
                ppcVar8 = &pcStack_1d0;
                FUN_1092a057c(ppcVar8,uVar5,alStack_70);
                uVar21 = uStack_78;
                if (((int)ppcVar8 != 0) || (alStack_70[0] != 1)) goto LAB_10929f234;
                pcVar25 = pcStack_180;
                if (pcStack_1b0 != (code *)0x0) {
                  pcVar25 = pcStack_1b0;
                }
                uVar6 = uStack_198;
                (*pcVar25)(uStack_198,uVar5,uStack_78,0);
                if (uVar6 != 0) goto LAB_10929f234;
                ppcVar8 = &pcStack_1d0;
                FUN_1092a057c(ppcVar8,uVar5,alStack_70);
                uVar5 = uStack_170;
                if ((((int)ppcVar8 != 0) || (alStack_70[0] != 0x6064b50)) || (uVar21 == 0))
                goto LAB_10929f234;
                uStack_84 = 1;
                pcVar25 = pcStack_180;
                if (pcStack_1b0 != (code *)0x0) {
                  pcVar25 = pcStack_1b0;
                }
                uVar6 = uStack_198;
                (*pcVar25)(uStack_198,uStack_170,uVar21,0);
                ppcVar8 = &pcStack_1d0;
                FUN_1092a057c(ppcVar8,uVar5,alStack_70);
                ppcVar9 = &pcStack_1d0;
                FUN_1092a0634(ppcVar9,uStack_170,auStack_1f0);
                ppcVar10 = &pcStack_1d0;
                FUN_1092a076c(ppcVar10,uStack_170,auStack_1e8);
                ppcVar11 = &pcStack_1d0;
                FUN_1092a076c(ppcVar11,uStack_170,auStack_1e8);
                ppcVar12 = &pcStack_1d0;
                FUN_1092a057c(ppcVar12,uStack_170,&uStack_78);
                ppcVar13 = &pcStack_1d0;
                FUN_1092a057c(ppcVar13,uStack_170,&lStack_1d8);
                ppcVar14 = &pcStack_1d0;
                FUN_1092a0634(ppcVar14,uStack_170,alStack_168);
                ppcVar15 = &pcStack_1d0;
                FUN_1092a0634(ppcVar15,uStack_170,&lStack_1e0);
                iVar18 = -0x67;
                if ((uStack_78 == 0 && lStack_1d8 == 0) && lStack_1e0 == alStack_168[0]) {
                  iVar18 = -(uint)(((((int)ppcVar15 != 0 || (int)ppcVar14 != 0) ||
                                    ((int)ppcVar13 != 0 || (int)ppcVar12 != 0)) ||
                                   (((int)ppcVar11 != 0 || (int)ppcVar10 != 0) ||
                                   ((int)ppcVar9 != 0 || (int)ppcVar8 != 0))) || uVar6 != 0);
                }
                ppcVar8 = &pcStack_1d0;
                FUN_1092a0634(ppcVar8,uStack_170,&lStack_130);
                ppcVar9 = &pcStack_1d0;
                FUN_1092a0634(ppcVar9,uStack_170,alStack_128);
                if ((int)ppcVar9 != 0 || (int)ppcVar8 != 0) {
                  iVar18 = -1;
                }
                alStack_168[1] = 0;
                goto LAB_10929f4b8;
              }
              break;
            }
            lVar22 = lVar22 + 1;
            lVar17 = lVar17 + -1;
          } while (0 < (int)lVar17);
        } while (uVar2 < uVar4);
      }
      _free(lVar7);
    }
  }
LAB_10929f234:
  uVar6 = uStack_170;
  uVar5 = uStack_198;
  pcVar3 = pcStack_1b0;
  pcVar25 = pcStack_180;
  if (pcStack_1b0 != (code *)0x0) {
    pcVar25 = pcStack_1b0;
  }
  uVar21 = uStack_198;
  (*pcVar25)(uStack_198,uStack_170,0,2);
  if (uVar21 == 0) {
    uVar21 = uVar5;
    if (pcVar3 == (code *)0x0) {
      (*pcStack_188)(uVar5,uVar6);
      if (uVar21 == 0xffffffff) {
        uVar21 = 0xffffffffffffffff;
      }
    }
    else {
      (*pcStack_1b8)(uVar5,uVar6);
    }
    uVar4 = uVar21;
    if (0xfffe < uVar21) {
      uVar4 = 0xffff;
    }
    lVar7 = 0x404;
    _malloc();
    pcVar3 = pcStack_1c8;
    if (lVar7 != 0) {
      if (4 < uVar21) {
        uVar24 = 4;
        while( true ) {
          uVar2 = uVar24 + 0x400;
          uVar24 = uVar2;
          if (uVar4 <= uVar2) {
            uVar24 = uVar4;
          }
          uVar16 = uVar24;
          if (0x403 < uVar24) {
            uVar16 = 0x404;
          }
          uVar19 = uVar5;
          (*pcVar25)(uVar5,uVar6,uVar21 - uVar24,0);
          if ((uVar19 != 0) ||
             (uVar19 = uVar5, (*pcVar3)(uVar5,uVar6,lVar7,uVar16), uVar19 != uVar16)) break;
          uVar19 = (ulong)((int)uVar16 - 4);
          lVar17 = (uVar24 - uVar21) - uVar19;
          pcVar20 = (char *)(lVar7 + 1 + uVar19);
          iVar18 = (int)uVar16 + -3;
          do {
            if (((pcVar20[-1] == 'P') && (*pcVar20 == 'K')) &&
               ((pcVar20[1] == '\x05' && (pcVar20[2] == '\x06')))) {
              if (lVar17 != 0) {
                iVar23 = 0;
                uVar21 = -lVar17;
                goto LAB_10929f39c;
              }
              break;
            }
            lVar17 = lVar17 + 1;
            pcVar20 = pcVar20 + -1;
            iVar23 = iVar18 + -1;
            bVar1 = 0 < iVar18;
            iVar18 = iVar23;
          } while (iVar23 != 0 && bVar1);
          if (uVar4 <= uVar2) break;
        }
      }
      uVar21 = 0;
      iVar23 = -1;
LAB_10929f39c:
      _free(lVar7);
      goto LAB_10929f3a4;
    }
  }
  uVar21 = 0;
  iVar23 = -1;
LAB_10929f3a4:
  uStack_84 = 0;
  (*pcVar25)(uVar5,uVar6,uVar21,0);
  ppcVar8 = &pcStack_1d0;
  FUN_1092a057c(ppcVar8,uVar6,alStack_70);
  ppcVar9 = &pcStack_1d0;
  FUN_1092a076c(ppcVar9,uStack_170,&uStack_78);
  ppcVar10 = &pcStack_1d0;
  FUN_1092a076c(ppcVar10,uStack_170,&lStack_1d8);
  ppcVar11 = &pcStack_1d0;
  FUN_1092a076c(ppcVar11,uStack_170,alStack_70);
  alStack_168[0] = alStack_70[0];
  ppcVar12 = &pcStack_1d0;
  FUN_1092a076c(ppcVar12,uStack_170,alStack_70);
  if (uVar5 != 0 ||
      ((((int)ppcVar12 != 0 || (int)ppcVar11 != 0) || (int)ppcVar10 != 0) ||
      ((int)ppcVar9 != 0 || (int)ppcVar8 != 0))) {
    iVar23 = -1;
  }
  iVar18 = -0x67;
  if ((uStack_78 == 0 && lStack_1d8 == 0) && alStack_70[0] == alStack_168[0]) {
    iVar18 = iVar23;
  }
  ppcVar8 = &pcStack_1d0;
  FUN_1092a057c(ppcVar8,uStack_170,alStack_70);
  lStack_130 = alStack_70[0];
  ppcVar9 = &pcStack_1d0;
  FUN_1092a057c(ppcVar9,uStack_170,alStack_70);
  alStack_128[0] = alStack_70[0];
  ppcVar10 = &pcStack_1d0;
  FUN_1092a076c(ppcVar10,uStack_170,alStack_168 + 1);
  if (((int)ppcVar9 != 0 || (int)ppcVar8 != 0) || (int)ppcVar10 != 0) {
    iVar18 = -1;
  }
LAB_10929f4b8:
  alStack_168[2] = uVar21 - (lStack_130 + alStack_128[0]);
  if (((ulong)(lStack_130 + alStack_128[0]) <= uVar21) && (iVar18 == 0)) {
    uStack_90 = 0;
    uStack_88 = 0;
    lVar7 = 0x150;
    uStack_138 = uVar21;
    _malloc();
    if (lVar7 != 0) {
      _memcpy(lVar7,&pcStack_1d0,0x150);
      *(undefined8 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar7 + 0xa8);
      lVar17 = lVar7;
      FUN_10929f65c(lVar7,lVar7 + 0xb0,lVar7 + 0x138,0,0,0,0,0,0);
      *(ulong *)(lVar7 + 0x90) = (ulong)((int)lVar17 == 0);
      return lVar7;
    }
    return 0;
  }
  (*pcStack_1a8)(uStack_198,uStack_170);
  return 0;
}



/* Entry: 10929f574; end: 10929f5c7;  */

undefined8 FUN_10929f574(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x140) != 0) {
      FUN_10929f5c8(param_1);
    }
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60));
    _free(param_1);
    return 0;
  }
  return 0xffffff9a;
}



/* Entry: 10929f5c8; end: 10929f65b;  */

undefined4 FUN_10929f5c8(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  if ((param_1 == 0) || (plVar2 = *(long **)(param_1 + 0x140), plVar2 == (long *)0x0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    if ((plVar2[0x18] == 0) && ((int)plVar2[0x27] == 0)) {
      uVar1 = 0;
      if (plVar2[0x15] != plVar2[0x16]) {
        uVar1 = 0xffffff97;
      }
    }
    else {
      uVar1 = 0;
    }
    if (*plVar2 != 0) {
      _free();
    }
    *plVar2 = 0;
    if (plVar2[0x10] == 8) {
      _inflateEnd(plVar2 + 1);
    }
    _free(plVar2);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return uVar1;
}



/* Entry: 10929f65c; end: 10929fc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10929f65c(long param_1,undefined8 *param_2,long *param_3,long param_4,ulong param_5,
                 long param_6,ulong param_7,long param_8,ulong param_9)

{
  long lVar1;
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
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_118 [8];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  int iStack_70;
  int iStack_6c;
  
  if (param_1 == 0) {
    iVar18 = -0x66;
  }
  else {
    pcVar19 = *(code **)(param_1 + 0x20);
    if (pcVar19 == (code *)0x0) {
      pcVar19 = *(code **)(param_1 + 0x50);
    }
    lVar1 = *(long *)(param_1 + 0x38);
    (*pcVar19)(lVar1,*(undefined8 *)(param_1 + 0x60),
               *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
    if ((lVar1 == 0) &&
       (lVar1 = param_1, FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_f8),
       (int)lVar1 == 0)) {
      iVar18 = 0;
      if (lStack_f8 != 0x2014b50) {
        iVar18 = -0x67;
      }
    }
    else {
      iVar18 = -1;
    }
    lVar1 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_f0);
    lVar17 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_e8);
    lVar16 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_e0);
    lVar2 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_d8);
    lVar3 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_d0);
    auVar22._4_4_ = uStack_d0;
    auVar22._0_4_ = uStack_d0;
    auVar22._8_4_ = uStack_d0;
    auVar22._12_4_ = uStack_d0;
    auVar23 = NEON_ushl(ZEXT416(uStack_d0),_UNK_10dfc0f20,4);
    iStack_70 = (uStack_d0 >> 0x15 & 0xf) - 1;
    iStack_6c = (uStack_d0 >> 0x19) + 0x7bc;
    auVar22 = NEON_ushl(auVar22,_UNK_10dfc0f30,4);
    bStack_80 = auVar23[0] & UNK_10dfc0f40;
    bStack_7f = auVar23[1] & UNK_10dfc0f40._1_1_;
    bStack_7e = auVar23[2] & UNK_10dfc0f40._2_1_;
    bStack_7d = auVar23[3] & UNK_10dfc0f40._3_1_;
    bStack_7c = auVar22[4] & UNK_10dfc0f40._4_1_;
    bStack_7b = auVar22[5] & UNK_10dfc0f40._5_1_;
    bStack_7a = auVar22[6] & UNK_10dfc0f40._6_1_;
    bStack_79 = auVar22[7] & UNK_10dfc0f40._7_1_;
    bStack_78 = auVar22[8] & UNK_10dfc0f40._8_1_;
    bStack_77 = auVar22[9] & UNK_10dfc0f40._9_1_;
    bStack_76 = auVar22[10] & UNK_10dfc0f40._10_1_;
    bStack_75 = auVar22[0xb] & UNK_10dfc0f40._11_1_;
    bStack_74 = auVar22[0xc] & UNK_10dfc0f40._12_1_;
    bStack_73 = auVar22[0xd] & UNK_10dfc0f40._13_1_;
    bStack_72 = auVar22[0xe] & UNK_10dfc0f40._14_1_;
    bStack_71 = auVar22[0xf] & UNK_10dfc0f40._15_1_;
    lVar4 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_c8);
    lVar5 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_100);
    lStack_c0 = lStack_100;
    lVar6 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_100);
    lStack_b8 = lStack_100;
    lVar7 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_b0);
    lVar8 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_a8);
    lVar9 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_a0);
    lVar10 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_98);
    lVar11 = param_1;
    FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_90);
    lVar12 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_88);
    lVar13 = param_1;
    FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_100);
    uVar21 = uStack_b0;
    if ((((((int)lVar13 != 0 || (int)lVar12 != 0) || ((int)lVar11 != 0 || (int)lVar10 != 0)) ||
         ((int)lVar9 != 0 || (int)lVar8 != 0)) ||
        ((((int)lVar4 != 0 || (int)lVar3 != 0) || ((int)lVar5 != 0 || (int)lVar6 != 0)) ||
        (int)lVar7 != 0)) ||
        ((((int)lVar2 != 0 || (int)lVar16 != 0) || (int)lVar17 != 0) || (int)lVar1 != 0)) {
      iVar18 = -1;
    }
    if ((param_4 != 0) && (iVar18 == 0)) {
      uVar20 = param_5;
      if (uStack_b0 < param_5) {
        *(undefined1 *)(param_4 + uStack_b0) = 0;
        uVar20 = uStack_b0;
      }
      iVar18 = 0;
      if ((param_5 != 0) && (uStack_b0 != 0)) {
        uVar14 = *(ulong *)(param_1 + 0x38);
        (**(code **)(param_1 + 8))(uVar14,*(undefined8 *)(param_1 + 0x60),param_4,uVar20);
        iVar18 = -(uint)(uVar14 != uVar20);
      }
      uVar21 = uVar21 - uVar20;
    }
    uVar20 = uStack_a8;
    if ((param_6 == 0) || (iVar18 != 0)) {
      lVar1 = uStack_a8 + uVar21;
    }
    else {
      uVar14 = uStack_a8;
      if (param_7 <= uStack_a8) {
        uVar14 = param_7;
      }
      if (uVar21 == 0) {
        iVar18 = 0;
      }
      else {
        pcVar19 = *(code **)(param_1 + 0x20);
        if (pcVar19 == (code *)0x0) {
          pcVar19 = *(code **)(param_1 + 0x50);
        }
        lVar1 = *(long *)(param_1 + 0x38);
        (*pcVar19)(lVar1,*(undefined8 *)(param_1 + 0x60),uVar21,1);
        iVar18 = -(uint)(lVar1 != 0);
        if (lVar1 == 0) {
          uVar21 = 0;
        }
      }
      if ((param_7 != 0) && (uVar20 != 0)) {
        uVar15 = *(ulong *)(param_1 + 0x38);
        (**(code **)(param_1 + 8))(uVar15,*(undefined8 *)(param_1 + 0x60),param_6,uVar14);
        if (uVar15 != uVar14) {
          iVar18 = -1;
        }
      }
      lVar1 = (uVar20 - uVar14) + uVar21;
    }
    if ((iVar18 == 0) && (uVar20 != 0)) {
      lVar1 = lVar1 - uVar20;
      if (lVar1 == 0) {
        iVar18 = 0;
        lVar1 = 0;
      }
      else {
        pcVar19 = *(code **)(param_1 + 0x20);
        if (pcVar19 == (code *)0x0) {
          pcVar19 = *(code **)(param_1 + 0x50);
        }
        lVar17 = *(long *)(param_1 + 0x38);
        (*pcVar19)(lVar17,*(undefined8 *)(param_1 + 0x60),lVar1,1);
        iVar18 = -(uint)(lVar17 != 0);
        if (lVar17 == 0) {
          lVar1 = 0;
        }
      }
      uVar21 = 0;
      do {
        lVar16 = param_1;
        FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_108);
        lVar2 = param_1;
        FUN_1092a076c(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_110);
        lVar17 = lStack_110;
        if ((int)lVar2 != 0 || (int)lVar16 != 0) {
          iVar18 = -1;
        }
        if (lStack_108 == 1) {
          if ((lStack_b8 == 0xffffffff) &&
             (lVar17 = param_1, FUN_1092a0634(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_b8),
             (int)lVar17 != 0)) {
            iVar18 = -1;
          }
          if ((lStack_c0 == 0xffffffff) &&
             (lVar17 = param_1, FUN_1092a0634(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_c0),
             (int)lVar17 != 0)) {
            iVar18 = -1;
          }
          if ((lStack_100 == 0xffffffff) &&
             (lVar17 = param_1, FUN_1092a0634(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_100),
             (int)lVar17 != 0)) {
            iVar18 = -1;
          }
          lVar17 = lStack_110;
          uVar20 = uStack_a8;
          if ((lStack_98 == 0xffffffff) &&
             (lVar16 = param_1, FUN_1092a057c(param_1,*(undefined8 *)(param_1 + 0x60),auStack_118),
             lVar17 = lStack_110, uVar20 = uStack_a8, (int)lVar16 != 0)) {
            iVar18 = -1;
          }
        }
        else {
          pcVar19 = *(code **)(param_1 + 0x20);
          if (pcVar19 == (code *)0x0) {
            pcVar19 = *(code **)(param_1 + 0x50);
          }
          lVar16 = *(long *)(param_1 + 0x38);
          (*pcVar19)(lVar16,*(undefined8 *)(param_1 + 0x60),lStack_110,1);
          if (lVar16 != 0) {
            iVar18 = -1;
          }
        }
        uVar21 = uVar21 + lVar17 + 4;
      } while (uVar21 < uVar20);
    }
    uVar21 = uStack_a0;
    if ((param_8 != 0) && (iVar18 == 0)) {
      uVar20 = param_9;
      if (uStack_a0 < param_9) {
        *(undefined1 *)(param_8 + uStack_a0) = 0;
        uVar20 = uStack_a0;
      }
      if (lVar1 == 0) {
        iVar18 = 0;
      }
      else {
        pcVar19 = *(code **)(param_1 + 0x20);
        if (pcVar19 == (code *)0x0) {
          pcVar19 = *(code **)(param_1 + 0x50);
        }
        lVar17 = *(long *)(param_1 + 0x38);
        (*pcVar19)(lVar17,*(undefined8 *)(param_1 + 0x60),lVar1,1);
        iVar18 = -(uint)(lVar17 != 0);
      }
      if ((param_9 != 0) && (uVar21 != 0)) {
        uVar21 = *(ulong *)(param_1 + 0x38);
        (**(code **)(param_1 + 8))(uVar21,*(undefined8 *)(param_1 + 0x60),param_8,uVar20);
        if (uVar21 != uVar20) {
          iVar18 = -1;
        }
      }
    }
    if ((param_2 != (undefined8 *)0x0) && (iVar18 == 0)) {
      param_2[0xd] = uStack_88;
      param_2[0xc] = uStack_90;
      param_2[0xf] = CONCAT17(bStack_71,
                              CONCAT16(bStack_72,
                                       CONCAT15(bStack_73,
                                                CONCAT14(bStack_74,
                                                         CONCAT13(bStack_75,
                                                                  CONCAT12(bStack_76,
                                                                           CONCAT11(bStack_77,
                                                                                    bStack_78)))))))
      ;
      param_2[0xe] = CONCAT17(bStack_79,
                              CONCAT16(bStack_7a,
                                       CONCAT15(bStack_7b,
                                                CONCAT14(bStack_7c,
                                                         CONCAT13(bStack_7d,
                                                                  CONCAT12(bStack_7e,
                                                                           CONCAT11(bStack_7f,
                                                                                    bStack_80)))))))
      ;
      param_2[0x10] = CONCAT44(iStack_6c,iStack_70);
      param_2[5] = uStack_c8;
      param_2[4] = CONCAT44(uStack_cc,uStack_d0);
      param_2[7] = lStack_b8;
      param_2[6] = lStack_c0;
      param_2[9] = uStack_a8;
      param_2[8] = uStack_b0;
      param_2[0xb] = lStack_98;
      param_2[10] = uStack_a0;
      param_2[1] = uStack_e8;
      *param_2 = uStack_f0;
      param_2[3] = uStack_d8;
      param_2[2] = uStack_e0;
    }
    if ((param_3 != (long *)0x0) && (iVar18 == 0)) {
      *param_3 = lStack_100;
    }
  }
  return iVar18;
}



/* Entry: 10929fc34; end: 10929fdbb;  */

long FUN_10929fc34(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
    lVar1 = param_1;
    FUN_10929f65c(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)((int)lVar1 == 0);
    return lVar1;
  }
  return 0xffffff9a;
}



/* Entry: 10929fdbc; end: 1092a0213;  */

long * FUN_10929fdbc(long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  byte abStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  
  if (param_1 == (long *)0x0) {
    return (long *)0xffffff9a;
  }
  if (param_5 != 0) {
    return (long *)0xffffff9a;
  }
  if (param_1[0x12] == 0) {
    return (long *)0xffffff9a;
  }
  if (param_1[0x28] != 0) {
    FUN_10929f5c8(param_1);
  }
  pcVar10 = (code *)param_1[4];
  if (pcVar10 == (code *)0x0) {
    pcVar10 = (code *)param_1[10];
  }
  lVar2 = param_1[7];
  (*pcVar10)(lVar2,param_1[0xc],param_1[0xf] + param_1[0x27],0);
  if (lVar2 == 0) {
    plVar6 = param_1;
    FUN_1092a057c(param_1,param_1[0xc],&lStack_68);
    plVar3 = param_1;
    FUN_1092a076c(param_1,param_1[0xc],&uStack_70);
    plVar4 = param_1;
    FUN_1092a076c(param_1,param_1[0xc],abStack_78);
    plVar5 = param_1;
    FUN_1092a076c(param_1,param_1[0xc],&uStack_70);
    if ((int)plVar5 == 0) {
      iVar9 = 0;
      if (lStack_68 != 0x4034b50) {
        iVar9 = -0x67;
      }
      if ((int)plVar4 != 0 || ((int)plVar3 != 0 || (int)plVar6 != 0)) {
        iVar9 = -1;
      }
      if (((int)plVar4 == 0 && ((int)plVar3 == 0 && (int)plVar6 == 0)) && (lStack_68 == 0x4034b50))
      {
        if ((uStack_70 == param_1[0x19]) &&
           ((uStack_70 < 0xd && ((1L << (uStack_70 & 0x3f) & 0x1101U) != 0)))) {
          iVar9 = 0;
        }
        else {
          iVar9 = -0x67;
        }
      }
    }
    else {
      iVar9 = -1;
    }
    plVar6 = param_1;
    FUN_1092a057c(param_1,param_1[0xc],&uStack_70);
    plVar3 = param_1;
    FUN_1092a057c(param_1,param_1[0xc],&uStack_70);
    if ((int)plVar3 == 0) {
      if ((int)plVar6 != 0) {
        iVar9 = -1;
      }
      if (iVar9 == 0) {
        if (uStack_70 == param_1[0x1b]) {
          iVar9 = 0;
        }
        else {
          iVar9 = -0x67;
          if ((abStack_78[0] & 8) != 0) {
            iVar9 = 0;
          }
        }
      }
    }
    else {
      iVar9 = -1;
    }
    plVar6 = param_1;
    FUN_1092a057c(param_1,param_1[0xc],&uStack_70);
    if ((int)plVar6 == 0) {
      if ((iVar9 == 0) && (uStack_70 != 0xffffffff)) {
        if (uStack_70 == param_1[0x1c]) {
          iVar9 = 0;
        }
        else {
          iVar9 = -0x67;
          if ((abStack_78[0] & 8) != 0) {
            iVar9 = 0;
          }
        }
      }
    }
    else {
      iVar9 = -1;
    }
    plVar6 = param_1;
    FUN_1092a057c(param_1,param_1[0xc],&uStack_70);
    if ((int)plVar6 == 0) {
      if ((iVar9 == 0) && (uStack_70 != 0xffffffff)) {
        if (uStack_70 == param_1[0x1d]) {
          iVar9 = 0;
        }
        else {
          iVar9 = -0x67;
          if ((abStack_78[0] & 8) != 0) {
            iVar9 = 0;
          }
        }
      }
    }
    else {
      iVar9 = -1;
    }
    plVar6 = param_1;
    FUN_1092a076c(param_1,param_1[0xc],&lStack_80);
    if ((int)plVar6 == 0) {
      if (iVar9 == 0) {
        bVar1 = lStack_80 == param_1[0x1e];
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    plVar6 = param_1;
    FUN_1092a076c(param_1,param_1[0xc],&lStack_88);
    if (((int)plVar6 == 0) && (bVar1)) {
      lVar2 = param_1[0x27];
      plVar6 = (long *)0x140;
      _malloc();
      if (plVar6 != (long *)0x0) {
        lVar7 = 0x4000;
        _malloc();
        *plVar6 = lVar7;
        plVar6[0x11] = lStack_80 + lVar2 + 0x1e;
        *(int *)(plVar6 + 0x12) = (int)lStack_88;
        plVar6[0x13] = 0;
        *(int *)(plVar6 + 0x27) = param_4;
        if (lVar7 != 0) {
          plVar6[0x10] = 0;
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = (int)param_1[0x19];
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 6;
            uVar11 = param_1[0x18] & 6;
            if (uVar11 < 4) {
              if (uVar11 == 0) goto LAB_1092a0130;
              uVar8 = 9;
            }
            else if (uVar11 == 6) {
              uVar8 = 1;
            }
            else {
              uVar8 = 2;
            }
            *param_3 = uVar8;
          }
LAB_1092a0130:
          lVar7 = param_1[4];
          lVar13 = param_1[7];
          lVar12 = param_1[6];
          plVar6[0x1e] = param_1[5];
          plVar6[0x1d] = lVar7;
          plVar6[0x20] = lVar13;
          plVar6[0x1f] = lVar12;
          lVar7 = param_1[8];
          plVar6[0x22] = param_1[9];
          plVar6[0x21] = lVar7;
          lVar7 = *param_1;
          lVar14 = param_1[3];
          lVar13 = param_1[2];
          plVar6[0x1a] = param_1[1];
          plVar6[0x19] = lVar7;
          lVar7 = param_1[0x1b];
          plVar6[0x15] = 0;
          plVar6[0x16] = lVar7;
          plVar6[0x14] = 0;
          lVar7 = param_1[0x19];
          lVar12 = param_1[0xc];
          plVar6[0x23] = param_1[10];
          plVar6[0x24] = lVar12;
          plVar6[0x1c] = lVar14;
          plVar6[0x1b] = lVar13;
          lVar12 = param_1[0xf];
          plVar6[0x25] = lVar7;
          plVar6[0x26] = lVar12;
          plVar6[6] = 0;
          if ((param_4 == 0) && (lVar7 == 0xc)) {
            *(undefined4 *)(plVar6 + 0x27) = 1;
          }
          else if ((param_4 == 0) && (lVar7 == 8)) {
            plVar6[1] = 0;
            *(undefined4 *)(plVar6 + 2) = 0;
            plVar6[10] = 0;
            plVar6[0xb] = 0;
            plVar6[9] = 0;
            plVar3 = plVar6 + 1;
            _inflateInit2_(plVar3,0xfffffff1,&UNK_10f45dced,0x70);
            if ((int)plVar3 != 0) {
              _free(plVar6);
              return plVar3;
            }
            plVar6[0x10] = 8;
            lVar2 = param_1[0x27];
          }
          lVar7 = param_1[0x1c];
          plVar6[0x18] = param_1[0x1d];
          plVar6[0x17] = lVar7;
          plVar6[0xf] = lVar2 + (lStack_88 + lStack_80 & 0xffffffffU) + 0x1e;
          *(undefined4 *)(plVar6 + 2) = 0;
          param_1[0x28] = (long)plVar6;
          *(undefined4 *)(param_1 + 0x29) = 0;
          return (long *)0x0;
        }
        _free(plVar6);
      }
      return (long *)0xffffff98;
    }
  }
  return (long *)0xffffff99;
}



/* Entry: 1092a0214; end: 1092a04a7;  */

int FUN_1092a0214(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  if ((param_1 == 0) || (plVar13 = *(long **)(param_1 + 0x140), plVar13 == (long *)0x0)) {
    iVar6 = -0x66;
  }
  else if (*plVar13 == 0) {
    iVar6 = -100;
  }
  else {
    if ((int)param_3 != 0) {
      plVar13[4] = param_2;
      *(int *)(plVar13 + 5) = (int)param_3;
      uVar9 = plVar13[0x18];
      uVar11 = param_3;
      if ((uVar9 < (param_3 & 0xffffffff)) && ((int)plVar13[0x27] == 0)) {
        *(int *)(plVar13 + 5) = (int)uVar9;
        uVar11 = uVar9;
      }
      iVar6 = (int)uVar11;
      if ((plVar13[0x17] + (ulong)*(uint *)(plVar13 + 2) < (param_3 & 0xffffffff)) &&
         ((int)plVar13[0x27] != 0)) {
        iVar6 = *(uint *)(plVar13 + 2) + (int)plVar13[0x17];
        *(int *)(plVar13 + 5) = iVar6;
      }
      if (iVar6 != 0) {
        iVar6 = 0;
        do {
          uVar11 = (ulong)*(uint *)(plVar13 + 2);
          if (*(uint *)(plVar13 + 2) == 0) {
            uVar11 = plVar13[0x17];
            if (uVar11 == 0) {
              uVar11 = 0;
            }
            else {
              if (0x3fff < uVar11) {
                uVar11 = 0x4000;
              }
              pcVar7 = (code *)plVar13[0x1d];
              if (pcVar7 == (code *)0x0) {
                pcVar7 = (code *)plVar13[0x23];
              }
              lVar3 = plVar13[0x20];
              (*pcVar7)(lVar3,plVar13[0x24],plVar13[0x26] + plVar13[0xf],0);
              if (lVar3 != 0) {
                return -1;
              }
              uVar9 = plVar13[0x20];
              (*(code *)plVar13[0x1a])(uVar9,plVar13[0x24],*plVar13,uVar11);
              if (uVar9 != uVar11) {
                return -1;
              }
              plVar13[0xf] = plVar13[0xf] + uVar11;
              plVar13[0x17] = plVar13[0x17] - uVar11;
              plVar13[1] = *plVar13;
              *(int *)(plVar13 + 2) = (int)uVar11;
            }
          }
          if ((plVar13[0x25] == 0) || ((int)plVar13[0x27] != 0)) {
            uVar10 = (uint)uVar11;
            if ((uVar10 == 0) && (plVar13[0x17] == 0)) {
              return iVar6;
            }
            uVar1 = *(uint *)(plVar13 + 5);
            if (uVar10 <= *(uint *)(plVar13 + 5)) {
              uVar1 = uVar10;
            }
            uVar11 = (ulong)uVar1;
            if (uVar1 == 0) {
              uVar9 = 0;
            }
            else {
              uVar8 = 0;
              do {
                *(undefined1 *)(plVar13[4] + uVar8) = *(undefined1 *)(plVar13[1] + uVar8);
                uVar8 = uVar8 + 1;
                uVar9 = uVar11;
              } while (uVar11 != uVar8);
            }
            lVar3 = plVar13[0x15];
            plVar13[0x14] = plVar13[0x14] + uVar9;
            _crc32(lVar3,plVar13[4],uVar11);
            plVar13[0x15] = lVar3;
            plVar13[0x18] = plVar13[0x18] - uVar9;
            *(uint *)(plVar13 + 2) = (int)plVar13[2] - uVar1;
            *(uint *)(plVar13 + 5) = (int)plVar13[5] - uVar1;
            plVar13[4] = plVar13[4] + uVar9;
            plVar13[1] = plVar13[1] + uVar9;
            iVar6 = uVar1 + iVar6;
            plVar13[6] = plVar13[6] + uVar9;
          }
          else if (plVar13[0x25] != 0xc) {
            lVar12 = plVar13[6];
            lVar3 = plVar13[4];
            plVar4 = plVar13 + 1;
            _inflate(plVar4,2);
            iVar2 = (int)plVar4;
            if ((-1 < iVar2) && (plVar13[7] != 0)) {
              iVar2 = -3;
            }
            lVar12 = plVar13[6] - lVar12;
            lVar5 = plVar13[0x15];
            plVar13[0x14] = plVar13[0x14] + lVar12;
            _crc32(lVar5,lVar3,lVar12);
            plVar13[0x15] = lVar5;
            plVar13[0x18] = plVar13[0x18] - lVar12;
            iVar6 = iVar6 + (int)lVar12;
            if (iVar2 != 0) {
              if (iVar2 != 1) {
                return iVar2;
              }
              return iVar6;
            }
          }
          if ((int)plVar13[5] == 0) {
            return iVar6;
          }
        } while( true );
      }
    }
    iVar6 = 0;
  }
  return iVar6;
}



/* Entry: 1092a04a8; end: 1092a057b;  */

void FUN_1092a04a8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iStack_104;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  ___sprintf_chk(&uStack_50,0,0x30,&UNK_10f563097);
  uStack_a8 = 0x10929ebec;
  pcStack_a0 = FUN_10929ec7c;
  pcStack_60 = FUN_10929ed28;
  pcStack_58 = FUN_10929ed30;
  uStack_98 = 0x10929eccc;
  uStack_88 = 0;
  pcStack_80 = FUN_10929edb4;
  pcStack_78 = FUN_10929edd0;
  uStack_70 = 0;
  pcStack_68 = FUN_10929eb5c;
  puVar1 = &uStack_50;
  puVar3 = &uStack_a8;
  plVar4 = (long *)0x0;
  FUN_10929edd8(puVar1,puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  iStack_104 = 0;
  puVar2 = puVar1;
  func_0x0001092a07e4();
  if ((int)puVar2 == 0) {
    uVar6 = (ulong)iStack_104;
    puVar2 = puVar1;
    func_0x0001092a07e4(puVar1,puVar3,&iStack_104);
    if ((int)puVar2 == 0) {
      lVar7 = (long)iStack_104;
      puVar2 = puVar1;
      func_0x0001092a07e4(puVar1,puVar3,&iStack_104);
      if ((int)puVar2 == 0) {
        lVar5 = (long)iStack_104;
        func_0x0001092a07e4(puVar1,puVar3,&iStack_104);
        lVar7 = (uVar6 | lVar7 << 8 | lVar5 << 0x10) + (long)iStack_104 * 0x1000000;
        if ((int)puVar1 != 0) {
          lVar7 = 0;
        }
        goto LAB_1092a05e8;
      }
    }
  }
  lVar7 = 0;
LAB_1092a05e8:
  *plVar4 = lVar7;
  return;
}



/* Entry: 1092a057c; end: 1092a0633;  */

void FUN_1092a057c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iStack_44;
  
  iStack_44 = 0;
  uVar1 = param_1;
  func_0x0001092a07e4(param_1,param_2,&iStack_44);
  if ((int)uVar1 == 0) {
    uVar3 = (ulong)iStack_44;
    uVar1 = param_1;
    func_0x0001092a07e4(param_1,param_2,&iStack_44);
    if ((int)uVar1 == 0) {
      lVar4 = (long)iStack_44;
      uVar1 = param_1;
      func_0x0001092a07e4(param_1,param_2,&iStack_44);
      if ((int)uVar1 == 0) {
        lVar2 = (long)iStack_44;
        func_0x0001092a07e4(param_1,param_2,&iStack_44);
        lVar4 = (uVar3 | lVar4 << 8 | lVar2 << 0x10) + (long)iStack_44 * 0x1000000;
        if ((int)param_1 != 0) {
          lVar4 = 0;
        }
        goto LAB_1092a05e8;
      }
    }
  }
  lVar4 = 0;
LAB_1092a05e8:
  *param_3 = lVar4;
  return;
}



/* Entry: 1092a0634; end: 1092a076b;  */

void FUN_1092a0634(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uStack_64;
  
  uStack_64 = 0;
  uVar1 = param_1;
  func_0x0001092a07e4(param_1,param_2,&uStack_64);
  if ((int)uVar1 == 0) {
    uVar3 = (ulong)(int)uStack_64;
    uVar1 = param_1;
    func_0x0001092a07e4(param_1,param_2,&uStack_64);
    if ((int)uVar1 == 0) {
      lVar4 = (long)(int)uStack_64;
      uVar1 = param_1;
      func_0x0001092a07e4(param_1,param_2,&uStack_64);
      if ((int)uVar1 == 0) {
        lVar5 = (long)(int)uStack_64;
        uVar1 = param_1;
        func_0x0001092a07e4(param_1,param_2,&uStack_64);
        if ((int)uVar1 == 0) {
          lVar6 = (long)(int)uStack_64;
          uVar1 = param_1;
          func_0x0001092a07e4(param_1,param_2,&uStack_64);
          if ((int)uVar1 == 0) {
            lVar7 = (long)(int)uStack_64;
            uVar1 = param_1;
            func_0x0001092a07e4(param_1,param_2,&uStack_64);
            if ((int)uVar1 == 0) {
              uVar8 = (ulong)uStack_64;
              uVar1 = param_1;
              func_0x0001092a07e4(param_1,param_2,&uStack_64);
              if ((int)uVar1 == 0) {
                uVar2 = (ulong)uStack_64;
                func_0x0001092a07e4(param_1,param_2,&uStack_64);
                uVar3 = uVar3 | lVar4 << 8 | lVar5 << 0x10 | lVar6 << 0x18 | lVar7 << 0x20 |
                        uVar8 << 0x28 | uVar2 << 0x30 | (ulong)uStack_64 << 0x38;
                if ((int)param_1 != 0) {
                  uVar3 = 0;
                }
                goto LAB_1092a0708;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_1092a0708:
  *param_3 = uVar3;
  return;
}



/* Entry: 1092a076c; end: 1092a0857;  */

void FUN_1092a076c(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int iStack_34;
  
  iStack_34 = 0;
  uVar1 = param_1;
  func_0x0001092a07e4(param_1,param_2,&iStack_34);
  if ((int)uVar1 == 0) {
    uVar2 = (ulong)iStack_34;
    func_0x0001092a07e4(param_1,param_2,&iStack_34);
    uVar2 = uVar2 | (long)iStack_34 << 8;
    if ((int)param_1 != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  return;
}



/* Entry: 1092a0858; end: 1092a08a3;  */

void FUN_1092a0858(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1092a08a4; end: 1092a08fb;  */

long FUN_1092a08a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1092a08fc; end: 1092a092f;  */

undefined ** FUN_1092a08fc(void)

{
  return &PTR_DAT_110ae7a88;
}



/* Entry: 1092a0930; end: 1092a0b57;  */

byte * FUN_1092a0930(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  int iVar12;
  ulong uStack_48;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x20);
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    pbVar5 = pbVar10;
    uVar3 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar10 = pbVar5 + 1;
        *pbVar5 = (byte)uVar3 | 0x80;
        uVar7 = uVar3 >> 7;
        uVar1 = uVar3 >> 0xe;
        pbVar5 = pbVar10;
        uVar3 = uVar7;
      } while (uVar1 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar7;
  }
  if ((uVar4 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar6 = *(ulong *)(param_1 + 0x18);
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    uVar8 = uVar6;
    pbVar5 = pbVar10;
    if (0x7f < uVar6) {
      do {
        pbVar10 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar6 = uVar8 >> 7;
        uVar9 = uVar8 >> 0xe;
        uVar8 = uVar6;
        pbVar5 = pbVar10;
      } while (uVar9 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar11 = *(long *)(uVar8 + 8);
      uStack_48 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar11 = uVar8 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar4) {
        do {
          iVar12 = (int)pbVar5;
          _memcpy(param_2,lVar11,(long)iVar12);
          uVar4 = (int)uStack_48 - iVar12;
          uStack_48 = (ulong)uVar4;
          lVar11 = lVar11 + iVar12;
          pbVar5 = (byte *)*param_3;
          pbVar10 = param_2 + iVar12;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar5 <= pbVar10);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar11,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar11,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar4;
    }
  }
  return param_2;
}



/* Entry: 1092a0b58; end: 1092a0be3;  */

ulong FUN_1092a0b58(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 1092a0be4; end: 1092a0c37;  */

long FUN_1092a0be4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1092a0c38; end: 1092a0c3b;  */

long FUN_1092a0c38(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1092a0c3c; end: 1092a0c4f;  */

void FUN_1092a0c3c(void)

{
  FUN_1092a0be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a0c50; end: 1092a0c5b;  */

undefined ** FUN_1092a0c50(void)

{
  return &PTR_DAT_110ae7ac8;
}



/* Entry: 1092a0c5c; end: 1092a0cdf;  */

void FUN_1092a0c5c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001092a0908(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 1092a0ce0; end: 1092a0ebf;  */

byte * FUN_1092a0ce0(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar1 = *(byte **)param_3;
    if (pbVar1 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar1);
        pbVar1 = *(byte **)param_3;
      } while (pbVar1 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x28);
    pbVar4 = param_2 + 1;
    *param_2 = 0x10;
    uVar3 = uVar5;
    pbVar1 = pbVar4;
    if (0x7f < uVar5) {
      do {
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar6 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar1 = pbVar4;
      } while (uVar6 != 0);
    }
    param_2 = pbVar4 + 1;
    *pbVar4 = (byte)uVar5;
  }
  pbVar1 = param_2;
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar1 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uVar3;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar2) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(pbVar1,lVar8,(long)iVar9);
          uVar2 = (int)uVar3 - iVar9;
          uVar3 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar4 = *(byte **)param_3;
          pbVar7 = pbVar1 + iVar9;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar7;
          } while (pbVar4 <= pbVar7);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar2);
      }
      _memcpy(pbVar1,lVar8,(long)(int)uVar2);
      pbVar1 = pbVar1 + (int)uVar2;
    }
    else {
      _memcpy(pbVar1,lVar8,uVar3 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar2;
    }
  }
  return pbVar1;
}



/* Entry: 1092a0ec0; end: 1092a0fb3;  */

long FUN_1092a0ec0(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)bVar2) {
        uVar4 = (ulong)bVar2;
      }
      lVar5 = uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      FUN_1092a0b58();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 1092a0fb4; end: 1092a10af;  */

void FUN_1092a0fb4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar4 & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_1092a1fec(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1092a0858();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1092a10b0; end: 1092a10e7;  */

void FUN_1092a10b0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1092a10e8; end: 1092a113f;  */

long FUN_1092a10e8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1092a1140; end: 1092a1163;  */

undefined ** FUN_1092a1140(void)

{
  return &PTR_DAT_110ae7af8;
}



/* Entry: 1092a1164; end: 1092a130b;  */

byte * FUN_1092a1164(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    uVar4 = *(ulong *)(param_1 + 0x18);
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar4) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar2) {
        do {
          iVar8 = (int)pbVar3;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar8;
          pbVar3 = (byte *)*param_3;
          pbVar7 = param_2 + iVar8;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar1 + (long)((int)pbVar7 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar3 <= pbVar7);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 1092a130c; end: 1092a1363;  */

ulong FUN_1092a130c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 1092a1364; end: 1092a13af;  */

long FUN_1092a1364(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1092a13b0; end: 1092a13b3;  */

long FUN_1092a13b0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1092a13b4; end: 1092a13c7;  */

void FUN_1092a13b4(void)

{
  FUN_1092a1364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a13c8; end: 1092a13d3;  */

undefined ** FUN_1092a13c8(void)

{
  return &PTR_DAT_110ae7b38;
}



/* Entry: 1092a13d4; end: 1092a142b;  */

void FUN_1092a13d4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x0001092a114c(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0x1e) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x2d) = 0;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1092a142c; end: 1092a173f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_1092a142c(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    pbVar5 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar10 = *(ulong *)(param_1 + 0x20);
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = uVar10;
    pbVar5 = pbVar7;
    if (0x7f < uVar10) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar10 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar10;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar10;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar10 = *(ulong *)(param_1 + 0x28);
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    uVar4 = uVar10;
    pbVar5 = pbVar7;
    if (0x7f < uVar10) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar10 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar10;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar10;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar10 = (ulong)(int)uVar2;
    pbVar7 = param_2 + 1;
    *param_2 = 0x20;
    uVar4 = uVar10;
    pbVar5 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar10 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar10;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar10;
  }
  if ((uVar9 >> 4 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    bVar1 = *(byte *)(param_1 + 0x34);
    *param_2 = 0x28;
    param_2[1] = bVar1;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar8 = *(long *)(uVar4 + 8);
      uVar10 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar8 = uVar4 + 8;
    }
    uVar9 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar9) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar8,(long)iVar11);
          uVar9 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar9;
          lVar8 = lVar8 + iVar11;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar3 + (long)((int)pbVar7 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar9);
      }
      _memcpy(param_2,lVar8,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar8,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 1092a1740; end: 1092a1837;  */

void FUN_1092a1740(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_1092a130c();
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
    }
    iVar2 = iVar2 + (uVar1 >> 3 & 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1092a1838; end: 1092a191f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092a1838(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_1092a2078(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1092a10b0(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1092a1920; end: 1092a195b;  */

long FUN_1092a1920(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1092a1e24(param_1 + 0x30);
  FUN_1092a1df0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1092a195c; end: 1092a195f;  */

long FUN_1092a195c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1092a1e24(param_1 + 0x30);
  FUN_1092a1df0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1092a1960; end: 1092a1973;  */

void FUN_1092a1960(void)

{
  FUN_1092a1920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a1974; end: 1092a197f;  */

undefined ** FUN_1092a1974(void)

{
  return &PTR_DAT_110ae7b68;
}



/* Entry: 1092a1980; end: 1092a19e3;  */

void FUN_1092a1980(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1092a19e4; end: 1092a1d43;  */

byte * FUN_1092a19e4(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uStack_48;
  
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar10 = iVar10 + 1;
      pbVar7 = param_2;
    } while (iVar11 != iVar10);
  }
  iVar11 = *(int *)(param_1 + 0x38);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar10 = iVar10 + 1;
      pbVar7 = param_2;
    } while (iVar11 != iVar10);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar7 = (byte *)*param_3;
    if (pbVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x48);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar7 = pbVar8;
    uVar4 = uVar5;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        uVar5 = uVar4 >> 7;
        uVar2 = uVar4 >> 0xe;
        pbVar7 = pbVar8;
        uVar4 = uVar5;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar7 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar7 < (int)uVar5) {
        do {
          iVar11 = (int)pbVar7;
          _memcpy(param_2,lVar9,(long)iVar11);
          uVar5 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar5;
          lVar9 = lVar9 + iVar11;
          pbVar7 = (byte *)*param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar3 + (long)((int)pbVar8 - (int)pbVar7));
            pbVar7 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar7 <= pbVar8);
          pbVar7 = pbVar7 + (0x10 - (long)param_2);
        } while ((int)pbVar7 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar5;
    }
  }
  return param_2;
}



/* Entry: 1092a1d44; end: 1092a1dc7;  */

void FUN_1092a1d44(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1092a1dc8; end: 1092a1def;  */

void FUN_1092a1dc8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110ae7908;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1092a1df0; end: 1092a1e23;  */

long * FUN_1092a1df0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1092a1e24; end: 1092a1e57;  */

long * FUN_1092a1e24(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1092a1e58; end: 1092a1feb;  */

void FUN_1092a1e58(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110ae7908;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1092a1fec; end: 1092a2077;  */

undefined8 * FUN_1092a1fec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110ae7908;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1092a0858();
  return puVar1;
}



/* Entry: 1092a2078; end: 1092a20ff;  */

undefined8 * FUN_1092a2078(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110ae7958;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1092a10b0();
  return puVar1;
}



/* Entry: 1092a2100; end: 1092a21d7;  */

void FUN_1092a2100(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(int *)(param_2 + 4) == 1) {
    puVar3 = (undefined8 *)0x10;
    __Znwm();
    *puVar3 = &PTR_FUN_110ae7c90;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((long)puVar3 + 0xc) = 1;
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 0) {
      __ZNSt3__16thread20hardware_concurrencyEv();
    }
    *(int *)((long)puVar3 + 0xc) = iVar2;
  }
  else {
    if (*(int *)(param_2 + 4) != 3) {
      func_0x00010b0ae4b8(auStack_48,&UNK_10f5630a0,0x37);
      func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a21bc);
      (*pcVar1)();
    }
    puVar3 = (undefined8 *)0x8;
    __Znwm();
    *puVar3 = &PTR_FUN_110ae7c28;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1092a21d8; end: 1092a2207;  */

long FUN_1092a21d8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  FUN_10925f784(param_4,param_2,param_2 + param_3,param_3);
  return param_3;
}



/* Entry: 1092a2208; end: 1092a22ab;  */

ulong FUN_1092a2208(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   ulong param_5)

{
  undefined4 uVar1;
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  
  uVar1 = SUB84(auStack_50,0);
  if (param_5 < param_3) {
    func_0x000107c31940(auStack_50,&UNK_10f563105);
    __ZSt19uncaught_exceptionsv();
    uStack_38 = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_50,&UNK_10f5630d8,0x2c);
    FUN_1092a22e8(auStack_50);
  }
  else if (param_3 == 0) {
    return 0;
  }
  _memcpy(param_4,param_2,param_3);
  return param_3;
}



/* Entry: 1092a22ac; end: 1092a22e7;  */

void FUN_1092a22ac(long *param_1,long *param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001092a22cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,*param_2,param_2[1] - *param_2,*param_3,param_3[1] - *param_3)
  ;
  return;
}



/* Entry: 1092a22e8; end: 1092a234f;  */

undefined8 * FUN_1092a22e8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)puVar2 != *(int *)(param_1 + 3)) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    return param_1;
  }
  FUN_1092a2350(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a2334);
  (*pcVar1)();
}



/* Entry: 1092a2350; end: 1092a239f;  */

ulong FUN_1092a2350(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *in_x3;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  func_0x000105687f30();
  ppuVar5 = &PTR_DAT_1108a63e8;
  puVar6 = &DAT_105687f54;
  lVar3 = lVar2;
  ___cxa_throw();
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  uVar7 = 0x20000U - (long)puVar6 >> 0xb;
  if ((undefined *)0x20000 < puVar6 || 0x20000U - (long)puVar6 == 0) {
    uVar7 = 0;
  }
  puVar4 = puVar6 + uVar7 + ((ulong)puVar6 >> 8);
  puVar9 = (undefined *)(in_x3[1] - *in_x3);
  if (puVar4 < puVar9 || (long)puVar4 - (long)puVar9 == 0) {
    if (puVar4 < puVar9) {
      in_x3[1] = (long)(puVar4 + *in_x3);
    }
  }
  else {
    func_0x000107c27d58(in_x3,(long)puVar4 - (long)puVar9);
  }
  puVar4 = &UNK_10e00f928;
  func_0x000107c2ae34();
  func_0x000107c2ae3c();
  if (((1 < *(int *)(lVar3 + 0xc)) && (*(int *)(puVar4 + 0x428) == 0)) &&
     (*(long *)(puVar4 + 0x208) == 0)) {
    FUN_1099b117c(puVar4 + 0x10,400);
  }
  uStack_68 = 0;
  lStack_90 = *in_x3;
  lStack_88 = in_x3[1] - lStack_90;
  uStack_80 = 0;
  puVar9 = puVar4;
  ppuStack_78 = ppuVar5;
  puStack_70 = puVar6;
  FUN_1099b2970(puVar4,&lStack_90,&ppuStack_78,2);
  uVar7 = uStack_80;
  if (puVar9 < (undefined *)0xffffffffffffff89) {
    uVar8 = in_x3[1] - *in_x3;
    if (uStack_80 < uVar8 || uStack_80 - uVar8 == 0) {
      if (uStack_80 < uVar8) {
        in_x3[1] = *in_x3 + uStack_80;
      }
    }
    else {
      func_0x000107c27d58(in_x3,uStack_80 - uVar8);
    }
    FUN_1099b10c0(puVar4);
    return uVar7;
  }
  func_0x000107c31940(auStack_c0,&UNK_10f563118);
  uVar7 = (ulong)(uint)-(int)puVar9;
  FUN_1099ae7ac(uVar7);
  FUN_109259240(auStack_a8,auStack_c0,uVar7);
  func_0x000105687ee0(auStack_a8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a2504);
  (*pcVar1)();
}



/* Entry: 1092a23a0; end: 1092a254f;  */

ulong FUN_1092a23a0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar4 = 0x20000 - param_3 >> 0xb;
  if (0x20000 < param_3 || 0x20000 - param_3 == 0) {
    uVar4 = 0;
  }
  uVar4 = param_3 + (param_3 >> 8) + uVar4;
  uVar5 = param_4[1] - *param_4;
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    if (uVar4 < uVar5) {
      param_4[1] = *param_4 + uVar4;
    }
  }
  else {
    func_0x000107c27d58(param_4,uVar4 - uVar5);
  }
  puVar2 = &UNK_10e00f928;
  func_0x000107c2ae34();
  func_0x000107c2ae3c();
  if (((1 < *(int *)(param_1 + 0xc)) && (*(int *)(puVar2 + 0x428) == 0)) &&
     (*(long *)(puVar2 + 0x208) == 0)) {
    FUN_1099b117c(puVar2 + 0x10,400);
  }
  uStack_48 = 0;
  lStack_70 = *param_4;
  lStack_68 = param_4[1] - lStack_70;
  uStack_60 = 0;
  puVar3 = puVar2;
  uStack_58 = param_2;
  uStack_50 = param_3;
  FUN_1099b2970(puVar2,&lStack_70,&uStack_58,2);
  uVar4 = uStack_60;
  if (puVar3 < (undefined *)0xffffffffffffff89) {
    uVar5 = param_4[1] - *param_4;
    if (uStack_60 < uVar5 || uStack_60 - uVar5 == 0) {
      if (uStack_60 < uVar5) {
        param_4[1] = *param_4 + uStack_60;
      }
    }
    else {
      func_0x000107c27d58(param_4,uStack_60 - uVar5);
    }
    FUN_1099b10c0(puVar2);
    return uVar4;
  }
  func_0x000107c31940(auStack_a0,&UNK_10f563118);
  uVar4 = (ulong)(uint)-(int)puVar3;
  FUN_1099ae7ac(uVar4);
  FUN_109259240(auStack_88,auStack_a0,uVar4);
  func_0x000105687ee0(auStack_88);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a2504);
  (*pcVar1)();
}



/* Entry: 1092a2550; end: 1092a275f;  */

undefined8
FUN_1092a2550(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c2ae6c(param_4,param_5,param_2,param_3);
  if (param_4 < 0xffffffffffffff89) {
    if (param_4 == param_5) {
      return param_3;
    }
    func_0x000107c31940(auStack_98,&UNK_10f563146);
    __ZNSt3__19to_stringEm(&ppuStack_b0,param_5);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    puVar3 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuStack_b0,uStack_a8);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109259240(auStack_68,&uStack_80,&UNK_10f56316f);
    __ZNSt3__19to_stringEm(&ppuStack_c8,param_4);
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      ppuStack_c8 = &ppuStack_c8;
    }
    puVar3 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuStack_c8,uStack_c0);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    func_0x000105687ee0(&uStack_50);
  }
  else {
    func_0x000107c31940(auStack_68,&UNK_10f56312e);
    uVar2 = (ulong)(uint)-(int)param_4;
    FUN_1099ae7ac(uVar2);
    FUN_109259240(&uStack_50,auStack_68,uVar2);
    func_0x000105687ee0(&uStack_50);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a26a0);
  (*pcVar1)();
}



/* Entry: 1092a2760; end: 1092a2783;  */

void FUN_1092a2760(long *param_1,long *param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001092a2780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,*param_2,param_2[1] - *param_2,*param_3,param_3[1] - *param_3)
  ;
  return;
}



/* Entry: 1092a2784; end: 1092a2953;  */

void FUN_1092a2784(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4,ulong param_5
                  )

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((param_5 & 1) == 0) {
    FUN_109246310(&uStack_60,param_4);
    plVar4 = (long *)*param_3;
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x38))(plVar4,plVar2);
    plVar2 = (long *)*param_3;
    (**(code **)(*plVar2 + 0x30))();
    plVar4 = (long *)*param_3;
    (**(code **)(*plVar4 + 0x10))();
    (**(code **)(*param_2 + 8))(param_2,plVar2,plVar4,uStack_60,param_4);
    puVar1 = (undefined8 *)0x30;
    __Znwm();
    *puVar1 = &PTR_FUN_110ae9550;
    puVar1[2] = uStack_58;
    puVar1[1] = uStack_60;
    puVar1[3] = uStack_50;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    *param_1 = puVar1;
  }
  else {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_110ae7cd0;
    uVar3 = *param_3;
    *param_3 = 0;
    puVar1[7] = 0;
    puVar1[8] = uVar3;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[3] = param_4;
    puVar1[9] = 0;
    if (0x1ffff < param_4) {
      param_4 = 0x20000;
    }
    puVar1[0xd] = 0x20000;
    puVar1[0xc] = 0x20003;
    func_0x000107c31950(puVar1 + 4,param_4);
    FUN_1092a2954(puVar1);
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 1092a2954; end: 1092a2a83;  */

long * FUN_1092a2954(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  func_0x000107c2ae60(*(undefined8 *)(param_1 + 0x48));
  puVar1 = &UNK_10e010ee0;
  func_0x000107c2ae5c();
  *(undefined **)(param_1 + 0x48) = puVar1;
  if (puVar1 != (undefined *)0x0) {
    *(undefined4 *)(puVar1 + 0x7174) = 0;
    *(undefined4 *)(puVar1 + 0x71d4) = 0;
    func_0x000107c2ae58(*(undefined8 *)(puVar1 + 0x7158));
    *(undefined4 *)(puVar1 + 0x7170) = 0;
    *(undefined8 *)(puVar1 + 0x7160) = 0;
    *(undefined8 *)(puVar1 + 0x7158) = 0;
    plVar4 = (long *)0x5;
    if (*(int *)(puVar1 + 0x7110) != 0) {
      plVar4 = (long *)0x1;
    }
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
      puVar2 = *(undefined8 **)(param_1 + 0x50);
    }
    *puVar2 = 0;
    plVar3 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar3 + 0x10))();
    lVar5 = *(long *)(param_1 + 0x50);
    if (plVar4 <= plVar3) {
      plVar3 = plVar4;
    }
    *(long **)(lVar5 + 8) = plVar3;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x58);
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
      puVar2 = *(undefined8 **)(param_1 + 0x58);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_1092a2dc0(param_1 + 0x20,0,0,0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar4 = *(long **)(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x0001092a2a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,0,0);
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f56317c;
  func_0x000105688514();
  *plVar4 = (long)&PTR_FUN_110ae8040;
  if (plVar4[4] != 0) {
    plVar4[5] = plVar4[4];
    __ZdlPv();
  }
  plVar3 = (long *)plVar4[1];
  plVar4[1] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x50))();
  }
  return plVar4;
}



/* Entry: 1092a2a84; end: 1092a2b37;  */

undefined8 * FUN_1092a2a84(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ae8040;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  return param_1;
}



/* Entry: 1092a2b38; end: 1092a2b3b;  */

undefined8 * FUN_1092a2b38(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107c2ae60(param_1[9]);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  *param_1 = &PTR_FUN_110ae8040;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  return param_1;
}



/* Entry: 1092a2b3c; end: 1092a2b83;  */

void FUN_1092a2b3c(void)

{
  func_0x0001092a2ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a2b84; end: 1092a2dab;  */

void FUN_1092a2b84(ulong param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x18))();
    plVar2 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar2 + 0x10))();
    if (plVar2 <= plVar1) break;
    lVar3 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(lVar3 + 8));
    plVar2 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar2 + 0x30))();
    plVar1 = *(long **)(param_1 + 0x58);
    **(undefined8 **)(param_1 + 0x50) = plVar2;
    plVar1[2] = 0;
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    uVar7 = *(ulong *)(param_1 + 0x68);
    if (*(ulong *)(param_1 + 0x68) <= param_3) {
      uVar7 = param_3;
    }
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    plVar1[1] = uVar5;
    uVar7 = param_1;
    if (param_3 < uVar5) {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar6 = *(long *)(param_1 + 0x28) - lVar3;
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
        if (uVar5 < uVar6) {
          *(ulong *)(param_1 + 0x28) = lVar3 + uVar5;
        }
      }
      else {
        func_0x000107c27d58(param_1 + 0x20,uVar5 - uVar6);
        lVar3 = *(long *)(param_1 + 0x20);
        plVar1 = *(long **)(param_1 + 0x58);
      }
      *plVar1 = lVar3;
      func_0x0001092a2b50();
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x58) + 0x10);
      uVar5 = param_3;
      if (uVar6 <= param_3) {
        uVar5 = uVar6;
      }
      lVar3 = *(long *)(param_1 + 0x20);
      uVar4 = *(long *)(param_1 + 0x28) - lVar3;
      if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
        if (uVar6 < uVar4) {
          *(ulong *)(param_1 + 0x28) = lVar3 + uVar6;
        }
      }
      else {
        func_0x000107c27d58(param_1 + 0x20,uVar6 - uVar4);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      _memcpy(param_2,lVar3,uVar5);
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar5;
      uVar6 = *(long *)(param_1 + 0x38) + uVar5;
      *(ulong *)(param_1 + 0x38) = uVar6;
      if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) <= uVar6) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      *plVar1 = param_2;
      func_0x0001092a2b50();
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x58) + 0x10);
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar5;
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x40))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10));
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10),1);
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x10))();
    plVar2 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar2 + 0x18))();
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_1 + 0x60);
    }
    param_2 = param_2 + uVar5;
    uVar6 = (long)plVar1 - (long)plVar2;
    if (uVar7 <= (ulong)((long)plVar1 - (long)plVar2)) {
      uVar6 = uVar7;
    }
    *(ulong *)(*(long *)(param_1 + 0x50) + 8) = uVar6;
    param_3 = param_3 - uVar5;
  }
  return;
}



/* Entry: 1092a2dac; end: 1092a2dbf;  */

void FUN_1092a2dac(void)

{
  return;
}



/* Entry: 1092a2dc0; end: 1092a2eeb;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_1092a2dc0(long *******param_1,long *******param_2,long *******param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *****ppppplVar3;
  char cVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  code *pcVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long lVar13;
  long ******pppppplVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long alStack_298 [3];
  long *plStack_280;
  long lStack_278;
  ulong uStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long ******pppppplStack_258;
  long *******ppppppplStack_250;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long *******ppppppplStack_228;
  long *****ppppplStack_220;
  long *****ppppplStack_218;
  long *******ppppppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  long lStack_1e0;
  char cStack_1d1;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  undefined1 auStack_1b8 [56];
  ulong uStack_180;
  long lStack_130;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *plStack_a8;
  long lStack_98;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  pppppplVar11 = param_1[2];
  ppppppplVar20 = (long *******)*param_1;
  ppppppplVar10 = param_1;
  if (param_4 <= (ulong)((long)pppppplVar11 - (long)ppppppplVar20)) {
    ppppppplVar12 = (long *******)param_1[1];
    if ((ulong)((long)ppppppplVar12 - (long)ppppppplVar20) < param_4) {
      ppppppplVar19 = (long *******)((long)param_2 + ((long)ppppppplVar12 - (long)ppppppplVar20));
      ppppppplVar9 = ppppppplVar12;
      if (ppppppplVar12 != ppppppplVar20) {
        _memmove(ppppppplVar20,param_2);
        ppppppplVar12 = (long *******)param_1[1];
        ppppppplVar9 = ppppppplVar12;
        ppppppplVar10 = ppppppplVar20;
      }
      for (; ppppppplVar19 != param_3; ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1)) {
        *(undefined1 *)ppppppplVar12 = *(undefined1 *)ppppppplVar19;
        ppppppplVar12 = (long *******)((long)ppppppplVar12 + 1);
        ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
      }
    }
    else {
      lVar13 = (long)param_3 - (long)param_2;
      if (lVar13 != 0) {
        ppppppplVar10 = ppppppplVar20;
        _memmove(ppppppplVar20,param_2,lVar13);
      }
      ppppppplVar9 = (long *******)((long)ppppppplVar20 + lVar13);
    }
LAB_1092a2ed0:
    param_1[1] = (long ******)ppppppplVar9;
    return ppppppplVar10;
  }
  ppppppplVar9 = param_1;
  ppppppplVar12 = param_2;
  ppppppplVar19 = param_3;
  uVar16 = param_4;
  if (ppppppplVar20 != (long *******)0x0) {
    param_1[1] = (long ******)ppppppplVar20;
    __ZdlPv();
    pppppplVar11 = (long ******)0x0;
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    ppppppplVar9 = ppppppplVar20;
  }
  if (-1 < (long)param_4) {
    uVar16 = (long)pppppplVar11 * 2;
    if (uVar16 < param_4 || uVar16 - param_4 == 0) {
      uVar16 = param_4;
    }
    if ((long ******)0x3ffffffffffffffe < pppppplVar11) {
      uVar16 = 0x7fffffffffffffff;
    }
    FUN_109246380(param_1,uVar16);
    ppppppplVar9 = (long *******)param_1[1];
    for (; param_2 != param_3; param_2 = (long *******)((long)param_2 + 1)) {
      *(undefined1 *)ppppppplVar9 = *(undefined1 *)param_2;
      ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
    }
    goto LAB_1092a2ed0;
  }
  func_0x000104c591bc();
  pcStack_48 = FUN_1092a2eec;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar9[4] = (long ******)0x32aaaba7;
  ppppppplVar9[1] = (long ******)0x0;
  *ppppppplVar9 = (long ******)0x0;
  ppppppplVar9[3] = (long ******)0x0;
  ppppppplVar9[2] = (long ******)0x0;
  ppppppplVar9[6] = (long ******)0x0;
  ppppppplVar9[5] = (long ******)0x0;
  ppppppplVar9[8] = (long ******)0x0;
  ppppppplVar9[7] = (long ******)0x0;
  ppppppplVar9[10] = (long ******)0x0;
  ppppppplVar9[9] = (long ******)0x0;
  ppppppplVar9[0xb] = (long ******)0x0;
  ppppppplVar9[0xc] = (long ******)0x0;
  plStack_a8 = (long *)0x0;
  ppppppplVar10 = ppppppplVar19;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1092a3ca0(ppppppplVar9 + 0xd,&ppppplStack_c0);
  if ((long ******)plStack_a8 == &ppppplStack_c0) {
    lVar13 = 0x20;
LAB_1092a2f88:
    (**(code **)(*plStack_a8 + lVar13))();
  }
  else if (plStack_a8 != (long *)0x0) {
    lVar13 = 0x28;
    goto LAB_1092a2f88;
  }
  *(char *)(ppppppplVar9 + 0x11) = (char)uVar16;
  if ((int)uVar16 == 2) {
    FUN_1092b1a3c(&ppppplStack_c0,*ppppppplVar12);
    pppppplVar11 = (long ******)0x20;
    __Znwm();
    *pppppplVar11 = (long *****)&PTR_FUN_110ae7d78;
    pppppplVar11[2] = ppppplStack_b8;
    pppppplVar11[1] = ppppplStack_c0;
    pppppplVar11[3] = ppppplStack_b0;
    ppppplStack_c0 = (long *****)0x0;
    ppppplStack_b8 = (long *****)0x0;
    ppppplStack_b0 = (long *****)0x0;
    pppppplVar14 = *ppppppplVar9;
    *ppppppplVar9 = pppppplVar11;
    if ((pppppplVar14 != (long ******)0x0) &&
       ((*(code *)(*pppppplVar14)[3])(pppppplVar14), ppppplStack_c0 != (long *****)0x0)) {
      ppppplStack_b8 = ppppplStack_c0;
      __ZdlPv();
    }
  }
  else {
    pppppplVar11 = (long ******)0x18;
    __Znwm();
    pppppplVar14 = *ppppppplVar12;
    *ppppppplVar12 = (long ******)0x0;
    *pppppplVar11 = (long *****)&PTR_FUN_110ae7e60;
    pppppplVar11[1] = (long *****)pppppplVar14;
    *(bool *)(pppppplVar11 + 2) = (int)uVar16 == 0;
    pppppplVar14 = *ppppppplVar9;
    *ppppppplVar9 = pppppplVar11;
    if (pppppplVar14 != (long ******)0x0) {
      (*(code *)(*pppppplVar14)[3])(pppppplVar14);
    }
  }
  ppppppplVar20 = ppppppplVar9;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return ppppppplVar9;
  }
  ___stack_chk_fail();
  if (ppppplStack_c0 != (long *****)0x0) {
    ppppplStack_b8 = ppppplStack_c0;
    __ZdlPv();
  }
  FUN_1092a3d04(ppppppplVar9 + 0xc);
  __ZNSt3__15mutexD1Ev(ppppppplVar9 + 4);
  if (ppppppplVar9[1] != (long ******)0x0) {
    ppppppplVar9[2] = ppppppplVar9[1];
    __ZdlPv();
  }
  pppppplVar11 = *ppppppplVar9;
  *ppppppplVar9 = (long ******)0x0;
  if (pppppplVar11 != (long ******)0x0) {
    (*(code *)(*pppppplVar11)[3])();
  }
  ppppppplVar8 = ppppppplVar20;
  __Unwind_Resume();
  pcStack_c8 = FUN_1092a30f8;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = &puStack_50;
  (*(code *)***ppppppplVar8)(auStack_1b8);
  FUN_1092a3618(ppppppplVar8 + 0xc,auStack_1b8);
  FUN_1092a3d04(auStack_1b8);
  pppppplVar11 = ppppppplVar8[0xc];
  FUN_10929fc34();
  ppppppplVar9 = (long *******)0x400;
  FUN_1092a38dc(&ppppppplStack_1d0);
  if ((int)pppppplVar11 == 0) {
    uVar16 = (long)&uStack_1ec + 3;
LAB_1092a31e0:
    do {
      pppppplVar11 = ppppppplVar8[0xc];
      uStack_230 = 0;
      ppppppplVar10 = (long *******)0x0;
      FUN_10929f65c(pppppplVar11,auStack_1b8,0,ppppppplStack_1d0,
                    (long)ppppppplStack_1c8 - (long)ppppppplStack_1d0,0,0,0);
      if ((int)pppppplVar11 != 0) {
        func_0x000105688514(&UNK_10f5631ce);
        goto LAB_1092a3418;
      }
      ppppppplVar9 = ppppppplStack_1d0;
      func_0x000107c31940(&lStack_1e8);
      if ((long)cStack_1d1 < 0) {
        cVar4 = *(char *)(lStack_1e8 + lStack_1e0 + -1);
      }
      else {
        cVar4 = *(char *)(uVar16 + (long)cStack_1d1);
      }
      if ((cVar4 != '/') && (cVar4 != '\\')) {
        pppppplVar11 = ppppppplVar8[0xc];
        if ((pppppplVar11 == (long ******)0x0) || (pppppplVar11[0x12] == (long *****)0x0)) {
          func_0x000105688514(&UNK_10f5631f4);
          goto LAB_1092a3418;
        }
        ppppppplVar12 = (long *******)pppppplVar11[0x10];
        ppppplVar3 = pppppplVar11[0x11];
        func_0x000107c31940(&ppppppplStack_228,ppppppplStack_1d0);
        ppppppplVar9 = ppppppplStack_228;
        if (-1 < (long)ppppplStack_218) {
          ppppppplVar9 = (long *******)&ppppppplStack_228;
        }
        ppppppplVar10 = (long *******)0x2f;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
                  (&ppppppplStack_228);
        ppppplVar6 = ppppplStack_218;
        ppppplVar5 = ppppplStack_220;
        ppppppplVar18 = ppppppplStack_228;
        ppppplStack_208 = ppppplStack_220;
        ppppppplStack_210 = ppppppplStack_228;
        ppppplStack_200 = ppppplStack_218;
        ppppplStack_220 = (long *****)0x0;
        ppppplStack_218 = (long *****)0x0;
        ppppppplStack_228 = (long *******)0x0;
        uStack_1f8 = (undefined4)((ulong)((long)ppppppplVar8[2] - (long)ppppppplVar8[1]) >> 4);
        uStack_1f0 = (undefined4)uStack_180;
        uStack_1f4 = (undefined4)auStack_1b8._48_8_;
        uStack_1ec = 0;
        pppppplVar11 = ppppppplVar19[1];
        if (pppppplVar11 < ppppppplVar19[2]) {
          pppppplVar11[2] = ppppplVar6;
          pppppplVar11[1] = ppppplVar5;
          *pppppplVar11 = (long *****)ppppppplVar18;
          ppppplStack_208 = (long *****)0x0;
          ppppplStack_200 = (long *****)0x0;
          ppppppplStack_210 = (long *******)0x0;
          pppppplVar11[4] = (long *****)(uStack_180 & 0xffffffff);
          pppppplVar11[3] = (long *****)CONCAT44(uStack_1f4,uStack_1f8);
          ppppppplVar19[1] = pppppplVar11 + 5;
        }
        else {
          ppppppplVar9 = (long *******)&ppppppplStack_210;
          ppppppplVar18 = ppppppplVar19;
          FUN_1092a394c();
          ppppppplVar19[1] = (long ******)ppppppplVar18;
          if ((long)ppppplStack_200 < 0) {
            __ZdlPv(ppppppplStack_210);
          }
        }
        if ((long)ppppplStack_218 < 0) {
          __ZdlPv(ppppppplStack_228);
        }
        pppppplVar11 = ppppppplVar8[2];
        if (pppppplVar11 < ppppppplVar8[3]) {
          *pppppplVar11 = ppppplVar3;
          pppppplVar11[1] = (long *****)ppppppplVar12;
          pppppplVar11 = pppppplVar11 + 2;
        }
        else {
          ppppppplVar18 = (long *******)ppppppplVar8[1];
          ppppppplVar20 = (long *******)((long)pppppplVar11 - (long)ppppppplVar18);
          uVar1 = ((long)ppppppplVar20 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_1092a3c8c();
LAB_1092a3418:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1092a341c);
            (*pcVar7)();
          }
          uVar15 = (long)ppppppplVar8[3] - (long)ppppppplVar18;
          uVar17 = (long)uVar15 >> 3;
          if (uVar17 <= uVar1) {
            uVar17 = uVar1;
          }
          if (0x7fffffffffffffef < uVar15) {
            uVar17 = 0xfffffffffffffff;
          }
          if (uVar17 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_1092a3418;
          }
          lVar13 = uVar17 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar13 + (long)ppppppplVar20);
          *puVar2 = ppppplVar3;
          puVar2[1] = ppppppplVar12;
          pppppplVar11 = (long ******)(puVar2 + 2);
          ppppppplVar12 = (long *******)(puVar2 + ((long)ppppppplVar20 >> 4) * -2);
          ppppppplVar9 = ppppppplVar18;
          ppppppplVar10 = ppppppplVar20;
          _memcpy(ppppppplVar12);
          ppppppplVar8[1] = (long ******)ppppppplVar12;
          ppppppplVar8[2] = pppppplVar11;
          ppppppplVar8[3] = (long ******)(lVar13 + uVar17 * 0x10);
          if (ppppppplVar18 != (long *******)0x0) {
            __ZdlPv(ppppppplVar18);
          }
        }
        ppppppplVar8[2] = pppppplVar11;
      }
      pppppplVar11 = ppppppplVar8[0xc];
      func_0x00010929fc9c();
      if (cStack_1d1 < '\0') {
        __ZdlPv(lStack_1e8);
        if ((int)pppppplVar11 != 0) break;
        goto LAB_1092a31e0;
      }
    } while ((int)pppppplVar11 == 0);
  }
  if (*(char *)(ppppppplVar8 + 0x11) != '\x01') {
    ppppppplVar9 = (long *******)0x0;
    FUN_1092a36c4(ppppppplVar8 + 0xc);
  }
  ppppppplVar8 = ppppppplStack_1d0;
  if (ppppppplStack_1d0 != (long *******)0x0) {
    ppppppplStack_1c8 = ppppppplStack_1d0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return ppppppplVar8;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(lStack_1e8);
  }
  if (ppppppplStack_1d0 != (long *******)0x0) {
    ppppppplStack_1c8 = ppppppplStack_1d0;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_238 = FUN_1092a349c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar8[4] = (long ******)0x32aaaba7;
  ppppppplVar8[1] = (long ******)0x0;
  *ppppppplVar8 = (long ******)0x0;
  ppppppplVar8[3] = (long ******)0x0;
  ppppppplVar8[2] = (long ******)0x0;
  ppppppplVar8[6] = (long ******)0x0;
  ppppppplVar8[5] = (long ******)0x0;
  ppppppplVar8[8] = (long ******)0x0;
  ppppppplVar8[7] = (long ******)0x0;
  ppppppplVar8[10] = (long ******)0x0;
  ppppppplVar8[9] = (long ******)0x0;
  ppppppplVar8[0xb] = (long ******)0x0;
  ppppppplVar8[0xc] = (long ******)0x0;
  plStack_280 = (long *)0x0;
  uStack_270 = uVar16;
  ppppppplStack_268 = ppppppplVar12;
  ppppppplStack_260 = ppppppplVar20;
  pppppplStack_258 = pppppplVar11;
  ppppppplStack_250 = ppppppplVar19;
  pppuStack_240 = &ppuStack_d0;
  FUN_1092a3ca0(ppppppplVar8 + 0xd,alStack_298);
  if (plStack_280 == alStack_298) {
    lVar13 = 0x20;
LAB_1092a3530:
    (**(code **)(*plStack_280 + lVar13))();
  }
  else if (plStack_280 != (long *)0x0) {
    lVar13 = 0x28;
    goto LAB_1092a3530;
  }
  *(undefined1 *)(ppppppplVar8 + 0x11) = 2;
  pppppplVar11 = (long ******)0x20;
  __Znwm();
  *pppppplVar11 = (long *****)&PTR_FUN_110ae7d78;
  pppppplVar14 = *ppppppplVar9;
  pppppplVar11[2] = (long *****)ppppppplVar9[1];
  pppppplVar11[1] = (long *****)pppppplVar14;
  pppppplVar11[3] = (long *****)ppppppplVar9[2];
  *ppppppplVar9 = (long ******)0x0;
  ppppppplVar9[1] = (long ******)0x0;
  ppppppplVar9[2] = (long ******)0x0;
  pppppplVar14 = *ppppppplVar8;
  *ppppppplVar8 = pppppplVar11;
  if (pppppplVar14 != (long ******)0x0) {
    (*(code *)(*pppppplVar14)[3])(pppppplVar14);
  }
  ppppppplVar20 = ppppppplVar8;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return ppppppplVar8;
  }
  ___stack_chk_fail();
  FUN_1092a3d04(ppppppplVar8 + 0xc);
  __ZNSt3__15mutexD1Ev(ppppppplVar8 + 4);
  if (ppppppplVar8[1] != (long ******)0x0) {
    ppppppplVar8[2] = ppppppplVar8[1];
    __ZdlPv();
  }
  pppppplVar11 = *ppppppplVar8;
  *ppppppplVar8 = (long ******)0x0;
  if (pppppplVar11 != (long ******)0x0) {
    (*(code *)(*pppppplVar11)[3])();
  }
  __Unwind_Resume();
  *ppppppplVar10 = (long ******)0x0;
  FUN_1092a36c4();
  ppppppplVar12 = ppppppplVar20 + 1;
  ppppppplVar9 = (long *******)ppppppplVar20[4];
  ppppppplVar20[4] = (long ******)0x0;
  if (ppppppplVar9 == ppppppplVar12) {
    lVar13 = 0x20;
  }
  else {
    if (ppppppplVar9 == (long *******)0x0) goto LAB_1092a3670;
    lVar13 = 0x28;
  }
  (**(code **)((long)*ppppppplVar9 + lVar13))();
LAB_1092a3670:
  ppppppplVar9 = (long *******)ppppppplVar10[4];
  if (ppppppplVar9 == (long *******)0x0) {
    ppppppplVar20[4] = (long ******)0x0;
  }
  else if (ppppppplVar9 == ppppppplVar10 + 1) {
    ppppppplVar20[4] = (long ******)ppppppplVar12;
    (*(code *)(*ppppppplVar10[4])[3])(ppppppplVar10[4],ppppppplVar12);
  }
  else {
    ppppppplVar20[4] = (long ******)ppppppplVar9;
    ppppppplVar10[4] = (long ******)0x0;
  }
  return ppppppplVar20;
}



/* Entry: 1092a2eec; end: 1092a30f7;  */

long ***** FUN_1092a2eec(long *****param_1,long ****param_2,long *****param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  long **pplVar4;
  long **pplVar5;
  code *pcVar6;
  long ****pppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long lVar11;
  long ****pppplVar12;
  ulong uVar13;
  long ***ppplVar14;
  ulong uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  long alStack_258 [3];
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  long ***ppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  long ****pppplStack_210;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long ****pppplStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  long ****pppplStack_1d0;
  long **pplStack_1c8;
  long **pplStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  char cStack_191;
  long ****pppplStack_190;
  long ****pppplStack_188;
  undefined1 auStack_178 [56];
  ulong uStack_140;
  long lStack_f0;
  undefined1 *puStack_90;
  code *pcStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[4] = (long ****)0x32aaaba7;
  param_1[1] = (long ****)0x0;
  *param_1 = (long ****)0x0;
  param_1[3] = (long ****)0x0;
  param_1[2] = (long ****)0x0;
  param_1[6] = (long ****)0x0;
  param_1[5] = (long ****)0x0;
  param_1[8] = (long ****)0x0;
  param_1[7] = (long ****)0x0;
  param_1[10] = (long ****)0x0;
  param_1[9] = (long ****)0x0;
  param_1[0xb] = (long ****)0x0;
  param_1[0xc] = (long ****)0x0;
  plStack_68 = (long *)0x0;
  ppppplVar10 = param_3;
  FUN_1092a3ca0(param_1 + 0xd,&pplStack_80);
  if ((long ***)plStack_68 == &pplStack_80) {
    lVar11 = 0x20;
LAB_1092a2f88:
    (**(code **)(*plStack_68 + lVar11))();
  }
  else if (plStack_68 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_1092a2f88;
  }
  *(char *)(param_1 + 0x11) = (char)param_4;
  if ((int)param_4 == 2) {
    FUN_1092b1a3c(&pplStack_80,*param_2);
    pppplVar7 = (long ****)0x20;
    __Znwm();
    *pppplVar7 = (long ***)&PTR_FUN_110ae7d78;
    pppplVar7[2] = (long ***)pplStack_78;
    pppplVar7[1] = (long ***)pplStack_80;
    pppplVar7[3] = (long ***)pplStack_70;
    pplStack_80 = (long **)0x0;
    pplStack_78 = (long **)0x0;
    pplStack_70 = (long **)0x0;
    pppplVar12 = *param_1;
    *param_1 = pppplVar7;
    if ((pppplVar12 != (long ****)0x0) &&
       ((*(code *)(*pppplVar12)[3])(pppplVar12), (long ***)pplStack_80 != (long ***)0x0)) {
      pplStack_78 = pplStack_80;
      __ZdlPv();
    }
  }
  else {
    pppplVar7 = (long ****)0x18;
    __Znwm();
    ppplVar14 = *param_2;
    *param_2 = (long ***)0x0;
    *pppplVar7 = (long ***)&PTR_FUN_110ae7e60;
    pppplVar7[1] = ppplVar14;
    *(bool *)(pppplVar7 + 2) = (int)param_4 == 0;
    pppplVar12 = *param_1;
    *param_1 = pppplVar7;
    if (pppplVar12 != (long ****)0x0) {
      (*(code *)(*pppplVar12)[3])(pppplVar12);
    }
  }
  ppppplVar17 = param_1;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((long ***)pplStack_80 != (long ***)0x0) {
    pplStack_78 = pplStack_80;
    __ZdlPv();
  }
  FUN_1092a3d04(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[1] != (long ****)0x0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  pppplVar7 = *param_1;
  *param_1 = (long ****)0x0;
  if (pppplVar7 != (long ****)0x0) {
    (*(code *)(*pppplVar7)[3])();
  }
  ppppplVar8 = ppppplVar17;
  __Unwind_Resume();
  pcStack_88 = FUN_1092a30f8;
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  (*(code *)***ppppplVar8)(auStack_178);
  FUN_1092a3618(ppppplVar8 + 0xc,auStack_178);
  FUN_1092a3d04(auStack_178);
  pppplVar7 = ppppplVar8[0xc];
  FUN_10929fc34();
  ppppplVar9 = (long *****)0x400;
  FUN_1092a38dc(&pppplStack_190);
  if ((int)pppplVar7 == 0) {
    param_4 = (long)&uStack_1ac + 3;
LAB_1092a31e0:
    do {
      pppplVar7 = ppppplVar8[0xc];
      uStack_1f0 = 0;
      ppppplVar10 = (long *****)0x0;
      FUN_10929f65c(pppplVar7,auStack_178,0,pppplStack_190,
                    (long)pppplStack_188 - (long)pppplStack_190,0,0,0);
      if ((int)pppplVar7 != 0) {
        func_0x000105688514(&UNK_10f5631ce);
        goto LAB_1092a3418;
      }
      ppppplVar9 = (long *****)pppplStack_190;
      func_0x000107c31940(&lStack_1a8);
      if ((long)cStack_191 < 0) {
        cVar3 = *(char *)(lStack_1a8 + lStack_1a0 + -1);
      }
      else {
        cVar3 = *(char *)(param_4 + cStack_191);
      }
      if ((cVar3 != '/') && (cVar3 != '\\')) {
        pppplVar7 = ppppplVar8[0xc];
        if ((pppplVar7 == (long ****)0x0) || (pppplVar7[0x12] == (long ***)0x0)) {
          func_0x000105688514(&UNK_10f5631f4);
          goto LAB_1092a3418;
        }
        param_2 = (long ****)pppplVar7[0x10];
        ppplVar14 = pppplVar7[0x11];
        func_0x000107c31940(&pppplStack_1e8,pppplStack_190);
        ppppplVar9 = (long *****)pppplStack_1e8;
        if (-1 < (long)pplStack_1d8) {
          ppppplVar9 = &pppplStack_1e8;
        }
        ppppplVar10 = (long *****)0x2f;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
                  (&pppplStack_1e8);
        pplVar5 = pplStack_1d8;
        pplVar4 = pplStack_1e0;
        pppplVar12 = pppplStack_1e8;
        pplStack_1c8 = pplStack_1e0;
        pppplStack_1d0 = pppplStack_1e8;
        pplStack_1c0 = pplStack_1d8;
        pplStack_1e0 = (long **)0x0;
        pplStack_1d8 = (long **)0x0;
        pppplStack_1e8 = (long ****)0x0;
        uStack_1b8 = (undefined4)((ulong)((long)ppppplVar8[2] - (long)ppppplVar8[1]) >> 4);
        uStack_1b0 = (undefined4)uStack_140;
        uStack_1b4 = (undefined4)auStack_178._48_8_;
        uStack_1ac = 0;
        pppplVar7 = param_3[1];
        if (pppplVar7 < param_3[2]) {
          pppplVar7[2] = (long ***)pplVar5;
          pppplVar7[1] = (long ***)pplVar4;
          *pppplVar7 = (long ***)pppplVar12;
          pplStack_1c8 = (long **)0x0;
          pplStack_1c0 = (long **)0x0;
          pppplStack_1d0 = (long ****)0x0;
          pppplVar7[4] = (long ***)(uStack_140 & 0xffffffff);
          pppplVar7[3] = (long ***)CONCAT44(uStack_1b4,uStack_1b8);
          param_3[1] = pppplVar7 + 5;
        }
        else {
          ppppplVar9 = &pppplStack_1d0;
          ppppplVar16 = param_3;
          FUN_1092a394c();
          param_3[1] = (long ****)ppppplVar16;
          if ((long)pplStack_1c0 < 0) {
            __ZdlPv(pppplStack_1d0);
          }
        }
        if ((long)pplStack_1d8 < 0) {
          __ZdlPv(pppplStack_1e8);
        }
        pppplVar7 = ppppplVar8[2];
        if (pppplVar7 < ppppplVar8[3]) {
          *pppplVar7 = ppplVar14;
          pppplVar7[1] = (long ***)param_2;
          pppplVar7 = pppplVar7 + 2;
        }
        else {
          ppppplVar16 = (long *****)ppppplVar8[1];
          ppppplVar17 = (long *****)((long)pppplVar7 - (long)ppppplVar16);
          uVar1 = ((long)ppppplVar17 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_1092a3c8c();
LAB_1092a3418:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1092a341c);
            (*pcVar6)();
          }
          uVar13 = (long)ppppplVar8[3] - (long)ppppplVar16;
          uVar15 = (long)uVar13 >> 3;
          if (uVar15 <= uVar1) {
            uVar15 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar15 = 0xfffffffffffffff;
          }
          if (uVar15 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_1092a3418;
          }
          lVar11 = uVar15 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar11 + (long)ppppplVar17);
          *puVar2 = ppplVar14;
          puVar2[1] = param_2;
          pppplVar7 = (long ****)(puVar2 + 2);
          param_2 = (long ****)(puVar2 + ((long)ppppplVar17 >> 4) * -2);
          ppppplVar9 = ppppplVar16;
          ppppplVar10 = ppppplVar17;
          _memcpy(param_2);
          ppppplVar8[1] = param_2;
          ppppplVar8[2] = pppplVar7;
          ppppplVar8[3] = (long ****)(lVar11 + uVar15 * 0x10);
          if (ppppplVar16 != (long *****)0x0) {
            __ZdlPv(ppppplVar16);
          }
        }
        ppppplVar8[2] = pppplVar7;
      }
      pppplVar7 = ppppplVar8[0xc];
      func_0x00010929fc9c();
      if (cStack_191 < '\0') {
        __ZdlPv(lStack_1a8);
        if ((int)pppplVar7 != 0) break;
        goto LAB_1092a31e0;
      }
    } while ((int)pppplVar7 == 0);
  }
  if (*(char *)(ppppplVar8 + 0x11) != '\x01') {
    ppppplVar9 = (long *****)0x0;
    FUN_1092a36c4(ppppplVar8 + 0xc);
  }
  ppppplVar8 = (long *****)pppplStack_190;
  if ((long *****)pppplStack_190 != (long *****)0x0) {
    pppplStack_188 = pppplStack_190;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return ppppplVar8;
  }
  ___stack_chk_fail();
  if (cStack_191 < '\0') {
    __ZdlPv(lStack_1a8);
  }
  if ((long *****)pppplStack_190 != (long *****)0x0) {
    pppplStack_188 = pppplStack_190;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_1f8 = FUN_1092a349c;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8[4] = (long ****)0x32aaaba7;
  ppppplVar8[1] = (long ****)0x0;
  *ppppplVar8 = (long ****)0x0;
  ppppplVar8[3] = (long ****)0x0;
  ppppplVar8[2] = (long ****)0x0;
  ppppplVar8[6] = (long ****)0x0;
  ppppplVar8[5] = (long ****)0x0;
  ppppplVar8[8] = (long ****)0x0;
  ppppplVar8[7] = (long ****)0x0;
  ppppplVar8[10] = (long ****)0x0;
  ppppplVar8[9] = (long ****)0x0;
  ppppplVar8[0xb] = (long ****)0x0;
  ppppplVar8[0xc] = (long ****)0x0;
  plStack_240 = (long *)0x0;
  lStack_230 = param_4;
  ppplStack_228 = (long ***)param_2;
  pppplStack_220 = (long ****)ppppplVar17;
  ppplStack_218 = (long ***)pppplVar7;
  pppplStack_210 = (long ****)param_3;
  ppuStack_200 = &puStack_90;
  FUN_1092a3ca0(ppppplVar8 + 0xd,alStack_258);
  if (plStack_240 == alStack_258) {
    lVar11 = 0x20;
LAB_1092a3530:
    (**(code **)(*plStack_240 + lVar11))();
  }
  else if (plStack_240 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_1092a3530;
  }
  *(undefined1 *)(ppppplVar8 + 0x11) = 2;
  pppplVar7 = (long ****)0x20;
  __Znwm();
  *pppplVar7 = (long ***)&PTR_FUN_110ae7d78;
  pppplVar12 = *ppppplVar9;
  pppplVar7[2] = (long ***)ppppplVar9[1];
  pppplVar7[1] = (long ***)pppplVar12;
  pppplVar7[3] = (long ***)ppppplVar9[2];
  *ppppplVar9 = (long ****)0x0;
  ppppplVar9[1] = (long ****)0x0;
  ppppplVar9[2] = (long ****)0x0;
  pppplVar12 = *ppppplVar8;
  *ppppplVar8 = pppplVar7;
  if (pppplVar12 != (long ****)0x0) {
    (*(code *)(*pppplVar12)[3])(pppplVar12);
  }
  ppppplVar17 = ppppplVar8;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return ppppplVar8;
  }
  ___stack_chk_fail();
  FUN_1092a3d04(ppppplVar8 + 0xc);
  __ZNSt3__15mutexD1Ev(ppppplVar8 + 4);
  if (ppppplVar8[1] != (long ****)0x0) {
    ppppplVar8[2] = ppppplVar8[1];
    __ZdlPv();
  }
  pppplVar7 = *ppppplVar8;
  *ppppplVar8 = (long ****)0x0;
  if (pppplVar7 != (long ****)0x0) {
    (*(code *)(*pppplVar7)[3])();
  }
  __Unwind_Resume();
  *ppppplVar10 = (long ****)0x0;
  FUN_1092a36c4();
  ppppplVar9 = ppppplVar17 + 1;
  ppppplVar8 = (long *****)ppppplVar17[4];
  ppppplVar17[4] = (long ****)0x0;
  if (ppppplVar8 == ppppplVar9) {
    lVar11 = 0x20;
  }
  else {
    if (ppppplVar8 == (long *****)0x0) goto LAB_1092a3670;
    lVar11 = 0x28;
  }
  (**(code **)((long)*ppppplVar8 + lVar11))();
LAB_1092a3670:
  ppppplVar8 = (long *****)ppppplVar10[4];
  if (ppppplVar8 == (long *****)0x0) {
    ppppplVar17[4] = (long ****)0x0;
  }
  else if (ppppplVar8 == ppppplVar10 + 1) {
    ppppplVar17[4] = (long ****)ppppplVar9;
    (*(code *)(*ppppplVar10[4])[3])(ppppplVar10[4],ppppplVar9);
  }
  else {
    ppppplVar17[4] = (long ****)ppppplVar8;
    ppppplVar10[4] = (long ****)0x0;
  }
  return ppppplVar17;
}



/* Entry: 1092a30f8; end: 1092a349b;  */

long ***** FUN_1092a30f8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  ulong uVar10;
  long lVar11;
  long ****pppplVar12;
  ulong uVar13;
  long *****ppppplVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar15;
  long alStack_1d8 [3];
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long ****pppplStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long ****pppplStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  char cStack_111;
  long ****pppplStack_110;
  long ****pppplStack_108;
  undefined1 auStack_f8 [56];
  ulong uStack_c0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)**(undefined8 **)*param_1)(auStack_f8);
  FUN_1092a3618(param_1 + 0xc,auStack_f8);
  FUN_1092a3d04(auStack_f8);
  uVar6 = param_1[0xc];
  FUN_10929fc34();
  ppppplVar9 = (long *****)0x400;
  FUN_1092a38dc(&pppplStack_110);
  if ((int)uVar6 == 0) {
    unaff_x24 = (long)&uStack_12c + 3;
LAB_1092a31e0:
    do {
      uVar6 = param_1[0xc];
      uStack_170 = 0;
      param_3 = (undefined8 *)0x0;
      FUN_10929f65c(uVar6,auStack_f8,0,pppplStack_110,(long)pppplStack_108 - (long)pppplStack_110,0,
                    0,0);
      if ((int)uVar6 != 0) {
        func_0x000105688514(&UNK_10f5631ce);
        goto LAB_1092a3418;
      }
      ppppplVar9 = (long *****)pppplStack_110;
      func_0x000107c31940(&lStack_128);
      if ((long)cStack_111 < 0) {
        cVar3 = *(char *)(lStack_128 + lStack_120 + -1);
      }
      else {
        cVar3 = *(char *)(unaff_x24 + cStack_111);
      }
      if ((cVar3 != '/') && (cVar3 != '\\')) {
        lVar11 = param_1[0xc];
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x90) == 0)) {
          func_0x000105688514(&UNK_10f5631f4);
          goto LAB_1092a3418;
        }
        unaff_x23 = *(undefined8 **)(lVar11 + 0x80);
        uVar6 = *(undefined8 *)(lVar11 + 0x88);
        func_0x000107c31940(&pppplStack_168,pppplStack_110);
        ppppplVar9 = (long *****)pppplStack_168;
        if (-1 < lStack_158) {
          ppppplVar9 = &pppplStack_168;
        }
        param_3 = (undefined8 *)0x2f;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
                  (&pppplStack_168);
        lVar11 = lStack_158;
        uVar4 = uStack_160;
        pppplVar7 = pppplStack_168;
        uStack_148 = uStack_160;
        pppplStack_150 = pppplStack_168;
        lStack_140 = lStack_158;
        uStack_160 = 0;
        lStack_158 = 0;
        pppplStack_168 = (long ****)0x0;
        uStack_138 = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 4);
        uStack_130 = (undefined4)uStack_c0;
        uStack_134 = (undefined4)auStack_f8._48_8_;
        uStack_12c = 0;
        puVar15 = *(undefined8 **)(param_2 + 8);
        if (puVar15 < *(undefined8 **)(param_2 + 0x10)) {
          puVar15[2] = lVar11;
          puVar15[1] = uVar4;
          *puVar15 = pppplVar7;
          uStack_148 = 0;
          lStack_140 = 0;
          pppplStack_150 = (long ****)0x0;
          puVar15[4] = uStack_c0 & 0xffffffff;
          puVar15[3] = CONCAT44(uStack_134,uStack_138);
          *(undefined8 **)(param_2 + 8) = puVar15 + 5;
        }
        else {
          ppppplVar9 = &pppplStack_150;
          lVar11 = param_2;
          FUN_1092a394c();
          *(long *)(param_2 + 8) = lVar11;
          if (lStack_140 < 0) {
            __ZdlPv(pppplStack_150);
          }
        }
        if (lStack_158 < 0) {
          __ZdlPv(pppplStack_168);
        }
        puVar15 = (undefined8 *)param_1[2];
        if (puVar15 < (undefined8 *)param_1[3]) {
          *puVar15 = uVar6;
          puVar15[1] = unaff_x23;
          puVar15 = puVar15 + 2;
        }
        else {
          ppppplVar14 = (long *****)param_1[1];
          unaff_x22 = (undefined8 *)((long)puVar15 - (long)ppppplVar14);
          uVar1 = ((long)unaff_x22 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_1092a3c8c();
LAB_1092a3418:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1092a341c);
            (*pcVar5)();
          }
          uVar10 = (long)param_1[3] - (long)ppppplVar14;
          uVar13 = (long)uVar10 >> 3;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar13 = 0xfffffffffffffff;
          }
          if (uVar13 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_1092a3418;
          }
          lVar11 = uVar13 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar11 + (long)unaff_x22);
          *puVar2 = uVar6;
          puVar2[1] = unaff_x23;
          puVar15 = puVar2 + 2;
          unaff_x23 = puVar2 + ((long)unaff_x22 >> 4) * -2;
          ppppplVar9 = ppppplVar14;
          param_3 = unaff_x22;
          _memcpy(unaff_x23);
          param_1[1] = unaff_x23;
          param_1[2] = puVar15;
          param_1[3] = lVar11 + uVar13 * 0x10;
          if (ppppplVar14 != (long *****)0x0) {
            __ZdlPv(ppppplVar14);
          }
        }
        param_1[2] = puVar15;
      }
      uVar6 = param_1[0xc];
      func_0x00010929fc9c();
      if (cStack_111 < '\0') {
        __ZdlPv(lStack_128);
        if ((int)uVar6 != 0) break;
        goto LAB_1092a31e0;
      }
    } while ((int)uVar6 == 0);
  }
  if (*(char *)(param_1 + 0x11) != '\x01') {
    ppppplVar9 = (long *****)0x0;
    FUN_1092a36c4(param_1 + 0xc);
  }
  ppppplVar14 = (long *****)pppplStack_110;
  if ((long *****)pppplStack_110 != (long *****)0x0) {
    pppplStack_108 = pppplStack_110;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppplVar14;
  }
  ___stack_chk_fail();
  if (cStack_111 < '\0') {
    __ZdlPv(lStack_128);
  }
  if ((long *****)pppplStack_110 != (long *****)0x0) {
    pppplStack_108 = pppplStack_110;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_178 = FUN_1092a349c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar14[4] = (long ****)0x32aaaba7;
  ppppplVar14[1] = (long ****)0x0;
  *ppppplVar14 = (long ****)0x0;
  ppppplVar14[3] = (long ****)0x0;
  ppppplVar14[2] = (long ****)0x0;
  ppppplVar14[6] = (long ****)0x0;
  ppppplVar14[5] = (long ****)0x0;
  ppppplVar14[8] = (long ****)0x0;
  ppppplVar14[7] = (long ****)0x0;
  ppppplVar14[10] = (long ****)0x0;
  ppppplVar14[9] = (long ****)0x0;
  ppppplVar14[0xb] = (long ****)0x0;
  ppppplVar14[0xc] = (long ****)0x0;
  plStack_1c0 = (long *)0x0;
  lStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  puStack_1a0 = unaff_x22;
  uStack_198 = uVar6;
  lStack_190 = param_2;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_1092a3ca0(ppppplVar14 + 0xd,alStack_1d8);
  if (plStack_1c0 == alStack_1d8) {
    lVar11 = 0x20;
LAB_1092a3530:
    (**(code **)(*plStack_1c0 + lVar11))();
  }
  else if (plStack_1c0 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_1092a3530;
  }
  *(undefined1 *)(ppppplVar14 + 0x11) = 2;
  pppplVar7 = (long ****)0x20;
  __Znwm();
  *pppplVar7 = (long ***)&PTR_FUN_110ae7d78;
  pppplVar12 = *ppppplVar9;
  pppplVar7[2] = (long ***)ppppplVar9[1];
  pppplVar7[1] = (long ***)pppplVar12;
  pppplVar7[3] = (long ***)ppppplVar9[2];
  *ppppplVar9 = (long ****)0x0;
  ppppplVar9[1] = (long ****)0x0;
  ppppplVar9[2] = (long ****)0x0;
  pppplVar12 = *ppppplVar14;
  *ppppplVar14 = pppplVar7;
  if (pppplVar12 != (long ****)0x0) {
    (*(code *)(*pppplVar12)[3])(pppplVar12);
  }
  ppppplVar9 = ppppplVar14;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppppplVar14;
  }
  ___stack_chk_fail();
  FUN_1092a3d04(ppppplVar14 + 0xc);
  __ZNSt3__15mutexD1Ev(ppppplVar14 + 4);
  if (ppppplVar14[1] != (long ****)0x0) {
    ppppplVar14[2] = ppppplVar14[1];
    __ZdlPv();
  }
  pppplVar7 = *ppppplVar14;
  *ppppplVar14 = (long ****)0x0;
  if (pppplVar7 != (long ****)0x0) {
    (*(code *)(*pppplVar7)[3])();
  }
  __Unwind_Resume();
  *param_3 = 0;
  FUN_1092a36c4();
  ppppplVar14 = ppppplVar9 + 1;
  ppppplVar8 = (long *****)ppppplVar9[4];
  ppppplVar9[4] = (long ****)0x0;
  if (ppppplVar8 == ppppplVar14) {
    lVar11 = 0x20;
  }
  else {
    if (ppppplVar8 == (long *****)0x0) goto LAB_1092a3670;
    lVar11 = 0x28;
  }
  (**(code **)((long)*ppppplVar8 + lVar11))();
LAB_1092a3670:
  pppplVar7 = (long ****)param_3[4];
  if (pppplVar7 == (long ****)0x0) {
    ppppplVar9[4] = (long ****)0x0;
  }
  else if (pppplVar7 == (long ****)(param_3 + 1)) {
    ppppplVar9[4] = (long ****)ppppplVar14;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],ppppplVar14);
  }
  else {
    ppppplVar9[4] = pppplVar7;
    param_3[4] = 0;
  }
  return ppppplVar9;
}



/* Entry: 1092a349c; end: 1092a3617;  */

long * FUN_1092a349c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[4] = 0x32aaaba7;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  plStack_50 = (long *)0x0;
  FUN_1092a3ca0(param_1 + 0xd,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar4 = 0x20;
LAB_1092a3530:
    (**(code **)(*plStack_50 + lVar4))();
  }
  else if (plStack_50 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_1092a3530;
  }
  *(undefined1 *)(param_1 + 0x11) = 2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110ae7d78;
  uVar6 = *param_2;
  puVar1[2] = param_2[1];
  puVar1[1] = uVar6;
  puVar1[3] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar5 = (long *)*param_1;
  *param_1 = (long)puVar1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar5 = param_1;
  FUN_1092a30f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1092a3d04(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  __Unwind_Resume();
  *param_3 = 0;
  FUN_1092a36c4();
  plVar2 = plVar5 + 1;
  plVar3 = (long *)plVar5[4];
  plVar5[4] = 0;
  if (plVar3 == plVar2) {
    lVar4 = 0x20;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_1092a3670;
    lVar4 = 0x28;
  }
  (**(code **)(*plVar3 + lVar4))();
LAB_1092a3670:
  puVar1 = (undefined8 *)param_3[4];
  if (puVar1 == (undefined8 *)0x0) {
    plVar5[4] = 0;
  }
  else if (puVar1 == param_3 + 1) {
    plVar5[4] = (long)plVar2;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],plVar2);
  }
  else {
    plVar5[4] = (long)puVar1;
    param_3[4] = 0;
  }
  return plVar5;
}



/* Entry: 1092a3618; end: 1092a36c3;  */

long FUN_1092a3618(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_2;
  *param_2 = 0;
  FUN_1092a36c4(param_1,uVar3);
  plVar1 = (long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 == plVar1) {
    lVar4 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_1092a3670;
    lVar4 = 0x28;
  }
  (**(code **)(*plVar2 + lVar4))();
LAB_1092a3670:
  puVar5 = (undefined8 *)param_2[4];
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else if (puVar5 == param_2 + 1) {
    *(long **)(param_1 + 0x20) = plVar1;
    (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],plVar1);
  }
  else {
    *(undefined8 **)(param_1 + 0x20) = puVar5;
    param_2[4] = 0;
  }
  return param_1;
}



/* Entry: 1092a36c4; end: 1092a370f;  */

void FUN_1092a36c4(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lStack_18;
  
  lStack_18 = *param_1;
  *param_1 = param_2;
  if (lStack_18 != 0) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a370c);
      (*pcVar1)();
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_18);
  }
  return;
}



/* Entry: 1092a3710; end: 1092a38db;  */

undefined8 * FUN_1092a3710(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_2 + 4);
  if (*(char *)(param_2 + 0x11) != '\x01') {
    (*(code *)**(undefined8 **)*param_2)(&lStack_70);
    FUN_1092a3618(param_2 + 0xc,&lStack_70);
    FUN_1092a3d04(&lStack_70);
  }
  puVar8 = param_2 + 0xc;
  uVar3 = *puVar8;
  puVar4 = (undefined8 *)(param_2[1] + (param_3 & 0xffffffff) * 0x10);
  uStack_78 = puVar4[1];
  uStack_80 = *puVar4;
  func_0x00010929fd4c(uVar3,&uStack_80);
  if ((int)uVar3 == 0) {
    uVar3 = *puVar8;
    FUN_10929fdbc(uVar3,0,0,0,0);
    if ((int)uVar3 == 0) {
      FUN_109246310(&lStack_70,param_4 & 0xffffffff);
      uVar3 = *puVar8;
      lVar7 = lStack_70;
      FUN_1092a0214(uVar3,lStack_70,param_4);
      if ((int)uVar3 == (int)param_4) {
        iVar2 = (int)*puVar8;
        FUN_10929f5c8();
        if (iVar2 == 0) {
          if (*(char *)(param_2 + 0x11) != '\x01') {
            lVar7 = 0;
            FUN_1092a36c4(puVar8);
          }
          puVar4 = (undefined8 *)0x30;
          __Znwm();
          *puVar4 = &PTR_FUN_110ae9550;
          puVar4[2] = uStack_68;
          puVar4[1] = lStack_70;
          puVar4[3] = uStack_60;
          puVar4[5] = 0;
          *(undefined1 *)(puVar4 + 4) = 1;
          *param_1 = puVar4;
          puVar4 = param_2 + 4;
          __ZNSt3__15mutex6unlockEv();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return puVar4;
          }
          ___stack_chk_fail();
          __ZNSt3__15mutex6unlockEv(param_2 + 4);
          __Unwind_Resume();
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          if (lVar7 != 0) {
            FUN_109274904(puVar4);
            lVar6 = puVar4[1];
            _bzero(lVar6,lVar7);
            puVar4[1] = lVar6 + lVar7;
          }
          return puVar4;
        }
        puVar5 = &UNK_10f563239;
      }
      else {
        puVar5 = &UNK_10f563223;
      }
      func_0x000105688514(puVar5);
      goto LAB_1092a389c;
    }
  }
  func_0x000105688514(&UNK_10f56320c);
LAB_1092a389c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092a38a0);
  (*pcVar1)();
}



/* Entry: 1092a38dc; end: 1092a394b;  */

undefined8 * FUN_1092a38dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109274904(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1092a394c; end: 1092a3a7b;  */

/* WARNING: Possible PIC construction at 0x0001092a3a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092a3a2c) */

void FUN_1092a394c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (uVar6 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092a3a90();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar8);
    plStack_40 = plVar2 + uVar7 * 5;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar10 = param_2[3];
    puStack_50[4] = param_2[4];
    puStack_50[3] = uVar10;
    unaff_x20 = puStack_50 + 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x1092a3a2c;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_1092a3a7c();
    func_0x0001092a3c04(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_1092a3a7c;
    plVar3 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_1092a3a90;
    ppuVar9 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar10 = 0x1092a3ad4;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar1 + -8) = uVar10;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar4 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      param_4[2] = puVar4[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar10 = puVar4[3];
      param_4[4] = puVar4[4];
      param_4[3] = uVar10;
      puVar4 = puVar4 + 5;
      param_4 = param_4 + 5;
    } while (puVar4 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_1092a3b8c(puVar1 + -0x50);
  return;
}



/* Entry: 1092a3a7c; end: 1092a3a8f;  */

void FUN_1092a3a7c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        puStack_58[4] = puVar2[4];
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_1092a3b8c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1092a3a90; end: 1092a3b8b;  */

void FUN_1092a3a90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        puStack_48[4] = puVar1[4];
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_1092a3b8c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1092a3b8c; end: 1092a3bbf;  */

long FUN_1092a3b8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1092a3bc0(param_1);
  }
  return param_1;
}



/* Entry: 1092a3bc0; end: 1092a3c8b;  */

/* WARNING: Removing unreachable block (ram,0x0001092a3bec) */

void FUN_1092a3bc0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 1092a3c8c; end: 1092a3c9f;  */

undefined * FUN_1092a3c8c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar2 = (long *)(param_2 + 0x18);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    plVar2 = (long *)(puVar1 + 0x18);
  }
  else {
    if (lVar3 == param_2) {
      *(undefined **)(puVar1 + 0x18) = puVar1;
      (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,puVar1);
      return puVar1;
    }
    *(long *)(puVar1 + 0x18) = lVar3;
  }
  *plVar2 = 0;
  return puVar1;
}



/* Entry: 1092a3ca0; end: 1092a3d03;  */

long FUN_1092a3ca0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 1092a3d04; end: 1092a3d57;  */

long FUN_1092a3d04(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1092a36c4(param_1,0);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)(param_1 + 8)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1092a3d58; end: 1092a3e33;  */

undefined *** FUN_1092a3d58(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined **appuStack_258 [2];
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined1 auStack_238 [56];
  undefined8 uStack_200;
  char cStack_1e9;
  undefined **appuStack_1d8 [19];
  undefined1 uStack_139;
  undefined1 auStack_138 [64];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte abStack_c8 [32];
  long lStack_a8;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 8);
  FUN_1092a04a8(lVar9,*(long *)(param_2 + 0x10) - lVar9);
  appuStack_48[0] = &PTR_FUN_110ae7dd0;
  *param_1 = lVar9;
  pppuStack_30 = appuStack_48;
  FUN_1092a3ca0(param_1 + 1,appuStack_48);
  pppuVar5 = pppuStack_30;
  if (pppuStack_30 == appuStack_48) {
    lVar9 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1092a3ddc;
    lVar9 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar9))();
LAB_1092a3ddc:
  if (*param_1 == 0) {
    func_0x000105688514(&UNK_10f563296);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092a3e1c);
    (*pcVar4)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_1092a3d04(param_1);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0xa54ff53a3c6ef372;
  uStack_e8 = 0xbb67ae856a09e667;
  uStack_d0 = 0x5be0cd191f83d9ab;
  uStack_d8 = 0x9b05688c510e527f;
  FUN_1092c3e44(auStack_138,pppuVar5[1],(long)pppuVar5[2] - (long)pppuVar5[1]);
  FUN_1092c3ecc(auStack_138,abStack_c8);
  FUN_1092a988c(appuStack_258);
  lVar9 = 0;
  do {
    bVar3 = abStack_c8[lVar9];
    *(uint *)((long)&ppuStack_240 + (long)ppuStack_248[-3]) =
         *(uint *)((long)&ppuStack_240 + (long)ppuStack_248[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_248,bVar3 >> 4);
    *(uint *)((long)&ppuStack_240 + (long)ppuStack_248[-3]) =
         *(uint *)((long)&ppuStack_240 + (long)ppuStack_248[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_248,bVar3 & 0xf);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x20);
  FUN_10926dc5c(extraout_x8,&ppuStack_240,&uStack_139);
  appuStack_258[0] = &PTR_SUB_1108a5a38;
  ppuStack_248 = &PTR_DAT_1108a5a60;
  appuStack_1d8[0] = &PTR_DAT_1108a5a88;
  ppuStack_240 = &PTR_DAT_11088d7b0;
  if (cStack_1e9 < '\0') {
    __ZdlPv(uStack_200);
  }
  ppuStack_240 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_238);
  iVar7 = 0x108a5aa0;
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_258);
  pppuVar5 = appuStack_1d8;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(appuStack_258);
  __Unwind_Resume();
  uVar8 = 0x81113ed5;
  *(undefined4 *)pppuVar5 = 0x81113ed5;
  lVar9 = 1;
  do {
    uVar8 = (int)lVar9 + (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965;
    *(uint *)((long)pppuVar5 + lVar9 * 4) = uVar8;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x270);
  pppuVar5[0x138] = (undefined **)0x0;
  *(undefined2 *)(pppuVar5 + 0x139) = 0xff00;
  pppuVar6 = pppuVar5 + 0x139;
  FUN_1092c3ab4(pppuVar6,pppuVar5,pppuVar5 + 0x139);
  *(char *)((long)pppuVar5 + 0x9ca) = (char)pppuVar6;
  pppuVar5[0x13a] = (undefined **)0x1000;
  ppuVar1 = (undefined **)0x1092c3970;
  if (iVar7 != 1) {
    ppuVar1 = (undefined **)0x1092c3a0c;
  }
  ppuVar2 = (undefined **)FUN_1092c3954;
  if (iVar7 != 0) {
    ppuVar2 = ppuVar1;
  }
  pppuVar5[0x13b] = ppuVar2;
  return pppuVar5;
}



/* Entry: 1092a3e34; end: 1092a3e43;  */

undefined *** FUN_1092a3e34(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined **appuStack_208 [2];
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 auStack_1e8 [56];
  undefined8 uStack_1b0;
  char cStack_199;
  undefined **appuStack_188 [19];
  undefined1 uStack_e9;
  undefined1 auStack_e8 [64];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte abStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xa54ff53a3c6ef372;
  uStack_98 = 0xbb67ae856a09e667;
  uStack_80 = 0x5be0cd191f83d9ab;
  uStack_88 = 0x9b05688c510e527f;
  FUN_1092c3e44(auStack_e8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)
               );
  FUN_1092c3ecc(auStack_e8,abStack_78);
  FUN_1092a988c(appuStack_208);
  lVar8 = 0;
  do {
    bVar3 = abStack_78[lVar8];
    *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) =
         *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_1f8,bVar3 >> 4);
    *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) =
         *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_1f8,bVar3 & 0xf);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x20);
  FUN_10926dc5c(param_1,&ppuStack_1f0,&uStack_e9);
  appuStack_208[0] = &PTR_SUB_1108a5a38;
  ppuStack_1f8 = &PTR_DAT_1108a5a60;
  appuStack_188[0] = &PTR_DAT_1108a5a88;
  ppuStack_1f0 = &PTR_DAT_11088d7b0;
  if (cStack_199 < '\0') {
    __ZdlPv(uStack_1b0);
  }
  ppuStack_1f0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1e8);
  iVar6 = 0x108a5aa0;
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_208);
  pppuVar4 = appuStack_188;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(appuStack_208);
  __Unwind_Resume();
  uVar7 = 0x81113ed5;
  *(undefined4 *)pppuVar4 = 0x81113ed5;
  lVar8 = 1;
  do {
    uVar7 = (int)lVar8 + (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965;
    *(uint *)((long)pppuVar4 + lVar8 * 4) = uVar7;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x270);
  pppuVar4[0x138] = (undefined **)0x0;
  *(undefined2 *)(pppuVar4 + 0x139) = 0xff00;
  pppuVar5 = pppuVar4 + 0x139;
  FUN_1092c3ab4(pppuVar5,pppuVar4,pppuVar4 + 0x139);
  *(char *)((long)pppuVar4 + 0x9ca) = (char)pppuVar5;
  pppuVar4[0x13a] = (undefined **)0x1000;
  ppuVar1 = (undefined **)0x1092c3970;
  if (iVar6 != 1) {
    ppuVar1 = (undefined **)0x1092c3a0c;
  }
  ppuVar2 = (undefined **)FUN_1092c3954;
  if (iVar6 != 0) {
    ppuVar2 = ppuVar1;
  }
  pppuVar4[0x13b] = ppuVar2;
  return pppuVar4;
}



/* Entry: 1092a3e44; end: 1092a3ebb;  */

undefined8 * FUN_1092a3e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae7d78;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a3ebc; end: 1092a3ec3;  */

void FUN_1092a3ebc(void)

{
  return;
}



/* Entry: 1092a3ec4; end: 1092a3ee7;  */

void FUN_1092a3ec4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110ae7dd0;
  return;
}



/* Entry: 1092a3ee8; end: 1092a3eff;  */

void FUN_1092a3ee8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110ae7dd0;
  return;
}



/* Entry: 1092a3f00; end: 1092a3f27;  */

undefined * FUN_1092a3f00(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  FUN_10929f574();
  if ((int)puVar1 == 0) {
    return puVar1;
  }
  puVar1 = &UNK_10f5632bc;
  func_0x000105688514(&UNK_10f5632bc);
  func_0x000107c31948(param_2,&PTR_DAT_110ae7e40);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


