/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a55ab14; end: 10a55ad4b;  */

ulong FUN_10a55ab14(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  long *plVar17;
  double *pdVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  long *plStack_78;
  double *pdStack_70;
  double *pdStack_68;
  long *plStack_60;
  long *plStack_58;
  
  auVar23 = NEON_scvtf(*param_1,8);
  dStack_a0 = auVar23._0_8_ * 0.015625;
  dStack_98 = auVar23._8_8_ * 0.015625;
  dStack_b8 = *(double *)(param_2[2] + 8);
  dStack_c0 = *(double *)param_2[2];
  dVar22 = ABS(dStack_b8 - dStack_98);
  if (ABS(dStack_b8 - dStack_98) <= ABS(dStack_c0 - dStack_a0)) {
    dVar22 = ABS(dStack_c0 - dStack_a0);
  }
  if (dVar22 != 0.0) {
    dVar22 = dStack_a0 - dStack_c0;
    dVar24 = dStack_98 - dStack_b8;
    dVar25 = SQRT(dVar22 * dVar22 + dVar24 * dVar24);
    dVar22 = dVar22 / dVar25;
    dVar24 = dVar24 / dVar25;
    dStack_b0 = dVar22 * 0.0 + dVar24 * -1.0;
    dStack_a8 = dVar22 * 1.0 + dVar24 * 0.0;
    dVar22 = *(double *)(param_2[4] + 8);
    dStack_90 = dStack_b0;
    dStack_88 = dStack_a8;
    if ((*(uint *)param_2[5] < 2) ||
       ((*(uint *)param_2[5] == 2 &&
        (dStack_b0 * *(double *)param_2[3] + dStack_a8 * *(double *)(param_2[3] + 8) <
         *(double *)param_2[1])))) {
      lVar21 = (*(long **)*param_2)[1];
      if (**(long **)*param_2 == lVar21) goto LAB_10a55ad44;
      param_1 = (undefined1 (*) [16])(lVar21 + -0x28);
      pauVar9 = (undefined1 (*) [16])&dStack_90;
      FUN_10a55ad4c();
      lVar21 = **(long **)*param_2;
      lVar20 = (*(long **)*param_2)[1];
      pauVar15 = param_1;
    }
    else {
      lVar21 = **(long **)*param_2;
      lVar20 = (*(long **)*param_2)[1];
      if ((lVar21 == lVar20) || (*(long *)(lVar20 + -0x40) == *(long *)(lVar20 + -0x38)))
      goto LAB_10a55ad44;
      pauVar15 = (undefined1 (*) [16])(ulong)*(uint *)(*(long *)(lVar20 + -0x38) + -4);
      pauVar9 = param_2;
    }
    if (lVar21 == lVar20) {
LAB_10a55ad44:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a55ad48);
      (*pcVar5)();
    }
    pdVar2 = *(double **)(lVar20 + -0x38);
    uVar14 = SUB84(pauVar15,0);
    if (pdVar2 < *(double **)(lVar20 + -0x30)) {
      pdVar2[1] = dStack_b8;
      *pdVar2 = dStack_c0;
      pdVar2[2] = dVar22;
      pdVar18 = pdVar2 + 4;
      *(undefined4 *)(pdVar2 + 3) = uVar14;
      *(undefined4 *)((long)pdVar2 + 0x1c) = uVar14;
    }
    else {
      plVar17 = (long *)(lVar20 + -0x40);
      lVar21 = (long)pdVar2 - *plVar17;
      uVar19 = (lVar21 >> 5) + 1;
      if (uVar19 >> 0x3b != 0) {
        FUN_10a35e3ec();
        pcStack_c8 = FUN_10a55ad4c;
        ppuStack_100 = &puStack_d0;
        puVar16 = *(undefined8 **)(*param_1 + 8);
        uVar19 = (long)puVar16 - *(long *)*param_1;
        if (puVar16 < *(undefined8 **)param_1[1]) {
          uVar4 = *(undefined8 *)*pauVar9;
          puVar16[1] = *(undefined8 *)(*pauVar9 + 8);
          *puVar16 = uVar4;
          puVar16 = puVar16 + 2;
        }
        else {
          uVar12 = ((long)uVar19 >> 4) + 1;
          puStack_d0 = &stack0xfffffffffffffff0;
          if (uVar12 >> 0x3c != 0) {
            FUN_10a35e504();
            pcStack_f8 = FUN_10a55ae30;
            uStack_130 = *(undefined8 *)(param_3 + 0x20);
            uStack_128 = *(undefined8 *)(param_3 + 0x28);
            auVar23 = NEON_scvtf(*param_1,8);
            dStack_120 = auVar23._0_8_ * 0.015625;
            dStack_118 = auVar23._8_8_ * 0.015625;
            auVar23 = NEON_scvtf(*pauVar9,8);
            dStack_110 = auVar23._0_8_ * 0.015625;
            dStack_108 = auVar23._8_8_ * 0.015625;
            *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0x48);
            FUN_10a55ae98(0,0x3ff0000000000000,&uStack_130,param_3,0);
            return 0;
          }
          uVar10 = (long)*(undefined8 **)param_1[1] - *(long *)*param_1;
          uVar11 = (long)uVar10 >> 3;
          if (uVar11 <= uVar12) {
            uVar11 = uVar12;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar11 = 0xfffffffffffffff;
          }
          pauVar15 = param_1;
          func_0x000109435ef8(param_1,uVar11,0);
          puVar1 = (undefined8 *)((long)pauVar15 + uVar19);
          uVar4 = *(undefined8 *)*pauVar9;
          puVar1[1] = *(undefined8 *)(*pauVar9 + 8);
          *puVar1 = uVar4;
          puVar16 = puVar1 + 2;
          puVar8 = *(undefined8 **)*param_1;
          puVar3 = *(undefined8 **)(*param_1 + 8);
          lVar21 = (long)puVar8 - (long)puVar3;
          puVar1 = (undefined8 *)((long)puVar1 + lVar21);
          puVar13 = puVar1;
          if (lVar21 != 0) {
            do {
              puVar7 = puVar8 + 2;
              uVar4 = *puVar8;
              puVar13[1] = puVar8[1];
              *puVar13 = uVar4;
              puVar8 = puVar7;
              puVar13 = puVar13 + 2;
            } while (puVar7 != puVar3);
            puVar8 = *(undefined8 **)*param_1;
          }
          *(undefined8 **)*param_1 = puVar1;
          *(undefined8 **)(*param_1 + 8) = puVar16;
          *(undefined1 (**) [16])param_1[1] = pauVar15 + uVar11;
          if (puVar8 != (undefined8 *)0x0) {
            _free();
          }
        }
        *(undefined8 **)(*param_1 + 8) = puVar16;
        return uVar19 >> 4;
      }
      uVar11 = (long)*(double **)(lVar20 + -0x30) - *plVar17;
      uVar12 = (long)uVar11 >> 4;
      if (uVar12 <= uVar19) {
        uVar12 = uVar19;
      }
      if (0x7fffffffffffffdf < uVar11) {
        uVar12 = 0x7ffffffffffffff;
      }
      plStack_58 = plVar17;
      if (uVar12 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar17;
        FUN_10a35e400(plVar17,uVar12,0);
      }
      pdStack_70 = (double *)((long)plVar6 + lVar21);
      plStack_60 = plVar6 + uVar12 * 4;
      pdStack_70[1] = dStack_b8;
      *pdStack_70 = dStack_c0;
      pdStack_70[2] = dVar22;
      *(undefined4 *)(pdStack_70 + 3) = uVar14;
      *(undefined4 *)((long)pdStack_70 + 0x1c) = uVar14;
      pdStack_68 = pdStack_70 + 4;
      plStack_78 = plVar6;
      FUN_10a55a2b4(plVar17,&plStack_78);
      pdVar18 = *(double **)(lVar20 + -0x38);
      if (plStack_78 != (long *)0x0) {
        _free();
      }
    }
    *(double **)(lVar20 + -0x38) = pdVar18;
    dVar22 = dStack_a0 - *(double *)param_2[2];
    dVar24 = dStack_98 - *(double *)(param_2[2] + 8);
    *(double *)(param_2[4] + 8) =
         *(double *)(param_2[4] + 8) + SQRT(dVar22 * dVar22 + dVar24 * dVar24);
    *(double *)(param_2[2] + 8) = dStack_98;
    *(double *)param_2[2] = dStack_a0;
    *(double *)(param_2[3] + 8) = dStack_a8;
    *(double *)param_2[3] = dStack_b0;
    *(undefined4 *)param_2[5] = 1;
    if (*(int *)(param_2[5] + 4) == 0) {
      *(double *)(param_2[7] + 8) = dStack_a8;
      *(double *)param_2[7] = dStack_b0;
      *(undefined4 *)(param_2[5] + 4) = 1;
    }
  }
  return 0;
}



/* Entry: 10a55ad4c; end: 10a55ae2f;  */

ulong FUN_10a55ad4c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar12 = *(undefined8 **)(*param_1 + 8);
  uVar13 = (long)puVar12 - *(long *)*param_1;
  if (puVar12 < *(undefined8 **)param_1[1]) {
    uVar5 = *(undefined8 *)*param_2;
    puVar12[1] = *(undefined8 *)(*param_2 + 8);
    *puVar12 = uVar5;
    puVar12 = puVar12 + 2;
  }
  else {
    uVar1 = ((long)uVar13 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a35e504();
      pcStack_38 = FUN_10a55ae30;
      uStack_70 = *(undefined8 *)(param_3 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x28);
      auVar14 = NEON_scvtf(*param_1,8);
      dStack_60 = auVar14._0_8_ * 0.015625;
      dStack_58 = auVar14._8_8_ * 0.015625;
      auVar14 = NEON_scvtf(*param_2,8);
      dStack_50 = auVar14._0_8_ * 0.015625;
      dStack_48 = auVar14._8_8_ * 0.015625;
      *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0x48);
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_10a55ae98(0,0x3ff0000000000000,&uStack_70,param_3,0);
      return 0;
    }
    uVar9 = (long)*(undefined8 **)param_1[1] - *(long *)*param_1;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    pauVar6 = param_1;
    func_0x000109435ef8(param_1,uVar10,0);
    puVar2 = (undefined8 *)((long)pauVar6 + uVar13);
    uVar5 = *(undefined8 *)*param_2;
    puVar2[1] = *(undefined8 *)(*param_2 + 8);
    *puVar2 = uVar5;
    puVar12 = puVar2 + 2;
    puVar8 = *(undefined8 **)*param_1;
    puVar3 = *(undefined8 **)(*param_1 + 8);
    lVar4 = (long)puVar8 - (long)puVar3;
    puVar2 = (undefined8 *)((long)puVar2 + lVar4);
    puVar11 = puVar2;
    if (lVar4 != 0) {
      do {
        puVar7 = puVar8 + 2;
        uVar5 = *puVar8;
        puVar11[1] = puVar8[1];
        *puVar11 = uVar5;
        puVar8 = puVar7;
        puVar11 = puVar11 + 2;
      } while (puVar7 != puVar3);
      puVar8 = *(undefined8 **)*param_1;
    }
    *(undefined8 **)*param_1 = puVar2;
    *(undefined8 **)(*param_1 + 8) = puVar12;
    *(undefined1 (**) [16])param_1[1] = pauVar6 + uVar10;
    if (puVar8 != (undefined8 *)0x0) {
      _free();
    }
  }
  *(undefined8 **)(*param_1 + 8) = puVar12;
  return uVar13 >> 4;
}



/* Entry: 10a55ae30; end: 10a55ae97;  */

undefined8 FUN_10a55ae30(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  uStack_40 = *(undefined8 *)(param_3 + 0x20);
  uStack_38 = *(undefined8 *)(param_3 + 0x28);
  auVar1 = NEON_scvtf(*param_1,8);
  dStack_30 = auVar1._0_8_ * 0.015625;
  dStack_28 = auVar1._8_8_ * 0.015625;
  auVar1 = NEON_scvtf(*param_2,8);
  dStack_20 = auVar1._0_8_ * 0.015625;
  dStack_18 = auVar1._8_8_ * 0.015625;
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0x48);
  FUN_10a55ae98(0,0x3ff0000000000000,&uStack_40,param_3,0);
  return 0;
}



/* Entry: 10a55ae98; end: 10a55b41f;  */

void FUN_10a55ae98(double param_1,double param_2,long **param_3,undefined8 *param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long **pplVar5;
  long **pplVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  double dVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined8 *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long *plVar24;
  double dVar25;
  long *plVar26;
  long *plVar27;
  double dVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  double dStack_98;
  long *plStack_90;
  double dStack_88;
  
  auVar18 = NEON_fmov(0x3fd0000000000000,8);
  auVar15 = NEON_fmov(0x3fe0000000000000,8);
  while( true ) {
    pplVar5 = &plStack_c0;
    pplVar6 = param_3;
    FUN_10a55b420(param_1,param_2);
    if (8 < param_5) break;
    dVar16 = (double)plStack_a0 - (double)plStack_c0;
    dVar19 = dStack_98 - (double)puStack_b8;
    dVar21 = SQRT(dVar16 * dVar16 + dVar19 * dVar19);
    if (ABS((((double)plStack_c0 * auVar18._0_8_ + (double)puStack_b0 * auVar15._0_8_ +
             (double)plStack_a0 * auVar18._0_8_) - (double)plStack_c0) * (dVar19 / dVar21) +
            (((double)puStack_b8 * auVar18._8_8_ + (double)plStack_a8 * auVar15._8_8_ +
             dStack_98 * auVar18._8_8_) - (double)puStack_b8) * -(dVar16 / dVar21)) <
        (double)param_4[1]) break;
    dVar16 = (param_2 + param_1) * 0.5;
    param_5 = param_5 + 1;
    FUN_10a55ae98(param_1,dVar16,param_3,param_4,param_5);
    param_1 = dVar16;
  }
  if (param_1 == 0.0) {
    dVar16 = ((double)param_3[2] - (double)*param_3) + (double)param_3[4] * 0.0;
    dVar19 = ((double)param_3[3] - (double)param_3[1]) + (double)param_3[5] * 0.0;
    dVar16 = dVar16 + dVar16;
    dVar19 = dVar19 + dVar19;
    dVar21 = dVar16 * 0.0 + dVar19 * -1.0;
    dVar19 = dVar16 * 1.0 + dVar19 * 0.0;
    dVar16 = SQRT(dVar21 * dVar21 + dVar19 * dVar19);
    plVar17 = (long *)(dVar21 / dVar16);
    puVar20 = (undefined8 *)(dVar19 / dVar16);
    plStack_c0 = plVar17;
    puStack_b8 = puVar20;
    if ((*(int *)(param_4 + 10) == 0) ||
       ((double)plVar17 * (double)param_4[6] + (double)puVar20 * (double)param_4[7] <
        (double)param_4[2])) {
      lVar7 = ((long *)*param_4)[1];
      if (*(long *)*param_4 == lVar7) goto LAB_10a55b418;
      pplVar5 = (long **)(lVar7 + -0x28);
      pplVar6 = &plStack_c0;
      FUN_10a55ad4c();
      pplVar11 = pplVar5;
    }
    else {
      lVar7 = ((long *)*param_4)[1];
      if ((*(long *)*param_4 == lVar7) || (*(long *)(lVar7 + -0x40) == *(long *)(lVar7 + -0x38)))
      goto LAB_10a55b418;
      pplVar11 = (long **)(ulong)*(uint *)(*(long *)(lVar7 + -0x38) + -4);
    }
    uVar10 = SUB84(pplVar11,0);
    if (*(int *)((long)param_4 + 0x54) == 0) {
      param_4[0xf] = puVar20;
      param_4[0xe] = plVar17;
      *(undefined4 *)((long)param_4 + 0x54) = 2;
    }
    lVar7 = *(long *)*param_4;
    lVar14 = ((long *)*param_4)[1];
  }
  else {
    lVar7 = *(long *)*param_4;
    lVar14 = ((long *)*param_4)[1];
    if ((lVar7 == lVar14) || (*(long *)(lVar14 + -0x40) == *(long *)(lVar14 + -0x38)))
    goto LAB_10a55b418;
    uVar10 = *(undefined4 *)(*(long *)(lVar14 + -0x38) + -4);
  }
  dVar19 = param_2 * -2.0 + 1.0;
  plVar12 = param_3[5];
  plVar17 = param_3[4];
  dVar16 = (double)*param_3 * (param_2 + -1.0) + (double)param_3[2] * dVar19 +
           (double)plVar17 * param_2;
  dVar19 = (double)param_3[1] * (param_2 + -1.0) + (double)param_3[3] * dVar19 +
           (double)plVar12 * param_2;
  dVar16 = dVar16 + dVar16;
  dVar19 = dVar19 + dVar19;
  dVar21 = dVar16 * 0.0 + dVar19 * -1.0;
  dStack_88 = dVar16 * 1.0 + dVar19 * 0.0;
  dVar16 = SQRT(dVar21 * dVar21 + dStack_88 * dStack_88);
  plStack_90 = (long *)(dVar21 / dVar16);
  dStack_88 = dStack_88 / dVar16;
  if (((param_2 == 1.0) && ((double)plVar17 == (double)param_4[0xc])) &&
     (plVar17 = plVar12, (double)plVar12 == (double)param_4[0xd])) {
    if (lVar7 == lVar14) goto LAB_10a55b418;
    if (*(long *)(lVar14 + -0x40) == *(long *)(lVar14 + -0x38)) goto LAB_10a55b154;
    plVar17 = (long *)param_4[2];
    if ((double)plStack_90 * (double)param_4[0xe] + dStack_88 * (double)param_4[0xf] <
        (double)plVar17) goto LAB_10a55b15c;
    pplVar11 = (long **)(ulong)*(uint *)(*(long *)(lVar14 + -0x40) + 0x18);
  }
  else {
LAB_10a55b154:
    if (lVar7 == lVar14) goto LAB_10a55b418;
LAB_10a55b15c:
    pplVar5 = (long **)(lVar14 + -0x28);
    pplVar6 = &plStack_90;
    FUN_10a55ad4c();
    pplVar11 = pplVar5;
  }
  lVar7 = ((long *)*param_4)[1];
  if (*(long *)*param_4 != lVar7) {
    uVar35 = param_4[9];
    uVar2 = param_4[4];
    uVar3 = param_4[5];
    puVar20 = *(undefined8 **)(lVar7 + -0x38);
    if (puVar20 < *(undefined8 **)(lVar7 + -0x30)) {
      puVar20[1] = uVar3;
      *puVar20 = uVar2;
      puVar20[2] = uVar35;
      puVar13 = puVar20 + 4;
      *(undefined4 *)(puVar20 + 3) = uVar10;
      *(int *)((long)puVar20 + 0x1c) = (int)pplVar11;
    }
    else {
      plVar12 = (long *)(lVar7 + -0x40);
      lVar14 = (long)puVar20 - *plVar12;
      uVar1 = (lVar14 >> 5) + 1;
      if (uVar1 >> 0x3b != 0) {
        dVar16 = (double)FUN_10a35e3ec();
        dVar19 = 1.0 - dVar16;
        dVar21 = (dVar16 + dVar16) * dVar19;
        plVar32 = pplVar6[1];
        plVar31 = *pplVar6;
        plVar34 = pplVar6[3];
        plVar33 = pplVar6[2];
        plVar27 = pplVar6[5];
        plVar26 = pplVar6[4];
        plVar12 = (long *)((double)plVar31 * dVar19 * dVar19 + (double)plVar33 * dVar21 +
                          (double)plVar26 * dVar16 * dVar16);
        plVar24 = (long *)((double)plVar32 * dVar19 * dVar19 + (double)plVar34 * dVar21 +
                          (double)plVar27 * dVar16 * dVar16);
        dVar19 = 1.0 - (double)plVar17;
        dVar21 = ((double)plVar17 + (double)plVar17) * dVar19;
        plVar29 = (long *)((double)plVar31 * dVar19 * dVar19 + (double)plVar33 * dVar21 +
                          (double)plVar26 * (double)plVar17 * (double)plVar17);
        plVar30 = (long *)((double)plVar32 * dVar19 * dVar19 + (double)plVar34 * dVar21 +
                          (double)plVar27 * (double)plVar17 * (double)plVar17);
        dVar16 = (dVar16 + (double)plVar17) * 0.5;
        dVar21 = 1.0 - dVar16;
        dVar22 = (dVar16 + dVar16) * dVar21;
        dVar19 = (double)plVar31 * dVar21 * dVar21 + (double)plVar33 * dVar22 +
                 (double)plVar26 * dVar16 * dVar16;
        dVar16 = (double)plVar32 * dVar21 * dVar21 + (double)plVar34 * dVar22 +
                 (double)plVar27 * dVar16 * dVar16;
        auVar15 = NEON_fmov(0xbfe0000000000000,8);
        pplVar5[1] = plVar24;
        *pplVar5 = plVar12;
        pplVar5[3] = (long *)(dVar16 + dVar16 + ((double)plVar24 + (double)plVar30) * auVar15._8_8_)
        ;
        pplVar5[2] = (long *)(dVar19 + dVar19 + ((double)plVar12 + (double)plVar29) * auVar15._0_8_)
        ;
        pplVar5[5] = plVar30;
        pplVar5[4] = plVar29;
        return;
      }
      uVar8 = (long)*(undefined8 **)(lVar7 + -0x30) - *plVar12;
      uVar9 = (long)uVar8 >> 4;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar8) {
        uVar9 = 0x7ffffffffffffff;
      }
      plStack_a0 = plVar12;
      if (uVar9 == 0) {
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = plVar12;
        FUN_10a35e400(plVar12,uVar9,0);
      }
      puStack_b8 = (undefined8 *)((long)plVar17 + lVar14);
      plStack_a8 = plVar17 + uVar9 * 4;
      puStack_b8[1] = uVar3;
      *puStack_b8 = uVar2;
      puStack_b8[2] = uVar35;
      *(undefined4 *)(puStack_b8 + 3) = uVar10;
      *(int *)((long)puStack_b8 + 0x1c) = (int)pplVar11;
      puStack_b0 = puStack_b8 + 4;
      plStack_c0 = plVar17;
      FUN_10a55a2b4(plVar12,&plStack_c0);
      puVar13 = *(undefined8 **)(lVar7 + -0x38);
      if (plStack_c0 != (long *)0x0) {
        _free();
      }
    }
    *(undefined8 **)(lVar7 + -0x38) = puVar13;
    dVar16 = 1.0 - param_2;
    dVar19 = (param_2 + param_2) * dVar16;
    plVar17 = *param_3;
    plVar12 = param_3[2];
    plVar24 = param_3[4];
    param_4[5] = (double)param_3[1] * dVar16 * dVar16 + (double)param_3[3] * dVar19 +
                 (double)param_3[5] * param_2 * param_2;
    param_4[4] = (double)plVar17 * dVar16 * dVar16 + (double)plVar12 * dVar19 +
                 (double)plVar24 * param_2 * param_2;
    dVar36 = (double)param_4[8];
    FUN_10a55b420(0,&plStack_c0,param_3);
    dVar21 = (double)puStack_b0 - (double)plStack_c0;
    dVar22 = (double)plStack_a8 - (double)puStack_b8;
    dVar28 = SQRT((double)plStack_c0 * (double)plStack_c0 + (double)puStack_b8 * (double)puStack_b8)
    ;
    dVar19 = SQRT((double)puStack_b0 * (double)puStack_b0 + (double)plStack_a8 * (double)plStack_a8)
    ;
    dVar16 = SQRT((double)plStack_a0 * (double)plStack_a0 + dStack_98 * dStack_98);
    if (dVar19 <= dVar28) {
      dVar19 = dVar28;
    }
    if (dVar16 <= dVar19) {
      dVar16 = dVar19;
    }
    if (dVar16 * 1e-08 <=
        ABS(-(dStack_98 - (double)plStack_a8) * dVar21 +
            ((double)plStack_a0 - (double)puStack_b0) * dVar22)) {
      dVar16 = (double)plStack_a0 + ((double)plStack_c0 - ((double)puStack_b0 + (double)puStack_b0))
      ;
      dStack_98 = dStack_98 + ((double)puStack_b8 - ((double)plStack_a8 + (double)plStack_a8));
      dVar16 = dVar16 + dVar16;
      dStack_98 = dStack_98 + dStack_98;
      dVar21 = dVar21 + dVar21;
      dVar22 = dVar22 + dVar22;
      dVar28 = dVar16 * dVar16 + dStack_98 * dStack_98;
      dVar16 = dVar21 * dVar16 + dVar22 * dStack_98;
      dVar16 = dVar16 + dVar16;
      dVar21 = dVar21 * dVar21 + dVar22 * dVar22;
      dVar25 = SQRT(dVar28);
      dVar37 = (dVar28 + dVar28) * dVar25;
      dVar22 = SQRT(dVar21 + dVar28 + dVar16);
      dVar22 = dVar22 + dVar22;
      dVar23 = SQRT(dVar21) + SQRT(dVar21);
      dVar19 = (double)_log(ABS((dVar16 / dVar25 + dVar25 * 2.0 + dVar22) /
                                (dVar23 + dVar16 / dVar25)));
      dVar16 = (dVar25 * dVar16 * (dVar22 - dVar23) + dVar22 * dVar37 +
               dVar19 * (-(dVar16 * dVar16) + dVar28 * dVar21 * 4.0)) / (dVar37 * 4.0);
    }
    else {
      dVar16 = SQRT(((double)plStack_c0 - (double)plStack_a0) *
                    ((double)plStack_c0 - (double)plStack_a0) +
                    ((double)puStack_b8 - dStack_98) * ((double)puStack_b8 - dStack_98));
    }
    param_4[9] = dVar36 + dVar16;
    lVar7 = ((long *)*param_4)[1];
    if ((*(long *)*param_4 != lVar7) &&
       (lVar14 = *(long *)(lVar7 + -0x20), *(long *)(lVar7 + -0x28) != lVar14)) {
      uVar2 = *(undefined8 *)(lVar14 + -0x10);
      param_4[7] = *(undefined8 *)(lVar14 + -8);
      param_4[6] = uVar2;
      *(undefined4 *)(param_4 + 10) = 2;
      return;
    }
  }
LAB_10a55b418:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a55b41c);
  (*pcVar4)();
}



/* Entry: 10a55b420; end: 10a55b4cf;  */

void FUN_10a55b420(double param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar4 = 1.0 - param_1;
  dVar5 = (param_1 + param_1) * dVar4;
  dVar13 = param_4[1];
  dVar12 = *param_4;
  dVar15 = param_4[3];
  dVar14 = param_4[2];
  dVar9 = param_4[5];
  dVar8 = param_4[4];
  dVar6 = dVar12 * dVar4 * dVar4 + dVar14 * dVar5 + dVar8 * param_1 * param_1;
  dVar7 = dVar13 * dVar4 * dVar4 + dVar15 * dVar5 + dVar9 * param_1 * param_1;
  dVar4 = 1.0 - param_2;
  dVar5 = (param_2 + param_2) * dVar4;
  dVar10 = dVar12 * dVar4 * dVar4 + dVar14 * dVar5 + dVar8 * param_2 * param_2;
  dVar11 = dVar13 * dVar4 * dVar4 + dVar15 * dVar5 + dVar9 * param_2 * param_2;
  dVar4 = (param_1 + param_2) * 0.5;
  dVar1 = 1.0 - dVar4;
  dVar2 = (dVar4 + dVar4) * dVar1;
  dVar5 = dVar12 * dVar1 * dVar1 + dVar14 * dVar2 + dVar8 * dVar4 * dVar4;
  dVar4 = dVar13 * dVar1 * dVar1 + dVar15 * dVar2 + dVar9 * dVar4 * dVar4;
  auVar3 = NEON_fmov(0xbfe0000000000000,8);
  param_3[1] = dVar7;
  *param_3 = dVar6;
  param_3[3] = dVar4 + dVar4 + (dVar7 + dVar11) * auVar3._8_8_;
  param_3[2] = dVar5 + dVar5 + (dVar6 + dVar10) * auVar3._0_8_;
  param_3[5] = dVar11;
  param_3[4] = dVar10;
  return;
}



/* Entry: 10a55b4d0; end: 10a55b55f;  */

undefined8
FUN_10a55b4d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  uStack_50 = *(undefined8 *)(param_4 + 0x20);
  uStack_48 = *(undefined8 *)(param_4 + 0x28);
  auVar1 = NEON_scvtf(*param_1,8);
  dStack_40 = auVar1._0_8_ * 0.015625;
  dStack_38 = auVar1._8_8_ * 0.015625;
  auVar1 = NEON_scvtf(*param_2,8);
  dStack_30 = auVar1._0_8_ * 0.015625;
  dStack_28 = auVar1._8_8_ * 0.015625;
  auVar1 = NEON_scvtf(*param_3,8);
  dStack_20 = auVar1._0_8_ * 0.015625;
  dStack_18 = auVar1._8_8_ * 0.015625;
  *(undefined8 *)(param_4 + 0x40) = *(undefined8 *)(param_4 + 0x48);
  FUN_10a55b560(0,0x3ff0000000000000,&uStack_50,param_4,0);
  return 0;
}



/* Entry: 10a55b560; end: 10a55bcfb;  */

