/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10457d134; end: 10457e09f;  */

undefined1  [16] FUN_10457d134(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = 0xe000000000000000;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff;
    puVar1 = (undefined8 *)((param_2 & 0xfffffffffffffff) + 0x20);
    _swift_bridgeObjectRetain(param_2);
    lVar15 = 0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          puVar11 = puVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            puVar11 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          uStack_80 = param_1;
          uStack_78 = uVar16;
          puVar11 = &uStack_80;
        }
        pbVar12 = (byte *)((long)puVar11 + lVar15);
        uVar4 = (uint)*pbVar12;
        if ((char)*pbVar12 < '\0') {
          uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
          if (uVar13 < 3) {
            if (uVar13 == 1) goto LAB_10457d1f8;
            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
            puVar11 = (undefined8 *)0x2;
          }
          else if (uVar13 == 3) {
            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
            puVar11 = (undefined8 *)0x3;
          }
          else {
            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc | (pbVar12[2] & 0x3f) << 6 |
                    pbVar12[3] & 0x3f;
            puVar11 = (undefined8 *)0x4;
          }
        }
        else {
LAB_10457d1f8:
          puVar11 = (undefined8 *)0x1;
        }
      }
      else {
        lVar9 = lVar15 << 0x10;
        puVar11 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        uVar4 = (uint)lVar9;
      }
      lVar15 = (long)puVar11 + lVar15;
      if (uVar4 != 0x5c) goto LAB_10457d1a8;
      if ((long)uVar2 <= lVar15) {
LAB_10457e040:
        uVar10 = uStack_68;
        _swift_bridgeObjectRelease(param_2);
LAB_10457e014:
        _swift_bridgeObjectRelease(uVar10);
        uStack_70 = 0;
        uVar10 = 0;
        goto LAB_10457e020;
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          puVar11 = puVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            puVar11 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          uStack_80 = param_1;
          uStack_78 = uVar16;
          puVar11 = &uStack_80;
        }
        pbVar12 = (byte *)((long)puVar11 + lVar15);
        uVar4 = (uint)*pbVar12;
        if ((char)*pbVar12 < '\0') {
          uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
          if (uVar13 < 3) {
            if (uVar13 == 1) goto LAB_10457d280;
            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
            puVar11 = (undefined8 *)0x2;
          }
          else if (uVar13 == 3) {
            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
            puVar11 = (undefined8 *)0x3;
          }
          else {
            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc | (pbVar12[2] & 0x3f) << 6 |
                    pbVar12[3] & 0x3f;
            puVar11 = (undefined8 *)0x4;
          }
        }
        else {
LAB_10457d280:
          puVar11 = (undefined8 *)0x1;
        }
      }
      else {
        lVar9 = lVar15 * 0x10000;
        puVar11 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        uVar4 = (uint)lVar9;
      }
      lVar15 = (long)puVar11 + lVar15;
      if ((int)uVar4 < 0x66) {
        if (((0x3a < uVar4 - 0x22) ||
            ((1L << ((ulong)(uVar4 - 0x22) & 0x3f) & 0x400000000002001U) == 0)) && (uVar4 != 0x62))
        goto LAB_10457e040;
      }
      else if ((int)uVar4 < 0x72) {
        if ((uVar4 != 0x66) && (uVar4 != 0x6e)) goto LAB_10457e040;
      }
      else if ((uVar4 != 0x72) && (uVar4 != 0x74)) {
        if (uVar4 != 0x75) goto LAB_10457e040;
        if (lVar15 < (long)uVar2) {
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              puVar11 = puVar1;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                puVar11 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
              }
            }
            else {
              uStack_80 = param_1;
              uStack_78 = uVar16;
              puVar11 = &uStack_80;
            }
            pbVar12 = (byte *)((long)puVar11 + lVar15);
            uVar4 = (uint)*pbVar12;
            uVar5 = (ulong)uVar4;
            if ((char)*pbVar12 < '\0') {
              uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
              if (uVar13 < 3) {
                if (uVar13 == 1) goto LAB_10457d428;
                uVar5 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                puVar11 = (undefined8 *)0x2;
              }
              else if (uVar13 == 3) {
                uVar5 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f)
                ;
                puVar11 = (undefined8 *)0x3;
              }
              else {
                uVar5 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                puVar11 = (undefined8 *)0x4;
              }
            }
            else {
LAB_10457d428:
              puVar11 = (undefined8 *)0x1;
            }
          }
          else {
            uVar5 = lVar15 * 0x10000;
            puVar11 = param_1;
            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                      (uVar5,param_1,param_2);
          }
          FUN_10457cc98();
          if (((uVar5 & 0xff00000000) != 0x100000000) &&
             (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
            if ((param_2 >> 0x3c & 1) == 0) {
              if ((param_2 >> 0x3d & 1) == 0) {
                puVar11 = puVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  puVar11 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
              }
              else {
                uStack_80 = param_1;
                uStack_78 = uVar16;
                puVar11 = &uStack_80;
              }
              pbVar12 = (byte *)((long)puVar11 + lVar15);
              uVar4 = (uint)*pbVar12;
              uVar6 = (ulong)uVar4;
              if ((char)*pbVar12 < '\0') {
                uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                if (uVar13 < 3) {
                  if (uVar13 == 1) goto LAB_10457d4d0;
                  uVar6 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                  puVar11 = (undefined8 *)0x2;
                }
                else if (uVar13 == 3) {
                  uVar6 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                 pbVar12[2] & 0x3f);
                  puVar11 = (undefined8 *)0x3;
                }
                else {
                  uVar6 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                  puVar11 = (undefined8 *)0x4;
                }
              }
              else {
LAB_10457d4d0:
                puVar11 = (undefined8 *)0x1;
              }
            }
            else {
              uVar6 = lVar15 * 0x10000;
              puVar11 = param_1;
              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                        (uVar6,param_1,param_2);
            }
            FUN_10457cc98();
            if (((uVar6 & 0xff00000000) != 0x100000000) &&
               (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
              if ((param_2 >> 0x3c & 1) != 0) {
                uVar7 = lVar15 * 0x10000;
                puVar11 = param_1;
                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                          (uVar7,param_1,param_2);
                goto LAB_10457d5cc;
              }
              if ((param_2 >> 0x3d & 1) == 0) {
                puVar11 = puVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  puVar11 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
                pbVar12 = (byte *)((long)puVar11 + lVar15);
                uVar4 = (uint)*pbVar12;
                uVar7 = (ulong)uVar4;
                if (-1 < (char)*pbVar12) goto LAB_10457d5c8;
LAB_10457d5b4:
                uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                uVar4 = (uint)uVar7;
                if (uVar13 < 3) {
                  if (uVar13 == 1) goto LAB_10457d5c8;
                  uVar7 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                  puVar11 = (undefined8 *)0x2;
                }
                else if (uVar13 == 3) {
                  uVar7 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                 pbVar12[2] & 0x3f);
                  puVar11 = (undefined8 *)0x3;
                }
                else {
                  uVar7 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                  puVar11 = (undefined8 *)0x4;
                }
              }
              else {
                uStack_80 = param_1;
                uStack_78 = uVar16;
                pbVar12 = (byte *)((long)&uStack_80 + lVar15);
                uVar4 = (uint)*pbVar12;
                uVar7 = (ulong)uVar4;
                if ((char)*pbVar12 < '\0') goto LAB_10457d5b4;
LAB_10457d5c8:
                puVar11 = (undefined8 *)0x1;
              }
LAB_10457d5cc:
              FUN_10457cc98();
              if (((uVar7 & 0xff00000000) != 0x100000000) &&
                 (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
                if ((param_2 >> 0x3c & 1) != 0) {
                  uVar8 = lVar15 * 0x10000;
                  puVar11 = param_1;
                  __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                            (uVar8,param_1,param_2);
                  goto LAB_10457d6b4;
                }
                if ((param_2 >> 0x3d & 1) == 0) {
                  puVar11 = puVar1;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    puVar11 = param_1;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                  }
                  pbVar12 = (byte *)((long)puVar11 + lVar15);
                  uVar4 = (uint)*pbVar12;
                  uVar8 = (ulong)uVar4;
                  if (-1 < (char)*pbVar12) goto LAB_10457d6b0;
LAB_10457d69c:
                  uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                  uVar4 = (uint)uVar8;
                  if (uVar13 < 3) {
                    if (uVar13 == 1) goto LAB_10457d6b0;
                    uVar8 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                    puVar11 = (undefined8 *)0x2;
                  }
                  else if (uVar13 == 3) {
                    uVar8 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                   pbVar12[2] & 0x3f);
                    puVar11 = (undefined8 *)0x3;
                  }
                  else {
                    uVar8 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                    puVar11 = (undefined8 *)0x4;
                  }
                }
                else {
                  uStack_80 = param_1;
                  uStack_78 = uVar16;
                  pbVar12 = (byte *)((long)&uStack_80 + lVar15);
                  uVar4 = (uint)*pbVar12;
                  uVar8 = (ulong)uVar4;
                  if ((char)*pbVar12 < '\0') goto LAB_10457d69c;
LAB_10457d6b0:
                  puVar11 = (undefined8 *)0x1;
                }
LAB_10457d6b4:
                FUN_10457cc98();
                if ((uVar8 & 0xff00000000) != 0x100000000) {
                  if ((uVar5 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e070);
                    (*pcVar3)();
                  }
                  uVar4 = (int)uVar5 * 0x10;
                  uVar13 = (uint)uVar6 + uVar4;
                  if (CARRY4((uint)uVar6,uVar4)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e074);
                    (*pcVar3)();
                  }
                  if (uVar13 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e078);
                    (*pcVar3)();
                  }
                  uVar13 = uVar13 * 0x10;
                  uVar4 = (uint)uVar7 + uVar13;
                  if (CARRY4((uint)uVar7,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e07c);
                    (*pcVar3)();
                  }
                  if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e080);
                    (*pcVar3)();
                  }
                  uVar4 = uVar4 * 0x10;
                  uVar13 = (uint)uVar8 + uVar4;
                  if (CARRY4((uint)uVar8,uVar4)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e084);
                    (*pcVar3)();
                  }
                  lVar15 = (long)puVar11 + lVar15;
                  if ((uVar13 >> 0x10 < 0x11) && (uVar13 - 0xe000 < 0xfffff800)) goto LAB_10457d1a8;
                  if (0xdfff < uVar13) goto LAB_10457e008;
                  if (0x36 < uVar13 >> 10) goto LAB_10457e040;
                  if (lVar15 < (long)uVar2) {
                    if ((param_2 >> 0x3c & 1) == 0) {
                      if ((param_2 >> 0x3d & 1) == 0) {
                        puVar11 = puVar1;
                        if (((ulong)param_1 >> 0x3c & 1) == 0) {
                          puVar11 = param_1;
                          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                        }
                      }
                      else {
                        uStack_80 = param_1;
                        uStack_78 = uVar16;
                        puVar11 = &uStack_80;
                      }
                      pbVar12 = (byte *)((long)puVar11 + lVar15);
                      uVar4 = (uint)*pbVar12;
                      if ((char)*pbVar12 < '\0') {
                        uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                        if (uVar14 < 3) {
                          if (uVar14 == 1) goto LAB_10457d7dc;
                          uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
                          puVar11 = (undefined8 *)0x2;
                        }
                        else if (uVar14 == 3) {
                          uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                  pbVar12[2] & 0x3f;
                          puVar11 = (undefined8 *)0x3;
                        }
                        else {
                          uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f;
                          puVar11 = (undefined8 *)0x4;
                        }
                      }
                      else {
LAB_10457d7dc:
                        puVar11 = (undefined8 *)0x1;
                      }
                    }
                    else {
                      lVar9 = lVar15 * 0x10000;
                      puVar11 = param_1;
                      __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                (lVar9,param_1,param_2);
                      uVar4 = (uint)lVar9;
                    }
                    if ((uVar4 == 0x5c) && (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2))
                    {
                      if ((param_2 >> 0x3c & 1) == 0) {
                        if ((param_2 >> 0x3d & 1) == 0) {
                          puVar11 = puVar1;
                          if (((ulong)param_1 >> 0x3c & 1) == 0) {
                            puVar11 = param_1;
                            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                          }
                        }
                        else {
                          uStack_80 = param_1;
                          uStack_78 = uVar16;
                          puVar11 = &uStack_80;
                        }
                        pbVar12 = (byte *)((long)puVar11 + lVar15);
                        uVar4 = (uint)*pbVar12;
                        if ((char)*pbVar12 < '\0') {
                          uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                          if (uVar14 < 3) {
                            if (uVar14 == 1) goto LAB_10457d8c4;
                            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
                            puVar11 = (undefined8 *)0x2;
                          }
                          else if (uVar14 == 3) {
                            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                    pbVar12[2] & 0x3f;
                            puVar11 = (undefined8 *)0x3;
                          }
                          else {
                            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f;
                            puVar11 = (undefined8 *)0x4;
                          }
                        }
                        else {
LAB_10457d8c4:
                          puVar11 = (undefined8 *)0x1;
                        }
                      }
                      else {
                        lVar9 = lVar15 * 0x10000;
                        puVar11 = param_1;
                        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                  (lVar9,param_1,param_2);
                        uVar4 = (uint)lVar9;
                      }
                      if ((uVar4 == 0x75) && (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)
                         ) {
                        if ((param_2 >> 0x3c & 1) != 0) {
                          uVar5 = lVar15 * 0x10000;
                          puVar11 = param_1;
                          __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                    (uVar5,param_1,param_2);
                          goto LAB_10457d94c;
                        }
                        if ((param_2 >> 0x3d & 1) == 0) {
                          puVar11 = puVar1;
                          if (((ulong)param_1 >> 0x3c & 1) == 0) {
                            puVar11 = param_1;
                            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                          }
                          pbVar12 = (byte *)((long)puVar11 + lVar15);
                          uVar4 = (uint)*pbVar12;
                          uVar5 = (ulong)uVar4;
                          if ((char)*pbVar12 < '\0') {
                            uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                            if (uVar14 < 3) {
                              if (uVar14 == 1) goto LAB_10457d904;
                              uVar5 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                              puVar11 = (undefined8 *)0x2;
                            }
                            else if (uVar14 == 3) {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                             pbVar12[2] & 0x3f);
                              puVar11 = (undefined8 *)0x3;
                            }
                            else {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                              (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                              puVar11 = (undefined8 *)0x4;
                            }
                          }
                          else {
LAB_10457d904:
                            puVar11 = (undefined8 *)0x1;
                          }
                        }
                        else {
                          uStack_80 = param_1;
                          uStack_78 = uVar16;
                          uVar4 = (uint)*(byte *)((long)&uStack_80 + lVar15);
                          uVar5 = (ulong)uVar4;
                          if ((char)*(byte *)((long)&uStack_80 + lVar15) < '\0') {
                            uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                            if (uVar14 < 3) {
                              if (uVar14 == 1) goto LAB_10457d944;
                              uVar5 = (ulong)(*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f |
                                             (uVar4 & 0x1f) << 6);
                              puVar11 = (undefined8 *)0x2;
                            }
                            else if (uVar14 == 3) {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0xc |
                                              (*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f) << 6
                                             | *(byte *)((long)&uStack_80 + lVar15 + 2) & 0x3f);
                              puVar11 = (undefined8 *)0x3;
                            }
                            else {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0x12 |
                                              (*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f) <<
                                              0xc | (*(byte *)((long)&uStack_80 + lVar15 + 2) & 0x3f
                                                    ) << 6 |
                                             *(byte *)((long)&uStack_80 + lVar15 + 3) & 0x3f);
                              puVar11 = (undefined8 *)0x4;
                            }
                          }
                          else {
LAB_10457d944:
                            puVar11 = (undefined8 *)0x1;
                          }
                        }
LAB_10457d94c:
                        FUN_10457cc98();
                        if (((uVar5 & 0xff00000000) != 0x100000000) &&
                           (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
                          if ((param_2 >> 0x3c & 1) != 0) {
                            uVar6 = lVar15 * 0x10000;
                            puVar11 = param_1;
                            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                      (uVar6,param_1,param_2);
                            goto LAB_10457da68;
                          }
                          if ((param_2 >> 0x3d & 1) == 0) {
                            puVar11 = puVar1;
                            if (((ulong)param_1 >> 0x3c & 1) == 0) {
                              puVar11 = param_1;
                              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                            }
                            pbVar12 = (byte *)((long)puVar11 + lVar15);
                            uVar4 = (uint)*pbVar12;
                            uVar6 = (ulong)uVar4;
                            if ((char)*pbVar12 < '\0') {
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_10457d990;
                                uVar6 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                puVar11 = (undefined8 *)0x2;
                              }
                              else if (uVar14 == 3) {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                               pbVar12[2] & 0x3f);
                                puVar11 = (undefined8 *)0x3;
                              }
                              else {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                puVar11 = (undefined8 *)0x4;
                              }
                            }
                            else {
LAB_10457d990:
                              puVar11 = (undefined8 *)0x1;
                            }
                          }
                          else {
                            uStack_80 = param_1;
                            uStack_78 = uVar16;
                            uVar4 = (uint)*(byte *)((long)&uStack_80 + lVar15);
                            uVar6 = (ulong)uVar4;
                            if ((char)*(byte *)((long)&uStack_80 + lVar15) < '\0') {
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_10457da60;
                                uVar6 = (ulong)(*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f |
                                               (uVar4 & 0x1f) << 6);
                                puVar11 = (undefined8 *)0x2;
                              }
                              else if (uVar14 == 3) {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0xc |
                                                (*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f) <<
                                                6 | *(byte *)((long)&uStack_80 + lVar15 + 2) & 0x3f)
                                ;
                                puVar11 = (undefined8 *)0x3;
                              }
                              else {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0x12 |
                                                (*(byte *)((long)&uStack_80 + lVar15 + 1) & 0x3f) <<
                                                0xc | (*(byte *)((long)&uStack_80 + lVar15 + 2) &
                                                      0x3f) << 6 |
                                               *(byte *)((long)&uStack_80 + lVar15 + 3) & 0x3f);
                                puVar11 = (undefined8 *)0x4;
                              }
                            }
                            else {
LAB_10457da60:
                              puVar11 = (undefined8 *)0x1;
                            }
                          }
