/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a72308; end: 109a72787;  */

double FUN_109a72308(double param_1,double param_2,long param_3,double *param_4,double *param_5,
                    double *param_6,double *param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar8;
  undefined4 **ppuVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  double **ppdVar12;
  double *pdVar13;
  ulong uVar14;
  double *pdVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  float *pfVar21;
  int iVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 *puVar25;
  double *pdVar26;
  long lVar27;
  int *piVar28;
  double *pdVar29;
  double *pdVar30;
  int *piVar31;
  uint uVar32;
  long lVar33;
  double *pdVar34;
  double *pdVar35;
  code *pcVar36;
  double dVar37;
  long lVar38;
  ulong uVar39;
  double *pdVar40;
  ulong uVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined4 auStack_16a8 [2];
  uint *puStack_16a0;
  undefined8 uStack_1698;
  undefined4 auStack_1690 [2];
  undefined4 *puStack_1688;
  undefined8 uStack_1680;
  undefined4 auStack_1678 [2];
  undefined1 *puStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  uint *puStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  long lStack_1628;
  ulong uStack_1620;
  undefined8 *puStack_1618;
  undefined8 auStack_1610 [2];
  uint uStack_1600;
  int iStack_15fc;
  int iStack_15f8;
  int iStack_15f4;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  long lStack_15c8;
  long lStack_15c0;
  undefined1 *puStack_15b8;
  undefined1 auStack_15b0 [16];
  undefined4 uStack_15a0;
  int iStack_159c;
  undefined4 uStack_1598;
  undefined4 uStack_1594;
  undefined4 uStack_1590;
  undefined4 uStack_158c;
  undefined4 uStack_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  long lStack_1568;
  ulong uStack_1560;
  undefined8 *puStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined1 auStack_1540 [4];
  int iStack_153c;
  int iStack_1538;
  int aiStack_1534 [11];
  long lStack_1508;
  long lStack_1500;
  undefined1 *puStack_14f8;
  undefined1 auStack_14f0 [16];
  uint uStack_14e0;
  int iStack_14dc;
  int iStack_14d8;
  int aiStack_14d4 [11];
  long lStack_14a8;
  long lStack_14a0;
  undefined1 *puStack_1498;
  undefined1 auStack_1490 [16];
  undefined4 *puStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined4 uStack_13f8;
  ulong uStack_13f0;
  undefined8 uStack_13e8;
  undefined4 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  ulong uStack_13c8;
  double **ppdStack_13c0;
  ulong uStack_13b8;
  double dStack_13b0;
  ulong uStack_13a8;
  double dStack_13a0;
  ulong uStack_1398;
  int *piStack_1390;
  undefined8 *puStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  double dStack_1370;
  double **ppdStack_1368;
  double *pdStack_1360;
  undefined8 *puStack_1358;
  undefined8 uStack_1350;
  long lStack_1348;
  double adStack_12d8 [129];
  double dStack_ed0;
  double dStack_ec8;
  double dStack_ec0;
  double dStack_eb8;
  long lStack_eb0;
  double adStack_df8 [129];
  long lStack_9f0;
  double dStack_9e0;
  ulong uStack_9d8;
  double *pdStack_9d0;
  ulong uStack_9c8;
  double *pdStack_9c0;
  long lStack_9b8;
  ulong uStack_9b0;
  double dStack_9a8;
  double *pdStack_9a0;
  double *pdStack_998;
  undefined1 **ppuStack_990;
  code *pcStack_988;
  ulong uStack_978;
  double *pdStack_970;
  double *pdStack_968;
  double *pdStack_960;
  double adStack_958 [129];
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  long lStack_530;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  double *pdStack_4a8;
  double dStack_4a0;
  double *pdStack_488;
  double *pdStack_480;
  double adStack_478 [129];
  long lStack_70;
  double *pdVar7;
  
  dStack_4a0 = param_1;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar35 = *(double **)(param_3 + 0x10);
  dVar37 = param_4[2];
  pdVar40 = (double *)param_5[2];
  uVar41 = *(ulong *)(param_3 + 0x50);
  dVar42 = param_4[10];
  uVar23 = (ulong)param_5[10] >> 3;
  uVar32 = *(uint *)((long)param_5 + 0xc);
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar23 = 0;
  }
  uVar1 = **(uint **)(param_3 + 0x40);
  uVar19 = (*(uint **)(param_3 + 0x40))[1];
  lVar38 = (long)(int)uVar1;
  pdVar6 = adStack_478;
  pdStack_488 = pdVar6;
  uVar2 = uVar1 << 3;
  if (pdVar40 != (double *)0x0 && (int)uVar32 < (int)uVar19) {
    uVar2 = uVar1 * 0x28;
  }
  pdVar34 = (double *)(long)(int)uVar2;
  pdStack_4a8 = pdVar6;
  if (0x408 < uVar2) {
    pdVar6 = pdVar34;
    __Znam();
    pdStack_488 = pdVar6;
  }
  uVar41 = uVar41 >> 2;
  pdVar26 = (double *)(ulong)uVar1;
  pdStack_480 = pdVar34;
  lVar27 = (long)(int)uVar19;
  if (pdVar40 != (double *)0x0 && (int)uVar32 < (int)uVar19) {
    pdVar8 = pdVar6 + lVar38;
    pdVar30 = pdVar8;
    if (0 < (int)uVar1) {
      do {
        param_1 = *pdVar40;
        pdVar40 = pdVar40 + uVar23;
        pdVar30[1] = param_1;
        *pdVar30 = param_1;
        pdVar30[3] = param_1;
        pdVar30[2] = param_1;
        lVar38 = lVar38 + -1;
        pdVar30 = pdVar30 + 4;
      } while (lVar38 != 0);
    }
    bVar5 = uVar23 != 0;
    uVar23 = 0;
    pdVar40 = pdVar8;
    if (bVar5) {
      uVar23 = 4;
    }
LAB_109a72414:
    if (0 < (int)uVar19) {
      pdVar29 = (double *)0x0;
      lVar38 = uVar41 * 4;
      pdVar30 = pdVar35 + 1;
      param_4 = pdVar8;
      param_5 = pdVar35;
      do {
        if (pdVar40 == (double *)0x0) {
          pdVar15 = param_5;
          pdVar7 = param_4;
          pdVar16 = pdVar6;
          pdVar13 = pdVar26;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar7;
              param_1 = (double)*(float *)pdVar15 - param_2;
              *pdVar16 = param_1;
              pdVar13 = (double *)((long)pdVar13 + -1);
              pdVar15 = (double *)((long)pdVar15 + lVar38);
              pdVar7 = pdVar7 + uVar23;
              pdVar16 = pdVar16 + 1;
            } while (pdVar13 != (double *)0x0);
          }
        }
        else {
          pdVar15 = param_5;
          pdVar13 = pdVar40;
          pdVar16 = pdVar6;
          pdVar7 = pdVar26;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar13;
              param_1 = (double)*(float *)pdVar15 - param_2;
              *pdVar16 = param_1;
              pdVar13 = pdVar13 + uVar23;
              pdVar15 = (double *)((long)pdVar15 + lVar38);
              pdVar7 = (double *)((long)pdVar7 + -1);
              pdVar16 = pdVar16 + 1;
            } while (pdVar7 != (double *)0x0);
          }
        }
        param_6 = pdVar29;
        param_7 = pdVar30;
        if ((long)pdVar29 <= lVar27 + -4) {
          do {
            if ((int)uVar1 < 1) {
              param_1 = 0.0;
              dVar45 = 0.0;
              param_2 = 0.0;
              dVar46 = 0.0;
            }
            else {
              pdVar34 = pdVar8 + (long)param_6;
              if (pdVar40 != (double *)0x0) {
                pdVar34 = pdVar40;
              }
              pdVar34 = pdVar34 + 2;
              param_1 = 0.0;
              dVar45 = 0.0;
              param_2 = 0.0;
              dVar46 = 0.0;
              pdVar13 = param_7;
              pdVar7 = pdVar6;
              pdVar15 = pdVar26;
              do {
                dVar43 = *pdVar7;
                pdVar7 = pdVar7 + 1;
                param_1 = param_1 + ((double)SUB84(pdVar13[-1],0) - pdVar34[-2]) * dVar43;
                dVar45 = dVar45 + ((double)(float)((ulong)pdVar13[-1] >> 0x20) - pdVar34[-1]) *
                                  dVar43;
                param_2 = param_2 + ((double)SUB84(*pdVar13,0) - *pdVar34) * dVar43;
                dVar46 = dVar46 + ((double)(float)((ulong)*pdVar13 >> 0x20) - pdVar34[1]) * dVar43;
                pdVar34 = pdVar34 + uVar23;
                pdVar13 = (double *)((long)pdVar13 + lVar38);
                pdVar15 = (double *)((long)pdVar15 + -1);
              } while (pdVar15 != (double *)0x0);
              pdVar34 = (double *)0x0;
            }
            param_1 = param_1 * dStack_4a0;
            pdVar13 = (double *)((long)dVar37 + (long)param_6 * 8);
            param_2 = param_2 * dStack_4a0;
            pdVar13[1] = dVar45 * dStack_4a0;
            *pdVar13 = param_1;
            pdVar13[3] = dVar46 * dStack_4a0;
            pdVar13[2] = param_2;
            param_6 = (double *)((long)param_6 + 4);
            param_7 = param_7 + 2;
          } while ((int)param_6 <= (int)(lVar27 + -4));
        }
        if ((int)param_6 < (int)uVar19) {
          param_7 = (double *)((long)pdVar35 + (long)param_6 * 4);
          do {
            if ((int)uVar1 < 1) {
              param_1 = 0.0;
            }
            else {
              pdVar34 = pdVar8 + (long)param_6;
              if (pdVar40 != (double *)0x0) {
                pdVar34 = pdVar40;
              }
              param_1 = 0.0;
              pdVar13 = param_7;
              pdVar7 = pdVar6;
              pdVar15 = pdVar26;
              do {
                param_1 = param_1 + ((double)*(float *)pdVar13 - *pdVar34) * *pdVar7;
                pdVar34 = pdVar34 + uVar23;
                pdVar13 = (double *)((long)pdVar13 + lVar38);
                pdVar15 = (double *)((long)pdVar15 + -1);
                pdVar7 = pdVar7 + 1;
              } while (pdVar15 != (double *)0x0);
              pdVar34 = (double *)0x0;
            }
            param_1 = dStack_4a0 * param_1;
            *(double *)((long)dVar37 + (long)param_6 * 8) = param_1;
            param_6 = (double *)((long)param_6 + 1);
            param_7 = (double *)((long)param_7 + 4);
            param_2 = dStack_4a0;
          } while ((int)param_6 < (int)uVar19);
        }
        dVar37 = (double)((long)dVar37 + ((ulong)dVar42 >> 3) * 8);
        pdVar29 = (double *)((long)pdVar29 + 1);
        param_5 = (double *)((long)param_5 + 4);
        param_4 = param_4 + 1;
        pdVar30 = (double *)((long)pdVar30 + 4);
      } while (pdVar29 != (double *)(ulong)uVar19);
    }
  }
  else {
    if (pdVar40 != (double *)0x0) {
      pdVar8 = pdVar40;
      pdVar40 = (double *)0x0;
      goto LAB_109a72414;
    }
    if (0 < (int)uVar19) {
      lVar38 = 0;
      lVar20 = uVar41 * 4;
      pdVar40 = pdVar35 + 1;
      pdVar8 = pdVar35;
      do {
        pdVar29 = pdVar26;
        param_4 = pdVar26;
        pdVar30 = pdVar8;
        pdVar13 = pdVar6;
        if (0 < (int)uVar1) {
          do {
            param_1 = (double)*(float *)pdVar30;
            *pdVar13 = param_1;
            pdVar30 = (double *)((long)pdVar30 + lVar20);
            pdVar29 = (double *)((long)pdVar29 + -1);
            param_4 = (double *)0x0;
            pdVar13 = pdVar13 + 1;
          } while (pdVar29 != (double *)0x0);
        }
        lVar33 = lVar38;
        pdVar30 = pdVar40;
        if (lVar38 <= lVar27 + -4) {
          do {
            param_1 = 0.0;
            dVar45 = 0.0;
            if ((int)uVar1 < 1) {
              param_2 = 0.0;
              dVar46 = 0.0;
            }
            else {
              param_2 = 0.0;
              dVar46 = 0.0;
              pdVar29 = pdVar30;
              param_5 = pdVar6;
              pdVar13 = pdVar26;
              do {
                dVar43 = *param_5;
                param_5 = param_5 + 1;
                param_1 = param_1 + (double)SUB84(pdVar29[-1],0) * dVar43;
                dVar45 = dVar45 + (double)(float)((ulong)pdVar29[-1] >> 0x20) * dVar43;
                param_2 = param_2 + (double)SUB84(*pdVar29,0) * dVar43;
                dVar46 = dVar46 + (double)(float)((ulong)*pdVar29 >> 0x20) * dVar43;
                pdVar29 = (double *)((long)pdVar29 + lVar20);
                pdVar13 = (double *)((long)pdVar13 + -1);
              } while (pdVar13 != (double *)0x0);
              param_6 = (double *)0x0;
            }
            param_1 = param_1 * dStack_4a0;
            param_4 = (double *)((long)dVar37 + lVar33 * 8);
            param_2 = param_2 * dStack_4a0;
            param_4[1] = dVar45 * dStack_4a0;
            *param_4 = param_1;
            param_4[3] = dVar46 * dStack_4a0;
            param_4[2] = param_2;
            lVar33 = lVar33 + 4;
            pdVar30 = pdVar30 + 2;
          } while ((int)lVar33 <= (int)(lVar27 + -4));
        }
        if ((int)lVar33 < (int)uVar19) {
          pdVar30 = (double *)((long)pdVar35 + lVar33 * 4);
          do {
            param_1 = 0.0;
            pdVar29 = pdVar30;
            pdVar13 = pdVar6;
            pdVar15 = pdVar26;
            if (0 < (int)uVar1) {
              do {
                param_5 = pdVar13 + 1;
                param_1 = param_1 + (double)*(float *)pdVar29 * *pdVar13;
                param_4 = (double *)((long)pdVar29 + lVar20);
                param_6 = (double *)((long)pdVar15 - 1);
                pdVar29 = param_4;
                pdVar13 = param_5;
                pdVar15 = param_6;
              } while (param_6 != (double *)0x0);
            }
            param_1 = dStack_4a0 * param_1;
            *(double *)((long)dVar37 + lVar33 * 8) = param_1;
            lVar33 = lVar33 + 1;
            pdVar30 = (double *)((long)pdVar30 + 4);
            param_2 = dStack_4a0;
          } while ((int)lVar33 < (int)uVar19);
        }
        lVar38 = lVar38 + 1;
        dVar37 = (double)((long)dVar37 + ((ulong)dVar42 >> 3) * 8);
        pdVar8 = (double *)((long)pdVar8 + 4);
        pdVar40 = (double *)((long)pdVar40 + 4);
      } while (lVar38 != lVar27);
    }
  }
  pdStack_488 = pdVar6;
  if (pdVar6 != pdStack_4a8) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_4c0 = &stack0xfffffffffffffff0;
  pcStack_4b8 = FUN_109a72788;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar40 = (double *)pdVar6[2];
  dVar37 = param_4[2];
  pdVar26 = (double *)param_5[2];
  pdVar35 = pdVar6 + 10;
  uVar41 = (ulong)param_4[10] >> 3;
  uVar23 = (ulong)param_5[10] >> 3;
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar23 = 0;
  }
  uVar32 = *(uint *)pdVar6[8];
  pdVar8 = (double *)(ulong)uVar32;
  uVar2 = ((uint *)pdVar6[8])[1];
  uVar39 = (ulong)uVar2;
  dVar45 = param_1;
  if (pdVar26 == (double *)0x0) {
    if (0 < (int)uVar32) {
      pdVar29 = (double *)0x0;
      pdVar30 = pdVar40 + 1;
      lVar38 = ((ulong)*pdVar35 >> 2) * 4;
      pdVar35 = pdVar40;
      pdVar13 = pdVar30;
      pdVar15 = pdVar29;
      do {
        do {
          if ((int)uVar2 < 4) {
            dVar45 = 0.0;
            uVar32 = 0;
          }
          else {
            lVar27 = 0;
            dVar45 = 0.0;
            pdVar7 = pdVar30;
            pdVar16 = pdVar13;
            do {
              pdVar6 = pdVar7 + 2;
              param_2 = (double)*(float *)((long)pdVar16 - 4) * (double)*(float *)((long)pdVar7 - 4)
                        + (double)*(float *)(pdVar7 + -1) * (double)*(float *)(pdVar16 + -1) +
                        (double)*(float *)pdVar7 * (double)*(float *)pdVar16 +
                        (double)*(float *)((long)pdVar7 + 4) * (double)*(float *)((long)pdVar16 + 4)
              ;
              dVar45 = dVar45 + param_2;
              lVar27 = lVar27 + 4;
              pdVar7 = pdVar6;
              pdVar16 = pdVar16 + 2;
              uVar32 = (uVar2 - 4 & 0xfffffffc) + 4;
            } while (lVar27 <= (int)(uVar2 - 4));
          }
          if ((int)uVar32 < (int)uVar2) {
            pdVar7 = (double *)((long)pdVar35 + (ulong)uVar32 * 4);
            pfVar21 = (float *)((long)pdVar40 + (ulong)uVar32 * 4);
            do {
              pdVar6 = (double *)((long)pdVar7 + 4);
              param_2 = (double)*(float *)pdVar7;
              dVar45 = dVar45 + (double)*pfVar21 * param_2;
              uVar32 = uVar32 + 1;
              pdVar7 = pdVar6;
              pfVar21 = pfVar21 + 1;
            } while ((int)uVar32 < (int)uVar2);
          }
          dVar45 = param_1 * dVar45;
          *(double *)((long)dVar37 + (long)pdVar29 * 8) = dVar45;
          pdVar29 = (double *)((long)pdVar29 + 1);
          pdVar30 = (double *)((long)pdVar30 + lVar38);
          pdVar40 = (double *)((long)pdVar40 + lVar38);
        } while (pdVar29 != pdVar8);
        pdVar29 = (double *)((long)pdVar15 + 1);
        dVar37 = (double)((long)dVar37 + uVar41 * 8);
        pdVar30 = (double *)((long)pdVar13 + lVar38);
        pdVar40 = (double *)((long)pdVar35 + lVar38);
        pdVar35 = pdVar40;
        pdVar13 = pdVar30;
        pdVar15 = pdVar29;
      } while (pdVar29 != pdVar8);
    }
  }
  else {
    uVar1 = *(uint *)((long)param_5 + 0xc);
    dVar42 = (double)(ulong)uVar1;
    pdVar34 = (double *)((long)(int)uVar2 << 3);
    pdVar6 = adStack_958;
    pdStack_968 = pdVar6;
    uStack_978 = (ulong)*pdVar35 >> 2;
    pdStack_970 = pdVar6;
    if ((double *)0x408 < pdVar34) {
      pdVar6 = pdVar34;
      __Znam();
      pdStack_968 = pdVar6;
    }
    pdStack_960 = pdVar34;
    if (0 < (int)uVar32) {
      pdVar35 = (double *)0x0;
      uVar32 = uVar2 - 4;
      lVar38 = 0x20;
      if (uVar1 != uVar2) {
        lVar38 = 0;
      }
      lVar27 = uStack_978 * 4;
      pdVar30 = pdVar40 + 1;
      param_4 = pdVar26;
      do {
        param_5 = pdVar40;
        param_6 = pdVar30;
        param_7 = pdVar35;
        if ((int)uVar1 < (int)uVar2) {
          if (0 < (int)uVar2) {
            uVar14 = 0;
            dVar45 = pdVar26[(long)pdVar35 * uVar23];
            do {
              param_2 = (double)*(float *)((long)pdVar40 + uVar14 * 4) - dVar45;
              pdVar6[uVar14] = param_2;
              uVar14 = uVar14 + 1;
            } while (uVar39 != uVar14);
          }
        }
        else {
          pdVar29 = pdVar40;
          pdVar13 = param_4;
          pdVar15 = pdVar6;
          uVar14 = uVar39;
          if (0 < (int)uVar2) {
            do {
              param_2 = *pdVar13;
              *pdVar15 = (double)*(float *)pdVar29 - param_2;
              uVar14 = uVar14 - 1;
              pdVar29 = (double *)((long)pdVar29 + 4);
              pdVar13 = pdVar13 + 1;
              pdVar15 = pdVar15 + 1;
            } while (uVar14 != 0);
          }
        }
        do {
          pdVar29 = pdVar26 + (long)param_7 * uVar23;
          if ((int)uVar1 < (int)uVar2) {
            dStack_548 = *pdVar29;
            dStack_550 = dStack_548;
            dStack_538 = dStack_548;
            dStack_540 = dStack_548;
            pdVar29 = &dStack_550;
          }
          if ((int)uVar2 < 4) {
            dVar45 = 0.0;
            uVar19 = 0;
          }
          else {
            lVar20 = 0;
            pdVar13 = pdVar29 + 2;
            dVar45 = 0.0;
            pdVar15 = param_6;
            pdVar7 = pdVar6 + 2;
            do {
              pdVar34 = pdVar15 + 2;
              param_2 = pdVar7[-1] * ((double)*(float *)((long)pdVar15 - 4) - pdVar13[-1]) +
                        ((double)*(float *)(pdVar15 + -1) - pdVar13[-2]) * pdVar7[-2] +
                        ((double)*(float *)pdVar15 - *pdVar13) * *pdVar7 +
                        ((double)*(float *)((long)pdVar15 + 4) - pdVar13[1]) * pdVar7[1];
              lVar20 = lVar20 + 4;
              dVar45 = dVar45 + param_2;
              pdVar13 = (double *)((long)pdVar13 + lVar38);
              pdVar15 = pdVar34;
              pdVar7 = pdVar7 + 4;
            } while (lVar20 <= (int)uVar32);
            pdVar29 = (double *)((long)pdVar29 + lVar38 * (ulong)((uVar32 >> 2) + 1));
            uVar19 = (uVar32 & 0xfffffffc) + 4;
          }
          if ((int)uVar19 < (int)uVar2) {
            pfVar21 = (float *)((long)param_5 + (ulong)uVar19 * 4);
            pdVar13 = pdVar6 + uVar19;
            do {
              pdVar34 = pdVar13 + 1;
              param_2 = *pdVar13;
              dVar45 = dVar45 + ((double)*pfVar21 - *pdVar29) * param_2;
              uVar19 = uVar19 + 1;
              pdVar29 = pdVar29 + 1;
              pfVar21 = pfVar21 + 1;
              pdVar13 = pdVar34;
            } while ((int)uVar19 < (int)uVar2);
          }
          dVar45 = param_1 * dVar45;
          *(double *)((long)dVar37 + (long)param_7 * 8) = dVar45;
          param_7 = (double *)((long)param_7 + 1);
          param_6 = (double *)((long)param_6 + lVar27);
          param_5 = (double *)((long)param_5 + lVar27);
        } while (param_7 != pdVar8);
        dVar37 = (double)((long)dVar37 + uVar41 * 8);
        pdVar35 = (double *)((long)pdVar35 + 1);
        param_4 = param_4 + uVar23;
        pdVar40 = (double *)((long)pdVar40 + lVar27);
        pdVar30 = (double *)((long)pdVar30 + lVar27);
      } while (pdVar35 != pdVar8);
    }
    pdStack_968 = pdVar6;
    if (pdVar6 != pdStack_970) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return dVar45;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  dStack_9e0 = dVar42;
  uStack_9d8 = uVar23;
  pdStack_9d0 = pdVar26;
  uStack_9c8 = uVar39;
  pdStack_9c0 = pdVar8;
  lStack_9b8 = (long)(int)uVar2;
  uStack_9b0 = uVar41;
  dStack_9a8 = dVar37;
  pdStack_9a0 = pdVar40;
  pdStack_998 = pdVar34;
  ppuStack_990 = &puStack_4c0;
  pcStack_988 = FUN_109a72b78;
  lStack_9f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar35 = (double *)pdVar6[2];
  dVar37 = param_4[2];
  pdVar40 = (double *)param_5[2];
  dVar42 = pdVar6[10];
  dVar46 = param_4[10];
  uVar23 = (ulong)param_5[10] >> 3;
  uVar32 = *(uint *)((long)param_5 + 0xc);
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar23 = 0;
  }
  uVar1 = *(uint *)pdVar6[8];
  uVar19 = ((uint *)pdVar6[8])[1];
  lVar38 = (long)(int)uVar1;
  uVar2 = uVar1 << 3;
  if (pdVar40 != (double *)0x0 && (int)uVar32 < (int)uVar19) {
    uVar2 = uVar1 * 0x28;
  }
  pdVar34 = (double *)(long)(int)uVar2;
  pdVar6 = adStack_df8;
  dVar43 = dVar45;
  if (0x408 < uVar2) {
    __Znam();
    pdVar6 = pdVar34;
  }
  uVar41 = (ulong)dVar42 >> 3;
  pdVar34 = (double *)(ulong)uVar1;
  lVar27 = (long)(int)uVar19;
  if (pdVar40 != (double *)0x0 && (int)uVar32 < (int)uVar19) {
    pdVar26 = pdVar6 + lVar38;
    pdVar8 = pdVar26;
    if (0 < (int)uVar1) {
      do {
        dVar43 = *pdVar40;
        pdVar40 = pdVar40 + uVar23;
        pdVar8[1] = dVar43;
        *pdVar8 = dVar43;
        pdVar8[3] = dVar43;
        pdVar8[2] = dVar43;
        lVar38 = lVar38 + -1;
        pdVar8 = pdVar8 + 4;
      } while (lVar38 != 0);
    }
    bVar5 = uVar23 != 0;
    uVar23 = 0;
    pdVar40 = pdVar26;
    if (bVar5) {
      uVar23 = 4;
    }
LAB_109a72c84:
    if (0 < (int)uVar19) {
      pdVar30 = (double *)0x0;
      pdVar8 = pdVar35 + 2;
      param_4 = pdVar26;
      param_5 = pdVar35;
      do {
        if (pdVar40 == (double *)0x0) {
          pdVar13 = param_5;
          pdVar15 = param_4;
          pdVar7 = pdVar6;
          pdVar29 = pdVar34;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar15;
              dVar43 = *pdVar13 - param_2;
              *pdVar7 = dVar43;
              pdVar29 = (double *)((long)pdVar29 + -1);
              pdVar13 = pdVar13 + uVar41;
              pdVar15 = pdVar15 + uVar23;
              pdVar7 = pdVar7 + 1;
            } while (pdVar29 != (double *)0x0);
          }
        }
        else {
          pdVar13 = param_5;
          pdVar29 = pdVar40;
          pdVar7 = pdVar6;
          pdVar15 = pdVar34;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar29;
              dVar43 = *pdVar13 - param_2;
              *pdVar7 = dVar43;
              pdVar29 = pdVar29 + uVar23;
              pdVar13 = pdVar13 + uVar41;
              pdVar15 = (double *)((long)pdVar15 + -1);
              pdVar7 = pdVar7 + 1;
            } while (pdVar15 != (double *)0x0);
          }
        }
        param_6 = pdVar30;
        param_7 = pdVar8;
        if ((long)pdVar30 <= lVar27 + -4) {
          do {
            if ((int)uVar1 < 1) {
              dVar43 = 0.0;
              dVar42 = 0.0;
              param_2 = 0.0;
              dVar47 = 0.0;
            }
            else {
              pdVar29 = pdVar26 + (long)param_6;
              if (pdVar40 != (double *)0x0) {
                pdVar29 = pdVar40;
              }
              pdVar29 = pdVar29 + 2;
              dVar43 = 0.0;
              dVar42 = 0.0;
              param_2 = 0.0;
              dVar47 = 0.0;
              pdVar13 = param_7;
              pdVar7 = pdVar6;
              pdVar15 = pdVar34;
              do {
                dVar4 = *pdVar7;
                pdVar7 = pdVar7 + 1;
                dVar43 = dVar43 + (pdVar13[-2] - pdVar29[-2]) * dVar4;
                dVar42 = dVar42 + (pdVar13[-1] - pdVar29[-1]) * dVar4;
                param_2 = param_2 + (*pdVar13 - *pdVar29) * dVar4;
                dVar47 = dVar47 + (pdVar13[1] - pdVar29[1]) * dVar4;
                pdVar29 = pdVar29 + uVar23;
                pdVar13 = pdVar13 + uVar41;
                pdVar15 = (double *)((long)pdVar15 + -1);
              } while (pdVar15 != (double *)0x0);
            }
            dVar43 = dVar43 * dVar45;
            pdVar29 = (double *)((long)dVar37 + (long)param_6 * 8);
            param_2 = param_2 * dVar45;
            pdVar29[1] = dVar42 * dVar45;
            *pdVar29 = dVar43;
            pdVar29[3] = dVar47 * dVar45;
            pdVar29[2] = param_2;
            param_6 = (double *)((long)param_6 + 4);
            param_7 = param_7 + 4;
          } while ((int)param_6 <= (int)(lVar27 + -4));
        }
        if ((int)param_6 < (int)uVar19) {
          param_7 = pdVar35 + (long)param_6;
          do {
            if ((int)uVar1 < 1) {
              dVar43 = 0.0;
            }
            else {
              pdVar29 = pdVar26 + (long)param_6;
              if (pdVar40 != (double *)0x0) {
                pdVar29 = pdVar40;
              }
              dVar43 = 0.0;
              pdVar13 = param_7;
              pdVar7 = pdVar6;
              pdVar15 = pdVar34;
              do {
                dVar43 = dVar43 + (*pdVar13 - *pdVar29) * *pdVar7;
                pdVar29 = pdVar29 + uVar23;
                pdVar13 = pdVar13 + uVar41;
                pdVar15 = (double *)((long)pdVar15 + -1);
                pdVar7 = pdVar7 + 1;
              } while (pdVar15 != (double *)0x0);
            }
            dVar43 = dVar45 * dVar43;
            *(double *)((long)dVar37 + (long)param_6 * 8) = dVar43;
            param_6 = (double *)((long)param_6 + 1);
            param_7 = param_7 + 1;
            param_2 = dVar45;
          } while ((int)param_6 < (int)uVar19);
        }
        dVar37 = (double)((long)dVar37 + ((ulong)dVar46 >> 3) * 8);
        pdVar30 = (double *)((long)pdVar30 + 1);
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        pdVar8 = pdVar8 + 1;
      } while (pdVar30 != (double *)(ulong)uVar19);
    }
  }
  else {
    if (pdVar40 != (double *)0x0) {
      pdVar26 = pdVar40;
      pdVar40 = (double *)0x0;
      goto LAB_109a72c84;
    }
    if (0 < (int)uVar19) {
      lVar38 = 0;
      pdVar40 = pdVar35 + 2;
      pdVar26 = pdVar35;
      do {
        pdVar30 = pdVar34;
        param_4 = pdVar34;
        pdVar8 = pdVar26;
        pdVar29 = pdVar6;
        if (0 < (int)uVar1) {
          do {
            dVar43 = *pdVar8;
            *pdVar29 = dVar43;
            pdVar8 = pdVar8 + uVar41;
            pdVar30 = (double *)((long)pdVar30 + -1);
            param_4 = (double *)0x0;
            pdVar29 = pdVar29 + 1;
          } while (pdVar30 != (double *)0x0);
        }
        lVar20 = lVar38;
        pdVar8 = pdVar40;
        if (lVar38 <= lVar27 + -4) {
          do {
            dVar43 = 0.0;
            dVar42 = 0.0;
            if ((int)uVar1 < 1) {
              param_2 = 0.0;
              dVar47 = 0.0;
            }
            else {
              param_2 = 0.0;
              dVar47 = 0.0;
              pdVar30 = pdVar8;
              param_5 = pdVar6;
              pdVar29 = pdVar34;
              do {
                dVar4 = *param_5;
                param_5 = param_5 + 1;
                dVar43 = dVar43 + pdVar30[-2] * dVar4;
                dVar42 = dVar42 + pdVar30[-1] * dVar4;
                param_2 = param_2 + *pdVar30 * dVar4;
                dVar47 = dVar47 + pdVar30[1] * dVar4;
                pdVar30 = pdVar30 + uVar41;
                pdVar29 = (double *)((long)pdVar29 + -1);
              } while (pdVar29 != (double *)0x0);
              param_6 = (double *)0x0;
            }
            dVar43 = dVar43 * dVar45;
            param_4 = (double *)((long)dVar37 + lVar20 * 8);
            param_2 = param_2 * dVar45;
            param_4[1] = dVar42 * dVar45;
            *param_4 = dVar43;
            param_4[3] = dVar47 * dVar45;
            param_4[2] = param_2;
            lVar20 = lVar20 + 4;
            pdVar8 = pdVar8 + 4;
          } while ((int)lVar20 <= (int)(lVar27 + -4));
        }
        if ((int)lVar20 < (int)uVar19) {
          pdVar8 = pdVar35 + lVar20;
          do {
            dVar43 = 0.0;
            pdVar30 = pdVar8;
            pdVar29 = pdVar6;
            pdVar13 = pdVar34;
            if (0 < (int)uVar1) {
              do {
                param_5 = pdVar29 + 1;
                dVar43 = dVar43 + *pdVar30 * *pdVar29;
                param_4 = pdVar30 + uVar41;
                param_6 = (double *)((long)pdVar13 - 1);
                pdVar30 = param_4;
                pdVar29 = param_5;
                pdVar13 = param_6;
              } while (param_6 != (double *)0x0);
            }
            dVar43 = dVar45 * dVar43;
            *(double *)((long)dVar37 + lVar20 * 8) = dVar43;
            lVar20 = lVar20 + 1;
            pdVar8 = pdVar8 + 1;
            param_2 = dVar45;
          } while ((int)lVar20 < (int)uVar19);
        }
        lVar38 = lVar38 + 1;
        dVar37 = (double)((long)dVar37 + ((ulong)dVar46 >> 3) * 8);
        pdVar26 = pdVar26 + 1;
        pdVar40 = pdVar40 + 1;
      } while (lVar38 != lVar27);
    }
  }
  if (pdVar6 != adStack_df8) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f0) {
    return dVar43;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_eb0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar35 = (double *)pdVar6[2];
  dVar37 = param_4[2];
  pdVar40 = (double *)param_5[2];
  uVar41 = (ulong)pdVar6[10] >> 3;
  dVar42 = param_4[10];
  uVar23 = (ulong)param_5[10] >> 3;
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar23 = 0;
  }
  uVar32 = *(uint *)pdVar6[8];
  uVar39 = (ulong)uVar32;
  uVar2 = ((uint *)pdVar6[8])[1];
  dVar45 = dVar43;
  if (pdVar40 == (double *)0x0) {
    if (0 < (int)uVar32) {
      uVar23 = 0;
      pdVar40 = pdVar35 + 2;
      pdVar34 = pdVar35;
      pdVar26 = pdVar40;
      uVar14 = uVar23;
      do {
        do {
          if ((int)uVar2 < 4) {
            dVar45 = 0.0;
            uVar32 = 0;
          }
          else {
            lVar38 = 0;
            dVar45 = 0.0;
            pdVar8 = pdVar40;
            pdVar30 = pdVar26;
            do {
              pdVar6 = pdVar8 + 4;
              param_2 = pdVar30[-1] * pdVar8[-1] + pdVar8[-2] * pdVar30[-2] + *pdVar8 * *pdVar30 +
                        pdVar8[1] * pdVar30[1];
              dVar45 = dVar45 + param_2;
              lVar38 = lVar38 + 4;
              pdVar8 = pdVar6;
              pdVar30 = pdVar30 + 4;
              uVar32 = (uVar2 - 4 & 0xfffffffc) + 4;
            } while (lVar38 <= (int)(uVar2 - 4));
          }
          if ((int)uVar32 < (int)uVar2) {
            pdVar8 = pdVar34 + uVar32;
            pdVar30 = pdVar35 + uVar32;
            do {
              pdVar6 = pdVar8 + 1;
              param_2 = *pdVar8;
              dVar45 = dVar45 + *pdVar30 * param_2;
              uVar32 = uVar32 + 1;
              pdVar8 = pdVar6;
              pdVar30 = pdVar30 + 1;
            } while ((int)uVar32 < (int)uVar2);
          }
          dVar45 = dVar43 * dVar45;
          *(double *)((long)dVar37 + uVar23 * 8) = dVar45;
          uVar23 = uVar23 + 1;
          pdVar40 = pdVar40 + uVar41;
          pdVar35 = pdVar35 + uVar41;
        } while (uVar23 != uVar39);
        uVar23 = uVar14 + 1;
        dVar37 = (double)((long)dVar37 + ((ulong)dVar42 >> 3) * 8);
        pdVar40 = pdVar26 + uVar41;
        pdVar35 = pdVar34 + uVar41;
        pdVar34 = pdVar35;
        pdVar26 = pdVar40;
        uVar14 = uVar23;
      } while (uVar23 != uVar39);
    }
  }
  else {
    uVar1 = *(uint *)((long)param_5 + 0xc);
    pdVar34 = (double *)((long)(int)uVar2 << 3);
    pdVar6 = adStack_12d8;
    if ((double *)0x408 < pdVar34) {
      __Znam();
      pdVar6 = pdVar34;
    }
    if (0 < (int)uVar32) {
      uVar14 = 0;
      uVar32 = uVar2 - 4;
      lVar38 = 0x20;
      if (uVar1 != uVar2) {
        lVar38 = 0;
      }
      param_4 = pdVar35 + 2;
      pdVar34 = pdVar40;
      do {
        param_6 = pdVar35;
        param_7 = param_4;
        uVar18 = uVar14;
        if ((int)uVar1 < (int)uVar2) {
          if (0 < (int)uVar2) {
            lVar27 = 0;
            dVar45 = pdVar40[uVar14 * uVar23];
            do {
              param_2 = *(double *)((long)pdVar35 + lVar27) - dVar45;
              *(double *)((long)pdVar6 + lVar27) = param_2;
              lVar27 = lVar27 + 8;
            } while ((ulong)uVar2 * 8 - lVar27 != 0);
          }
        }
        else {
          pdVar26 = pdVar34;
          pdVar8 = pdVar6;
          uVar17 = (ulong)uVar2;
          pdVar30 = pdVar35;
          if (0 < (int)uVar2) {
            do {
              param_2 = *pdVar26;
              *pdVar8 = *pdVar30 - param_2;
              uVar17 = uVar17 - 1;
              pdVar26 = pdVar26 + 1;
              pdVar8 = pdVar8 + 1;
              pdVar30 = pdVar30 + 1;
            } while (uVar17 != 0);
          }
        }
        do {
          pdVar26 = pdVar40 + uVar18 * uVar23;
          if ((int)uVar1 < (int)uVar2) {
            dStack_ec8 = *pdVar26;
            dStack_ed0 = dStack_ec8;
            dStack_eb8 = dStack_ec8;
            dStack_ec0 = dStack_ec8;
            pdVar26 = &dStack_ed0;
          }
          if ((int)uVar2 < 4) {
            dVar45 = 0.0;
            uVar19 = 0;
          }
          else {
            lVar27 = 0;
            pdVar8 = pdVar26 + 2;
            dVar45 = 0.0;
            pdVar30 = pdVar6 + 2;
            pdVar29 = param_7;
            do {
              param_2 = pdVar30[-1] * (pdVar29[-1] - pdVar8[-1]) +
                        (pdVar29[-2] - pdVar8[-2]) * pdVar30[-2] + (*pdVar29 - *pdVar8) * *pdVar30 +
                        (pdVar29[1] - pdVar8[1]) * pdVar30[1];
              lVar27 = lVar27 + 4;
              dVar45 = dVar45 + param_2;
              pdVar8 = (double *)((long)pdVar8 + lVar38);
              pdVar30 = pdVar30 + 4;
              pdVar29 = pdVar29 + 4;
            } while (lVar27 <= (int)uVar32);
            pdVar26 = (double *)((long)pdVar26 + lVar38 * (ulong)((uVar32 >> 2) + 1));
            uVar19 = (uVar32 & 0xfffffffc) + 4;
          }
          if ((int)uVar19 < (int)uVar2) {
            pdVar8 = param_6 + uVar19;
            pdVar30 = pdVar6 + uVar19;
            do {
              param_2 = *pdVar30;
              dVar45 = dVar45 + (*pdVar8 - *pdVar26) * param_2;
              uVar19 = uVar19 + 1;
              pdVar26 = pdVar26 + 1;
              pdVar8 = pdVar8 + 1;
              pdVar30 = pdVar30 + 1;
            } while ((int)uVar19 < (int)uVar2);
          }
          dVar45 = dVar43 * dVar45;
          *(double *)((long)dVar37 + uVar18 * 8) = dVar45;
          uVar18 = uVar18 + 1;
          param_7 = param_7 + uVar41;
          param_6 = param_6 + uVar41;
        } while (uVar18 != uVar39);
        dVar37 = (double)((long)dVar37 + ((ulong)dVar42 >> 3) * 8);
        uVar14 = uVar14 + 1;
        pdVar34 = pdVar34 + uVar23;
        pdVar35 = pdVar35 + uVar41;
        param_4 = param_4 + uVar41;
      } while (uVar14 != uVar39);
    }
    if (pdVar6 != adStack_12d8) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb0) {
    return dVar45;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*param_4 & 0x1f0000) == 0x10000) {
    puVar11 = (ulong *)param_4[1];
    uStack_13d0 = (undefined4 *)*puVar11;
    uStack_13c8 = puVar11[1];
    uStack_13b8 = puVar11[3];
    ppdStack_13c0 = (double **)puVar11[2];
    dVar45 = (double)puVar11[4];
    param_2 = (double)puVar11[6];
    uStack_13a8 = puVar11[5];
    dStack_13b0 = dVar45;
    uStack_1398 = puVar11[7];
    dStack_13a0 = param_2;
    piStack_1390 = (int *)((ulong)&uStack_13d0 | 8);
    puStack_1388 = &uStack_1380;
    uStack_1380 = 0;
    uStack_1378 = 0;
    if (puVar11[7] != 0) {
      piVar24 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar5) {
          *piVar24 = *piVar24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_1380 = *(undefined8 *)puVar11[9];
      uStack_1378 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_13d0 = (undefined4 *)((ulong)uStack_13d0 & 0xffffffff);
      func_0x000109a84868(&uStack_13d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_13d0,param_4,0xffffffff);
  }
  uVar32 = *(uint *)pdVar6;
  if ((((uint)uStack_13d0 ^ uVar32) & 0xfff) != 0) {
LAB_109a73678:
    puVar10 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_1410 = puVar10 + 1;
    uStack_1408 = 0x35;
    *(undefined8 *)(puVar10 + 3) = 0x7974203d3d202928;
    *(undefined8 *)(puVar10 + 1) = 0x657079742e74616d;
    *(undefined1 *)((long)puVar10 + 0x39) = 0;
    *(undefined8 *)(puVar10 + 7) = 0x657a69732e74616d;
    *(undefined8 *)(puVar10 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar10 + 0xb) = 0x636e756620262620;
    *(undefined8 *)(puVar10 + 9) = 0x657a6973203d3d20;
    *(undefined8 *)((long)puVar10 + 0x31) = 0x30203d2120636e75;
    FUN_109ac3188(0xffffff29,&puStack_1410,&DAT_10f329830,&UNK_10f5974ee,0xcac);
                    /* WARNING: Does not return */
    pcVar36 = (code *)SoftwareBreakpoint(1,0x109a736e8);
    (*pcVar36)();
  }
  uVar2 = piStack_1390[-1];
  uVar23 = (ulong)uVar2;
  piVar24 = (int *)pdVar6[8];
  if (uVar2 != piVar24[-1]) goto LAB_109a73678;
  pcVar36 = (code *)(&PTR_DAT_110b21d38)[(ulong)uVar32 & 7];
  if (uVar2 == 2) {
    if (*piStack_1390 != *piVar24) goto LAB_109a73678;
    bVar5 = piStack_1390[1] == piVar24[1];
  }
  else {
    piVar28 = piStack_1390;
    piVar31 = piVar24;
    if (0 < (int)uVar2) {
      do {
        if (*piVar28 != *piVar31) goto LAB_109a73678;
        uVar23 = uVar23 - 1;
        piVar28 = piVar28 + 1;
        piVar31 = piVar31 + 1;
      } while (uVar23 != 0);
    }
    bVar5 = true;
  }
  if (((int)((ulong)uVar32 & 7) == 7) || (!bVar5)) goto LAB_109a73678;
  lVar38 = ((ulong)(uVar32 >> 3) & 0x1ff) + 1;
  if (((uVar32 & (uint)uStack_13d0) >> 0xe & 1) != 0) {
    uVar23 = (ulong)*(uint *)((long)pdVar6 + 4);
    if ((int)*(uint *)((long)pdVar6 + 4) < 3) {
      lVar27 = (long)(int)*(uint *)((long)pdVar6 + 0xc) * (long)(int)*(uint *)(pdVar6 + 1);
    }
    else {
      lVar27 = 1;
      do {
        lVar27 = lVar27 * *piVar24;
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 1;
      } while (uVar23 != 0);
    }
    uVar23 = lVar27 * lVar38;
    if (uVar23 - (long)(int)uVar23 == 0) {
      ppuVar9 = (undefined4 **)pdVar6[2];
      ppdVar12 = ppdStack_13c0;
      (*pcVar36)();
      dVar37 = dVar45;
      goto LAB_109a735c8;
    }
  }
  puStack_1358 = &uStack_13d0;
  uStack_1350 = 0;
  uStack_13d8 = 0;
  uStack_1408 = 0;
  uStack_1400 = 0;
  puStack_1410 = (undefined4 *)0x0;
  uStack_13f8 = 0;
  uStack_13f0 = 0;
  uStack_13e8 = 0;
  uStack_13e0 = 0;
  ppuVar9 = &puStack_1410;
  ppdVar12 = &pdStack_1360;
  param_6 = &dStack_1370;
  uVar23 = 0;
  param_7 = (double *)0xffffffff;
  pdStack_1360 = pdVar6;
  FUN_109a9b368();
  uVar32 = (int)lVar38 * (int)uStack_13e8;
  dVar37 = 0.0;
  uVar41 = 0xffffffffffffffff;
  while (uVar41 = uVar41 + 1, uVar41 < uStack_13f0) {
    ppdVar12 = ppdStack_1368;
    uVar23 = (ulong)uVar32;
    (*pcVar36)(dStack_1370);
    dVar37 = dVar37 + dVar45;
    ppuVar9 = &puStack_1410;
    FUN_109a8350c();
  }
LAB_109a735c8:
  if (uStack_1398 != 0) {
    piVar24 = (int *)(uStack_1398 + 0x14);
    do {
      iVar22 = *piVar24;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar22 + -1 == 0) {
      ppuVar9 = (undefined4 **)&uStack_13d0;
      func_0x000109a848d4();
    }
  }
  uStack_1398 = 0;
  uVar44 = 0;
  uStack_13b8 = 0;
  ppdStack_13c0 = (double **)0x0;
  uStack_13a8 = 0;
  dStack_13b0 = 0.0;
  if (0 < uStack_13d0._4_4_) {
    lVar38 = 0;
    do {
      piStack_1390[lVar38] = 0;
      lVar38 = lVar38 + 1;
    } while (lVar38 < uStack_13d0._4_4_);
  }
  if (puStack_1388 != &uStack_1380 && puStack_1388 != (undefined8 *)0x0) {
    ppuVar9 = (undefined4 **)puStack_1388[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1348) {
    ___stack_chk_fail();
    if ((int)ppdVar12 != 0) {
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_13d0);
    }
    __Unwind_Resume(ppuVar9);
    FUN_109a85f44(&uStack_14e0);
    FUN_109a85f44(auStack_1540,ppdVar12,0,1,0,0);
    uStack_15a0 = 0x42ff0000;
    uStack_1594 = 0;
    uStack_1590 = 0;
    iStack_159c = 0;
    uStack_1598 = 0;
    uStack_1584 = 0;
    uStack_1580 = 0;
    uStack_158c = 0;
    uStack_1588 = 0;
    uStack_1574 = 0;
    uStack_157c = 0;
    uStack_1578 = 0;
    lStack_1568 = 0;
    uStack_1570 = 0;
    uStack_156c = 0;
    uStack_1550 = 0;
    uStack_1548 = 0;
    uStack_1560 = (ulong)&uStack_15a0 | 8;
    puStack_1558 = &uStack_1550;
    FUN_109a85f44(&uStack_1600,param_6,0,1,0,0);
    if (uVar23 != 0) {
      FUN_109a85f44(&uStack_1660,uVar23,0,1,0,0);
      if (lStack_1568 != 0) {
        piVar24 = (int *)(lStack_1568 + 0x14);
        do {
          iVar22 = *piVar24;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(&uStack_15a0);
        }
      }
      if (0 < iStack_159c) {
        lVar38 = 0;
        do {
          *(undefined4 *)(uStack_1560 + lVar38 * 4) = 0;
          lVar38 = lVar38 + 1;
        } while (lVar38 < iStack_159c);
      }
      uStack_1598 = SUB84(puStack_1658,0);
      uStack_1594 = (undefined4)((ulong)puStack_1658 >> 0x20);
      uStack_15a0 = SUB84(uStack_1660,0);
      uStack_1588 = (undefined4)uStack_1648;
      uStack_1584 = (undefined4)((ulong)uStack_1648 >> 0x20);
      uStack_1590 = (undefined4)uStack_1650;
      uStack_158c = (undefined4)((ulong)uStack_1650 >> 0x20);
      uStack_1578 = (undefined4)uStack_1638;
      uStack_1574 = (undefined4)((ulong)uStack_1638 >> 0x20);
      uStack_1580 = (undefined4)uStack_1640;
      uStack_157c = (undefined4)((ulong)uStack_1640 >> 0x20);
      lStack_1568 = lStack_1628;
      uStack_1570 = (undefined4)uStack_1630;
      uStack_156c = (undefined4)((ulong)uStack_1630 >> 0x20);
      iVar22 = uStack_1660._4_4_;
      iStack_159c = uStack_1660._4_4_;
      if (puStack_1558 != &uStack_1550) {
        if (puStack_1558 != (undefined8 *)0x0) {
          _free(puStack_1558[-1]);
          iVar22 = uStack_1660._4_4_;
        }
        puStack_1558 = &uStack_1550;
        uStack_1560 = (ulong)&uStack_15a0 | 8;
      }
      if (iVar22 < 3) {
        puVar25 = (undefined8 *)((ulong)&uStack_1660 | 4);
        *puStack_1558 = *puStack_1618;
        puStack_1558[1] = puStack_1618[1];
        uStack_1660 = (undefined4 *)CONCAT44(uStack_1660._4_4_,0x42ff0000);
        puVar25[1] = 0;
        *puVar25 = 0;
        puVar25[3] = 0;
        puVar25[2] = 0;
        puVar25[5] = 0;
        puVar25[4] = 0;
        *(undefined8 *)((long)puVar25 + 0x34) = 0;
        *(undefined8 *)((long)puVar25 + 0x2c) = 0;
        if (puStack_1618 != auStack_1610) {
          _free(puStack_1618[-1]);
        }
      }
      else {
        uStack_1560 = uStack_1620;
        puStack_1558 = puStack_1618;
      }
    }
    piVar24 = &iStack_14d8;
    if (((ulong)param_7 & 1) != 0) {
      piVar24 = aiStack_14d4;
    }
    if (iStack_15f8 == *piVar24) {
      piVar24 = aiStack_1534;
      if (((ulong)param_7 & 2) != 0) {
        piVar24 = &iStack_1538;
      }
      if ((iStack_15f4 == *piVar24) && (((uStack_14e0 ^ uStack_1600) & 0xfff) == 0)) {
        uStack_1650 = 0;
        uStack_1660 = (undefined4 *)CONCAT44(uStack_1660._4_4_,0x1010000);
        puStack_1658 = &uStack_14e0;
        uStack_1668 = 0;
        auStack_1678[0] = 0x1010000;
        puStack_1670 = auStack_1540;
        uStack_1680 = 0;
        auStack_1690[0] = 0x1010000;
        puStack_1688 = &uStack_15a0;
        auStack_16a8[0] = 0x2010000;
        puStack_16a0 = &uStack_1600;
        uStack_1698 = 0;
        FUN_109a64f8c(uVar44,param_2,&uStack_1660,auStack_1678,auStack_1690,auStack_16a8,param_7);
        if (lStack_15c8 != 0) {
          piVar24 = (int *)(lStack_15c8 + 0x14);
          do {
            iVar22 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar22 + -1 == 0) {
            func_0x000109a848d4(&uStack_1600);
          }
        }
        lStack_15c8 = 0;
        uStack_15e8 = 0;
        uStack_15f0 = 0;
        uStack_15d8 = 0;
        uStack_15e0 = 0;
        if (0 < iStack_15fc) {
          lVar38 = 0;
          do {
            *(undefined4 *)(lStack_15c0 + lVar38 * 4) = 0;
            lVar38 = lVar38 + 1;
          } while (lVar38 < iStack_15fc);
        }
        if (puStack_15b8 != auStack_15b0 && puStack_15b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_15b8 + -8));
        }
        if (lStack_1568 != 0) {
          piVar24 = (int *)(lStack_1568 + 0x14);
          do {
            iVar22 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar22 + -1 == 0) {
            func_0x000109a848d4(&uStack_15a0);
          }
        }
        lStack_1568 = 0;
        uStack_1588 = 0;
        uStack_1584 = 0;
        uStack_1590 = 0;
        uStack_158c = 0;
        uStack_1578 = 0;
        uStack_1574 = 0;
        uStack_1580 = 0;
        uStack_157c = 0;
        if (0 < iStack_159c) {
          lVar38 = 0;
          do {
            *(undefined4 *)(uStack_1560 + lVar38 * 4) = 0;
            lVar38 = lVar38 + 1;
          } while (lVar38 < iStack_159c);
        }
        if (puStack_1558 != &uStack_1550 && puStack_1558 != (undefined8 *)0x0) {
          _free(puStack_1558[-1]);
        }
        if (lStack_1508 != 0) {
          piVar24 = (int *)(lStack_1508 + 0x14);
          do {
            iVar22 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar22 + -1 == 0) {
            func_0x000109a848d4(auStack_1540);
          }
        }
        lStack_1508 = 0;
        aiStack_1534[3] = 0;
        aiStack_1534[4] = 0;
        aiStack_1534[1] = 0;
        aiStack_1534[2] = 0;
        aiStack_1534[7] = 0;
        aiStack_1534[8] = 0;
        aiStack_1534[5] = 0;
        aiStack_1534[6] = 0;
        if (0 < iStack_153c) {
          lVar38 = 0;
          do {
            *(undefined4 *)(lStack_1500 + lVar38 * 4) = 0;
            lVar38 = lVar38 + 1;
          } while (lVar38 < iStack_153c);
        }
        if (puStack_14f8 != auStack_14f0 && puStack_14f8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_14f8 + -8));
        }
        if (lStack_14a8 != 0) {
          piVar24 = (int *)(lStack_14a8 + 0x14);
          do {
            iVar22 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar22 + -1 == 0) {
            func_0x000109a848d4(&uStack_14e0);
          }
        }
        lStack_14a8 = 0;
        dVar37 = 0.0;
        aiStack_14d4[3] = 0;
        aiStack_14d4[4] = 0;
        aiStack_14d4[1] = 0;
        aiStack_14d4[2] = 0;
        aiStack_14d4[7] = 0;
        aiStack_14d4[8] = 0;
        aiStack_14d4[5] = 0;
        aiStack_14d4[6] = 0;
        if (0 < iStack_14dc) {
          lVar38 = 0;
          do {
            *(undefined4 *)(lStack_14a0 + lVar38 * 4) = 0;
            lVar38 = lVar38 + 1;
          } while (lVar38 < iStack_14dc);
        }
        if (puStack_1498 != auStack_1490 && puStack_1498 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1498 + -8));
        }
        return dVar37;
      }
    }
    puVar10 = (undefined4 *)0x98;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    uStack_1660 = puVar10 + 1;
    puStack_1658 = (uint *)0x90;
    *(undefined8 *)(puVar10 + 0x17) = 0x2029545f425f4d4d;
    *(undefined8 *)(puVar10 + 0x15) = 0x45475f5643202620;
    *(undefined8 *)(puVar10 + 0x1b) = 0x203a20736c6f632e;
    *(undefined8 *)(puVar10 + 0x19) = 0x42203f2030203d3d;
    *(undefined8 *)(puVar10 + 0x1f) = 0x79742e4420262620;
    *(undefined8 *)(puVar10 + 0x1d) = 0x292973776f722e42;
    *(undefined8 *)(puVar10 + 0x23) = 0x2928657079742e41;
    *(undefined8 *)(puVar10 + 0x21) = 0x203d3d2029286570;
    *(undefined8 *)(puVar10 + 7) = 0x545f415f4d4d4547;
    *(undefined8 *)(puVar10 + 5) = 0x5f56432026207367;
    *(undefined8 *)(puVar10 + 0xb) = 0x2073776f722e4120;
    *(undefined8 *)(puVar10 + 9) = 0x3f2030203d3d2029;
    *(undefined8 *)(puVar10 + 0xf) = 0x4428202626202929;
    *(undefined8 *)(puVar10 + 0xd) = 0x736c6f632e41203a;
    *(undefined8 *)(puVar10 + 0x13) = 0x7367616c66282820;
    *(undefined8 *)(puVar10 + 0x11) = 0x3d3d20736c6f632e;
    *(undefined1 *)(puVar10 + 0x25) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x616c662828203d3d;
    *(undefined8 *)(puVar10 + 1) = 0x2073776f722e4428;
    FUN_109ac3188(0xffffff29,&uStack_1660,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
    pcVar36 = (code *)SoftwareBreakpoint(1,0x109a73c70);
    (*pcVar36)();
  }
  return dVar37;
}



/* Entry: 109a72788; end: 109a72b77;  */

double FUN_109a72788(double param_1,double param_2,double *param_3,double *param_4,double *param_5,
                    double *param_6,double *param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  double **ppdVar10;
  ulong uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  float *pfVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  int *piVar24;
  undefined8 *puVar25;
  ulong uVar26;
  int *piVar27;
  double *pdVar28;
  int *piVar29;
  long lVar30;
  uint uVar31;
  double *unaff_x19;
  double *pdVar32;
  double *pdVar33;
  code *pcVar34;
  double dVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  double *pdVar39;
  double dVar40;
  ulong unaff_x28;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  undefined4 auStack_11f8 [2];
  uint *puStack_11f0;
  undefined8 uStack_11e8;
  undefined4 auStack_11e0 [2];
  undefined4 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined4 auStack_11c8 [2];
  undefined1 *puStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  uint *puStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  long lStack_1178;
  ulong uStack_1170;
  undefined8 *puStack_1168;
  undefined8 auStack_1160 [2];
  uint uStack_1150;
  int iStack_114c;
  int iStack_1148;
  int iStack_1144;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  long lStack_1118;
  long lStack_1110;
  undefined1 *puStack_1108;
  undefined1 auStack_1100 [16];
  undefined4 uStack_10f0;
  int iStack_10ec;
  undefined4 uStack_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  undefined4 uStack_10d8;
  undefined4 uStack_10d4;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  undefined4 uStack_10c8;
  undefined4 uStack_10c4;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  long lStack_10b8;
  ulong uStack_10b0;
  undefined8 *puStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined1 auStack_1090 [4];
  int iStack_108c;
  int iStack_1088;
  int aiStack_1084 [11];
  long lStack_1058;
  long lStack_1050;
  undefined1 *puStack_1048;
  undefined1 auStack_1040 [16];
  uint uStack_1030;
  int iStack_102c;
  int iStack_1028;
  int aiStack_1024 [11];
  long lStack_ff8;
  long lStack_ff0;
  undefined1 *puStack_fe8;
  undefined1 auStack_fe0 [16];
  undefined4 *puStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined4 uStack_f48;
  ulong uStack_f40;
  undefined8 uStack_f38;
  undefined4 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  ulong uStack_f18;
  double **ppdStack_f10;
  ulong uStack_f08;
  double dStack_f00;
  ulong uStack_ef8;
  double dStack_ef0;
  ulong uStack_ee8;
  int *piStack_ee0;
  undefined8 *puStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  double dStack_ec0;
  double **ppdStack_eb8;
  double *pdStack_eb0;
  undefined8 *puStack_ea8;
  undefined8 uStack_ea0;
  long lStack_e98;
  double adStack_e28 [129];
  double dStack_a20;
  double dStack_a18;
  double dStack_a10;
  double dStack_a08;
  long lStack_a00;
  double adStack_948 [129];
  long lStack_540;
  ulong uStack_530;
  ulong uStack_528;
  double *pdStack_520;
  ulong uStack_518;
  double *pdStack_510;
  long lStack_508;
  ulong uStack_500;
  double dStack_4f8;
  double *pdStack_4f0;
  double *pdStack_4e8;
  undefined1 *puStack_4e0;
  code *pcStack_4d8;
  ulong uStack_4c8;
  double *pdStack_4c0;
  double *pdStack_4b8;
  double *pdStack_4b0;
  double adStack_4a8 [129];
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar33 = (double *)param_3[2];
  dVar35 = param_4[2];
  pdVar39 = (double *)param_5[2];
  pdVar22 = param_3 + 10;
  uVar36 = (ulong)param_4[10] >> 3;
  uVar26 = (ulong)param_5[10] >> 3;
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar26 = 0;
  }
  uVar31 = *(uint *)param_3[8];
  pdVar32 = (double *)(ulong)uVar31;
  uVar1 = ((uint *)param_3[8])[1];
  uVar38 = (ulong)uVar1;
  dVar42 = param_1;
  if (pdVar39 == (double *)0x0) {
    if (0 < (int)uVar31) {
      pdVar23 = (double *)0x0;
      pdVar13 = pdVar33 + 1;
      lVar37 = ((ulong)*pdVar22 >> 2) * 4;
      pdVar22 = pdVar33;
      pdVar28 = pdVar13;
      pdVar12 = pdVar23;
      do {
        do {
          if ((int)uVar1 < 4) {
            dVar42 = 0.0;
            uVar31 = 0;
          }
          else {
            lVar30 = 0;
            dVar42 = 0.0;
            pdVar6 = pdVar13;
            pdVar14 = pdVar28;
            do {
              param_3 = pdVar6 + 2;
              param_2 = (double)*(float *)((long)pdVar14 + -4) *
                        (double)*(float *)((long)pdVar6 + -4) +
                        (double)*(float *)(pdVar6 + -1) * (double)*(float *)(pdVar14 + -1) +
                        (double)*(float *)pdVar6 * (double)*(float *)pdVar14 +
                        (double)*(float *)((long)pdVar6 + 4) * (double)*(float *)((long)pdVar14 + 4)
              ;
              dVar42 = dVar42 + param_2;
              lVar30 = lVar30 + 4;
              pdVar6 = param_3;
              pdVar14 = pdVar14 + 2;
              uVar31 = (uVar1 - 4 & 0xfffffffc) + 4;
            } while (lVar30 <= (int)(uVar1 - 4));
          }
          if ((int)uVar31 < (int)uVar1) {
            pdVar6 = (double *)((long)pdVar22 + (ulong)uVar31 * 4);
            pfVar20 = (float *)((long)pdVar33 + (ulong)uVar31 * 4);
            do {
              param_3 = (double *)((long)pdVar6 + 4);
              param_2 = (double)*(float *)pdVar6;
              dVar42 = dVar42 + (double)*pfVar20 * param_2;
              uVar31 = uVar31 + 1;
              pdVar6 = param_3;
              pfVar20 = pfVar20 + 1;
            } while ((int)uVar31 < (int)uVar1);
          }
          dVar42 = param_1 * dVar42;
          *(double *)((long)dVar35 + (long)pdVar23 * 8) = dVar42;
          pdVar23 = (double *)((long)pdVar23 + 1);
          pdVar13 = (double *)((long)pdVar13 + lVar37);
          pdVar33 = (double *)((long)pdVar33 + lVar37);
        } while (pdVar23 != pdVar32);
        pdVar23 = (double *)((long)pdVar12 + 1);
        dVar35 = (double)((long)dVar35 + uVar36 * 8);
        pdVar13 = (double *)((long)pdVar28 + lVar37);
        pdVar33 = (double *)((long)pdVar22 + lVar37);
        pdVar22 = pdVar33;
        pdVar28 = pdVar13;
        pdVar12 = pdVar23;
      } while (pdVar23 != pdVar32);
    }
  }
  else {
    uVar2 = *(uint *)((long)param_5 + 0xc);
    unaff_x28 = (ulong)uVar2;
    unaff_x19 = (double *)((long)(int)uVar1 << 3);
    param_3 = adStack_4a8;
    pdStack_4b8 = param_3;
    uStack_4c8 = (ulong)*pdVar22 >> 2;
    pdStack_4c0 = param_3;
    if ((double *)0x408 < unaff_x19) {
      param_3 = unaff_x19;
      __Znam();
      pdStack_4b8 = param_3;
    }
    pdStack_4b0 = unaff_x19;
    if (0 < (int)uVar31) {
      pdVar22 = (double *)0x0;
      uVar31 = uVar1 - 4;
      lVar37 = 0x20;
      if (uVar2 != uVar1) {
        lVar37 = 0;
      }
      lVar30 = uStack_4c8 * 4;
      pdVar13 = pdVar33 + 1;
      param_4 = pdVar39;
      do {
        param_5 = pdVar33;
        param_6 = pdVar13;
        param_7 = pdVar22;
        if ((int)uVar2 < (int)uVar1) {
          if (0 < (int)uVar1) {
            uVar11 = 0;
            dVar42 = pdVar39[(long)pdVar22 * uVar26];
            do {
              param_2 = (double)*(float *)((long)pdVar33 + uVar11 * 4) - dVar42;
              param_3[uVar11] = param_2;
              uVar11 = uVar11 + 1;
            } while (uVar38 != uVar11);
          }
        }
        else {
          pdVar23 = pdVar33;
          pdVar28 = param_4;
          pdVar12 = param_3;
          uVar11 = uVar38;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar28;
              *pdVar12 = (double)*(float *)pdVar23 - param_2;
              uVar11 = uVar11 - 1;
              pdVar23 = (double *)((long)pdVar23 + 4);
              pdVar28 = pdVar28 + 1;
              pdVar12 = pdVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        do {
          pdVar23 = pdVar39 + (long)param_7 * uVar26;
          if ((int)uVar2 < (int)uVar1) {
            dStack_98 = *pdVar23;
            dStack_a0 = dStack_98;
            dStack_88 = dStack_98;
            dStack_90 = dStack_98;
            pdVar23 = &dStack_a0;
          }
          if ((int)uVar1 < 4) {
            dVar42 = 0.0;
            uVar18 = 0;
          }
          else {
            lVar19 = 0;
            pdVar28 = pdVar23 + 2;
            dVar42 = 0.0;
            pdVar12 = param_6;
            pdVar6 = param_3 + 2;
            do {
              unaff_x19 = pdVar12 + 2;
              param_2 = pdVar6[-1] * ((double)*(float *)((long)pdVar12 - 4) - pdVar28[-1]) +
                        ((double)*(float *)(pdVar12 + -1) - pdVar28[-2]) * pdVar6[-2] +
                        ((double)*(float *)pdVar12 - *pdVar28) * *pdVar6 +
                        ((double)*(float *)((long)pdVar12 + 4) - pdVar28[1]) * pdVar6[1];
              lVar19 = lVar19 + 4;
              dVar42 = dVar42 + param_2;
              pdVar28 = (double *)((long)pdVar28 + lVar37);
              pdVar12 = unaff_x19;
              pdVar6 = pdVar6 + 4;
            } while (lVar19 <= (int)uVar31);
            pdVar23 = (double *)((long)pdVar23 + lVar37 * (ulong)((uVar31 >> 2) + 1));
            uVar18 = (uVar31 & 0xfffffffc) + 4;
          }
          if ((int)uVar18 < (int)uVar1) {
            pfVar20 = (float *)((long)param_5 + (ulong)uVar18 * 4);
            pdVar28 = param_3 + uVar18;
            do {
              unaff_x19 = pdVar28 + 1;
              param_2 = *pdVar28;
              dVar42 = dVar42 + ((double)*pfVar20 - *pdVar23) * param_2;
              uVar18 = uVar18 + 1;
              pdVar23 = pdVar23 + 1;
              pfVar20 = pfVar20 + 1;
              pdVar28 = unaff_x19;
            } while ((int)uVar18 < (int)uVar1);
          }
          dVar42 = param_1 * dVar42;
          *(double *)((long)dVar35 + (long)param_7 * 8) = dVar42;
          param_7 = (double *)((long)param_7 + 1);
          param_6 = (double *)((long)param_6 + lVar30);
          param_5 = (double *)((long)param_5 + lVar30);
        } while (param_7 != pdVar32);
        dVar35 = (double)((long)dVar35 + uVar36 * 8);
        pdVar22 = (double *)((long)pdVar22 + 1);
        param_4 = param_4 + uVar26;
        pdVar33 = (double *)((long)pdVar33 + lVar30);
        pdVar13 = (double *)((long)pdVar13 + lVar30);
      } while (pdVar22 != pdVar32);
    }
    pdStack_4b8 = param_3;
    if (param_3 != pdStack_4c0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar42;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uStack_530 = unaff_x28;
  uStack_528 = uVar26;
  pdStack_520 = pdVar39;
  uStack_518 = uVar38;
  pdStack_510 = pdVar32;
  lStack_508 = (long)(int)uVar1;
  uStack_500 = uVar36;
  dStack_4f8 = dVar35;
  pdStack_4f0 = pdVar33;
  pdStack_4e8 = unaff_x19;
  puStack_4e0 = &stack0xfffffffffffffff0;
  pcStack_4d8 = FUN_109a72b78;
  lStack_540 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar22 = (double *)param_3[2];
  dVar35 = param_4[2];
  pdVar33 = (double *)param_5[2];
  dVar40 = param_3[10];
  dVar41 = param_4[10];
  uVar26 = (ulong)param_5[10] >> 3;
  uVar31 = *(uint *)((long)param_5 + 0xc);
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar26 = 0;
  }
  uVar2 = *(uint *)param_3[8];
  uVar18 = ((uint *)param_3[8])[1];
  lVar37 = (long)(int)uVar2;
  uVar1 = uVar2 << 3;
  if (pdVar33 != (double *)0x0 && (int)uVar31 < (int)uVar18) {
    uVar1 = uVar2 * 0x28;
  }
  pdVar32 = (double *)(long)(int)uVar1;
  pdVar39 = adStack_948;
  dVar43 = dVar42;
  if (0x408 < uVar1) {
    __Znam();
    pdVar39 = pdVar32;
  }
  uVar36 = (ulong)dVar40 >> 3;
  pdVar32 = (double *)(ulong)uVar2;
  lVar30 = (long)(int)uVar18;
  if (pdVar33 != (double *)0x0 && (int)uVar31 < (int)uVar18) {
    pdVar13 = pdVar39 + lVar37;
    pdVar23 = pdVar13;
    if (0 < (int)uVar2) {
      do {
        dVar43 = *pdVar33;
        pdVar33 = pdVar33 + uVar26;
        pdVar23[1] = dVar43;
        *pdVar23 = dVar43;
        pdVar23[3] = dVar43;
        pdVar23[2] = dVar43;
        lVar37 = lVar37 + -1;
        pdVar23 = pdVar23 + 4;
      } while (lVar37 != 0);
    }
    bVar5 = uVar26 != 0;
    uVar26 = 0;
    pdVar33 = pdVar13;
    if (bVar5) {
      uVar26 = 4;
    }
LAB_109a72c84:
    if (0 < (int)uVar18) {
      pdVar28 = (double *)0x0;
      pdVar23 = pdVar22 + 2;
      param_4 = pdVar13;
      param_5 = pdVar22;
      do {
        if (pdVar33 == (double *)0x0) {
          pdVar6 = param_5;
          pdVar14 = param_4;
          pdVar15 = pdVar39;
          pdVar12 = pdVar32;
          if (0 < (int)uVar2) {
            do {
              param_2 = *pdVar14;
              dVar43 = *pdVar6 - param_2;
              *pdVar15 = dVar43;
              pdVar12 = (double *)((long)pdVar12 + -1);
              pdVar6 = pdVar6 + uVar36;
              pdVar14 = pdVar14 + uVar26;
              pdVar15 = pdVar15 + 1;
            } while (pdVar12 != (double *)0x0);
          }
        }
        else {
          pdVar6 = param_5;
          pdVar12 = pdVar33;
          pdVar15 = pdVar39;
          pdVar14 = pdVar32;
          if (0 < (int)uVar2) {
            do {
              param_2 = *pdVar12;
              dVar43 = *pdVar6 - param_2;
              *pdVar15 = dVar43;
              pdVar12 = pdVar12 + uVar26;
              pdVar6 = pdVar6 + uVar36;
              pdVar14 = (double *)((long)pdVar14 + -1);
              pdVar15 = pdVar15 + 1;
            } while (pdVar14 != (double *)0x0);
          }
        }
        param_6 = pdVar28;
        param_7 = pdVar23;
        if ((long)pdVar28 <= lVar30 + -4) {
          do {
            if ((int)uVar2 < 1) {
              dVar43 = 0.0;
              dVar40 = 0.0;
              param_2 = 0.0;
              dVar45 = 0.0;
            }
            else {
              pdVar12 = pdVar13 + (long)param_6;
              if (pdVar33 != (double *)0x0) {
                pdVar12 = pdVar33;
              }
              pdVar12 = pdVar12 + 2;
              dVar43 = 0.0;
              dVar40 = 0.0;
              param_2 = 0.0;
              dVar45 = 0.0;
              pdVar6 = param_7;
              pdVar15 = pdVar39;
              pdVar14 = pdVar32;
              do {
                dVar4 = *pdVar15;
                pdVar15 = pdVar15 + 1;
                dVar43 = dVar43 + (pdVar6[-2] - pdVar12[-2]) * dVar4;
                dVar40 = dVar40 + (pdVar6[-1] - pdVar12[-1]) * dVar4;
                param_2 = param_2 + (*pdVar6 - *pdVar12) * dVar4;
                dVar45 = dVar45 + (pdVar6[1] - pdVar12[1]) * dVar4;
                pdVar12 = pdVar12 + uVar26;
                pdVar6 = pdVar6 + uVar36;
                pdVar14 = (double *)((long)pdVar14 + -1);
              } while (pdVar14 != (double *)0x0);
            }
            dVar43 = dVar43 * dVar42;
            pdVar12 = (double *)((long)dVar35 + (long)param_6 * 8);
            param_2 = param_2 * dVar42;
            pdVar12[1] = dVar40 * dVar42;
            *pdVar12 = dVar43;
            pdVar12[3] = dVar45 * dVar42;
            pdVar12[2] = param_2;
            param_6 = (double *)((long)param_6 + 4);
            param_7 = param_7 + 4;
          } while ((int)param_6 <= (int)(lVar30 + -4));
        }
        if ((int)param_6 < (int)uVar18) {
          param_7 = pdVar22 + (long)param_6;
          do {
            if ((int)uVar2 < 1) {
              dVar43 = 0.0;
            }
            else {
              pdVar12 = pdVar13 + (long)param_6;
              if (pdVar33 != (double *)0x0) {
                pdVar12 = pdVar33;
              }
              dVar43 = 0.0;
              pdVar6 = param_7;
              pdVar15 = pdVar39;
              pdVar14 = pdVar32;
              do {
                dVar43 = dVar43 + (*pdVar6 - *pdVar12) * *pdVar15;
                pdVar12 = pdVar12 + uVar26;
                pdVar6 = pdVar6 + uVar36;
                pdVar14 = (double *)((long)pdVar14 + -1);
                pdVar15 = pdVar15 + 1;
              } while (pdVar14 != (double *)0x0);
            }
            dVar43 = dVar42 * dVar43;
            *(double *)((long)dVar35 + (long)param_6 * 8) = dVar43;
            param_6 = (double *)((long)param_6 + 1);
            param_7 = param_7 + 1;
            param_2 = dVar42;
          } while ((int)param_6 < (int)uVar18);
        }
        dVar35 = (double)((long)dVar35 + ((ulong)dVar41 >> 3) * 8);
        pdVar28 = (double *)((long)pdVar28 + 1);
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        pdVar23 = pdVar23 + 1;
      } while (pdVar28 != (double *)(ulong)uVar18);
    }
  }
  else {
    if (pdVar33 != (double *)0x0) {
      pdVar13 = pdVar33;
      pdVar33 = (double *)0x0;
      goto LAB_109a72c84;
    }
    if (0 < (int)uVar18) {
      lVar37 = 0;
      pdVar33 = pdVar22 + 2;
      pdVar13 = pdVar22;
      do {
        pdVar28 = pdVar32;
        param_4 = pdVar32;
        pdVar23 = pdVar13;
        pdVar12 = pdVar39;
        if (0 < (int)uVar2) {
          do {
            dVar43 = *pdVar23;
            *pdVar12 = dVar43;
            pdVar23 = pdVar23 + uVar36;
            pdVar28 = (double *)((long)pdVar28 + -1);
            param_4 = (double *)0x0;
            pdVar12 = pdVar12 + 1;
          } while (pdVar28 != (double *)0x0);
        }
        lVar19 = lVar37;
        pdVar23 = pdVar33;
        if (lVar37 <= lVar30 + -4) {
          do {
            dVar43 = 0.0;
            dVar40 = 0.0;
            if ((int)uVar2 < 1) {
              param_2 = 0.0;
              dVar45 = 0.0;
            }
            else {
              param_2 = 0.0;
              dVar45 = 0.0;
              pdVar28 = pdVar23;
              param_5 = pdVar39;
              pdVar12 = pdVar32;
              do {
                dVar4 = *param_5;
                param_5 = param_5 + 1;
                dVar43 = dVar43 + pdVar28[-2] * dVar4;
                dVar40 = dVar40 + pdVar28[-1] * dVar4;
                param_2 = param_2 + *pdVar28 * dVar4;
                dVar45 = dVar45 + pdVar28[1] * dVar4;
                pdVar28 = pdVar28 + uVar36;
                pdVar12 = (double *)((long)pdVar12 + -1);
              } while (pdVar12 != (double *)0x0);
              param_6 = (double *)0x0;
            }
            dVar43 = dVar43 * dVar42;
            param_4 = (double *)((long)dVar35 + lVar19 * 8);
            param_2 = param_2 * dVar42;
            param_4[1] = dVar40 * dVar42;
            *param_4 = dVar43;
            param_4[3] = dVar45 * dVar42;
            param_4[2] = param_2;
            lVar19 = lVar19 + 4;
            pdVar23 = pdVar23 + 4;
          } while ((int)lVar19 <= (int)(lVar30 + -4));
        }
        if ((int)lVar19 < (int)uVar18) {
          pdVar23 = pdVar22 + lVar19;
          do {
            dVar43 = 0.0;
            pdVar28 = pdVar23;
            pdVar12 = pdVar39;
            pdVar6 = pdVar32;
            if (0 < (int)uVar2) {
              do {
                param_5 = pdVar12 + 1;
                dVar43 = dVar43 + *pdVar28 * *pdVar12;
                param_4 = pdVar28 + uVar36;
                param_6 = (double *)((long)pdVar6 - 1);
                pdVar28 = param_4;
                pdVar12 = param_5;
                pdVar6 = param_6;
              } while (param_6 != (double *)0x0);
            }
            dVar43 = dVar42 * dVar43;
            *(double *)((long)dVar35 + lVar19 * 8) = dVar43;
            lVar19 = lVar19 + 1;
            pdVar23 = pdVar23 + 1;
            param_2 = dVar42;
          } while ((int)lVar19 < (int)uVar18);
        }
        lVar37 = lVar37 + 1;
        dVar35 = (double)((long)dVar35 + ((ulong)dVar41 >> 3) * 8);
        pdVar13 = pdVar13 + 1;
        pdVar33 = pdVar33 + 1;
      } while (lVar37 != lVar30);
    }
  }
  if (pdVar39 != adStack_948) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_540) {
    return dVar43;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_a00 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar22 = (double *)pdVar39[2];
  dVar35 = param_4[2];
  pdVar33 = (double *)param_5[2];
  uVar36 = (ulong)pdVar39[10] >> 3;
  dVar42 = param_4[10];
  uVar26 = (ulong)param_5[10] >> 3;
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar26 = 0;
  }
  uVar31 = *(uint *)pdVar39[8];
  uVar38 = (ulong)uVar31;
  uVar1 = ((uint *)pdVar39[8])[1];
  dVar40 = dVar43;
  if (pdVar33 == (double *)0x0) {
    if (0 < (int)uVar31) {
      uVar26 = 0;
      pdVar33 = pdVar22 + 2;
      pdVar32 = pdVar22;
      pdVar13 = pdVar33;
      uVar11 = uVar26;
      do {
        do {
          if ((int)uVar1 < 4) {
            dVar40 = 0.0;
            uVar31 = 0;
          }
          else {
            lVar37 = 0;
            dVar40 = 0.0;
            pdVar23 = pdVar33;
            pdVar28 = pdVar13;
            do {
              pdVar39 = pdVar23 + 4;
              param_2 = pdVar28[-1] * pdVar23[-1] + pdVar23[-2] * pdVar28[-2] + *pdVar23 * *pdVar28
                        + pdVar23[1] * pdVar28[1];
              dVar40 = dVar40 + param_2;
              lVar37 = lVar37 + 4;
              pdVar23 = pdVar39;
              pdVar28 = pdVar28 + 4;
              uVar31 = (uVar1 - 4 & 0xfffffffc) + 4;
            } while (lVar37 <= (int)(uVar1 - 4));
          }
          if ((int)uVar31 < (int)uVar1) {
            pdVar23 = pdVar32 + uVar31;
            pdVar28 = pdVar22 + uVar31;
            do {
              pdVar39 = pdVar23 + 1;
              param_2 = *pdVar23;
              dVar40 = dVar40 + *pdVar28 * param_2;
              uVar31 = uVar31 + 1;
              pdVar23 = pdVar39;
              pdVar28 = pdVar28 + 1;
            } while ((int)uVar31 < (int)uVar1);
          }
          dVar40 = dVar43 * dVar40;
          *(double *)((long)dVar35 + uVar26 * 8) = dVar40;
          uVar26 = uVar26 + 1;
          pdVar33 = pdVar33 + uVar36;
          pdVar22 = pdVar22 + uVar36;
        } while (uVar26 != uVar38);
        uVar26 = uVar11 + 1;
        dVar35 = (double)((long)dVar35 + ((ulong)dVar42 >> 3) * 8);
        pdVar33 = pdVar13 + uVar36;
        pdVar22 = pdVar32 + uVar36;
        pdVar32 = pdVar22;
        pdVar13 = pdVar33;
        uVar11 = uVar26;
      } while (uVar26 != uVar38);
    }
  }
  else {
    uVar2 = *(uint *)((long)param_5 + 0xc);
    pdVar32 = (double *)((long)(int)uVar1 << 3);
    pdVar39 = adStack_e28;
    if ((double *)0x408 < pdVar32) {
      __Znam();
      pdVar39 = pdVar32;
    }
    if (0 < (int)uVar31) {
      uVar11 = 0;
      uVar31 = uVar1 - 4;
      lVar37 = 0x20;
      if (uVar2 != uVar1) {
        lVar37 = 0;
      }
      param_4 = pdVar22 + 2;
      pdVar32 = pdVar33;
      do {
        param_6 = pdVar22;
        param_7 = param_4;
        uVar17 = uVar11;
        if ((int)uVar2 < (int)uVar1) {
          if (0 < (int)uVar1) {
            lVar30 = 0;
            dVar40 = pdVar33[uVar11 * uVar26];
            do {
              param_2 = *(double *)((long)pdVar22 + lVar30) - dVar40;
              *(double *)((long)pdVar39 + lVar30) = param_2;
              lVar30 = lVar30 + 8;
            } while ((ulong)uVar1 * 8 - lVar30 != 0);
          }
        }
        else {
          pdVar13 = pdVar32;
          pdVar23 = pdVar39;
          uVar16 = (ulong)uVar1;
          pdVar28 = pdVar22;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar13;
              *pdVar23 = *pdVar28 - param_2;
              uVar16 = uVar16 - 1;
              pdVar13 = pdVar13 + 1;
              pdVar23 = pdVar23 + 1;
              pdVar28 = pdVar28 + 1;
            } while (uVar16 != 0);
          }
        }
        do {
          pdVar13 = pdVar33 + uVar17 * uVar26;
          if ((int)uVar2 < (int)uVar1) {
            dStack_a18 = *pdVar13;
            dStack_a20 = dStack_a18;
            dStack_a08 = dStack_a18;
            dStack_a10 = dStack_a18;
            pdVar13 = &dStack_a20;
          }
          if ((int)uVar1 < 4) {
            dVar40 = 0.0;
            uVar18 = 0;
          }
          else {
            lVar30 = 0;
            pdVar23 = pdVar13 + 2;
            dVar40 = 0.0;
            pdVar28 = pdVar39 + 2;
            pdVar12 = param_7;
            do {
              param_2 = pdVar28[-1] * (pdVar12[-1] - pdVar23[-1]) +
                        (pdVar12[-2] - pdVar23[-2]) * pdVar28[-2] + (*pdVar12 - *pdVar23) * *pdVar28
                        + (pdVar12[1] - pdVar23[1]) * pdVar28[1];
              lVar30 = lVar30 + 4;
              dVar40 = dVar40 + param_2;
              pdVar23 = (double *)((long)pdVar23 + lVar37);
              pdVar28 = pdVar28 + 4;
              pdVar12 = pdVar12 + 4;
            } while (lVar30 <= (int)uVar31);
            pdVar13 = (double *)((long)pdVar13 + lVar37 * (ulong)((uVar31 >> 2) + 1));
            uVar18 = (uVar31 & 0xfffffffc) + 4;
          }
          if ((int)uVar18 < (int)uVar1) {
            pdVar23 = param_6 + uVar18;
            pdVar28 = pdVar39 + uVar18;
            do {
              param_2 = *pdVar28;
              dVar40 = dVar40 + (*pdVar23 - *pdVar13) * param_2;
              uVar18 = uVar18 + 1;
              pdVar13 = pdVar13 + 1;
              pdVar23 = pdVar23 + 1;
              pdVar28 = pdVar28 + 1;
            } while ((int)uVar18 < (int)uVar1);
          }
          dVar40 = dVar43 * dVar40;
          *(double *)((long)dVar35 + uVar17 * 8) = dVar40;
          uVar17 = uVar17 + 1;
          param_7 = param_7 + uVar36;
          param_6 = param_6 + uVar36;
        } while (uVar17 != uVar38);
        dVar35 = (double)((long)dVar35 + ((ulong)dVar42 >> 3) * 8);
        uVar11 = uVar11 + 1;
        pdVar32 = pdVar32 + uVar26;
        pdVar22 = pdVar22 + uVar36;
        param_4 = param_4 + uVar36;
      } while (uVar11 != uVar38);
    }
    if (pdVar39 != adStack_e28) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a00) {
    return dVar40;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_e98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*param_4 & 0x1f0000) == 0x10000) {
    puVar9 = (ulong *)param_4[1];
    uStack_f20 = (undefined4 *)*puVar9;
    uStack_f18 = puVar9[1];
    uStack_f08 = puVar9[3];
    ppdStack_f10 = (double **)puVar9[2];
    dVar40 = (double)puVar9[4];
    param_2 = (double)puVar9[6];
    uStack_ef8 = puVar9[5];
    dStack_f00 = dVar40;
    uStack_ee8 = puVar9[7];
    dStack_ef0 = param_2;
    piStack_ee0 = (int *)((ulong)&uStack_f20 | 8);
    puStack_ed8 = &uStack_ed0;
    uStack_ed0 = 0;
    uStack_ec8 = 0;
    if (puVar9[7] != 0) {
      piVar24 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar5) {
          *piVar24 = *piVar24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_ed0 = *(undefined8 *)puVar9[9];
      uStack_ec8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_f20 = (undefined4 *)((ulong)uStack_f20 & 0xffffffff);
      func_0x000109a84868(&uStack_f20);
    }
  }
  else {
    FUN_109a8a180(&uStack_f20,param_4,0xffffffff);
  }
  uVar31 = *(uint *)pdVar39;
  if ((((uint)uStack_f20 ^ uVar31) & 0xfff) != 0) {
LAB_109a73678:
    puVar8 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_f60 = puVar8 + 1;
    uStack_f58 = 0x35;
    *(undefined8 *)(puVar8 + 3) = 0x7974203d3d202928;
    *(undefined8 *)(puVar8 + 1) = 0x657079742e74616d;
    *(undefined1 *)((long)puVar8 + 0x39) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x657a69732e74616d;
    *(undefined8 *)(puVar8 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar8 + 0xb) = 0x636e756620262620;
    *(undefined8 *)(puVar8 + 9) = 0x657a6973203d3d20;
    *(undefined8 *)((long)puVar8 + 0x31) = 0x30203d2120636e75;
    FUN_109ac3188(0xffffff29,&puStack_f60,&DAT_10f329830,&UNK_10f5974ee,0xcac);
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x109a736e8);
    (*pcVar34)();
  }
  uVar1 = piStack_ee0[-1];
  uVar26 = (ulong)uVar1;
  piVar24 = (int *)pdVar39[8];
  if (uVar1 != piVar24[-1]) goto LAB_109a73678;
  pcVar34 = (code *)(&PTR_DAT_110b21d38)[(ulong)uVar31 & 7];
  if (uVar1 == 2) {
    if (*piStack_ee0 != *piVar24) goto LAB_109a73678;
    bVar5 = piStack_ee0[1] == piVar24[1];
  }
  else {
    piVar27 = piStack_ee0;
    piVar29 = piVar24;
    if (0 < (int)uVar1) {
      do {
        if (*piVar27 != *piVar29) goto LAB_109a73678;
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 1;
        piVar29 = piVar29 + 1;
      } while (uVar26 != 0);
    }
    bVar5 = true;
  }
  if (((int)((ulong)uVar31 & 7) == 7) || (!bVar5)) goto LAB_109a73678;
  lVar37 = ((ulong)(uVar31 >> 3) & 0x1ff) + 1;
  if (((uVar31 & (uint)uStack_f20) >> 0xe & 1) != 0) {
    uVar26 = (ulong)*(uint *)((long)pdVar39 + 4);
    if ((int)*(uint *)((long)pdVar39 + 4) < 3) {
      lVar30 = (long)(int)*(uint *)((long)pdVar39 + 0xc) * (long)(int)*(uint *)(pdVar39 + 1);
    }
    else {
      lVar30 = 1;
      do {
        lVar30 = lVar30 * *piVar24;
        uVar26 = uVar26 - 1;
        piVar24 = piVar24 + 1;
      } while (uVar26 != 0);
    }
    uVar26 = lVar30 * lVar37;
    if (uVar26 - (long)(int)uVar26 == 0) {
      ppuVar7 = (undefined4 **)pdVar39[2];
      ppdVar10 = ppdStack_f10;
      (*pcVar34)();
      dVar35 = dVar40;
      goto LAB_109a735c8;
    }
  }
  puStack_ea8 = &uStack_f20;
  uStack_ea0 = 0;
  uStack_f28 = 0;
  uStack_f58 = 0;
  uStack_f50 = 0;
  puStack_f60 = (undefined4 *)0x0;
  uStack_f48 = 0;
  uStack_f40 = 0;
  uStack_f38 = 0;
  uStack_f30 = 0;
  ppuVar7 = &puStack_f60;
  ppdVar10 = &pdStack_eb0;
  param_6 = &dStack_ec0;
  uVar26 = 0;
  param_7 = (double *)0xffffffff;
  pdStack_eb0 = pdVar39;
  FUN_109a9b368();
  uVar31 = (int)lVar37 * (int)uStack_f38;
  dVar35 = 0.0;
  uVar36 = 0xffffffffffffffff;
  while (uVar36 = uVar36 + 1, uVar36 < uStack_f40) {
    ppdVar10 = ppdStack_eb8;
    uVar26 = (ulong)uVar31;
    (*pcVar34)(dStack_ec0);
    dVar35 = dVar35 + dVar40;
    ppuVar7 = &puStack_f60;
    FUN_109a8350c();
  }
LAB_109a735c8:
  if (uStack_ee8 != 0) {
    piVar24 = (int *)(uStack_ee8 + 0x14);
    do {
      iVar21 = *piVar24;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar5) {
        *piVar24 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      ppuVar7 = (undefined4 **)&uStack_f20;
      func_0x000109a848d4();
    }
  }
  uStack_ee8 = 0;
  uVar44 = 0;
  uStack_f08 = 0;
  ppdStack_f10 = (double **)0x0;
  uStack_ef8 = 0;
  dStack_f00 = 0.0;
  if (0 < uStack_f20._4_4_) {
    lVar37 = 0;
    do {
      piStack_ee0[lVar37] = 0;
      lVar37 = lVar37 + 1;
    } while (lVar37 < uStack_f20._4_4_);
  }
  if (puStack_ed8 != &uStack_ed0 && puStack_ed8 != (undefined8 *)0x0) {
    ppuVar7 = (undefined4 **)puStack_ed8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e98) {
    ___stack_chk_fail();
    if ((int)ppdVar10 != 0) {
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_f20);
    }
    __Unwind_Resume(ppuVar7);
    FUN_109a85f44(&uStack_1030);
    FUN_109a85f44(auStack_1090,ppdVar10,0,1,0,0);
    uStack_10f0 = 0x42ff0000;
    uStack_10e4 = 0;
    uStack_10e0 = 0;
    iStack_10ec = 0;
    uStack_10e8 = 0;
    uStack_10d4 = 0;
    uStack_10d0 = 0;
    uStack_10dc = 0;
    uStack_10d8 = 0;
    uStack_10c4 = 0;
    uStack_10cc = 0;
    uStack_10c8 = 0;
    lStack_10b8 = 0;
    uStack_10c0 = 0;
    uStack_10bc = 0;
    uStack_10a0 = 0;
    uStack_1098 = 0;
    uStack_10b0 = (ulong)&uStack_10f0 | 8;
    puStack_10a8 = &uStack_10a0;
    FUN_109a85f44(&uStack_1150,param_6,0,1,0,0);
    if (uVar26 != 0) {
      FUN_109a85f44(&uStack_11b0,uVar26,0,1,0,0);
      if (lStack_10b8 != 0) {
        piVar24 = (int *)(lStack_10b8 + 0x14);
        do {
          iVar21 = *piVar24;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar5) {
            *piVar24 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_10f0);
        }
      }
      if (0 < iStack_10ec) {
        lVar37 = 0;
        do {
          *(undefined4 *)(uStack_10b0 + lVar37 * 4) = 0;
          lVar37 = lVar37 + 1;
        } while (lVar37 < iStack_10ec);
      }
      uStack_10e8 = SUB84(puStack_11a8,0);
      uStack_10e4 = (undefined4)((ulong)puStack_11a8 >> 0x20);
      uStack_10f0 = SUB84(uStack_11b0,0);
      uStack_10d8 = (undefined4)uStack_1198;
      uStack_10d4 = (undefined4)((ulong)uStack_1198 >> 0x20);
      uStack_10e0 = (undefined4)uStack_11a0;
      uStack_10dc = (undefined4)((ulong)uStack_11a0 >> 0x20);
      uStack_10c8 = (undefined4)uStack_1188;
      uStack_10c4 = (undefined4)((ulong)uStack_1188 >> 0x20);
      uStack_10d0 = (undefined4)uStack_1190;
      uStack_10cc = (undefined4)((ulong)uStack_1190 >> 0x20);
      lStack_10b8 = lStack_1178;
      uStack_10c0 = (undefined4)uStack_1180;
      uStack_10bc = (undefined4)((ulong)uStack_1180 >> 0x20);
      iVar21 = uStack_11b0._4_4_;
      iStack_10ec = uStack_11b0._4_4_;
      if (puStack_10a8 != &uStack_10a0) {
        if (puStack_10a8 != (undefined8 *)0x0) {
          _free(puStack_10a8[-1]);
          iVar21 = uStack_11b0._4_4_;
        }
        puStack_10a8 = &uStack_10a0;
        uStack_10b0 = (ulong)&uStack_10f0 | 8;
      }
      if (iVar21 < 3) {
        puVar25 = (undefined8 *)((ulong)&uStack_11b0 | 4);
        *puStack_10a8 = *puStack_1168;
        puStack_10a8[1] = puStack_1168[1];
        uStack_11b0 = (undefined4 *)CONCAT44(uStack_11b0._4_4_,0x42ff0000);
        puVar25[1] = 0;
        *puVar25 = 0;
        puVar25[3] = 0;
        puVar25[2] = 0;
        puVar25[5] = 0;
        puVar25[4] = 0;
        *(undefined8 *)((long)puVar25 + 0x34) = 0;
        *(undefined8 *)((long)puVar25 + 0x2c) = 0;
        if (puStack_1168 != auStack_1160) {
          _free(puStack_1168[-1]);
        }
      }
      else {
        uStack_10b0 = uStack_1170;
        puStack_10a8 = puStack_1168;
      }
    }
    piVar24 = &iStack_1028;
    if (((ulong)param_7 & 1) != 0) {
      piVar24 = aiStack_1024;
    }
    if (iStack_1148 == *piVar24) {
      piVar24 = aiStack_1084;
      if (((ulong)param_7 & 2) != 0) {
        piVar24 = &iStack_1088;
      }
      if ((iStack_1144 == *piVar24) && (((uStack_1030 ^ uStack_1150) & 0xfff) == 0)) {
        uStack_11a0 = 0;
        uStack_11b0 = (undefined4 *)CONCAT44(uStack_11b0._4_4_,0x1010000);
        puStack_11a8 = &uStack_1030;
        uStack_11b8 = 0;
        auStack_11c8[0] = 0x1010000;
        puStack_11c0 = auStack_1090;
        uStack_11d0 = 0;
        auStack_11e0[0] = 0x1010000;
        puStack_11d8 = &uStack_10f0;
        auStack_11f8[0] = 0x2010000;
        puStack_11f0 = &uStack_1150;
        uStack_11e8 = 0;
        FUN_109a64f8c(uVar44,param_2,&uStack_11b0,auStack_11c8,auStack_11e0,auStack_11f8,param_7);
        if (lStack_1118 != 0) {
          piVar24 = (int *)(lStack_1118 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_1150);
          }
        }
        lStack_1118 = 0;
        uStack_1138 = 0;
        uStack_1140 = 0;
        uStack_1128 = 0;
        uStack_1130 = 0;
        if (0 < iStack_114c) {
          lVar37 = 0;
          do {
            *(undefined4 *)(lStack_1110 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < iStack_114c);
        }
        if (puStack_1108 != auStack_1100 && puStack_1108 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1108 + -8));
        }
        if (lStack_10b8 != 0) {
          piVar24 = (int *)(lStack_10b8 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_10f0);
          }
        }
        lStack_10b8 = 0;
        uStack_10d8 = 0;
        uStack_10d4 = 0;
        uStack_10e0 = 0;
        uStack_10dc = 0;
        uStack_10c8 = 0;
        uStack_10c4 = 0;
        uStack_10d0 = 0;
        uStack_10cc = 0;
        if (0 < iStack_10ec) {
          lVar37 = 0;
          do {
            *(undefined4 *)(uStack_10b0 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < iStack_10ec);
        }
        if (puStack_10a8 != &uStack_10a0 && puStack_10a8 != (undefined8 *)0x0) {
          _free(puStack_10a8[-1]);
        }
        if (lStack_1058 != 0) {
          piVar24 = (int *)(lStack_1058 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(auStack_1090);
          }
        }
        lStack_1058 = 0;
        aiStack_1084[3] = 0;
        aiStack_1084[4] = 0;
        aiStack_1084[1] = 0;
        aiStack_1084[2] = 0;
        aiStack_1084[7] = 0;
        aiStack_1084[8] = 0;
        aiStack_1084[5] = 0;
        aiStack_1084[6] = 0;
        if (0 < iStack_108c) {
          lVar37 = 0;
          do {
            *(undefined4 *)(lStack_1050 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < iStack_108c);
        }
        if (puStack_1048 != auStack_1040 && puStack_1048 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1048 + -8));
        }
        if (lStack_ff8 != 0) {
          piVar24 = (int *)(lStack_ff8 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar5) {
              *piVar24 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_1030);
          }
        }
        lStack_ff8 = 0;
        dVar35 = 0.0;
        aiStack_1024[3] = 0;
        aiStack_1024[4] = 0;
        aiStack_1024[1] = 0;
        aiStack_1024[2] = 0;
        aiStack_1024[7] = 0;
        aiStack_1024[8] = 0;
        aiStack_1024[5] = 0;
        aiStack_1024[6] = 0;
        if (0 < iStack_102c) {
          lVar37 = 0;
          do {
            *(undefined4 *)(lStack_ff0 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < iStack_102c);
        }
        if (puStack_fe8 != auStack_fe0 && puStack_fe8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_fe8 + -8));
        }
        return dVar35;
      }
    }
    puVar8 = (undefined4 *)0x98;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_11b0 = puVar8 + 1;
    puStack_11a8 = (uint *)0x90;
    *(undefined8 *)(puVar8 + 0x17) = 0x2029545f425f4d4d;
    *(undefined8 *)(puVar8 + 0x15) = 0x45475f5643202620;
    *(undefined8 *)(puVar8 + 0x1b) = 0x203a20736c6f632e;
    *(undefined8 *)(puVar8 + 0x19) = 0x42203f2030203d3d;
    *(undefined8 *)(puVar8 + 0x1f) = 0x79742e4420262620;
    *(undefined8 *)(puVar8 + 0x1d) = 0x292973776f722e42;
    *(undefined8 *)(puVar8 + 0x23) = 0x2928657079742e41;
    *(undefined8 *)(puVar8 + 0x21) = 0x203d3d2029286570;
    *(undefined8 *)(puVar8 + 7) = 0x545f415f4d4d4547;
    *(undefined8 *)(puVar8 + 5) = 0x5f56432026207367;
    *(undefined8 *)(puVar8 + 0xb) = 0x2073776f722e4120;
    *(undefined8 *)(puVar8 + 9) = 0x3f2030203d3d2029;
    *(undefined8 *)(puVar8 + 0xf) = 0x4428202626202929;
    *(undefined8 *)(puVar8 + 0xd) = 0x736c6f632e41203a;
    *(undefined8 *)(puVar8 + 0x13) = 0x7367616c66282820;
    *(undefined8 *)(puVar8 + 0x11) = 0x3d3d20736c6f632e;
    *(undefined1 *)(puVar8 + 0x25) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x616c662828203d3d;
    *(undefined8 *)(puVar8 + 1) = 0x2073776f722e4428;
    FUN_109ac3188(0xffffff29,&uStack_11b0,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x109a73c70);
    (*pcVar34)();
  }
  return dVar35;
}



/* Entry: 109a72b78; end: 109a72fcf;  */

double FUN_109a72b78(double param_1,double param_2,long param_3,double *param_4,double *param_5,
                    double *param_6,double *param_7)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  double dVar5;
  bool bVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 **ppuVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  double **ppdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 *puVar25;
  long lVar26;
  int *piVar27;
  double *pdVar28;
  int *piVar29;
  uint uVar30;
  long lVar31;
  double *pdVar32;
  double *pdVar33;
  code *pcVar34;
  double dVar35;
  long lVar36;
  double *pdVar37;
  ulong uVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  undefined4 auStack_d28 [2];
  uint *puStack_d20;
  undefined8 uStack_d18;
  undefined4 auStack_d10 [2];
  undefined4 *puStack_d08;
  undefined8 uStack_d00;
  undefined4 auStack_cf8 [2];
  undefined1 *puStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  uint *puStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  long lStack_ca8;
  ulong uStack_ca0;
  undefined8 *puStack_c98;
  undefined8 auStack_c90 [2];
  uint uStack_c80;
  int iStack_c7c;
  int iStack_c78;
  int iStack_c74;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  long lStack_c48;
  long lStack_c40;
  undefined1 *puStack_c38;
  undefined1 auStack_c30 [16];
  undefined4 uStack_c20;
  int iStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined4 uStack_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  long lStack_be8;
  ulong uStack_be0;
  undefined8 *puStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined1 auStack_bc0 [4];
  int iStack_bbc;
  int iStack_bb8;
  int aiStack_bb4 [11];
  long lStack_b88;
  long lStack_b80;
  undefined1 *puStack_b78;
  undefined1 auStack_b70 [16];
  uint uStack_b60;
  int iStack_b5c;
  int iStack_b58;
  int aiStack_b54 [11];
  long lStack_b28;
  long lStack_b20;
  undefined1 *puStack_b18;
  undefined1 auStack_b10 [16];
  undefined4 *puStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined4 uStack_a78;
  ulong uStack_a70;
  undefined8 uStack_a68;
  undefined4 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  ulong uStack_a48;
  double **ppdStack_a40;
  ulong uStack_a38;
  double dStack_a30;
  ulong uStack_a28;
  double dStack_a20;
  ulong uStack_a18;
  int *piStack_a10;
  undefined8 *puStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  double dStack_9f0;
  double **ppdStack_9e8;
  double *pdStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 uStack_9d0;
  long lStack_9c8;
  double adStack_958 [129];
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  long lStack_530;
  double adStack_478 [129];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar33 = *(double **)(param_3 + 0x10);
  dVar35 = param_4[2];
  pdVar37 = (double *)param_5[2];
  uVar38 = *(ulong *)(param_3 + 0x50);
  dVar39 = param_4[10];
  uVar22 = (ulong)param_5[10] >> 3;
  uVar30 = *(uint *)((long)param_5 + 0xc);
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar22 = 0;
  }
  uVar1 = **(uint **)(param_3 + 0x40);
  uVar20 = (*(uint **)(param_3 + 0x40))[1];
  lVar36 = (long)(int)uVar1;
  uVar3 = uVar1 << 3;
  if (pdVar37 != (double *)0x0 && (int)uVar30 < (int)uVar20) {
    uVar3 = uVar1 * 0x28;
  }
  pdVar32 = (double *)(long)(int)uVar3;
  pdVar7 = adStack_478;
  dVar40 = param_1;
  if (0x408 < uVar3) {
    __Znam();
    pdVar7 = pdVar32;
  }
  uVar38 = uVar38 >> 3;
  pdVar32 = (double *)(ulong)uVar1;
  lVar26 = (long)(int)uVar20;
  if (pdVar37 != (double *)0x0 && (int)uVar30 < (int)uVar20) {
    pdVar15 = pdVar7 + lVar36;
    pdVar8 = pdVar15;
    if (0 < (int)uVar1) {
      do {
        dVar40 = *pdVar37;
        pdVar37 = pdVar37 + uVar22;
        pdVar8[1] = dVar40;
        *pdVar8 = dVar40;
        pdVar8[3] = dVar40;
        pdVar8[2] = dVar40;
        lVar36 = lVar36 + -1;
        pdVar8 = pdVar8 + 4;
      } while (lVar36 != 0);
    }
    bVar6 = uVar22 != 0;
    uVar22 = 0;
    pdVar37 = pdVar15;
    if (bVar6) {
      uVar22 = 4;
    }
LAB_109a72c84:
    if (0 < (int)uVar20) {
      pdVar28 = (double *)0x0;
      pdVar8 = pdVar33 + 2;
      param_4 = pdVar15;
      param_5 = pdVar33;
      do {
        if (pdVar37 == (double *)0x0) {
          pdVar14 = param_5;
          pdVar16 = param_4;
          pdVar17 = pdVar7;
          pdVar13 = pdVar32;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar16;
              dVar40 = *pdVar14 - param_2;
              *pdVar17 = dVar40;
              pdVar13 = (double *)((long)pdVar13 + -1);
              pdVar14 = pdVar14 + uVar38;
              pdVar16 = pdVar16 + uVar22;
              pdVar17 = pdVar17 + 1;
            } while (pdVar13 != (double *)0x0);
          }
        }
        else {
          pdVar14 = param_5;
          pdVar13 = pdVar37;
          pdVar17 = pdVar7;
          pdVar16 = pdVar32;
          if (0 < (int)uVar1) {
            do {
              param_2 = *pdVar13;
              dVar40 = *pdVar14 - param_2;
              *pdVar17 = dVar40;
              pdVar13 = pdVar13 + uVar22;
              pdVar14 = pdVar14 + uVar38;
              pdVar16 = (double *)((long)pdVar16 + -1);
              pdVar17 = pdVar17 + 1;
            } while (pdVar16 != (double *)0x0);
          }
        }
        param_6 = pdVar28;
        param_7 = pdVar8;
        if ((long)pdVar28 <= lVar26 + -4) {
          do {
            if ((int)uVar1 < 1) {
              dVar40 = 0.0;
              dVar42 = 0.0;
              param_2 = 0.0;
              dVar43 = 0.0;
            }
            else {
              pdVar13 = pdVar15 + (long)param_6;
              if (pdVar37 != (double *)0x0) {
                pdVar13 = pdVar37;
              }
              pdVar13 = pdVar13 + 2;
              dVar40 = 0.0;
              dVar42 = 0.0;
              param_2 = 0.0;
              dVar43 = 0.0;
              pdVar14 = param_7;
              pdVar17 = pdVar7;
              pdVar16 = pdVar32;
              do {
                dVar5 = *pdVar17;
                pdVar17 = pdVar17 + 1;
                dVar40 = dVar40 + (pdVar14[-2] - pdVar13[-2]) * dVar5;
                dVar42 = dVar42 + (pdVar14[-1] - pdVar13[-1]) * dVar5;
                param_2 = param_2 + (*pdVar14 - *pdVar13) * dVar5;
                dVar43 = dVar43 + (pdVar14[1] - pdVar13[1]) * dVar5;
                pdVar13 = pdVar13 + uVar22;
                pdVar14 = pdVar14 + uVar38;
                pdVar16 = (double *)((long)pdVar16 + -1);
              } while (pdVar16 != (double *)0x0);
            }
            dVar40 = dVar40 * param_1;
            pdVar13 = (double *)((long)dVar35 + (long)param_6 * 8);
            param_2 = param_2 * param_1;
            pdVar13[1] = dVar42 * param_1;
            *pdVar13 = dVar40;
            pdVar13[3] = dVar43 * param_1;
            pdVar13[2] = param_2;
            param_6 = (double *)((long)param_6 + 4);
            param_7 = param_7 + 4;
          } while ((int)param_6 <= (int)(lVar26 + -4));
        }
        if ((int)param_6 < (int)uVar20) {
          param_7 = pdVar33 + (long)param_6;
          do {
            if ((int)uVar1 < 1) {
              dVar40 = 0.0;
            }
            else {
              pdVar13 = pdVar15 + (long)param_6;
              if (pdVar37 != (double *)0x0) {
                pdVar13 = pdVar37;
              }
              dVar40 = 0.0;
              pdVar14 = param_7;
              pdVar17 = pdVar7;
              pdVar16 = pdVar32;
              do {
                dVar40 = dVar40 + (*pdVar14 - *pdVar13) * *pdVar17;
                pdVar13 = pdVar13 + uVar22;
                pdVar14 = pdVar14 + uVar38;
                pdVar16 = (double *)((long)pdVar16 + -1);
                pdVar17 = pdVar17 + 1;
              } while (pdVar16 != (double *)0x0);
            }
            dVar40 = param_1 * dVar40;
            *(double *)((long)dVar35 + (long)param_6 * 8) = dVar40;
            param_6 = (double *)((long)param_6 + 1);
            param_7 = param_7 + 1;
            param_2 = param_1;
          } while ((int)param_6 < (int)uVar20);
        }
        dVar35 = (double)((long)dVar35 + ((ulong)dVar39 >> 3) * 8);
        pdVar28 = (double *)((long)pdVar28 + 1);
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        pdVar8 = pdVar8 + 1;
      } while (pdVar28 != (double *)(ulong)uVar20);
    }
  }
  else {
    if (pdVar37 != (double *)0x0) {
      pdVar15 = pdVar37;
      pdVar37 = (double *)0x0;
      goto LAB_109a72c84;
    }
    if (0 < (int)uVar20) {
      lVar36 = 0;
      pdVar37 = pdVar33 + 2;
      pdVar15 = pdVar33;
      do {
        pdVar28 = pdVar32;
        param_4 = pdVar32;
        pdVar8 = pdVar15;
        pdVar13 = pdVar7;
        if (0 < (int)uVar1) {
          do {
            dVar40 = *pdVar8;
            *pdVar13 = dVar40;
            pdVar8 = pdVar8 + uVar38;
            pdVar28 = (double *)((long)pdVar28 + -1);
            param_4 = (double *)0x0;
            pdVar13 = pdVar13 + 1;
          } while (pdVar28 != (double *)0x0);
        }
        lVar31 = lVar36;
        pdVar8 = pdVar37;
        if (lVar36 <= lVar26 + -4) {
          do {
            dVar40 = 0.0;
            dVar42 = 0.0;
            if ((int)uVar1 < 1) {
              param_2 = 0.0;
              dVar43 = 0.0;
            }
            else {
              param_2 = 0.0;
              dVar43 = 0.0;
              pdVar28 = pdVar8;
              param_5 = pdVar7;
              pdVar13 = pdVar32;
              do {
                dVar5 = *param_5;
                param_5 = param_5 + 1;
                dVar40 = dVar40 + pdVar28[-2] * dVar5;
                dVar42 = dVar42 + pdVar28[-1] * dVar5;
                param_2 = param_2 + *pdVar28 * dVar5;
                dVar43 = dVar43 + pdVar28[1] * dVar5;
                pdVar28 = pdVar28 + uVar38;
                pdVar13 = (double *)((long)pdVar13 + -1);
              } while (pdVar13 != (double *)0x0);
              param_6 = (double *)0x0;
            }
            dVar40 = dVar40 * param_1;
            param_4 = (double *)((long)dVar35 + lVar31 * 8);
            param_2 = param_2 * param_1;
            param_4[1] = dVar42 * param_1;
            *param_4 = dVar40;
            param_4[3] = dVar43 * param_1;
            param_4[2] = param_2;
            lVar31 = lVar31 + 4;
            pdVar8 = pdVar8 + 4;
          } while ((int)lVar31 <= (int)(lVar26 + -4));
        }
        if ((int)lVar31 < (int)uVar20) {
          pdVar8 = pdVar33 + lVar31;
          do {
            dVar40 = 0.0;
            pdVar28 = pdVar8;
            pdVar13 = pdVar7;
            pdVar14 = pdVar32;
            if (0 < (int)uVar1) {
              do {
                param_5 = pdVar13 + 1;
                dVar40 = dVar40 + *pdVar28 * *pdVar13;
                param_4 = pdVar28 + uVar38;
                param_6 = (double *)((long)pdVar14 - 1);
                pdVar28 = param_4;
                pdVar13 = param_5;
                pdVar14 = param_6;
              } while (param_6 != (double *)0x0);
            }
            dVar40 = param_1 * dVar40;
            *(double *)((long)dVar35 + lVar31 * 8) = dVar40;
            lVar31 = lVar31 + 1;
            pdVar8 = pdVar8 + 1;
            param_2 = param_1;
          } while ((int)lVar31 < (int)uVar20);
        }
        lVar36 = lVar36 + 1;
        dVar35 = (double)((long)dVar35 + ((ulong)dVar39 >> 3) * 8);
        pdVar15 = pdVar15 + 1;
        pdVar37 = pdVar37 + 1;
      } while (lVar36 != lVar26);
    }
  }
  if (pdVar7 != adStack_478) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return dVar40;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar33 = (double *)pdVar7[2];
  dVar35 = param_4[2];
  pdVar37 = (double *)param_5[2];
  uVar38 = (ulong)pdVar7[10] >> 3;
  dVar39 = param_4[10];
  uVar22 = (ulong)param_5[10] >> 3;
  if ((int)*(uint *)(param_5 + 1) < 2) {
    uVar22 = 0;
  }
  uVar30 = *(uint *)pdVar7[8];
  uVar2 = (ulong)uVar30;
  uVar3 = ((uint *)pdVar7[8])[1];
  dVar42 = dVar40;
  if (pdVar37 == (double *)0x0) {
    if (0 < (int)uVar30) {
      uVar22 = 0;
      pdVar37 = pdVar33 + 2;
      pdVar32 = pdVar33;
      pdVar15 = pdVar37;
      uVar23 = uVar22;
      do {
        do {
          if ((int)uVar3 < 4) {
            dVar42 = 0.0;
            uVar30 = 0;
          }
          else {
            lVar36 = 0;
            dVar42 = 0.0;
            pdVar8 = pdVar37;
            pdVar28 = pdVar15;
            do {
              pdVar7 = pdVar8 + 4;
              param_2 = pdVar28[-1] * pdVar8[-1] + pdVar8[-2] * pdVar28[-2] + *pdVar8 * *pdVar28 +
                        pdVar8[1] * pdVar28[1];
              dVar42 = dVar42 + param_2;
              lVar36 = lVar36 + 4;
              pdVar8 = pdVar7;
              pdVar28 = pdVar28 + 4;
              uVar30 = (uVar3 - 4 & 0xfffffffc) + 4;
            } while (lVar36 <= (int)(uVar3 - 4));
          }
          if ((int)uVar30 < (int)uVar3) {
            pdVar8 = pdVar32 + uVar30;
            pdVar28 = pdVar33 + uVar30;
            do {
              pdVar7 = pdVar8 + 1;
              param_2 = *pdVar8;
              dVar42 = dVar42 + *pdVar28 * param_2;
              uVar30 = uVar30 + 1;
              pdVar8 = pdVar7;
              pdVar28 = pdVar28 + 1;
            } while ((int)uVar30 < (int)uVar3);
          }
          dVar42 = dVar40 * dVar42;
          *(double *)((long)dVar35 + uVar22 * 8) = dVar42;
          uVar22 = uVar22 + 1;
          pdVar37 = pdVar37 + uVar38;
          pdVar33 = pdVar33 + uVar38;
        } while (uVar22 != uVar2);
        uVar22 = uVar23 + 1;
        dVar35 = (double)((long)dVar35 + ((ulong)dVar39 >> 3) * 8);
        pdVar37 = pdVar15 + uVar38;
        pdVar33 = pdVar32 + uVar38;
        pdVar32 = pdVar33;
        pdVar15 = pdVar37;
        uVar23 = uVar22;
      } while (uVar22 != uVar2);
    }
  }
  else {
    uVar1 = *(uint *)((long)param_5 + 0xc);
    pdVar32 = (double *)((long)(int)uVar3 << 3);
    pdVar7 = adStack_958;
    if ((double *)0x408 < pdVar32) {
      __Znam();
      pdVar7 = pdVar32;
    }
    if (0 < (int)uVar30) {
      uVar23 = 0;
      uVar30 = uVar3 - 4;
      lVar36 = 0x20;
      if (uVar1 != uVar3) {
        lVar36 = 0;
      }
      param_4 = pdVar33 + 2;
      pdVar32 = pdVar37;
      do {
        param_6 = pdVar33;
        param_7 = param_4;
        uVar19 = uVar23;
        if ((int)uVar1 < (int)uVar3) {
          if (0 < (int)uVar3) {
            lVar26 = 0;
            dVar42 = pdVar37[uVar23 * uVar22];
            do {
              param_2 = *(double *)((long)pdVar33 + lVar26) - dVar42;
              *(double *)((long)pdVar7 + lVar26) = param_2;
              lVar26 = lVar26 + 8;
            } while ((ulong)uVar3 * 8 - lVar26 != 0);
          }
        }
        else {
          pdVar15 = pdVar32;
          pdVar8 = pdVar7;
          uVar18 = (ulong)uVar3;
          pdVar28 = pdVar33;
          if (0 < (int)uVar3) {
            do {
              param_2 = *pdVar15;
              *pdVar8 = *pdVar28 - param_2;
              uVar18 = uVar18 - 1;
              pdVar15 = pdVar15 + 1;
              pdVar8 = pdVar8 + 1;
              pdVar28 = pdVar28 + 1;
            } while (uVar18 != 0);
          }
        }
        do {
          pdVar15 = pdVar37 + uVar19 * uVar22;
          if ((int)uVar1 < (int)uVar3) {
            dStack_548 = *pdVar15;
            dStack_550 = dStack_548;
            dStack_538 = dStack_548;
            dStack_540 = dStack_548;
            pdVar15 = &dStack_550;
          }
          if ((int)uVar3 < 4) {
            dVar42 = 0.0;
            uVar20 = 0;
          }
          else {
            lVar26 = 0;
            pdVar8 = pdVar15 + 2;
            dVar42 = 0.0;
            pdVar28 = pdVar7 + 2;
            pdVar13 = param_7;
            do {
              param_2 = pdVar28[-1] * (pdVar13[-1] - pdVar8[-1]) +
                        (pdVar13[-2] - pdVar8[-2]) * pdVar28[-2] + (*pdVar13 - *pdVar8) * *pdVar28 +
                        (pdVar13[1] - pdVar8[1]) * pdVar28[1];
              lVar26 = lVar26 + 4;
              dVar42 = dVar42 + param_2;
              pdVar8 = (double *)((long)pdVar8 + lVar36);
              pdVar28 = pdVar28 + 4;
              pdVar13 = pdVar13 + 4;
            } while (lVar26 <= (int)uVar30);
            pdVar15 = (double *)((long)pdVar15 + lVar36 * (ulong)((uVar30 >> 2) + 1));
            uVar20 = (uVar30 & 0xfffffffc) + 4;
          }
          if ((int)uVar20 < (int)uVar3) {
            pdVar8 = param_6 + uVar20;
            pdVar28 = pdVar7 + uVar20;
            do {
              param_2 = *pdVar28;
              dVar42 = dVar42 + (*pdVar8 - *pdVar15) * param_2;
              uVar20 = uVar20 + 1;
              pdVar15 = pdVar15 + 1;
              pdVar8 = pdVar8 + 1;
              pdVar28 = pdVar28 + 1;
            } while ((int)uVar20 < (int)uVar3);
          }
          dVar42 = dVar40 * dVar42;
          *(double *)((long)dVar35 + uVar19 * 8) = dVar42;
          uVar19 = uVar19 + 1;
          param_7 = param_7 + uVar38;
          param_6 = param_6 + uVar38;
        } while (uVar19 != uVar2);
        dVar35 = (double)((long)dVar35 + ((ulong)dVar39 >> 3) * 8);
        uVar23 = uVar23 + 1;
        pdVar32 = pdVar32 + uVar22;
        pdVar33 = pdVar33 + uVar38;
        param_4 = param_4 + uVar38;
      } while (uVar23 != uVar2);
    }
    if (pdVar7 != adStack_958) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return dVar42;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*param_4 & 0x1f0000) == 0x10000) {
    puVar11 = (ulong *)param_4[1];
    uStack_a50 = (undefined4 *)*puVar11;
    uStack_a48 = puVar11[1];
    uStack_a38 = puVar11[3];
    ppdStack_a40 = (double **)puVar11[2];
    dVar42 = (double)puVar11[4];
    param_2 = (double)puVar11[6];
    uStack_a28 = puVar11[5];
    dStack_a30 = dVar42;
    uStack_a18 = puVar11[7];
    dStack_a20 = param_2;
    piStack_a10 = (int *)((ulong)&uStack_a50 | 8);
    puStack_a08 = &uStack_a00;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    if (puVar11[7] != 0) {
      piVar24 = (int *)(puVar11[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar6) {
          *piVar24 = *piVar24 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_a00 = *(undefined8 *)puVar11[9];
      uStack_9f8 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_a50 = (undefined4 *)((ulong)uStack_a50 & 0xffffffff);
      func_0x000109a84868(&uStack_a50);
    }
  }
  else {
    FUN_109a8a180(&uStack_a50,param_4,0xffffffff);
  }
  uVar30 = *(uint *)pdVar7;
  if ((((uint)uStack_a50 ^ uVar30) & 0xfff) != 0) {
LAB_109a73678:
    puVar10 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_a90 = puVar10 + 1;
    uStack_a88 = 0x35;
    *(undefined8 *)(puVar10 + 3) = 0x7974203d3d202928;
    *(undefined8 *)(puVar10 + 1) = 0x657079742e74616d;
    *(undefined1 *)((long)puVar10 + 0x39) = 0;
    *(undefined8 *)(puVar10 + 7) = 0x657a69732e74616d;
    *(undefined8 *)(puVar10 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar10 + 0xb) = 0x636e756620262620;
    *(undefined8 *)(puVar10 + 9) = 0x657a6973203d3d20;
    *(undefined8 *)((long)puVar10 + 0x31) = 0x30203d2120636e75;
    FUN_109ac3188(0xffffff29,&puStack_a90,&DAT_10f329830,&UNK_10f5974ee,0xcac);
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x109a736e8);
    (*pcVar34)();
  }
  uVar3 = piStack_a10[-1];
  uVar22 = (ulong)uVar3;
  piVar24 = (int *)pdVar7[8];
  if (uVar3 != piVar24[-1]) goto LAB_109a73678;
  pcVar34 = (code *)(&PTR_DAT_110b21d38)[(ulong)uVar30 & 7];
  if (uVar3 == 2) {
    if (*piStack_a10 != *piVar24) goto LAB_109a73678;
    bVar6 = piStack_a10[1] == piVar24[1];
  }
  else {
    piVar27 = piStack_a10;
    piVar29 = piVar24;
    if (0 < (int)uVar3) {
      do {
        if (*piVar27 != *piVar29) goto LAB_109a73678;
        uVar22 = uVar22 - 1;
        piVar27 = piVar27 + 1;
        piVar29 = piVar29 + 1;
      } while (uVar22 != 0);
    }
    bVar6 = true;
  }
  if (((int)((ulong)uVar30 & 7) == 7) || (!bVar6)) goto LAB_109a73678;
  lVar36 = ((ulong)(uVar30 >> 3) & 0x1ff) + 1;
  if (((uVar30 & (uint)uStack_a50) >> 0xe & 1) != 0) {
    uVar22 = (ulong)*(uint *)((long)pdVar7 + 4);
    if ((int)*(uint *)((long)pdVar7 + 4) < 3) {
      lVar26 = (long)(int)*(uint *)((long)pdVar7 + 0xc) * (long)(int)*(uint *)(pdVar7 + 1);
    }
    else {
      lVar26 = 1;
      do {
        lVar26 = lVar26 * *piVar24;
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 1;
      } while (uVar22 != 0);
    }
    uVar22 = lVar26 * lVar36;
    if (uVar22 - (long)(int)uVar22 == 0) {
      ppuVar9 = (undefined4 **)pdVar7[2];
      ppdVar12 = ppdStack_a40;
      (*pcVar34)();
      dVar35 = dVar42;
      goto LAB_109a735c8;
    }
  }
  puStack_9d8 = &uStack_a50;
  uStack_9d0 = 0;
  uStack_a58 = 0;
  uStack_a88 = 0;
  uStack_a80 = 0;
  puStack_a90 = (undefined4 *)0x0;
  uStack_a78 = 0;
  uStack_a70 = 0;
  uStack_a68 = 0;
  uStack_a60 = 0;
  ppuVar9 = &puStack_a90;
  ppdVar12 = &pdStack_9e0;
  param_6 = &dStack_9f0;
  uVar22 = 0;
  param_7 = (double *)0xffffffff;
  pdStack_9e0 = pdVar7;
  FUN_109a9b368();
  uVar30 = (int)lVar36 * (int)uStack_a68;
  dVar35 = 0.0;
  uVar38 = 0xffffffffffffffff;
  while (uVar38 = uVar38 + 1, uVar38 < uStack_a70) {
    ppdVar12 = ppdStack_9e8;
    uVar22 = (ulong)uVar30;
    (*pcVar34)(dStack_9f0);
    dVar35 = dVar35 + dVar42;
    ppuVar9 = &puStack_a90;
    FUN_109a8350c();
  }
LAB_109a735c8:
  if (uStack_a18 != 0) {
    piVar24 = (int *)(uStack_a18 + 0x14);
    do {
      iVar21 = *piVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar6) {
        *piVar24 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      ppuVar9 = (undefined4 **)&uStack_a50;
      func_0x000109a848d4();
    }
  }
  uStack_a18 = 0;
  uVar41 = 0;
  uStack_a38 = 0;
  ppdStack_a40 = (double **)0x0;
  uStack_a28 = 0;
  dStack_a30 = 0.0;
  if (0 < uStack_a50._4_4_) {
    lVar36 = 0;
    do {
      piStack_a10[lVar36] = 0;
      lVar36 = lVar36 + 1;
    } while (lVar36 < uStack_a50._4_4_);
  }
  if (puStack_a08 != &uStack_a00 && puStack_a08 != (undefined8 *)0x0) {
    ppuVar9 = (undefined4 **)puStack_a08[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9c8) {
    ___stack_chk_fail();
    if ((int)ppdVar12 != 0) {
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_a50);
    }
    __Unwind_Resume(ppuVar9);
    FUN_109a85f44(&uStack_b60);
    FUN_109a85f44(auStack_bc0,ppdVar12,0,1,0,0);
    uStack_c20 = 0x42ff0000;
    uStack_c14 = 0;
    uStack_c10 = 0;
    iStack_c1c = 0;
    uStack_c18 = 0;
    uStack_c04 = 0;
    uStack_c00 = 0;
    uStack_c0c = 0;
    uStack_c08 = 0;
    uStack_bf4 = 0;
    uStack_bfc = 0;
    uStack_bf8 = 0;
    lStack_be8 = 0;
    uStack_bf0 = 0;
    uStack_bec = 0;
    uStack_bd0 = 0;
    uStack_bc8 = 0;
    uStack_be0 = (ulong)&uStack_c20 | 8;
    puStack_bd8 = &uStack_bd0;
    FUN_109a85f44(&uStack_c80,param_6,0,1,0,0);
    if (uVar22 != 0) {
      FUN_109a85f44(&uStack_ce0,uVar22,0,1,0,0);
      if (lStack_be8 != 0) {
        piVar24 = (int *)(lStack_be8 + 0x14);
        do {
          iVar21 = *piVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar6) {
            *piVar24 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_c20);
        }
      }
      if (0 < iStack_c1c) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_be0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < iStack_c1c);
      }
      uStack_c18 = SUB84(puStack_cd8,0);
      uStack_c14 = (undefined4)((ulong)puStack_cd8 >> 0x20);
      uStack_c20 = SUB84(uStack_ce0,0);
      uStack_c08 = (undefined4)uStack_cc8;
      uStack_c04 = (undefined4)((ulong)uStack_cc8 >> 0x20);
      uStack_c10 = (undefined4)uStack_cd0;
      uStack_c0c = (undefined4)((ulong)uStack_cd0 >> 0x20);
      uStack_bf8 = (undefined4)uStack_cb8;
      uStack_bf4 = (undefined4)((ulong)uStack_cb8 >> 0x20);
      uStack_c00 = (undefined4)uStack_cc0;
      uStack_bfc = (undefined4)((ulong)uStack_cc0 >> 0x20);
      lStack_be8 = lStack_ca8;
      uStack_bf0 = (undefined4)uStack_cb0;
      uStack_bec = (undefined4)((ulong)uStack_cb0 >> 0x20);
      iVar21 = uStack_ce0._4_4_;
      iStack_c1c = uStack_ce0._4_4_;
      if (puStack_bd8 != &uStack_bd0) {
        if (puStack_bd8 != (undefined8 *)0x0) {
          _free(puStack_bd8[-1]);
          iVar21 = uStack_ce0._4_4_;
        }
        puStack_bd8 = &uStack_bd0;
        uStack_be0 = (ulong)&uStack_c20 | 8;
      }
      if (iVar21 < 3) {
        puVar25 = (undefined8 *)((ulong)&uStack_ce0 | 4);
        *puStack_bd8 = *puStack_c98;
        puStack_bd8[1] = puStack_c98[1];
        uStack_ce0 = (undefined4 *)CONCAT44(uStack_ce0._4_4_,0x42ff0000);
        puVar25[1] = 0;
        *puVar25 = 0;
        puVar25[3] = 0;
        puVar25[2] = 0;
        puVar25[5] = 0;
        puVar25[4] = 0;
        *(undefined8 *)((long)puVar25 + 0x34) = 0;
        *(undefined8 *)((long)puVar25 + 0x2c) = 0;
        if (puStack_c98 != auStack_c90) {
          _free(puStack_c98[-1]);
        }
      }
      else {
        uStack_be0 = uStack_ca0;
        puStack_bd8 = puStack_c98;
      }
    }
    piVar24 = &iStack_b58;
    if (((ulong)param_7 & 1) != 0) {
      piVar24 = aiStack_b54;
    }
    if (iStack_c78 == *piVar24) {
      piVar24 = aiStack_bb4;
      if (((ulong)param_7 & 2) != 0) {
        piVar24 = &iStack_bb8;
      }
      if ((iStack_c74 == *piVar24) && (((uStack_b60 ^ uStack_c80) & 0xfff) == 0)) {
        uStack_cd0 = 0;
        uStack_ce0 = (undefined4 *)CONCAT44(uStack_ce0._4_4_,0x1010000);
        puStack_cd8 = &uStack_b60;
        uStack_ce8 = 0;
        auStack_cf8[0] = 0x1010000;
        puStack_cf0 = auStack_bc0;
        uStack_d00 = 0;
        auStack_d10[0] = 0x1010000;
        puStack_d08 = &uStack_c20;
        auStack_d28[0] = 0x2010000;
        puStack_d20 = &uStack_c80;
        uStack_d18 = 0;
        FUN_109a64f8c(uVar41,param_2,&uStack_ce0,auStack_cf8,auStack_d10,auStack_d28,param_7);
        if (lStack_c48 != 0) {
          piVar24 = (int *)(lStack_c48 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar6) {
              *piVar24 = iVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_c80);
          }
        }
        lStack_c48 = 0;
        uStack_c68 = 0;
        uStack_c70 = 0;
        uStack_c58 = 0;
        uStack_c60 = 0;
        if (0 < iStack_c7c) {
          lVar36 = 0;
          do {
            *(undefined4 *)(lStack_c40 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_c7c);
        }
        if (puStack_c38 != auStack_c30 && puStack_c38 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_c38 + -8));
        }
        if (lStack_be8 != 0) {
          piVar24 = (int *)(lStack_be8 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar6) {
              *piVar24 = iVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_c20);
          }
        }
        lStack_be8 = 0;
        uStack_c08 = 0;
        uStack_c04 = 0;
        uStack_c10 = 0;
        uStack_c0c = 0;
        uStack_bf8 = 0;
        uStack_bf4 = 0;
        uStack_c00 = 0;
        uStack_bfc = 0;
        if (0 < iStack_c1c) {
          lVar36 = 0;
          do {
            *(undefined4 *)(uStack_be0 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_c1c);
        }
        if (puStack_bd8 != &uStack_bd0 && puStack_bd8 != (undefined8 *)0x0) {
          _free(puStack_bd8[-1]);
        }
        if (lStack_b88 != 0) {
          piVar24 = (int *)(lStack_b88 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar6) {
              *piVar24 = iVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(auStack_bc0);
          }
        }
        lStack_b88 = 0;
        aiStack_bb4[3] = 0;
        aiStack_bb4[4] = 0;
        aiStack_bb4[1] = 0;
        aiStack_bb4[2] = 0;
        aiStack_bb4[7] = 0;
        aiStack_bb4[8] = 0;
        aiStack_bb4[5] = 0;
        aiStack_bb4[6] = 0;
        if (0 < iStack_bbc) {
          lVar36 = 0;
          do {
            *(undefined4 *)(lStack_b80 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_bbc);
        }
        if (puStack_b78 != auStack_b70 && puStack_b78 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b78 + -8));
        }
        if (lStack_b28 != 0) {
          piVar24 = (int *)(lStack_b28 + 0x14);
          do {
            iVar21 = *piVar24;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar6) {
              *piVar24 = iVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_b60);
          }
        }
        lStack_b28 = 0;
        dVar35 = 0.0;
        aiStack_b54[3] = 0;
        aiStack_b54[4] = 0;
        aiStack_b54[1] = 0;
        aiStack_b54[2] = 0;
        aiStack_b54[7] = 0;
        aiStack_b54[8] = 0;
        aiStack_b54[5] = 0;
        aiStack_b54[6] = 0;
        if (0 < iStack_b5c) {
          lVar36 = 0;
          do {
            *(undefined4 *)(lStack_b20 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_b5c);
        }
        if (puStack_b18 != auStack_b10 && puStack_b18 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b18 + -8));
        }
        return dVar35;
      }
    }
    puVar10 = (undefined4 *)0x98;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    uStack_ce0 = puVar10 + 1;
    puStack_cd8 = (uint *)0x90;
    *(undefined8 *)(puVar10 + 0x17) = 0x2029545f425f4d4d;
    *(undefined8 *)(puVar10 + 0x15) = 0x45475f5643202620;
    *(undefined8 *)(puVar10 + 0x1b) = 0x203a20736c6f632e;
    *(undefined8 *)(puVar10 + 0x19) = 0x42203f2030203d3d;
    *(undefined8 *)(puVar10 + 0x1f) = 0x79742e4420262620;
    *(undefined8 *)(puVar10 + 0x1d) = 0x292973776f722e42;
    *(undefined8 *)(puVar10 + 0x23) = 0x2928657079742e41;
    *(undefined8 *)(puVar10 + 0x21) = 0x203d3d2029286570;
    *(undefined8 *)(puVar10 + 7) = 0x545f415f4d4d4547;
    *(undefined8 *)(puVar10 + 5) = 0x5f56432026207367;
    *(undefined8 *)(puVar10 + 0xb) = 0x2073776f722e4120;
    *(undefined8 *)(puVar10 + 9) = 0x3f2030203d3d2029;
    *(undefined8 *)(puVar10 + 0xf) = 0x4428202626202929;
    *(undefined8 *)(puVar10 + 0xd) = 0x736c6f632e41203a;
    *(undefined8 *)(puVar10 + 0x13) = 0x7367616c66282820;
    *(undefined8 *)(puVar10 + 0x11) = 0x3d3d20736c6f632e;
    *(undefined1 *)(puVar10 + 0x25) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x616c662828203d3d;
    *(undefined8 *)(puVar10 + 1) = 0x2073776f722e4428;
    FUN_109ac3188(0xffffff29,&uStack_ce0,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x109a73c70);
    (*pcVar34)();
  }
  return dVar35;
}



/* Entry: 109a72fd0; end: 109a73393;  */

double FUN_109a72fd0(double param_1,double param_2,double *param_3,double *param_4,long param_5,
                    double *param_6,double *param_7)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  double *pdVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  double **ppdVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  long lVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  code *pcVar30;
  double dVar31;
  double *pdVar32;
  double *pdVar33;
  double dVar34;
  undefined8 uVar35;
  undefined4 auStack_878 [2];
  uint *puStack_870;
  undefined8 uStack_868;
  undefined4 auStack_860 [2];
  undefined4 *puStack_858;
  undefined8 uStack_850;
  undefined4 auStack_848 [2];
  undefined1 *puStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  uint *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  ulong uStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 auStack_7e0 [2];
  uint uStack_7d0;
  int iStack_7cc;
  int iStack_7c8;
  int iStack_7c4;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_798;
  long lStack_790;
  undefined1 *puStack_788;
  undefined1 auStack_780 [16];
  undefined4 uStack_770;
  int iStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  long lStack_738;
  ulong uStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 auStack_710 [4];
  int iStack_70c;
  int iStack_708;
  int aiStack_704 [11];
  long lStack_6d8;
  long lStack_6d0;
  undefined1 *puStack_6c8;
  undefined1 auStack_6c0 [16];
  uint uStack_6b0;
  int iStack_6ac;
  int iStack_6a8;
  int aiStack_6a4 [11];
  long lStack_678;
  long lStack_670;
  undefined1 *puStack_668;
  undefined1 auStack_660 [16];
  undefined4 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  ulong uStack_598;
  double **ppdStack_590;
  ulong uStack_588;
  double dStack_580;
  ulong uStack_578;
  double dStack_570;
  ulong uStack_568;
  int *piStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  double dStack_540;
  double **ppdStack_538;
  double *pdStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  long lStack_518;
  double adStack_4a8 [129];
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar29 = (double *)param_3[2];
  dVar31 = param_4[2];
  pdVar32 = *(double **)(param_5 + 0x10);
  uVar22 = (ulong)param_3[10] >> 3;
  dVar16 = param_4[10];
  uVar21 = *(ulong *)(param_5 + 0x50) >> 3;
  if (*(int *)(param_5 + 8) < 2) {
    uVar21 = 0;
  }
  uVar25 = *(uint *)param_3[8];
  uVar1 = (ulong)uVar25;
  uVar2 = ((uint *)param_3[8])[1];
  dVar34 = param_1;
  if (pdVar32 == (double *)0x0) {
    if (0 < (int)uVar25) {
      uVar21 = 0;
      pdVar32 = pdVar29 + 2;
      pdVar28 = pdVar29;
      pdVar11 = pdVar32;
      uVar17 = uVar21;
      do {
        do {
          if ((int)uVar2 < 4) {
            dVar34 = 0.0;
            uVar25 = 0;
          }
          else {
            lVar19 = 0;
            dVar34 = 0.0;
            pdVar6 = pdVar32;
            pdVar27 = pdVar11;
            do {
              param_3 = pdVar6 + 4;
              param_2 = pdVar27[-1] * pdVar6[-1] + pdVar6[-2] * pdVar27[-2] + *pdVar6 * *pdVar27 +
                        pdVar6[1] * pdVar27[1];
              dVar34 = dVar34 + param_2;
              lVar19 = lVar19 + 4;
              pdVar6 = param_3;
              pdVar27 = pdVar27 + 4;
              uVar25 = (uVar2 - 4 & 0xfffffffc) + 4;
            } while (lVar19 <= (int)(uVar2 - 4));
          }
          if ((int)uVar25 < (int)uVar2) {
            pdVar6 = pdVar28 + uVar25;
            pdVar27 = pdVar29 + uVar25;
            do {
              param_3 = pdVar6 + 1;
              param_2 = *pdVar6;
              dVar34 = dVar34 + *pdVar27 * param_2;
              uVar25 = uVar25 + 1;
              pdVar6 = param_3;
              pdVar27 = pdVar27 + 1;
            } while ((int)uVar25 < (int)uVar2);
          }
          dVar34 = param_1 * dVar34;
          *(double *)((long)dVar31 + uVar21 * 8) = dVar34;
          uVar21 = uVar21 + 1;
          pdVar32 = pdVar32 + uVar22;
          pdVar29 = pdVar29 + uVar22;
        } while (uVar21 != uVar1);
        uVar21 = uVar17 + 1;
        dVar31 = (double)((long)dVar31 + ((ulong)dVar16 >> 3) * 8);
        pdVar32 = pdVar11 + uVar22;
        pdVar29 = pdVar28 + uVar22;
        pdVar28 = pdVar29;
        pdVar11 = pdVar32;
        uVar17 = uVar21;
      } while (uVar21 != uVar1);
    }
  }
  else {
    uVar3 = *(uint *)(param_5 + 0xc);
    pdVar28 = (double *)((long)(int)uVar2 << 3);
    param_3 = adStack_4a8;
    if ((double *)0x408 < pdVar28) {
      __Znam();
      param_3 = pdVar28;
    }
    if (0 < (int)uVar25) {
      uVar17 = 0;
      uVar25 = uVar2 - 4;
      lVar19 = 0x20;
      if (uVar3 != uVar2) {
        lVar19 = 0;
      }
      param_4 = pdVar29 + 2;
      pdVar28 = pdVar32;
      do {
        param_6 = pdVar29;
        param_7 = param_4;
        uVar13 = uVar17;
        if ((int)uVar3 < (int)uVar2) {
          if (0 < (int)uVar2) {
            lVar26 = 0;
            dVar34 = pdVar32[uVar17 * uVar21];
            do {
              param_2 = *(double *)((long)pdVar29 + lVar26) - dVar34;
              *(double *)((long)param_3 + lVar26) = param_2;
              lVar26 = lVar26 + 8;
            } while ((ulong)uVar2 * 8 - lVar26 != 0);
          }
        }
        else {
          pdVar11 = pdVar28;
          pdVar6 = param_3;
          uVar12 = (ulong)uVar2;
          pdVar27 = pdVar29;
          if (0 < (int)uVar2) {
            do {
              param_2 = *pdVar11;
              *pdVar6 = *pdVar27 - param_2;
              uVar12 = uVar12 - 1;
              pdVar11 = pdVar11 + 1;
              pdVar6 = pdVar6 + 1;
              pdVar27 = pdVar27 + 1;
            } while (uVar12 != 0);
          }
        }
        do {
          pdVar11 = pdVar32 + uVar13 * uVar21;
          if ((int)uVar3 < (int)uVar2) {
            dStack_98 = *pdVar11;
            dStack_a0 = dStack_98;
            dStack_88 = dStack_98;
            dStack_90 = dStack_98;
            pdVar11 = &dStack_a0;
          }
          if ((int)uVar2 < 4) {
            dVar34 = 0.0;
            uVar14 = 0;
          }
          else {
            lVar26 = 0;
            pdVar6 = pdVar11 + 2;
            dVar34 = 0.0;
            pdVar27 = param_3 + 2;
            pdVar33 = param_7;
            do {
              param_2 = pdVar27[-1] * (pdVar33[-1] - pdVar6[-1]) +
                        (pdVar33[-2] - pdVar6[-2]) * pdVar27[-2] + (*pdVar33 - *pdVar6) * *pdVar27 +
                        (pdVar33[1] - pdVar6[1]) * pdVar27[1];
              lVar26 = lVar26 + 4;
              dVar34 = dVar34 + param_2;
              pdVar6 = (double *)((long)pdVar6 + lVar19);
              pdVar27 = pdVar27 + 4;
              pdVar33 = pdVar33 + 4;
            } while (lVar26 <= (int)uVar25);
            pdVar11 = (double *)((long)pdVar11 + lVar19 * (ulong)((uVar25 >> 2) + 1));
            uVar14 = (uVar25 & 0xfffffffc) + 4;
          }
          if ((int)uVar14 < (int)uVar2) {
            pdVar6 = param_6 + uVar14;
            pdVar27 = param_3 + uVar14;
            do {
              param_2 = *pdVar27;
              dVar34 = dVar34 + (*pdVar6 - *pdVar11) * param_2;
              uVar14 = uVar14 + 1;
              pdVar11 = pdVar11 + 1;
              pdVar6 = pdVar6 + 1;
              pdVar27 = pdVar27 + 1;
            } while ((int)uVar14 < (int)uVar2);
          }
          dVar34 = param_1 * dVar34;
          *(double *)((long)dVar31 + uVar13 * 8) = dVar34;
          uVar13 = uVar13 + 1;
          param_7 = param_7 + uVar22;
          param_6 = param_6 + uVar22;
        } while (uVar13 != uVar1);
        dVar31 = (double)((long)dVar31 + ((ulong)dVar16 >> 3) * 8);
        uVar17 = uVar17 + 1;
        pdVar28 = pdVar28 + uVar21;
        pdVar29 = pdVar29 + uVar22;
        param_4 = param_4 + uVar22;
      } while (uVar17 != uVar1);
    }
    if (param_3 != adStack_4a8) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar34;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*param_4 & 0x1f0000) == 0x10000) {
    puVar9 = (ulong *)param_4[1];
    uStack_5a0 = (undefined4 *)*puVar9;
    uStack_598 = puVar9[1];
    uStack_588 = puVar9[3];
    ppdStack_590 = (double **)puVar9[2];
    dVar34 = (double)puVar9[4];
    param_2 = (double)puVar9[6];
    uStack_578 = puVar9[5];
    dStack_580 = dVar34;
    uStack_568 = puVar9[7];
    dStack_570 = param_2;
    piStack_560 = (int *)((ulong)&uStack_5a0 | 8);
    puStack_558 = &uStack_550;
    uStack_550 = 0;
    uStack_548 = 0;
    if (puVar9[7] != 0) {
      piVar18 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = *piVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_550 = *(undefined8 *)puVar9[9];
      uStack_548 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_5a0 = (undefined4 *)((ulong)uStack_5a0 & 0xffffffff);
      func_0x000109a84868(&uStack_5a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_5a0,param_4,0xffffffff);
  }
  uVar25 = *(uint *)param_3;
  if ((((uint)uStack_5a0 ^ uVar25) & 0xfff) != 0) {
LAB_109a73678:
    puVar8 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_5e0 = puVar8 + 1;
    uStack_5d8 = 0x35;
    *(undefined8 *)(puVar8 + 3) = 0x7974203d3d202928;
    *(undefined8 *)(puVar8 + 1) = 0x657079742e74616d;
    *(undefined1 *)((long)puVar8 + 0x39) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x657a69732e74616d;
    *(undefined8 *)(puVar8 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar8 + 0xb) = 0x636e756620262620;
    *(undefined8 *)(puVar8 + 9) = 0x657a6973203d3d20;
    *(undefined8 *)((long)puVar8 + 0x31) = 0x30203d2120636e75;
    FUN_109ac3188(0xffffff29,&puStack_5e0,&DAT_10f329830,&UNK_10f5974ee,0xcac);
                    /* WARNING: Does not return */
    pcVar30 = (code *)SoftwareBreakpoint(1,0x109a736e8);
    (*pcVar30)();
  }
  uVar2 = piStack_560[-1];
  uVar21 = (ulong)uVar2;
  piVar18 = (int *)param_3[8];
  if (uVar2 != piVar18[-1]) goto LAB_109a73678;
  pcVar30 = (code *)(&PTR_DAT_110b21d38)[(ulong)uVar25 & 7];
  if (uVar2 == 2) {
    if (*piStack_560 != *piVar18) goto LAB_109a73678;
    bVar5 = piStack_560[1] == piVar18[1];
  }
  else {
    piVar23 = piStack_560;
    piVar24 = piVar18;
    if (0 < (int)uVar2) {
      do {
        if (*piVar23 != *piVar24) goto LAB_109a73678;
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 1;
        piVar24 = piVar24 + 1;
      } while (uVar21 != 0);
    }
    bVar5 = true;
  }
  if (((int)((ulong)uVar25 & 7) == 7) || (!bVar5)) goto LAB_109a73678;
  lVar19 = ((ulong)(uVar25 >> 3) & 0x1ff) + 1;
  if (((uVar25 & (uint)uStack_5a0) >> 0xe & 1) != 0) {
    uVar21 = (ulong)*(uint *)((long)param_3 + 4);
    if ((int)*(uint *)((long)param_3 + 4) < 3) {
      lVar26 = (long)(int)*(uint *)((long)param_3 + 0xc) * (long)(int)*(uint *)(param_3 + 1);
    }
    else {
      lVar26 = 1;
      do {
        lVar26 = lVar26 * *piVar18;
        uVar21 = uVar21 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar21 != 0);
    }
    uVar21 = lVar26 * lVar19;
    if (uVar21 - (long)(int)uVar21 == 0) {
      ppuVar7 = (undefined4 **)param_3[2];
      ppdVar10 = ppdStack_590;
      (*pcVar30)();
      dVar31 = dVar34;
      goto LAB_109a735c8;
    }
  }
  puStack_528 = &uStack_5a0;
  uStack_520 = 0;
  uStack_5a8 = 0;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  puStack_5e0 = (undefined4 *)0x0;
  uStack_5c8 = 0;
  uStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  ppuVar7 = &puStack_5e0;
  ppdVar10 = &pdStack_530;
  param_6 = &dStack_540;
  uVar21 = 0;
  param_7 = (double *)0xffffffff;
  pdStack_530 = param_3;
  FUN_109a9b368();
  uVar25 = (int)lVar19 * (int)uStack_5b8;
  dVar31 = 0.0;
  uVar22 = 0xffffffffffffffff;
  while (uVar22 = uVar22 + 1, uVar22 < uStack_5c0) {
    ppdVar10 = ppdStack_538;
    uVar21 = (ulong)uVar25;
    (*pcVar30)(dStack_540);
    dVar31 = dVar31 + dVar34;
    ppuVar7 = &puStack_5e0;
    FUN_109a8350c();
  }
LAB_109a735c8:
  if (uStack_568 != 0) {
    piVar18 = (int *)(uStack_568 + 0x14);
    do {
      iVar15 = *piVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      ppuVar7 = (undefined4 **)&uStack_5a0;
      func_0x000109a848d4();
    }
  }
  uStack_568 = 0;
  uVar35 = 0;
  uStack_588 = 0;
  ppdStack_590 = (double **)0x0;
  uStack_578 = 0;
  dStack_580 = 0.0;
  if (0 < uStack_5a0._4_4_) {
    lVar19 = 0;
    do {
      piStack_560[lVar19] = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_5a0._4_4_);
  }
  if (puStack_558 != &uStack_550 && puStack_558 != (undefined8 *)0x0) {
    ppuVar7 = (undefined4 **)puStack_558[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return dVar31;
  }
  ___stack_chk_fail();
  if ((int)ppdVar10 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_5a0);
  }
  __Unwind_Resume(ppuVar7);
  FUN_109a85f44(&uStack_6b0);
  FUN_109a85f44(auStack_710,ppdVar10,0,1,0,0);
  uStack_770 = 0x42ff0000;
  uStack_764 = 0;
  uStack_760 = 0;
  iStack_76c = 0;
  uStack_768 = 0;
  uStack_754 = 0;
  uStack_750 = 0;
  uStack_75c = 0;
  uStack_758 = 0;
  uStack_744 = 0;
  uStack_74c = 0;
  uStack_748 = 0;
  lStack_738 = 0;
  uStack_740 = 0;
  uStack_73c = 0;
  uStack_720 = 0;
  uStack_718 = 0;
  uStack_730 = (ulong)&uStack_770 | 8;
  puStack_728 = &uStack_720;
  FUN_109a85f44(&uStack_7d0,param_6,0,1,0,0);
  if (uVar21 != 0) {
    FUN_109a85f44(&uStack_830,uVar21,0,1,0,0);
    if (lStack_738 != 0) {
      piVar18 = (int *)(lStack_738 + 0x14);
      do {
        iVar15 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_770);
      }
    }
    if (0 < iStack_76c) {
      lVar19 = 0;
      do {
        *(undefined4 *)(uStack_730 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_76c);
    }
    uStack_768 = SUB84(puStack_828,0);
    uStack_764 = (undefined4)((ulong)puStack_828 >> 0x20);
    uStack_770 = SUB84(uStack_830,0);
    uStack_758 = (undefined4)uStack_818;
    uStack_754 = (undefined4)((ulong)uStack_818 >> 0x20);
    uStack_760 = (undefined4)uStack_820;
    uStack_75c = (undefined4)((ulong)uStack_820 >> 0x20);
    uStack_748 = (undefined4)uStack_808;
    uStack_744 = (undefined4)((ulong)uStack_808 >> 0x20);
    uStack_750 = (undefined4)uStack_810;
    uStack_74c = (undefined4)((ulong)uStack_810 >> 0x20);
    lStack_738 = lStack_7f8;
    uStack_740 = (undefined4)uStack_800;
    uStack_73c = (undefined4)((ulong)uStack_800 >> 0x20);
    iVar15 = uStack_830._4_4_;
    iStack_76c = uStack_830._4_4_;
    if (puStack_728 != &uStack_720) {
      if (puStack_728 != (undefined8 *)0x0) {
        _free(puStack_728[-1]);
        iVar15 = uStack_830._4_4_;
      }
      puStack_728 = &uStack_720;
      uStack_730 = (ulong)&uStack_770 | 8;
    }
    if (iVar15 < 3) {
      puVar20 = (undefined8 *)((ulong)&uStack_830 | 4);
      *puStack_728 = *puStack_7e8;
      puStack_728[1] = puStack_7e8[1];
      uStack_830 = (undefined4 *)CONCAT44(uStack_830._4_4_,0x42ff0000);
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      *(undefined8 *)((long)puVar20 + 0x34) = 0;
      *(undefined8 *)((long)puVar20 + 0x2c) = 0;
      if (puStack_7e8 != auStack_7e0) {
        _free(puStack_7e8[-1]);
      }
    }
    else {
      uStack_730 = uStack_7f0;
      puStack_728 = puStack_7e8;
    }
  }
  piVar18 = &iStack_6a8;
  if (((ulong)param_7 & 1) != 0) {
    piVar18 = aiStack_6a4;
  }
  if (iStack_7c8 == *piVar18) {
    piVar18 = aiStack_704;
    if (((ulong)param_7 & 2) != 0) {
      piVar18 = &iStack_708;
    }
    if ((iStack_7c4 == *piVar18) && (((uStack_6b0 ^ uStack_7d0) & 0xfff) == 0)) {
      uStack_820 = 0;
      uStack_830 = (undefined4 *)CONCAT44(uStack_830._4_4_,0x1010000);
      puStack_828 = &uStack_6b0;
      uStack_838 = 0;
      auStack_848[0] = 0x1010000;
      puStack_840 = auStack_710;
      uStack_850 = 0;
      auStack_860[0] = 0x1010000;
      puStack_858 = &uStack_770;
      auStack_878[0] = 0x2010000;
      puStack_870 = &uStack_7d0;
      uStack_868 = 0;
      FUN_109a64f8c(uVar35,param_2,&uStack_830,auStack_848,auStack_860,auStack_878,param_7);
      if (lStack_798 != 0) {
        piVar18 = (int *)(lStack_798 + 0x14);
        do {
          iVar15 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_7d0);
        }
      }
      lStack_798 = 0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      if (0 < iStack_7cc) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lStack_790 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < iStack_7cc);
      }
      if (puStack_788 != auStack_780 && puStack_788 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_788 + -8));
      }
      if (lStack_738 != 0) {
        piVar18 = (int *)(lStack_738 + 0x14);
        do {
          iVar15 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_770);
        }
      }
      lStack_738 = 0;
      uStack_758 = 0;
      uStack_754 = 0;
      uStack_760 = 0;
      uStack_75c = 0;
      uStack_748 = 0;
      uStack_744 = 0;
      uStack_750 = 0;
      uStack_74c = 0;
      if (0 < iStack_76c) {
        lVar19 = 0;
        do {
          *(undefined4 *)(uStack_730 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < iStack_76c);
      }
      if (puStack_728 != &uStack_720 && puStack_728 != (undefined8 *)0x0) {
        _free(puStack_728[-1]);
      }
      if (lStack_6d8 != 0) {
        piVar18 = (int *)(lStack_6d8 + 0x14);
        do {
          iVar15 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(auStack_710);
        }
      }
      lStack_6d8 = 0;
      aiStack_704[3] = 0;
      aiStack_704[4] = 0;
      aiStack_704[1] = 0;
      aiStack_704[2] = 0;
      aiStack_704[7] = 0;
      aiStack_704[8] = 0;
      aiStack_704[5] = 0;
      aiStack_704[6] = 0;
      if (0 < iStack_70c) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lStack_6d0 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < iStack_70c);
      }
      if (puStack_6c8 != auStack_6c0 && puStack_6c8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_6c8 + -8));
      }
      if (lStack_678 != 0) {
        piVar18 = (int *)(lStack_678 + 0x14);
        do {
          iVar15 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_6b0);
        }
      }
      lStack_678 = 0;
      dVar31 = 0.0;
      aiStack_6a4[3] = 0;
      aiStack_6a4[4] = 0;
      aiStack_6a4[1] = 0;
      aiStack_6a4[2] = 0;
      aiStack_6a4[7] = 0;
      aiStack_6a4[8] = 0;
      aiStack_6a4[5] = 0;
      aiStack_6a4[6] = 0;
      if (0 < iStack_6ac) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lStack_670 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < iStack_6ac);
      }
      if (puStack_668 != auStack_660 && puStack_668 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_668 + -8));
      }
      return dVar31;
    }
  }
  puVar8 = (undefined4 *)0x98;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_830 = puVar8 + 1;
  puStack_828 = (uint *)0x90;
  *(undefined8 *)(puVar8 + 0x17) = 0x2029545f425f4d4d;
  *(undefined8 *)(puVar8 + 0x15) = 0x45475f5643202620;
  *(undefined8 *)(puVar8 + 0x1b) = 0x203a20736c6f632e;
  *(undefined8 *)(puVar8 + 0x19) = 0x42203f2030203d3d;
  *(undefined8 *)(puVar8 + 0x1f) = 0x79742e4420262620;
  *(undefined8 *)(puVar8 + 0x1d) = 0x292973776f722e42;
  *(undefined8 *)(puVar8 + 0x23) = 0x2928657079742e41;
  *(undefined8 *)(puVar8 + 0x21) = 0x203d3d2029286570;
  *(undefined8 *)(puVar8 + 7) = 0x545f415f4d4d4547;
  *(undefined8 *)(puVar8 + 5) = 0x5f56432026207367;
  *(undefined8 *)(puVar8 + 0xb) = 0x2073776f722e4120;
  *(undefined8 *)(puVar8 + 9) = 0x3f2030203d3d2029;
  *(undefined8 *)(puVar8 + 0xf) = 0x4428202626202929;
  *(undefined8 *)(puVar8 + 0xd) = 0x736c6f632e41203a;
  *(undefined8 *)(puVar8 + 0x13) = 0x7367616c66282820;
  *(undefined8 *)(puVar8 + 0x11) = 0x3d3d20736c6f632e;
  *(undefined1 *)(puVar8 + 0x25) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x616c662828203d3d;
  *(undefined8 *)(puVar8 + 1) = 0x2073776f722e4428;
  FUN_109ac3188(0xffffff29,&uStack_830,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
  pcVar30 = (code *)SoftwareBreakpoint(1,0x109a73c70);
  (*pcVar30)();
}



/* Entry: 109a73394; end: 109a73753;  */

double FUN_109a73394(double param_1,ulong param_2,uint *param_3,uint *param_4,undefined8 param_5,
                    undefined8 *param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  uint **ppuVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined4 auStack_3a8 [2];
  uint *puStack_3a0;
  undefined8 uStack_398;
  undefined4 auStack_390 [2];
  undefined4 *puStack_388;
  undefined8 uStack_380;
  undefined4 auStack_378 [2];
  undefined1 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  ulong uStack_320;
  undefined8 *puStack_318;
  undefined8 auStack_310 [2];
  uint uStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long lStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [4];
  int iStack_23c;
  int iStack_238;
  int aiStack_234 [11];
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int aiStack_1d4 [11];
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [16];
  undefined4 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  uint **ppuStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  int *piStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint **ppuStack_68;
  uint *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_4 + 2);
    piStack_90 = (int *)((ulong)&uStack_d0 | 8);
    uStack_c8 = puVar7[1];
    uStack_d0 = (undefined4 *)*puVar7;
    uStack_b8 = puVar7[3];
    ppuStack_c0 = (uint **)puVar7[2];
    uStack_a8 = puVar7[5];
    param_1 = (double)puVar7[4];
    uStack_98 = puVar7[7];
    param_2 = puVar7[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar7[7] != 0) {
      piVar10 = (int *)(puVar7[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    dStack_b0 = param_1;
    uStack_a0 = param_2;
    if (*(int *)((long)puVar7 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar7[9];
      uStack_78 = ((undefined8 *)puVar7[9])[1];
    }
    else {
      uStack_d0 = (undefined4 *)((ulong)uStack_d0 & 0xffffffff);
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_4,0xffffffff);
  }
  uVar1 = *param_3;
  if ((((uint)uStack_d0 ^ uVar1) & 0xfff) != 0) {
LAB_109a73678:
    puVar6 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_110 = puVar6 + 1;
    uStack_108 = 0x35;
    *(undefined8 *)(puVar6 + 3) = 0x7974203d3d202928;
    *(undefined8 *)(puVar6 + 1) = 0x657079742e74616d;
    *(undefined1 *)((long)puVar6 + 0x39) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x657a69732e74616d;
    *(undefined8 *)(puVar6 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar6 + 0xb) = 0x636e756620262620;
    *(undefined8 *)(puVar6 + 9) = 0x657a6973203d3d20;
    *(undefined8 *)((long)puVar6 + 0x31) = 0x30203d2120636e75;
    FUN_109ac3188(0xffffff29,&puStack_110,&DAT_10f329830,&UNK_10f5974ee,0xcac);
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x109a736e8);
    (*pcVar17)();
  }
  uVar2 = piStack_90[-1];
  uVar15 = (ulong)uVar2;
  piVar10 = *(int **)(param_3 + 0x10);
  if (uVar2 != piVar10[-1]) goto LAB_109a73678;
  pcVar17 = (code *)(&PTR_DAT_110b21d38)[(ulong)uVar1 & 7];
  if (uVar2 == 2) {
    if (*piStack_90 != *piVar10) goto LAB_109a73678;
    bVar4 = piStack_90[1] == piVar10[1];
  }
  else {
    piVar14 = piStack_90;
    piVar16 = piVar10;
    if (0 < (int)uVar2) {
      do {
        if (*piVar14 != *piVar16) goto LAB_109a73678;
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 1;
        piVar16 = piVar16 + 1;
      } while (uVar15 != 0);
    }
    bVar4 = true;
  }
  if (((int)((ulong)uVar1 & 7) == 7) || (!bVar4)) goto LAB_109a73678;
  lVar11 = ((ulong)(uVar1 >> 3) & 0x1ff) + 1;
  if (((uVar1 & (uint)uStack_d0) >> 0xe & 1) != 0) {
    uVar15 = (ulong)param_3[1];
    if ((int)param_3[1] < 3) {
      lVar13 = (long)(int)param_3[3] * (long)(int)param_3[2];
    }
    else {
      lVar13 = 1;
      do {
        lVar13 = lVar13 * *piVar10;
        uVar15 = uVar15 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar15 != 0);
    }
    uVar15 = lVar13 * lVar11;
    if (uVar15 - (long)(int)uVar15 == 0) {
      ppuVar5 = *(undefined4 ***)(param_3 + 4);
      ppuVar8 = ppuStack_c0;
      (*pcVar17)();
      dVar20 = param_1;
      goto LAB_109a735c8;
    }
  }
  puStack_58 = &uStack_d0;
  uStack_50 = 0;
  uStack_d8 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  puStack_110 = (undefined4 *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  ppuVar5 = &puStack_110;
  ppuVar8 = &puStack_60;
  param_6 = &uStack_70;
  uVar15 = 0;
  param_7 = 0xffffffff;
  puStack_60 = param_3;
  FUN_109a9b368();
  uVar1 = (int)lVar11 * (int)uStack_e8;
  dVar20 = 0.0;
  uVar18 = 0xffffffffffffffff;
  while (uVar18 = uVar18 + 1, uVar18 < uStack_f0) {
    ppuVar8 = ppuStack_68;
    uVar15 = (ulong)uVar1;
    (*pcVar17)(uStack_70);
    dVar20 = dVar20 + param_1;
    ppuVar5 = &puStack_110;
    FUN_109a8350c();
  }
LAB_109a735c8:
  if (uStack_98 != 0) {
    piVar10 = (int *)(uStack_98 + 0x14);
    do {
      iVar9 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      ppuVar5 = (undefined4 **)&uStack_d0;
      func_0x000109a848d4();
    }
  }
  uStack_98 = 0;
  uVar19 = 0;
  uStack_b8 = 0;
  ppuStack_c0 = (uint **)0x0;
  uStack_a8 = 0;
  dStack_b0 = 0.0;
  if (0 < uStack_d0._4_4_) {
    lVar11 = 0;
    do {
      piStack_90[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    ppuVar5 = (undefined4 **)puStack_88[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar20;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_d0);
  }
  __Unwind_Resume(ppuVar5);
  FUN_109a85f44(&uStack_1e0);
  FUN_109a85f44(auStack_240,ppuVar8,0,1,0,0);
  uStack_2a0 = 0x42ff0000;
  uStack_294 = 0;
  uStack_290 = 0;
  iStack_29c = 0;
  uStack_298 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_260 = (ulong)&uStack_2a0 | 8;
  puStack_258 = &uStack_250;
  FUN_109a85f44(&uStack_300,param_6,0,1,0,0);
  if (uVar15 != 0) {
    FUN_109a85f44(&uStack_360,uVar15,0,1,0,0);
    if (lStack_268 != 0) {
      piVar10 = (int *)(lStack_268 + 0x14);
      do {
        iVar9 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    if (0 < iStack_29c) {
      lVar11 = 0;
      do {
        *(undefined4 *)(uStack_260 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_29c);
    }
    uStack_298 = SUB84(puStack_358,0);
    uStack_294 = (undefined4)((ulong)puStack_358 >> 0x20);
    uStack_2a0 = SUB84(uStack_360,0);
    uStack_288 = (undefined4)uStack_348;
    uStack_284 = (undefined4)((ulong)uStack_348 >> 0x20);
    uStack_290 = (undefined4)uStack_350;
    uStack_28c = (undefined4)((ulong)uStack_350 >> 0x20);
    uStack_278 = (undefined4)uStack_338;
    uStack_274 = (undefined4)((ulong)uStack_338 >> 0x20);
    uStack_280 = (undefined4)uStack_340;
    uStack_27c = (undefined4)((ulong)uStack_340 >> 0x20);
    lStack_268 = lStack_328;
    uStack_270 = (undefined4)uStack_330;
    uStack_26c = (undefined4)((ulong)uStack_330 >> 0x20);
    iVar9 = uStack_360._4_4_;
    iStack_29c = uStack_360._4_4_;
    if (puStack_258 != &uStack_250) {
      if (puStack_258 != (undefined8 *)0x0) {
        _free(puStack_258[-1]);
        iVar9 = uStack_360._4_4_;
      }
      puStack_258 = &uStack_250;
      uStack_260 = (ulong)&uStack_2a0 | 8;
    }
    if (iVar9 < 3) {
      puVar12 = (undefined8 *)((ulong)&uStack_360 | 4);
      *puStack_258 = *puStack_318;
      puStack_258[1] = puStack_318[1];
      uStack_360 = (undefined4 *)CONCAT44(uStack_360._4_4_,0x42ff0000);
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      *(undefined8 *)((long)puVar12 + 0x34) = 0;
      *(undefined8 *)((long)puVar12 + 0x2c) = 0;
      if (puStack_318 != auStack_310) {
        _free(puStack_318[-1]);
      }
    }
    else {
      uStack_260 = uStack_320;
      puStack_258 = puStack_318;
    }
  }
  piVar10 = &iStack_1d8;
  if ((param_7 & 1) != 0) {
    piVar10 = aiStack_1d4;
  }
  if (iStack_2f8 == *piVar10) {
    piVar10 = aiStack_234;
    if ((param_7 & 2) != 0) {
      piVar10 = &iStack_238;
    }
    if ((iStack_2f4 == *piVar10) && (((uStack_1e0 ^ uStack_300) & 0xfff) == 0)) {
      uStack_350 = 0;
      uStack_360 = (undefined4 *)CONCAT44(uStack_360._4_4_,0x1010000);
      puStack_358 = &uStack_1e0;
      uStack_368 = 0;
      auStack_378[0] = 0x1010000;
      puStack_370 = auStack_240;
      uStack_380 = 0;
      auStack_390[0] = 0x1010000;
      puStack_388 = &uStack_2a0;
      auStack_3a8[0] = 0x2010000;
      puStack_3a0 = &uStack_300;
      uStack_398 = 0;
      FUN_109a64f8c(uVar19,param_2,&uStack_360,auStack_378,auStack_390,auStack_3a8,param_7);
      if (lStack_2c8 != 0) {
        piVar10 = (int *)(lStack_2c8 + 0x14);
        do {
          iVar9 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          func_0x000109a848d4(&uStack_300);
        }
      }
      lStack_2c8 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      if (0 < iStack_2fc) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_2c0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_2fc);
      }
      if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_2b8 + -8));
      }
      if (lStack_268 != 0) {
        piVar10 = (int *)(lStack_268 + 0x14);
        do {
          iVar9 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          func_0x000109a848d4(&uStack_2a0);
        }
      }
      lStack_268 = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_278 = 0;
      uStack_274 = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      if (0 < iStack_29c) {
        lVar11 = 0;
        do {
          *(undefined4 *)(uStack_260 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_29c);
      }
      if (puStack_258 != &uStack_250 && puStack_258 != (undefined8 *)0x0) {
        _free(puStack_258[-1]);
      }
      if (lStack_208 != 0) {
        piVar10 = (int *)(lStack_208 + 0x14);
        do {
          iVar9 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          func_0x000109a848d4(auStack_240);
        }
      }
      lStack_208 = 0;
      aiStack_234[3] = 0;
      aiStack_234[4] = 0;
      aiStack_234[1] = 0;
      aiStack_234[2] = 0;
      aiStack_234[7] = 0;
      aiStack_234[8] = 0;
      aiStack_234[5] = 0;
      aiStack_234[6] = 0;
      if (0 < iStack_23c) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_200 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_23c);
      }
      if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_1f8 + -8));
      }
      if (lStack_1a8 != 0) {
        piVar10 = (int *)(lStack_1a8 + 0x14);
        do {
          iVar9 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          func_0x000109a848d4(&uStack_1e0);
        }
      }
      lStack_1a8 = 0;
      dVar20 = 0.0;
      aiStack_1d4[3] = 0;
      aiStack_1d4[4] = 0;
      aiStack_1d4[1] = 0;
      aiStack_1d4[2] = 0;
      aiStack_1d4[7] = 0;
      aiStack_1d4[8] = 0;
      aiStack_1d4[5] = 0;
      aiStack_1d4[6] = 0;
      if (0 < iStack_1dc) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_1a0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_1dc);
      }
      if (puStack_198 != auStack_190 && puStack_198 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_198 + -8));
      }
      return dVar20;
    }
  }
  puVar6 = (undefined4 *)0x98;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_360 = puVar6 + 1;
  puStack_358 = (uint *)0x90;
  *(undefined8 *)(puVar6 + 0x17) = 0x2029545f425f4d4d;
  *(undefined8 *)(puVar6 + 0x15) = 0x45475f5643202620;
  *(undefined8 *)(puVar6 + 0x1b) = 0x203a20736c6f632e;
  *(undefined8 *)(puVar6 + 0x19) = 0x42203f2030203d3d;
  *(undefined8 *)(puVar6 + 0x1f) = 0x79742e4420262620;
  *(undefined8 *)(puVar6 + 0x1d) = 0x292973776f722e42;
  *(undefined8 *)(puVar6 + 0x23) = 0x2928657079742e41;
  *(undefined8 *)(puVar6 + 0x21) = 0x203d3d2029286570;
  *(undefined8 *)(puVar6 + 7) = 0x545f415f4d4d4547;
  *(undefined8 *)(puVar6 + 5) = 0x5f56432026207367;
  *(undefined8 *)(puVar6 + 0xb) = 0x2073776f722e4120;
  *(undefined8 *)(puVar6 + 9) = 0x3f2030203d3d2029;
  *(undefined8 *)(puVar6 + 0xf) = 0x4428202626202929;
  *(undefined8 *)(puVar6 + 0xd) = 0x736c6f632e41203a;
  *(undefined8 *)(puVar6 + 0x13) = 0x7367616c66282820;
  *(undefined8 *)(puVar6 + 0x11) = 0x3d3d20736c6f632e;
  *(undefined1 *)(puVar6 + 0x25) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x616c662828203d3d;
  *(undefined8 *)(puVar6 + 1) = 0x2073776f722e4428;
  FUN_109ac3188(0xffffff29,&uStack_360,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x109a73c70);
  (*pcVar17)();
}



/* Entry: 109a73754; end: 109a73d03;  */

void FUN_109a73754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 auStack_288 [2];
  uint *puStack_280;
  undefined8 uStack_278;
  undefined4 auStack_270 [2];
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined4 auStack_258 [2];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  uint *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  undefined8 auStack_1f0 [2];
  uint uStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [4];
  int iStack_11c;
  int iStack_118;
  int aiStack_114 [11];
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int aiStack_b4 [11];
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  FUN_109a85f44(&uStack_c0,param_3,0,1,0,0);
  FUN_109a85f44(auStack_120,param_4,0,1,0,0);
  uStack_180 = 0x42ff0000;
  uStack_174 = 0;
  uStack_170 = 0;
  iStack_17c = 0;
  uStack_178 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = (ulong)&uStack_180 | 8;
  puStack_138 = &uStack_130;
  FUN_109a85f44(&uStack_1e0,param_6,0,1,0,0);
  if (param_5 != 0) {
    FUN_109a85f44(&uStack_240,param_5,0,1,0,0);
    if (lStack_148 != 0) {
      piVar1 = (int *)(lStack_148 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_180);
      }
    }
    if (0 < iStack_17c) {
      lVar7 = 0;
      do {
        *(undefined4 *)(uStack_140 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_17c);
    }
    uStack_178 = SUB84(puStack_238,0);
    uStack_174 = (undefined4)((ulong)puStack_238 >> 0x20);
    uStack_180 = SUB84(uStack_240,0);
    uStack_168 = (undefined4)uStack_228;
    uStack_164 = (undefined4)((ulong)uStack_228 >> 0x20);
    uStack_170 = (undefined4)uStack_230;
    uStack_16c = (undefined4)((ulong)uStack_230 >> 0x20);
    uStack_158 = (undefined4)uStack_218;
    uStack_154 = (undefined4)((ulong)uStack_218 >> 0x20);
    uStack_160 = (undefined4)uStack_220;
    uStack_15c = (undefined4)((ulong)uStack_220 >> 0x20);
    lStack_148 = lStack_208;
    uStack_150 = (undefined4)uStack_210;
    uStack_14c = (undefined4)((ulong)uStack_210 >> 0x20);
    iVar6 = uStack_240._4_4_;
    iStack_17c = uStack_240._4_4_;
    if (puStack_138 != &uStack_130) {
      if (puStack_138 != (undefined8 *)0x0) {
        _free(puStack_138[-1]);
        iVar6 = uStack_240._4_4_;
      }
      puStack_138 = &uStack_130;
      uStack_140 = (ulong)&uStack_180 | 8;
    }
    if (iVar6 < 3) {
      puVar8 = (undefined8 *)((ulong)&uStack_240 | 4);
      *puStack_138 = *puStack_1f8;
      puStack_138[1] = puStack_1f8[1];
      uStack_240 = (undefined4 *)CONCAT44(uStack_240._4_4_,0x42ff0000);
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      if (puStack_1f8 != auStack_1f0) {
        _free(puStack_1f8[-1]);
      }
    }
    else {
      uStack_140 = uStack_200;
      puStack_138 = puStack_1f8;
    }
  }
  piVar1 = &iStack_b8;
  if ((param_7 & 1) != 0) {
    piVar1 = aiStack_b4;
  }
  if (iStack_1d8 == *piVar1) {
    piVar1 = aiStack_114;
    if ((param_7 & 2) != 0) {
      piVar1 = &iStack_118;
    }
    if ((iStack_1d4 == *piVar1) && (((uStack_c0 ^ uStack_1e0) & 0xfff) == 0)) {
      uStack_230 = 0;
      uStack_240 = (undefined4 *)CONCAT44(uStack_240._4_4_,0x1010000);
      puStack_238 = &uStack_c0;
      uStack_248 = 0;
      auStack_258[0] = 0x1010000;
      puStack_250 = auStack_120;
      uStack_260 = 0;
      auStack_270[0] = 0x1010000;
      puStack_268 = &uStack_180;
      auStack_288[0] = 0x2010000;
      puStack_280 = &uStack_1e0;
      uStack_278 = 0;
      FUN_109a64f8c(param_1,param_2,&uStack_240,auStack_258,auStack_270,auStack_288,param_7);
      if (lStack_1a8 != 0) {
        piVar1 = (int *)(lStack_1a8 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_1e0);
        }
      }
      lStack_1a8 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      if (0 < iStack_1dc) {
        lVar7 = 0;
        do {
          *(undefined4 *)(lStack_1a0 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_1dc);
      }
      if (puStack_198 != auStack_190 && puStack_198 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_198 + -8));
      }
      if (lStack_148 != 0) {
        piVar1 = (int *)(lStack_148 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
        }
      }
      lStack_148 = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      if (0 < iStack_17c) {
        lVar7 = 0;
        do {
          *(undefined4 *)(uStack_140 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_17c);
      }
      if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
        _free(puStack_138[-1]);
      }
      if (lStack_e8 != 0) {
        piVar1 = (int *)(lStack_e8 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(auStack_120);
        }
      }
      lStack_e8 = 0;
      aiStack_114[3] = 0;
      aiStack_114[4] = 0;
      aiStack_114[1] = 0;
      aiStack_114[2] = 0;
      aiStack_114[7] = 0;
      aiStack_114[8] = 0;
      aiStack_114[5] = 0;
      aiStack_114[6] = 0;
      if (0 < iStack_11c) {
        lVar7 = 0;
        do {
          *(undefined4 *)(lStack_e0 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_11c);
      }
      if (puStack_d8 != auStack_d0 && puStack_d8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_d8 + -8));
      }
      if (lStack_88 != 0) {
        piVar1 = (int *)(lStack_88 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_c0);
        }
      }
      lStack_88 = 0;
      aiStack_b4[3] = 0;
      aiStack_b4[4] = 0;
      aiStack_b4[1] = 0;
      aiStack_b4[2] = 0;
      aiStack_b4[7] = 0;
      aiStack_b4[8] = 0;
      aiStack_b4[5] = 0;
      aiStack_b4[6] = 0;
      if (0 < iStack_bc) {
        lVar7 = 0;
        do {
          *(undefined4 *)(lStack_80 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_bc);
      }
      if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_78 + -8));
      }
      return;
    }
  }
  puVar5 = (undefined4 *)0x98;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  uStack_240 = puVar5 + 1;
  puStack_238 = (uint *)0x90;
  *(undefined8 *)(puVar5 + 0x17) = 0x2029545f425f4d4d;
  *(undefined8 *)(puVar5 + 0x15) = 0x45475f5643202620;
  *(undefined8 *)(puVar5 + 0x1b) = 0x203a20736c6f632e;
  *(undefined8 *)(puVar5 + 0x19) = 0x42203f2030203d3d;
  *(undefined8 *)(puVar5 + 0x1f) = 0x79742e4420262620;
  *(undefined8 *)(puVar5 + 0x1d) = 0x292973776f722e42;
  *(undefined8 *)(puVar5 + 0x23) = 0x2928657079742e41;
  *(undefined8 *)(puVar5 + 0x21) = 0x203d3d2029286570;
  *(undefined8 *)(puVar5 + 7) = 0x545f415f4d4d4547;
  *(undefined8 *)(puVar5 + 5) = 0x5f56432026207367;
  *(undefined8 *)(puVar5 + 0xb) = 0x2073776f722e4120;
  *(undefined8 *)(puVar5 + 9) = 0x3f2030203d3d2029;
  *(undefined8 *)(puVar5 + 0xf) = 0x4428202626202929;
  *(undefined8 *)(puVar5 + 0xd) = 0x736c6f632e41203a;
  *(undefined8 *)(puVar5 + 0x13) = 0x7367616c66282820;
  *(undefined8 *)(puVar5 + 0x11) = 0x3d3d20736c6f632e;
  *(undefined1 *)(puVar5 + 0x25) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x616c662828203d3d;
  *(undefined8 *)(puVar5 + 1) = 0x2073776f722e4428;
  FUN_109ac3188(0xffffff29,&uStack_240,&UNK_10f597821,&UNK_10f5974ee,0xcd2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a73c70);
  (*pcVar4)();
}



/* Entry: 109a73d04; end: 109a74223;  */

void FUN_109a73d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  )

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 auStack_280 [2];
  undefined4 *puStack_278;
  undefined8 uStack_270;
  undefined4 auStack_268 [2];
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  uint *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 auStack_200 [2];
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  int iStack_12c;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 auStack_e0 [2];
  uint uStack_d0;
  int iStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  
  FUN_109a85f44(&uStack_d0,param_2,0,1,0,0);
  FUN_109a85f44(&uStack_130,param_3,0,1,0,0);
  uStack_190 = CONCAT44(iStack_12c,uStack_130);
  uStack_150 = (ulong)&uStack_190 | 8;
  uStack_188 = uStack_128;
  uStack_178 = uStack_118;
  lStack_180 = lStack_120;
  uStack_168 = uStack_108;
  uStack_170 = uStack_110;
  lStack_158 = lStack_f8;
  uStack_160 = uStack_100;
  uStack_140 = 0;
  uStack_138 = 0;
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_148 = &uStack_140;
  if (iStack_12c < 3) {
    uStack_140 = *puStack_e8;
    uStack_138 = puStack_e8[1];
  }
  else {
    uStack_190 = (ulong)uStack_130;
    func_0x000109a84868(&uStack_190,&uStack_130);
  }
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  iStack_1ec = 0;
  uStack_1e8 = 0;
  uVar8 = (ulong)&uStack_1f0 | 8;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1b0 = uVar8;
  puStack_1a8 = &uStack_1a0;
  if (param_5 != 0) {
    FUN_109a85f44(&uStack_250,param_5,0,1,0,0);
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
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
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    if (0 < iStack_1ec) {
      lVar6 = 0;
      do {
        *(undefined4 *)(uStack_1b0 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_1ec);
    }
    uStack_1e8 = SUB84(puStack_248,0);
    uStack_1e4 = (undefined4)((ulong)puStack_248 >> 0x20);
    uStack_1f0 = uStack_250;
    iStack_1ec = iStack_24c;
    uStack_1d8 = (undefined4)uStack_238;
    uStack_1d4 = (undefined4)((ulong)uStack_238 >> 0x20);
    uStack_1e0 = (undefined4)uStack_240;
    uStack_1dc = (undefined4)((ulong)uStack_240 >> 0x20);
    uStack_1c8 = (undefined4)uStack_228;
    uStack_1c4 = (undefined4)((ulong)uStack_228 >> 0x20);
    uStack_1d0 = (undefined4)uStack_230;
    uStack_1cc = (undefined4)((ulong)uStack_230 >> 0x20);
    lStack_1b8 = lStack_218;
    uStack_1c0 = (undefined4)uStack_220;
    uStack_1bc = (undefined4)((ulong)uStack_220 >> 0x20);
    uVar5 = uStack_1b0;
    puVar7 = puStack_1a8;
    if ((puStack_1a8 != &uStack_1a0) &&
       (uVar5 = uVar8, puVar7 = &uStack_1a0, puStack_1a8 != (undefined8 *)0x0)) {
      _free(puStack_1a8[-1]);
    }
    puStack_1a8 = puVar7;
    uStack_1b0 = uVar5;
    if (iStack_24c < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_250 | 4);
      *puStack_1a8 = *puStack_208;
      puStack_1a8[1] = puStack_208[1];
      uStack_250 = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_208 != auStack_200) {
        _free(puStack_208[-1]);
      }
    }
    else {
      uStack_1b0 = uStack_210;
      puStack_1a8 = puStack_208;
    }
  }
  uStack_240 = 0;
  uStack_250 = 0x1010000;
  puStack_248 = &uStack_d0;
  auStack_268[0] = 0x2010000;
  puStack_260 = &uStack_190;
  uStack_258 = 0;
  uStack_270 = 0;
  auStack_280[0] = 0x1010000;
  puStack_278 = &uStack_1f0;
  FUN_109a6dab4(param_1,&uStack_250,auStack_268,param_4 != 0,auStack_280,(uint)uStack_190 & 0xfff);
  if (lStack_180 != lStack_120) {
    uStack_250 = 0x2010000;
    puStack_248 = &uStack_130;
    uStack_240 = 0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_190,&uStack_250,uStack_130 & 0xfff);
  }
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  if (lStack_158 != 0) {
    piVar1 = (int *)(lStack_158 + 0x14);
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
      func_0x000109a848d4(&uStack_190);
    }
  }
  lStack_158 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (0 < uStack_190._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_150 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_190._4_4_);
  }
  if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
    _free(puStack_148[-1]);
  }
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
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
      func_0x000109a848d4(&uStack_130);
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < iStack_12c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_f0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_12c);
  }
  if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
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
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < iStack_cc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_cc);
  }
  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_88 + -8));
  }
  return;
}



/* Entry: 109a74224; end: 109a75a77;  */

void FUN_109a74224(long param_1,long param_2,float *param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  
  if (param_5 == 2) {
    if (0 < param_4) {
      uVar4 = 0;
      do {
        fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + uVar4));
        uVar8 = (uint)(long)(float)(int)(param_3[2] + fVar11 * *param_3);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        fVar11 = (float)NEON_ucvtf((uint)((byte *)(param_1 + uVar4))[1]);
        uVar6 = (uint)(long)(float)(int)(param_3[5] + fVar11 * param_3[4]);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        *(undefined1 *)(param_2 + uVar4) = (char)uVar8;
        ((undefined1 *)(param_2 + uVar4))[1] = (char)uVar6;
        uVar4 = uVar4 + 2;
      } while (uVar4 < (uint)(param_4 << 1));
    }
  }
  else if (param_5 == 3) {
    if (0 < param_4) {
      uVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1 + uVar4);
        fVar11 = (float)NEON_ucvtf((uint)*pbVar1);
        uVar8 = (uint)(long)(float)(int)(param_3[3] + fVar11 * *param_3);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        fVar11 = (float)NEON_ucvtf((uint)pbVar1[1]);
        uVar6 = (uint)(long)(float)(int)(param_3[7] + fVar11 * param_3[5]);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        fVar11 = (float)NEON_ucvtf((uint)pbVar1[2]);
        uVar7 = (uint)(long)(float)(int)(param_3[0xb] + fVar11 * param_3[10]);
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar7) {
          uVar7 = 0xff;
        }
        puVar2 = (undefined1 *)(param_2 + uVar4);
        *puVar2 = (char)uVar8;
        puVar2[1] = (char)uVar6;
        puVar2[2] = (char)uVar7;
        uVar4 = uVar4 + 3;
      } while (uVar4 < (uint)(param_4 * 3));
    }
  }
  else if (param_5 == 4) {
    if (0 < param_4) {
      uVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1 + uVar4);
        fVar11 = (float)NEON_ucvtf((uint)*pbVar1);
        uVar8 = (uint)(long)(float)(int)(param_3[4] + fVar11 * *param_3);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        fVar11 = (float)NEON_ucvtf((uint)pbVar1[1]);
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        uVar6 = (uint)(long)(float)(int)(param_3[9] + fVar11 * param_3[6]);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar2 = (undefined1 *)(param_2 + uVar4);
        *puVar2 = (char)uVar8;
        puVar2[1] = (char)uVar6;
        fVar11 = (float)NEON_ucvtf((uint)pbVar1[2]);
        uVar8 = (uint)(long)(float)(int)(param_3[0xe] + fVar11 * param_3[0xc]);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        fVar11 = (float)NEON_ucvtf((uint)pbVar1[3]);
        uVar6 = (uint)(long)(float)(int)(param_3[0x13] + fVar11 * param_3[0x12]);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar2[2] = (char)uVar8;
        puVar2[3] = (char)uVar6;
        uVar4 = uVar4 + 4;
      } while (uVar4 < (uint)(param_4 << 2));
    }
  }
  else if (0 < param_4) {
    iVar3 = 0;
    lVar5 = (long)(int)param_5;
    do {
      if (0 < (int)param_5) {
        uVar4 = 0;
        pfVar9 = param_3;
        pfVar10 = param_3;
        do {
          fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + uVar4));
          uVar8 = (uint)(long)(float)(int)(pfVar9[lVar5] + *pfVar10 * fVar11);
          uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar8) {
            uVar8 = 0xff;
          }
          *(char *)(param_2 + uVar4) = (char)uVar8;
          uVar4 = uVar4 + 1;
          pfVar10 = pfVar10 + (ulong)param_5 + 2;
          pfVar9 = pfVar9 + (ulong)param_5 + 1;
        } while (param_5 != uVar4);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + lVar5;
      param_2 = param_2 + lVar5;
    } while (iVar3 != param_4);
  }
  return;
}



/* Entry: 109a75a78; end: 109a75e37;  */

void FUN_109a75a78(ushort *param_1,undefined8 *param_2,float *param_3,uint param_4,uint param_5,
                  uint param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
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
  undefined8 uVar34;
  
  if ((param_5 == 2) && (param_6 == 2)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar12 = *param_3;
      fVar15 = param_3[1];
      fVar14 = param_3[2];
      fVar18 = param_3[3];
      fVar13 = param_3[4];
      fVar17 = param_3[5];
      do {
        fVar19 = (float)NEON_ucvtf((uint)(param_1 + uVar6)[1]);
        fVar16 = (float)NEON_ucvtf((uint)param_1[uVar6]);
        uVar7 = (uint)(long)(float)(int)(fVar14 + fVar15 * fVar19 + fVar16 * fVar12);
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (0xfffe < (int)uVar7) {
          uVar7 = 0xffff;
        }
        uVar9 = (uint)(long)(float)(int)(fVar17 + fVar13 * fVar19 + fVar16 * fVar18);
        uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        if (0xfffe < (int)uVar9) {
          uVar9 = 0xffff;
        }
        puVar8 = (undefined2 *)((long)param_2 + uVar6 * 2);
        *puVar8 = (short)uVar7;
        puVar8[1] = (short)uVar9;
        uVar6 = uVar6 + 2;
      } while (uVar6 < param_4 << 1);
    }
  }
  else if ((param_5 == 3) && (param_6 == 3)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar18 = *param_3;
      fVar16 = param_3[1];
      fVar14 = param_3[2];
      fVar19 = param_3[3];
      fVar13 = param_3[4];
      fVar17 = param_3[5];
      fVar12 = param_3[6];
      fVar15 = param_3[7];
      fVar20 = param_3[8];
      fVar21 = param_3[9];
      param_1 = param_1 + 2;
      fVar23 = param_3[10];
      fVar25 = param_3[0xb];
      puVar8 = (undefined2 *)((long)param_2 + 4);
      do {
        fVar22 = (float)NEON_ucvtf((uint)param_1[-2]);
        fVar24 = (float)NEON_ucvtf((uint)param_1[-1]);
        fVar26 = (float)NEON_ucvtf((uint)*param_1);
        uVar7 = (uint)(long)(float)(int)(fVar19 + fVar16 * fVar24 + fVar22 * fVar18 +
                                                  fVar26 * fVar14);
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (0xfffe < (int)uVar7) {
          uVar7 = 0xffff;
        }
        uVar9 = (uint)(long)(float)(int)(fVar15 + fVar17 * fVar24 + fVar22 * fVar13 +
                                                  fVar26 * fVar12);
        uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        if (0xfffe < (int)uVar9) {
          uVar9 = 0xffff;
        }
        uVar10 = (uint)(long)(float)(int)(fVar25 + fVar21 * fVar24 + fVar22 * fVar20 +
                                                   fVar26 * fVar23);
        uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
        puVar8[-2] = (short)uVar7;
        if (0xfffe < (int)uVar10) {
          uVar10 = 0xffff;
        }
        puVar8[-1] = (short)uVar9;
        *puVar8 = (short)uVar10;
        uVar6 = uVar6 + 3;
        param_1 = param_1 + 3;
        puVar8 = puVar8 + 3;
      } while (uVar6 < param_4 * 3);
    }
  }
  else if ((param_5 == 3) && (param_6 == 1)) {
    if (0 < (int)param_4) {
      fVar13 = *param_3;
      fVar17 = param_3[1];
      uVar6 = (ulong)param_4;
      fVar14 = param_3[2];
      fVar12 = param_3[3];
      do {
        fVar15 = (float)NEON_ucvtf((uint)*param_1);
        fVar18 = (float)NEON_ucvtf((uint)param_1[1]);
        fVar16 = (float)NEON_ucvtf((uint)param_1[2]);
        uVar7 = (uint)(long)(float)(int)(fVar12 + fVar17 * fVar18 + fVar15 * fVar13 +
                                                  fVar16 * fVar14);
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (0xfffe < (int)uVar7) {
          uVar7 = 0xffff;
        }
        *(short *)param_2 = (short)uVar7;
        param_1 = param_1 + 3;
        uVar6 = uVar6 - 1;
        param_2 = (undefined8 *)((long)param_2 + 2);
      } while (uVar6 != 0);
    }
  }
  else if ((param_5 == 4) && (param_6 == 4)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar20 = *param_3;
      fVar21 = param_3[1];
      fVar14 = param_3[2];
      fVar23 = param_3[3];
      fVar13 = param_3[4];
      fVar17 = param_3[5];
      fVar12 = param_3[6];
      fVar15 = param_3[7];
      fVar25 = param_3[8];
      fVar22 = param_3[9];
      fVar24 = param_3[10];
      fVar26 = param_3[0xb];
      fVar18 = param_3[0xc];
      fVar16 = param_3[0xd];
      fVar19 = param_3[0xe];
      fVar27 = param_3[0xf];
      fVar28 = param_3[0x10];
      fVar29 = param_3[0x11];
      fVar30 = param_3[0x12];
      fVar31 = param_3[0x13];
      param_1 = param_1 + 2;
      do {
        fVar2 = (float)NEON_ucvtf((uint)param_1[-1]);
        fVar32 = (float)NEON_ucvtf((uint)param_1[-2]);
        fVar3 = (float)NEON_ucvtf((uint)*param_1);
        fVar4 = (float)NEON_ucvtf((uint)param_1[1]);
        fVar33 = (float)(int)(fVar31 + fVar28 * fVar2 + fVar32 * fVar27 + fVar3 * fVar29 +
                                       fVar4 * fVar30);
        auVar1._4_4_ = (int)(long)(float)(int)(fVar22 + fVar12 * fVar2 + fVar32 * fVar17 +
                                                        fVar3 * fVar15 + fVar4 * fVar25);
        auVar1._0_4_ = (int)(long)(float)(int)(fVar13 + fVar21 * fVar2 + fVar32 * fVar20 +
                                                        fVar3 * fVar14 + fVar4 * fVar23);
        auVar1._8_4_ = (int)(long)(float)(int)(fVar19 + fVar26 * fVar2 + fVar32 * fVar24 +
                                                        fVar3 * fVar18 + fVar4 * fVar16);
        auVar1._12_4_ = (int)(long)fVar33;
        uVar34 = NEON_sqxtun((ulong)(uint)fVar33,auVar1,4);
        *param_2 = uVar34;
        uVar6 = uVar6 + 4;
        param_1 = param_1 + 4;
        param_2 = param_2 + 1;
      } while (uVar6 < param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    uVar7 = 0;
    do {
      if (0 < (int)param_6) {
        uVar6 = 0;
        pfVar11 = param_3;
        do {
          fVar14 = pfVar11[(int)param_5];
          if (0 < (int)param_5) {
            uVar5 = 0;
            do {
              fVar13 = (float)NEON_ucvtf((uint)param_1[uVar5]);
              fVar14 = fVar14 + fVar13 * pfVar11[uVar5];
              uVar5 = uVar5 + 1;
            } while (param_5 != uVar5);
          }
          uVar9 = (uint)(long)(float)(int)fVar14 &
                  ((int)(uint)(long)(float)(int)fVar14 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar9) {
            uVar9 = 0xffff;
          }
          *(short *)((long)param_2 + uVar6 * 2) = (short)uVar9;
          uVar6 = uVar6 + 1;
          pfVar11 = (float *)((long)pfVar11 +
                             (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2)
                             + 4);
        } while (uVar6 != param_6);
      }
      uVar7 = uVar7 + 1;
      param_2 = (undefined8 *)((long)param_2 + (long)(int)param_6 * 2);
      param_1 = (ushort *)
                ((long)param_1 +
                (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
    } while (uVar7 != param_4);
  }
  return;
}



/* Entry: 109a75e38; end: 109a7622b;  */

void FUN_109a75e38(short *param_1,undefined8 *param_2,float *param_3,uint param_4,uint param_5,
                  uint param_6)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
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
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if ((param_5 == 2) && (param_6 == 2)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar10 = *param_3;
      fVar11 = param_3[1];
      fVar12 = param_3[2];
      fVar13 = param_3[3];
      fVar14 = param_3[4];
      fVar15 = param_3[5];
      do {
        fVar16 = (float)(int)param_1[uVar6];
        fVar17 = (float)(int)(param_1 + uVar6)[1];
        iVar3 = (int)(long)(float)(int)(fVar12 + fVar11 * fVar17 + fVar16 * fVar10);
        if (iVar3 < -0x7fff) {
          iVar3 = -0x8000;
        }
        if (0x7ffe < iVar3) {
          iVar3 = 0x7fff;
        }
        iVar8 = (int)(long)(float)(int)(fVar15 + fVar14 * fVar17 + fVar16 * fVar13);
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        puVar7 = (undefined2 *)((long)param_2 + uVar6 * 2);
        *puVar7 = (short)iVar3;
        puVar7[1] = (short)iVar8;
        uVar6 = uVar6 + 2;
      } while (uVar6 < param_4 << 1);
    }
  }
  else if ((param_5 == 3) && (param_6 == 3)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar10 = *param_3;
      fVar11 = param_3[1];
      fVar12 = param_3[2];
      fVar13 = param_3[3];
      fVar14 = param_3[4];
      fVar15 = param_3[5];
      fVar16 = param_3[6];
      fVar17 = param_3[7];
      fVar18 = param_3[8];
      fVar19 = param_3[9];
      param_1 = param_1 + 2;
      fVar20 = param_3[10];
      fVar21 = param_3[0xb];
      puVar7 = (undefined2 *)((long)param_2 + 4);
      do {
        fVar22 = (float)(int)param_1[-2];
        fVar23 = (float)(int)param_1[-1];
        fVar24 = (float)(int)*param_1;
        iVar3 = (int)(long)(float)(int)(fVar13 + fVar11 * fVar23 + fVar22 * fVar10 + fVar24 * fVar12
                                       );
        if (iVar3 < -0x7fff) {
          iVar3 = -0x8000;
        }
        if (0x7ffe < iVar3) {
          iVar3 = 0x7fff;
        }
        iVar8 = (int)(long)(float)(int)(fVar17 + fVar15 * fVar23 + fVar22 * fVar14 + fVar24 * fVar16
                                       );
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        iVar9 = (int)(long)(float)(int)(fVar21 + fVar19 * fVar23 + fVar22 * fVar18 + fVar24 * fVar20
                                       );
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        puVar7[-2] = (short)iVar3;
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        puVar7[-1] = (short)iVar8;
        *puVar7 = (short)iVar9;
        uVar6 = uVar6 + 3;
        param_1 = param_1 + 3;
        puVar7 = puVar7 + 3;
      } while (uVar6 < param_4 * 3);
    }
  }
  else if ((param_5 == 3) && (param_6 == 1)) {
    if (0 < (int)param_4) {
      fVar10 = *param_3;
      fVar11 = param_3[1];
      uVar6 = (ulong)param_4;
      fVar12 = param_3[2];
      fVar13 = param_3[3];
      do {
        iVar3 = (int)(long)(float)(int)(fVar13 + fVar11 * (float)(int)param_1[1] +
                                                 (float)(int)*param_1 * fVar10 +
                                                 (float)(int)param_1[2] * fVar12);
        if (iVar3 < -0x7fff) {
          iVar3 = -0x8000;
        }
        if (0x7ffe < iVar3) {
          iVar3 = 0x7fff;
        }
        *(short *)param_2 = (short)iVar3;
        param_1 = param_1 + 3;
        uVar6 = uVar6 - 1;
        param_2 = (undefined8 *)((long)param_2 + 2);
      } while (uVar6 != 0);
    }
  }
  else if ((param_5 == 4) && (param_6 == 4)) {
    if (0 < (int)param_4) {
      uVar6 = 0;
      fVar10 = *param_3;
      fVar11 = param_3[1];
      fVar12 = param_3[2];
      fVar13 = param_3[3];
      fVar14 = param_3[4];
      fVar15 = param_3[5];
      fVar16 = param_3[6];
      fVar17 = param_3[7];
      fVar18 = param_3[8];
      fVar19 = param_3[9];
      fVar20 = param_3[10];
      fVar21 = param_3[0xb];
      fVar22 = param_3[0xc];
      fVar23 = param_3[0xd];
      fVar24 = param_3[0xe];
      fVar25 = param_3[0xf];
      fVar26 = param_3[0x10];
      fVar27 = param_3[0x11];
      fVar28 = param_3[0x12];
      fVar29 = param_3[0x13];
      param_1 = param_1 + 2;
      do {
        fVar30 = (float)(int)param_1[-2];
        fVar33 = (float)(int)param_1[-1];
        fVar34 = (float)(int)*param_1;
        fVar35 = (float)(int)param_1[1];
        fVar31 = (float)(int)(fVar29 + fVar26 * fVar33 + fVar30 * fVar25 + fVar34 * fVar27 +
                                       fVar35 * fVar28);
        auVar1._4_4_ = (int)(long)(float)(int)(fVar19 + fVar16 * fVar33 + fVar30 * fVar15 +
                                                        fVar34 * fVar17 + fVar35 * fVar18);
        auVar1._0_4_ = (int)(long)(float)(int)(fVar14 + fVar11 * fVar33 + fVar30 * fVar10 +
                                                        fVar34 * fVar12 + fVar35 * fVar13);
        auVar1._8_4_ = (int)(long)(float)(int)(fVar24 + fVar21 * fVar33 + fVar30 * fVar20 +
                                                        fVar34 * fVar22 + fVar35 * fVar23);
        auVar1._12_4_ = (int)(long)fVar31;
        uVar32 = NEON_sqxtn((ulong)(uint)fVar31,auVar1,4);
        *param_2 = uVar32;
        uVar6 = uVar6 + 4;
        param_1 = param_1 + 4;
        param_2 = param_2 + 1;
      } while (uVar6 < param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    uVar5 = 0;
    do {
      if (0 < (int)param_6) {
        uVar6 = 0;
        pfVar2 = param_3;
        do {
          fVar10 = pfVar2[(int)param_5];
          if (0 < (int)param_5) {
            uVar4 = 0;
            do {
              fVar10 = fVar10 + (float)(int)param_1[uVar4] * pfVar2[uVar4];
              uVar4 = uVar4 + 1;
            } while (param_5 != uVar4);
          }
          iVar3 = (int)(long)(float)(int)fVar10;
          if (iVar3 < -0x7fff) {
            iVar3 = -0x8000;
          }
          if (0x7ffe < iVar3) {
            iVar3 = 0x7fff;
          }
          *(short *)((long)param_2 + uVar6 * 2) = (short)iVar3;
          uVar6 = uVar6 + 1;
          pfVar2 = (float *)((long)pfVar2 +
                            (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2) +
                            4);
        } while (uVar6 != param_6);
      }
      uVar5 = uVar5 + 1;
      param_2 = (undefined8 *)((long)param_2 + (long)(int)param_6 * 2);
      param_1 = (short *)((long)param_1 +
                         (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
    } while (uVar5 != param_4);
  }
  return;
}



/* Entry: 109a7622c; end: 109a76553;  */

void FUN_109a7622c(int *param_1,undefined4 *param_2,double *param_3,uint param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  if ((param_5 == 2) && (param_6 == 2)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar10 = param_3[3];
      dVar11 = param_3[4];
      dVar12 = param_3[5];
      do {
        dVar13 = (double)(param_1 + uVar2)[1];
        dVar14 = (double)param_1[uVar2];
        param_2[uVar2] = (int)(long)(double)(long)(dVar9 + dVar8 * dVar13 + dVar14 * dVar7);
        (param_2 + uVar2)[1] = (int)(long)(double)(long)(dVar12 + dVar11 * dVar13 + dVar14 * dVar10)
        ;
        uVar2 = uVar2 + 2;
      } while (uVar2 < param_4 << 1);
    }
  }
  else if ((param_5 == 3) && (param_6 == 3)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar10 = param_3[3];
      dVar11 = param_3[4];
      dVar12 = param_3[5];
      dVar13 = param_3[6];
      dVar14 = param_3[7];
      dVar15 = param_3[8];
      dVar16 = param_3[9];
      dVar17 = param_3[10];
      dVar18 = param_3[0xb];
      piVar3 = param_1 + 2;
      puVar4 = param_2 + 2;
      do {
        dVar19 = (double)piVar3[-2];
        dVar20 = (double)piVar3[-1];
        dVar21 = (double)*piVar3;
        puVar4[-2] = (int)(long)(double)(long)(dVar10 + dVar8 * dVar20 + dVar19 * dVar7 +
                                                        dVar21 * dVar9);
        puVar4[-1] = (int)(long)(double)(long)(dVar14 + dVar12 * dVar20 + dVar19 * dVar11 +
                                                        dVar21 * dVar13);
        *puVar4 = (int)(long)(double)(long)(dVar18 + dVar16 * dVar20 + dVar19 * dVar15 +
                                                     dVar21 * dVar17);
        uVar2 = uVar2 + 3;
        piVar3 = piVar3 + 3;
        puVar4 = puVar4 + 3;
      } while (uVar2 < param_4 * 3);
    }
  }
  else if ((param_5 == 3) && (param_6 == 1)) {
    if (0 < (int)param_4) {
      dVar7 = *param_3;
      dVar8 = param_3[1];
      uVar2 = (ulong)param_4;
      dVar9 = param_3[2];
      dVar10 = param_3[3];
      do {
        *param_2 = (int)(long)(double)(long)(dVar10 + dVar8 * (double)param_1[1] +
                                                      (double)*param_1 * dVar7 +
                                                      (double)param_1[2] * dVar9);
        param_1 = param_1 + 3;
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
  }
  else if ((param_5 == 4) && (param_6 == 4)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar10 = param_3[3];
      dVar11 = param_3[4];
      dVar12 = param_3[5];
      dVar13 = param_3[6];
      dVar14 = param_3[7];
      dVar15 = param_3[8];
      dVar16 = param_3[9];
      dVar17 = param_3[10];
      dVar18 = param_3[0xb];
      dVar19 = param_3[0xc];
      dVar20 = param_3[0xd];
      dVar21 = param_3[0xe];
      dVar22 = param_3[0xf];
      dVar23 = param_3[0x10];
      dVar24 = param_3[0x11];
      dVar25 = param_3[0x12];
      dVar26 = param_3[0x13];
      piVar3 = param_1 + 2;
      puVar4 = param_2 + 2;
      do {
        dVar27 = (double)piVar3[-2];
        dVar28 = (double)piVar3[-1];
        dVar29 = (double)*piVar3;
        dVar30 = (double)piVar3[1];
        puVar4[-2] = (int)(long)(double)(long)(dVar11 + dVar8 * dVar28 + dVar27 * dVar7 +
                                                        dVar29 * dVar9 + dVar30 * dVar10);
        puVar4[-1] = (int)(long)(double)(long)(dVar16 + dVar13 * dVar28 + dVar27 * dVar12 +
                                                        dVar29 * dVar14 + dVar30 * dVar15);
        *puVar4 = (int)(long)(double)(long)(dVar21 + dVar18 * dVar28 + dVar27 * dVar17 +
                                                     dVar29 * dVar19 + dVar30 * dVar20);
        puVar4[1] = (int)(long)(double)(long)(dVar26 + dVar23 * dVar28 + dVar27 * dVar22 +
                                                       dVar29 * dVar24 + dVar30 * dVar25);
        uVar2 = uVar2 + 4;
        piVar3 = piVar3 + 4;
        puVar4 = puVar4 + 4;
      } while (uVar2 < param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    uVar1 = 0;
    do {
      if (0 < (int)param_6) {
        uVar2 = 0;
        pdVar5 = param_3;
        do {
          dVar7 = pdVar5[(int)param_5];
          if (0 < (int)param_5) {
            uVar6 = 0;
            do {
              dVar7 = dVar7 + (double)param_1[uVar6] * pdVar5[uVar6];
              uVar6 = uVar6 + 1;
            } while (param_5 != uVar6);
          }
          param_2[uVar2] = (int)(long)(double)(long)dVar7;
          uVar2 = uVar2 + 1;
          pdVar5 = (double *)
                   ((long)pdVar5 +
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3) + 8);
        } while (uVar2 != param_6);
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + (int)param_6;
      param_1 = (int *)((long)param_1 +
                       (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
    } while (uVar1 != param_4);
  }
  return;
}



/* Entry: 109a76554; end: 109a771eb;  */

void FUN_109a76554(float *param_1,float *param_2,float *param_3,uint param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((param_5 == 2) && (param_6 == 2)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      do {
        fVar7 = param_1[uVar2];
        fVar8 = (param_1 + uVar2)[1];
        fVar10 = param_3[3];
        fVar9 = param_3[4];
        fVar11 = param_3[5];
        param_2[uVar2] = param_3[2] + fVar8 * param_3[1] + fVar7 * *param_3;
        (param_2 + uVar2)[1] = fVar11 + fVar8 * fVar9 + fVar7 * fVar10;
        uVar2 = uVar2 + 2;
      } while (uVar2 < param_4 << 1);
    }
  }
  else if ((param_5 == 3) && (param_6 == 3)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      param_1 = param_1 + 1;
      pfVar3 = param_2 + 2;
      do {
        fVar7 = param_1[-1];
        fVar8 = *param_1;
        fVar9 = param_1[1];
        fVar10 = param_3[8];
        fVar11 = param_3[9];
        fVar15 = param_3[10];
        fVar14 = param_3[0xb];
        *(ulong *)(pfVar3 + -2) =
             CONCAT44(param_3[7] + param_3[5] * fVar8 + param_3[4] * fVar7 + param_3[6] * fVar9,
                      param_3[3] + param_3[1] * fVar8 + *param_3 * fVar7 + param_3[2] * fVar9);
        *pfVar3 = fVar14 + fVar8 * fVar11 + fVar7 * fVar10 + fVar9 * fVar15;
        uVar2 = uVar2 + 3;
        param_1 = param_1 + 3;
        pfVar3 = pfVar3 + 3;
      } while (uVar2 < param_4 * 3);
    }
  }
  else if ((param_5 == 3) && (param_6 == 1)) {
    if (0 < (int)param_4) {
      uVar2 = (ulong)param_4;
      do {
        *param_2 = param_3[1] * param_1[1] + *param_1 * *param_3 + param_1[2] * param_3[2] +
                   param_3[3];
        param_1 = param_1 + 3;
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
  }
  else if ((param_5 == 4) && (param_6 == 4)) {
    if (0 < (int)param_4) {
      uVar2 = 0;
      pfVar3 = param_1 + 2;
      pfVar4 = param_2 + 2;
      do {
        fVar7 = pfVar3[-2];
        fVar8 = pfVar3[-1];
        fVar10 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar11 = param_3[5];
        fVar9 = param_3[6];
        fVar12 = param_3[7];
        fVar15 = param_3[8];
        fVar13 = param_3[9];
        pfVar4[-2] = param_3[4] +
                     fVar8 * param_3[1] + fVar7 * *param_3 + fVar10 * param_3[2] +
                     fVar14 * param_3[3];
        pfVar4[-1] = fVar13 + fVar8 * fVar9 + fVar7 * fVar11 + fVar10 * fVar12 + fVar14 * fVar15;
        fVar12 = param_3[0xf];
        fVar15 = param_3[0x10];
        fVar13 = param_3[0x11];
        fVar9 = param_3[0x12];
        fVar11 = param_3[0x13];
        *pfVar4 = param_3[0xe] +
                  fVar8 * param_3[0xb] + fVar7 * param_3[10] + fVar10 * param_3[0xc] +
                  fVar14 * param_3[0xd];
        pfVar4[1] = fVar11 + fVar8 * fVar15 + fVar7 * fVar12 + fVar10 * fVar13 + fVar14 * fVar9;
        uVar2 = uVar2 + 4;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (uVar2 < param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    uVar1 = 0;
    uVar2 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    do {
      if (0 < (int)param_6) {
        uVar5 = 0;
        pfVar3 = param_3;
        do {
          fVar7 = pfVar3[(int)param_5];
          if (0 < (int)param_5) {
            lVar6 = 0;
            do {
              fVar7 = fVar7 + *(float *)((long)param_1 + lVar6) * *(float *)((long)pfVar3 + lVar6);
              lVar6 = lVar6 + 4;
            } while ((ulong)param_5 << 2 != lVar6);
          }
          param_2[uVar5] = fVar7;
          uVar5 = uVar5 + 1;
          pfVar3 = (float *)((long)pfVar3 + uVar2 + 4);
        } while (uVar5 != param_6);
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + (int)param_6;
      param_1 = (float *)((long)param_1 + uVar2);
    } while (uVar1 != param_4);
  }
  return;
}



/* Entry: 109a771ec; end: 109a77b4f;  */

void FUN_109a771ec(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  undefined4 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  undefined4 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined4 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 auStack_160 [34];
  
  (**(code **)(*param_1 + 0x10))();
  if ((int)param_1 == 0) {
    uStack_210 = 0x42ff0000;
    puStack_1d0 = &uStack_208;
    uStack_204 = 0;
    uStack_200 = 0;
    iStack_20c = 0;
    uStack_208 = 0;
    lStack_1d8 = 0;
    uStack_1dc = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    puStack_1c8 = &uStack_1c0;
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_210,0xffffffff);
    uStack_2d0 = (undefined4)*param_3;
    iStack_2cc = (int)((ulong)*param_3 >> 0x20);
    uStack_330 = (undefined4)*param_4;
    iStack_32c = (int)((ulong)*param_4 >> 0x20);
    FUN_109a84930(&uStack_270,&uStack_210,&uStack_2d0,&uStack_330);
    uStack_2d0 = 0x42ff0000;
    puStack_290 = &uStack_2c8;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    iStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2a4 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_330 = 0x42ff0000;
    puStack_2f0 = &uStack_328;
    uStack_324 = 0;
    uStack_320 = 0;
    iStack_32c = 0;
    uStack_328 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_304 = 0;
    uStack_30c = 0;
    uStack_308 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    puStack_2e8 = &uStack_2e0;
    puStack_288 = &uStack_280;
    FUN_109a82eb0(0x3ff0000000000000,0x3ff0000000000000,&uStack_1b0,&PTR_PTR_1132e8ef0,0,&uStack_270
                  ,&uStack_2d0,&uStack_330,&uStack_350);
    FUN_109a77b50(param_5,&uStack_1b0);
    FUN_10918eb6c(&uStack_1b0);
    if (lStack_2f8 != 0) {
      piVar1 = (int *)(lStack_2f8 + 0x14);
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
        func_0x000109a848d4(&uStack_330);
      }
    }
    lStack_2f8 = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    if (0 < iStack_32c) {
      lVar6 = 0;
      do {
        puStack_2f0[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_32c);
    }
    if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
      _free(puStack_2e8[-1]);
    }
    if (lStack_298 != 0) {
      piVar1 = (int *)(lStack_298 + 0x14);
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
        func_0x000109a848d4(&uStack_2d0);
      }
    }
    lStack_298 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    if (0 < iStack_2cc) {
      lVar6 = 0;
      do {
        puStack_290[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_2cc);
    }
    if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
      _free(puStack_288[-1]);
    }
    if (lStack_238 != 0) {
      piVar1 = (int *)(lStack_238 + 0x14);
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
        func_0x000109a848d4(&uStack_270);
      }
    }
    lStack_238 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    if (0 < iStack_26c) {
      lVar6 = 0;
      do {
        puStack_230[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_26c);
    }
    if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
      _free(puStack_228[-1]);
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
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
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < iStack_20c) {
      lVar6 = 0;
      do {
        puStack_1d0[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_20c);
    }
    if (puStack_1c8 == &uStack_1c0 || puStack_1c8 == (undefined8 *)0x0) {
      return;
    }
    uVar5 = puStack_1c8[-1];
  }
  else {
    uStack_210 = 0x42ff0000;
    puStack_1d0 = &uStack_208;
    uStack_204 = 0;
    uStack_200 = 0;
    iStack_20c = 0;
    uStack_208 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1e4 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_270 = 0x42ff0000;
    puStack_230 = &uStack_268;
    uStack_264 = 0;
    uStack_260 = 0;
    iStack_26c = 0;
    uStack_268 = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_2d0 = 0x42ff0000;
    puStack_290 = &uStack_2c8;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    iStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2a4 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    puStack_288 = &uStack_280;
    puStack_228 = &uStack_220;
    puStack_1c8 = &uStack_1c0;
    FUN_109a82eb0(param_2[0x26],param_2[0x27],&uStack_1b0,*param_2,*(undefined4 *)(param_2 + 1),
                  &uStack_210,&uStack_270,&uStack_2d0,param_2 + 0x28);
    FUN_109a77b50(param_5,&uStack_1b0);
    FUN_10918eb6c(&uStack_1b0);
    if (lStack_298 != 0) {
      piVar1 = (int *)(lStack_298 + 0x14);
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
        func_0x000109a848d4(&uStack_2d0);
      }
    }
    lStack_298 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    if (0 < iStack_2cc) {
      lVar6 = 0;
      do {
        puStack_290[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_2cc);
    }
    if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
      _free(puStack_288[-1]);
    }
    if (lStack_238 != 0) {
      piVar1 = (int *)(lStack_238 + 0x14);
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
        func_0x000109a848d4(&uStack_270);
      }
    }
    lStack_238 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    if (0 < iStack_26c) {
      lVar6 = 0;
      do {
        puStack_230[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_26c);
    }
    if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
      _free(puStack_228[-1]);
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
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
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < iStack_20c) {
      lVar6 = 0;
      do {
        puStack_1d0[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_20c);
    }
    if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
      _free(puStack_1c8[-1]);
    }
    if (param_2[4] != 0) {
      uStack_210 = (undefined4)*param_3;
      iStack_20c = (int)((ulong)*param_3 >> 0x20);
      uStack_270 = (undefined4)*param_4;
      iStack_26c = (int)((ulong)*param_4 >> 0x20);
      FUN_109a84930(&uStack_1b0,param_2 + 2,&uStack_210,&uStack_270);
      if (*(long *)(param_5 + 0x48) != 0) {
        piVar1 = (int *)(*(long *)(param_5 + 0x48) + 0x14);
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
          func_0x000109a848d4(param_5 + 0x10);
        }
      }
      *(undefined8 *)(param_5 + 0x48) = 0;
      *(undefined8 *)(param_5 + 0x28) = 0;
      *(undefined8 *)(param_5 + 0x20) = 0;
      *(undefined8 *)(param_5 + 0x38) = 0;
      *(undefined8 *)(param_5 + 0x30) = 0;
      if (0 < *(int *)(param_5 + 0x14)) {
        lVar6 = 0;
        lVar8 = *(long *)(param_5 + 0x50);
        do {
          *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_5 + 0x14));
      }
      *(undefined8 *)(param_5 + 0x18) = uStack_1a8;
      *(ulong *)(param_5 + 0x10) = CONCAT44(iStack_1ac,uStack_1b0);
      *(undefined8 *)(param_5 + 0x28) = uStack_198;
      *(undefined8 *)(param_5 + 0x20) = uStack_1a0;
      *(undefined8 *)(param_5 + 0x38) = uStack_188;
      *(undefined8 *)(param_5 + 0x30) = uStack_190;
      *(undefined8 *)(param_5 + 0x48) = uStack_178;
      *(undefined8 *)(param_5 + 0x40) = uStack_180;
      puVar9 = *(undefined8 **)(param_5 + 0x58);
      puVar7 = (undefined8 *)(param_5 + 0x60);
      if (puVar9 != puVar7) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(param_5 + 0x50) = param_5 + 0x18;
        *(undefined8 **)(param_5 + 0x58) = puVar7;
        puVar9 = puVar7;
      }
      if (iStack_1ac < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *puVar9 = *puStack_168;
        puVar9[1] = puStack_168[1];
        uStack_1b0 = 0x42ff0000;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_168 != auStack_160) {
          _free(puStack_168[-1]);
        }
      }
      else {
        *(undefined8 *)(param_5 + 0x50) = uStack_170;
        *(undefined8 **)(param_5 + 0x58) = puStack_168;
      }
    }
    if (param_2[0x10] != 0) {
      uStack_210 = (undefined4)*param_3;
      iStack_20c = (int)((ulong)*param_3 >> 0x20);
      uStack_270 = (undefined4)*param_4;
      iStack_26c = (int)((ulong)*param_4 >> 0x20);
      FUN_109a84930(&uStack_1b0,param_2 + 0xe,&uStack_210,&uStack_270);
      if (*(long *)(param_5 + 0xa8) != 0) {
        piVar1 = (int *)(*(long *)(param_5 + 0xa8) + 0x14);
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
          func_0x000109a848d4(param_5 + 0x70);
        }
      }
      *(undefined8 *)(param_5 + 0xa8) = 0;
      *(undefined8 *)(param_5 + 0x88) = 0;
      *(undefined8 *)(param_5 + 0x80) = 0;
      *(undefined8 *)(param_5 + 0x98) = 0;
      *(undefined8 *)(param_5 + 0x90) = 0;
      if (0 < *(int *)(param_5 + 0x74)) {
        lVar6 = 0;
        lVar8 = *(long *)(param_5 + 0xb0);
        do {
          *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_5 + 0x74));
      }
      *(undefined8 *)(param_5 + 0x78) = uStack_1a8;
      *(ulong *)(param_5 + 0x70) = CONCAT44(iStack_1ac,uStack_1b0);
      *(undefined8 *)(param_5 + 0x88) = uStack_198;
      *(undefined8 *)(param_5 + 0x80) = uStack_1a0;
      *(undefined8 *)(param_5 + 0x98) = uStack_188;
      *(undefined8 *)(param_5 + 0x90) = uStack_190;
      *(undefined8 *)(param_5 + 0xa8) = uStack_178;
      *(undefined8 *)(param_5 + 0xa0) = uStack_180;
      puVar9 = *(undefined8 **)(param_5 + 0xb8);
      puVar7 = (undefined8 *)(param_5 + 0xc0);
      if (puVar9 != puVar7) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(param_5 + 0xb0) = param_5 + 0x78;
        *(undefined8 **)(param_5 + 0xb8) = puVar7;
        puVar9 = puVar7;
      }
      if (iStack_1ac < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *puVar9 = *puStack_168;
        puVar9[1] = puStack_168[1];
        uStack_1b0 = 0x42ff0000;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_168 != auStack_160) {
          _free(puStack_168[-1]);
        }
      }
      else {
        *(undefined8 *)(param_5 + 0xb0) = uStack_170;
        *(undefined8 **)(param_5 + 0xb8) = puStack_168;
      }
    }
    if (param_2[0x1c] == 0) {
      return;
    }
    uStack_210 = (undefined4)*param_3;
    iStack_20c = (int)((ulong)*param_3 >> 0x20);
    uStack_270 = (undefined4)*param_4;
    iStack_26c = (int)((ulong)*param_4 >> 0x20);
    FUN_109a84930(&uStack_1b0,param_2 + 0x1a,&uStack_210,&uStack_270);
    if (*(long *)(param_5 + 0x108) != 0) {
      piVar1 = (int *)(*(long *)(param_5 + 0x108) + 0x14);
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
        func_0x000109a848d4(param_5 + 0xd0);
      }
    }
    *(undefined8 *)(param_5 + 0x108) = 0;
    *(undefined8 *)(param_5 + 0xe8) = 0;
    *(undefined8 *)(param_5 + 0xe0) = 0;
    *(undefined8 *)(param_5 + 0xf8) = 0;
    *(undefined8 *)(param_5 + 0xf0) = 0;
    if (0 < *(int *)(param_5 + 0xd4)) {
      lVar6 = 0;
      lVar8 = *(long *)(param_5 + 0x110);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_5 + 0xd4));
    }
    *(undefined8 *)(param_5 + 0xd8) = uStack_1a8;
    *(ulong *)(param_5 + 0xd0) = CONCAT44(iStack_1ac,uStack_1b0);
    *(undefined8 *)(param_5 + 0xe8) = uStack_198;
    *(undefined8 *)(param_5 + 0xe0) = uStack_1a0;
    *(undefined8 *)(param_5 + 0xf8) = uStack_188;
    *(undefined8 *)(param_5 + 0xf0) = uStack_190;
    *(undefined8 *)(param_5 + 0x108) = uStack_178;
    *(undefined8 *)(param_5 + 0x100) = uStack_180;
    puVar9 = *(undefined8 **)(param_5 + 0x118);
    puVar7 = (undefined8 *)(param_5 + 0x120);
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      *(long *)(param_5 + 0x110) = param_5 + 0xd8;
      *(undefined8 **)(param_5 + 0x118) = puVar7;
      puVar9 = puVar7;
    }
    if (2 < iStack_1ac) {
      *(undefined8 *)(param_5 + 0x110) = uStack_170;
      *(undefined8 **)(param_5 + 0x118) = puStack_168;
      return;
    }
    puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    *puVar9 = *puStack_168;
    puVar9[1] = puStack_168[1];
    uStack_1b0 = 0x42ff0000;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    if (puStack_168 == auStack_160) {
      return;
    }
    uVar5 = puStack_168[-1];
  }
  _free(uVar5);
  return;
}



/* Entry: 109a77b50; end: 109a77e97;  */

undefined8 * FUN_109a77b50(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar4;
  if (param_1[9] != 0) {
    piVar9 = (int *)(param_1[9] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar6 = param_1[10];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  piVar9 = (int *)((long)param_2 + 0x14);
  iVar3 = *piVar9;
  uVar4 = param_2[2];
  uVar11 = param_2[5];
  uVar10 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar11;
  param_1[4] = uVar10;
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  puVar7 = (undefined8 *)param_1[0xb];
  puVar8 = param_1 + 0xc;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[10] = param_1 + 3;
    param_1[0xb] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0xb];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = puVar8;
    param_2[10] = param_2 + 3;
    param_2[0xb] = param_2 + 0xc;
  }
  *(undefined4 *)(param_2 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  if (param_1[0x15] != 0) {
    piVar9 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar6 = param_1[0x16];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  piVar9 = (int *)((long)param_2 + 0x74);
  iVar3 = *piVar9;
  uVar4 = param_2[0xe];
  uVar11 = param_2[0x11];
  uVar10 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar11;
  param_1[0x10] = uVar10;
  uVar4 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar4;
  uVar4 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar4;
  puVar7 = (undefined8 *)param_1[0x17];
  puVar8 = param_1 + 0x18;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[0x16] = param_1 + 0xf;
    param_1[0x17] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x17];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = puVar8;
    param_2[0x16] = param_2 + 0xf;
    param_2[0x17] = param_2 + 0x18;
  }
  *(undefined4 *)(param_2 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  *(undefined8 *)((long)param_2 + 0x9c) = 0;
  *(undefined8 *)((long)param_2 + 0x94) = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  if (param_1[0x21] != 0) {
    piVar9 = (int *)(param_1[0x21] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1a);
    }
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0 < *(int *)((long)param_1 + 0xd4)) {
    lVar5 = 0;
    lVar6 = param_1[0x22];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xd4));
  }
  piVar9 = (int *)((long)param_2 + 0xd4);
  iVar3 = *piVar9;
  uVar4 = param_2[0x1a];
  uVar11 = param_2[0x1d];
  uVar10 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar4;
  param_1[0x1d] = uVar11;
  param_1[0x1c] = uVar10;
  uVar4 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar4;
  uVar4 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar4;
  puVar7 = (undefined8 *)param_1[0x23];
  puVar8 = param_1 + 0x24;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[0x22] = param_1 + 0x1b;
    param_1[0x23] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x23];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = puVar8;
    param_2[0x22] = param_2 + 0x1b;
    param_2[0x23] = param_2 + 0x24;
  }
  *(undefined4 *)(param_2 + 0x1a) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xdc) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0xec) = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  *(undefined8 *)((long)param_2 + 0xfc) = 0;
  *(undefined8 *)((long)param_2 + 0xf4) = 0;
  param_2[0x21] = 0;
  param_2[0x20] = 0;
  uVar10 = param_2[0x27];
  uVar4 = param_2[0x26];
  uVar11 = param_2[0x28];
  uVar13 = param_2[0x2b];
  uVar12 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar11;
  param_1[0x2b] = uVar13;
  param_1[0x2a] = uVar12;
  param_1[0x27] = uVar10;
  param_1[0x26] = uVar4;
  return param_1;
}



/* Entry: 109a77e98; end: 109a787a7;  */

void FUN_109a77e98(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_32c;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 auStack_160 [34];
  
  (**(code **)(*param_1 + 0x10))();
  if ((int)param_1 == 0) {
    uStack_210 = 0x42ff0000;
    lStack_1d0 = (long)&uStack_20c + 4;
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_20c = 0;
    lStack_1d8 = 0;
    uStack_1dc = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    puStack_1c8 = &uStack_1c0;
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_210,0xffffffff);
    FUN_109a856e8(&uStack_270,&uStack_210,param_3);
    uStack_2d0 = 0x42ff0000;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2cc = 0;
    lStack_290 = (long)&uStack_2cc + 4;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2a4 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_330 = 0x42ff0000;
    lStack_2f0 = (long)&uStack_32c + 4;
    uStack_324 = 0;
    uStack_320 = 0;
    uStack_32c = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_304 = 0;
    uStack_30c = 0;
    uStack_308 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    puStack_2e8 = &uStack_2e0;
    puStack_288 = &uStack_280;
    FUN_109a82eb0(0x3ff0000000000000,0x3ff0000000000000,&uStack_1b0,&PTR_PTR_1132e8ef0,0,&uStack_270
                  ,&uStack_2d0,&uStack_330,&uStack_350);
    FUN_109a77b50(param_4,&uStack_1b0);
    FUN_10918eb6c(&uStack_1b0);
    if (lStack_2f8 != 0) {
      piVar1 = (int *)(lStack_2f8 + 0x14);
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
        func_0x000109a848d4(&uStack_330);
      }
    }
    lStack_2f8 = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    if (0 < (int)uStack_32c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_2f0 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_32c);
    }
    if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
      _free(puStack_2e8[-1]);
    }
    if (lStack_298 != 0) {
      piVar1 = (int *)(lStack_298 + 0x14);
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
        func_0x000109a848d4(&uStack_2d0);
      }
    }
    lStack_298 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    if (0 < (int)uStack_2cc) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_290 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_2cc);
    }
    if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
      _free(puStack_288[-1]);
    }
    if (lStack_238 != 0) {
      piVar1 = (int *)(lStack_238 + 0x14);
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
        func_0x000109a848d4(&uStack_270);
      }
    }
    lStack_238 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    if (0 < (int)uStack_26c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_230 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_26c);
    }
    if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
      _free(puStack_228[-1]);
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
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
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < (int)uStack_20c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_1d0 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_20c);
    }
    if (puStack_1c8 == &uStack_1c0 || puStack_1c8 == (undefined8 *)0x0) {
      return;
    }
    uVar5 = puStack_1c8[-1];
  }
  else {
    uStack_210 = 0x42ff0000;
    lStack_1d0 = (long)&uStack_20c + 4;
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_20c = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1e4 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_270 = 0x42ff0000;
    lStack_230 = (long)&uStack_26c + 4;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_26c = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_2d0 = 0x42ff0000;
    lStack_290 = (long)&uStack_2cc + 4;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2cc = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2a4 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    puStack_288 = &uStack_280;
    puStack_228 = &uStack_220;
    puStack_1c8 = &uStack_1c0;
    FUN_109a82eb0(param_2[0x26],param_2[0x27],&uStack_1b0,*param_2,*(undefined4 *)(param_2 + 1),
                  &uStack_210,&uStack_270,&uStack_2d0,param_2 + 0x28);
    FUN_109a77b50(param_4,&uStack_1b0);
    FUN_10918eb6c(&uStack_1b0);
    if (lStack_298 != 0) {
      piVar1 = (int *)(lStack_298 + 0x14);
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
        func_0x000109a848d4(&uStack_2d0);
      }
    }
    lStack_298 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    if (0 < (int)uStack_2cc) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_290 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_2cc);
    }
    if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
      _free(puStack_288[-1]);
    }
    if (lStack_238 != 0) {
      piVar1 = (int *)(lStack_238 + 0x14);
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
        func_0x000109a848d4(&uStack_270);
      }
    }
    lStack_238 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    if (0 < (int)uStack_26c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_230 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_26c);
    }
    if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
      _free(puStack_228[-1]);
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
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
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < (int)uStack_20c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_1d0 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_20c);
    }
    if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
      _free(puStack_1c8[-1]);
    }
    if (param_2[4] != 0) {
      FUN_109a856e8(&uStack_1b0,param_2 + 2,param_3);
      if (*(long *)(param_4 + 0x48) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0x48) + 0x14);
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
          func_0x000109a848d4(param_4 + 0x10);
        }
      }
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined8 *)(param_4 + 0x28) = 0;
      *(undefined8 *)(param_4 + 0x20) = 0;
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      if (0 < *(int *)(param_4 + 0x14)) {
        lVar6 = 0;
        lVar8 = *(long *)(param_4 + 0x50);
        do {
          *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_4 + 0x14));
      }
      *(undefined8 *)(param_4 + 0x18) = uStack_1a8;
      *(ulong *)(param_4 + 0x10) = CONCAT44(iStack_1ac,uStack_1b0);
      *(undefined8 *)(param_4 + 0x28) = uStack_198;
      *(undefined8 *)(param_4 + 0x20) = uStack_1a0;
      *(undefined8 *)(param_4 + 0x38) = uStack_188;
      *(undefined8 *)(param_4 + 0x30) = uStack_190;
      *(undefined8 *)(param_4 + 0x48) = uStack_178;
      *(undefined8 *)(param_4 + 0x40) = uStack_180;
      puVar9 = *(undefined8 **)(param_4 + 0x58);
      puVar7 = (undefined8 *)(param_4 + 0x60);
      if (puVar9 != puVar7) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(param_4 + 0x50) = param_4 + 0x18;
        *(undefined8 **)(param_4 + 0x58) = puVar7;
        puVar9 = puVar7;
      }
      if (iStack_1ac < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *puVar9 = *puStack_168;
        puVar9[1] = puStack_168[1];
        uStack_1b0 = 0x42ff0000;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_168 != auStack_160) {
          _free(puStack_168[-1]);
        }
      }
      else {
        *(undefined8 *)(param_4 + 0x50) = uStack_170;
        *(undefined8 **)(param_4 + 0x58) = puStack_168;
      }
    }
    if (param_2[0x10] != 0) {
      FUN_109a856e8(&uStack_1b0,param_2 + 0xe,param_3);
      if (*(long *)(param_4 + 0xa8) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0xa8) + 0x14);
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
          func_0x000109a848d4(param_4 + 0x70);
        }
      }
      *(undefined8 *)(param_4 + 0xa8) = 0;
      *(undefined8 *)(param_4 + 0x88) = 0;
      *(undefined8 *)(param_4 + 0x80) = 0;
      *(undefined8 *)(param_4 + 0x98) = 0;
      *(undefined8 *)(param_4 + 0x90) = 0;
      if (0 < *(int *)(param_4 + 0x74)) {
        lVar6 = 0;
        lVar8 = *(long *)(param_4 + 0xb0);
        do {
          *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_4 + 0x74));
      }
      *(undefined8 *)(param_4 + 0x78) = uStack_1a8;
      *(ulong *)(param_4 + 0x70) = CONCAT44(iStack_1ac,uStack_1b0);
      *(undefined8 *)(param_4 + 0x88) = uStack_198;
      *(undefined8 *)(param_4 + 0x80) = uStack_1a0;
      *(undefined8 *)(param_4 + 0x98) = uStack_188;
      *(undefined8 *)(param_4 + 0x90) = uStack_190;
      *(undefined8 *)(param_4 + 0xa8) = uStack_178;
      *(undefined8 *)(param_4 + 0xa0) = uStack_180;
      puVar9 = *(undefined8 **)(param_4 + 0xb8);
      puVar7 = (undefined8 *)(param_4 + 0xc0);
      if (puVar9 != puVar7) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(param_4 + 0xb0) = param_4 + 0x78;
        *(undefined8 **)(param_4 + 0xb8) = puVar7;
        puVar9 = puVar7;
      }
      if (iStack_1ac < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *puVar9 = *puStack_168;
        puVar9[1] = puStack_168[1];
        uStack_1b0 = 0x42ff0000;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_168 != auStack_160) {
          _free(puStack_168[-1]);
        }
      }
      else {
        *(undefined8 *)(param_4 + 0xb0) = uStack_170;
        *(undefined8 **)(param_4 + 0xb8) = puStack_168;
      }
    }
    if (param_2[0x1c] == 0) {
      return;
    }
    FUN_109a856e8(&uStack_1b0,param_2 + 0x1a,param_3);
    if (*(long *)(param_4 + 0x108) != 0) {
      piVar1 = (int *)(*(long *)(param_4 + 0x108) + 0x14);
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
        func_0x000109a848d4(param_4 + 0xd0);
      }
    }
    *(undefined8 *)(param_4 + 0x108) = 0;
    *(undefined8 *)(param_4 + 0xe8) = 0;
    *(undefined8 *)(param_4 + 0xe0) = 0;
    *(undefined8 *)(param_4 + 0xf8) = 0;
    *(undefined8 *)(param_4 + 0xf0) = 0;
    if (0 < *(int *)(param_4 + 0xd4)) {
      lVar6 = 0;
      lVar8 = *(long *)(param_4 + 0x110);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_4 + 0xd4));
    }
    *(undefined8 *)(param_4 + 0xd8) = uStack_1a8;
    *(ulong *)(param_4 + 0xd0) = CONCAT44(iStack_1ac,uStack_1b0);
    *(undefined8 *)(param_4 + 0xe8) = uStack_198;
    *(undefined8 *)(param_4 + 0xe0) = uStack_1a0;
    *(undefined8 *)(param_4 + 0xf8) = uStack_188;
    *(undefined8 *)(param_4 + 0xf0) = uStack_190;
    *(undefined8 *)(param_4 + 0x108) = uStack_178;
    *(undefined8 *)(param_4 + 0x100) = uStack_180;
    puVar9 = *(undefined8 **)(param_4 + 0x118);
    puVar7 = (undefined8 *)(param_4 + 0x120);
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      *(long *)(param_4 + 0x110) = param_4 + 0xd8;
      *(undefined8 **)(param_4 + 0x118) = puVar7;
      puVar9 = puVar7;
    }
    if (2 < iStack_1ac) {
      *(undefined8 *)(param_4 + 0x110) = uStack_170;
      *(undefined8 **)(param_4 + 0x118) = puStack_168;
      return;
    }
    puVar7 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    *puVar9 = *puStack_168;
    puVar9[1] = puStack_168[1];
    uStack_1b0 = 0x42ff0000;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    if (puStack_168 == auStack_160) {
      return;
    }
    uVar5 = puStack_168[-1];
  }
  _free(uVar5);
  return;
}



/* Entry: 109a787a8; end: 109a78903;  */

void FUN_109a787a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_d8 = 0x42ff0000;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  lStack_a0 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plVar5 = (long *)*param_2;
  puStack_90 = &uStack_88;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_d8,0xffffffff);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  uStack_70 = param_3;
  puStack_58 = &uStack_d8;
  uStack_40 = param_3;
  FUN_109a91d90();
  FUN_109a293c4(auStack_48,auStack_60,auStack_78,plVar5,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 0x14);
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
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_98 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_d4);
  }
  if (puStack_90 != &uStack_88 && puStack_90 != (undefined8 *)0x0) {
    _free(puStack_90[-1]);
  }
  return;
}



/* Entry: 109a78904; end: 109a78a5f;  */

void FUN_109a78904(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_d8 = 0x42ff0000;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  lStack_a0 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plVar5 = (long *)*param_2;
  puStack_90 = &uStack_88;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_d8,0xffffffff);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  uStack_70 = param_3;
  puStack_58 = &uStack_d8;
  uStack_40 = param_3;
  FUN_109a91d90();
  FUN_109a293c4(auStack_48,auStack_60,auStack_78,plVar5,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 0x14);
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
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_98 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_d4);
  }
  if (puStack_90 != &uStack_88 && puStack_90 != (undefined8 *)0x0) {
    _free(puStack_90[-1]);
  }
  return;
}



/* Entry: 109a78a60; end: 109a78c6f;  */

void FUN_109a78a60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 auStack_100 [2];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  lStack_128 = 0;
  uStack_12c = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puStack_118 = &uStack_110;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_160,0xffffffff);
  uStack_48 = 0;
  puStack_80 = &uStack_e8;
  auStack_58[0] = 0x1010000;
  uStack_60 = 0;
  auStack_70[0] = 0x1010000;
  uStack_e8 = 0x42ff0000;
  lStack_a8 = (long)&uStack_e4 + 4;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  auStack_88[0] = 0x1010000;
  auStack_100[0] = 0x2010000;
  uStack_f0 = 0;
  uStack_f8 = param_3;
  puStack_a0 = &uStack_98;
  puStack_68 = (undefined1 *)&uStack_160;
  uStack_50 = param_3;
  FUN_109a64f8c(0x3ff0000000000000,0,auStack_58,auStack_70,auStack_88,auStack_100,0);
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
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
      func_0x000109a848d4(&uStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (0 < (int)uStack_e4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
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
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < (int)uStack_15c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_120 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  return;
}



/* Entry: 109a78c70; end: 109a78dcf;  */

void FUN_109a78c70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_e0 = 0x42ff0000;
  lStack_a0 = (long)&uStack_dc + 4;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  lStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar5 = (long *)*param_2;
  puStack_98 = &uStack_90;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_e0,0xffffffff);
  uStack_40 = 0;
  auStack_50[0] = 0x1010000;
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_78 = param_3;
  puStack_60 = (undefined1 *)&uStack_e0;
  uStack_48 = param_3;
  FUN_109a91d90();
  FUN_109a293c4(auStack_50,auStack_68,auStack_80,plVar5,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_38);
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < (int)uStack_dc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a78dd0; end: 109a78f2b;  */

void FUN_109a78dd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  
  uStack_e0 = 0x42ff0000;
  lStack_a0 = (long)&uStack_dc + 4;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  lStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar5 = (long *)*param_2;
  puStack_98 = &uStack_90;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_e0,0xffffffff);
  uStack_40 = 0;
  auStack_50[0] = 0x1010000;
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  uStack_78 = param_3;
  puStack_60 = (undefined1 *)&uStack_e0;
  uStack_48 = param_3;
  FUN_109a91d90();
  pcStack_38 = FUN_109a27900;
  FUN_109a279fc(auStack_50,auStack_68,auStack_80,plVar5,&pcStack_38,1,9);
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < (int)uStack_dc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a78f2c; end: 109a79087;  */

void FUN_109a78f2c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  
  uStack_e0 = 0x42ff0000;
  lStack_a0 = (long)&uStack_dc + 4;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  lStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar5 = (long *)*param_2;
  puStack_98 = &uStack_90;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_e0,0xffffffff);
  uStack_40 = 0;
  auStack_50[0] = 0x1010000;
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  uStack_78 = param_3;
  puStack_60 = (undefined1 *)&uStack_e0;
  uStack_48 = param_3;
  FUN_109a91d90();
  pcStack_38 = FUN_109a28f7c;
  FUN_109a279fc(auStack_50,auStack_68,auStack_80,plVar5,&pcStack_38,1,10);
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < (int)uStack_dc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a79088; end: 109a791e3;  */

void FUN_109a79088(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_e0 = 0x42ff0000;
  lStack_a0 = (long)&uStack_dc + 4;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  lStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar5 = (long *)*param_2;
  puStack_98 = &uStack_90;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&uStack_e0,0xffffffff);
  uStack_40 = 0;
  auStack_50[0] = 0x1010000;
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  uStack_78 = param_3;
  puStack_60 = (undefined1 *)&uStack_e0;
  uStack_48 = param_3;
  FUN_109a91d90();
  uStack_38 = 0x109a29078;
  FUN_109a279fc(auStack_50,auStack_68,auStack_80,plVar5,&uStack_38,1,0xb);
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < (int)uStack_dc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a791e4; end: 109a7968b;  */

/* WARNING: Removing unreachable block (ram,0x000109a79488) */
/* WARNING: Removing unreachable block (ram,0x000109a7948c) */
/* WARNING: Removing unreachable block (ram,0x000109a79494) */
/* WARNING: Removing unreachable block (ram,0x000109a7949c) */
/* WARNING: Removing unreachable block (ram,0x000109a794a0) */
/* WARNING: Removing unreachable block (ram,0x000109a794c0) */
/* WARNING: Removing unreachable block (ram,0x000109a794c8) */
/* WARNING: Removing unreachable block (ram,0x000109a794dc) */
/* WARNING: Removing unreachable block (ram,0x000109a794ec) */

void FUN_109a791e4(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  plVar5 = (long *)*param_3;
  if (plVar5 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a79250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x68))(plVar5,param_2,param_3,param_4);
    return;
  }
  dStack_78 = 0.0;
  dStack_80 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  uStack_e0._0_4_ = 0x42ff0000;
  puStack_a0 = &uStack_d8;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_e0._4_4_ = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_140._0_4_ = 0x42ff0000;
  puStack_100 = &uStack_138;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_140._4_4_ = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuVar6 = (undefined **)*param_2;
  puStack_f8 = &uStack_f0;
  puStack_98 = &uStack_90;
  if ((ppuVar6 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) {
    puVar7 = param_2 + 2;
    if (&uStack_e0 != puVar7) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e0._0_4_ = *(undefined4 *)puVar7;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_d8 = (undefined4)param_2[3];
        uStack_d4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_90 = *(undefined8 *)param_2[0xb];
        uStack_88 = ((undefined8 *)param_2[0xb])[1];
        uStack_e0._4_4_ = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_e0,puVar7);
      }
      uStack_c8 = (undefined4)param_2[5];
      uStack_c4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_d0 = (undefined4)param_2[4];
      uStack_cc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_b8 = (undefined4)param_2[7];
      uStack_b4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_c0 = (undefined4)param_2[6];
      uStack_bc = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_a8 = param_2[9];
      uStack_b0 = (undefined4)param_2[8];
      uStack_ac = (undefined4)((ulong)param_2[8] >> 0x20);
    }
    uVar8 = param_2[0x26];
    dStack_78 = (double)param_2[0x29];
    dStack_80 = (double)param_2[0x28];
    dStack_68 = (double)param_2[0x2b];
    dStack_70 = (double)param_2[0x2a];
  }
  else {
    uVar8 = 0x3ff0000000000000;
    (**(code **)(*ppuVar6 + 0x18))(ppuVar6,param_2,&uStack_e0,0xffffffff);
  }
  ppuVar6 = (undefined **)*param_3;
  if ((ppuVar6 != &PTR_PTR_1132e8ef8) || ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) {
    lVar9 = 0x3ff0000000000000;
    (**(code **)(*ppuVar6 + 0x18))(ppuVar6,param_3,&uStack_140,0xffffffff);
    goto LAB_109a79330;
  }
  plVar5 = param_3 + 2;
  if (&uStack_140 != plVar5) {
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
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
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (uStack_140._4_4_ < 1) {
      uStack_140._0_4_ = (undefined4)*plVar5;
LAB_109a795fc:
      iVar2 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar2) goto LAB_109a79630;
      uStack_138 = (undefined4)param_3[3];
      uStack_134 = (undefined4)((ulong)param_3[3] >> 0x20);
      puVar7 = (undefined8 *)param_3[0xb];
      *puStack_f8 = *puVar7;
      puStack_f8[1] = puVar7[1];
      uStack_140._4_4_ = iVar2;
    }
    else {
      lVar9 = 0;
      do {
        puStack_100[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_140._4_4_);
      uStack_140._0_4_ = (undefined4)*plVar5;
      if (uStack_140._4_4_ < 3) goto LAB_109a795fc;
LAB_109a79630:
      func_0x000109a84868(&uStack_140,plVar5);
    }
    uStack_128 = (undefined4)param_3[5];
    uStack_124 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_130 = (undefined4)param_3[4];
    uStack_12c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_118 = (undefined4)param_3[7];
    uStack_114 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_120 = (undefined4)param_3[6];
    uStack_11c = (undefined4)((ulong)param_3[6] >> 0x20);
    lStack_108 = param_3[9];
    uStack_110 = (undefined4)param_3[8];
    uStack_10c = (undefined4)((ulong)param_3[8] >> 0x20);
  }
  lVar9 = param_3[0x26];
  dStack_80 = (double)param_3[0x28] + dStack_80;
  dStack_78 = (double)param_3[0x29] + dStack_78;
  dStack_70 = (double)param_3[0x2a] + dStack_70;
  dStack_68 = (double)param_3[0x2b] + dStack_68;
LAB_109a79330:
  FUN_109a7968c(uVar8,lVar9,param_4,&uStack_e0,&uStack_140,&dStack_80);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
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
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < uStack_140._4_4_) {
    lVar9 = 0;
    do {
      puStack_100[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < uStack_e0._4_4_) {
    lVar9 = 0;
    do {
      puStack_a0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a7968c; end: 109a797bb;  */

void FUN_109a7968c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  uStack_1a0 = 0;
  uStack_198 = 0;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(auStack_190,&PTR_PTR_1132e8ef8,0,param_2,param_3,&uStack_1f0,param_4);
  FUN_109a77b50(param_1,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a797bc; end: 109a7998f;  */

void FUN_109a797bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_90,0xffffffff);
  uStack_f0 = 0x42ff0000;
  lStack_b0 = (long)&uStack_ec + 4;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &uStack_a0;
  FUN_109a7968c(0x3ff0000000000000,0,param_4,&uStack_90,&uStack_f0,param_3);
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
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < (int)uStack_ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_ec);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
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
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a79990; end: 109a79e3b;  */

/* WARNING: Removing unreachable block (ram,0x000109a79c34) */
/* WARNING: Removing unreachable block (ram,0x000109a79c38) */
/* WARNING: Removing unreachable block (ram,0x000109a79c40) */
/* WARNING: Removing unreachable block (ram,0x000109a79c48) */
/* WARNING: Removing unreachable block (ram,0x000109a79c4c) */
/* WARNING: Removing unreachable block (ram,0x000109a79c6c) */
/* WARNING: Removing unreachable block (ram,0x000109a79c74) */
/* WARNING: Removing unreachable block (ram,0x000109a79c88) */
/* WARNING: Removing unreachable block (ram,0x000109a79c98) */

void FUN_109a79990(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  plVar5 = (long *)*param_3;
  if (plVar5 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a799fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x78))(plVar5,param_2,param_3,param_4);
    return;
  }
  dStack_78 = 0.0;
  dStack_80 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  uStack_e0._0_4_ = 0x42ff0000;
  puStack_a0 = &uStack_d8;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_e0._4_4_ = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_140._0_4_ = 0x42ff0000;
  puStack_100 = &uStack_138;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_140._4_4_ = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuVar6 = (undefined **)*param_2;
  puStack_f8 = &uStack_f0;
  puStack_98 = &uStack_90;
  if ((ppuVar6 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) {
    puVar8 = param_2 + 2;
    if (&uStack_e0 != puVar8) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e0._0_4_ = *(undefined4 *)puVar8;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_d8 = (undefined4)param_2[3];
        uStack_d4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_90 = *(undefined8 *)param_2[0xb];
        uStack_88 = ((undefined8 *)param_2[0xb])[1];
        uStack_e0._4_4_ = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_e0,puVar8);
      }
      uStack_c8 = (undefined4)param_2[5];
      uStack_c4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_d0 = (undefined4)param_2[4];
      uStack_cc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_b8 = (undefined4)param_2[7];
      uStack_b4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_c0 = (undefined4)param_2[6];
      uStack_bc = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_a8 = param_2[9];
      uStack_b0 = (undefined4)param_2[8];
      uStack_ac = (undefined4)((ulong)param_2[8] >> 0x20);
    }
    uVar9 = param_2[0x26];
    dStack_78 = (double)param_2[0x29];
    dStack_80 = (double)param_2[0x28];
    dStack_68 = (double)param_2[0x2b];
    dStack_70 = (double)param_2[0x2a];
  }
  else {
    uVar9 = 0x3ff0000000000000;
    (**(code **)(*ppuVar6 + 0x18))(ppuVar6,param_2,&uStack_e0,0xffffffff);
  }
  ppuVar6 = (undefined **)*param_3;
  if ((ppuVar6 != &PTR_PTR_1132e8ef8) || ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) {
    dVar10 = -1.0;
    (**(code **)(*ppuVar6 + 0x18))(ppuVar6,param_3,&uStack_140,0xffffffff);
    goto LAB_109a79adc;
  }
  plVar5 = param_3 + 2;
  if (&uStack_140 != plVar5) {
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
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
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (uStack_140._4_4_ < 1) {
      uStack_140._0_4_ = (undefined4)*plVar5;
LAB_109a79da8:
      iVar2 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar2) goto LAB_109a79ddc;
      uStack_138 = (undefined4)param_3[3];
      uStack_134 = (undefined4)((ulong)param_3[3] >> 0x20);
      puVar8 = (undefined8 *)param_3[0xb];
      *puStack_f8 = *puVar8;
      puStack_f8[1] = puVar8[1];
      uStack_140._4_4_ = iVar2;
    }
    else {
      lVar7 = 0;
      do {
        puStack_100[lVar7] = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < uStack_140._4_4_);
      uStack_140._0_4_ = (undefined4)*plVar5;
      if (uStack_140._4_4_ < 3) goto LAB_109a79da8;
LAB_109a79ddc:
      func_0x000109a84868(&uStack_140,plVar5);
    }
    uStack_128 = (undefined4)param_3[5];
    uStack_124 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_130 = (undefined4)param_3[4];
    uStack_12c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_118 = (undefined4)param_3[7];
    uStack_114 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_120 = (undefined4)param_3[6];
    uStack_11c = (undefined4)((ulong)param_3[6] >> 0x20);
    lStack_108 = param_3[9];
    uStack_110 = (undefined4)param_3[8];
    uStack_10c = (undefined4)((ulong)param_3[8] >> 0x20);
  }
  dVar10 = -(double)param_3[0x26];
  dStack_80 = dStack_80 - (double)param_3[0x28];
  dStack_78 = dStack_78 - (double)param_3[0x29];
  dStack_70 = dStack_70 - (double)param_3[0x2a];
  dStack_68 = dStack_68 - (double)param_3[0x2b];
LAB_109a79adc:
  FUN_109a7968c(uVar9,dVar10,param_4,&uStack_e0,&uStack_140,&dStack_80);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
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
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < uStack_140._4_4_) {
    lVar7 = 0;
    do {
      puStack_100[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < uStack_e0._4_4_) {
    lVar7 = 0;
    do {
      puStack_a0[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a79e3c; end: 109a7a017;  */

void FUN_109a79e3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_90,0xffffffff);
  uStack_f0 = 0x42ff0000;
  lStack_b0 = (long)&uStack_ec + 4;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &uStack_a0;
  FUN_109a7968c(0xbff0000000000000,0,param_4,&uStack_90,&uStack_f0,param_2);
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
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < (int)uStack_ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_ec);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
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
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a7a018; end: 109a7a7c7;  */

/* WARNING: Removing unreachable block (ram,0x000109a7a614) */
/* WARNING: Removing unreachable block (ram,0x000109a7a618) */
/* WARNING: Removing unreachable block (ram,0x000109a7a620) */
/* WARNING: Removing unreachable block (ram,0x000109a7a628) */
/* WARNING: Removing unreachable block (ram,0x000109a7a62c) */
/* WARNING: Removing unreachable block (ram,0x000109a7a508) */
/* WARNING: Removing unreachable block (ram,0x000109a7a50c) */
/* WARNING: Removing unreachable block (ram,0x000109a7a514) */
/* WARNING: Removing unreachable block (ram,0x000109a7a51c) */
/* WARNING: Removing unreachable block (ram,0x000109a7a520) */
/* WARNING: Removing unreachable block (ram,0x000109a7a540) */
/* WARNING: Removing unreachable block (ram,0x000109a7a548) */
/* WARNING: Removing unreachable block (ram,0x000109a7a55c) */
/* WARNING: Removing unreachable block (ram,0x000109a7a64c) */
/* WARNING: Removing unreachable block (ram,0x000109a7a654) */
/* WARNING: Removing unreachable block (ram,0x000109a7a668) */
/* WARNING: Removing unreachable block (ram,0x000109a7a678) */
/* WARNING: Removing unreachable block (ram,0x000109a7a56c) */

void FUN_109a7a018(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar10 = (undefined **)*param_3;
  if (ppuVar10 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a7a094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar10 + 0x88))(ppuVar10,param_2,param_3,param_4);
    return;
  }
  uStack_d0 = 0x42ff0000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  uStack_c8 = 0;
  puStack_90 = &uStack_c8;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_130 = 0x42ff0000;
  puStack_f0 = &uStack_128;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  ppuVar14 = (undefined **)*param_2;
  puStack_e8 = &uStack_e0;
  puStack_88 = &uStack_80;
  if ((ppuVar14 == &PTR_PTR_1132e8f00) && (*(int *)(param_2 + 1) == 0x2f)) {
    if ((param_2[0x10] != 0) && ((double)param_2[0x27] != 0.0)) goto LAB_109a7a1dc;
    if ((param_1 == &PTR_PTR_1132e8ef8) && ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0))))
    {
      lVar15 = -(ulong)((double)param_3[0x2a] == 0.0);
      lVar16 = -(ulong)((double)param_3[0x2b] == 0.0);
      lVar12 = -(ulong)((double)param_3[0x28] == 0.0);
      lVar9 = -(ulong)((double)param_3[0x29] == 0.0);
      auVar5[1] = ~(byte)((ulong)lVar12 >> 8);
      auVar5[0] = ~(byte)lVar12;
      auVar5[2] = ~(byte)((ulong)lVar12 >> 0x10);
      auVar5[3] = ~(byte)((ulong)lVar12 >> 0x18);
      auVar5[4] = ~(byte)lVar9;
      auVar5[5] = ~(byte)((ulong)lVar9 >> 8);
      auVar5[6] = ~(byte)((ulong)lVar9 >> 0x10);
      auVar5[7] = ~(byte)((ulong)lVar9 >> 0x18);
      auVar5[8] = ~(byte)lVar15;
      auVar5[9] = ~(byte)((ulong)lVar15 >> 8);
      auVar5[10] = ~(byte)((ulong)lVar15 >> 0x10);
      auVar5[0xb] = ~(byte)((ulong)lVar15 >> 0x18);
      auVar5[0xc] = ~(byte)lVar16;
      auVar5[0xd] = ~(byte)((ulong)lVar16 >> 8);
      auVar5[0xe] = ~(byte)((ulong)lVar16 >> 0x10);
      auVar5[0xf] = ~(byte)((ulong)lVar16 >> 0x18);
      uVar8 = NEON_umaxv(auVar5,4);
      if ((uVar8 & 1) != 0) goto LAB_109a7a168;
      puVar13 = param_3 + 2;
      if ((undefined8 *)&uStack_130 != puVar13) {
        if (param_3[9] != 0) {
          piVar1 = (int *)(param_3[9] + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_f8 = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        uStack_130 = *(undefined4 *)puVar13;
        if (*(int *)((long)param_3 + 0x14) < 3) {
          uStack_128 = (undefined4)param_3[3];
          uStack_124 = (undefined4)((ulong)param_3[3] >> 0x20);
          uStack_e0 = *(undefined8 *)param_3[0xb];
          uStack_d8 = ((undefined8 *)param_3[0xb])[1];
          iStack_12c = *(int *)((long)param_3 + 0x14);
        }
        else {
          func_0x000109a84868(&uStack_130,puVar13);
        }
        uStack_118 = (undefined4)param_3[5];
        uStack_114 = (undefined4)((ulong)param_3[5] >> 0x20);
        uStack_120 = (undefined4)param_3[4];
        uStack_11c = (undefined4)((ulong)param_3[4] >> 0x20);
        uStack_108 = (undefined4)param_3[7];
        uStack_104 = (undefined4)((ulong)param_3[7] >> 0x20);
        uStack_110 = (undefined4)param_3[6];
        uStack_10c = (undefined4)((ulong)param_3[6] >> 0x20);
        lStack_f8 = param_3[9];
        uStack_100 = (undefined4)param_3[8];
        uStack_fc = (undefined4)((ulong)param_3[8] >> 0x20);
      }
    }
    else {
LAB_109a7a168:
      (**(code **)(*ppuVar10 + 0x18))(ppuVar10,param_3,&uStack_130,0xffffffff);
    }
    FUN_109a7a7c8(param_4,0x2f,&uStack_130,param_2 + 2);
    goto LAB_109a7a32c;
  }
  if ((ppuVar14 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0))))
  {
    lVar15 = -(ulong)((double)param_2[0x2a] == 0.0);
    lVar16 = -(ulong)((double)param_2[0x2b] == 0.0);
    lVar12 = -(ulong)((double)param_2[0x28] == 0.0);
    lVar9 = -(ulong)((double)param_2[0x29] == 0.0);
    auVar7[1] = ~(byte)((ulong)lVar12 >> 8);
    auVar7[0] = ~(byte)lVar12;
    auVar7[2] = ~(byte)((ulong)lVar12 >> 0x10);
    auVar7[3] = ~(byte)((ulong)lVar12 >> 0x18);
    auVar7[4] = ~(byte)lVar9;
    auVar7[5] = ~(byte)((ulong)lVar9 >> 8);
    auVar7[6] = ~(byte)((ulong)lVar9 >> 0x10);
    auVar7[7] = ~(byte)((ulong)lVar9 >> 0x18);
    auVar7[8] = ~(byte)lVar15;
    auVar7[9] = ~(byte)((ulong)lVar15 >> 8);
    auVar7[10] = ~(byte)((ulong)lVar15 >> 0x10);
    auVar7[0xb] = ~(byte)((ulong)lVar15 >> 0x18);
    auVar7[0xc] = ~(byte)lVar16;
    auVar7[0xd] = ~(byte)((ulong)lVar16 >> 8);
    auVar7[0xe] = ~(byte)((ulong)lVar16 >> 0x10);
    auVar7[0xf] = ~(byte)((ulong)lVar16 >> 0x18);
    uVar8 = NEON_umaxv(auVar7,4);
    if ((uVar8 & 1) != 0) goto LAB_109a7a1dc;
    puVar13 = param_2 + 2;
    if ((undefined8 *)&uStack_d0 != puVar13) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_d0 = *(undefined4 *)puVar13;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_c8 = (undefined4)param_2[3];
        uStack_c4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_80 = *(undefined8 *)param_2[0xb];
        uStack_78 = ((undefined8 *)param_2[0xb])[1];
        iStack_cc = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_d0,puVar13);
      }
      uStack_b8 = (undefined4)param_2[5];
      uStack_b4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_c0 = (undefined4)param_2[4];
      uStack_bc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_a8 = (undefined4)param_2[7];
      uStack_a4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_b0 = (undefined4)param_2[6];
      uStack_ac = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_98 = param_2[9];
      uStack_a0 = (undefined4)param_2[8];
      uStack_9c = (undefined4)((ulong)param_2[8] >> 0x20);
    }
  }
  else {
LAB_109a7a1dc:
    (**(code **)(*ppuVar14 + 0x18))(ppuVar14,param_2,&uStack_d0,0xffffffff);
  }
  ppuVar10 = (undefined **)*param_3;
  if (ppuVar10 == &PTR_PTR_1132e8ef8) {
    if ((param_3[0x10] == 0) || ((double)param_3[0x27] == 0.0)) {
      lVar15 = -(ulong)((double)param_3[0x2a] == 0.0);
      lVar16 = -(ulong)((double)param_3[0x2b] == 0.0);
      lVar12 = -(ulong)((double)param_3[0x28] == 0.0);
      lVar9 = -(ulong)((double)param_3[0x29] == 0.0);
      auVar6[1] = ~(byte)((ulong)lVar12 >> 8);
      auVar6[0] = ~(byte)lVar12;
      auVar6[2] = ~(byte)((ulong)lVar12 >> 0x10);
      auVar6[3] = ~(byte)((ulong)lVar12 >> 0x18);
      auVar6[4] = ~(byte)lVar9;
      auVar6[5] = ~(byte)((ulong)lVar9 >> 8);
      auVar6[6] = ~(byte)((ulong)lVar9 >> 0x10);
      auVar6[7] = ~(byte)((ulong)lVar9 >> 0x18);
      auVar6[8] = ~(byte)lVar15;
      auVar6[9] = ~(byte)((ulong)lVar15 >> 8);
      auVar6[10] = ~(byte)((ulong)lVar15 >> 0x10);
      auVar6[0xb] = ~(byte)((ulong)lVar15 >> 0x18);
      auVar6[0xc] = ~(byte)lVar16;
      auVar6[0xd] = ~(byte)((ulong)lVar16 >> 8);
      auVar6[0xe] = ~(byte)((ulong)lVar16 >> 0x10);
      auVar6[0xf] = ~(byte)((ulong)lVar16 >> 0x18);
      uVar8 = NEON_umaxv(auVar6,4);
      if ((uVar8 & 1) != 0) goto LAB_109a7a2fc;
      puVar13 = param_3 + 2;
      if ((undefined8 *)&uStack_130 != puVar13) {
        if (param_3[9] != 0) {
          piVar1 = (int *)(param_3[9] + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lStack_f8 != 0) {
          piVar1 = (int *)(lStack_f8 + 0x14);
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
            func_0x000109a848d4(&uStack_130);
          }
        }
        lStack_f8 = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        if (iStack_12c < 1) {
          uStack_130 = *(undefined4 *)puVar13;
LAB_109a7a684:
          iVar2 = *(int *)((long)param_3 + 0x14);
          if (2 < iVar2) goto LAB_109a7a6b8;
          uStack_128 = (undefined4)param_3[3];
          uStack_124 = (undefined4)((ulong)param_3[3] >> 0x20);
          puVar13 = (undefined8 *)param_3[0xb];
          *puStack_e8 = *puVar13;
          puStack_e8[1] = puVar13[1];
          iStack_12c = iVar2;
        }
        else {
          lVar12 = 0;
          do {
            puStack_f0[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_12c);
          uStack_130 = *(undefined4 *)puVar13;
          if (iStack_12c < 3) goto LAB_109a7a684;
LAB_109a7a6b8:
          func_0x000109a84868(&uStack_130,puVar13);
        }
        uStack_118 = (undefined4)param_3[5];
        uStack_114 = (undefined4)((ulong)param_3[5] >> 0x20);
        uStack_120 = (undefined4)param_3[4];
        uStack_11c = (undefined4)((ulong)param_3[4] >> 0x20);
        uStack_108 = (undefined4)param_3[7];
        uStack_104 = (undefined4)((ulong)param_3[7] >> 0x20);
        uStack_110 = (undefined4)param_3[6];
        uStack_10c = (undefined4)((ulong)param_3[6] >> 0x20);
        lStack_f8 = param_3[9];
        uStack_100 = (undefined4)param_3[8];
        uStack_fc = (undefined4)((ulong)param_3[8] >> 0x20);
      }
    }
    else {
LAB_109a7a2fc:
      (**(code **)(*ppuVar10 + 0x18))(ppuVar10,param_3,&uStack_130,0xffffffff);
    }
    uVar11 = 0x2a;
  }
  else {
    if (((ppuVar10 != &PTR_PTR_1132e8f00) || (*(int *)(param_3 + 1) != 0x2f)) ||
       ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) goto LAB_109a7a2fc;
    puVar13 = param_3 + 2;
    if ((undefined8 *)&uStack_130 != puVar13) {
      if (param_3[9] != 0) {
        piVar1 = (int *)(param_3[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lStack_f8 != 0) {
        piVar1 = (int *)(lStack_f8 + 0x14);
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
          func_0x000109a848d4(&uStack_130);
        }
      }
      lStack_f8 = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      if (iStack_12c < 1) {
        uStack_130 = *(undefined4 *)puVar13;
LAB_109a7a578:
        iVar2 = *(int *)((long)param_3 + 0x14);
        if (2 < iVar2) goto LAB_109a7a5ac;
        uStack_128 = (undefined4)param_3[3];
        uStack_124 = (undefined4)((ulong)param_3[3] >> 0x20);
        puVar13 = (undefined8 *)param_3[0xb];
        *puStack_e8 = *puVar13;
        puStack_e8[1] = puVar13[1];
        iStack_12c = iVar2;
      }
      else {
        lVar12 = 0;
        do {
          puStack_f0[lVar12] = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_12c);
        uStack_130 = *(undefined4 *)puVar13;
        if (iStack_12c < 3) goto LAB_109a7a578;
LAB_109a7a5ac:
        func_0x000109a84868(&uStack_130,puVar13);
      }
      uStack_118 = (undefined4)param_3[5];
      uStack_114 = (undefined4)((ulong)param_3[5] >> 0x20);
      uStack_120 = (undefined4)param_3[4];
      uStack_11c = (undefined4)((ulong)param_3[4] >> 0x20);
      uStack_108 = (undefined4)param_3[7];
      uStack_104 = (undefined4)((ulong)param_3[7] >> 0x20);
      uStack_110 = (undefined4)param_3[6];
      uStack_10c = (undefined4)((ulong)param_3[6] >> 0x20);
      lStack_f8 = param_3[9];
      uStack_100 = (undefined4)param_3[8];
      uStack_fc = (undefined4)((ulong)param_3[8] >> 0x20);
    }
    uVar11 = 0x2f;
  }
  FUN_109a7a7c8(param_4,uVar11,&uStack_d0,&uStack_130);
LAB_109a7a32c:
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
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
      func_0x000109a848d4(&uStack_130);
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  if (0 < iStack_12c) {
    lVar12 = 0;
    do {
      puStack_f0[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_12c);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
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
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < iStack_cc) {
    lVar12 = 0;
    do {
      puStack_90[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return;
}



/* Entry: 109a7a7c8; end: 109a7a90f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7a848 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7a7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  lStack_1b0 = (long)&uStack_1ec + 4;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uVar6 = 0x3ff0000000000000;
  if (*(long *)(param_5 + 0x10) == 0) {
    uVar6 = 0;
  }
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(param_1,uVar6,auStack_190,&PTR_PTR_1132e8f00,param_3,param_4,param_5,&uStack_1f0,
                &uStack_210);
  FUN_109a77b50(param_2,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7a910; end: 109a7aaef;  */

void FUN_109a7a910(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0x42ff0000;
  lStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  lStack_68 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_58 = &uStack_50;
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_a0,0xffffffff);
  uStack_100 = 0x42ff0000;
  lStack_c0 = (long)&uStack_fc + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_b8 = &uStack_b0;
  FUN_109a7968c(param_1,0,param_4,&uStack_a0,&uStack_100,&uStack_120);
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
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
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (0 < (int)uStack_fc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_fc);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
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
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0 < (int)uStack_9c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_9c);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 109a7aaf0; end: 109a7b18b;  */

/* WARNING: Removing unreachable block (ram,0x000109a7ae18) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae1c) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae24) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae2c) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae30) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae50) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae58) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae6c) */
/* WARNING: Removing unreachable block (ram,0x000109a7ae7c) */

void FUN_109a7aaf0(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar11 = (undefined **)*param_3;
  if (ppuVar11 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a7ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar11 + 0x98))(ppuVar11,param_2,param_3,param_4);
    return;
  }
  ppuVar11 = (undefined **)*param_2;
  if (((((ppuVar11 == &PTR_PTR_1132e8f00) && (*(int *)(param_2 + 1) == 0x2f)) &&
       ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) &&
      ((param_1 == &PTR_PTR_1132e8f00 && (*(int *)(param_3 + 1) == 0x2f)))) &&
     ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0)))) {
    uStack_1f0 = 0x42ff0000;
    lStack_1b0 = (long)&uStack_1ec + 4;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puStack_1a8 = &uStack_1a0;
    FUN_109a82eb0(auStack_190,&PTR_PTR_1132e8f00,0x2f,param_3 + 2,param_2 + 2,&uStack_1f0,
                  &uStack_210);
    FUN_109a77b50(param_4,auStack_190);
    FUN_10918eb6c(auStack_190);
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
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
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    if (0 < (int)uStack_1ec) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_1b0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uStack_1ec);
    }
    if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
      _free(puStack_1a8[-1]);
    }
    return;
  }
  uStack_d0 = 0x42ff0000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  uStack_c8 = 0;
  puStack_90 = &uStack_c8;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_130 = 0x42ff0000;
  puStack_f0 = &uStack_128;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_e8 = &uStack_e0;
  puStack_88 = &uStack_80;
  if ((ppuVar11 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0))))
  {
    lVar9 = -(ulong)((double)param_2[0x2a] == 0.0);
    lVar10 = -(ulong)((double)param_2[0x2b] == 0.0);
    lVar13 = -(ulong)((double)param_2[0x28] == 0.0);
    lVar8 = -(ulong)((double)param_2[0x29] == 0.0);
    auVar5[1] = ~(byte)((ulong)lVar13 >> 8);
    auVar5[0] = ~(byte)lVar13;
    auVar5[2] = ~(byte)((ulong)lVar13 >> 0x10);
    auVar5[3] = ~(byte)((ulong)lVar13 >> 0x18);
    auVar5[4] = ~(byte)lVar8;
    auVar5[5] = ~(byte)((ulong)lVar8 >> 8);
    auVar5[6] = ~(byte)((ulong)lVar8 >> 0x10);
    auVar5[7] = ~(byte)((ulong)lVar8 >> 0x18);
    auVar5[8] = ~(byte)lVar9;
    auVar5[9] = ~(byte)((ulong)lVar9 >> 8);
    auVar5[10] = ~(byte)((ulong)lVar9 >> 0x10);
    auVar5[0xb] = ~(byte)((ulong)lVar9 >> 0x18);
    auVar5[0xc] = ~(byte)lVar10;
    auVar5[0xd] = ~(byte)((ulong)lVar10 >> 8);
    auVar5[0xe] = ~(byte)((ulong)lVar10 >> 0x10);
    auVar5[0xf] = ~(byte)((ulong)lVar10 >> 0x18);
    uVar7 = NEON_umaxv(auVar5,4);
    if ((uVar7 & 1) != 0) goto LAB_109a7ac40;
    puVar14 = param_2 + 2;
    if ((undefined8 *)&uStack_d0 != puVar14) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_d0 = *(undefined4 *)puVar14;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_c8 = (undefined4)param_2[3];
        uStack_c4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_80 = *(undefined8 *)param_2[0xb];
        uStack_78 = ((undefined8 *)param_2[0xb])[1];
        iStack_cc = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_d0,puVar14);
      }
      uStack_b8 = (undefined4)param_2[5];
      uStack_b4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_c0 = (undefined4)param_2[4];
      uStack_bc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_a8 = (undefined4)param_2[7];
      uStack_a4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_b0 = (undefined4)param_2[6];
      uStack_ac = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_98 = param_2[9];
      uStack_a0 = (undefined4)param_2[8];
      uStack_9c = (undefined4)((ulong)param_2[8] >> 0x20);
    }
  }
  else {
LAB_109a7ac40:
    (**(code **)(*ppuVar11 + 0x18))(ppuVar11,param_2,&uStack_d0,0xffffffff);
  }
  ppuVar11 = (undefined **)*param_3;
  if (ppuVar11 == &PTR_PTR_1132e8ef8) {
    if ((param_3[0x10] == 0) || ((double)param_3[0x27] == 0.0)) {
      lVar9 = -(ulong)((double)param_3[0x2a] == 0.0);
      lVar10 = -(ulong)((double)param_3[0x2b] == 0.0);
      lVar13 = -(ulong)((double)param_3[0x28] == 0.0);
      lVar8 = -(ulong)((double)param_3[0x29] == 0.0);
      auVar6[1] = ~(byte)((ulong)lVar13 >> 8);
      auVar6[0] = ~(byte)lVar13;
      auVar6[2] = ~(byte)((ulong)lVar13 >> 0x10);
      auVar6[3] = ~(byte)((ulong)lVar13 >> 0x18);
      auVar6[4] = ~(byte)lVar8;
      auVar6[5] = ~(byte)((ulong)lVar8 >> 8);
      auVar6[6] = ~(byte)((ulong)lVar8 >> 0x10);
      auVar6[7] = ~(byte)((ulong)lVar8 >> 0x18);
      auVar6[8] = ~(byte)lVar9;
      auVar6[9] = ~(byte)((ulong)lVar9 >> 8);
      auVar6[10] = ~(byte)((ulong)lVar9 >> 0x10);
      auVar6[0xb] = ~(byte)((ulong)lVar9 >> 0x18);
      auVar6[0xc] = ~(byte)lVar10;
      auVar6[0xd] = ~(byte)((ulong)lVar10 >> 8);
      auVar6[0xe] = ~(byte)((ulong)lVar10 >> 0x10);
      auVar6[0xf] = ~(byte)((ulong)lVar10 >> 0x18);
      uVar7 = NEON_umaxv(auVar6,4);
      if ((uVar7 & 1) == 0) {
        puVar14 = param_3 + 2;
        if ((undefined8 *)&uStack_130 != puVar14) {
          if (param_3[9] != 0) {
            piVar1 = (int *)(param_3[9] + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (lStack_f8 != 0) {
            piVar1 = (int *)(lStack_f8 + 0x14);
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
              func_0x000109a848d4(&uStack_130);
            }
          }
          lStack_f8 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if (iStack_12c < 1) {
            uStack_130 = *(undefined4 *)puVar14;
LAB_109a7afec:
            iVar2 = *(int *)((long)param_3 + 0x14);
            if (2 < iVar2) goto LAB_109a7b020;
            uStack_128 = (undefined4)param_3[3];
            uStack_124 = (undefined4)((ulong)param_3[3] >> 0x20);
            puVar14 = (undefined8 *)param_3[0xb];
            *puStack_e8 = *puVar14;
            puStack_e8[1] = puVar14[1];
            iStack_12c = iVar2;
          }
          else {
            lVar13 = 0;
            do {
              puStack_f0[lVar13] = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < iStack_12c);
            uStack_130 = *(undefined4 *)puVar14;
            if (iStack_12c < 3) goto LAB_109a7afec;
LAB_109a7b020:
            func_0x000109a84868(&uStack_130,puVar14);
          }
          uStack_118 = (undefined4)param_3[5];
          uStack_114 = (undefined4)((ulong)param_3[5] >> 0x20);
          uStack_120 = (undefined4)param_3[4];
          uStack_11c = (undefined4)((ulong)param_3[4] >> 0x20);
          uStack_108 = (undefined4)param_3[7];
          uStack_104 = (undefined4)((ulong)param_3[7] >> 0x20);
          uStack_110 = (undefined4)param_3[6];
          uStack_10c = (undefined4)((ulong)param_3[6] >> 0x20);
          lStack_f8 = param_3[9];
          uStack_100 = (undefined4)param_3[8];
          uStack_fc = (undefined4)((ulong)param_3[8] >> 0x20);
        }
        uVar12 = 0x2f;
        goto LAB_109a7b048;
      }
    }
LAB_109a7ad5c:
    (**(code **)(*ppuVar11 + 0x18))(ppuVar11,param_3,&uStack_130,0xffffffff);
    uVar12 = 0x2f;
    goto LAB_109a7b048;
  }
  if (((ppuVar11 != &PTR_PTR_1132e8f00) || (*(int *)(param_3 + 1) != 0x2f)) ||
     ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) goto LAB_109a7ad5c;
  puVar14 = param_3 + 2;
  if ((undefined8 *)&uStack_130 != puVar14) {
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_f8 != 0) {
      piVar1 = (int *)(lStack_f8 + 0x14);
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
        func_0x000109a848d4(&uStack_130);
      }
    }
    lStack_f8 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    if (iStack_12c < 1) {
      uStack_130 = *(undefined4 *)puVar14;
LAB_109a7af24:
      iVar2 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar2) goto LAB_109a7af58;
      uStack_128 = (undefined4)param_3[3];
      uStack_124 = (undefined4)((ulong)param_3[3] >> 0x20);
      puVar14 = (undefined8 *)param_3[0xb];
      *puStack_e8 = *puVar14;
      puStack_e8[1] = puVar14[1];
      iStack_12c = iVar2;
    }
    else {
      lVar13 = 0;
      do {
        puStack_f0[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_12c);
      uStack_130 = *(undefined4 *)puVar14;
      if (iStack_12c < 3) goto LAB_109a7af24;
LAB_109a7af58:
      func_0x000109a84868(&uStack_130,puVar14);
    }
    uStack_118 = (undefined4)param_3[5];
    uStack_114 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_120 = (undefined4)param_3[4];
    uStack_11c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_108 = (undefined4)param_3[7];
    uStack_104 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_110 = (undefined4)param_3[6];
    uStack_10c = (undefined4)((ulong)param_3[6] >> 0x20);
    lStack_f8 = param_3[9];
    uStack_100 = (undefined4)param_3[8];
    uStack_fc = (undefined4)((ulong)param_3[8] >> 0x20);
  }
  uVar12 = 0x2a;
LAB_109a7b048:
  FUN_109a7a7c8(param_4,uVar12,&uStack_d0,&uStack_130);
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
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
      func_0x000109a848d4(&uStack_130);
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  if (0 < iStack_12c) {
    lVar13 = 0;
    do {
      puStack_f0[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_12c);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
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
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < iStack_cc) {
    lVar13 = 0;
    do {
      puStack_90[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return;
}



/* Entry: 109a7b18c; end: 109a7b363;  */

void FUN_109a7b18c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0x42ff0000;
  lStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  lStack_68 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_58 = &uStack_50;
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_a0,0xffffffff);
  uStack_100 = 0x42ff0000;
  lStack_c0 = (long)&uStack_fc + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_b8 = &uStack_b0;
  FUN_109a7a7c8(param_1,param_4,0x2f,&uStack_a0,&uStack_100);
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
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
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (0 < (int)uStack_fc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_fc);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
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
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0 < (int)uStack_9c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_9c);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 109a7b364; end: 109a7b52f;  */

void FUN_109a7b364(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_90,0xffffffff);
  uStack_f0 = 0x42ff0000;
  lStack_b0 = (long)&uStack_ec + 4;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &uStack_a0;
  FUN_109a7a7c8(0x3ff0000000000000,param_3,0x61,&uStack_90,&uStack_f0);
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
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < (int)uStack_ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_ec);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
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
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a7b530; end: 109a7b637;  */

void FUN_109a7b530(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  lStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_80,0xffffffff);
  FUN_109a7b638(0x3ff0000000000000,param_3,&uStack_80);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7b638; end: 109a7b817;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7b6d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7b638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_250 = 0x42ff0000;
  lStack_210 = (long)&uStack_24c + 4;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_208 = &uStack_200;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(param_1,0,auStack_190,&PTR_PTR_1132e8f20,0,param_3,&uStack_1f0,&uStack_250,
                &uStack_270);
  FUN_109a77b50(param_2,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
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
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < (int)uStack_24c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_210 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7b818; end: 109a7bfbf;  */

/* WARNING: Removing unreachable block (ram,0x000109a7be14) */
/* WARNING: Removing unreachable block (ram,0x000109a7be18) */
/* WARNING: Removing unreachable block (ram,0x000109a7be20) */
/* WARNING: Removing unreachable block (ram,0x000109a7be28) */
/* WARNING: Removing unreachable block (ram,0x000109a7be2c) */
/* WARNING: Removing unreachable block (ram,0x000109a7b998) */
/* WARNING: Removing unreachable block (ram,0x000109a7b99c) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9a4) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9ac) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9b0) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7bc44 */
/* WARNING: Removing unreachable block (ram,0x000109a7be4c) */
/* WARNING: Removing unreachable block (ram,0x000109a7be54) */
/* WARNING: Removing unreachable block (ram,0x000109a7be68) */
/* WARNING: Removing unreachable block (ram,0x000109a7be74) */
/* WARNING: Removing unreachable block (ram,0x000109a7be78) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9d0) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9d8) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9ec) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9f8) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9fc) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7b818(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  byte in_b0;
  byte in_register_00005001;
  byte in_register_00005002;
  byte in_register_00005003;
  byte in_register_00005004;
  byte in_register_00005005;
  byte in_register_00005006;
  byte in_register_00005007;
  long lVar14;
  long lVar15;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  undefined4 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  undefined4 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [352];
  
  plVar8 = (long *)*param_3;
  if (plVar8 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a7b88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0xb8))(plVar8,param_2,param_3,param_4);
    return;
  }
  uStack_250 = 0x42ff0000;
  uStack_244 = 0;
  uStack_240 = 0;
  iStack_24c = 0;
  uStack_248 = 0;
  puStack_210 = &uStack_248;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_2b0 = 0x42ff0000;
  puStack_270 = &uStack_2a8;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  iStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_284 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  ppuVar9 = (undefined **)*param_2;
  puStack_268 = &uStack_260;
  puStack_208 = &uStack_200;
  if (ppuVar9 == &PTR_PTR_1132e8f20) {
    if ((undefined8 *)&uStack_250 == param_2 + 2) {
      uVar13 = 1;
    }
    else {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_250 = *(undefined4 *)(param_2 + 2);
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uVar13 = 1;
        iStack_24c = *(int *)((long)param_2 + 0x14);
LAB_109a7ba30:
        uStack_248 = (undefined4)param_2[3];
        uStack_244 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_200 = *(undefined8 *)param_2[0xb];
        uStack_1f8 = ((undefined8 *)param_2[0xb])[1];
      }
      else {
        func_0x000109a84868(&uStack_250,param_2 + 2);
        uVar13 = 1;
      }
LAB_109a7ba54:
      uStack_230 = (undefined4)param_2[6];
      uStack_22c = (undefined4)((ulong)param_2[6] >> 0x20);
      uStack_238 = (undefined4)param_2[5];
      uStack_234 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_220 = (undefined4)param_2[8];
      uStack_21c = (undefined4)((ulong)param_2[8] >> 0x20);
      uStack_228 = (undefined4)param_2[7];
      uStack_224 = (undefined4)((ulong)param_2[7] >> 0x20);
      lStack_218 = param_2[9];
      uStack_240 = (undefined4)param_2[4];
      uStack_23c = (undefined4)((ulong)param_2[4] >> 0x20);
    }
  }
  else {
    if ((ppuVar9 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0))))
    {
      lVar14 = -(ulong)((double)param_2[0x2a] == 0.0);
      lVar15 = -(ulong)((double)param_2[0x2b] == 0.0);
      lVar12 = -(ulong)((double)param_2[0x28] == 0.0);
      lVar7 = -(ulong)((double)param_2[0x29] == 0.0);
      in_b0 = ~(byte)lVar12;
      in_register_00005001 = ~(byte)((ulong)lVar12 >> 8);
      in_register_00005002 = ~(byte)((ulong)lVar12 >> 0x10);
      in_register_00005003 = ~(byte)((ulong)lVar12 >> 0x18);
      in_register_00005004 = ~(byte)lVar7;
      in_register_00005005 = ~(byte)((ulong)lVar7 >> 8);
      in_register_00005006 = ~(byte)((ulong)lVar7 >> 0x10);
      in_register_00005007 = ~(byte)((ulong)lVar7 >> 0x18);
      auVar4[1] = in_register_00005001;
      auVar4[0] = in_b0;
      auVar4[2] = in_register_00005002;
      auVar4[3] = in_register_00005003;
      auVar4[4] = in_register_00005004;
      auVar4[5] = in_register_00005005;
      auVar4[6] = in_register_00005006;
      auVar4[7] = in_register_00005007;
      auVar4[8] = ~(byte)lVar14;
      auVar4[9] = ~(byte)((ulong)lVar14 >> 8);
      auVar4[10] = ~(byte)((ulong)lVar14 >> 0x10);
      auVar4[0xb] = ~(byte)((ulong)lVar14 >> 0x18);
      auVar4[0xc] = ~(byte)lVar15;
      auVar4[0xd] = ~(byte)((ulong)lVar15 >> 8);
      auVar4[0xe] = ~(byte)((ulong)lVar15 >> 0x10);
      auVar4[0xf] = ~(byte)((ulong)lVar15 >> 0x18);
      uVar13 = NEON_umaxv(auVar4,4);
      if ((uVar13 & 1) == 0) {
        if ((undefined8 *)&uStack_250 != param_2 + 2) {
          if (param_2[9] != 0) {
            piVar1 = (int *)(param_2[9] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_234 = 0;
          uStack_240 = 0;
          uStack_23c = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_230 = 0;
          uStack_22c = 0;
          uStack_250 = *(undefined4 *)(param_2 + 2);
          if (*(int *)((long)param_2 + 0x14) < 3) {
            uVar13 = 0;
            iStack_24c = *(int *)((long)param_2 + 0x14);
            goto LAB_109a7ba30;
          }
          func_0x000109a84868(&uStack_250,param_2 + 2);
          uVar13 = 0;
          goto LAB_109a7ba54;
        }
        uVar13 = 0;
        goto LAB_109a7ba74;
      }
    }
    (**(code **)(*ppuVar9 + 0x18))(ppuVar9,param_2,&uStack_250,0xffffffff);
    uVar13 = 0;
  }
LAB_109a7ba74:
  ppuVar9 = (undefined **)*param_3;
  if (ppuVar9 == &PTR_PTR_1132e8f20) {
    uVar13 = uVar13 | 2;
    if ((long *)&uStack_2b0 == param_3 + 2) goto LAB_109a7bbe8;
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_278 != 0) {
      piVar1 = (int *)(lStack_278 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_2b0);
      }
    }
    lStack_278 = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    if (iStack_2ac < 1) {
      uStack_2b0 = (undefined4)param_3[2];
      iVar10 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar10) goto LAB_109a7bbbc;
    }
    else {
      lVar12 = 0;
      do {
        puStack_270[lVar12] = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iStack_2ac);
      uStack_2b0 = (undefined4)param_3[2];
      iVar10 = *(int *)((long)param_3 + 0x14);
      if (2 < iStack_2ac || 2 < iVar10) {
LAB_109a7bbbc:
        func_0x000109a84868(&uStack_2b0,param_3 + 2);
        goto LAB_109a7bbc8;
      }
    }
LAB_109a7bb94:
    uStack_2a8 = (undefined4)param_3[3];
    uStack_2a4 = (undefined4)((ulong)param_3[3] >> 0x20);
    puVar11 = (undefined8 *)param_3[0xb];
    *puStack_268 = *puVar11;
    puStack_268[1] = puVar11[1];
    iStack_2ac = iVar10;
LAB_109a7bbc8:
    uStack_2a0 = (undefined4)param_3[4];
    uStack_29c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_290 = (undefined4)param_3[6];
    uStack_28c = (undefined4)((ulong)param_3[6] >> 0x20);
    uStack_298 = (undefined4)param_3[5];
    uStack_294 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_280 = (undefined4)param_3[8];
    uStack_27c = (undefined4)((ulong)param_3[8] >> 0x20);
    uStack_288 = (undefined4)param_3[7];
    uStack_284 = (undefined4)((ulong)param_3[7] >> 0x20);
    lStack_278 = param_3[9];
  }
  else {
    if ((ppuVar9 == &PTR_PTR_1132e8ef8) && ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0))))
    {
      lVar14 = -(ulong)((double)param_3[0x2a] == 0.0);
      lVar15 = -(ulong)((double)param_3[0x2b] == 0.0);
      lVar12 = -(ulong)((double)param_3[0x28] == 0.0);
      lVar7 = -(ulong)((double)param_3[0x29] == 0.0);
      in_b0 = ~(byte)lVar12;
      in_register_00005001 = ~(byte)((ulong)lVar12 >> 8);
      in_register_00005002 = ~(byte)((ulong)lVar12 >> 0x10);
      in_register_00005003 = ~(byte)((ulong)lVar12 >> 0x18);
      in_register_00005004 = ~(byte)lVar7;
      in_register_00005005 = ~(byte)((ulong)lVar7 >> 8);
      in_register_00005006 = ~(byte)((ulong)lVar7 >> 0x10);
      in_register_00005007 = ~(byte)((ulong)lVar7 >> 0x18);
      auVar5[1] = in_register_00005001;
      auVar5[0] = in_b0;
      auVar5[2] = in_register_00005002;
      auVar5[3] = in_register_00005003;
      auVar5[4] = in_register_00005004;
      auVar5[5] = in_register_00005005;
      auVar5[6] = in_register_00005006;
      auVar5[7] = in_register_00005007;
      auVar5[8] = ~(byte)lVar14;
      auVar5[9] = ~(byte)((ulong)lVar14 >> 8);
      auVar5[10] = ~(byte)((ulong)lVar14 >> 0x10);
      auVar5[0xb] = ~(byte)((ulong)lVar14 >> 0x18);
      auVar5[0xc] = ~(byte)lVar15;
      auVar5[0xd] = ~(byte)((ulong)lVar15 >> 8);
      auVar5[0xe] = ~(byte)((ulong)lVar15 >> 0x10);
      auVar5[0xf] = ~(byte)((ulong)lVar15 >> 0x18);
      uVar6 = NEON_umaxv(auVar5,4);
      if ((uVar6 & 1) == 0) {
        if ((long *)&uStack_2b0 == param_3 + 2) goto LAB_109a7bbe8;
        if (param_3[9] != 0) {
          piVar1 = (int *)(param_3[9] + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lStack_278 != 0) {
          piVar1 = (int *)(lStack_278 + 0x14);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            func_0x000109a848d4(&uStack_2b0);
          }
        }
        lStack_278 = 0;
        uStack_298 = 0;
        uStack_294 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_290 = 0;
        uStack_28c = 0;
        if (iStack_2ac < 1) {
          uStack_2b0 = (undefined4)param_3[2];
          iVar10 = *(int *)((long)param_3 + 0x14);
          if (iVar10 < 3) goto LAB_109a7bb94;
        }
        else {
          lVar12 = 0;
          do {
            puStack_270[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_2ac);
          uStack_2b0 = (undefined4)param_3[2];
          iVar10 = *(int *)((long)param_3 + 0x14);
          if (iStack_2ac < 3 && iVar10 < 3) goto LAB_109a7bb94;
        }
        func_0x000109a84868(&uStack_2b0,param_3 + 2);
        goto LAB_109a7bbc8;
      }
    }
    (**(code **)(*ppuVar9 + 0x18))(ppuVar9,param_3,&uStack_2b0,0xffffffff);
  }
LAB_109a7bbe8:
  uStack_310 = 0x42ff0000;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_30c = 0;
  lStack_2d0 = (long)&uStack_30c + 4;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2e4 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  puStack_2c8 = &uStack_2c0;
  FUN_109a82eb0(CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0))))))),
                0x3ff0000000000000,auStack_1d0,&PTR_PTR_1132e8f10,uVar13,&uStack_250,&uStack_2b0,
                &uStack_310,&uStack_1f0);
  FUN_109a77b50(param_4,auStack_1d0);
  FUN_10918eb6c(auStack_1d0);
  if (lStack_2d8 != 0) {
    piVar1 = (int *)(lStack_2d8 + 0x14);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  lStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  if (0 < (int)uStack_30c) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_2d0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_30c);
  }
  if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_278 != 0) {
    piVar1 = (int *)(lStack_278 + 0x14);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < iStack_2ac) {
    lVar12 = 0;
    do {
      puStack_270[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_2ac);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < iStack_24c) {
    lVar12 = 0;
    do {
      puStack_210[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  return;
}



/* Entry: 109a7bfc0; end: 109a7c0d3;  */

void FUN_109a7bfc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_90,0xffffffff);
  FUN_109a7c0d4(param_4,param_3,&uStack_90);
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
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a7c0d4; end: 109a7c2b7;  */

void FUN_109a7c0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_250 = 0x42ff0000;
  lStack_210 = (long)&uStack_24c + 4;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_208 = &uStack_200;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(0x3ff0000000000000,0,auStack_190,&PTR_PTR_1132e8f18,param_2,param_3,&uStack_1f0,
                &uStack_250,&uStack_270);
  FUN_109a77b50(param_1,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
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
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < (int)uStack_24c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_210 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7c2b8; end: 109a7c3f3;  */

void FUN_109a7c2b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 0x20) != 0) {
    uVar1 = (ulong)*(uint *)(param_3 + 0x14);
    if ((int)*(uint *)(param_3 + 0x14) < 3) {
      lVar2 = (long)*(int *)(param_3 + 0x1c) * (long)*(int *)(param_3 + 0x18);
    }
    else {
      lVar2 = 1;
      piVar4 = *(int **)(param_3 + 0x50);
      do {
        lVar2 = lVar2 * *piVar4;
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar1 != 0);
    }
    if (lVar2 != 0) {
      lVar2 = 0x50;
      goto LAB_109a7c34c;
    }
  }
  if (*(long *)(param_3 + 0x80) == 0) {
    lVar2 = 0xb0;
  }
  else {
    uVar1 = (ulong)*(uint *)(param_3 + 0x74);
    if ((int)*(uint *)(param_3 + 0x74) < 3) {
      lVar3 = (long)*(int *)(param_3 + 0x7c) * (long)*(int *)(param_3 + 0x78);
    }
    else {
      lVar3 = 1;
      piVar4 = *(int **)(param_3 + 0xb0);
      do {
        lVar3 = lVar3 * *piVar4;
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar1 != 0);
    }
    lVar2 = 0xb0;
    if (lVar3 != 0) {
      lVar2 = 0x110;
    }
  }
LAB_109a7c34c:
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + lVar2),4);
  *param_1 = uVar5;
  return;
}



/* Entry: 109a7c3f4; end: 109a7c503;  */

undefined8 * FUN_109a7c3f4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = &PTR_PTR_1132e8ef0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar9 = param_2[2];
  param_1[5] = param_2[3];
  param_1[4] = uVar9;
  uVar9 = param_2[4];
  param_1[7] = param_2[5];
  param_1[6] = uVar9;
  lVar4 = param_2[7];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[0xc] = 0;
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[0xb];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    func_0x000109a84868();
  }
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



/* Entry: 109a7c504; end: 109a7c5d7;  */

void FUN_109a7c504(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x88))((long *)*param_2,param_2,param_3,param_1);
  return;
}



/* Entry: 109a7c5d8; end: 109a7c6f3;  */

void FUN_109a7c5d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auStack_1a0 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_3;
  FUN_109a7c3f4(auStack_1a0);
  (**(code **)(*plVar1 + 0x88))(param_2,plVar1,param_3,auStack_1a0,param_1);
  FUN_10918eb6c(auStack_1a0);
  return;
}



/* Entry: 109a7c6f4; end: 109a7c7d3;  */

void FUN_109a7c6f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_109a7968c(0x3ff0000000000000,0x3ff0000000000000,param_1,param_2,param_3,&uStack_40);
  return;
}



/* Entry: 109a7c7d4; end: 109a7c957;  */

void FUN_109a7c7d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(0x3ff0000000000000,0,param_1,param_2,&uStack_80,param_3);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7c958; end: 109a7ca63;  */

void FUN_109a7c958(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_2;
  FUN_109a7c3f4(auStack_190);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2,auStack_190,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7ca64; end: 109a7cb73;  */

void FUN_109a7ca64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_3;
  FUN_109a7c3f4(auStack_190,param_2);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_3,auStack_190,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7cb74; end: 109a7cc47;  */

void FUN_109a7cb74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x70))((long *)*param_2,param_2,param_3,param_1);
  return;
}



/* Entry: 109a7cc48; end: 109a7cd1b;  */

void FUN_109a7cc48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,param_2,param_3,param_1);
  return;
}



/* Entry: 109a7cd1c; end: 109a7cdfb;  */

void FUN_109a7cd1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_109a7968c(0x3ff0000000000000,0xbff0000000000000,param_1,param_2,param_3,&uStack_40);
  return;
}



/* Entry: 109a7cdfc; end: 109a7cf93;  */

void FUN_109a7cdfc(undefined8 *param_1,undefined8 param_2,double *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  dStack_a0 = -*param_3;
  dStack_98 = -param_3[1];
  dStack_90 = -param_3[2];
  dStack_88 = -param_3[3];
  puStack_38 = &uStack_30;
  FUN_109a7968c(0x3ff0000000000000,0,param_1,param_2,&uStack_80,&dStack_a0);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7cf94; end: 109a7d113;  */

void FUN_109a7cf94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(0xbff0000000000000,0,param_1,param_3,&uStack_80,param_2);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7d114; end: 109a7d21f;  */

void FUN_109a7d114(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_2;
  FUN_109a7c3f4(auStack_190);
  (**(code **)(*plVar1 + 0x78))(plVar1,param_2,auStack_190,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7d220; end: 109a7d32f;  */

void FUN_109a7d220(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_3;
  FUN_109a7c3f4(auStack_190,param_2);
  (**(code **)(*plVar1 + 0x78))(plVar1,auStack_190,param_3,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7d330; end: 109a7d403;  */

void FUN_109a7d330(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_3 + 0x80))((long *)*param_3,param_2,param_3,param_1);
  return;
}



/* Entry: 109a7d404; end: 109a7d4d7;  */

void FUN_109a7d404(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x78))((long *)*param_2,param_2,param_3,param_1);
  return;
}



/* Entry: 109a7d4d8; end: 109a7d65f;  */

void FUN_109a7d4d8(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(0xbff0000000000000,0,param_1,param_2,&uStack_80,&uStack_a0);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7d660; end: 109a7d73f;  */

void FUN_109a7d660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(*(long *)*param_2 + 0x80))((long *)*param_2,&uStack_40,param_2,param_1);
  return;
}



/* Entry: 109a7d740; end: 109a7d903;  */

void FUN_109a7d740(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_210 = 0x42ff0000;
  lStack_1d0 = (long)&uStack_20c + 4;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puStack_1c8 = &uStack_1c0;
  FUN_109a82eb0(0x3ff0000000000000,0x3ff0000000000000,auStack_190,&PTR_PTR_1132e8f10,0,param_2,
                param_3,&uStack_210,&uStack_1b0);
  FUN_109a77b50(param_1,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_1d8 != 0) {
    piVar1 = (int *)(lStack_1d8 + 0x14);
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
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (0 < (int)uStack_20c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1d0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_20c);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  return;
}



/* Entry: 109a7d904; end: 109a7da87;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7d9e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7d904(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(param_2,0,param_1,param_3,&uStack_80,&uStack_a0);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7da88; end: 109a7dc0b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7db64 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7da88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(param_2,0,param_1,param_3,&uStack_80,&uStack_a0);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7dc0c; end: 109a7dd17;  */

void FUN_109a7dc0c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_2;
  FUN_109a7c3f4(auStack_190);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,auStack_190,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7dd18; end: 109a7de27;  */

void FUN_109a7dd18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auStack_190 [352];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  plVar1 = (long *)*param_3;
  FUN_109a7c3f4(auStack_190,param_2);
  (**(code **)(*plVar1 + 0xb8))(plVar1,auStack_190,param_3,param_1);
  FUN_10918eb6c(auStack_190);
  return;
}



/* Entry: 109a7de28; end: 109a7def7;  */

void FUN_109a7de28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x90))((long *)*param_2,param_2,param_1);
  return;
}



/* Entry: 109a7def8; end: 109a7dfc7;  */

void FUN_109a7def8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0x90))((long *)*param_2,param_2,param_1);
  return;
}



/* Entry: 109a7dfc8; end: 109a7e097;  */

void FUN_109a7dfc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7a7c8(0x3ff0000000000000,param_1,0x2f,param_2,param_3);
  return;
}



/* Entry: 109a7e098; end: 109a7e223;  */

void FUN_109a7e098(undefined8 *param_1,double param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_38 = &uStack_30;
  FUN_109a7968c(1.0 / param_2,0,param_1,param_3,&uStack_80,&uStack_a0);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109a7e224; end: 109a7e2fb;  */

void FUN_109a7e224(undefined8 *param_1,double param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0xd] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  (**(code **)(*(long *)*param_3 + 0x90))(1.0 / param_2,(long *)*param_3,param_3,param_1);
  return;
}



/* Entry: 109a7e2fc; end: 109a7e3cb;  */

void FUN_109a7e2fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  (**(code **)(*(long *)*param_2 + 0xa0))((long *)*param_2,param_2,param_1);
  return;
}



/* Entry: 109a7e3cc; end: 109a7e507;  */

void FUN_109a7e3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(0x3ff0000000000000,0x3ff0000000000000,auStack_190,&PTR_PTR_1132e8f08,param_2,param_3
                ,param_4,&uStack_1f0,&uStack_210);
  FUN_109a77b50(param_1,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7e508; end: 109a7e5cf;  */

void FUN_109a7e508(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e5d0(param_1,3,param_2);
  return;
}



/* Entry: 109a7e5d0; end: 109a7e7af;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a7e668 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a7e5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_250 = 0x42ff0000;
  lStack_210 = (long)&uStack_24c + 4;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_208 = &uStack_200;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(param_1,0x3ff0000000000000,auStack_190,&PTR_PTR_1132e8f08,param_3,param_4,
                &uStack_1f0,&uStack_250,&uStack_270);
  FUN_109a77b50(param_2,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
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
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < (int)uStack_24c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_210 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7e7b0; end: 109a7e87b;  */

void FUN_109a7e7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e3cc(param_1,0,param_2,param_3);
  return;
}



/* Entry: 109a7e87c; end: 109a7e943;  */

void FUN_109a7e87c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e5d0(param_1,0,param_2);
  return;
}



/* Entry: 109a7e944; end: 109a7ea0b;  */

void FUN_109a7e944(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e5d0(param_1,5,param_2);
  return;
}



/* Entry: 109a7ea0c; end: 109a7ead3;  */

void FUN_109a7ea0c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e5d0(param_1,2,param_2);
  return;
}



/* Entry: 109a7ead4; end: 109a7eb9b;  */

void FUN_109a7ead4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7e5d0(param_1,1,param_2);
  return;
}



/* Entry: 109a7eb9c; end: 109a7ec6b;  */

void FUN_109a7eb9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7a7c8(0x3ff0000000000000,param_1,0x6d,param_2,param_3);
  return;
}



/* Entry: 109a7ec6c; end: 109a7ee4b;  */

void FUN_109a7ec6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uStack_1f0 = 0x42ff0000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b0 = (long)&uStack_1ec + 4;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_250 = 0x42ff0000;
  lStack_210 = (long)&uStack_24c + 4;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  puStack_208 = &uStack_200;
  puStack_1a8 = &uStack_1a0;
  FUN_109a82eb0(0x3ff0000000000000,0,auStack_190,&PTR_PTR_1132e8f00,param_2,param_3,&uStack_1f0,
                &uStack_250,param_4);
  FUN_109a77b50(param_1,auStack_190);
  FUN_10918eb6c(auStack_190);
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
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
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < (int)uStack_24c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_210 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar1 = (int *)(lStack_1b8 + 0x14);
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
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < (int)uStack_1ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  return;
}



/* Entry: 109a7ee4c; end: 109a7ef1b;  */

void FUN_109a7ee4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7a7c8(0x3ff0000000000000,param_1,0x4d,param_2,param_3);
  return;
}



/* Entry: 109a7ef1c; end: 109a7efeb;  */

void FUN_109a7ef1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7a7c8(0x3ff0000000000000,param_1,0x26,param_2,param_3);
  return;
}



/* Entry: 109a7efec; end: 109a7f0b7;  */

void FUN_109a7efec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7ec6c(param_1,0x26,param_2,param_3);
  return;
}



/* Entry: 109a7f0b8; end: 109a7f187;  */

void FUN_109a7f0b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7a7c8(0x3ff0000000000000,param_1,0x7c,param_2,param_3);
  return;
}



/* Entry: 109a7f188; end: 109a7f25f;  */

void FUN_109a7f188(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_109a7ec6c(param_1,0x7e,param_2,&uStack_40);
  return;
}



/* Entry: 109a7f260; end: 109a7f337;  */

void FUN_109a7f260(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_109a7ec6c(param_1,0x61,param_2,&uStack_40);
  return;
}



/* Entry: 109a7f338; end: 109a7f40f;  */

void FUN_109a7f338(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  ppuVar5 = (undefined **)*param_2;
  if (ppuVar5 == &PTR_PTR_1132e8f20 || ppuVar5 == &PTR_PTR_1132e8f18) {
    puVar6 = param_2[3];
LAB_109a7f374:
    *param_1 = puVar6;
  }
  else {
    if (ppuVar5 == &PTR_PTR_1132e8f10) {
      uVar3 = *(undefined4 *)((long)param_2 + 0x7c);
      uVar4 = *(undefined4 *)(param_2 + 3);
    }
    else {
      if (ppuVar5 != &PTR_PTR_1132e8f28) {
        ppuVar1 = param_2;
        FUN_109a830cc();
        if (ppuVar5 != ppuVar1) {
          plVar2 = (long *)*param_2;
          if (plVar2 == (long *)0x0) {
            *param_1 = 0;
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000109a7f3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 200))(param_1,plVar2,param_2);
          return;
        }
        puVar6 = (undefined *)NEON_rev64(*(undefined8 *)param_2[10],4);
        goto LAB_109a7f374;
      }
      uVar3 = *(undefined4 *)((long)param_2 + 0x7c);
      uVar4 = *(undefined4 *)((long)param_2 + 0x1c);
    }
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 4) = uVar4;
  }
  return;
}



/* Entry: 109a7f410; end: 109a7f483;  */

undefined ** FUN_109a7f410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = param_1;
  FUN_109a830cc();
  if (puVar3 == puVar1) {
    ppuVar2 = (undefined **)(ulong)(*(uint *)(param_1 + 2) & 0xfff);
  }
  else {
    ppuVar2 = (undefined **)*param_1;
    if (ppuVar2 == &PTR_PTR_1132e8f08) {
      ppuVar2 = (undefined **)0x0;
    }
    else {
      if (ppuVar2 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109a7f45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*ppuVar2 + 0xd0))(ppuVar2,param_1);
        return ppuVar2;
      }
      ppuVar2 = (undefined **)0xffffffff;
    }
  }
  return ppuVar2;
}



/* Entry: 109a7f484; end: 109a7f687;  */

void FUN_109a7f484(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  uVar8 = (uint)param_4;
  if (uVar8 != 0xffffffff) {
    uVar3 = *(uint *)(param_2 + 0x10);
    if ((uVar3 & 0xfff) != uVar8) {
      if (((uVar3 ^ uVar8) & 0xff8) == 0) {
        puStack_48 = (undefined4 *)CONCAT44(puStack_48._4_4_,0x2010000);
        uStack_38 = 0;
        puStack_40 = param_3;
        FUN_109a41858(0x3ff0000000000000,0,(uint *)(param_2 + 0x10),&puStack_48,param_4);
        return;
      }
      puVar7 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puStack_48 = puVar7 + 1;
      puStack_40 = (undefined4 *)0x22;
      *(undefined8 *)(puVar7 + 3) = 0x29657079745f284e;
      *(undefined8 *)(puVar7 + 1) = 0x435f54414d5f5643;
      *(undefined1 *)((long)puVar7 + 0x26) = 0;
      *(undefined2 *)(puVar7 + 9) = 0x2928;
      *(undefined8 *)(puVar7 + 7) = 0x736c656e6e616863;
      *(undefined8 *)(puVar7 + 5) = 0x2e612e65203d3d20;
      FUN_109ac3188(0xffffff29,&puStack_48,&UNK_10f57bc20,&UNK_10f59784b,0x4ae);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a7f65c);
      (*pcVar6)();
    }
  }
  puVar7 = (undefined4 *)(param_2 + 0x10);
  if (puVar7 == param_3) {
    return;
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x48) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_3);
    }
  }
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  if ((int)param_3[1] < 1) {
    *param_3 = *puVar7;
LAB_109a7f58c:
    if (*(int *)(param_2 + 0x14) < 3) {
      param_3[1] = *(int *)(param_2 + 0x14);
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 0x18);
      puVar10 = *(undefined8 **)(param_2 + 0x58);
      puVar12 = *(undefined8 **)(param_3 + 0x12);
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      goto LAB_109a7f5cc;
    }
  }
  else {
    lVar9 = 0;
    lVar11 = *(long *)(param_3 + 0x10);
    do {
      *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_3[1]);
    *param_3 = *puVar7;
    if ((int)param_3[1] < 3) goto LAB_109a7f58c;
  }
  func_0x000109a84868(param_3,puVar7);
LAB_109a7f5cc:
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_3 + 4) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_3 + 8) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_3 + 0xc) = uVar13;
  return;
}



/* Entry: 109a7f688; end: 109a7fdc7;  */

void FUN_109a7f688(double *param_1,long param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  long lVar14;
  double *pdVar15;
  double dVar16;
  long lVar17;
  long lVar18;
  undefined4 auStack_128 [2];
  double *pdStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [2];
  double *pdStack_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  double *pdStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double *pdStack_78;
  double dStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_e0._0_4_ = 0x42ff0000;
  uStack_d4 = 0;
  uStack_d0 = 0;
  stack0xffffffffffffff24 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  puStack_a0 = auStack_d8;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  pdVar1 = param_3 + 2;
  pdVar11 = param_3;
  pdVar15 = pdVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    pdVar11 = (double *)auStack_e0;
    pdVar15 = (double *)&uStack_d0;
  }
  pdVar2 = (double *)(param_2 + 0x140);
  if (*(long *)(param_2 + 0x80) == 0) {
    if (((*(double *)(param_2 + 0x148) == 0.0) && (*(double *)(param_2 + 0x150) == 0.0)) &&
       (*(double *)(param_2 + 0x158) == 0.0)) {
      dVar16 = *(double *)(param_2 + 0x130);
      if ((*pdVar15 != *pdVar1) || (ABS(dVar16) != 1.0)) {
        dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x2010000);
        dStack_70 = 0.0;
        pdVar12 = (double *)(param_2 + 0x10);
        param_1 = param_4;
        pdStack_78 = param_3;
        FUN_109a41858(dVar16,*(undefined8 *)(param_2 + 0x140),pdVar12,&dStack_80);
        goto LAB_109a7fcc0;
      }
    }
    else {
      dVar16 = *(double *)(param_2 + 0x130);
    }
    if (dVar16 == 1.0) {
      pdStack_78 = (double *)(param_2 + 0x10);
      dStack_70 = 0.0;
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
      auStack_f8[0] = 0xc1020006;
      uStack_e8 = 0x400000001;
      auStack_110[0] = 0x2010000;
      uStack_100 = 0;
      pdStack_108 = pdVar11;
      pdStack_f0 = pdVar2;
      FUN_109a91d90();
      pdVar12 = &dStack_80;
      param_4 = (double *)auStack_110;
      FUN_109a293c4(pdVar12,auStack_f8,param_4,param_1,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
    }
    else if (dVar16 == -1.0) {
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,0xc1020006);
      dStack_70 = 8.48798316435515e-314;
      pdStack_f0 = (double *)(param_2 + 0x10);
      uStack_e8 = 0;
      auStack_f8[0] = 0x1010000;
      auStack_110[0] = 0x2010000;
      uStack_100 = 0;
      pdStack_108 = pdVar11;
      pdStack_78 = pdVar2;
      FUN_109a91d90();
      pdVar12 = &dStack_80;
      param_4 = (double *)auStack_110;
      FUN_109a293c4(pdVar12,auStack_f8,param_4,param_1,0xffffffff,&PTR_DAT_1132e8c10,0,0);
    }
    else {
      dStack_80._0_4_ = 0x2010000;
      dStack_70 = 0.0;
      param_1 = (double *)(param_2 + 0x10);
      pdStack_78 = pdVar11;
      FUN_109a41858(dVar16,0,param_1,&dStack_80,*(uint *)param_1 & 0xfff);
      dStack_70 = 0.0;
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
      auStack_f8[0] = 0xc1020006;
      uStack_e8 = 0x400000001;
      auStack_110[0] = 0x2010000;
      uStack_100 = 0;
      pdStack_108 = pdVar11;
      pdStack_f0 = pdVar2;
      pdStack_78 = pdVar11;
      FUN_109a91d90();
      pdVar12 = &dStack_80;
      param_4 = (double *)auStack_110;
      FUN_109a293c4(pdVar12,auStack_f8,param_4,param_1,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
    }
  }
  else {
    pdStack_108 = (double *)(param_2 + 0x70);
    dStack_70 = *(double *)(param_2 + 0x140);
    lVar14 = -(ulong)(*(double *)(param_2 + 0x150) == 0.0);
    lVar9 = -(ulong)(*(double *)(param_2 + 0x158) == 0.0);
    lVar17 = -(ulong)(dStack_70 == 0.0);
    lVar18 = -(ulong)(*(double *)(param_2 + 0x148) == 0.0);
    auVar7[1] = ~(byte)((ulong)lVar17 >> 8);
    auVar7[0] = ~(byte)lVar17;
    auVar7[2] = ~(byte)((ulong)lVar17 >> 0x10);
    auVar7[3] = ~(byte)((ulong)lVar17 >> 0x18);
    auVar7[4] = ~(byte)lVar18;
    auVar7[5] = ~(byte)((ulong)lVar18 >> 8);
    auVar7[6] = ~(byte)((ulong)lVar18 >> 0x10);
    auVar7[7] = ~(byte)((ulong)lVar18 >> 0x18);
    auVar7[8] = ~(byte)lVar14;
    auVar7[9] = ~(byte)((ulong)lVar14 >> 8);
    auVar7[10] = ~(byte)((ulong)lVar14 >> 0x10);
    auVar7[0xb] = ~(byte)((ulong)lVar14 >> 0x18);
    auVar7[0xc] = ~(byte)lVar9;
    auVar7[0xd] = ~(byte)((ulong)lVar9 >> 8);
    auVar7[0xe] = ~(byte)((ulong)lVar9 >> 0x10);
    auVar7[0xf] = ~(byte)((ulong)lVar9 >> 0x18);
    uVar8 = NEON_umaxv(auVar7,4);
    if ((((uVar8 & 1) == 0) || (*(double *)(param_2 + 0x148) != 0.0)) ||
       ((*(double *)(param_2 + 0x150) != 0.0 || (*(double *)(param_2 + 0x158) != 0.0)))) {
      dVar16 = *(double *)(param_2 + 0x130);
      pdStack_78 = *(double **)(param_2 + 0x138);
      pdStack_f0 = pdStack_108;
      if (dVar16 == 1.0) {
        if ((double)pdStack_78 == 1.0) {
          dStack_70 = 0.0;
          pdStack_78 = (double *)(param_2 + 0x10);
          dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
          uStack_e8 = 0;
          auStack_f8[0] = 0x1010000;
          auStack_110[0] = 0x2010000;
          uStack_100 = 0;
          pdStack_108 = pdVar11;
          FUN_109a91d90();
          pdVar10 = &dStack_80;
          pdVar13 = (double *)auStack_110;
          FUN_109a293c4(pdVar10,auStack_f8,pdVar13,param_1,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
        }
        else if ((double)pdStack_78 == -1.0) {
          dStack_70 = 0.0;
          pdStack_78 = (double *)(param_2 + 0x10);
          dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
          uStack_e8 = 0;
          auStack_f8[0] = 0x1010000;
          auStack_110[0] = 0x2010000;
          uStack_100 = 0;
          pdStack_108 = pdVar11;
          FUN_109a91d90();
          pdVar10 = &dStack_80;
          pdVar13 = (double *)auStack_110;
          FUN_109a293c4(pdVar10,auStack_f8,pdVar13,param_1,0xffffffff,&PTR_DAT_1132e8c10,0,0);
        }
        else {
          dStack_70 = 0.0;
          dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
          pdStack_f0 = (double *)(param_2 + 0x10);
          uStack_e8 = 0;
          auStack_f8[0] = 0x1010000;
          auStack_110[0] = 0x2010000;
          uStack_100 = 0;
          pdVar10 = &dStack_80;
          pdVar13 = (double *)auStack_110;
          pdStack_78 = pdStack_108;
          pdStack_108 = pdVar11;
          FUN_109a6d268(pdVar10,auStack_f8);
          param_1 = param_4;
        }
      }
      else if ((double)pdStack_78 == 1.0) {
        if (dVar16 == -1.0) {
          dStack_70 = 0.0;
          dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
          pdStack_f0 = (double *)(param_2 + 0x10);
          uStack_e8 = 0;
          auStack_f8[0] = 0x1010000;
          auStack_110[0] = 0x2010000;
          uStack_100 = 0;
          pdStack_78 = pdStack_108;
          pdStack_108 = pdVar11;
          FUN_109a91d90();
          pdVar10 = &dStack_80;
          pdVar13 = (double *)auStack_110;
          FUN_109a293c4(pdVar10,auStack_f8,pdVar13,param_1,0xffffffff,&PTR_DAT_1132e8c10,0,0);
        }
        else {
          dStack_70 = 0.0;
          pdStack_78 = (double *)(param_2 + 0x10);
          dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
          uStack_e8 = 0;
          auStack_f8[0] = 0x1010000;
          auStack_110[0] = 0x2010000;
          uStack_100 = 0;
          pdVar10 = &dStack_80;
          pdVar13 = (double *)auStack_110;
          pdStack_108 = pdVar11;
          FUN_109a6d268(dVar16,pdVar10,auStack_f8);
          param_1 = param_4;
        }
      }
      else {
        uStack_e8 = 0;
        pdStack_f0 = (double *)(param_2 + 0x10);
        auStack_f8[0] = 0x1010000;
        uStack_100 = 0;
        auStack_110[0] = 0x1010000;
        auStack_128[0] = 0x2010000;
        uStack_118 = 0;
        dStack_70 = 0.0;
        pdStack_120 = pdVar11;
        dStack_80 = dVar16;
        FUN_109a91d90();
        pdVar10 = (double *)auStack_f8;
        pdVar13 = (double *)auStack_128;
        FUN_109a293c4(pdVar10,auStack_110,pdVar13,param_1,0xffffffff,&PTR_FUN_1132e8d50,1,&dStack_80
                     );
      }
      if (((*(double *)(param_2 + 0x148) != 0.0) || (*(double *)(param_2 + 0x150) != 0.0)) ||
         (pdVar12 = pdVar10, param_4 = pdVar13, *(double *)(param_2 + 0x158) != 0.0)) {
        dStack_70 = 0.0;
        dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x1010000);
        auStack_f8[0] = 0xc1020006;
        uStack_e8 = 0x400000001;
        auStack_110[0] = 0x2010000;
        uStack_100 = 0;
        pdStack_108 = pdVar11;
        pdStack_f0 = pdVar2;
        pdStack_78 = pdVar11;
        FUN_109a91d90();
        pdVar12 = &dStack_80;
        param_4 = (double *)auStack_110;
        FUN_109a293c4(pdVar12,auStack_f8,param_4,pdVar10,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
        param_1 = pdVar10;
      }
    }
    else {
      uStack_e8 = 0;
      pdStack_f0 = (double *)(param_2 + 0x10);
      auStack_f8[0] = 0x1010000;
      uStack_100 = 0;
      auStack_110[0] = 0x1010000;
      auStack_128[0] = 0x2010000;
      uStack_118 = 0;
      pdStack_78 = *(double **)(param_2 + 0x138);
      dStack_80 = *(double *)(param_2 + 0x130);
      pdStack_120 = pdVar11;
      FUN_109a91d90();
      pdVar12 = (double *)auStack_f8;
      param_4 = (double *)auStack_128;
      FUN_109a293c4(pdVar12,auStack_110,param_4,param_1,0xffffffff,&PTR_FUN_1132e8d50,1,&dStack_80);
    }
  }
  if (*pdVar15 != *pdVar1) {
    dStack_80 = (double)CONCAT44(dStack_80._4_4_,0x2010000);
    dStack_70 = 0.0;
    param_4 = (double *)(ulong)(*(uint *)param_3 & 0xfff);
    pdStack_78 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,pdVar11,&dStack_80);
    pdVar12 = pdVar11;
  }
LAB_109a7fcc0:
  if (lStack_a8 != 0) {
    piVar3 = (int *)(lStack_a8 + 0x14);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      pdVar12 = (double *)auStack_e0;
      func_0x000109a848d4();
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < (int)auStack_e0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(puStack_a0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)auStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    pdVar12 = (double *)puStack_98[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(auStack_e0);
  __Unwind_Resume(pdVar12);
  func_0x000109a7fe24();
  param_1[0x28] = *param_4 + param_1[0x28];
  param_1[0x29] = param_4[1] + param_1[0x29];
  param_1[0x2a] = param_4[2] + param_1[0x2a];
  param_1[0x2b] = param_4[3] + param_1[0x2b];
  return;
}



/* Entry: 109a7fdc8; end: 109a8017b;  */

void FUN_109a7fdc8(undefined8 param_1,undefined8 param_2,double *param_3,long param_4)

{
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x140) = *param_3 + *(double *)(param_4 + 0x140);
  *(double *)(param_4 + 0x148) = param_3[1] + *(double *)(param_4 + 0x148);
  *(double *)(param_4 + 0x150) = param_3[2] + *(double *)(param_4 + 0x150);
  *(double *)(param_4 + 0x158) = param_3[3] + *(double *)(param_4 + 0x158);
  return;
}



/* Entry: 109a8017c; end: 109a801bf;  */

void FUN_109a8017c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x138) = *(double *)(param_4 + 0x138) * param_1;
  *(double *)(param_4 + 0x130) = *(double *)(param_4 + 0x130) * param_1;
  *(double *)(param_4 + 0x148) = *(double *)(param_4 + 0x148) * param_1;
  *(double *)(param_4 + 0x140) = *(double *)(param_4 + 0x140) * param_1;
  *(double *)(param_4 + 0x158) = *(double *)(param_4 + 0x158) * param_1;
  *(double *)(param_4 + 0x150) = *(double *)(param_4 + 0x150) * param_1;
  return;
}



/* Entry: 109a801c0; end: 109a80313;  */

/* WARNING: Removing unreachable block (ram,0x000109a802dc) */
/* WARNING: Removing unreachable block (ram,0x000109a802e4) */

void FUN_109a801c0(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 auStack_78 [6];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  if (((undefined **)*param_3 == &PTR_PTR_1132e8ef8) &&
     ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0)))) {
    lVar10 = -(ulong)((double)param_3[0x2a] == 0.0);
    lVar11 = -(ulong)((double)param_3[0x2b] == 0.0);
    lVar9 = -(ulong)((double)param_3[0x28] == 0.0);
    lVar8 = -(ulong)((double)param_3[0x29] == 0.0);
    auVar5[1] = ~(byte)((ulong)lVar9 >> 8);
    auVar5[0] = ~(byte)lVar9;
    auVar5[2] = ~(byte)((ulong)lVar9 >> 0x10);
    auVar5[3] = ~(byte)((ulong)lVar9 >> 0x18);
    auVar5[4] = ~(byte)lVar8;
    auVar5[5] = ~(byte)((ulong)lVar8 >> 8);
    auVar5[6] = ~(byte)((ulong)lVar8 >> 0x10);
    auVar5[7] = ~(byte)((ulong)lVar8 >> 0x18);
    auVar5[8] = ~(byte)lVar10;
    auVar5[9] = ~(byte)((ulong)lVar10 >> 8);
    auVar5[10] = ~(byte)((ulong)lVar10 >> 0x10);
    auVar5[0xb] = ~(byte)((ulong)lVar10 >> 0x18);
    auVar5[0xc] = ~(byte)lVar11;
    auVar5[0xd] = ~(byte)((ulong)lVar11 >> 8);
    auVar5[0xe] = ~(byte)((ulong)lVar11 >> 0x10);
    auVar5[0xf] = ~(byte)((ulong)lVar11 >> 0x18);
    uVar6 = NEON_umaxv(auVar5,4);
    if ((uVar6 & 1) == 0) {
      uStack_80 = 0x42ff0000;
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      iStack_7c = 0;
      auStack_78[0] = 0;
      auStack_78[5] = 0;
      uStack_60._0_4_ = 0;
      auStack_78[3] = 0;
      auStack_78[4] = 0;
      uStack_58._4_4_ = 0;
      uStack_60._4_4_ = 0;
      uStack_58._0_4_ = 0;
      lStack_48 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      FUN_109a7a7c8(param_1 / (double)param_3[0x26],param_4,0x2f,param_3 + 2,&uStack_80);
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
      if (0 < iStack_7c) {
        lVar9 = 0;
        do {
          auStack_78[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_7c);
      }
      return;
    }
  }
  uStack_a0 = 0x42ff0000;
  uStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  auStack_78[4] = 0;
  auStack_78[5] = 0;
  auStack_78[3] = 0;
  auStack_78[1] = 0;
  auStack_78[2] = 0;
  iStack_7c = 0;
  auStack_78[0] = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  lStack_48 = 0;
  uStack_58 = &uStack_50;
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_a0,0xffffffff);
  uStack_100 = 0x42ff0000;
  lStack_c0 = (long)&uStack_fc + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_b8 = &uStack_b0;
  FUN_109a7a7c8(param_1,param_4,0x2f,&uStack_a0,&uStack_100);
  lVar9 = uStack_60;
  puVar7 = uStack_58;
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
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
      lVar9 = uStack_60;
      puVar7 = uStack_58;
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (0 < (int)uStack_fc) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_fc);
  }
  uStack_60 = lVar9;
  uStack_58 = puVar7;
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  if (CONCAT44(auStack_78[5],auStack_78[4]) != 0) {
    piVar1 = (int *)(CONCAT44(auStack_78[5],auStack_78[4]) + 0x14);
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
  auStack_78[4] = 0;
  auStack_78[5] = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  auStack_78[0] = 0;
  auStack_78[1] = 0;
  uStack_80 = 0;
  iStack_7c = 0;
  if (0 < (int)uStack_9c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_60 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_9c);
  }
  if (uStack_58 != &uStack_50 && uStack_58 != (undefined4 *)0x0) {
    _free(*(undefined8 *)(uStack_58 + -2));
  }
  return;
}



/* Entry: 109a80314; end: 109a8036f;  */

void FUN_109a80314(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [272];
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  
  if (((undefined **)*param_2 == &PTR_PTR_1132e8ef8) &&
     ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) {
    lVar8 = -(ulong)((double)param_2[0x2a] == 0.0);
    lVar9 = -(ulong)((double)param_2[0x2b] == 0.0);
    lVar10 = -(ulong)((double)param_2[0x28] == 0.0);
    lVar7 = -(ulong)((double)param_2[0x29] == 0.0);
    auVar5[1] = ~(byte)((ulong)lVar10 >> 8);
    auVar5[0] = ~(byte)lVar10;
    auVar5[2] = ~(byte)((ulong)lVar10 >> 0x10);
    auVar5[3] = ~(byte)((ulong)lVar10 >> 0x18);
    auVar5[4] = ~(byte)lVar7;
    auVar5[5] = ~(byte)((ulong)lVar7 >> 8);
    auVar5[6] = ~(byte)((ulong)lVar7 >> 0x10);
    auVar5[7] = ~(byte)((ulong)lVar7 >> 0x18);
    auVar5[8] = ~(byte)lVar8;
    auVar5[9] = ~(byte)((ulong)lVar8 >> 8);
    auVar5[10] = ~(byte)((ulong)lVar8 >> 0x10);
    auVar5[0xb] = ~(byte)((ulong)lVar8 >> 0x18);
    auVar5[0xc] = ~(byte)lVar9;
    auVar5[0xd] = ~(byte)((ulong)lVar9 >> 8);
    auVar5[0xe] = ~(byte)((ulong)lVar9 >> 0x10);
    auVar5[0xf] = ~(byte)((ulong)lVar9 >> 0x18);
    uVar6 = NEON_umaxv(auVar5,4);
    if ((uVar6 & 1) == 0) {
      uStack_1f0 = 0x42ff0000;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1ec = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      lStack_1b0 = (long)&uStack_1ec + 4;
      uStack_1c4 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_250 = 0x42ff0000;
      lStack_210 = (long)&uStack_24c + 4;
      uStack_244 = 0;
      uStack_240 = 0;
      uStack_24c = 0;
      uStack_234 = 0;
      uStack_230 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_224 = 0;
      uStack_22c = 0;
      uStack_228 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      puStack_208 = &uStack_200;
      puStack_1a8 = &uStack_1a0;
      FUN_109a82eb0(auStack_190,&PTR_PTR_1132e8f20,0,param_2 + 2,&uStack_1f0,&uStack_250,&uStack_270
                   );
      FUN_109a77b50(param_3,auStack_190);
      FUN_10918eb6c(auStack_190);
      if (lStack_218 != 0) {
        piVar1 = (int *)(lStack_218 + 0x14);
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
          func_0x000109a848d4(&uStack_250);
        }
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      if (0 < (int)uStack_24c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_210 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_24c);
      }
      if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
        _free(puStack_208[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar1 = (int *)(lStack_1b8 + 0x14);
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
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < (int)uStack_1ec) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_1b0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_1ec);
      }
      if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
        _free(puStack_1a8[-1]);
      }
      return;
    }
  }
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  lStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  puStack_38 = &stack0xffffffffffffffd0;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_80,0xffffffff);
  FUN_109a7b638(param_3,&uStack_80);
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
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_7c);
  }
  if (puStack_38 != &stack0xffffffffffffffd0 && puStack_38 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_38 + -8));
  }
  return;
}



/* Entry: 109a80370; end: 109a80413;  */

void FUN_109a80370(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [160];
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar6 = (double)param_2[0x26];
  dVar8 = (double)param_2[0x27];
  if ((param_2[0x10] == 0) || (dVar8 == 0.0)) {
    if (ABS(dVar6) == 1.0) {
      FUN_109a7ec6c(param_3,0x61,param_2 + 2,&stack0xffffffffffffffd0);
      return;
    }
    if (param_2[0x10] == 0) goto FUN_109a7b364;
  }
  bVar4 = false;
  if ((dVar8 + dVar6 == 0.0) && (bVar4 = false, !NAN(dVar8 * dVar6))) {
    bVar4 = dVar8 * dVar6 == -1.0;
  }
  if (bVar4) {
    uStack_1f0 = 0x42ff0000;
    lStack_1b0 = (long)&uStack_1ec + 4;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uVar7 = 0x3ff0000000000000;
    if (param_2[0x10] == 0) {
      uVar7 = 0;
    }
    puStack_1a8 = &uStack_1a0;
    FUN_109a82eb0(0x3ff0000000000000,uVar7,auStack_190,&PTR_PTR_1132e8f00,0x61,param_2 + 2,
                  param_2 + 0xe,&uStack_1f0,&uStack_210);
    FUN_109a77b50(param_3,auStack_190);
    FUN_10918eb6c(auStack_190);
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
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
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    if (0 < (int)uStack_1ec) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_1b0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_1ec);
    }
    if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
      _free(puStack_1a8[-1]);
    }
    return;
  }
FUN_109a7b364:
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_90,0xffffffff);
  uStack_f0 = 0x42ff0000;
  lStack_b0 = (long)&uStack_ec + 4;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &uStack_a0;
  FUN_109a7a7c8(0x3ff0000000000000,param_3,0x61,&uStack_90,&uStack_f0);
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
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < (int)uStack_ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_ec);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
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
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a80414; end: 109a80bef;  */

void FUN_109a80414(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_d0 [2];
  undefined4 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  
  uStack_b8 = 0x42ff0000;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_78 = (long)&uStack_b4 + 4;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  lStack_80 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  plVar1 = (long *)(param_3 + 4);
  uStack_68 = 0;
  uStack_60 = 0;
  puVar8 = param_3;
  plVar9 = plVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    puVar8 = &uStack_b8;
    plVar9 = (long *)&uStack_a8;
  }
  iVar3 = *(int *)(param_2 + 8);
  puStack_70 = &uStack_68;
  if (iVar3 == 0x2f) {
    if (*(long *)(param_2 + 0x80) == 0) {
      uStack_100 = *(undefined8 *)(param_2 + 0x130);
      puStack_c8 = (undefined4 *)(param_2 + 0x10);
      uStack_c0 = 0;
      auStack_d0[0] = 0x1010000;
      auStack_e8[0] = 0x2010000;
      uStack_d8 = 0;
      puStack_e0 = puVar8;
      FUN_109a91d90();
      FUN_109a293c4(auStack_d0,auStack_d0,auStack_e8,param_1,0xffffffff,&PTR_DAT_1132e8d10,1,
                    &uStack_100);
    }
    else {
      uStack_c0 = 0;
      puStack_e0 = (undefined4 *)(param_2 + 0x70);
      puStack_c8 = (undefined4 *)(param_2 + 0x10);
      auStack_d0[0] = 0x1010000;
      uStack_d8 = 0;
      auStack_e8[0] = 0x1010000;
      uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
      uStack_f0 = 0;
      pcStack_58 = *(code **)(param_2 + 0x130);
      puStack_f8 = puVar8;
      FUN_109a91d90();
      FUN_109a293c4(auStack_d0,auStack_e8,&uStack_100,param_1,0xffffffff,&PTR_FUN_1132e8cd0,1,
                    &pcStack_58);
    }
  }
  else if (iVar3 == 0x2a) {
    uStack_c0 = 0;
    puStack_c8 = (undefined4 *)(param_2 + 0x10);
    auStack_d0[0] = 0x1010000;
    puStack_e0 = (undefined4 *)(param_2 + 0x70);
    uStack_d8 = 0;
    auStack_e8[0] = 0x1010000;
    uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
    uStack_f0 = 0;
    pcStack_58 = *(code **)(param_2 + 0x130);
    puStack_f8 = puVar8;
    FUN_109a91d90();
    FUN_109a293c4(auStack_d0,auStack_e8,&uStack_100,param_1,0xffffffff,&PTR_FUN_1132e8c90,1,
                  &pcStack_58);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x80);
    if (iVar3 == 0x7c) {
      if (lVar7 == 0) {
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_c0 = 0;
        auStack_d0[0] = 0x1010000;
        puStack_e0 = (undefined4 *)(param_2 + 0x140);
        auStack_e8[0] = 0xc1020006;
        uStack_d8 = 0x400000001;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = FUN_109a28f7c;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,10);
      }
      else {
        uStack_c0 = 0;
        puStack_e0 = (undefined4 *)(param_2 + 0x70);
        auStack_d0[0] = 0x1010000;
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_d8 = 0;
        auStack_e8[0] = 0x1010000;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = FUN_109a28f7c;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,10);
      }
    }
    else if (iVar3 == 0x5e) {
      if (lVar7 == 0) {
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_c0 = 0;
        auStack_d0[0] = 0x1010000;
        puStack_e0 = (undefined4 *)(param_2 + 0x140);
        auStack_e8[0] = 0xc1020006;
        uStack_d8 = 0x400000001;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = (code *)0x109a29078;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,0xb);
      }
      else {
        uStack_c0 = 0;
        puStack_e0 = (undefined4 *)(param_2 + 0x70);
        auStack_d0[0] = 0x1010000;
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_d8 = 0;
        auStack_e8[0] = 0x1010000;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = (code *)0x109a29078;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,0xb);
      }
    }
    else if (iVar3 == 0x26) {
      if (lVar7 == 0) {
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_c0 = 0;
        auStack_d0[0] = 0x1010000;
        puStack_e0 = (undefined4 *)(param_2 + 0x140);
        auStack_e8[0] = 0xc1020006;
        uStack_d8 = 0x400000001;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = FUN_109a27900;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,9);
      }
      else {
        uStack_c0 = 0;
        puStack_e0 = (undefined4 *)(param_2 + 0x70);
        auStack_d0[0] = 0x1010000;
        puStack_c8 = (undefined4 *)(param_2 + 0x10);
        uStack_d8 = 0;
        auStack_e8[0] = 0x1010000;
        uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
        uStack_f0 = 0;
        puStack_f8 = puVar8;
        FUN_109a91d90();
        pcStack_58 = FUN_109a27900;
        FUN_109a279fc(auStack_d0,auStack_e8,&uStack_100,param_1,&pcStack_58,1,9);
      }
    }
    else if ((iVar3 == 0x7e) && (lVar7 == 0)) {
      puStack_c8 = (undefined4 *)(param_2 + 0x10);
      uStack_c0 = 0;
      auStack_d0[0] = 0x1010000;
      auStack_e8[0] = 0x2010000;
      uStack_d8 = 0;
      puStack_e0 = puVar8;
      FUN_109a91d90();
      uStack_100 = 0x109a29174;
      FUN_109a279fc(auStack_d0,auStack_d0,auStack_e8,param_1,&uStack_100,1,0xc);
    }
    else {
      if (iVar3 < 0x61) {
        if (iVar3 == 0x4d) {
          func_0x000109a292ec(param_2 + 0x10,param_2 + 0x70,puVar8);
          goto LAB_109a80a6c;
        }
        if (iVar3 == 0x4e) {
          puStack_c8 = (undefined4 *)(param_2 + 0x10);
          uStack_c0 = 0;
          auStack_d0[0] = 0x1010000;
          puStack_e0 = (undefined4 *)(param_2 + 0x140);
          auStack_e8[0] = 0xc1020006;
          uStack_d8 = 0x100000001;
          uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
          uStack_f0 = 0;
          puStack_f8 = puVar8;
          func_0x000109a2924c(auStack_d0,auStack_e8,&uStack_100);
          goto LAB_109a80a6c;
        }
      }
      else if (iVar3 == 0x61) {
        if (lVar7 != 0) {
          uStack_c0 = 0;
          puStack_e0 = (undefined4 *)(param_2 + 0x70);
          auStack_d0[0] = 0x1010000;
          puStack_c8 = (undefined4 *)(param_2 + 0x10);
          uStack_d8 = 0;
          auStack_e8[0] = 0x1010000;
          uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
          uStack_f0 = 0;
          puStack_f8 = puVar8;
          FUN_109a2b240(auStack_d0,auStack_e8,&uStack_100);
          goto LAB_109a80a6c;
        }
      }
      else {
        if (iVar3 == 0x6e) {
          puStack_c8 = (undefined4 *)(param_2 + 0x10);
          uStack_c0 = 0;
          auStack_d0[0] = 0x1010000;
          puStack_e0 = (undefined4 *)(param_2 + 0x140);
          auStack_e8[0] = 0xc1020006;
          uStack_d8 = 0x100000001;
          uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
          uStack_f0 = 0;
          puStack_f8 = puVar8;
          func_0x000109a2929c(auStack_d0,auStack_e8,&uStack_100);
          goto LAB_109a80a6c;
        }
        if (iVar3 == 0x6d) {
          func_0x000109a29358(param_2 + 0x10,param_2 + 0x70,puVar8);
          goto LAB_109a80a6c;
        }
      }
      if ((iVar3 != 0x61) || (lVar7 != 0)) {
        FUN_109a38ed8(auStack_d0,&UNK_10f5978c8);
        FUN_109ac3188(0xfffffffe,auStack_d0,&UNK_10f57bc20,&UNK_10f59784b,0x54c);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109a80b64);
        (*pcVar6)();
      }
      puStack_c8 = (undefined4 *)(param_2 + 0x10);
      uStack_c0 = 0;
      auStack_d0[0] = 0x1010000;
      puStack_e0 = (undefined4 *)(param_2 + 0x140);
      auStack_e8[0] = 0xc1020006;
      uStack_d8 = 0x400000001;
      uStack_100 = CONCAT44(uStack_100._4_4_,0x2010000);
      uStack_f0 = 0;
      puStack_f8 = puVar8;
      FUN_109a2b240(auStack_d0,auStack_e8,&uStack_100);
    }
  }
LAB_109a80a6c:
  if (*plVar9 != *plVar1) {
    auStack_d0[0] = 0x2010000;
    uStack_c0 = 0;
    puStack_c8 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,puVar8,auStack_d0,param_4);
  }
  if (lStack_80 != 0) {
    piVar2 = (int *)(lStack_80 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_b8);
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if (0 < (int)uStack_b4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_78 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_b4);
  }
  if (puStack_70 != &uStack_68 && puStack_70 != (undefined8 *)0x0) {
    _free(puStack_70[-1]);
  }
  return;
}



/* Entry: 109a80bf0; end: 109a80c47;  */

void FUN_109a80bf0(double param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(int *)(param_3 + 1) != 0x2f) && (*(int *)(param_3 + 1) != 0x2a)) {
    uStack_a0 = 0x42ff0000;
    lStack_60 = (long)&uStack_9c + 4;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_9c = 0;
    lStack_68 = 0;
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    puStack_58 = &uStack_50;
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_a0,0xffffffff);
    uStack_100 = 0x42ff0000;
    lStack_c0 = (long)&uStack_fc + 4;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puStack_b8 = &uStack_b0;
    FUN_109a7968c(param_1,0,param_4,&uStack_a0,&uStack_100,&uStack_120);
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
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
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    if (0 < (int)uStack_fc) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_c0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_fc);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
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
        func_0x000109a848d4(&uStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    if (0 < (int)uStack_9c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_9c);
    }
    if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
      _free(puStack_58[-1]);
    }
    return;
  }
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x130) = param_1 * *(double *)(param_4 + 0x130);
  return;
}



/* Entry: 109a80c48; end: 109a80d7b;  */

/* WARNING: Removing unreachable block (ram,0x000109a80d44) */
/* WARNING: Removing unreachable block (ram,0x000109a80d4c) */

void FUN_109a80c48(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 auStack_78 [6];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  if ((*(int *)(param_3 + 1) == 0x2f) && ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0)))) {
    uStack_80 = 0x42ff0000;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    iStack_7c = 0;
    auStack_78[0] = 0;
    auStack_78[5] = 0;
    uStack_60._0_4_ = 0;
    auStack_78[3] = 0;
    auStack_78[4] = 0;
    uStack_58._4_4_ = 0;
    uStack_60._4_4_ = 0;
    uStack_58._0_4_ = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    iStack_9c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_109a7968c(param_1 / (double)param_3[0x26],0,param_4,param_3 + 2,&uStack_80,&uStack_a0);
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
    if (0 < iStack_7c) {
      lVar7 = 0;
      do {
        auStack_78[lVar7] = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_7c);
    }
    return;
  }
  uStack_a0 = 0x42ff0000;
  uStack_60 = &uStack_98;
  uStack_94 = 0;
  uStack_90 = 0;
  iStack_9c = 0;
  uStack_98 = 0;
  auStack_78[4] = 0;
  auStack_78[5] = 0;
  auStack_78[3] = 0;
  auStack_78[1] = 0;
  auStack_78[2] = 0;
  iStack_7c = 0;
  auStack_78[0] = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  lStack_48 = 0;
  uStack_58 = &uStack_50;
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_3,&uStack_a0,0xffffffff);
  uStack_100 = 0x42ff0000;
  lStack_c0 = (long)&uStack_fc + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_b8 = &uStack_b0;
  FUN_109a7a7c8(param_1,param_4,0x2f,&uStack_a0,&uStack_100);
  puVar5 = uStack_60;
  puVar6 = uStack_58;
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
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
      puVar5 = uStack_60;
      puVar6 = uStack_58;
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (0 < (int)uStack_fc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_fc);
  }
  uStack_60 = puVar5;
  uStack_58 = puVar6;
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  if (CONCAT44(auStack_78[5],auStack_78[4]) != 0) {
    piVar1 = (int *)(CONCAT44(auStack_78[5],auStack_78[4]) + 0x14);
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
  auStack_78[4] = 0;
  auStack_78[5] = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  auStack_78[0] = 0;
  auStack_78[1] = 0;
  uStack_80 = 0;
  iStack_7c = 0;
  if (0 < iStack_9c) {
    lVar7 = 0;
    do {
      uStack_60[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_9c);
  }
  if (uStack_58 != &uStack_50 && uStack_58 != (undefined4 *)0x0) {
    _free(*(undefined8 *)(uStack_58 + -2));
  }
  return;
}



/* Entry: 109a80d7c; end: 109a80f57;  */

void FUN_109a80d7c(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 auStack_d8 [2];
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar1 = (int)param_4 + 1;
  puStack_d0 = param_3;
  if (1 < uVar1) {
    puStack_d0 = &uStack_90;
  }
  puStack_48 = &uStack_40;
  if (*(long *)(param_2 + 0x80) == 0) {
    puStack_a0 = (undefined4 *)(param_2 + 0x10);
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    lStack_b8 = param_2 + 0x130;
    auStack_c0[0] = 0xc1020006;
    uStack_b0 = 0x100000001;
    auStack_d8[0] = 0x2010000;
    uStack_c8 = 0;
    FUN_109a2b294(auStack_a8,auStack_c0,auStack_d8,*(undefined4 *)(param_2 + 8));
  }
  else {
    uStack_98 = 0;
    lStack_b8 = param_2 + 0x70;
    auStack_a8[0] = 0x1010000;
    puStack_a0 = (undefined4 *)(param_2 + 0x10);
    uStack_b0 = 0;
    auStack_c0[0] = 0x1010000;
    auStack_d8[0] = 0x2010000;
    uStack_c8 = 0;
    FUN_109a2b294(auStack_a8,auStack_c0,auStack_d8,*(undefined4 *)(param_2 + 8));
  }
  if ((1 < uVar1) && (CONCAT44(uStack_7c,uStack_80) != *(long *)(param_3 + 4))) {
    auStack_a8[0] = 0x2010000;
    uStack_98 = 0;
    puStack_a0 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_90,auStack_a8,param_4);
  }
  if (lStack_58 != 0) {
    piVar2 = (int *)(lStack_58 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109a80f58; end: 109a810f7;  */

void FUN_109a80f58(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 auStack_e0 [2];
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  plVar1 = (long *)(param_3 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar7 = param_3;
  plVar8 = plVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    puVar7 = &uStack_b0;
    plVar8 = (long *)&uStack_a0;
  }
  puStack_c0 = (undefined4 *)(param_2 + 0x10);
  uStack_b8 = 0;
  auStack_c8[0] = 0x1010000;
  auStack_e0[0] = 0x2010000;
  uStack_d0 = 0;
  puStack_d8 = puVar7;
  puStack_68 = &uStack_60;
  FUN_109a895d0(auStack_c8,auStack_e0);
  if ((*plVar8 != *plVar1) || (*(double *)(param_2 + 0x130) != 1.0)) {
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puStack_c0 = param_3;
    FUN_109a41858(*(double *)(param_2 + 0x130),0,puVar7,auStack_c8,param_4);
  }
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109a810f8; end: 109a81127;  */

void FUN_109a810f8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x130) = param_1 * *(double *)(param_4 + 0x130);
  return;
}



/* Entry: 109a81128; end: 109a813db;  */

void FUN_109a81128(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined4 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  if (*(double *)(param_2 + 0x130) == 1.0) {
    uStack_1f0 = 0x42ff0000;
    puStack_1b0 = &uStack_1e8;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    iStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    puVar7 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_250 = 0x42ff0000;
    lStack_210 = (long)&uStack_24c + 4;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_24c = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_224 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    puStack_208 = &uStack_200;
    puStack_1a8 = puVar7;
    FUN_109a82eb0(0x3ff0000000000000,0,&uStack_190,&PTR_PTR_1132e8ef0,0,param_2 + 0x10,&uStack_1f0,
                  &uStack_250,&uStack_270);
    FUN_109a77b50(param_3,&uStack_190);
    FUN_10918eb6c(&uStack_190);
    if (lStack_218 != 0) {
      piVar1 = (int *)(lStack_218 + 0x14);
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
        func_0x000109a848d4(&uStack_250);
      }
    }
    lStack_218 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    if (0 < (int)uStack_24c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_210 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_24c);
    }
    if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
      _free(puStack_208[-1]);
    }
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
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
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    puVar6 = puStack_1a8;
    if (0 < iStack_1ec) {
      lVar5 = 0;
      do {
        puStack_1b0[lVar5] = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_1ec);
    }
  }
  else {
    uStack_190 = 0x42ff0000;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_18c = 0;
    lStack_150 = (long)&uStack_18c + 4;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_164 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    puVar7 = &uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    iStack_1ec = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    puStack_148 = puVar7;
    FUN_109a7968c(*(double *)(param_2 + 0x130),0,param_3,param_2 + 0x10,&uStack_190,&uStack_1f0);
    if (lStack_158 != 0) {
      piVar1 = (int *)(lStack_158 + 0x14);
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
        func_0x000109a848d4(&uStack_190);
      }
    }
    lStack_158 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    puVar6 = puStack_148;
    if (0 < (int)uStack_18c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_150 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_18c);
    }
  }
  if (puVar6 != puVar7 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return;
}