void FUN_10a55b560(double param_1,double param_2,long **param_3,undefined8 *param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  long **pplVar6;
  long *plVar7;
  long **pplVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined4 uVar15;
  long **pplVar16;
  undefined8 *puVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  double dVar26;
  long *plVar27;
  long *plVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  long *plVar32;
  long *plVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double adStack_110 [4];
  double adStack_f0 [4];
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  long *plStack_90;
  double dStack_88;
  
  pplVar6 = &plStack_d0;
  pplVar8 = param_3;
  FUN_10a55bcfc();
  puVar17 = puStack_c0;
  puVar23 = puStack_c8;
  plVar21 = plStack_d0;
  dVar19 = dStack_a0 - (double)plStack_d0;
  dVar20 = dStack_98 - (double)puStack_c8;
  dVar26 = SQRT(dVar19 * dVar19 + dVar20 * dVar20);
  dVar20 = dVar20 / dVar26;
  dVar29 = -(dVar19 / dVar26);
  dVar26 = (double)plStack_d0 * dVar20 + (double)puStack_c8 * dVar29;
  dVar31 = (double)puStack_c0 * dVar20 + (double)plStack_b8 * dVar29;
  dVar19 = (double)plStack_b0 * dVar20 + dStack_a8 * dVar29;
  dVar39 = (dVar31 * 2.0 - dVar26) - dVar19;
  dVar19 = (((dVar26 - dVar31 * 3.0) + dVar19 * 3.0) - (dStack_a0 * dVar20 + dStack_98 * dVar29)) *
           0.5;
  dVar26 = (dVar26 - dVar31) * 0.5;
  dVar31 = -1.0;
  if (0.0 <= dVar39) {
    dVar31 = 1.0;
  }
  dVar31 = (dVar39 + SQRT(dVar26 * dVar19 * -4.0 + dVar39 * dVar39) * dVar31) * -0.5;
  dVar19 = dVar31 / dVar19;
  dVar26 = dVar26 / dVar31;
  adStack_110[0] = dVar19;
  adStack_f0[0] = dVar26;
  if (dVar26 < dVar19) {
    adStack_110[0] = dVar26;
    adStack_f0[0] = dVar19;
    dVar19 = dVar26;
  }
  pdVar9 = adStack_110;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    dVar26 = *pdVar9;
    dVar39 = 1.0 - dVar26;
    dVar41 = dVar39 * dVar39 * dVar39;
    dVar40 = dVar26 * 3.0 * dVar39 * dVar39;
    dVar39 = dVar39 * dVar26 * dVar26 * 3.0;
    dVar26 = dVar26 * dVar26 * dVar26;
    dVar31 = dStack_a0 * dVar26 +
             (double)plStack_b0 * dVar39 + (double)plVar21 * dVar41 + (double)puVar17 * dVar40;
    dVar26 = dStack_98 * dVar26 +
             dStack_a8 * dVar39 + (double)puVar23 * dVar41 + (double)plStack_b8 * dVar40;
    pdVar9[3] = dVar26;
    pdVar9[2] = dVar31;
    pdVar9[1] = ABS(dVar20 * (dVar31 - (double)plVar21) + dVar29 * (dVar26 - (double)puVar23));
    pdVar9 = adStack_f0;
    bVar4 = false;
  } while (bVar5);
  pdVar9 = adStack_110;
  dVar26 = 0.0;
  bVar4 = true;
  do {
    bVar14 = bVar4;
    dVar20 = *pdVar9;
    bVar4 = false;
    bVar5 = true;
    if (0.0 <= dVar20) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar20)) {
        bVar4 = dVar20 == 1.0;
        bVar5 = 1.0 <= dVar20;
      }
    }
    dVar20 = dVar26;
    if ((!bVar5 || bVar4) && (dVar20 = pdVar9[1], pdVar9[1] <= dVar26)) {
      dVar20 = dVar26;
    }
    pdVar9 = adStack_f0;
    dVar26 = dVar20;
    bVar4 = false;
  } while (bVar14);
  adStack_110[0] = dVar19;
  if ((param_5 < 9) && (dVar26 = (double)param_4[1], dVar26 <= dVar20)) {
    uVar15 = 0;
    uVar10 = 0;
    pdVar9 = adStack_110;
    bVar4 = true;
    do {
      bVar14 = bVar4;
      dVar20 = *pdVar9;
      bVar4 = false;
      bVar5 = true;
      if (0.0 <= dVar20) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar20)) {
          bVar4 = dVar20 == 1.0;
          bVar5 = 1.0 <= dVar20;
        }
      }
      if ((!bVar5 || bVar4) && (dVar26 < pdVar9[1])) {
        if (1 < uVar10) goto LAB_10a55bcf0;
        *(undefined4 *)((long)&plStack_d0 + uVar10 * 4) = uVar15;
        uVar10 = uVar10 + 1;
      }
      uVar15 = 1;
      pdVar9 = adStack_f0;
      bVar4 = false;
    } while (bVar14);
    dVar26 = param_2 * adStack_f0[0] + (1.0 - adStack_f0[0]) * param_1;
    adStack_110[0] = param_2 * dVar19 + (1.0 - dVar19) * param_1;
    adStack_f0[0] = dVar26;
    if (uVar10 == 1) {
      bVar4 = 1 < (uint)plStack_d0;
      if (bVar4) goto LAB_10a55bcf0;
      dVar26 = adStack_110[((ulong)plStack_d0 & 0xffffffff) * 4];
LAB_10a55b8d4:
      FUN_10a55b560(param_3,param_4,param_5 + 1);
      FUN_10a55b560(dVar26,param_3,param_4,param_5 + 1);
      return;
    }
    if (uVar10 != 0) {
      FUN_10a55b560(param_3,param_4,param_5 + 1);
      goto LAB_10a55b8d4;
    }
    goto LAB_10a55bcf8;
  }
  auVar47 = NEON_fmov(0x4008000000000000,8);
  dVar26 = auVar47._8_8_;
  dVar19 = auVar47._0_8_;
  if (param_1 == 0.0) {
    dVar20 = (double)param_3[6] * 0.0 +
             (double)param_3[4] * 0.0 + ((double)param_3[2] * dVar19 - (double)*param_3 * dVar19);
    dVar29 = (double)param_3[7] * 0.0 +
             (double)param_3[5] * 0.0 + ((double)param_3[3] * dVar26 - (double)param_3[1] * dVar26);
    dVar31 = dVar20 * 0.0 + dVar29 * -1.0;
    dVar29 = dVar20 * 1.0 + dVar29 * 0.0;
    dVar20 = SQRT(dVar31 * dVar31 + dVar29 * dVar29);
    plVar21 = (long *)(dVar31 / dVar20);
    puVar23 = (undefined8 *)(dVar29 / dVar20);
    plStack_d0 = plVar21;
    puStack_c8 = puVar23;
    if ((*(int *)(param_4 + 10) == 0) ||
       ((double)plVar21 * (double)param_4[6] + (double)puVar23 * (double)param_4[7] <
        (double)param_4[2])) {
      lVar12 = ((long *)*param_4)[1];
      if (*(long *)*param_4 == lVar12) goto LAB_10a55bcf0;
      pplVar6 = (long **)(lVar12 + -0x28);
      pplVar8 = &plStack_d0;
      FUN_10a55ad4c();
      pplVar16 = pplVar6;
    }
    else {
      lVar12 = ((long *)*param_4)[1];
      if ((*(long *)*param_4 == lVar12) || (*(long *)(lVar12 + -0x40) == *(long *)(lVar12 + -0x38)))
      goto LAB_10a55bcf0;
      pplVar16 = (long **)(ulong)*(uint *)(*(long *)(lVar12 + -0x38) + -4);
    }
    uVar15 = SUB84(pplVar16,0);
    if (*(int *)((long)param_4 + 0x54) == 0) {
      param_4[0xf] = puVar23;
      param_4[0xe] = plVar21;
      *(undefined4 *)((long)param_4 + 0x54) = 2;
    }
    lVar12 = *(long *)*param_4;
    lVar18 = ((long *)*param_4)[1];
  }
  else {
    lVar12 = *(long *)*param_4;
    lVar18 = ((long *)*param_4)[1];
    if ((lVar12 == lVar18) || (*(long *)(lVar18 + -0x40) == *(long *)(lVar18 + -0x38)))
    goto LAB_10a55bcf0;
    uVar15 = *(undefined4 *)(*(long *)(lVar18 + -0x38) + -4);
  }
  dVar40 = 1.0 - param_2;
  dVar29 = (param_2 * -3.0 + 1.0) * dVar40 * 3.0;
  dVar20 = param_2 * 3.0;
  dVar39 = dVar20 * (param_2 * -3.0 + 2.0);
  auVar47 = NEON_fmov(0xc008000000000000,8);
  dVar31 = (double)param_3[6] * param_2 * dVar20 +
           (double)param_3[4] * dVar39 +
           (double)param_3[2] * dVar29 + (double)*param_3 * auVar47._0_8_ * dVar40 * dVar40;
  dVar29 = (double)param_3[7] * param_2 * dVar20 +
           (double)param_3[5] * dVar39 +
           (double)param_3[3] * dVar29 + (double)param_3[1] * auVar47._8_8_ * dVar40 * dVar40;
  dVar39 = dVar31 * 0.0 + dVar29 * -1.0;
  dStack_88 = dVar31 * 1.0 + dVar29 * 0.0;
  dVar29 = SQRT(dVar39 * dVar39 + dStack_88 * dStack_88);
  plStack_90 = (long *)(dVar39 / dVar29);
  dStack_88 = dStack_88 / dVar29;
  if (((param_2 == 1.0) && ((double)param_3[6] == (double)param_4[0xc])) &&
     ((double)param_3[7] == (double)param_4[0xd])) {
    if (lVar12 == lVar18) goto LAB_10a55bcf0;
    if (*(long *)(lVar18 + -0x40) == *(long *)(lVar18 + -0x38)) goto LAB_10a55ba44;
    if ((double)plStack_90 * (double)param_4[0xe] + dStack_88 * (double)param_4[0xf] <
        (double)param_4[2]) goto LAB_10a55ba4c;
    pplVar16 = (long **)(ulong)*(uint *)(*(long *)(lVar18 + -0x40) + 0x18);
  }
  else {
LAB_10a55ba44:
    if (lVar12 == lVar18) goto LAB_10a55bcf0;
LAB_10a55ba4c:
    pplVar6 = (long **)(lVar18 + -0x28);
    pplVar8 = &plStack_90;
    FUN_10a55ad4c();
    pplVar16 = pplVar6;
  }
  lVar12 = ((long *)*param_4)[1];
  if (*(long *)*param_4 != lVar12) {
    uVar34 = param_4[9];
    uVar1 = param_4[4];
    uVar2 = param_4[5];
    puVar23 = *(undefined8 **)(lVar12 + -0x38);
    if (puVar23 < *(undefined8 **)(lVar12 + -0x30)) {
      puVar23[1] = uVar2;
      *puVar23 = uVar1;
      puVar23[2] = uVar34;
      puVar17 = puVar23 + 4;
      *(undefined4 *)(puVar23 + 3) = uVar15;
      *(int *)((long)puVar23 + 0x1c) = (int)pplVar16;
    }
    else {
      plVar21 = (long *)(lVar12 + -0x40);
      lVar18 = (long)puVar23 - *plVar21;
      uVar10 = (lVar18 >> 5) + 1;
      if (uVar10 >> 0x3b != 0) {
        FUN_10a35e3ec();
LAB_10a55bcf8:
        auVar47 = FUN_10a55be90();
        dVar26 = auVar47._8_8_;
        dVar19 = auVar47._0_8_;
        dVar20 = 1.0 - dVar19;
        dVar31 = dVar20 * dVar20 * dVar20;
        dVar29 = dVar19 * 3.0 * dVar20 * dVar20;
        dVar20 = dVar20 * dVar19 * dVar19 * 3.0;
        dVar39 = dVar19 * dVar19 * dVar19;
        plVar21 = *pplVar8;
        plVar7 = pplVar8[1];
        plVar33 = pplVar8[3];
        plVar32 = pplVar8[2];
        plVar36 = pplVar8[5];
        plVar35 = pplVar8[4];
        plVar38 = pplVar8[7];
        plVar37 = pplVar8[6];
        plVar22 = (long *)((double)plVar21 * dVar31 + (double)plVar32 * dVar29 +
                           (double)plVar35 * dVar20 + (double)plVar37 * dVar39);
        plVar24 = (long *)((double)plVar7 * dVar31 + (double)plVar33 * dVar29 +
                           (double)plVar36 * dVar20 + (double)plVar38 * dVar39);
        dVar20 = 1.0 - dVar26;
        dVar31 = dVar20 * dVar20 * dVar20;
        dVar29 = dVar26 * 3.0 * dVar20 * dVar20;
        dVar20 = dVar20 * dVar26 * dVar26 * 3.0;
        dVar39 = dVar26 * dVar26 * dVar26;
        plVar27 = (long *)((double)plVar21 * dVar31 + (double)plVar32 * dVar29 +
                           (double)plVar35 * dVar20 + (double)plVar37 * dVar39);
        plVar28 = (long *)((double)plVar7 * dVar31 + (double)plVar33 * dVar29 +
                           (double)plVar36 * dVar20 + (double)plVar38 * dVar39);
        dVar31 = (dVar26 + dVar19 * 2.0) / 3.0;
        dVar41 = 1.0 - dVar31;
        dVar45 = dVar41 * dVar41 * dVar41;
        dVar43 = dVar31 * 3.0 * dVar41 * dVar41;
        dVar41 = dVar41 * dVar31 * dVar31 * 3.0;
        dVar31 = dVar31 * dVar31 * dVar31;
        dVar19 = (dVar19 + dVar26 * 2.0) / 3.0;
        dVar20 = 1.0 - dVar19;
        dVar40 = dVar20 * dVar20 * dVar20;
        dVar39 = dVar19 * 3.0 * dVar20 * dVar20;
        dVar20 = dVar20 * dVar19 * dVar19 * 3.0;
        dVar19 = dVar19 * dVar19 * dVar19;
        auVar47 = NEON_fmov(0x403b000000000000,8);
        auVar25 = NEON_fmov(0x4020000000000000,8);
        auVar30 = NEON_fmov(0x4018000000000000,8);
        dVar29 = ((((double)plVar21 * dVar45 + (double)plVar32 * dVar43 + (double)plVar35 * dVar41 +
                   (double)plVar37 * dVar31) * auVar47._0_8_ - (double)plVar22 * auVar25._0_8_) -
                 (double)plVar27) / auVar30._0_8_;
        dVar31 = ((((double)plVar7 * dVar45 + (double)plVar33 * dVar43 + (double)plVar36 * dVar41 +
                   (double)plVar38 * dVar31) * auVar47._8_8_ - (double)plVar24 * auVar25._8_8_) -
                 (double)plVar28) / auVar30._8_8_;
        dVar26 = ((((double)plVar21 * dVar40 + (double)plVar32 * dVar39 + (double)plVar35 * dVar20 +
                   (double)plVar37 * dVar19) * auVar47._0_8_ - (double)plVar22) -
                 (double)plVar27 * auVar25._0_8_) / auVar30._0_8_;
        dVar19 = ((((double)plVar7 * dVar40 + (double)plVar33 * dVar39 + (double)plVar36 * dVar20 +
                   (double)plVar38 * dVar19) * auVar47._8_8_ - (double)plVar24) -
                 (double)plVar28 * auVar25._8_8_) / auVar30._8_8_;
        pplVar6[1] = plVar24;
        *pplVar6 = plVar22;
        pplVar6[3] = (long *)(dVar31 * 0.6666666666666666 - dVar19 * 0.3333333333333333);
        pplVar6[2] = (long *)(dVar29 * 0.6666666666666666 - dVar26 * 0.3333333333333333);
        pplVar6[5] = (long *)(dVar19 * 0.6666666666666666 - dVar31 * 0.3333333333333333);
        pplVar6[4] = (long *)(dVar26 * 0.6666666666666666 - dVar29 * 0.3333333333333333);
        pplVar6[7] = plVar28;
        pplVar6[6] = plVar27;
        return;
      }
      uVar11 = (long)*(undefined8 **)(lVar12 + -0x30) - *plVar21;
      uVar13 = (long)uVar11 >> 4;
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      if (0x7fffffffffffffdf < uVar11) {
        uVar13 = 0x7ffffffffffffff;
      }
      plStack_b0 = plVar21;
      if (uVar13 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar21;
        FUN_10a35e400(plVar21,uVar13,0);
      }
      puStack_c8 = (undefined8 *)((long)plVar7 + lVar18);
      plStack_b8 = plVar7 + uVar13 * 4;
      puStack_c8[1] = uVar2;
      *puStack_c8 = uVar1;
      puStack_c8[2] = uVar34;
      *(undefined4 *)(puStack_c8 + 3) = uVar15;
      *(int *)((long)puStack_c8 + 0x1c) = (int)pplVar16;
      puStack_c0 = puStack_c8 + 4;
      plStack_d0 = plVar7;
      FUN_10a55a2b4(plVar21,&plStack_d0);
      puVar17 = *(undefined8 **)(lVar12 + -0x38);
      if (plStack_d0 != (long *)0x0) {
        _free();
      }
    }
    *(undefined8 **)(lVar12 + -0x38) = puVar17;
    dVar29 = dVar40 * dVar40 * dVar40;
    dVar20 = dVar20 * dVar40 * dVar40;
    dVar40 = dVar40 * param_2 * param_2 * 3.0;
    plVar21 = *param_3;
    plVar24 = param_3[2];
    param_2 = param_2 * param_2 * param_2;
    plVar7 = param_3[4];
    plVar22 = param_3[6];
    param_4[5] = (double)param_3[1] * dVar29 + (double)param_3[3] * dVar20 +
                 (double)param_3[5] * dVar40 + (double)param_3[7] * param_2;
    param_4[4] = (double)plVar21 * dVar29 + (double)plVar24 * dVar20 + (double)plVar7 * dVar40 +
                 (double)plVar22 * param_2;
    dVar20 = (double)param_4[8];
    dVar29 = 0.0;
    FUN_10a55bcfc(0,&plStack_d0,param_3);
    pdVar9 = (double *)&UNK_10e4c9a58;
    lVar12 = 5;
    do {
      dVar31 = (*pdVar9 + 1.0) * 0.5;
      dVar41 = 1.0 - dVar31;
      dVar43 = (dVar31 * -3.0 + 1.0) * dVar41 * 3.0;
      dVar39 = dVar31 * dVar31 * 3.0;
      dVar42 = dVar31 * 3.0 * (dVar31 * -3.0 + 2.0);
      dVar31 = (1.0 - *pdVar9) * 0.5;
      dVar45 = 1.0 - dVar31;
      dVar44 = (dVar31 * -3.0 + 1.0) * dVar45 * 3.0;
      dVar46 = dVar31 * 3.0 * (dVar31 * -3.0 + 2.0);
      dVar31 = dVar31 * dVar31 * 3.0;
      dVar40 = dStack_a0 * dVar39 +
               (double)plStack_b0 * dVar42 +
               ((double)puStack_c0 * dVar43 - (double)plStack_d0 * dVar19 * dVar41 * dVar41);
      dVar41 = dStack_98 * dVar39 +
               dStack_a8 * dVar42 +
               ((double)plStack_b8 * dVar43 - (double)puStack_c8 * dVar26 * dVar41 * dVar41);
      dVar39 = dStack_a0 * dVar31 +
               (double)plStack_b0 * dVar46 +
               ((double)puStack_c0 * dVar44 - (double)plStack_d0 * dVar19 * dVar45 * dVar45);
      dVar31 = dStack_98 * dVar31 +
               dStack_a8 * dVar46 +
               ((double)plStack_b8 * dVar44 - (double)puStack_c8 * dVar26 * dVar45 * dVar45);
      dVar29 = dVar29 + pdVar9[-1] *
                        (SQRT(dVar40 * dVar40 + dVar41 * dVar41) +
                        SQRT(dVar39 * dVar39 + dVar31 * dVar31));
      pdVar9 = pdVar9 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    param_4[9] = dVar20 + dVar29 * 0.5;
    lVar12 = ((long *)*param_4)[1];
    if ((*(long *)*param_4 != lVar12) &&
       (lVar18 = *(long *)(lVar12 + -0x20), *(long *)(lVar12 + -0x28) != lVar18)) {
      uVar1 = *(undefined8 *)(lVar18 + -0x10);
      param_4[7] = *(undefined8 *)(lVar18 + -8);
      param_4[6] = uVar1;
      *(undefined4 *)(param_4 + 10) = 2;
      return;
    }
  }
LAB_10a55bcf0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55bcf4);
  (*pcVar3)();
}



/* Entry: 10a55bcfc; end: 10a55be8f;  */

void FUN_10a55bcfc(double param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
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
  
  dVar4 = 1.0 - param_1;
  dVar14 = dVar4 * dVar4 * dVar4;
  dVar8 = param_1 * 3.0 * dVar4 * dVar4;
  dVar4 = dVar4 * param_1 * param_1 * 3.0;
  dVar19 = param_1 * param_1 * param_1;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar13 = param_4[3];
  dVar12 = param_4[2];
  dVar16 = param_4[5];
  dVar15 = param_4[4];
  dVar18 = param_4[7];
  dVar17 = param_4[6];
  dVar5 = dVar1 * dVar14 + dVar12 * dVar8 + dVar15 * dVar4 + dVar17 * dVar19;
  dVar14 = dVar2 * dVar14 + dVar13 * dVar8 + dVar16 * dVar4 + dVar18 * dVar19;
  dVar4 = 1.0 - param_2;
  dVar19 = dVar4 * dVar4 * dVar4;
  dVar8 = param_2 * 3.0 * dVar4 * dVar4;
  dVar4 = dVar4 * param_2 * param_2 * 3.0;
  dVar21 = param_2 * param_2 * param_2;
  dVar9 = dVar1 * dVar19 + dVar12 * dVar8 + dVar15 * dVar4 + dVar17 * dVar21;
  dVar10 = dVar2 * dVar19 + dVar13 * dVar8 + dVar16 * dVar4 + dVar18 * dVar21;
  dVar21 = (param_2 + param_1 * 2.0) / 3.0;
  dVar22 = 1.0 - dVar21;
  dVar24 = dVar22 * dVar22 * dVar22;
  dVar23 = dVar21 * 3.0 * dVar22 * dVar22;
  dVar22 = dVar22 * dVar21 * dVar21 * 3.0;
  dVar21 = dVar21 * dVar21 * dVar21;
  dVar4 = (param_1 + param_2 * 2.0) / 3.0;
  dVar8 = 1.0 - dVar4;
  dVar20 = dVar8 * dVar8 * dVar8;
  dVar6 = dVar4 * 3.0 * dVar8 * dVar8;
  dVar8 = dVar8 * dVar4 * dVar4 * 3.0;
  dVar4 = dVar4 * dVar4 * dVar4;
  auVar3 = NEON_fmov(0x403b000000000000,8);
  auVar7 = NEON_fmov(0x4020000000000000,8);
  auVar11 = NEON_fmov(0x4018000000000000,8);
  dVar19 = (((dVar1 * dVar24 + dVar12 * dVar23 + dVar15 * dVar22 + dVar17 * dVar21) * auVar3._0_8_ -
            dVar5 * auVar7._0_8_) - dVar9) / auVar11._0_8_;
  dVar21 = (((dVar2 * dVar24 + dVar13 * dVar23 + dVar16 * dVar22 + dVar18 * dVar21) * auVar3._8_8_ -
            dVar14 * auVar7._8_8_) - dVar10) / auVar11._8_8_;
  dVar1 = (((dVar1 * dVar20 + dVar12 * dVar6 + dVar15 * dVar8 + dVar17 * dVar4) * auVar3._0_8_ -
           dVar5) - dVar9 * auVar7._0_8_) / auVar11._0_8_;
  dVar2 = (((dVar2 * dVar20 + dVar13 * dVar6 + dVar16 * dVar8 + dVar18 * dVar4) * auVar3._8_8_ -
           dVar14) - dVar10 * auVar7._8_8_) / auVar11._8_8_;
  param_3[1] = dVar14;
  *param_3 = dVar5;
  param_3[3] = dVar21 * 0.6666666666666666 - dVar2 * 0.3333333333333333;
  param_3[2] = dVar19 * 0.6666666666666666 - dVar1 * 0.3333333333333333;
  param_3[5] = dVar2 * 0.6666666666666666 - dVar21 * 0.3333333333333333;
  param_3[4] = dVar1 * 0.6666666666666666 - dVar19 * 0.3333333333333333;
  param_3[7] = dVar10;
  param_3[6] = dVar9;
  return;
}



/* Entry: 10a55be90; end: 10a55bed7;  */

void FUN_10a55be90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10a55bed8();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110bf0748,FUN_10a55bf00);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110bf0770;
  return;
}



/* Entry: 10a55bed8; end: 10a55beff;  */

void FUN_10a55bed8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc(param_1,&UNK_10f661104);
  *param_1 = &PTR_FUN_110bf0770;
  return;
}



/* Entry: 10a55bf00; end: 10a55bf03;  */

void FUN_10a55bf00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a55bf04; end: 10a55bf17;  */

void FUN_10a55bf04(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a55bf18; end: 10a55bfdf;  */

long * FUN_10a55bf18(long *param_1)

{
  func_0x00010a55bf4c(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a55bfe0; end: 10a55c107;  */

void FUN_10a55bfe0(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a55c108);
    (*pcVar1)();
  }
  plVar10 = (long *)plVar3[9];
  if (plVar10 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plVar10 = (long *)plVar3[9];
  }
  plVar3[9] = *plVar10;
  plVar10[3] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[8] = 0;
  plVar10[7] = 0;
  plVar10[6] = 0;
  *plVar10 = (long)&PTR_FUN_110bf0818;
  plVar10[1] = 0x7f7fffff00000000;
  *(undefined1 *)(plVar10 + 2) = 1;
  *(undefined8 *)((long)plVar10 + 0x14) = 0x3c23d70a3f800000;
  *(undefined4 *)((long)plVar10 + 0x1c) = 0x10;
  lVar14 = NEON_fmov(0x3f800000,4);
  plVar10[4] = lVar14;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar10,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar10 = plVar3 + 0x4b;
  lVar14 = plVar3[0x59];
  uVar5 = lVar14 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar10[lVar14 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar14 = *plVar10;
  lVar9 = plVar3[0x4c];
  lVar7 = lVar9 - lVar14;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar9 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar14 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar7;
          _bzero(lVar9,uVar13 * 0x10);
          lVar8 = lVar9 + uVar12 * -0x10;
          _memcpy(lVar8,lVar14,lVar7);
          *plVar10 = lVar8;
          plVar3[0x4c] = lVar9 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar14;
          lStack_80 = lVar14;
          lStack_78 = lVar14;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar9,uVar13 * 0x10);
    plVar3[0x4c] = lVar9 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar14 = lVar14 + uVar5 * 0x10;
    while (lVar9 != lVar14) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a55c108; end: 10a55c133;  */

undefined8 FUN_10a55c108(void)

{
  return 0;
}



/* Entry: 10a55c134; end: 10a55c2c7;  */

void FUN_10a55c134(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a55c2c8(param_2,param_3);
  func_0x00010a55c30c(param_5);
  plVar7 = param_2;
  FUN_10a373c54(param_2,param_4);
  if ((*(int *)(param_4 + 0x10) != 3) || (*(int *)(param_4 + 0x20) != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55c2b4);
    (*pcVar3)();
  }
  dVar20 = *(double *)(param_4 + 0x18);
  dVar21 = *(double *)(param_4 + 0x28);
  plVar8 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x30);
  fVar18 = (float)dVar21;
  if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
    fVar18 = 0.0;
  }
  fVar19 = (float)dVar20;
  if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
    fVar19 = 0.0;
  }
  FUN_10a54af8c(&stack0xffffffffffffffa0,fVar19,fVar18,plVar6,plVar7,plVar8);
  FUN_10a3ab53c(param_1,param_2,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar9 = lVar11 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar5[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a55c2c8; end: 10a55c32f;  */

long * FUN_10a55c2c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf0818) {
    return param_1 + 1;
  }
  plVar5 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  if ((int)plVar5 == 4) {
    return plVar5;
  }
  plVar6 = (long *)0x4;
  uVar7 = 0;
  FUN_10a052ee0(4,0,plVar5);
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c4ac(plVar6,uVar7);
  FUN_10a052e3c(param_4);
  lVar8 = *plVar6;
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar8;
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return plVar6;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return plVar6;
    }
  }
  lVar8 = *plVar6;
  plVar13 = (long *)plVar5[0x4c];
  lVar11 = (long)plVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar1 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(plVar6);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    plVar6 = plVar13;
    _bzero(plVar13,uVar16 * 0x10);
    plVar5[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    plVar2 = (long *)(lVar8 + uVar9 * 0x10);
    while (plVar13 != plVar2) {
      plVar13 = plVar13 + -2;
      plVar6 = plVar13;
      func_0x00010988c204(plVar13);
    }
    plVar5[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return plVar6;
}



/* Entry: 10a55c330; end: 10a55c3eb;  */

void FUN_10a55c330(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *param_2;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c3ec; end: 10a55c4ab;  */

void FUN_10a55c3ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a55c2c8(param_2,param_3);
  func_0x00010a55c4f0(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)plVar4 = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c4ac; end: 10a55c513;  */

long * FUN_10a55c4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf0818) {
    return param_1 + 1;
  }
  plVar5 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  if ((int)plVar5 == 1) {
    return plVar5;
  }
  plVar6 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,plVar5);
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c4ac(plVar6,uVar7);
  FUN_10a052e3c(param_4);
  fVar17 = *(float *)((long)plVar6 + 4);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar17;
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return plVar6;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return plVar6;
    }
  }
  lVar8 = *plVar6;
  plVar13 = (long *)plVar5[0x4c];
  lVar11 = (long)plVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar1 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(plVar6);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    plVar6 = plVar13;
    _bzero(plVar13,uVar16 * 0x10);
    plVar5[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    plVar2 = (long *)(lVar8 + uVar9 * 0x10);
    while (plVar13 != plVar2) {
      plVar13 = plVar13 + -2;
      plVar6 = plVar13;
      func_0x00010988c204(plVar13);
    }
    plVar5[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return plVar6;
}



/* Entry: 10a55c514; end: 10a55c5cf;  */

void FUN_10a55c514(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c5d0; end: 10a55c6bf;  */

void FUN_10a55c5d0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c2c8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55c6ac);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a55c6c0; end: 10a55c777;  */

void FUN_10a55c6c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[1];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c778; end: 10a55c837;  */

void FUN_10a55c778(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a55c2c8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 1) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c838; end: 10a55c8f3;  */

void FUN_10a55c838(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0xc);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a55c8f4; end: 10a55c9e3;  */

void FUN_10a55c8f4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c2c8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55c9d0);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0xc) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a55c9e4; end: 10a55ca9f;  */

void FUN_10a55c9e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 2);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a55caa0; end: 10a55cb8f;  */

void FUN_10a55caa0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c2c8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55cb7c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 2) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a55cb90; end: 10a55cc4b;  */

void FUN_10a55cb90(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a55c4ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x14);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a55cc4c; end: 10a55cd0b;  */

void FUN_10a55cc4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a55c2c8(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x14) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a55cd0c; end: 10a55cd7f;  */

void FUN_10a55cd0c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a55cd80);
  (*pcVar1)();
}



/* Entry: 10a55cd80; end: 10a55d187;  */

void FUN_10a55cd80(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  uint param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  
  lVar15 = *param_1;
  if ((long *)((param_1[2] - lVar15 >> 3) * -0x5555555555555555) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      func_0x00010a55e1f8();
      lVar15 = *param_1;
      if ((long *)(param_1[2] - lVar15 >> 4) < param_2) {
        if ((ulong)param_2 >> 0x3c != 0) {
          FUN_10a35e504();
          lVar15 = *param_1;
          if ((long *)(param_1[2] - lVar15 >> 4) < param_2) {
            if ((ulong)param_2 >> 0x3c != 0) {
              FUN_10a55e270();
              plVar12 = (long *)param_1[1];
              if (plVar12 < (long *)param_1[2]) {
                lVar17 = param_2[1];
                lVar15 = *param_2;
                plVar12[2] = param_2[2];
                plVar12[1] = lVar17;
                *plVar12 = lVar15;
                plVar12 = plVar12 + 3;
              }
              else {
                lVar15 = (long)plVar12 - *param_1;
                uVar18 = (lVar15 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar18) {
                  func_0x00010a55e1f8();
                  plVar12 = (long *)param_1[1];
                  if (plVar12 < (long *)param_1[2]) {
                    lVar15 = *param_2;
                    plVar12[1] = param_2[1];
                    *plVar12 = lVar15;
                    plVar12 = plVar12 + 2;
                  }
                  else {
                    lVar15 = (long)plVar12 - *param_1;
                    uVar18 = (lVar15 >> 4) + 1;
                    if (uVar18 >> 0x3c != 0) {
                      FUN_10a55e270();
                      lVar15 = *param_2;
                      if (param_2[1] - lVar15 != 0) {
                        uVar16 = param_2[1] - lVar15 >> 5;
                        lVar17 = *param_1;
                        uVar18 = 1;
                        uVar20 = 0;
                        do {
                          uVar25 = uVar18;
                          lVar3 = *param_3;
                          uVar18 = param_3[1] - lVar3 >> 2;
                          if (uVar18 <= uVar20) {
LAB_10a55d47c:
                    /* WARNING: Does not return */
                            pcVar10 = (code *)SoftwareBreakpoint(1,0x10a55d480);
                            (*pcVar10)();
                          }
                          iVar7 = *(int *)(lVar3 + uVar20 * 4);
                          iStack_194 = *(int *)param_1[1] + iVar7;
                          lVar4 = *param_5;
                          uVar26 = param_5[1] - lVar4 >> 2;
                          if (uVar26 <= uVar20) goto LAB_10a55d47c;
                          iVar8 = *(int *)(lVar4 + uVar20 * 4);
                          iStack_190 = *(int *)param_1[2] + iVar8;
                          lVar15 = lVar15 + uVar20 * 0x20;
                          uVar14 = (ulong)*(int *)(lVar15 + 0x18);
                          lVar5 = *param_4;
                          uVar13 = param_4[1] - lVar5 >> 2;
                          if (uVar13 <= uVar14) goto LAB_10a55d47c;
                          uVar9 = 0;
                          if (uVar16 != 0) {
                            uVar9 = uVar25 / uVar16;
                          }
                          uVar16 = uVar25 - uVar9 * uVar16;
                          iStack_18c = *(int *)(lVar5 + uVar14 * 4) + *(int *)param_1[3];
                          if ((uVar18 <= uVar16) ||
                             (iStack_188 = *(int *)(lVar3 + uVar16 * 4) + *(int *)param_1[1],
                             uVar26 <= uVar25)) goto LAB_10a55d47c;
                          iStack_184 = *(int *)(lVar4 + uVar25 * 4) + *(int *)param_1[2];
                          uVar18 = (ulong)*(int *)(lVar15 + 0x1c);
                          if (uVar13 <= uVar18) goto LAB_10a55d47c;
                          iStack_180 = *(int *)(lVar5 + uVar18 * 4) + *(int *)param_1[3];
                          iStack_17c = *(int *)param_1[4] + iVar7;
                          iStack_178 = *(int *)param_1[5] + iVar8;
                          iStack_174 = iStack_18c;
                          FUN_10a55dbbc(lVar17 + 0x60,&iStack_194);
                          if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
                            lVar15 = *(long *)(lVar17 + 0x68);
                            if (*(long *)(lVar17 + 0x60) == lVar15) goto LAB_10a55d47c;
                            uVar6 = *(undefined4 *)(lVar15 + -0x1c);
                            uVar19 = *(undefined8 *)(lVar15 + -0x24);
                            *(undefined8 *)(lVar15 + -0x24) = *(undefined8 *)(lVar15 + -0x18);
                            *(undefined4 *)(lVar15 + -0x1c) = *(undefined4 *)(lVar15 + -0x10);
                            *(undefined8 *)(lVar15 + -0x18) = uVar19;
                            *(undefined4 *)(lVar15 + -0x10) = uVar6;
                          }
                          lVar15 = *param_3;
                          uVar18 = param_3[1] - lVar15 >> 2;
                          if (uVar18 <= uVar16) goto LAB_10a55d47c;
                          iVar7 = *(int *)(lVar15 + uVar16 * 4);
                          iStack_194 = *(int *)param_1[1] + iVar7;
                          lVar3 = *param_5;
                          uVar16 = param_5[1] - lVar3 >> 2;
                          if (uVar16 <= uVar25) goto LAB_10a55d47c;
                          iVar8 = *(int *)(lVar3 + uVar25 * 4);
                          iStack_190 = *(int *)param_1[2] + iVar8;
                          if ((ulong)(param_2[1] - *param_2 >> 5) <= uVar20) goto LAB_10a55d47c;
                          lVar4 = *param_2 + uVar20 * 0x20;
                          uVar13 = (ulong)*(int *)(lVar4 + 0x1c);
                          lVar5 = *param_4;
                          uVar26 = param_4[1] - lVar5 >> 2;
                          if (uVar26 <= uVar13) goto LAB_10a55d47c;
                          iStack_18c = *(int *)(lVar5 + uVar13 * 4) + *(int *)param_1[3];
                          iStack_188 = *(int *)param_1[4] + iVar7;
                          iStack_184 = *(int *)param_1[5] + iVar8;
                          iStack_180 = iStack_18c;
                          if ((uVar18 <= uVar20) ||
                             (iStack_17c = *(int *)(lVar15 + uVar20 * 4) + *(int *)param_1[4],
                             uVar16 <= uVar20)) goto LAB_10a55d47c;
                          iStack_178 = *(int *)(lVar3 + uVar20 * 4) + *(int *)param_1[5];
                          uVar18 = (ulong)*(int *)(lVar4 + 0x18);
                          if (uVar26 <= uVar18) goto LAB_10a55d47c;
                          iStack_174 = *(int *)(lVar5 + uVar18 * 4) + *(int *)param_1[3];
                          FUN_10a55dbbc(lVar17 + 0x60,&iStack_194);
                          if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
                            lVar15 = *(long *)(lVar17 + 0x68);
                            if (*(long *)(lVar17 + 0x60) == lVar15) goto LAB_10a55d47c;
                            uVar6 = *(undefined4 *)(lVar15 + -0x1c);
                            uVar19 = *(undefined8 *)(lVar15 + -0x24);
                            *(undefined8 *)(lVar15 + -0x24) = *(undefined8 *)(lVar15 + -0x18);
                            *(undefined4 *)(lVar15 + -0x1c) = *(undefined4 *)(lVar15 + -0x10);
                            *(undefined8 *)(lVar15 + -0x18) = uVar19;
                            *(undefined4 *)(lVar15 + -0x10) = uVar6;
                          }
                          lVar15 = *param_2;
                          uVar16 = param_2[1] - lVar15 >> 5;
                          uVar18 = (ulong)((int)uVar25 + 1);
                          uVar20 = uVar25;
                        } while (uVar25 < uVar16);
                      }
                      return;
                    }
                    uVar16 = param_1[2] - *param_1;
                    uVar20 = (long)uVar16 >> 3;
                    if (uVar20 <= uVar18) {
                      uVar20 = uVar18;
                    }
                    if (0x7fffffffffffffef < uVar16) {
                      uVar20 = 0xfffffffffffffff;
                    }
                    uVar18 = uVar20;
                    FUN_10a55e284();
                    plVar1 = (long *)(uVar18 + lVar15);
                    lVar15 = *param_2;
                    plVar1[1] = param_2[1];
                    *plVar1 = lVar15;
                    plVar12 = plVar1 + 2;
                    puVar11 = (undefined8 *)*param_1;
                    puVar2 = (undefined8 *)param_1[1];
                    lVar15 = (long)puVar11 - (long)puVar2;
                    puVar21 = (undefined8 *)((long)plVar1 + lVar15);
                    puVar22 = puVar11;
                    puVar24 = puVar21;
                    if (lVar15 != 0) {
                      do {
                        puVar23 = puVar22 + 2;
                        uVar19 = *puVar22;
                        puVar24[1] = puVar22[1];
                        *puVar24 = uVar19;
                        puVar22 = puVar23;
                        puVar24 = puVar24 + 2;
                      } while (puVar23 != puVar2);
                    }
                    *param_1 = (long)puVar21;
                    param_1[1] = (long)plVar12;
                    param_1[2] = uVar18 + uVar20 * 0x10;
                    if (puVar11 != (undefined8 *)0x0) {
                      _free();
                    }
                  }
                  param_1[1] = (long)plVar12;
                  return;
                }
                lVar17 = param_1[2] - *param_1 >> 3;
                uVar20 = lVar17 * 0x5555555555555556;
                if (uVar20 < uVar18 || uVar20 - uVar18 == 0) {
                  uVar20 = uVar18;
                }
                if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
                  uVar20 = 0xaaaaaaaaaaaaaaa;
                }
                uVar18 = uVar20;
                FUN_10a55e20c();
                plVar1 = (long *)(uVar18 + lVar15);
                lVar15 = *param_2;
                plVar1[1] = param_2[1];
                *plVar1 = lVar15;
                plVar1[2] = param_2[2];
                plVar12 = plVar1 + 3;
                puVar2 = (undefined8 *)*param_1;
                puVar22 = (undefined8 *)param_1[1];
                lVar15 = (long)puVar2 - (long)puVar22;
                puVar11 = (undefined8 *)((long)plVar1 + lVar15);
                puVar21 = puVar2;
                puVar24 = puVar11;
                if (lVar15 != 0) {
                  do {
                    uVar27 = puVar21[1];
                    uVar19 = *puVar21;
                    puVar24[2] = puVar21[2];
                    puVar24[1] = uVar27;
                    *puVar24 = uVar19;
                    puVar21 = puVar21 + 3;
                    puVar24 = puVar24 + 3;
                  } while (puVar21 != puVar22);
                }
                *param_1 = (long)puVar11;
                param_1[1] = (long)plVar12;
                param_1[2] = uVar18 + uVar20 * 0x18;
                if (puVar2 != (undefined8 *)0x0) {
                  _free();
                }
              }
              param_1[1] = (long)plVar12;
              return;
            }
            lVar17 = param_1[1];
            plVar12 = param_2;
            FUN_10a55e284();
            lVar15 = (long)plVar12 + (lVar17 - lVar15);
            puVar11 = (undefined8 *)*param_1;
            puVar2 = (undefined8 *)param_1[1];
            lVar17 = (long)puVar11 - (long)puVar2;
            puVar21 = (undefined8 *)(lVar15 + lVar17);
            puVar22 = puVar11;
            puVar24 = puVar21;
            if (lVar17 != 0) {
              do {
                puVar23 = puVar22 + 2;
                uVar19 = *puVar22;
                puVar24[1] = puVar22[1];
                *puVar24 = uVar19;
                puVar22 = puVar23;
                puVar24 = puVar24 + 2;
              } while (puVar23 != puVar2);
            }
            *param_1 = (long)puVar21;
            param_1[1] = lVar15;
            param_1[2] = (long)(plVar12 + (long)param_2 * 2);
            if (puVar11 != (undefined8 *)0x0) goto code_r0x00010bdbe28c;
          }
          return;
        }
        lVar17 = param_1[1];
        plVar12 = param_1;
        func_0x000109435ef8();
        lVar15 = (long)plVar12 + (lVar17 - lVar15);
        puVar11 = (undefined8 *)*param_1;
        puVar2 = (undefined8 *)param_1[1];
        lVar17 = (long)puVar11 - (long)puVar2;
        puVar21 = (undefined8 *)(lVar15 + lVar17);
        puVar22 = puVar21;
        if (lVar17 != 0) {
          do {
            puVar24 = puVar11 + 2;
            uVar19 = *puVar11;
            puVar22[1] = puVar11[1];
            *puVar22 = uVar19;
            puVar11 = puVar24;
            puVar22 = puVar22 + 2;
          } while (puVar24 != puVar2);
          puVar11 = (undefined8 *)*param_1;
        }
        *param_1 = (long)puVar21;
        param_1[1] = lVar15;
        param_1[2] = (long)(plVar12 + (long)param_2 * 2);
        if (puVar11 != (undefined8 *)0x0) {
code_r0x00010bdbe28c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_11034c310)();
          return;
        }
      }
      return;
    }
    lVar17 = param_1[1];
    plVar12 = param_2;
    FUN_10a55e20c();
    lVar15 = (long)plVar12 + (lVar17 - lVar15);
    puVar2 = (undefined8 *)*param_1;
    puVar22 = (undefined8 *)param_1[1];
    lVar17 = (long)puVar2 - (long)puVar22;
    puVar11 = (undefined8 *)(lVar15 + lVar17);
    puVar21 = puVar2;
    puVar24 = puVar11;
    if (lVar17 != 0) {
      do {
        uVar27 = puVar21[1];
        uVar19 = *puVar21;
        puVar24[2] = puVar21[2];
        puVar24[1] = uVar27;
        *puVar24 = uVar19;
        puVar21 = puVar21 + 3;
        puVar24 = puVar24 + 3;
      } while (puVar21 != puVar22);
    }
    *param_1 = (long)puVar11;
    param_1[1] = lVar15;
    param_1[2] = (long)(plVar12 + (long)param_2 * 3);
    if (puVar2 != (undefined8 *)0x0) goto code_r0x00010bdbe28c;
  }
  return;
}