LAB_10457da68:
                          FUN_10457cc98();
                          if (((uVar6 & 0xff00000000) != 0x100000000) &&
                             (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
                            if ((param_2 >> 0x3c & 1) != 0) {
                              uVar7 = lVar15 * 0x10000;
                              puVar11 = param_1;
                              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                        (uVar7,param_1,param_2);
                              goto LAB_10457dbc4;
                            }
                            if ((param_2 >> 0x3d & 1) == 0) {
                              puVar11 = puVar1;
                              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                puVar11 = param_1;
                                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                              }
                              pbVar12 = (byte *)((long)puVar11 + lVar15);
                              uVar4 = (uint)*pbVar12;
                              uVar7 = (ulong)uVar4;
                              if (-1 < (char)*pbVar12) goto LAB_10457dbc0;
LAB_10457dbac:
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              uVar4 = (uint)uVar7;
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_10457dbc0;
                                uVar7 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                puVar11 = (undefined8 *)0x2;
                              }
                              else if (uVar14 == 3) {
                                uVar7 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                               pbVar12[2] & 0x3f);
                                puVar11 = (undefined8 *)0x3;
                              }
                              else {
                                uVar7 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                puVar11 = (undefined8 *)0x4;
                              }
                            }
                            else {
                              uStack_80 = param_1;
                              uStack_78 = uVar16;
                              pbVar12 = (byte *)((long)&uStack_80 + lVar15);
                              uVar4 = (uint)*pbVar12;
                              uVar7 = (ulong)uVar4;
                              if ((char)*pbVar12 < '\0') goto LAB_10457dbac;
LAB_10457dbc0:
                              puVar11 = (undefined8 *)0x1;
                            }
LAB_10457dbc4:
                            FUN_10457cc98();
                            if (((uVar7 & 0xff00000000) != 0x100000000) &&
                               (lVar15 = (long)puVar11 + lVar15, lVar15 < (long)uVar2)) {
                              if ((param_2 >> 0x3c & 1) == 0) {
                                if ((param_2 >> 0x3d & 1) == 0) {
                                  puVar11 = puVar1;
                                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                    puVar11 = param_1;
                                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                                  }
                                }
                                else {
                                  uStack_80 = param_1;
                                  uStack_78 = uVar16;
                                  puVar11 = &uStack_80;
                                }
                                pbVar12 = (byte *)((long)puVar11 + lVar15);
                                uVar4 = (uint)*pbVar12;
                                uVar8 = (ulong)uVar4;
                                if ((char)*pbVar12 < '\0') {
                                  uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                                  if (uVar14 < 3) {
                                    if (uVar14 == 1) goto LAB_10457dd20;
                                    uVar8 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                    puVar11 = (undefined8 *)0x2;
                                  }
                                  else if (uVar14 == 3) {
                                    uVar8 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6
                                                   | pbVar12[2] & 0x3f);
                                    puVar11 = (undefined8 *)0x3;
                                  }
                                  else {
                                    uVar8 = (ulong)((uVar4 & 0xf) << 0x12 |
                                                    (pbVar12[1] & 0x3f) << 0xc |
                                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                    puVar11 = (undefined8 *)0x4;
                                  }
                                }
                                else {
LAB_10457dd20:
                                  puVar11 = (undefined8 *)0x1;
                                }
                              }
                              else {
                                uVar8 = lVar15 * 0x10000;
                                puVar11 = param_1;
                                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                          (uVar8,param_1,param_2);
                              }
                              FUN_10457cc98();
                              if ((uVar8 & 0xff00000000) != 0x100000000) {
                                if ((uVar5 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e088);
                                  (*pcVar3)();
                                }
                                uVar4 = (int)uVar5 * 0x10;
                                uVar14 = (uint)uVar6 + uVar4;
                                if (CARRY4((uint)uVar6,uVar4)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e08c);
                                  (*pcVar3)();
                                }
                                if (uVar14 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e090);
                                  (*pcVar3)();
                                }
                                uVar14 = uVar14 * 0x10;
                                uVar4 = (uint)uVar7 + uVar14;
                                if (CARRY4((uint)uVar7,uVar14)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e094);
                                  (*pcVar3)();
                                }
                                if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e098);
                                  (*pcVar3)();
                                }
                                uVar4 = uVar4 * 0x10;
                                if (CARRY4((uint)uVar8,uVar4)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e09c);
                                  (*pcVar3)();
                                }
                                if ((uint)uVar8 + uVar4 >> 10 == 0x37) {
                                  if (uVar13 < 0xd800) {
                    /* WARNING: Does not return */
                                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457e0a0);
                                    (*pcVar3)();
                                  }
                                  lVar15 = (long)puVar11 + lVar15;
                                  goto LAB_10457d1a8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_10457e008:
        _swift_bridgeObjectRelease(param_2);
        uVar10 = uStack_68;
        goto LAB_10457e014;
      }
LAB_10457d1a8:
      __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF();
    } while (lVar15 < (long)uVar2);
    _swift_bridgeObjectRelease(param_2);
    uVar10 = uStack_68;
  }
LAB_10457e020:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = uStack_70;
  return auVar17;
}



/* Entry: 10457e0a0; end: 10457e107;  */

void FUN_10457e0a0(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar3 = unaff_x20[2];
  if (lVar1 == 0) goto LAB_10457e0c8;
  do {
    if (unaff_x20[1] - lVar1 == uVar3) {
      return;
    }
    while( true ) {
      if (0x20 < *(byte *)(lVar1 + uVar3) ||
          (1L << ((ulong)*(byte *)(lVar1 + uVar3) & 0x3f) & 0x100002600U) == 0) {
        return;
      }
      if ((lVar1 == 0) || ((ulong)(unaff_x20[1] - lVar1) <= uVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e108);
        (*pcVar2)();
      }
      uVar3 = uVar3 + 1;
      unaff_x20[2] = uVar3;
      if (lVar1 != 0) break;
LAB_10457e0c8:
      if (uVar3 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 10457e108; end: 10457e317;  */

undefined1  [16] FUN_10457e108(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x19;
  long unaff_x21;
  undefined1 auVar8 [16];
  
  uVar5 = *param_3;
  if (uVar5 == param_4) {
    unaff_x19 = 0xd;
  }
  else {
    bVar1 = *(byte *)((long)param_1 + uVar5);
    if (bVar1 == 0x30) {
      if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e318);
        (*pcVar2)();
      }
      uVar3 = uVar5 + 1;
      *param_3 = uVar3;
      if (uVar3 == param_4) {
LAB_10457e194:
        uVar3 = 0;
        unaff_x19 = 0;
        goto LAB_10457e154;
      }
      bVar1 = *(byte *)((long)param_1 + uVar3);
      if (bVar1 - 0x30 < 10) {
        unaff_x19 = 0xc;
      }
      else {
        if (bVar1 < 0x5c) {
          if ((bVar1 != 0x2e) && (bVar1 != 0x45)) goto LAB_10457e194;
        }
        else {
          if (bVar1 == 0x5c) {
LAB_10457e2c8:
            uVar3 = 0;
            unaff_x19 = 1;
            goto LAB_10457e154;
          }
          if (bVar1 != 0x65) goto LAB_10457e194;
        }
LAB_10457e2a0:
        *param_3 = uVar5;
        FUN_10457e318();
        uVar3 = extraout_x8_00;
        if (unaff_x21 != 0) goto LAB_10457e154;
        if (((uint)param_2 & 0xff) == 1) {
          unaff_x19 = 1;
        }
        else {
          unaff_x19 = 1;
          if (((-1.0 < (double)param_1) && ((double)param_1 < 1.8446744073709552e+19)) &&
             ((double)(long)(double)param_1 == (double)param_1)) {
            unaff_x19 = 0;
            uVar3 = (ulong)(double)param_1;
            goto LAB_10457e154;
          }
        }
      }
    }
    else {
      if (bVar1 - 0x31 < 9) {
        uVar3 = 0;
        unaff_x19 = 2;
        uVar6 = uVar5;
LAB_10457e1c4:
        if (param_4 != uVar6) {
          bVar1 = *(byte *)((long)param_1 + uVar6);
          if (bVar1 - 0x30 < 10) {
            if (0x1999999999999999 < uVar3) goto LAB_10457e124;
            uVar7 = (ulong)(bVar1 - 0x30) & 0xff;
            uVar4 = uVar3 * 10;
            if (CARRY8(uVar7,uVar4)) goto LAB_10457e124;
            if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar6)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e314);
              (*pcVar2)();
            }
            uVar6 = uVar6 + 1;
            *param_3 = uVar6;
            uVar3 = uVar4 + uVar7;
            if (CARRY8(uVar4,uVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e218);
              (*pcVar2)();
            }
            goto LAB_10457e1c4;
          }
          if (bVar1 < 0x5c) {
            if ((bVar1 != 0x2e) && (bVar1 != 0x45)) goto LAB_10457e2c0;
            goto LAB_10457e2a0;
          }
          if (bVar1 == 0x5c) goto LAB_10457e2c8;
          if (bVar1 == 0x65) goto LAB_10457e2a0;
        }
LAB_10457e2c0:
        unaff_x19 = 0;
        goto LAB_10457e154;
      }
      unaff_x19 = 1;
      if (bVar1 == 0x5c) {
        uVar3 = 0;
        goto LAB_10457e154;
      }
    }
  }
LAB_10457e124:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = unaff_x19;
  _swift_willThrow();
  uVar3 = extraout_x8;
LAB_10457e154:
  auVar8._8_8_ = unaff_x19;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 10457e318; end: 10457e6c7;  */

undefined1  [16]
FUN_10457e318(byte *param_1,long param_2,ulong *param_3,ulong param_4,byte *param_5)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  
  uVar5 = *param_3;
  pbVar3 = param_1;
  if (uVar5 == param_4) goto LAB_10457e334;
  param_5 = (byte *)0x0;
  pbVar3 = param_1 + uVar5;
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  pbVar10 = (byte *)0x1;
  if ((bVar1 == 0x5c) || (bVar1 == 0x4e)) goto LAB_10457e368;
  uVar7 = uVar5;
  if (bVar1 == 0x2d) {
    if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6a4);
      (*pcVar2)();
    }
    uVar7 = uVar5 + 1;
    *param_3 = uVar7;
    if (uVar7 == param_4) {
      *param_3 = uVar5;
      goto LAB_10457e334;
    }
    uVar6 = (uint)param_1[uVar7];
    if (uVar6 != 0x5c) goto LAB_10457e3d8;
  }
  else {
LAB_10457e3d8:
    if (uVar6 != 0x49) {
      if (uVar6 == 0x30) {
        if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6a8);
          (*pcVar2)();
        }
        uVar7 = uVar7 + 1;
        *param_3 = uVar7;
        if (uVar7 == param_4) {
          param_5 = (byte *)0x0;
          pbVar10 = (byte *)0x0;
          goto LAB_10457e368;
        }
        uVar6 = (uint)param_1[uVar7];
        if (uVar6 == 0x5c) goto LAB_10457e488;
        if (uVar6 - 0x30 < 10) {
          pbVar10 = (byte *)0xc;
        }
        else {
LAB_10457e4a8:
          param_5 = (byte *)0x0;
          if (uVar6 == 0x2e) {
            uVar9 = 0;
            if (param_1 != (byte *)0x0) {
              uVar9 = param_2 - (long)param_1;
            }
            if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6b4);
              (*pcVar2)();
            }
            uVar8 = uVar7 + 1;
            *param_3 = uVar8;
            if (uVar8 == param_4) {
LAB_10457e334:
              pbVar10 = (byte *)0xd;
            }
            else {
              uVar6 = (uint)param_1[uVar8];
              if (uVar6 - 0x30 < 10) {
                uVar8 = uVar7 + 2;
                do {
                  uVar7 = uVar8 - 1;
                  if (9 < uVar6 - 0x30) goto LAB_10457e540;
                  if ((long)uVar9 <= (long)uVar7) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6ac);
                    (*pcVar2)();
                  }
                  *param_3 = uVar8;
                  if (param_4 == uVar8) {
                    if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e634);
                      (*pcVar2)();
                    }
                    goto LAB_10457e664;
                  }
                  param_5 = (byte *)0x0;
                  uVar6 = (uint)param_1[uVar8];
                  uVar8 = uVar8 + 1;
                  pbVar10 = (byte *)0x1;
                } while (uVar6 != 0x5c);
                goto LAB_10457e368;
              }
              pbVar10 = (byte *)0x1;
              if (uVar6 == 0x5c) {
                param_5 = (byte *)0x0;
                goto LAB_10457e368;
              }
            }
          }
          else {
LAB_10457e540:
            param_5 = (byte *)0x0;
            if ((uVar6 | 0x20) == 0x65) {
              uVar9 = 0;
              if (param_1 != (byte *)0x0) {
                uVar9 = param_2 - (long)param_1;
              }
              if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6b8);
                (*pcVar2)();
              }
              uVar8 = uVar7 + 1;
              *param_3 = uVar8;
              if (uVar8 == param_4) goto LAB_10457e334;
              bVar1 = param_1[uVar8];
              if (bVar1 == 0x2b) {
LAB_10457e58c:
                if ((long)uVar9 <= (long)uVar8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6c4);
                  (*pcVar2)();
                }
                uVar8 = uVar7 + 2;
                *param_3 = uVar8;
                if (uVar8 == param_4) goto LAB_10457e334;
                bVar1 = param_1[uVar8];
                if (bVar1 == 0x5c) goto LAB_10457e488;
              }
              else {
                if (bVar1 == 0x5c) goto LAB_10457e488;
                if (bVar1 == 0x2d) goto LAB_10457e58c;
              }
              uVar6 = (uint)bVar1;
              if (uVar6 - 0x30 < 10) {
                if ((long)uVar9 <= (long)uVar8) {
                  uVar9 = uVar8;
                }
                uVar7 = uVar8;
                do {
                  uVar8 = uVar7 + 1;
                  if (9 < uVar6 - 0x30) goto LAB_10457e638;
                  if (uVar8 - uVar9 == 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6bc);
                    (*pcVar2)();
                  }
                  *param_3 = uVar8;
                  if (param_4 == uVar8) {
                    if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6c8);
                      (*pcVar2)();
                    }
                    goto LAB_10457e664;
                  }
                  param_5 = (byte *)0x0;
                  uVar6 = (uint)param_1[uVar8];
                  pbVar10 = (byte *)0x1;
                  uVar7 = uVar8;
                } while (uVar6 != 0x5c);
                goto LAB_10457e368;
              }
              goto LAB_10457e60c;
            }
LAB_10457e638:
            param_4 = uVar7;
            if ((long)uVar7 < (long)uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6c0);
              (*pcVar2)();
            }
LAB_10457e664:
            pbVar10 = (byte *)0x0;
            if (param_1 != (byte *)0x0) {
              pbVar10 = param_1 + param_4;
            }
            param_5 = (byte *)0x0;
            if (param_1 != (byte *)0x0) {
              param_5 = pbVar3;
            }
LAB_10457e670:
            pbVar4 = (byte *)0x0;
            FUN_104557590(param_5,pbVar10,1);
            if (((uint)pbVar10 & 0xff) != 1) goto LAB_10457e368;
            pbVar10 = (byte *)0x6;
            pbVar3 = param_5;
            param_5 = pbVar4;
          }
        }
      }
      else {
        if (uVar6 - 0x31 < 9) {
          do {
            uVar9 = uVar7 + 1;
            if (9 < uVar6 - 0x30) goto LAB_10457e4a8;
            if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6a0);
              (*pcVar2)();
            }
            *param_3 = uVar9;
            if (param_4 == uVar9) {
              if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10457e6b0);
                (*pcVar2)();
              }
              pbVar10 = param_1 + param_4;
              param_5 = pbVar3;
              goto LAB_10457e670;
            }
            param_5 = (byte *)0x0;
            uVar6 = (uint)param_1[uVar9];
            pbVar10 = (byte *)0x1;
            uVar7 = uVar9;
          } while (uVar6 != 0x5c);
          goto LAB_10457e368;
        }
