/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077bb620; end: 1077bb63b;  */

/* WARNING: Possible PIC construction at 0x0001077bb7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bb7c8) */

void FUN_1077bb620(double param_1,double param_2,double param_3,double param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  double *pdVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  bool bVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 in_CY;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  uint uVar14;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  double dVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  undefined1 *puVar5;
  
  if (param_5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001077bb62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  puVar10 = &UNK_1077bb63c;
  func_0x0001077bea3c(param_5[1]);
  uVar11 = 0;
  puVar2 = &stack0xfffffffffffffff0;
  uVar3 = 0;
  puVar4 = (undefined1 *)register0x00000008;
code_r0x0001077bb6f8:
  uVar13 = uVar3;
  uVar12 = param_8;
  puVar5 = puVar2;
  *(double *)(puVar5 + -0x80) = unaff_d13;
  *(double *)(puVar5 + -0x78) = unaff_d12;
  *(double *)(puVar5 + -0x70) = unaff_d11;
  *(double *)(puVar5 + -0x68) = unaff_d10;
  *(double *)(puVar5 + -0x60) = unaff_d9;
  *(double *)(puVar5 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(ulong *)(puVar5 + -0x48) = unaff_x25;
  *(ulong *)(puVar5 + -0x40) = unaff_x24;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
  *(undefined **)(puVar5 + -8) = puVar10;
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    uVar14 = (uint)uVar12;
    if (!(bool)in_CY || (bool)in_ZR) {
      for (; (uint)uVar11 <= uVar14; uVar11 = (ulong)((uint)uVar11 + 1)) {
        pdVar1 = (double *)(param_5[3] + uVar11 * 0x10);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        bVar7 = false;
        bVar8 = true;
        if (param_1 <= dVar15) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar15) && !NAN(param_3)) {
            bVar7 = dVar15 == param_3;
            bVar8 = param_3 <= dVar15;
          }
        }
        bVar6 = true;
        bVar9 = false;
        if (!bVar8 || bVar7) {
          bVar6 = false;
          bVar9 = true;
          if (!NAN(dVar16) && !NAN(param_2)) {
            bVar6 = dVar16 < param_2;
            bVar9 = false;
          }
        }
        bVar7 = false;
        bVar8 = true;
        if (bVar6 == bVar9) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar16) && !NAN(param_4)) {
            bVar7 = dVar16 == param_4;
            bVar8 = param_4 <= dVar16;
          }
        }
        if (!bVar8 || bVar7) {
          func_0x0001077be964();
          func_0x0001077bb840();
        }
      }
      return;
    }
    uVar14 = uVar14 >> 1;
    unaff_x24 = (ulong)uVar14;
    pdVar1 = (double *)(extraout_x8 + unaff_x24 * 0x10);
    unaff_d12 = *pdVar1;
    unaff_d13 = pdVar1[1];
    bVar7 = false;
    bVar8 = true;
    if (param_1 <= unaff_d12) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(unaff_d12) && !NAN(param_3)) {
        bVar7 = unaff_d12 == param_3;
        bVar8 = param_3 <= unaff_d12;
      }
    }
    bVar6 = true;
    bVar9 = false;
    if (!bVar8 || bVar7) {
      bVar6 = false;
      bVar9 = true;
      if (!NAN(unaff_d13) && !NAN(param_2)) {
        bVar6 = unaff_d13 < param_2;
        bVar9 = false;
      }
    }
    bVar7 = false;
    bVar8 = true;
    if (bVar6 == bVar9) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(unaff_d13) && !NAN(param_4)) {
        bVar7 = unaff_d13 == param_4;
        bVar8 = param_4 <= unaff_d13;
      }
    }
    if (!bVar8 || bVar7) {
      func_0x0001077be954();
      func_0x0001077bb840();
    }
    if ((uint)uVar13 == 0) {
      in_CY = param_1 <= unaff_d12;
      in_ZR = unaff_d12 == param_1;
      if (param_1 <= unaff_d12) break;
      in_CY = param_3 <= unaff_d12;
      in_ZR = unaff_d12 == param_3;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    else {
      in_CY = param_2 <= unaff_d13;
      in_ZR = unaff_d13 == param_2;
      if (param_2 <= unaff_d13) break;
      in_CY = param_4 <= unaff_d13;
      in_ZR = unaff_d13 == param_4;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  puVar10 = &UNK_1077bb7c8;
  puVar2 = puVar5 + -0x80;
  param_8 = (ulong)(uVar14 - 1);
  uVar3 = (ulong)((uint)uVar13 ^ 1);
  unaff_x19 = uVar12;
  unaff_x20 = param_6;
  unaff_x21 = param_5;
  unaff_x22 = uVar11;
  unaff_x23 = uVar13;
  unaff_x25 = uVar13;
  unaff_d8 = param_4;
  unaff_d9 = param_3;
  unaff_d10 = param_2;
  unaff_d11 = param_1;
  puVar4 = puVar5;
  goto code_r0x0001077bb6f8;
}



/* Entry: 1077bbf94; end: 1077bc043;  */

void FUN_1077bbf94(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int unaff_w25;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  
  func_0x0001077be874();
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar5 = (uint)param_3;
        bVar3 = param_4 <= uVar5;
        bVar4 = uVar5 == param_4;
        if (bVar3 && !bVar4) break;
        func_0x0001077be800();
        if (!bVar3 || bVar4) {
          func_0x0001077be964();
          func_0x0001077bc044();
        }
        param_3 = (ulong)(uVar5 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077be954();
      func_0x0001077bc044();
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar1 = '\0';
    in_CY = false;
    cVar2 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) goto LAB_1077bbff8;
LAB_1077bc010:
      func_0x0001077bebcc();
      if (cVar1 != cVar2) {
        return;
      }
    }
    else {
      cVar2 = NAN(unaff_d12) || NAN(unaff_d15);
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      cVar1 = unaff_d12 < unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) {
LAB_1077bbff8:
        func_0x0001077be7c0();
        FUN_1077bbf94();
        if (unaff_w25 == 0) goto LAB_1077bc010;
      }
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
}



/* Entry: 1077bc5f4; end: 1077bc653;  */

long FUN_1077bc5f4(long param_1)

{
  func_0x0001077bc620(param_1 + 0x38);
  func_0x0001077ba390(param_1 + 0x18);
  return param_1;
}



/* Entry: 1077bc8a0; end: 1077bcfc7;  */