/* Entry: 10a55d188; end: 10a55d47f;  */

void FUN_10a55d188(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  byte param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  lVar12 = *param_2;
  if (param_2[1] - lVar12 != 0) {
    uVar11 = param_2[1] - lVar12 >> 5;
    lVar17 = *param_1;
    uVar15 = 1;
    uVar18 = 0;
    do {
      uVar14 = uVar15;
      lVar1 = *param_3;
      uVar15 = param_3[1] - lVar1 >> 2;
      if (uVar15 <= uVar18) {
LAB_10a55d47c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a55d480);
        (*pcVar8)();
      }
      iVar5 = *(int *)(lVar1 + uVar18 * 4);
      iStack_a4 = *(int *)param_1[1] + iVar5;
      lVar2 = *param_5;
      uVar16 = param_5[1] - lVar2 >> 2;
      if (uVar16 <= uVar18) goto LAB_10a55d47c;
      iVar6 = *(int *)(lVar2 + uVar18 * 4);
      iStack_a0 = *(int *)param_1[2] + iVar6;
      lVar12 = lVar12 + uVar18 * 0x20;
      uVar10 = (ulong)*(int *)(lVar12 + 0x18);
      lVar3 = *param_4;
      uVar9 = param_4[1] - lVar3 >> 2;
      if (uVar9 <= uVar10) goto LAB_10a55d47c;
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar14 / uVar11;
      }
      uVar11 = uVar14 - uVar7 * uVar11;
      iStack_9c = *(int *)(lVar3 + uVar10 * 4) + *(int *)param_1[3];
      if ((uVar15 <= uVar11) ||
         (iStack_98 = *(int *)(lVar1 + uVar11 * 4) + *(int *)param_1[1], uVar16 <= uVar14))
      goto LAB_10a55d47c;
      iStack_94 = *(int *)(lVar2 + uVar14 * 4) + *(int *)param_1[2];
      uVar15 = (ulong)*(int *)(lVar12 + 0x1c);
      if (uVar9 <= uVar15) goto LAB_10a55d47c;
      iStack_90 = *(int *)(lVar3 + uVar15 * 4) + *(int *)param_1[3];
      iStack_8c = *(int *)param_1[4] + iVar5;
      iStack_88 = *(int *)param_1[5] + iVar6;
      iStack_84 = iStack_9c;
      FUN_10a55dbbc(lVar17 + 0x60,&iStack_a4);
      if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
        lVar12 = *(long *)(lVar17 + 0x68);
        if (*(long *)(lVar17 + 0x60) == lVar12) goto LAB_10a55d47c;
        uVar4 = *(undefined4 *)(lVar12 + -0x1c);
        uVar13 = *(undefined8 *)(lVar12 + -0x24);
        *(undefined8 *)(lVar12 + -0x24) = *(undefined8 *)(lVar12 + -0x18);
        *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)(lVar12 + -0x10);
        *(undefined8 *)(lVar12 + -0x18) = uVar13;
        *(undefined4 *)(lVar12 + -0x10) = uVar4;
      }
      lVar12 = *param_3;
      uVar15 = param_3[1] - lVar12 >> 2;
      if (uVar15 <= uVar11) goto LAB_10a55d47c;
      iVar5 = *(int *)(lVar12 + uVar11 * 4);
      iStack_a4 = *(int *)param_1[1] + iVar5;
      lVar1 = *param_5;
      uVar11 = param_5[1] - lVar1 >> 2;
      if (uVar11 <= uVar14) goto LAB_10a55d47c;
      iVar6 = *(int *)(lVar1 + uVar14 * 4);
      iStack_a0 = *(int *)param_1[2] + iVar6;
      if ((ulong)(param_2[1] - *param_2 >> 5) <= uVar18) goto LAB_10a55d47c;
      lVar2 = *param_2 + uVar18 * 0x20;
      uVar9 = (ulong)*(int *)(lVar2 + 0x1c);
      lVar3 = *param_4;
      uVar16 = param_4[1] - lVar3 >> 2;
      if (uVar16 <= uVar9) goto LAB_10a55d47c;
      iStack_9c = *(int *)(lVar3 + uVar9 * 4) + *(int *)param_1[3];
      iStack_98 = *(int *)param_1[4] + iVar5;
      iStack_94 = *(int *)param_1[5] + iVar6;
      iStack_90 = iStack_9c;
      if ((uVar15 <= uVar18) ||
         (iStack_8c = *(int *)(lVar12 + uVar18 * 4) + *(int *)param_1[4], uVar11 <= uVar18))
      goto LAB_10a55d47c;
      iStack_88 = *(int *)(lVar1 + uVar18 * 4) + *(int *)param_1[5];
      uVar15 = (ulong)*(int *)(lVar2 + 0x18);
      if (uVar16 <= uVar15) goto LAB_10a55d47c;
      iStack_84 = *(int *)(lVar3 + uVar15 * 4) + *(int *)param_1[3];
      FUN_10a55dbbc(lVar17 + 0x60,&iStack_a4);
      if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
        lVar12 = *(long *)(lVar17 + 0x68);
        if (*(long *)(lVar17 + 0x60) == lVar12) goto LAB_10a55d47c;
        uVar4 = *(undefined4 *)(lVar12 + -0x1c);
        uVar13 = *(undefined8 *)(lVar12 + -0x24);
        *(undefined8 *)(lVar12 + -0x24) = *(undefined8 *)(lVar12 + -0x18);
        *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)(lVar12 + -0x10);
        *(undefined8 *)(lVar12 + -0x18) = uVar13;
        *(undefined4 *)(lVar12 + -0x10) = uVar4;
      }
      lVar12 = *param_2;
      uVar11 = param_2[1] - lVar12 >> 5;
      uVar15 = (ulong)((int)uVar14 + 1);
      uVar18 = uVar14;
    } while (uVar14 < uVar11);
  }
  return;
}



/* Entry: 10a55d480; end: 10a55d5f7;  */

void FUN_10a55d480(long *param_1,long **param_2,long **param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long **pplVar6;
  long **pplVar7;
  undefined4 uVar8;
  ulong uVar9;
  long **pplVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long **pplVar20;
  long lVar21;
  long **unaff_x22;
  long **pplVar22;
  undefined8 *puVar23;
  long **pplVar24;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long **pplVar25;
  long *plVar26;
  long *plVar27;
  double dVar28;
  long *plVar29;
  long *plVar30;
  double dVar31;
  long *plVar32;
  long *plVar33;
  double dVar34;
  double dVar35;
  double dStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_264;
  ulong uStack_260;
  long lStack_258;
  ulong uStack_250;
  long *plStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long *plStack_228;
  undefined1 ****ppppuStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  long **pplStack_1f0;
  long lStack_1e8;
  long **pplStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long **pplStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  long *plStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  undefined8 uStack_168;
  byte bStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  double dStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long **pplStack_118;
  long **pplStack_110;
  undefined8 uStack_108;
  long lStack_f0;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar26 = (long *)param_1[1];
  if (plVar26 < (long *)param_1[2]) {
    *plVar26 = 0;
    plVar26[1] = 0;
    plVar26[2] = 0;
    plVar33 = *param_2;
    plVar26[1] = (long)param_2[1];
    *plVar26 = (long)plVar33;
    plVar26[2] = (long)param_2[2];
    *param_2 = (long *)0x0;
    param_2[1] = (long *)0x0;
    param_2[2] = (long *)0x0;
    plVar26 = plVar26 + 3;
LAB_10a55d5d8:
    param_1[1] = (long)plVar26;
    return;
  }
  pplVar20 = (long **)((long)plVar26 - *param_1);
  uVar9 = ((long)pplVar20 >> 3) * -0x5555555555555555 + 1;
  pplVar22 = param_2;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar14 = param_1[2] - *param_1 >> 3;
    uVar16 = lVar14 * 0x5555555555555556;
    if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
      uVar16 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar16 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      lVar14 = uVar16 * 0x18;
      __Znwm();
      plVar27 = (long *)(lVar14 + (long)pplVar20);
      plVar26 = *param_2;
      plVar27[1] = (long)param_2[1];
      *plVar27 = (long)plVar26;
      plVar27[2] = (long)param_2[2];
      *param_2 = (long *)0x0;
      param_2[1] = (long *)0x0;
      param_2[2] = (long *)0x0;
      plVar26 = plVar27 + 3;
      plVar18 = (long *)*param_1;
      plVar29 = (long *)param_1[1];
      plVar27 = (long *)((long)plVar27 + ((long)plVar18 - (long)plVar29));
      plVar30 = plVar27;
      plVar33 = plVar18;
      if ((long)plVar18 - (long)plVar29 != 0) {
        do {
          *plVar30 = 0;
          plVar30[1] = 0;
          plVar30[2] = 0;
          lVar17 = *plVar33;
          plVar30[1] = plVar33[1];
          *plVar30 = lVar17;
          plVar30[2] = plVar33[2];
          *plVar33 = 0;
          plVar33[1] = 0;
          plVar33[2] = 0;
          plVar33 = plVar33 + 3;
          plVar30 = plVar30 + 3;
        } while (plVar33 != plVar29);
        do {
          if (*plVar18 != 0) {
            plVar18[1] = *plVar18;
            _free();
          }
          plVar18 = plVar18 + 3;
        } while (plVar18 != plVar29);
        plVar18 = (long *)*param_1;
      }
      *param_1 = (long)plVar27;
      param_1[1] = (long)plVar26;
      param_1[2] = lVar14 + uVar16 * 0x18;
      if (plVar18 != (long *)0x0) {
        __ZdlPv(plVar18);
      }
      goto LAB_10a55d5d8;
    }
  }
  else {
    FUN_10a55e51c();
  }
  func_0x000109ffded8();
  uVar8 = (undefined4)param_5;
  pcStack_48 = FUN_10a55d5f8;
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_178 = (long *)0x0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  lStack_170 = 0;
  uStack_130 = 0;
  dStack_138 = 0.0;
  uStack_120 = 1;
  uStack_128 = 1;
  pplStack_118 = (long **)0x0;
  uStack_108 = 0;
  pplStack_110 = (long **)0x0;
  plVar26 = *pplVar22;
  pplVar25 = pplVar22;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar26 != pplVar22[1]) {
    lVar14 = 0;
    plVar33 = plVar26 + 1;
    unaff_x26 = 0x50;
    uVar9 = 1;
    do {
      lVar17 = *plVar33 - plVar33[-1] >> 4;
      lVar14 = lVar14 + lVar17;
      uVar1 = (int)unaff_x26 - (int)lVar17;
      unaff_x26 = (ulong)uVar1;
      if ((int)uVar1 < 0) break;
      plVar33 = plVar33 + 3;
      bVar5 = uVar9 < (ulong)(((long)pplVar22[1] - (long)plVar26 >> 3) * -0x5555555555555555);
      uVar9 = uVar9 + 1;
    } while (bVar5);
    uStack_128 = (ulong)(lVar14 * 3) >> 1;
    if (uStack_128 < 2) {
      uStack_128 = 1;
    }
    uStack_120 = uStack_128;
    func_0x000107c27e9c(&plStack_180,lVar14 + (plVar26[1] - *plVar26 >> 4));
    pplVar25 = (long **)*pplVar22;
    if ((long **)pplVar22[1] == pplVar25) {
LAB_10a55db80:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a55db84);
      (*pcVar2)();
    }
    pplVar6 = &plStack_180;
    param_3 = (long **)0x1;
    FUN_10a55e5c4(pplVar6,pplVar25,1);
    uVar8 = (undefined4)param_5;
    param_2 = (long **)0x0;
    unaff_x22 = pplVar22;
    if (pplVar6 != (long **)0x0) {
      unaff_x25 = -0x5555555555555555;
      uVar9 = ((long)pplVar22[1] - (long)*pplVar22 >> 3) * -0x5555555555555555;
      if (1 < uVar9) {
        puStack_188 = (undefined8 *)0x0;
        uVar16 = 1;
        puVar11 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x0;
        plStack_190 = param_1;
        do {
          uVar12 = ((long)pplVar22[1] - (long)*pplVar22 >> 3) * -0x5555555555555555;
          if (uVar12 < uVar16 || uVar12 - uVar16 == 0) goto LAB_10a55db80;
          plVar26 = *pplVar22 + uVar16 * 3;
          pplVar20 = &plStack_180;
          FUN_10a55e5c4(pplVar20,plVar26,0);
          puVar23 = puVar11;
          unaff_x24 = puVar13;
          if (pplVar20 != (long **)0x0) {
            pplVar25 = pplVar20;
            pplVar10 = pplVar20;
            if (pplVar20 == (long **)pplVar20[4]) {
              *(undefined1 *)(pplVar20 + 8) = 1;
            }
            do {
              pplVar24 = pplVar25;
              if ((double)pplVar10[1] <= (double)pplVar25[1]) {
                pplVar24 = pplVar10;
              }
              pplVar7 = pplVar25 + 4;
              pplVar25 = (long **)*pplVar7;
              pplVar10 = pplVar24;
            } while ((long **)*pplVar7 != pplVar20);
            if (puVar11 < puStack_188) {
              puVar23 = puVar11 + 1;
              *puVar11 = pplVar24;
            }
            else {
              lVar14 = (long)puVar11 - (long)puVar13;
              uVar12 = (lVar14 >> 3) + 1;
              if (uVar12 >> 0x3d != 0) {
                FUN_10a55f38c();
                goto LAB_10a55db80;
              }
              uVar15 = (long)puStack_188 - (long)puVar13 >> 2;
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_188 - (long)puVar13)) {
                uVar15 = 0x1fffffffffffffff;
              }
              FUN_10a55f3a0();
              puVar11 = (undefined8 *)(uVar15 + lVar14);
              puStack_188 = (undefined8 *)(uVar15 + (long)plVar26 * 8);
              unaff_x24 = puVar11 + -(lVar14 >> 3);
              puVar23 = puVar11 + 1;
              *puVar11 = pplVar24;
              _memcpy(unaff_x24,puVar13,lVar14);
              if (puVar13 != (undefined8 *)0x0) {
                __ZdlPv(puVar13);
              }
            }
          }
          uVar16 = uVar16 + 1;
          puVar11 = puVar23;
          puVar13 = unaff_x24;
        } while (uVar16 != uVar9);
        unaff_x25 = (long)puVar23 - (long)unaff_x24 >> 3;
        param_3 = (long **)0x0;
        if (puVar23 != unaff_x24) {
          param_3 = (long **)(LZCOUNT(unaff_x25) * -2 + 0x7e);
        }
        param_4 = (long *)0x1;
        FUN_10a55f47c(unaff_x24,puVar23,param_3);
        if (puVar23 != unaff_x24) {
          lVar14 = 0;
          do {
            pplVar25 = (long **)0x0;
            pplVar22 = (long **)unaff_x24[lVar14];
            plVar33 = pplVar22[1];
            plVar18 = pplVar22[2];
            plVar26 = (long *)0xfff0000000000000;
            pplVar20 = pplVar6;
            do {
              plVar27 = pplVar20[2];
              pplVar10 = (long **)pplVar20[4];
              if ((double)plVar18 <= (double)plVar27) {
                plVar29 = pplVar10[2];
                bVar5 = true;
                if (((double)plVar29 <= (double)plVar18) &&
                   (bVar5 = false, !NAN((double)plVar29) && !NAN((double)plVar27))) {
                  bVar5 = (double)plVar29 == (double)plVar27;
                }
                if (!bVar5) {
                  plVar30 = pplVar20[1];
                  plVar32 = (long *)((double)plVar30 +
                                    (((double)plVar18 - (double)plVar27) *
                                    ((double)pplVar10[1] - (double)plVar30)) /
                                    ((double)plVar29 - (double)plVar27));
                  bVar5 = false;
                  bVar3 = true;
                  bVar4 = false;
                  if ((double)plVar32 <= (double)plVar33) {
                    bVar5 = false;
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN((double)plVar32) && !NAN((double)plVar26)) {
                      bVar5 = (double)plVar32 < (double)plVar26;
                      bVar3 = (double)plVar32 == (double)plVar26;
                      bVar4 = false;
                    }
                  }
                  if (!bVar3 && bVar5 == bVar4) {
                    if (((double)plVar32 == (double)plVar33) &&
                       ((pplVar25 = pplVar20, (double)plVar18 == (double)plVar27 ||
                        (pplVar25 = pplVar10, (double)plVar18 == (double)plVar29))))
                    goto LAB_10a55da08;
                    pplVar25 = pplVar20;
                    plVar26 = plVar32;
                    if ((double)pplVar10[1] <= (double)plVar30) {
                      pplVar25 = pplVar10;
                    }
                  }
                }
              }
              pplVar20 = pplVar10;
            } while (pplVar10 != pplVar6);
            if (pplVar25 != (long **)0x0) {
              if ((double)plVar33 == (double)plVar26) {
                pplVar24 = (long **)pplVar25[3];
LAB_10a55d9ec:
                pplVar25 = pplVar24;
                if (pplVar24 == (long **)0x0) goto LAB_10a55da20;
              }
              else {
                pplVar20 = (long **)pplVar25[4];
                if (pplVar20 != pplVar25) {
                  plVar30 = pplVar25[1];
                  plVar32 = pplVar25[2];
                  plVar29 = plVar26;
                  plVar27 = plVar33;
                  if ((double)plVar32 <= (double)plVar18) {
                    plVar29 = plVar33;
                    plVar27 = plVar26;
                  }
                  pplVar10 = pplVar25;
                  dVar34 = INFINITY;
                  do {
                    plVar26 = pplVar20[1];
                    bVar5 = true;
                    bVar3 = false;
                    if ((double)plVar26 < (double)plVar33) {
                      bVar5 = false;
                      bVar3 = true;
                      if (!NAN((double)plVar26) && !NAN((double)plVar30)) {
                        bVar5 = (double)plVar26 < (double)plVar30;
                        bVar3 = false;
                      }
                    }
                    pplVar24 = pplVar10;
                    dVar35 = dVar34;
                    if (bVar5 == bVar3) {
                      dVar28 = (double)plVar18 - (double)pplVar20[2];
                      if (0.0 <= -(((double)plVar27 - (double)plVar26) * dVar28) +
                                 dVar28 * ((double)plVar29 - (double)plVar26)) {
                        dVar31 = (double)plVar32 - (double)pplVar20[2];
                        if ((0.0 <= -(((double)plVar30 - (double)plVar26) * dVar28) +
                                    dVar31 * ((double)plVar27 - (double)plVar26)) &&
                           (0.0 <= -(((double)plVar29 - (double)plVar26) * dVar31) +
                                   dVar28 * ((double)plVar30 - (double)plVar26))) {
                          dVar28 = ABS(dVar28) / ((double)plVar33 - (double)plVar26);
                          if (((dVar28 < dVar34) ||
                              ((dVar28 == dVar34 && ((double)pplVar10[1] < (double)plVar26)))) &&
                             (pplVar7 = pplVar20, FUN_10a560358(plVar33,plVar18),
                             pplVar24 = pplVar20, dVar35 = dVar28, (int)pplVar7 == 0)) {
                            pplVar24 = pplVar10;
                            dVar35 = dVar34;
                          }
                        }
                      }
                    }
                    pplVar20 = (long **)pplVar20[4];
                    pplVar10 = pplVar24;
                    dVar34 = dVar35;
                  } while (pplVar20 != pplVar25);
                  goto LAB_10a55d9ec;
                }
              }
LAB_10a55da08:
              param_3 = pplVar22;
              FUN_10a5602e0(&plStack_180,pplVar25,pplVar22);
              FUN_10a55f3d4();
            }
LAB_10a55da20:
            FUN_10a55f3d4(pplVar6,pplVar6[4]);
            lVar14 = lVar14 + 1;
          } while (lVar14 != unaff_x25);
        }
        param_1 = plStack_190;
        if (unaff_x24 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x24);
          param_1 = plStack_190;
        }
      }
      bStack_160 = (byte)(uVar1 >> 0x1f);
      if ((int)uVar1 < 0) {
        pplVar20 = (long **)pplVar6[4];
        plStack_150 = pplVar6[1];
        plStack_140 = pplVar6[2];
        plStack_158 = plStack_150;
        plStack_148 = plStack_140;
        do {
          plVar33 = pplVar20[2];
          plVar26 = pplVar20[1];
          plStack_150 = (long *)((ulong)plStack_150 ^
                                ((ulong)plStack_150 ^ (ulong)plVar26) &
                                -(ulong)((double)plStack_150 < (double)plVar26));
          plStack_140 = (long *)((ulong)plStack_140 ^
                                ((ulong)plStack_140 ^ (ulong)plVar33) &
                                -(ulong)((double)plStack_140 < (double)plVar33));
          plStack_158 = (long *)((ulong)plStack_158 ^
                                ((ulong)plStack_158 ^ (ulong)pplVar20[1]) &
                                -(ulong)((double)plVar26 < (double)plStack_158));
          plStack_148 = (long *)((ulong)plStack_148 ^
                                ((ulong)plStack_148 ^ (ulong)pplVar20[2]) &
                                -(ulong)((double)plVar33 < (double)plStack_148));
          pplVar20 = (long **)pplVar20[4];
        } while (pplVar20 != pplVar6);
        dVar34 = (double)plStack_140 - (double)plStack_148;
        if ((double)plStack_140 - (double)plStack_148 <= (double)plStack_150 - (double)plStack_158)
        {
          dVar34 = (double)plStack_150 - (double)plStack_158;
        }
        dStack_138 = 1.0 / dVar34;
        if (dVar34 == 0.0) {
          dStack_138 = 0.0;
        }
      }
      FUN_10a55e758(&plStack_180);
      pplVar20 = pplStack_110;
      uVar9 = uStack_120;
      uVar8 = (undefined4)param_5;
      pplVar25 = pplVar6;
      param_2 = pplStack_118;
      for (pplVar6 = pplStack_118; pplStack_118 = param_2, pplVar6 != pplVar20;
          pplVar6 = pplVar6 + 1) {
        __ZdlPv(*pplVar6);
        uVar8 = (undefined4)param_5;
        param_2 = pplStack_118;
      }
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uStack_130 = 0;
      unaff_x22 = pplVar22;
      uStack_128 = uVar9;
      uStack_120 = uVar9;
      pplStack_110 = param_2;
    }
  }
  param_1[1] = (long)plStack_178;
  *param_1 = (long)plStack_180;
  param_1[2] = lStack_170;
  plStack_178 = (long *)0x0;
  lStack_170 = 0;
  plStack_180 = (long *)0x0;
  FUN_10a5606ec(&uStack_130);
  plVar26 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plStack_178 = plStack_180;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a55e530(&plStack_180);
  plVar18 = plVar26;
  __Unwind_Resume();
  pcStack_198 = FUN_10a55dbbc;
  pppuStack_1d0 = &ppuStack_1a0;
  plVar33 = (long *)plVar18[1];
  if (plVar33 < (long *)plVar18[2]) {
    plVar26 = *pplVar25;
    plVar27 = pplVar25[1];
    plVar30 = pplVar25[3];
    plVar29 = pplVar25[2];
    *(undefined4 *)(plVar33 + 4) = *(undefined4 *)(pplVar25 + 4);
    plVar33[1] = (long)plVar27;
    *plVar33 = (long)plVar26;
    plVar33[3] = (long)plVar30;
    plVar33[2] = (long)plVar29;
    lVar14 = (long)plVar33 + 0x24;
  }
  else {
    lVar14 = (long)plVar33 - *plVar18;
    uVar9 = (lVar14 >> 2) * -0x71c71c71c71c71c7 + 1;
    pplStack_1c0 = unaff_x22;
    pplStack_1b8 = pplVar20;
    pplStack_1b0 = param_2;
    plStack_1a8 = plVar26;
    ppuStack_1a0 = &puStack_50;
    if (0x71c71c71c71c71c < uVar9) {
      plVar26 = plVar18;
      pplVar20 = pplVar25;
      FUN_10a560724();
      pcStack_1c8 = FUN_10a55dcc8;
      lVar17 = *plVar26;
      lVar19 = plVar26[1];
      lVar21 = lVar19 - lVar17;
      bVar5 = pplVar20 < (long **)((lVar21 >> 4) * -0x5555555555555555);
      uVar9 = (long)pplVar20 + (lVar21 >> 4) * 0x5555555555555555;
      uStack_210 = unaff_x26;
      lStack_208 = unaff_x25;
      puStack_200 = unaff_x24;
      plStack_1f8 = param_1;
      pplStack_1f0 = unaff_x22;
      lStack_1e8 = lVar14;
      pplStack_1e0 = pplVar25;
      plStack_1d8 = plVar18;
      if (bVar5 || uVar9 == 0) {
        if (bVar5) {
          lVar17 = lVar17 + (long)pplVar20 * 0x30;
          while (lVar19 != lVar17) {
            lVar19 = lVar19 + -0x30;
            FUN_10a559d50(lVar19);
          }
          plVar26[1] = lVar17;
        }
      }
      else {
        if ((ulong)((plVar26[2] - lVar19 >> 4) * -0x5555555555555555) < uVar9) {
          plVar33 = plVar26;
          if (pplVar20 < (long **)0x555555555555556) {
            lVar14 = plVar26[2] - lVar17 >> 4;
            pplVar22 = (long **)(lVar14 * 0x5555555555555556);
            if (pplVar22 < pplVar20 || (long)pplVar22 - (long)pplVar20 == 0) {
              pplVar22 = pplVar20;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
              pplVar22 = (long **)0x555555555555555;
            }
            lVar14 = -0x5555555555555555;
            if (pplVar22 < (long **)0x555555555555556) {
              lVar14 = (long)pplVar22 * 0x30;
              __Znwm();
              lVar19 = ((uVar9 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
              _bzero(lVar14 + lVar21,lVar19);
              _memcpy(lVar14,lVar17,lVar21);
              *plVar26 = lVar14;
              plVar26[1] = lVar14 + lVar21 + lVar19;
              plVar26[2] = lVar14 + (long)pplVar22 * 0x30;
              if (lVar17 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(lVar17);
              return;
            }
          }
          else {
            FUN_10a55df84();
            lVar14 = unaff_x25;
          }
          func_0x000109ffded8();
          uStack_218 = 0x10a55de64;
          puVar11 = (undefined8 *)*param_4;
          puVar13 = (undefined8 *)param_4[1];
          uStack_260 = unaff_x26;
          lStack_258 = lVar14;
          uStack_250 = uVar9;
          plStack_248 = param_1;
          lStack_240 = lVar19;
          lStack_238 = lVar21;
          lStack_230 = lVar17;
          plStack_228 = plVar26;
          ppppuStack_220 = &pppuStack_1d0;
          if (puVar13 != puVar11) {
            uVar9 = 1;
            uVar16 = 0;
            do {
              uVar12 = uVar9;
              plVar26 = plVar33 + 0x11;
              FUN_10a55df98(plVar26,puVar11 + uVar16 * 4);
              dStack_290 = (double)CONCAT44(dStack_290._4_4_,(int)plVar26);
              FUN_109febd04(param_3,&dStack_290);
              if ((ulong)(param_4[1] - *param_4 >> 5) <= uVar16) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a55df84);
                (*pcVar2)();
              }
              puVar11 = (undefined8 *)(*param_4 + uVar16 * 0x20);
              dStack_290 = (double)puVar11[2] * (double)param_4[6];
              uStack_280 = *puVar11;
              uStack_278 = puVar11[1];
              plVar26 = plVar33 + 0x17;
              uStack_288 = uVar8;
              FUN_10a55e084(plVar26,&dStack_290);
              uStack_264 = SUB84(plVar26,0);
              FUN_109febd04(pplVar20,&uStack_264);
              puVar11 = (undefined8 *)*param_4;
              puVar13 = (undefined8 *)param_4[1];
              uVar9 = (ulong)((int)uVar12 + 1);
              uVar16 = uVar12;
            } while (uVar12 < (ulong)((long)puVar13 - (long)puVar11 >> 5));
          }
          if (puVar13 != puVar11) {
            dStack_290 = (double)param_4[6];
            uStack_280 = *puVar11;
            uStack_278 = puVar11[1];
            plVar33 = plVar33 + 0x17;
            uStack_288 = uVar8;
            FUN_10a55e084(plVar33,&dStack_290);
            uStack_264 = SUB84(plVar33,0);
            FUN_109febd04(pplVar20,&uStack_264);
          }
          return;
        }
        lVar14 = ((uVar9 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
        _bzero(lVar19,lVar14);
        plVar26[1] = lVar19 + lVar14;
      }
      return;
    }
    lVar17 = plVar18[2] - *plVar18 >> 2;
    uVar16 = lVar17 * 0x1c71c71c71c71c72;
    if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
      uVar16 = uVar9;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar17 * -0x71c71c71c71c71c7)) {
      uVar16 = 0x71c71c71c71c71c;
    }
    pplVar20 = pplVar25;
    FUN_10a560738();
    plVar26 = (long *)(uVar16 + lVar14);
    plVar33 = *pplVar25;
    plVar27 = pplVar25[1];
    plVar30 = pplVar25[3];
    plVar29 = pplVar25[2];
    *(undefined4 *)(plVar26 + 4) = *(undefined4 *)(pplVar25 + 4);
    plVar26[1] = (long)plVar27;
    *plVar26 = (long)plVar33;
    plVar26[3] = (long)plVar30;
    plVar26[2] = (long)plVar29;
    lVar14 = (long)plVar26 + 0x24;
    lVar19 = (long)plVar26 - (plVar18[1] - *plVar18);
    _memcpy(lVar19);
    lVar17 = *plVar18;
    *plVar18 = lVar19;
    plVar18[1] = lVar14;
    plVar18[2] = uVar16 + (long)pplVar20 * 0x24;
    if (lVar17 != 0) {
      __ZdlPv();
    }
  }
  plVar18[1] = lVar14;
  return;
}



/* Entry: 10a55d5f8; end: 10a55dbbb;  */