LAB_10457e60c:
        param_5 = (byte *)0x0;
        pbVar10 = (byte *)0x1;
      }
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,pbVar3,0,0);
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      *(byte **)(pbVar3 + 8) = pbVar10;
      _swift_willThrow();
      goto LAB_10457e368;
    }
  }
LAB_10457e488:
  param_5 = (byte *)0x0;
  pbVar10 = (byte *)0x1;
LAB_10457e368:
  auVar11._8_8_ = pbVar10;
  auVar11._0_8_ = param_5;
  return auVar11;
}



/* Entry: 10457e6c8; end: 10457e7d7;  */

void FUN_10457e6c8(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  uVar3 = *param_3;
  if (uVar3 == param_4) {
LAB_10457e6e0:
    uVar4 = 0xd;
  }
  else {
    if (*(char *)((long)param_1 + uVar3) == '-') {
      if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10457e7d8);
        (*pcVar1)();
      }
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      if (uVar3 == param_4) goto LAB_10457e6e0;
      if (*(byte *)((long)param_1 + uVar3) - 0x3a < 0xfffffff6) {
        uVar4 = 1;
        goto LAB_10457e6e4;
      }
      FUN_10457e108();
      if (unaff_x21 != 0) {
        return;
      }
      if (((uint)param_2 & 0xff) == 1) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
      bVar2 = param_1 == (undefined8 *)0x8000000000000000;
      param_1 = (undefined8 *)0x8000000000000000;
      if (bVar2) {
        return;
      }
    }
    else {
      FUN_10457e108();
      if (unaff_x21 != 0) {
        return;
      }
      if (((uint)param_2 & 0xff) == 1) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
    uVar4 = 2;
  }
LAB_10457e6e4:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar4;
  _swift_willThrow();
  return;
}



/* Entry: 10457e7d8; end: 10457e90b;  */

void FUN_10457e7d8(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  ulong uVar10;
  
  lVar4 = *unaff_x20;
  uVar9 = unaff_x20[1] - lVar4;
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = uVar9;
  }
  if (uVar3 <= (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10457e904);
    (*pcVar6)();
  }
  bVar5 = 0;
  uVar2 = unaff_x20[2] + 1;
  unaff_x20[2] = uVar2;
  uVar10 = uVar2;
  while ((lVar4 == 0 || (uVar10 != uVar9))) {
    uVar8 = uVar9;
    if (*(char *)(lVar4 + uVar10) == '\\') {
      if ((long)uVar3 <= (long)uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10457e900);
        (*pcVar6)();
      }
      uVar10 = uVar10 + 1;
      if (lVar4 == 0) {
        bVar5 = 1;
        uVar8 = 0;
      }
      else {
        if (uVar10 == uVar9) break;
        bVar5 = 1;
      }
    }
    else {
      if (*(char *)(lVar4 + uVar10) == '\"') {
        unaff_x20[2] = uVar10;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10457e90c);
          (*pcVar6)();
        }
        lVar7 = uVar10 - uVar2;
        FUN_104596000(lVar4 + uVar2);
        if ((long)uVar10 < (long)uVar9) {
          unaff_x20[2] = uVar10 + 1;
          if (!(bool)(lVar7 != 0 & bVar5)) {
            return;
          }
          FUN_10457d134();
          _swift_bridgeObjectRelease(lVar7);
          return;
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10457e908);
        (*pcVar6)();
      }
      if (lVar4 == 0) {
        uVar8 = 0;
      }
    }
    bVar1 = (long)uVar8 <= (long)uVar10;
    uVar10 = uVar10 + 1;
    if (bVar1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10457e8fc);
      (*pcVar6)();
    }
  }
  unaff_x20[2] = uVar9;
  return;
}



/* Entry: 10457e90c; end: 10457e9ff;  */

void FUN_10457e90c(float *param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x21;
  undefined1 auStack_a8 [96];
  long lStack_48;
  
  if ((param_2 != 0.0) && (lVar1 = param_3 - (long)param_2, lVar1 != 0)) {
    lStack_48 = 0;
    FUN_104571b10(param_4,auStack_a8);
    FUN_10457e318(param_2,param_3,&lStack_48,lVar1);
    if (unaff_x21 != 0) {
      FUN_1045405d0(auStack_a8);
      return;
    }
    FUN_1045405d0(auStack_a8);
    if (((((uint)param_3 & 0xff) != 1) && (lStack_48 == lVar1)) &&
       ((uint)ABS((float)param_2) < 0x7f800000)) {
      *param_1 = (float)param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0.0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10457ea00; end: 10457eae3;  */

void FUN_10457ea00(long *param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long unaff_x21;
  undefined1 auStack_b0 [96];
  long lStack_48;
  
  if ((param_2 != 0) && (lVar1 = param_3 - param_2, lVar1 != 0)) {
    lStack_48 = 0;
    FUN_104571b10(param_4,auStack_b0);
    (*param_5)(param_2,param_3,&lStack_48,lVar1);
    if (unaff_x21 != 0) {
      FUN_1045405d0(auStack_b0);
      return;
    }
    FUN_1045405d0(auStack_b0);
    if ((((uint)param_3 & 0xff) != 1) && (lStack_48 == lVar1)) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10457eae4; end: 10457ebc7;  */

undefined8 FUN_10457eae4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  
  lVar3 = unaff_x20[2];
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  if (lVar5 == 0) {
    lVar5 = lVar3;
    if (lVar4 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
      goto LAB_10457eb9c;
    }
  }
  else {
    lVar6 = 0x20;
    do {
      lVar1 = lVar3 + lVar6;
      if (lVar4 != 0) {
        lVar1 = ((lVar3 + lVar4) - unaff_x20[1]) + lVar6;
      }
      if ((lVar1 == 0x20) ||
         (*(char *)(lVar3 + lVar4 + lVar6 + -0x20) != *(char *)(param_1 + lVar6)))
      goto LAB_10457ebb0;
      if ((lVar4 == 0) || ((ulong)(unaff_x20[1] - lVar4) <= (lVar3 + lVar6) - 0x20U)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10457ebc8);
        (*pcVar2)();
      }
      unaff_x20[2] = lVar3 + lVar6 + -0x1f;
      lVar6 = lVar6 + 1;
    } while (lVar6 - lVar5 != 0x20);
    lVar5 = lVar3 + lVar6 + -0x20;
  }
  if (lVar5 == unaff_x20[1] - lVar4) {
    return 1;
  }
LAB_10457eb9c:
  if (0x19 < (*(byte *)(lVar4 + lVar5) & 0xffffffdf) - 0x41) {
    return 1;
  }
LAB_10457ebb0:
  unaff_x20[2] = lVar3;
  return 0;
}



/* Entry: 10457ebc8; end: 10457ed37;  */

void FUN_10457ebc8(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *unaff_x20;
  
  FUN_10457e0a0();
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar6 = *unaff_x20;
  if (uVar6 == 0) {
    if (uVar5 == 0) goto LAB_10457ece4;
  }
  else if (uVar5 == uVar2 - uVar6) goto LAB_10457ece4;
  if (*(char *)(uVar6 + uVar5) != '\"') {
    return;
  }
  uVar7 = uVar2 - uVar6;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10457ed30);
    (*pcVar4)();
  }
  lVar8 = 0;
  unaff_x20[2] = uVar5 + 1;
  while( true ) {
    if ((uVar6 != 0) && ((~uVar6 + uVar2) - uVar5 == lVar8)) {
      unaff_x20[2] = uVar7;
      goto LAB_10457ece4;
    }
    cVar3 = *(char *)(uVar6 + uVar5 + 1 + lVar8);
    if (cVar3 == '\"') break;
    if (cVar3 == '\\') goto LAB_10457ecd8;
    if ((long)uVar1 <= (long)(uVar5 + lVar8 + 1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10457ed2c);
      (*pcVar4)();
    }
    lVar8 = lVar8 + 1;
  }
  uVar1 = uVar5 + lVar8 + 1;
  unaff_x20[2] = uVar1;
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10457ed38);
    (*pcVar4)();
  }
  if ((~uVar6 + uVar2) - uVar5 != lVar8) {
    if ((long)uVar7 <= (long)uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10457ed34);
      (*pcVar4)();
    }
    uVar5 = uVar5 + lVar8 + 2;
LAB_10457ecd8:
    unaff_x20[2] = uVar5;
    return;
  }
LAB_10457ece4:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 10457ed38; end: 10457ee03;  */

void FUN_10457ed38(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  
  puVar3 = param_1;
  FUN_10457e0a0();
  uVar1 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar1 == 0) goto LAB_10457ed68;
  }
  else if (uVar1 == unaff_x20[1] - lVar4) {
LAB_10457ed68:
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar3,0,0);
    puVar3[1] = 0xd;
    *puVar3 = 0;
    goto LAB_10457ede8;
  }
  if ((uint)*(byte *)(lVar4 + uVar1) == ((uint)param_1 & 0xff)) {
    if ((lVar4 != 0) && (uVar1 < (ulong)(unaff_x20[1] - lVar4))) {
      unaff_x20[2] = uVar1 + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10457ee04);
    (*pcVar2)();
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,puVar3,0,0);
  *puVar3 = 0;
  puVar3[1] = 0;
LAB_10457ede8:
  _swift_willThrow();
  return;
}



/* Entry: 10457ee04; end: 10457f0b3;  */

void FUN_10457ee04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  long *unaff_x20;
  long unaff_x21;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  FUN_10457e0a0();
  lVar10 = 0;
  puVar1 = (undefined8 *)0x112d48d68;
LAB_10457ee38:
  lVar11 = 0;
  lVar2 = *unaff_x20;
  pbVar9 = (byte *)(unaff_x20[1] - lVar2);
  while( true ) {
    FUN_10457e0a0();
    pbVar8 = (byte *)unaff_x20[2];
    if (lVar2 == 0) break;
    if (pbVar8 == pbVar9) goto LAB_10457f02c;
    bVar3 = pbVar8[lVar2];
    if (bVar3 != 0x5b) goto LAB_10457ee94;
    if (pbVar9 <= pbVar8) goto LAB_10457f0b0;
    unaff_x20[2] = (long)(pbVar8 + 1);
    bVar6 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10457f080);
      (*pcVar5)();
    }
  }
  if (pbVar8 != (byte *)0x0) {
    bVar3 = *pbVar8;
    if (bVar3 == 0x5b) {
LAB_10457f0b0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10457f0b4);
      (*pcVar5)();
    }
LAB_10457ee94:
    lVar12 = lVar11;
    if (bVar3 < 0x6e) {
      if (bVar3 == 0x22) {
        FUN_10457f134();
      }
      else {
        if (bVar3 == 0x5d) {
          if (lVar11 == 0) {
            FUN_104540590();
            _swift_allocError(&UNK_110788c08,param_1,0,0);
            *param_1 = 0;
            param_1[1] = 0;
            goto LAB_10457f058;
          }
          if (0 < lVar11) {
            do {
              FUN_10457e0a0();
              pbVar8 = (byte *)unaff_x20[2];
              lVar12 = lVar11;
              if (lVar2 == 0) {
                if (pbVar8 == (byte *)0x0) break;
              }
              else if (pbVar8 == pbVar9) break;
              if (pbVar8[lVar2] != 0x5d) break;
              if ((lVar2 == 0) || (pbVar9 <= pbVar8)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10457f0b0);
                (*pcVar5)();
              }
              lVar12 = 0;
              unaff_x20[2] = (long)(pbVar8 + 1);
              lVar4 = lVar11 + -1;
              bVar6 = 0 < lVar11;
              lVar11 = lVar4;
            } while (lVar4 != 0 && bVar6);
          }
          goto joined_r0x00010457f024;
        }
        if (bVar3 == 0x66) {
          param_1 = puVar1;
          func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
          goto LAB_10457ef98;
        }
LAB_10457ef14:
        FUN_10457b480();
      }
LAB_10457ef1c:
      if (unaff_x21 != 0) {
        return;
      }
joined_r0x00010457f024:
      if (SCARRY8(lVar10,lVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10457f02c);
        (*pcVar5)();
      }
      if (lVar10 + lVar12 < 1) {
        return;
      }
      lVar11 = *unaff_x20;
      lVar2 = unaff_x20[1];
      lVar10 = lVar10 + lVar12;
      do {
        FUN_10457e0a0();
        uVar7 = unaff_x20[2];
        if (lVar11 == 0) {
          if (uVar7 == 0) goto LAB_10457f004;
        }
        else if (uVar7 == lVar2 - lVar11) goto LAB_10457f004;
        if (*(char *)(lVar11 + uVar7) != ']') goto LAB_10457f004;
        if ((lVar11 == 0) || ((ulong)(lVar2 - lVar11) <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10457f084);
          (*pcVar5)();
        }
        unaff_x20[2] = uVar7 + 1;
        lVar12 = lVar10 + -1;
        bVar6 = lVar10 < 1;
        lVar10 = lVar12;
        if (lVar12 == 0 || bVar6) {
          return;
        }
      } while( true );
    }
    if (bVar3 == 0x6e) {
      param_1 = puVar1;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    }
    else {
      if (bVar3 != 0x74) {
        if (bVar3 != 0x7b) goto LAB_10457ef14;
        FUN_10457f278();
        goto LAB_10457ef1c;
      }
      param_1 = puVar1;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    }
LAB_10457ef98:
    _swift_initStaticObject();
    FUN_10457eae4();
    if (((ulong)param_1 & 1) != 0) goto joined_r0x00010457f024;
  }
LAB_10457f02c:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
LAB_10457f058:
  _swift_willThrow();
  return;
LAB_10457f004:
  param_1 = (undefined8 *)0x2c;
  FUN_10457ed38();
  if (unaff_x21 != 0) {
    return;
  }
  goto LAB_10457ee38;
}



/* Entry: 10457f0b4; end: 10457f133;  */

void FUN_10457f0b4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,1,1,param_3);
  }
  else {
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,param_2,0,0);
    param_2[1] = 9;
    *param_2 = 0;
    _swift_willThrow();
  }
  return;
}



/* Entry: 10457f134; end: 10457f277;  */

void FUN_10457f134(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar6 != 0) goto LAB_10457f164;
  }
  else if (uVar6 != unaff_x20[1] - lVar4) {
LAB_10457f164:
    if (*(char *)(lVar4 + uVar6) == '\"') {
      uVar5 = unaff_x20[1] - lVar4;
      uVar2 = 0;
      if (lVar4 != 0) {
        uVar2 = uVar5;
      }
      if (uVar2 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f274);
        (*pcVar3)();
      }
      uVar6 = uVar6 + 1;
      unaff_x20[2] = uVar6;
LAB_10457f18c:
      do {
        if ((lVar4 != 0) && (uVar6 == uVar5)) {
LAB_10457f208:
          unaff_x20[2] = uVar5;
          goto LAB_10457f20c;
        }
        if (*(char *)(lVar4 + uVar6) != '\\') {
          if (*(char *)(lVar4 + uVar6) == '\"') {
            unaff_x20[2] = uVar6;
            if ((long)uVar6 < (long)uVar2) {
              unaff_x20[2] = uVar6 + 1;
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f278);
            (*pcVar3)();
          }
          if ((long)uVar2 <= (long)uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f268);
            (*pcVar3)();
          }
          uVar6 = uVar6 + 1;
          goto LAB_10457f18c;
        }
        if ((long)uVar2 <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f26c);
          (*pcVar3)();
        }
        uVar1 = uVar6 + 1;
        if (lVar4 == 0) {
          if (-1 < (long)uVar1) {
LAB_10457f26c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f270);
            (*pcVar3)();
          }
        }
        else {
          if (uVar1 == uVar5) goto LAB_10457f208;
          if ((long)uVar5 <= (long)uVar1) goto LAB_10457f26c;
        }
        uVar6 = uVar6 + 2;
      } while( true );
    }
    uVar7 = 5;
    goto LAB_10457f210;
  }
LAB_10457f20c:
  uVar7 = 0xd;
LAB_10457f210:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar7;
  _swift_willThrow();
  return;
}



/* Entry: 10457f278; end: 10457f347;  */

/* WARNING: Removing unreachable block (ram,0x00010457f304) */

void FUN_10457f278(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10457f348);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar1;
    if (lVar1 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar3,0,0);
      puVar3[1] = 0x13;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10457b120();
      if (((ulong)puVar3 & 1) == 0) {
        while( true ) {
          FUN_10457e0a0();
          FUN_10457f134();
          uVar4 = 0;
          FUN_10457ed38();
          FUN_10457ee04();
          FUN_10457b120();
          if ((uVar4 & 1) != 0) break;
          FUN_10457ed38(0x2c);
        }
      }
    }
  }
  return;
}