void FUN_1077bc8a0(double *param_1,long *param_2,ulong param_3,ulong param_4,ulong param_5,
                  double param_6,uint param_7,uint param_8)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double *pdVar6;
  uint uVar7;
  ushort uVar8;
  ulong uVar9;
  double extraout_x8;
  double extraout_x8_00;
  double *pdVar10;
  double dVar11;
  double extraout_x9;
  ulong uVar12;
  ulong extraout_x9_00;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  double dVar15;
  double dVar16;
  double extraout_x11;
  int iVar17;
  uint uVar18;
  double dVar19;
  double *pdVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_160 [24];
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_127;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined1 uStack_c1;
  double *pdStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  
  uVar7 = (uint)param_3;
  dVar24 = (double)(uint)(1 << (ulong)(uVar7 & 0x1f));
  uStack_c1 = (undefined1)param_3;
  dVar23 = (double)((((param_5 & 0xffffffff) << (param_3 & 0x3f)) + (param_4 & 0xffffffff)) * 0x20 +
                   (param_3 & 0xffffffff));
  pdVar20 = param_1 + 8;
  func_0x0001077bd160(pdVar20,dVar23);
  if (pdVar20 == (double *)0x0) {
    if (uVar7 == *(byte *)((long)param_1 + 0xf)) {
      uVar8 = *(ushort *)(param_1 + 1);
      dVar22 = 0.0;
    }
    else {
      uVar8 = *(ushort *)(param_1 + 1);
      dVar22 = *param_1 / (dVar24 * (double)uVar8);
    }
    func_0x0001072c5b2c(dVar22,&dStack_148,param_2,param_3,param_4,param_5,uVar8,
                        *(undefined1 *)((long)param_1 + 0xc));
    dVar19 = param_1[9];
    dVar22 = param_6;
    if (dVar19 != 0.0) {
      uVar9 = (long)dVar19 - 1;
      if (((ulong)dVar19 & uVar9) == 0) {
        dVar22 = (double)(uVar9 & (ulong)dVar23);
      }
      else {
        dVar22 = dVar23;
        if ((ulong)dVar19 <= (ulong)dVar23) {
          uVar12 = 0;
          if (dVar19 != 0.0) {
            uVar12 = (ulong)dVar23 / (ulong)dVar19;
          }
          dVar22 = (double)((long)dVar23 - uVar12 * (long)dVar19);
        }
      }
      pdVar20 = *(double **)((long)param_1[8] + (long)dVar22 * 8);
      if (pdVar20 != (double *)0x0) {
        do {
          while( true ) {
            pdVar20 = (double *)*pdVar20;
            if (pdVar20 == (double *)0x0) goto LAB_1077bca04;
            dVar11 = pdVar20[1];
            if (dVar11 != dVar23) break;
            if (pdVar20[2] == dVar23) goto LAB_1077bccdc;
          }
          if (((ulong)dVar19 & uVar9) == 0) {
            dVar11 = (double)((ulong)dVar11 & uVar9);
          }
          else if ((ulong)dVar19 <= (ulong)dVar11) {
            uVar12 = 0;
            if (dVar19 != 0.0) {
              uVar12 = (ulong)dVar11 / (ulong)dVar19;
            }
            dVar11 = (double)((long)dVar11 - uVar12 * (long)dVar19);
          }
        } while (dVar11 == dVar22);
      }
    }
LAB_1077bca04:
    pdVar20 = (double *)0x98;
    __Znwm();
    pdVar6 = param_1 + 10;
    uStack_b0 = 1;
    *pdVar20 = 0.0;
    pdVar20[1] = dVar23;
    pdVar20[2] = dVar23;
    pdVar20[4] = dStack_140;
    pdVar20[3] = dStack_148;
    pdVar20[6] = (double)CONCAT71(uStack_12f,uStack_130);
    pdVar20[5] = dStack_138;
    *(undefined8 *)((long)pdVar20 + 0x39) = uStack_127;
    *(ulong *)((long)pdVar20 + 0x31) = CONCAT17(uStack_128,uStack_12f);
    pdVar20[10] = dStack_110;
    pdVar20[9] = dStack_118;
    pdVar20[0xb] = dStack_108;
    dStack_118 = 0.0;
    dStack_110 = 0.0;
    pdVar20[0xd] = dStack_f8;
    pdVar20[0xc] = dStack_100;
    pdVar20[0xf] = dStack_e8;
    pdVar20[0xe] = dStack_f0;
    pdVar20[0x11] = dStack_d8;
    pdVar20[0x10] = dStack_e0;
    dStack_108 = 0.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
    pdVar20[0x12] = dStack_d0;
    pdStack_b8 = pdVar6;
    if ((dVar19 == 0.0) ||
       (*(float *)(param_1 + 0xc) * (float)(ulong)dVar19 < (float)((long)param_1[0xb] + 1))) {
      bVar4 = dVar19 == 1.48219693752374e-323;
      if ((ulong)dVar19 < 3) {
        uVar9 = 1;
      }
      else {
        bVar4 = ((ulong)dVar19 & (long)dVar19 - 1U) == 0;
        uVar9 = (ulong)!bVar4;
      }
      bVar3 = false;
      pdStack_c0 = pdVar20;
      func_0x0001077bebd8(uVar9 | (long)dVar19 << 1);
      dVar22 = extraout_x8;
      if (!bVar3 || bVar4) {
        dVar22 = extraout_x9;
      }
      if ((long)dVar22 - 1U == 0) {
        dVar22 = 9.88131291682493e-324;
      }
      else if (((ulong)dVar22 & (long)dVar22 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        dVar19 = param_1[9];
      }
      if ((ulong)dVar19 < (ulong)dVar22) {
LAB_1077bcaf8:
        if ((ulong)dVar22 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1077bcf68);
          (*pcVar2)();
        }
        lVar5 = (long)dVar22 << 3;
        __Znwm(lVar5);
        func_0x0001077bd1f8(param_1 + 8,lVar5);
        param_1[9] = dVar22;
        dVar11 = param_1[8];
        for (dVar19 = 0.0; dVar22 != dVar19; dVar19 = (double)((long)dVar19 + 1)) {
          *(undefined8 *)((long)dVar11 + (long)dVar19 * 8) = 0;
        }
        plVar13 = (long *)*pdVar6;
        dVar19 = dVar22;
        if (plVar13 != (long *)0x0) {
          dVar15 = (double)plVar13[1];
          uVar12 = (long)dVar22 - 1;
          uVar9 = 0;
          if (dVar22 != 0.0) {
            uVar9 = (ulong)dVar15 / (ulong)dVar22;
          }
          dVar16 = dVar15;
          if ((ulong)dVar22 <= (ulong)dVar15) {
            dVar16 = (double)((long)dVar15 - uVar9 * (long)dVar22);
          }
          if (((ulong)dVar22 & uVar12) == 0) {
            dVar16 = (double)((ulong)dVar15 & uVar12);
          }
          *(double **)((long)dVar11 + (long)dVar16 * 8) = pdVar6;
          while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
            dVar15 = (double)plVar13[1];
            if (((ulong)dVar22 & uVar12) == 0) {
              dVar15 = (double)((ulong)dVar15 & uVar12);
            }
            else if ((ulong)dVar22 <= (ulong)dVar15) {
              uVar9 = 0;
              if (dVar22 != 0.0) {
                uVar9 = (ulong)dVar15 / (ulong)dVar22;
              }
              dVar15 = (double)((long)dVar15 - uVar9 * (long)dVar22);
            }
            if (dVar15 != dVar16) {
              if (*(long *)((long)dVar11 + (long)dVar15 * 8) == 0) {
                *(long **)((long)dVar11 + (long)dVar15 * 8) = plVar14;
                dVar16 = dVar15;
              }
              else {
                *plVar14 = *plVar13;
                func_0x0001077bec20();
                dVar11 = extraout_x8_00;
                uVar12 = extraout_x9_00;
                plVar13 = extraout_x10;
                dVar16 = extraout_x11;
              }
            }
          }
        }
      }
      else if ((ulong)dVar22 < (ulong)dVar19) {
        dVar11 = (double)(long)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
        if (((ulong)dVar19 < 3) || (((ulong)dVar19 & (long)dVar19 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001077beae4();
        }
        if ((ulong)dVar22 <= (ulong)dVar11) {
          dVar22 = dVar11;
        }
        if ((ulong)dVar22 < (ulong)dVar19) {
          if (dVar22 != 0.0) goto LAB_1077bcaf8;
          func_0x0001077bd1f8(param_1 + 8,0);
          param_1[9] = 0.0;
          dVar19 = 0.0;
        }
        else {
          dVar19 = param_1[9];
        }
      }
      if (((ulong)dVar19 & (long)dVar19 - 1U) == 0) {
        dVar22 = (double)((long)dVar19 - 1U & (ulong)dVar23);
      }
      else {
        dVar22 = dVar23;
        if ((ulong)dVar19 <= (ulong)dVar23) {
          uVar9 = 0;
          if (dVar19 != 0.0) {
            uVar9 = (ulong)dVar23 / (ulong)dVar19;
          }
          dVar22 = (double)((long)dVar23 - uVar9 * (long)dVar19);
        }
      }
    }
    dVar23 = param_1[8];
    pdVar10 = *(double **)((long)dVar23 + (long)dVar22 * 8);
    if (pdVar10 == (double *)0x0) {
      *pdVar20 = *pdVar6;
      *pdVar6 = (double)pdVar20;
      *(double **)((long)dVar23 + (long)dVar22 * 8) = pdVar6;
      if (*pdVar20 != 0.0) {
        dVar22 = *(double *)((long)*pdVar20 + 8);
        if (((ulong)dVar19 & (long)dVar19 - 1U) == 0) {
          dVar22 = (double)((ulong)dVar22 & (long)dVar19 - 1U);
        }
        else if ((ulong)dVar19 <= (ulong)dVar22) {
          uVar9 = 0;
          if (dVar19 != 0.0) {
            uVar9 = (ulong)dVar22 / (ulong)dVar19;
          }
          dVar22 = (double)((long)dVar22 - uVar9 * (long)dVar19);
        }
        *(double **)((long)dVar23 + (long)dVar22 * 8) = pdVar20;
      }
    }
    else {
      *pdVar20 = *pdVar10;
      *pdVar10 = (double)pdVar20;
    }
    pdStack_c0 = (double *)0x0;
    param_1[0xb] = (double)((long)param_1[0xb] + 1);
    func_0x0001077bd210(&pdStack_c0);
LAB_1077bccdc:
    pdVar6 = &dStack_148;
    func_0x0001072c8e94();
    pdVar10 = param_1 + 5;
    while (pdVar10 = (double *)*pdVar10, pdVar10 != (double *)0x0) {
      if (*(byte *)((long)pdVar10 + 0x1c) <= uVar7) {
        if (uVar7 <= *(byte *)((long)pdVar10 + 0x1c)) {
          func_0x0001077bec70();
          iVar17 = *(int *)pdVar6 + 1;
          goto LAB_1077bcd24;
        }
        pdVar10 = pdVar10 + 1;
      }
    }
    iVar17 = 1;
LAB_1077bcd24:
    func_0x0001077bec70();
    *(int *)pdVar6 = iVar17;
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
    param_6 = (double)((ulong)param_6 & 0xffffffff);
  }
  if (*param_2 == param_2[1]) {
    return;
  }
  uVar18 = SUB84(param_6,0);
  iVar17 = (int)param_4;
  iVar21 = (int)param_5;
  if (uVar18 == 0) {
    if ((uVar7 != *(byte *)(param_1 + 2)) &&
       (*(uint *)((long)param_1 + 0x14) < *(uint *)(pdVar20 + 0x12))) goto LAB_1077bcdb4;
  }
  else {
    if (uVar7 == *(byte *)((long)param_1 + 0xf)) {
      return;
    }
    if ((uVar7 != uVar18) &&
       (dVar23 = (double)(uint)(1 << (ulong)(uVar18 - uVar7 & 0x1f)),
       iVar17 == (int)((double)param_7 / dVar23) && iVar21 == (int)((double)param_8 / dVar23))) {
LAB_1077bcdb4:
      dVar23 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 1));
      dVar23 = ((double)*(ushort *)((long)param_1 + 10) / 2.0) / dVar23;
      dVar22 = (double)(param_4 & 0xffffffff) + 0.5;
      func_0x0001077bedf0(((double)(param_4 & 0xffffffff) - dVar23) / dVar24,dVar22 + dVar23);
      func_0x0001072bfd7c(&dStack_148,param_2);
      func_0x0001077bea78((double)(param_5 & 0xffffffff) + 0.5 + dVar23,
                          (double)(param_5 & 0xffffffff) - dVar23);
      func_0x0001077bed00(&pdStack_c0,&dStack_148);
      uVar7 = uVar7 + 1;
      uVar18 = iVar17 << 1;
      uVar1 = iVar21 << 1;
      func_0x0001077be864(param_1,&pdStack_c0,uVar7 & 0xff,uVar18,uVar1);
      func_0x0001077beb40();
      func_0x0001077bea78(dVar23 + (double)(iVar21 + 1));
      func_0x0001077bed5c(&pdStack_c0,&dStack_148);
      func_0x0001077be864(param_1,&pdStack_c0,uVar7 & 0xff,uVar18,uVar1 | 1);
      func_0x0001077beb40();
      func_0x0001077bedf0((dVar22 - dVar23) / dVar24,dVar23 + (double)(iVar17 + 1));
      func_0x0001072bfd7c(&pdStack_c0,param_2);
      func_0x0001077bea78();
      func_0x0001077bed00(auStack_160,&pdStack_c0);
      func_0x0001077be864(param_1,auStack_160,uVar7 & 0xff,uVar18 | 1,uVar1);
      func_0x0001077bec68();
      func_0x0001077bea78();
      func_0x0001077bed5c(auStack_160,&pdStack_c0);
      func_0x0001077be864(param_1,auStack_160,uVar7 & 0xff,uVar18 | 1,uVar1 | 1);
      func_0x0001077bec68();
      func_0x0001072c33e4(pdVar20 + 9,pdVar20[9]);
      func_0x0001077beb40();
      func_0x0001072c3ca8(&dStack_148);
      return;
    }
  }
  func_0x0001077bd080(pdVar20 + 9,param_2);
  return;
}