void FUN_10a55d5f8(undefined8 *param_1,long **param_2,long **param_3,long *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long **pplVar6;
  long **pplVar7;
  undefined4 uVar8;
  long **pplVar9;
  long **pplVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x20;
  long lVar19;
  undefined8 *unaff_x21;
  long lVar20;
  long **unaff_x22;
  undefined8 *puVar21;
  long **pplVar22;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long **pplVar23;
  long *plVar24;
  long *plVar25;
  double dVar26;
  long *plVar27;
  long *plVar28;
  double dVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  double dVar33;
  double dVar34;
  double dStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_224;
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined1 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long **pplStack_1b0;
  long lStack_1a8;
  long **pplStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long **pplStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte bStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_b0;
  
  uVar8 = (undefined4)param_5;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_f0 = 0;
  dStack_f8 = 0.0;
  uStack_e0 = 1;
  uStack_e8 = 1;
  puStack_d8 = (undefined8 *)0x0;
  uStack_c8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  plVar24 = *param_2;
  pplVar10 = param_2;
  if (plVar24 != param_2[1]) {
    lVar12 = 0;
    plVar31 = plVar24 + 1;
    unaff_x26 = 0x50;
    uVar16 = 1;
    do {
      lVar17 = *plVar31 - plVar31[-1] >> 4;
      lVar12 = lVar12 + lVar17;
      uVar1 = (int)unaff_x26 - (int)lVar17;
      unaff_x26 = (ulong)uVar1;
      if ((int)uVar1 < 0) break;
      plVar31 = plVar31 + 3;
      bVar5 = uVar16 < (ulong)(((long)param_2[1] - (long)plVar24 >> 3) * -0x5555555555555555);
      uVar16 = uVar16 + 1;
    } while (bVar5);
    uStack_e8 = (ulong)(lVar12 * 3) >> 1;
    if (uStack_e8 < 2) {
      uStack_e8 = 1;
    }
    uStack_e0 = uStack_e8;
    func_0x000107c27e9c(&plStack_140,lVar12 + (plVar24[1] - *plVar24 >> 4));
    pplVar10 = (long **)*param_2;
    if ((long **)param_2[1] == pplVar10) {
LAB_10a55db80:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a55db84);
      (*pcVar2)();
    }
    pplVar6 = &plStack_140;
    param_3 = (long **)0x1;
    FUN_10a55e5c4(pplVar6,pplVar10,1);
    uVar8 = (undefined4)param_5;
    unaff_x20 = (undefined8 *)0x0;
    unaff_x22 = param_2;
    if (pplVar6 != (long **)0x0) {
      unaff_x25 = -0x5555555555555555;
      uVar16 = ((long)param_2[1] - (long)*param_2 >> 3) * -0x5555555555555555;
      if (1 < uVar16) {
        puStack_148 = (undefined8 *)0x0;
        uVar18 = 1;
        puVar11 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)0x0;
        puStack_150 = param_1;
        do {
          uVar13 = ((long)param_2[1] - (long)*param_2 >> 3) * -0x5555555555555555;
          if (uVar13 < uVar18 || uVar13 - uVar18 == 0) goto LAB_10a55db80;
          plVar24 = *param_2 + uVar18 * 3;
          pplVar10 = &plStack_140;
          FUN_10a55e5c4(pplVar10,plVar24,0);
          puVar21 = puVar11;
          unaff_x24 = puVar14;
          if (pplVar10 != (long **)0x0) {
            pplVar23 = pplVar10;
            pplVar9 = pplVar10;
            if (pplVar10 == (long **)pplVar10[4]) {
              *(undefined1 *)(pplVar10 + 8) = 1;
            }
            do {
              pplVar22 = pplVar23;
              if ((double)pplVar9[1] <= (double)pplVar23[1]) {
                pplVar22 = pplVar9;
              }
              pplVar7 = pplVar23 + 4;
              pplVar23 = (long **)*pplVar7;
              pplVar9 = pplVar22;
            } while ((long **)*pplVar7 != pplVar10);
            if (puVar11 < puStack_148) {
              puVar21 = puVar11 + 1;
              *puVar11 = pplVar22;
            }
            else {
              lVar12 = (long)puVar11 - (long)puVar14;
              uVar13 = (lVar12 >> 3) + 1;
              if (uVar13 >> 0x3d != 0) {
                FUN_10a55f38c();
                goto LAB_10a55db80;
              }
              uVar15 = (long)puStack_148 - (long)puVar14 >> 2;
              if (uVar15 <= uVar13) {
                uVar15 = uVar13;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_148 - (long)puVar14)) {
                uVar15 = 0x1fffffffffffffff;
              }
              FUN_10a55f3a0();
              puVar11 = (undefined8 *)(uVar15 + lVar12);
              puStack_148 = (undefined8 *)(uVar15 + (long)plVar24 * 8);
              unaff_x24 = puVar11 + -(lVar12 >> 3);
              puVar21 = puVar11 + 1;
              *puVar11 = pplVar22;
              _memcpy(unaff_x24,puVar14,lVar12);
              if (puVar14 != (undefined8 *)0x0) {
                __ZdlPv(puVar14);
              }
            }
          }
          uVar18 = uVar18 + 1;
          puVar11 = puVar21;
          puVar14 = unaff_x24;
        } while (uVar18 != uVar16);
        unaff_x25 = (long)puVar21 - (long)unaff_x24 >> 3;
        param_3 = (long **)0x0;
        if (puVar21 != unaff_x24) {
          param_3 = (long **)(LZCOUNT(unaff_x25) * -2 + 0x7e);
        }
        param_4 = (long *)0x1;
        FUN_10a55f47c(unaff_x24,puVar21,param_3);
        if (puVar21 != unaff_x24) {
          lVar12 = 0;
          do {
            pplVar23 = (long **)0x0;
            param_2 = (long **)unaff_x24[lVar12];
            plVar31 = param_2[1];
            plVar32 = param_2[2];
            plVar24 = (long *)0xfff0000000000000;
            pplVar10 = pplVar6;
            do {
              plVar25 = pplVar10[2];
              pplVar9 = (long **)pplVar10[4];
              if ((double)plVar32 <= (double)plVar25) {
                plVar27 = pplVar9[2];
                bVar5 = true;
                if (((double)plVar27 <= (double)plVar32) &&
                   (bVar5 = false, !NAN((double)plVar27) && !NAN((double)plVar25))) {
                  bVar5 = (double)plVar27 == (double)plVar25;
                }
                if (!bVar5) {
                  plVar28 = pplVar10[1];
                  plVar30 = (long *)((double)plVar28 +
                                    (((double)plVar32 - (double)plVar25) *
                                    ((double)pplVar9[1] - (double)plVar28)) /
                                    ((double)plVar27 - (double)plVar25));
                  bVar5 = false;
                  bVar3 = true;
                  bVar4 = false;
                  if ((double)plVar30 <= (double)plVar31) {
                    bVar5 = false;
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN((double)plVar30) && !NAN((double)plVar24)) {
                      bVar5 = (double)plVar30 < (double)plVar24;
                      bVar3 = (double)plVar30 == (double)plVar24;
                      bVar4 = false;
                    }
                  }
                  if (!bVar3 && bVar5 == bVar4) {
                    if (((double)plVar30 == (double)plVar31) &&
                       ((pplVar23 = pplVar10, (double)plVar32 == (double)plVar25 ||
                        (pplVar23 = pplVar9, (double)plVar32 == (double)plVar27))))
                    goto LAB_10a55da08;
                    pplVar23 = pplVar10;
                    plVar24 = plVar30;
                    if ((double)pplVar9[1] <= (double)plVar28) {
                      pplVar23 = pplVar9;
                    }
                  }
                }
              }
              pplVar10 = pplVar9;
            } while (pplVar9 != pplVar6);
            if (pplVar23 != (long **)0x0) {
              if ((double)plVar31 == (double)plVar24) {
                pplVar22 = (long **)pplVar23[3];
LAB_10a55d9ec:
                pplVar23 = pplVar22;
                if (pplVar22 == (long **)0x0) goto LAB_10a55da20;
              }
              else {
                pplVar10 = (long **)pplVar23[4];
                if (pplVar10 != pplVar23) {
                  plVar28 = pplVar23[1];
                  plVar30 = pplVar23[2];
                  plVar27 = plVar24;
                  plVar25 = plVar31;
                  if ((double)plVar30 <= (double)plVar32) {
                    plVar27 = plVar31;
                    plVar25 = plVar24;
                  }
                  pplVar9 = pplVar23;
                  dVar33 = INFINITY;
                  do {
                    plVar24 = pplVar10[1];
                    bVar5 = true;
                    bVar3 = false;
                    if ((double)plVar24 < (double)plVar31) {
                      bVar5 = false;
                      bVar3 = true;
                      if (!NAN((double)plVar24) && !NAN((double)plVar28)) {
                        bVar5 = (double)plVar24 < (double)plVar28;
                        bVar3 = false;
                      }
                    }
                    pplVar22 = pplVar9;
                    dVar34 = dVar33;
                    if (bVar5 == bVar3) {
                      dVar26 = (double)plVar32 - (double)pplVar10[2];
                      if (0.0 <= -(((double)plVar25 - (double)plVar24) * dVar26) +
                                 dVar26 * ((double)plVar27 - (double)plVar24)) {
                        dVar29 = (double)plVar30 - (double)pplVar10[2];
                        if ((0.0 <= -(((double)plVar28 - (double)plVar24) * dVar26) +
                                    dVar29 * ((double)plVar25 - (double)plVar24)) &&
                           (0.0 <= -(((double)plVar27 - (double)plVar24) * dVar29) +
                                   dVar26 * ((double)plVar28 - (double)plVar24))) {
                          dVar26 = ABS(dVar26) / ((double)plVar31 - (double)plVar24);
                          if (((dVar26 < dVar33) ||
                              ((dVar26 == dVar33 && ((double)pplVar9[1] < (double)plVar24)))) &&
                             (pplVar7 = pplVar10, FUN_10a560358(plVar31,plVar32),
                             pplVar22 = pplVar10, dVar34 = dVar26, (int)pplVar7 == 0)) {
                            pplVar22 = pplVar9;
                            dVar34 = dVar33;
                          }
                        }
                      }
                    }
                    pplVar10 = (long **)pplVar10[4];
                    pplVar9 = pplVar22;
                    dVar33 = dVar34;
                  } while (pplVar10 != pplVar23);
                  goto LAB_10a55d9ec;
                }
              }
LAB_10a55da08:
              param_3 = param_2;
              FUN_10a5602e0(&plStack_140,pplVar23,param_2);
              FUN_10a55f3d4();
            }
LAB_10a55da20:
            FUN_10a55f3d4(pplVar6,pplVar6[4]);
            lVar12 = lVar12 + 1;
          } while (lVar12 != unaff_x25);
        }
        param_1 = puStack_150;
        if (unaff_x24 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x24);
          param_1 = puStack_150;
        }
      }
      bStack_120 = (byte)(uVar1 >> 0x1f);
      if ((int)uVar1 < 0) {
        pplVar10 = (long **)pplVar6[4];
        plStack_110 = pplVar6[1];
        plStack_100 = pplVar6[2];
        plStack_118 = plStack_110;
        plStack_108 = plStack_100;
        do {
          plVar31 = pplVar10[2];
          plVar24 = pplVar10[1];
          plStack_110 = (long *)((ulong)plStack_110 ^
                                ((ulong)plStack_110 ^ (ulong)plVar24) &
                                -(ulong)((double)plStack_110 < (double)plVar24));
          plStack_100 = (long *)((ulong)plStack_100 ^
                                ((ulong)plStack_100 ^ (ulong)plVar31) &
                                -(ulong)((double)plStack_100 < (double)plVar31));
          plStack_118 = (long *)((ulong)plStack_118 ^
                                ((ulong)plStack_118 ^ (ulong)pplVar10[1]) &
                                -(ulong)((double)plVar24 < (double)plStack_118));
          plStack_108 = (long *)((ulong)plStack_108 ^
                                ((ulong)plStack_108 ^ (ulong)pplVar10[2]) &
                                -(ulong)((double)plVar31 < (double)plStack_108));
          pplVar10 = (long **)pplVar10[4];
        } while (pplVar10 != pplVar6);
        dVar33 = (double)plStack_100 - (double)plStack_108;
        if ((double)plStack_100 - (double)plStack_108 <= (double)plStack_110 - (double)plStack_118)
        {
          dVar33 = (double)plStack_110 - (double)plStack_118;
        }
        dStack_f8 = 1.0 / dVar33;
        if (dVar33 == 0.0) {
          dStack_f8 = 0.0;
        }
      }
      FUN_10a55e758(&plStack_140);
      unaff_x21 = puStack_d0;
      uVar16 = uStack_e0;
      uVar8 = (undefined4)param_5;
      pplVar10 = pplVar6;
      unaff_x20 = puStack_d8;
      for (puVar11 = puStack_d8; puStack_d8 = unaff_x20, puVar11 != unaff_x21; puVar11 = puVar11 + 1
          ) {
        __ZdlPv(*puVar11);
        uVar8 = (undefined4)param_5;
        unaff_x20 = puStack_d8;
      }
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      uStack_f0 = 0;
      unaff_x22 = param_2;
      uStack_e8 = uVar16;
      uStack_e0 = uVar16;
      puStack_d0 = unaff_x20;
    }
  }
  param_1[1] = plStack_138;
  *param_1 = plStack_140;
  param_1[2] = uStack_130;
  plStack_138 = (long *)0x0;
  uStack_130 = 0;
  plStack_140 = (long *)0x0;
  FUN_10a5606ec(&uStack_f0);
  plVar24 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plStack_138 = plStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a55e530(&plStack_140);
  plVar32 = plVar24;
  __Unwind_Resume();
  pcStack_158 = FUN_10a55dbbc;
  ppuStack_190 = &puStack_160;
  plVar31 = (long *)plVar32[1];
  if (plVar31 < (long *)plVar32[2]) {
    plVar24 = *pplVar10;
    plVar25 = pplVar10[1];
    plVar28 = pplVar10[3];
    plVar27 = pplVar10[2];
    *(undefined4 *)(plVar31 + 4) = *(undefined4 *)(pplVar10 + 4);
    plVar31[1] = (long)plVar25;
    *plVar31 = (long)plVar24;
    plVar31[3] = (long)plVar28;
    plVar31[2] = (long)plVar27;
    lVar12 = (long)plVar31 + 0x24;
  }
  else {
    lVar12 = (long)plVar31 - *plVar32;
    uVar16 = (lVar12 >> 2) * -0x71c71c71c71c71c7 + 1;
    pplStack_180 = unaff_x22;
    puStack_178 = unaff_x21;
    puStack_170 = unaff_x20;
    plStack_168 = plVar24;
    puStack_160 = &stack0xfffffffffffffff0;
    if (0x71c71c71c71c71c < uVar16) {
      plVar24 = plVar32;
      pplVar6 = pplVar10;
      FUN_10a560724();
      pcStack_188 = FUN_10a55dcc8;
      lVar17 = *plVar24;
      lVar19 = plVar24[1];
      lVar20 = lVar19 - lVar17;
      bVar5 = pplVar6 < (long **)((lVar20 >> 4) * -0x5555555555555555);
      uVar16 = (long)pplVar6 + (lVar20 >> 4) * 0x5555555555555555;
      uStack_1d0 = unaff_x26;
      lStack_1c8 = unaff_x25;
      puStack_1c0 = unaff_x24;
      puStack_1b8 = param_1;
      pplStack_1b0 = unaff_x22;
      lStack_1a8 = lVar12;
      pplStack_1a0 = pplVar10;
      plStack_198 = plVar32;
      if (bVar5 || uVar16 == 0) {
        if (bVar5) {
          lVar17 = lVar17 + (long)pplVar6 * 0x30;
          while (lVar19 != lVar17) {
            lVar19 = lVar19 + -0x30;
            FUN_10a559d50(lVar19);
          }
          plVar24[1] = lVar17;
        }
      }
      else {
        if ((ulong)((plVar24[2] - lVar19 >> 4) * -0x5555555555555555) < uVar16) {
          plVar31 = plVar24;
          if (pplVar6 < (long **)0x555555555555556) {
            lVar12 = plVar24[2] - lVar17 >> 4;
            pplVar10 = (long **)(lVar12 * 0x5555555555555556);
            if (pplVar10 < pplVar6 || (long)pplVar10 - (long)pplVar6 == 0) {
              pplVar10 = pplVar6;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
              pplVar10 = (long **)0x555555555555555;
            }
            lVar12 = -0x5555555555555555;
            if (pplVar10 < (long **)0x555555555555556) {
              lVar12 = (long)pplVar10 * 0x30;
              __Znwm();
              lVar19 = ((uVar16 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
              _bzero(lVar12 + lVar20,lVar19);
              _memcpy(lVar12,lVar17,lVar20);
              *plVar24 = lVar12;
              plVar24[1] = lVar12 + lVar20 + lVar19;
              plVar24[2] = lVar12 + (long)pplVar10 * 0x30;
              if (lVar17 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(lVar17);
              return;
            }
          }
          else {
            FUN_10a55df84();
            lVar12 = unaff_x25;
          }
          func_0x000109ffded8();
          uStack_1d8 = 0x10a55de64;
          puVar11 = (undefined8 *)*param_4;
          puVar14 = (undefined8 *)param_4[1];
          uStack_220 = unaff_x26;
          lStack_218 = lVar12;
          uStack_210 = uVar16;
          puStack_208 = param_1;
          lStack_200 = lVar19;
          lStack_1f8 = lVar20;
          lStack_1f0 = lVar17;
          plStack_1e8 = plVar24;
          pppuStack_1e0 = &ppuStack_190;
          if (puVar14 != puVar11) {
            uVar16 = 1;
            uVar18 = 0;
            do {
              uVar13 = uVar16;
              plVar24 = plVar31 + 0x11;
              FUN_10a55df98(plVar24,puVar11 + uVar18 * 4);
              dStack_250 = (double)CONCAT44(dStack_250._4_4_,(int)plVar24);
              FUN_109febd04(param_3,&dStack_250);
              if ((ulong)(param_4[1] - *param_4 >> 5) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a55df84);
                (*pcVar2)();
              }
              puVar11 = (undefined8 *)(*param_4 + uVar18 * 0x20);
              dStack_250 = (double)puVar11[2] * (double)param_4[6];
              uStack_240 = *puVar11;
              uStack_238 = puVar11[1];
              plVar24 = plVar31 + 0x17;
              uStack_248 = uVar8;
              FUN_10a55e084(plVar24,&dStack_250);
              uStack_224 = SUB84(plVar24,0);
              FUN_109febd04(pplVar6,&uStack_224);
              puVar11 = (undefined8 *)*param_4;
              puVar14 = (undefined8 *)param_4[1];
              uVar16 = (ulong)((int)uVar13 + 1);
              uVar18 = uVar13;
            } while (uVar13 < (ulong)((long)puVar14 - (long)puVar11 >> 5));
          }
          if (puVar14 != puVar11) {
            dStack_250 = (double)param_4[6];
            uStack_240 = *puVar11;
            uStack_238 = puVar11[1];
            plVar31 = plVar31 + 0x17;
            uStack_248 = uVar8;
            FUN_10a55e084(plVar31,&dStack_250);
            uStack_224 = SUB84(plVar31,0);
            FUN_109febd04(pplVar6,&uStack_224);
          }
          return;
        }
        lVar12 = ((uVar16 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
        _bzero(lVar19,lVar12);
        plVar24[1] = lVar19 + lVar12;
      }
      return;
    }
    lVar17 = plVar32[2] - *plVar32 >> 2;
    uVar18 = lVar17 * 0x1c71c71c71c71c72;
    if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
      uVar18 = uVar16;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar17 * -0x71c71c71c71c71c7)) {
      uVar18 = 0x71c71c71c71c71c;
    }
    pplVar6 = pplVar10;
    FUN_10a560738();
    plVar24 = (long *)(uVar18 + lVar12);
    plVar31 = *pplVar10;
    plVar25 = pplVar10[1];
    plVar28 = pplVar10[3];
    plVar27 = pplVar10[2];
    *(undefined4 *)(plVar24 + 4) = *(undefined4 *)(pplVar10 + 4);
    plVar24[1] = (long)plVar25;
    *plVar24 = (long)plVar31;
    plVar24[3] = (long)plVar28;
    plVar24[2] = (long)plVar27;
    lVar12 = (long)plVar24 + 0x24;
    lVar19 = (long)plVar24 - (plVar32[1] - *plVar32);
    _memcpy(lVar19);
    lVar17 = *plVar32;
    *plVar32 = lVar19;
    plVar32[1] = lVar12;
    plVar32[2] = uVar18 + (long)pplVar6 * 0x24;
    if (lVar17 != 0) {
      __ZdlPv();
    }
  }
  plVar32[1] = lVar12;
  return;
}



/* Entry: 10a55dbbc; end: 10a55dcc7;  */

void FUN_10a55dbbc(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d4;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar14 = param_2[1];
    uVar13 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
    puVar7[1] = uVar14;
    *puVar7 = uVar13;
    puVar7[3] = uVar16;
    puVar7[2] = uVar15;
    lVar10 = (long)puVar7 + 0x24;
  }
  else {
    lVar10 = (long)puVar7 - *param_1;
    uVar5 = (lVar10 >> 2) * -0x71c71c71c71c71c7 + 1;
    if (0x71c71c71c71c71c < uVar5) {
      FUN_10a560724();
      lVar10 = *param_1;
      lVar6 = param_1[1];
      lVar9 = lVar6 - lVar10;
      bVar2 = param_2 < (undefined8 *)((lVar9 >> 4) * -0x5555555555555555);
      uVar5 = (long)param_2 + (lVar9 >> 4) * 0x5555555555555555;
      if (bVar2 || uVar5 == 0) {
        if (bVar2) {
          lVar10 = lVar10 + (long)param_2 * 0x30;
          while (lVar6 != lVar10) {
            lVar6 = lVar6 + -0x30;
            FUN_10a559d50(lVar6);
          }
          param_1[1] = lVar10;
        }
      }
      else {
        if ((ulong)((param_1[2] - lVar6 >> 4) * -0x5555555555555555) < uVar5) {
          if (param_2 < (undefined8 *)0x555555555555556) {
            lVar6 = param_1[2] - lVar10 >> 4;
            puVar7 = (undefined8 *)(lVar6 * 0x5555555555555556);
            if (puVar7 < param_2 || (long)puVar7 - (long)param_2 == 0) {
              puVar7 = param_2;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
              puVar7 = (undefined8 *)0x555555555555555;
            }
            if (puVar7 < (undefined8 *)0x555555555555556) {
              lVar6 = (long)puVar7 * 0x30;
              __Znwm();
              lVar11 = ((uVar5 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
              _bzero(lVar6 + lVar9,lVar11);
              _memcpy(lVar6,lVar10,lVar9);
              *param_1 = lVar6;
              param_1[1] = lVar6 + lVar9 + lVar11;
              param_1[2] = lVar6 + (long)puVar7 * 0x30;
              if (lVar10 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(lVar10);
              return;
            }
          }
          else {
            FUN_10a55df84();
          }
          func_0x000109ffded8();
          puVar7 = (undefined8 *)*param_4;
          puVar4 = (undefined8 *)param_4[1];
          if (puVar4 != puVar7) {
            uVar5 = 1;
            uVar8 = 0;
            do {
              uVar12 = uVar5;
              plVar3 = param_1 + 0x11;
              FUN_10a55df98(plVar3,puVar7 + uVar8 * 4);
              dStack_100 = (double)CONCAT44(dStack_100._4_4_,(int)plVar3);
              FUN_109febd04(param_3,&dStack_100);
              if ((ulong)(param_4[1] - *param_4 >> 5) <= uVar8) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10a55df84);
                (*pcVar1)();
              }
              puVar7 = (undefined8 *)(*param_4 + uVar8 * 0x20);
              dStack_100 = (double)puVar7[2] * (double)param_4[6];
              uStack_e8 = puVar7[1];
              uStack_f0 = *puVar7;
              plVar3 = param_1 + 0x17;
              uStack_f8 = param_5;
              FUN_10a55e084(plVar3,&dStack_100);
              uStack_d4 = SUB84(plVar3,0);
              FUN_109febd04(param_2,&uStack_d4);
              puVar7 = (undefined8 *)*param_4;
              puVar4 = (undefined8 *)param_4[1];
              uVar5 = (ulong)((int)uVar12 + 1);
              uVar8 = uVar12;
            } while (uVar12 < (ulong)((long)puVar4 - (long)puVar7 >> 5));
          }
          if (puVar4 != puVar7) {
            dStack_100 = (double)param_4[6];
            uStack_e8 = puVar7[1];
            uStack_f0 = *puVar7;
            param_1 = param_1 + 0x17;
            uStack_f8 = param_5;
            FUN_10a55e084(param_1,&dStack_100);
            uStack_d4 = SUB84(param_1,0);
            FUN_109febd04(param_2,&uStack_d4);
          }
          return;
        }
        lVar10 = ((uVar5 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
        _bzero(lVar6,lVar10);
        param_1[1] = lVar6 + lVar10;
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x71c71c71c71c71c;
    }
    puVar4 = param_2;
    FUN_10a560738();
    puVar7 = (undefined8 *)(uVar8 + lVar10);
    uVar14 = param_2[1];
    uVar13 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
    puVar7[1] = uVar14;
    *puVar7 = uVar13;
    puVar7[3] = uVar16;
    puVar7[2] = uVar15;
    lVar10 = (long)puVar7 + 0x24;
    lVar9 = (long)puVar7 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar6 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10;
    param_1[2] = uVar8 + (long)puVar4 * 0x24;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 10a55dcc8; end: 10a55df83;  */

void FUN_10a55dcc8(long *param_1,ulong param_2,undefined8 param_3,long *param_4,undefined4 param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  double dStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a4;
  
  lVar9 = *param_1;
  lVar6 = param_1[1];
  lVar10 = lVar6 - lVar9;
  bVar3 = param_2 < (ulong)((lVar10 >> 4) * -0x5555555555555555);
  uVar1 = param_2 + (lVar10 >> 4) * 0x5555555555555555;
  if (bVar3 || uVar1 == 0) {
    if (bVar3) {
      lVar9 = lVar9 + param_2 * 0x30;
      while (lVar6 != lVar9) {
        lVar6 = lVar6 + -0x30;
        FUN_10a559d50(lVar6);
      }
      param_1[1] = lVar9;
    }
  }
  else {
    if ((ulong)((param_1[2] - lVar6 >> 4) * -0x5555555555555555) < uVar1) {
      if (param_2 < 0x555555555555556) {
        lVar6 = param_1[2] - lVar9 >> 4;
        uVar8 = lVar6 * 0x5555555555555556;
        if (uVar8 < param_2 || uVar8 - param_2 == 0) {
          uVar8 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar8 = 0x555555555555555;
        }
        if (uVar8 < 0x555555555555556) {
          lVar6 = uVar8 * 0x30;
          __Znwm();
          lVar11 = ((uVar1 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
          _bzero(lVar6 + lVar10,lVar11);
          _memcpy(lVar6,lVar9,lVar10);
          *param_1 = lVar6;
          param_1[1] = lVar6 + lVar10 + lVar11;
          param_1[2] = lVar6 + uVar8 * 0x30;
          if (lVar9 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar9);
          return;
        }
      }
      else {
        FUN_10a55df84();
      }
      func_0x000109ffded8();
      puVar5 = (undefined8 *)*param_4;
      puVar7 = (undefined8 *)param_4[1];
      if (puVar7 != puVar5) {
        uVar1 = 1;
        uVar8 = 0;
        do {
          uVar12 = uVar1;
          plVar4 = param_1 + 0x11;
          FUN_10a55df98(plVar4,puVar5 + uVar8 * 4);
          dStack_d0 = (double)CONCAT44(dStack_d0._4_4_,(int)plVar4);
          FUN_109febd04(param_3,&dStack_d0);
          if ((ulong)(param_4[1] - *param_4 >> 5) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a55df84);
            (*pcVar2)();
          }
          puVar5 = (undefined8 *)(*param_4 + uVar8 * 0x20);
          dStack_d0 = (double)puVar5[2] * (double)param_4[6];
          uStack_b8 = puVar5[1];
          uStack_c0 = *puVar5;
          plVar4 = param_1 + 0x17;
          uStack_c8 = param_5;
          FUN_10a55e084(plVar4,&dStack_d0);
          uStack_a4 = SUB84(plVar4,0);
          FUN_109febd04(param_2,&uStack_a4);
          puVar5 = (undefined8 *)*param_4;
          puVar7 = (undefined8 *)param_4[1];
          uVar1 = (ulong)((int)uVar12 + 1);
          uVar8 = uVar12;
        } while (uVar12 < (ulong)((long)puVar7 - (long)puVar5 >> 5));
      }
      if (puVar7 != puVar5) {
        dStack_d0 = (double)param_4[6];
        uStack_b8 = puVar5[1];
        uStack_c0 = *puVar5;
        param_1 = param_1 + 0x17;
        uStack_c8 = param_5;
        FUN_10a55e084(param_1,&dStack_d0);
        uStack_a4 = SUB84(param_1,0);
        FUN_109febd04(param_2,&uStack_a4);
      }
      return;
    }
    lVar9 = ((uVar1 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar6,lVar9);
    param_1[1] = lVar6 + lVar9;
  }
  return;
}



/* Entry: 10a55df84; end: 10a55df97;  */

double FUN_10a55df84(double param_1,undefined8 param_2,undefined8 *param_3)

{
  double *pdVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  double *pdVar20;
  long lVar21;
  float fVar22;
  double dVar23;
  undefined8 *in_register_00005008;
  
  puVar2 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar18 = (undefined8 *)puVar2[1];
  lVar21 = (long)puVar18 - *puVar2;
  dVar17 = (double)(lVar21 >> 4);
  if (puVar18 < (undefined8 *)puVar2[2]) {
    uVar12 = *param_3;
    puVar18[1] = param_3[1];
    *puVar18 = uVar12;
    puVar18 = puVar18 + 2;
LAB_10a55e064:
    puVar2[1] = (ulong)puVar18;
    return dVar17;
  }
  uVar9 = (long)dVar17 + 1;
  if (uVar9 >> 0x3c == 0) {
    uVar11 = (long)puVar2[2] - *puVar2;
    uVar13 = (long)uVar11 >> 3;
    if (uVar13 <= uVar9) {
      uVar13 = uVar9;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar13 = 0xfffffffffffffff;
    }
    puVar3 = puVar2;
    func_0x000109435ef8(puVar2,uVar13,0);
    puVar8 = (undefined8 *)((long)puVar3 + lVar21);
    uVar12 = *param_3;
    puVar8[1] = param_3[1];
    *puVar8 = uVar12;
    puVar18 = puVar8 + 2;
    puVar4 = (undefined8 *)*puVar2;
    puVar15 = (undefined8 *)puVar2[1];
    lVar21 = (long)puVar4 - (long)puVar15;
    puVar8 = (undefined8 *)((long)puVar8 + lVar21);
    puVar14 = puVar8;
    if (lVar21 != 0) {
      do {
        puVar19 = puVar4 + 2;
        uVar12 = *puVar4;
        puVar14[1] = puVar4[1];
        *puVar14 = uVar12;
        puVar4 = puVar19;
        puVar14 = puVar14 + 2;
      } while (puVar19 != puVar15);
      puVar4 = (undefined8 *)*puVar2;
    }
    *puVar2 = (ulong)puVar8;
    puVar2[1] = (ulong)puVar18;
    puVar2[2] = (ulong)(puVar3 + uVar13 * 2);
    if (puVar4 != (undefined8 *)0x0) {
      _free();
    }
    goto LAB_10a55e064;
  }
  FUN_10a35e504();
  puVar18 = (undefined8 *)*puVar2;
  puVar8 = (undefined8 *)puVar2[1];
  if (puVar8 < (undefined8 *)puVar2[2]) {
    uVar12 = *param_3;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar8 = uVar12;
    uVar12 = param_3[2];
    puVar8[3] = param_3[3];
    puVar8[2] = uVar12;
    puVar4 = puVar8 + 4;
    dVar17 = (double)((long)puVar8 - (long)puVar18 >> 5);
    goto LAB_10a55e1c0;
  }
  dVar17 = (double)((long)puVar8 - (long)puVar18 >> 5);
  uVar9 = (long)dVar17 + 1;
  if (uVar9 >> 0x3b != 0) {
    FUN_10a55e1e4();
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar5 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if (puVar5 < (undefined *)0xaaaaaaaaaaaaaab) {
      dVar17 = (double)((long)puVar5 * 0x18);
      _malloc();
      if ((puVar5 == (undefined *)0x0) || (dVar17 != 0.0)) {
        return dVar17;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    puVar5 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)puVar5 >> 0x3c == 0) {
      dVar17 = (double)((long)puVar5 << 4);
      _malloc();
      if ((puVar5 == (undefined *)0x0) || (dVar17 != 0.0)) {
        return dVar17;
      }
    }
    pdVar6 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar10 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    pdVar1 = (double *)pdVar6[1];
    lVar21 = (long)pdVar1 - (long)*pdVar6;
    dVar17 = (double)(lVar21 >> 4);
    if (pdVar1 < (double *)pdVar6[2]) {
      dVar23 = *pdVar10;
      pdVar20 = pdVar1 + 2;
      pdVar1[1] = pdVar10[1] * param_1;
      *pdVar1 = dVar23 * param_1;
    }
    else {
      uVar9 = (long)dVar17 + 1;
      if (uVar9 >> 0x3c != 0) {
        FUN_10a35e504();
        puVar18 = (undefined8 *)pdVar6[1];
        lVar21 = (long)puVar18 - (long)*pdVar6;
        dVar17 = (double)(lVar21 >> 4);
        fVar22 = SUB84(param_1,0);
        if (puVar18 < (undefined8 *)pdVar6[2]) {
          uVar12 = *in_register_00005008;
          puVar19 = puVar18 + 2;
          puVar18[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar22,
                                (float)in_register_00005008[1] * fVar22);
          *puVar18 = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar22,(float)uVar12 * fVar22);
        }
        else {
          uVar9 = (long)dVar17 + 1;
          if (uVar9 >> 0x3c != 0) {
            FUN_10a55e270();
            dVar17 = *pdVar6;
            if (dVar17 != 0.0) {
              pdVar6[1] = dVar17;
              _free();
              *pdVar6 = 0.0;
              pdVar6[1] = 0.0;
              pdVar6[2] = 0.0;
            }
            dVar23 = *pdVar10;
            pdVar6[1] = pdVar10[1];
            *pdVar6 = dVar23;
            pdVar6[2] = pdVar10[2];
            *pdVar10 = 0.0;
            pdVar10[1] = 0.0;
            pdVar10[2] = 0.0;
            return dVar17;
          }
          uVar11 = (long)pdVar6[2] - (long)*pdVar6;
          uVar13 = (long)uVar11 >> 3;
          if (uVar13 <= uVar9) {
            uVar13 = uVar9;
          }
          if (0x7fffffffffffffef < uVar11) {
            uVar13 = 0xfffffffffffffff;
          }
          uVar9 = uVar13;
          FUN_10a55e284();
          puVar18 = (undefined8 *)(uVar9 + lVar21);
          uVar12 = *in_register_00005008;
          puVar4 = (undefined8 *)*pdVar6;
          puVar15 = (undefined8 *)pdVar6[1];
          lVar21 = (long)puVar4 - (long)puVar15;
          puVar8 = (undefined8 *)((long)puVar18 + lVar21);
          puVar19 = puVar18 + 2;
          puVar18[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar22,
                                (float)in_register_00005008[1] * fVar22);
          *puVar18 = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar22,(float)uVar12 * fVar22);
          puVar18 = puVar4;
          puVar14 = puVar8;
          if (lVar21 != 0) {
            do {
              puVar16 = puVar18 + 2;
              uVar12 = *puVar18;
              puVar14[1] = puVar18[1];
              *puVar14 = uVar12;
              puVar18 = puVar16;
              puVar14 = puVar14 + 2;
            } while (puVar16 != puVar15);
          }
          *pdVar6 = (double)puVar8;
          pdVar6[1] = (double)puVar19;
          pdVar6[2] = (double)(uVar9 + uVar13 * 0x10);
          if (puVar4 != (undefined8 *)0x0) {
            _free();
          }
        }
        pdVar6[1] = (double)puVar19;
        return dVar17;
      }
      uVar11 = (long)pdVar6[2] - (long)*pdVar6;
      uVar13 = (long)uVar11 >> 3;
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (0x7fffffffffffffef < uVar11) {
        uVar13 = 0xfffffffffffffff;
      }
      pdVar7 = pdVar6;
      func_0x000109435ef8(pdVar6,uVar13,0);
      pdVar1 = (double *)((long)pdVar7 + lVar21);
      dVar23 = *pdVar10;
      pdVar20 = pdVar1 + 2;
      pdVar1[1] = pdVar10[1] * param_1;
      *pdVar1 = dVar23 * param_1;
      puVar8 = (undefined8 *)*pdVar6;
      puVar4 = (undefined8 *)pdVar6[1];
      lVar21 = (long)puVar8 - (long)puVar4;
      puVar18 = (undefined8 *)((long)pdVar1 + lVar21);
      puVar15 = puVar18;
      if (lVar21 != 0) {
        do {
          puVar14 = puVar8 + 2;
          uVar12 = *puVar8;
          puVar15[1] = puVar8[1];
          *puVar15 = uVar12;
          puVar8 = puVar14;
          puVar15 = puVar15 + 2;
        } while (puVar14 != puVar4);
        puVar8 = (undefined8 *)*pdVar6;
      }
      *pdVar6 = (double)puVar18;
      pdVar6[1] = (double)pdVar20;
      pdVar6[2] = (double)(pdVar7 + uVar13 * 2);
      if (puVar8 != (undefined8 *)0x0) {
        _free();
      }
    }
    pdVar6[1] = (double)pdVar20;
    return dVar17;
  }
  uVar11 = (long)puVar2[2] - (long)puVar18;
  uVar13 = (long)uVar11 >> 4;
  if (uVar13 <= uVar9) {
    uVar13 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar11) {
    uVar13 = 0x7ffffffffffffff;
  }
  if (uVar13 == 0) {
LAB_10a55e148:
    lVar21 = 0;
  }
  else {
    if (uVar13 >> 0x3b != 0) {
LAB_10a55e128:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10a55e148;
    }
    lVar21 = uVar13 << 5;
    _malloc();
    if (lVar21 == 0) goto LAB_10a55e128;
  }
  puVar15 = (undefined8 *)(lVar21 + ((long)puVar8 - (long)puVar18));
  *puVar15 = *param_3;
  *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(param_3 + 1);
  uVar12 = param_3[2];
  puVar15[3] = param_3[3];
  puVar15[2] = uVar12;
  puVar4 = puVar15 + 4;
  puVar14 = puVar15 + (long)dVar17 * -4;
  if (puVar18 != puVar8) {
    do {
      uVar12 = *puVar18;
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar18 + 1);
      *puVar14 = uVar12;
      uVar12 = puVar18[2];
      puVar14[3] = puVar18[3];
      puVar14[2] = uVar12;
      puVar18 = puVar18 + 4;
      puVar14 = puVar14 + 4;
    } while (puVar18 != puVar8);
    puVar18 = (undefined8 *)*puVar2;
  }
  *puVar2 = (ulong)(puVar15 + (long)dVar17 * -4);
  puVar2[1] = (ulong)puVar4;
  puVar2[2] = lVar21 + uVar13 * 0x20;
  if (puVar18 != (undefined8 *)0x0) {
    _free(puVar18);
  }
LAB_10a55e1c0:
  puVar2[1] = (ulong)puVar4;
  return dVar17;
}



/* Entry: 10a55df98; end: 10a55e083;  */

double FUN_10a55df98(double param_1,ulong *param_2,undefined8 *param_3)

{
  double *pdVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double *pdVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double dVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double *pdVar19;
  long lVar20;
  float fVar21;
  double dVar22;
  undefined8 *in_register_00005008;
  
  puVar17 = (undefined8 *)param_2[1];
  lVar20 = (long)puVar17 - *param_2;
  dVar16 = (double)(lVar20 >> 4);
  if (puVar17 < (undefined8 *)param_2[2]) {
    uVar11 = *param_3;
    puVar17[1] = param_3[1];
    *puVar17 = uVar11;
    puVar17 = puVar17 + 2;
LAB_10a55e064:
    param_2[1] = (ulong)puVar17;
    return dVar16;
  }
  uVar8 = (long)dVar16 + 1;
  if (uVar8 >> 0x3c == 0) {
    uVar10 = (long)param_2[2] - *param_2;
    uVar12 = (long)uVar10 >> 3;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar12 = 0xfffffffffffffff;
    }
    puVar2 = param_2;
    func_0x000109435ef8(param_2,uVar12,0);
    puVar7 = (undefined8 *)((long)puVar2 + lVar20);
    uVar11 = *param_3;
    puVar7[1] = param_3[1];
    *puVar7 = uVar11;
    puVar17 = puVar7 + 2;
    puVar3 = (undefined8 *)*param_2;
    puVar14 = (undefined8 *)param_2[1];
    lVar20 = (long)puVar3 - (long)puVar14;
    puVar7 = (undefined8 *)((long)puVar7 + lVar20);
    puVar13 = puVar7;
    if (lVar20 != 0) {
      do {
        puVar18 = puVar3 + 2;
        uVar11 = *puVar3;
        puVar13[1] = puVar3[1];
        *puVar13 = uVar11;
        puVar3 = puVar18;
        puVar13 = puVar13 + 2;
      } while (puVar18 != puVar14);
      puVar3 = (undefined8 *)*param_2;
    }
    *param_2 = (ulong)puVar7;
    param_2[1] = (ulong)puVar17;
    param_2[2] = (ulong)(puVar2 + uVar12 * 2);
    if (puVar3 != (undefined8 *)0x0) {
      _free();
    }
    goto LAB_10a55e064;
  }
  FUN_10a35e504();
  puVar17 = (undefined8 *)*param_2;
  puVar7 = (undefined8 *)param_2[1];
  if (puVar7 < (undefined8 *)param_2[2]) {
    uVar11 = *param_3;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar7 = uVar11;
    uVar11 = param_3[2];
    puVar7[3] = param_3[3];
    puVar7[2] = uVar11;
    puVar3 = puVar7 + 4;
    dVar16 = (double)((long)puVar7 - (long)puVar17 >> 5);
    goto LAB_10a55e1c0;
  }
  dVar16 = (double)((long)puVar7 - (long)puVar17 >> 5);
  uVar8 = (long)dVar16 + 1;
  if (uVar8 >> 0x3b != 0) {
    FUN_10a55e1e4();
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar4 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if (puVar4 < (undefined *)0xaaaaaaaaaaaaaab) {
      dVar16 = (double)((long)puVar4 * 0x18);
      _malloc();
      if ((puVar4 == (undefined *)0x0) || (dVar16 != 0.0)) {
        return dVar16;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    puVar4 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)puVar4 >> 0x3c == 0) {
      dVar16 = (double)((long)puVar4 << 4);
      _malloc();
      if ((puVar4 == (undefined *)0x0) || (dVar16 != 0.0)) {
        return dVar16;
      }
    }
    pdVar5 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar9 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    pdVar1 = (double *)pdVar5[1];
    lVar20 = (long)pdVar1 - (long)*pdVar5;
    dVar16 = (double)(lVar20 >> 4);
    if (pdVar1 < (double *)pdVar5[2]) {
      dVar22 = *pdVar9;
      pdVar19 = pdVar1 + 2;
      pdVar1[1] = pdVar9[1] * param_1;
      *pdVar1 = dVar22 * param_1;
    }
    else {
      uVar8 = (long)dVar16 + 1;
      if (uVar8 >> 0x3c != 0) {
        FUN_10a35e504();
        puVar17 = (undefined8 *)pdVar5[1];
        lVar20 = (long)puVar17 - (long)*pdVar5;
        dVar16 = (double)(lVar20 >> 4);
        fVar21 = SUB84(param_1,0);
        if (puVar17 < (undefined8 *)pdVar5[2]) {
          uVar11 = *in_register_00005008;
          puVar18 = puVar17 + 2;
          puVar17[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar21,
                                (float)in_register_00005008[1] * fVar21);
          *puVar17 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar21,(float)uVar11 * fVar21);
        }
        else {
          uVar8 = (long)dVar16 + 1;
          if (uVar8 >> 0x3c != 0) {
            FUN_10a55e270();
            dVar16 = *pdVar5;
            if (dVar16 != 0.0) {
              pdVar5[1] = dVar16;
              _free();
              *pdVar5 = 0.0;
              pdVar5[1] = 0.0;
              pdVar5[2] = 0.0;
            }
            dVar22 = *pdVar9;
            pdVar5[1] = pdVar9[1];
            *pdVar5 = dVar22;
            pdVar5[2] = pdVar9[2];
            *pdVar9 = 0.0;
            pdVar9[1] = 0.0;
            pdVar9[2] = 0.0;
            return dVar16;
          }
          uVar10 = (long)pdVar5[2] - (long)*pdVar5;
          uVar12 = (long)uVar10 >> 3;
          if (uVar12 <= uVar8) {
            uVar12 = uVar8;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar12 = 0xfffffffffffffff;
          }
          uVar8 = uVar12;
          FUN_10a55e284();
          puVar17 = (undefined8 *)(uVar8 + lVar20);
          uVar11 = *in_register_00005008;
          puVar3 = (undefined8 *)*pdVar5;
          puVar14 = (undefined8 *)pdVar5[1];
          lVar20 = (long)puVar3 - (long)puVar14;
          puVar7 = (undefined8 *)((long)puVar17 + lVar20);
          puVar18 = puVar17 + 2;
          puVar17[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar21,
                                (float)in_register_00005008[1] * fVar21);
          *puVar17 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar21,(float)uVar11 * fVar21);
          puVar17 = puVar3;
          puVar13 = puVar7;
          if (lVar20 != 0) {
            do {
              puVar15 = puVar17 + 2;
              uVar11 = *puVar17;
              puVar13[1] = puVar17[1];
              *puVar13 = uVar11;
              puVar17 = puVar15;
              puVar13 = puVar13 + 2;
            } while (puVar15 != puVar14);
          }
          *pdVar5 = (double)puVar7;
          pdVar5[1] = (double)puVar18;
          pdVar5[2] = (double)(uVar8 + uVar12 * 0x10);
          if (puVar3 != (undefined8 *)0x0) {
            _free();
          }
        }
        pdVar5[1] = (double)puVar18;
        return dVar16;
      }
      uVar10 = (long)pdVar5[2] - (long)*pdVar5;
      uVar12 = (long)uVar10 >> 3;
      if (uVar12 <= uVar8) {
        uVar12 = uVar8;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar12 = 0xfffffffffffffff;
      }
      pdVar6 = pdVar5;
      func_0x000109435ef8(pdVar5,uVar12,0);
      pdVar1 = (double *)((long)pdVar6 + lVar20);
      dVar22 = *pdVar9;
      pdVar19 = pdVar1 + 2;
      pdVar1[1] = pdVar9[1] * param_1;
      *pdVar1 = dVar22 * param_1;
      puVar7 = (undefined8 *)*pdVar5;
      puVar3 = (undefined8 *)pdVar5[1];
      lVar20 = (long)puVar7 - (long)puVar3;
      puVar17 = (undefined8 *)((long)pdVar1 + lVar20);
      puVar14 = puVar17;
      if (lVar20 != 0) {
        do {
          puVar13 = puVar7 + 2;
          uVar11 = *puVar7;
          puVar14[1] = puVar7[1];
          *puVar14 = uVar11;
          puVar7 = puVar13;
          puVar14 = puVar14 + 2;
        } while (puVar13 != puVar3);
        puVar7 = (undefined8 *)*pdVar5;
      }
      *pdVar5 = (double)puVar17;
      pdVar5[1] = (double)pdVar19;
      pdVar5[2] = (double)(pdVar6 + uVar12 * 2);
      if (puVar7 != (undefined8 *)0x0) {
        _free();
      }
    }
    pdVar5[1] = (double)pdVar19;
    return dVar16;
  }
  uVar10 = (long)param_2[2] - (long)puVar17;
  uVar12 = (long)uVar10 >> 4;
  if (uVar12 <= uVar8) {
    uVar12 = uVar8;
  }
  if (0x7fffffffffffffdf < uVar10) {
    uVar12 = 0x7ffffffffffffff;
  }
  if (uVar12 == 0) {
LAB_10a55e148:
    lVar20 = 0;
  }
  else {
    if (uVar12 >> 0x3b != 0) {
LAB_10a55e128:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10a55e148;
    }
    lVar20 = uVar12 << 5;
    _malloc();
    if (lVar20 == 0) goto LAB_10a55e128;
  }
  puVar14 = (undefined8 *)(lVar20 + ((long)puVar7 - (long)puVar17));
  *puVar14 = *param_3;
  *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(param_3 + 1);
  uVar11 = param_3[2];
  puVar14[3] = param_3[3];
  puVar14[2] = uVar11;
  puVar3 = puVar14 + 4;
  puVar13 = puVar14 + (long)dVar16 * -4;
  if (puVar17 != puVar7) {
    do {
      uVar11 = *puVar17;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar17 + 1);
      *puVar13 = uVar11;
      uVar11 = puVar17[2];
      puVar13[3] = puVar17[3];
      puVar13[2] = uVar11;
      puVar17 = puVar17 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar17 != puVar7);
    puVar17 = (undefined8 *)*param_2;
  }
  *param_2 = (ulong)(puVar14 + (long)dVar16 * -4);
  param_2[1] = (ulong)puVar3;
  param_2[2] = lVar20 + uVar12 * 0x20;
  if (puVar17 != (undefined8 *)0x0) {
    _free(puVar17);
  }
LAB_10a55e1c0:
  param_2[1] = (ulong)puVar3;
  return dVar16;
}



/* Entry: 10a55e084; end: 10a55e1e3;  */

double FUN_10a55e084(double param_1,ulong *param_2,undefined8 *param_3)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  ulong uVar7;
  double *pdVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double *pdVar19;
  float fVar20;
  double dVar21;
  undefined8 *in_register_00005008;
  
  puVar16 = (undefined8 *)*param_2;
  puVar6 = (undefined8 *)param_2[1];
  if (puVar6 < (undefined8 *)param_2[2]) {
    uVar9 = *param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar6 = uVar9;
    uVar9 = param_3[2];
    puVar6[3] = param_3[3];
    puVar6[2] = uVar9;
    puVar18 = puVar6 + 4;
    dVar15 = (double)((long)puVar6 - (long)puVar16 >> 5);
    goto LAB_10a55e1c0;
  }
  dVar15 = (double)((long)puVar6 - (long)puVar16 >> 5);
  uVar7 = (long)dVar15 + 1;
  if (uVar7 >> 0x3b != 0) {
    FUN_10a55e1e4();
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar3 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if (puVar3 < (undefined *)0xaaaaaaaaaaaaaab) {
      dVar15 = (double)((long)puVar3 * 0x18);
      _malloc();
      if ((puVar3 == (undefined *)0x0) || (dVar15 != 0.0)) {
        return dVar15;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    puVar3 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)puVar3 >> 0x3c == 0) {
      dVar15 = (double)((long)puVar3 << 4);
      _malloc();
      if ((puVar3 == (undefined *)0x0) || (dVar15 != 0.0)) {
        return dVar15;
      }
    }
    pdVar4 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar8 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    pdVar1 = (double *)pdVar4[1];
    lVar2 = (long)pdVar1 - (long)*pdVar4;
    dVar15 = (double)(lVar2 >> 4);
    if (pdVar1 < (double *)pdVar4[2]) {
      dVar21 = *pdVar8;
      pdVar19 = pdVar1 + 2;
      pdVar1[1] = pdVar8[1] * param_1;
      *pdVar1 = dVar21 * param_1;
    }
    else {
      uVar7 = (long)dVar15 + 1;
      if (uVar7 >> 0x3c != 0) {
        FUN_10a35e504();
        puVar16 = (undefined8 *)pdVar4[1];
        lVar2 = (long)puVar16 - (long)*pdVar4;
        dVar15 = (double)(lVar2 >> 4);
        fVar20 = SUB84(param_1,0);
        if (puVar16 < (undefined8 *)pdVar4[2]) {
          uVar9 = *in_register_00005008;
          puVar17 = puVar16 + 2;
          puVar16[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar20,
                                (float)in_register_00005008[1] * fVar20);
          *puVar16 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar20,(float)uVar9 * fVar20);
        }
        else {
          uVar7 = (long)dVar15 + 1;
          if (uVar7 >> 0x3c != 0) {
            FUN_10a55e270();
            dVar15 = *pdVar4;
            if (dVar15 != 0.0) {
              pdVar4[1] = dVar15;
              _free();
              *pdVar4 = 0.0;
              pdVar4[1] = 0.0;
              pdVar4[2] = 0.0;
            }
            dVar21 = *pdVar8;
            pdVar4[1] = pdVar8[1];
            *pdVar4 = dVar21;
            pdVar4[2] = pdVar8[2];
            *pdVar8 = 0.0;
            pdVar8[1] = 0.0;
            pdVar8[2] = 0.0;
            return dVar15;
          }
          uVar10 = (long)pdVar4[2] - (long)*pdVar4;
          uVar11 = (long)uVar10 >> 3;
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar11 = 0xfffffffffffffff;
          }
          uVar7 = uVar11;
          FUN_10a55e284();
          puVar16 = (undefined8 *)(uVar7 + lVar2);
          uVar9 = *in_register_00005008;
          puVar18 = (undefined8 *)*pdVar4;
          puVar13 = (undefined8 *)pdVar4[1];
          lVar2 = (long)puVar18 - (long)puVar13;
          puVar6 = (undefined8 *)((long)puVar16 + lVar2);
          puVar17 = puVar16 + 2;
          puVar16[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar20,
                                (float)in_register_00005008[1] * fVar20);
          *puVar16 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar20,(float)uVar9 * fVar20);
          puVar16 = puVar18;
          puVar12 = puVar6;
          if (lVar2 != 0) {
            do {
              puVar14 = puVar16 + 2;
              uVar9 = *puVar16;
              puVar12[1] = puVar16[1];
              *puVar12 = uVar9;
              puVar16 = puVar14;
              puVar12 = puVar12 + 2;
            } while (puVar14 != puVar13);
          }
          *pdVar4 = (double)puVar6;
          pdVar4[1] = (double)puVar17;
          pdVar4[2] = (double)(uVar7 + uVar11 * 0x10);
          if (puVar18 != (undefined8 *)0x0) {
            _free();
          }
        }
        pdVar4[1] = (double)puVar17;
        return dVar15;
      }
      uVar10 = (long)pdVar4[2] - (long)*pdVar4;
      uVar11 = (long)uVar10 >> 3;
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar11 = 0xfffffffffffffff;
      }
      pdVar5 = pdVar4;
      func_0x000109435ef8(pdVar4,uVar11,0);
      pdVar1 = (double *)((long)pdVar5 + lVar2);
      dVar21 = *pdVar8;
      pdVar19 = pdVar1 + 2;
      pdVar1[1] = pdVar8[1] * param_1;
      *pdVar1 = dVar21 * param_1;
      puVar6 = (undefined8 *)*pdVar4;
      puVar18 = (undefined8 *)pdVar4[1];
      lVar2 = (long)puVar6 - (long)puVar18;
      puVar16 = (undefined8 *)((long)pdVar1 + lVar2);
      puVar13 = puVar16;
      if (lVar2 != 0) {
        do {
          puVar12 = puVar6 + 2;
          uVar9 = *puVar6;
          puVar13[1] = puVar6[1];
          *puVar13 = uVar9;
          puVar6 = puVar12;
          puVar13 = puVar13 + 2;
        } while (puVar12 != puVar18);
        puVar6 = (undefined8 *)*pdVar4;
      }
      *pdVar4 = (double)puVar16;
      pdVar4[1] = (double)pdVar19;
      pdVar4[2] = (double)(pdVar5 + uVar11 * 2);
      if (puVar6 != (undefined8 *)0x0) {
        _free();
      }
    }
    pdVar4[1] = (double)pdVar19;
    return dVar15;
  }
  uVar10 = (long)param_2[2] - (long)puVar16;
  uVar11 = (long)uVar10 >> 4;
  if (uVar11 <= uVar7) {
    uVar11 = uVar7;
  }
  if (0x7fffffffffffffdf < uVar10) {
    uVar11 = 0x7ffffffffffffff;
  }
  if (uVar11 == 0) {
LAB_10a55e148:
    lVar2 = 0;
  }
  else {
    if (uVar11 >> 0x3b != 0) {
LAB_10a55e128:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10a55e148;
    }
    lVar2 = uVar11 << 5;
    _malloc();
    if (lVar2 == 0) goto LAB_10a55e128;
  }
  puVar13 = (undefined8 *)(lVar2 + ((long)puVar6 - (long)puVar16));
  *puVar13 = *param_3;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_3 + 1);
  uVar9 = param_3[2];
  puVar13[3] = param_3[3];
  puVar13[2] = uVar9;
  puVar18 = puVar13 + 4;
  puVar12 = puVar13 + (long)dVar15 * -4;
  if (puVar16 != puVar6) {
    do {
      uVar9 = *puVar16;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar16 + 1);
      *puVar12 = uVar9;
      uVar9 = puVar16[2];
      puVar12[3] = puVar16[3];
      puVar12[2] = uVar9;
      puVar16 = puVar16 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar16 != puVar6);
    puVar16 = (undefined8 *)*param_2;
  }
  *param_2 = (ulong)(puVar13 + (long)dVar15 * -4);
  param_2[1] = (ulong)puVar18;
  param_2[2] = lVar2 + uVar11 * 0x20;
  if (puVar16 != (undefined8 *)0x0) {
    _free(puVar16);
  }