/* Entry: 10457f348; end: 10457f5f3;  */

void FUN_10457f348(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  abStack_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  abStack_78[1] = uVar3;
  abStack_78[2] = uVar4;
  abStack_78[3] = uVar5;
  abStack_78[4] = uVar6;
  abStack_78[5] = uVar7;
  abStack_78[6] = uVar8;
  abStack_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      func_0x00010006c090(lVar15,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_10457cf08(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4,param_5);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = (ulong)CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8]))))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      func_0x00010006c090(lVar15,uVar18);
      abStack_78[8] = (byte)uVar19;
      abStack_78[9] = (byte)(uVar19 >> 8);
      abStack_78[10] = (byte)(uVar19 >> 0x10);
      abStack_78[0xb] = (byte)(uVar19 >> 0x18);
      abStack_78[0xc] = (byte)(uVar19 >> 0x20);
      abStack_78[0xd] = (byte)(uVar19 >> 0x28);
      abStack_78[0xe] = (byte)(uVar19 >> 0x30);
      uStack_69 = (undefined1)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10457f5f4(param_1,abStack_78,param_3,param_4,param_5);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(abStack_78[0xe],
                                 CONCAT15(abStack_78[0xd],
                                          CONCAT14(abStack_78[0xc],
                                                   CONCAT13(abStack_78[0xb],
                                                            CONCAT12(abStack_78[10],
                                                                     CONCAT11(abStack_78[9],
                                                                              abStack_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    func_0x00010006c090(lVar15,uVar18);
    abStack_78[8] = (byte)uVar19;
    abStack_78[9] = (byte)(uVar19 >> 8);
    abStack_78[10] = (byte)(uVar19 >> 0x10);
    abStack_78[0xb] = (byte)(uVar19 >> 0x18);
    abStack_78[0xc] = (byte)(uVar19 >> 0x20);
    abStack_78[0xd] = (byte)(uVar19 >> 0x28);
    abStack_78[0xe] = (byte)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) goto LAB_10457f5f0;
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10457f5e8);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10457f5ec);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_10457cf08(param_1,lVar15,lVar15 + lVar16,param_3,param_4,param_5);
    *param_2 = lVar13;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_10457cf08(abStack_78,abStack_78,param_3,param_4,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10457f5f0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10457f5f4);
  (*pcVar14)();
}



/* Entry: 10457f5f4; end: 10457f6c7;  */

void FUN_10457f5f4(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f6c0);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_10457cf08(param_1,lVar4,lVar4 + lVar5,param_3,param_4,param_5);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f6c4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f6c8);
  (*pcVar3)();
}



/* Entry: 10457f6c8; end: 10457f743;  */

void FUN_10457f6c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_1) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    uVar5 = (uint)(*unaff_x20 >> 0x3b) & 1;
    if ((uVar2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar2 = 7;
    if (uVar5 == 0) {
      uVar2 = 0xb;
    }
    uVar4 = 0xf;
    __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,param_1,uVar2 | uVar1 << 0x10);
    if (((uint)param_1 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS14removeSubrangeyySnySS5IndexVGF_11034d920)(0xf,uVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f744);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457f740);
  (*pcVar3)();
}



/* Entry: 10457f744; end: 10457f797;  */

long FUN_10457f744(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10457f798; end: 10457f893;  */

undefined8 * FUN_10457f798(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  lVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar3;
  pcVar1 = (code *)**(undefined8 **)(lVar3 + -8);
  _swift_retain();
  (*pcVar1)(param_1 + 6,param_2 + 6,lVar3);
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 10457f894; end: 10457f8f7;  */

undefined8 * FUN_10457f894(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  func_0x0001000834e4(param_1 + 6);
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 10457f8f8; end: 10457f9a7;  */

int FUN_10457f8f8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10457f9a8; end: 10457fd2b;  */

/* WARNING: Removing unreachable block (ram,0x00010457fc34) */
/* WARNING: Removing unreachable block (ram,0x00010457fc38) */

void FUN_10457f9a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = param_1;
  puVar7 = param_2;
  puVar8 = param_3;
  FUN_10457ebc8();
  if (unaff_x21 != 0) {
    return;
  }
  while( true ) {
    if (((uint)puVar8 & 0xff) == 1) {
      FUN_10457b090();
      FUN_10457ed38(0x3a);
      _swift_bridgeObjectRetain(puVar7);
      puVar4 = puVar3;
      func_0x00010149b58c(puVar3,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      if (param_1[2] != 0) {
        uVar6 = (long)puVar4 + puVar4[2] + 0x20;
        FUN_104559588();
        if ((uVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar7);
          _swift_release(puVar4);
          return;
        }
      }
      _swift_release(puVar4);
      puVar4 = puVar3;
    }
    else {
      FUN_10457ed38(0x3a);
      if ((param_1[2] != 0) && (puVar4 = puVar7, FUN_104559588(), ((ulong)puVar4 & 1) != 0)) {
        return;
      }
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10457fd28);
        (*pcVar2)();
      }
      puVar7 = (undefined8 *)((long)puVar7 - (long)puVar3);
      FUN_104596000();
      puVar4 = puVar3;
      if (puVar7 == (undefined8 *)0x0) {
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,puVar3,0,0);
        puVar3[1] = 6;
        *puVar3 = 0;
        goto LAB_10457fcb4;
      }
    }
    puVar3 = puVar7;
    puVar5 = puVar4;
    puVar7 = puVar3;
    func_0x00010457b1fc();
    if ((((uint)puVar5 & 0xff00) != 0x100) && (((uint)puVar5 & 0xff) == 0x5b)) {
      puVar5 = puVar4;
      puVar7 = puVar3;
      FUN_10456166c();
      if ((((uint)puVar5 & 0xff00) != 0x100) && (((uint)puVar5 & 0xff) == 0x5d)) {
        uVar6 = (ulong)puVar4 & 0xffffffffffff;
        if (((ulong)puVar3 & 0x2000000000000000) != 0) {
          uVar6 = (ulong)puVar3 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10457fd24);
          (*pcVar2)();
        }
        puVar7 = puVar3;
        func_0x000100ed7ed4(puVar4);
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10457fd2c);
          (*pcVar2)();
        }
        puVar8 = puVar7;
        FUN_10457f6c8(1);
        _swift_bridgeObjectRelease(puVar7);
        func_0x00010457b27c();
        _swift_bridgeObjectRelease(puVar8);
        lVar1 = *(long *)(unaff_x20 + 0x50);
        func_0x0001000a8868(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
        puVar5 = param_2;
        puVar7 = param_3;
        puVar8 = puVar4;
        (**(code **)(lVar1 + 0x10))();
        if (((uint)puVar7 & 0xff) != 1) {
          _swift_bridgeObjectRelease(puVar3);
          return;
        }
      }
    }
    if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) break;
    FUN_10457ee04();
    func_0x00010457b120();
    if (((ulong)puVar5 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar3);
      return;
    }
    FUN_10457ed38(0x2c);
    _swift_bridgeObjectRelease();
    FUN_10457ebc8();
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,puVar5,0,0);
  *puVar5 = puVar4;
  puVar5[1] = puVar3;
LAB_10457fcb4:
  _swift_willThrow();
  return;
}



/* Entry: 10457fd2c; end: 10457fdff;  */

void FUN_10457fd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  FUN_10453c758(param_1,param_5,param_6,param_7,param_8,param_9);
  func_0x00010006c090(param_2,param_3);
  _swift_release(param_4);
  func_0x000100ee9068(param_5);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 10457fe00; end: 10457ff07;  */

void FUN_10457fe00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                  long param_10)

{
  long unaff_x21;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  (**(code **)(param_9 + 0x10))(param_7,param_9);
  lStack_98 = param_10;
  lStack_b0 = param_7;
  lStack_a8 = param_8;
  lStack_a0 = param_9;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  (**(code **)(param_10 + 0x20))(FUN_104580064,auStack_c0,PTR___sytN_11034f1b0 + 8,param_8,param_10)
  ;
  func_0x000100ee9068(param_3);
  (**(code **)(*(long *)(param_8 + -8) + 8))(param_2,param_8);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_7 + -8) + 8))(param_1,param_7);
  }
  return;
}



/* Entry: 10457ff08; end: 10457ff73;  */

void FUN_10457ff08(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long in_stack_00000000;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = in_stack_00000000;
  uStack_70 = in_x5;
  uStack_68 = in_x6;
  uStack_60 = in_x7;
  (**(code **)(in_stack_00000000 + 0x20))
            (param_1,FUN_104580064,auStack_80,PTR___sytN_11034f1b0 + 8,in_x6,in_stack_00000000);
  return;
}



/* Entry: 10457ff74; end: 104580043;  */

void FUN_10457ff74(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,long param_8,long param_9
                  )

{
  long lVar1;
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 + param_2;
  }
  func_0x00010006ae80(param_2,lVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000100ee9068(param_4);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 104580044; end: 104580063;  */

void FUN_104580044(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 + param_1;
  }
  func_0x00010006ae80(param_1,lVar1);
  return;
}



/* Entry: 104580064; end: 10458009b;  */

void FUN_104580064(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006ae80(*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined1 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10458009c; end: 104580183;  */

void FUN_10458009c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,long param_8,long param_9
                  )

{
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_10457ff08(&uStack_70,param_4,param_5,param_6,param_7,param_8,
                PTR___s10Foundation4DataVN_110350ae0,param_9,&PTR_DAT_110789f58);
  func_0x000100ee9068(param_4);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  func_0x00010006c090(param_2,param_3);
  return;
}



/* Entry: 104580184; end: 1045801d3;  */

void FUN_104580184(void)

{
  FUN_1045801d4();
  return;
}



/* Entry: 1045801d4; end: 1045802d7;  */

void FUN_1045801d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10)

{
  long unaff_x21;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  (**(code **)(param_9 + 0x10))(param_7,param_9);
  uStack_98 = param_10;
  lStack_b0 = param_7;
  lStack_a8 = param_8;
  lStack_a0 = param_9;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (0x1045804ac,auStack_c0,PTR___sytN_11034f1b0 + 8,param_8,param_10);
  func_0x000100ee9068(param_3);
  (**(code **)(*(long *)(param_8 + -8) + 8))(param_2,param_8);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_7 + -8) + 8))(param_1,param_7);
  }
  return;
}



/* Entry: 1045802d8; end: 104580303;  */

void FUN_1045802d8(void)

{
  FUN_104580304();
  return;
}



/* Entry: 104580304; end: 104580363;  */

void FUN_104580304(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = in_stack_00000000;
  uStack_70 = in_x5;
  uStack_68 = in_x6;
  uStack_60 = in_x7;
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (param_1,in_stack_00000008,auStack_80,PTR___sytN_11034f1b0 + 8,in_x6,in_stack_00000000);
  return;
}



/* Entry: 104580364; end: 104580377;  */

void FUN_104580364(void)

{
  FUN_104580378();
  return;
}



/* Entry: 104580378; end: 1045803af;  */

void FUN_104580378(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006ae80(*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined1 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1045803b0; end: 1045804bf;  */

void FUN_1045803b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10457ff08(&uStack_20,param_3,param_4,param_5,param_6,param_7,
                PTR___s10Foundation4DataVN_110350ae0,param_8,&PTR_DAT_110789f58);
  return;
}



/* Entry: 1045804c0; end: 104580577;  */

uint FUN_1045804c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar1 = param_3;
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,lVar2);
  FUN_10458057c(param_1,param_2,param_3,param_4);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  return (uint)param_1 & 1;
}



/* Entry: 104580578; end: 10458057b;  */

/* WARNING: Removing unreachable block (ram,0x0001045805cc) */
/* WARNING: Removing unreachable block (ram,0x000104580630) */
/* WARNING: Removing unreachable block (ram,0x00010458060c) */
/* WARNING: Removing unreachable block (ram,0x00010458063c) */

undefined8
FUN_104580578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_10458f964(param_1,param_2,&uStack_50,0,param_3,param_4);
  FUN_104580f04(&uStack_50,0x112d387f8,&UNK_10d902650);
  return 1;
}



/* Entry: 10458057c; end: 10458065b;  */

/* WARNING: Removing unreachable block (ram,0x0001045805cc) */
/* WARNING: Removing unreachable block (ram,0x000104580630) */
/* WARNING: Removing unreachable block (ram,0x00010458060c) */
/* WARNING: Removing unreachable block (ram,0x00010458063c) */

undefined8
FUN_10458057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_10458f964(param_1,param_2,&uStack_50,0,param_3,param_4);
  FUN_104580f04(&uStack_50,0x112d387f8,&UNK_10d902650);
  return 1;
}



/* Entry: 10458065c; end: 104580687;  */

undefined8 FUN_10458065c(void)

{
  return 0;
}



/* Entry: 104580688; end: 104580883;  */

/* WARNING: Removing unreachable block (ram,0x000104580748) */

void FUN_104580688(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x21;
  ulong *puVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar3 = 0;
  lVar6 = 0;
  lVar8 = param_6;
  FUN_104592010();
  pcVar9 = *(code **)(param_7 + 0x48);
  uVar4 = 0;
  uStack_78 = uVar3;
  lStack_70 = lVar6;
  lStack_68 = lVar8;
  func_0x000104592004(0,param_6,param_7);
  (*pcVar9)(&uStack_78,uVar4,&PTR_DAT_110789ca8,param_6,param_7);
  lVar8 = lStack_68;
  if (unaff_x21 == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 != 0) {
      puVar10 = (ulong *)(param_2 + 0x28);
      do {
        uVar1 = puVar10[-1];
        uVar2 = *puVar10;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(lVar8);
          uVar5 = uVar1;
          uVar7 = uVar2;
          func_0x000100029284(uVar1);
          if ((uVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar8);
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar5 * 0x20,&uStack_a0);
            _swift_bridgeObjectRelease(lVar8);
          }
        }
        FUN_10458f964(uVar1,uVar2,&uStack_a0,param_5 & 1,param_6,param_7);
        FUN_104580f04(&uStack_a0,0x112d387f8,&UNK_10d902650);
        _swift_bridgeObjectRelease(uVar2);
        puVar10 = puVar10 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    lVar6 = lStack_70;
    _swift_bridgeObjectRelease(lVar8);
  }
  else {
    _swift_bridgeObjectRelease(lStack_70);
    lVar6 = lStack_68;
  }
  _swift_bridgeObjectRelease(lVar6);
  return;
}



/* Entry: 104580884; end: 1045809f3;  */

/* WARNING: Removing unreachable block (ram,0x000104580970) */

uint FUN_104580884(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x12;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  lVar5 = *(long *)(param_4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar5 + 0x40),param_1,param_2,param_2,param_3);
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  uVar1 = param_4;
  FUN_104565ebc(param_4,param_1);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(lVar5 + 0x10))(puVar3);
    FUN_1045809f4(lVar4,puVar3,param_4,param_6);
    FUN_104580688();
    __sSQ2eeoiySbx_xtFZTj(lVar4);
    (**(code **)(lVar5 + 8))();
    uVar2 = (uint)lVar4 ^ 1;
    (**(code **)(lVar5 + 0x20))();
  }
  return uVar2 & 1;
}



/* Entry: 1045809f4; end: 104580da3;  */

void FUN_1045809f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar3 = 0;
  uStack_f8 = param_1;
  __sSqMa();
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar3 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12;
  lVar8 = *(long *)(param_3 + -8);
  lStack_118 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar3 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar3 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_01;
  (**(code **)(param_4 + 0x10))(lVar9,param_3,param_4);
  pcVar11 = *(code **)(lVar8 + 0x10);
  (*pcVar11)(lVar10,lVar9,param_3);
  uVar4 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar5 = &uStack_c0;
  _swift_dynamicCast(puVar5,lVar10,param_3,uVar4,0xe);
  if (((ulong)puVar5 & 1) == 0) {
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    FUN_104580f04(&uStack_c0,0x113086678,&UNK_10dd18800);
  }
  else {
    FUN_104580f44(&uStack_c0,auStack_90);
    (*pcVar11)(lVar3,param_2,param_3);
    puVar5 = &uStack_f0;
    _swift_dynamicCast(puVar5,lVar3,param_3,uVar4,0xe);
    if (((ulong)puVar5 & 1) != 0) {
      uStack_120 = param_2;
      FUN_104580f44(&uStack_f0,&uStack_c0);
      lVar3 = lStack_a0;
      uVar6 = uStack_a8;
      func_0x0001000a8868(&uStack_c0,uStack_a8);
      (**(code **)(lVar3 + 0x10))(uVar6,lVar3);
      func_0x0001000c6518(auStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x18))(uVar6,uStack_78,lStack_70);
      FUN_104580f5c(auStack_90,&uStack_f0);
      lVar3 = lStack_118;
      lVar10 = lStack_118;
      _swift_dynamicCast(lStack_118,&uStack_f0,uVar4,param_3,6);
      (**(code **)(lVar8 + 0x38))(lVar3,(uint)lVar10 ^ 1,1,param_3);
      lVar2 = lStack_100;
      lVar1 = lStack_108;
      lVar10 = lStack_110;
      (**(code **)(lStack_108 + 0x20))(lStack_110,lVar3,lStack_100);
      pcVar7 = *(code **)(lVar8 + 0x30);
      lVar3 = lVar10;
      (*pcVar7)(lVar10,1,param_3);
      if ((int)lVar3 == 1) {
        (*pcVar11)(uStack_f8,lVar9,param_3);
        lVar3 = lVar10;
        (*pcVar7)(lVar10,1,param_3);
        if ((int)lVar3 != 1) {
          (**(code **)(lVar1 + 8))(lVar10,lVar2);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(uStack_f8,lVar10,param_3);
      }
      func_0x0001000834e4(&uStack_c0);
      func_0x0001000834e4(auStack_90);
      param_2 = uStack_120;
      goto LAB_104580d40;
    }
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_104580f04(&uStack_f0,0x113086678,&UNK_10dd18800);
    func_0x0001000834e4(auStack_90);
  }
  (*pcVar11)(uStack_f8,lVar9,param_3);