/* Entry: 1077bd3e4; end: 1077bd3f3;  */

void FUN_1077bd3e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dbe58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077bd884; end: 1077bd8ab;  */

void FUN_1077bd884(undefined8 param_1)

{
  func_0x0001077beab8();
  func_0x0001077bea20(param_1,&PTR_DAT_1109dbf88);
  func_0x0001077be974();
  return;
}



/* Entry: 1077bda2c; end: 1077bda63;  */

undefined8 FUN_1077bda2c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  func_0x0001077bdb34();
  return uVar1;
}



/* Entry: 1077bdc0c; end: 1077bdc1f;  */

void FUN_1077bdc0c(void)

{
  func_0x0001077bdbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be190; end: 1077be19f;  */

void FUN_1077be190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077be318; end: 1077be367;  */

void FUN_1077be318(long param_1)

{
  func_0x0001077bed9c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077be61c; end: 1077be623;  */

void FUN_1077be61c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x0001077bb5f0(lVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1077be6fc; end: 1077be6ff;  */

void FUN_1077be6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bef94; end: 1077befff;  */

void FUN_1077bef94(long param_1)

{
  long lVar1;
  
  func_0x00010725ffdc(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (lVar1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar1 == 0) goto LAB_1077befd8;
  }
  func_0x0001077bf7a0();
LAB_1077befd8:
                    /* WARNING: Could not recover jumptable at 0x0001077beff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_1);
  return;
}



/* Entry: 1077bf364; end: 1077bf38b;  */

long FUN_1077bf364(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077bf38c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077bf474; end: 1077bf4b3;  */

undefined8 * FUN_1077bf474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010750000c(&uStack_30);
  return param_1;
}



/* Entry: 1077bf828; end: 1077bf897;  */

undefined8 * FUN_1077bf828(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = param_1;
  func_0x0001077b706c();
  *puVar1 = &PTR_DAT_1109dc398;
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  puVar1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  puVar1[0x14] = uVar6;
  puVar1[0x17] = uVar8;
  puVar1[0x16] = uVar7;
  puVar1[0x11] = uVar3;
  puVar1[0x10] = uVar2;
  puVar1[0x13] = uVar5;
  puVar1[0x12] = uVar4;
  func_0x000107456ccc(puVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1077bfa78; end: 1077bfa8b;  */

void FUN_1077bfa78(void)

{
  func_0x0001077bfa2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bfe8c; end: 1077bff27;  */

undefined1 *
FUN_1077bfe8c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  func_0x0001077c07ec();
  uStack_38 = extraout_x8;
  func_0x0001077c0818(auStack_50);
  func_0x0001077bff80(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001077c0004();
  func_0x0001077c07d8(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077c0004();
  func_0x0001077c0804();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  func_0x0001077bff50();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1077c0054; end: 1077c008f;  */

undefined1 * FUN_1077c0054(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  func_0x0001077c0090();
  return param_1;
}



/* Entry: 1077c01d8; end: 1077c047b;  */

undefined8 * FUN_1077c01d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  long lVar6;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 auStack_160 [14];
  byte bStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_170;
  func_0x0001077c07ec();
  lVar4 = param_1[1];
  uStack_48 = extraout_x8;
  if (param_2[2] == 0) {
    if ((*(byte *)((long)param_2 + 0x19) & 1) != 0) goto LAB_1077c03c8;
    in_ZR = *(char *)(param_2 + 3) == '\x01';
    if (!(bool)in_ZR) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar2 = &uStack_e8;
      func_0x0001077c04f0(auStack_160,param_2[4],puVar2);
      if ((bStack_f0 & 1) == 0) {
        plVar5 = *(long **)(lVar4 + 0x18);
        ppuVar3 = (undefined8 **)&uStack_e8;
        func_0x0001077c0774(&uStack_d0);
        func_0x0001077c06ec(auStack_60,&uStack_d0);
        func_0x0001077c080c(*(undefined8 *)(*plVar5 + 0x20));
        __ZNSt13exception_ptrD1Ev(auStack_60);
        __ZNSt13runtime_errorD2Ev(&uStack_d0);
      }
      else {
        param_1 = param_1 + 2;
        func_0x000107264c5c(param_1);
        plVar5 = (long *)(lVar4 + 8);
        func_0x0001078764b8(auStack_160,param_1,puVar2,*(undefined1 *)(*plVar5 + 8),
                            *(undefined2 *)(*plVar5 + 0xf8));
        lVar1 = *plVar5 + 0x80;
        func_0x0001077c0668(lVar1,auStack_160);
        lVar6 = *plVar5;
        func_0x0001077c0818(auStack_60);
        puVar2 = puStack_50;
        puStack_50[1] = 0;
        puStack_50[2] = 0;
        *puStack_50 = &PTR_DAT_1109dc430;
        func_0x00010750fed8(&uStack_d0,auStack_160);
        func_0x0001077c08b8(puVar2 + 3,lVar6,&uStack_d0);
        func_0x00010750fcd8(&uStack_d0);
        unaff_x22 = puStack_50;
        puStack_50 = (undefined8 *)0x0;
        func_0x0001077c0004(auStack_60);
        puStack_168 = unaff_x22;
        uStack_d0 = 0;
        uStack_c8 = 0;
        puStack_170 = unaff_x22 + 3;
        func_0x0001077bfe38(&uStack_d0);
        func_0x0001077bfca8(plVar5);
        func_0x0001077c0820();
        func_0x0001077c0830();
        func_0x0001077c0854();
        if ((int)lVar1 != 0) {
          func_0x0001077c0854(*(undefined8 *)(**(long **)(lVar4 + 0x18) + 0x18));
        }
      }
      func_0x00010750fcb8(auStack_160);
      param_1 = &uStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      param_2 = ppuVar3;
      goto LAB_1077c03c8;
    }
    plVar5 = *(long **)(lVar4 + 0x18);
    param_2 = (undefined8 *)&UNK_10f42a379;
    __ZNSt13runtime_errorC1EPKc(auStack_160);
    func_0x0001077c0848();
    func_0x0001077c080c(*(undefined8 *)(*plVar5 + 0x20));
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x18);
    param_2 = (undefined8 *)(param_2[2] + 8);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_160);
    func_0x0001077c0848();
    func_0x0001077c080c(*(undefined8 *)(*plVar5 + 0x20));
  }
  __ZNSt13exception_ptrD1Ev(&uStack_d0);
  param_1 = auStack_160;
  __ZNSt13runtime_errorD1Ev();
LAB_1077c03c8:
  func_0x0001077c07d8(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010750fcd8(&uStack_d0);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x22);
  func_0x0001077c0004(auStack_60);
  func_0x00010750fcb8(auStack_160);
  puVar2 = &uStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x0001077c0804();
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc518);
  puVar2 = puVar2 + 1;
  if ((int)param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



/* Entry: 1077c0748; end: 1077c078b;  */

void FUN_1077c0748(void)

{
  func_0x00010740f1d0();
  func_0x0001077c0868();
  return;
}



/* Entry: 1077c0970; end: 1077c0a1f;  */

undefined8 * FUN_1077c0970(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077c0a20(auStack_40,param_2,param_3);
  func_0x0001077c0f34(&uStack_30,auStack_40);
  *param_1 = &PTR_DAT_1109db730;
  param_1[2] = uStack_28;
  param_1[1] = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[3] = &PTR_PTR_1131ada40;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0x107783258;
  func_0x0001074f7454(&uStack_30);
  func_0x0001077c13fc();
  *param_1 = &PTR_DAT_1109dc578;
  func_0x00010726ed14(param_1 + 7);
  param_1[9] = param_1;
  return param_1;
}



/* Entry: 1077c0c4c; end: 1077c0d77;  */

void FUN_1077c0c4c(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077c1374();
  lVar6 = *(long *)(param_1 + 8);
  uStack_38 = extraout_x8_00;
  func_0x0001077c1440(&uStack_50);
  puVar1 = puStack_40;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_1109dc5d0;
  lVar4 = lVar6;
  func_0x0001077b706c(puStack_40 + 3);
  puVar1[3] = &PTR_DAT_1109dc670;
  lVar5 = *(long *)(lVar6 + 0x88);
  uVar7 = *(undefined8 *)(lVar6 + 0x80);
  puVar1[0x14] = *(undefined8 *)(lVar6 + 0x88);
  puVar1[0x13] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x0001077c13b0();
    } while (extraout_w10 != 0);
  }
  lVar5 = *(long *)(lVar6 + 0x98);
  uVar7 = *(undefined8 *)(lVar6 + 0x90);
  puVar1[0x16] = *(undefined8 *)(lVar6 + 0x98);
  puVar1[0x15] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x0001077c13b0();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001077c0f24(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077c0d80(&uStack_50);
  iVar3 = (int)lVar4;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      func_0x0001077c13b0();
      iVar3 = (int)lVar4;
    } while (extraout_w10_01 != 0);
  }
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar2 = &uStack_50;
  func_0x0001077b57e8();
  func_0x0001077c13fc();
  func_0x0001077c1354(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      func_0x0001077c13c0();
    }
    else {
      __ZNSt3__119__shared_weak_countD2Ev(puVar1 + 3);
      func_0x0001077c0f24(&uStack_50);
    }
    func_0x000104bd46a0(puVar2);
    func_0x000107346060(puVar2 + 7);
    if (extraout_x8 != 0) {
      do {
        func_0x00010734740c();
      } while (extraout_w11 != 0);
    }
    func_0x0001073269a0();
    func_0x0001073460e8();
    return;
  }
  return;
}



/* Entry: 1077c0eb4; end: 1077c0eb7;  */

void FUN_1077c0eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc5d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c0fc4; end: 1077c0fd7;  */

void FUN_1077c0fc4(void)

{
  func_0x0001077c100c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c1128; end: 1077c11cb;  */

/* WARNING: Possible PIC construction at 0x0001077c115c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c1160) */
/* WARNING: Removing unreachable block (ram,0x0001077c11b4) */
/* WARNING: Removing unreachable block (ram,0x0001077c119c) */

undefined1 * FUN_1077c1128(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(long *)(param_2 + 0x18) == param_2) {
      puStack_40 = auStack_58;
      (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),auStack_58);
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  return auStack_58;
}



/* Entry: 1077c1464; end: 1077c151b;  */

void FUN_1077c1464(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x19;
  long *plVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x0001077c287c();
  func_0x0001077c1e50(param_2);
  func_0x0001077c11cc(unaff_x19 + 0x10);
  lVar2 = *param_4;
  plVar1 = (long *)(unaff_x19 + 0x38);
  *(long *)(unaff_x19 + 0x40) = param_4[1];
  *plVar1 = lVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  *param_4 = 0;
  param_4[1] = 0;
  if (*plVar1 == 0) {
    func_0x0001073af4e0(auStack_60);
    func_0x0001077c28f0();
    func_0x0001073139fc(plVar1);
    func_0x00010724b8b8(auStack_50);
    func_0x00010724b8b8(auStack_60);
  }
  return;
}



/* Entry: 1077c1aa4; end: 1077c1b5f;  */

void FUN_1077c1aa4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  param_1[2] = param_2;
  func_0x000107324d80();
  lVar7 = param_1[1];
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar2 = lVar4;
      func_0x000104c2fe38(lVar4);
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar2);
      func_0x0001077c2840((uint)lVar2 & 0x7f);
      func_0x0001077c1b60(param_1,lVar7 + (long)plVar3 * 0x48,lVar4);
    }
    lVar4 = lVar4 + 0x48;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1077c1e0c; end: 1077c1e0f;  */