LAB_10a55e1c0:
  param_2[1] = (ulong)puVar18;
  return dVar15;
}



/* Entry: 10a55e1e4; end: 10a55e20b;  */

double FUN_10a55e1e4(double param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double *pdVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 *in_register_00005008;
  undefined8 *puVar14;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar3 < (undefined *)0xaaaaaaaaaaaaaab) {
    dVar4 = (double)((long)puVar3 * 0x18);
    _malloc();
    if ((puVar3 == (undefined *)0x0) || (dVar4 != 0.0)) {
      return dVar4;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar3 >> 0x3c == 0) {
    dVar4 = (double)((long)puVar3 << 4);
    _malloc();
    if ((puVar3 == (undefined *)0x0) || (dVar4 != 0.0)) {
      return dVar4;
    }
  }
  pdVar5 = (double *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pdVar9 = (double *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pdVar1 = (double *)pdVar5[1];
  lVar18 = (long)pdVar1 - (long)*pdVar5;
  dVar4 = (double)(lVar18 >> 4);
  if (pdVar1 < (double *)pdVar5[2]) {
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
  }
  else {
    uVar8 = (long)dVar4 + 1;
    if (uVar8 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar13 = (undefined8 *)pdVar5[1];
      lVar18 = (long)puVar13 - (long)*pdVar5;
      dVar4 = (double)(lVar18 >> 4);
      fVar19 = SUB84(param_1,0);
      if (puVar13 < (undefined8 *)pdVar5[2]) {
        uVar21 = *in_register_00005008;
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
      }
      else {
        uVar8 = (long)dVar4 + 1;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a55e270();
          dVar4 = *pdVar5;
          if (dVar4 != 0.0) {
            pdVar5[1] = dVar4;
            _free();
            *pdVar5 = 0.0;
            pdVar5[1] = 0.0;
            pdVar5[2] = 0.0;
          }
          dVar20 = *pdVar9;
          pdVar5[1] = pdVar9[1];
          *pdVar5 = dVar20;
          pdVar5[2] = pdVar9[2];
          *pdVar9 = 0.0;
          pdVar9[1] = 0.0;
          pdVar9[2] = 0.0;
          return dVar4;
        }
        uVar10 = (long)pdVar5[2] - (long)*pdVar5;
        uVar11 = (long)uVar10 >> 3;
        if (uVar11 <= uVar8) {
          uVar11 = uVar8;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar11 = 0xfffffffffffffff;
        }
        uVar8 = uVar11;
        FUN_10a55e284();
        puVar13 = (undefined8 *)(uVar8 + lVar18);
        uVar21 = *in_register_00005008;
        puVar2 = (undefined8 *)*pdVar5;
        puVar12 = (undefined8 *)pdVar5[1];
        lVar18 = (long)puVar2 - (long)puVar12;
        puVar7 = (undefined8 *)((long)puVar13 + lVar18);
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
        puVar13 = puVar2;
        puVar15 = puVar7;
        if (lVar18 != 0) {
          do {
            puVar14 = puVar13 + 2;
            uVar21 = *puVar13;
            puVar15[1] = puVar13[1];
            *puVar15 = uVar21;
            puVar13 = puVar14;
            puVar15 = puVar15 + 2;
          } while (puVar14 != puVar12);
        }
        *pdVar5 = (double)puVar7;
        pdVar5[1] = (double)puVar16;
        pdVar5[2] = (double)(uVar8 + uVar11 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          _free();
        }
      }
      pdVar5[1] = (double)puVar16;
      return dVar4;
    }
    uVar10 = (long)pdVar5[2] - (long)*pdVar5;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    pdVar6 = pdVar5;
    func_0x000109435ef8(pdVar5,uVar11,0);
    pdVar1 = (double *)((long)pdVar6 + lVar18);
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
    puVar7 = (undefined8 *)*pdVar5;
    puVar2 = (undefined8 *)pdVar5[1];
    lVar18 = (long)puVar7 - (long)puVar2;
    puVar13 = (undefined8 *)((long)pdVar1 + lVar18);
    puVar12 = puVar13;
    if (lVar18 != 0) {
      do {
        puVar15 = puVar7 + 2;
        uVar21 = *puVar7;
        puVar12[1] = puVar7[1];
        *puVar12 = uVar21;
        puVar7 = puVar15;
        puVar12 = puVar12 + 2;
      } while (puVar15 != puVar2);
      puVar7 = (undefined8 *)*pdVar5;
    }
    *pdVar5 = (double)puVar13;
    pdVar5[1] = (double)pdVar17;
    pdVar5[2] = (double)(pdVar6 + uVar11 * 2);
    if (puVar7 != (undefined8 *)0x0) {
      _free();
    }
  }
  pdVar5[1] = (double)pdVar17;
  return dVar4;
}



/* Entry: 10a55e20c; end: 10a55e26f;  */

double FUN_10a55e20c(double param_1,ulong param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double *pdVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 *in_register_00005008;
  undefined8 *puVar14;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    dVar3 = (double)(param_2 * 0x18);
    _malloc();
    if ((param_2 == 0) || (dVar3 != 0.0)) {
      return dVar3;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3c == 0) {
    dVar3 = (double)((long)puVar4 << 4);
    _malloc();
    if ((puVar4 == (undefined *)0x0) || (dVar3 != 0.0)) {
      return dVar3;
    }
  }
  pdVar5 = (double *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pdVar9 = (double *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pdVar1 = (double *)pdVar5[1];
  lVar18 = (long)pdVar1 - (long)*pdVar5;
  dVar3 = (double)(lVar18 >> 4);
  if (pdVar1 < (double *)pdVar5[2]) {
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
  }
  else {
    uVar8 = (long)dVar3 + 1;
    if (uVar8 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar13 = (undefined8 *)pdVar5[1];
      lVar18 = (long)puVar13 - (long)*pdVar5;
      dVar3 = (double)(lVar18 >> 4);
      fVar19 = SUB84(param_1,0);
      if (puVar13 < (undefined8 *)pdVar5[2]) {
        uVar21 = *in_register_00005008;
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
      }
      else {
        uVar8 = (long)dVar3 + 1;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a55e270();
          dVar3 = *pdVar5;
          if (dVar3 != 0.0) {
            pdVar5[1] = dVar3;
            _free();
            *pdVar5 = 0.0;
            pdVar5[1] = 0.0;
            pdVar5[2] = 0.0;
          }
          dVar20 = *pdVar9;
          pdVar5[1] = pdVar9[1];
          *pdVar5 = dVar20;
          pdVar5[2] = pdVar9[2];
          *pdVar9 = 0.0;
          pdVar9[1] = 0.0;
          pdVar9[2] = 0.0;
          return dVar3;
        }
        uVar10 = (long)pdVar5[2] - (long)*pdVar5;
        uVar11 = (long)uVar10 >> 3;
        if (uVar11 <= uVar8) {
          uVar11 = uVar8;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar11 = 0xfffffffffffffff;
        }
        uVar8 = uVar11;
        FUN_10a55e284();
        puVar13 = (undefined8 *)(uVar8 + lVar18);
        uVar21 = *in_register_00005008;
        puVar2 = (undefined8 *)*pdVar5;
        puVar12 = (undefined8 *)pdVar5[1];
        lVar18 = (long)puVar2 - (long)puVar12;
        puVar7 = (undefined8 *)((long)puVar13 + lVar18);
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
        puVar13 = puVar2;
        puVar15 = puVar7;
        if (lVar18 != 0) {
          do {
            puVar14 = puVar13 + 2;
            uVar21 = *puVar13;
            puVar15[1] = puVar13[1];
            *puVar15 = uVar21;
            puVar13 = puVar14;
            puVar15 = puVar15 + 2;
          } while (puVar14 != puVar12);
        }
        *pdVar5 = (double)puVar7;
        pdVar5[1] = (double)puVar16;
        pdVar5[2] = (double)(uVar8 + uVar11 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          _free();
        }
      }
      pdVar5[1] = (double)puVar16;
      return dVar3;
    }
    uVar10 = (long)pdVar5[2] - (long)*pdVar5;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    pdVar6 = pdVar5;
    func_0x000109435ef8(pdVar5,uVar11,0);
    pdVar1 = (double *)((long)pdVar6 + lVar18);
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
    puVar7 = (undefined8 *)*pdVar5;
    puVar2 = (undefined8 *)pdVar5[1];
    lVar18 = (long)puVar7 - (long)puVar2;
    puVar13 = (undefined8 *)((long)pdVar1 + lVar18);
    puVar12 = puVar13;
    if (lVar18 != 0) {
      do {
        puVar15 = puVar7 + 2;
        uVar21 = *puVar7;
        puVar12[1] = puVar7[1];
        *puVar12 = uVar21;
        puVar7 = puVar15;
        puVar12 = puVar12 + 2;
      } while (puVar15 != puVar2);
      puVar7 = (undefined8 *)*pdVar5;
    }
    *pdVar5 = (double)puVar13;
    pdVar5[1] = (double)pdVar17;
    pdVar5[2] = (double)(pdVar6 + uVar11 * 2);
    if (puVar7 != (undefined8 *)0x0) {
      _free();
    }
  }
  pdVar5[1] = (double)pdVar17;
  return dVar3;
}



/* Entry: 10a55e270; end: 10a55e283;  */

double FUN_10a55e270(double param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double *pdVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 *in_register_00005008;
  undefined8 *puVar14;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar3 >> 0x3c == 0) {
    dVar4 = (double)((long)puVar3 << 4);
    _malloc();
    if ((puVar3 == (undefined *)0x0) || (dVar4 != 0.0)) {
      return dVar4;
    }
  }
  pdVar5 = (double *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pdVar9 = (double *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pdVar1 = (double *)pdVar5[1];
  lVar18 = (long)pdVar1 - (long)*pdVar5;
  dVar4 = (double)(lVar18 >> 4);
  if (pdVar1 < (double *)pdVar5[2]) {
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
  }
  else {
    uVar8 = (long)dVar4 + 1;
    if (uVar8 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar13 = (undefined8 *)pdVar5[1];
      lVar18 = (long)puVar13 - (long)*pdVar5;
      dVar4 = (double)(lVar18 >> 4);
      fVar19 = SUB84(param_1,0);
      if (puVar13 < (undefined8 *)pdVar5[2]) {
        uVar21 = *in_register_00005008;
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
      }
      else {
        uVar8 = (long)dVar4 + 1;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a55e270();
          dVar4 = *pdVar5;
          if (dVar4 != 0.0) {
            pdVar5[1] = dVar4;
            _free();
            *pdVar5 = 0.0;
            pdVar5[1] = 0.0;
            pdVar5[2] = 0.0;
          }
          dVar20 = *pdVar9;
          pdVar5[1] = pdVar9[1];
          *pdVar5 = dVar20;
          pdVar5[2] = pdVar9[2];
          *pdVar9 = 0.0;
          pdVar9[1] = 0.0;
          pdVar9[2] = 0.0;
          return dVar4;
        }
        uVar10 = (long)pdVar5[2] - (long)*pdVar5;
        uVar11 = (long)uVar10 >> 3;
        if (uVar11 <= uVar8) {
          uVar11 = uVar8;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar11 = 0xfffffffffffffff;
        }
        uVar8 = uVar11;
        FUN_10a55e284();
        puVar13 = (undefined8 *)(uVar8 + lVar18);
        uVar21 = *in_register_00005008;
        puVar2 = (undefined8 *)*pdVar5;
        puVar12 = (undefined8 *)pdVar5[1];
        lVar18 = (long)puVar2 - (long)puVar12;
        puVar7 = (undefined8 *)((long)puVar13 + lVar18);
        puVar16 = puVar13 + 2;
        puVar13[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar19,
                              (float)in_register_00005008[1] * fVar19);
        *puVar13 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar19,(float)uVar21 * fVar19);
        puVar13 = puVar2;
        puVar15 = puVar7;
        if (lVar18 != 0) {
          do {
            puVar14 = puVar13 + 2;
            uVar21 = *puVar13;
            puVar15[1] = puVar13[1];
            *puVar15 = uVar21;
            puVar13 = puVar14;
            puVar15 = puVar15 + 2;
          } while (puVar14 != puVar12);
        }
        *pdVar5 = (double)puVar7;
        pdVar5[1] = (double)puVar16;
        pdVar5[2] = (double)(uVar8 + uVar11 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          _free();
        }
      }
      pdVar5[1] = (double)puVar16;
      return dVar4;
    }
    uVar10 = (long)pdVar5[2] - (long)*pdVar5;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    pdVar6 = pdVar5;
    func_0x000109435ef8(pdVar5,uVar11,0);
    pdVar1 = (double *)((long)pdVar6 + lVar18);
    dVar20 = *pdVar9;
    pdVar17 = pdVar1 + 2;
    pdVar1[1] = pdVar9[1] * param_1;
    *pdVar1 = dVar20 * param_1;
    puVar7 = (undefined8 *)*pdVar5;
    puVar2 = (undefined8 *)pdVar5[1];
    lVar18 = (long)puVar7 - (long)puVar2;
    puVar13 = (undefined8 *)((long)pdVar1 + lVar18);
    puVar12 = puVar13;
    if (lVar18 != 0) {
      do {
        puVar15 = puVar7 + 2;
        uVar21 = *puVar7;
        puVar12[1] = puVar7[1];
        *puVar12 = uVar21;
        puVar7 = puVar15;
        puVar12 = puVar12 + 2;
      } while (puVar15 != puVar2);
      puVar7 = (undefined8 *)*pdVar5;
    }
    *pdVar5 = (double)puVar13;
    pdVar5[1] = (double)pdVar17;
    pdVar5[2] = (double)(pdVar6 + uVar11 * 2);
    if (puVar7 != (undefined8 *)0x0) {
      _free();
    }
  }
  pdVar5[1] = (double)pdVar17;
  return dVar4;
}



/* Entry: 10a55e284; end: 10a55e2d7;  */

double FUN_10a55e284(double param_1,ulong param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  ulong uVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double *pdVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 *in_register_00005008;
  undefined8 *puVar13;
  
  if (param_2 >> 0x3c == 0) {
    dVar3 = (double)(param_2 << 4);
    _malloc();
    if ((param_2 == 0) || (dVar3 != 0.0)) {
      return dVar3;
    }
  }
  pdVar4 = (double *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pdVar8 = (double *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pdVar1 = (double *)pdVar4[1];
  lVar17 = (long)pdVar1 - (long)*pdVar4;
  dVar3 = (double)(lVar17 >> 4);
  if (pdVar1 < (double *)pdVar4[2]) {
    dVar19 = *pdVar8;
    pdVar16 = pdVar1 + 2;
    pdVar1[1] = pdVar8[1] * param_1;
    *pdVar1 = dVar19 * param_1;
  }
  else {
    uVar7 = (long)dVar3 + 1;
    if (uVar7 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar12 = (undefined8 *)pdVar4[1];
      lVar17 = (long)puVar12 - (long)*pdVar4;
      dVar3 = (double)(lVar17 >> 4);
      fVar18 = SUB84(param_1,0);
      if (puVar12 < (undefined8 *)pdVar4[2]) {
        uVar20 = *in_register_00005008;
        puVar15 = puVar12 + 2;
        puVar12[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar18,
                              (float)in_register_00005008[1] * fVar18);
        *puVar12 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar18,(float)uVar20 * fVar18);
      }
      else {
        uVar7 = (long)dVar3 + 1;
        if (uVar7 >> 0x3c != 0) {
          FUN_10a55e270();
          dVar3 = *pdVar4;
          if (dVar3 != 0.0) {
            pdVar4[1] = dVar3;
            _free();
            *pdVar4 = 0.0;
            pdVar4[1] = 0.0;
            pdVar4[2] = 0.0;
          }
          dVar19 = *pdVar8;
          pdVar4[1] = pdVar8[1];
          *pdVar4 = dVar19;
          pdVar4[2] = pdVar8[2];
          *pdVar8 = 0.0;
          pdVar8[1] = 0.0;
          pdVar8[2] = 0.0;
          return dVar3;
        }
        uVar9 = (long)pdVar4[2] - (long)*pdVar4;
        uVar10 = (long)uVar9 >> 3;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar10 = 0xfffffffffffffff;
        }
        uVar7 = uVar10;
        FUN_10a55e284();
        puVar12 = (undefined8 *)(uVar7 + lVar17);
        uVar20 = *in_register_00005008;
        puVar2 = (undefined8 *)*pdVar4;
        puVar11 = (undefined8 *)pdVar4[1];
        lVar17 = (long)puVar2 - (long)puVar11;
        puVar6 = (undefined8 *)((long)puVar12 + lVar17);
        puVar15 = puVar12 + 2;
        puVar12[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar18,
                              (float)in_register_00005008[1] * fVar18);
        *puVar12 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar18,(float)uVar20 * fVar18);
        puVar12 = puVar2;
        puVar14 = puVar6;
        if (lVar17 != 0) {
          do {
            puVar13 = puVar12 + 2;
            uVar20 = *puVar12;
            puVar14[1] = puVar12[1];
            *puVar14 = uVar20;
            puVar12 = puVar13;
            puVar14 = puVar14 + 2;
          } while (puVar13 != puVar11);
        }
        *pdVar4 = (double)puVar6;
        pdVar4[1] = (double)puVar15;
        pdVar4[2] = (double)(uVar7 + uVar10 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          _free();
        }
      }
      pdVar4[1] = (double)puVar15;
      return dVar3;
    }
    uVar9 = (long)pdVar4[2] - (long)*pdVar4;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    pdVar5 = pdVar4;
    func_0x000109435ef8(pdVar4,uVar10,0);
    pdVar1 = (double *)((long)pdVar5 + lVar17);
    dVar19 = *pdVar8;
    pdVar16 = pdVar1 + 2;
    pdVar1[1] = pdVar8[1] * param_1;
    *pdVar1 = dVar19 * param_1;
    puVar6 = (undefined8 *)*pdVar4;
    puVar2 = (undefined8 *)pdVar4[1];
    lVar17 = (long)puVar6 - (long)puVar2;
    puVar12 = (undefined8 *)((long)pdVar1 + lVar17);
    puVar11 = puVar12;
    if (lVar17 != 0) {
      do {
        puVar14 = puVar6 + 2;
        uVar20 = *puVar6;
        puVar11[1] = puVar6[1];
        *puVar11 = uVar20;
        puVar6 = puVar14;
        puVar11 = puVar11 + 2;
      } while (puVar14 != puVar2);
      puVar6 = (undefined8 *)*pdVar4;
    }
    *pdVar4 = (double)puVar12;
    pdVar4[1] = (double)pdVar16;
    pdVar4[2] = (double)(pdVar5 + uVar10 * 2);
    if (puVar6 != (undefined8 *)0x0) {
      _free();
    }
  }
  pdVar4[1] = (double)pdVar16;
  return dVar3;
}