LAB_104580d40:
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  (**(code **)(param_4 + 0x30))();
  pcVar11 = *(code **)(lVar8 + 8);
  (*pcVar11)(param_2,param_3);
  (*pcVar11)(lVar9,param_3);
  return;
}



/* Entry: 104580da4; end: 104580f03;  */

int FUN_104580da4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104580e20;
        goto LAB_104580e04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104580e04:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104580e20:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104580f04; end: 104580f43;  */

undefined8 FUN_104580f04(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104580f44; end: 104580f5b;  */

undefined8 * FUN_104580f44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 104580f5c; end: 104580f9f;  */

long FUN_104580f5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104580fa0; end: 1045810eb;  */

void FUN_104580fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar1 = param_6;
  lVar2 = param_8;
  uStack_c8 = param_1;
  uStack_c0 = param_4;
  uStack_b4 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(puVar4,lVar1,lVar2);
  uStack_80 = uStack_c0;
  uStack_78 = (undefined1)uStack_b4;
  lStack_a0 = param_6;
  lStack_98 = param_7;
  lStack_90 = param_8;
  lStack_88 = param_9;
  uStack_70 = param_3;
  puStack_68 = puVar4;
  (**(code **)(param_9 + 0x20))(FUN_104581d6c,auStack_b0,PTR___sytN_11034f1b0 + 8,param_7,param_9);
  (**(code **)(*(long *)(param_7 + -8) + 8))(param_2,param_7);
  if (unaff_x21 == 0) {
    (**(code **)(lVar3 + 0x10))(uStack_c8,puVar4,param_6);
  }
  FUN_104581da0(param_3,0x112d49548,&UNK_10d90fde0);
  (**(code **)(lVar3 + 8))(puVar4,param_6);
  return;
}



/* Entry: 1045810ec; end: 104581357;  */

void FUN_1045810ec(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  ulong uStack_98;
  undefined8 *puStack_90;
  long lStack_70;
  ulong uStack_68;
  
  lVar5 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar7 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease();
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,param_3,0,0);
    param_3[1] = 0xd;
    *param_3 = 0;
    _swift_willThrow();
  }
  else {
    uStack_98 = param_2;
    puStack_90 = param_3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    func_0x000100e8b654();
    uVar4 = 0;
    lVar3 = lVar8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar8,0,PTR___sSSN_11034da80,lVar2);
    (**(code **)(lVar6 + 8))(lVar8,lVar1);
    _swift_bridgeObjectRelease();
    if (uVar4 >> 0x3c < 0xf) {
      lStack_70 = lVar3;
      uStack_68 = uVar4;
      func_0x000104540540(param_4,&uStack_98);
      func_0x00010006c00c(lVar3,uVar4);
      FUN_104580fa0(puVar7,&lStack_70,&uStack_98,param_5,param_6 & 1,param_7,
                    PTR___s10Foundation4DataVN_110350ae0,param_8,&PTR_DAT_110789f58);
      FUN_104581da0(param_4,0x112d49548,&UNK_10d90fde0);
      func_0x0001000b44c0(lVar3,uVar4);
      if (unaff_x21 != 0) {
        return;
      }
      (**(code **)(lVar5 + 0x20))(param_1,puVar7,param_7);
      return;
    }
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,param_3,0,0);
    param_3[1] = 0xd;
    *param_3 = 0;
    _swift_willThrow();
  }
  FUN_104581da0(param_4,0x112d49548,&UNK_10d90fde0);
  return;
}



/* Entry: 104581358; end: 1045814ff;  */

undefined1  [16] FUN_104581358(uint param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  lVar3 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar3);
  uVar1 = 0x113084cc0;
  func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
  puVar2 = &uStack_a0;
  _swift_dynamicCast(puVar2,lVar3,param_2,uVar1,6);
  if ((int)puVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_104581da0(&uStack_a0,0x113084cc8,&UNK_10dd16728);
    uVar1 = 0x112deef08;
    func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
    FUN_104581500(alStack_78,param_1 & 0x1010101,param_2,uVar1,param_3,&PTR_DAT_110789f28);
    if (unaff_x21 == 0) {
      unaff_x20 = *(undefined8 *)(alStack_78[0] + 0x10);
      unaff_x21 = alStack_78[0] + 0x20;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,unaff_x20);
      _swift_bridgeObjectRelease(alStack_78[0]);
    }
  }
  else {
    func_0x000100dbb038(&uStack_a0,alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    unaff_x21 = (ulong)(param_1 & 0x1010101);
    unaff_x20 = uStack_60;
    (**(code **)(lStack_58 + 8))(unaff_x21,uStack_60,lStack_58);
    func_0x0001000834e4(alStack_78);
  }
  auVar4._8_8_ = unaff_x20;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 104581500; end: 1045817e7;  */

void FUN_104581500(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  code *pcVar7;
  long lVar8;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ec;
  ulong auStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_74;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  lVar8 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar8);
  uVar1 = 0x113084cc0;
  func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
  puVar2 = auStack_e0;
  _swift_dynamicCast(puVar2,lVar8,param_3,uVar1,6);
  if ((int)puVar2 == 0) {
    auStack_e0[4] = 0;
    auStack_e0[1] = 0;
    auStack_e0[0] = 0;
    auStack_e0[3] = 0;
    auStack_e0[2] = 0;
    FUN_104581da0(auStack_e0,0x113084cc8,&UNK_10dd16728);
    FUN_104579fe8(auStack_e0 + 5,param_3,param_5,param_2 & 0x1010101);
    if (unaff_x21 == 0) {
      uStack_108 = uStack_90;
      lStack_110 = uStack_98;
      uStack_100 = uStack_88;
      uStack_ec = uStack_74;
      uStack_118 = uStack_a0;
      uStack_120 = uStack_a8;
      uStack_128 = uStack_b0;
      uStack_130 = auStack_e0[5];
      FUN_104579d34();
      (**(code **)(param_5 + 0x48))(&uStack_130,&UNK_110788f20,&PTR_DAT_110788f40,param_3,param_5);
      uVar3 = uStack_130;
      uVar6 = uStack_130;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001014d97ac(uVar6,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar6 + uVar3 + 0x20) = 0x7d;
      uStack_128 = CONCAT62(uStack_128._2_6_,0x2c);
      pcVar7 = *(code **)(param_6 + 0x10);
      uStack_130 = uVar6;
      auStack_e0[0] = uVar6;
      _swift_bridgeObjectRetain(uVar6);
      uVar1 = 0x112deef08;
      func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
      uVar4 = uVar1;
      func_0x000104581de0();
      (*pcVar7)(param_1,auStack_e0,uVar1,uVar4,param_4,param_6);
      func_0x00010454077c(&uStack_130);
    }
  }
  else {
    func_0x000100dbb038(auStack_e0,&uStack_130);
    func_0x0001000a8868(&uStack_130,uStack_118);
    uVar3 = (ulong)(param_2 & 0x1010101);
    (**(code **)(lStack_110 + 8))(uVar3,uStack_118,lStack_110);
    if (unaff_x21 == 0) {
      pcVar7 = *(code **)(param_6 + 0x10);
      auStack_e0[0] = uVar3;
      func_0x000104581e30();
      (*pcVar7)(param_1,auStack_e0,PTR___sSS8UTF8ViewVN_11034da18,uVar3,param_4,param_6);
    }
    func_0x0001000834e4(&uStack_130);
  }
  return;
}



/* Entry: 1045817e8; end: 10458188b;  */

void FUN_1045817e8(undefined8 param_1)

{
  long in_x4;
  long extraout_x8;
  long unaff_x21;
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(in_x4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar1 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1045810ec(lVar1);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,lVar1,in_x4);
  }
  return;
}



/* Entry: 10458188c; end: 1045819bf;  */

void FUN_10458188c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar3 = param_5;
  lVar1 = param_6;
  uStack_b0 = param_1;
  uStack_a8 = param_7;
  uStack_a0 = param_8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar4 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(lVar4,param_2,lVar1);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_104580fa0(lVar3,lVar4,&uStack_90,param_3,param_4,param_5,param_6,uStack_a8,uStack_a0);
  (**(code **)(lVar2 + 8))(param_2,param_6);
  if (unaff_x21 == 0) {
    (**(code **)(lVar5 + 0x20))(uStack_b0,lVar3,param_5);
  }
  return;
}



/* Entry: 1045819c0; end: 104581d6b;  */

void FUN_1045819c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte param_4,
                  undefined1 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x21;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *apuStack_180 [2];
  undefined1 auStack_168 [24];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined *apuStack_e8 [3];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == param_1)) {
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,param_1,0,0);
    param_1[1] = 0xd;
    *param_1 = 0;
    _swift_willThrow();
    return;
  }
  lVar1 = 0;
  apuStack_180[1] = param_6;
  func_0x000104557570();
  _swift_allocObject();
  uVar2 = 0x80;
  _swift_slowAlloc(0x80,0xffffffffffffffff);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0x80;
  uStack_108 = 0;
  bStack_f0 = param_4 & 1;
  puStack_118 = param_1;
  puStack_110 = param_2;
  lStack_100 = lVar1;
  uStack_f8 = param_3;
  uStack_c0 = param_3;
  func_0x000104540540(param_5,auStack_140);
  if (lStack_128 == 0) {
    ppuStack_c8 = &PTR_DAT_110789eb8;
    puStack_d0 = &UNK_110789ee0;
    apuStack_e8[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    param_5 = auStack_140;
    func_0x000100dbb038(param_5,apuStack_e8);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_b0 = param_9;
  uStack_a8 = 0;
  puStack_b8 = param_7;
  func_0x00010457b2d0();
  if (((ulong)param_5 & 1) == 0) {
    puVar4 = apuStack_180[1];
    FUN_10456f118(apuStack_180[1],param_7,param_9);
    if (unaff_x21 != 0) goto LAB_104581c80;
LAB_104581bb4:
    uVar6 = (long)puStack_110 - (long)puStack_118;
    if (puStack_118 == (undefined8 *)0x0) goto LAB_104581bdc;
    while (uVar6 != uStack_108) {
      while( true ) {
        if (0x20 < *(byte *)((long)puStack_118 + uStack_108) ||
            (1L << ((ulong)*(byte *)((long)puStack_118 + uStack_108) & 0x3f) & 0x100002600U) == 0) {
          if (puStack_118 == (undefined8 *)0x0) {
            if (uStack_108 == 0) goto LAB_104581c80;
          }
          else if (uVar6 == uStack_108) goto LAB_104581c80;
          FUN_104540590();
          _swift_allocError(&UNK_110788c08,puVar4,0,0);
          uVar2 = 0x11;
          goto LAB_104581c74;
        }
        if ((puStack_118 == (undefined8 *)0x0) || (uVar6 <= uStack_108)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104581d6c);
          (*pcVar7)();
        }
        uStack_108 = uStack_108 + 1;
        if (puStack_118 != (undefined8 *)0x0) break;
LAB_104581bdc:
        if (uStack_108 == 0) goto LAB_104581c80;
      }
    }
  }
  else {
    puVar3 = param_7;
    _swift_conformsToProtocol(param_7,&DAT_10e813964);
    puVar4 = puVar3;
    if ((puVar3 != (undefined8 *)0x0) && (param_7 != (undefined8 *)0x0)) {
      pcVar7 = (code *)puVar3[3];
      lVar1 = 0;
      __sSqMa(0,param_7);
      lVar9 = *(long *)(lVar1 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      puVar4 = (undefined8 *)((long)apuStack_180 - extraout_x8);
      (*pcVar7)(puVar4,param_7,puVar3);
      if (unaff_x21 != 0) {
        func_0x000104571b4c(&puStack_118);
        return;
      }
      lVar8 = param_7[-1];
      puVar5 = puVar4;
      (**(code **)(lVar8 + 0x30))(puVar4,1,param_7);
      if ((int)puVar5 != 1) {
        puStack_150 = param_7;
        puStack_148 = puVar3;
        func_0x0001000c5db4(auStack_168);
        (**(code **)(lVar8 + 0x20))();
        func_0x000100dbb038(auStack_168,auStack_140);
        func_0x000100dbb038(auStack_140,auStack_168);
        puVar4 = apuStack_180[1];
        (**(code **)(lVar8 + 8))(apuStack_180[1],param_7);
        uVar2 = 0x113084cc0;
        func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
        _swift_dynamicCast(puVar4,auStack_168,uVar2,param_7,7);
        goto LAB_104581bb4;
      }
      (**(code **)(lVar9 + 8))(puVar4,lVar1);
    }
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar4,0,0);
    uVar2 = 10;
LAB_104581c74:
    puVar4[1] = uVar2;
    *puVar4 = 0;
    _swift_willThrow();
  }
LAB_104581c80:
  func_0x000104571b4c(&puStack_118);
  return;
}



/* Entry: 104581d6c; end: 104581d9f;  */

void FUN_104581d6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1045819c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104581da0; end: 104581ddf;  */

undefined8 FUN_104581da0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104581de0; end: 104581e6f;  */

void FUN_104581de0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113086fc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112deef08;
  func_0x00010002969c(0x112deef08,&UNK_10d9bc0a0);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000113086fc8 = puVar2;
  return;
}



/* Entry: 104581e70; end: 104581f1f;  */

void FUN_104581e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long extraout_x8;
  long unaff_x21;
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar1 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_104580fa0(lVar1,&uStack_40,&uStack_70);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,lVar1,param_6);
  }
  return;
}



/* Entry: 104581f20; end: 104582037;  */

void FUN_104581f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_a8 = *(long *)(param_7 + -8);
  uVar1 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  uStack_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  func_0x000104540540(uVar3,auStack_98);
  func_0x00010006c00c(param_2,param_3);
  FUN_104580fa0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&uStack_70,auStack_98,
                param_5,param_6,param_7,PTR___s10Foundation4DataVN_110350ae0,param_8,
                &PTR_DAT_110789f58);
  func_0x000100ee9068(param_4);
  func_0x00010006c090(param_2,param_3);
  if (unaff_x21 == 0) {
    (**(code **)(lStack_a8 + 0x20))
              (uStack_a0,auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Entry: 104582038; end: 10458207b;  */

void FUN_104582038(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  
  FUN_104581500(auStack_20,param_1 & 0x1010101,param_2,PTR___s10Foundation4DataVN_110350ae0,param_3,
                &PTR_DAT_110789f58);
  return;
}



/* Entry: 10458207c; end: 104582143;  */

undefined1  [16]
FUN_10458207c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined1 auVar2 [16];
  long lStack_48;
  
  uVar1 = 0x112deef08;
  func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
  FUN_104582144(&lStack_48,param_1,param_2 & 0x1010101,param_3,param_4,uVar1,param_5,param_6,
                &PTR_DAT_110789f28);
  if (unaff_x21 == 0) {
    param_6 = *(undefined8 *)(lStack_48 + 0x10);
    unaff_x21 = lStack_48 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,param_6);
    _swift_bridgeObjectRelease(lStack_48);
  }
  auVar2._8_8_ = param_6;
  auVar2._0_8_ = unaff_x21;
  return auVar2;
}



/* Entry: 104582144; end: 1045826d7;  */

/* WARNING: Removing unreachable block (ram,0x000104582600) */