void FUN_1077c1e0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc6d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c2008; end: 1077c20a7;  */

undefined8 FUN_1077c2008(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001077c23c4(param_1 + 0x60);
  func_0x0001077c16dc(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1077c236c; end: 1077c2407;  */

long FUN_1077c236c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077c2038();
  func_0x0001077c2408(lVar1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 1077c2558; end: 1077c2563;  */

undefined ** FUN_1077c2558(void)

{
  return &PTR_DAT_1109dc7f0;
}



/* Entry: 1077c277c; end: 1077c27e7;  */

void FUN_1077c277c(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x000104c2fe00();
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077c2864();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1077c2cfc; end: 1077c2d0b;  */

bool FUN_1077c2cfc(undefined8 param_1,long param_2)

{
  return *(char *)(param_2 + 0x18) == '\0';
}



/* Entry: 1077c2f54; end: 1077c2f97;  */

undefined8 * FUN_1077c2f54(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc878;
  func_0x0001077c3484(param_1 + 3);
  return param_1;
}



/* Entry: 1077c30b4; end: 1077c3387;  */

undefined8 * FUN_1077c30b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  long lVar6;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 uStack_148;
  undefined1 uStack_147;
  byte bStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_170;
  func_0x0001077c3418();
  lVar4 = param_1[1];
  uStack_48 = extraout_x8;
  if (param_2[2] == 0) {
    if ((*(byte *)((long)param_2 + 0x19) & 1) != 0) goto LAB_1077c32d4;
    in_ZR = *(char *)(param_2 + 3) == '\x01';
    if (!(bool)in_ZR) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar2 = &uStack_e8;
      func_0x0001077c04f0(auStack_160,param_2[4],puVar2);
      if ((bStack_f0 & 1) == 0) {
        plVar5 = *(long **)(lVar4 + 0x18);
        ppuVar3 = (undefined8 **)&uStack_e8;
        func_0x0001077c0774(&uStack_d0);
        func_0x0001077c06ec(auStack_60,&uStack_d0);
        func_0x0001077c3428(*(undefined8 *)(*plVar5 + 0x20));
        __ZNSt13exception_ptrD1Ev(auStack_60);
        __ZNSt13runtime_errorD2Ev(&uStack_d0);
      }
      else {
        if (*(char *)(lVar4 + 0xc4) == '\x01') {
          uStack_147 = (undefined1)(int)*(float *)(lVar4 + 0xc0);
        }
        in_ZR = *(char *)(lVar4 + 0xcc) == '\x01';
        if ((bool)in_ZR) {
          uStack_148 = (undefined1)(int)*(float *)(lVar4 + 200);
        }
        param_1 = param_1 + 2;
        func_0x000107264c5c(param_1);
        plVar5 = (long *)(lVar4 + 8);
        func_0x0001078764b8(auStack_160,param_1,puVar2,*(undefined1 *)(*plVar5 + 8),0x200);
        lVar1 = *plVar5 + 0x80;
        func_0x0001077c0668(lVar1,auStack_160);
        lVar6 = *plVar5;
        func_0x0001077c343c(auStack_60);
        puVar2 = puStack_50;
        puStack_50[1] = 0;
        puStack_50[2] = 0;
        *puStack_50 = &PTR_DAT_1109dc878;
        func_0x00010750fed8(&uStack_d0,auStack_160);
        func_0x0001077c34b8(puVar2 + 3,lVar6,&uStack_d0);
        func_0x00010750fcd8(&uStack_d0);
        unaff_x22 = puStack_50;
        puStack_50 = (undefined8 *)0x0;
        func_0x0001077c2fd0(auStack_60);
        puStack_168 = unaff_x22;
        uStack_d0 = 0;
        uStack_c8 = 0;
        puStack_170 = unaff_x22 + 3;
        func_0x0001077c2e34(&uStack_d0);
        func_0x0001077c2cac(plVar5);
        func_0x0001077c3444();
        func_0x0001077c344c();
        func_0x0001077c3464();
        if ((int)lVar1 != 0) {
          func_0x0001077c3464(*(undefined8 *)(**(long **)(lVar4 + 0x18) + 0x18));
        }
      }
      func_0x00010750fcb8(auStack_160);
      param_1 = &uStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      param_2 = ppuVar3;
      goto LAB_1077c32d4;
    }
    plVar5 = *(long **)(lVar4 + 0x18);
    param_2 = (undefined8 *)&UNK_10f42a379;
    __ZNSt13runtime_errorC1EPKc(auStack_160);
    func_0x0001077c3478();
    func_0x0001077c3428(*(undefined8 *)(*plVar5 + 0x20));
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x18);
    param_2 = (undefined8 *)(param_2[2] + 8);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_160);
    func_0x0001077c3478();
    func_0x0001077c3428(*(undefined8 *)(*plVar5 + 0x20));
  }
  __ZNSt13exception_ptrD1Ev(&uStack_d0);
  param_1 = auStack_160;
  __ZNSt13runtime_errorD1Ev();
LAB_1077c32d4:
  func_0x0001077c33fc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010750fcd8(&uStack_d0);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x22);
  func_0x0001077c2fd0(auStack_60);
  func_0x00010750fcb8(auStack_160);
  puVar2 = &uStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x0001077c3434();
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc928);
  puVar2 = puVar2 + 1;
  if ((int)param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



/* Entry: 1077c3518; end: 1077c352b;  */

void FUN_1077c3518(void)

{
  func_0x0001077c352c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c3804; end: 1077c383f;  */

void FUN_1077c3804(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001077c3a1c();
  func_0x0001077c5aac();
  func_0x00010725bab8(auStack_28);
  return;
}



/* Entry: 1077c3984; end: 1077c399b;  */

void FUN_1077c3984(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001077ca3d0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077c3f44; end: 1077c403b;  */

undefined8 * FUN_1077c3f44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dc988;
  param_1[1] = &PTR_DAT_1109dc9e8;
  param_1[2] = &PTR_DAT_1109dca28;
  param_1[3] = &PTR_DAT_1109dca50;
  FUN_1077c7250(param_1 + 0x79);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x77);
  func_0x00010730645c(param_1 + 0x6f);
  func_0x000107410e70(param_1 + 0x6d);
  func_0x000107410ccc(param_1 + 0x6b);
  func_0x000107410cf0(param_1 + 0x69);
  func_0x000107410d14(param_1 + 0x67);
  func_0x0001072bb8ec(param_1 + 0x4f);
  func_0x0001072bc324(param_1 + 0x43);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  func_0x00010793f34c(param_1 + 0x3a);
  func_0x0001077c7174(param_1 + 0x39);
  func_0x0001077c39b8(param_1 + 0x38);
  func_0x000107410dc8(param_1 + 0x21);
  func_0x0001077c6390(param_1 + 0x1c);
  func_0x0001077c63b8(param_1 + 0x17);
  func_0x000107410d80(param_1 + 0x15);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x12);
  func_0x0001077c7148(param_1 + 0x11);
  func_0x0001072aca78(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 10);
  func_0x0001072aa180(param_1 + 8);
  func_0x00010724bd50(param_1 + 6);
  return param_1;
}



/* Entry: 1077c4978; end: 1077c4adf;  */