/* Entry: 10a55e2d8; end: 10a55e3d7;  */

double FUN_10a55e2d8(double param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  double dVar12;
  undefined8 *puVar13;
  double *pdVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 *in_register_00005008;
  undefined8 *puVar10;
  
  pdVar1 = (double *)param_2[1];
  lVar15 = (long)pdVar1 - (long)*param_2;
  dVar12 = (double)(lVar15 >> 4);
  if (pdVar1 < (double *)param_2[2]) {
    dVar17 = *param_3;
    pdVar14 = pdVar1 + 2;
    pdVar1[1] = param_3[1] * param_1;
    *pdVar1 = dVar17 * param_1;
  }
  else {
    uVar5 = (long)dVar12 + 1;
    if (uVar5 >> 0x3c != 0) {
      FUN_10a35e504();
      puVar9 = (undefined8 *)param_2[1];
      lVar15 = (long)puVar9 - (long)*param_2;
      dVar12 = (double)(lVar15 >> 4);
      fVar16 = SUB84(param_1,0);
      if (puVar9 < (undefined8 *)param_2[2]) {
        uVar18 = *in_register_00005008;
        puVar13 = puVar9 + 2;
        puVar9[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar16,
                             (float)in_register_00005008[1] * fVar16);
        *puVar9 = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16,(float)uVar18 * fVar16);
      }
      else {
        uVar5 = (long)dVar12 + 1;
        if (uVar5 >> 0x3c != 0) {
          FUN_10a55e270();
          dVar12 = *param_2;
          if (dVar12 != 0.0) {
            param_2[1] = dVar12;
            _free();
            *param_2 = 0.0;
            param_2[1] = 0.0;
            param_2[2] = 0.0;
          }
          dVar17 = *param_3;
          param_2[1] = param_3[1];
          *param_2 = dVar17;
          param_2[2] = param_3[2];
          *param_3 = 0.0;
          param_3[1] = 0.0;
          param_3[2] = 0.0;
          return dVar12;
        }
        uVar6 = (long)param_2[2] - (long)*param_2;
        uVar7 = (long)uVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar7 = 0xfffffffffffffff;
        }
        uVar5 = uVar7;
        FUN_10a55e284();
        puVar9 = (undefined8 *)(uVar5 + lVar15);
        uVar18 = *in_register_00005008;
        puVar2 = (undefined8 *)*param_2;
        puVar8 = (undefined8 *)param_2[1];
        lVar15 = (long)puVar2 - (long)puVar8;
        puVar4 = (undefined8 *)((long)puVar9 + lVar15);
        puVar13 = puVar9 + 2;
        puVar9[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * fVar16,
                             (float)in_register_00005008[1] * fVar16);
        *puVar9 = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16,(float)uVar18 * fVar16);
        puVar9 = puVar2;
        puVar11 = puVar4;
        if (lVar15 != 0) {
          do {
            puVar10 = puVar9 + 2;
            uVar18 = *puVar9;
            puVar11[1] = puVar9[1];
            *puVar11 = uVar18;
            puVar9 = puVar10;
            puVar11 = puVar11 + 2;
          } while (puVar10 != puVar8);
        }
        *param_2 = (double)puVar4;
        param_2[1] = (double)puVar13;
        param_2[2] = (double)(uVar5 + uVar7 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          _free();
        }
      }
      param_2[1] = (double)puVar13;
      return dVar12;
    }
    uVar6 = (long)param_2[2] - (long)*param_2;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    pdVar3 = param_2;
    func_0x000109435ef8(param_2,uVar7,0);
    pdVar1 = (double *)((long)pdVar3 + lVar15);
    dVar17 = *param_3;
    pdVar14 = pdVar1 + 2;
    pdVar1[1] = param_3[1] * param_1;
    *pdVar1 = dVar17 * param_1;
    puVar4 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    lVar15 = (long)puVar4 - (long)puVar2;
    puVar9 = (undefined8 *)((long)pdVar1 + lVar15);
    puVar8 = puVar9;
    if (lVar15 != 0) {
      do {
        puVar11 = puVar4 + 2;
        uVar18 = *puVar4;
        puVar8[1] = puVar4[1];
        *puVar8 = uVar18;
        puVar4 = puVar11;
        puVar8 = puVar8 + 2;
      } while (puVar11 != puVar2);
      puVar4 = (undefined8 *)*param_2;
    }
    *param_2 = (double)puVar9;
    param_2[1] = (double)pdVar14;
    param_2[2] = (double)(pdVar3 + uVar7 * 2);
    if (puVar4 != (undefined8 *)0x0) {
      _free();
    }
  }
  param_2[1] = (double)pdVar14;
  return dVar12;
}



/* Entry: 10a55e3d8; end: 10a55e4cb;  */

long FUN_10a55e3d8(float param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *in_register_00005008;
  undefined8 *puVar8;
  
  puVar7 = (undefined8 *)param_2[1];
  lVar12 = (long)puVar7 - *param_2;
  lVar10 = lVar12 >> 4;
  if (puVar7 < (undefined8 *)param_2[2]) {
    uVar13 = *in_register_00005008;
    puVar11 = puVar7 + 2;
    puVar7[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * param_1,
                         (float)in_register_00005008[1] * param_1);
    *puVar7 = CONCAT44((float)((ulong)uVar13 >> 0x20) * param_1,(float)uVar13 * param_1);
  }
  else {
    uVar4 = lVar10 + 1;
    if (uVar4 >> 0x3c != 0) {
      FUN_10a55e270();
      lVar10 = *param_2;
      if (lVar10 != 0) {
        param_2[1] = lVar10;
        _free();
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      lVar12 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = lVar12;
      param_2[2] = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      return lVar10;
    }
    uVar5 = param_2[2] - *param_2;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    uVar4 = uVar6;
    FUN_10a55e284();
    puVar7 = (undefined8 *)(uVar4 + lVar12);
    uVar13 = *in_register_00005008;
    puVar2 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)param_2[1];
    lVar12 = (long)puVar2 - (long)puVar3;
    puVar1 = (undefined8 *)((long)puVar7 + lVar12);
    puVar11 = puVar7 + 2;
    puVar7[1] = CONCAT44((float)((ulong)in_register_00005008[1] >> 0x20) * param_1,
                         (float)in_register_00005008[1] * param_1);
    *puVar7 = CONCAT44((float)((ulong)uVar13 >> 0x20) * param_1,(float)uVar13 * param_1);
    puVar7 = puVar2;
    puVar9 = puVar1;
    if (lVar12 != 0) {
      do {
        puVar8 = puVar7 + 2;
        uVar13 = *puVar7;
        puVar9[1] = puVar7[1];
        *puVar9 = uVar13;
        puVar7 = puVar8;
        puVar9 = puVar9 + 2;
      } while (puVar8 != puVar3);
    }
    *param_2 = (long)puVar1;
    param_2[1] = (long)puVar11;
    param_2[2] = uVar4 + uVar6 * 0x10;
    if (puVar2 != (undefined8 *)0x0) {
      _free();
    }
  }
  param_2[1] = (long)puVar11;
  return lVar10;
}



/* Entry: 10a55e4cc; end: 10a55e51b;  */

void FUN_10a55e4cc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a55e51c; end: 10a55e52f;  */

long * FUN_10a55e51c(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  FUN_10a5606ec(plVar1 + 10);
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a55e530; end: 10a55e567;  */

long * FUN_10a55e530(long *param_1)

{
  FUN_10a5606ec(param_1 + 10);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a55e568; end: 10a55e5c3;  */

void FUN_10a55e568(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      __ZdlPv(*puVar3);
      puVar3 = puVar2;
    } while (puVar2 != puVar1);
    puVar3 = (undefined8 *)param_1[3];
  }
  param_1[4] = puVar3;
  if (param_2 < 2) {
    param_2 = 1;
  }
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = 0;
  return;
}



/* Entry: 10a55e5c4; end: 10a55e757;  */

long FUN_10a55e5c4(long param_1,long *param_2,byte param_3)

{
  ulong uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  
  lVar6 = *param_2;
  uVar10 = param_2[1] - lVar6 >> 4;
  if (param_2[1] - lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uVar12 = uVar10 - 1;
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar12;
    }
    pdVar7 = (double *)(lVar6 + 8);
    dVar14 = 0.0;
    uVar1 = 0;
    do {
      uVar9 = uVar1;
      if (uVar10 <= uVar13) goto LAB_10a55e754;
      pdVar2 = (double *)(lVar6 + uVar13 * 0x10);
      dVar14 = dVar14 + (*pdVar7 + pdVar2[1]) * (*pdVar2 - pdVar7[-1]);
      uVar1 = uVar9 + 1;
      pdVar7 = pdVar7 + 2;
      uVar13 = uVar9;
    } while (uVar10 != uVar1);
    if (((param_3 ^ dVar14 <= 0.0) & 1) == 0) {
      lVar8 = uVar10 << 4;
      lVar11 = 0;
      do {
        if ((ulong)(param_2[1] - *param_2 >> 4) <= uVar12) goto LAB_10a55e754;
        lVar4 = *param_2 + lVar8;
        lVar6 = param_1;
        FUN_10a55f218(*(undefined8 *)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -8),param_1,
                      uVar12 + *(long *)(param_1 + 0x18),lVar11);
        uVar12 = uVar12 - 1;
        lVar8 = lVar8 + -0x10;
        lVar11 = lVar6;
      } while (uVar12 != 0xffffffffffffffff);
    }
    else {
      lVar11 = 0;
      uVar13 = 0;
      lVar8 = 0;
      do {
        if ((ulong)(param_2[1] - *param_2 >> 4) <= uVar13) {
LAB_10a55e754:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a55e758);
          (*pcVar5)();
        }
        puVar3 = (undefined8 *)(*param_2 + lVar11);
        lVar6 = param_1;
        FUN_10a55f218(*puVar3,puVar3[1],param_1,uVar13 + *(long *)(param_1 + 0x18),lVar8);
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 0x10;
        lVar8 = lVar6;
      } while (uVar10 != uVar13);
    }
    if (((lVar6 != 0) &&
        (lVar11 = *(long *)(lVar6 + 0x20), *(double *)(lVar6 + 8) == *(double *)(lVar11 + 8))) &&
       (*(double *)(lVar6 + 0x10) == *(double *)(lVar11 + 0x10))) {
      lVar8 = *(long *)(lVar6 + 0x18);
      *(long *)(lVar11 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x20) = lVar11;
      lVar11 = *(long *)(lVar6 + 0x30);
      lVar8 = *(long *)(lVar6 + 0x38);
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x38) = lVar8;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x30) = lVar11;
      }
      lVar6 = *(long *)(lVar6 + 0x20);
    }
  }
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar10;
  return lVar6;
}



/* Entry: 10a55e758; end: 10a55f217;  */

void FUN_10a55e758(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  double *pdVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  double *pdVar17;
  double *pdVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long *plVar21;
  double *pdVar22;
  int iVar23;
  long *plVar24;
  double *pdVar25;
  long *plVar26;
  double *pdVar27;
  int iVar28;
  int iVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  int *piVar33;
  int *piVar34;
  int *piVar35;
  long lVar36;
  int iVar37;
  int *piVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  
  if (param_2 != (long *)0x0) {
    iVar37 = 0;
    plVar7 = param_1;
    plVar32 = param_2;
    do {
      plVar9 = plVar32;
      if ((iVar37 == 0) && (plVar16 = plVar32, (char)param_1[4] == '\x01')) {
        do {
          plVar7 = (long *)(ulong)*(uint *)(plVar16 + 5);
          if (*(uint *)(plVar16 + 5) == 0) {
            plVar7 = param_1;
            FUN_10a56055c(plVar16[1],plVar16[2]);
          }
          *(int *)(plVar16 + 5) = (int)plVar7;
          plVar10 = (long *)plVar16[4];
          plVar16[7] = plVar16[4];
          plVar16[6] = plVar16[3];
          plVar16 = plVar10;
        } while (plVar10 != plVar32);
        *(undefined8 *)(plVar10[6] + 0x38) = 0;
        plVar10[6] = 0;
        plVar16 = (long *)0x1;
LAB_10a55e7f0:
        plVar21 = (long *)0x0;
        plVar12 = (long *)0x0;
        plVar26 = plVar10;
        iVar23 = 0;
LAB_10a55e800:
        iVar28 = iVar23;
        uVar15 = (uint)plVar16;
        plVar30 = plVar26;
        if ((int)uVar15 < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          plVar10 = (long *)0x0;
          do {
            uVar1 = (int)plVar10 + 1;
            plVar10 = (long *)(ulong)uVar1;
            plVar30 = (long *)plVar30[7];
            plVar24 = plVar10;
            if (plVar30 == (long *)0x0) break;
            plVar24 = plVar16;
          } while (uVar15 != uVar1);
        }
        plVar10 = plVar12;
        plVar12 = plVar16;
        do {
          iVar23 = (int)plVar24;
          iVar29 = (int)plVar12;
          if (iVar23 < 1) {
            param_3 = (long *)(ulong)(iVar29 - 1);
            if ((iVar29 < 1) || (plVar30 == (long *)0x0)) goto LAB_10a55e8d8;
            if (iVar23 != 0) goto LAB_10a55e860;
            plVar7 = (long *)plVar30[7];
          }
          else {
LAB_10a55e860:
            if (((iVar29 == 0) || (plVar30 == (long *)0x0)) || ((int)plVar26[5] <= (int)plVar30[5]))
            {
              plVar24 = (long *)(ulong)(iVar23 - 1);
              plVar7 = plVar30;
              plVar30 = plVar26;
              param_3 = plVar12;
              plVar26 = (long *)plVar26[7];
            }
            else {
              plVar7 = (long *)plVar30[7];
              param_3 = (long *)(ulong)(iVar29 - 1);
            }
          }
          plVar12 = plVar30;
          if (plVar21 != (long *)0x0) {
            plVar21[7] = (long)plVar30;
            plVar12 = plVar10;
          }
          plVar30[6] = (long)plVar21;
          param_2 = plVar30;
          plVar10 = plVar12;
          plVar21 = plVar30;
          plVar30 = plVar7;
          plVar12 = param_3;
        } while( true );
      }
LAB_10a55e8ec:
      do {
        plVar16 = (long *)plVar32[3];
        plVar10 = (long *)plVar32[4];
        if (plVar16 == plVar10) {
          return;
        }
        pdVar11 = (double *)(plVar32 + 2);
        dVar42 = *pdVar11;
        pdVar17 = (double *)(plVar16 + 2);
        dVar43 = *pdVar17;
        pdVar18 = (double *)(plVar10 + 1);
        dVar45 = *pdVar18;
        pdVar22 = (double *)(plVar32 + 1);
        dVar46 = *pdVar22;
        dVar40 = dVar45 - dVar46;
        pdVar27 = (double *)(plVar16 + 1);
        dVar47 = *pdVar27;
        pdVar25 = (double *)(plVar10 + 2);
        dVar44 = *pdVar25;
        dVar39 = -((dVar46 - dVar47) * (dVar44 - dVar42)) + dVar40 * (dVar42 - dVar43);
        if ((char)param_1[4] == '\x01') {
          if (dVar39 < 0.0) {
            pdVar2 = pdVar18;
            dVar39 = dVar45;
            if (dVar46 <= dVar45) {
              pdVar2 = pdVar22;
              dVar39 = dVar46;
            }
            if (dVar47 <= dVar39) {
              pdVar2 = pdVar27;
            }
            pdVar3 = pdVar25;
            dVar39 = dVar44;
            if (dVar42 <= dVar44) {
              pdVar3 = pdVar11;
              dVar39 = dVar42;
            }
            if (dVar43 <= dVar39) {
              pdVar3 = pdVar17;
            }
            dVar39 = dVar45;
            if (dVar45 <= dVar46) {
              pdVar18 = pdVar22;
              dVar39 = dVar46;
            }
            if (dVar39 <= dVar47) {
              pdVar18 = pdVar27;
            }
            dVar39 = *pdVar18;
            dVar40 = dVar44;
            if (dVar44 <= dVar42) {
              pdVar25 = pdVar11;
              dVar40 = dVar42;
            }
            if (dVar40 <= dVar43) {
              pdVar25 = pdVar17;
            }
            dVar40 = *pdVar25;
            plVar21 = param_1;
            FUN_10a56055c(*pdVar2,*pdVar3);
            plVar7 = param_1;
            FUN_10a56055c();
            for (plVar12 = (long *)plVar32[7];
                (plVar12 != (long *)0x0 && ((int)plVar12[5] <= (int)plVar7));
                plVar12 = (long *)plVar12[7]) {
              if ((plVar12 != plVar16) && (plVar12 != plVar10)) {
                dVar39 = (double)plVar12[1];
                dVar40 = (double)plVar12[2];
                if (0.0 <= -((dVar47 - dVar39) * (dVar44 - dVar40)) +
                           (dVar43 - dVar40) * (dVar45 - dVar39)) {
                  if ((0.0 <= -((dVar46 - dVar39) * (dVar43 - dVar40)) +
                              (dVar42 - dVar40) * (dVar47 - dVar39)) &&
                     (0.0 <= -((dVar45 - dVar39) * (dVar42 - dVar40)) +
                             (dVar44 - dVar40) * (dVar46 - dVar39))) {
                    dVar41 = dVar40 - *(double *)(plVar12[3] + 0x10);
                    dVar40 = *(double *)(plVar12[4] + 0x10) - dVar40;
                    dVar39 = -((dVar39 - *(double *)(plVar12[3] + 8)) * dVar40) +
                             (*(double *)(plVar12[4] + 8) - dVar39) * dVar41;
                    if (0.0 <= dVar39) goto LAB_10a55ebb4;
                  }
                }
              }
            }
            for (plVar12 = (long *)plVar32[6];
                (plVar12 != (long *)0x0 && ((int)plVar21 <= (int)plVar12[5]));
                plVar12 = (long *)plVar12[6]) {
              if ((plVar12 != plVar16) && (plVar12 != plVar10)) {
                dVar39 = (double)plVar12[1];
                dVar40 = (double)plVar12[2];
                if (0.0 <= -((dVar47 - dVar39) * (dVar44 - dVar40)) +
                           (dVar43 - dVar40) * (dVar45 - dVar39)) {
                  if ((0.0 <= -((dVar46 - dVar39) * (dVar43 - dVar40)) +
                              (dVar42 - dVar40) * (dVar47 - dVar39)) &&
                     (0.0 <= -((dVar45 - dVar39) * (dVar42 - dVar40)) +
                             (dVar44 - dVar40) * (dVar46 - dVar39))) {
                    dVar41 = dVar40 - *(double *)(plVar12[3] + 0x10);
                    dVar40 = *(double *)(plVar12[4] + 0x10) - dVar40;
                    dVar39 = -((dVar39 - *(double *)(plVar12[3] + 8)) * dVar40) +
                             (*(double *)(plVar12[4] + 8) - dVar39) * dVar41;
                    if (0.0 <= dVar39) goto LAB_10a55ebb4;
                  }
                }
              }
            }
            goto LAB_10a55ebc0;
          }
        }
        else if (dVar39 < 0.0) {
          for (plVar12 = (long *)plVar10[4]; plVar12 != plVar16; plVar12 = (long *)plVar12[4]) {
            dVar39 = (double)plVar12[1];
            dVar40 = (double)plVar12[2];
            if (0.0 <= -((dVar47 - dVar39) * (dVar44 - dVar40)) +
                       (dVar43 - dVar40) * (dVar45 - dVar39)) {
              if ((0.0 <= -((dVar46 - dVar39) * (dVar43 - dVar40)) +
                          (dVar42 - dVar40) * (dVar47 - dVar39)) &&
                 (0.0 <= -((dVar45 - dVar39) * (dVar42 - dVar40)) +
                         (dVar44 - dVar40) * (dVar46 - dVar39))) {
                dVar41 = dVar40 - *(double *)(plVar12[3] + 0x10);
                dVar40 = *(double *)(plVar12[4] + 0x10) - dVar40;
                dVar39 = -((dVar39 - *(double *)(plVar12[3] + 8)) * dVar40) +
                         (*(double *)(plVar12[4] + 8) - dVar39) * dVar41;
                if (0.0 <= dVar39) goto LAB_10a55ebb4;
              }
            }
          }
LAB_10a55ebc0:
          piVar35 = (int *)param_1[1];
          piVar38 = (int *)param_1[2];
          if (piVar35 < piVar38) {
            piVar33 = piVar35 + 1;
            *piVar35 = (int)*plVar16;
          }
          else {
            lVar31 = (long)piVar35 - *param_1;
            uVar14 = (lVar31 >> 2) + 1;
            if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
            uVar13 = (long)piVar38 - *param_1;
            uVar19 = (long)uVar13 >> 1;
            if (uVar19 <= uVar14) {
              uVar19 = uVar14;
            }
            if (0x7ffffffffffffffb < uVar13) {
              uVar19 = 0x3fffffffffffffff;
            }
            plVar7 = param_1;
            FUN_109ffdfc0();
            param_2 = (long *)*param_1;
            param_3 = (long *)(param_1[1] - (long)param_2);
            piVar35 = (int *)((long)plVar7 + lVar31);
            piVar38 = (int *)((long)plVar7 + uVar19 * 4);
            lVar31 = (long)piVar35 - (long)param_3;
            piVar33 = piVar35 + 1;
            *piVar35 = (int)*plVar16;
            _memcpy(lVar31);
            plVar7 = (long *)*param_1;
            *param_1 = lVar31;
            param_1[1] = (long)piVar33;
            param_1[2] = (long)piVar38;
            if (plVar7 != (long *)0x0) {
              __ZdlPv();
              piVar38 = (int *)param_1[2];
            }
          }
          param_1[1] = (long)piVar33;
          if (piVar33 < piVar38) {
            piVar34 = piVar33 + 1;
            *piVar33 = (int)*plVar32;
          }
          else {
            lVar31 = (long)piVar33 - *param_1;
            uVar14 = (lVar31 >> 2) + 1;
            if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
            uVar13 = (long)piVar38 - *param_1;
            uVar19 = (long)uVar13 >> 1;
            if (uVar19 <= uVar14) {
              uVar19 = uVar14;
            }
            if (0x7ffffffffffffffb < uVar13) {
              uVar19 = 0x3fffffffffffffff;
            }
            plVar7 = param_1;
            FUN_109ffdfc0();
            param_2 = (long *)*param_1;
            param_3 = (long *)(param_1[1] - (long)param_2);
            piVar35 = (int *)((long)plVar7 + lVar31);
            piVar38 = (int *)((long)plVar7 + uVar19 * 4);
            lVar31 = (long)piVar35 - (long)param_3;
            piVar34 = piVar35 + 1;
            *piVar35 = (int)*plVar32;
            _memcpy(lVar31);
            plVar7 = (long *)*param_1;
            *param_1 = lVar31;
            param_1[1] = (long)piVar34;
            param_1[2] = (long)piVar38;
            if (plVar7 != (long *)0x0) {
              __ZdlPv();
              piVar38 = (int *)param_1[2];
            }
          }
          param_1[1] = (long)piVar34;
          if (piVar34 < piVar38) {
            piVar35 = piVar34 + 1;
            *piVar34 = (int)*plVar10;
          }
          else {
            lVar31 = (long)piVar34 - *param_1;
            uVar14 = (lVar31 >> 2) + 1;
            if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
            uVar13 = (long)piVar38 - *param_1;
            uVar19 = (long)uVar13 >> 1;
            if (uVar19 <= uVar14) {
              uVar19 = uVar14;
            }
            if (0x7ffffffffffffffb < uVar13) {
              uVar19 = 0x3fffffffffffffff;
            }
            plVar9 = param_1;
            FUN_109ffdfc0();
            param_2 = (long *)*param_1;
            param_3 = (long *)(param_1[1] - (long)param_2);
            piVar38 = (int *)((long)plVar9 + lVar31);
            lVar31 = (long)piVar38 - (long)param_3;
            piVar35 = piVar38 + 1;
            *piVar38 = (int)*plVar10;
            _memcpy(lVar31);
            plVar7 = (long *)*param_1;
            *param_1 = lVar31;
            param_1[1] = (long)piVar35;
            param_1[2] = (long)((long)plVar9 + uVar19 * 4);
            if (plVar7 != (long *)0x0) {
              __ZdlPv();
            }
          }
          param_1[1] = (long)piVar35;
          lVar31 = plVar32[3];
          lVar36 = plVar32[4];
          *(long *)(lVar36 + 0x18) = lVar31;
          *(long *)(lVar31 + 0x20) = lVar36;
          lVar31 = plVar32[6];
          lVar36 = plVar32[7];
          if (lVar31 != 0) {
            *(long *)(lVar31 + 0x38) = lVar36;
          }
          if (lVar36 != 0) {
            *(long *)(lVar36 + 0x30) = lVar31;
          }
          plVar32 = (long *)plVar10[4];
          plVar9 = plVar32;
          goto LAB_10a55e8ec;
        }
LAB_10a55ebb4:
        plVar32 = plVar10;
      } while (plVar10 != plVar9);
      if (iVar37 == 0) {
        param_2 = (long *)0x0;
        FUN_10a55f3d4();
        iVar37 = 1;
        plVar32 = plVar10;
        plVar7 = plVar10;
      }
      else {
        if (iVar37 != 1) {
          param_2 = plVar10;
          plVar32 = (long *)plVar10[4];
          do {
            plVar7 = (long *)plVar32[4];
            plVar16 = (long *)param_2[3];
            if (plVar7 != plVar16) {
              iVar37 = (int)*param_2;
              param_3 = plVar7;
              do {
                iVar23 = (int)*param_3;
                if (((iVar37 != iVar23) && ((int)*plVar32 != iVar23)) &&
                   (plVar10 = param_2, (int)*plVar16 != iVar23)) {
                  do {
                    plVar12 = (long *)plVar10[4];
                    if ((((int)*plVar10 != iVar37) &&
                        (((int)*plVar12 != iVar37 && (int)*plVar10 != iVar23) &&
                         (int)*plVar12 != iVar23)) &&
                       (func_0x00010a5605f0(plVar10,plVar12,param_2,param_3),
                       ((ulong)plVar10 & 1) != 0)) goto LAB_10a55f154;
                    plVar10 = plVar12;
                  } while (plVar12 != param_2);
                  dVar40 = (double)param_3[1];
                  dVar39 = (double)param_3[2];
                  plVar10 = param_2;
                  FUN_10a560358(dVar40,dVar39);
                  if ((int)plVar10 != 0) {
                    dVar43 = (double)param_2[1];
                    dVar42 = (double)param_2[2];
                    plVar10 = param_3;
                    FUN_10a560358(dVar43,dVar42);
                    if ((int)plVar10 != 0) {
                      bVar6 = false;
                      dVar39 = (dVar39 + dVar42) * 0.5;
                      plVar10 = param_2;
                      do {
                        plVar12 = (long *)plVar10[4];
                        dVar44 = (double)plVar12[2];
                        if ((dVar44 != dVar42 && dVar39 < dVar42 != dVar39 < dVar44) &&
                           ((dVar40 + dVar43) * 0.5 <
                            (double)plVar10[1] +
                            ((dVar39 - dVar42) * ((double)plVar12[1] - (double)plVar10[1])) /
                            (dVar44 - dVar42))) {
                          bVar6 = (bool)(bVar6 ^ 1);
                        }
                        plVar10 = plVar12;
                        dVar42 = dVar44;
                      } while (plVar12 != param_2);
                      if (bVar6) {
                        plVar32 = param_1;
                        FUN_10a5602e0(param_1,param_2);
                        FUN_10a55f3d4(param_2,param_2[4]);
                        FUN_10a55f3d4(plVar32,plVar32[4]);
                        plVar7 = param_1;
                        FUN_10a55e758();
                        iVar37 = 0;
                        goto joined_r0x00010a55f1e4;
                      }
                    }
                  }
                }
LAB_10a55f154:
                param_3 = (long *)param_3[4];
              } while (param_3 != plVar16);
            }
            bVar6 = plVar32 == plVar9;
            param_2 = plVar32;
            plVar32 = plVar7;
            if (bVar6) {
              return;
            }
          } while( true );
        }
        do {
          plVar32 = (long *)plVar10[3];
          param_3 = (long *)plVar10[4];
          plVar16 = (long *)param_3[4];
          dVar39 = (double)plVar32[1];
          dVar40 = (double)plVar16[1];
          if ((((dVar39 != dVar40) || ((double)plVar32[2] != (double)plVar16[2])) &&
              (plVar7 = plVar32, param_2 = plVar10, func_0x00010a5605f0(), (int)plVar7 != 0)) &&
             (plVar7 = plVar32, FUN_10a560358(dVar40,plVar16[2]), (int)plVar7 != 0)) {
            dVar40 = (double)plVar32[2];
            plVar7 = plVar16;
            FUN_10a560358();
            if ((int)plVar7 != 0) {
              piVar35 = (int *)param_1[1];
              piVar38 = (int *)param_1[2];
              if (piVar35 < piVar38) {
                piVar33 = piVar35 + 1;
                *piVar35 = (int)*plVar32;
              }
              else {
                lVar31 = (long)piVar35 - *param_1;
                uVar14 = (lVar31 >> 2) + 1;
                if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
                uVar13 = (long)piVar38 - *param_1;
                uVar19 = (long)uVar13 >> 1;
                if (uVar19 <= uVar14) {
                  uVar19 = uVar14;
                }
                if (0x7ffffffffffffffb < uVar13) {
                  uVar19 = 0x3fffffffffffffff;
                }
                plVar7 = param_1;
                FUN_109ffdfc0();
                param_2 = (long *)*param_1;
                param_3 = (long *)(param_1[1] - (long)param_2);
                piVar35 = (int *)((long)plVar7 + lVar31);
                piVar38 = (int *)((long)plVar7 + uVar19 * 4);
                lVar31 = (long)piVar35 - (long)param_3;
                piVar33 = piVar35 + 1;
                *piVar35 = (int)*plVar32;
                _memcpy(lVar31);
                plVar7 = (long *)*param_1;
                *param_1 = lVar31;
                param_1[1] = (long)piVar33;
                param_1[2] = (long)piVar38;
                if (plVar7 != (long *)0x0) {
                  __ZdlPv();
                  piVar38 = (int *)param_1[2];
                }
              }
              param_1[1] = (long)piVar33;
              if (piVar33 < piVar38) {
                piVar34 = piVar33 + 1;
                *piVar33 = (int)*plVar10;
              }
              else {
                lVar31 = (long)piVar33 - *param_1;
                uVar14 = (lVar31 >> 2) + 1;
                if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
                uVar13 = (long)piVar38 - *param_1;
                uVar19 = (long)uVar13 >> 1;
                if (uVar19 <= uVar14) {
                  uVar19 = uVar14;
                }
                if (0x7ffffffffffffffb < uVar13) {
                  uVar19 = 0x3fffffffffffffff;
                }
                plVar32 = param_1;
                FUN_109ffdfc0();
                param_2 = (long *)*param_1;
                param_3 = (long *)(param_1[1] - (long)param_2);
                piVar35 = (int *)((long)plVar32 + lVar31);
                piVar38 = (int *)((long)plVar32 + uVar19 * 4);
                lVar31 = (long)piVar35 - (long)param_3;
                piVar34 = piVar35 + 1;
                *piVar35 = (int)*plVar10;
                _memcpy(lVar31);
                plVar7 = (long *)*param_1;
                *param_1 = lVar31;
                param_1[1] = (long)piVar34;
                param_1[2] = (long)piVar38;
                if (plVar7 != (long *)0x0) {
                  __ZdlPv();
                  piVar38 = (int *)param_1[2];
                }
              }
              param_1[1] = (long)piVar34;
              if (piVar34 < piVar38) {
                piVar35 = piVar34 + 1;
                *piVar34 = (int)*plVar16;
              }
              else {
                lVar31 = (long)piVar34 - *param_1;
                uVar14 = (lVar31 >> 2) + 1;
                if (uVar14 >> 0x3e != 0) goto LAB_10a55f214;
                uVar13 = (long)piVar38 - *param_1;
                uVar19 = (long)uVar13 >> 1;
                if (uVar19 <= uVar14) {
                  uVar19 = uVar14;
                }
                if (0x7ffffffffffffffb < uVar13) {
                  uVar19 = 0x3fffffffffffffff;
                }
                plVar32 = param_1;
                FUN_109ffdfc0();
                param_2 = (long *)*param_1;
                param_3 = (long *)(param_1[1] - (long)param_2);
                piVar38 = (int *)((long)plVar32 + lVar31);
                lVar31 = (long)piVar38 - (long)param_3;
                piVar35 = piVar38 + 1;
                *piVar38 = (int)*plVar16;
                _memcpy(lVar31);
                plVar7 = (long *)*param_1;
                *param_1 = lVar31;
                param_1[1] = (long)piVar35;
                param_1[2] = (long)((long)plVar32 + uVar19 * 4);
                if (plVar7 != (long *)0x0) {
                  __ZdlPv();
                }
              }
              param_1[1] = (long)piVar35;
              lVar31 = plVar10[3];
              lVar4 = plVar10[4];
              *(long *)(lVar4 + 0x18) = lVar31;
              *(long *)(lVar31 + 0x20) = lVar4;
              lVar36 = plVar10[6];
              lVar5 = plVar10[7];
              if (lVar36 != 0) {
                *(long *)(lVar36 + 0x38) = lVar5;
              }
              if (lVar5 != 0) {
                *(long *)(lVar5 + 0x30) = lVar36;
              }
              lVar36 = *(long *)(lVar4 + 0x20);
              *(long *)(lVar36 + 0x18) = lVar31;
              *(long *)(lVar31 + 0x20) = lVar36;
              lVar31 = *(long *)(lVar4 + 0x30);
              lVar36 = *(long *)(lVar4 + 0x38);
              if (lVar31 != 0) {
                *(long *)(lVar31 + 0x38) = lVar36;
              }
              plVar9 = plVar16;
              plVar10 = plVar16;
              if (lVar36 != 0) {
                *(long *)(lVar36 + 0x30) = lVar31;
              }
            }
          }
          plVar10 = (long *)plVar10[4];
        } while (plVar10 != plVar9);
        iVar37 = 2;
        plVar32 = plVar10;
      }
joined_r0x00010a55f1e4:
    } while (plVar32 != (long *)0x0);
  }
  return;
LAB_10a55e8d8:
  plVar12 = plVar10;
  plVar26 = plVar30;
  iVar23 = iVar28 + 1;
  if (plVar30 == (long *)0x0) goto code_r0x00010a55e8dc;
  goto LAB_10a55e800;
code_r0x00010a55e8dc:
  plVar21[7] = 0;
  plVar16 = (long *)(ulong)(uVar15 << 1);
  if (iVar28 == 0) goto LAB_10a55e8ec;
  goto LAB_10a55e7f0;
LAB_10a55f214:
  func_0x000109ffdfac();
  uVar14 = plVar7[0xb];
  uVar19 = plVar7[0xc];
  if (uVar19 <= uVar14) {
    if (0x38e38e38e38e38e < uVar19) {
      func_0x000109ffded8();
      plVar32 = param_2;
LAB_10a55f388:
      FUN_10a55f38c();
      plVar7 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)plVar7 >> 0x3d == 0) {
        __Znwm((long)plVar7 << 3);
        return;
      }
      func_0x000109ffded8();
      plVar9 = plVar7;
      if (plVar32 != (long *)0x0) {
        plVar9 = plVar32;
      }
LAB_10a55f3e0:
      do {
        plVar32 = (long *)plVar7[4];
        if ((*(byte *)(plVar7 + 8) & 1) == 0) {
          dVar39 = (double)plVar7[1];
          dVar40 = (double)plVar7[2];
          dVar42 = (double)plVar32[2];
          lVar31 = plVar7[3];
          bVar6 = false;
          if ((dVar39 == (double)plVar32[1]) && (bVar6 = false, !NAN(dVar40) && !NAN(dVar42))) {
            bVar6 = dVar40 == dVar42;
          }
          if ((bVar6) ||
             (-((dVar39 - *(double *)(lVar31 + 8)) * (dVar42 - dVar40)) +
              ((double)plVar32[1] - dVar39) * (dVar40 - *(double *)(lVar31 + 0x10)) == 0.0)) {
            plVar32[3] = lVar31;
            *(long **)(lVar31 + 0x20) = plVar32;
            lVar31 = plVar7[6];
            lVar36 = plVar7[7];
            if (lVar31 != 0) {
              *(long *)(lVar31 + 0x38) = lVar36;
            }
            if (lVar36 != 0) {
              *(long *)(lVar36 + 0x30) = lVar31;
            }
            plVar9 = (long *)plVar7[3];
            plVar7 = plVar9;
            if (plVar9 == (long *)plVar9[4]) {
              return;
            }
            goto LAB_10a55f3e0;
          }
        }
        plVar7 = plVar32;
        if (plVar32 == plVar9) {
          return;
        }
      } while( true );
    }
    lVar31 = uVar19 * 0x48;
    plVar32 = param_2;
    __Znwm();
    plVar7[10] = lVar31;
    plVar9 = (long *)plVar7[0xe];
    if (plVar9 < (long *)plVar7[0xf]) {
      plVar16 = plVar9 + 1;
      *plVar9 = lVar31;
    }
    else {
      lVar31 = (long)plVar9 - plVar7[0xd];
      uVar14 = (lVar31 >> 3) + 1;
      if (uVar14 >> 0x3d != 0) goto LAB_10a55f388;
      uVar13 = plVar7[0xf] - plVar7[0xd];
      uVar19 = (long)uVar13 >> 2;
      if (uVar19 <= uVar14) {
        uVar19 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar19 = 0x1fffffffffffffff;
      }
      FUN_10a55f3a0();
      plVar9 = (long *)(uVar19 + lVar31);
      plVar16 = plVar9 + 1;
      *plVar9 = plVar7[10];
      lVar36 = (long)plVar9 - (plVar7[0xe] - plVar7[0xd]);
      _memcpy(lVar36);
      lVar31 = plVar7[0xd];
      plVar7[0xd] = lVar36;
      plVar7[0xe] = (long)plVar16;
      plVar7[0xf] = uVar19 + (long)plVar32 * 8;
      if (lVar31 != 0) {
        __ZdlPv();
      }
    }
    uVar14 = 0;
    plVar7[0xe] = (long)plVar16;
  }
  plVar7[0xb] = uVar14 + 1;
  puVar8 = (undefined4 *)(plVar7[10] + uVar14 * 0x48);
  *puVar8 = (int)param_2;
  *(double *)(puVar8 + 2) = dVar39;
  *(double *)(puVar8 + 4) = dVar40;
  *(undefined8 *)(puVar8 + 6) = 0;
  puVar8[10] = 0;
  plVar32 = (long *)(puVar8 + 8);
  *plVar32 = 0;
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined8 *)(puVar8 + 0xe) = 0;
  *(undefined1 *)(puVar8 + 0x10) = 0;
  puVar20 = puVar8;
  if (param_3 != (long *)0x0) {
    puVar20 = (undefined4 *)param_3[4];
    *plVar32 = (long)puVar20;
    *(long **)(puVar8 + 6) = param_3;
    plVar32 = param_3 + 4;
  }
  *(undefined4 **)(puVar20 + 6) = puVar8;
  *plVar32 = (long)puVar8;
  return;
}