void FUN_104582144(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar13;
  code *pcVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_180 [8];
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_cc;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7c;
  
  pcStack_138 = (code *)CONCAT44(pcStack_138._4_4_,param_3);
  lVar12 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  uStack_168 = param_1;
  uStack_160 = param_6;
  lStack_158 = param_9;
  uStack_140 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar17 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar17 - extraout_x8_00;
  lStack_148 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_148 + 0x40));
  lVar16 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar14 = *(code **)(param_8 + 8);
  lVar5 = 0;
  lStack_150 = param_5;
  _swift_getAssociatedTypeWitness
            (0,pcVar14,param_5,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_02;
  FUN_104579fe8(&uStack_c0,param_4,param_7,(uint)pcStack_138 & 0x1010101);
  if (unaff_x21 == 0) {
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_e0 = uStack_90;
    uStack_cc = uStack_7c;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar6 = uStack_c0;
    lStack_178 = param_7;
    lStack_170 = lVar4;
    pcStack_138 = pcVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = uStack_c0;
    if ((uVar6 & 1) == 0) {
      uVar11 = 0;
      func_0x0001014d97ac(0,*(long *)(uStack_c0 + 0x10) + 1,1,uStack_c0);
    }
    lVar3 = lStack_150;
    lVar4 = lStack_178;
    uVar6 = *(ulong *)(uVar11 + 0x10);
    uVar10 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001014d97ac(uVar10,uVar6 + 1,1,uVar11);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x5b;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x100);
    uStack_110 = uVar10;
    (**(code **)(lStack_148 + 0x10))(lVar16,uStack_140,lVar3);
    pcVar14 = pcStack_138;
    __sST12makeIterator0B0QzyFTj(lVar15,lVar3,pcStack_138);
    _swift_getAssociatedConformanceWitness
              (pcVar14,lVar3,lVar5,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    __sSt4next7ElementQzSgyFTj(lVar18,lVar5);
    pcVar13 = *(code **)(lVar12 + 0x30);
    lVar16 = lVar18;
    (*pcVar13)(lVar18,1,param_4);
    if ((int)lVar16 != 1) {
      pcStack_138 = *(code **)(lVar12 + 0x20);
      do {
        (*pcStack_138)(puVar17,lVar18,param_4);
        func_0x000104579ec8(puVar17,&uStack_110,param_4,lVar4);
        (**(code **)(lVar4 + 0x48))(&uStack_110,&UNK_110788f20,&PTR_DAT_110788f40,param_4,lVar4);
        uVar6 = uStack_110;
        uVar11 = uStack_110;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = uVar6;
        if ((uVar11 & 1) == 0) {
          uVar9 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar6 = *(ulong *)(uVar9 + 0x10);
        uVar10 = uVar9;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          func_0x0001014d97ac(uVar10,uVar6 + 1,1,uVar9);
        }
        *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x7d;
        (**(code **)(lVar12 + 8))(puVar17,param_4);
        uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
        uStack_110 = uVar10;
        __sSt4next7ElementQzSgyFTj(lVar18,lVar5,pcVar14);
        lVar16 = lVar18;
        (*pcVar13)(lVar18,1,param_4);
      } while ((int)lVar16 != 1);
    }
    (**(code **)(lStack_170 + 8))(lVar15,lVar5);
    uVar6 = *(ulong *)(uVar10 + 0x10);
    uStack_118 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
      uStack_118 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001014d97ac(uStack_118,uVar6 + 1,1,uVar10);
    }
    lVar5 = lStack_158;
    uVar2 = uStack_160;
    uVar1 = uStack_168;
    *(ulong *)(uStack_118 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uStack_118 + uVar6 + 0x20) = 0x5d;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
    pcVar14 = *(code **)(lStack_158 + 0x10);
    uStack_110 = uStack_118;
    _swift_bridgeObjectRetain(uStack_118);
    uVar7 = 0x112deef08;
    func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
    uVar8 = uVar7;
    FUN_104581de0();
    (*pcVar14)(uVar1,&uStack_118,uVar7,uVar8,uVar2,lVar5);
    func_0x00010454077c(&uStack_110);
  }
  return;
}



/* Entry: 1045826d8; end: 10458274b;  */

undefined8
FUN_1045826d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *apuStack_48 [3];
  undefined *puStack_30;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110789eb8;
  puStack_30 = &UNK_110789ee0;
  apuStack_48[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  FUN_10458274c(param_1,param_2,apuStack_48,param_3,param_4,param_5,param_6);
  func_0x0001000834e4(apuStack_48);
  return param_1;
}



/* Entry: 10458274c; end: 1045828d3;  */

undefined8 **
FUN_10458274c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             undefined8 **param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *apuStack_80 [3];
  ulong uStack_68;
  
  puVar1 = (undefined8 *)0x0;
  apuStack_80[1] = (undefined8 *)param_7;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = (undefined8 *)((long)apuStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 != 0) {
    apuStack_80[2] = (undefined8 *)param_1;
    uStack_68 = param_2;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
    func_0x000100e8b654();
    uVar6 = 0;
    puVar3 = puVar4;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar4,0,PTR___sSSN_11034da80,puVar2);
    (**(code **)(lVar7 + 8))(puVar4,puVar1);
    puVar2 = puVar4;
    if (uVar6 >> 0x3c < 0xf) {
      ppuVar5 = apuStack_80 + 2;
      apuStack_80[2] = puVar3;
      uStack_68 = uVar6;
      FUN_1045828d4(ppuVar5,param_3,param_4,param_5 & 1,param_6,PTR___s10Foundation4DataVN_110350ae0
                    ,apuStack_80[1],&PTR_DAT_110789f58);
      func_0x0001000b44c0(puVar3,uVar6);
      return ppuVar5;
    }
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,puVar2,0,0);
  puVar2[1] = 0xd;
  *puVar2 = 0;
  _swift_willThrow();
  return param_6;
}



/* Entry: 1045828d4; end: 10458295f;  */

undefined8
FUN_1045828d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  pcVar2 = *(code **)(param_8 + 0x20);
  uVar1 = 0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  lStack_68 = param_8;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_2;
  __sSaMa(0,param_5);
  (*pcVar2)(&uStack_38,FUN_104582c2c,auStack_90,uVar1,param_6,param_8);
  return uStack_38;
}



/* Entry: 104582960; end: 1045829db;  */

undefined8
FUN_104582960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *apuStack_48 [3];
  undefined *puStack_30;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110789eb8;
  puStack_30 = &UNK_110789ee0;
  apuStack_48[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  FUN_1045828d4(param_1,apuStack_48,param_2,param_3,param_4,param_5,param_6,param_7);
  func_0x0001000834e4(apuStack_48);
  return param_1;
}



/* Entry: 1045829dc; end: 104582c2b;  */

void FUN_1045829dc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,byte param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x21;
  undefined1 auStack_168 [24];
  long lStack_150;
  undefined1 auStack_140 [40];
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined *apuStack_e8 [3];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  uVar3 = param_7;
  __sS2ayxGycfC();
  uStack_58 = uVar3;
  if ((param_2 != 0) && (param_3 != param_2)) {
    FUN_104582c60(param_6,auStack_140);
    lVar2 = 0;
    func_0x000104557570();
    _swift_allocObject();
    uVar3 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(undefined8 *)(lVar2 + 0x18) = 0x80;
    uStack_108 = 0;
    bStack_f0 = param_5 & 1;
    lStack_118 = param_2;
    lStack_110 = param_3;
    lStack_100 = lVar2;
    uStack_f8 = param_4;
    uStack_c0 = param_4;
    func_0x000104540540(auStack_140,auStack_168);
    if (lStack_150 == 0) {
      ppuStack_c8 = &PTR_DAT_110789eb8;
      puStack_d0 = &UNK_110789ee0;
      apuStack_e8[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000100ee9068(auStack_140);
      if (lStack_150 != 0) {
        func_0x000100ee9068(auStack_168);
      }
    }
    else {
      func_0x000100ee9068(auStack_140);
      FUN_104582ca4(auStack_168,apuStack_e8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    puVar4 = &uStack_58;
    uStack_b8 = param_7;
    uStack_b0 = param_9;
    FUN_10456f72c(puVar4,param_7,param_9);
    if (unaff_x21 != 0) {
LAB_104582b38:
      _swift_bridgeObjectRelease(uStack_58);
      func_0x000104571b4c(&lStack_118);
      return;
    }
    uVar5 = lStack_110 - lStack_118;
    if (lStack_118 == 0) goto LAB_104582b74;
    while (uVar5 != uStack_108) {
      while( true ) {
        if (0x20 < *(byte *)(lStack_118 + uStack_108) ||
            (1L << ((ulong)*(byte *)(lStack_118 + uStack_108) & 0x3f) & 0x100002600U) == 0) {
          if (lStack_118 == 0) {
            if (uStack_108 == 0) goto LAB_104582bb8;
          }
          else if (uVar5 == uStack_108) goto LAB_104582bb8;
          FUN_104540590();
          _swift_allocError(&UNK_110788c08,puVar4,0,0);
          puVar4[1] = 0x11;
          *puVar4 = 0;
          _swift_willThrow();
          goto LAB_104582b38;
        }
        if ((lStack_118 == 0) || (uVar5 <= uStack_108)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104582c2c);
          (*pcVar1)();
        }
        uStack_108 = uStack_108 + 1;
        if (lStack_118 != 0) break;
LAB_104582b74:
        if (uStack_108 == 0) goto LAB_104582bb8;
      }
    }
LAB_104582bb8:
    func_0x000104571b4c(&lStack_118);
  }
  *param_1 = uStack_58;
  return;
}



/* Entry: 104582c2c; end: 104582c5f;  */

void FUN_104582c2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1045829dc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104582c60; end: 104582ca3;  */

long FUN_104582c60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104582ca4; end: 104582cbb;  */

undefined8 * FUN_104582ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 104582cbc; end: 104582d3b;  */

undefined8 * FUN_104582cbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *apuStack_58 [3];
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_38 = &PTR_DAT_110789eb8;
  puStack_40 = &UNK_110789ee0;
  apuStack_58[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_1045828d4(puVar1,apuStack_58);
  func_0x0001000834e4(apuStack_58);
  return puVar1;
}



/* Entry: 104582d3c; end: 104582dcb;  */

void FUN_104582d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1045828d4(&uStack_20,param_3,param_4,param_5,param_6,PTR___s10Foundation4DataVN_110350ae0,
                param_7,&PTR_DAT_110789f58);
  return;
}



/* Entry: 104582dcc; end: 104582ddb;  */

/* WARNING: Removing unreachable block (ram,0x000104582f54) */

undefined1  [16] FUN_104582dcc(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [11];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar5 = *(code **)(extraout_x12 + 0x10);
  (*pcVar5)((long)puVar4 - extraout_x13);
  FUN_1045a7fa0(alStack_a8,(long)puVar4 - extraout_x13,1,param_1,param_2);
  (*pcVar5)(puVar4);
  puVar1 = &uStack_c0;
  _swift_dynamicCast(puVar1,puVar4,param_1,&UNK_11078ace8,6);
  if ((int)puVar1 == 0) {
    (**(code **)(param_2 + 0x48))(alStack_a8,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_1,param_2);
  }
  else {
    FUN_10453d538(alStack_a8);
    func_0x00010006c090(uStack_c0,uStack_b8);
    _swift_release(uStack_b0);
  }
  uVar3 = *(undefined8 *)(alStack_a8[0] + 0x10);
  _swift_bridgeObjectRetain(alStack_a8[0]);
  lVar2 = alStack_a8[0] + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,uVar3);
  _swift_bridgeObjectRelease(alStack_a8[0]);
  FUN_1045836d0(alStack_a8);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 104582ddc; end: 104582f73;  */

/* WARNING: Removing unreachable block (ram,0x000104582f54) */

undefined1  [16] FUN_104582ddc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [11];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar5 = *(code **)(extraout_x12 + 0x10);
  (*pcVar5)((long)puVar4 - extraout_x13);
  FUN_1045a7fa0(alStack_a8,(long)puVar4 - extraout_x13,param_1,param_2,param_3);
  (*pcVar5)(puVar4);
  puVar1 = &uStack_c0;
  _swift_dynamicCast(puVar1,puVar4,param_2,&UNK_11078ace8,6);
  if ((int)puVar1 == 0) {
    (**(code **)(param_3 + 0x48))(alStack_a8,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_2,param_3);
  }
  else {
    FUN_10453d538(alStack_a8);
    func_0x00010006c090(uStack_c0,uStack_b8);
    _swift_release(uStack_b0);
  }
  uVar3 = *(undefined8 *)(alStack_a8[0] + 0x10);
  _swift_bridgeObjectRetain(alStack_a8[0]);
  lVar2 = alStack_a8[0] + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,uVar3);
  _swift_bridgeObjectRelease(alStack_a8[0]);
  FUN_1045836d0(alStack_a8);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 104582f74; end: 104583057;  */

void FUN_104582f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar2 = *(long *)(param_5 + -8);
  uVar1 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000104540540(uVar1,auStack_88);
  FUN_104583058(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3,100,0,
                auStack_88,param_5,param_6);
  func_0x000100ee9068(param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))
              (param_1,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Entry: 104583058; end: 10458342f;  */

void FUN_104583058(undefined8 param_1,ulong param_2,undefined1 *param_3,byte *param_4,uint param_5,
                  undefined8 param_6,byte *param_7,byte *param_8,byte *param_9)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  long unaff_x21;
  byte *pbVar20;
  byte abStack_2c0 [8];
  byte abStack_2b8 [8];
  byte abStack_2b0 [8];
  byte abStack_2a8 [8];
  byte abStack_2a0 [8];
  byte abStack_298 [8];
  byte abStack_290 [8];
  byte abStack_288 [8];
  byte abStack_280 [8];
  byte abStack_278 [8];
  byte abStack_270 [8];
  byte abStack_268 [8];
  byte abStack_260 [8];
  byte abStack_258 [8];
  byte abStack_250 [8];
  byte abStack_248 [8];
  byte abStack_240 [8];
  byte abStack_238 [8];
  byte abStack_230 [8];
  byte abStack_228 [8];
  byte abStack_220 [16];
  byte abStack_210 [8];
  byte abStack_208 [8];
  byte abStack_200 [8];
  byte abStack_1f8 [8];
  byte abStack_1f0 [8];
  byte abStack_1e8 [8];
  byte abStack_1e0 [8];
  byte abStack_1d8 [8];
  byte abStack_1d0 [8];
  byte abStack_1c8 [8];
  byte abStack_1c0 [8];
  byte abStack_1b8 [8];
  byte abStack_1b0 [8];
  byte abStack_1a8 [8];
  byte abStack_1a0 [8];
  byte abStack_198 [8];
  byte abStack_190 [8];
  byte abStack_188 [8];
  byte abStack_180 [8];
  byte abStack_178 [8];
  byte abStack_170 [16];
  byte abStack_160 [8];
  byte abStack_158 [8];
  byte abStack_150 [8];
  byte abStack_148 [8];
  byte abStack_140 [8];
  byte abStack_138 [24];
  byte abStack_120 [8];
  byte abStack_118 [8];
  ulong uStack_110;
  byte abStack_108 [8];
  byte abStack_100 [8];
  byte abStack_f8 [8];
  byte abStack_f0 [8];
  byte abStack_e8 [8];
  byte abStack_e0 [8];
  byte abStack_d8 [8];
  byte abStack_d0 [8];
  byte abStack_c8 [8];
  byte abStack_c0 [12];
  uint uStack_b4;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_78 [14];
  undefined2 uStack_6a;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)0x0;
  uVar13 = param_6;
  pbVar14 = param_7;
  pbVar15 = param_8;
  uStack_b4 = param_5;
  pbStack_b0 = param_4;
  uStack_a0 = param_1;
  __sSS10FoundationE8EncodingVMa();
  uVar12 = (undefined2)param_5;
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  pbVar11 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  pbVar17 = pbVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pbVar19 = param_7;
  pbStack_a8 = param_8;
  (**(code **)(param_8 + 0x10))(param_7,param_8);
  uVar1 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  pbVar20 = param_7;
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    auStack_78[0] = (undefined1)param_2;
    auStack_78[1] = (undefined1)(param_2 >> 8);
    auStack_78[2] = (undefined1)(param_2 >> 0x10);
    auStack_78[3] = (undefined1)(param_2 >> 0x18);
    auStack_78[4] = (undefined1)(param_2 >> 0x20);
    auStack_78[5] = (undefined1)(param_2 >> 0x28);
    auStack_78[6] = (undefined1)(param_2 >> 0x30);
    auStack_78[7] = (undefined1)(param_2 >> 0x38);
    auStack_78[8] = SUB81(param_3,0);
    auStack_78[9] = (undefined1)((ulong)param_3 >> 8);
    auStack_78[10] = (undefined1)((ulong)param_3 >> 0x10);
    auStack_78[0xb] = (undefined1)((ulong)param_3 >> 0x18);
    auStack_78[0xc] = (undefined1)((ulong)param_3 >> 0x20);
    auStack_78[0xd] = (undefined1)((ulong)param_3 >> 0x28);
    uStack_6a = (undefined2)((ulong)param_3 >> 0x30);
    uVar12 = (short)pbVar19;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pbVar11);
    func_0x000100e8b654();
    param_2 = 0;
    pbVar19 = pbVar11;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (pbVar11,0,PTR___sSSN_11034da80);
    (**(code **)(lVar18 + 8))(pbVar11,puVar5);
    puVar7 = param_3;
    _swift_bridgeObjectRelease();
    if (param_2 >> 0x3c < 0xf) {
      uVar3 = (uint)(param_2 >> 0x20);
      uVar16 = uVar3 >> 0x1e;
      pbVar14 = pbVar17;
      pbVar15 = param_7;
      pbVar20 = pbVar19;
      if (uVar3 >> 0x1e < 2) {
        if (uVar16 == 0) {
          auStack_78[0] = SUB81(pbVar19,0);
          auStack_78[1] = (undefined1)((ulong)pbVar19 >> 8);
          auStack_78[2] = (undefined1)((ulong)pbVar19 >> 0x10);
          auStack_78[3] = (undefined1)((ulong)pbVar19 >> 0x18);
          auStack_78[4] = (undefined1)((ulong)pbVar19 >> 0x20);
          auStack_78[5] = (undefined1)((ulong)pbVar19 >> 0x28);
          auStack_78[6] = (undefined1)((ulong)pbVar19 >> 0x30);
          auStack_78[7] = (undefined1)((ulong)pbVar19 >> 0x38);
          auStack_78[8] = (undefined1)param_2;
          auStack_78[9] = (undefined1)(param_2 >> 8);
          auStack_78[10] = (undefined1)(param_2 >> 0x10);
          auStack_78[0xb] = (undefined1)(param_2 >> 0x18);
          auStack_78[0xc] = (undefined1)(param_2 >> 0x20);
          auStack_78[0xd] = (undefined1)(param_2 >> 0x28);
          puVar10 = auStack_78 + (param_2 >> 0x30 & 0xff);
LAB_104583388:
          puVar7 = auStack_78;
          pbVar20 = param_7;
          goto LAB_1045833ec;
        }
        param_3 = (undefined1 *)(long)(int)pbVar19;
        puVar10 = (undefined1 *)(((long)pbVar19 >> 0x20) - (long)param_3);
        if ((long)pbVar19 >> 0x20 < (long)param_3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104583420);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (puVar7 == (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          puVar7 = (undefined1 *)0x0;
          puVar10 = (undefined1 *)0x0;
        }
        else {
          puVar6 = puVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8((long)param_3,(long)puVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10458342c);
            (*pcVar4)();
          }
          puVar5 = puVar7 + ((long)param_3 - (long)puVar6);
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar10 <= (long)puVar6) {
            puVar6 = puVar10;
          }
          puVar7 = (undefined1 *)0x0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar7 = puVar5;
          }
          puVar10 = (undefined1 *)0x0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar10 = puVar6 + (long)puVar5;
          }
        }
        uVar12 = (undefined2)(uStack_b4 & 0x101);
        pbVar11 = pbStack_b0;
        uVar13 = param_6;
        param_9 = pbStack_a8;
        FUN_104583430(puVar7,puVar10,pbStack_b0,uStack_b4 & 0x101,param_6);
      }
      else {
        if (uVar16 != 2) {
          auStack_78[8] = 0;
          auStack_78[9] = 0;
          auStack_78[10] = 0;
          auStack_78[0xb] = 0;
          auStack_78[0xc] = 0;
          auStack_78[0xd] = 0;
          auStack_78[0] = 0;
          auStack_78[1] = 0;
          auStack_78[2] = 0;
          auStack_78[3] = 0;
          auStack_78[4] = 0;
          auStack_78[5] = 0;
          auStack_78[6] = 0;
          auStack_78[7] = 0;
          puVar10 = auStack_78;
          goto LAB_104583388;
        }
        lVar18 = *(long *)(pbVar19 + 0x10);
        param_3 = *(undefined1 **)(pbVar19 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar10 = puVar7;
        if (puVar7 != (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,(long)puVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104583428);
            (*pcVar4)();
          }
          puVar7 = puVar7 + (lVar18 - (long)puVar10);
        }
        if (SBORROW8((long)param_3,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104583424);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar5 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          if ((long)(param_3 + -lVar18) <= (long)puVar10) {
            puVar10 = param_3 + -lVar18;
          }
          puVar10 = puVar10 + (long)puVar7;
        }
LAB_1045833ec:
        uVar12 = (undefined2)(uStack_b4 & 0x101);
        pbVar11 = pbStack_b0;
        uVar13 = param_6;
        param_9 = pbStack_a8;
        FUN_104583430(puVar7,puVar10,pbStack_b0,uStack_b4 & 0x101,param_6);
      }
      func_0x0001000b44c0(pbVar19,param_2);
      lVar18 = lStack_98;
      if (unaff_x21 != 0) goto LAB_104583264;
    }
  }
  lVar18 = lStack_98;
  pbVar11 = param_7;
  (**(code **)(lStack_98 + 0x10))(uStack_a0,pbVar17);