undefined8 FUN_1077c4978(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1077c5a38; end: 1077c5a6b;  */

void FUN_1077c5a38(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  long **pplStack_40;
  long *plStack_38;
  
  plVar1 = param_2;
  func_0x0001077c95fc();
  if (plVar1 < (long *)(param_2[1] - *param_2 >> 3)) {
    plStack_38 = plVar1;
    func_0x0001077ca30c();
    uVar2 = *(undefined8 *)(extraout_x8 + (long)plVar1 * 8);
    *(undefined8 *)(extraout_x8 + (long)plVar1 * 8) = 0;
    *param_1 = uVar2;
    pplStack_40 = &plStack_38;
    func_0x0001077c981c(param_2 + 3,&pplStack_40);
    func_0x0001077c9864(unaff_x20,*unaff_x20 + unaff_x21 * 8);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1077c5e14; end: 1077c5eef;  */

void FUN_1077c5e14(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001077c9d20();
  uStack_38 = extraout_x8;
  FUN_1077b5514(auStack_70,param_2);
  uVar5 = param_1[3];
  func_0x0001077c92c0(uVar5,auStack_70);
  uVar1 = param_1[1] - *param_1 >> 3;
  uVar3 = uVar1 <= uVar5;
  uVar4 = uVar5 == uVar1;
  if (!(bool)uVar3) {
    FUN_1077c88f4(auStack_90,param_1[3]);
    func_0x0001077ca2f8();
    if ((bool)uVar3) goto LAB_1077c5ed0;
    func_0x0001077ca0f4();
    if (extraout_x9 != 0) {
      do {
        func_0x0001077c9f04();
      } while (extraout_w11 != 0);
    }
    func_0x0001077ca2d8();
    func_0x0001074f7454();
    func_0x0001077ca318();
    func_0x0001074f4134();
    func_0x0001074f4db4(auStack_90);
  }
  func_0x0001077ca090();
  func_0x0001077c9cec(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1077c5ed0:
  func_0x0001074f7448();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077c5ed8);
  (*pcVar2)();
}



/* Entry: 1077c6030; end: 1077c619b;  */

void FUN_1077c6030(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  ulong uVar8;
  long *plStack_60;
  
  func_0x0001077c9e60();
  func_0x0001077ca224(*(undefined8 *)(param_1 + 0xa8));
  puVar7 = (undefined8 *)*unaff_x21;
  do {
    while( true ) {
      if (puVar7 == (undefined8 *)unaff_x21[1]) {
        func_0x000107524d74(plStack_60,plStack_60[1],*unaff_x21,puVar7);
        lVar1 = *plStack_60;
        lVar2 = plStack_60[1];
        if (lVar1 != lVar2) {
          func_0x0001077c66d8(lVar1,lVar2,LZCOUNT(lVar2 - lVar1 >> 4) << 1 ^ 0x7e,1);
        }
        func_0x0001077ca20c();
        *(undefined1 *)(unaff_x19 + 0x22) = 1;
        func_0x0001077c9e90();
        (**(code **)(extraout_x8 + 0x40))();
        func_0x0001077c9e14();
        func_0x0001077ca1d0();
        func_0x0001077c9e6c();
        return;
      }
      puVar5 = (undefined8 *)*plStack_60;
      uVar4 = plStack_60[1] - *plStack_60 >> 4;
      while (puVar3 = puVar5, uVar4 != 0) {
        uVar8 = uVar4 >> 1;
        uVar6 = puVar3[uVar8 * 2];
        func_0x000104c2fc44(uVar6,*puVar7);
        puVar5 = puVar3 + uVar8 * 2 + 2;
        uVar4 = uVar4 + ~uVar8;
        if ((int)uVar6 == 0) {
          puVar5 = puVar3;
          uVar4 = uVar8;
        }
      }
      if ((undefined8 *)plStack_60[1] != puVar3) break;
LAB_1077c60e0:
      puVar7 = puVar7 + 2;
    }
    uVar6 = *puVar7;
    func_0x000104c32db4(uVar6,*puVar3);
    if ((int)uVar6 == 0 || (undefined8 *)plStack_60[1] == puVar3) goto LAB_1077c60e0;
    func_0x00010747cf60(puVar3,puVar7);
    puVar7 = unaff_x21;
    func_0x0001077c5ce8();
  } while( true );
}



/* Entry: 1077c6448; end: 1077c6483;  */

void FUN_1077c6448(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9de8();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1077c65d0; end: 1077c66d7;  */

void FUN_1077c65d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar4;
  long extraout_x10;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x0001077c9e24();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == *(undefined8 **)(param_1 + 0x18)) {
    puVar2 = (undefined8 *)unaff_x19[1];
    if ((undefined8 *)*unaff_x19 < puVar2) {
      func_0x0001077ca130();
      lVar4 = 0;
      if (extraout_x9 != 0) {
        lVar4 = extraout_x8 / extraout_x9;
      }
      func_0x0001077c66a0();
      unaff_x19[1] = unaff_x19[1] + lVar4 * 0x10;
      unaff_x19[2] = (ulong)puVar2;
    }
    else {
      lVar4 = (long)puVar1 - (long)*unaff_x19;
      uVar3 = lVar4 >> 3;
      if (lVar4 == 0) {
        uVar3 = 1;
      }
      func_0x0001074706bc(&uStack_60,uVar3,uVar3 >> 2,unaff_x19[4]);
      lVar4 = unaff_x19[2] - unaff_x19[1];
      uVar3 = uStack_50 + lVar4;
      while (lVar4 != 0) {
        func_0x0001077c9ef0();
        uVar3 = extraout_x8_00;
        lVar4 = extraout_x10;
      }
      uVar7 = unaff_x19[1];
      uVar6 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uStack_50 = unaff_x19[2];
      unaff_x19[1] = uStack_58;
      *unaff_x19 = uStack_60;
      unaff_x19[2] = uVar3;
      unaff_x19[3] = uStack_48;
      uStack_60 = uVar6;
      uStack_58 = uVar7;
      uStack_48 = uVar8;
      func_0x000107470858(&uStack_60);
      puVar2 = (undefined8 *)unaff_x19[2];
    }
  }
  uVar5 = *unaff_x20;
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar5;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x19[2] = unaff_x19[2] + 0x10;
  return;
}



/* Entry: 1077c7198; end: 1077c71bf;  */

void FUN_1077c7198(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000107410b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077c7250; end: 1077c72ab;  */

void FUN_1077c7250(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ca0c4();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077c7588; end: 1077c767f;  */

void FUN_1077c7588(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      func_0x0001077c9f6c();
      func_0x0001072508cc();
      pplVar3 = &plStack_30;
      goto LAB_1077c75fc;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1077c75fc:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 1077c8310; end: 1077c8323;  */

void FUN_1077c8310(void)

{
  func_0x0001077c82e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8454; end: 1077c8473;  */

undefined8 * FUN_1077c8454(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dce10;
  func_0x0001077c49e4(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8710; end: 1077c875f;  */

void FUN_1077c8710(void)

{
  uint extraout_w8;
  
  func_0x0001077ca38c();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001074f98d0();
  }
  return;
}



/* Entry: 1077c88f4; end: 1077c8a0b;  */

void FUN_1077c88f4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001077c9d00();
  uStack_48 = extraout_x8;
  func_0x0001074f96a0(auStack_60,1);
  lVar1 = lStack_50;
  *(undefined8 *)(lStack_50 + 0x10) = 0;
  func_0x0001077c9ec0(&UNK_1109b7080);
  if (!(bool)in_ZR) {
    if ((ulong)(extraout_x8_00 >> 4) >> 0x3c != 0) goto LAB_1077c89e4;
    func_0x000107512600(lVar1 + 0x28);
    func_0x0001077c9f28();
    for (; in_ZR = unaff_x23 == unaff_x24, !(bool)in_ZR; unaff_x23 = unaff_x23 + 2) {
      lVar3 = unaff_x23[1];
      uVar4 = *unaff_x23;
      param_2[1] = unaff_x23[1];
      *param_2 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x0001077c9f5c();
        } while (extraout_w10 != 0);
      }
      param_2 = param_2 + 2;
      puStack_68 = param_2;
    }
    func_0x0001077ca34c();
    func_0x0001075126bc(auStack_90);
    *(undefined8 **)(lVar1 + 0x20) = param_2;
  }
  uStack_98 = 1;
  func_0x0001077c8a0c(auStack_a0);
  lVar1 = lStack_50;
  lStack_50 = 0;
  func_0x0001074f97a4(auStack_60);
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x0001077c9f6c();
  func_0x0001074f4db4();
  func_0x0001077c9cec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1077c89e4:
  func_0x0001075125bc();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077c89ec);
  (*pcVar2)();
}



/* Entry: 1077c8b6c; end: 1077c8bbf;  */

undefined8 * FUN_1077c8b6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dcf20;
  func_0x0001077c4a14(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8ce8; end: 1077c8cfb;  */

void FUN_1077c8ce8(void)

{
  func_0x0001077c8cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8e64; end: 1077c8e83;  */

undefined8 * FUN_1077c8e64(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dd0d0;
  func_0x0001077c64dc(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c9134; end: 1077c914b;  */

void FUN_1077c9134(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077c937c; end: 1077c93c7;  */

/* WARNING: Possible PIC construction at 0x0001077c93b8: Changing call to branch */

undefined1  [16] FUN_1077c937c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x0001077c9dfc();
  func_0x0001077c93ec();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1077c9528; end: 1077c9567;  */

undefined8 * FUN_1077c9528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ca398();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    func_0x0001077c9568();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 1077c979c; end: 1077c981b;  */

void FUN_1077c979c(undefined8 *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined8 uVar1;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 < (ulong)(param_2[1] - *param_2 >> 3)) {
    uStack_38 = param_4;
    func_0x0001077ca30c();
    uVar1 = *(undefined8 *)(extraout_x8 + param_3 * 8);
    *(undefined8 *)(extraout_x8 + param_3 * 8) = 0;
    *param_1 = uVar1;
    puStack_40 = &uStack_38;
    func_0x0001077c981c(param_2 + 3,&puStack_40);
    func_0x0001077c9864();
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1077c99cc; end: 1077c99f7;  */

undefined8 * FUN_1077c99cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dd160;
  func_0x0001077c5d20(param_1 + 1);
  return param_1;
}



/* Entry: 1077c9cd8; end: 1077c9ceb;  */

void FUN_1077c9cd8(void)

{
  func_0x000104c03f28(&DAT_10f62a4d8);
  return;
}



/* Entry: 1077ca988; end: 1077caa1b;  */

uint FUN_1077ca988(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  uint uVar2;
  uint uVar3;
  
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    uVar3 = (uint)&puStack_40;
    uVar2 = (uint)&puStack_40;
    uVar1 = (uint)&puStack_40;
    puStack_40 = &uStack_38;
    uStack_38 = param_2;
    func_0x0001077caa1c(&puStack_40,&UNK_10f42a46e,param_1 + 0x1d8);
    func_0x0001077caa1c(&puStack_40,&UNK_10f42a477,param_1 + 0x1f8);
    func_0x0001077caa1c(&puStack_40,&UNK_10f42a480,param_1 + 0x218);
    return uVar3 | uVar2 | uVar1;
  }
  return 0;
}



/* Entry: 1077cadb0; end: 1077cadef;  */

void FUN_1077cadb0(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  func_0x0001077da598(auStack_38);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077ef34c();
  func_0x000107310c44();
  func_0x000107310c44(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  return;
}



/* Entry: 1077cb054; end: 1077cb07b;  */

void FUN_1077cb054(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001074f5ed4();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1077d4d40; end: 1077d4e2b;  */

void FUN_1077d4d40(long param_1,uint *param_2,long param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_f0 [16];
  byte bStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [16];
  byte bStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  func_0x0001077ee374();
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    lVar1 = *(long *)(param_2 + 2) + 0x18;
    lVar3 = (ulong)*param_2 * 0x30;
    lVar2 = (ulong)*param_2 * 3;
    while (unaff_x19 = param_3, unaff_x20 = param_1, lVar2 != 0) {
      if ((*(ushort *)(lVar1 + -2) >> 0xc & 1) == 0) {
        lVar2 = *(long *)(lVar1 + -0x10);
      }
      else {
        lVar2 = lVar1 + -0x18;
      }
      func_0x000100060964(auStack_70,lVar2);
      func_0x0001077f1030();
      func_0x0001077da008(auStack_a0,lVar1,auStack_88,param_3);
      if ((bStack_90 & 1) != 0) {
        func_0x0001077da048(param_1 + 0x88,auStack_70);
        func_0x0001074333f0();
      }
      func_0x0001077da2d4(auStack_a0);
      func_0x0001077ef370();
      func_0x000104c2f714(auStack_70);
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
      lVar2 = lVar3;
    }
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077ef244();
    func_0x0001077da2d4();
    func_0x0001077ef370();
    func_0x000104c2f714(auStack_70);
    func_0x0001077ef068();
    puStack_a8 = &UNK_1077d4e2c;
    lStack_c0 = unaff_x20;
    lStack_b8 = unaff_x19;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x0001077f0954();
    if ((bool)in_ZR) {
      func_0x0001077efd7c();
      func_0x0001077f1030();
      func_0x0001077d4e94(auStack_f0,extraout_x9,auStack_d8);
      if ((bStack_e0 & 1) != 0) {
        func_0x000107410e94(unaff_x19 + 0x180,auStack_f0);
      }
      func_0x0001077da2f4(auStack_f0);
      func_0x0001077ef370();
    }
    return;
  }
  return;
}



/* Entry: 1077d5440; end: 1077d547f;  */

uint * FUN_1077d5440(undefined8 param_1,uint *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *unaff_x19;
  uint *puVar14;
  undefined8 **ppuVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined *unaff_x27;
  undefined8 uVar21;
  undefined1 *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined1 auStack_2b8 [136];
  uint *puStack_230;
  uint *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  uint *puStack_208;
  uint *puStack_1f8;
  uint *puStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  uint auStack_188 [6];
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  uint auStack_160 [2];
  ulong uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined4 auStack_140 [16];
  undefined1 auStack_100 [24];
  undefined1 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  bool bStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  uint *puStack_98;
  byte bStack_78;
  uint *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  uint auStack_38 [4];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  puVar14 = auStack_38;
  func_0x0001077ee1d0();
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return puVar14;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  puVar10 = &UNK_1077d5480;
  func_0x0001077f0928();
  in_stack_00000010 = &stack0xfffffffffffffff0;
  in_stack_00000018 = puVar10;
  func_0x0001077ee6bc();
  bVar5 = false;
  puVar7 = puVar14;
  uStack_50 = extraout_x8;
  if (*(short *)((long)param_2 + 0x16) == 4) {
    ppuVar15 = *(undefined8 ***)(param_2 + 2);
    ppuVar19 = ppuVar15 + (ulong)*param_2 * 3;
    puVar6 = puVar14 + 4;
    func_0x0001077f1a24();
    puStack_1f8 = puVar7;
    puStack_1f0 = puVar6;
    for (; bVar5 = ppuVar15 == ppuVar19, unaff_x19 = puVar14, !bVar5; ppuVar15 = ppuVar15 + 3) {
      if (*(short *)((long)ppuVar15 + 0x16) == 3) {
        auStack_160[0] = 0;
        auStack_160[1] = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        auStack_140[0] = 7;
        auStack_100[0] = 0;
        uStack_e8 = 0;
        auStack_e0[0] = 0;
        uStack_c8 = 0;
        bStack_c0 = false;
        func_0x00010002b838(auStack_188,&DAT_10f68f148);
        param_2 = auStack_188;
        func_0x0001077f0b7c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
        uVar13 = uStack_158;
        if (-1 < (long)uStack_150) {
          uVar13 = uStack_150 >> 0x38;
        }
        if (uVar13 != 0) {
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          func_0x0001077eff10(auStack_1b8);
          func_0x0001077f0b7c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
          puVar8 = &uStack_1a0;
          func_0x000100152bb8(puVar8,unaff_x27);
          if (((ulong)puVar8 & 1) == 0) {
            puVar8 = &uStack_1a0;
            func_0x000100152bb8(puVar8,&DAT_10f62bbce);
            if (((ulong)puVar8 & 1) != 0) {
              uStack_148 = 1;
              goto code_r0x0001077d55e8;
            }
            puVar8 = &uStack_1a0;
            func_0x000100152bb8(puVar8,&DAT_10f33a2d8);
            if (((ulong)puVar8 & 1) != 0) {
              uStack_148 = 2;
              goto code_r0x0001077d55e8;
            }
            puVar8 = &uStack_1a0;
            func_0x000100152bb8(puVar8,"bool");
            if (((ulong)puVar8 & 1) != 0) {
              uStack_148 = 3;
              goto code_r0x0001077d55e8;
            }
            uVar13 = 0;
            param_2 = (uint *)&DAT_10f2c123c;
            func_0x000100152bb8();
            if ((uVar13 & 1) != 0) {
              uStack_148 = 4;
              puStack_b8 = (uint *)0x0;
              puStack_b0 = (uint *)0x0;
              puStack_a8 = (uint *)0x0;
              func_0x00010002b838(auStack_1d0,&UNK_10f42a58a);
              func_0x0001077f0b7c();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
              func_0x000100602604(auStack_100,&puStack_b8);
              func_0x00010002b838(auStack_1e8,&UNK_10f42a597);
              func_0x0001077f0b7c();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
              func_0x000100602604(auStack_e0,&puStack_b8);
              func_0x0001077ef40c();
              goto code_r0x0001077d55e8;
            }
          }
          else {
            uStack_148 = 0;
code_r0x0001077d55e8:
            ppuVar9 = ppuVar15;
            func_0x000107327090(ppuVar15,"default");
            if ((int)ppuVar9 != 0) {
              ppuVar9 = ppuVar15;
              func_0x000107327234(ppuVar15,"default");
              func_0x0001077efb9c();
              puStack_70 = extraout_x8_00;
              ppuStack_68 = ppuVar9;
              func_0x0001077ef638(&puStack_b8);
              func_0x0001072f5f6c(&puStack_70);
              if ((bStack_78 & 1) != 0) {
                switch(uStack_148) {
                case 0:
                  if ((uint)puStack_b8 != 2) goto code_r0x0001077d5718;
                  break;
                case 1:
                  if (((uint)puStack_b8 & 0xfffffffe) != 4) goto code_r0x0001077d5718;
                  break;
                case 2:
                  if ((uint)puStack_b8 != 3) goto code_r0x0001077d5718;
                  break;
                case 3:
                  if ((uint)puStack_b8 != 6) goto code_r0x0001077d5718;
                  break;
                case 4:
                  if ((uint)puStack_b8 != 1) goto code_r0x0001077d5718;
                }
                func_0x000104c3302c(auStack_140,&puStack_b8);
              }
code_r0x0001077d5718:
              func_0x000107267ed0(&puStack_b8);
            }
            ppuVar9 = ppuVar15;
            func_0x000107327090(ppuVar15,&UNK_10f42a5a5);
            if (((int)ppuVar9 != 0) &&
               (func_0x0001077f0b6c(), (*(ushort *)((long)ppuVar9 + 0x16) >> 3 & 1) != 0)) {
              func_0x0001077f0b6c();
              bStack_c0 = *(short *)((long)ppuVar9 + 0x16) == 10;
            }
            uVar13 = *(ulong *)(puVar14 + 2);
            if (uVar13 < *(ulong *)(puVar14 + 4)) {
              param_2 = auStack_160;
              func_0x00010731efe8(uVar13);
              lVar16 = uVar13 + 0xa8;
              *(long *)(puVar14 + 2) = lVar16;
            }
            else {
              lVar16 = uVar13 - *(long *)puVar14;
              uVar13 = lVar16 / 0xa8 + 1;
              if (0x186186186186186 < uVar13) {
                func_0x00010731edd8();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1077d59d4);
                (*pcVar4)();
              }
              uVar2 = (long)(*(ulong *)(puVar14 + 4) - *(long *)puVar14) / 0xa8;
              uVar12 = uVar2 * 2;
              if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
                uVar12 = uVar13;
              }
              if (0xc30c30c30c30c2 < uVar2) {
                uVar12 = 0x186186186186186;
              }
              puStack_98 = puVar6;
              if (uVar12 == 0) {
                puStack_b8 = (uint *)0x0;
              }
              else {
                func_0x00010731edec();
                puStack_b8 = puVar6;
              }
              lVar16 = (long)puStack_b8 + lVar16;
              puStack_a0 = puStack_b8 + uVar12 * 0x2a;
              param_2 = auStack_160;
              puStack_b0 = (uint *)lVar16;
              puStack_a8 = (uint *)lVar16;
              func_0x00010731efe8();
              puStack_a8 = (uint *)(lVar16 + 0xa8);
              puVar20 = *(undefined8 **)puStack_1f8;
              puVar1 = *(undefined8 **)(puStack_1f8 + 2);
              puVar18 = (undefined8 *)(lVar16 + (((long)puVar1 - (long)puVar20) / -0xa8) * 0xa8);
              ppuStack_68 = &puStack_170;
              puStack_70 = puStack_1f0;
              ppuStack_60 = &puStack_168;
              puVar17 = puVar18;
              puStack_170 = puVar18;
              for (puVar8 = puVar20; puStack_168 = puVar17, puVar8 != puVar1; puVar8 = puVar8 + 0x15
                  ) {
                uVar21 = puVar8[1];
                uVar11 = *puVar8;
                puVar17[2] = puVar8[2];
                puVar17[1] = uVar21;
                *puVar17 = uVar11;
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar8 + 3);
                param_2 = (uint *)(puVar8 + 4);
                func_0x000104c32a18(puVar17 + 4);
                *(undefined1 *)(puVar17 + 0xc) = 0;
                *(undefined1 *)(puVar17 + 0xf) = 0;
                if (*(char *)(puVar8 + 0xf) == '\x01') {
                  uVar21 = puVar8[0xd];
                  uVar11 = puVar8[0xc];
                  puVar17[0xe] = puVar8[0xe];
                  puVar17[0xd] = uVar21;
                  puVar17[0xc] = uVar11;
                  puVar8[0xd] = 0;
                  puVar8[0xe] = 0;
                  puVar8[0xc] = 0;
                  *(undefined1 *)(puVar17 + 0xf) = 1;
                }
                *(undefined1 *)(puVar17 + 0x10) = 0;
                *(undefined1 *)(puVar17 + 0x13) = 0;
                if (*(char *)(puVar8 + 0x13) == '\x01') {
                  uVar21 = puVar8[0x11];
                  uVar11 = puVar8[0x10];
                  puVar17[0x12] = puVar8[0x12];
                  puVar17[0x11] = uVar21;
                  puVar17[0x10] = uVar11;
                  puVar8[0x11] = 0;
                  puVar8[0x12] = 0;
                  puVar8[0x10] = 0;
                  *(undefined1 *)(puVar17 + 0x13) = 1;
                }
                *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar8 + 0x14);
                puVar17 = puStack_168 + 0x15;
              }
              uStack_58 = 1;
              for (; puVar20 != puVar1; puVar20 = puVar20 + 0x15) {
                func_0x00010731f070(puVar20);
              }
              func_0x00010731ee40(&puStack_70);
              puVar14 = puStack_1f8;
              puStack_b8 = *(uint **)puStack_1f8;
              *(undefined8 **)puStack_1f8 = puVar18;
              uVar11 = *(undefined8 *)(puStack_1f8 + 4);
              puStack_208 = puStack_a0;
              lStack_210 = (long)puStack_a8;
              *(uint **)(puStack_1f8 + 4) = puStack_a0;
              *(uint **)(puStack_1f8 + 2) = puStack_a8;
              puStack_b0 = puStack_b8;
              puStack_a8 = puStack_b8;
              puStack_a0 = (uint *)uVar11;
              func_0x0001077da554(&puStack_b8);
              puVar6 = puStack_1f0;
              func_0x0001077f1a24(lStack_210);
              lVar16 = extraout_x8_01;
              unaff_x27 = &DAT_10f68f148;
            }
            *(long *)(puVar14 + 2) = lVar16;
          }
          func_0x0001077f072c();
        }
        puVar7 = auStack_160;
        func_0x00010731f070();
      }
    }
  }
  func_0x0001077ee344(uStack_50);
  if (bVar5) {
    return puVar7;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
  puVar14 = auStack_160;
  func_0x00010731f070();
  func_0x0001077ef0b0();
  puStack_218 = &UNK_1077d5a70;
  puVar6 = param_2;
  puStack_230 = puVar7;
  puStack_228 = unaff_x19;
  puStack_220 = &stack0x00000010;
  func_0x0001077ee3c0();
  func_0x000100061de0();
  lVar16 = *(long *)unaff_x19;
  if ((*(long *)(lVar16 + -8) == 0) && (*(char *)(lVar16 + (long)puVar14) != -2)) {
    uVar13 = *(ulong *)(unaff_x19 + 4);
    if ((uVar13 < 9) || (uVar13 * 0x19 < (ulong)(*(long *)(unaff_x19 + 6) << 5))) {
      func_0x000107552c68(unaff_x19,uVar13 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(unaff_x19,&UNK_1109dd1d0,auStack_2b8);
    }
    puVar14 = unaff_x19;
    puVar6 = param_2;
    func_0x000100061de0();
    lVar16 = *(long *)unaff_x19;
  }
  *(long *)(unaff_x19 + 6) = *(long *)(unaff_x19 + 6) + 1;
  bVar5 = *(char *)(lVar16 + (long)puVar14) == -0x80;
  *(ulong *)(lVar16 + -8) = *(long *)(lVar16 + -8) - (ulong)bVar5;
  bVar3 = (byte)param_2 & 0x7f;
  uVar13 = *(ulong *)(unaff_x19 + 4);
  *(byte *)(lVar16 + (long)puVar14) = bVar3;
  *(byte *)(lVar16 + (uVar13 & (long)puVar14 - 7U) + (uVar13 & 7)) = bVar3;
  func_0x0001077ee2e4();
  if (!bVar5) {
    ___stack_chk_fail();
    puVar14 = *(uint **)(puVar6 + 0xc);
    if (puVar14 == (uint *)0xffffffffffffffff) {
      puVar14 = puVar6;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar6);
      func_0x0001001030f4(puVar14,(long)puVar14 + (long)puVar6);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar14;
  }
  return puVar14;
}



/* Entry: 1077d5d7c; end: 1077d5d87;  */

undefined ** FUN_1077d5d7c(void)

{
  return &PTR_DAT_1109dd270;
}



/* Entry: 1077d5f1c; end: 1077d5f43;  */

void FUN_1077d5f1c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1077d77b0; end: 1077d782f;  */

long FUN_1077d77b0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001077ee32c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001077ee28c();
    if ((bool)in_ZR) {
      func_0x0001077f106c();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x0001077f1840();
    if ((bool)in_ZR) {
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        func_0x0001077f0fe8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x0001077ee890();
      func_0x0001077ee9c4();
      func_0x0001077efaf8();
      func_0x0001077efa48();
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001077ef21c();
  func_0x000104c2f714();
  func_0x0001077efa48();
  unaff_x30 = &UNK_1077d7830;
  func_0x0001077ef068();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1077d7a3c; end: 1077d7a43;  */

void FUN_1077d7a3c(void)

{
  return;
}



/* Entry: 1077d7f4c; end: 1077d7fab;  */

void FUN_1077d7f4c(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  func_0x0001077f1970();
  func_0x00010755ccf0();
  return;
}



/* Entry: 1077d8368; end: 1077d8433;  */

ulong FUN_1077d8368(ulong param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined1 uVar1;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  ulong unaff_d8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001077ee32c();
  uVar1 = param_4[0x12] == 1;
  if ((bool)uVar1) {
    func_0x0001077ee28c();
    if ((bool)uVar1) {
LAB_1077d83b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)();
      return param_1;
    }
  }
  else if (param_4[0x12] == 0) {
    func_0x0001077ee28c();
    if ((bool)uVar1) {
      func_0x0001077f106c();
      goto LAB_1077d83b4;
    }
  }
  else {
    auStack_80[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98);
    param_4 = (uint *)auStack_80;
    func_0x0001077efe94();
    func_0x00010727f9d8();
    func_0x0001077ef60c();
    func_0x00010724b3d8(auStack_80);
    func_0x0001077ee28c();
    param_3 = param_5;
    if ((bool)uVar1) {
      return param_1;
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x0001077ef21c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010724b3d8(auStack_80);
  func_0x0001077ef068();
  func_0x0001077f0ca0();
  if ((bool)uVar1) {
    unaff_d8 = (ulong)*param_3;
  }
  else if (extraout_w9 == 0) {
    unaff_d8 = (ulong)*param_4;
  }
  else {
    func_0x0001077f1054();
    func_0x0001077ef5bc();
    func_0x00010727f6f4();
    func_0x0001077f11f0();
  }
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return unaff_d8;
  }
  ___stack_chk_fail();
  func_0x0001077ef244();
  func_0x00010724b3d8();
  func_0x0001077ef068();
  func_0x0001077ef100();
  func_0x0001077ef9d8();
  func_0x0001077f10a8();
  func_0x000107339f78(CONCAT44(extraout_var,extraout_w9_00));
  func_0x00010727ecac();
  func_0x0001077f0d9c();
  func_0x0001077efc64();
  return param_1;
}



/* Entry: 1077d8a64; end: 1077d8aef;  */

long FUN_1077d8a64(long param_1)

{
  func_0x0001073834c0(param_1 + 0x50);
  func_0x0001077f1460();
  return param_1;
}



/* Entry: 1077d9084; end: 1077d9103;  */

long FUN_1077d9084(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001077ee32c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001077ee28c();
    if ((bool)in_ZR) {
      func_0x0001077f106c();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x0001077f1840();
    if ((bool)in_ZR) {
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        func_0x0001077f0fe8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x0001077ee890();
      func_0x0001077ee9c4();
      func_0x0001077efaf8();
      func_0x0001077efa48();
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001077ef21c();
  func_0x000104c2f714();
  func_0x0001077efa48();
  unaff_x30 = &UNK_1077d9104;
  func_0x0001077ef068();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1077d9464; end: 1077d94c3;  */

void FUN_1077d9464(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  return;
}



/* Entry: 1077d98cc; end: 1077d99cb;  */

void FUN_1077d98cc(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_168 [88];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_68;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cStack_30;
  
  func_0x0001077ee3e4();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  (**(code **)(*param_1 + 0x38))(auStack_40,param_1 + 1,"text");
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    func_0x0001077d9c48(param_2,&uStack_59);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_68 = 1;
    func_0x0001077d9bd0(auStack_40,param_2,&uStack_b0,"text");
    func_0x00010727e9d0(&uStack_b0);
  }
  else {
    func_0x0001077efcb8();
    *(undefined4 *)(unaff_x19 + 0x48) = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077f0b84();
  func_0x0001077f1358();
  func_0x0001077ee2e4();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010727e9d0(&uStack_b0);
  func_0x0001077ef370();
  func_0x0001077f0b84();
  func_0x0001077f1358();
  func_0x0001077ef068();
  func_0x0001077ef9d8();
  func_0x0001077ef9c0();
  func_0x0001077d9a98();
  func_0x0001077f0e88();
  func_0x0001077d9ad0(extraout_x8);
  func_0x0001077d9b7c(auStack_168);
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d9ba4; end: 1077d9bcf;  */

void FUN_1077d9ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_10f42a581;
  func_0x0001077ef088();
  func_0x0001077ef070(param_1,param_2,&puStack_18);
  return;
}



/* Entry: 1077d9d40; end: 1077d9d7f;  */

void FUN_1077d9d40(void)

{
  func_0x0001077ef1b8();
  func_0x0001077d9f0c();
  return;
}



/* Entry: 1077da094; end: 1077da2d3;  */

undefined1  [16]
FUN_1077da094(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  func_0x00010726364c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1077da158;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x000104c32db4(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1077da294;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1077da158:
  uVar4 = *param_4;
  plVar5 = param_1 + 2;
  plVar8 = (long *)0x58;
  __Znwm();
  uStack_58 = 0;
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  plStack_68 = plVar8;
  plStack_60 = plVar5;
  func_0x000104c2fe00(plVar8 + 2,uVar4);
  func_0x0001077af920(plVar8 + 9);
  func_0x0001077efeac();
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x0001077f015c((long)plVar9 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x0001077c8f70(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = plStack_68;
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar5;
    if (*plStack_68 != 0) {
      plVar7 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x0001077c9168(&plStack_68);
  uVar4 = 1;
LAB_1077da294:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1077da3fc; end: 1077da533;  */

/* WARNING: Possible PIC construction at 0x0001077da450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077da454) */
/* WARNING: Removing unreachable block (ram,0x0001077da478) */
/* WARNING: Removing unreachable block (ram,0x0001077da488) */
/* WARNING: Removing unreachable block (ram,0x0001077da48c) */
/* WARNING: Removing unreachable block (ram,0x0001077da4d8) */
/* WARNING: Removing unreachable block (ram,0x0001077da4f0) */
/* WARNING: Removing unreachable block (ram,0x0001077da4f4) */
/* WARNING: Removing unreachable block (ram,0x0001077da504) */
/* WARNING: Removing unreachable block (ram,0x00010bdbcd74) */
/* WARNING: Removing unreachable block (ram,0x0001077da4b4) */
/* WARNING: Removing unreachable block (ram,0x0001077da520) */
/* WARNING: Removing unreachable block (ram,0x0001077da528) */
/* WARNING: Removing unreachable block (ram,0x0001077da4c0) */

undefined8 FUN_1077da3fc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001077ee6bc();
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  func_0x0001077f0828(uVar1);
  uStack_68 = 0x1077da454;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107327150(&uStack_78);
  return uStack_78;
}



/* Entry: 1077dcbdc; end: 1077dcbef;  */

void FUN_1077dcbdc(void)

{
  func_0x0001077dd590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077dd5f8; end: 1077dd6eb;  */

void FUN_1077dd5f8(void)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [296];
  
  func_0x0001077efc88();
  func_0x0001077ee374();
  func_0x0001077dda70(auStack_1d0);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  func_0x0001077dda78(auStack_170);
  _bzero(auStack_158,0x120);
  func_0x0001077f0be8();
  lVar2 = 0x180;
  do {
    func_0x00010747305c(auStack_1d0 + lVar2);
    lVar2 = lVar2 + -0x18;
    uVar1 = lVar2 == -0x18;
  } while (!(bool)uVar1);
  func_0x0001077efcb8();
  func_0x0001077dda80();
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eebdc();
  func_0x0001077ef650();
  func_0x0001077ef0b0();
  func_0x0001077eead8();
  func_0x0001077dd7a4();
  func_0x0001077ef238(extraout_x8);
  func_0x0001077dd850();
  return;
}



/* Entry: 1077ddaa0; end: 1077ddb3f;  */

long FUN_1077ddaa0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined4 extraout_w8;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_2 != 0) {
      func_0x0001077efcb8();
      goto LAB_1077ddafc;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
LAB_1077ddafc:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar1 = param_2;
  func_0x0001077eef78();
  func_0x0001077ef068();
  if (*(int *)(lVar1 + 0x80) == 0) {
    return lVar1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001077ef148();
  *(undefined4 *)(lVar1 + 0x78) = extraout_w8;
  func_0x0001077ddb8c();
  return param_2;
}



/* Entry: 1077ddc7c; end: 1077ddcc7;  */

void FUN_1077ddc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001077f0fb8();
  if (param_4 != 0) {
    func_0x0001077eead8();
    func_0x0001077ddcc8(param_1,param_4);
    func_0x0001077eeecc();
    func_0x0001077ddd08();
  }
  func_0x0001077efac0();
  func_0x0001077dde54();
  return;
}



/* Entry: 1077dde10; end: 1077dde1f;  */

void FUN_1077dde10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  for (; param_3 != param_5; param_3 = param_3 + -0x88) {
    func_0x0001074730f4(param_3 + -0x80);
  }
  return;
}



/* Entry: 1077ddfd4; end: 1077de02f;  */

long FUN_1077ddfd4(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001077ee564();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077de030();
    unaff_x20 = uStack_38 + 0x18;
    uStack_38 = unaff_x20;
  }
  func_0x0001077efad0();
  func_0x0001077de130();
  return unaff_x20;
}



/* Entry: 1077de16c; end: 1077de1f3;  */

void FUN_1077de16c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x00010747305c();
  }
  return;
}



/* Entry: 1077de47c; end: 1077de50b;  */

long * FUN_1077de47c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 in_ZR;
  long *plVar4;
  long lVar5;
  long alStack_d0 [16];
  long *plStack_50;
  
  func_0x0001077ee434();
  plVar4 = param_1 + 2;
  plVar3 = param_2 + 1;
  for (lVar5 = param_3 * 0x88; lVar5 != 0; lVar5 = lVar5 + -0x88) {
    plStack_50 = plVar4;
    func_0x0001077ddb5c(alStack_d0,plVar3);
    param_2 = alStack_d0;
    func_0x0001077de7ac(param_4 + 8);
    param_1 = alStack_d0;
    func_0x0001074730f4();
    param_4 = param_4 + 0x88;
    plVar3 = plVar3 + 0x11;
  }
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (param_2 < (long *)0x1e1e1e1e1e1e1e2) {
    uVar2 = (param_1[2] - *param_1) / 0x88;
    plVar4 = (long *)(uVar2 * 2);
    if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
      plVar4 = param_2;
    }
    if (0xf0f0f0f0f0f0ef < uVar2) {
      plVar4 = (long *)0x1e1e1e1e1e1e1e1;
    }
    return plVar4;
  }
  func_0x0001077ddd30();
  lVar5 = param_1[2];
  lVar1 = lVar5 + param_3 * 0x88;
  param_2 = param_2 + 1;
  plVar4 = param_1;
  for (param_3 = param_3 * 0x88; param_3 != 0; param_3 = param_3 + -0x88) {
    plVar4 = (long *)(lVar5 + 8);
    func_0x0001077ddb5c(plVar4,param_2);
    lVar5 = lVar5 + 0x88;
    param_2 = param_2 + 0x11;
  }
  param_1[2] = lVar1;
  return plVar4;
}



/* Entry: 1077de72c; end: 1077de74b;  */

void FUN_1077de72c(void)

{
  func_0x0001077eeaec();
  func_0x0001077de74c();
  return;
}



/* Entry: 1077de8a0; end: 1077de8a7;  */

void FUN_1077de8a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x78) == 1) {
    func_0x0001077ef34c(param_2,param_3);
    func_0x000104c2f1f0();
    func_0x0001002a8208(unaff_x20 + 0x38,unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x58,unaff_x19 + 0x58);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de914();
  return;
}



/* Entry: 1077de98c; end: 1077de9b7;  */

void FUN_1077de98c(void)

{
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 2;
  return;
}



/* Entry: 1077deb24; end: 1077deb7b;  */

void FUN_1077deb24(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c();
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x88;
    func_0x0001074730f4(extraout_x8 + -0x80);
  }
  return;
}



/* Entry: 1077deef8; end: 1077def4f;  */

ulong FUN_1077deef8(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001077ee32c();
    if ((*(int *)(param_2 + 0x38) == 0) || (in_ZR = *(int *)(param_2 + 0x38) == 1, (bool)in_ZR)) {
      func_0x0001077eea20(1);
    }
    else {
      func_0x0001077ee6d8();
      func_0x0001077ee4ec();
      func_0x0001077ef1a8();
    }
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      func_0x0001077ee32c();
      if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR)) {
        func_0x0001077eea20(1);
      }
      else {
        func_0x0001077ee6d8();
        func_0x0001077ee4ec();
        func_0x0001077ef1a8();
      }
      func_0x0001077ee28c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        __Unwind_Resume();
        if (*(int *)(param_1 + 0x98) == 0) {
          return 1;
        }
        uVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
        if (*(int *)(param_1 + 0x98) == 1) {
          uVar1 = 1;
        }
        return (ulong)uVar1;
      }
    }
  }
  return param_1;
}