/* Entry: 10a55f218; end: 10a55f38b;  */

void FUN_10a55f218(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar8 = *(ulong *)(param_3 + 0x58);
  uVar10 = *(ulong *)(param_3 + 0x60);
  if (uVar10 <= uVar8) {
    if (0x38e38e38e38e38e < uVar10) {
      func_0x000109ffded8();
      puVar11 = param_4;
LAB_10a55f388:
      FUN_10a55f38c();
      puVar5 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)puVar5 >> 0x3d == 0) {
        __Znwm((long)puVar5 << 3);
        return;
      }
      func_0x000109ffded8();
      puVar6 = puVar5;
      if (puVar11 != (undefined *)0x0) {
        puVar6 = puVar11;
      }
      do {
        while (puVar11 = *(undefined **)(puVar5 + 0x20), (puVar5[0x40] & 1) != 0) {
LAB_10a55f470:
          puVar5 = puVar11;
          if (puVar11 == puVar6) {
            return;
          }
        }
        dVar15 = *(double *)(puVar5 + 8);
        dVar16 = *(double *)(puVar5 + 0x10);
        dVar17 = *(double *)(puVar11 + 0x10);
        lVar3 = *(long *)(puVar5 + 0x18);
        bVar2 = false;
        if ((dVar15 == *(double *)(puVar11 + 8)) && (bVar2 = false, !NAN(dVar16) && !NAN(dVar17))) {
          bVar2 = dVar16 == dVar17;
        }
        if ((!bVar2) &&
           (-((dVar15 - *(double *)(lVar3 + 8)) * (dVar17 - dVar16)) +
            (*(double *)(puVar11 + 8) - dVar15) * (dVar16 - *(double *)(lVar3 + 0x10)) != 0.0))
        goto LAB_10a55f470;
        *(long *)(puVar11 + 0x18) = lVar3;
        *(undefined **)(lVar3 + 0x20) = puVar11;
        lVar3 = *(long *)(puVar5 + 0x30);
        lVar13 = *(long *)(puVar5 + 0x38);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x38) = lVar13;
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x30) = lVar3;
        }
        puVar6 = *(undefined **)(puVar5 + 0x18);
        puVar5 = puVar6;
        if (puVar6 == *(undefined **)(puVar6 + 0x20)) {
          return;
        }
      } while( true );
    }
    lVar3 = uVar10 * 0x48;
    puVar11 = param_4;
    __Znwm();
    *(long *)(param_3 + 0x50) = lVar3;
    plVar9 = *(long **)(param_3 + 0x70);
    if (plVar9 < *(long **)(param_3 + 0x78)) {
      plVar14 = plVar9 + 1;
      *plVar9 = lVar3;
    }
    else {
      lVar3 = (long)plVar9 - *(long *)(param_3 + 0x68);
      uVar8 = (lVar3 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) goto LAB_10a55f388;
      uVar7 = (long)*(long **)(param_3 + 0x78) - *(long *)(param_3 + 0x68);
      uVar10 = (long)uVar7 >> 2;
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar10 = 0x1fffffffffffffff;
      }
      FUN_10a55f3a0();
      puVar1 = (undefined8 *)(uVar10 + lVar3);
      plVar14 = puVar1 + 1;
      *puVar1 = *(undefined8 *)(param_3 + 0x50);
      lVar13 = (long)puVar1 - (*(long *)(param_3 + 0x70) - *(long *)(param_3 + 0x68));
      _memcpy(lVar13);
      lVar3 = *(long *)(param_3 + 0x68);
      *(long *)(param_3 + 0x68) = lVar13;
      *(long **)(param_3 + 0x70) = plVar14;
      *(ulong *)(param_3 + 0x78) = uVar10 + (long)puVar11 * 8;
      if (lVar3 != 0) {
        __ZdlPv();
      }
    }
    uVar8 = 0;
    *(long **)(param_3 + 0x70) = plVar14;
  }
  *(ulong *)(param_3 + 0x58) = uVar8 + 1;
  puVar4 = (undefined4 *)(*(long *)(param_3 + 0x50) + uVar8 * 0x48);
  *puVar4 = (int)param_4;
  *(undefined8 *)(puVar4 + 2) = param_1;
  *(undefined8 *)(puVar4 + 4) = param_2;
  *(long *)(puVar4 + 6) = 0;
  puVar4[10] = 0;
  plVar9 = (long *)(puVar4 + 8);
  *plVar9 = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  puVar12 = puVar4;
  if (param_5 != 0) {
    puVar12 = *(undefined4 **)(param_5 + 0x20);
    *plVar9 = (long)puVar12;
    *(long *)(puVar4 + 6) = param_5;
    plVar9 = (long *)(param_5 + 0x20);
  }
  *(undefined4 **)(puVar12 + 6) = puVar4;
  *plVar9 = (long)puVar4;
  return;
}



/* Entry: 10a55f38c; end: 10a55f39f;  */

void FUN_10a55f38c(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar3 >> 0x3d == 0) {
    __Znwm((long)puVar3 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar4 = puVar3;
  if (param_2 != (undefined *)0x0) {
    puVar4 = param_2;
  }
  do {
    while (puVar5 = *(undefined **)(puVar3 + 0x20), (puVar3[0x40] & 1) != 0) {
LAB_10a55f470:
      puVar3 = puVar5;
      if (puVar5 == puVar4) {
        return;
      }
    }
    dVar7 = *(double *)(puVar3 + 8);
    dVar8 = *(double *)(puVar3 + 0x10);
    dVar9 = *(double *)(puVar5 + 0x10);
    lVar6 = *(long *)(puVar3 + 0x18);
    bVar2 = false;
    if ((dVar7 == *(double *)(puVar5 + 8)) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar9))) {
      bVar2 = dVar8 == dVar9;
    }
    if ((!bVar2) &&
       (-((dVar7 - *(double *)(lVar6 + 8)) * (dVar9 - dVar8)) +
        (*(double *)(puVar5 + 8) - dVar7) * (dVar8 - *(double *)(lVar6 + 0x10)) != 0.0))
    goto LAB_10a55f470;
    *(long *)(puVar5 + 0x18) = lVar6;
    *(undefined **)(lVar6 + 0x20) = puVar5;
    lVar6 = *(long *)(puVar3 + 0x30);
    lVar1 = *(long *)(puVar3 + 0x38);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x38) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x30) = lVar6;
    }
    puVar4 = *(undefined **)(puVar3 + 0x18);
    puVar3 = puVar4;
    if (puVar4 == *(undefined **)(puVar4 + 0x20)) {
      return;
    }
  } while( true );
}



/* Entry: 10a55f3a0; end: 10a55f3d3;  */

void FUN_10a55f3a0(ulong param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  uVar3 = param_1;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  do {
    while (uVar4 = *(ulong *)(param_1 + 0x20), (*(byte *)(param_1 + 0x40) & 1) != 0) {
LAB_10a55f470:
      param_1 = uVar4;
      if (uVar4 == uVar3) {
        return;
      }
    }
    dVar6 = *(double *)(param_1 + 8);
    dVar7 = *(double *)(param_1 + 0x10);
    dVar8 = *(double *)(uVar4 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
    bVar2 = false;
    if ((dVar6 == *(double *)(uVar4 + 8)) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar8))) {
      bVar2 = dVar7 == dVar8;
    }
    if ((!bVar2) &&
       (-((dVar6 - *(double *)(lVar5 + 8)) * (dVar8 - dVar7)) +
        (*(double *)(uVar4 + 8) - dVar6) * (dVar7 - *(double *)(lVar5 + 0x10)) != 0.0))
    goto LAB_10a55f470;
    *(long *)(uVar4 + 0x18) = lVar5;
    *(ulong *)(lVar5 + 0x20) = uVar4;
    lVar5 = *(long *)(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x38) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x30) = lVar5;
    }
    uVar3 = *(ulong *)(param_1 + 0x18);
    param_1 = uVar3;
    if (uVar3 == *(ulong *)(uVar3 + 0x20)) {
      return;
    }
  } while( true );
}



/* Entry: 10a55f3d4; end: 10a55f47b;  */

void FUN_10a55f3d4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = param_1;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  do {
    while (lVar3 = *(long *)(param_1 + 0x20), (*(byte *)(param_1 + 0x40) & 1) != 0) {
LAB_10a55f470:
      param_1 = lVar3;
      if (lVar3 == lVar2) {
        return;
      }
    }
    dVar5 = *(double *)(param_1 + 8);
    dVar6 = *(double *)(param_1 + 0x10);
    dVar7 = *(double *)(lVar3 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
    bVar1 = false;
    if ((dVar5 == *(double *)(lVar3 + 8)) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar7))) {
      bVar1 = dVar6 == dVar7;
    }
    if ((!bVar1) &&
       (-((dVar5 - *(double *)(lVar4 + 8)) * (dVar7 - dVar6)) +
        (*(double *)(lVar3 + 8) - dVar5) * (dVar6 - *(double *)(lVar4 + 0x10)) != 0.0))
    goto LAB_10a55f470;
    *(long *)(lVar3 + 0x18) = lVar4;
    *(long *)(lVar4 + 0x20) = lVar3;
    lVar2 = *(long *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x38) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x30) = lVar2;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    param_1 = lVar2;
    if (lVar2 == *(long *)(lVar2 + 0x20)) {
      return;
    }
  } while( true );
}



/* Entry: 10a55f47c; end: 10a55fe83;  */