LAB_104583264:
  func_0x000100ee9068(param_6);
  pbVar19 = pbVar17;
  pbVar9 = param_7;
  (**(code **)(lVar18 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pbVar17 + -0x60) = param_6;
  *(ulong *)(pbVar17 + -0x50) = param_2;
  *(byte **)(pbVar17 + -0x48) = pbVar20;
  *(undefined1 **)(pbVar17 + -0x40) = param_3;
  *(byte **)(pbVar17 + -0x38) = pbVar17;
  *(undefined1 **)(pbVar17 + -0x30) = puVar5;
  *(byte **)(pbVar17 + -0x28) = param_7;
  *(long *)(pbVar17 + -0x20) = lVar18;
  *(long *)(pbVar17 + -0x18) = unaff_x21;
  *(undefined1 **)(pbVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(pbVar17 + -8) = FUN_104583430;
  if ((pbVar19 != (byte *)0x0) && ((long)pbVar9 - (long)pbVar19 != 0)) {
    *(byte **)(pbVar17 + -0x200) = pbVar14;
    *(long *)(pbVar17 + -0x58) = unaff_x21;
    pbVar17[-0x1a0] = 0;
    pbVar17[-0x19f] = 0;
    pbVar17[-0x19e] = 0;
    pbVar17[-0x19d] = 0;
    pbVar17[-0x19c] = 0;
    pbVar17[-0x19b] = 0;
    pbVar17[-0x19a] = 0;
    pbVar17[-0x199] = 0;
    lVar18 = 0;
    func_0x000104557570();
    _swift_allocObject();
    uVar8 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar18 + 0x10) = uVar8;
    *(undefined8 *)(lVar18 + 0x18) = 0x80;
    pbVar14 = pbVar19 + ((long)pbVar9 - (long)pbVar19);
    *(byte **)(pbVar17 + -0x1d0) = pbVar19;
    *(byte **)(pbVar17 + -0x1c8) = pbVar14;
    *(long *)(pbVar17 + -0x1c0) = lVar18;
    func_0x000104540540(uVar13,pbVar17 + -0x1f8);
    *(byte **)(pbVar17 + -0x1b8) = pbVar11;
    pbVar17[-0x1b0] = (byte)uVar12 & 1;
    pbVar17[-0x1af] = (byte)((ushort)uVar12 >> 8) & 1;
    if (SBORROW8((long)pbVar11,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045836d0);
      (*pcVar4)();
    }
    *(byte **)(pbVar17 + -0x1a8) = pbVar11 + -1;
    do {
      bVar2 = *pbVar19;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar11 = pbVar19 + 1;
        do {
          if (pbVar11 == pbVar14) {
            *(byte **)(pbVar17 + -0x1d0) = pbVar14;
            goto LAB_104583550;
          }
          pbVar19 = pbVar11 + 1;
          bVar2 = *pbVar11;
          pbVar11 = pbVar19;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar19 = pbVar19 + 1;
      }
      *(byte **)(pbVar17 + -0x1d0) = pbVar19;
    } while (pbVar19 != pbVar14);
LAB_104583550:
    pbVar19 = pbVar15;
    _swift_conformsToProtocol(pbVar15,&DAT_10e8147e0);
    if (pbVar19 == (byte *)0x0 || pbVar15 == (byte *)0x0) {
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,pbVar19,0,0);
      *pbVar19 = 6;
      _swift_willThrow();
      func_0x00010454082c(pbVar17 + -0x1f8);
    }
    else {
      (**(code **)(pbVar19 + 8))(pbVar17 + -0xa0,pbVar15,pbVar19);
      *(undefined8 *)(pbVar17 + -0x188) = *(undefined8 *)(pbVar17 + -0x98);
      *(undefined8 *)(pbVar17 + -400) = *(undefined8 *)(pbVar17 + -0xa0);
      *(undefined8 *)(pbVar17 + -0x178) = *(undefined8 *)(pbVar17 + -0x88);
      *(undefined8 *)(pbVar17 + -0x180) = *(undefined8 *)(pbVar17 + -0x90);
      *(undefined8 *)(pbVar17 + -0x168) = *(undefined8 *)(pbVar17 + -0x78);
      *(undefined8 *)(pbVar17 + -0x170) = *(undefined8 *)(pbVar17 + -0x80);
      *(undefined8 *)(pbVar17 + -0x118) = *(undefined8 *)(pbVar17 + -0x1c0);
      *(undefined8 *)(pbVar17 + -0x120) = *(undefined8 *)(pbVar17 + -0x1c8);
      *(undefined8 *)(pbVar17 + -0x108) = *(undefined8 *)(pbVar17 + -0x1b0);
      *(undefined8 *)(pbVar17 + -0x110) = *(undefined8 *)(pbVar17 + -0x1b8);
      *(undefined8 *)(pbVar17 + -0xf8) = *(undefined8 *)(pbVar17 + -0x1a0);
      *(undefined8 *)(pbVar17 + -0x100) = *(undefined8 *)(pbVar17 + -0x1a8);
      *(undefined8 *)(pbVar17 + -0x148) = *(undefined8 *)(pbVar17 + -0x1f0);
      *(undefined8 *)(pbVar17 + -0x150) = *(undefined8 *)(pbVar17 + -0x1f8);
      *(byte **)(pbVar17 + -0x160) = pbVar15;
      pbVar17[-0x198] = 0;
      pbVar17[-0x197] = 1;
      *(byte **)(pbVar17 + -0xb0) = param_9;
      *(undefined8 *)(pbVar17 + -0x138) = *(undefined8 *)(pbVar17 + -0x1e0);
      *(undefined8 *)(pbVar17 + -0x140) = *(undefined8 *)(pbVar17 + -0x1e8);
      *(undefined8 *)(pbVar17 + -0x128) = *(undefined8 *)(pbVar17 + -0x1d0);
      *(undefined8 *)(pbVar17 + -0x130) = *(undefined8 *)(pbVar17 + -0x1d8);
      *(undefined8 *)(pbVar17 + -200) = *(undefined8 *)(pbVar17 + -0x170);
      *(undefined8 *)(pbVar17 + -0xd0) = *(undefined8 *)(pbVar17 + -0x178);
      *(undefined8 *)(pbVar17 + -0xb8) = *(undefined8 *)(pbVar17 + -0x160);
      *(undefined8 *)(pbVar17 + -0xc0) = *(undefined8 *)(pbVar17 + -0x168);
      *(undefined8 *)(pbVar17 + -0xe8) = *(undefined8 *)(pbVar17 + -400);
      *(undefined8 *)(pbVar17 + -0xf0) = *(undefined8 *)(pbVar17 + -0x198);
      *(undefined8 *)(pbVar17 + -0xd8) = *(undefined8 *)(pbVar17 + -0x180);
      *(undefined8 *)(pbVar17 + -0xe0) = *(undefined8 *)(pbVar17 + -0x188);
      pbVar19 = pbVar17 + -0x150;
      lVar18 = *(long *)(pbVar17 + -0x58);
      (**(code **)(param_9 + 0x40))(pbVar19,&UNK_11078a2b0,&PTR_DAT_11078a2d8,pbVar15,param_9);
      if ((lVar18 == 0) && (*(long *)(pbVar17 + -0x128) != *(long *)(pbVar17 + -0x120))) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,pbVar19,0,0);
        *pbVar19 = 2;
        _swift_willThrow();
      }
      func_0x000104540860(pbVar17 + -0x150);
    }
  }
  return;
}



/* Entry: 104583430; end: 1045836cf;  */

void FUN_104583430(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 *param_7,long param_8)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long unaff_x21;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  byte bStack_1b0;
  byte bStack_1af;
  undefined6 uStack_1ae;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((param_1 != (byte *)0x0) && (param_2 - (long)param_1 != 0)) {
    uStack_1a0 = 0;
    lVar4 = 0;
    func_0x000104557570();
    _swift_allocObject();
    uVar5 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_1d0 = param_1;
    pbStack_1c8 = pbVar1;
    lStack_1c0 = lVar4;
    func_0x000104540540(param_5,&uStack_1f8);
    bStack_1b0 = (byte)param_4 & 1;
    bStack_1af = (byte)((ulong)param_4 >> 8) & 1;
    lStack_1a8 = param_3 + -1;
    lStack_1b8 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045836d0);
      (*pcVar3)();
    }
    do {
      bVar2 = *param_1;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar8 = param_1 + 1;
        do {
          pbStack_1d0 = pbVar1;
          if (pbVar8 == pbVar1) goto LAB_104583550;
          param_1 = pbVar8 + 1;
          bVar2 = *pbVar8;
          pbVar8 = param_1;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        param_1 = param_1 + 1;
      }
      pbStack_1d0 = param_1;
    } while (param_1 != pbVar1);
LAB_104583550:
    puVar6 = param_7;
    _swift_conformsToProtocol(param_7,&DAT_10e8147e0);
    if (puVar6 == (undefined1 *)0x0 || param_7 == (undefined1 *)0x0) {
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar6,0,0);
      *puVar6 = 6;
      _swift_willThrow();
      func_0x00010454082c(&uStack_1f8);
    }
    else {
      (**(code **)(puVar6 + 8))(&uStack_a0,param_7,puVar6);
      uStack_188 = uStack_98;
      uStack_190 = uStack_a0;
      uStack_178 = uStack_88;
      uStack_180 = uStack_90;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      lStack_118 = lStack_1c0;
      pbStack_120 = pbStack_1c8;
      uStack_108 = CONCAT62(uStack_1ae,CONCAT11(bStack_1af,bStack_1b0));
      lStack_110 = lStack_1b8;
      uStack_f8 = uStack_1a0;
      lStack_100 = lStack_1a8;
      uStack_148 = uStack_1f0;
      uStack_150 = uStack_1f8;
      uStack_198 = 0x100;
      uStack_138 = uStack_1e0;
      uStack_140 = uStack_1e8;
      pbStack_128 = pbStack_1d0;
      uStack_130 = uStack_1d8;
      uStack_c8 = uStack_80;
      uStack_d0 = uStack_88;
      uStack_c0 = uStack_78;
      uStack_f0 = CONCAT62(uStack_196,0x100);
      uStack_e8 = uStack_a0;
      uStack_d8 = uStack_90;
      uStack_e0 = uStack_98;
      puVar7 = &uStack_150;
      puStack_160 = param_7;
      puStack_b8 = param_7;
      lStack_b0 = param_8;
      (**(code **)(param_8 + 0x40))(puVar7,&UNK_11078a2b0,&PTR_DAT_11078a2d8,param_7,param_8);
      if ((unaff_x21 == 0) && (pbStack_128 != pbStack_120)) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,puVar7,0,0);
        *(undefined1 *)puVar7 = 2;
        _swift_willThrow();
      }
      func_0x000104540860(&uStack_150);
    }
  }
  return;
}



/* Entry: 1045836d0; end: 104583703;  */

undefined8 FUN_1045836d0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1045a1b7c)();
  return param_1;
}



/* Entry: 104583704; end: 104583783;  */

void FUN_104583704(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  long unaff_x21;
  
  (**(code **)(param_5 + 0x10))(param_4,param_5);
  (*param_2)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  }
  return;
}



/* Entry: 104583784; end: 10458378b;  */

undefined8 FUN_104583784(void)

{
  return 1;
}



/* Entry: 10458378c; end: 10458381b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10458378c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10458381c; end: 104583867;  */

void FUN_10458381c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  _swift_getDynamicType();
  _swift_getMetatypeMetadata(param_1);
  __sSS10reflectingSSx_tclufC(auStack_28,param_1);
  return;
}



/* Entry: 104583868; end: 10458396f;  */

uint FUN_104583868(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = (int)&uStack_100;
  FUN_104560f98(param_1,auStack_c0);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_100,auStack_c0,uVar2,&UNK_110790230,6);
  if (iVar1 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_10458a2e8(0,0,0,0,0,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_98 = uStack_100;
    uStack_90 = uStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_70 = uStack_d8;
    uStack_68 = uStack_d0;
    FUN_1046188e0();
    FUN_10458a2e8(uStack_100,uStack_f8,uStack_f0,uStack_e8,uStack_e0,uStack_d8,uStack_d0);
  }
  return unaff_w20 & 1;
}



/* Entry: 104583970; end: 104583a6b;  */