/* Entry: 1077df1f0; end: 1077df263;  */

void FUN_1077df1f0(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,long *param_5)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    puVar3 = (ulong *)*param_5;
    uVar1 = *(uint *)(param_5 + 1);
    uVar5 = 1L << ((ulong)uVar1 & 0x3f);
    if (*param_3 == '\x01') {
      uVar5 = *puVar3 | uVar5;
    }
    else {
      uVar5 = *puVar3 & (uVar5 ^ 0xffffffffffffffff);
    }
    *puVar3 = uVar5;
    if (uVar1 == 0x3f) {
      iVar4 = 0;
      *param_5 = (long)(puVar3 + 1);
    }
    else {
      iVar4 = uVar1 + 1;
    }
    *(int *)(param_5 + 1) = iVar4;
  }
  lVar2 = *param_5;
  *param_1 = param_4;
  param_1[1] = lVar2;
  *(int *)(param_1 + 2) = (int)param_5[1];
  return;
}



/* Entry: 1077df6a8; end: 1077df6ab;  */

long FUN_1077df6a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de170);
  func_0x000104c2f714(lVar1 + 0x50);
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 1077df888; end: 1077df8a7;  */

byte FUN_1077df888(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    bVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
    if (*(int *)(param_1 + 0x70) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 1077e1cfc; end: 1077e1d2b;  */

void FUN_1077e1cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = 0x40800000;
  func_0x0001077ef5bc(param_3,param_1,param_2,param_1 + 0x270,&uStack_14);
  func_0x0001077e1e28();
  return;
}



/* Entry: 1077e1e70; end: 1077e1ec7;  */

ulong FUN_1077e1e70(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001077ee32c();
    if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR)) {
      func_0x0001077eea20(1);
    }
    else {
      func_0x0001077ee6d8();
      func_0x0001077ee4ec();
      func_0x0001077ef1a8();
    }
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (*(int *)(param_1 + 0x48) == 0) {
        return 1;
      }
      uVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
      if (*(int *)(param_1 + 0x48) == 1) {
        uVar1 = 1;
      }
      return (ulong)uVar1;
    }
  }
  return param_1;
}



/* Entry: 1077e2474; end: 1077e24b7;  */

void FUN_1077e2474(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001077e24b8();
  iVar1 = *(int *)(unaff_x20 + 0x50);
  if (iVar1 != -1) {
    func_0x0001077eebf8(&PTR_DAT_1109de3d0);
    *(int *)(unaff_x19 + 0x50) = iVar1;
  }
  return;
}