void FUN_10a55f47c(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
LAB_10a55f4a8:
  do {
    plVar18 = param_1;
    uVar7 = (long)param_2 - (long)plVar18 >> 3;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        lVar9 = *plVar18;
        if (*(double *)(param_2[-1] + 8) < *(double *)(lVar9 + 8)) {
          *plVar18 = param_2[-1];
          param_2[-1] = lVar9;
          return;
        }
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        lVar9 = *plVar18;
        lVar8 = plVar18[1];
        dVar20 = *(double *)(lVar8 + 8);
        dVar19 = *(double *)(lVar9 + 8);
        lVar13 = param_2[-1];
        if (dVar20 < dVar19) {
          if (dVar20 <= *(double *)(lVar13 + 8)) {
            *plVar18 = lVar8;
            plVar18[1] = lVar9;
            if (dVar19 <= *(double *)(param_2[-1] + 8)) {
              return;
            }
            plVar18[1] = param_2[-1];
          }
          else {
            *plVar18 = lVar13;
          }
          param_2[-1] = lVar9;
          return;
        }
        if (*(double *)(lVar13 + 8) < dVar20) {
          plVar18[1] = lVar13;
          param_2[-1] = lVar8;
          lVar9 = *plVar18;
          if (*(double *)(plVar18[1] + 8) < *(double *)(lVar9 + 8)) {
            *plVar18 = plVar18[1];
            plVar18[1] = lVar9;
            return;
          }
          return;
        }
        return;
      }
      if (uVar7 == 4) {
        plVar5 = plVar18 + 1;
        lVar9 = *plVar5;
        plVar11 = plVar18 + 2;
        lVar8 = *plVar11;
        lVar13 = *plVar18;
        dVar21 = *(double *)(lVar9 + 8);
        dVar19 = *(double *)(lVar13 + 8);
        dVar20 = *(double *)(lVar8 + 8);
        plVar4 = plVar18;
        if (dVar19 <= dVar21) {
          lVar14 = lVar8;
          if (dVar21 <= dVar20) goto LAB_10a55fe00;
          *plVar5 = lVar8;
          *plVar11 = lVar9;
          plVar17 = plVar5;
          lVar6 = lVar9;
joined_r0x00010a55fd7c:
          lVar14 = lVar9;
          if (dVar19 <= dVar20) goto LAB_10a55fe00;
        }
        else {
          lVar6 = lVar13;
          plVar17 = plVar11;
          if (dVar21 <= dVar20) {
            *plVar18 = lVar9;
            plVar18[1] = lVar13;
            lVar9 = lVar8;
            plVar4 = plVar5;
            goto joined_r0x00010a55fd7c;
          }
        }
        *plVar4 = lVar8;
        *plVar17 = lVar13;
        lVar14 = lVar6;
LAB_10a55fe00:
        if (*(double *)(lVar14 + 8) <= *(double *)(param_2[-1] + 8)) {
          return;
        }
        *plVar11 = param_2[-1];
        param_2[-1] = lVar14;
        lVar8 = *plVar11;
        lVar9 = *plVar5;
        dVar19 = *(double *)(lVar8 + 8);
        if (dVar19 < *(double *)(lVar9 + 8)) {
          plVar18[1] = lVar8;
          plVar18[2] = lVar9;
          lVar9 = *plVar18;
          if (dVar19 < *(double *)(lVar9 + 8)) {
            *plVar18 = lVar8;
            plVar18[1] = lVar9;
            return;
          }
          return;
        }
        return;
      }
      if (uVar7 == 5) {
        plVar4 = plVar18 + 1;
        plVar5 = plVar18 + 2;
        plVar11 = plVar18 + 3;
        lVar8 = *plVar4;
        lVar13 = *plVar18;
        dVar20 = *(double *)(lVar8 + 8);
        dVar19 = *(double *)(lVar13 + 8);
        lVar9 = *plVar5;
        if (dVar19 <= dVar20) {
          if (*(double *)(lVar9 + 8) < dVar20) {
            *plVar4 = lVar9;
            *plVar5 = lVar8;
            lVar13 = *plVar18;
            lVar9 = lVar8;
            if (*(double *)(*plVar4 + 8) < *(double *)(lVar13 + 8)) {
              *plVar18 = *plVar4;
              *plVar4 = lVar13;
              lVar9 = *plVar5;
            }
          }
        }
        else {
          if (dVar20 <= *(double *)(lVar9 + 8)) {
            *plVar18 = lVar8;
            *plVar4 = lVar13;
            lVar9 = *plVar5;
            if (dVar19 <= *(double *)(lVar9 + 8)) goto LAB_10a55ff18;
            *plVar4 = lVar9;
          }
          else {
            *plVar18 = lVar9;
          }
          *plVar5 = lVar13;
          lVar9 = lVar13;
        }
LAB_10a55ff18:
        if (*(double *)(*plVar11 + 8) < *(double *)(lVar9 + 8)) {
          *plVar5 = *plVar11;
          *plVar11 = lVar9;
          lVar9 = *plVar4;
          if (*(double *)(*plVar5 + 8) < *(double *)(lVar9 + 8)) {
            *plVar4 = *plVar5;
            *plVar5 = lVar9;
            lVar9 = *plVar18;
            if (*(double *)(*plVar4 + 8) < *(double *)(lVar9 + 8)) {
              *plVar18 = *plVar4;
              *plVar4 = lVar9;
            }
          }
        }
        lVar9 = param_2[-1];
        lVar8 = *plVar11;
        if (*(double *)(lVar9 + 8) < *(double *)(lVar8 + 8)) {
          *plVar11 = lVar9;
          param_2[-1] = lVar8;
          lVar9 = *plVar5;
          if (*(double *)(*plVar11 + 8) < *(double *)(lVar9 + 8)) {
            *plVar5 = *plVar11;
            *plVar11 = lVar9;
            lVar9 = *plVar4;
            if (*(double *)(*plVar5 + 8) < *(double *)(lVar9 + 8)) {
              *plVar4 = *plVar5;
              *plVar5 = lVar9;
              lVar9 = *plVar18;
              if (*(double *)(*plVar4 + 8) < *(double *)(lVar9 + 8)) {
                *plVar18 = *plVar4;
                *plVar4 = lVar9;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      plVar4 = plVar18 + 1;
      if ((param_4 & 1) != 0) {
        if (plVar18 == param_2 || plVar4 == param_2) {
          return;
        }
        lVar9 = 0;
        plVar5 = plVar18;
        do {
          plVar11 = plVar4;
          lVar14 = *plVar5;
          lVar13 = *plVar11;
          dVar19 = *(double *)(lVar13 + 8);
          lVar8 = lVar9;
          if (dVar19 < *(double *)(lVar14 + 8)) {
            do {
              lVar6 = lVar8;
              *(long *)((long)plVar18 + lVar6 + 8) = lVar14;
              plVar4 = plVar18;
              if (lVar6 == 0) goto LAB_10a55fb2c;
              lVar14 = *(long *)((long)plVar18 + lVar6 + -8);
              lVar8 = lVar6 + -8;
            } while (dVar19 < *(double *)(lVar14 + 8));
            plVar4 = (long *)((long)plVar18 + lVar6);
LAB_10a55fb2c:
            *plVar4 = lVar13;
          }
          lVar9 = lVar9 + 8;
          plVar4 = plVar11 + 1;
          plVar5 = plVar11;
          if (plVar11 + 1 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar18 == param_2 || plVar4 == param_2) {
        return;
      }
      lVar9 = 0;
      lVar8 = 8;
      do {
        lVar13 = *(long *)((long)plVar18 + lVar9);
        lVar9 = *plVar4;
        dVar19 = *(double *)(lVar9 + 8);
        if (dVar19 < *(double *)(lVar13 + 8)) {
          lVar14 = 0;
          do {
            *(long *)((long)plVar4 + lVar14) = lVar13;
            if (lVar8 + lVar14 == 0) goto LAB_10a55fdf8;
            lVar13 = ((long *)((long)plVar4 + lVar14))[-2];
            lVar14 = lVar14 + -8;
          } while (dVar19 < *(double *)(lVar13 + 8));
          *(long *)((long)plVar4 + lVar14) = lVar9;
        }
        plVar4 = plVar4 + 1;
        lVar9 = lVar8;
        lVar8 = lVar8 + 8;
        if (plVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar18 == param_2) {
        return;
      }
      uVar10 = uVar7 - 2 >> 1;
      uVar12 = uVar10;
      do {
        if ((long)uVar12 <= (long)uVar10) {
          uVar15 = uVar12 << 1 | 1;
          plVar4 = plVar18 + uVar15;
          uVar16 = uVar12 * 2 + 2;
          if (((long)uVar16 < (long)uVar7) &&
             (*(double *)(*plVar4 + 8) < *(double *)(plVar4[1] + 8))) {
            uVar15 = uVar16;
            plVar4 = plVar4 + 1;
          }
          lVar8 = *plVar4;
          lVar9 = plVar18[uVar12];
          dVar19 = *(double *)(lVar9 + 8);
          plVar5 = plVar18 + uVar12;
          if (dVar19 <= *(double *)(lVar8 + 8)) {
            do {
              plVar11 = plVar4;
              *plVar5 = lVar8;
              if ((long)uVar10 < (long)uVar15) break;
              uVar1 = uVar15 << 1 | 1;
              plVar4 = plVar18 + uVar1;
              uVar16 = uVar15 * 2 + 2;
              uVar15 = uVar1;
              if (((long)uVar16 < (long)uVar7) &&
                 (*(double *)(*plVar4 + 8) < *(double *)(plVar4[1] + 8))) {
                uVar15 = uVar16;
                plVar4 = plVar4 + 1;
              }
              lVar8 = *plVar4;
              plVar5 = plVar11;
            } while (dVar19 <= *(double *)(lVar8 + 8));
            *plVar11 = lVar9;
          }
        }
        bVar2 = uVar12 != 0;
        uVar12 = uVar12 - 1;
      } while (bVar2);
      do {
        lVar9 = *plVar18;
        plVar4 = plVar18;
        uVar12 = 0;
        do {
          uVar16 = uVar12 << 1 | 1;
          uVar10 = uVar12 * 2 + 2;
          plVar5 = plVar4 + uVar12 + 1;
          if (((long)uVar10 < (long)uVar7) &&
             (*(double *)(plVar4[uVar12 + 1] + 8) < *(double *)(plVar4[uVar12 + 2] + 8))) {
            plVar5 = plVar4 + uVar12 + 2;
            uVar16 = uVar10;
          }
          *plVar4 = *plVar5;
          plVar4 = plVar5;
          uVar12 = uVar16;
        } while ((long)uVar16 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar5 == param_2) {
          *plVar5 = lVar9;
        }
        else {
          *plVar5 = *param_2;
          *param_2 = lVar9;
          lVar9 = (long)plVar5 + (8 - (long)plVar18) >> 3;
          if (1 < lVar9) {
            uVar12 = lVar9 - 2U >> 1;
            lVar8 = plVar18[uVar12];
            lVar9 = *plVar5;
            dVar19 = *(double *)(lVar9 + 8);
            plVar4 = plVar18 + uVar12;
            if (*(double *)(lVar8 + 8) < dVar19) {
              do {
                plVar11 = plVar4;
                *plVar5 = lVar8;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                lVar8 = plVar18[uVar12];
                plVar5 = plVar11;
                plVar4 = plVar18 + uVar12;
              } while (*(double *)(lVar8 + 8) < dVar19);
              *plVar11 = lVar9;
            }
          }
        }
        bVar2 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar4 = plVar18 + (uVar7 >> 1);
    lVar9 = param_2[-1];
    dVar19 = *(double *)(lVar9 + 8);
    if (uVar7 < 0x81) {
      lVar13 = *plVar18;
      lVar8 = *plVar4;
      dVar21 = *(double *)(lVar13 + 8);
      dVar20 = *(double *)(lVar8 + 8);
      if (dVar20 <= dVar21) {
        if (dVar19 < dVar21) {
          *plVar18 = lVar9;
          param_2[-1] = lVar13;
          lVar9 = *plVar4;
          if (*(double *)(*plVar18 + 8) < *(double *)(lVar9 + 8)) {
            *plVar4 = *plVar18;
            *plVar18 = lVar9;
          }
        }
      }
      else {
        if (dVar21 <= dVar19) {
          *plVar4 = lVar13;
          *plVar18 = lVar8;
          if (dVar20 <= *(double *)(param_2[-1] + 8)) goto LAB_10a55f784;
          *plVar18 = param_2[-1];
        }
        else {
          *plVar4 = lVar9;
        }
        param_2[-1] = lVar8;
      }
    }
    else {
      lVar13 = *plVar4;
      lVar8 = *plVar18;
      dVar21 = *(double *)(lVar13 + 8);
      dVar20 = *(double *)(lVar8 + 8);
      if (dVar20 <= dVar21) {
        if (dVar19 < dVar21) {
          *plVar4 = lVar9;
          param_2[-1] = lVar13;
          lVar9 = *plVar18;
          if (*(double *)(*plVar4 + 8) < *(double *)(lVar9 + 8)) {
            *plVar18 = *plVar4;
            *plVar4 = lVar9;
          }
        }
      }
      else {
        if (dVar21 <= dVar19) {
          *plVar18 = lVar13;
          *plVar4 = lVar8;
          if (dVar20 <= *(double *)(param_2[-1] + 8)) goto LAB_10a55f5e0;
          *plVar4 = param_2[-1];
        }
        else {
          *plVar18 = lVar9;
        }
        param_2[-1] = lVar8;
      }
LAB_10a55f5e0:
      plVar5 = plVar4 + -1;
      lVar8 = *plVar5;
      lVar9 = plVar18[1];
      dVar20 = *(double *)(lVar8 + 8);
      dVar19 = *(double *)(lVar9 + 8);
      lVar13 = param_2[-2];
      if (dVar19 <= dVar20) {
        if (*(double *)(lVar13 + 8) < dVar20) {
          *plVar5 = lVar13;
          param_2[-2] = lVar8;
          lVar9 = plVar18[1];
          if (*(double *)(*plVar5 + 8) < *(double *)(lVar9 + 8)) {
            plVar18[1] = *plVar5;
            *plVar5 = lVar9;
          }
        }
      }
      else {
        if (dVar20 <= *(double *)(lVar13 + 8)) {
          plVar18[1] = lVar8;
          *plVar5 = lVar9;
          if (dVar19 <= *(double *)(param_2[-2] + 8)) goto LAB_10a55f68c;
          *plVar5 = param_2[-2];
        }
        else {
          plVar18[1] = lVar13;
        }
        param_2[-2] = lVar9;
      }
LAB_10a55f68c:
      plVar11 = plVar4 + 1;
      lVar8 = *plVar11;
      lVar9 = plVar18[2];
      dVar20 = *(double *)(lVar8 + 8);
      dVar19 = *(double *)(lVar9 + 8);
      lVar13 = param_2[-3];
      if (dVar19 <= dVar20) {
        if (*(double *)(lVar13 + 8) < dVar20) {
          *plVar11 = lVar13;
          param_2[-3] = lVar8;
          lVar9 = plVar18[2];
          if (*(double *)(*plVar11 + 8) < *(double *)(lVar9 + 8)) {
            plVar18[2] = *plVar11;
            *plVar11 = lVar9;
          }
        }
      }
      else {
        if (dVar20 <= *(double *)(lVar13 + 8)) {
          plVar18[2] = lVar8;
          *plVar11 = lVar9;
          if (dVar19 <= *(double *)(param_2[-3] + 8)) goto LAB_10a55f714;
          *plVar11 = param_2[-3];
        }
        else {
          plVar18[2] = lVar13;
        }
        param_2[-3] = lVar9;
      }
LAB_10a55f714:
      lVar9 = plVar4[-1];
      lVar8 = *plVar4;
      dVar21 = *(double *)(lVar8 + 8);
      dVar19 = *(double *)(lVar9 + 8);
      lVar13 = plVar4[1];
      dVar20 = *(double *)(lVar13 + 8);
      if (dVar19 <= dVar21) {
        if (dVar20 < dVar21) {
          *plVar4 = lVar13;
          plVar4[1] = lVar8;
          plVar11 = plVar4;
          lVar8 = lVar13;
          lVar14 = lVar9;
          if (dVar20 < dVar19) goto LAB_10a55f770;
        }
      }
      else {
        lVar14 = lVar8;
        if (dVar21 <= dVar20) {
          plVar4[-1] = lVar8;
          *plVar4 = lVar9;
          plVar5 = plVar4;
          lVar8 = lVar9;
          lVar14 = lVar13;
          if (dVar19 <= dVar20) goto LAB_10a55f778;
        }
LAB_10a55f770:
        *plVar5 = lVar13;
        *plVar11 = lVar9;
        lVar8 = lVar14;
      }
LAB_10a55f778:
      lVar9 = *plVar18;
      *plVar18 = lVar8;
      *plVar4 = lVar9;
    }
LAB_10a55f784:
    param_3 = param_3 + -1;
    lVar9 = *plVar18;
    if (((param_4 & 1) != 0) ||
       (dVar19 = *(double *)(lVar9 + 8), *(double *)(plVar18[-1] + 8) < dVar19)) {
      lVar8 = 0;
      do {
        plVar4 = (long *)((long)plVar18 + lVar8 + 8);
        if (plVar4 == param_2) goto LAB_10a55fdf8;
        lVar13 = *plVar4;
        dVar19 = *(double *)(lVar9 + 8);
        lVar8 = lVar8 + 8;
      } while (*(double *)(lVar13 + 8) < dVar19);
      plVar4 = (long *)((long)plVar18 + lVar8);
      plVar5 = param_2;
      if (lVar8 == 8) {
        do {
          if (plVar5 <= plVar4) break;
          plVar5 = plVar5 + -1;
        } while (dVar19 <= *(double *)(*plVar5 + 8));
      }
      else {
        do {
          if (plVar5 == plVar18) {
LAB_10a55fdf8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55fdfc);
            (*pcVar3)();
          }
          plVar5 = plVar5 + -1;
        } while (dVar19 <= *(double *)(*plVar5 + 8));
      }
      param_1 = plVar4;
      if (plVar4 < plVar5) {
        lVar8 = *plVar5;
        plVar11 = plVar5;
        do {
          *param_1 = lVar8;
          *plVar11 = lVar13;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a55fdf8;
            lVar13 = *param_1;
          } while (*(double *)(lVar13 + 8) < dVar19);
          do {
            if (plVar11 == plVar18) goto LAB_10a55fdf8;
            plVar11 = plVar11 + -1;
            lVar8 = *plVar11;
          } while (dVar19 <= *(double *)(lVar8 + 8));
        } while (param_1 < plVar11);
      }
      plVar11 = param_1 + -1;
      if (plVar11 != plVar18) {
        *plVar18 = *plVar11;
      }
      *plVar11 = lVar9;
      if (plVar4 < plVar5) {
LAB_10a55f8c4:
        FUN_10a55f47c(plVar18,plVar11,param_3,param_4 & 1);
        param_4 = 0;
      }
      else {
        plVar4 = plVar18;
        FUN_10a55fff8(plVar18,plVar11);
        plVar5 = param_1;
        FUN_10a55fff8(param_1,param_2);
        if ((int)plVar5 == 0) {
          if (((ulong)plVar4 & 1) == 0) goto LAB_10a55f8c4;
        }
        else {
          param_1 = plVar18;
          param_2 = plVar11;
          if (((ulong)plVar4 & 1) != 0) {
            return;
          }
        }
      }
      goto LAB_10a55f4a8;
    }
    plVar4 = plVar18 + 1;
    if (*(double *)(param_2[-1] + 8) <= dVar19) {
      do {
        param_1 = plVar4;
        if (param_2 <= param_1) break;
        plVar4 = param_1 + 1;
      } while (*(double *)(*param_1 + 8) <= dVar19);
    }
    else {
      do {
        param_1 = plVar4;
        if (param_1 == param_2) goto LAB_10a55fdf8;
        plVar4 = param_1 + 1;
      } while (*(double *)(*param_1 + 8) <= dVar19);
    }
    plVar4 = param_2;
    if (param_1 < param_2) {
      do {
        if (plVar4 == plVar18) goto LAB_10a55fdf8;
        plVar4 = plVar4 + -1;
      } while (dVar19 < *(double *)(*plVar4 + 8));
    }
    if (param_1 < plVar4) {
      lVar8 = *param_1;
      lVar13 = *plVar4;
      do {
        *param_1 = lVar13;
        *plVar4 = lVar8;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a55fdf8;
          lVar8 = *param_1;
        } while (*(double *)(lVar8 + 8) <= dVar19);
        do {
          if (plVar4 == plVar18) goto LAB_10a55fdf8;
          plVar4 = plVar4 + -1;
          lVar13 = *plVar4;
        } while (dVar19 < *(double *)(lVar13 + 8));
      } while (param_1 < plVar4);
    }
    plVar4 = param_1 + -1;
    if (plVar4 != plVar18) {
      *plVar18 = *plVar4;
    }
    param_4 = 0;
    *plVar4 = lVar9;
  } while( true );
}



/* Entry: 10a55fe84; end: 10a55fff7;  */

void FUN_10a55fe84(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  dVar5 = *(double *)(lVar1 + 8);
  dVar4 = *(double *)(lVar2 + 8);
  lVar3 = *param_3;
  if (dVar4 <= dVar5) {
    if (*(double *)(lVar3 + 8) < dVar5) {
      *param_2 = lVar3;
      *param_3 = lVar1;
      lVar2 = *param_1;
      lVar3 = lVar1;
      if (*(double *)(*param_2 + 8) < *(double *)(lVar2 + 8)) {
        *param_1 = *param_2;
        *param_2 = lVar2;
        lVar3 = *param_3;
      }
    }
  }
  else {
    if (dVar5 <= *(double *)(lVar3 + 8)) {
      *param_1 = lVar1;
      *param_2 = lVar2;
      lVar3 = *param_3;
      if (dVar4 <= *(double *)(lVar3 + 8)) goto LAB_10a55ff18;
      *param_2 = lVar3;
    }
    else {
      *param_1 = lVar3;
    }
    *param_3 = lVar2;
    lVar3 = lVar2;
  }
LAB_10a55ff18:
  if (*(double *)(*param_4 + 8) < *(double *)(lVar3 + 8)) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(double *)(*param_3 + 8) < *(double *)(lVar3 + 8)) {
      *param_2 = *param_3;
      *param_3 = lVar3;
      lVar3 = *param_1;
      if (*(double *)(*param_2 + 8) < *(double *)(lVar3 + 8)) {
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
    }
  }
  lVar3 = *param_4;
  if (*(double *)(*param_5 + 8) < *(double *)(lVar3 + 8)) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    if (*(double *)(*param_4 + 8) < *(double *)(lVar3 + 8)) {
      *param_3 = *param_4;
      *param_4 = lVar3;
      lVar3 = *param_2;
      if (*(double *)(*param_3 + 8) < *(double *)(lVar3 + 8)) {
        *param_2 = *param_3;
        *param_3 = lVar3;
        lVar3 = *param_1;
        if (*(double *)(*param_2 + 8) < *(double *)(lVar3 + 8)) {
          *param_1 = *param_2;
          *param_2 = lVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 10a55fff8; end: 10a5602df;  */

bool FUN_10a55fff8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      lVar4 = *param_1;
      if (*(double *)(param_2[-1] + 8) < *(double *)(lVar4 + 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar4;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      lVar4 = *param_1;
      lVar5 = param_1[1];
      dVar13 = *(double *)(lVar5 + 8);
      dVar12 = *(double *)(lVar4 + 8);
      lVar9 = param_2[-1];
      if (dVar13 < dVar12) {
        if (dVar13 <= *(double *)(lVar9 + 8)) {
          *param_1 = lVar5;
          param_1[1] = lVar4;
          if (dVar12 <= *(double *)(param_2[-1] + 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        else {
          *param_1 = lVar9;
        }
        param_2[-1] = lVar4;
        return true;
      }
      if (*(double *)(lVar9 + 8) < dVar13) {
        param_1[1] = lVar9;
        param_2[-1] = lVar5;
        lVar4 = *param_1;
        if (*(double *)(param_1[1] + 8) < *(double *)(lVar4 + 8)) {
          *param_1 = param_1[1];
          param_1[1] = lVar4;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 4) {
      plVar7 = param_1 + 1;
      lVar4 = *plVar7;
      plVar6 = param_1 + 2;
      lVar5 = *plVar6;
      lVar9 = *param_1;
      dVar14 = *(double *)(lVar4 + 8);
      dVar12 = *(double *)(lVar9 + 8);
      dVar13 = *(double *)(lVar5 + 8);
      plVar8 = param_1;
      if (dVar12 <= dVar14) {
        lVar10 = lVar5;
        if (dVar14 <= dVar13) goto LAB_10a560258;
        *plVar7 = lVar5;
        *plVar6 = lVar4;
        plVar11 = plVar7;
        lVar1 = lVar4;
joined_r0x00010a560240:
        lVar10 = lVar4;
        if (dVar12 <= dVar13) goto LAB_10a560258;
      }
      else {
        lVar1 = lVar9;
        plVar11 = plVar6;
        if (dVar14 <= dVar13) {
          *param_1 = lVar4;
          param_1[1] = lVar9;
          lVar4 = lVar5;
          plVar8 = plVar7;
          goto joined_r0x00010a560240;
        }
      }
      *plVar8 = lVar5;
      *plVar11 = lVar9;
      lVar10 = lVar1;
LAB_10a560258:
      if (*(double *)(lVar10 + 8) <= *(double *)(param_2[-1] + 8)) {
        return true;
      }
      *plVar6 = param_2[-1];
      param_2[-1] = lVar10;
      lVar5 = *plVar6;
      lVar4 = *plVar7;
      dVar12 = *(double *)(lVar5 + 8);
      if (dVar12 < *(double *)(lVar4 + 8)) {
        param_1[1] = lVar5;
        param_1[2] = lVar4;
        lVar4 = *param_1;
        if (dVar12 < *(double *)(lVar4 + 8)) {
          *param_1 = lVar5;
          param_1[1] = lVar4;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 5) {
      FUN_10a55fe84(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  plVar7 = param_1 + 2;
  lVar4 = *plVar7;
  plVar6 = param_1 + 1;
  lVar9 = *plVar6;
  lVar5 = *param_1;
  dVar14 = *(double *)(lVar9 + 8);
  dVar12 = *(double *)(lVar5 + 8);
  dVar13 = *(double *)(lVar4 + 8);
  plVar8 = param_1;
  if (dVar12 <= dVar14) {
    if (dVar14 <= dVar13) goto LAB_10a560198;
    *plVar6 = lVar4;
    *plVar7 = lVar9;
    plVar11 = plVar6;
joined_r0x00010a56018c:
    if (dVar12 <= dVar13) goto LAB_10a560198;
  }
  else {
    plVar11 = plVar7;
    if (dVar14 <= dVar13) {
      *param_1 = lVar9;
      param_1[1] = lVar5;
      plVar8 = plVar6;
      goto joined_r0x00010a56018c;
    }
  }
  *plVar8 = lVar4;
  *plVar11 = lVar5;
LAB_10a560198:
  if (param_1 + 3 != param_2) {
    iVar3 = 0;
    lVar4 = 0x18;
    plVar8 = param_1 + 3;
    do {
      plVar6 = plVar8;
      lVar10 = *plVar6;
      lVar9 = *plVar7;
      dVar12 = *(double *)(lVar10 + 8);
      lVar5 = lVar4;
      if (dVar12 < *(double *)(lVar9 + 8)) {
        do {
          *(long *)((long)param_1 + lVar5) = lVar9;
          lVar1 = lVar5 + -8;
          plVar8 = param_1;
          if (lVar1 == 0) goto LAB_10a5601f8;
          lVar9 = *(long *)((long)param_1 + lVar5 + -0x10);
          lVar5 = lVar1;
        } while (dVar12 < *(double *)(lVar9 + 8));
        plVar8 = (long *)((long)param_1 + lVar1);
LAB_10a5601f8:
        *plVar8 = lVar10;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return plVar6 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 8;
      plVar8 = plVar6 + 1;
      plVar7 = plVar6;
    } while (plVar6 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a5602e0; end: 10a560357;  */

void FUN_10a5602e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x50;
  FUN_10a560414(lVar1,param_2,param_2 + 8,param_2 + 0x10);
  param_1 = param_1 + 0x50;
  FUN_10a560414(param_1,param_3,param_3 + 8,param_3 + 0x10);
  lVar2 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_3 + 0x18);
  *(long *)(param_2 + 0x20) = param_3;
  *(long *)(param_3 + 0x18) = param_2;
  *(long *)(lVar2 + 0x18) = lVar1;
  *(long *)(lVar1 + 0x18) = param_1;
  *(long *)(lVar1 + 0x20) = lVar2;
  *(long *)(param_1 + 0x20) = lVar1;
  *(long *)(lVar3 + 0x20) = param_1;
  *(long *)(param_1 + 0x18) = lVar3;
  return;
}



/* Entry: 10a560358; end: 10a560413;  */

bool FUN_10a560358(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *(double *)(param_3 + 8);
  dVar2 = *(double *)(param_3 + 0x10);
  dVar4 = *(double *)(*(long *)(param_3 + 0x18) + 8);
  dVar1 = *(double *)(*(long *)(param_3 + 0x18) + 0x10);
  dVar5 = *(double *)(*(long *)(param_3 + 0x20) + 8);
  dVar6 = *(double *)(*(long *)(param_3 + 0x20) + 0x10);
  if (-((dVar3 - dVar4) * (dVar6 - dVar2)) + (dVar5 - dVar3) * (dVar2 - dVar1) < 0.0) {
    if ((dVar6 - param_2) * -(param_1 - dVar3) + (dVar5 - param_1) * (param_2 - dVar2) < 0.0) {
      return false;
    }
    return 0.0 <= -((dVar4 - dVar3) * (param_2 - dVar1)) + (param_1 - dVar4) * (dVar1 - dVar2);
  }
  if ((dVar1 - param_2) * -(param_1 - dVar3) + (dVar4 - param_1) * (param_2 - dVar2) < 0.0) {
    return true;
  }
  return -((dVar5 - dVar3) * (param_2 - dVar6)) + (param_1 - dVar5) * (dVar6 - dVar2) < 0.0;
}



/* Entry: 10a560414; end: 10a56055b;  */

undefined4 *
FUN_10a560414(double param_1,double param_2,long *param_3,undefined4 *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined2 uVar9;
  uint uVar11;
  byte bVar13;
  byte bVar14;
  undefined8 uVar12;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  undefined4 uVar10;
  
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  if (uVar6 <= uVar5) {
    if (0x38e38e38e38e38e < uVar6) {
      func_0x000109ffded8();
      lVar2 = (long)param_3;
LAB_10a560558:
      FUN_10a55f38c();
      lVar7 = (long)((param_2 - *(double *)(lVar2 + 0x38)) * 32767.0 * *(double *)(lVar2 + 0x48));
      lVar2 = (long)((param_1 - *(double *)(lVar2 + 0x28)) * 32767.0 * *(double *)(lVar2 + 0x48));
      bVar13 = (byte)((ulong)lVar7 >> 8) | (byte)((ulong)lVar7 >> 0x10);
      bVar14 = (byte)((ulong)lVar2 >> 8) | (byte)((ulong)lVar2 >> 0x10);
      uVar11 = (uint)CONCAT12(bVar13,(ushort)(byte)lVar7);
      iVar15 = uVar11 << 4;
      iVar17 = (uint)(uint3)(CONCAT16(bVar14,(uint6)CONCAT14((char)lVar2,uVar11)) >> 0x20) << 4;
      uVar9 = CONCAT11((char)((uint)iVar15 >> 8),(byte)lVar7);
      uVar10 = CONCAT13((char)((uint)iVar15 >> 0x18),CONCAT12(bVar13,uVar9));
      uVar5 = CONCAT62((int6)(CONCAT17((char)((uint)iVar17 >> 0x18),
                                       CONCAT16(bVar14,CONCAT15((char)((uint)iVar17 >> 8),
                                                                CONCAT14((char)lVar2,uVar10)))) >>
                             0x10),uVar9) & 0xffffffffffffff0f;
      uVar6 = CONCAT44((int)(uVar5 >> 0x20),CONCAT22((short)((uint)uVar10 >> 0x10),(short)uVar5)) &
              0xffffffffff0fffff;
      uVar5 = CONCAT26((short)(uVar6 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar6)) &
              0xff0fff0fffffffff;
      iVar15 = (int)uVar5 << 2;
      iVar17 = (int)(uVar5 >> 0x20) << 2;
      uVar11 = CONCAT13((byte)((uint)iVar15 >> 0x18) | (byte)(uVar5 >> 0x18),
                        CONCAT12((byte)((uint)iVar15 >> 0x10) | (byte)(uVar5 >> 0x10),
                                 CONCAT11((byte)((uint)iVar15 >> 8) | (byte)(uVar5 >> 8),
                                          (byte)iVar15 | (byte)uVar5)));
      uVar5 = CONCAT17((byte)((uint)iVar17 >> 0x18) | (byte)(uVar5 >> 0x38),
                       CONCAT16((byte)((uint)iVar17 >> 0x10) | (byte)(uVar5 >> 0x30),
                                CONCAT15((byte)((uint)iVar17 >> 8) | (byte)(uVar5 >> 0x28),
                                         CONCAT14((byte)iVar17 | (byte)(uVar5 >> 0x20),uVar11)))) &
              0x3333333333333333;
      uVar12 = NEON_ushl(uVar5,0x100000002,4);
      iVar15 = (uVar11 & 0x33333333) << 1;
      uVar5 = CONCAT17((byte)((ulong)uVar12 >> 0x38) | (byte)(uVar5 >> 0x38),
                       CONCAT16((byte)((ulong)uVar12 >> 0x30) | (byte)(uVar5 >> 0x30),
                                CONCAT15((byte)((ulong)uVar12 >> 0x28) | (byte)(uVar5 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar12 >> 0x20) |
                                                  (byte)(uVar5 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar12 >> 0x18) |
                                                           (byte)((uint)iVar15 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar12 >> 0x10) |
                                                                    (byte)((uint)iVar15 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar12 >>
                                                                                   8) |
                                                                             (byte)((uint)iVar15 >>
                                                                                   8),(byte)uVar12 |
                                                                                      (byte)iVar15))
                                                          ))))) & 0x55555555aaaaaaaa;
      return (undefined4 *)
             (ulong)CONCAT13((byte)(uVar5 >> 0x18) | (byte)(uVar5 >> 0x38),
                             CONCAT12((byte)(uVar5 >> 0x10) | (byte)(uVar5 >> 0x30),
                                      CONCAT11((byte)(uVar5 >> 8) | (byte)(uVar5 >> 0x28),
                                               (byte)uVar5 | (byte)(uVar5 >> 0x20))));
    }
    lVar2 = uVar6 * 0x48;
    puVar3 = param_4;
    __Znwm();
    *param_3 = lVar2;
    plVar1 = (long *)param_3[4];
    if (plVar1 < (long *)param_3[5]) {
      plVar8 = plVar1 + 1;
      *plVar1 = lVar2;
    }
    else {
      lVar7 = (long)plVar1 - param_3[3];
      uVar5 = (lVar7 >> 3) + 1;
      if (uVar5 >> 0x3d != 0) goto LAB_10a560558;
      uVar4 = param_3[5] - param_3[3];
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      FUN_10a55f3a0();
      plVar1 = (long *)(uVar6 + lVar7);
      plVar8 = plVar1 + 1;
      *plVar1 = *param_3;
      lVar7 = (long)plVar1 - (param_3[4] - param_3[3]);
      _memcpy(lVar7);
      lVar2 = param_3[3];
      param_3[3] = lVar7;
      param_3[4] = (long)plVar8;
      param_3[5] = uVar6 + (long)puVar3 * 8;
      if (lVar2 != 0) {
        __ZdlPv();
      }
    }
    uVar5 = 0;
    param_3[4] = (long)plVar8;
  }
  param_3[1] = uVar5 + 1;
  puVar3 = (undefined4 *)(*param_3 + uVar5 * 0x48);
  uVar12 = *param_5;
  uVar16 = *param_6;
  *puVar3 = *param_4;
  *(undefined8 *)(puVar3 + 2) = uVar12;
  *(undefined8 *)(puVar3 + 4) = uVar16;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  return puVar3;
}



/* Entry: 10a56055c; end: 10a5606eb;  */

undefined4 FUN_10a56055c(double param_1,double param_2,long param_3)

{
  undefined2 uVar1;
  uint uVar3;
  byte bVar7;
  byte bVar8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar9;
  int iVar10;
  int iVar12;
  undefined8 uVar11;
  undefined4 uVar2;
  
  lVar4 = (long)((param_2 - *(double *)(param_3 + 0x38)) * 32767.0 * *(double *)(param_3 + 0x48));
  lVar9 = (long)((param_1 - *(double *)(param_3 + 0x28)) * 32767.0 * *(double *)(param_3 + 0x48));
  bVar7 = (byte)((ulong)lVar4 >> 8) | (byte)((ulong)lVar4 >> 0x10);
  bVar8 = (byte)((ulong)lVar9 >> 8) | (byte)((ulong)lVar9 >> 0x10);
  uVar3 = (uint)CONCAT12(bVar7,(ushort)(byte)lVar4);
  iVar10 = uVar3 << 4;
  iVar12 = (uint)(uint3)(CONCAT16(bVar8,(uint6)CONCAT14((char)lVar9,uVar3)) >> 0x20) << 4;
  uVar1 = CONCAT11((char)((uint)iVar10 >> 8),(byte)lVar4);
  uVar2 = CONCAT13((char)((uint)iVar10 >> 0x18),CONCAT12(bVar7,uVar1));
  uVar6 = CONCAT62((int6)(CONCAT17((char)((uint)iVar12 >> 0x18),
                                   CONCAT16(bVar8,CONCAT15((char)((uint)iVar12 >> 8),
                                                           CONCAT14((char)lVar9,uVar2)))) >> 0x10),
                   uVar1) & 0xffffffffffffff0f;
  uVar5 = CONCAT44((int)(uVar6 >> 0x20),CONCAT22((short)((uint)uVar2 >> 0x10),(short)uVar6)) &
          0xffffffffff0fffff;
  uVar6 = CONCAT26((short)(uVar5 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar5)) &
          0xff0fff0fffffffff;
  iVar10 = (int)uVar6 << 2;
  iVar12 = (int)(uVar6 >> 0x20) << 2;
  uVar3 = CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)(uVar6 >> 0x18),
                   CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)(uVar6 >> 0x10),
                            CONCAT11((byte)((uint)iVar10 >> 8) | (byte)(uVar6 >> 8),
                                     (byte)iVar10 | (byte)uVar6)));
  uVar6 = CONCAT17((byte)((uint)iVar12 >> 0x18) | (byte)(uVar6 >> 0x38),
                   CONCAT16((byte)((uint)iVar12 >> 0x10) | (byte)(uVar6 >> 0x30),
                            CONCAT15((byte)((uint)iVar12 >> 8) | (byte)(uVar6 >> 0x28),
                                     CONCAT14((byte)iVar12 | (byte)(uVar6 >> 0x20),uVar3)))) &
          0x3333333333333333;
  uVar11 = NEON_ushl(uVar6,0x100000002,4);
  iVar10 = (uVar3 & 0x33333333) << 1;
  uVar6 = CONCAT17((byte)((ulong)uVar11 >> 0x38) | (byte)(uVar6 >> 0x38),
                   CONCAT16((byte)((ulong)uVar11 >> 0x30) | (byte)(uVar6 >> 0x30),
                            CONCAT15((byte)((ulong)uVar11 >> 0x28) | (byte)(uVar6 >> 0x28),
                                     CONCAT14((byte)((ulong)uVar11 >> 0x20) | (byte)(uVar6 >> 0x20),
                                              CONCAT13((byte)((ulong)uVar11 >> 0x18) |
                                                       (byte)((uint)iVar10 >> 0x18),
                                                       CONCAT12((byte)((ulong)uVar11 >> 0x10) |
                                                                (byte)((uint)iVar10 >> 0x10),
                                                                CONCAT11((byte)((ulong)uVar11 >> 8)
                                                                         | (byte)((uint)iVar10 >> 8)
                                                                         ,(byte)uVar11 |
                                                                          (byte)iVar10))))))) &
          0x55555555aaaaaaaa;
  return CONCAT13((byte)(uVar6 >> 0x18) | (byte)(uVar6 >> 0x38),
                  CONCAT12((byte)(uVar6 >> 0x10) | (byte)(uVar6 >> 0x30),
                           CONCAT11((byte)(uVar6 >> 8) | (byte)(uVar6 >> 0x28),
                                    (byte)uVar6 | (byte)(uVar6 >> 0x20))));
}



/* Entry: 10a5606ec; end: 10a560723;  */

long FUN_10a5606ec(long param_1)

{
  FUN_10a55e568(param_1,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a560724; end: 10a560737;  */

void FUN_10a560724(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0x71c71c71c71c71d) {
    __Znwm((long)puVar1 * 0x24);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        _free();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a560738; end: 10a56077f;  */

void FUN_10a560738(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 < (undefined8 *)0x71c71c71c71c71d) {
    __Znwm((long)param_1 * 0x24);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        _free();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a560780; end: 10a5607f3;  */

void FUN_10a560780(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        _free();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a5607f4; end: 10a5609e3;  */

undefined8 * FUN_10a5607f4(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a5609e4();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a35e454(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = *(long *)(param_2 + 0x30);
  FUN_10a5609e4(param_1 + 6,lVar4,*(long *)(param_2 + 0x38),
                (*(long *)(param_2 + 0x38) - lVar4 >> 3) * -0x5555555555555555);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar5 = *(long *)(param_2 + 0x48);
  uVar3 = *(long *)(param_2 + 0x50) - lVar5;
  if (uVar3 != 0) {
    uVar2 = (long)uVar3 >> 4;
    if (uVar2 >> 0x3c != 0) {
      FUN_10a55e270();
      goto LAB_10a56096c;
    }
    FUN_10a55e284();
    param_1[9] = uVar2;
    param_1[10] = uVar2;
    param_1[0xb] = uVar2 + uVar3;
    _memcpy();
    param_1[10] = uVar2 + (uVar3 & 0xfffffffffffffff0);
    lVar4 = lVar5;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar5 = *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60);
  if (lVar5 != 0) {
    uVar3 = (lVar5 >> 2) * -0x71c71c71c71c71c7;
    if (0x71c71c71c71c71c < uVar3) {
      FUN_10a560724();
LAB_10a56096c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a560970);
      (*pcVar1)();
    }
    FUN_10a560738();
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar3 + lVar4 * 0x24;
    _memmove();
    param_1[0xd] = uVar3 + lVar5;
  }
  return param_1;
}



/* Entry: 10a5609e4; end: 10a560ab7;  */

void FUN_10a5609e4(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      func_0x00010a55e1f8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a560a9c);
      (*pcVar1)();
    }
    uVar2 = param_4;
    FUN_10a55e20c();
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + param_4 * 0x18;
    if (param_2 != param_3) {
      lVar3 = (((param_3 - param_2) - 0x18U) / 0x18) * 0x18 + 0x18;
      _memcpy(uVar2,param_2,lVar3);
      uVar2 = uVar2 + lVar3;
    }
    param_1[1] = uVar2;
  }
  return;
}



/* Entry: 10a560ab8; end: 10a560daf;  */

void FUN_10a560ab8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  byte param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  lVar12 = *param_2;
  if (param_2[1] - lVar12 != 0) {
    uVar11 = param_2[1] - lVar12 >> 5;
    lVar17 = *param_1;
    uVar15 = 1;
    uVar18 = 0;
    do {
      uVar14 = uVar15;
      lVar1 = *param_3;
      uVar15 = param_3[1] - lVar1 >> 2;
      if (uVar15 <= uVar18) {
LAB_10a560dac:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a560db0);
        (*pcVar8)();
      }
      iVar5 = *(int *)(lVar1 + uVar18 * 4);
      iStack_a4 = *(int *)param_1[1] + iVar5;
      lVar2 = *param_5;
      uVar16 = param_5[1] - lVar2 >> 2;
      if (uVar16 <= uVar18) goto LAB_10a560dac;
      iVar6 = *(int *)(lVar2 + uVar18 * 4);
      iStack_a0 = *(int *)param_1[2] + iVar6;
      lVar12 = lVar12 + uVar18 * 0x20;
      uVar10 = (ulong)*(int *)(lVar12 + 0x18);
      lVar3 = *param_4;
      uVar9 = param_4[1] - lVar3 >> 2;
      if (uVar9 <= uVar10) goto LAB_10a560dac;
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar14 / uVar11;
      }
      uVar11 = uVar14 - uVar7 * uVar11;
      iStack_9c = *(int *)(lVar3 + uVar10 * 4) + *(int *)param_1[3];
      if ((uVar15 <= uVar11) ||
         (iStack_98 = *(int *)(lVar1 + uVar11 * 4) + *(int *)param_1[1], uVar16 <= uVar14))
      goto LAB_10a560dac;
      iStack_94 = *(int *)(lVar2 + uVar14 * 4) + *(int *)param_1[2];
      uVar15 = (ulong)*(int *)(lVar12 + 0x1c);
      if (uVar9 <= uVar15) goto LAB_10a560dac;
      iStack_90 = *(int *)(lVar3 + uVar15 * 4) + *(int *)param_1[3];
      iStack_8c = *(int *)param_1[4] + iVar5;
      iStack_88 = *(int *)param_1[5] + iVar6;
      iStack_84 = iStack_9c;
      FUN_10a55dbbc(lVar17 + 0x60,&iStack_a4);
      if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
        lVar12 = *(long *)(lVar17 + 0x68);
        if (*(long *)(lVar17 + 0x60) == lVar12) goto LAB_10a560dac;
        uVar4 = *(undefined4 *)(lVar12 + -0x1c);
        uVar13 = *(undefined8 *)(lVar12 + -0x24);
        *(undefined8 *)(lVar12 + -0x24) = *(undefined8 *)(lVar12 + -0x18);
        *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)(lVar12 + -0x10);
        *(undefined8 *)(lVar12 + -0x18) = uVar13;
        *(undefined4 *)(lVar12 + -0x10) = uVar4;
      }
      lVar12 = *param_3;
      uVar15 = param_3[1] - lVar12 >> 2;
      if (uVar15 <= uVar11) goto LAB_10a560dac;
      iVar5 = *(int *)(lVar12 + uVar11 * 4);
      iStack_a4 = *(int *)param_1[1] + iVar5;
      lVar1 = *param_5;
      uVar11 = param_5[1] - lVar1 >> 2;
      if (uVar11 <= uVar14) goto LAB_10a560dac;
      iVar6 = *(int *)(lVar1 + uVar14 * 4);
      iStack_a0 = *(int *)param_1[2] + iVar6;
      if ((ulong)(param_2[1] - *param_2 >> 5) <= uVar18) goto LAB_10a560dac;
      lVar2 = *param_2 + uVar18 * 0x20;
      uVar9 = (ulong)*(int *)(lVar2 + 0x1c);
      lVar3 = *param_4;
      uVar16 = param_4[1] - lVar3 >> 2;
      if (uVar16 <= uVar9) goto LAB_10a560dac;
      iStack_9c = *(int *)(lVar3 + uVar9 * 4) + *(int *)param_1[3];
      iStack_98 = *(int *)param_1[4] + iVar5;
      iStack_94 = *(int *)param_1[5] + iVar6;
      iStack_90 = iStack_9c;
      if ((uVar15 <= uVar18) ||
         (iStack_8c = *(int *)(lVar12 + uVar18 * 4) + *(int *)param_1[4], uVar11 <= uVar18))
      goto LAB_10a560dac;
      iStack_88 = *(int *)(lVar1 + uVar18 * 4) + *(int *)param_1[5];
      uVar15 = (ulong)*(int *)(lVar2 + 0x18);
      if (uVar16 <= uVar15) goto LAB_10a560dac;
      iStack_84 = *(int *)(lVar3 + uVar15 * 4) + *(int *)param_1[3];
      FUN_10a55dbbc(lVar17 + 0x60,&iStack_a4);
      if (((param_6 ^ (int)param_2[7] == 1) & 1) == 0) {
        lVar12 = *(long *)(lVar17 + 0x68);
        if (*(long *)(lVar17 + 0x60) == lVar12) goto LAB_10a560dac;
        uVar4 = *(undefined4 *)(lVar12 + -0x1c);
        uVar13 = *(undefined8 *)(lVar12 + -0x24);
        *(undefined8 *)(lVar12 + -0x24) = *(undefined8 *)(lVar12 + -0x18);
        *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)(lVar12 + -0x10);
        *(undefined8 *)(lVar12 + -0x18) = uVar13;
        *(undefined4 *)(lVar12 + -0x10) = uVar4;
      }
      lVar12 = *param_2;
      uVar11 = param_2[1] - lVar12 >> 5;
      uVar15 = (ulong)((int)uVar14 + 1);
      uVar18 = uVar14;
    } while (uVar14 < uVar11);
  }
  return;
}



/* Entry: 10a560db0; end: 10a560ecf;  */

void FUN_10a560db0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined4 param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  puVar4 = (undefined8 *)*param_4;
  puVar5 = (undefined8 *)param_4[1];
  if (puVar5 != puVar4) {
    uVar1 = 1;
    uVar7 = 0;
    do {
      uVar6 = uVar1;
      lVar3 = param_1 + 0x88;
      FUN_10a55df98(lVar3,puVar4 + uVar7 * 4);
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,(int)lVar3);
      FUN_109febd04(param_3,&dStack_80);
      if ((ulong)(param_4[1] - *param_4 >> 5) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a560ed0);
        (*pcVar2)();
      }
      puVar4 = (undefined8 *)(*param_4 + uVar7 * 0x20);
      dStack_80 = (double)puVar4[2] * (double)param_4[6];
      uStack_68 = puVar4[1];
      uStack_70 = *puVar4;
      lVar3 = param_1 + 0xb8;
      uStack_78 = param_5;
      FUN_10a55e084(lVar3,&dStack_80);
      uStack_54 = (undefined4)lVar3;
      FUN_109febd04(param_2,&uStack_54);
      puVar4 = (undefined8 *)*param_4;
      puVar5 = (undefined8 *)param_4[1];
      uVar1 = (ulong)((int)uVar6 + 1);
      uVar7 = uVar6;
    } while (uVar6 < (ulong)((long)puVar5 - (long)puVar4 >> 5));
  }
  if (puVar5 != puVar4) {
    dStack_80 = (double)param_4[6];
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    param_1 = param_1 + 0xb8;
    uStack_78 = param_5;
    FUN_10a55e084(param_1,&dStack_80);
    uStack_54 = (undefined4)param_1;
    FUN_109febd04(param_2,&uStack_54);
  }
  return;
}



/* Entry: 10a560ed0; end: 10a560f77;  */

void FUN_10a560ed0(double param_1,double param_2,double *param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  code *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = (ulong)param_5;
  lVar1 = param_4[3];
  if ((ulong)(param_4[4] - lVar1 >> 4) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a560f78);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(lVar1 + uVar5 * 0x10);
  pbVar6 = (byte *)*param_4;
  fVar8 = *(float *)(pbVar6 + 0x38);
  dVar7 = (double)param_4[2];
  if ((bVar2 & 1) == 0) {
    fVar9 = *(float *)(pbVar6 + 0x30);
    fVar10 = 1.0;
    if ((*pbVar6 >> 5 & 1) != 0) goto LAB_10a560f28;
    sVar3 = *(short *)(pbVar6 + 6);
  }
  else {
    fVar9 = *(float *)(pbVar6 + 0x34);
    fVar10 = 1.0;
    if ((*pbVar6 >> 4 & 1) != 0) goto LAB_10a560f28;
    sVar3 = *(short *)(pbVar6 + 4);
  }
  fVar10 = (float)(int)sVar3;
LAB_10a560f28:
  *param_3 = dVar7 * ((param_1 * *(double *)(lVar1 + uVar5 * 0x10 + 8)) /
                     (double)*(float *)(pbVar6 + 0x18)) + (double)(fVar9 * fVar10);
  param_3[1] = 1.0 - (param_2 + (double)fVar8 + dVar7 * (double)(bVar2 ^ 1));
  return;
}



/* Entry: 10a560f78; end: 10a56105f;  */

void FUN_10a560f78(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a560fec);
  (*pcVar1)();
}



/* Entry: 10a561060; end: 10a56110f;  */

long FUN_10a561060(long param_1)

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



/* Entry: 10a561110; end: 10a56121b;  */

void FUN_10a561110(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar6 + 0x48))(&stack0xffffffffffffffb0,plVar6);
  FUN_10a3ab53c(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a56121c; end: 10a561283;  */

void FUN_10a56121c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *in_stack_ffffffffffffff80;
  ulong in_stack_ffffffffffffff88;
  ulong in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a56121c(plVar5,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar7 + 0x30))(&stack0xffffffffffffff80,plVar7);
  puVar1 = in_stack_ffffffffffffff80;
  if (-1 < (long)in_stack_ffffffffffffff90) {
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff90 >> 0x38;
    puVar1 = &stack0xffffffffffffff80;
  }
  (**(code **)(*plVar5 + 0x128))(&stack0xffffffffffffff98,plVar5,puVar1,in_stack_ffffffffffffff88);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff98;
  if ((long)in_stack_ffffffffffffff90 < 0) {
    __ZdlPv(in_stack_ffffffffffffff80);
  }
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a561284; end: 10a5613af;  */

void FUN_10a561284(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a5613b0; end: 10a56146b;  */

void FUN_10a5613b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 100);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a56146c; end: 10a561567;  */

void FUN_10a56146c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a56121c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a561554);
    (*pcVar2)();
  }
  fVar14 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar14 = 0.0;
  }
  if (fVar14 <= 0.001) {
    fVar14 = 0.001;
  }
  *(float *)((long)param_2 + 100) = fVar14;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a561568; end: 10a5615cf;  */

void FUN_10a561568(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a561568(plVar4,param_2);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar4 + 0xc);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5615d0; end: 10a56168b;  */

void FUN_10a5615d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0xc);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a56168c; end: 10a56177f;  */

void FUN_10a56168c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a56121c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a56176c);
    (*pcVar2)();
  }
  fVar14 = ABS((float)*(double *)(param_4 + 2));
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar14 = 0.0;
  }
  *(float *)(param_2 + 0xc) = fVar14;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a561780; end: 10a56184b;  */

void FUN_10a561780(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[0xd];
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a56184c; end: 10a56190f;  */

void FUN_10a56184c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[0xd] = *param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a561910; end: 10a5619db;  */

void FUN_10a561910(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[0xe];
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a5619dc; end: 10a561a9f;  */

void FUN_10a5619dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[0xe] = *param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a561aa0; end: 10a561b5b;  */

void FUN_10a561aa0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x84);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a561b5c; end: 10a561c4b;  */

void FUN_10a561b5c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a56121c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a561c38);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x84) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a561c4c; end: 10a561d07;  */

void FUN_10a561c4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0xf);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a561d08; end: 10a561df7;  */

void FUN_10a561d08(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a56121c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a561de4);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0xf) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a561df8; end: 10a561eb3;  */

void FUN_10a561df8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x7c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a561eb4; end: 10a561fa3;  */

void FUN_10a561eb4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a56121c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a561f90);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x7c) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a561fa4; end: 10a56205f;  */

void FUN_10a561fa4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 9);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 & 1;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a562060; end: 10a56212b;  */

void FUN_10a562060(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xfe | (byte)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a56212c; end: 10a5621e7;  */

void FUN_10a56212c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 9);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 1 & 1;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5621e8; end: 10a5622bf;  */

void FUN_10a5621e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 2;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xfd | bVar7;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a5622c0; end: 10a56237b;  */

void FUN_10a5622c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 9);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 2 & 1;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a56237c; end: 10a562453;  */

void FUN_10a56237c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 4;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xfb | bVar7;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a562454; end: 10a56250f;  */

void FUN_10a562454(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a561568(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 9);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 3 & 1;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a562510; end: 10a5625e7;  */

void FUN_10a562510(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a56121c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 8;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xf7 | bVar7;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}