uint FUN_104583970(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_104560f98(param_1,auStack_c8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_11078b048,6);
  if ((int)puVar2 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    FUN_10458a760(&uStack_140,0x113087078,&UNK_10dd18990);
    unaff_w20 = 0;
  }
  else {
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_150 = uStack_d0;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_30 = uStack_d0;
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    uStack_38 = uStack_d8;
    uStack_40 = uStack_e0;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    FUN_1045b5914();
    FUN_10458a760(&uStack_1c0,0x113087078,&UNK_10dd18990);
  }
  return unaff_w20 & 1;
}



/* Entry: 104583a6c; end: 104583caf;  */

uint FUN_104583a6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_104560f98(param_1,auStack_a8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_d8;
  _swift_dynamicCast(puVar2,auStack_a8,uVar1,&UNK_11078f680,6);
  if ((int)puVar2 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0xff;
    uStack_c8 = 0x2000000000000000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010458a3b8(0,0,0x2000000000000000,0xff,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_80 = uStack_d8;
    uStack_78 = uStack_d0;
    uStack_70 = uStack_c8;
    uStack_68 = (undefined1)uStack_c0;
    uStack_60 = uStack_b8;
    uStack_58 = uStack_b0;
    FUN_10460c6a0();
    func_0x00010458a3b8(uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8,uStack_b0);
  }
  return unaff_w20 & 1;
}



/* Entry: 104583cb0; end: 1045840cf;  */

uint FUN_104583cb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_104560f98(param_1,auStack_d8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_160;
  _swift_dynamicCast(puVar2,auStack_d8,uVar1,&UNK_11078ff48,6);
  if ((int)puVar2 == 0) {
    func_0x00010458a34c(&uStack_b0);
    uStack_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_108 = uStack_58;
    uStack_110 = uStack_60;
    uStack_f8 = uStack_48;
    uStack_100 = uStack_50;
    uStack_e8 = uStack_38;
    uStack_f0 = uStack_40;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    FUN_10458a760(&uStack_160,0x113086fe0,&UNK_10dd188f8);
    unaff_w20 = 0;
  }
  else {
    func_0x00010458a364(&uStack_160);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_48 = uStack_f8;
    uStack_50 = uStack_100;
    uStack_38 = uStack_e8;
    uStack_40 = uStack_f0;
    FUN_1046165b4();
    FUN_10458a760(&uStack_1e0,0x113086fe0,&UNK_10dd188f8);
  }
  return unaff_w20 & 1;
}



/* Entry: 1045840d0; end: 1045841bf;  */

uint FUN_1045840d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_104560f98(param_1,auStack_68);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar3,&UNK_11078ace8,6);
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  if (iVar1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else if ((param_4 == uStack_70) || (uVar2 = uStack_70, FUN_10453dc68(), (uVar2 & 1) != 0)) {
    func_0x000100e25fcc(param_2,param_3,uVar3,uVar4);
    uVar6 = (uint)param_2;
    FUN_10458a65c(uVar3,uVar4,uVar5);
    goto LAB_1045841a4;
  }
  FUN_10458a65c(uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_1045841a4:
  return uVar6 & 1;
}



/* Entry: 1045841c0; end: 1045842af;  */

uint FUN_1045841c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_14f;
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3f;
  
  FUN_104560f98(param_1,auStack_c8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_11078d6b8,6);
  if ((int)puVar2 == 0) {
    uStack_df = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    FUN_10458a760(&uStack_140,0x113087040,&UNK_10dd18958);
    unaff_w20 = 0;
  }
  else {
    uStack_168 = uStack_f8;
    uStack_170 = uStack_100;
    uStack_160 = uStack_f0;
    uStack_14f = uStack_df;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_3f = uStack_df;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    FUN_1045e051c();
    FUN_10458a760(&uStack_1b0,0x113087040,&UNK_10dd18958);
  }
  return unaff_w20 & 1;
}



/* Entry: 1045842b0; end: 1045843ef;  */

uint FUN_1045842b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_18e;
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
  undefined8 uStack_fe;
  undefined1 auStack_e8 [40];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3e;
  
  FUN_104560f98(param_1,auStack_e8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_180;
  _swift_dynamicCast(puVar2,auStack_e8,uVar1,&UNK_11078d740,6);
  if ((int)puVar2 == 0) {
    func_0x00010458a608(&uStack_c0);
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_110 = uStack_50;
    uStack_fe = uStack_3e;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    FUN_10458a760(&uStack_180,0x113087038,&UNK_10dd18950);
    unaff_w20 = 0;
  }
  else {
    func_0x00010458a62c(&uStack_180);
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    uStack_1a0 = uStack_110;
    uStack_18e = uStack_fe;
    uStack_1e8 = uStack_158;
    uStack_1f0 = uStack_160;
    uStack_1d8 = uStack_148;
    uStack_1e0 = uStack_150;
    uStack_1c8 = uStack_138;
    uStack_1d0 = uStack_140;
    uStack_1b8 = uStack_128;
    uStack_1c0 = uStack_130;
    uStack_208 = uStack_178;
    uStack_210 = uStack_180;
    uStack_1f8 = uStack_168;
    uStack_200 = uStack_170;
    uStack_58 = uStack_118;
    uStack_60 = uStack_120;
    uStack_50 = uStack_110;
    uStack_3e = uStack_fe;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    FUN_1045e1298();
    FUN_10458a760(&uStack_210,0x113087038,&UNK_10dd18950);
  }
  return unaff_w20 & 1;
}



/* Entry: 1045843f0; end: 1045848e3;  */

uint FUN_1045843f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_10f;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3f;
  
  FUN_104560f98(param_1,auStack_a8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_100;
  _swift_dynamicCast(puVar2,auStack_a8,uVar1,&UNK_11078d130,6);
  if ((int)puVar2 == 0) {
    uStack_bf = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    FUN_10458a760(&uStack_100,0x113087060,&UNK_10dd201f0);
    unaff_w20 = 0;
  }
  else {
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_120 = uStack_d0;
    uStack_10f = uStack_bf;
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_50 = uStack_d0;
    uStack_3f = uStack_bf;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    FUN_1045da100();
    FUN_10458a760(&uStack_150,0x113087060,&UNK_10dd201f0);
  }
  return unaff_w20 & 1;
}



/* Entry: 1045848e4; end: 104584a6f;  */

uint FUN_1045848e4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  byte bStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,&UNK_11078e170,6);
  bVar7 = bStack_70;
  lVar6 = lStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 1;
    bStack_70 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    lVar6 = 1;
    bVar7 = 0;
  }
  else {
    lVar8 = unaff_x20[3];
    if (lVar8 == 0) {
      if (lStack_78 == 0) {
LAB_1045849c8:
        if (*(byte *)(unaff_x20 + 4) == 2) {
          if (bVar7 == 2) {
LAB_1045849dc:
            uVar3 = *unaff_x20;
            func_0x000100e25fcc(uVar3,unaff_x20[1],uVar2,uVar4);
            uVar10 = (uint)uVar3;
            func_0x00010458a520(uVar2,uVar4,uVar5,lVar6,bVar7);
            goto LAB_104584a54;
          }
        }
        else if (bVar7 == 2) {
          bVar7 = 2;
        }
        else if (((*(byte *)(unaff_x20 + 4) ^ bVar7) & 1) == 0) goto LAB_1045849dc;
      }
    }
    else if (lStack_78 == 0) {
      lVar6 = 0;
    }
    else {
      uVar9 = unaff_x20[2];
      if (((uVar9 == uStack_80) && (lVar8 == lStack_78)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,lVar8,uStack_80,lStack_78,0), (uVar9 & 1) != 0)) goto LAB_1045849c8;
    }
  }
  func_0x00010458a520(uVar2,uVar4,uVar5,lVar6,bVar7);
  uVar10 = 0;
LAB_104584a54:
  return uVar10 & 1;
}



/* Entry: 104584a70; end: 104584bcf;  */

uint FUN_104584a70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 auStack_118 [40];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  FUN_104560f98(param_1,auStack_118);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_1e0;
  _swift_dynamicCast(puVar2,auStack_118,uVar1,&UNK_11078cee8,6);
  if ((int)puVar2 == 0) {
    func_0x00010458a688(&uStack_f0);
    uStack_138 = uStack_48;
    uStack_140 = uStack_50;
    uStack_128 = uStack_38;
    uStack_130 = uStack_40;
    uStack_120 = uStack_30;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    uStack_148 = uStack_58;
    uStack_150 = uStack_60;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    FUN_10458a760(&uStack_1e0,0x113087070,&UNK_10dd18988);
    unaff_w20 = 0;
  }
  else {
    func_0x00010458a6ac(&uStack_1e0);
    uStack_208 = uStack_138;
    uStack_210 = uStack_140;
    uStack_1f8 = uStack_128;
    uStack_200 = uStack_130;
    uStack_248 = uStack_178;
    uStack_250 = uStack_180;
    uStack_238 = uStack_168;
    uStack_240 = uStack_170;
    uStack_228 = uStack_158;
    uStack_230 = uStack_160;
    uStack_218 = uStack_148;
    uStack_220 = uStack_150;
    uStack_288 = uStack_1b8;
    uStack_290 = uStack_1c0;
    uStack_278 = uStack_1a8;
    uStack_280 = uStack_1b0;
    uStack_268 = uStack_198;
    uStack_270 = uStack_1a0;
    uStack_258 = uStack_188;
    uStack_260 = uStack_190;
    uStack_2a8 = uStack_1d8;
    uStack_2b0 = uStack_1e0;
    uStack_298 = uStack_1c8;
    uStack_2a0 = uStack_1d0;
    uStack_48 = uStack_138;
    uStack_50 = uStack_140;
    uStack_38 = uStack_128;
    uStack_40 = uStack_130;
    uStack_88 = uStack_178;
    uStack_90 = uStack_180;
    uStack_78 = uStack_168;
    uStack_80 = uStack_170;
    uStack_68 = uStack_158;
    uStack_70 = uStack_160;
    uStack_58 = uStack_148;
    uStack_60 = uStack_150;
    uStack_c8 = uStack_1b8;
    uStack_d0 = uStack_1c0;
    uStack_b8 = uStack_1a8;
    uStack_c0 = uStack_1b0;
    uStack_a8 = uStack_198;
    uStack_b0 = uStack_1a0;
    uStack_98 = uStack_188;
    uStack_a0 = uStack_190;
    uStack_1f0 = uStack_120;
    uStack_30 = uStack_120;
    uStack_e8 = uStack_1d8;
    uStack_f0 = uStack_1e0;
    uStack_d8 = uStack_1c8;
    uStack_e0 = uStack_1d0;
    FUN_1045d6734();
    FUN_10458a760(&uStack_2b0,0x113087070,&UNK_10dd18988);
  }
  return unaff_w20 & 1;
}



/* Entry: 104584bd0; end: 104584deb;  */

uint FUN_104584bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,code *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_78);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar3,param_5,6);
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
LAB_104584ccc:
    FUN_10458a65c(uVar3,uVar4,uVar5);
    uVar6 = 0;
  }
  else {
    if (param_4 != uStack_80) {
      _swift_retain(param_4);
      _swift_retain(uVar5);
      uVar2 = param_4;
      (*param_6)(param_4,uVar5);
      _swift_release(uVar5);
      _swift_release(param_4);
      if ((uVar2 & 1) == 0) goto LAB_104584ccc;
    }
    func_0x000100e25fcc(param_2,param_3,uVar3,uVar4);
    uVar6 = (uint)param_2;
    FUN_10458a65c(uVar3,uVar4,uVar5);
  }
  return uVar6 & 1;
}



/* Entry: 104584dec; end: 104584eff;  */

uint FUN_104584dec(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined2 uStack_64;
  
  iVar1 = (int)&uStack_100;
  FUN_104560f98(param_1,auStack_c0);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_100,auStack_c0,uVar2,&UNK_11078ea38,6);
  if (iVar1 == 0) {
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d2 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_10458a444(0,0,0,0,0,0,0);
    unaff_w20 = 0;
  }
  else {
    uStack_98 = uStack_100;
    uStack_90 = uStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_64 = uStack_cc;
    uStack_68 = uStack_d0;
    func_0x0001045f4e84();
    FUN_10458a444(uStack_100,uStack_f8,uStack_f0,uStack_e8,uStack_e0,CONCAT26(uStack_d2,uStack_d8),
                  (ulong)CONCAT24(uStack_cc,uStack_d0));
  }
  return unaff_w20 & 1;
}



/* Entry: 104584f00; end: 10458502b;  */

uint FUN_104584f00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_16f;
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
  undefined8 uStack_100;
  undefined8 uStack_ef;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3f;
  
  FUN_104560f98(param_1,auStack_d8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_160;
  _swift_dynamicCast(puVar2,auStack_d8,uVar1,&UNK_11078de90,6);
  if ((int)puVar2 == 0) {
    func_0x00010458a550(&uStack_b0);
    uStack_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_108 = uStack_58;
    uStack_110 = uStack_60;
    uStack_100 = uStack_50;
    uStack_ef = uStack_3f;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    FUN_10458a760(&uStack_160,0x113087018,&UNK_10dd18930);
    unaff_w20 = 0;
  }
  else {
    func_0x00010458a56c(&uStack_160);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_180 = uStack_100;
    uStack_16f = uStack_ef;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_50 = uStack_100;
    uStack_3f = uStack_ef;
    FUN_1045eb264();
    FUN_10458a760(&uStack_1e0,0x113087018,&UNK_10dd18930);
  }
  return unaff_w20 & 1;
}



/* Entry: 10458502c; end: 10458512b;  */

uint FUN_10458502c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_104560f98(param_1,auStack_c8);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_140;
  _swift_dynamicCast(puVar2,auStack_c8,uVar1,&UNK_11078d020,6);
  if ((int)puVar2 == 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 1;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_d8 = 0;
    FUN_10458a760(&uStack_140,0x113087068,&UNK_10dd18980);
    unaff_w20 = 0;
  }
  else {
    uStack_168 = uStack_f8;
    uStack_170 = uStack_100;
    uStack_160 = uStack_f0;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    FUN_1045d91a8();
    FUN_10458a760(&uStack_1b0,0x113087068,&UNK_10dd18980);
  }
  return unaff_w20 & 1;
}



/* Entry: 10458512c; end: 10458529b;  */

uint FUN_10458512c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  int iStack_78;
  undefined1 uStack_74;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,param_6,6);
  if (iVar1 == 0) {
    uStack_88 = 0xf000000000000000;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_74 = 0;
    iStack_78 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)CONCAT14(uStack_74,iStack_78);
    if ((param_4 & 0xff00000000) == 0x100000000) {
      if ((uStack_80 & 0xff00000000) == 0x100000000) {
LAB_104585224:
        if ((param_5 & 0xff00000000) == 0x100000000) {
          if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
LAB_10458525c:
            func_0x000100e25fcc(param_2,param_3,uStack_90,uStack_88);
            uVar4 = (uint)param_2;
            (*param_7)(uStack_90,uStack_88,uStack_80,uVar3);
            goto LAB_1045851f8;
          }
        }
        else if (((uVar3 & 0xffffffff00000000) != 0x100000000) && ((int)param_5 == iStack_78))
        goto LAB_10458525c;
      }
    }
    else if (((uStack_80 & 0xff00000000) != 0x100000000) && ((int)param_4 == (int)uStack_80))
    goto LAB_104585224;
  }
  (*param_7)(uStack_90,uStack_88,uStack_80,uVar3);
  uVar4 = 0;
LAB_1045851f8:
  return uVar4 & 1;
}



/* Entry: 10458529c; end: 1045853bb;  */

uint FUN_10458529c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&uStack_b0;
  FUN_104560f98(param_1,auStack_88);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_b0,auStack_88,uVar2,param_6,6);
  uVar5 = uStack_98;
  uVar4 = uStack_a0;
  uVar3 = uStack_a8;
  uVar2 = uStack_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    (*param_7)(param_2,uStack_b0);
    if (((param_2 & 1) != 0) &&
       (func_0x000100e25fcc(param_3,param_4,uVar3,uVar4), (param_3 & 1) != 0)) {
      FUN_104558fb4(param_5,uVar5);
      uVar6 = (uint)param_5;
      FUN_10458a6b0(uVar2,uVar3,uVar4,uVar5);
      goto LAB_104585398;
    }
  }
  FUN_10458a6b0(uVar2,uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_104585398:
  return uVar6 & 1;
}



/* Entry: 1045853bc; end: 1045857f7;  */

uint FUN_1045853bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_104560f98(param_1,auStack_98);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_e0;
  _swift_dynamicCast(puVar2,auStack_98,uVar1,&UNK_11078e928,6);
  if ((int)puVar2 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_10458a760(&uStack_e0,0x113086ff8,&UNK_10dd18910);
    unaff_w20 = 0;
  }
  else {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_f0 = uStack_a0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
    uStack_38 = uStack_a8;
    uStack_40 = uStack_b0;
    uStack_30 = uStack_a0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    func_0x0001045f4cfc();
    FUN_10458a760(&uStack_130,0x113086ff8,&UNK_10dd18910);
  }
  return unaff_w20 & 1;
}


