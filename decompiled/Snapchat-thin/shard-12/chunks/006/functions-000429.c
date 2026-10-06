/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109420f7c; end: 10942231f;  */

void FUN_109420f7c(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  double *pdVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  double *pdVar15;
  long lVar16;
  double *pdVar17;
  long lVar18;
  int *piVar19;
  double *pdVar20;
  int *piVar21;
  double *pdVar22;
  long lVar23;
  ulong uVar24;
  double dVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dStack_290;
  double dStack_288;
  double *pdStack_278;
  double *pdStack_240;
  double *pdStack_238;
  double *pdStack_230;
  undefined1 auStack_228 [72];
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined4 *puStack_1a0;
  double **ppdStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined4 *puStack_150;
  double **ppdStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined4 *puStack_d0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x1e);
  lVar18 = *(long *)(param_1 + 0x20);
  if (lVar16 == lVar18) {
    uVar7 = 0;
    uVar9 = 2;
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    lVar23 = lVar16;
    do {
      if (*(int **)(lVar23 + 8) != (int *)0x0) {
        iVar2 = **(int **)(lVar23 + 8);
        if (iVar2 - 3U < 2) {
          uVar10 = uVar10 + 1;
        }
        if (iVar2 != 0) {
          uVar7 = uVar7 + 1;
        }
      }
      lVar23 = lVar23 + 0x48;
    } while (lVar23 != lVar18);
    uVar9 = 2;
    if (2 < uVar10) {
      uVar9 = 4;
    }
  }
  uVar10 = (lVar18 - lVar16 >> 3) * -0x71c71c71c71c71c7;
  uVar12 = uVar10 - 1;
  if ((uint)param_1[1] < uVar12) {
    uVar7 = *(ulong *)(param_1 + 2);
LAB_109421058:
    plVar13 = (long *)(lVar16 + uVar7 * 0x48 + 0x50);
    do {
      uVar7 = uVar7 + 1;
      lVar16 = *plVar13;
      plVar13 = plVar13 + 9;
    } while (uVar7 < uVar12 && lVar16 != 0);
    *(ulong *)(param_1 + 2) = uVar7;
    if (uVar10 <= uVar7) {
LAB_10942227c:
      FUN_109389068(&UNK_10f56d3e6,0x10f);
      goto LAB_1094222dc;
    }
LAB_109421084:
    param_1[1] = param_1[1] + 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((uVar7 < uVar10) && (uVar7 = *(ulong *)(param_1 + 2), uVar7 < uVar12)) goto LAB_109421058;
    pdStack_240 = (double *)0x0;
    pdStack_238 = (double *)0x0;
    pdStack_230 = (double *)0x0;
    if (lVar16 != lVar18) {
      pdVar17 = (double *)0x0;
      pdVar22 = (double *)0x0;
      uVar7 = 0;
      pdVar8 = (double *)0x0;
      pdVar15 = (double *)0x0;
      do {
        if (pdVar8 < pdVar22) {
          pdVar20 = pdVar8 + 1;
          *pdVar8 = 1.79769313486232e+308;
          pdStack_278 = pdVar15;
        }
        else {
          uVar10 = ((long)pdVar8 - (long)pdVar15 >> 3) + 1;
          if (uVar10 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_1094222dc;
          }
          uVar12 = (long)pdVar22 - (long)pdVar15 >> 2;
          if (uVar12 <= uVar10) {
            uVar12 = uVar10;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar22 - (long)pdVar15)) {
            uVar12 = 0x1fffffffffffffff;
          }
          if (uVar12 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1094222dc;
          }
          pdVar17 = (double *)(uVar12 << 3);
          __Znwm();
          puVar1 = (undefined8 *)((long)pdVar17 + ((long)pdVar8 - (long)pdVar15));
          pdVar22 = pdVar17 + uVar12;
          pdVar20 = (double *)(puVar1 + 1);
          *puVar1 = 0x7fefffffffffffff;
          _memcpy();
          pdStack_278 = pdVar17;
          pdStack_240 = pdVar17;
          pdStack_230 = pdVar22;
          if (pdVar15 != (double *)0x0) {
            pdStack_238 = pdVar20;
            __ZdlPv(pdVar15);
            lVar16 = *(long *)(param_1 + 0x1e);
            lVar18 = *(long *)(param_1 + 0x20);
          }
        }
        piVar21 = *(int **)(lVar16 + uVar7 * 0x48 + 8);
        pdStack_238 = pdVar20;
        if (*piVar21 != 0 && lVar18 != lVar16) {
          uVar10 = 0;
          lVar23 = 8;
          do {
            if (uVar7 != uVar10) {
              piVar19 = *(int **)(lVar16 + lVar23);
              if (*piVar19 != 0) {
                if (param_1[0x28] == 1) {
                  dStack_1c8 = *(double *)(piVar21 + 0xb2);
                  dStack_1e0 = -*(double *)(piVar21 + 0xac);
                  dStack_1d8 = -*(double *)(piVar21 + 0xae);
                  dStack_1d0 = -*(double *)(piVar21 + 0xb0);
                  dVar30 = SQRT(dStack_1e0 * dStack_1e0 + dStack_1d0 * dStack_1d0 +
                                dStack_1d8 * dStack_1d8 + dStack_1c8 * dStack_1c8);
                  dStack_1e0 = dStack_1e0 / dVar30;
                  dStack_1d8 = dStack_1d8 / dVar30;
                  dStack_1d0 = dStack_1d0 / dVar30;
                  dStack_1c8 = dStack_1c8 / dVar30;
                  dVar30 = -*(double *)(piVar21 + 0xb4);
                  dVar27 = -*(double *)(piVar21 + 0xb6);
                  dVar32 = *(double *)(piVar21 + 0xb8);
                  dVar38 = -dStack_1d0 * dVar27 - dVar32 * dStack_1d8;
                  dVar45 = dVar32 * dStack_1e0 + dVar30 * dStack_1d0;
                  dVar30 = -dStack_1d8 * dVar30 + dStack_1e0 * dVar27;
                  dVar38 = dVar38 + dVar38;
                  dVar45 = dVar45 + dVar45;
                  dVar30 = dVar30 + dVar30;
                  dStack_1c0 = (dVar38 * dStack_1c8 - *(double *)(piVar21 + 0xb4)) +
                               -dStack_1d0 * dVar45 + dVar30 * dStack_1d8;
                  dStack_1b8 = (dVar45 * dStack_1c8 - *(double *)(piVar21 + 0xb6)) +
                               -(dStack_1e0 * dVar30) + dVar38 * dStack_1d0;
                  dStack_1b0 = (dVar30 * dStack_1c8 - dVar32) +
                               -dStack_1d8 * dVar38 + dStack_1e0 * dVar45;
                  func_0x00010937fbc4(&puStack_150,&dStack_1e0);
                  dStack_178 = dStack_128;
                  dStack_180 = dStack_130;
                  uStack_168 = uStack_118;
                  dStack_170 = dStack_120;
                  dStack_160 = dStack_110;
                  ppdStack_198 = ppdStack_148;
                  puStack_1a0 = puStack_150;
                  dStack_188 = dStack_138;
                  dStack_190 = dStack_140;
                  dVar45 = *(double *)(piVar19 + 0xae);
                  dVar27 = *(double *)(piVar19 + 0xac);
                  dVar38 = *(double *)(piVar19 + 0xb2);
                  dVar30 = *(double *)(piVar19 + 0xb0);
                  auVar40._0_8_ = dStack_1e0 * dVar30 - dStack_1d0 * dVar27;
                  dVar32 = dStack_1d8 * dVar30 - dStack_1c8 * dVar27;
                  auVar40[8] = SUB81(dVar32,0);
                  auVar40[9] = (undefined1)((ulong)dVar32 >> 8);
                  auVar40[10] = (undefined1)((ulong)dVar32 >> 0x10);
                  auVar40[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                  auVar40[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                  auVar40[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                  auVar40[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                  auVar40[0xf] = (byte)((ulong)dVar32 >> 0x38) ^ 0x80;
                  auVar43 = NEON_ext(auVar40,auVar40,8,1);
                  puStack_150 = (undefined4 *)
                                (dStack_1e0 * dVar38 + dStack_1d0 * dVar45 + auVar43._0_8_);
                  ppdStack_148 = (double **)
                                 (dStack_1d8 * dVar38 + dStack_1c8 * dVar45 + auVar43._8_8_);
                  dVar32 = dStack_1d8 * dVar27 + dStack_1c8 * dVar30;
                  auVar43._0_8_ = -(dStack_1e0 * dVar27 + dStack_1d0 * dVar30);
                  auVar43[8] = SUB81(dVar32,0);
                  auVar43[9] = (undefined1)((ulong)dVar32 >> 8);
                  auVar43[10] = (undefined1)((ulong)dVar32 >> 0x10);
                  auVar43[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                  auVar43[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                  auVar43[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                  auVar43[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                  auVar43[0xf] = (undefined1)((ulong)dVar32 >> 0x38);
                  auVar43 = NEON_ext(auVar43,auVar43,8,1);
                  dStack_140 = (dStack_1d0 * dVar38 - dStack_1e0 * dVar45) + auVar43._0_8_;
                  dStack_138 = (dStack_1c8 * dVar38 - dStack_1d8 * dVar45) + auVar43._8_8_;
                  dVar32 = (double)puStack_150 * (double)puStack_150 + dStack_140 * dStack_140 +
                           (double)ppdStack_148 * (double)ppdStack_148 + dStack_138 * dStack_138;
                  if (dVar32 != 1.0) {
                    dVar32 = 2.0 / (dVar32 + 1.0);
                    puStack_150 = (undefined4 *)((double)puStack_150 * dVar32);
                    ppdStack_148 = (double **)((double)ppdStack_148 * dVar32);
                    dStack_140 = dStack_140 * dVar32;
                    dStack_138 = dStack_138 * dVar32;
                  }
                  dVar28 = -(dVar30 * dStack_1b8) + dStack_1b0 * dVar45;
                  dVar46 = -(dVar27 * dStack_1b0) + dStack_1c0 * dVar30;
                  dVar32 = -(dVar45 * dStack_1c0) + dStack_1b8 * dVar27;
                  dVar28 = dVar28 + dVar28;
                  dVar46 = dVar46 + dVar46;
                  dVar32 = dVar32 + dVar32;
                  dStack_130 = *(double *)(piVar19 + 0xb4) +
                               dStack_1c0 + dVar28 * dVar38 + -dVar30 * dVar46 + dVar32 * dVar45;
                  dStack_128 = *(double *)(piVar19 + 0xb6) +
                               dStack_1b8 + dVar46 * dVar38 + -(dVar27 * dVar32) + dVar28 * dVar30;
                  dStack_120 = *(double *)(piVar19 + 0xb8) +
                               dStack_1b0 + dVar32 * dVar38 + -dVar45 * dVar28 + dVar27 * dVar46;
                  func_0x00010937fbc4(auStack_228,&puStack_150);
                  dStack_288 = dStack_128;
                  dStack_290 = dStack_130;
                  dStack_1c8 = *(double *)(piVar19 + 0xb2);
                  dStack_1e0 = -*(double *)(piVar19 + 0xac);
                  dStack_1d8 = -*(double *)(piVar19 + 0xae);
                  dStack_1d0 = -*(double *)(piVar19 + 0xb0);
                  dVar30 = SQRT(dStack_1e0 * dStack_1e0 + dStack_1d0 * dStack_1d0 +
                                dStack_1d8 * dStack_1d8 + dStack_1c8 * dStack_1c8);
                  dStack_1e0 = dStack_1e0 / dVar30;
                  dStack_1d8 = dStack_1d8 / dVar30;
                  dStack_1d0 = dStack_1d0 / dVar30;
                  dStack_1c8 = dStack_1c8 / dVar30;
                  dVar30 = -*(double *)(piVar19 + 0xb4);
                  dVar27 = -*(double *)(piVar19 + 0xb6);
                  dVar32 = *(double *)(piVar19 + 0xb8);
                  dVar38 = -dStack_1d0 * dVar27 - dVar32 * dStack_1d8;
                  dVar45 = dVar32 * dStack_1e0 + dVar30 * dStack_1d0;
                  dVar30 = -dStack_1d8 * dVar30 + dStack_1e0 * dVar27;
                  dVar38 = dVar38 + dVar38;
                  dVar45 = dVar45 + dVar45;
                  dVar30 = dVar30 + dVar30;
                  dStack_1c0 = (dVar38 * dStack_1c8 - *(double *)(piVar19 + 0xb4)) +
                               -dStack_1d0 * dVar45 + dVar30 * dStack_1d8;
                  dStack_1b8 = (dVar45 * dStack_1c8 - *(double *)(piVar19 + 0xb6)) +
                               -(dStack_1e0 * dVar30) + dVar38 * dStack_1d0;
                  dStack_1b0 = (dVar30 * dStack_1c8 - dVar32) +
                               -dStack_1d8 * dVar38 + dStack_1e0 * dVar45;
                  func_0x00010937fbc4(&puStack_150,&dStack_1e0);
                  dStack_178 = dStack_128;
                  dStack_180 = dStack_130;
                  uStack_168 = uStack_118;
                  dStack_170 = dStack_120;
                  dStack_160 = dStack_110;
                  ppdStack_198 = ppdStack_148;
                  puStack_1a0 = puStack_150;
                  dStack_188 = dStack_138;
                  dStack_190 = dStack_140;
                  dVar45 = *(double *)(piVar21 + 0xae);
                  dVar27 = *(double *)(piVar21 + 0xac);
                  dVar38 = *(double *)(piVar21 + 0xb2);
                  dVar30 = *(double *)(piVar21 + 0xb0);
                  auVar41._0_8_ = dStack_1e0 * dVar30 - dStack_1d0 * dVar27;
                  dVar32 = dStack_1d8 * dVar30 - dStack_1c8 * dVar27;
                  auVar41[8] = SUB81(dVar32,0);
                  auVar41[9] = (undefined1)((ulong)dVar32 >> 8);
                  auVar41[10] = (undefined1)((ulong)dVar32 >> 0x10);
                  auVar41[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                  auVar41[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                  auVar41[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                  auVar41[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                  auVar41[0xf] = (byte)((ulong)dVar32 >> 0x38) ^ 0x80;
                  auVar43 = NEON_ext(auVar41,auVar41,8,1);
                  puStack_150 = (undefined4 *)
                                (dStack_1e0 * dVar38 + dStack_1d0 * dVar45 + auVar43._0_8_);
                  ppdStack_148 = (double **)
                                 (dStack_1d8 * dVar38 + dStack_1c8 * dVar45 + auVar43._8_8_);
                  dVar32 = dStack_1d8 * dVar27 + dStack_1c8 * dVar30;
                  auVar35._0_8_ = -(dStack_1e0 * dVar27 + dStack_1d0 * dVar30);
                  auVar35[8] = SUB81(dVar32,0);
                  auVar35[9] = (undefined1)((ulong)dVar32 >> 8);
                  auVar35[10] = (undefined1)((ulong)dVar32 >> 0x10);
                  auVar35[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                  auVar35[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                  auVar35[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                  auVar35[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                  auVar35[0xf] = (undefined1)((ulong)dVar32 >> 0x38);
                  auVar43 = NEON_ext(auVar35,auVar35,8,1);
                  dStack_140 = (dStack_1d0 * dVar38 - dStack_1e0 * dVar45) + auVar43._0_8_;
                  dStack_138 = (dStack_1c8 * dVar38 - dStack_1d8 * dVar45) + auVar43._8_8_;
                  dVar32 = (double)puStack_150 * (double)puStack_150 + dStack_140 * dStack_140 +
                           (double)ppdStack_148 * (double)ppdStack_148 + dStack_138 * dStack_138;
                  if (dVar32 != 1.0) {
                    dVar32 = 2.0 / (dVar32 + 1.0);
                    puStack_150 = (undefined4 *)((double)puStack_150 * dVar32);
                    ppdStack_148 = (double **)((double)ppdStack_148 * dVar32);
                    dStack_140 = dStack_140 * dVar32;
                    dStack_138 = dStack_138 * dVar32;
                  }
                  dVar28 = -(dVar30 * dStack_1b8) + dStack_1b0 * dVar45;
                  dVar46 = -(dVar27 * dStack_1b0) + dStack_1c0 * dVar30;
                  dVar32 = -(dVar45 * dStack_1c0) + dStack_1b8 * dVar27;
                  dVar28 = dVar28 + dVar28;
                  dVar46 = dVar46 + dVar46;
                  dVar32 = dVar32 + dVar32;
                  dStack_130 = *(double *)(piVar21 + 0xb4) +
                               dStack_1c0 + dVar28 * dVar38 + -dVar30 * dVar46 + dVar32 * dVar45;
                  dStack_128 = *(double *)(piVar21 + 0xb6) +
                               dStack_1b8 + dVar46 * dVar38 + -(dVar27 * dVar32) + dVar28 * dVar30;
                  dStack_120 = *(double *)(piVar21 + 0xb8) +
                               dStack_1b0 + dVar32 * dVar38 + -dVar45 * dVar28 + dVar27 * dVar46;
                  func_0x00010937fbc4(auStack_228,&puStack_150);
LAB_1094220c0:
                  dVar38 = SQRT(dStack_290 * dStack_290 + dStack_288 * dStack_288);
                  dVar30 = SQRT(dStack_130 * dStack_130 + dStack_128 * dStack_128);
                  if (dVar30 <= dVar38) {
                    dVar30 = dVar38;
                  }
                }
                else if (param_1[0x28] == 2) {
                  if (1 < *piVar19 - 3U && 1 < **(int **)(lVar16 + uVar7 * 0x48 + 8) - 3U) {
                    dStack_1c8 = *(double *)(piVar21 + 0xb2);
                    dStack_1e0 = -*(double *)(piVar21 + 0xac);
                    dStack_1d8 = -*(double *)(piVar21 + 0xae);
                    dStack_1d0 = -*(double *)(piVar21 + 0xb0);
                    dVar30 = SQRT(dStack_1e0 * dStack_1e0 + dStack_1d0 * dStack_1d0 +
                                  dStack_1d8 * dStack_1d8 + dStack_1c8 * dStack_1c8);
                    dStack_1e0 = dStack_1e0 / dVar30;
                    dStack_1d8 = dStack_1d8 / dVar30;
                    dStack_1d0 = dStack_1d0 / dVar30;
                    dStack_1c8 = dStack_1c8 / dVar30;
                    dVar30 = -*(double *)(piVar21 + 0xb4);
                    dVar27 = -*(double *)(piVar21 + 0xb6);
                    dVar32 = *(double *)(piVar21 + 0xb8);
                    dVar38 = -dStack_1d0 * dVar27 - dVar32 * dStack_1d8;
                    dVar45 = dVar32 * dStack_1e0 + dVar30 * dStack_1d0;
                    dVar30 = -dStack_1d8 * dVar30 + dStack_1e0 * dVar27;
                    dVar38 = dVar38 + dVar38;
                    dVar45 = dVar45 + dVar45;
                    dVar30 = dVar30 + dVar30;
                    dStack_1c0 = (dVar38 * dStack_1c8 - *(double *)(piVar21 + 0xb4)) +
                                 -dStack_1d0 * dVar45 + dVar30 * dStack_1d8;
                    dStack_1b8 = (dVar45 * dStack_1c8 - *(double *)(piVar21 + 0xb6)) +
                                 -(dStack_1e0 * dVar30) + dVar38 * dStack_1d0;
                    dStack_1b0 = (dVar30 * dStack_1c8 - dVar32) +
                                 -dStack_1d8 * dVar38 + dStack_1e0 * dVar45;
                    func_0x00010937fbc4(&puStack_150,&dStack_1e0);
                    dStack_178 = dStack_128;
                    dStack_180 = dStack_130;
                    uStack_168 = uStack_118;
                    dStack_170 = dStack_120;
                    dStack_160 = dStack_110;
                    ppdStack_198 = ppdStack_148;
                    puStack_1a0 = puStack_150;
                    dStack_188 = dStack_138;
                    dStack_190 = dStack_140;
                    dVar45 = *(double *)(piVar19 + 0xae);
                    dVar27 = *(double *)(piVar19 + 0xac);
                    dVar38 = *(double *)(piVar19 + 0xb2);
                    dVar30 = *(double *)(piVar19 + 0xb0);
                    auVar42._0_8_ = dStack_1e0 * dVar30 - dStack_1d0 * dVar27;
                    dVar32 = dStack_1d8 * dVar30 - dStack_1c8 * dVar27;
                    auVar42[8] = SUB81(dVar32,0);
                    auVar42[9] = (undefined1)((ulong)dVar32 >> 8);
                    auVar42[10] = (undefined1)((ulong)dVar32 >> 0x10);
                    auVar42[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                    auVar42[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                    auVar42[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                    auVar42[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                    auVar42[0xf] = (byte)((ulong)dVar32 >> 0x38) ^ 0x80;
                    auVar43 = NEON_ext(auVar42,auVar42,8,1);
                    puStack_150 = (undefined4 *)
                                  (dStack_1e0 * dVar38 + dStack_1d0 * dVar45 + auVar43._0_8_);
                    ppdStack_148 = (double **)
                                   (dStack_1d8 * dVar38 + dStack_1c8 * dVar45 + auVar43._8_8_);
                    dVar32 = dStack_1d8 * dVar27 + dStack_1c8 * dVar30;
                    auVar36._0_8_ = -(dStack_1e0 * dVar27 + dStack_1d0 * dVar30);
                    auVar36[8] = SUB81(dVar32,0);
                    auVar36[9] = (undefined1)((ulong)dVar32 >> 8);
                    auVar36[10] = (undefined1)((ulong)dVar32 >> 0x10);
                    auVar36[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                    auVar36[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                    auVar36[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                    auVar36[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                    auVar36[0xf] = (undefined1)((ulong)dVar32 >> 0x38);
                    auVar43 = NEON_ext(auVar36,auVar36,8,1);
                    dStack_140 = (dStack_1d0 * dVar38 - dStack_1e0 * dVar45) + auVar43._0_8_;
                    dStack_138 = (dStack_1c8 * dVar38 - dStack_1d8 * dVar45) + auVar43._8_8_;
                    dVar32 = (double)puStack_150 * (double)puStack_150 + dStack_140 * dStack_140 +
                             (double)ppdStack_148 * (double)ppdStack_148 + dStack_138 * dStack_138;
                    if (dVar32 != 1.0) {
                      dVar32 = 2.0 / (dVar32 + 1.0);
                      puStack_150 = (undefined4 *)((double)puStack_150 * dVar32);
                      ppdStack_148 = (double **)((double)ppdStack_148 * dVar32);
                      dStack_140 = dStack_140 * dVar32;
                      dStack_138 = dStack_138 * dVar32;
                    }
                    dVar28 = -(dVar30 * dStack_1b8) + dStack_1b0 * dVar45;
                    dVar46 = -(dVar27 * dStack_1b0) + dStack_1c0 * dVar30;
                    dVar32 = -(dVar45 * dStack_1c0) + dStack_1b8 * dVar27;
                    dVar28 = dVar28 + dVar28;
                    dVar46 = dVar46 + dVar46;
                    dVar32 = dVar32 + dVar32;
                    dStack_130 = *(double *)(piVar19 + 0xb4) +
                                 dStack_1c0 + dVar28 * dVar38 + -dVar30 * dVar46 + dVar32 * dVar45;
                    dStack_128 = *(double *)(piVar19 + 0xb6) +
                                 dStack_1b8 + dVar46 * dVar38 + -(dVar27 * dVar32) + dVar28 * dVar30
                    ;
                    dStack_120 = *(double *)(piVar19 + 0xb8) +
                                 dStack_1b0 + dVar32 * dVar38 + -dVar45 * dVar28 + dVar27 * dVar46;
                    func_0x00010937fbc4(auStack_228,&puStack_150);
                    dStack_288 = dStack_128;
                    dStack_290 = dStack_130;
                    dStack_1c8 = *(double *)(piVar19 + 0xb2);
                    dStack_1e0 = -*(double *)(piVar19 + 0xac);
                    dStack_1d8 = -*(double *)(piVar19 + 0xae);
                    dStack_1d0 = -*(double *)(piVar19 + 0xb0);
                    dVar30 = SQRT(dStack_1e0 * dStack_1e0 + dStack_1d0 * dStack_1d0 +
                                  dStack_1d8 * dStack_1d8 + dStack_1c8 * dStack_1c8);
                    dStack_1e0 = dStack_1e0 / dVar30;
                    dStack_1d8 = dStack_1d8 / dVar30;
                    dStack_1d0 = dStack_1d0 / dVar30;
                    dStack_1c8 = dStack_1c8 / dVar30;
                    dVar30 = -*(double *)(piVar19 + 0xb4);
                    dVar27 = -*(double *)(piVar19 + 0xb6);
                    dVar32 = *(double *)(piVar19 + 0xb8);
                    dVar38 = -dStack_1d0 * dVar27 - dVar32 * dStack_1d8;
                    dVar45 = dVar32 * dStack_1e0 + dVar30 * dStack_1d0;
                    dVar30 = -dStack_1d8 * dVar30 + dStack_1e0 * dVar27;
                    dVar38 = dVar38 + dVar38;
                    dVar45 = dVar45 + dVar45;
                    dVar30 = dVar30 + dVar30;
                    dStack_1c0 = (dVar38 * dStack_1c8 - *(double *)(piVar19 + 0xb4)) +
                                 -dStack_1d0 * dVar45 + dVar30 * dStack_1d8;
                    dStack_1b8 = (dVar45 * dStack_1c8 - *(double *)(piVar19 + 0xb6)) +
                                 -(dStack_1e0 * dVar30) + dVar38 * dStack_1d0;
                    dStack_1b0 = (dVar30 * dStack_1c8 - dVar32) +
                                 -dStack_1d8 * dVar38 + dStack_1e0 * dVar45;
                    func_0x00010937fbc4(&puStack_150,&dStack_1e0);
                    dStack_178 = dStack_128;
                    dStack_180 = dStack_130;
                    uStack_168 = uStack_118;
                    dStack_170 = dStack_120;
                    dStack_160 = dStack_110;
                    ppdStack_198 = ppdStack_148;
                    puStack_1a0 = puStack_150;
                    dStack_188 = dStack_138;
                    dStack_190 = dStack_140;
                    dVar45 = *(double *)(piVar21 + 0xae);
                    dVar27 = *(double *)(piVar21 + 0xac);
                    dVar38 = *(double *)(piVar21 + 0xb2);
                    dVar30 = *(double *)(piVar21 + 0xb0);
                    auVar44._0_8_ = dStack_1e0 * dVar30 - dStack_1d0 * dVar27;
                    dVar32 = dStack_1d8 * dVar30 - dStack_1c8 * dVar27;
                    auVar44[8] = SUB81(dVar32,0);
                    auVar44[9] = (undefined1)((ulong)dVar32 >> 8);
                    auVar44[10] = (undefined1)((ulong)dVar32 >> 0x10);
                    auVar44[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                    auVar44[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                    auVar44[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                    auVar44[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                    auVar44[0xf] = (byte)((ulong)dVar32 >> 0x38) ^ 0x80;
                    auVar43 = NEON_ext(auVar44,auVar44,8,1);
                    puStack_150 = (undefined4 *)
                                  (dStack_1e0 * dVar38 + dStack_1d0 * dVar45 + auVar43._0_8_);
                    ppdStack_148 = (double **)
                                   (dStack_1d8 * dVar38 + dStack_1c8 * dVar45 + auVar43._8_8_);
                    dVar32 = dStack_1d8 * dVar27 + dStack_1c8 * dVar30;
                    auVar37._0_8_ = -(dStack_1e0 * dVar27 + dStack_1d0 * dVar30);
                    auVar37[8] = SUB81(dVar32,0);
                    auVar37[9] = (undefined1)((ulong)dVar32 >> 8);
                    auVar37[10] = (undefined1)((ulong)dVar32 >> 0x10);
                    auVar37[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
                    auVar37[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
                    auVar37[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
                    auVar37[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
                    auVar37[0xf] = (undefined1)((ulong)dVar32 >> 0x38);
                    auVar43 = NEON_ext(auVar37,auVar37,8,1);
                    dStack_140 = (dStack_1d0 * dVar38 - dStack_1e0 * dVar45) + auVar43._0_8_;
                    dStack_138 = (dStack_1c8 * dVar38 - dStack_1d8 * dVar45) + auVar43._8_8_;
                    dVar32 = (double)puStack_150 * (double)puStack_150 + dStack_140 * dStack_140 +
                             (double)ppdStack_148 * (double)ppdStack_148 + dStack_138 * dStack_138;
                    if (dVar32 != 1.0) {
                      dVar32 = 2.0 / (dVar32 + 1.0);
                      puStack_150 = (undefined4 *)((double)puStack_150 * dVar32);
                      ppdStack_148 = (double **)((double)ppdStack_148 * dVar32);
                      dStack_140 = dStack_140 * dVar32;
                      dStack_138 = dStack_138 * dVar32;
                    }
                    dVar28 = -(dVar30 * dStack_1b8) + dStack_1b0 * dVar45;
                    dVar46 = -(dVar27 * dStack_1b0) + dStack_1c0 * dVar30;
                    dVar32 = -(dVar45 * dStack_1c0) + dStack_1b8 * dVar27;
                    dVar28 = dVar28 + dVar28;
                    dVar46 = dVar46 + dVar46;
                    dVar32 = dVar32 + dVar32;
                    dStack_130 = *(double *)(piVar21 + 0xb4) +
                                 dStack_1c0 + dVar28 * dVar38 + -dVar30 * dVar46 + dVar32 * dVar45;
                    dStack_128 = *(double *)(piVar21 + 0xb6) +
                                 dStack_1b8 + dVar46 * dVar38 + -(dVar27 * dVar32) + dVar28 * dVar30
                    ;
                    dStack_120 = *(double *)(piVar21 + 0xb8) +
                                 dStack_1b0 + dVar32 * dVar38 + -dVar45 * dVar28 + dVar27 * dVar46;
                    func_0x00010937fbc4(auStack_228,&puStack_150);
                    goto LAB_1094220c0;
                  }
                  dStack_138 = *(double *)(piVar21 + 0xb2);
                  dVar30 = -*(double *)(piVar21 + 0xac);
                  dVar38 = -*(double *)(piVar21 + 0xae);
                  dStack_140 = -*(double *)(piVar21 + 0xb0);
                  dVar27 = SQRT(dVar30 * dVar30 + dStack_140 * dStack_140 +
                                dVar38 * dVar38 + dStack_138 * dStack_138);
                  puStack_150 = (undefined4 *)(dVar30 / dVar27);
                  ppdStack_148 = (double **)(dVar38 / dVar27);
                  dStack_140 = dStack_140 / dVar27;
                  dStack_138 = dStack_138 / dVar27;
                  dVar30 = -*(double *)(piVar21 + 0xb4);
                  dVar27 = -*(double *)(piVar21 + 0xb6);
                  dVar32 = *(double *)(piVar21 + 0xb8);
                  dVar38 = -dStack_140 * dVar27 - dVar32 * (double)ppdStack_148;
                  dVar45 = dVar32 * (double)puStack_150 + dVar30 * dStack_140;
                  dVar30 = -(double)ppdStack_148 * dVar30 + (double)puStack_150 * dVar27;
                  dVar38 = dVar38 + dVar38;
                  dVar45 = dVar45 + dVar45;
                  dVar30 = dVar30 + dVar30;
                  dStack_130 = (dVar38 * dStack_138 - *(double *)(piVar21 + 0xb4)) +
                               -dStack_140 * dVar45 + dVar30 * (double)ppdStack_148;
                  dStack_128 = (dVar45 * dStack_138 - *(double *)(piVar21 + 0xb6)) +
                               -((double)puStack_150 * dVar30) + dVar38 * dStack_140;
                  dStack_120 = (dVar30 * dStack_138 - dVar32) +
                               -(double)ppdStack_148 * dVar38 + (double)puStack_150 * dVar45;
                  func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                  dVar27 = dStack_120;
                  dVar38 = dStack_128;
                  dVar30 = dStack_130;
                  dStack_138 = *(double *)(piVar19 + 0xb2);
                  dVar45 = -*(double *)(piVar19 + 0xac);
                  dVar32 = -*(double *)(piVar19 + 0xae);
                  dStack_140 = -*(double *)(piVar19 + 0xb0);
                  dVar28 = SQRT(dVar45 * dVar45 + dStack_140 * dStack_140 +
                                dVar32 * dVar32 + dStack_138 * dStack_138);
                  puStack_150 = (undefined4 *)(dVar45 / dVar28);
                  ppdStack_148 = (double **)(dVar32 / dVar28);
                  dStack_140 = dStack_140 / dVar28;
                  dStack_138 = dStack_138 / dVar28;
                  dVar45 = -*(double *)(piVar19 + 0xb4);
                  dVar28 = -*(double *)(piVar19 + 0xb6);
                  dVar33 = *(double *)(piVar19 + 0xb8);
                  dVar32 = -dStack_140 * dVar28 - dVar33 * (double)ppdStack_148;
                  dVar46 = dVar33 * (double)puStack_150 + dVar45 * dStack_140;
                  dVar45 = -(double)ppdStack_148 * dVar45 + (double)puStack_150 * dVar28;
                  dVar32 = dVar32 + dVar32;
                  dVar46 = dVar46 + dVar46;
                  dVar45 = dVar45 + dVar45;
                  dStack_130 = (dVar32 * dStack_138 - *(double *)(piVar19 + 0xb4)) +
                               -dStack_140 * dVar46 + dVar45 * (double)ppdStack_148;
                  dStack_128 = (dVar46 * dStack_138 - *(double *)(piVar19 + 0xb6)) +
                               -((double)puStack_150 * dVar45) + dVar32 * dStack_140;
                  dStack_120 = (dVar45 * dStack_138 - dVar33) +
                               -(double)ppdStack_148 * dVar32 + (double)puStack_150 * dVar46;
                  func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                  dVar38 = SQRT((dVar27 - dStack_120) * (dVar27 - dStack_120) +
                                (dVar30 - dStack_130) * (dVar30 - dStack_130) +
                                (dVar38 - dStack_128) * (dVar38 - dStack_128));
                  dVar30 = dVar38;
                  if (dVar38 < *(double *)(param_1 + 0x24)) {
                    dStack_138 = *(double *)(piVar21 + 0xb2);
                    dVar30 = -*(double *)(piVar21 + 0xac);
                    dVar27 = -*(double *)(piVar21 + 0xae);
                    dStack_140 = -*(double *)(piVar21 + 0xb0);
                    dVar45 = SQRT(dVar30 * dVar30 + dStack_140 * dStack_140 +
                                  dVar27 * dVar27 + dStack_138 * dStack_138);
                    puStack_150 = (undefined4 *)(dVar30 / dVar45);
                    ppdStack_148 = (double **)(dVar27 / dVar45);
                    dStack_140 = dStack_140 / dVar45;
                    dStack_138 = dStack_138 / dVar45;
                    dVar30 = -*(double *)(piVar21 + 0xb4);
                    dVar45 = -*(double *)(piVar21 + 0xb6);
                    dVar28 = *(double *)(piVar21 + 0xb8);
                    dVar27 = -dStack_140 * dVar45 - dVar28 * (double)ppdStack_148;
                    dVar32 = dVar28 * (double)puStack_150 + dVar30 * dStack_140;
                    dVar30 = -(double)ppdStack_148 * dVar30 + (double)puStack_150 * dVar45;
                    dVar27 = dVar27 + dVar27;
                    dVar32 = dVar32 + dVar32;
                    dVar30 = dVar30 + dVar30;
                    dStack_130 = (dVar27 * dStack_138 - *(double *)(piVar21 + 0xb4)) +
                                 -dStack_140 * dVar32 + dVar30 * (double)ppdStack_148;
                    dStack_128 = (dVar32 * dStack_138 - *(double *)(piVar21 + 0xb6)) +
                                 -((double)puStack_150 * dVar30) + dVar27 * dStack_140;
                    dStack_120 = (dVar30 * dStack_138 - dVar28) +
                                 -(double)ppdStack_148 * dVar27 + (double)puStack_150 * dVar32;
                    func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                    puVar4 = puStack_1a0;
                    dVar25 = dStack_1a8;
                    dVar33 = dStack_1b0;
                    dVar46 = dStack_1b8;
                    dVar28 = dStack_1c0;
                    dVar32 = dStack_1c8;
                    dVar45 = dStack_1d0;
                    dVar27 = dStack_1d8;
                    dVar30 = dStack_1e0;
                    puStack_d0 = puStack_1a0;
                    dStack_e8 = dStack_1b8;
                    dStack_f0 = dStack_1c0;
                    dStack_d8 = dStack_1a8;
                    dStack_e0 = dStack_1b0;
                    dStack_108 = dStack_1d8;
                    dStack_110 = dStack_1e0;
                    dStack_f8 = dStack_1c8;
                    dStack_100 = dStack_1d0;
                    dStack_138 = *(double *)(piVar19 + 0xb2);
                    dVar31 = -*(double *)(piVar19 + 0xac);
                    dVar39 = -*(double *)(piVar19 + 0xae);
                    dStack_140 = -*(double *)(piVar19 + 0xb0);
                    dVar29 = SQRT(dVar31 * dVar31 + dStack_140 * dStack_140 +
                                  dVar39 * dVar39 + dStack_138 * dStack_138);
                    puStack_150 = (undefined4 *)(dVar31 / dVar29);
                    ppdStack_148 = (double **)(dVar39 / dVar29);
                    dStack_140 = dStack_140 / dVar29;
                    dStack_138 = dStack_138 / dVar29;
                    dVar31 = -*(double *)(piVar19 + 0xb4);
                    dVar29 = -*(double *)(piVar19 + 0xb6);
                    dVar34 = *(double *)(piVar19 + 0xb8);
                    dVar39 = -dStack_140 * dVar29 - dVar34 * (double)ppdStack_148;
                    dVar47 = dVar34 * (double)puStack_150 + dVar31 * dStack_140;
                    dVar31 = -(double)ppdStack_148 * dVar31 + (double)puStack_150 * dVar29;
                    dVar39 = dVar39 + dVar39;
                    dVar47 = dVar47 + dVar47;
                    dVar31 = dVar31 + dVar31;
                    dStack_130 = (dVar39 * dStack_138 - *(double *)(piVar19 + 0xb4)) +
                                 -dStack_140 * dVar47 + dVar31 * (double)ppdStack_148;
                    dStack_128 = (dVar47 * dStack_138 - *(double *)(piVar19 + 0xb6)) +
                                 -((double)puStack_150 * dVar31) + dVar39 * dStack_140;
                    dStack_120 = (dVar31 * dStack_138 - dVar34) +
                                 -(double)ppdStack_148 * dVar39 + (double)puStack_150 * dVar47;
                    func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                    dVar33 = dVar33 + dVar30 * 0.0 + dVar32 * 0.0;
                    dVar25 = dVar25 + dVar27 * 0.0 + dVar28 * 0.0;
                    dVar30 = dVar45 * 0.0 + dVar46 * 0.0 + (double)puVar4;
                    puStack_d0 = puStack_1a0;
                    dStack_e8 = dStack_1b8;
                    dStack_f0 = dStack_1c0;
                    dStack_d8 = dStack_1a8;
                    dStack_e0 = dStack_1b0;
                    dStack_108 = dStack_1d8;
                    dStack_110 = dStack_1e0;
                    dStack_f8 = dStack_1c8;
                    dStack_100 = dStack_1d0;
                    dVar27 = dVar33 * dVar33 + dVar25 * dVar25 + dVar30 * dVar30;
                    if (0.0 < dVar27) {
                      dVar27 = SQRT(dVar27);
                      dVar33 = dVar33 / dVar27;
                      dVar25 = dVar25 / dVar27;
                      dVar30 = dVar30 / dVar27;
                    }
                    dVar27 = dStack_1b0 + dStack_1e0 * 0.0 + dStack_1c8 * 0.0;
                    dVar45 = dStack_1a8 + dStack_1d8 * 0.0 + dStack_1c0 * 0.0;
                    dVar32 = dStack_1d0 * 0.0 + dStack_1b8 * 0.0 + (double)puStack_1a0;
                    dVar28 = dVar27 * dVar27 + dVar45 * dVar45 + dVar32 * dVar32;
                    if (0.0 < dVar28) {
                      dVar28 = SQRT(dVar28);
                      dVar27 = dVar27 / dVar28;
                      dVar45 = dVar45 / dVar28;
                      dVar32 = dVar32 / dVar28;
                    }
                    dVar27 = dVar30 * dVar32 + dVar33 * dVar27 + dVar25 * dVar45;
                    dVar30 = 1.0;
                    if (dVar27 <= 1.0) {
                      dVar30 = dVar27;
                    }
                    dVar45 = -1.0;
                    if (-1.0 <= dVar27) {
                      dVar45 = dVar30;
                    }
                    _acos();
                    dVar30 = 1.79769313486232e+308;
                    if (dVar45 <= 0.5235987755982988) {
                      dVar30 = dVar38;
                    }
                  }
                }
                else {
                  dStack_138 = *(double *)(piVar21 + 0xb2);
                  dVar30 = -*(double *)(piVar21 + 0xac);
                  dVar38 = -*(double *)(piVar21 + 0xae);
                  dStack_140 = -*(double *)(piVar21 + 0xb0);
                  dVar27 = SQRT(dVar30 * dVar30 + dStack_140 * dStack_140 +
                                dVar38 * dVar38 + dStack_138 * dStack_138);
                  puStack_150 = (undefined4 *)(dVar30 / dVar27);
                  ppdStack_148 = (double **)(dVar38 / dVar27);
                  dStack_140 = dStack_140 / dVar27;
                  dStack_138 = dStack_138 / dVar27;
                  dVar30 = -*(double *)(piVar21 + 0xb4);
                  dVar27 = -*(double *)(piVar21 + 0xb6);
                  dVar32 = *(double *)(piVar21 + 0xb8);
                  dVar38 = -dStack_140 * dVar27 - dVar32 * (double)ppdStack_148;
                  dVar45 = dVar32 * (double)puStack_150 + dVar30 * dStack_140;
                  dVar30 = -(double)ppdStack_148 * dVar30 + (double)puStack_150 * dVar27;
                  dVar38 = dVar38 + dVar38;
                  dVar45 = dVar45 + dVar45;
                  dVar30 = dVar30 + dVar30;
                  dStack_130 = (dVar38 * dStack_138 - *(double *)(piVar21 + 0xb4)) +
                               -dStack_140 * dVar45 + dVar30 * (double)ppdStack_148;
                  dStack_128 = (dVar45 * dStack_138 - *(double *)(piVar21 + 0xb6)) +
                               -((double)puStack_150 * dVar30) + dVar38 * dStack_140;
                  dStack_120 = (dVar30 * dStack_138 - dVar32) +
                               -(double)ppdStack_148 * dVar38 + (double)puStack_150 * dVar45;
                  func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                  dVar27 = dStack_120;
                  dVar38 = dStack_128;
                  dVar30 = dStack_130;
                  dStack_138 = *(double *)(piVar19 + 0xb2);
                  dVar45 = -*(double *)(piVar19 + 0xac);
                  dVar32 = -*(double *)(piVar19 + 0xae);
                  dStack_140 = -*(double *)(piVar19 + 0xb0);
                  dVar28 = SQRT(dVar45 * dVar45 + dStack_140 * dStack_140 +
                                dVar32 * dVar32 + dStack_138 * dStack_138);
                  puStack_150 = (undefined4 *)(dVar45 / dVar28);
                  ppdStack_148 = (double **)(dVar32 / dVar28);
                  dStack_140 = dStack_140 / dVar28;
                  dStack_138 = dStack_138 / dVar28;
                  dVar45 = -*(double *)(piVar19 + 0xb4);
                  dVar28 = -*(double *)(piVar19 + 0xb6);
                  dVar33 = *(double *)(piVar19 + 0xb8);
                  dVar32 = -dStack_140 * dVar28 - dVar33 * (double)ppdStack_148;
                  dVar46 = dVar33 * (double)puStack_150 + dVar45 * dStack_140;
                  dVar45 = -(double)ppdStack_148 * dVar45 + (double)puStack_150 * dVar28;
                  dVar32 = dVar32 + dVar32;
                  dVar46 = dVar46 + dVar46;
                  dVar45 = dVar45 + dVar45;
                  dStack_130 = (dVar32 * dStack_138 - *(double *)(piVar19 + 0xb4)) +
                               -dStack_140 * dVar46 + dVar45 * (double)ppdStack_148;
                  dStack_128 = (dVar46 * dStack_138 - *(double *)(piVar19 + 0xb6)) +
                               -((double)puStack_150 * dVar45) + dVar32 * dStack_140;
                  dStack_120 = (dVar45 * dStack_138 - dVar33) +
                               -(double)ppdStack_148 * dVar32 + (double)puStack_150 * dVar46;
                  func_0x00010937fbc4(&dStack_1e0,&puStack_150);
                  dVar30 = SQRT((dVar27 - dStack_120) * (dVar27 - dStack_120) +
                                (dVar30 - dStack_130) * (dVar30 - dStack_130) +
                                (dVar38 - dStack_128) * (dVar38 - dStack_128));
                }
                lVar16 = *(long *)(param_1 + 0x1e);
                if ((1 < **(int **)(lVar16 + uVar7 * 0x48 + 8) - 3U) &&
                   (pdStack_278 = pdVar17, dVar30 < pdVar17[uVar7])) {
                  pdVar17[uVar7] = dVar30;
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar18 = *(long *)(param_1 + 0x20);
            lVar23 = lVar23 + 0x48;
          } while (uVar10 < (ulong)((lVar18 - lVar16 >> 3) * -0x71c71c71c71c71c7));
        }
        uVar7 = uVar7 + 1;
        pdVar8 = pdVar20;
        pdVar15 = pdStack_278;
      } while (uVar7 < (ulong)((lVar18 - lVar16 >> 3) * -0x71c71c71c71c71c7));
      puVar3 = (ulong *)((long)pdVar20 - (long)pdVar17);
      if (puVar3 == (ulong *)0x0) goto LAB_1094222a4;
      if ((long)puVar3 < 0) {
        FUN_1094008f0();
        goto LAB_1094222dc;
      }
      puVar6 = puVar3;
      __Znwm();
      _bzero();
      if (puVar3 + -1 < (ulong *)0x18) {
        uVar10 = 0;
        puVar11 = puVar6;
LAB_1094221ac:
        do {
          puVar14 = puVar11 + 1;
          *puVar11 = uVar10;
          uVar10 = uVar10 + 1;
          puVar11 = puVar14;
        } while (puVar14 != (ulong *)((long)puVar6 + (long)puVar3));
      }
      else {
        uVar7 = ((ulong)(puVar3 + -1) >> 3) + 1;
        uVar10 = uVar7 & 0x3ffffffffffffffc;
        puVar11 = puVar6 + uVar10;
        uVar26 = 1;
        uVar24 = 0;
        puVar14 = puVar6 + 2;
        uVar12 = uVar10;
        do {
          puVar14[-1] = uVar26;
          puVar14[-2] = uVar24;
          puVar14[1] = uVar26 + 2;
          *puVar14 = uVar24 + 2;
          uVar24 = uVar24 + 4;
          uVar26 = uVar26 + 4;
          puVar14 = puVar14 + 4;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
        if (uVar7 != uVar10) goto LAB_1094221ac;
      }
      ppdStack_148 = &pdStack_240;
      puStack_150 = param_1;
      FUN_10942a69c(puVar6,(ulong *)((long)puVar6 + (long)puVar3),&puStack_150,
                    LZCOUNT((ulong)puVar3 >> 3) * -2 + 0x7e,1);
      *(ulong *)(param_1 + 2) = *puVar6;
      if (1 < (uint)param_1[1]) {
        pdVar22 = pdStack_240;
        if ((pdStack_240 != pdStack_238) && (pdStack_240 + 1 != pdStack_238)) {
          dVar30 = *pdStack_240;
          pdVar8 = pdStack_240;
          pdVar15 = pdStack_240 + 1;
          do {
            pdVar17 = pdVar15 + 1;
            pdVar22 = pdVar15;
            dVar38 = *pdVar15;
            if (dVar30 <= *pdVar15) {
              pdVar22 = pdVar8;
              dVar38 = dVar30;
            }
            dVar30 = dVar38;
            pdVar8 = pdVar22;
            pdVar15 = pdVar17;
          } while (pdVar17 != pdStack_238);
        }
        if (*(double *)(param_1 + 0x24) < *pdVar22) {
          *param_1 = uVar9;
        }
      }
      __ZdlPv(puVar6);
      if (pdStack_240 != (double *)0x0) {
        pdStack_238 = pdStack_240;
        __ZdlPv();
      }
      if ((ulong)((*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x1e) >> 3) * -0x71c71c71c71c71c7
                 ) <= *(ulong *)(param_1 + 2)) goto LAB_10942227c;
      goto LAB_109421084;
    }
  }
LAB_1094222a4:
  ppdStack_148 = &pdStack_240;
  puStack_150 = param_1;
  FUN_10942a69c(0,0,&puStack_150,0,1);
  FUN_109389068(&UNK_10f56d3e6,0x101);
LAB_1094222dc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094222e0);
  (*pcVar5)();
}



/* Entry: 109422320; end: 10942241f;  */

void FUN_109422320(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [3];
  undefined8 *puStack_28;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar4 = (*(long *)(param_1 + 0x80) - lVar2 >> 3) * 0x38e38e39;
  if ((int)uVar4 < 1) {
    uVar1 = 0;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    plVar5 = (long *)(lVar2 + 8);
    do {
      if ((uVar1 < *(uint *)(plVar5 + -1)) && (*plVar5 != 0)) {
        uVar1 = uVar3;
      }
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 9;
    } while ((uVar4 & 0x7fffffff) != uVar3);
  }
  lVar2 = *(long *)(lVar2 + uVar1 * 0x48 + 8);
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_109422420(alStack_40,param_1,param_2,&uStack_58);
    puStack_28 = &uStack_58;
    FUN_10942a570(&puStack_28);
  }
  else {
    FUN_109422420(alStack_40,param_1,param_2,lVar2 + 1000);
  }
  if (alStack_40[0] != 0) {
    __ZdlPv(alStack_40[0]);
  }
  return;
}



/* Entry: 109422420; end: 10942281b;  */

void FUN_109422420(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *extraout_x8;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  long *unaff_x21;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 *****pppppuVar28;
  undefined4 uVar29;
  long *unaff_x23;
  long lVar30;
  long *unaff_x24;
  long lVar31;
  long *unaff_x25;
  long unaff_x26;
  ulong uVar32;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uVar33;
  undefined8 ****ppppuVar34;
  undefined8 uVar35;
  undefined8 ****ppppuVar36;
  undefined8 uVar37;
  undefined8 ****ppppuVar38;
  undefined8 uVar39;
  undefined8 ****ppppuVar40;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined8 ***pppuStack_398;
  undefined8 ****ppppuStack_390;
  undefined8 ****ppppuStack_388;
  undefined8 ****ppppuStack_380;
  undefined8 ***pppuStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 ****ppppuStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  long lStack_320;
  ulong uStack_318;
  long *plStack_310;
  long lStack_308;
  undefined4 uStack_300;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined1 uStack_2b9;
  undefined8 ****ppppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
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
  long *plStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1d8;
  long *plStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [32];
  byte bStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar13 = *param_3;
  lStack_158 = param_3[1];
  plVar9 = param_2;
  if (lVar13 != lStack_158) {
    puStack_160 = auStack_a0;
    do {
      param_3 = (long *)*param_4;
      plVar9 = &lStack_150;
      func_0x000109426858(plVar9,param_3,param_4[1],lVar13);
      if (((bStack_80 & 1) == 0) ||
         (unaff_x26 = *(long *)(param_2[2] + (long)*(int *)(lStack_148 + 0x38) * 8), unaff_x26 == 0)
         ) {
        unaff_x23 = (long *)0x68;
        __Znwm();
        unaff_x23[3] = 0;
        unaff_x23[2] = 0;
        unaff_x23[5] = 0;
        unaff_x23[4] = 0;
        unaff_x23[1] = 0;
        *unaff_x23 = 0;
        unaff_x23[6] = -0x4010000000000000;
        *(undefined1 *)(unaff_x23 + 8) = 0;
        *(undefined1 *)(unaff_x23 + 9) = 0;
        unaff_x23[10] = 0;
        unaff_x23[0xb] = 0;
        *(undefined1 *)(unaff_x23 + 0xc) = 0;
        *(undefined4 *)(unaff_x23 + 10) = 1;
        unaff_x24 = (long *)param_2[2];
        puVar25 = (undefined8 *)param_2[3];
        unaff_x25 = (long *)((long)puVar25 - (long)unaff_x24);
        *(int *)(unaff_x23 + 7) = (int)((ulong)unaff_x25 >> 3);
        if (puVar25 < (undefined8 *)param_2[4]) {
          puVar11 = puVar25 + 1;
          *puVar25 = unaff_x23;
          plVar9 = unaff_x23;
        }
        else {
          uVar32 = ((long)unaff_x25 >> 3) + 1;
          if (uVar32 >> 0x3d != 0) {
            FUN_10942ff3c();
            goto LAB_1094227b4;
          }
          uVar18 = param_2[4] - (long)unaff_x24;
          uVar23 = (long)uVar18 >> 2;
          if (uVar23 <= uVar32) {
            uVar23 = uVar32;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar23 = 0x1fffffffffffffff;
          }
          if (uVar23 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1094227b4;
          }
          plVar8 = (long *)(uVar23 << 3);
          __Znwm();
          unaff_x27 = plVar8 + uVar23;
          puVar11 = (undefined8 *)((long)plVar8 + (long)unaff_x25) + 1;
          *(undefined8 *)((long)plVar8 + (long)unaff_x25) = unaff_x23;
          plVar9 = plVar8;
          param_3 = unaff_x24;
          _memcpy();
          param_2[2] = (long)plVar8;
          param_2[3] = (long)puVar11;
          param_2[4] = (long)unaff_x27;
          if (unaff_x24 != (long *)0x0) {
            plVar9 = unaff_x24;
            __ZdlPv();
          }
        }
        param_2[3] = (long)puVar11;
        unaff_x26 = puVar11[-1];
        plVar8 = (long *)param_1[1];
        if (plVar8 < (long *)param_1[2]) goto LAB_109422600;
        unaff_x23 = (long *)*param_1;
        unaff_x24 = (long *)((long)plVar8 - (long)unaff_x23);
        uVar32 = ((long)unaff_x24 >> 3) + 1;
        if (uVar32 >> 0x3d != 0) {
          FUN_10942bc54();
          goto LAB_1094227b4;
        }
        uVar18 = param_1[2] - (long)unaff_x23;
        uVar23 = (long)uVar18 >> 2;
        if (uVar23 <= uVar32) {
          uVar23 = uVar32;
        }
        if (0x7ffffffffffffff7 < uVar18) {
          uVar23 = 0x1fffffffffffffff;
        }
        if (uVar23 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_1094227b4;
        }
        unaff_x25 = (long *)(uVar23 << 3);
        __Znwm();
LAB_109422650:
        unaff_x27 = unaff_x25 + uVar23;
        unaff_x28 = (long *)((long)unaff_x25 + (long)unaff_x24) + 1;
        *(long *)((long)unaff_x25 + (long)unaff_x24) = unaff_x26;
        plVar9 = unaff_x25;
        param_3 = unaff_x23;
        _memcpy();
        *param_1 = (long)unaff_x25;
        param_1[2] = (long)unaff_x27;
        if (unaff_x23 != (long *)0x0) {
          plVar9 = unaff_x23;
          __ZdlPv();
        }
      }
      else {
        *(undefined4 *)(unaff_x26 + 0x50) = 2;
        plVar8 = (long *)param_1[1];
        if ((long *)param_1[2] <= plVar8) {
          unaff_x23 = (long *)*param_1;
          unaff_x24 = (long *)((long)plVar8 - (long)unaff_x23);
          uVar32 = ((long)unaff_x24 >> 3) + 1;
          if (uVar32 >> 0x3d != 0) {
            FUN_10942bc54();
LAB_1094227b4:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1094227b8);
            (*pcVar7)();
          }
          uVar18 = param_1[2] - (long)unaff_x23;
          uVar23 = (long)uVar18 >> 2;
          if (uVar23 <= uVar32) {
            uVar23 = uVar32;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar23 = 0x1fffffffffffffff;
          }
          if (uVar23 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1094227b4;
          }
          unaff_x25 = (long *)(uVar23 << 3);
          __Znwm();
          goto LAB_109422650;
        }
LAB_109422600:
        unaff_x28 = plVar8 + 1;
        *plVar8 = unaff_x26;
      }
      param_1[1] = (long)unaff_x28;
      *(undefined4 *)(lVar13 + 0xb0) = *(undefined4 *)(unaff_x26 + 0x38);
      if (bStack_80 == 1) {
        if (plStack_b8 != (long *)0x0) {
          piVar17 = (int *)((long)plStack_b8 + 0x14);
          do {
            iVar1 = *piVar17;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar5) {
              *piVar17 = iVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((iVar1 + -1 == 0) && (param_3 = plStack_b8, plStack_b8 != (long *)0x0)) {
            plVar9 = (long *)plStack_b8[1];
            if (((long *)plStack_b8[1] == (long *)0x0) &&
               ((plVar9 = plStack_c0, plStack_c0 == (long *)0x0 &&
                (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar9 = plRam000000011382bb80;
            }
            (**(code **)(*plVar9 + 0x30))();
            param_3 = plStack_b8;
          }
        }
        plStack_b8 = (long *)0x0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        if (0 < iStack_ec) {
          lVar19 = 0;
          do {
            *(undefined4 *)(lStack_b0 + lVar19 * 4) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < iStack_ec);
        }
        if (puStack_a8 != puStack_160 && puStack_a8 != (undefined1 *)0x0) {
          plVar9 = *(long **)(puStack_a8 + -8);
          _free();
        }
      }
      lVar13 = lVar13 + 0xc0;
      unaff_x21 = param_2;
    } while (lVar13 != lStack_158);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x000104bd46a0();
    FUN_109426aa4(&lStack_150);
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
  }
  plVar15 = plVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_10942281c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined4 *)0x68;
  plStack_1c0 = unaff_x28;
  plStack_1b8 = unaff_x27;
  lStack_1b0 = unaff_x26;
  plStack_1a8 = unaff_x25;
  plStack_1a0 = unaff_x24;
  plStack_198 = unaff_x23;
  lStack_190 = lVar13;
  plStack_188 = unaff_x21;
  plStack_180 = plVar9;
  plStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  __Znwm();
  *puVar10 = 3;
  *(undefined1 *)(puVar10 + 0x14) = 0;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 0xc) = 0;
  *(undefined8 *)(puVar10 + 10) = 0;
  *(undefined8 *)(puVar10 + 0x16) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  puStack_2c8 = puVar10;
  uStack_2e8 = 0;
  lStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2d0 = 0x3f800000;
  lStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  lStack_320 = 0;
  uStack_300 = 0x3f800000;
  plVar9 = (long *)plVar15[2];
  plVar8 = (long *)plVar15[3];
  plVar26 = param_3;
  if (plVar9 == plVar8) {
    plStack_3b0 = (long *)0x0;
    lVar13 = 0;
  }
  else {
    plStack_3b8 = (long *)0x0;
    plStack_3b0 = (long *)0x0;
    lVar19 = 0;
    do {
      puVar25 = (undefined8 *)*plVar9;
      lVar13 = lVar19;
      if ((*(uint *)(puVar25 + 10) != 0) &&
         (((int)plVar26 == 0 || ((*(uint *)(puVar25 + 10) & 0xfffffffe) == 2)))) {
        puVar11 = (undefined8 *)0x68;
        __Znwm();
        *puVar11 = *puVar25;
        uVar33 = puVar25[2];
        uVar16 = puVar25[1];
        puVar11[3] = puVar25[3];
        puVar11[2] = uVar33;
        puVar11[1] = uVar16;
        uVar33 = puVar25[5];
        uVar16 = puVar25[4];
        puVar11[6] = puVar25[6];
        puVar11[5] = uVar33;
        puVar11[4] = uVar16;
        uVar33 = puVar25[8];
        uVar16 = puVar25[7];
        uVar37 = puVar25[10];
        uVar35 = puVar25[9];
        uVar39 = *(undefined8 *)((long)puVar25 + 0x51);
        *(undefined8 *)((long)puVar11 + 0x59) = *(undefined8 *)((long)puVar25 + 0x59);
        *(undefined8 *)((long)puVar11 + 0x51) = uVar39;
        puVar11[10] = uVar37;
        puVar11[9] = uVar35;
        puVar11[8] = uVar33;
        puVar11[7] = uVar16;
        plStack_338 = (long *)CONCAT44(plStack_338._4_4_,*(undefined4 *)(puVar11 + 7));
        plVar12 = &lStack_2f0;
        uStack_2b0 = &plStack_338;
        FUN_10943064c(plVar12,&plStack_338,&UNK_10dd5b8f9,&uStack_2b0,&puStack_350);
        plVar12[3] = (long)puVar11;
        if ((int)plVar26 != 0) {
          if (plStack_3b0 < plStack_3b8) {
            *plStack_3b0 = (long)puVar11;
            plStack_3b0 = plStack_3b0 + 1;
          }
          else {
            uVar32 = ((long)plStack_3b0 - lVar19 >> 3) + 1;
            if (uVar32 >> 0x3d != 0) {
              FUN_10942bc54();
              goto LAB_109423364;
            }
            uVar23 = (long)plStack_3b8 - lVar19 >> 2;
            if (uVar23 <= uVar32) {
              uVar23 = uVar32;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_3b8 - lVar19)) {
              uVar23 = 0x1fffffffffffffff;
            }
            if (uVar23 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_109423364;
            }
            lVar13 = uVar23 << 3;
            __Znwm();
            plVar26 = (long *)(lVar13 + ((long)plStack_3b0 - lVar19));
            plStack_3b8 = (long *)(lVar13 + uVar23 * 8);
            plStack_3b0 = plVar26 + 1;
            *plVar26 = (long)puVar11;
            _memcpy();
            if (lVar19 != 0) {
              __ZdlPv(lVar19);
            }
          }
        }
        puVar10 = puStack_2c8;
        lVar19 = *(long *)(puStack_2c8 + 8);
        plVar26 = *(long **)(puStack_2c8 + 10);
        uVar32 = (long)plVar26 - lVar19;
        uVar29 = (undefined4)(uVar32 >> 3);
        *(undefined4 *)(puVar11 + 7) = uVar29;
        if (plVar26 < *(long **)(puStack_2c8 + 0xc)) {
          plVar12 = plVar26 + 1;
          *plVar26 = (long)puVar11;
        }
        else {
          uVar23 = ((long)uVar32 >> 3) + 1;
          if (uVar23 >> 0x3d != 0) {
            FUN_10942ff3c();
            goto LAB_109423364;
          }
          uVar20 = (long)*(long **)(puStack_2c8 + 0xc) - lVar19;
          uVar18 = (long)uVar20 >> 2;
          if (uVar18 <= uVar23) {
            uVar18 = uVar23;
          }
          if (0x7ffffffffffffff7 < uVar20) {
            uVar18 = 0x1fffffffffffffff;
          }
          if (uVar18 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109423364;
          }
          lVar14 = uVar18 << 3;
          __Znwm();
          plVar12 = (long *)(lVar14 + uVar32) + 1;
          *(long *)(lVar14 + uVar32) = (long)puVar11;
          _memcpy();
          *(long *)(puVar10 + 8) = lVar14;
          *(long **)(puVar10 + 10) = plVar12;
          *(ulong *)(puVar10 + 0xc) = lVar14 + uVar18 * 8;
          if (lVar19 != 0) {
            __ZdlPv(lVar19);
          }
        }
        *(long **)(puVar10 + 10) = plVar12;
        plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uVar29);
        uVar29 = *(undefined4 *)(*plVar9 + 0x38);
        uStack_2b0 = &plStack_338;
        plVar26 = &lStack_320;
        FUN_1093c8fa4(plVar26,&plStack_338,&UNK_10dd5b8f9,&uStack_2b0,&puStack_350);
        *(undefined4 *)((long)plVar26 + 0x14) = uVar29;
        plVar26 = (long *)((ulong)param_3 & 0xffffffff);
      }
      plVar9 = plVar9 + 1;
      lVar19 = lVar13;
    } while (plVar9 != plVar8);
  }
  plStack_338 = (long *)0x0;
  plStack_330 = (long *)0x0;
  plStack_328 = (long *)0x0;
  puStack_350 = (undefined8 *)0x0;
  puStack_348 = (undefined8 *)0x0;
  puStack_340 = (undefined8 *)0x0;
  lVar19 = plVar15[0xf];
  lVar14 = plVar15[0x10];
  if (lVar19 != lVar14) {
    do {
      piVar17 = *(int **)(lVar19 + 8);
      if ((piVar17 != (int *)0x0) && (*piVar17 - 3U < 2)) {
        FUN_1094234d0(&ppppuStack_2b8,piVar17,1);
        lVar31 = *(long *)(*(long *)(lVar19 + 8) + 0x3f0);
        for (lVar30 = *(long *)(*(long *)(lVar19 + 8) + 1000); ppppuVar24 = ppppuStack_2b8,
            puVar25 = puStack_350, lVar30 != lVar31; lVar30 = lVar30 + 0xd0) {
          if (*(int *)(*(long *)(lVar30 + 8) + 0x50) != 0) {
            pppuStack_378 =
                 (undefined8 ***)
                 CONCAT44(pppuStack_378._4_4_,*(undefined4 *)(*(long *)(lVar30 + 8) + 0x38));
            ppppuStack_390 = &pppuStack_378;
            plVar9 = &lStack_2f0;
            FUN_10943064c(plVar9,&pppuStack_378,&UNK_10dd5b8f9,&ppppuStack_390,&uStack_2b9);
            lStack_2a8 = plVar9[3];
            uStack_298 = *(undefined8 *)(lVar30 + 0x18);
            uStack_2a0 = *(undefined8 *)(lVar30 + 0x10);
            uStack_288 = *(undefined8 *)(lVar30 + 0x28);
            uStack_290 = *(undefined8 *)(lVar30 + 0x20);
            uStack_278 = *(undefined8 *)(lVar30 + 0x38);
            uStack_280 = *(undefined8 *)(lVar30 + 0x30);
            uStack_268 = *(undefined8 *)(lVar30 + 0x48);
            uStack_270 = *(undefined8 *)(lVar30 + 0x40);
            uStack_258 = *(undefined8 *)(lVar30 + 0x58);
            uStack_260 = *(undefined8 *)(lVar30 + 0x50);
            uStack_248 = *(undefined8 *)(lVar30 + 0x68);
            uStack_250 = *(ulong *)(lVar30 + 0x60);
            uStack_2b0 = (long **)CONCAT71(uStack_2b0._1_7_,1);
            uStack_238 = *(undefined8 *)(lVar30 + 0x78);
            uStack_240 = *(undefined8 *)(lVar30 + 0x70);
            uStack_228 = *(undefined8 *)(lVar30 + 0x88);
            uStack_230 = *(undefined8 *)(lVar30 + 0x80);
            lStack_218 = *(long *)(lVar30 + 0x98);
            plStack_220 = *(long **)(lVar30 + 0x90);
            uStack_200 = 0;
            uStack_1f8 = 0;
            if (*(long *)(lVar30 + 0x98) != 0) {
              piVar17 = (int *)(*(long *)(lVar30 + 0x98) + 0x14);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar5) {
                  *piVar17 = *piVar17 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puStack_210 = &uStack_248;
            puStack_208 = &uStack_200;
            if (*(int *)(lVar30 + 100) < 3) {
              uStack_200 = **(undefined8 **)(lVar30 + 0xa8);
              uStack_1f8 = (*(undefined8 **)(lVar30 + 0xa8))[1];
            }
            else {
              uStack_250 = uStack_250 & 0xffffffff;
              FUN_109a844cc(&uStack_250,*(undefined4 *)(lVar30 + 100),0,0,0);
              if (0 < uStack_250._4_4_) {
                lVar21 = 0;
                lVar2 = *(long *)(lVar30 + 0xa0);
                lVar3 = *(long *)(lVar30 + 0xa8);
                do {
                  *(undefined4 *)((long)puStack_210 + lVar21 * 4) =
                       *(undefined4 *)(lVar2 + lVar21 * 4);
                  puStack_208[lVar21] = *(undefined8 *)(lVar3 + lVar21 * 8);
                  lVar21 = lVar21 + 1;
                } while (lVar21 < uStack_250._4_4_);
              }
            }
            uStack_1f0 = 0xbff0000000000000;
            FUN_1094239ac(ppppuStack_2b8,&uStack_2b0);
            if (lStack_218 != 0) {
              piVar17 = (int *)(lStack_218 + 0x14);
              do {
                iVar1 = *piVar17;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar5) {
                  *piVar17 = iVar1 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((iVar1 + -1 == 0) && (lStack_218 != 0)) {
                plVar9 = *(long **)(lStack_218 + 8);
                if ((*(long **)(lStack_218 + 8) == (long *)0x0) &&
                   ((plVar9 = plStack_220, plStack_220 == (long *)0x0 &&
                    (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                  FUN_109a83e3c();
                  plVar9 = plRam000000011382bb80;
                }
                (**(code **)(*plVar9 + 0x30))();
              }
            }
            lStack_218 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            if (0 < uStack_250._4_4_) {
              lVar21 = 0;
              do {
                *(undefined4 *)((long)puStack_210 + lVar21 * 4) = 0;
                lVar21 = lVar21 + 1;
              } while (lVar21 < uStack_250._4_4_);
            }
            if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
              _free(puStack_208[-1]);
            }
          }
        }
        pppppuVar28 = (undefined8 *****)ppppuStack_2b8;
        if (ppppuStack_2b8[0x7e] != ppppuStack_2b8[0x7d]) {
          if ((int)plVar26 != 0) {
            if (puStack_348 < puStack_340) {
              puVar25 = puStack_348 + 1;
              *puStack_348 = ppppuStack_2b8;
              puStack_348 = puVar25;
              if (plStack_328 <= plStack_330) goto LAB_109422e50;
LAB_109422d8c:
              ppppuStack_2b8 = (undefined8 *****)0x0;
              *plStack_330 = (long)ppppuVar24;
              plVar9 = plStack_330;
            }
            else {
              lVar30 = (long)puStack_348 - (long)puStack_350;
              uVar32 = (lVar30 >> 3) + 1;
              if (uVar32 >> 0x3d != 0) {
                func_0x00010942ca5c();
                goto LAB_109423364;
              }
              uVar23 = (long)puStack_340 - (long)puStack_350 >> 2;
              if (uVar23 <= uVar32) {
                uVar23 = uVar32;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_340 - (long)puStack_350)) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 >> 0x3d != 0) goto LAB_109423340;
              puVar22 = (undefined8 *)(uVar23 << 3);
              __Znwm();
              puVar11 = (undefined8 *)((long)puVar22 + lVar30);
              puVar27 = puVar11 + 1;
              *puVar11 = ppppuVar24;
              _memcpy();
              puStack_350 = puVar22;
              puStack_340 = puVar22 + uVar23;
              if (puVar25 != (undefined8 *)0x0) {
                puStack_348 = puVar27;
                __ZdlPv(puVar25);
              }
              puStack_348 = puVar27;
              if (plStack_330 < plStack_328) goto LAB_109422d8c;
LAB_109422e50:
              plVar8 = plStack_338;
              lVar30 = (long)plStack_330 - (long)plStack_338;
              uVar32 = (lVar30 >> 3) + 1;
              if (uVar32 >> 0x3d != 0) {
                func_0x00010942ca70();
                goto LAB_109423364;
              }
              uVar23 = (long)plStack_328 - (long)plStack_338 >> 2;
              if (uVar23 <= uVar32) {
                uVar23 = uVar32;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_328 - (long)plStack_338)) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109423364;
              }
              plVar15 = (long *)(uVar23 << 3);
              __Znwm();
              plVar9 = (long *)((long)plVar15 + lVar30);
              ppppuStack_2b8 = (undefined8 *****)0x0;
              *plVar9 = (long)ppppuVar24;
              _memcpy();
              plStack_338 = plVar15;
              plStack_328 = plVar15 + uVar23;
              if (plVar8 != (long *)0x0) {
                __ZdlPv(plVar8);
              }
            }
            plStack_330 = plVar9 + 1;
            plVar26 = (long *)((ulong)param_3 & 0xffffffff);
            goto LAB_109422b38;
          }
          ppppuStack_2b8 = (undefined8 *****)0x0;
          ppppuStack_358 = ppppuVar24;
          FUN_1094546bc(puStack_2c8 + 2,&ppppuStack_358);
          pppppuVar28 = (undefined8 *****)ppppuStack_358;
          ppppuStack_358 = (undefined8 ****)0x0;
          if (pppppuVar28 == (undefined8 *****)0x0) goto LAB_109422b38;
        }
        FUN_1094305a8(pppppuVar28);
        __ZdlPv();
      }
LAB_109422b38:
      lVar19 = lVar19 + 0x48;
    } while (lVar19 != lVar14);
  }
  if (((ulong)plVar26 & 1) != 0) {
    lStack_2a8 = 0x100000001;
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,1);
    uStack_290 = 0x3fb999999999999a;
    uStack_298 = 0x3fd0000000000000;
    uStack_288 = 0x3fe0000000000000;
    uStack_280 = CONCAT62(uStack_280._2_6_,0x101);
    uStack_278 = CONCAT44(uStack_278._4_4_,0x14);
    uVar32 = (ulong)uStack_2b0 >> 0x20;
    uStack_2b0 = (long **)CONCAT44((uint)uVar32 & 0xffffff00,2);
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_370 = 0;
    lVar19 = (long)plStack_3b0 - lVar13;
    if (lVar19 != 0) {
      if (lVar19 < 0) {
        FUN_10942bc54();
        goto LAB_109423364;
      }
      lVar14 = lVar19;
      __Znwm();
      lStack_370 = lVar14;
      lStack_368 = lVar14;
      lStack_360 = lVar14 + lVar19;
      _memcpy();
      lStack_368 = lVar14 + lVar19;
    }
    FUN_109438254(&uStack_2b0,&puStack_350,&lStack_370);
    if (lStack_370 != 0) {
      lStack_368 = lStack_370;
      __ZdlPv();
    }
    plVar9 = plStack_330;
    if (plStack_338 != plStack_330) {
      plVar8 = plStack_338;
      do {
        if (*(int *)*plVar8 != 0) {
          FUN_1094234d0(&pppuStack_378,(int *)*plVar8,0);
          ppppuStack_390 = (undefined8 *****)0x0;
          ppppuStack_388 = (undefined8 *****)0x0;
          ppppuStack_380 = (undefined8 *****)0x0;
          puVar25 = *(undefined8 **)(*plVar8 + 1000);
          puVar11 = *(undefined8 **)(*plVar8 + 0x3f0);
          if (puVar25 != puVar11) {
            pppppuVar28 = (undefined8 *****)0x0;
            do {
              if ((*(uint *)(puVar25[1] + 0x50) & 0xfffffffe) == 2) {
                if (pppppuVar28 < ppppuStack_380) {
                  ppppuVar24 = (undefined8 ****)*puVar25;
                  pppppuVar28[1] = (undefined8 ****)puVar25[1];
                  *pppppuVar28 = ppppuVar24;
                  ppppuVar24 = (undefined8 ****)puVar25[2];
                  pppppuVar28[3] = (undefined8 ****)puVar25[3];
                  pppppuVar28[2] = ppppuVar24;
                  ppppuVar24 = (undefined8 ****)puVar25[4];
                  pppppuVar28[5] = (undefined8 ****)puVar25[5];
                  pppppuVar28[4] = ppppuVar24;
                  ppppuVar34 = (undefined8 ****)puVar25[7];
                  ppppuVar24 = (undefined8 ****)puVar25[6];
                  ppppuVar36 = (undefined8 ****)puVar25[8];
                  ppppuVar40 = (undefined8 ****)puVar25[0xb];
                  ppppuVar38 = (undefined8 ****)puVar25[10];
                  pppppuVar28[9] = (undefined8 ****)puVar25[9];
                  pppppuVar28[8] = ppppuVar36;
                  pppppuVar28[0xb] = ppppuVar40;
                  pppppuVar28[10] = ppppuVar38;
                  pppppuVar28[7] = ppppuVar34;
                  pppppuVar28[6] = ppppuVar24;
                  ppppuVar34 = (undefined8 ****)puVar25[0xd];
                  ppppuVar24 = (undefined8 ****)puVar25[0xc];
                  ppppuVar36 = (undefined8 ****)puVar25[0xe];
                  pppppuVar28[0xf] = (undefined8 ****)puVar25[0xf];
                  pppppuVar28[0xe] = ppppuVar36;
                  ppppuVar36 = (undefined8 ****)puVar25[0x10];
                  pppppuVar28[0x11] = (undefined8 ****)puVar25[0x11];
                  pppppuVar28[0x10] = ppppuVar36;
                  lVar19 = puVar25[0x13];
                  ppppuVar38 = (undefined8 ****)puVar25[0x13];
                  ppppuVar36 = (undefined8 ****)puVar25[0x12];
                  pppppuVar28[0x16] = (undefined8 ****)0x0;
                  pppppuVar28[0x13] = ppppuVar38;
                  pppppuVar28[0x12] = ppppuVar36;
                  pppppuVar28[0x14] = pppppuVar28 + 0xd;
                  pppppuVar28[0x15] = pppppuVar28 + 0x16;
                  pppppuVar28[0x17] = (undefined8 ****)0x0;
                  pppppuVar28[0xd] = ppppuVar34;
                  pppppuVar28[0xc] = ppppuVar24;
                  if (lVar19 != 0) {
                    piVar17 = (int *)(lVar19 + 0x14);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                      if (bVar5) {
                        *piVar17 = *piVar17 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  if (*(int *)((long)puVar25 + 100) < 3) {
                    puVar22 = (undefined8 *)puVar25[0x15];
                    ppppuVar24 = pppppuVar28[0x15];
                    *ppppuVar24 = (undefined8 ***)*puVar22;
                    ppppuVar24[1] = (undefined8 ***)puVar22[1];
                  }
                  else {
                    *(undefined4 *)((long)pppppuVar28 + 100) = 0;
                    FUN_109a844cc(pppppuVar28 + 0xc,*(undefined4 *)((long)puVar25 + 100),0,0,0);
                    if (0 < *(int *)((long)pppppuVar28 + 100)) {
                      lVar19 = 0;
                      lVar14 = puVar25[0x14];
                      lVar30 = puVar25[0x15];
                      ppppuVar24 = pppppuVar28[0x14];
                      ppppuVar34 = pppppuVar28[0x15];
                      do {
                        *(undefined4 *)((long)ppppuVar24 + lVar19 * 4) =
                             *(undefined4 *)(lVar14 + lVar19 * 4);
                        ppppuVar34[lVar19] = *(undefined8 ****)(lVar30 + lVar19 * 8);
                        lVar19 = lVar19 + 1;
                      } while (lVar19 < *(int *)((long)pppppuVar28 + 100));
                    }
                  }
                  pppppuVar28[0x18] = (undefined8 ****)puVar25[0x18];
                  pppppuVar28 = pppppuVar28 + 0x1a;
                  ppppuStack_388 = pppppuVar28;
                }
                else {
                  pppppuVar28 = &ppppuStack_390;
                  FUN_10942cbb8(pppppuVar28,puVar25);
                  ppppuStack_388 = pppppuVar28;
                }
              }
              pppuVar6 = pppuStack_378;
              puVar25 = puVar25 + 0x1a;
            } while (puVar25 != puVar11);
            if (pppppuVar28 != (undefined8 *****)ppppuStack_390) {
              FUN_109423ca0(pppuStack_378,&ppppuStack_390);
              pppuStack_378 = (undefined8 ****)0x0;
              pppuStack_398 = pppuVar6;
              FUN_1094546bc(puStack_2c8 + 2,&pppuStack_398);
              pppuVar6 = pppuStack_398;
              pppuStack_398 = (undefined8 ***)0x0;
              if ((undefined8 ****)pppuVar6 != (undefined8 ****)0x0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              ppppuStack_2b8 = &ppppuStack_390;
              FUN_10942a570(&ppppuStack_2b8);
              goto LAB_109422fa4;
            }
          }
          pppuVar6 = pppuStack_378;
          ppppuStack_2b8 = &ppppuStack_390;
          FUN_10942a570(&ppppuStack_2b8);
          if ((undefined8 ****)pppuVar6 != (undefined8 ****)0x0) {
            FUN_1094305a8(pppuVar6);
            __ZdlPv();
          }
        }
LAB_109422fa4:
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar9);
    }
  }
  puVar10 = puStack_2c8;
  FUN_109454824(puStack_2c8);
  uVar16 = 0x58;
  __Znwm();
  FUN_10942d220();
  lVar19 = *(long *)(puVar10 + 0x16);
  *(undefined8 *)(puVar10 + 0x16) = uVar16;
  if (lVar19 != 0) {
    FUN_10942fe54();
    __ZdlPv();
  }
  uVar32 = uStack_318;
  lVar19 = lStack_320;
  puStack_2c8 = (undefined4 *)0x0;
  lStack_320 = 0;
  uStack_318 = 0;
  *extraout_x8 = puVar10;
  extraout_x8[1] = lVar19;
  extraout_x8[2] = uVar32;
  extraout_x8[3] = plStack_310;
  extraout_x8[4] = lStack_308;
  *(undefined4 *)(extraout_x8 + 5) = uStack_300;
  if (lStack_308 != 0) {
    uVar23 = plStack_310[1];
    if ((uVar32 & uVar32 - 1) == 0) {
      uVar23 = uVar23 & uVar32 - 1;
    }
    else if (uVar32 <= uVar23) {
      uVar18 = 0;
      if (uVar32 != 0) {
        uVar18 = uVar23 / uVar32;
      }
      uVar23 = uVar23 - uVar18 * uVar32;
    }
    *(undefined8 **)(lVar19 + uVar23 * 8) = extraout_x8 + 3;
    plStack_310 = (long *)0x0;
    lStack_308 = 0;
  }
  if (puStack_350 != (undefined8 *)0x0) {
    puStack_348 = puStack_350;
    __ZdlPv();
  }
  plVar9 = plStack_338;
  plVar8 = plStack_330;
  if (plStack_338 != (long *)0x0) {
    while (plVar8 != plVar9) {
      plVar8 = plVar8 + -1;
      lVar19 = *plVar8;
      *plVar8 = 0;
      if (lVar19 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
    }
    __ZdlPv(plVar9);
  }
  lVar19 = lStack_320;
  plVar9 = plStack_310;
  if (lVar13 != 0) {
    __ZdlPv(lVar13);
    lVar19 = lStack_320;
    plVar9 = plStack_310;
  }
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    lStack_320 = lVar19;
    __ZdlPv();
    lVar19 = lStack_320;
  }
  lStack_320 = 0;
  lVar13 = lStack_2f0;
  plVar9 = plStack_2e0;
  if (lVar19 != 0) {
    __ZdlPv();
    lVar13 = lStack_2f0;
    plVar9 = plStack_2e0;
  }
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    lStack_2f0 = lVar13;
    __ZdlPv();
    lVar13 = lStack_2f0;
  }
  lStack_2f0 = 0;
  if (lVar13 != 0) {
    __ZdlPv();
  }
  if (puStack_2c8 != (undefined4 *)0x0) {
    FUN_1094303c4();
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
LAB_109423340:
  func_0x000104c4f740();
LAB_109423364:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109423368);
  (*pcVar7)();
}



/* Entry: 10942281c; end: 1094234cf;  */

void FUN_10942281c(undefined8 *param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *****pppppuVar27;
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 ****ppppuVar33;
  undefined8 uVar34;
  undefined8 ****ppppuVar35;
  undefined8 uVar36;
  undefined8 ****ppppuVar37;
  undefined8 uVar38;
  undefined8 ****ppppuVar39;
  long *plStack_258;
  long *plStack_250;
  undefined8 ***pppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ***pppuStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 *puStack_168;
  undefined1 uStack_159;
  undefined8 ****ppppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined4 *)0x68;
  __Znwm();
  *puVar8 = 3;
  *(undefined1 *)(puVar8 + 0x14) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined8 *)(puVar8 + 10) = 0;
  *(undefined8 *)(puVar8 + 0x16) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_170 = 0x3f800000;
  lStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  lStack_1c0 = 0;
  uStack_1a0 = 0x3f800000;
  plVar23 = *(long **)(param_2 + 0x10);
  plVar22 = *(long **)(param_2 + 0x18);
  puStack_168 = puVar8;
  if (plVar23 == plVar22) {
    plStack_250 = (long *)0x0;
    lVar10 = 0;
  }
  else {
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)0x0;
    lVar18 = 0;
    do {
      puVar24 = (undefined8 *)*plVar23;
      lVar10 = lVar18;
      if ((*(uint *)(puVar24 + 10) != 0) &&
         ((param_3 == 0 || ((*(uint *)(puVar24 + 10) & 0xfffffffe) == 2)))) {
        puVar9 = (undefined8 *)0x68;
        __Znwm();
        *puVar9 = *puVar24;
        uVar32 = puVar24[2];
        uVar13 = puVar24[1];
        puVar9[3] = puVar24[3];
        puVar9[2] = uVar32;
        puVar9[1] = uVar13;
        uVar32 = puVar24[5];
        uVar13 = puVar24[4];
        puVar9[6] = puVar24[6];
        puVar9[5] = uVar32;
        puVar9[4] = uVar13;
        uVar32 = puVar24[8];
        uVar13 = puVar24[7];
        uVar36 = puVar24[10];
        uVar34 = puVar24[9];
        uVar38 = *(undefined8 *)((long)puVar24 + 0x51);
        *(undefined8 *)((long)puVar9 + 0x59) = *(undefined8 *)((long)puVar24 + 0x59);
        *(undefined8 *)((long)puVar9 + 0x51) = uVar38;
        puVar9[10] = uVar36;
        puVar9[9] = uVar34;
        puVar9[8] = uVar32;
        puVar9[7] = uVar13;
        plStack_1d8 = (long *)CONCAT44(plStack_1d8._4_4_,*(undefined4 *)(puVar9 + 7));
        plVar12 = &lStack_190;
        uStack_150 = &plStack_1d8;
        FUN_10943064c(plVar12,&plStack_1d8,&UNK_10dd5b8f9,&uStack_150,&puStack_1f0);
        plVar12[3] = (long)puVar9;
        if (param_3 != 0) {
          if (plStack_250 < plStack_258) {
            *plStack_250 = (long)puVar9;
            plStack_250 = plStack_250 + 1;
          }
          else {
            uVar31 = ((long)plStack_250 - lVar18 >> 3) + 1;
            if (uVar31 >> 0x3d != 0) {
              FUN_10942bc54();
              goto LAB_109423364;
            }
            uVar21 = (long)plStack_258 - lVar18 >> 2;
            if (uVar21 <= uVar31) {
              uVar21 = uVar31;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_258 - lVar18)) {
              uVar21 = 0x1fffffffffffffff;
            }
            if (uVar21 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_109423364;
            }
            lVar10 = uVar21 << 3;
            __Znwm();
            plVar12 = (long *)(lVar10 + ((long)plStack_250 - lVar18));
            plStack_258 = (long *)(lVar10 + uVar21 * 8);
            plStack_250 = plVar12 + 1;
            *plVar12 = (long)puVar9;
            _memcpy();
            if (lVar18 != 0) {
              __ZdlPv(lVar18);
            }
          }
        }
        puVar8 = puStack_168;
        lVar18 = *(long *)(puStack_168 + 8);
        plVar12 = *(long **)(puStack_168 + 10);
        uVar31 = (long)plVar12 - lVar18;
        uVar28 = (undefined4)(uVar31 >> 3);
        *(undefined4 *)(puVar9 + 7) = uVar28;
        if (plVar12 < *(long **)(puStack_168 + 0xc)) {
          plVar25 = plVar12 + 1;
          *plVar12 = (long)puVar9;
        }
        else {
          uVar21 = ((long)uVar31 >> 3) + 1;
          if (uVar21 >> 0x3d != 0) {
            FUN_10942ff3c();
            goto LAB_109423364;
          }
          uVar15 = (long)*(long **)(puStack_168 + 0xc) - lVar18;
          uVar19 = (long)uVar15 >> 2;
          if (uVar19 <= uVar21) {
            uVar19 = uVar21;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar19 = 0x1fffffffffffffff;
          }
          if (uVar19 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109423364;
          }
          lVar11 = uVar19 << 3;
          __Znwm();
          plVar25 = (long *)(lVar11 + uVar31) + 1;
          *(long *)(lVar11 + uVar31) = (long)puVar9;
          _memcpy();
          *(long *)(puVar8 + 8) = lVar11;
          *(long **)(puVar8 + 10) = plVar25;
          *(ulong *)(puVar8 + 0xc) = lVar11 + uVar19 * 8;
          if (lVar18 != 0) {
            __ZdlPv(lVar18);
          }
        }
        *(long **)(puVar8 + 10) = plVar25;
        plStack_1d8 = (long *)CONCAT44(plStack_1d8._4_4_,uVar28);
        uVar28 = *(undefined4 *)(*plVar23 + 0x38);
        uStack_150 = &plStack_1d8;
        plVar12 = &lStack_1c0;
        FUN_1093c8fa4(plVar12,&plStack_1d8,&UNK_10dd5b8f9,&uStack_150,&puStack_1f0);
        *(undefined4 *)((long)plVar12 + 0x14) = uVar28;
      }
      plVar23 = plVar23 + 1;
      lVar18 = lVar10;
    } while (plVar23 != plVar22);
  }
  plStack_1d8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  plStack_1c8 = (long *)0x0;
  puStack_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  puStack_1e0 = (undefined8 *)0x0;
  lVar18 = *(long *)(param_2 + 0x78);
  lVar11 = *(long *)(param_2 + 0x80);
  if (lVar18 != lVar11) {
    do {
      piVar14 = *(int **)(lVar18 + 8);
      if ((piVar14 != (int *)0x0) && (*piVar14 - 3U < 2)) {
        FUN_1094234d0(&ppppuStack_158,piVar14,1);
        lVar30 = *(long *)(*(long *)(lVar18 + 8) + 0x3f0);
        for (lVar29 = *(long *)(*(long *)(lVar18 + 8) + 1000); ppppuVar20 = ppppuStack_158,
            puVar24 = puStack_1f0, lVar29 != lVar30; lVar29 = lVar29 + 0xd0) {
          if (*(int *)(*(long *)(lVar29 + 8) + 0x50) != 0) {
            pppuStack_218 =
                 (undefined8 ***)
                 CONCAT44(pppuStack_218._4_4_,*(undefined4 *)(*(long *)(lVar29 + 8) + 0x38));
            ppppuStack_230 = &pppuStack_218;
            plVar23 = &lStack_190;
            FUN_10943064c(plVar23,&pppuStack_218,&UNK_10dd5b8f9,&ppppuStack_230,&uStack_159);
            lStack_148 = plVar23[3];
            uStack_138 = *(undefined8 *)(lVar29 + 0x18);
            uStack_140 = *(undefined8 *)(lVar29 + 0x10);
            uStack_128 = *(undefined8 *)(lVar29 + 0x28);
            uStack_130 = *(undefined8 *)(lVar29 + 0x20);
            uStack_118 = *(undefined8 *)(lVar29 + 0x38);
            uStack_120 = *(undefined8 *)(lVar29 + 0x30);
            uStack_108 = *(undefined8 *)(lVar29 + 0x48);
            uStack_110 = *(undefined8 *)(lVar29 + 0x40);
            uStack_f8 = *(undefined8 *)(lVar29 + 0x58);
            uStack_100 = *(undefined8 *)(lVar29 + 0x50);
            uStack_e8 = *(undefined8 *)(lVar29 + 0x68);
            uStack_f0 = *(ulong *)(lVar29 + 0x60);
            uStack_150 = (long **)CONCAT71(uStack_150._1_7_,1);
            uStack_d8 = *(undefined8 *)(lVar29 + 0x78);
            uStack_e0 = *(undefined8 *)(lVar29 + 0x70);
            uStack_c8 = *(undefined8 *)(lVar29 + 0x88);
            uStack_d0 = *(undefined8 *)(lVar29 + 0x80);
            lStack_b8 = *(long *)(lVar29 + 0x98);
            plStack_c0 = *(long **)(lVar29 + 0x90);
            uStack_a0 = 0;
            uStack_98 = 0;
            if (*(long *)(lVar29 + 0x98) != 0) {
              piVar14 = (int *)(*(long *)(lVar29 + 0x98) + 0x14);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar5) {
                  *piVar14 = *piVar14 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puStack_b0 = &uStack_e8;
            puStack_a8 = &uStack_a0;
            if (*(int *)(lVar29 + 100) < 3) {
              uStack_a0 = **(undefined8 **)(lVar29 + 0xa8);
              uStack_98 = (*(undefined8 **)(lVar29 + 0xa8))[1];
            }
            else {
              uStack_f0 = uStack_f0 & 0xffffffff;
              FUN_109a844cc(&uStack_f0,*(undefined4 *)(lVar29 + 100),0,0,0);
              if (0 < uStack_f0._4_4_) {
                lVar16 = 0;
                lVar2 = *(long *)(lVar29 + 0xa0);
                lVar3 = *(long *)(lVar29 + 0xa8);
                do {
                  *(undefined4 *)((long)puStack_b0 + lVar16 * 4) =
                       *(undefined4 *)(lVar2 + lVar16 * 4);
                  puStack_a8[lVar16] = *(undefined8 *)(lVar3 + lVar16 * 8);
                  lVar16 = lVar16 + 1;
                } while (lVar16 < uStack_f0._4_4_);
              }
            }
            uStack_90 = 0xbff0000000000000;
            FUN_1094239ac(ppppuStack_158,&uStack_150);
            if (lStack_b8 != 0) {
              piVar14 = (int *)(lStack_b8 + 0x14);
              do {
                iVar1 = *piVar14;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar5) {
                  *piVar14 = iVar1 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((iVar1 + -1 == 0) && (lStack_b8 != 0)) {
                plVar23 = *(long **)(lStack_b8 + 8);
                if ((*(long **)(lStack_b8 + 8) == (long *)0x0) &&
                   ((plVar23 = plStack_c0, plStack_c0 == (long *)0x0 &&
                    (plVar23 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                  FUN_109a83e3c();
                  plVar23 = plRam000000011382bb80;
                }
                (**(code **)(*plVar23 + 0x30))();
              }
            }
            lStack_b8 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            if (0 < uStack_f0._4_4_) {
              lVar16 = 0;
              do {
                *(undefined4 *)((long)puStack_b0 + lVar16 * 4) = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < uStack_f0._4_4_);
            }
            if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
              _free(puStack_a8[-1]);
            }
          }
        }
        pppppuVar27 = (undefined8 *****)ppppuStack_158;
        if (ppppuStack_158[0x7e] != ppppuStack_158[0x7d]) {
          if (param_3 != 0) {
            if (puStack_1e8 < puStack_1e0) {
              puVar24 = puStack_1e8 + 1;
              *puStack_1e8 = ppppuStack_158;
              puStack_1e8 = puVar24;
              if (plStack_1c8 <= plStack_1d0) goto LAB_109422e50;
LAB_109422d8c:
              ppppuStack_158 = (undefined8 *****)0x0;
              *plStack_1d0 = (long)ppppuVar20;
              plVar23 = plStack_1d0;
            }
            else {
              lVar29 = (long)puStack_1e8 - (long)puStack_1f0;
              uVar31 = (lVar29 >> 3) + 1;
              if (uVar31 >> 0x3d != 0) {
                func_0x00010942ca5c();
                goto LAB_109423364;
              }
              uVar21 = (long)puStack_1e0 - (long)puStack_1f0 >> 2;
              if (uVar21 <= uVar31) {
                uVar21 = uVar31;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_1e0 - (long)puStack_1f0)) {
                uVar21 = 0x1fffffffffffffff;
              }
              if (uVar21 >> 0x3d != 0) goto LAB_109423340;
              puVar17 = (undefined8 *)(uVar21 << 3);
              __Znwm();
              puVar9 = (undefined8 *)((long)puVar17 + lVar29);
              puVar26 = puVar9 + 1;
              *puVar9 = ppppuVar20;
              _memcpy();
              puStack_1f0 = puVar17;
              puStack_1e0 = puVar17 + uVar21;
              if (puVar24 != (undefined8 *)0x0) {
                puStack_1e8 = puVar26;
                __ZdlPv(puVar24);
              }
              puStack_1e8 = puVar26;
              if (plStack_1d0 < plStack_1c8) goto LAB_109422d8c;
LAB_109422e50:
              plVar22 = plStack_1d8;
              lVar29 = (long)plStack_1d0 - (long)plStack_1d8;
              uVar31 = (lVar29 >> 3) + 1;
              if (uVar31 >> 0x3d != 0) {
                func_0x00010942ca70();
                goto LAB_109423364;
              }
              uVar21 = (long)plStack_1c8 - (long)plStack_1d8 >> 2;
              if (uVar21 <= uVar31) {
                uVar21 = uVar31;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_1c8 - (long)plStack_1d8)) {
                uVar21 = 0x1fffffffffffffff;
              }
              if (uVar21 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109423364;
              }
              plVar12 = (long *)(uVar21 << 3);
              __Znwm();
              plVar23 = (long *)((long)plVar12 + lVar29);
              ppppuStack_158 = (undefined8 *****)0x0;
              *plVar23 = (long)ppppuVar20;
              _memcpy();
              plStack_1d8 = plVar12;
              plStack_1c8 = plVar12 + uVar21;
              if (plVar22 != (long *)0x0) {
                __ZdlPv(plVar22);
              }
            }
            plStack_1d0 = plVar23 + 1;
            goto LAB_109422b38;
          }
          ppppuStack_158 = (undefined8 *****)0x0;
          ppppuStack_1f8 = ppppuVar20;
          FUN_1094546bc(puStack_168 + 2,&ppppuStack_1f8);
          pppppuVar27 = (undefined8 *****)ppppuStack_1f8;
          ppppuStack_1f8 = (undefined8 ****)0x0;
          if (pppppuVar27 == (undefined8 *****)0x0) goto LAB_109422b38;
        }
        FUN_1094305a8(pppppuVar27);
        __ZdlPv();
      }
LAB_109422b38:
      lVar18 = lVar18 + 0x48;
    } while (lVar18 != lVar11);
  }
  if ((param_3 & 1) != 0) {
    lStack_148 = 0x100000001;
    uStack_140 = CONCAT44(uStack_140._4_4_,1);
    uStack_130 = 0x3fb999999999999a;
    uStack_138 = 0x3fd0000000000000;
    uStack_128 = 0x3fe0000000000000;
    uStack_120 = CONCAT62(uStack_120._2_6_,0x101);
    uStack_118 = CONCAT44(uStack_118._4_4_,0x14);
    uVar31 = (ulong)uStack_150 >> 0x20;
    uStack_150 = (long **)CONCAT44((uint)uVar31 & 0xffffff00,2);
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_210 = 0;
    lVar18 = (long)plStack_250 - lVar10;
    if (lVar18 != 0) {
      if (lVar18 < 0) {
        FUN_10942bc54();
        goto LAB_109423364;
      }
      lVar11 = lVar18;
      __Znwm();
      lStack_210 = lVar11;
      lStack_208 = lVar11;
      lStack_200 = lVar11 + lVar18;
      _memcpy();
      lStack_208 = lVar11 + lVar18;
    }
    FUN_109438254(&uStack_150,&puStack_1f0,&lStack_210);
    if (lStack_210 != 0) {
      lStack_208 = lStack_210;
      __ZdlPv();
    }
    plVar23 = plStack_1d0;
    if (plStack_1d8 != plStack_1d0) {
      plVar22 = plStack_1d8;
      do {
        if (*(int *)*plVar22 != 0) {
          FUN_1094234d0(&pppuStack_218,(int *)*plVar22,0);
          ppppuStack_230 = (undefined8 *****)0x0;
          ppppuStack_228 = (undefined8 *****)0x0;
          ppppuStack_220 = (undefined8 *****)0x0;
          puVar24 = *(undefined8 **)(*plVar22 + 1000);
          puVar9 = *(undefined8 **)(*plVar22 + 0x3f0);
          if (puVar24 != puVar9) {
            pppppuVar27 = (undefined8 *****)0x0;
            do {
              if ((*(uint *)(puVar24[1] + 0x50) & 0xfffffffe) == 2) {
                if (pppppuVar27 < ppppuStack_220) {
                  ppppuVar20 = (undefined8 ****)*puVar24;
                  pppppuVar27[1] = (undefined8 ****)puVar24[1];
                  *pppppuVar27 = ppppuVar20;
                  ppppuVar20 = (undefined8 ****)puVar24[2];
                  pppppuVar27[3] = (undefined8 ****)puVar24[3];
                  pppppuVar27[2] = ppppuVar20;
                  ppppuVar20 = (undefined8 ****)puVar24[4];
                  pppppuVar27[5] = (undefined8 ****)puVar24[5];
                  pppppuVar27[4] = ppppuVar20;
                  ppppuVar33 = (undefined8 ****)puVar24[7];
                  ppppuVar20 = (undefined8 ****)puVar24[6];
                  ppppuVar35 = (undefined8 ****)puVar24[8];
                  ppppuVar39 = (undefined8 ****)puVar24[0xb];
                  ppppuVar37 = (undefined8 ****)puVar24[10];
                  pppppuVar27[9] = (undefined8 ****)puVar24[9];
                  pppppuVar27[8] = ppppuVar35;
                  pppppuVar27[0xb] = ppppuVar39;
                  pppppuVar27[10] = ppppuVar37;
                  pppppuVar27[7] = ppppuVar33;
                  pppppuVar27[6] = ppppuVar20;
                  ppppuVar33 = (undefined8 ****)puVar24[0xd];
                  ppppuVar20 = (undefined8 ****)puVar24[0xc];
                  ppppuVar35 = (undefined8 ****)puVar24[0xe];
                  pppppuVar27[0xf] = (undefined8 ****)puVar24[0xf];
                  pppppuVar27[0xe] = ppppuVar35;
                  ppppuVar35 = (undefined8 ****)puVar24[0x10];
                  pppppuVar27[0x11] = (undefined8 ****)puVar24[0x11];
                  pppppuVar27[0x10] = ppppuVar35;
                  lVar18 = puVar24[0x13];
                  ppppuVar37 = (undefined8 ****)puVar24[0x13];
                  ppppuVar35 = (undefined8 ****)puVar24[0x12];
                  pppppuVar27[0x16] = (undefined8 ****)0x0;
                  pppppuVar27[0x13] = ppppuVar37;
                  pppppuVar27[0x12] = ppppuVar35;
                  pppppuVar27[0x14] = pppppuVar27 + 0xd;
                  pppppuVar27[0x15] = pppppuVar27 + 0x16;
                  pppppuVar27[0x17] = (undefined8 ****)0x0;
                  pppppuVar27[0xd] = ppppuVar33;
                  pppppuVar27[0xc] = ppppuVar20;
                  if (lVar18 != 0) {
                    piVar14 = (int *)(lVar18 + 0x14);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar5) {
                        *piVar14 = *piVar14 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  if (*(int *)((long)puVar24 + 100) < 3) {
                    puVar17 = (undefined8 *)puVar24[0x15];
                    ppppuVar20 = pppppuVar27[0x15];
                    *ppppuVar20 = (undefined8 ***)*puVar17;
                    ppppuVar20[1] = (undefined8 ***)puVar17[1];
                  }
                  else {
                    *(undefined4 *)((long)pppppuVar27 + 100) = 0;
                    FUN_109a844cc(pppppuVar27 + 0xc,*(undefined4 *)((long)puVar24 + 100),0,0,0);
                    if (0 < *(int *)((long)pppppuVar27 + 100)) {
                      lVar18 = 0;
                      lVar11 = puVar24[0x14];
                      lVar29 = puVar24[0x15];
                      ppppuVar20 = pppppuVar27[0x14];
                      ppppuVar33 = pppppuVar27[0x15];
                      do {
                        *(undefined4 *)((long)ppppuVar20 + lVar18 * 4) =
                             *(undefined4 *)(lVar11 + lVar18 * 4);
                        ppppuVar33[lVar18] = *(undefined8 ****)(lVar29 + lVar18 * 8);
                        lVar18 = lVar18 + 1;
                      } while (lVar18 < *(int *)((long)pppppuVar27 + 100));
                    }
                  }
                  pppppuVar27[0x18] = (undefined8 ****)puVar24[0x18];
                  pppppuVar27 = pppppuVar27 + 0x1a;
                  ppppuStack_228 = pppppuVar27;
                }
                else {
                  pppppuVar27 = &ppppuStack_230;
                  FUN_10942cbb8(pppppuVar27,puVar24);
                  ppppuStack_228 = pppppuVar27;
                }
              }
              pppuVar6 = pppuStack_218;
              puVar24 = puVar24 + 0x1a;
            } while (puVar24 != puVar9);
            if (pppppuVar27 != (undefined8 *****)ppppuStack_230) {
              FUN_109423ca0(pppuStack_218,&ppppuStack_230);
              pppuStack_218 = (undefined8 ****)0x0;
              pppuStack_238 = pppuVar6;
              FUN_1094546bc(puStack_168 + 2,&pppuStack_238);
              pppuVar6 = pppuStack_238;
              pppuStack_238 = (undefined8 ***)0x0;
              if ((undefined8 ****)pppuVar6 != (undefined8 ****)0x0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              ppppuStack_158 = &ppppuStack_230;
              FUN_10942a570(&ppppuStack_158);
              goto LAB_109422fa4;
            }
          }
          pppuVar6 = pppuStack_218;
          ppppuStack_158 = &ppppuStack_230;
          FUN_10942a570(&ppppuStack_158);
          if ((undefined8 ****)pppuVar6 != (undefined8 ****)0x0) {
            FUN_1094305a8(pppuVar6);
            __ZdlPv();
          }
        }
LAB_109422fa4:
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar23);
    }
  }
  puVar8 = puStack_168;
  FUN_109454824(puStack_168);
  uVar13 = 0x58;
  __Znwm();
  FUN_10942d220();
  lVar18 = *(long *)(puVar8 + 0x16);
  *(undefined8 *)(puVar8 + 0x16) = uVar13;
  if (lVar18 != 0) {
    FUN_10942fe54();
    __ZdlPv();
  }
  uVar31 = uStack_1b8;
  lVar18 = lStack_1c0;
  puStack_168 = (undefined4 *)0x0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  *param_1 = puVar8;
  param_1[1] = lVar18;
  param_1[2] = uVar31;
  param_1[3] = plStack_1b0;
  param_1[4] = lStack_1a8;
  *(undefined4 *)(param_1 + 5) = uStack_1a0;
  if (lStack_1a8 != 0) {
    uVar21 = plStack_1b0[1];
    if ((uVar31 & uVar31 - 1) == 0) {
      uVar21 = uVar21 & uVar31 - 1;
    }
    else if (uVar31 <= uVar21) {
      uVar19 = 0;
      if (uVar31 != 0) {
        uVar19 = uVar21 / uVar31;
      }
      uVar21 = uVar21 - uVar19 * uVar31;
    }
    *(undefined8 **)(lVar18 + uVar21 * 8) = param_1 + 3;
    plStack_1b0 = (long *)0x0;
    lStack_1a8 = 0;
  }
  if (puStack_1f0 != (undefined8 *)0x0) {
    puStack_1e8 = puStack_1f0;
    __ZdlPv();
  }
  plVar23 = plStack_1d8;
  plVar22 = plStack_1d0;
  if (plStack_1d8 != (long *)0x0) {
    while (plVar22 != plVar23) {
      plVar22 = plVar22 + -1;
      lVar18 = *plVar22;
      *plVar22 = 0;
      if (lVar18 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
    }
    __ZdlPv(plVar23);
  }
  lVar18 = lStack_1c0;
  plVar23 = plStack_1b0;
  if (lVar10 != 0) {
    __ZdlPv(lVar10);
    lVar18 = lStack_1c0;
    plVar23 = plStack_1b0;
  }
  while (plVar23 != (long *)0x0) {
    plVar23 = (long *)*plVar23;
    lStack_1c0 = lVar18;
    __ZdlPv();
    lVar18 = lStack_1c0;
  }
  lStack_1c0 = 0;
  lVar10 = lStack_190;
  plVar23 = plStack_180;
  if (lVar18 != 0) {
    __ZdlPv();
    lVar10 = lStack_190;
    plVar23 = plStack_180;
  }
  while (plVar23 != (long *)0x0) {
    plVar23 = (long *)*plVar23;
    lStack_190 = lVar10;
    __ZdlPv();
    lVar10 = lStack_190;
  }
  lStack_190 = 0;
  if (lVar10 != 0) {
    __ZdlPv();
  }
  if (puStack_168 != (undefined4 *)0x0) {
    FUN_1094303c4();
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_109423340:
  func_0x000104c4f740();
LAB_109423364:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109423368);
  (*pcVar7)();
}



/* Entry: 1094234d0; end: 1094239ab;  */

undefined8 * FUN_1094234d0(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint7 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  int *piVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  float fVar51;
  double dVar52;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 auStack_2e0 [2];
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined1 uStack_70;
  long *plStack_68;
  char cStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_2e0[0] = 0;
  uStack_2d0 = 0;
  puStack_278 = (undefined8 *)0x0;
  lStack_270 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_280 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_220 = 0x3ff0000000000000;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0x3ff0000000000000;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0x3ff0000000000000;
  plStack_1c8 = (long *)0x0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  dStack_1b0 = 0.0;
  dStack_1a8 = 1.0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0x3ff0000000000000;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_160 = 0x3ff0000000000000;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0x3ff0000000000000;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x3ff0000000000000;
  uStack_110 = 0;
  lStack_100 = 0;
  lStack_108 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  lStack_d0 = 0;
  lStack_d8 = 0;
  uStack_c8 = 0;
  uStack_98 = 0x403e000000000000;
  uStack_90 = 0x403e000000000000;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  uStack_78 = 0;
  uStack_70 = 0;
  cStack_60 = '\0';
  FUN_10942bc68(auStack_2e0,param_2 + 0x54);
  uStack_2d0 = *(undefined8 *)(param_2 + 8);
  uStack_2b8 = *(undefined8 *)(param_2 + 0xe);
  uStack_2c0 = *(undefined8 *)(param_2 + 0xc);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x12);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x10);
  uStack_298 = *(undefined8 *)(param_2 + 0x16);
  uStack_2a0 = *(undefined8 *)(param_2 + 0x14);
  uStack_288 = *(undefined8 *)(param_2 + 0x1a);
  uStack_290 = *(undefined8 *)(param_2 + 0x18);
  uStack_280 = param_2[0x1c];
  puVar13 = *(undefined8 **)(param_2 + 0x1e);
  lVar18 = *(long *)(param_2 + 0x20);
  if (lStack_270 != lVar18) {
    FUN_10942c088(&puStack_278,lVar18,1);
    lVar18 = lStack_270;
  }
  uVar15 = lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar18) {
    lVar20 = 0;
    puVar11 = puStack_278;
    puVar12 = puVar13;
    do {
      uVar8 = *puVar12;
      puVar11[1] = puVar12[1];
      *puVar11 = uVar8;
      lVar20 = lVar20 + 2;
      puVar11 = puVar11 + 2;
      puVar12 = puVar12 + 2;
    } while (lVar20 < (long)uVar15);
  }
  uVar16 = lVar18 % 2;
  if (uVar16 != 0 && (long)uVar16 < 0 == SBORROW8(lVar18,uVar15)) {
    if ((3 < uVar16) && (0x1f < (ulong)((long)puStack_278 - (long)puVar13))) {
      uVar17 = uVar16 & 0xfffffffffffffffc;
      uVar15 = uVar15 + uVar17;
      puVar11 = puVar13 + (lVar18 / 2) * 2 + 2;
      puVar12 = puStack_278 + (lVar18 / 2) * 2 + 2;
      uVar19 = uVar17;
      do {
        uVar8 = puVar11[-2];
        uVar40 = puVar11[1];
        uVar39 = *puVar11;
        puVar12[-1] = puVar11[-1];
        puVar12[-2] = uVar8;
        puVar12[1] = uVar40;
        *puVar12 = uVar39;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
      if (uVar16 == uVar17) goto LAB_1094236a8;
    }
    lVar18 = lVar18 - uVar15;
    puVar11 = puStack_278 + uVar15;
    puVar13 = puVar13 + uVar15;
    do {
      *puVar11 = *puVar13;
      lVar18 = lVar18 + -1;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar18 != 0);
  }
LAB_1094236a8:
  uStack_a8 = *(undefined8 *)(param_2 + 0x92);
  uStack_b0 = *(undefined8 *)(param_2 + 0x90);
  uStack_98 = *(undefined8 *)(param_2 + 0x96);
  uStack_a0 = *(undefined8 *)(param_2 + 0x94);
  uStack_88 = *(ulong *)(param_2 + 0x9a);
  uStack_90 = *(undefined8 *)(param_2 + 0x98);
  uStack_80 = *(undefined8 *)(param_2 + 0x9c);
  auStack_2e0[0] = *(undefined8 *)(param_2 + 4);
  if ((param_3 != 0) && (*(char *)(param_2 + 0x9e) == '\x01')) {
    dVar45 = *(double *)(param_2 + 0x4e);
    uVar31 = SUB81(dVar45,0);
    uVar32 = (undefined1)((ulong)dVar45 >> 8);
    uVar33 = (undefined1)((ulong)dVar45 >> 0x10);
    uVar34 = (undefined1)((ulong)dVar45 >> 0x18);
    uVar35 = (undefined1)((ulong)dVar45 >> 0x20);
    uVar36 = (undefined1)((ulong)dVar45 >> 0x28);
    uVar37 = (undefined1)((ulong)dVar45 >> 0x30);
    uVar38 = (undefined1)((ulong)dVar45 >> 0x38);
    dVar43 = *(double *)(param_2 + 0x4c);
    uVar23 = SUB81(dVar43,0);
    uVar24 = (undefined1)((ulong)dVar43 >> 8);
    uVar25 = (undefined1)((ulong)dVar43 >> 0x10);
    uVar26 = (undefined1)((ulong)dVar43 >> 0x18);
    uVar27 = (undefined1)((ulong)dVar43 >> 0x20);
    uVar28 = (undefined1)((ulong)dVar43 >> 0x28);
    uVar29 = (undefined1)((ulong)dVar43 >> 0x30);
    uVar30 = (undefined1)((ulong)dVar43 >> 0x38);
    dStack_1a8 = *(double *)(param_2 + 0x52);
    dStack_1b0 = *(double *)(param_2 + 0x50);
    dVar42 = dVar43 * dVar43 + dStack_1b0 * dStack_1b0 + dVar45 * dVar45 + dStack_1a8 * dStack_1a8;
    if (0.0 < dVar42) {
      dVar42 = SQRT(dVar42);
      dVar43 = dVar43 / dVar42;
      uVar23 = SUB81(dVar43,0);
      uVar24 = (undefined1)((ulong)dVar43 >> 8);
      uVar25 = (undefined1)((ulong)dVar43 >> 0x10);
      uVar26 = (undefined1)((ulong)dVar43 >> 0x18);
      uVar27 = (undefined1)((ulong)dVar43 >> 0x20);
      uVar28 = (undefined1)((ulong)dVar43 >> 0x28);
      uVar29 = (undefined1)((ulong)dVar43 >> 0x30);
      uVar30 = (undefined1)((ulong)dVar43 >> 0x38);
      dVar45 = dVar45 / dVar42;
      uVar31 = SUB81(dVar45,0);
      uVar32 = (undefined1)((ulong)dVar45 >> 8);
      uVar33 = (undefined1)((ulong)dVar45 >> 0x10);
      uVar34 = (undefined1)((ulong)dVar45 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar45 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar45 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar45 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar45 >> 0x38);
      dStack_1b0 = dStack_1b0 / dVar42;
      dStack_1a8 = dStack_1a8 / dVar42;
    }
    uStack_1b8 = CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(uVar34,
                                                  CONCAT12(uVar33,CONCAT11(uVar32,uVar31)))))));
    uStack_1c0 = CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(uVar26,
                                                  CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))));
    uStack_78 = CONCAT11(uStack_78._1_1_,1);
  }
  puVar10 = (undefined4 *)0x470;
  __Znwm();
  *puVar10 = 0;
  puVar13 = auStack_2e0;
  FUN_10942c128(puVar10 + 4);
  *(undefined8 *)(puVar10 + 0xa8) = 0x4000000000000000;
  uVar8 = *(undefined8 *)(param_2 + 0xac);
  uVar40 = *(undefined8 *)(param_2 + 0xb2);
  uVar39 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(puVar10 + 0xae) = *(undefined8 *)(param_2 + 0xae);
  *(undefined8 *)(puVar10 + 0xac) = uVar8;
  *(undefined8 *)(puVar10 + 0xb2) = uVar40;
  *(undefined8 *)(puVar10 + 0xb0) = uVar39;
  uVar8 = *(undefined8 *)(param_2 + 0xb4);
  dVar45 = *(double *)(param_2 + 0xae);
  dVar43 = *(double *)(param_2 + 0xac);
  dVar41 = *(double *)(param_2 + 0xb2);
  dVar42 = *(double *)(param_2 + 0xb0);
  *(undefined8 *)(puVar10 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(puVar10 + 0xb4) = uVar8;
  *(undefined8 *)(puVar10 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0xc4);
  uVar40 = *(undefined8 *)(param_2 + 0xca);
  uVar39 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(puVar10 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  *(undefined8 *)(puVar10 + 0xc4) = uVar8;
  *(undefined8 *)(puVar10 + 0xca) = uVar40;
  *(undefined8 *)(puVar10 + 200) = uVar39;
  *(undefined8 *)(puVar10 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  uVar40 = *(undefined8 *)(param_2 + 0xbc);
  uVar39 = *(undefined8 *)(param_2 + 0xc2);
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(puVar10 + 0xbe) = *(undefined8 *)(param_2 + 0xbe);
  *(undefined8 *)(puVar10 + 0xbc) = uVar40;
  *(undefined8 *)(puVar10 + 0xc2) = uVar39;
  *(undefined8 *)(puVar10 + 0xc0) = uVar8;
  dVar42 = -dVar42;
  dVar44 = SQRT(-dVar43 * -dVar43 + dVar42 * dVar42 + -dVar45 * -dVar45 + dVar41 * dVar41);
  dVar43 = -dVar43 / dVar44;
  dVar45 = -dVar45 / dVar44;
  dVar42 = dVar42 / dVar44;
  dVar41 = dVar41 / dVar44;
  dVar46 = *(double *)(param_2 + 0xb6);
  dVar44 = *(double *)(param_2 + 0xb4);
  dVar47 = -dVar44;
  dVar48 = -dVar46;
  dVar49 = *(double *)(param_2 + 0xb8);
  dVar50 = -dVar42 * dVar48 - dVar49 * dVar45;
  dVar52 = dVar49 * dVar43 + dVar47 * dVar42;
  dVar47 = -dVar45 * dVar47 + dVar43 * dVar48;
  dVar50 = dVar50 + dVar50;
  dVar52 = dVar52 + dVar52;
  dVar47 = dVar47 + dVar47;
  *(double *)(puVar10 + 0xd2) = dVar45;
  *(double *)(puVar10 + 0xd0) = dVar43;
  *(double *)(puVar10 + 0xd6) = dVar41;
  *(double *)(puVar10 + 0xd4) = dVar42;
  *(double *)(puVar10 + 0xda) = (dVar52 * dVar41 - dVar46) + -(dVar43 * dVar47) + dVar50 * dVar42;
  *(double *)(puVar10 + 0xd8) = (dVar50 * dVar41 - dVar44) + -dVar42 * dVar52 + dVar47 * dVar45;
  *(double *)(puVar10 + 0xdc) = (dVar47 * dVar41 - dVar49) + -dVar45 * dVar50 + dVar43 * dVar52;
  func_0x00010937fbc4(&uStack_328,puVar10 + 0xd0);
  *(undefined8 *)(puVar10 + 0xea) = uStack_300;
  *(undefined8 *)(puVar10 + 0xe8) = uStack_308;
  *(undefined8 *)(puVar10 + 0xee) = uStack_2f0;
  *(undefined8 *)(puVar10 + 0xec) = uStack_2f8;
  *(undefined8 *)(puVar10 + 0xf0) = uStack_2e8;
  *(undefined8 *)(puVar10 + 0xe2) = uStack_320;
  *(undefined8 *)(puVar10 + 0xe0) = uStack_328;
  *(undefined8 *)(puVar10 + 0xe6) = uStack_310;
  *(undefined8 *)(puVar10 + 0xe4) = uStack_318;
  *(undefined1 *)(puVar10 + 0x110) = 0;
  *(undefined8 *)(puVar10 + 0x114) = 0;
  *(undefined8 *)(puVar10 + 0x112) = 0;
  *(undefined8 *)(puVar10 + 0x118) = 0;
  *(undefined8 *)(puVar10 + 0x116) = 0;
  *(undefined8 *)(puVar10 + 0xf6) = 0;
  *(undefined8 *)(puVar10 + 0xf4) = 0;
  *(undefined8 *)(puVar10 + 0xfa) = 0;
  *(undefined8 *)(puVar10 + 0xf8) = 0;
  *(undefined8 *)(puVar10 + 0xfe) = 0;
  *(undefined8 *)(puVar10 + 0xfc) = 0;
  *(undefined8 *)(puVar10 + 0x102) = 0;
  *(undefined8 *)(puVar10 + 0x100) = 0;
  *(undefined8 *)((long)puVar10 + 0x411) = 0;
  *(undefined8 *)((long)puVar10 + 0x409) = 0;
  puVar10[0x11a] = 0x3f800000;
  *param_1 = puVar10;
  *puVar10 = *param_2;
  if ((cStack_60 == '\x01') && (plStack_68 != (long *)0x0)) {
    plVar14 = plStack_68 + 1;
    do {
      lVar18 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  plVar14 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar1 = plStack_1c8 + 1;
    do {
      lVar18 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  puVar11 = puStack_278;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar11;
  }
  ___stack_chk_fail();
  FUN_10942c450(puVar10 + 4);
  __ZdlPv(puVar10);
  FUN_10942c450(auStack_2e0);
  __Unwind_Resume();
  FUN_10942c450(auStack_2e0);
  __Unwind_Resume();
  uVar15 = puVar11[0x7e];
  iVar2 = (int)(uVar15 - puVar11[0x7d] >> 4) * -0x3b13b13b;
  piVar21 = (int *)puVar11[0x7b];
  if (piVar21 < (int *)puVar11[0x7c]) {
    piVar22 = piVar21 + 1;
    *piVar21 = iVar2;
LAB_109423a90:
    puVar11[0x7b] = piVar22;
    puVar12 = puVar11 + 0x7d;
    if (uVar15 < (ulong)puVar11[0x7f]) {
      FUN_10942ca84();
      puVar12 = (undefined8 *)(uVar15 + 0xd0);
      puVar11[0x7e] = puVar12;
      lVar18 = puVar13[1];
    }
    else {
      FUN_10942cbb8(puVar12,puVar13);
      puVar11[0x7e] = puVar12;
      lVar18 = puVar13[1];
    }
    if (lVar18 != 0) {
      fVar51 = (float)*(double *)(lVar18 + 0x18);
      uVar8 = *(undefined8 *)(lVar18 + 0x10);
      auVar6[9] = (char)((ulong)uVar8 >> 8);
      auVar6._0_9_ = *(unkbyte9 *)(lVar18 + 8);
      auVar6[10] = (char)((ulong)uVar8 >> 0x10);
      auVar6[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar6[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar6[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar6[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar6[0xf] = (char)((ulong)uVar8 >> 0x38);
      fVar7 = (float)(double)*(unkbyte9 *)(lVar18 + 8);
      fVar9 = (float)auVar6._8_8_;
      uVar5 = CONCAT16((char)((uint)fVar9 >> 0x10),
                       CONCAT15((char)((uint)fVar9 >> 8),CONCAT14(SUB41(fVar9,0),fVar7)));
      uVar19 = CONCAT17((char)((uint)fVar9 >> 0x18),uVar5);
      puVar13 = (undefined8 *)0x20;
      __Znwm();
      puVar13[2] = uVar19;
      *(float *)(puVar13 + 3) = fVar51;
      uVar16 = 0x9e3779b9;
      uVar15 = uVar16;
      if (fVar7 != 0.0) {
        uVar15 = ((ulong)uVar5 & 0xffffffff) + 0x9e3779b9;
      }
      uVar17 = uVar16;
      if ((float)(uVar19 >> 0x20) != 0.0) {
        uVar17 = (uVar19 >> 0x20) + 0x9e3779b9;
      }
      uVar15 = (uVar15 >> 2) + uVar15 * 0x40 + uVar17 ^ uVar15;
      if (fVar51 != 0.0) {
        uVar16 = (ulong)(uint)fVar51 + 0x9e3779b9;
      }
      *puVar13 = 0;
      puVar13[1] = uVar16 + uVar15 * 0x40 + (uVar15 >> 2) ^ uVar15;
      puVar12 = puVar11 + 0x89;
      puVar11 = puVar13;
      func_0x00010942c53c(puVar12);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar13);
        return puVar13;
      }
    }
    return puVar12;
  }
  lVar18 = puVar11[0x7a];
  uVar16 = ((long)piVar21 - lVar18 >> 2) + 1;
  if (uVar16 >> 0x3e == 0) {
    uVar17 = (long)puVar11[0x7c] - lVar18;
    uVar19 = (long)uVar17 >> 1;
    if (uVar19 <= uVar16) {
      uVar19 = uVar16;
    }
    if (0x7ffffffffffffffb < uVar17) {
      uVar19 = 0x3fffffffffffffff;
    }
    if (uVar19 >> 0x3e == 0) {
      lVar20 = uVar19 * 4;
      __Znwm();
      piVar21 = (int *)(lVar20 + ((long)piVar21 - lVar18));
      piVar22 = piVar21 + 1;
      *piVar21 = iVar2;
      _memcpy();
      puVar11[0x7a] = lVar20;
      puVar11[0x7b] = piVar22;
      puVar11[0x7c] = lVar20 + uVar19 * 4;
      if (lVar18 != 0) {
        __ZdlPv(lVar18);
        uVar15 = puVar11[0x7e];
      }
      goto LAB_109423a90;
    }
  }
  else {
    FUN_10923f788();
  }
  func_0x000104c4f740();
  __ZdlPv(puVar13);
  __Unwind_Resume();
  if (puVar11[0x13] != 0) {
    piVar21 = (int *)(puVar11[0x13] + 0x14);
    do {
      iVar2 = *piVar21;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar4) {
        *piVar21 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) && (puVar11[0x13] != 0)) {
      plVar14 = *(long **)(puVar11[0x13] + 8);
      if ((plVar14 == (long *)0x0) &&
         ((plVar14 = (long *)puVar11[0x12], (long *)puVar11[0x12] == (long *)0x0 &&
          (plVar14 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar14 = plRam000000011382bb80;
      }
      (**(code **)(*plVar14 + 0x30))();
    }
  }
  puVar11[0x13] = 0;
  puVar11[0xf] = 0;
  puVar11[0xe] = 0;
  puVar11[0x11] = 0;
  puVar11[0x10] = 0;
  if (0 < *(int *)((long)puVar11 + 100)) {
    lVar18 = 0;
    lVar20 = puVar11[0x14];
    do {
      *(undefined4 *)(lVar20 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)((long)puVar11 + 100));
  }
  puVar13 = (undefined8 *)puVar11[0x15];
  if (puVar13 != puVar11 + 0x16 && puVar13 != (undefined8 *)0x0) {
    _free(puVar13[-1]);
  }
  return puVar11;
}



/* Entry: 1094239ac; end: 109423bcf;  */

undefined8 * FUN_1094239ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint7 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  float fVar21;
  
  uVar18 = param_1[0x7e];
  iVar1 = (int)(uVar18 - param_1[0x7d] >> 4) * -0x3b13b13b;
  piVar19 = (int *)param_1[0x7b];
  if (piVar19 < (int *)param_1[0x7c]) {
    piVar20 = piVar19 + 1;
    *piVar19 = iVar1;
LAB_109423a90:
    param_1[0x7b] = piVar20;
    puVar14 = param_1 + 0x7d;
    if (uVar18 < (ulong)param_1[0x7f]) {
      FUN_10942ca84();
      puVar14 = (undefined8 *)(uVar18 + 0xd0);
      param_1[0x7e] = puVar14;
      lVar13 = *(long *)(param_2 + 8);
    }
    else {
      FUN_10942cbb8(puVar14,param_2);
      param_1[0x7e] = puVar14;
      lVar13 = *(long *)(param_2 + 8);
    }
    if (lVar13 != 0) {
      fVar21 = (float)*(double *)(lVar13 + 0x18);
      uVar8 = *(undefined8 *)(lVar13 + 0x10);
      auVar5[9] = (char)((ulong)uVar8 >> 8);
      auVar5._0_9_ = *(unkbyte9 *)(lVar13 + 8);
      auVar5[10] = (char)((ulong)uVar8 >> 0x10);
      auVar5[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar5[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar5[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar5[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar5[0xf] = (char)((ulong)uVar8 >> 0x38);
      fVar6 = (float)(double)*(unkbyte9 *)(lVar13 + 8);
      fVar7 = (float)auVar5._8_8_;
      uVar4 = CONCAT16((char)((uint)fVar7 >> 0x10),
                       CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),fVar6)));
      uVar17 = CONCAT17((char)((uint)fVar7 >> 0x18),uVar4);
      puVar9 = (undefined8 *)0x20;
      __Znwm();
      puVar9[2] = uVar17;
      *(float *)(puVar9 + 3) = fVar21;
      uVar15 = 0x9e3779b9;
      uVar18 = uVar15;
      if (fVar6 != 0.0) {
        uVar18 = ((ulong)uVar4 & 0xffffffff) + 0x9e3779b9;
      }
      uVar12 = uVar15;
      if ((float)(uVar17 >> 0x20) != 0.0) {
        uVar12 = (uVar17 >> 0x20) + 0x9e3779b9;
      }
      uVar18 = (uVar18 >> 2) + uVar18 * 0x40 + uVar12 ^ uVar18;
      if (fVar21 != 0.0) {
        uVar15 = (ulong)(uint)fVar21 + 0x9e3779b9;
      }
      *puVar9 = 0;
      puVar9[1] = uVar15 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18;
      puVar14 = param_1 + 0x89;
      puVar11 = puVar9;
      func_0x00010942c53c(puVar14);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar9);
        return puVar9;
      }
    }
    return puVar14;
  }
  lVar13 = param_1[0x7a];
  uVar15 = ((long)piVar19 - lVar13 >> 2) + 1;
  if (uVar15 >> 0x3e == 0) {
    uVar12 = (long)param_1[0x7c] - lVar13;
    uVar17 = (long)uVar12 >> 1;
    if (uVar17 <= uVar15) {
      uVar17 = uVar15;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar17 = 0x3fffffffffffffff;
    }
    if (uVar17 >> 0x3e == 0) {
      lVar16 = uVar17 * 4;
      __Znwm();
      piVar19 = (int *)(lVar16 + ((long)piVar19 - lVar13));
      piVar20 = piVar19 + 1;
      *piVar19 = iVar1;
      _memcpy();
      param_1[0x7a] = lVar16;
      param_1[0x7b] = piVar20;
      param_1[0x7c] = lVar16 + uVar17 * 4;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
        uVar18 = param_1[0x7e];
      }
      goto LAB_109423a90;
    }
  }
  else {
    FUN_10923f788();
  }
  func_0x000104c4f740();
  __ZdlPv(param_2);
  __Unwind_Resume();
  if (param_1[0x13] != 0) {
    piVar19 = (int *)(param_1[0x13] + 0x14);
    do {
      iVar1 = *piVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar3) {
        *piVar19 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((iVar1 + -1 == 0) && (param_1[0x13] != 0)) {
      plVar10 = *(long **)(param_1[0x13] + 8);
      if ((plVar10 == (long *)0x0) &&
         ((plVar10 = (long *)param_1[0x12], (long *)param_1[0x12] == (long *)0x0 &&
          (plVar10 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar10 = plRam000000011382bb80;
      }
      (**(code **)(*plVar10 + 0x30))();
    }
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (0 < *(int *)((long)param_1 + 100)) {
    lVar13 = 0;
    lVar16 = param_1[0x14];
    do {
      *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)param_1 + 100));
  }
  puVar14 = (undefined8 *)param_1[0x15];
  if (puVar14 != param_1 + 0x16 && puVar14 != (undefined8 *)0x0) {
    _free(puVar14[-1]);
  }
  return param_1;
}



/* Entry: 109423bd0; end: 109423c9f;  */

long FUN_109423bd0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) && (*(long *)(param_1 + 0x98) != 0)) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x98) + 8);
      if ((plVar5 == (long *)0x0) &&
         ((plVar5 = *(long **)(param_1 + 0x90), *(long **)(param_1 + 0x90) == (long *)0x0 &&
          (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar5 = plRam000000011382bb80;
      }
      (**(code **)(*plVar5 + 0x30))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 100));
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  if (lVar6 != param_1 + 0xb0 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  return param_1;
}



/* Entry: 109423ca0; end: 109423eb7;  */

void FUN_109423ca0(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  
  if ((long *)(param_1 + 1000) != param_2) {
    FUN_1094281bc((long *)(param_1 + 1000),*param_2,param_2[1],
                  (param_2[1] - *param_2 >> 4) * 0x4ec4ec4ec4ec4ec5);
  }
  lVar4 = *(long *)(param_1 + 0x3f0) - *(long *)(param_1 + 1000) >> 4;
  uVar7 = lVar4 * 0x4ec4ec4ec4ec4ec5;
  piVar5 = *(int **)(param_1 + 0x3d8);
  piVar11 = *(int **)(param_1 + 0x3d0);
  uVar9 = (long)piVar5 - (long)piVar11 >> 2;
  if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
    if (uVar7 < uVar9) {
      piVar5 = piVar11 + lVar4 * 0xec4ec4ec4ec4ec5;
      *(int **)(param_1 + 0x3d8) = piVar5;
    }
  }
  else {
    func_0x000107c2a6fc(param_1 + 0x3d0,uVar7 - uVar9);
    piVar11 = *(int **)(param_1 + 0x3d0);
    piVar5 = *(int **)(param_1 + 0x3d8);
  }
  if (piVar11 != piVar5) {
    uVar7 = (long)piVar5 + (-4 - (long)piVar11);
    if (uVar7 < 0x1c) {
      uVar8 = 0;
      piVar10 = piVar11;
    }
    else {
      uVar7 = (uVar7 >> 2) + 1;
      uVar8 = uVar7 & 0x7ffffffffffffff8;
      piVar10 = piVar11 + uVar8;
      iVar17 = 2;
      iVar18 = 3;
      iVar13 = 0;
      iVar15 = 1;
      piVar11 = piVar11 + 4;
      uVar9 = uVar8;
      do {
        *(ulong *)(piVar11 + -2) = CONCAT44(iVar18,iVar17);
        *(ulong *)(piVar11 + -4) = CONCAT44(iVar15,iVar13);
        *(ulong *)(piVar11 + 2) = CONCAT44(iVar18 + 4,iVar17 + 4);
        *(ulong *)piVar11 = CONCAT44(iVar15 + 4,iVar13 + 4);
        iVar13 = iVar13 + 8;
        iVar15 = iVar15 + 8;
        iVar17 = iVar17 + 8;
        iVar18 = iVar18 + 8;
        piVar11 = piVar11 + 8;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
      if (uVar7 == uVar8) goto LAB_109423dbc;
    }
    do {
      piVar11 = piVar10 + 1;
      *piVar10 = (int)uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
      piVar10 = piVar11;
    } while (piVar11 != piVar5);
  }
LAB_109423dbc:
  lVar4 = *(long *)(param_1 + 1000);
  lVar12 = *(long *)(param_1 + 0x3f0);
  if (lVar4 != lVar12) {
    uVar7 = 0x9e3779b9;
    do {
      lVar6 = *(long *)(lVar4 + 8);
      if (lVar6 != 0) {
        fVar19 = (float)*(double *)(lVar6 + 0x18);
        auVar1._12_4_ = (int)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20);
        auVar1._0_12_ = *(undefined1 (*) [12])(lVar6 + 8);
        fVar14 = (float)SUB128(*(undefined1 (*) [12])(lVar6 + 8),0);
        fVar16 = (float)auVar1._8_8_;
        puVar2 = (undefined8 *)0x20;
        __Znwm();
        puVar2[2] = CONCAT44(fVar16,fVar14);
        *(float *)(puVar2 + 3) = fVar19;
        uVar9 = uVar7;
        if (fVar14 != 0.0) {
          uVar9 = (ulong)(uint)fVar14 + 0x9e3779b9;
        }
        uVar8 = uVar7;
        if (fVar16 != 0.0) {
          uVar8 = (ulong)(uint)fVar16 + 0x9e3779b9;
        }
        uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + uVar8 ^ uVar9;
        uVar8 = uVar7;
        if (fVar19 != 0.0) {
          uVar8 = (ulong)(uint)fVar19 + 0x9e3779b9;
        }
        *puVar2 = 0;
        puVar2[1] = uVar8 + uVar9 * 0x40 + (uVar9 >> 2) ^ uVar9;
        puVar3 = puVar2;
        func_0x00010942c53c(param_1 + 0x448);
        if (((ulong)puVar3 & 1) == 0) {
          __ZdlPv(puVar2);
        }
      }
      lVar4 = lVar4 + 0xd0;
    } while (lVar4 != lVar12);
  }
  return;
}



/* Entry: 109423eb8; end: 109423f27;  */

undefined8 * FUN_109423eb8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 109423f28; end: 109423fab;  */

long * FUN_109423f28(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109423fac; end: 1094267fb;  */

void FUN_109423fac(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  double *pdVar3;
  double ***pppdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double ***pppdVar8;
  float fVar9;
  char cVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  double ****ppppdVar16;
  double ******ppppppdVar17;
  double ***pppdVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  code *pcVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  double *******pppppppdVar25;
  undefined4 *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  double ******ppppppdVar29;
  long *plVar30;
  long *plVar31;
  undefined4 *puVar32;
  undefined8 ****ppppuVar33;
  long lVar34;
  ulong uVar35;
  undefined4 uVar36;
  long *plVar37;
  ulong uVar38;
  uint *puVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 *****pppppuVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 *puVar48;
  ulong uVar49;
  undefined8 ******ppppppuVar50;
  undefined8 *****pppppuVar51;
  float *pfVar52;
  undefined8 *******pppppppuVar53;
  int iVar54;
  undefined8 *****pppppuVar55;
  long lVar56;
  int iVar57;
  int iVar58;
  long lVar59;
  long *plVar60;
  undefined8 ******ppppppuVar61;
  double *****pppppdVar62;
  float fVar63;
  double ******ppppppdVar64;
  double dVar65;
  undefined8 ******ppppppuVar66;
  undefined1 auVar67 [16];
  undefined8 ******ppppppuVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined8 ******ppppppuVar71;
  undefined8 uVar72;
  undefined8 ******ppppppuVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 ******ppppppuStack_430;
  double ****ppppdStack_428;
  double ***pppdStack_420;
  undefined8 uStack_410;
  double *****pppppdStack_408;
  double *****pppppdStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *****pppppuStack_3e0;
  long lStack_3d8;
  double *****pppppdStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  double *****pppppdStack_3b0;
  double *****pppppdStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  int iStack_380;
  int iStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined2 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined1 uStack_318;
  undefined1 uStack_308;
  double ******ppppppdStack_300;
  double ******ppppppdStack_2f8;
  double ******ppppppdStack_2f0;
  undefined8 ******ppppppuStack_2e8;
  undefined8 ******ppppppuStack_2e0;
  undefined8 ******ppppppuStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 ******ppppppuStack_2c8;
  undefined8 ******ppppppuStack_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined8 ****ppppuStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined8 **ppuStack_288;
  undefined8 **ppuStack_280;
  byte bStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  double ******ppppppdStack_258;
  double ******ppppppdStack_250;
  double ******ppppppdStack_248;
  double ******ppppppdStack_240;
  undefined8 *****pppppuStack_238;
  undefined8 *****pppppuStack_230;
  undefined8 *****pppppuStack_228;
  undefined8 *****pppppuStack_220;
  undefined8 *****pppppuStack_218;
  undefined8 *****pppppuStack_210;
  undefined8 *****pppppuStack_208;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 *****pppppuStack_1c8;
  undefined4 *puStack_1c0;
  undefined8 *puStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined7 uStack_190;
  char cStack_189;
  undefined8 uStack_188;
  double ******ppppppdStack_180;
  undefined8 *****pppppuStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 *****pppppuStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 *****pppppuStack_158;
  undefined8 *****pppppuStack_150;
  undefined8 *****pppppuStack_148;
  undefined8 uStack_140;
  undefined8 *****pppppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****pppppuStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 *****pppppuStack_118;
  undefined8 *****pppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 *****pppppuStack_100;
  double *pdStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  undefined8 *****pppppuStack_e0;
  byte bStack_d0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar37 = (long *)(param_2 + 0x1e);
  lVar22 = *plVar37;
  lVar34 = *(long *)(param_2 + 0x20);
  uVar38 = (lVar34 - lVar22 >> 3) * -0x71c71c71c71c71c7;
  if (uVar38 < (uint)param_2[1]) {
    lVar56 = 0;
    if (lVar34 != lVar22) {
      lVar56 = LZCOUNT(uVar38) * -2 + 0x7e;
    }
    FUN_10942887c(lVar22,lVar34,lVar56,1);
    lVar22 = *(long *)(param_2 + 0x1e);
    lVar34 = *(long *)(param_2 + 0x20);
  }
  if (lVar34 != lVar22) {
    uVar38 = 0;
    puVar46 = (undefined8 *)((ulong)&uStack_410 | 4);
    auVar70 = NEON_fmov(0x3fe0000000000000,8);
    auVar67 = NEON_fmov(0xbfe0000000000000,8);
    do {
      lVar22 = lVar22 + uVar38 * 0x48;
      puVar39 = *(uint **)(lVar22 + 8);
      if ((*puVar39 & 0xfffffffb) != 0) {
        ppppppuStack_2c8 = (undefined8 *******)0x0;
        ppppppuStack_2d0 = (undefined8 *******)0x0;
        ppppppuStack_2c0 = (undefined8 *******)0x0;
        lVar56 = *(long *)(puVar39 + 0xfa);
        lVar59 = *(long *)(puVar39 + 0xfc);
        uStack_1a0 = (double *******)&ppppppuStack_2d0;
        ppppppuStack_198 = (undefined8 ******)((ulong)ppppppuStack_198 & 0xffffffffffffff00);
        lVar34 = lVar59 - lVar56;
        if (lVar34 != 0) {
          uVar35 = (lVar34 >> 4) * 0x4ec4ec4ec4ec4ec5;
          if (0x13b13b13b13b13b < uVar35) {
            FUN_109428800();
            goto LAB_1094264f4;
          }
          pppppppuVar23 = &ppppppuStack_2d0;
          FUN_109428814(pppppppuVar23,uVar35,0);
          ppppppuStack_2c0 = (undefined8 ******)((long)pppppppuVar23 + lVar34);
          pppppppuVar53 = &ppppppuStack_2d0;
          ppppppuStack_2d0 = pppppppuVar23;
          ppppppuStack_2c8 = pppppppuVar23;
          FUN_10942857c(pppppppuVar53,lVar56,lVar59,pppppppuVar23);
          ppppppuStack_2c8 = pppppppuVar53;
        }
        lVar56 = *(long *)(lVar22 + 0x30);
        for (lVar34 = *(long *)(lVar22 + 0x28); lVar34 != lVar56; lVar34 = lVar34 + 0xd0) {
          uStack_260 = (double *******)
                       CONCAT44(uStack_260._4_4_,*(undefined4 *)(*(long *)(lVar34 + 8) + 0x38));
          piVar27 = param_2 + 0x14;
          uStack_1a0 = (double *******)&uStack_260;
          FUN_1093c8af8(piVar27,&uStack_260,&UNK_10dd5b8f9,&uStack_1a0,&uStack_410);
          ppppppuVar50 = ppppppuStack_2c8;
          ppppppuVar61 = *(undefined8 *******)(*(long *)(param_2 + 4) + (long)piVar27[5] * 8);
          if (ppppppuStack_2c8 < ppppppuStack_2c0) {
            *(undefined1 *)ppppppuStack_2c8 = 1;
            ppppppuVar50[1] = ppppppuVar61;
            ppppppuVar61 = *(undefined8 *******)(lVar34 + 0x10);
            ppppppuVar50[3] = *(undefined8 *******)(lVar34 + 0x18);
            ppppppuVar50[2] = ppppppuVar61;
            ppppppuVar61 = *(undefined8 *******)(lVar34 + 0x20);
            ppppppuVar50[5] = *(undefined8 *******)(lVar34 + 0x28);
            ppppppuVar50[4] = ppppppuVar61;
            ppppppuVar61 = *(undefined8 *******)(lVar34 + 0x30);
            ppppppuVar66 = *(undefined8 *******)(lVar34 + 0x38);
            ppppppuVar68 = *(undefined8 *******)(lVar34 + 0x40);
            ppppppuVar73 = *(undefined8 *******)(lVar34 + 0x58);
            ppppppuVar71 = *(undefined8 *******)(lVar34 + 0x50);
            ppppppuVar50[9] = *(undefined8 *******)(lVar34 + 0x48);
            ppppppuVar50[8] = ppppppuVar68;
            ppppppuVar50[0xb] = ppppppuVar73;
            ppppppuVar50[10] = ppppppuVar71;
            ppppppuVar50[7] = ppppppuVar66;
            ppppppuVar50[6] = ppppppuVar61;
            auVar12 = *(undefined1 (*) [16])(lVar34 + 0x60);
            ppppppuVar61 = *(undefined8 *******)(lVar34 + 0x70);
            ppppppuVar50[0xf] = *(undefined8 *******)(lVar34 + 0x78);
            ppppppuVar50[0xe] = ppppppuVar61;
            ppppppuVar61 = *(undefined8 *******)(lVar34 + 0x80);
            ppppppuVar50[0x11] = *(undefined8 *******)(lVar34 + 0x88);
            ppppppuVar50[0x10] = ppppppuVar61;
            lVar59 = *(long *)(lVar34 + 0x98);
            auVar13 = *(undefined1 (*) [16])(lVar34 + 0x90);
            ppppppuVar50[0x16] = (undefined8 ******)0x0;
            ppppppuVar50[0x13] = auVar13._8_8_;
            ppppppuVar50[0x12] = auVar13._0_8_;
            ppppppuVar50[0x14] = ppppppuVar50 + 0xd;
            ppppppuVar50[0x15] = ppppppuVar50 + 0x16;
            ppppppuVar50[0x17] = (undefined8 ******)0x0;
            ppppppuVar50[0xd] = auVar12._8_8_;
            ppppppuVar50[0xc] = auVar12._0_8_;
            if (lVar59 != 0) {
              piVar27 = (int *)(lVar59 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar11) {
                  *piVar27 = *piVar27 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(int *)(lVar34 + 100) < 3) {
              puVar40 = *(undefined8 **)(lVar34 + 0xa8);
              ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x15];
              *ppppppuVar61 = (undefined8 *****)*puVar40;
              ppppppuVar61[1] = (undefined8 *****)puVar40[1];
            }
            else {
              *(undefined4 *)((long)ppppppuVar50 + 100) = 0;
              FUN_109a844cc(ppppppuVar50 + 0xc,*(undefined4 *)(lVar34 + 100),0,0,0);
              if (0 < *(int *)((long)ppppppuVar50 + 100)) {
                lVar59 = 0;
                lVar41 = *(long *)(lVar34 + 0xa0);
                lVar5 = *(long *)(lVar34 + 0xa8);
                ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x14];
                ppppppuVar66 = (undefined8 ******)ppppppuVar50[0x15];
                do {
                  *(undefined4 *)((long)ppppppuVar61 + lVar59 * 4) =
                       *(undefined4 *)(lVar41 + lVar59 * 4);
                  ppppppuVar66[lVar59] = *(undefined8 ******)(lVar5 + lVar59 * 8);
                  lVar59 = lVar59 + 1;
                } while (lVar59 < *(int *)((long)ppppppuVar50 + 100));
              }
            }
            ppppppuVar50[0x18] = (undefined8 ******)0xbff0000000000000;
            pppppppuVar23 = (undefined8 *******)(ppppppuVar50 + 0x1a);
          }
          else {
            lVar59 = (long)ppppppuStack_2c8 - (long)ppppppuStack_2d0;
            uVar35 = (lVar59 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
            if (0x13b13b13b13b13b < uVar35) {
              FUN_109428800();
              goto LAB_1094264f4;
            }
            lVar41 = (long)ppppppuStack_2c0 - (long)ppppppuStack_2d0 >> 4;
            uVar47 = lVar41 * -0x6276276276276276;
            if (uVar47 < uVar35 || uVar47 - uVar35 == 0) {
              uVar47 = uVar35;
            }
            if (0x9d89d89d89d89c < (ulong)(lVar41 * 0x4ec4ec4ec4ec4ec5)) {
              uVar47 = 0x13b13b13b13b13b;
            }
            ppppppdStack_180 = (double ******)&ppppppuStack_2d0;
            if (uVar47 == 0) {
              pppppppuVar23 = (undefined8 *******)0x0;
            }
            else {
              pppppppuVar23 = &ppppppuStack_2d0;
              FUN_109428814(pppppppuVar23,uVar47,0);
            }
            puVar2 = (undefined1 *)((long)pppppppuVar23 + lVar59);
            uStack_1a0 = (double *******)pppppppuVar23;
            ppppppuStack_198 = (undefined8 ******)puVar2;
            pppppppuVar23 = pppppppuVar23 + uVar47 * 0x1a;
            uStack_190 = SUB87(puVar2,0);
            cStack_189 = (char)((ulong)puVar2 >> 0x38);
            uStack_188._0_4_ = SUB84(pppppppuVar23,0);
            uStack_188._4_4_ = (int)((ulong)pppppppuVar23 >> 0x20);
            uStack_188 = pppppppuVar23;
            *puVar2 = 1;
            *(undefined8 *******)(puVar2 + 8) = ppppppuVar61;
            uVar24 = *(undefined8 *)(lVar34 + 0x10);
            *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar34 + 0x18);
            *(undefined8 *)(puVar2 + 0x10) = uVar24;
            uVar24 = *(undefined8 *)(lVar34 + 0x20);
            *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar34 + 0x28);
            *(undefined8 *)(puVar2 + 0x20) = uVar24;
            uVar24 = *(undefined8 *)(lVar34 + 0x30);
            uVar14 = *(undefined8 *)(lVar34 + 0x38);
            uVar15 = *(undefined8 *)(lVar34 + 0x40);
            uVar74 = *(undefined8 *)(lVar34 + 0x58);
            uVar72 = *(undefined8 *)(lVar34 + 0x50);
            *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(lVar34 + 0x48);
            *(undefined8 *)(puVar2 + 0x40) = uVar15;
            *(undefined8 *)(puVar2 + 0x58) = uVar74;
            *(undefined8 *)(puVar2 + 0x50) = uVar72;
            *(undefined8 *)(puVar2 + 0x38) = uVar14;
            *(undefined8 *)(puVar2 + 0x30) = uVar24;
            uVar24 = *(undefined8 *)(lVar34 + 0x60);
            *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)(lVar34 + 0x68);
            *(undefined8 *)(puVar2 + 0x60) = uVar24;
            uVar24 = *(undefined8 *)(lVar34 + 0x70);
            *(undefined8 *)(puVar2 + 0x78) = *(undefined8 *)(lVar34 + 0x78);
            *(undefined8 *)(puVar2 + 0x70) = uVar24;
            uVar24 = *(undefined8 *)(lVar34 + 0x80);
            *(undefined8 *)(puVar2 + 0x88) = *(undefined8 *)(lVar34 + 0x88);
            *(undefined8 *)(puVar2 + 0x80) = uVar24;
            lVar59 = *(long *)(lVar34 + 0x98);
            uVar24 = *(undefined8 *)(lVar34 + 0x90);
            *(undefined8 *)(puVar2 + 0x98) = *(undefined8 *)(lVar34 + 0x98);
            *(undefined8 *)(puVar2 + 0x90) = uVar24;
            *(undefined8 *)(puVar2 + 0xb0) = 0;
            *(undefined1 **)(puVar2 + 0xa0) = puVar2 + 0x68;
            *(undefined1 **)(puVar2 + 0xa8) = puVar2 + 0xb0;
            *(undefined8 *)(puVar2 + 0xb8) = 0;
            if (lVar59 != 0) {
              piVar27 = (int *)(lVar59 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar11) {
                  *piVar27 = *piVar27 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(int *)(lVar34 + 100) < 3) {
              puVar40 = *(undefined8 **)(lVar34 + 0xa8);
              puVar48 = *(undefined8 **)(puVar2 + 0xa8);
              *puVar48 = *puVar40;
              puVar48[1] = puVar40[1];
            }
            else {
              *(undefined4 *)(puVar2 + 100) = 0;
              FUN_109a844cc(puVar2 + 0x60,*(undefined4 *)(lVar34 + 100),0,0,0);
              if (0 < *(int *)(puVar2 + 100)) {
                lVar59 = 0;
                lVar41 = *(long *)(lVar34 + 0xa0);
                lVar6 = *(long *)(lVar34 + 0xa8);
                lVar5 = *(long *)(puVar2 + 0xa0);
                lVar7 = *(long *)(puVar2 + 0xa8);
                do {
                  *(undefined4 *)(lVar5 + lVar59 * 4) = *(undefined4 *)(lVar41 + lVar59 * 4);
                  *(undefined8 *)(lVar7 + lVar59 * 8) = *(undefined8 *)(lVar6 + lVar59 * 8);
                  lVar59 = lVar59 + 1;
                } while (lVar59 < *(int *)(puVar2 + 100));
              }
            }
            *(undefined8 *)(puVar2 + 0xc0) = 0xbff0000000000000;
            pppppppuVar23 = (undefined8 *******)(CONCAT17(cStack_189,uStack_190) + 0xd0);
            uStack_190 = SUB87(pppppppuVar23,0);
            cStack_189 = (char)((ulong)pppppppuVar23 >> 0x38);
            pppppppuVar53 =
                 (undefined8 *******)
                 ((long)ppppppuStack_198 + ((long)ppppppuStack_2d0 - (long)ppppppuStack_2c8));
            FUN_10942cdf0(&ppppppuStack_2d0,ppppppuStack_2d0,ppppppuStack_2c8,pppppppuVar53);
            ppppppuStack_198 = ppppppuStack_2d0;
            uStack_190 = SUB87(ppppppuStack_2d0,0);
            cStack_189 = (char)((ulong)ppppppuStack_2d0 >> 0x38);
            ppppppuStack_2c0 = uStack_188;
            bVar11 = (undefined8 *******)ppppppuStack_2d0 != (undefined8 *******)0x0;
            ppppppuStack_2d0 = pppppppuVar53;
            if (bVar11) {
              ppppppuStack_2c8 = pppppppuVar23;
              _free();
            }
          }
          ppppppuStack_2c8 = pppppppuVar23;
        }
        ppppppuStack_2e0 = (undefined8 *******)0x0;
        ppppppuStack_2e8 = (undefined8 *******)0x0;
        ppppppuStack_2d8 = (undefined8 *******)0x0;
        puVar40 = *(undefined8 **)(lVar22 + 0x10);
        puVar48 = *(undefined8 **)(lVar22 + 0x18);
        if (puVar40 == puVar48) {
LAB_1094240f8:
          **(undefined4 **)(lVar22 + 8) = 0;
        }
        else {
          iVar54 = -0x80000000;
          iVar57 = 0x7fffffff;
          do {
            if ((-1 < (int)*(uint *)(puVar40 + 0x16)) &&
               (uStack_260 = *(double ********)
                              (*(long *)(param_2 + 4) + (ulong)*(uint *)(puVar40 + 0x16) * 8),
               *(int *)(uStack_260 + 10) != 0)) {
              func_0x000109426858(&uStack_1a0,ppppppuStack_2d0,ppppppuStack_2c8,puVar40);
              pppppppdVar25 = uStack_260;
              ppppppuVar50 = ppppppuStack_2e0;
              iVar58 = iVar57;
              if ((bStack_d0 & 1) == 0) {
                if (ppppppuStack_2e0 < ppppppuStack_2d8) {
                  *(undefined1 *)ppppppuStack_2e0 = 1;
                  ppppppuVar50[1] = pppppppdVar25;
                  ppppppuVar61 = (undefined8 ******)*puVar40;
                  ppppppuVar50[3] = (undefined8 ******)puVar40[1];
                  ppppppuVar50[2] = ppppppuVar61;
                  ppppppuVar61 = (undefined8 ******)puVar40[2];
                  ppppppuVar50[5] = (undefined8 ******)puVar40[3];
                  ppppppuVar50[4] = ppppppuVar61;
                  ppppppuVar61 = (undefined8 ******)puVar40[4];
                  ppppppuVar66 = (undefined8 ******)puVar40[5];
                  ppppppuVar68 = (undefined8 ******)puVar40[6];
                  ppppppuVar73 = (undefined8 ******)puVar40[9];
                  ppppppuVar71 = (undefined8 ******)puVar40[8];
                  ppppppuVar50[9] = (undefined8 ******)puVar40[7];
                  ppppppuVar50[8] = ppppppuVar68;
                  ppppppuVar50[0xb] = ppppppuVar73;
                  ppppppuVar50[10] = ppppppuVar71;
                  ppppppuVar50[7] = ppppppuVar66;
                  ppppppuVar50[6] = ppppppuVar61;
                  auVar12 = *(undefined1 (*) [16])(puVar40 + 10);
                  ppppppuVar61 = (undefined8 ******)puVar40[0xc];
                  ppppppuVar50[0xf] = (undefined8 ******)puVar40[0xd];
                  ppppppuVar50[0xe] = ppppppuVar61;
                  ppppppuVar61 = (undefined8 ******)puVar40[0xe];
                  ppppppuVar50[0x11] = (undefined8 ******)puVar40[0xf];
                  ppppppuVar50[0x10] = ppppppuVar61;
                  lVar34 = puVar40[0x11];
                  auVar13 = *(undefined1 (*) [16])(puVar40 + 0x10);
                  ppppppuVar50[0x16] = (undefined8 ******)0x0;
                  ppppppuVar50[0x13] = auVar13._8_8_;
                  ppppppuVar50[0x12] = auVar13._0_8_;
                  ppppppuVar50[0x14] = ppppppuVar50 + 0xd;
                  ppppppuVar50[0x15] = ppppppuVar50 + 0x16;
                  ppppppuVar50[0x17] = (undefined8 ******)0x0;
                  ppppppuVar50[0xd] = auVar12._8_8_;
                  ppppppuVar50[0xc] = auVar12._0_8_;
                  if (lVar34 != 0) {
                    piVar27 = (int *)(lVar34 + 0x14);
                    do {
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                      if (bVar11) {
                        *piVar27 = *piVar27 + 1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                  }
                  if (*(int *)((long)puVar40 + 0x54) < 3) {
                    puVar42 = (undefined8 *)puVar40[0x13];
                    ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x15];
                    *ppppppuVar61 = (undefined8 *****)*puVar42;
                    ppppppuVar61[1] = (undefined8 *****)puVar42[1];
                  }
                  else {
                    *(undefined4 *)((long)ppppppuVar50 + 100) = 0;
                    FUN_109a844cc(ppppppuVar50 + 0xc,*(undefined4 *)((long)puVar40 + 0x54),0,0,0);
                    if (0 < *(int *)((long)ppppppuVar50 + 100)) {
                      lVar34 = 0;
                      lVar56 = puVar40[0x12];
                      lVar59 = puVar40[0x13];
                      ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x14];
                      ppppppuVar66 = (undefined8 ******)ppppppuVar50[0x15];
                      do {
                        *(undefined4 *)((long)ppppppuVar61 + lVar34 * 4) =
                             *(undefined4 *)(lVar56 + lVar34 * 4);
                        ppppppuVar66[lVar34] = *(undefined8 ******)(lVar59 + lVar34 * 8);
                        lVar34 = lVar34 + 1;
                      } while (lVar34 < *(int *)((long)ppppppuVar50 + 100));
                    }
                  }
                  ppppppuVar50[0x18] = (undefined8 ******)0xbff0000000000000;
                  pppppppuVar23 = (undefined8 *******)(ppppppuVar50 + 0x1a);
                }
                else {
                  pppppppuVar23 = &ppppppuStack_2e8;
                  FUN_10942ff50(pppppppuVar23,&uStack_260,puVar40);
                }
                iVar58 = *(int *)(puVar40 + 5);
                if (iVar54 <= iVar58) {
                  iVar54 = iVar58;
                }
                if (iVar57 <= iVar58) {
                  iVar58 = iVar57;
                }
                iVar57 = iVar58;
                ppppppuStack_2e0 = pppppppuVar23;
                if (bStack_d0 != 1) goto LAB_109424590;
              }
              if ((undefined8 ******)pppppuStack_108 != (undefined8 ******)0x0) {
                piVar27 = (int *)((long)pppppuStack_108 + 0x14);
                do {
                  iVar57 = *piVar27;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar11) {
                    *piVar27 = iVar57 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar57 + -1 == 0) &&
                   ((undefined8 ******)pppppuStack_108 != (undefined8 ******)0x0)) {
                  ppppppuVar50 = (undefined8 ******)pppppuStack_108[1];
                  if (((undefined8 ******)pppppuStack_108[1] == (undefined8 ******)0x0) &&
                     ((ppppppuVar50 = (undefined8 ******)pppppuStack_110,
                      (undefined8 ******)pppppuStack_110 == (undefined8 ******)0x0 &&
                      (ppppppuVar50 = ppppppuRam000000011382bb80,
                      ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                    FUN_109a83e3c();
                    ppppppuVar50 = ppppppuRam000000011382bb80;
                  }
                  (*(code *)(*ppppppuVar50)[6])();
                }
              }
              pppppuStack_108 = (undefined8 ******)0x0;
              pppppuStack_128 = (undefined8 ******)0x0;
              pppppuStack_130 = (undefined8 ******)0x0;
              pppppuStack_118 = (undefined8 ******)0x0;
              pppppuStack_120 = (undefined8 ******)0x0;
              if (0 < uStack_140._4_4_) {
                lVar34 = 0;
                do {
                  *(undefined4 *)((long)pppppuStack_100 + lVar34 * 4) = 0;
                  lVar34 = lVar34 + 1;
                } while (lVar34 < uStack_140._4_4_);
              }
              iVar57 = iVar58;
              if ((double **)pdStack_f8 != &pdStack_f0 && (double **)pdStack_f8 != (double **)0x0) {
                _free((double *)pdStack_f8[-1]);
              }
            }
LAB_109424590:
            puVar40 = puVar40 + 0x18;
          } while (puVar40 != puVar48);
          if (ppppppuStack_2e0 == ppppppuStack_2e8) goto LAB_1094240f8;
          ppppppdStack_2f8 = (double ******)0x0;
          ppppppdStack_300 = (double ******)0x0;
          ppppppdStack_2f0 = (double ******)0x0;
          puStack_398 = (undefined8 *)0x200000001;
          puStack_390 = (undefined8 *)0x3fb33333000005dc;
          puStack_388 = (undefined8 *)0x0;
          uStack_378 = 0x40000000000001f4;
          uStack_370 = 0;
          uStack_368 = 0x10000001e;
          uStack_360 = 2;
          uStack_350 = 0x1900000001e;
          uStack_358 = 0x7fffffff00000012;
          uStack_348 = 0x753000000190;
          uStack_340 = 0x3b23d70a40400000;
          uStack_338 = 0xffffffffffffffff;
          uStack_330 = 0x101;
          uStack_328 = 0x40;
          uStack_320 = 0x40800000;
          uStack_318 = 0;
          uStack_308 = 0;
          uVar24 = *(undefined8 *)(*(long *)(lVar22 + 8) + 0x120);
          pppppdStack_3b0 = (double *****)0x0;
          pppppdStack_3a8 = (double *****)0x0;
          uStack_3a0 = 0;
          uStack_410 = (double ******)CONCAT44(uStack_410._4_4_,0x42ff0000);
          puVar46[1] = 0;
          *puVar46 = 0;
          puVar46[3] = 0;
          puVar46[2] = 0;
          puVar46[5] = 0;
          puVar46[4] = 0;
          *(undefined8 *)((long)puVar46 + 0x34) = 0;
          *(undefined8 *)((long)puVar46 + 0x2c) = 0;
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          pppppdStack_3d0 = (double *****)&pppppdStack_408;
          puStack_3c8 = &uStack_3c0;
          iStack_380 = iVar57;
          iStack_37c = iVar54;
          FUN_10940be70(&uStack_1a0,uVar24,&puStack_398);
          uStack_260 = (double *******)&pppppdStack_3b0;
          ppppppdStack_258 = (double ******)&uStack_410;
          FUN_10940bb20(&uStack_260,&uStack_1a0);
          pppppppuVar23 = uStack_188;
          if ((undefined8 ******)pppppuStack_150 != (undefined8 ******)0x0) {
            piVar27 = (int *)((long)pppppuStack_150 + 0x14);
            do {
              iVar54 = *piVar27;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar11) {
                *piVar27 = iVar54 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((iVar54 + -1 == 0) && ((undefined8 ******)pppppuStack_150 != (undefined8 ******)0x0)
               ) {
              ppppppuVar50 = (undefined8 ******)pppppuStack_150[1];
              if (((undefined8 ******)pppppuStack_150[1] == (undefined8 ******)0x0) &&
                 ((ppppppuVar50 = (undefined8 ******)pppppuStack_158,
                  (undefined8 ******)pppppuStack_158 == (undefined8 ******)0x0 &&
                  (ppppppuVar50 = ppppppuRam000000011382bb80,
                  ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                FUN_109a83e3c();
                ppppppuVar50 = ppppppuRam000000011382bb80;
              }
              (*(code *)(*ppppppuVar50)[6])();
              pppppppuVar23 = uStack_188;
            }
          }
          uStack_188._4_4_ = (int)((ulong)pppppppuVar23 >> 0x20);
          pppppuStack_150 = (undefined8 ******)0x0;
          pppppuStack_170 = (undefined8 ******)0x0;
          pppppuStack_178 = (undefined8 ******)0x0;
          pppppuStack_160 = (undefined8 ******)0x0;
          pppppuStack_168 = (undefined8 ******)0x0;
          if (0 < uStack_188._4_4_) {
            lVar34 = 0;
            do {
              *(undefined4 *)((long)pppppuStack_148 + lVar34 * 4) = 0;
              lVar34 = lVar34 + 1;
            } while (lVar34 < uStack_188._4_4_);
          }
          uStack_188 = pppppppuVar23;
          if (uStack_140 != &pppppuStack_138 && uStack_140 != (undefined8 ******)0x0) {
            _free(uStack_140[-1]);
          }
          if (uStack_1a0 != (double *******)0x0) {
            ppppppuStack_198 = uStack_1a0;
            __ZdlPv();
          }
          if (pppppdStack_3a8 != pppppdStack_3b0) {
            uVar35 = 0;
            do {
              pfVar52 = (float *)((long)pppppdStack_3b0 + uVar35 * 0x1c);
              fVar75 = *pfVar52;
              fVar76 = pfVar52[1];
              uStack_260 = (double *******)CONCAT44((int)uVar35 + 1,(int)uVar35);
              pppppuStack_2b8 = (undefined8 ******)0x7fffffff80000000;
              FUN_109a84930(&uStack_1a0,&uStack_410,&uStack_260,&pppppuStack_2b8);
              ppppppdVar17 = ppppppdStack_2f8;
              if (ppppppdStack_2f8 < ppppppdStack_2f0) {
                fVar69 = pfVar52[3];
                fVar63 = pfVar52[4];
                fVar9 = pfVar52[5];
                *ppppppdStack_2f8 = (double *****)(double)fVar75;
                ppppppdStack_2f8[1] = (double *****)(double)fVar76;
                ppppppdStack_2f8[4] = (double *****)(double)fVar63;
                *(float *)(ppppppdStack_2f8 + 5) = fVar9;
                ppppppdStack_2f8[6] = (double *****)(double)fVar69;
                ppppppdStack_2f8[7] = (double *****)(double)uStack_378._4_4_;
                pppppppdVar25 = (double *******)(ppppppdStack_2f8 + 10);
                *(undefined4 *)pppppppdVar25 = 0x42ff0000;
                *(undefined8 *)((long)ppppppdStack_2f8 + 0x5c) = 0;
                *(undefined8 *)((long)ppppppdStack_2f8 + 0x54) = 0;
                *(undefined8 *)((long)ppppppdStack_2f8 + 0x6c) = 0;
                *(undefined8 *)((long)ppppppdStack_2f8 + 100) = 0;
                *(undefined8 *)((long)ppppppdStack_2f8 + 0x7c) = 0;
                *(undefined8 *)((long)ppppppdStack_2f8 + 0x74) = 0;
                ppppppdStack_2f8[0x14] = (double *****)0x0;
                ppppppdStack_2f8[0x11] = (double *****)0x0;
                ppppppdStack_2f8[0x10] = (double *****)0x0;
                ppppppdStack_2f8[0x12] = (double *****)(ppppppdStack_2f8 + 0xb);
                ppppppdStack_2f8[0x13] = (double *****)(ppppppdStack_2f8 + 0x14);
                ppppppdStack_2f8[0x15] = (double *****)0x0;
                ppppppdVar64 = (double ******)
                               _pow((double ******)(double)uStack_378._4_4_,(double)(int)fVar9);
                ppppppdVar17[8] = (double *****)ppppppdVar64;
                ppppppdVar17[9] = (double *****)(1.0 / (double)ppppppdVar64);
                ppppppdVar17[3] =
                     (double *****)
                     (((double)ppppppdVar17[1] + auVar70._8_8_) * (double)ppppppdVar64 +
                     auVar67._8_8_);
                ppppppdVar17[2] =
                     (double *****)
                     (((double)*ppppppdVar17 + auVar70._0_8_) * (double)ppppppdVar64 + auVar67._0_8_
                     );
                uStack_260 = (double *******)CONCAT44(uStack_260._4_4_,0x2010000);
                ppppppdStack_250 = (double ******)0x0;
                ppppppdStack_258 = (double ******)pppppppdVar25;
                FUN_109a479a0(&uStack_1a0,&uStack_260);
                ppppppdStack_2f8 = ppppppdVar17 + 0x16;
              }
              else {
                lVar34 = (long)ppppppdStack_2f8 - (long)ppppppdStack_300;
                uVar47 = (lVar34 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
                if (0x1745d1745d1745d < uVar47) {
                  FUN_10939c884();
                  goto LAB_1094264f4;
                }
                lVar56 = (long)ppppppdStack_2f0 - (long)ppppppdStack_300 >> 4;
                uVar49 = lVar56 * 0x5d1745d1745d1746;
                if (uVar49 < uVar47 || uVar49 - uVar47 == 0) {
                  uVar49 = uVar47;
                }
                if (0xba2e8ba2e8ba2d < (ulong)(lVar56 * 0x2e8ba2e8ba2e8ba3)) {
                  uVar49 = 0x1745d1745d1745d;
                }
                ppppppdStack_240 = (double ******)&ppppppdStack_300;
                if (uVar49 == 0) {
                  pppppppdVar25 = (double *******)0x0;
                }
                else {
                  pppppppdVar25 = &ppppppdStack_300;
                  FUN_10939c898(pppppppdVar25,uVar49,0);
                }
                pdVar3 = (double *)((long)pppppppdVar25 + lVar34);
                ppppppdStack_248 = (double ******)(pppppppdVar25 + uVar49 * 0x16);
                fVar69 = pfVar52[3];
                fVar63 = pfVar52[4];
                fVar9 = pfVar52[5];
                uStack_260 = pppppppdVar25;
                ppppppdStack_258 = (double ******)pdVar3;
                ppppppdStack_250 = (double ******)pdVar3;
                *pdVar3 = (double)fVar75;
                pdVar3[1] = (double)fVar76;
                pdVar3[4] = (double)fVar63;
                *(float *)(pdVar3 + 5) = fVar9;
                pdVar3[6] = (double)fVar69;
                pdVar3[7] = (double)uStack_378._4_4_;
                *(undefined4 *)(pdVar3 + 10) = 0x42ff0000;
                *(undefined8 *)((long)pdVar3 + 0x7c) = 0;
                *(undefined8 *)((long)pdVar3 + 0x74) = 0;
                pdVar3[0x11] = 0.0;
                pdVar3[0x10] = 0.0;
                *(undefined8 *)((long)pdVar3 + 0x6c) = 0;
                *(undefined8 *)((long)pdVar3 + 100) = 0;
                pdVar3[0x14] = 0.0;
                *(undefined8 *)((long)pdVar3 + 0x5c) = 0;
                *(undefined8 *)((long)pdVar3 + 0x54) = 0;
                pdVar3[0x12] = (double)(pdVar3 + 0xb);
                pdVar3[0x13] = (double)(pdVar3 + 0x14);
                pdVar3[0x15] = 0.0;
                dVar65 = (double)_pow((double)uStack_378._4_4_,(double)(int)fVar9);
                pdVar3[8] = dVar65;
                pdVar3[9] = 1.0 / dVar65;
                pdVar3[3] = (pdVar3[1] + auVar70._8_8_) * dVar65 + auVar67._8_8_;
                pdVar3[2] = (*pdVar3 + auVar70._0_8_) * dVar65 + auVar67._0_8_;
                pppppuStack_2b8 = (undefined8 *****)CONCAT44(pppppuStack_2b8._4_4_,0x2010000);
                pppppuStack_2a8 = (undefined8 ******)0x0;
                pppppuStack_2b0 = (undefined8 *****)(pdVar3 + 10);
                FUN_109a479a0(&uStack_1a0,&pppppuStack_2b8);
                ppppppdStack_250 = (double ******)(pdVar3 + 0x16);
                pppppppdVar25 =
                     (double *******)
                     ((long)pdVar3 + ((long)ppppppdStack_300 - (long)ppppppdStack_2f8));
                FUN_10939c900(&ppppppdStack_300,ppppppdStack_300,ppppppdStack_2f8,pppppppdVar25);
                ppppppdVar64 = ppppppdStack_250;
                ppppppdVar17 = ppppppdStack_2f0;
                ppppppdStack_2f0 = ppppppdStack_248;
                ppppppdStack_2f8 = ppppppdStack_250;
                ppppppdStack_250 = ppppppdStack_300;
                ppppppdStack_248 = ppppppdVar17;
                ppppppdStack_258 = ppppppdStack_300;
                uStack_260 = (double *******)ppppppdStack_300;
                ppppppdStack_300 = (double ******)pppppppdVar25;
                FUN_10939cadc(&uStack_260);
                ppppppdStack_2f8 = ppppppdVar64;
              }
              if ((undefined8 ******)pppppuStack_168 != (undefined8 ******)0x0) {
                piVar27 = (int *)((long)pppppuStack_168 + 0x14);
                do {
                  iVar54 = *piVar27;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar11) {
                    *piVar27 = iVar54 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar54 + -1 == 0) &&
                   ((undefined8 ******)pppppuStack_168 != (undefined8 ******)0x0)) {
                  ppppppuVar50 = (undefined8 ******)pppppuStack_168[1];
                  if (((undefined8 ******)pppppuStack_168[1] == (undefined8 ******)0x0) &&
                     ((ppppppuVar50 = (undefined8 ******)pppppuStack_170,
                      (undefined8 ******)pppppuStack_170 == (undefined8 ******)0x0 &&
                      (ppppppuVar50 = ppppppuRam000000011382bb80,
                      ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                    FUN_109a83e3c();
                    ppppppuVar50 = ppppppuRam000000011382bb80;
                  }
                  (*(code *)(*ppppppuVar50)[6])();
                }
              }
              pppppuStack_168 = (undefined8 ******)0x0;
              uStack_188._0_4_ = 0;
              uStack_188._4_4_ = 0;
              uStack_190 = 0;
              cStack_189 = '\0';
              pppppuStack_178 = (undefined8 ******)0x0;
              ppppppdStack_180 = (double ******)0x0;
              if (0 < uStack_1a0._4_4_) {
                lVar34 = 0;
                do {
                  *(undefined4 *)((long)pppppuStack_160 + lVar34 * 4) = 0;
                  lVar34 = lVar34 + 1;
                } while (lVar34 < uStack_1a0._4_4_);
              }
              if ((undefined8 ******)pppppuStack_158 != &pppppuStack_150 &&
                  (undefined8 ******)pppppuStack_158 != (undefined8 ******)0x0) {
                _free(pppppuStack_158[-1]);
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 < (ulong)(((long)pppppdStack_3a8 - (long)pppppdStack_3b0 >> 2) *
                                     0x6db6db6db6db6db7));
          }
          FUN_109426b80(&ppppdStack_428,*(long *)(lVar22 + 8) + 0x20,&ppppppuStack_2e8,
                        &ppppppdStack_300);
          pppdVar18 = pppdStack_420;
          for (ppppdVar16 = ppppdStack_428; ppppdVar16 != (double ****)pppdVar18;
              ppppdVar16 = ppppdVar16 + 0x1a) {
            uStack_1a0 = (double *******)*ppppdVar16;
            ppppppuStack_198 = (undefined8 ******)ppppdVar16[1];
            ppppppdStack_180 = (double ******)ppppdVar16[4];
            pppppuStack_178 = (undefined8 *****)ppppdVar16[5];
            pppppuStack_168 = (undefined8 *****)ppppdVar16[7];
            pppppuStack_170 = (undefined8 *****)ppppdVar16[6];
            uStack_188._0_4_ = SUB84(ppppdVar16[3],0);
            uStack_188._4_4_ = (int)((ulong)ppppdVar16[3] >> 0x20);
            uStack_190 = SUB87(ppppdVar16[2],0);
            cStack_189 = (char)((ulong)ppppdVar16[2] >> 0x38);
            pppppuStack_160 = (undefined8 *****)ppppdVar16[8];
            pppppuStack_158 = (undefined8 *****)ppppdVar16[9];
            pppppuStack_150 = (undefined8 *****)ppppdVar16[10];
            pppppuStack_148 = (undefined8 *****)ppppdVar16[0xb];
            uStack_140 = (undefined8 ******)ppppdVar16[0xc];
            pppppuStack_138 = (undefined8 *****)ppppdVar16[0xd];
            pppppuStack_130 = (undefined8 *****)ppppdVar16[0xe];
            pppppuStack_128 = (undefined8 *****)ppppdVar16[0xf];
            pppppuStack_120 = (undefined8 *****)ppppdVar16[0x10];
            pppppuStack_118 = (undefined8 *****)ppppdVar16[0x11];
            pppppuStack_110 = (undefined8 *****)ppppdVar16[0x12];
            pppppuStack_108 = (undefined8 *****)ppppdVar16[0x13];
            pdStack_f0 = (double *)0x0;
            pdStack_e8 = (double *)0x0;
            if (ppppdVar16[0x13] != (double ***)0x0) {
              piVar27 = (int *)((long)ppppdVar16[0x13] + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar11) {
                  *piVar27 = *piVar27 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            pppppuStack_100 = &pppppuStack_138;
            pdStack_f8 = (double *)&pdStack_f0;
            if (*(int *)((long)ppppdVar16 + 100) < 3) {
              pdStack_f0 = (double *)*ppppdVar16[0x15];
              pdStack_e8 = (double *)ppppdVar16[0x15][1];
            }
            else {
              uStack_140 = (undefined8 ******)((ulong)uStack_140 & 0xffffffff);
              FUN_109a844cc(&uStack_140,*(undefined4 *)((long)ppppdVar16 + 100),0,0,0);
              if (0 < uStack_140._4_4_) {
                lVar34 = 0;
                pppdVar4 = ppppdVar16[0x14];
                pppdVar8 = ppppdVar16[0x15];
                do {
                  *(undefined4 *)((long)pppppuStack_100 + lVar34 * 4) =
                       *(undefined4 *)((long)pppdVar4 + lVar34 * 4);
                  pdStack_f8[lVar34] = (double)pppdVar8[lVar34];
                  lVar34 = lVar34 + 1;
                } while (lVar34 < uStack_140._4_4_);
              }
            }
            pppppppuVar23 = uStack_1a0;
            ppppppuVar50 = ppppppuStack_2c8;
            pppppuStack_e0 = (undefined8 *****)ppppdVar16[0x18];
            if (((ulong)uStack_1a0 & 1) != 0) {
              if (ppppppuStack_2c8 < ppppppuStack_2c0) {
                ppppppuStack_2c8[1] = ppppppuStack_198;
                *ppppppuVar50 = pppppppuVar23;
                ppppppuVar61 = (undefined8 ******)CONCAT17(cStack_189,uStack_190);
                ppppppuVar50[3] =
                     (undefined8 ******)CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
                ppppppuVar50[2] = ppppppuVar61;
                ppppppdVar17 = ppppppdStack_180;
                ppppppuVar50[5] = pppppuStack_178;
                ppppppuVar50[4] = ppppppdVar17;
                pppppuVar20 = pppppuStack_148;
                pppppuVar19 = pppppuStack_150;
                pppppuVar45 = pppppuStack_160;
                pppppuVar51 = pppppuStack_168;
                pppppuVar55 = pppppuStack_170;
                ppppppuVar50[9] = pppppuStack_158;
                ppppppuVar50[8] = pppppuVar45;
                ppppppuVar50[0xb] = pppppuVar20;
                ppppppuVar50[10] = pppppuVar19;
                ppppppuVar50[7] = pppppuVar51;
                ppppppuVar50[6] = pppppuVar55;
                ppppppuVar61 = uStack_140;
                iVar54 = uStack_140._4_4_;
                ppppppuVar50[0xd] = pppppuStack_138;
                ppppppuVar50[0xc] = ppppppuVar61;
                pppppuVar55 = pppppuStack_130;
                ppppppuVar50[0xf] = pppppuStack_128;
                ppppppuVar50[0xe] = pppppuVar55;
                pppppuVar55 = pppppuStack_120;
                ppppppuVar50[0x11] = pppppuStack_118;
                ppppppuVar50[0x10] = pppppuVar55;
                pppppuVar51 = pppppuStack_108;
                ppppppuVar50[0x16] = (undefined8 ******)0x0;
                pppppuVar55 = pppppuStack_110;
                ppppppuVar50[0x13] = pppppuStack_108;
                ppppppuVar50[0x12] = pppppuVar55;
                ppppppuVar50[0x14] = ppppppuVar50 + 0xd;
                ppppppuVar50[0x15] = ppppppuVar50 + 0x16;
                ppppppuVar50[0x17] = (undefined8 ******)0x0;
                if ((undefined8 ******)pppppuVar51 != (undefined8 ******)0x0) {
                  piVar27 = (int *)((long)pppppuVar51 + 0x14);
                  do {
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                    if (bVar11) {
                      *piVar27 = *piVar27 + 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  iVar54 = uStack_140._4_4_;
                }
                if (iVar54 < 3) {
                  ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x15];
                  *ppppppuVar61 = (undefined8 *****)*pdStack_f8;
                  ppppppuVar61[1] = (undefined8 *****)pdStack_f8[1];
                }
                else {
                  *(undefined4 *)((long)ppppppuVar50 + 100) = 0;
                  FUN_109a844cc(ppppppuVar50 + 0xc,uStack_140._4_4_,0,0,0);
                  if (0 < *(int *)((long)ppppppuVar50 + 100)) {
                    lVar34 = 0;
                    ppppppuVar61 = (undefined8 ******)ppppppuVar50[0x14];
                    ppppppuVar66 = (undefined8 ******)ppppppuVar50[0x15];
                    do {
                      *(undefined4 *)((long)ppppppuVar61 + lVar34 * 4) =
                           *(undefined4 *)((long)pppppuStack_100 + lVar34 * 4);
                      ppppppuVar66[lVar34] = (undefined8 *****)pdStack_f8[lVar34];
                      lVar34 = lVar34 + 1;
                    } while (lVar34 < *(int *)((long)ppppppuVar50 + 100));
                  }
                }
                ppppppuVar50[0x18] = pppppuStack_e0;
                pppppppuVar23 = (undefined8 *******)(ppppppuVar50 + 0x1a);
              }
              else {
                pppppppuVar23 = &ppppppuStack_2d0;
                FUN_10942cbb8(pppppppuVar23,&uStack_1a0);
              }
              ppppppuVar50 = ppppppuStack_198;
              ppppppuStack_430 = ppppppuStack_198;
              *(int *)(*(long *)(*(long *)(param_2 + 4) + (long)*(int *)(ppppppuStack_198 + 7) * 8)
                      + 0x54) = *(int *)((long)ppppppuStack_198 + 0x54) + 1;
              piVar27 = param_2 + 10;
              ppppppuStack_2c8 = pppppppuVar23;
              FUN_109431288(piVar27,ppppppuStack_198,&ppppppuStack_430);
              uStack_260 = *(double ********)(lVar22 + 8);
              ppppppdStack_250 = (double ******)CONCAT17(cStack_189,uStack_190);
              ppppppdStack_248 = (double ******)CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
              pppppuStack_238 = pppppuStack_178;
              ppppppdStack_240 = ppppppdStack_180;
              pppppuStack_228 = pppppuStack_168;
              pppppuStack_230 = pppppuStack_170;
              pppppuStack_218 = pppppuStack_158;
              pppppuStack_220 = pppppuStack_160;
              pppppuStack_208 = pppppuStack_148;
              pppppuStack_210 = pppppuStack_150;
              uStack_1f8 = SUB84(pppppuStack_138,0);
              uStack_1f4 = (undefined4)((ulong)pppppuStack_138 >> 0x20);
              uStack_200 = SUB84(uStack_140,0);
              uStack_1e8 = SUB84(pppppuStack_128,0);
              uStack_1e4 = (undefined4)((ulong)pppppuStack_128 >> 0x20);
              uStack_1f0 = SUB84(pppppuStack_130,0);
              uStack_1ec = (undefined4)((ulong)pppppuStack_130 >> 0x20);
              uStack_1d8 = SUB84(pppppuStack_118,0);
              uStack_1d4 = (undefined4)((ulong)pppppuStack_118 >> 0x20);
              uStack_1e0 = SUB84(pppppuStack_120,0);
              uStack_1dc = (undefined4)((ulong)pppppuStack_120 >> 0x20);
              pppppuStack_1c8 = pppppuStack_108;
              uStack_1d0 = SUB84(pppppuStack_110,0);
              uStack_1cc = (undefined4)((ulong)pppppuStack_110 >> 0x20);
              dStack_1b0 = 0.0;
              dStack_1a8 = 0.0;
              puStack_1c0 = &uStack_1f8;
              puStack_1b8 = &dStack_1b0;
              if ((undefined8 ******)pppppuStack_108 == (undefined8 ******)0x0) {
                if (uStack_140._4_4_ < 3) goto LAB_109425150;
LAB_10942517c:
                iStack_1fc = 0;
                FUN_109a844cc(&uStack_200,uStack_140._4_4_,0,0,0);
                if (0 < iStack_1fc) {
                  lVar34 = 0;
                  do {
                    puStack_1c0[lVar34] = *(undefined4 *)((long)pppppuStack_100 + lVar34 * 4);
                    puStack_1b8[lVar34] = (double *)pdStack_f8[lVar34];
                    lVar34 = lVar34 + 1;
                  } while (lVar34 < iStack_1fc);
                }
              }
              else {
                piVar1 = (int *)((long)pppppuStack_108 + 0x14);
                do {
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar11) {
                    *piVar1 = *piVar1 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (2 < uStack_140._4_4_) goto LAB_10942517c;
LAB_109425150:
                dStack_1b0 = (double)*pdStack_f8;
                dStack_1a8 = (double)pdStack_f8[1];
                iStack_1fc = uStack_140._4_4_;
              }
              puVar40 = *(undefined8 **)(piVar27 + 8);
              if (puVar40 < *(undefined8 **)(piVar27 + 10)) {
                *puVar40 = uStack_260;
                puVar40[3] = ppppppdStack_248;
                puVar40[2] = ppppppdStack_250;
                puVar40[5] = pppppuStack_238;
                puVar40[4] = ppppppdStack_240;
                puVar40[9] = pppppuStack_218;
                puVar40[8] = pppppuStack_220;
                puVar40[0xb] = pppppuStack_208;
                puVar40[10] = pppppuStack_210;
                puVar40[7] = pppppuStack_228;
                puVar40[6] = pppppuStack_230;
                puVar40[0xd] = CONCAT44(uStack_1f4,uStack_1f8);
                puVar40[0xc] = CONCAT44(iStack_1fc,uStack_200);
                puVar40[0xf] = CONCAT44(uStack_1e4,uStack_1e8);
                puVar40[0xe] = CONCAT44(uStack_1ec,uStack_1f0);
                puVar40[0x11] = CONCAT44(uStack_1d4,uStack_1d8);
                puVar40[0x10] = CONCAT44(uStack_1dc,uStack_1e0);
                puVar40[0x13] = pppppuStack_1c8;
                puVar40[0x12] = CONCAT44(uStack_1cc,uStack_1d0);
                puVar40[0x14] = puVar40 + 0xd;
                puVar40[0x15] = puVar40 + 0x16;
                puVar40[0x16] = 0;
                puVar40[0x17] = 0;
                if (iStack_1fc < 3) {
                  puVar40[0x16] = *puStack_1b8;
                  puVar40[0x17] = puStack_1b8[1];
                }
                else {
                  puVar40[0x14] = puStack_1c0;
                  puVar40[0x15] = puStack_1b8;
                  puStack_1c0 = &uStack_1f8;
                  puStack_1b8 = &dStack_1b0;
                }
                uStack_200 = 0x42ff0000;
                uStack_1f4 = 0;
                iStack_1fc = 0;
                uStack_1f8 = 0;
                uStack_1d0 = 0;
                uStack_1cc = 0;
                *(undefined8 **)(piVar27 + 8) = puVar40 + 0x18;
              }
              else {
                plVar30 = (long *)(piVar27 + 6);
                lVar34 = (long)puVar40 - *plVar30;
                uVar35 = (lVar34 >> 6) * -0x5555555555555555 + 1;
                if (0x155555555555555 < uVar35) {
                  FUN_10943019c();
                  goto LAB_1094264f4;
                }
                lVar56 = (long)*(undefined8 **)(piVar27 + 10) - *plVar30 >> 6;
                uVar47 = lVar56 * 0x5555555555555556;
                if (uVar47 < uVar35 || uVar47 - uVar35 == 0) {
                  uVar47 = uVar35;
                }
                if (0xaaaaaaaaaaaaa9 < (ulong)(lVar56 * -0x5555555555555555)) {
                  uVar47 = 0x155555555555555;
                }
                plStack_298 = plVar30;
                if (uVar47 != 0) {
                  if (uVar47 < 0x155555555555556) {
                    pppppuVar55 = (undefined8 *****)(uVar47 * 0xc0);
                    _malloc();
                    if (pppppuVar55 != (undefined8 *****)0x0) goto LAB_109425328;
                  }
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_1094264f4;
                }
                pppppuVar55 = (undefined8 *****)0x0;
LAB_109425328:
                pppppuStack_2b0 = (undefined8 *****)((long)pppppuVar55 + lVar34);
                pppppuStack_2b0[3] = ppppppdStack_248;
                pppppuStack_2b0[2] = ppppppdStack_250;
                pppppuStack_2b0[5] = pppppuStack_238;
                pppppuStack_2b0[4] = ppppppdStack_240;
                pppppuStack_2b0[7] = pppppuStack_228;
                pppppuStack_2b0[6] = pppppuStack_230;
                pppppuStack_2b0[9] = pppppuStack_218;
                pppppuStack_2b0[8] = pppppuStack_220;
                pppppuStack_2b0[0xb] = pppppuStack_208;
                pppppuStack_2b0[10] = pppppuStack_210;
                pppppuStack_2b0[0xd] = (undefined8 ****)CONCAT44(uStack_1f4,uStack_1f8);
                pppppuStack_2b0[0xc] = (undefined8 ****)CONCAT44(iStack_1fc,uStack_200);
                pppppuStack_2b0[0xf] = (undefined8 ****)CONCAT44(uStack_1e4,uStack_1e8);
                pppppuStack_2b0[0xe] = (undefined8 ****)CONCAT44(uStack_1ec,uStack_1f0);
                pppppuStack_2b0[0x11] = (undefined8 ****)CONCAT44(uStack_1d4,uStack_1d8);
                pppppuStack_2b0[0x10] = (undefined8 ****)CONCAT44(uStack_1dc,uStack_1e0);
                ppppuStack_2a0 = pppppuVar55 + uVar47 * 0x18;
                *pppppuStack_2b0 = uStack_260;
                pppppuStack_2b0[0x16] = (undefined8 ****)0x0;
                pppppuStack_2b0[0x13] = pppppuStack_1c8;
                pppppuStack_2b0[0x12] = (undefined8 ****)CONCAT44(uStack_1cc,uStack_1d0);
                pppppuStack_2b0[0x14] = pppppuStack_2b0 + 0xd;
                pppppuStack_2b0[0x15] = pppppuStack_2b0 + 0x16;
                pppppuStack_2b0[0x17] = (undefined8 ****)0x0;
                if (iStack_1fc < 3) {
                  pppppuStack_2b0[0x16] = (undefined8 ****)*puStack_1b8;
                  pppppuStack_2b0[0x17] = (undefined8 ****)puStack_1b8[1];
                }
                else {
                  pppppuStack_2b0[0x14] = (undefined8 ****)puStack_1c0;
                  pppppuStack_2b0[0x15] = (undefined8 ****)puStack_1b8;
                  puStack_1c0 = &uStack_1f8;
                  puStack_1b8 = &dStack_1b0;
                }
                uStack_200 = 0x42ff0000;
                uStack_1f4 = 0;
                uStack_1f0 = 0;
                iStack_1fc = 0;
                uStack_1f8 = 0;
                uStack_1e4 = 0;
                uStack_1e0 = 0;
                uStack_1ec = 0;
                uStack_1e8 = 0;
                uStack_1d4 = 0;
                uStack_1dc = 0;
                uStack_1d8 = 0;
                pppppuStack_1c8 = (undefined8 *****)0x0;
                uStack_1d0 = 0;
                uStack_1cc = 0;
                pppppuStack_2a8 = pppppuStack_2b0 + 0x18;
                puVar48 = *(undefined8 **)(piVar27 + 6);
                puVar44 = *(undefined8 **)(piVar27 + 8);
                ppuStack_288 = &puStack_270;
                ppuStack_280 = &puStack_268;
                bStack_278 = 0;
                puVar42 = (undefined8 *)((long)pppppuStack_2b0 + ((long)puVar48 - (long)puVar44));
                puVar40 = puVar48;
                puVar28 = puVar42;
                pppppuStack_2b8 = pppppuVar55;
                plStack_290 = plVar30;
                puStack_270 = puVar42;
                puStack_268 = puVar42;
                if ((long)puVar48 - (long)puVar44 != 0) {
                  do {
                    *puVar28 = *puVar40;
                    uVar24 = puVar40[2];
                    puVar28[3] = puVar40[3];
                    puVar28[2] = uVar24;
                    uVar24 = puVar40[4];
                    puVar28[5] = puVar40[5];
                    puVar28[4] = uVar24;
                    uVar24 = puVar40[6];
                    uVar14 = puVar40[7];
                    uVar15 = puVar40[8];
                    uVar74 = puVar40[0xb];
                    uVar72 = puVar40[10];
                    puVar28[9] = puVar40[9];
                    puVar28[8] = uVar15;
                    puVar28[0xb] = uVar74;
                    puVar28[10] = uVar72;
                    puVar28[7] = uVar14;
                    puVar28[6] = uVar24;
                    uVar24 = puVar40[0xc];
                    uVar14 = puVar40[0xd];
                    uVar15 = puVar40[0xe];
                    puVar28[0xf] = puVar40[0xf];
                    puVar28[0xe] = uVar15;
                    uVar15 = puVar40[0x10];
                    puVar28[0x11] = puVar40[0x11];
                    puVar28[0x10] = uVar15;
                    lVar34 = puVar40[0x13];
                    uVar15 = puVar40[0x12];
                    uVar72 = puVar40[0x13];
                    puVar28[0x16] = 0;
                    puVar28[0x13] = uVar72;
                    puVar28[0x12] = uVar15;
                    puVar28[0x14] = puVar28 + 0xd;
                    puVar28[0x15] = puVar28 + 0x16;
                    puVar28[0x17] = 0;
                    puVar28[0xd] = uVar14;
                    puVar28[0xc] = uVar24;
                    if (lVar34 != 0) {
                      piVar1 = (int *)(lVar34 + 0x14);
                      do {
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = *piVar1 + 1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                    }
                    puStack_268 = puVar28;
                    if (*(int *)((long)puVar40 + 100) < 3) {
                      puVar43 = (undefined8 *)puVar40[0x15];
                      puVar28 = (undefined8 *)puVar28[0x15];
                      *puVar28 = *puVar43;
                      puVar28[1] = puVar43[1];
                    }
                    else {
                      *(undefined4 *)((long)puVar28 + 100) = 0;
                      FUN_109a844cc(puVar28 + 0xc,*(undefined4 *)((long)puVar40 + 100),0,0,0);
                      if (0 < *(int *)((long)puVar28 + 100)) {
                        lVar34 = 0;
                        lVar56 = puVar40[0x14];
                        lVar41 = puVar40[0x15];
                        lVar59 = puVar28[0x14];
                        lVar5 = puVar28[0x15];
                        do {
                          *(undefined4 *)(lVar59 + lVar34 * 4) =
                               *(undefined4 *)(lVar56 + lVar34 * 4);
                          *(undefined8 *)(lVar5 + lVar34 * 8) = *(undefined8 *)(lVar41 + lVar34 * 8)
                          ;
                          lVar34 = lVar34 + 1;
                        } while (lVar34 < *(int *)((long)puVar28 + 100));
                      }
                    }
                    puVar40 = puVar40 + 0x18;
                    puStack_268 = puStack_268 + 0x18;
                    puVar28 = puStack_268;
                  } while (puVar40 != puVar44);
                  bStack_278 = 1;
                  do {
                    if (puVar48[0x13] != 0) {
                      piVar1 = (int *)(puVar48[0x13] + 0x14);
                      do {
                        iVar54 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar54 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar54 + -1 == 0) {
                        if (puVar48[0x13] != 0) {
                          ppppppuVar61 = *(undefined8 *******)(puVar48[0x13] + 8);
                          if (((ppppppuVar61 == (undefined8 ******)0x0) &&
                              (ppppppuVar61 = (undefined8 ******)puVar48[0x12],
                              (undefined8 ******)puVar48[0x12] == (undefined8 ******)0x0)) &&
                             (ppppppuVar61 = ppppppuRam000000011382bb80,
                             ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                            FUN_109a83e3c();
                            ppppppuVar61 = ppppppuRam000000011382bb80;
                          }
                          (*(code *)(*ppppppuVar61)[6])();
                        }
                        puVar48[0x13] = 0;
                      }
                    }
                    puVar48[0x13] = 0;
                    puVar48[0xf] = 0;
                    puVar48[0xe] = 0;
                    puVar48[0x11] = 0;
                    puVar48[0x10] = 0;
                    if (0 < *(int *)((long)puVar48 + 100)) {
                      lVar34 = 0;
                      lVar56 = puVar48[0x14];
                      do {
                        *(undefined4 *)(lVar56 + lVar34 * 4) = 0;
                        lVar34 = lVar34 + 1;
                      } while (lVar34 < *(int *)((long)puVar48 + 100));
                    }
                    puVar40 = (undefined8 *)puVar48[0x15];
                    if (puVar40 != puVar48 + 0x16 && puVar40 != (undefined8 *)0x0) {
                      _free(puVar40[-1]);
                    }
                    puVar48 = puVar48 + 0x18;
                  } while (puVar48 != puVar44);
                  if ((bStack_278 & 1) == 0) {
                    puVar48 = *ppuStack_288;
                    for (puVar40 = *ppuStack_280; puVar40 != puVar48; puVar40 = puVar40 + -0x18) {
                      if (puVar40[-5] != 0) {
                        piVar1 = (int *)(puVar40[-5] + 0x14);
                        do {
                          iVar54 = *piVar1;
                          cVar10 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar11) {
                            *piVar1 = iVar54 + -1;
                            cVar10 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar10 != '\0');
                        if (iVar54 + -1 == 0) {
                          if (puVar40[-5] != 0) {
                            ppppppuVar61 = *(undefined8 *******)(puVar40[-5] + 8);
                            if (((ppppppuVar61 == (undefined8 ******)0x0) &&
                                (ppppppuVar61 = (undefined8 ******)puVar40[-6],
                                (undefined8 ******)puVar40[-6] == (undefined8 ******)0x0)) &&
                               (ppppppuVar61 = ppppppuRam000000011382bb80,
                               ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                              FUN_109a83e3c();
                              ppppppuVar61 = ppppppuRam000000011382bb80;
                            }
                            (*(code *)(*ppppppuVar61)[6])();
                          }
                          puVar40[-5] = 0;
                        }
                      }
                      puVar40[-5] = 0;
                      puVar40[-9] = 0;
                      puVar40[-10] = 0;
                      puVar40[-7] = 0;
                      puVar40[-8] = 0;
                      if (0 < *(int *)((long)puVar40 + -0x5c)) {
                        lVar34 = 0;
                        lVar56 = puVar40[-4];
                        do {
                          *(undefined4 *)(lVar56 + lVar34 * 4) = 0;
                          lVar34 = lVar34 + 1;
                        } while (lVar34 < *(int *)((long)puVar40 + -0x5c));
                      }
                      puVar44 = (undefined8 *)puVar40[-3];
                      if (puVar44 != puVar40 + -2 && puVar44 != (undefined8 *)0x0) {
                        _free(puVar44[-1]);
                      }
                    }
                  }
                }
                pppppuVar55 = pppppuStack_2a8;
                pppppuStack_2b8 = *(undefined8 ******)(piVar27 + 6);
                *(undefined8 **)(piVar27 + 6) = puVar42;
                uVar24 = *(undefined8 *)(piVar27 + 10);
                *(undefined8 *****)(piVar27 + 10) = ppppuStack_2a0;
                *(undefined8 ******)(piVar27 + 8) = pppppuStack_2a8;
                pppppuStack_2b0 = pppppuStack_2b8;
                pppppuStack_2a8 = pppppuStack_2b8;
                ppppuStack_2a0 = (undefined8 ****)uVar24;
                FUN_1094302b8(&pppppuStack_2b8);
                *(undefined8 ******)(piVar27 + 8) = pppppuVar55;
                if (pppppuStack_1c8 != (undefined8 *****)0x0) {
                  piVar27 = (int *)((long)pppppuStack_1c8 + 0x14);
                  do {
                    iVar54 = *piVar27;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                    if (bVar11) {
                      *piVar27 = iVar54 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if ((iVar54 + -1 == 0) && (pppppuStack_1c8 != (undefined8 *****)0x0)) {
                    ppppppuVar61 = *(undefined8 *******)((long)pppppuStack_1c8 + 8);
                    if ((*(undefined8 *******)((long)pppppuStack_1c8 + 8) == (undefined8 ******)0x0)
                       && ((ppppppuVar61 = (undefined8 ******)CONCAT44(uStack_1cc,uStack_1d0),
                           (undefined8 ******)CONCAT44(uStack_1cc,uStack_1d0) ==
                           (undefined8 ******)0x0 &&
                           (ppppppuVar61 = ppppppuRam000000011382bb80,
                           ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                      FUN_109a83e3c();
                      ppppppuVar61 = ppppppuRam000000011382bb80;
                    }
                    (*(code *)(*ppppppuVar61)[6])();
                  }
                }
                if (0 < iStack_1fc) {
                  lVar34 = 0;
                  do {
                    puStack_1c0[lVar34] = 0;
                    lVar34 = lVar34 + 1;
                  } while (lVar34 < iStack_1fc);
                }
              }
              pppppuStack_1c8 = (undefined8 ******)0x0;
              uStack_1d4 = 0;
              uStack_1d8 = 0;
              uStack_1dc = 0;
              uStack_1e0 = 0;
              uStack_1e4 = 0;
              uStack_1e8 = 0;
              uStack_1ec = 0;
              uStack_1f0 = 0;
              if ((double *)puStack_1b8 != &dStack_1b0 && (double *)puStack_1b8 != (double *)0x0) {
                _free(puStack_1b8[-1]);
              }
              iVar54 = *(int *)((long)ppppppuVar50 + 0x54);
              piVar27 = param_2 + 10;
              FUN_109431288(piVar27,ppppppuVar50,&ppppppuStack_430);
              if (iVar54 != (int)((ulong)(*(long *)(piVar27 + 8) - *(long *)(piVar27 + 6)) >> 6) *
                            -0x55555555) {
                FUN_109389068(&UNK_10f56d3e6,0x227);
                goto LAB_1094264f4;
              }
            }
            if ((undefined8 ******)pppppuStack_108 != (undefined8 ******)0x0) {
              piVar27 = (int *)((long)pppppuStack_108 + 0x14);
              do {
                iVar54 = *piVar27;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                if (bVar11) {
                  *piVar27 = iVar54 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if ((iVar54 + -1 == 0) &&
                 ((undefined8 ******)pppppuStack_108 != (undefined8 ******)0x0)) {
                ppppppuVar50 = (undefined8 ******)pppppuStack_108[1];
                if (((undefined8 ******)pppppuStack_108[1] == (undefined8 ******)0x0) &&
                   ((ppppppuVar50 = (undefined8 ******)pppppuStack_110,
                    (undefined8 ******)pppppuStack_110 == (undefined8 ******)0x0 &&
                    (ppppppuVar50 = ppppppuRam000000011382bb80,
                    ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                  FUN_109a83e3c();
                  ppppppuVar50 = ppppppuRam000000011382bb80;
                }
                (*(code *)(*ppppppuVar50)[6])();
              }
            }
            pppppuStack_108 = (undefined8 ******)0x0;
            pppppuStack_128 = (undefined8 ******)0x0;
            pppppuStack_130 = (undefined8 ******)0x0;
            pppppuStack_118 = (undefined8 ******)0x0;
            pppppuStack_120 = (undefined8 ******)0x0;
            if (0 < uStack_140._4_4_) {
              lVar34 = 0;
              do {
                *(undefined4 *)((long)pppppuStack_100 + lVar34 * 4) = 0;
                lVar34 = lVar34 + 1;
              } while (lVar34 < uStack_140._4_4_);
            }
            if ((double **)pdStack_f8 != &pdStack_f0 && (double **)pdStack_f8 != (double **)0x0) {
              _free((double *)pdStack_f8[-1]);
            }
          }
          puVar26 = *(undefined4 **)(lVar22 + 8);
          uVar36 = 0;
          if (ppppppuStack_2c8 != ppppppuStack_2d0) {
            uVar36 = 2;
          }
          *puVar26 = uVar36;
          FUN_109423ca0(puVar26,&ppppppuStack_2d0);
          uStack_1a0 = (double *******)&ppppdStack_428;
          FUN_10942a570(&uStack_1a0);
          if (lStack_3d8 != 0) {
            piVar27 = (int *)(lStack_3d8 + 0x14);
            do {
              iVar54 = *piVar27;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar11) {
                *piVar27 = iVar54 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((iVar54 + -1 == 0) && (lStack_3d8 != 0)) {
              ppppppuVar50 = *(undefined8 *******)(lStack_3d8 + 8);
              if ((*(undefined8 *******)(lStack_3d8 + 8) == (undefined8 ******)0x0) &&
                 ((ppppppuVar50 = (undefined8 ******)pppppuStack_3e0,
                  (undefined8 ******)pppppuStack_3e0 == (undefined8 ******)0x0 &&
                  (ppppppuVar50 = ppppppuRam000000011382bb80,
                  ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                FUN_109a83e3c();
                ppppppuVar50 = ppppppuRam000000011382bb80;
              }
              (*(code *)(*ppppppuVar50)[6])();
            }
          }
          lStack_3d8 = 0;
          uStack_3f8 = 0;
          pppppdStack_400 = (double *****)0x0;
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          if (0 < uStack_410._4_4_) {
            lVar22 = 0;
            do {
              *(undefined4 *)((long)pppppdStack_3d0 + lVar22 * 4) = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 < uStack_410._4_4_);
          }
          if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
            _free(puStack_3c8[-1]);
          }
          if ((double ******)pppppdStack_3b0 != (double ******)0x0) {
            pppppdStack_3a8 = pppppdStack_3b0;
            __ZdlPv();
          }
          uStack_1a0 = &ppppppdStack_300;
          FUN_10939cb28(&uStack_1a0);
        }
        uStack_1a0 = (double *******)&ppppppuStack_2e8;
        FUN_10942a570(&uStack_1a0);
        uStack_1a0 = (double *******)&ppppppuStack_2d0;
        FUN_10942a570(&uStack_1a0);
      }
      uVar38 = uVar38 + 1;
      lVar22 = *(long *)(param_2 + 0x1e);
    } while (uVar38 < (ulong)((*(long *)(param_2 + 0x20) - lVar22 >> 3) * -0x71c71c71c71c71c7));
  }
  puStack_398 = (undefined8 *)0x0;
  puStack_390 = (undefined8 *)0x0;
  puStack_388 = (undefined8 *)0x0;
  puVar40 = *(undefined8 **)(param_2 + 6);
  puVar48 = puStack_398;
  for (puVar46 = *(undefined8 **)(param_2 + 4); puStack_398 = puVar48, puVar46 != puVar40;
      puVar46 = puVar46 + 1) {
    uVar24 = *puVar46;
    if (puStack_390 < puStack_388) {
      puVar42 = puStack_390 + 1;
      *puStack_390 = uVar24;
    }
    else {
      lVar22 = (long)puStack_390 - (long)puVar48;
      uVar38 = (lVar22 >> 3) + 1;
      if (uVar38 >> 0x3d != 0) {
        FUN_10942bc54();
        goto LAB_1094264f4;
      }
      uVar35 = (long)puStack_388 - (long)puVar48 >> 2;
      if (uVar35 <= uVar38) {
        uVar35 = uVar38;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)puStack_388 - (long)puVar48)) {
        uVar35 = 0x1fffffffffffffff;
      }
      if (uVar35 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_1094264f4;
      }
      puVar28 = (undefined8 *)(uVar35 << 3);
      __Znwm();
      puVar44 = (undefined8 *)((long)puVar28 + lVar22);
      puVar42 = puVar44 + 1;
      *puVar44 = uVar24;
      _memcpy();
      puStack_398 = puVar28;
      puStack_388 = puVar28 + uVar35;
      if (puVar48 != (undefined8 *)0x0) {
        __ZdlPv(puVar48);
      }
    }
    puVar48 = puStack_398;
    puStack_390 = puVar42;
  }
  FUN_109436ebc(*(undefined8 *)(param_2 + 0x26),&puStack_398,param_2 + 10);
  lVar22 = *(long *)(param_2 + 0x1e);
  lVar34 = *(long *)(param_2 + 0x20);
  if (lVar22 != lVar34) {
    do {
      uStack_190 = 0;
      cStack_189 = '\0';
      ppppppuStack_198 = (undefined8 *******)0x0;
      uStack_1a0 = (double *******)0x0;
      lVar56 = *(long *)(lVar22 + 8);
      puVar46 = *(undefined8 **)(lVar56 + 1000);
      puVar40 = *(undefined8 **)(lVar56 + 0x3f0);
      if (puVar46 != puVar40) {
        pppppppuVar23 = (undefined8 *******)0x0;
        do {
          if (*(int *)(puVar46[1] + 0x50) != 0) {
            if (pppppppuVar23 < (undefined8 *******)CONCAT17(cStack_189,uStack_190)) {
              ppppppuVar50 = (undefined8 ******)*puVar46;
              pppppppuVar23[1] = (undefined8 ******)puVar46[1];
              *pppppppuVar23 = ppppppuVar50;
              ppppppuVar50 = (undefined8 ******)puVar46[2];
              pppppppuVar23[3] = (undefined8 ******)puVar46[3];
              pppppppuVar23[2] = ppppppuVar50;
              ppppppuVar50 = (undefined8 ******)puVar46[4];
              pppppppuVar23[5] = (undefined8 ******)puVar46[5];
              pppppppuVar23[4] = ppppppuVar50;
              ppppppuVar50 = (undefined8 ******)puVar46[6];
              ppppppuVar61 = (undefined8 ******)puVar46[7];
              ppppppuVar66 = (undefined8 ******)puVar46[8];
              ppppppuVar71 = (undefined8 ******)puVar46[0xb];
              ppppppuVar68 = (undefined8 ******)puVar46[10];
              pppppppuVar23[9] = (undefined8 ******)puVar46[9];
              pppppppuVar23[8] = ppppppuVar66;
              pppppppuVar23[0xb] = ppppppuVar71;
              pppppppuVar23[10] = ppppppuVar68;
              pppppppuVar23[7] = ppppppuVar61;
              pppppppuVar23[6] = ppppppuVar50;
              ppppppuVar68 = (undefined8 ******)puVar46[0xd];
              ppppppuVar66 = (undefined8 ******)puVar46[0xc];
              ppppppuVar50 = (undefined8 ******)puVar46[0xe];
              pppppppuVar23[0xf] = (undefined8 ******)puVar46[0xf];
              pppppppuVar23[0xe] = ppppppuVar50;
              ppppppuVar50 = (undefined8 ******)puVar46[0x10];
              pppppppuVar23[0x11] = (undefined8 ******)puVar46[0x11];
              pppppppuVar23[0x10] = ppppppuVar50;
              lVar56 = puVar46[0x13];
              ppppppuVar50 = (undefined8 ******)puVar46[0x12];
              ppppppuVar61 = (undefined8 ******)puVar46[0x13];
              pppppppuVar23[0x16] = (undefined8 ******)0x0;
              pppppppuVar23[0x13] = ppppppuVar61;
              pppppppuVar23[0x12] = ppppppuVar50;
              pppppppuVar23[0x14] = pppppppuVar23 + 0xd;
              pppppppuVar23[0x15] = pppppppuVar23 + 0x16;
              pppppppuVar23[0x17] = (undefined8 ******)0x0;
              pppppppuVar23[0xd] = ppppppuVar68;
              pppppppuVar23[0xc] = ppppppuVar66;
              if (lVar56 != 0) {
                piVar27 = (int *)(lVar56 + 0x14);
                do {
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar11) {
                    *piVar27 = *piVar27 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
              }
              if (*(int *)((long)puVar46 + 100) < 3) {
                puVar48 = (undefined8 *)puVar46[0x15];
                ppppppuVar50 = pppppppuVar23[0x15];
                *ppppppuVar50 = (undefined8 *****)*puVar48;
                ppppppuVar50[1] = (undefined8 *****)puVar48[1];
              }
              else {
                *(undefined4 *)((long)pppppppuVar23 + 100) = 0;
                FUN_109a844cc(pppppppuVar23 + 0xc,*(undefined4 *)((long)puVar46 + 100),0,0,0);
                if (0 < *(int *)((long)pppppppuVar23 + 100)) {
                  lVar56 = 0;
                  lVar59 = puVar46[0x14];
                  lVar41 = puVar46[0x15];
                  ppppppuVar50 = pppppppuVar23[0x14];
                  ppppppuVar61 = pppppppuVar23[0x15];
                  do {
                    *(undefined4 *)((long)ppppppuVar50 + lVar56 * 4) =
                         *(undefined4 *)(lVar59 + lVar56 * 4);
                    ppppppuVar61[lVar56] = *(undefined8 ******)(lVar41 + lVar56 * 8);
                    lVar56 = lVar56 + 1;
                  } while (lVar56 < *(int *)((long)pppppppuVar23 + 100));
                }
              }
              pppppppuVar23[0x18] = (undefined8 ******)puVar46[0x18];
              pppppppuVar23 = pppppppuVar23 + 0x1a;
            }
            else {
              pppppppuVar23 = (undefined8 *******)&uStack_1a0;
              FUN_10942cbb8(pppppppuVar23,puVar46);
            }
            ppppppuStack_198 = pppppppuVar23;
          }
          puVar46 = puVar46 + 0x1a;
        } while (puVar46 != puVar40);
        lVar56 = *(long *)(lVar22 + 8);
      }
      FUN_109423ca0(lVar56,&uStack_1a0);
      uStack_260 = (double *******)&uStack_1a0;
      FUN_10942a570(&uStack_260);
      lVar22 = lVar22 + 0x48;
    } while (lVar22 != lVar34);
    lVar22 = *(long *)(param_2 + 0x1e);
    lVar34 = *(long *)(param_2 + 0x20);
  }
  ppppppdStack_258 = (double ******)((long)&MACH_HEADER.magic + 1);
  ppppppdStack_250 = (double ******)CONCAT44(ppppppdStack_250._4_4_,1);
  ppppppdStack_240 = (double ******)0x3fb999999999999a;
  ppppppdStack_248 = (double ******)0x3fd0000000000000;
  pppppuStack_238 = (undefined8 ******)0x3fe0000000000000;
  pppppuStack_230 = (undefined8 *****)CONCAT62(pppppuStack_230._2_6_,0x101);
  pppppuStack_228 = (undefined8 *****)CONCAT44(pppppuStack_228._4_4_,0x14);
  uStack_260._0_5_ = CONCAT14(*param_2 != 2,1);
  uStack_410 = (double ******)0x0;
  pppppdStack_408 = (double *****)0x0;
  pppppdStack_400 = (double *****)0x0;
  ppppppdVar17 = uStack_410;
  for (; uStack_410 = ppppppdVar17, lVar22 != lVar34; lVar22 = lVar22 + 0x48) {
    pppppdVar62 = *(double ******)(lVar22 + 8);
    if (pppppdStack_408 < pppppdStack_400) {
      ppppppdVar64 = (double ******)(pppppdStack_408 + 1);
      *pppppdStack_408 = (double ****)pppppdVar62;
    }
    else {
      lVar56 = (long)pppppdStack_408 - (long)ppppppdVar17;
      uVar38 = (lVar56 >> 3) + 1;
      if (uVar38 >> 0x3d != 0) {
        FUN_10942ca5c();
        goto LAB_1094264f4;
      }
      uVar35 = (long)pppppdStack_400 - (long)ppppppdVar17 >> 2;
      if (uVar35 <= uVar38) {
        uVar35 = uVar38;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)pppppdStack_400 - (long)ppppppdVar17)) {
        uVar35 = 0x1fffffffffffffff;
      }
      if (uVar35 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_1094264f4;
      }
      ppppppdVar29 = (double ******)(uVar35 << 3);
      __Znwm();
      puVar46 = (undefined8 *)((long)ppppppdVar29 + lVar56);
      ppppppdVar64 = (double ******)(puVar46 + 1);
      *puVar46 = pppppdVar62;
      _memcpy();
      uStack_410 = ppppppdVar29;
      pppppdStack_400 = (double *****)(ppppppdVar29 + uVar35);
      if (ppppppdVar17 != (double ******)0x0) {
        pppppdStack_408 = (double *****)ppppppdVar64;
        __ZdlPv(ppppppdVar17);
      }
    }
    ppppppdVar17 = uStack_410;
    pppppdStack_408 = (double *****)ppppppdVar64;
  }
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  lVar22 = (long)puStack_390 - (long)puStack_398;
  if (lVar22 == 0) {
LAB_109425c88:
    puVar46 = &uStack_260;
    FUN_109438254(puVar46,&uStack_410,&lStack_448);
    if (lStack_448 != 0) {
      lStack_440 = lStack_448;
      __ZdlPv();
    }
    if (((ulong)puVar46 & 1) == 0) {
      pppppuStack_160 = (undefined8 ******)0x0;
      pppppuStack_178 = (undefined8 *****)0x0;
      ppppppdStack_180 = (double ******)0x0;
      pppppuStack_168 = (undefined8 ******)0x0;
      pppppuStack_170 = (undefined8 *****)0x0;
      ppppppuStack_198 = (undefined8 *******)0x0;
      uStack_1a0 = (double *******)0x0;
      uStack_188._0_4_ = 0;
      uStack_188._4_4_ = 0;
      uStack_190 = 0;
      cStack_189 = 0;
      pppppuStack_148 = (undefined8 *****)0x0;
      pppppuStack_150 = (undefined8 *****)0x0;
      pppppuStack_138 = (undefined8 ******)0x0;
      uStack_140 = (undefined8 ******)0x0;
      pppppuStack_158 = (undefined8 *****)CONCAT44(pppppuStack_158._4_4_,0x3f800000);
      pppppuStack_130 = (undefined8 *****)CONCAT44(pppppuStack_130._4_4_,0x3f800000);
      pppppuStack_2b8 = &pppppuStack_128;
      pppppuStack_118 = (undefined8 *****)0x0;
      pppppuStack_128 = (undefined8 *****)0x0;
      pppppuStack_120 = (undefined8 *****)0x0;
      pppppuStack_2b0 = (undefined8 *****)((ulong)pppppuStack_2b0 & 0xffffffffffffff00);
      pppppuVar55 = (undefined8 *****)0xd8;
      __Znwm();
      *pppppuVar55 = (undefined8 ****)0xffffffff;
      pppppuStack_120 = pppppuVar55 + 0x1b;
      pppppuVar55[2] = (undefined8 ****)0x0;
      pppppuVar55[1] = (undefined8 ****)0x0;
      pppppuVar55[4] = (undefined8 ****)0x0;
      pppppuVar55[3] = (undefined8 ****)0x0;
      pppppuVar55[6] = (undefined8 ****)0x0;
      pppppuVar55[5] = (undefined8 ****)0x0;
      pppppuVar55[8] = (undefined8 ****)0x0;
      pppppuVar55[7] = (undefined8 ****)0x0;
      pppppuVar55[9] = (undefined8 ****)0xffffffff;
      pppppuVar55[0xb] = (undefined8 ****)0x0;
      pppppuVar55[10] = (undefined8 ****)0x0;
      pppppuVar55[0xd] = (undefined8 ****)0x0;
      pppppuVar55[0xc] = (undefined8 ****)0x0;
      pppppuVar55[0xf] = (undefined8 ****)0x0;
      pppppuVar55[0xe] = (undefined8 ****)0x0;
      pppppuVar55[0x11] = (undefined8 ****)0x0;
      pppppuVar55[0x10] = (undefined8 ****)0x0;
      pppppuVar55[0x12] = (undefined8 ****)0xffffffff;
      pppppuVar55[0x14] = (undefined8 ****)0x0;
      pppppuVar55[0x13] = (undefined8 ****)0x0;
      pppppuVar55[0x16] = (undefined8 ****)0x0;
      pppppuVar55[0x15] = (undefined8 ****)0x0;
      pppppuVar55[0x18] = (undefined8 ****)0x0;
      pppppuVar55[0x17] = (undefined8 ****)0x0;
      pppppuVar55[0x1a] = (undefined8 ****)0x0;
      pppppuVar55[0x19] = (undefined8 ****)0x0;
      pppppuStack_100 = *(undefined8 ******)(param_2 + 0x28);
      pppppuStack_110 = *(undefined8 ******)(param_2 + 0x24);
      pppppuStack_108 = *(undefined8 ******)(param_2 + 0x26);
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      plVar30 = *(long **)(param_2 + 4);
      auVar67 = ZEXT216(0);
      pppppuStack_128 = pppppuVar55;
      pppppuStack_118 = pppppuStack_120;
      if (plVar30 == (long *)0x0) {
        ppppppdStack_180 = (double ******)0x0;
      }
      else {
        plVar60 = *(long **)(param_2 + 6);
        plVar31 = plVar30;
        if (plVar60 != plVar30) {
          do {
            plVar60 = plVar60 + -1;
            lVar22 = *plVar60;
            *plVar60 = 0;
            if (lVar22 != 0) {
              __ZdlPv();
            }
          } while (plVar60 != plVar30);
          plVar31 = *(long **)(param_2 + 4);
        }
        *(long **)(param_2 + 6) = plVar30;
        __ZdlPv(plVar31);
        auVar67[7] = cStack_189;
        auVar67._0_7_ = uStack_190;
        auVar67._8_4_ = (undefined4)uStack_188;
        auVar67._12_4_ = uStack_188._4_4_;
      }
      *(long *)(param_2 + 6) = auVar67._8_8_;
      *(long *)(param_2 + 4) = auVar67._0_8_;
      *(double *******)(param_2 + 8) = ppppppdStack_180;
      ppppppdStack_180 = (double ******)0x0;
      uStack_190 = 0;
      cStack_189 = '\0';
      uStack_188._0_4_ = 0;
      uStack_188._4_4_ = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        plVar30 = (long *)*(long *)(param_2 + 0xe);
        while (plVar30 != (long *)0x0) {
          pppppuStack_2b8 = (undefined8 *****)(plVar30 + 3);
          lVar22 = *plVar30;
          FUN_10942b9e0(&pppppuStack_2b8);
          __ZdlPv(plVar30);
          plVar30 = (long *)lVar22;
        }
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        lVar22 = *(long *)(param_2 + 0xc);
        if (lVar22 != 0) {
          lVar34 = 0;
          do {
            *(undefined8 *)(*(long *)(param_2 + 10) + lVar34 * 8) = 0;
            lVar34 = lVar34 + 1;
          } while (lVar22 != lVar34);
        }
        param_2[0x10] = 0;
        param_2[0x11] = 0;
      }
      pppppuVar55 = pppppuStack_178;
      pppppuStack_178 = (undefined8 ******)0x0;
      lVar22 = *(long *)(param_2 + 10);
      *(undefined8 ******)(param_2 + 10) = pppppuVar55;
      if (lVar22 != 0) {
        __ZdlPv();
      }
      pppppuVar55 = pppppuStack_170;
      *(undefined8 ******)(param_2 + 0xe) = pppppuStack_168;
      *(undefined8 ******)(param_2 + 0xc) = pppppuStack_170;
      pppppuStack_170 = (undefined8 ******)0x0;
      *(undefined8 ******)(param_2 + 0x10) = pppppuStack_160;
      param_2[0x12] = (int)pppppuStack_158;
      if ((undefined8 ******)pppppuStack_160 != (undefined8 ******)0x0) {
        pppppuVar51 = (undefined8 *****)pppppuStack_168[1];
        if (((ulong)pppppuVar55 & (long)pppppuVar55 - 1U) == 0) {
          pppppuVar51 = (undefined8 *****)((ulong)pppppuVar51 & (long)pppppuVar55 - 1U);
        }
        else if (pppppuVar55 <= pppppuVar51) {
          uVar38 = 0;
          if (pppppuVar55 != (undefined8 *****)0x0) {
            uVar38 = (ulong)pppppuVar51 / (ulong)pppppuVar55;
          }
          pppppuVar51 = (undefined8 *****)((long)pppppuVar51 - uVar38 * (long)pppppuVar55);
        }
        *(int **)(*(long *)(param_2 + 10) + (long)pppppuVar51 * 8) = param_2 + 0xe;
        pppppuStack_168 = (undefined8 ******)0x0;
        pppppuStack_160 = (undefined8 ******)0x0;
      }
      if (*(long *)(param_2 + 0x1a) != 0) {
        plVar30 = *(long **)(param_2 + 0x18);
        while (plVar30 != (long *)0x0) {
          plVar30 = (long *)*plVar30;
          __ZdlPv();
        }
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        lVar22 = *(long *)(param_2 + 0x16);
        if (lVar22 != 0) {
          lVar34 = 0;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x14) + lVar34 * 8) = 0;
            lVar34 = lVar34 + 1;
          } while (lVar22 != lVar34);
        }
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
      }
      pppppuVar55 = pppppuStack_150;
      pppppuStack_150 = (undefined8 ******)0x0;
      lVar22 = *(long *)(param_2 + 0x14);
      *(undefined8 ******)(param_2 + 0x14) = pppppuVar55;
      if (lVar22 != 0) {
        __ZdlPv();
      }
      pppppuVar55 = pppppuStack_148;
      *(undefined8 *******)(param_2 + 0x18) = uStack_140;
      *(undefined8 ******)(param_2 + 0x16) = pppppuStack_148;
      pppppuStack_148 = (undefined8 ******)0x0;
      *(undefined8 ******)(param_2 + 0x1a) = pppppuStack_138;
      param_2[0x1c] = (int)pppppuStack_130;
      if ((undefined8 ******)pppppuStack_138 != (undefined8 ******)0x0) {
        pppppuVar51 = uStack_140[1];
        if (((ulong)pppppuVar55 & (long)pppppuVar55 - 1U) == 0) {
          pppppuVar51 = (undefined8 *****)((ulong)pppppuVar51 & (long)pppppuVar55 - 1U);
        }
        else if (pppppuVar55 <= pppppuVar51) {
          uVar38 = 0;
          if (pppppuVar55 != (undefined8 *****)0x0) {
            uVar38 = (ulong)pppppuVar51 / (ulong)pppppuVar55;
          }
          pppppuVar51 = (undefined8 *****)((long)pppppuVar51 - uVar38 * (long)pppppuVar55);
        }
        *(int **)(*(long *)(param_2 + 0x14) + (long)pppppuVar51 * 8) = param_2 + 0x18;
        uStack_140 = (undefined8 ******)0x0;
        pppppuStack_138 = (undefined8 ******)0x0;
      }
      pppppuVar55 = (undefined8 *****)*plVar37;
      if (pppppuVar55 != (undefined8 *****)0x0) {
        pppppuVar51 = pppppuVar55;
        if (*(undefined8 ******)(param_2 + 0x20) != pppppuVar55) {
          pppppuVar51 = *(undefined8 ******)(param_2 + 0x20) + -4;
          do {
            pppppuStack_2b8 = pppppuVar51;
            FUN_10942a570(&pppppuStack_2b8);
            pppppuStack_2b8 = pppppuVar51 + -3;
            FUN_109427be4(&pppppuStack_2b8);
            ppppuVar33 = pppppuVar51[-4];
            pppppuVar51[-4] = (undefined8 ****)0x0;
            if (ppppuVar33 != (undefined8 ****)0x0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            pppppuVar45 = pppppuVar51 + -5;
            pppppuVar51 = pppppuVar51 + -9;
          } while (pppppuVar45 != pppppuVar55);
          pppppuVar51 = (undefined8 *****)*plVar37;
        }
        *(undefined8 ******)(param_2 + 0x20) = pppppuVar55;
        __ZdlPv(pppppuVar51);
        *plVar37 = 0;
        param_2[0x20] = 0;
        param_2[0x21] = 0;
        param_2[0x22] = 0;
        param_2[0x23] = 0;
      }
      *(undefined8 ******)(param_2 + 0x20) = pppppuStack_120;
      *(undefined8 ******)(param_2 + 0x1e) = pppppuStack_128;
      *(undefined8 ******)(param_2 + 0x22) = pppppuStack_118;
      pppppuStack_120 = (undefined8 ******)0x0;
      pppppuStack_118 = (undefined8 ******)0x0;
      pppppuStack_128 = (undefined8 ******)0x0;
      *(undefined8 ******)(param_2 + 0x26) = pppppuStack_108;
      *(undefined8 ******)(param_2 + 0x24) = pppppuStack_110;
      param_2[0x28] = (int)pppppuStack_100;
      FUN_10942bb0c(&uStack_1a0);
      FUN_10937e740(&uStack_1a0,&UNK_10f56d475);
      FUN_109388c6c(1,&UNK_10f56d3e6,&UNK_10f56d469,0x198,&uStack_1a0);
      if (cStack_189 < '\0') {
        __ZdlPv(uStack_1a0);
      }
      *param_1 = 0;
    }
    else {
      FUN_10942281c(&uStack_1a0,param_2,0);
      if (*(long *)(param_2 + 0x1a) != 0) {
        plVar30 = *(long **)(param_2 + 0x18);
        while (plVar30 != (long *)0x0) {
          plVar30 = (long *)*plVar30;
          __ZdlPv();
        }
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        lVar22 = *(long *)(param_2 + 0x16);
        if (lVar22 != 0) {
          lVar34 = 0;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x14) + lVar34 * 8) = 0;
            lVar34 = lVar34 + 1;
          } while (lVar22 != lVar34);
        }
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
      }
      ppppppuVar50 = ppppppuStack_198;
      ppppppuStack_198 = (undefined8 *******)0x0;
      lVar22 = *(long *)(param_2 + 0x14);
      *(undefined8 *******)(param_2 + 0x14) = ppppppuVar50;
      if (lVar22 != 0) {
        __ZdlPv();
      }
      ppppppuVar50 = (undefined8 ******)CONCAT17(cStack_189,uStack_190);
      *(undefined8 ********)(param_2 + 0x18) = uStack_188;
      *(undefined8 *******)(param_2 + 0x16) = ppppppuVar50;
      uStack_190 = 0;
      cStack_189 = '\0';
      *(double *******)(param_2 + 0x1a) = ppppppdStack_180;
      param_2[0x1c] = (int)pppppuStack_178;
      if ((double *******)ppppppdStack_180 != (double *******)0x0) {
        ppppppuVar61 = uStack_188[1];
        if (((ulong)ppppppuVar50 & (long)ppppppuVar50 - 1U) == 0) {
          ppppppuVar61 = (undefined8 ******)((ulong)ppppppuVar61 & (long)ppppppuVar50 - 1U);
        }
        else if (ppppppuVar50 <= ppppppuVar61) {
          uVar38 = 0;
          if (ppppppuVar50 != (undefined8 ******)0x0) {
            uVar38 = (ulong)ppppppuVar61 / (ulong)ppppppuVar50;
          }
          ppppppuVar61 = (undefined8 ******)((long)ppppppuVar61 - uVar38 * (long)ppppppuVar50);
        }
        *(int **)(*(long *)(param_2 + 0x14) + (long)ppppppuVar61 * 8) = param_2 + 0x18;
        uStack_188 = (undefined8 *******)0x0;
        ppppppdStack_180 = (double ******)0x0;
      }
      pppppuVar55 = *(undefined8 ******)(param_2 + 0x1e);
      pppppuVar51 = *(undefined8 ******)(param_2 + 0x20);
      uVar35 = ((long)pppppuVar51 - (long)pppppuVar55 >> 3) * -0x71c71c71c71c71c7;
      uVar38 = uVar35 + 4;
      if (uVar35 < 0xfffffffffffffffc) {
        if ((ulong)((*(long *)(param_2 + 0x22) - (long)pppppuVar51 >> 3) * -0x71c71c71c71c71c7) < 4)
        {
          if (0x38e38e38e38e38e < uVar38) {
            FUN_109427bd0();
            goto LAB_1094264f4;
          }
          lVar22 = *(long *)(param_2 + 0x22) - (long)pppppuVar55 >> 3;
          uVar35 = lVar22 * 0x1c71c71c71c71c72;
          if (uVar35 < uVar38 || uVar35 - uVar38 == 0) {
            uVar35 = uVar38;
          }
          if (0x1c71c71c71c71c6 < (ulong)(lVar22 * -0x71c71c71c71c71c7)) {
            uVar35 = 0x38e38e38e38e38e;
          }
          if (0x38e38e38e38e38e < uVar35) {
            func_0x000104c4f740();
            goto LAB_1094264f4;
          }
          puVar32 = (undefined4 *)(uVar35 * 0x48);
          __Znwm();
          puVar46 = (undefined8 *)((long)puVar32 + ((long)pppppuVar51 - (long)pppppuVar55));
          *puVar46 = 0xffffffff;
          puVar46[2] = 0;
          puVar46[1] = 0;
          puVar46[4] = 0;
          puVar46[3] = 0;
          puVar46[6] = 0;
          puVar46[5] = 0;
          puVar46[8] = 0;
          puVar46[7] = 0;
          puVar46[9] = 0xffffffff;
          puVar46[0xb] = 0;
          puVar46[10] = 0;
          puVar46[0xd] = 0;
          puVar46[0xc] = 0;
          puVar46[0xf] = 0;
          puVar46[0xe] = 0;
          puVar46[0x11] = 0;
          puVar46[0x10] = 0;
          puVar46[0x12] = 0xffffffff;
          puVar46[0x14] = 0;
          puVar46[0x13] = 0;
          puVar46[0x16] = 0;
          puVar46[0x15] = 0;
          puVar46[0x18] = 0;
          puVar46[0x17] = 0;
          puVar46[0x1a] = 0;
          puVar46[0x19] = 0;
          puVar46[0x1b] = 0xffffffff;
          puVar46[0x21] = 0;
          puVar46[0x20] = 0;
          puVar46[0x23] = 0;
          puVar46[0x22] = 0;
          puVar46[0x1d] = 0;
          puVar46[0x1c] = 0;
          puVar46[0x1f] = 0;
          puVar46[0x1e] = 0;
          pppppuVar45 = pppppuVar55;
          puVar26 = puVar32;
          if (pppppuVar55 != pppppuVar51) {
            do {
              *puVar26 = *(undefined4 *)pppppuVar45;
              ppppuVar33 = pppppuVar45[1];
              pppppuVar45[1] = (undefined8 ****)0x0;
              *(undefined8 *****)(puVar26 + 4) = pppppuVar45[2];
              *(undefined8 *****)(puVar26 + 2) = ppppuVar33;
              ppppuVar33 = pppppuVar45[3];
              *(undefined8 *****)(puVar26 + 8) = pppppuVar45[4];
              *(undefined8 *****)(puVar26 + 6) = ppppuVar33;
              pppppuVar45[2] = (undefined8 ****)0x0;
              pppppuVar45[3] = (undefined8 ****)0x0;
              pppppuVar45[4] = (undefined8 ****)0x0;
              ppppuVar33 = pppppuVar45[5];
              *(undefined8 *****)(puVar26 + 0xc) = pppppuVar45[6];
              *(undefined8 *****)(puVar26 + 10) = ppppuVar33;
              *(undefined8 *****)(puVar26 + 0xe) = pppppuVar45[7];
              pppppuVar45[5] = (undefined8 ****)0x0;
              pppppuVar45[6] = (undefined8 ****)0x0;
              pppppuVar45[7] = (undefined8 ****)0x0;
              *(undefined8 *****)(puVar26 + 0x10) = pppppuVar45[8];
              pppppuVar45 = pppppuVar45 + 9;
              puVar26 = puVar26 + 0x12;
            } while (pppppuVar45 != pppppuVar51);
            do {
              pppppuStack_2b8 = pppppuVar55 + 5;
              FUN_10942a570(&pppppuStack_2b8);
              pppppuStack_2b8 = pppppuVar55 + 2;
              FUN_109427be4(&pppppuStack_2b8);
              ppppuVar33 = pppppuVar55[1];
              pppppuVar55[1] = (undefined8 ****)0x0;
              if (ppppuVar33 != (undefined8 ****)0x0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              pppppuVar55 = pppppuVar55 + 9;
            } while (pppppuVar55 != pppppuVar51);
            pppppuVar55 = (undefined8 *****)*plVar37;
          }
          *(undefined4 **)(param_2 + 0x1e) = puVar32;
          *(undefined8 **)(param_2 + 0x20) = puVar46 + 0x24;
          *(undefined4 **)(param_2 + 0x22) = puVar32 + uVar35 * 0x12;
          if (pppppuVar55 != (undefined8 *****)0x0) {
            __ZdlPv(pppppuVar55);
          }
        }
        else {
          *pppppuVar51 = (undefined8 ****)0xffffffff;
          pppppuVar51[2] = (undefined8 ****)0x0;
          pppppuVar51[1] = (undefined8 ****)0x0;
          pppppuVar51[4] = (undefined8 ****)0x0;
          pppppuVar51[3] = (undefined8 ****)0x0;
          pppppuVar51[6] = (undefined8 ****)0x0;
          pppppuVar51[5] = (undefined8 ****)0x0;
          pppppuVar51[8] = (undefined8 ****)0x0;
          pppppuVar51[7] = (undefined8 ****)0x0;
          pppppuVar51[9] = (undefined8 ****)0xffffffff;
          pppppuVar51[0xb] = (undefined8 ****)0x0;
          pppppuVar51[10] = (undefined8 ****)0x0;
          pppppuVar51[0xd] = (undefined8 ****)0x0;
          pppppuVar51[0xc] = (undefined8 ****)0x0;
          pppppuVar51[0xf] = (undefined8 ****)0x0;
          pppppuVar51[0xe] = (undefined8 ****)0x0;
          pppppuVar51[0x11] = (undefined8 ****)0x0;
          pppppuVar51[0x10] = (undefined8 ****)0x0;
          pppppuVar51[0x12] = (undefined8 ****)0xffffffff;
          pppppuVar51[0x14] = (undefined8 ****)0x0;
          pppppuVar51[0x13] = (undefined8 ****)0x0;
          pppppuVar51[0x16] = (undefined8 ****)0x0;
          pppppuVar51[0x15] = (undefined8 ****)0x0;
          pppppuVar51[0x18] = (undefined8 ****)0x0;
          pppppuVar51[0x17] = (undefined8 ****)0x0;
          pppppuVar51[0x1a] = (undefined8 ****)0x0;
          pppppuVar51[0x19] = (undefined8 ****)0x0;
          pppppuVar51[0x1b] = (undefined8 ****)0xffffffff;
          pppppuVar51[0x21] = (undefined8 ****)0x0;
          pppppuVar51[0x20] = (undefined8 ****)0x0;
          pppppuVar51[0x23] = (undefined8 ****)0x0;
          pppppuVar51[0x22] = (undefined8 ****)0x0;
          pppppuVar51[0x1d] = (undefined8 ****)0x0;
          pppppuVar51[0x1c] = (undefined8 ****)0x0;
          pppppuVar51[0x1f] = (undefined8 ****)0x0;
          pppppuVar51[0x1e] = (undefined8 ****)0x0;
          *(undefined8 ******)(param_2 + 0x20) = pppppuVar51 + 0x24;
        }
      }
      else {
        pppppuVar55 = pppppuVar55 + uVar38 * 9;
        if (pppppuVar51 != pppppuVar55) {
          pppppuVar51 = pppppuVar51 + -4;
          do {
            pppppuStack_2b8 = pppppuVar51;
            FUN_10942a570(&pppppuStack_2b8);
            pppppuStack_2b8 = pppppuVar51 + -3;
            FUN_109427be4(&pppppuStack_2b8);
            ppppuVar33 = pppppuVar51[-4];
            pppppuVar51[-4] = (undefined8 ****)0x0;
            if (ppppuVar33 != (undefined8 ****)0x0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            pppppuVar45 = pppppuVar51 + -5;
            pppppuVar51 = pppppuVar51 + -9;
          } while (pppppuVar45 != pppppuVar55);
        }
        *(undefined8 ******)(param_2 + 0x20) = pppppuVar55;
      }
      *param_2 = 3;
      FUN_109420f7c(param_2);
      pppppppuVar23 = uStack_1a0;
      uStack_1a0 = (double *******)0x0;
      *param_1 = pppppppuVar23;
      pppppppuVar23 = (undefined8 *******)ppppppuStack_198;
      pppppppuVar53 = uStack_188;
      while (pppppppuVar53 != (undefined8 *******)0x0) {
        pppppppuVar53 = (undefined8 *******)*pppppppuVar53;
        ppppppuStack_198 = pppppppuVar23;
        __ZdlPv();
        pppppppuVar23 = (undefined8 *******)ppppppuStack_198;
      }
      ppppppuStack_198 = (undefined8 *******)0x0;
      if (pppppppuVar23 != (undefined8 *******)0x0) {
        __ZdlPv();
      }
      ppppppdVar17 = (double ******)uStack_1a0;
      uStack_1a0 = (double *******)0x0;
      if (ppppppdVar17 != (double ******)0x0) {
        FUN_1094303c4();
        __ZdlPv();
      }
    }
    if (uStack_410 != (double ******)0x0) {
      pppppdStack_408 = (double *****)uStack_410;
      __ZdlPv();
    }
    if (puStack_398 != (undefined8 *)0x0) {
      puStack_390 = puStack_398;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (-1 < lVar22) {
    lVar34 = lVar22;
    __Znwm();
    lStack_448 = lVar34;
    lStack_440 = lVar34;
    lStack_438 = lVar34 + lVar22;
    _memcpy();
    lStack_440 = lVar34 + lVar22;
    goto LAB_109425c88;
  }
  FUN_10942bc54();
LAB_1094264f4:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x1094264f8);
  (*pcVar21)();
}



/* Entry: 1094267fc; end: 1094269bf;  */

long * FUN_1094267fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    FUN_1094303c4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094269c0; end: 109426aa3;  */

long * FUN_1094269c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *param_2 = 0;
    puVar15 = puVar4 + 1;
    *puVar4 = uVar8;
    plVar7 = param_1;
LAB_109426a80:
    param_1[1] = (long)puVar15;
    return plVar7;
  }
  plVar13 = (long *)*param_1;
  uVar1 = ((long)puVar4 - (long)plVar13 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - (long)plVar13;
    uVar12 = (long)uVar9 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d == 0) {
      plVar14 = (long *)(uVar12 * 8);
      __Znwm();
      puVar4 = (undefined8 *)((long)plVar14 + ((long)puVar4 - (long)plVar13));
      uVar8 = *param_2;
      *param_2 = 0;
      puVar15 = puVar4 + 1;
      *puVar4 = uVar8;
      plVar7 = plVar14;
      _memcpy();
      *param_1 = (long)plVar14;
      param_1[1] = (long)puVar15;
      param_1[2] = (long)(plVar14 + uVar12);
      if (plVar13 != (long *)0x0) {
        __ZdlPv(plVar13);
        plVar7 = plVar13;
      }
      goto LAB_109426a80;
    }
  }
  else {
    FUN_10942ff3c();
  }
  func_0x000104c4f740();
  if ((char)param_1[0x1a] == '\x01') {
    if (param_1[0x13] != 0) {
      piVar2 = (int *)(param_1[0x13] + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((iVar3 + -1 == 0) && (param_1[0x13] != 0)) {
        plVar7 = *(long **)(param_1[0x13] + 8);
        if ((plVar7 == (long *)0x0) &&
           ((plVar7 = (long *)param_1[0x12], (long *)param_1[0x12] == (long *)0x0 &&
            (plVar7 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar7 = plRam000000011382bb80;
        }
        (**(code **)(*plVar7 + 0x30))();
      }
    }
    param_1[0x13] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    if (0 < *(int *)((long)param_1 + 100)) {
      lVar10 = 0;
      lVar11 = param_1[0x14];
      do {
        *(undefined4 *)(lVar11 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((long)param_1 + 100));
    }
    plVar7 = (long *)param_1[0x15];
    if (plVar7 != param_1 + 0x16 && plVar7 != (long *)0x0) {
      _free(plVar7[-1]);
    }
  }
  return param_1;
}



/* Entry: 109426aa4; end: 109426b7f;  */

long FUN_109426aa4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if (*(long *)(param_1 + 0x98) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((iVar2 + -1 == 0) && (*(long *)(param_1 + 0x98) != 0)) {
        plVar5 = *(long **)(*(long *)(param_1 + 0x98) + 8);
        if ((plVar5 == (long *)0x0) &&
           ((plVar5 = *(long **)(param_1 + 0x90), *(long **)(param_1 + 0x90) == (long *)0x0 &&
            (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar5 = plRam000000011382bb80;
        }
        (**(code **)(*plVar5 + 0x30))();
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (0 < *(int *)(param_1 + 100)) {
      lVar6 = 0;
      lVar7 = *(long *)(param_1 + 0xa0);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 100));
    }
    lVar6 = *(long *)(param_1 + 0xa8);
    if (lVar6 != param_1 + 0xb0 && lVar6 != 0) {
      _free(*(undefined8 *)(lVar6 + -8));
    }
  }
  return param_1;
}



/* Entry: 109426b80; end: 109427aff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109426b80(undefined8 *param_1,int *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  long *****ppppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  bool bVar15;
  long *******ppppppplVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  uint *puVar19;
  uint uVar20;
  long *******ppppppplVar21;
  int iVar22;
  long lVar23;
  long ******pppppplVar24;
  ulong **ppuVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long *******ppppppplVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long *****ppppplVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong *puVar37;
  long lVar38;
  uint *puVar39;
  uint *puVar40;
  long ******pppppplVar41;
  long ******pppppplVar42;
  uint *puVar43;
  uint *puVar44;
  long lVar45;
  uint *puVar46;
  double dVar47;
  double dVar48;
  long *****ppppplVar49;
  uint uVar50;
  int iVar51;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong **ppuStack_e8;
  ulong *puStack_e0;
  ulong **ppuStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar51 = param_2[1];
  iVar22 = (int)((double)(long)*param_2 / 5.0);
  ppppppplStack_190 = (long *******)0x0;
  lStack_188 = 0;
  lVar23 = *param_4;
  ppppppplStack_198 = (long *******)&ppppppplStack_190;
  if (param_4[1] != lVar23) {
    uVar36 = 0;
    do {
      lVar23 = lVar23 + uVar36 * 0xb0;
      iVar7 = (int)(*(double *)(lVar23 + 0x10) / 5.0) +
              (int)(*(double *)(lVar23 + 0x18) / 5.0) * iVar22;
      ppppppplVar21 = ppppppplStack_190;
      ppppppplVar16 = (long *******)&ppppppplStack_190;
      while (ppppppplVar18 = ppppppplVar16, ppppppplVar29 = ppppppplVar16,
            ppppppplVar21 != (long *******)0x0) {
        while (ppppppplVar16 = ppppppplVar21, *(int *)(ppppppplVar16 + 4) <= iVar7) {
          if (iVar7 <= *(int *)(ppppppplVar16 + 4)) {
            pppppplVar42 = ppppppplVar16[6];
            pppppplVar24 = ppppppplVar16[7];
            if (pppppplVar24 <= pppppplVar42) goto LAB_109426d0c;
            goto LAB_109426c18;
          }
          ppppppplVar21 = (long *******)ppppppplVar16[1];
          if ((long *******)ppppppplVar16[1] == (long *******)0x0) {
            ppppppplVar29 = ppppppplVar16 + 1;
            ppppppplVar18 = ppppppplVar16;
            goto LAB_109426c9c;
          }
        }
        ppppppplVar21 = (long *******)*ppppppplVar16;
      }
LAB_109426c9c:
      ppppppplVar16 = (long *******)0x40;
      __Znwm();
      *(int *)(ppppppplVar16 + 4) = iVar7;
      ppppppplVar16[6] = (long ******)0x0;
      ppppppplVar16[7] = (long ******)0x0;
      ppppppplVar16[5] = (long ******)0x0;
      *ppppppplVar16 = (long ******)0x0;
      ppppppplVar16[1] = (long ******)0x0;
      ppppppplVar16[2] = (long ******)ppppppplVar18;
      *ppppppplVar29 = (long ******)ppppppplVar16;
      ppppppplVar21 = ppppppplVar16;
      if ((long *******)*ppppppplStack_198 != (long *******)0x0) {
        ppppppplVar21 = (long *******)*ppppppplVar29;
        ppppppplStack_198 = (long *******)*ppppppplStack_198;
      }
      func_0x000107c27d40(ppppppplStack_190,ppppppplVar21);
      lStack_188 = lStack_188 + 1;
      pppppplVar42 = ppppppplVar16[6];
      pppppplVar24 = ppppppplVar16[7];
      if (pppppplVar42 < pppppplVar24) {
LAB_109426c18:
        pppppplVar24 = (long ******)((long)pppppplVar42 + 4);
        *(int *)pppppplVar42 = (int)uVar36;
      }
      else {
LAB_109426d0c:
        pppppplVar41 = ppppppplVar16[5];
        uVar30 = ((long)pppppplVar42 - (long)pppppplVar41 >> 2) + 1;
        if (uVar30 >> 0x3e != 0) {
          FUN_10923f788();
          goto LAB_109427a58;
        }
        uVar28 = (long)pppppplVar24 - (long)pppppplVar41 >> 1;
        if (uVar28 <= uVar30) {
          uVar28 = uVar30;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pppppplVar24 - (long)pppppplVar41)) {
          uVar28 = 0x3fffffffffffffff;
        }
        if (uVar28 >> 0x3e != 0) {
          func_0x000104c4f740();
          goto LAB_109427a58;
        }
        pppppplVar17 = (long ******)(uVar28 << 2);
        __Znwm();
        puVar3 = (undefined4 *)((long)pppppplVar17 + ((long)pppppplVar42 - (long)pppppplVar41));
        pppppplVar24 = (long ******)(puVar3 + 1);
        *puVar3 = (int)uVar36;
        _memcpy();
        ppppppplVar16[5] = pppppplVar17;
        ppppppplVar16[6] = pppppplVar24;
        ppppppplVar16[7] = (long ******)((long)pppppplVar17 + uVar28 * 4);
        if (pppppplVar41 != (long ******)0x0) {
          __ZdlPv(pppppplVar41);
        }
      }
      ppppppplVar16[6] = pppppplVar24;
      uVar36 = uVar36 + 1;
      lVar23 = *param_4;
    } while (uVar36 < (ulong)((param_4[1] - lVar23 >> 4) * 0x2e8ba2e8ba2e8ba3));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar37 = (ulong *)*param_3;
  puVar5 = (ulong *)param_3[1];
  lVar23 = (long)puVar5 - (long)puVar37;
  if (lVar23 != 0) {
    if ((ulong)((lVar23 >> 4) * 0x4ec4ec4ec4ec4ec5) >> 0x3e != 0) goto LAB_109427a54;
    do {
      puVar44 = (uint *)0x0;
      puVar39 = (uint *)0x0;
      puVar46 = (uint *)0x0;
      lVar23 = 0;
      dVar47 = (double)puVar37[4];
      dVar48 = (double)puVar37[5];
      uStack_180 = 0xffffffff;
      uStack_178 = CONCAT44(uStack_178._4_4_,1);
      do {
        uStack_b0 = 0xffffffff;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
        iVar7 = *(int *)((long)&uStack_180 + lVar23) + (int)(dVar47 / 5.0);
        if ((-1 < iVar7) && (iVar7 < iVar22)) {
          lVar38 = 0;
LAB_109426ec0:
          do {
            iVar2 = *(int *)((long)&uStack_b0 + lVar38) + (int)(dVar48 / 5.0);
            puVar19 = puVar44;
            if ((-1 < iVar2) && (iVar2 < (int)((double)(long)iVar51 / 5.0))) {
              iVar2 = iVar7 + iVar2 * iVar22;
              ppppppplVar21 = (long *******)&ppppppplStack_190;
              ppppppplVar16 = ppppppplStack_190;
              while (ppppppplVar29 = ppppppplVar21, ppppppplVar16 != (long *******)0x0) {
                while (ppppppplVar18 = ppppppplVar16, *(int *)(ppppppplVar18 + 4) <= iVar2) {
                  if (iVar2 <= *(int *)(ppppppplVar18 + 4)) goto LAB_1094270d4;
                  ppppppplVar16 = (long *******)ppppppplVar18[1];
                  if ((long *******)ppppppplVar18[1] == (long *******)0x0) {
                    ppppppplVar21 = ppppppplVar18 + 1;
                    ppppppplVar29 = ppppppplVar18;
                    goto LAB_109426f2c;
                  }
                }
                ppppppplVar21 = ppppppplVar18;
                ppppppplVar16 = (long *******)*ppppppplVar18;
              }
LAB_109426f2c:
              ppppppplVar18 = (long *******)0x40;
              __Znwm();
              *(int *)(ppppppplVar18 + 4) = iVar2;
              ppppppplVar18[6] = (long ******)0x0;
              ppppppplVar18[7] = (long ******)0x0;
              ppppppplVar18[5] = (long ******)0x0;
              *ppppppplVar18 = (long ******)0x0;
              ppppppplVar18[1] = (long ******)0x0;
              ppppppplVar18[2] = (long ******)ppppppplVar29;
              *ppppppplVar21 = (long ******)ppppppplVar18;
              ppppppplVar16 = ppppppplVar18;
              if ((long *******)*ppppppplStack_198 != (long *******)0x0) {
                ppppppplVar16 = (long *******)*ppppppplVar21;
                ppppppplStack_198 = (long *******)*ppppppplStack_198;
              }
              bVar15 = ppppppplVar16 == ppppppplStack_190;
              *(bool *)(ppppppplVar16 + 3) = bVar15;
joined_r0x000109426f74:
              if ((bVar15) || (pppppplVar42 = ppppppplVar16[2], ((ulong)pppppplVar42[3] & 1) != 0))
              goto LAB_1094270c8;
              ppppppplVar21 = (long *******)pppppplVar42[2];
              pppppplVar24 = *ppppppplVar21;
              if (pppppplVar24 != pppppplVar42) {
                if ((pppppplVar24 == (long ******)0x0) ||
                   (pppppplVar41 = pppppplVar24 + 3, *(byte *)pppppplVar41 == 1)) {
                  ppppppplVar29 = (long *******)*pppppplVar42;
                  if (ppppppplVar29 == ppppppplVar16) {
                    pppppplVar24 = ppppppplVar29[1];
                    *pppppplVar42 = (long *****)pppppplVar24;
                    if (pppppplVar24 != (long ******)0x0) {
                      pppppplVar24[2] = (long *****)pppppplVar42;
                      ppppppplVar21 = (long *******)pppppplVar42[2];
                    }
                    ppppppplVar29[2] = (long ******)ppppppplVar21;
                    lVar45 = 0;
                    if (*ppppppplVar21 != pppppplVar42) {
                      lVar45 = 8;
                    }
                    *(long ********)((long)ppppppplVar21 + lVar45) = ppppppplVar29;
                    ppppppplVar29[1] = pppppplVar42;
                    pppppplVar42[2] = (long *****)ppppppplVar29;
                    ppppppplVar21 = (long *******)ppppppplVar29[2];
                    *(undefined1 *)(ppppppplVar29 + 3) = 1;
                    *(undefined1 *)(ppppppplVar21 + 3) = 0;
                    pppppplVar42 = ppppppplVar21[1];
                    pppppplVar24 = (long ******)*pppppplVar42;
                    ppppppplVar21[1] = pppppplVar24;
                  }
                  else {
                    *(undefined1 *)(pppppplVar42 + 3) = 1;
                    *(undefined1 *)(ppppppplVar21 + 3) = 0;
                    pppppplVar42 = ppppppplVar21[1];
                    pppppplVar24 = (long ******)*pppppplVar42;
                    ppppppplVar21[1] = pppppplVar24;
                  }
                  if (pppppplVar24 != (long ******)0x0) {
                    pppppplVar24[2] = (long *****)ppppppplVar21;
                  }
                  pppppplVar24 = ppppppplVar21[2];
                  pppppplVar42[2] = (long *****)pppppplVar24;
                  lVar45 = 0;
                  if ((long *******)*pppppplVar24 != ppppppplVar21) {
                    lVar45 = 8;
                  }
                  *(long *******)((long)pppppplVar24 + lVar45) = pppppplVar42;
                  *pppppplVar42 = (long *****)ppppppplVar21;
                  ppppppplVar21[2] = pppppplVar42;
                  goto LAB_1094270c8;
                }
LAB_109426f7c:
                *(undefined1 *)(pppppplVar42 + 3) = 1;
                bVar15 = ppppppplVar21 == ppppppplStack_190;
                *(bool *)(ppppppplVar21 + 3) = bVar15;
                *(byte *)pppppplVar41 = 1;
                ppppppplVar16 = ppppppplVar21;
                goto joined_r0x000109426f74;
              }
              if ((ppppppplVar21[1] != (long ******)0x0) &&
                 (pppppplVar41 = ppppppplVar21[1] + 3, ((ulong)*pppppplVar41 & 1) == 0))
              goto LAB_109426f7c;
              pppppplVar41 = pppppplVar42;
              if ((long *******)*pppppplVar42 != ppppppplVar16) {
                pppppplVar41 = (long ******)pppppplVar42[1];
                ppppplVar33 = *pppppplVar41;
                pppppplVar42[1] = ppppplVar33;
                pppppplVar24 = pppppplVar42;
                if (ppppplVar33 != (long *****)0x0) {
                  ppppplVar33[2] = (long ****)pppppplVar42;
                  ppppppplVar21 = (long *******)pppppplVar42[2];
                  pppppplVar24 = *ppppppplVar21;
                }
                pppppplVar41[2] = (long *****)ppppppplVar21;
                lVar45 = 0;
                if (pppppplVar24 != pppppplVar42) {
                  lVar45 = 8;
                }
                *(long *******)((long)ppppppplVar21 + lVar45) = pppppplVar41;
                *pppppplVar41 = (long *****)pppppplVar42;
                pppppplVar42[2] = (long *****)pppppplVar41;
                ppppppplVar21 = (long *******)pppppplVar41[2];
                pppppplVar24 = *ppppppplVar21;
              }
              *(undefined1 *)(pppppplVar41 + 3) = 1;
              *(undefined1 *)(ppppppplVar21 + 3) = 0;
              pppppplVar42 = (long ******)pppppplVar24[1];
              *ppppppplVar21 = pppppplVar42;
              if (pppppplVar42 != (long ******)0x0) {
                pppppplVar42[2] = (long *****)ppppppplVar21;
              }
              pppppplVar42 = ppppppplVar21[2];
              pppppplVar24[2] = (long *****)pppppplVar42;
              lVar45 = 0;
              if ((long *******)*pppppplVar42 != ppppppplVar21) {
                lVar45 = 8;
              }
              *(long *******)((long)pppppplVar42 + lVar45) = pppppplVar24;
              pppppplVar24[1] = (long *****)ppppppplVar21;
              ppppppplVar21[2] = pppppplVar24;
LAB_1094270c8:
              lStack_188 = lStack_188 + 1;
LAB_1094270d4:
              pppppplVar42 = ppppppplVar18[5];
              ppppppplVar21 = ppppppplStack_190;
              ppppppplVar16 = (long *******)&ppppppplStack_190;
              while (ppppppplVar29 = ppppppplVar16, ppppppplVar21 != (long *******)0x0) {
                while (ppppppplVar16 = ppppppplVar21, *(int *)(ppppppplVar16 + 4) <= iVar2) {
                  if (iVar2 <= *(int *)(ppppppplVar16 + 4)) {
                    pppppplVar24 = ppppppplVar16[6];
                    lVar45 = (long)pppppplVar24 - (long)pppppplVar42;
                    goto joined_r0x0001094271d8;
                  }
                  ppppppplVar21 = (long *******)ppppppplVar16[1];
                  if ((long *******)ppppppplVar16[1] == (long *******)0x0) {
                    ppppppplVar29 = ppppppplVar16 + 1;
                    goto LAB_109427110;
                  }
                }
                ppppppplVar21 = (long *******)*ppppppplVar16;
              }
LAB_109427110:
              ppppppplVar18 = (long *******)0x40;
              __Znwm();
              *(int *)(ppppppplVar18 + 4) = iVar2;
              ppppppplVar18[6] = (long ******)0x0;
              ppppppplVar18[7] = (long ******)0x0;
              ppppppplVar18[5] = (long ******)0x0;
              *ppppppplVar18 = (long ******)0x0;
              ppppppplVar18[1] = (long ******)0x0;
              ppppppplVar18[2] = (long ******)ppppppplVar16;
              *ppppppplVar29 = (long ******)ppppppplVar18;
              ppppppplVar21 = ppppppplVar18;
              if ((long *******)*ppppppplStack_198 != (long *******)0x0) {
                ppppppplVar21 = (long *******)*ppppppplVar29;
                ppppppplStack_198 = (long *******)*ppppppplStack_198;
              }
              bVar15 = ppppppplVar21 == ppppppplStack_190;
              *(bool *)(ppppppplVar21 + 3) = bVar15;
joined_r0x000109427158:
              if ((bVar15) || (pppppplVar24 = ppppppplVar21[2], ((ulong)pppppplVar24[3] & 1) != 0))
              goto LAB_1094272c8;
              ppppppplVar16 = (long *******)pppppplVar24[2];
              pppppplVar41 = *ppppppplVar16;
              if (pppppplVar41 != pppppplVar24) {
                if ((pppppplVar41 == (long ******)0x0) ||
                   (pppppplVar17 = pppppplVar41 + 3, *(byte *)pppppplVar17 == 1)) {
                  ppppppplVar29 = (long *******)*pppppplVar24;
                  if (ppppppplVar29 == ppppppplVar21) {
                    pppppplVar41 = ppppppplVar29[1];
                    *pppppplVar24 = (long *****)pppppplVar41;
                    if (pppppplVar41 != (long ******)0x0) {
                      pppppplVar41[2] = (long *****)pppppplVar24;
                      ppppppplVar16 = (long *******)pppppplVar24[2];
                    }
                    ppppppplVar29[2] = (long ******)ppppppplVar16;
                    lVar45 = 0;
                    if (*ppppppplVar16 != pppppplVar24) {
                      lVar45 = 8;
                    }
                    *(long ********)((long)ppppppplVar16 + lVar45) = ppppppplVar29;
                    ppppppplVar29[1] = pppppplVar24;
                    pppppplVar24[2] = (long *****)ppppppplVar29;
                    ppppppplVar16 = (long *******)ppppppplVar29[2];
                    *(undefined1 *)(ppppppplVar29 + 3) = 1;
                    *(undefined1 *)(ppppppplVar16 + 3) = 0;
                    pppppplVar24 = ppppppplVar16[1];
                    pppppplVar41 = (long ******)*pppppplVar24;
                    ppppppplVar16[1] = pppppplVar41;
                  }
                  else {
                    *(undefined1 *)(pppppplVar24 + 3) = 1;
                    *(undefined1 *)(ppppppplVar16 + 3) = 0;
                    pppppplVar24 = ppppppplVar16[1];
                    pppppplVar41 = (long ******)*pppppplVar24;
                    ppppppplVar16[1] = pppppplVar41;
                  }
                  if (pppppplVar41 != (long ******)0x0) {
                    pppppplVar41[2] = (long *****)ppppppplVar16;
                  }
                  pppppplVar41 = ppppppplVar16[2];
                  pppppplVar24[2] = (long *****)pppppplVar41;
                  lVar45 = 0;
                  if ((long *******)*pppppplVar41 != ppppppplVar16) {
                    lVar45 = 8;
                  }
                  *(long *******)((long)pppppplVar41 + lVar45) = pppppplVar24;
                  *pppppplVar24 = (long *****)ppppppplVar16;
                  ppppppplVar16[2] = pppppplVar24;
                  goto LAB_1094272c8;
                }
LAB_109427160:
                *(undefined1 *)(pppppplVar24 + 3) = 1;
                bVar15 = ppppppplVar16 == ppppppplStack_190;
                *(bool *)(ppppppplVar16 + 3) = bVar15;
                *(byte *)pppppplVar17 = 1;
                ppppppplVar21 = ppppppplVar16;
                goto joined_r0x000109427158;
              }
              if ((ppppppplVar16[1] != (long ******)0x0) &&
                 (pppppplVar17 = ppppppplVar16[1] + 3, ((ulong)*pppppplVar17 & 1) == 0))
              goto LAB_109427160;
              pppppplVar17 = pppppplVar24;
              if ((long *******)*pppppplVar24 != ppppppplVar21) {
                pppppplVar17 = (long ******)pppppplVar24[1];
                ppppplVar33 = *pppppplVar17;
                pppppplVar24[1] = ppppplVar33;
                pppppplVar41 = pppppplVar24;
                if (ppppplVar33 != (long *****)0x0) {
                  ppppplVar33[2] = (long ****)pppppplVar24;
                  ppppppplVar16 = (long *******)pppppplVar24[2];
                  pppppplVar41 = *ppppppplVar16;
                }
                pppppplVar17[2] = (long *****)ppppppplVar16;
                lVar45 = 0;
                if (pppppplVar41 != pppppplVar24) {
                  lVar45 = 8;
                }
                *(long *******)((long)ppppppplVar16 + lVar45) = pppppplVar17;
                *pppppplVar17 = (long *****)pppppplVar24;
                pppppplVar24[2] = (long *****)pppppplVar17;
                ppppppplVar16 = (long *******)pppppplVar17[2];
                pppppplVar41 = *ppppppplVar16;
              }
              *(undefined1 *)(pppppplVar17 + 3) = 1;
              *(undefined1 *)(ppppppplVar16 + 3) = 0;
              pppppplVar24 = (long ******)pppppplVar41[1];
              *ppppppplVar16 = pppppplVar24;
              if (pppppplVar24 != (long ******)0x0) {
                pppppplVar24[2] = (long *****)ppppppplVar16;
              }
              pppppplVar24 = ppppppplVar16[2];
              pppppplVar41[2] = (long *****)pppppplVar24;
              lVar45 = 0;
              if ((long *******)*pppppplVar24 != ppppppplVar16) {
                lVar45 = 8;
              }
              *(long *******)((long)pppppplVar24 + lVar45) = pppppplVar41;
              pppppplVar41[1] = (long *****)ppppppplVar16;
              ppppppplVar16[2] = pppppplVar41;
LAB_1094272c8:
              lStack_188 = lStack_188 + 1;
              pppppplVar24 = ppppppplVar18[6];
              lVar45 = (long)pppppplVar24 - (long)pppppplVar42;
joined_r0x0001094271d8:
              if (lVar45 >> 2 < 1) goto joined_r0x000109427454;
              if (lVar45 <= (long)puVar46 - (long)puVar39) {
                if (pppppplVar42 != pppppplVar24) {
                  _memmove(puVar39,pppppplVar42,lVar45);
                }
                puVar39 = (uint *)((long)puVar39 + lVar45);
                lVar38 = lVar38 + 4;
                if (lVar38 == 0xc) break;
                goto LAB_109426ec0;
              }
              puVar43 = (uint *)((long)puVar39 - (long)puVar44);
              uVar36 = (lVar45 >> 2) + ((long)puVar43 >> 2);
              if (uVar36 >> 0x3e != 0) {
                FUN_10923f788();
                goto LAB_109427a58;
              }
              uVar30 = (long)puVar46 - (long)puVar44 >> 1;
              if (uVar30 <= uVar36) {
                uVar30 = uVar36;
              }
              if (0x7ffffffffffffffb < (ulong)((long)puVar46 - (long)puVar44)) {
                uVar30 = 0x3fffffffffffffff;
              }
              if (uVar30 == 0) {
                puVar19 = (uint *)0x0;
                puVar40 = (uint *)((long)puVar43 + lVar45);
                puVar46 = puVar43;
                if (lVar45 - 4U < 0x1c) goto LAB_109427414;
LAB_1094273b0:
                if ((ulong)(((long)puVar19 + (long)puVar39) - ((long)puVar44 + (long)pppppplVar42))
                    < 0x20) goto LAB_109427414;
                uVar36 = (lVar45 - 4U >> 2) + 1;
                uVar31 = uVar36 & 0x7ffffffffffffff8;
                pppppplVar24 = pppppplVar42 + 2;
                puVar34 = (undefined8 *)((long)puVar19 + (long)puVar43 + 0x10);
                uVar28 = uVar31;
                do {
                  ppppplVar49 = pppppplVar24[-2];
                  ppppplVar33 = *pppppplVar24;
                  ppppplVar9 = pppppplVar24[1];
                  puVar34[-1] = pppppplVar24[-1];
                  puVar34[-2] = ppppplVar49;
                  puVar34[1] = ppppplVar9;
                  *puVar34 = ppppplVar33;
                  pppppplVar24 = pppppplVar24 + 4;
                  puVar34 = puVar34 + 4;
                  uVar28 = uVar28 - 8;
                } while (uVar28 != 0);
                puVar46 = puVar46 + uVar31;
                pppppplVar42 = (long ******)((long)pppppplVar42 + uVar31 * 4);
                if (uVar36 != uVar31) goto LAB_109427414;
              }
              else {
                if (uVar30 >> 0x3e != 0) {
                  func_0x000104c4f740();
                  goto LAB_109427a58;
                }
                puVar19 = (uint *)(uVar30 << 2);
                __Znwm();
                puVar46 = (uint *)((long)puVar19 + (long)puVar43);
                puVar40 = (uint *)((long)puVar46 + lVar45);
                if (0x1b < lVar45 - 4U) goto LAB_1094273b0;
LAB_109427414:
                do {
                  puVar39 = puVar46 + 1;
                  *puVar46 = *(uint *)pppppplVar42;
                  puVar46 = puVar39;
                  pppppplVar42 = (long ******)((long)pppppplVar42 + 4);
                } while (puVar39 != puVar40);
              }
              puVar46 = puVar19 + uVar30;
              _memcpy(puVar19,puVar44,puVar43);
              puVar39 = puVar40;
              if (puVar44 != (uint *)0x0) {
                __ZdlPv(puVar44);
              }
            }
joined_r0x000109427454:
            puVar44 = puVar19;
            lVar38 = lVar38 + 4;
          } while (lVar38 != 0xc);
        }
        lVar23 = lVar23 + 4;
      } while (lVar23 != 0xc);
      if (puVar44 == puVar39) {
LAB_1094276ac:
        uStack_178 = puVar37[1];
        uStack_180 = *puVar37;
        uStack_170 = puVar37[2];
        uStack_168 = puVar37[3];
        dStack_160 = (double)puVar37[4];
        uStack_158 = puVar37[5];
        uStack_150 = puVar37[6];
        uStack_148 = puVar37[7];
        uStack_140 = puVar37[8];
        uStack_138 = puVar37[9];
        uStack_128 = puVar37[0xb];
        uStack_130 = puVar37[10];
        uStack_118 = puVar37[0xd];
        uStack_120 = puVar37[0xc];
        uStack_108 = puVar37[0xf];
        uStack_110 = puVar37[0xe];
        puStack_100 = (ulong *)puVar37[0x10];
        uStack_f8 = puVar37[0x11];
        ppuStack_e8 = (ulong **)puVar37[0x13];
        puStack_f0 = (ulong *)puVar37[0x12];
        puStack_d0 = (ulong *)0x0;
        uStack_c8 = 0;
        if (puVar37[0x13] != 0) {
          piVar1 = (int *)(puVar37[0x13] + 0x14);
          do {
            cVar8 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        puStack_e0 = &uStack_118;
        ppuStack_d8 = &puStack_d0;
        if (*(int *)((long)puVar37 + 100) < 3) {
          puStack_d0 = *(ulong **)puVar37[0x15];
          uStack_c8 = ((undefined8 *)puVar37[0x15])[1];
        }
        else {
          uStack_120 = uStack_120 & 0xffffffff;
          FUN_109a844cc(&uStack_120,*(undefined4 *)((long)puVar37 + 100),0,0,0);
          if (0 < uStack_120._4_4_) {
            lVar23 = 0;
            uVar36 = puVar37[0x14];
            uVar30 = puVar37[0x15];
            do {
              *(undefined4 *)((long)puStack_e0 + lVar23 * 4) = *(undefined4 *)(uVar36 + lVar23 * 4);
              ppuStack_d8[lVar23] = *(ulong **)(uVar30 + lVar23 * 8);
              lVar23 = lVar23 + 1;
            } while (lVar23 < uStack_120._4_4_);
          }
        }
        uStack_c0 = puVar37[0x18];
        uStack_180 = uStack_180 & 0xffffffffffffff00;
        uVar36 = param_1[1];
        if (uVar36 < (ulong)param_1[2]) {
          FUN_10942ca84(param_1,&uStack_180);
          puVar34 = (undefined8 *)(uVar36 + 0xd0);
        }
        else {
          puVar34 = param_1;
          FUN_10942cbb8(param_1,&uStack_180);
        }
        param_1[1] = puVar34;
        if (ppuStack_e8 != (ulong **)0x0) {
          piVar1 = (int *)((long)ppuStack_e8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar8 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = iVar7 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((iVar7 + -1 == 0) && (ppuStack_e8 != (ulong **)0x0)) {
            puVar35 = *(ulong **)((long)ppuStack_e8 + 8);
            if ((*(ulong **)((long)ppuStack_e8 + 8) == (ulong *)0x0) &&
               ((puVar35 = puStack_f0, puStack_f0 == (ulong *)0x0 &&
                (puVar35 = puRam000000011382bb80, puRam000000011382bb80 == (ulong *)0x0)))) {
              FUN_109a83e3c();
              puVar35 = puRam000000011382bb80;
            }
            (**(code **)(*puVar35 + 0x30))();
          }
        }
        ppuStack_e8 = (ulong **)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        puStack_100 = (ulong *)0x0;
        if (0 < uStack_120._4_4_) {
          lVar23 = 0;
          do {
            *(undefined4 *)((long)puStack_e0 + lVar23 * 4) = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < uStack_120._4_4_);
        }
        ppuVar25 = ppuStack_d8;
        if (ppuStack_d8 != &puStack_d0 && ppuStack_d8 != (ulong **)0x0) {
LAB_109427888:
          uStack_f8 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          _free(ppuVar25[-1]);
        }
      }
      else {
        lVar23 = *param_4;
        uVar32 = 0x7fffffff;
        puVar46 = puVar44;
        uVar27 = 0xffffffff;
        do {
          uVar6 = *puVar46;
          lVar38 = lVar23 + (long)(int)uVar6 * 0xb0;
          dVar47 = (double)puVar37[4] - *(double *)(lVar38 + 0x10);
          dVar48 = (double)puVar37[5] - *(double *)(lVar38 + 0x18);
          pdVar4 = (double *)(puVar37 + 10);
          if ((int)puVar37[7] <= *(int *)(lVar38 + 0x28)) {
            pdVar4 = (double *)(lVar38 + 0x40);
          }
          uVar50 = uVar32;
          uVar26 = uVar27;
          if (SQRT(dVar47 * dVar47 + dVar48 * dVar48) <= *pdVar4 * 5.0) {
            puVar34 = (undefined8 *)puVar37[0xe];
            uVar12 = *puVar34;
            uVar13 = puVar34[1];
            uVar10 = puVar34[2];
            uVar11 = puVar34[3];
            puVar35 = *(ulong **)(lVar23 + (long)(int)uVar6 * 0xb0 + 0x60);
            uVar36 = *puVar35;
            uVar30 = puVar35[1];
            uVar28 = puVar35[2];
            uVar31 = puVar35[3];
            uStack_180._0_1_ = (byte)uVar12;
            uStack_180._1_1_ = (byte)((ulong)uVar12 >> 8);
            uStack_180._2_1_ = (byte)((ulong)uVar12 >> 0x10);
            uStack_180._3_1_ = (byte)((ulong)uVar12 >> 0x18);
            uStack_180._4_1_ = (byte)((ulong)uVar12 >> 0x20);
            uStack_180._5_1_ = (byte)((ulong)uVar12 >> 0x28);
            uStack_180._6_1_ = (byte)((ulong)uVar12 >> 0x30);
            uStack_180._7_1_ = (byte)((ulong)uVar12 >> 0x38);
            uStack_178._0_1_ = (byte)uVar13;
            uStack_178._1_1_ = (byte)((ulong)uVar13 >> 8);
            uStack_178._2_1_ = (byte)((ulong)uVar13 >> 0x10);
            uStack_178._3_1_ = (byte)((ulong)uVar13 >> 0x18);
            uStack_178._4_1_ = (byte)((ulong)uVar13 >> 0x20);
            uStack_178._5_1_ = (byte)((ulong)uVar13 >> 0x28);
            uStack_178._6_1_ = (byte)((ulong)uVar13 >> 0x30);
            uStack_178._7_1_ = (byte)((ulong)uVar13 >> 0x38);
            uStack_170._0_1_ = (byte)uVar10;
            uStack_170._1_1_ = (byte)((ulong)uVar10 >> 8);
            uStack_170._2_1_ = (byte)((ulong)uVar10 >> 0x10);
            uStack_170._3_1_ = (byte)((ulong)uVar10 >> 0x18);
            uStack_170._4_1_ = (byte)((ulong)uVar10 >> 0x20);
            uStack_170._5_1_ = (byte)((ulong)uVar10 >> 0x28);
            uStack_170._6_1_ = (byte)((ulong)uVar10 >> 0x30);
            uStack_170._7_1_ = (byte)((ulong)uVar10 >> 0x38);
            uStack_168._0_1_ = (byte)uVar11;
            uStack_168._1_1_ = (byte)((ulong)uVar11 >> 8);
            uStack_168._2_1_ = (byte)((ulong)uVar11 >> 0x10);
            uStack_168._3_1_ = (byte)((ulong)uVar11 >> 0x18);
            uStack_168._4_1_ = (byte)((ulong)uVar11 >> 0x20);
            uStack_168._5_1_ = (byte)((ulong)uVar11 >> 0x28);
            uStack_168._6_1_ = (byte)((ulong)uVar11 >> 0x30);
            uStack_168._7_1_ = (byte)((ulong)uVar11 >> 0x38);
            uStack_b0._0_1_ = (byte)uVar36;
            uStack_b0._1_1_ = (byte)(uVar36 >> 8);
            uStack_b0._2_1_ = (byte)(uVar36 >> 0x10);
            uStack_b0._3_1_ = (byte)(uVar36 >> 0x18);
            uStack_b0._4_1_ = (byte)(uVar36 >> 0x20);
            uStack_b0._5_1_ = (byte)(uVar36 >> 0x28);
            uStack_b0._6_1_ = (byte)(uVar36 >> 0x30);
            uStack_b0._7_1_ = (byte)(uVar36 >> 0x38);
            uStack_a8._0_1_ = (byte)uVar30;
            uStack_a8._1_1_ = (byte)(uVar30 >> 8);
            uStack_a8._2_1_ = (byte)(uVar30 >> 0x10);
            uStack_a8._3_1_ = (byte)(uVar30 >> 0x18);
            uStack_a8._4_1_ = (byte)(uVar30 >> 0x20);
            uStack_a8._5_1_ = (byte)(uVar30 >> 0x28);
            uStack_a8._6_1_ = (byte)(uVar30 >> 0x30);
            uStack_a8._7_1_ = (byte)(uVar30 >> 0x38);
            uStack_a0._0_1_ = (byte)uVar28;
            uStack_a0._1_1_ = (byte)(uVar28 >> 8);
            uStack_a0._2_1_ = (byte)(uVar28 >> 0x10);
            uStack_a0._3_1_ = (byte)(uVar28 >> 0x18);
            uStack_a0._4_1_ = (byte)(uVar28 >> 0x20);
            uStack_a0._5_1_ = (byte)(uVar28 >> 0x28);
            uStack_a0._6_1_ = (byte)(uVar28 >> 0x30);
            uStack_a0._7_1_ = (byte)(uVar28 >> 0x38);
            uStack_98._0_1_ = (byte)uVar31;
            uStack_98._1_1_ = (byte)(uVar31 >> 8);
            uStack_98._2_1_ = (byte)(uVar31 >> 0x10);
            uStack_98._3_1_ = (byte)(uVar31 >> 0x18);
            uStack_98._4_1_ = (byte)(uVar31 >> 0x20);
            uStack_98._5_1_ = (byte)(uVar31 >> 0x28);
            uStack_98._6_1_ = (byte)(uVar31 >> 0x30);
            uStack_98._7_1_ = (byte)(uVar31 >> 0x38);
            uVar50 = (uint)(ushort)((ushort)(byte)POPCOUNT((byte)uStack_b0 ^ (byte)uStack_180) +
                                   (ushort)(byte)POPCOUNT(uStack_b0._2_1_ ^ uStack_180._2_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_b0._4_1_ ^ uStack_180._4_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_b0._6_1_ ^ uStack_180._6_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT((byte)uStack_a8 ^ (byte)uStack_178) +
                                   (ushort)(byte)POPCOUNT(uStack_a8._2_1_ ^ uStack_178._2_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a8._4_1_ ^ uStack_178._4_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a8._6_1_ ^ uStack_178._6_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT((byte)uStack_a0 ^ (byte)uStack_170) +
                                   (ushort)(byte)POPCOUNT(uStack_a0._2_1_ ^ uStack_170._2_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a0._4_1_ ^ uStack_170._4_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a0._6_1_ ^ uStack_170._6_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT((byte)uStack_98 ^ (byte)uStack_168) +
                                   (ushort)(byte)POPCOUNT(uStack_98._2_1_ ^ uStack_168._2_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_98._4_1_ ^ uStack_168._4_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_98._6_1_ ^ uStack_168._6_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_b0._1_1_ ^ uStack_180._1_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_b0._3_1_ ^ uStack_180._3_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_b0._5_1_ ^ uStack_180._5_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_b0._7_1_ ^ uStack_180._7_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a8._1_1_ ^ uStack_178._1_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a8._3_1_ ^ uStack_178._3_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a8._5_1_ ^ uStack_178._5_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a8._7_1_ ^ uStack_178._7_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a0._1_1_ ^ uStack_170._1_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a0._3_1_ ^ uStack_170._3_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_a0._5_1_ ^ uStack_170._5_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_a0._7_1_ ^ uStack_170._7_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_98._1_1_ ^ uStack_168._1_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_98._3_1_ ^ uStack_168._3_1_)) +
                     (uint)(ushort)((ushort)(byte)POPCOUNT(uStack_98._5_1_ ^ uStack_168._5_1_) +
                                   (ushort)(byte)POPCOUNT(uStack_98._7_1_ ^ uStack_168._7_1_));
            uVar20 = uVar32;
            if (0x4f < uVar32) {
              uVar20 = 0x50;
            }
            uVar26 = uVar6;
            uStack_b0 = uVar36;
            uStack_a8 = uVar30;
            uStack_a0 = uVar28;
            uStack_98 = uVar31;
            if (uVar20 <= uVar50) {
              uVar50 = uVar32;
              uVar26 = uVar27;
            }
          }
          uVar32 = uVar50;
          puVar46 = puVar46 + 1;
          uVar27 = uVar26;
        } while (puVar46 != puVar39);
        if ((int)uVar26 < 0) goto LAB_1094276ac;
        puVar35 = (ulong *)(lVar23 + (ulong)uVar26 * 0xb0);
        uStack_178 = puVar35[1];
        uStack_180 = *puVar35;
        uStack_168 = puVar35[3];
        uStack_170 = puVar35[2];
        uStack_158 = puVar35[5];
        dStack_160 = (double)puVar35[4];
        uStack_150 = puVar35[6];
        uStack_148 = puVar35[7];
        uStack_140 = puVar35[8];
        uStack_138 = puVar35[9];
        uStack_128 = puVar35[0xb];
        uStack_130 = puVar35[10];
        uStack_118 = puVar35[0xd];
        uStack_120 = puVar35[0xc];
        uStack_108 = puVar35[0xf];
        uStack_110 = puVar35[0xe];
        uStack_f8 = puVar35[0x11];
        puStack_100 = (ulong *)puVar35[0x10];
        puStack_e0 = (ulong *)0x0;
        ppuStack_d8 = (ulong **)0x0;
        if (puVar35[0x11] != 0) {
          piVar1 = (int *)(puVar35[0x11] + 0x14);
          do {
            cVar8 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        puStack_f0 = &uStack_128;
        ppuStack_e8 = &puStack_e0;
        if (*(int *)((long)puVar35 + 0x54) < 3) {
          puStack_e0 = *(ulong **)puVar35[0x13];
          ppuStack_d8 = (ulong **)((undefined8 *)puVar35[0x13])[1];
        }
        else {
          uStack_130 = uStack_130 & 0xffffffff;
          FUN_109a844cc(&uStack_130,*(undefined4 *)((long)puVar35 + 0x54),0,0,0);
          if (0 < uStack_130._4_4_) {
            lVar23 = 0;
            uVar36 = puVar35[0x12];
            uVar30 = puVar35[0x13];
            do {
              *(undefined4 *)((long)puStack_f0 + lVar23 * 4) = *(undefined4 *)(uVar36 + lVar23 * 4);
              ppuStack_e8[lVar23] = *(ulong **)(uVar30 + lVar23 * 8);
              lVar23 = lVar23 + 1;
            } while (lVar23 < uStack_130._4_4_);
          }
        }
        uStack_b0 = puVar37[1];
        uVar36 = param_1[1];
        if (uVar36 < (ulong)param_1[2]) {
          FUN_109430eb0(param_1,&uStack_b0,&uStack_180);
          puVar34 = (undefined8 *)(uVar36 + 0xd0);
        }
        else {
          puVar34 = param_1;
          FUN_109430fec(param_1,&uStack_b0,&uStack_180);
        }
        param_1[1] = puVar34;
        if (uStack_f8 != 0) {
          piVar1 = (int *)(uStack_f8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar8 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = iVar7 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((iVar7 + -1 == 0) && (uStack_f8 != 0)) {
            puVar35 = *(ulong **)(uStack_f8 + 8);
            if ((*(ulong **)(uStack_f8 + 8) == (ulong *)0x0) &&
               ((puVar35 = puStack_100, puStack_100 == (ulong *)0x0 &&
                (puVar35 = puRam000000011382bb80, puRam000000011382bb80 == (ulong *)0x0)))) {
              FUN_109a83e3c();
              puVar35 = puRam000000011382bb80;
            }
            (**(code **)(*puVar35 + 0x30))();
          }
        }
        uStack_f8 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        if (0 < uStack_130._4_4_) {
          lVar23 = 0;
          do {
            *(undefined4 *)((long)puStack_f0 + lVar23 * 4) = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < uStack_130._4_4_);
        }
        ppuVar25 = ppuStack_e8;
        if (ppuStack_e8 != &puStack_e0 && ppuStack_e8 != (ulong **)0x0) goto LAB_109427888;
      }
      if (puVar44 != (uint *)0x0) {
        __ZdlPv(puVar44);
      }
      puVar37 = puVar37 + 0x1a;
    } while (puVar37 != puVar5);
  }
  FUN_109431238(&ppppppplStack_198,ppppppplStack_190);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109427a54:
  FUN_10923f788();
LAB_109427a58:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x109427a5c);
  (*pcVar14)();
}



/* Entry: 109427b00; end: 109427bcf;  */

long FUN_109427b00(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) && (*(long *)(param_1 + 0x98) != 0)) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x98) + 8);
      if ((plVar5 == (long *)0x0) &&
         ((plVar5 = *(long **)(param_1 + 0x90), *(long **)(param_1 + 0x90) == (long *)0x0 &&
          (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar5 = plRam000000011382bb80;
      }
      (**(code **)(*plVar5 + 0x30))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 100));
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  if (lVar6 != param_1 + 0xb0 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  return param_1;
}



/* Entry: 109427bd0; end: 109427be3;  */

void FUN_109427bd0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  plVar5 = (long *)&UNK_10f56d48b;
  func_0x000104c4f6cc();
  plVar9 = (long *)*plVar5;
  lVar10 = *plVar9;
  if (lVar10 != 0) {
    lVar11 = plVar9[1];
    lVar7 = lVar10;
    if (lVar11 != lVar10) {
      do {
        if (*(long *)(lVar11 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar11 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar11 + -0x38) != 0)) {
            plVar6 = *(long **)(*(long *)(lVar11 + -0x38) + 8);
            if ((plVar6 == (long *)0x0) &&
               ((plVar6 = *(long **)(lVar11 + -0x40), *(long **)(lVar11 + -0x40) == (long *)0x0 &&
                (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar6 = plRam000000011382bb80;
            }
            (**(code **)(*plVar6 + 0x30))();
          }
        }
        *(undefined8 *)(lVar11 + -0x38) = 0;
        *(undefined8 *)(lVar11 + -0x58) = 0;
        *(undefined8 *)(lVar11 + -0x60) = 0;
        *(undefined8 *)(lVar11 + -0x48) = 0;
        *(undefined8 *)(lVar11 + -0x50) = 0;
        if (0 < *(int *)(lVar11 + -0x6c)) {
          lVar7 = 0;
          lVar8 = *(long *)(lVar11 + -0x30);
          do {
            *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar11 + -0x6c));
        }
        lVar7 = *(long *)(lVar11 + -0x28);
        if (lVar7 != lVar11 + -0x20 && lVar7 != 0) {
          _free(*(undefined8 *)(lVar7 + -8));
        }
        lVar11 = lVar11 + -0xc0;
      } while (lVar11 != lVar10);
      lVar7 = *(long *)*plVar5;
    }
    plVar9[1] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar7);
    return;
  }
  return;
}



/* Entry: 109427be4; end: 109427d0f;  */

void FUN_109427be4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar8 = (long *)*param_1;
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    lVar10 = plVar8[1];
    lVar6 = lVar9;
    if (lVar10 != lVar9) {
      do {
        if (*(long *)(lVar10 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar10 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar10 + -0x38) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar10 + -0x38) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar10 + -0x40), *(long **)(lVar10 + -0x40) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined8 *)(lVar10 + -0x58) = 0;
        *(undefined8 *)(lVar10 + -0x60) = 0;
        *(undefined8 *)(lVar10 + -0x48) = 0;
        *(undefined8 *)(lVar10 + -0x50) = 0;
        if (0 < *(int *)(lVar10 + -0x6c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar10 + -0x30);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar10 + -0x6c));
        }
        lVar6 = *(long *)(lVar10 + -0x28);
        if (lVar6 != lVar10 + -0x20 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar10 = lVar10 + -0xc0;
      } while (lVar10 != lVar9);
      lVar6 = *(long *)*param_1;
    }
    plVar8[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar6);
    return;
  }
  return;
}



/* Entry: 109427d10; end: 109427db3;  */

void FUN_109427d10(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    if (plVar2[1] != lVar3) {
      lVar4 = plVar2[1] + -0x20;
      do {
        lStack_38 = lVar4;
        FUN_10942a570(&lStack_38);
        lStack_38 = lVar4 + -0x18;
        FUN_109427be4(&lStack_38);
        lVar1 = *(long *)(lVar4 + -0x20);
        *(undefined8 *)(lVar4 + -0x20) = 0;
        if (lVar1 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        lVar1 = lVar4 + -0x28;
        lVar4 = lVar4 + -0x48;
      } while (lVar1 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 109427db4; end: 109427ec7;  */

void FUN_109427db4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar9 = param_1[1];
    lVar6 = lVar8;
    if (lVar9 != lVar8) {
      do {
        if (*(long *)(lVar9 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar9 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x38) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar9 + -0x38) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar9 + -0x40), *(long **)(lVar9 + -0x40) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar9 + -0x38) = 0;
        *(undefined8 *)(lVar9 + -0x58) = 0;
        *(undefined8 *)(lVar9 + -0x60) = 0;
        *(undefined8 *)(lVar9 + -0x48) = 0;
        *(undefined8 *)(lVar9 + -0x50) = 0;
        if (0 < *(int *)(lVar9 + -0x6c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar9 + -0x30);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar9 + -0x6c));
        }
        lVar6 = *(long *)(lVar9 + -0x28);
        if (lVar6 != lVar9 + -0x20 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar9 = lVar9 + -0xc0;
      } while (lVar9 != lVar8);
      lVar6 = *param_1;
    }
    param_1[1] = lVar8;
    _free(lVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109427ec8; end: 10942803b;  */

undefined8 *
FUN_109427ec8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    uVar11 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar11;
    uVar11 = param_2[2];
    param_4[3] = param_2[3];
    param_4[2] = uVar11;
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    uVar13 = param_2[6];
    uVar15 = param_2[9];
    uVar14 = param_2[8];
    param_4[7] = param_2[7];
    param_4[6] = uVar13;
    param_4[9] = uVar15;
    param_4[8] = uVar14;
    param_4[5] = uVar12;
    param_4[4] = uVar11;
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    uVar13 = param_2[0xc];
    param_4[0xd] = param_2[0xd];
    param_4[0xc] = uVar13;
    uVar13 = param_2[0xe];
    param_4[0xf] = param_2[0xf];
    param_4[0xe] = uVar13;
    lVar9 = param_2[0x11];
    uVar14 = param_2[0x11];
    uVar13 = param_2[0x10];
    param_4[0x14] = 0;
    param_4[0x11] = uVar14;
    param_4[0x10] = uVar13;
    param_4[0x12] = param_4 + 0xb;
    param_4[0x13] = param_4 + 0x14;
    param_4[0x15] = 0;
    param_4[0xb] = uVar12;
    param_4[10] = uVar11;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)param_2 + 0x54) < 3) {
      puVar8 = (undefined8 *)param_2[0x13];
      puVar10 = (undefined8 *)param_4[0x13];
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
    }
    else {
      *(undefined4 *)((long)param_4 + 0x54) = 0;
      FUN_109a844cc(param_4 + 10,*(undefined4 *)((long)param_2 + 0x54),0,0,0);
      if (0 < *(int *)((long)param_4 + 0x54)) {
        lVar9 = 0;
        lVar2 = param_2[0x12];
        lVar4 = param_2[0x13];
        lVar3 = param_4[0x12];
        lVar5 = param_4[0x13];
        do {
          *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
          *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_4 + 0x54));
      }
    }
    *(undefined4 *)(param_4 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    param_4 = param_4 + 0x18;
  }
  return param_4;
}



/* Entry: 10942803c; end: 109428143;  */

long FUN_10942803c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar9 = **(long **)(param_1 + 8);
    for (lVar8 = **(long **)(param_1 + 0x10); lVar8 != lVar9; lVar8 = lVar8 + -0xc0) {
      if (*(long *)(lVar8 + -0x38) != 0) {
        piVar1 = (int *)(*(long *)(lVar8 + -0x38) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar8 + -0x38) != 0)) {
          plVar5 = *(long **)(*(long *)(lVar8 + -0x38) + 8);
          if ((plVar5 == (long *)0x0) &&
             ((plVar5 = *(long **)(lVar8 + -0x40), *(long **)(lVar8 + -0x40) == (long *)0x0 &&
              (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar5 = plRam000000011382bb80;
          }
          (**(code **)(*plVar5 + 0x30))();
        }
      }
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined8 *)(lVar8 + -0x58) = 0;
      *(undefined8 *)(lVar8 + -0x60) = 0;
      *(undefined8 *)(lVar8 + -0x48) = 0;
      *(undefined8 *)(lVar8 + -0x50) = 0;
      if (0 < *(int *)(lVar8 + -0x6c)) {
        lVar6 = 0;
        lVar7 = *(long *)(lVar8 + -0x30);
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar8 + -0x6c));
      }
      lVar6 = *(long *)(lVar8 + -0x28);
      if (lVar6 != lVar8 + -0x20 && lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
    }
  }
  return param_1;
}



/* Entry: 109428144; end: 109428157;  */

void FUN_109428144(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  func_0x000104c4f6cc(&UNK_10f56d48b);
  if (param_2 < 0x155555555555556) {
    lVar6 = param_2 * 0xc0;
    _malloc();
    if ((param_2 == 0) || (lVar6 != 0)) {
      return;
    }
  }
  plVar7 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar11 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  puVar10 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  puVar17 = (undefined8 *)*plVar7;
  plVar9 = plVar7;
  if (param_4 <= (ulong)((plVar7[2] - (long)puVar17 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
    puVar15 = (undefined8 *)plVar7[1];
    if (param_4 <= (ulong)(((long)puVar15 - (long)puVar17 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
      if (puVar11 != puVar10) {
        do {
          uVar18 = *puVar11;
          puVar17[1] = puVar11[1];
          *puVar17 = uVar18;
          FUN_10939da2c(puVar17 + 2,puVar11 + 2);
          puVar17[0x18] = puVar11[0x18];
          puVar17 = puVar17 + 0x1a;
          puVar11 = puVar11 + 0x1a;
        } while (puVar11 != puVar10);
        puVar15 = (undefined8 *)plVar7[1];
      }
      for (; puVar15 != puVar17; puVar15 = puVar15 + -0x1a) {
        if (puVar15[-7] != 0) {
          piVar1 = (int *)(puVar15[-7] + 0x14);
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
            if (puVar15[-7] != 0) {
              plVar9 = *(long **)(puVar15[-7] + 8);
              if (((plVar9 == (long *)0x0) &&
                  (plVar9 = (long *)puVar15[-8], (long *)puVar15[-8] == (long *)0x0)) &&
                 (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
                FUN_109a83e3c();
                plVar9 = plRam000000011382bb80;
              }
              (**(code **)(*plVar9 + 0x30))();
            }
            puVar15[-7] = 0;
          }
        }
        puVar15[-7] = 0;
        puVar15[-0xb] = 0;
        puVar15[-0xc] = 0;
        puVar15[-9] = 0;
        puVar15[-10] = 0;
        if (0 < *(int *)((long)puVar15 + -0x6c)) {
          lVar6 = 0;
          lVar12 = puVar15[-6];
          do {
            *(undefined4 *)(lVar12 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)((long)puVar15 + -0x6c));
        }
        puVar11 = (undefined8 *)puVar15[-5];
        if (puVar11 != puVar15 + -4 && puVar11 != (undefined8 *)0x0) {
          _free(puVar11[-1]);
        }
      }
      plVar7[1] = (long)puVar17;
      return;
    }
    puVar2 = (undefined8 *)((long)puVar11 + ((long)puVar15 - (long)puVar17));
    if (puVar15 != puVar17) {
      do {
        uVar18 = *puVar11;
        puVar17[1] = puVar11[1];
        *puVar17 = uVar18;
        FUN_10939da2c(puVar17 + 2,puVar11 + 2);
        puVar17[0x18] = puVar11[0x18];
        puVar11 = puVar11 + 0x1a;
        puVar17 = puVar17 + 0x1a;
      } while (puVar11 != puVar2);
      puVar15 = (undefined8 *)plVar7[1];
    }
    FUN_10942857c(plVar7,puVar2,puVar10,puVar15);
LAB_109428314:
    plVar7[1] = (long)plVar9;
    return;
  }
  plVar8 = plVar7;
  FUN_109428468();
  if (param_4 < 0x13b13b13b13b13c) {
    lVar6 = plVar7[2] - *plVar7 >> 4;
    uVar13 = lVar6 * -0x6276276276276276;
    if (uVar13 < param_4 || uVar13 - param_4 == 0) {
      uVar13 = param_4;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x13b13b13b13b13b;
    }
    if (uVar13 < 0x13b13b13b13b13c) {
      plVar8 = plVar7;
      FUN_109428814(plVar7,uVar13,0);
      *plVar7 = (long)plVar8;
      plVar7[1] = (long)plVar8;
      plVar7[2] = (long)(plVar8 + uVar13 * 0x1a);
      FUN_10942857c(plVar7,puVar11,puVar10,plVar8);
      goto LAB_109428314;
    }
  }
  FUN_109428800();
  plVar7[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  plVar7[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  func_0x000104bd46a0();
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    lVar16 = plVar8[1];
    lVar12 = lVar6;
    if (lVar16 != lVar6) {
      do {
        if (*(long *)(lVar16 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar16 + -0x38) + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((iVar3 + -1 == 0) && (*(long *)(lVar16 + -0x38) != 0)) {
            plVar9 = *(long **)(*(long *)(lVar16 + -0x38) + 8);
            if ((plVar9 == (long *)0x0) &&
               ((plVar9 = *(long **)(lVar16 + -0x40), *(long **)(lVar16 + -0x40) == (long *)0x0 &&
                (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar9 = plRam000000011382bb80;
            }
            (**(code **)(*plVar9 + 0x30))();
          }
        }
        *(undefined8 *)(lVar16 + -0x38) = 0;
        *(undefined8 *)(lVar16 + -0x58) = 0;
        *(undefined8 *)(lVar16 + -0x60) = 0;
        *(undefined8 *)(lVar16 + -0x48) = 0;
        *(undefined8 *)(lVar16 + -0x50) = 0;
        if (0 < *(int *)(lVar16 + -0x6c)) {
          lVar12 = 0;
          lVar14 = *(long *)(lVar16 + -0x30);
          do {
            *(undefined4 *)(lVar14 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar16 + -0x6c));
        }
        lVar12 = *(long *)(lVar16 + -0x28);
        if (lVar12 != lVar16 + -0x20 && lVar12 != 0) {
          _free(*(undefined8 *)(lVar12 + -8));
        }
        lVar16 = lVar16 + -0xd0;
      } while (lVar16 != lVar6);
      lVar12 = *plVar8;
    }
    plVar8[1] = lVar6;
    _free(lVar12);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
  }
  return;
}



/* Entry: 109428158; end: 1094281bb;  */

void FUN_109428158(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  if (param_2 < 0x155555555555556) {
    lVar6 = param_2 * 0xc0;
    _malloc();
    if ((param_2 == 0) || (lVar6 != 0)) {
      return;
    }
  }
  plVar7 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar11 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  puVar10 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  puVar17 = (undefined8 *)*plVar7;
  plVar9 = plVar7;
  if (param_4 <= (ulong)((plVar7[2] - (long)puVar17 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
    puVar15 = (undefined8 *)plVar7[1];
    if (param_4 <= (ulong)(((long)puVar15 - (long)puVar17 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
      if (puVar11 != puVar10) {
        do {
          uVar18 = *puVar11;
          puVar17[1] = puVar11[1];
          *puVar17 = uVar18;
          FUN_10939da2c(puVar17 + 2,puVar11 + 2);
          puVar17[0x18] = puVar11[0x18];
          puVar17 = puVar17 + 0x1a;
          puVar11 = puVar11 + 0x1a;
        } while (puVar11 != puVar10);
        puVar15 = (undefined8 *)plVar7[1];
      }
      for (; puVar15 != puVar17; puVar15 = puVar15 + -0x1a) {
        if (puVar15[-7] != 0) {
          piVar1 = (int *)(puVar15[-7] + 0x14);
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
            if (puVar15[-7] != 0) {
              plVar9 = *(long **)(puVar15[-7] + 8);
              if (((plVar9 == (long *)0x0) &&
                  (plVar9 = (long *)puVar15[-8], (long *)puVar15[-8] == (long *)0x0)) &&
                 (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
                FUN_109a83e3c();
                plVar9 = plRam000000011382bb80;
              }
              (**(code **)(*plVar9 + 0x30))();
            }
            puVar15[-7] = 0;
          }
        }
        puVar15[-7] = 0;
        puVar15[-0xb] = 0;
        puVar15[-0xc] = 0;
        puVar15[-9] = 0;
        puVar15[-10] = 0;
        if (0 < *(int *)((long)puVar15 + -0x6c)) {
          lVar6 = 0;
          lVar12 = puVar15[-6];
          do {
            *(undefined4 *)(lVar12 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)((long)puVar15 + -0x6c));
        }
        puVar11 = (undefined8 *)puVar15[-5];
        if (puVar11 != puVar15 + -4 && puVar11 != (undefined8 *)0x0) {
          _free(puVar11[-1]);
        }
      }
      plVar7[1] = (long)puVar17;
      return;
    }
    puVar2 = (undefined8 *)((long)puVar11 + ((long)puVar15 - (long)puVar17));
    if (puVar15 != puVar17) {
      do {
        uVar18 = *puVar11;
        puVar17[1] = puVar11[1];
        *puVar17 = uVar18;
        FUN_10939da2c(puVar17 + 2,puVar11 + 2);
        puVar17[0x18] = puVar11[0x18];
        puVar11 = puVar11 + 0x1a;
        puVar17 = puVar17 + 0x1a;
      } while (puVar11 != puVar2);
      puVar15 = (undefined8 *)plVar7[1];
    }
    FUN_10942857c(plVar7,puVar2,puVar10,puVar15);
LAB_109428314:
    plVar7[1] = (long)plVar9;
    return;
  }
  plVar8 = plVar7;
  FUN_109428468();
  if (param_4 < 0x13b13b13b13b13c) {
    lVar6 = plVar7[2] - *plVar7 >> 4;
    uVar13 = lVar6 * -0x6276276276276276;
    if (uVar13 < param_4 || uVar13 - param_4 == 0) {
      uVar13 = param_4;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x13b13b13b13b13b;
    }
    if (uVar13 < 0x13b13b13b13b13c) {
      plVar8 = plVar7;
      FUN_109428814(plVar7,uVar13,0);
      *plVar7 = (long)plVar8;
      plVar7[1] = (long)plVar8;
      plVar7[2] = (long)(plVar8 + uVar13 * 0x1a);
      FUN_10942857c(plVar7,puVar11,puVar10,plVar8);
      goto LAB_109428314;
    }
  }
  FUN_109428800();
  plVar7[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  plVar7[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  func_0x000104bd46a0();
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    lVar16 = plVar8[1];
    lVar12 = lVar6;
    if (lVar16 != lVar6) {
      do {
        if (*(long *)(lVar16 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar16 + -0x38) + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((iVar3 + -1 == 0) && (*(long *)(lVar16 + -0x38) != 0)) {
            plVar9 = *(long **)(*(long *)(lVar16 + -0x38) + 8);
            if ((plVar9 == (long *)0x0) &&
               ((plVar9 = *(long **)(lVar16 + -0x40), *(long **)(lVar16 + -0x40) == (long *)0x0 &&
                (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar9 = plRam000000011382bb80;
            }
            (**(code **)(*plVar9 + 0x30))();
          }
        }
        *(undefined8 *)(lVar16 + -0x38) = 0;
        *(undefined8 *)(lVar16 + -0x58) = 0;
        *(undefined8 *)(lVar16 + -0x60) = 0;
        *(undefined8 *)(lVar16 + -0x48) = 0;
        *(undefined8 *)(lVar16 + -0x50) = 0;
        if (0 < *(int *)(lVar16 + -0x6c)) {
          lVar12 = 0;
          lVar14 = *(long *)(lVar16 + -0x30);
          do {
            *(undefined4 *)(lVar14 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar16 + -0x6c));
        }
        lVar12 = *(long *)(lVar16 + -0x28);
        if (lVar12 != lVar16 + -0x20 && lVar12 != 0) {
          _free(*(undefined8 *)(lVar12 + -8));
        }
        lVar16 = lVar16 + -0xd0;
      } while (lVar16 != lVar6);
      lVar12 = *plVar8;
    }
    plVar8[1] = lVar6;
    _free(lVar12);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
  }
  return;
}



/* Entry: 1094281bc; end: 109428467;  */

void FUN_1094281bc(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar14 = (undefined8 *)*param_1;
  plVar6 = param_1;
  if (param_4 <= (ulong)((param_1[2] - (long)puVar14 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
    puVar12 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)(((long)puVar12 - (long)puVar14 >> 4) * 0x4ec4ec4ec4ec4ec5)) {
      if (param_2 != param_3) {
        do {
          uVar15 = *param_2;
          puVar14[1] = param_2[1];
          *puVar14 = uVar15;
          FUN_10939da2c(puVar14 + 2,param_2 + 2);
          puVar14[0x18] = param_2[0x18];
          puVar14 = puVar14 + 0x1a;
          param_2 = param_2 + 0x1a;
        } while (param_2 != param_3);
        puVar12 = (undefined8 *)param_1[1];
      }
      for (; puVar12 != puVar14; puVar12 = puVar12 + -0x1a) {
        if (puVar12[-7] != 0) {
          piVar1 = (int *)(puVar12[-7] + 0x14);
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
            if (puVar12[-7] != 0) {
              plVar6 = *(long **)(puVar12[-7] + 8);
              if (((plVar6 == (long *)0x0) &&
                  (plVar6 = (long *)puVar12[-8], (long *)puVar12[-8] == (long *)0x0)) &&
                 (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
                FUN_109a83e3c();
                plVar6 = plRam000000011382bb80;
              }
              (**(code **)(*plVar6 + 0x30))();
            }
            puVar12[-7] = 0;
          }
        }
        puVar12[-7] = 0;
        puVar12[-0xb] = 0;
        puVar12[-0xc] = 0;
        puVar12[-9] = 0;
        puVar12[-10] = 0;
        if (0 < *(int *)((long)puVar12 + -0x6c)) {
          lVar7 = 0;
          lVar9 = puVar12[-6];
          do {
            *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)puVar12 + -0x6c));
        }
        puVar8 = (undefined8 *)puVar12[-5];
        if (puVar8 != puVar12 + -4 && puVar8 != (undefined8 *)0x0) {
          _free(puVar8[-1]);
        }
      }
      param_1[1] = (long)puVar14;
      return;
    }
    puVar8 = (undefined8 *)((long)param_2 + ((long)puVar12 - (long)puVar14));
    if (puVar12 != puVar14) {
      do {
        uVar15 = *param_2;
        puVar14[1] = param_2[1];
        *puVar14 = uVar15;
        FUN_10939da2c(puVar14 + 2,param_2 + 2);
        puVar14[0x18] = param_2[0x18];
        param_2 = param_2 + 0x1a;
        puVar14 = puVar14 + 0x1a;
      } while (param_2 != puVar8);
      puVar12 = (undefined8 *)param_1[1];
    }
    FUN_10942857c(param_1,puVar8,param_3,puVar12);
LAB_109428314:
    param_1[1] = (long)plVar6;
    return;
  }
  plVar5 = param_1;
  FUN_109428468();
  if (param_4 < 0x13b13b13b13b13c) {
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar10 = lVar7 * -0x6276276276276276;
    if (uVar10 < param_4 || uVar10 - param_4 == 0) {
      uVar10 = param_4;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
      uVar10 = 0x13b13b13b13b13b;
    }
    if (uVar10 < 0x13b13b13b13b13c) {
      plVar5 = param_1;
      FUN_109428814(param_1,uVar10,0);
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar5;
      param_1[2] = (long)(plVar5 + uVar10 * 0x1a);
      FUN_10942857c(param_1,param_2,param_3,plVar5);
      goto LAB_109428314;
    }
  }
  FUN_109428800();
  param_1[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  param_1[1] = 0x13b13b13b13b13b;
  __Unwind_Resume();
  func_0x000104bd46a0();
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    lVar13 = plVar5[1];
    lVar9 = lVar7;
    if (lVar13 != lVar7) {
      do {
        if (*(long *)(lVar13 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar13 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar13 + -0x38) != 0)) {
            plVar6 = *(long **)(*(long *)(lVar13 + -0x38) + 8);
            if ((plVar6 == (long *)0x0) &&
               ((plVar6 = *(long **)(lVar13 + -0x40), *(long **)(lVar13 + -0x40) == (long *)0x0 &&
                (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar6 = plRam000000011382bb80;
            }
            (**(code **)(*plVar6 + 0x30))();
          }
        }
        *(undefined8 *)(lVar13 + -0x38) = 0;
        *(undefined8 *)(lVar13 + -0x58) = 0;
        *(undefined8 *)(lVar13 + -0x60) = 0;
        *(undefined8 *)(lVar13 + -0x48) = 0;
        *(undefined8 *)(lVar13 + -0x50) = 0;
        if (0 < *(int *)(lVar13 + -0x6c)) {
          lVar9 = 0;
          lVar11 = *(long *)(lVar13 + -0x30);
          do {
            *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar13 + -0x6c));
        }
        lVar9 = *(long *)(lVar13 + -0x28);
        if (lVar9 != lVar13 + -0x20 && lVar9 != 0) {
          _free(*(undefined8 *)(lVar9 + -8));
        }
        lVar13 = lVar13 + -0xd0;
      } while (lVar13 != lVar7);
      lVar9 = *plVar5;
    }
    plVar5[1] = lVar7;
    _free(lVar9);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
  }
  return;
}



/* Entry: 109428468; end: 10942857b;  */

void FUN_109428468(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar9 = param_1[1];
    lVar6 = lVar8;
    if (lVar9 != lVar8) {
      do {
        if (*(long *)(lVar9 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar9 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x38) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar9 + -0x38) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar9 + -0x40), *(long **)(lVar9 + -0x40) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar9 + -0x38) = 0;
        *(undefined8 *)(lVar9 + -0x58) = 0;
        *(undefined8 *)(lVar9 + -0x60) = 0;
        *(undefined8 *)(lVar9 + -0x48) = 0;
        *(undefined8 *)(lVar9 + -0x50) = 0;
        if (0 < *(int *)(lVar9 + -0x6c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar9 + -0x30);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar9 + -0x6c));
        }
        lVar6 = *(long *)(lVar9 + -0x28);
        if (lVar6 != lVar9 + -0x20 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar9 = lVar9 + -0xd0;
      } while (lVar9 != lVar8);
      lVar6 = *param_1;
    }
    param_1[1] = lVar8;
    _free(lVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10942857c; end: 1094286f7;  */

undefined8 *
FUN_10942857c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x1a) {
    uVar11 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar11;
    uVar11 = param_2[2];
    param_4[3] = param_2[3];
    param_4[2] = uVar11;
    uVar11 = param_2[4];
    param_4[5] = param_2[5];
    param_4[4] = uVar11;
    uVar12 = param_2[7];
    uVar11 = param_2[6];
    uVar13 = param_2[8];
    uVar15 = param_2[0xb];
    uVar14 = param_2[10];
    param_4[9] = param_2[9];
    param_4[8] = uVar13;
    param_4[0xb] = uVar15;
    param_4[10] = uVar14;
    param_4[7] = uVar12;
    param_4[6] = uVar11;
    uVar12 = param_2[0xd];
    uVar11 = param_2[0xc];
    uVar13 = param_2[0xe];
    param_4[0xf] = param_2[0xf];
    param_4[0xe] = uVar13;
    uVar13 = param_2[0x10];
    param_4[0x11] = param_2[0x11];
    param_4[0x10] = uVar13;
    lVar9 = param_2[0x13];
    uVar14 = param_2[0x13];
    uVar13 = param_2[0x12];
    param_4[0x16] = 0;
    param_4[0x13] = uVar14;
    param_4[0x12] = uVar13;
    param_4[0x14] = param_4 + 0xd;
    param_4[0x15] = param_4 + 0x16;
    param_4[0x17] = 0;
    param_4[0xd] = uVar12;
    param_4[0xc] = uVar11;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)param_2 + 100) < 3) {
      puVar8 = (undefined8 *)param_2[0x15];
      puVar10 = (undefined8 *)param_4[0x15];
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
    }
    else {
      *(undefined4 *)((long)param_4 + 100) = 0;
      FUN_109a844cc(param_4 + 0xc,*(undefined4 *)((long)param_2 + 100),0,0,0);
      if (0 < *(int *)((long)param_4 + 100)) {
        lVar9 = 0;
        lVar2 = param_2[0x14];
        lVar4 = param_2[0x15];
        lVar3 = param_4[0x14];
        lVar5 = param_4[0x15];
        do {
          *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
          *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_4 + 100));
      }
    }
    param_4[0x18] = param_2[0x18];
    param_4 = param_4 + 0x1a;
  }
  return param_4;
}



/* Entry: 1094286f8; end: 1094287ff;  */

long FUN_1094286f8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar9 = **(long **)(param_1 + 8);
    for (lVar8 = **(long **)(param_1 + 0x10); lVar8 != lVar9; lVar8 = lVar8 + -0xd0) {
      if (*(long *)(lVar8 + -0x38) != 0) {
        piVar1 = (int *)(*(long *)(lVar8 + -0x38) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar8 + -0x38) != 0)) {
          plVar5 = *(long **)(*(long *)(lVar8 + -0x38) + 8);
          if ((plVar5 == (long *)0x0) &&
             ((plVar5 = *(long **)(lVar8 + -0x40), *(long **)(lVar8 + -0x40) == (long *)0x0 &&
              (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar5 = plRam000000011382bb80;
          }
          (**(code **)(*plVar5 + 0x30))();
        }
      }
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined8 *)(lVar8 + -0x58) = 0;
      *(undefined8 *)(lVar8 + -0x60) = 0;
      *(undefined8 *)(lVar8 + -0x48) = 0;
      *(undefined8 *)(lVar8 + -0x50) = 0;
      if (0 < *(int *)(lVar8 + -0x6c)) {
        lVar6 = 0;
        lVar7 = *(long *)(lVar8 + -0x30);
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar8 + -0x6c));
      }
      lVar6 = *(long *)(lVar8 + -0x28);
      if (lVar6 != lVar8 + -0x20 && lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
    }
  }
  return param_1;
}



/* Entry: 109428800; end: 109428813;  */

void FUN_109428800(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint *puVar28;
  long lVar29;
  undefined *puVar30;
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  uint *puVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  uint uStack_174;
  uint *puStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uStack_174 = param_4;
  func_0x000104c4f6cc(&UNK_10f56d48b);
  if (param_2 < 0x13b13b13b13b13c) {
    lVar11 = param_2 * 0xd0;
    _malloc();
    if ((param_2 == 0) || (lVar11 != 0)) {
      return;
    }
  }
  puVar12 = (uint *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puStack_138 = (uint *)PTR___ZTISt9bad_alloc_110346a68;
  puVar30 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  do {
    puVar32 = puStack_138 + -0x12;
    puVar34 = puStack_138 + -0x24;
    puVar28 = puStack_138 + -0x36;
    puVar14 = puVar12;
LAB_1094288d8:
    puVar12 = puVar14;
    uVar31 = (long)puStack_138 - (long)puVar12;
    uVar36 = ((long)uVar31 >> 3) * -0x71c71c71c71c71c7;
    if (uVar36 - 2 == 0 || (long)uVar36 < 2) {
      if (uVar36 < 2) {
        return;
      }
      if (uVar36 == 2) {
        puVar14 = puStack_138 + -0x12;
        if (*puVar12 <= puStack_138[-0x12]) {
          return;
        }
        goto LAB_109429e64;
      }
    }
    else {
      if (uVar36 == 3) {
        puVar28 = puVar12 + 0x12;
        uVar25 = *puVar28;
        puVar14 = puStack_138 + -0x12;
        if (uVar25 < *puVar12) {
          if ((uVar25 <= *puVar14) &&
             (func_0x00010942a3c4(puVar12,puVar28), puVar34 = puVar12 + 0x12, puVar12 = puVar28,
             *puVar34 <= *puVar14)) {
            return;
          }
        }
        else {
          if (uVar25 <= *puVar14) {
            return;
          }
          func_0x00010942a3c4(puVar28,puVar14);
          puVar14 = puVar28;
          if (*puVar12 <= puVar12[0x12]) {
            return;
          }
        }
LAB_109429e64:
        func_0x00010942a3c4(puVar12,puVar14);
        return;
      }
      if (uVar36 == 4) {
        FUN_109429e90(puVar12,puVar12 + 0x12,puVar12 + 0x24,puVar32);
        return;
      }
      if (uVar36 == 5) {
        FUN_109429e90(puVar12,puVar12 + 0x12,puVar12 + 0x24,puVar12 + 0x36);
        if (puVar12[0x36] <= puStack_138[-0x12]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x36,puStack_138 + -0x12);
        if (puVar12[0x24] <= puVar12[0x36]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x24,puVar12 + 0x36);
        if (puVar12[0x12] <= puVar12[0x24]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x12,puVar12 + 0x24);
        if (*puVar12 <= puVar12[0x12]) {
          return;
        }
        puVar14 = puVar12 + 0x12;
        goto LAB_109429e64;
      }
    }
    if ((long)uVar31 < 0x6c0) {
      if ((uStack_174 & 1) == 0) {
        if (puVar12 == puStack_138) {
          return;
        }
        if (puVar12 + 0x12 != puStack_138) {
          puVar14 = puVar12 + 0x22;
          puVar28 = puVar12 + 0x12;
          do {
            puVar34 = puVar28;
            if (puVar12[0x12] < *puVar12) {
              uStack_d0 = *(undefined8 *)(puVar12 + 0x16);
              lStack_d8 = *(long *)(puVar12 + 0x14);
              uStack_c0 = *(undefined8 *)(puVar12 + 0x1a);
              uStack_c8 = *(undefined8 *)(puVar12 + 0x18);
              puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,puVar12[0x12]);
              puVar12[0x14] = 0;
              puVar12[0x15] = 0;
              puVar12[0x16] = 0;
              puVar12[0x17] = 0;
              puVar12[0x18] = 0;
              puVar12[0x19] = 0;
              puVar12[0x1a] = 0;
              puVar12[0x1b] = 0;
              uStack_b0 = *(undefined8 *)(puVar12 + 0x1e);
              uStack_b8 = *(undefined8 *)(puVar12 + 0x1c);
              puVar12[0x1c] = 0;
              puVar12[0x1d] = 0;
              puVar12[0x1e] = 0;
              puVar12[0x1f] = 0;
              uStack_a8 = *(undefined8 *)(puVar12 + 0x20);
              uStack_a0 = *(undefined8 *)(puVar12 + 0x22);
              puVar12[0x20] = 0;
              puVar12[0x21] = 0;
              uVar25 = *puVar12;
              puVar12 = puVar14;
              do {
                puVar28 = puVar12;
                puVar28[-0x10] = uVar25;
                uVar24 = *(undefined8 *)(puVar28 + -0x20);
                puVar28[-0x20] = 0;
                puVar28[-0x1f] = 0;
                lVar11 = *(long *)(puVar28 + -0xe);
                *(undefined8 *)(puVar28 + -0xe) = uVar24;
                if (lVar11 != 0) {
                  FUN_1094305a8();
                  __ZdlPv();
                }
                FUN_109427db4(puVar28 + -0xc);
                *(undefined8 *)(puVar28 + -10) = *(undefined8 *)(puVar28 + -0x1c);
                *(undefined8 *)(puVar28 + -0xc) = *(undefined8 *)(puVar28 + -0x1e);
                *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -0x1a);
                puVar28[-0x1c] = 0;
                puVar28[-0x1b] = 0;
                puVar28[-0x1a] = 0;
                puVar28[-0x19] = 0;
                puVar28[-0x1e] = 0;
                puVar28[-0x1d] = 0;
                FUN_109428468(puVar28 + -6);
                lVar11 = lStack_d8;
                *(undefined8 *)(puVar28 + -4) = *(undefined8 *)(puVar28 + -0x16);
                *(undefined8 *)(puVar28 + -6) = *(undefined8 *)(puVar28 + -0x18);
                uVar24 = *(undefined8 *)(puVar28 + -0x14);
                puVar28[-0x18] = 0;
                puVar28[-0x17] = 0;
                puVar28[-0x16] = 0;
                puVar28[-0x15] = 0;
                puVar28[-0x14] = 0;
                puVar28[-0x13] = 0;
                puVar12 = puVar28 + -0x12;
                *(undefined8 *)(puVar28 + -2) = uVar24;
                *(undefined8 *)puVar28 = *(undefined8 *)puVar12;
                uVar25 = puVar28[-0x34];
              } while ((uint)puStack_e0 < uVar25);
              puVar28[-0x22] = (uint)puStack_e0;
              lStack_d8 = 0;
              lVar17 = *(long *)(puVar28 + -0x20);
              *(long *)(puVar28 + -0x20) = lVar11;
              if (lVar17 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar28 + -0x1e);
              *(undefined8 *)(puVar28 + -0x1c) = uStack_c8;
              *(undefined8 *)(puVar28 + -0x1e) = uStack_d0;
              *(undefined8 *)(puVar28 + -0x1a) = uStack_c0;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0;
              FUN_109428468(puVar28 + -0x18);
              *(undefined8 *)(puVar28 + -0x16) = uStack_b0;
              *(undefined8 *)(puVar28 + -0x18) = uStack_b8;
              *(undefined8 *)(puVar28 + -0x14) = uStack_a8;
              uStack_b8 = 0;
              uStack_b0 = 0;
              uStack_a8 = 0;
              *(undefined8 *)puVar12 = uStack_a0;
              puStack_130 = &uStack_b8;
              FUN_10942a570(&puStack_130);
              puStack_130 = &uStack_d0;
              FUN_109427be4(&puStack_130);
              lVar11 = lStack_d8;
              lStack_d8 = 0;
              if (lVar11 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
            }
            puVar28 = puVar34 + 0x12;
            puVar14 = puVar14 + 0x12;
            puVar12 = puVar34;
          } while (puVar28 != puStack_138);
          return;
        }
        return;
      }
      if (puVar12 == puStack_138) {
        return;
      }
      if (puVar12 + 0x12 == puStack_138) {
        return;
      }
      lVar11 = 0;
      puVar14 = puVar12;
      puVar28 = puVar12 + 0x12;
      break;
    }
    if (puVar30 == (undefined *)0x0) {
      if (puVar12 == puStack_138) {
        return;
      }
      uVar33 = uVar36 - 2 >> 1;
      uVar23 = uVar33;
      goto LAB_109429378;
    }
    puVar15 = puVar12 + (uVar36 >> 1) * 0x12;
    uVar25 = *puVar32;
    puVar14 = puVar12;
    if (uVar31 < 0x2401) {
      uVar8 = *puVar12;
      puVar14 = puVar15;
      if (uVar8 < *puVar15) {
        puVar16 = puVar32;
        if ((uVar25 < uVar8) ||
           (func_0x00010942a3c4(puVar15,puVar12), puVar14 = puVar12, *puVar32 < *puVar12))
        goto LAB_109428bb8;
      }
      else if ((uVar25 < uVar8) &&
              (func_0x00010942a3c4(puVar12,puVar32), puVar16 = puVar12, *puVar12 < *puVar15))
      goto LAB_109428bb8;
    }
    else {
      uVar8 = *puVar15;
      puVar16 = puVar12;
      if (uVar8 < *puVar12) {
        puVar13 = puVar32;
        if ((uVar25 < uVar8) ||
           (func_0x00010942a3c4(puVar12,puVar15), puVar16 = puVar15, *puVar32 < *puVar15)) {
LAB_109428a00:
          func_0x00010942a3c4(puVar16,puVar13);
        }
      }
      else if ((uVar25 < uVar8) &&
              (func_0x00010942a3c4(puVar15,puVar32), puVar13 = puVar15, *puVar15 < *puVar12))
      goto LAB_109428a00;
      puVar16 = puVar12 + 0x12;
      puVar13 = puVar15 + -0x12;
      uVar25 = *puVar13;
      if (uVar25 < *puVar16) {
        puVar21 = puVar34;
        if ((*puVar34 < uVar25) ||
           (func_0x00010942a3c4(puVar16,puVar13), puVar16 = puVar13, *puVar34 < *puVar13)) {
LAB_109428ab4:
          func_0x00010942a3c4(puVar16,puVar21);
        }
      }
      else if ((*puVar34 < uVar25) &&
              (func_0x00010942a3c4(puVar13,puVar34), puVar21 = puVar13, *puVar13 < *puVar16))
      goto LAB_109428ab4;
      puVar16 = puVar12 + 0x24;
      puVar21 = puVar15 + 0x12;
      uVar25 = *puVar21;
      if (uVar25 < *puVar16) {
        puVar20 = puVar28;
        if ((*puVar28 < uVar25) ||
           (func_0x00010942a3c4(puVar16,puVar21), puVar16 = puVar21, *puVar28 < *puVar21)) {
LAB_109428b38:
          func_0x00010942a3c4(puVar16,puVar20);
        }
      }
      else if ((*puVar28 < uVar25) &&
              (func_0x00010942a3c4(puVar21,puVar28), puVar20 = puVar21, *puVar21 < *puVar16))
      goto LAB_109428b38;
      uVar25 = *puVar15;
      puVar16 = puVar15;
      if (uVar25 < puVar15[-0x12]) {
        if ((puVar15[0x12] < uVar25) ||
           (func_0x00010942a3c4(puVar13,puVar15), puVar13 = puVar15, puVar15[0x12] < *puVar15)) {
LAB_109428bac:
          func_0x00010942a3c4(puVar13,puVar21);
        }
      }
      else if ((puVar15[0x12] < uVar25) &&
              (func_0x00010942a3c4(puVar15,puVar21), puVar21 = puVar15, *puVar15 < puVar15[-0x12]))
      goto LAB_109428bac;
LAB_109428bb8:
      func_0x00010942a3c4(puVar14,puVar16);
    }
    puVar30 = puVar30 + -1;
    uVar25 = *puVar12;
    if (((uStack_174 & 1) == 0) && (uVar25 <= puVar12[-0x12])) {
      puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,uVar25);
      puVar16 = puVar12 + 4;
      uVar26 = *(undefined8 *)puVar16;
      uStack_d0 = *(undefined8 *)(puVar12 + 4);
      uVar22 = *(undefined8 *)(puVar12 + 2);
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar24 = *(undefined8 *)(puVar12 + 6);
      uVar6 = *(undefined8 *)(puVar12 + 8);
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar16[0] = 0;
      puVar16[1] = 0;
      puVar15 = puVar12 + 10;
      uVar35 = *(undefined8 *)puVar15;
      uVar5 = *(undefined8 *)(puVar12 + 0xc);
      uVar7 = *(undefined8 *)(puVar12 + 0xe);
      puVar15[0] = 0;
      puVar15[1] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      uVar27 = *(undefined8 *)(puVar12 + 0x10);
      puVar14 = puVar12;
      if (uVar25 < *puVar32) {
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 <= uVar25);
      }
      else {
        do {
          puVar14 = puVar14 + 0x12;
          if (puStack_138 <= puVar14) break;
        } while (*puVar14 <= uVar25);
      }
      puVar13 = puStack_138;
      lStack_d8 = uVar22;
      uStack_c8 = uVar24;
      uStack_c0 = uVar6;
      uStack_b8 = uVar35;
      uStack_b0 = uVar5;
      uStack_a8 = uVar7;
      uStack_a0 = uVar27;
      if (puVar14 < puStack_138) {
        do {
          puVar13 = puVar13 + -0x12;
        } while (uVar25 < *puVar13);
      }
      while (puVar14 < puVar13) {
        func_0x00010942a3c4(puVar14,puVar13);
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 <= uVar25);
        do {
          puVar13 = puVar13 + -0x12;
        } while (uVar25 < *puVar13);
      }
      if (puVar14 + -0x12 == puVar12) {
        puVar14[-0x12] = uVar25;
        lVar11 = *(long *)(puVar14 + -0x10);
        *(undefined8 *)(puVar14 + -0x10) = uVar22;
      }
      else {
        *puVar12 = puVar14[-0x12];
        uVar22 = *(undefined8 *)(puVar14 + -0x10);
        puVar14[-0x10] = 0;
        puVar14[-0xf] = 0;
        lVar11 = *(long *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 2) = uVar22;
        if (lVar11 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar16);
        uVar22 = *(undefined8 *)(puVar14 + -0xe);
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar14 + -0xc);
        *(undefined8 *)(puVar12 + 4) = uVar22;
        *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar14 + -10);
        puVar14[-0xe] = 0;
        puVar14[-0xd] = 0;
        puVar14[-0xc] = 0;
        puVar14[-0xb] = 0;
        puVar14[-10] = 0;
        puVar14[-9] = 0;
        FUN_109428468(puVar15);
        uVar22 = *(undefined8 *)(puVar14 + -8);
        *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar14 + -6);
        *(undefined8 *)(puVar12 + 10) = uVar22;
        *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(puVar14 + -4);
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-8] = 0;
        puVar14[-7] = 0;
        *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar14 + -2);
        puVar14[-0x12] = uVar25;
        lVar11 = *(long *)(puVar14 + -0x10);
        *(long *)(puVar14 + -0x10) = lStack_d8;
      }
      lStack_d8 = 0;
      if (lVar11 != 0) {
        lStack_d8 = 0;
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar14 + -0xe);
      *(undefined8 *)(puVar14 + -0xe) = uVar26;
      *(undefined8 *)(puVar14 + -0xc) = uVar24;
      *(undefined8 *)(puVar14 + -10) = uVar6;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      FUN_109428468(puVar14 + -8);
      *(undefined8 *)(puVar14 + -8) = uVar35;
      *(undefined8 *)(puVar14 + -6) = uVar5;
      *(undefined8 *)(puVar14 + -4) = uVar7;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      *(undefined8 *)(puVar14 + -2) = uVar27;
      puStack_130 = &uStack_b8;
      FUN_10942a570(&puStack_130);
      puStack_130 = &uStack_d0;
      FUN_109427be4(&puStack_130);
      lVar11 = lStack_d8;
      lStack_d8 = 0;
      if (lVar11 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      uStack_174 = 0;
      goto LAB_1094288d8;
    }
    lVar11 = 0;
    puVar16 = puVar12 + 4;
    uVar26 = *(undefined8 *)puVar16;
    puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,uVar25);
    uStack_d0 = *(undefined8 *)(puVar12 + 4);
    uVar22 = *(undefined8 *)(puVar12 + 2);
    puVar12[2] = 0;
    puVar12[3] = 0;
    uVar24 = *(undefined8 *)(puVar12 + 6);
    uVar6 = *(undefined8 *)(puVar12 + 8);
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar16[0] = 0;
    puVar16[1] = 0;
    puVar15 = puVar12 + 10;
    uVar27 = *(undefined8 *)puVar15;
    uVar5 = *(undefined8 *)(puVar12 + 0xc);
    uVar7 = *(undefined8 *)(puVar12 + 0xe);
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    uVar35 = *(undefined8 *)(puVar12 + 0x10);
    do {
      lVar17 = lVar11 + 0x48;
      lVar11 = lVar11 + 0x48;
    } while (*(uint *)((long)puVar12 + lVar17) < uVar25);
    puVar13 = (uint *)((long)puVar12 + lVar11);
    puVar21 = puStack_138;
    if (lVar11 == 0x48) {
      do {
        if (puVar21 <= puVar13) break;
        puVar21 = puVar21 + -0x12;
      } while (uVar25 <= *puVar21);
    }
    else {
      do {
        puVar21 = puVar21 + -0x12;
      } while (uVar25 <= *puVar21);
    }
    puVar14 = puVar13;
    puVar20 = puVar21;
    lStack_d8 = uVar22;
    uStack_c8 = uVar24;
    uStack_c0 = uVar6;
    uStack_b8 = uVar27;
    uStack_b0 = uVar5;
    uStack_a8 = uVar7;
    uStack_a0 = uVar35;
    if (puVar13 < puVar21) {
      do {
        func_0x00010942a3c4(puVar14,puVar20);
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 < uVar25);
        do {
          puVar20 = puVar20 + -0x12;
        } while (uVar25 <= *puVar20);
      } while (puVar14 < puVar20);
    }
    puVar20 = puVar14 + -0x12;
    if (puVar20 == puVar12) {
      puVar14[-0x12] = uVar25;
      lVar11 = *(long *)(puVar14 + -0x10);
      *(undefined8 *)(puVar14 + -0x10) = uVar22;
    }
    else {
      *puVar12 = puVar14[-0x12];
      uVar22 = *(undefined8 *)(puVar14 + -0x10);
      puVar14[-0x10] = 0;
      puVar14[-0xf] = 0;
      lVar11 = *(long *)(puVar12 + 2);
      *(undefined8 *)(puVar12 + 2) = uVar22;
      if (lVar11 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar16);
      uVar22 = *(undefined8 *)(puVar14 + -0xe);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar14 + -0xc);
      *(undefined8 *)(puVar12 + 4) = uVar22;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar14 + -10);
      puVar14[-0xe] = 0;
      puVar14[-0xd] = 0;
      puVar14[-0xc] = 0;
      puVar14[-0xb] = 0;
      puVar14[-10] = 0;
      puVar14[-9] = 0;
      FUN_109428468(puVar15);
      uVar22 = *(undefined8 *)(puVar14 + -8);
      *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar14 + -6);
      *(undefined8 *)(puVar12 + 10) = uVar22;
      *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(puVar14 + -4);
      puVar14[-6] = 0;
      puVar14[-5] = 0;
      puVar14[-4] = 0;
      puVar14[-3] = 0;
      puVar14[-8] = 0;
      puVar14[-7] = 0;
      *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar14 + -2);
      puVar14[-0x12] = uVar25;
      lVar11 = *(long *)(puVar14 + -0x10);
      *(long *)(puVar14 + -0x10) = lStack_d8;
    }
    lStack_d8 = 0;
    if (lVar11 != 0) {
      lStack_d8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4(puVar14 + -0xe);
    *(undefined8 *)(puVar14 + -0xe) = uVar26;
    *(undefined8 *)(puVar14 + -0xc) = uVar24;
    *(undefined8 *)(puVar14 + -10) = uVar6;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    FUN_109428468(puVar14 + -8);
    *(undefined8 *)(puVar14 + -8) = uVar27;
    *(undefined8 *)(puVar14 + -6) = uVar5;
    *(undefined8 *)(puVar14 + -4) = uVar7;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(undefined8 *)(puVar14 + -2) = uVar35;
    puStack_130 = &uStack_b8;
    FUN_10942a570(&puStack_130);
    puStack_130 = &uStack_d0;
    FUN_109427be4(&puStack_130);
    lVar11 = lStack_d8;
    lStack_d8 = 0;
    if (lVar11 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
    if (puVar13 < puVar21) goto LAB_109428e04;
    puVar15 = puVar12;
    func_0x000109429f94(puVar12,puVar20);
    puVar16 = puVar14;
    func_0x000109429f94(puVar14,puStack_138);
    if ((int)puVar16 == 0) goto code_r0x000109428e00;
    puStack_138 = puVar20;
    if (((ulong)puVar15 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1094291b8:
  if (puVar14[0x12] < *puVar14) {
    uStack_d0 = *(undefined8 *)(puVar14 + 0x16);
    lStack_d8 = *(long *)(puVar14 + 0x14);
    uStack_c0 = *(undefined8 *)(puVar14 + 0x1a);
    uStack_c8 = *(undefined8 *)(puVar14 + 0x18);
    puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,puVar14[0x12]);
    puVar14[0x14] = 0;
    puVar14[0x15] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x18] = 0;
    puVar14[0x19] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    uStack_b0 = *(undefined8 *)(puVar14 + 0x1e);
    uStack_b8 = *(undefined8 *)(puVar14 + 0x1c);
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
    uStack_a8 = *(undefined8 *)(puVar14 + 0x20);
    uStack_a0 = *(undefined8 *)(puVar14 + 0x22);
    puVar14[0x20] = 0;
    puVar14[0x21] = 0;
    uVar25 = *puVar14;
    lVar17 = lVar11;
    do {
      lVar19 = lVar17;
      *(uint *)((long)puVar12 + lVar19 + 0x48) = uVar25;
      uVar24 = *(undefined8 *)((long)puVar12 + lVar19 + 8);
      *(undefined8 *)((long)puVar12 + lVar19 + 8) = 0;
      lVar17 = *(long *)((long)puVar12 + lVar19 + 0x50);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x50) = uVar24;
      if (lVar17 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4((long)puVar12 + lVar19 + 0x58);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x60) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x18);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x58) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x10);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x68) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x20);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x18) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x20) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x10) = 0;
      FUN_109428468((long)puVar12 + lVar19 + 0x70);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x78) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x30);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x70) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x28);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x28) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x30) = 0;
      uVar24 = *(undefined8 *)((long)puVar12 + lVar19 + 0x38);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x38) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x80) = uVar24;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x88) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x40);
      if (lVar19 == 0) {
        *puVar12 = (uint)puStack_e0;
        lVar17 = *(long *)(puVar12 + 2);
        *(long *)(puVar12 + 2) = lStack_d8;
        puVar14 = puVar12;
        goto joined_r0x0001094292c4;
      }
      uVar25 = *(uint *)((long)puVar12 + lVar19 + -0x48);
      lVar17 = lVar19 + -0x48;
    } while ((uint)puStack_e0 < uVar25);
    puVar14 = (uint *)((long)puVar12 + lVar19);
    *puVar14 = (uint)puStack_e0;
    lVar17 = *(long *)((long)puVar12 + lVar19 + 8);
    *(long *)((long)puVar12 + lVar19 + 8) = lStack_d8;
joined_r0x0001094292c4:
    lStack_d8 = 0;
    if (lVar17 != 0) {
      lStack_d8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4((long)puVar12 + lVar19 + 0x10);
    *(undefined8 *)((long)puVar12 + lVar19 + 0x10) = uStack_d0;
    *(undefined8 *)(puVar14 + 8) = uStack_c0;
    *(undefined8 *)(puVar14 + 6) = uStack_c8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    FUN_109428468((long)puVar12 + lVar19 + 0x28);
    *(undefined8 *)((long)puVar12 + lVar19 + 0x28) = uStack_b8;
    *(undefined8 *)(puVar14 + 0xe) = uStack_a8;
    *(undefined8 *)(puVar14 + 0xc) = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(undefined8 *)(puVar14 + 0x10) = uStack_a0;
    puStack_130 = &uStack_b8;
    FUN_10942a570(&puStack_130);
    puStack_130 = &uStack_d0;
    FUN_109427be4(&puStack_130);
    lVar17 = lStack_d8;
    lStack_d8 = 0;
    if (lVar17 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
  }
  puVar34 = puVar28 + 0x12;
  lVar11 = lVar11 + 0x48;
  puVar14 = puVar28;
  puVar28 = puVar34;
  if (puVar34 == puStack_138) {
    return;
  }
  goto LAB_1094291b8;
LAB_109429378:
  if ((long)uVar23 <= (long)uVar33) {
    uVar2 = uVar23 << 1 | 1;
    puVar14 = puVar12 + uVar2 * 0x12;
    uVar38 = uVar23 * 2 + 2;
    if ((long)uVar38 < (long)uVar36) {
      uVar25 = *puVar14;
      uVar9 = puVar14[0x12];
      uVar8 = uVar25;
      if (uVar25 <= uVar9) {
        uVar8 = uVar9;
      }
      puVar28 = puVar14 + 0x12;
      if (uVar9 <= uVar25) {
        uVar38 = uVar2;
        puVar28 = puVar14;
      }
      puVar14 = puVar28;
      puVar28 = puVar12 + uVar23 * 0x12;
      uVar25 = *puVar28;
      if (uVar25 <= uVar8) {
LAB_1094293f0:
        puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,uVar25);
        uStack_d0 = *(undefined8 *)(puVar28 + 4);
        lStack_d8 = *(long *)(puVar28 + 2);
        puVar28[2] = 0;
        puVar28[3] = 0;
        uStack_c0 = *(undefined8 *)(puVar28 + 8);
        uStack_c8 = *(undefined8 *)(puVar28 + 6);
        puVar28[4] = 0;
        puVar28[5] = 0;
        puVar28[6] = 0;
        puVar28[7] = 0;
        puVar28[8] = 0;
        puVar28[9] = 0;
        uStack_b0 = *(undefined8 *)(puVar28 + 0xc);
        uStack_b8 = *(undefined8 *)(puVar28 + 10);
        uStack_a8 = *(undefined8 *)(puVar28 + 0xe);
        puVar28[0xc] = 0;
        puVar28[0xd] = 0;
        puVar28[0xe] = 0;
        puVar28[0xf] = 0;
        puVar28[10] = 0;
        puVar28[0xb] = 0;
        uStack_a0 = *(undefined8 *)(puVar28 + 0x10);
        uVar25 = *puVar14;
        do {
          while( true ) {
            puVar34 = puVar14;
            *puVar28 = uVar25;
            uVar24 = *(undefined8 *)(puVar34 + 2);
            puVar34[2] = 0;
            puVar34[3] = 0;
            lVar11 = *(long *)(puVar28 + 2);
            *(undefined8 *)(puVar28 + 2) = uVar24;
            if (lVar11 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar28 + 4);
            puVar32 = puVar34 + 4;
            uVar24 = *(undefined8 *)puVar32;
            *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(puVar34 + 6);
            *(undefined8 *)(puVar28 + 4) = uVar24;
            *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar34 + 8);
            puVar32[0] = 0;
            puVar32[1] = 0;
            puVar34[6] = 0;
            puVar34[7] = 0;
            puVar34[8] = 0;
            puVar34[9] = 0;
            FUN_109428468(puVar28 + 10);
            lVar11 = lStack_d8;
            puVar15 = puVar34 + 10;
            uVar24 = *(undefined8 *)puVar15;
            *(undefined8 *)(puVar28 + 0xc) = *(undefined8 *)(puVar34 + 0xc);
            *(undefined8 *)(puVar28 + 10) = uVar24;
            *(undefined8 *)(puVar28 + 0xe) = *(undefined8 *)(puVar34 + 0xe);
            puVar15[0] = 0;
            puVar15[1] = 0;
            puVar34[0xc] = 0;
            puVar34[0xd] = 0;
            puVar34[0xe] = 0;
            puVar34[0xf] = 0;
            *(undefined8 *)(puVar28 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
            if ((long)uVar33 < (long)uVar38) goto LAB_109429520;
            uVar2 = uVar38 << 1 | 1;
            puVar16 = puVar12 + uVar2 * 0x12;
            uVar38 = uVar38 * 2 + 2;
            puVar28 = puVar34;
            if ((long)uVar38 < (long)uVar36) break;
            uVar25 = *puVar16;
            puVar14 = puVar16;
            uVar38 = uVar2;
            if (uVar25 < (uint)puStack_e0) goto LAB_109429520;
          }
          uVar8 = *puVar16;
          uVar9 = puVar16[0x12];
          uVar25 = uVar8;
          if (uVar8 <= uVar9) {
            uVar25 = uVar9;
          }
          puVar14 = puVar16 + 0x12;
          if (uVar9 <= uVar8) {
            uVar38 = uVar2;
            puVar14 = puVar16;
          }
        } while ((uint)puStack_e0 <= uVar25);
LAB_109429520:
        *puVar34 = (uint)puStack_e0;
        lStack_d8 = 0;
        lVar17 = *(long *)(puVar34 + 2);
        *(long *)(puVar34 + 2) = lVar11;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar32);
        *(undefined8 *)(puVar34 + 6) = uStack_c8;
        *(undefined8 *)(puVar34 + 4) = uStack_d0;
        *(undefined8 *)(puVar34 + 8) = uStack_c0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        FUN_109428468(puVar15);
        *(undefined8 *)(puVar34 + 0xc) = uStack_b0;
        *(undefined8 *)(puVar34 + 10) = uStack_b8;
        *(undefined8 *)(puVar34 + 0xe) = uStack_a8;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        *(undefined8 *)(puVar34 + 0x10) = uStack_a0;
        puStack_130 = &uStack_b8;
        FUN_10942a570(&puStack_130);
        puStack_130 = &uStack_d0;
        FUN_109427be4(&puStack_130);
        lVar11 = lStack_d8;
        lStack_d8 = 0;
        if (lVar11 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
      }
    }
    else {
      puVar28 = puVar12 + uVar23 * 0x12;
      uVar25 = *puVar28;
      uVar38 = uVar2;
      if (uVar25 <= *puVar14) goto LAB_1094293f0;
    }
  }
  bVar3 = uVar23 == 0;
  uVar23 = uVar23 - 1;
  if (bVar3) {
    lVar11 = (uVar31 >> 3) * -0x71c71c71c71c71c7;
    do {
      uVar31 = 0;
      puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,*puVar12);
      uStack_120 = *(undefined8 *)(puVar12 + 4);
      lStack_128 = *(long *)(puVar12 + 2);
      puVar12[2] = 0;
      puVar12[3] = 0;
      uStack_110 = *(undefined8 *)(puVar12 + 8);
      uStack_118 = *(undefined8 *)(puVar12 + 6);
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      uStack_100 = *(undefined8 *)(puVar12 + 0xc);
      uStack_108 = *(undefined8 *)(puVar12 + 10);
      uStack_f8 = *(undefined8 *)(puVar12 + 0xe);
      uStack_f0 = *(undefined8 *)(puVar12 + 0x10);
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar14 = puVar12;
      do {
        puVar28 = puVar14 + uVar31 * 0x12 + 0x12;
        uVar23 = uVar31 << 1 | 1;
        uVar36 = uVar31 * 2 + 2;
        if ((long)uVar36 < lVar11) {
          lVar17 = uVar31 * 0x12;
          uVar9 = puVar14[lVar17 + 0x24];
          uVar8 = puVar14[uVar31 * 0x12 + 0x12];
          uVar25 = uVar8;
          if (uVar8 <= uVar9) {
            uVar25 = uVar9;
          }
          uVar31 = uVar36;
          puVar34 = puVar14 + lVar17 + 0x24;
          if (uVar9 <= uVar8) {
            uVar31 = uVar23;
            puVar34 = puVar28;
          }
          *puVar14 = uVar25;
          uVar24 = *(undefined8 *)(puVar34 + 2);
          puVar34[2] = 0;
          puVar34[3] = 0;
          lVar17 = *(long *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = uVar24;
        }
        else {
          *puVar14 = *puVar28;
          uVar24 = *(undefined8 *)(puVar14 + uVar31 * 0x12 + 0x14);
          (puVar14 + uVar31 * 0x12 + 0x14)[0] = 0;
          (puVar14 + uVar31 * 0x12 + 0x14)[1] = 0;
          lVar17 = *(long *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = uVar24;
          puVar34 = puVar28;
          uVar31 = uVar23;
        }
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        puVar28 = puVar14 + 4;
        lVar17 = *(long *)puVar28;
        if (lVar17 != 0) {
          lVar37 = *(long *)(puVar14 + 6);
          lVar19 = lVar17;
          if (lVar37 != lVar17) {
            do {
              if (*(long *)(lVar37 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar37 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar37 + -0x38) != 0)) {
                  plVar18 = *(long **)(*(long *)(lVar37 + -0x38) + 8);
                  if ((plVar18 == (long *)0x0) &&
                     ((plVar18 = *(long **)(lVar37 + -0x40),
                      *(long **)(lVar37 + -0x40) == (long *)0x0 &&
                      (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar18 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar18 + 0x30))();
                }
              }
              *(undefined8 *)(lVar37 + -0x38) = 0;
              *(undefined8 *)(lVar37 + -0x58) = 0;
              *(undefined8 *)(lVar37 + -0x60) = 0;
              *(undefined8 *)(lVar37 + -0x48) = 0;
              *(undefined8 *)(lVar37 + -0x50) = 0;
              if (0 < *(int *)(lVar37 + -0x6c)) {
                lVar19 = 0;
                lVar29 = *(long *)(lVar37 + -0x30);
                do {
                  *(undefined4 *)(lVar29 + lVar19 * 4) = 0;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < *(int *)(lVar37 + -0x6c));
              }
              lVar19 = *(long *)(lVar37 + -0x28);
              if (lVar19 != lVar37 + -0x20 && lVar19 != 0) {
                _free(*(undefined8 *)(lVar19 + -8));
              }
              lVar37 = lVar37 + -0xc0;
            } while (lVar37 != lVar17);
            lVar19 = *(long *)puVar28;
          }
          *(long *)(puVar14 + 6) = lVar17;
          _free(lVar19);
          puVar28[0] = 0;
          puVar28[1] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
        }
        uVar24 = *(undefined8 *)(puVar34 + 4);
        *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(puVar34 + 6);
        *(undefined8 *)(puVar14 + 4) = uVar24;
        *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar34 + 8);
        puVar34[4] = 0;
        puVar34[5] = 0;
        puVar34[6] = 0;
        puVar34[7] = 0;
        puVar34[8] = 0;
        puVar34[9] = 0;
        puVar28 = puVar14 + 10;
        lVar17 = *(long *)puVar28;
        if (lVar17 != 0) {
          lVar37 = *(long *)(puVar14 + 0xc);
          lVar19 = lVar17;
          if (lVar37 != lVar17) {
            do {
              if (*(long *)(lVar37 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar37 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar37 + -0x38) != 0)) {
                  plVar18 = *(long **)(*(long *)(lVar37 + -0x38) + 8);
                  if ((plVar18 == (long *)0x0) &&
                     ((plVar18 = *(long **)(lVar37 + -0x40),
                      *(long **)(lVar37 + -0x40) == (long *)0x0 &&
                      (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar18 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar18 + 0x30))();
                }
              }
              *(undefined8 *)(lVar37 + -0x38) = 0;
              *(undefined8 *)(lVar37 + -0x58) = 0;
              *(undefined8 *)(lVar37 + -0x60) = 0;
              *(undefined8 *)(lVar37 + -0x48) = 0;
              *(undefined8 *)(lVar37 + -0x50) = 0;
              if (0 < *(int *)(lVar37 + -0x6c)) {
                lVar19 = 0;
                lVar29 = *(long *)(lVar37 + -0x30);
                do {
                  *(undefined4 *)(lVar29 + lVar19 * 4) = 0;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < *(int *)(lVar37 + -0x6c));
              }
              lVar19 = *(long *)(lVar37 + -0x28);
              if (lVar19 != lVar37 + -0x20 && lVar19 != 0) {
                _free(*(undefined8 *)(lVar19 + -8));
              }
              lVar37 = lVar37 + -0xd0;
            } while (lVar37 != lVar17);
            lVar19 = *(long *)puVar28;
          }
          *(long *)(puVar14 + 0xc) = lVar17;
          _free(lVar19);
          puVar28[0] = 0;
          puVar28[1] = 0;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
        }
        lVar17 = lStack_128;
        uVar24 = *(undefined8 *)(puVar34 + 10);
        *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(puVar34 + 0xc);
        *(undefined8 *)(puVar14 + 10) = uVar24;
        *(undefined8 *)(puVar14 + 0xe) = *(undefined8 *)(puVar34 + 0xe);
        puVar34[10] = 0;
        puVar34[0xb] = 0;
        puVar34[0xc] = 0;
        puVar34[0xd] = 0;
        puVar34[0xe] = 0;
        puVar34[0xf] = 0;
        *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
        puVar14 = puVar34;
      } while ((long)uVar31 <= (long)(lVar11 - 2U >> 1));
      if (puVar34 == puStack_138 + -0x12) {
        *puVar34 = (uint)puStack_130;
        lStack_128 = 0;
        lVar19 = *(long *)(puVar34 + 2);
        *(long *)(puVar34 + 2) = lVar17;
        if (lVar19 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar34 + 4);
        *(undefined8 *)(puVar34 + 6) = uStack_118;
        *(undefined8 *)(puVar34 + 4) = uStack_120;
        *(undefined8 *)(puVar34 + 8) = uStack_110;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        FUN_109428468(puVar34 + 10);
        *(undefined8 *)(puVar34 + 0xc) = uStack_100;
        *(undefined8 *)(puVar34 + 10) = uStack_108;
        *(undefined8 *)(puVar34 + 0xe) = uStack_f8;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        *(undefined8 *)(puVar34 + 0x10) = uStack_f0;
      }
      else {
        *puVar34 = puStack_138[-0x12];
        uVar24 = *(undefined8 *)(puStack_138 + -0x10);
        puStack_138[-0x10] = 0;
        puStack_138[-0xf] = 0;
        lVar17 = *(long *)(puVar34 + 2);
        *(undefined8 *)(puVar34 + 2) = uVar24;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar34 + 4);
        puVar14 = puStack_138 + -0xe;
        uVar24 = *(undefined8 *)puVar14;
        *(undefined8 *)(puVar34 + 6) = *(undefined8 *)(puStack_138 + -0xc);
        *(undefined8 *)(puVar34 + 4) = uVar24;
        *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puStack_138 + -10);
        puVar14[0] = 0;
        puVar14[1] = 0;
        puStack_138[-0xc] = 0;
        puStack_138[-0xb] = 0;
        puStack_138[-10] = 0;
        puStack_138[-9] = 0;
        FUN_109428468(puVar34 + 10);
        lVar17 = lStack_128;
        puVar28 = puStack_138 + -8;
        uVar24 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puStack_138 + -6);
        *(undefined8 *)(puVar34 + 10) = uVar24;
        *(undefined8 *)(puVar34 + 0xe) = *(undefined8 *)(puStack_138 + -4);
        puStack_138[-6] = 0;
        puStack_138[-5] = 0;
        puStack_138[-4] = 0;
        puStack_138[-3] = 0;
        puVar28[0] = 0;
        puVar28[1] = 0;
        *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puStack_138 + -2);
        puStack_138[-0x12] = (uint)puStack_130;
        lStack_128 = 0;
        lVar19 = *(long *)(puStack_138 + -0x10);
        *(long *)(puStack_138 + -0x10) = lVar17;
        if (lVar19 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar14);
        *(undefined8 *)(puStack_138 + -0xc) = uStack_118;
        *(undefined8 *)(puStack_138 + -0xe) = uStack_120;
        *(undefined8 *)(puStack_138 + -10) = uStack_110;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        FUN_109428468(puVar28);
        *(undefined8 *)(puStack_138 + -6) = uStack_100;
        *(undefined8 *)(puStack_138 + -8) = uStack_108;
        *(undefined8 *)(puStack_138 + -4) = uStack_f8;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        *(undefined8 *)(puStack_138 + -2) = uStack_f0;
        uVar31 = (long)puVar34 + (0x48 - (long)puVar12);
        if (0x48 < (long)uVar31) {
          uVar31 = (uVar31 >> 3) * -0x71c71c71c71c71c7 - 2 >> 1;
          puVar14 = puVar12 + uVar31 * 0x12;
          if (*puVar14 < *puVar34) {
            puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,*puVar34);
            uStack_d0 = *(undefined8 *)(puVar34 + 4);
            lStack_d8 = *(long *)(puVar34 + 2);
            puVar34[2] = 0;
            puVar34[3] = 0;
            uStack_c0 = *(undefined8 *)(puVar34 + 8);
            uStack_c8 = *(undefined8 *)(puVar34 + 6);
            puVar34[6] = 0;
            puVar34[7] = 0;
            puVar34[8] = 0;
            puVar34[9] = 0;
            puVar34[4] = 0;
            puVar34[5] = 0;
            uStack_b0 = *(undefined8 *)(puVar34 + 0xc);
            uStack_b8 = *(undefined8 *)(puVar34 + 10);
            uStack_a8 = *(undefined8 *)(puVar34 + 0xe);
            uStack_a0 = *(undefined8 *)(puVar34 + 0x10);
            puVar34[0xc] = 0;
            puVar34[0xd] = 0;
            puVar34[0xe] = 0;
            puVar34[0xf] = 0;
            puVar34[10] = 0;
            puVar34[0xb] = 0;
            uVar25 = *puVar14;
            do {
              puVar28 = puVar14;
              *puVar34 = uVar25;
              uVar24 = *(undefined8 *)(puVar28 + 2);
              puVar28[2] = 0;
              puVar28[3] = 0;
              lVar17 = *(long *)(puVar34 + 2);
              *(undefined8 *)(puVar34 + 2) = uVar24;
              if (lVar17 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar34 + 4);
              puVar32 = puVar28 + 4;
              uVar24 = *(undefined8 *)puVar32;
              *(undefined8 *)(puVar34 + 6) = *(undefined8 *)(puVar28 + 6);
              *(undefined8 *)(puVar34 + 4) = uVar24;
              *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puVar28 + 8);
              puVar32[0] = 0;
              puVar32[1] = 0;
              puVar28[6] = 0;
              puVar28[7] = 0;
              puVar28[8] = 0;
              puVar28[9] = 0;
              FUN_109428468(puVar34 + 10);
              lVar17 = lStack_d8;
              puVar15 = puVar28 + 10;
              uVar24 = *(undefined8 *)puVar15;
              *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar28 + 0xc);
              *(undefined8 *)(puVar34 + 10) = uVar24;
              *(undefined8 *)(puVar34 + 0xe) = *(undefined8 *)(puVar28 + 0xe);
              puVar15[0] = 0;
              puVar15[1] = 0;
              puVar28[0xc] = 0;
              puVar28[0xd] = 0;
              puVar28[0xe] = 0;
              puVar28[0xf] = 0;
              *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puVar28 + 0x10);
              if (uVar31 == 0) break;
              uVar31 = uVar31 - 1 >> 1;
              uVar25 = puVar12[uVar31 * 0x12];
              puVar14 = puVar12 + uVar31 * 0x12;
              puVar34 = puVar28;
            } while (uVar25 < (uint)puStack_e0);
            *puVar28 = (uint)puStack_e0;
            lStack_d8 = 0;
            lVar19 = *(long *)(puVar28 + 2);
            *(long *)(puVar28 + 2) = lVar17;
            if (lVar19 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar32);
            *(undefined8 *)(puVar28 + 6) = uStack_c8;
            *(undefined8 *)(puVar28 + 4) = uStack_d0;
            *(undefined8 *)(puVar28 + 8) = uStack_c0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            FUN_109428468(puVar15);
            *(undefined8 *)(puVar28 + 0xc) = uStack_b0;
            *(undefined8 *)(puVar28 + 10) = uStack_b8;
            *(undefined8 *)(puVar28 + 0xe) = uStack_a8;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            *(undefined8 *)(puVar28 + 0x10) = uStack_a0;
            puStack_e8 = &uStack_b8;
            FUN_10942a570(&puStack_e8);
            puStack_e8 = &uStack_d0;
            FUN_109427be4(&puStack_e8);
            lVar17 = lStack_d8;
            lStack_d8 = 0;
            if (lVar17 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
          }
        }
      }
      puStack_e0 = &uStack_108;
      FUN_10942a570(&puStack_e0);
      puStack_e0 = &uStack_120;
      FUN_109427be4(&puStack_e0);
      lVar17 = lStack_128;
      lStack_128 = 0;
      if (lVar17 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      bVar3 = lVar11 < 3;
      lVar11 = lVar11 + -1;
      puStack_138 = puStack_138 + -0x12;
      if (bVar3) {
        return;
      }
    } while( true );
  }
  goto LAB_109429378;
code_r0x000109428e00:
  if (((ulong)puVar15 & 1) == 0) {
LAB_109428e04:
    FUN_10942887c(puVar12,puVar20,puVar30,uStack_174 & 1);
    uStack_174 = 0;
  }
  goto LAB_1094288d8;
}



/* Entry: 109428814; end: 10942887b;  */

void FUN_109428814(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint *puVar28;
  long lVar29;
  undefined *puVar30;
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  uint *puVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  uint uStack_164;
  uint *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uStack_164 = param_4;
  if (param_2 < 0x13b13b13b13b13c) {
    lVar11 = param_2 * 0xd0;
    _malloc();
    if ((param_2 == 0) || (lVar11 != 0)) {
      return;
    }
  }
  puVar12 = (uint *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puStack_128 = (uint *)PTR___ZTISt9bad_alloc_110346a68;
  puVar30 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  do {
    puVar32 = puStack_128 + -0x12;
    puVar34 = puStack_128 + -0x24;
    puVar28 = puStack_128 + -0x36;
    puVar14 = puVar12;
LAB_1094288d8:
    puVar12 = puVar14;
    uVar31 = (long)puStack_128 - (long)puVar12;
    uVar36 = ((long)uVar31 >> 3) * -0x71c71c71c71c71c7;
    if (uVar36 - 2 == 0 || (long)uVar36 < 2) {
      if (uVar36 < 2) {
        return;
      }
      if (uVar36 == 2) {
        puVar14 = puStack_128 + -0x12;
        if (*puVar12 <= puStack_128[-0x12]) {
          return;
        }
        goto LAB_109429e64;
      }
    }
    else {
      if (uVar36 == 3) {
        puVar28 = puVar12 + 0x12;
        uVar25 = *puVar28;
        puVar14 = puStack_128 + -0x12;
        if (uVar25 < *puVar12) {
          if ((uVar25 <= *puVar14) &&
             (func_0x00010942a3c4(puVar12,puVar28), puVar34 = puVar12 + 0x12, puVar12 = puVar28,
             *puVar34 <= *puVar14)) {
            return;
          }
        }
        else {
          if (uVar25 <= *puVar14) {
            return;
          }
          func_0x00010942a3c4(puVar28,puVar14);
          puVar14 = puVar28;
          if (*puVar12 <= puVar12[0x12]) {
            return;
          }
        }
LAB_109429e64:
        func_0x00010942a3c4(puVar12,puVar14);
        return;
      }
      if (uVar36 == 4) {
        FUN_109429e90(puVar12,puVar12 + 0x12,puVar12 + 0x24,puVar32);
        return;
      }
      if (uVar36 == 5) {
        FUN_109429e90(puVar12,puVar12 + 0x12,puVar12 + 0x24,puVar12 + 0x36);
        if (puVar12[0x36] <= puStack_128[-0x12]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x36,puStack_128 + -0x12);
        if (puVar12[0x24] <= puVar12[0x36]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x24,puVar12 + 0x36);
        if (puVar12[0x12] <= puVar12[0x24]) {
          return;
        }
        func_0x00010942a3c4(puVar12 + 0x12,puVar12 + 0x24);
        if (*puVar12 <= puVar12[0x12]) {
          return;
        }
        puVar14 = puVar12 + 0x12;
        goto LAB_109429e64;
      }
    }
    if ((long)uVar31 < 0x6c0) {
      if ((uStack_164 & 1) == 0) {
        if (puVar12 == puStack_128) {
          return;
        }
        if (puVar12 + 0x12 != puStack_128) {
          puVar14 = puVar12 + 0x22;
          puVar28 = puVar12 + 0x12;
          do {
            puVar34 = puVar28;
            if (puVar12[0x12] < *puVar12) {
              uStack_c0 = *(undefined8 *)(puVar12 + 0x16);
              lStack_c8 = *(long *)(puVar12 + 0x14);
              uStack_b0 = *(undefined8 *)(puVar12 + 0x1a);
              uStack_b8 = *(undefined8 *)(puVar12 + 0x18);
              puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,puVar12[0x12]);
              puVar12[0x14] = 0;
              puVar12[0x15] = 0;
              puVar12[0x16] = 0;
              puVar12[0x17] = 0;
              puVar12[0x18] = 0;
              puVar12[0x19] = 0;
              puVar12[0x1a] = 0;
              puVar12[0x1b] = 0;
              uStack_a0 = *(undefined8 *)(puVar12 + 0x1e);
              uStack_a8 = *(undefined8 *)(puVar12 + 0x1c);
              puVar12[0x1c] = 0;
              puVar12[0x1d] = 0;
              puVar12[0x1e] = 0;
              puVar12[0x1f] = 0;
              uStack_98 = *(undefined8 *)(puVar12 + 0x20);
              uStack_90 = *(undefined8 *)(puVar12 + 0x22);
              puVar12[0x20] = 0;
              puVar12[0x21] = 0;
              uVar25 = *puVar12;
              puVar12 = puVar14;
              do {
                puVar28 = puVar12;
                puVar28[-0x10] = uVar25;
                uVar24 = *(undefined8 *)(puVar28 + -0x20);
                puVar28[-0x20] = 0;
                puVar28[-0x1f] = 0;
                lVar11 = *(long *)(puVar28 + -0xe);
                *(undefined8 *)(puVar28 + -0xe) = uVar24;
                if (lVar11 != 0) {
                  FUN_1094305a8();
                  __ZdlPv();
                }
                FUN_109427db4(puVar28 + -0xc);
                *(undefined8 *)(puVar28 + -10) = *(undefined8 *)(puVar28 + -0x1c);
                *(undefined8 *)(puVar28 + -0xc) = *(undefined8 *)(puVar28 + -0x1e);
                *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -0x1a);
                puVar28[-0x1c] = 0;
                puVar28[-0x1b] = 0;
                puVar28[-0x1a] = 0;
                puVar28[-0x19] = 0;
                puVar28[-0x1e] = 0;
                puVar28[-0x1d] = 0;
                FUN_109428468(puVar28 + -6);
                lVar11 = lStack_c8;
                *(undefined8 *)(puVar28 + -4) = *(undefined8 *)(puVar28 + -0x16);
                *(undefined8 *)(puVar28 + -6) = *(undefined8 *)(puVar28 + -0x18);
                uVar24 = *(undefined8 *)(puVar28 + -0x14);
                puVar28[-0x18] = 0;
                puVar28[-0x17] = 0;
                puVar28[-0x16] = 0;
                puVar28[-0x15] = 0;
                puVar28[-0x14] = 0;
                puVar28[-0x13] = 0;
                puVar12 = puVar28 + -0x12;
                *(undefined8 *)(puVar28 + -2) = uVar24;
                *(undefined8 *)puVar28 = *(undefined8 *)puVar12;
                uVar25 = puVar28[-0x34];
              } while ((uint)puStack_d0 < uVar25);
              puVar28[-0x22] = (uint)puStack_d0;
              lStack_c8 = 0;
              lVar17 = *(long *)(puVar28 + -0x20);
              *(long *)(puVar28 + -0x20) = lVar11;
              if (lVar17 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar28 + -0x1e);
              *(undefined8 *)(puVar28 + -0x1c) = uStack_b8;
              *(undefined8 *)(puVar28 + -0x1e) = uStack_c0;
              *(undefined8 *)(puVar28 + -0x1a) = uStack_b0;
              uStack_c0 = 0;
              uStack_b8 = 0;
              uStack_b0 = 0;
              FUN_109428468(puVar28 + -0x18);
              *(undefined8 *)(puVar28 + -0x16) = uStack_a0;
              *(undefined8 *)(puVar28 + -0x18) = uStack_a8;
              *(undefined8 *)(puVar28 + -0x14) = uStack_98;
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              *(undefined8 *)puVar12 = uStack_90;
              puStack_120 = &uStack_a8;
              FUN_10942a570(&puStack_120);
              puStack_120 = &uStack_c0;
              FUN_109427be4(&puStack_120);
              lVar11 = lStack_c8;
              lStack_c8 = 0;
              if (lVar11 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
            }
            puVar28 = puVar34 + 0x12;
            puVar14 = puVar14 + 0x12;
            puVar12 = puVar34;
          } while (puVar28 != puStack_128);
          return;
        }
        return;
      }
      if (puVar12 == puStack_128) {
        return;
      }
      if (puVar12 + 0x12 == puStack_128) {
        return;
      }
      lVar11 = 0;
      puVar14 = puVar12;
      puVar28 = puVar12 + 0x12;
      break;
    }
    if (puVar30 == (undefined *)0x0) {
      if (puVar12 == puStack_128) {
        return;
      }
      uVar33 = uVar36 - 2 >> 1;
      uVar23 = uVar33;
      goto LAB_109429378;
    }
    puVar15 = puVar12 + (uVar36 >> 1) * 0x12;
    uVar25 = *puVar32;
    puVar14 = puVar12;
    if (uVar31 < 0x2401) {
      uVar8 = *puVar12;
      puVar14 = puVar15;
      if (uVar8 < *puVar15) {
        puVar16 = puVar32;
        if ((uVar25 < uVar8) ||
           (func_0x00010942a3c4(puVar15,puVar12), puVar14 = puVar12, *puVar32 < *puVar12))
        goto LAB_109428bb8;
      }
      else if ((uVar25 < uVar8) &&
              (func_0x00010942a3c4(puVar12,puVar32), puVar16 = puVar12, *puVar12 < *puVar15))
      goto LAB_109428bb8;
    }
    else {
      uVar8 = *puVar15;
      puVar16 = puVar12;
      if (uVar8 < *puVar12) {
        puVar13 = puVar32;
        if ((uVar25 < uVar8) ||
           (func_0x00010942a3c4(puVar12,puVar15), puVar16 = puVar15, *puVar32 < *puVar15)) {
LAB_109428a00:
          func_0x00010942a3c4(puVar16,puVar13);
        }
      }
      else if ((uVar25 < uVar8) &&
              (func_0x00010942a3c4(puVar15,puVar32), puVar13 = puVar15, *puVar15 < *puVar12))
      goto LAB_109428a00;
      puVar16 = puVar12 + 0x12;
      puVar13 = puVar15 + -0x12;
      uVar25 = *puVar13;
      if (uVar25 < *puVar16) {
        puVar21 = puVar34;
        if ((*puVar34 < uVar25) ||
           (func_0x00010942a3c4(puVar16,puVar13), puVar16 = puVar13, *puVar34 < *puVar13)) {
LAB_109428ab4:
          func_0x00010942a3c4(puVar16,puVar21);
        }
      }
      else if ((*puVar34 < uVar25) &&
              (func_0x00010942a3c4(puVar13,puVar34), puVar21 = puVar13, *puVar13 < *puVar16))
      goto LAB_109428ab4;
      puVar16 = puVar12 + 0x24;
      puVar21 = puVar15 + 0x12;
      uVar25 = *puVar21;
      if (uVar25 < *puVar16) {
        puVar20 = puVar28;
        if ((*puVar28 < uVar25) ||
           (func_0x00010942a3c4(puVar16,puVar21), puVar16 = puVar21, *puVar28 < *puVar21)) {
LAB_109428b38:
          func_0x00010942a3c4(puVar16,puVar20);
        }
      }
      else if ((*puVar28 < uVar25) &&
              (func_0x00010942a3c4(puVar21,puVar28), puVar20 = puVar21, *puVar21 < *puVar16))
      goto LAB_109428b38;
      uVar25 = *puVar15;
      puVar16 = puVar15;
      if (uVar25 < puVar15[-0x12]) {
        if ((puVar15[0x12] < uVar25) ||
           (func_0x00010942a3c4(puVar13,puVar15), puVar13 = puVar15, puVar15[0x12] < *puVar15)) {
LAB_109428bac:
          func_0x00010942a3c4(puVar13,puVar21);
        }
      }
      else if ((puVar15[0x12] < uVar25) &&
              (func_0x00010942a3c4(puVar15,puVar21), puVar21 = puVar15, *puVar15 < puVar15[-0x12]))
      goto LAB_109428bac;
LAB_109428bb8:
      func_0x00010942a3c4(puVar14,puVar16);
    }
    puVar30 = puVar30 + -1;
    uVar25 = *puVar12;
    if (((uStack_164 & 1) == 0) && (uVar25 <= puVar12[-0x12])) {
      puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,uVar25);
      puVar16 = puVar12 + 4;
      uVar26 = *(undefined8 *)puVar16;
      uStack_c0 = *(undefined8 *)(puVar12 + 4);
      uVar22 = *(undefined8 *)(puVar12 + 2);
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar24 = *(undefined8 *)(puVar12 + 6);
      uVar6 = *(undefined8 *)(puVar12 + 8);
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar16[0] = 0;
      puVar16[1] = 0;
      puVar15 = puVar12 + 10;
      uVar35 = *(undefined8 *)puVar15;
      uVar5 = *(undefined8 *)(puVar12 + 0xc);
      uVar7 = *(undefined8 *)(puVar12 + 0xe);
      puVar15[0] = 0;
      puVar15[1] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      uVar27 = *(undefined8 *)(puVar12 + 0x10);
      puVar14 = puVar12;
      if (uVar25 < *puVar32) {
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 <= uVar25);
      }
      else {
        do {
          puVar14 = puVar14 + 0x12;
          if (puStack_128 <= puVar14) break;
        } while (*puVar14 <= uVar25);
      }
      puVar13 = puStack_128;
      lStack_c8 = uVar22;
      uStack_b8 = uVar24;
      uStack_b0 = uVar6;
      uStack_a8 = uVar35;
      uStack_a0 = uVar5;
      uStack_98 = uVar7;
      uStack_90 = uVar27;
      if (puVar14 < puStack_128) {
        do {
          puVar13 = puVar13 + -0x12;
        } while (uVar25 < *puVar13);
      }
      while (puVar14 < puVar13) {
        func_0x00010942a3c4(puVar14,puVar13);
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 <= uVar25);
        do {
          puVar13 = puVar13 + -0x12;
        } while (uVar25 < *puVar13);
      }
      if (puVar14 + -0x12 == puVar12) {
        puVar14[-0x12] = uVar25;
        lVar11 = *(long *)(puVar14 + -0x10);
        *(undefined8 *)(puVar14 + -0x10) = uVar22;
      }
      else {
        *puVar12 = puVar14[-0x12];
        uVar22 = *(undefined8 *)(puVar14 + -0x10);
        puVar14[-0x10] = 0;
        puVar14[-0xf] = 0;
        lVar11 = *(long *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 2) = uVar22;
        if (lVar11 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar16);
        uVar22 = *(undefined8 *)(puVar14 + -0xe);
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar14 + -0xc);
        *(undefined8 *)(puVar12 + 4) = uVar22;
        *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar14 + -10);
        puVar14[-0xe] = 0;
        puVar14[-0xd] = 0;
        puVar14[-0xc] = 0;
        puVar14[-0xb] = 0;
        puVar14[-10] = 0;
        puVar14[-9] = 0;
        FUN_109428468(puVar15);
        uVar22 = *(undefined8 *)(puVar14 + -8);
        *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar14 + -6);
        *(undefined8 *)(puVar12 + 10) = uVar22;
        *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(puVar14 + -4);
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-8] = 0;
        puVar14[-7] = 0;
        *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar14 + -2);
        puVar14[-0x12] = uVar25;
        lVar11 = *(long *)(puVar14 + -0x10);
        *(long *)(puVar14 + -0x10) = lStack_c8;
      }
      lStack_c8 = 0;
      if (lVar11 != 0) {
        lStack_c8 = 0;
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar14 + -0xe);
      *(undefined8 *)(puVar14 + -0xe) = uVar26;
      *(undefined8 *)(puVar14 + -0xc) = uVar24;
      *(undefined8 *)(puVar14 + -10) = uVar6;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_109428468(puVar14 + -8);
      *(undefined8 *)(puVar14 + -8) = uVar35;
      *(undefined8 *)(puVar14 + -6) = uVar5;
      *(undefined8 *)(puVar14 + -4) = uVar7;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      *(undefined8 *)(puVar14 + -2) = uVar27;
      puStack_120 = &uStack_a8;
      FUN_10942a570(&puStack_120);
      puStack_120 = &uStack_c0;
      FUN_109427be4(&puStack_120);
      lVar11 = lStack_c8;
      lStack_c8 = 0;
      if (lVar11 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      uStack_164 = 0;
      goto LAB_1094288d8;
    }
    lVar11 = 0;
    puVar16 = puVar12 + 4;
    uVar26 = *(undefined8 *)puVar16;
    puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,uVar25);
    uStack_c0 = *(undefined8 *)(puVar12 + 4);
    uVar22 = *(undefined8 *)(puVar12 + 2);
    puVar12[2] = 0;
    puVar12[3] = 0;
    uVar24 = *(undefined8 *)(puVar12 + 6);
    uVar6 = *(undefined8 *)(puVar12 + 8);
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar16[0] = 0;
    puVar16[1] = 0;
    puVar15 = puVar12 + 10;
    uVar27 = *(undefined8 *)puVar15;
    uVar5 = *(undefined8 *)(puVar12 + 0xc);
    uVar7 = *(undefined8 *)(puVar12 + 0xe);
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    uVar35 = *(undefined8 *)(puVar12 + 0x10);
    do {
      lVar17 = lVar11 + 0x48;
      lVar11 = lVar11 + 0x48;
    } while (*(uint *)((long)puVar12 + lVar17) < uVar25);
    puVar13 = (uint *)((long)puVar12 + lVar11);
    puVar21 = puStack_128;
    if (lVar11 == 0x48) {
      do {
        if (puVar21 <= puVar13) break;
        puVar21 = puVar21 + -0x12;
      } while (uVar25 <= *puVar21);
    }
    else {
      do {
        puVar21 = puVar21 + -0x12;
      } while (uVar25 <= *puVar21);
    }
    puVar14 = puVar13;
    puVar20 = puVar21;
    lStack_c8 = uVar22;
    uStack_b8 = uVar24;
    uStack_b0 = uVar6;
    uStack_a8 = uVar27;
    uStack_a0 = uVar5;
    uStack_98 = uVar7;
    uStack_90 = uVar35;
    if (puVar13 < puVar21) {
      do {
        func_0x00010942a3c4(puVar14,puVar20);
        do {
          puVar14 = puVar14 + 0x12;
        } while (*puVar14 < uVar25);
        do {
          puVar20 = puVar20 + -0x12;
        } while (uVar25 <= *puVar20);
      } while (puVar14 < puVar20);
    }
    puVar20 = puVar14 + -0x12;
    if (puVar20 == puVar12) {
      puVar14[-0x12] = uVar25;
      lVar11 = *(long *)(puVar14 + -0x10);
      *(undefined8 *)(puVar14 + -0x10) = uVar22;
    }
    else {
      *puVar12 = puVar14[-0x12];
      uVar22 = *(undefined8 *)(puVar14 + -0x10);
      puVar14[-0x10] = 0;
      puVar14[-0xf] = 0;
      lVar11 = *(long *)(puVar12 + 2);
      *(undefined8 *)(puVar12 + 2) = uVar22;
      if (lVar11 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar16);
      uVar22 = *(undefined8 *)(puVar14 + -0xe);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar14 + -0xc);
      *(undefined8 *)(puVar12 + 4) = uVar22;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar14 + -10);
      puVar14[-0xe] = 0;
      puVar14[-0xd] = 0;
      puVar14[-0xc] = 0;
      puVar14[-0xb] = 0;
      puVar14[-10] = 0;
      puVar14[-9] = 0;
      FUN_109428468(puVar15);
      uVar22 = *(undefined8 *)(puVar14 + -8);
      *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar14 + -6);
      *(undefined8 *)(puVar12 + 10) = uVar22;
      *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(puVar14 + -4);
      puVar14[-6] = 0;
      puVar14[-5] = 0;
      puVar14[-4] = 0;
      puVar14[-3] = 0;
      puVar14[-8] = 0;
      puVar14[-7] = 0;
      *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar14 + -2);
      puVar14[-0x12] = uVar25;
      lVar11 = *(long *)(puVar14 + -0x10);
      *(long *)(puVar14 + -0x10) = lStack_c8;
    }
    lStack_c8 = 0;
    if (lVar11 != 0) {
      lStack_c8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4(puVar14 + -0xe);
    *(undefined8 *)(puVar14 + -0xe) = uVar26;
    *(undefined8 *)(puVar14 + -0xc) = uVar24;
    *(undefined8 *)(puVar14 + -10) = uVar6;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    FUN_109428468(puVar14 + -8);
    *(undefined8 *)(puVar14 + -8) = uVar27;
    *(undefined8 *)(puVar14 + -6) = uVar5;
    *(undefined8 *)(puVar14 + -4) = uVar7;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(undefined8 *)(puVar14 + -2) = uVar35;
    puStack_120 = &uStack_a8;
    FUN_10942a570(&puStack_120);
    puStack_120 = &uStack_c0;
    FUN_109427be4(&puStack_120);
    lVar11 = lStack_c8;
    lStack_c8 = 0;
    if (lVar11 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
    if (puVar13 < puVar21) goto LAB_109428e04;
    puVar15 = puVar12;
    func_0x000109429f94(puVar12,puVar20);
    puVar16 = puVar14;
    func_0x000109429f94(puVar14,puStack_128);
    if ((int)puVar16 == 0) goto code_r0x000109428e00;
    puStack_128 = puVar20;
    if (((ulong)puVar15 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1094291b8:
  if (puVar14[0x12] < *puVar14) {
    uStack_c0 = *(undefined8 *)(puVar14 + 0x16);
    lStack_c8 = *(long *)(puVar14 + 0x14);
    uStack_b0 = *(undefined8 *)(puVar14 + 0x1a);
    uStack_b8 = *(undefined8 *)(puVar14 + 0x18);
    puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,puVar14[0x12]);
    puVar14[0x14] = 0;
    puVar14[0x15] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x18] = 0;
    puVar14[0x19] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    uStack_a0 = *(undefined8 *)(puVar14 + 0x1e);
    uStack_a8 = *(undefined8 *)(puVar14 + 0x1c);
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
    uStack_98 = *(undefined8 *)(puVar14 + 0x20);
    uStack_90 = *(undefined8 *)(puVar14 + 0x22);
    puVar14[0x20] = 0;
    puVar14[0x21] = 0;
    uVar25 = *puVar14;
    lVar17 = lVar11;
    do {
      lVar19 = lVar17;
      *(uint *)((long)puVar12 + lVar19 + 0x48) = uVar25;
      uVar24 = *(undefined8 *)((long)puVar12 + lVar19 + 8);
      *(undefined8 *)((long)puVar12 + lVar19 + 8) = 0;
      lVar17 = *(long *)((long)puVar12 + lVar19 + 0x50);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x50) = uVar24;
      if (lVar17 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4((long)puVar12 + lVar19 + 0x58);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x60) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x18);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x58) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x10);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x68) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x20);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x18) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x20) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x10) = 0;
      FUN_109428468((long)puVar12 + lVar19 + 0x70);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x78) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x30);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x70) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x28);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x28) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x30) = 0;
      uVar24 = *(undefined8 *)((long)puVar12 + lVar19 + 0x38);
      *(undefined8 *)((long)puVar12 + lVar19 + 0x38) = 0;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x80) = uVar24;
      *(undefined8 *)((long)puVar12 + lVar19 + 0x88) =
           *(undefined8 *)((long)puVar12 + lVar19 + 0x40);
      if (lVar19 == 0) {
        *puVar12 = (uint)puStack_d0;
        lVar17 = *(long *)(puVar12 + 2);
        *(long *)(puVar12 + 2) = lStack_c8;
        puVar14 = puVar12;
        goto joined_r0x0001094292c4;
      }
      uVar25 = *(uint *)((long)puVar12 + lVar19 + -0x48);
      lVar17 = lVar19 + -0x48;
    } while ((uint)puStack_d0 < uVar25);
    puVar14 = (uint *)((long)puVar12 + lVar19);
    *puVar14 = (uint)puStack_d0;
    lVar17 = *(long *)((long)puVar12 + lVar19 + 8);
    *(long *)((long)puVar12 + lVar19 + 8) = lStack_c8;
joined_r0x0001094292c4:
    lStack_c8 = 0;
    if (lVar17 != 0) {
      lStack_c8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4((long)puVar12 + lVar19 + 0x10);
    *(undefined8 *)((long)puVar12 + lVar19 + 0x10) = uStack_c0;
    *(undefined8 *)(puVar14 + 8) = uStack_b0;
    *(undefined8 *)(puVar14 + 6) = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    FUN_109428468((long)puVar12 + lVar19 + 0x28);
    *(undefined8 *)((long)puVar12 + lVar19 + 0x28) = uStack_a8;
    *(undefined8 *)(puVar14 + 0xe) = uStack_98;
    *(undefined8 *)(puVar14 + 0xc) = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(undefined8 *)(puVar14 + 0x10) = uStack_90;
    puStack_120 = &uStack_a8;
    FUN_10942a570(&puStack_120);
    puStack_120 = &uStack_c0;
    FUN_109427be4(&puStack_120);
    lVar17 = lStack_c8;
    lStack_c8 = 0;
    if (lVar17 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
  }
  puVar34 = puVar28 + 0x12;
  lVar11 = lVar11 + 0x48;
  puVar14 = puVar28;
  puVar28 = puVar34;
  if (puVar34 == puStack_128) {
    return;
  }
  goto LAB_1094291b8;
LAB_109429378:
  if ((long)uVar23 <= (long)uVar33) {
    uVar2 = uVar23 << 1 | 1;
    puVar14 = puVar12 + uVar2 * 0x12;
    uVar38 = uVar23 * 2 + 2;
    if ((long)uVar38 < (long)uVar36) {
      uVar25 = *puVar14;
      uVar9 = puVar14[0x12];
      uVar8 = uVar25;
      if (uVar25 <= uVar9) {
        uVar8 = uVar9;
      }
      puVar28 = puVar14 + 0x12;
      if (uVar9 <= uVar25) {
        uVar38 = uVar2;
        puVar28 = puVar14;
      }
      puVar14 = puVar28;
      puVar28 = puVar12 + uVar23 * 0x12;
      uVar25 = *puVar28;
      if (uVar25 <= uVar8) {
LAB_1094293f0:
        puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,uVar25);
        uStack_c0 = *(undefined8 *)(puVar28 + 4);
        lStack_c8 = *(long *)(puVar28 + 2);
        puVar28[2] = 0;
        puVar28[3] = 0;
        uStack_b0 = *(undefined8 *)(puVar28 + 8);
        uStack_b8 = *(undefined8 *)(puVar28 + 6);
        puVar28[4] = 0;
        puVar28[5] = 0;
        puVar28[6] = 0;
        puVar28[7] = 0;
        puVar28[8] = 0;
        puVar28[9] = 0;
        uStack_a0 = *(undefined8 *)(puVar28 + 0xc);
        uStack_a8 = *(undefined8 *)(puVar28 + 10);
        uStack_98 = *(undefined8 *)(puVar28 + 0xe);
        puVar28[0xc] = 0;
        puVar28[0xd] = 0;
        puVar28[0xe] = 0;
        puVar28[0xf] = 0;
        puVar28[10] = 0;
        puVar28[0xb] = 0;
        uStack_90 = *(undefined8 *)(puVar28 + 0x10);
        uVar25 = *puVar14;
        do {
          while( true ) {
            puVar34 = puVar14;
            *puVar28 = uVar25;
            uVar24 = *(undefined8 *)(puVar34 + 2);
            puVar34[2] = 0;
            puVar34[3] = 0;
            lVar11 = *(long *)(puVar28 + 2);
            *(undefined8 *)(puVar28 + 2) = uVar24;
            if (lVar11 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar28 + 4);
            puVar32 = puVar34 + 4;
            uVar24 = *(undefined8 *)puVar32;
            *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(puVar34 + 6);
            *(undefined8 *)(puVar28 + 4) = uVar24;
            *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar34 + 8);
            puVar32[0] = 0;
            puVar32[1] = 0;
            puVar34[6] = 0;
            puVar34[7] = 0;
            puVar34[8] = 0;
            puVar34[9] = 0;
            FUN_109428468(puVar28 + 10);
            lVar11 = lStack_c8;
            puVar15 = puVar34 + 10;
            uVar24 = *(undefined8 *)puVar15;
            *(undefined8 *)(puVar28 + 0xc) = *(undefined8 *)(puVar34 + 0xc);
            *(undefined8 *)(puVar28 + 10) = uVar24;
            *(undefined8 *)(puVar28 + 0xe) = *(undefined8 *)(puVar34 + 0xe);
            puVar15[0] = 0;
            puVar15[1] = 0;
            puVar34[0xc] = 0;
            puVar34[0xd] = 0;
            puVar34[0xe] = 0;
            puVar34[0xf] = 0;
            *(undefined8 *)(puVar28 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
            if ((long)uVar33 < (long)uVar38) goto LAB_109429520;
            uVar2 = uVar38 << 1 | 1;
            puVar16 = puVar12 + uVar2 * 0x12;
            uVar38 = uVar38 * 2 + 2;
            puVar28 = puVar34;
            if ((long)uVar38 < (long)uVar36) break;
            uVar25 = *puVar16;
            puVar14 = puVar16;
            uVar38 = uVar2;
            if (uVar25 < (uint)puStack_d0) goto LAB_109429520;
          }
          uVar8 = *puVar16;
          uVar9 = puVar16[0x12];
          uVar25 = uVar8;
          if (uVar8 <= uVar9) {
            uVar25 = uVar9;
          }
          puVar14 = puVar16 + 0x12;
          if (uVar9 <= uVar8) {
            uVar38 = uVar2;
            puVar14 = puVar16;
          }
        } while ((uint)puStack_d0 <= uVar25);
LAB_109429520:
        *puVar34 = (uint)puStack_d0;
        lStack_c8 = 0;
        lVar17 = *(long *)(puVar34 + 2);
        *(long *)(puVar34 + 2) = lVar11;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar32);
        *(undefined8 *)(puVar34 + 6) = uStack_b8;
        *(undefined8 *)(puVar34 + 4) = uStack_c0;
        *(undefined8 *)(puVar34 + 8) = uStack_b0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        FUN_109428468(puVar15);
        *(undefined8 *)(puVar34 + 0xc) = uStack_a0;
        *(undefined8 *)(puVar34 + 10) = uStack_a8;
        *(undefined8 *)(puVar34 + 0xe) = uStack_98;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        *(undefined8 *)(puVar34 + 0x10) = uStack_90;
        puStack_120 = &uStack_a8;
        FUN_10942a570(&puStack_120);
        puStack_120 = &uStack_c0;
        FUN_109427be4(&puStack_120);
        lVar11 = lStack_c8;
        lStack_c8 = 0;
        if (lVar11 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
      }
    }
    else {
      puVar28 = puVar12 + uVar23 * 0x12;
      uVar25 = *puVar28;
      uVar38 = uVar2;
      if (uVar25 <= *puVar14) goto LAB_1094293f0;
    }
  }
  bVar3 = uVar23 == 0;
  uVar23 = uVar23 - 1;
  if (bVar3) {
    lVar11 = (uVar31 >> 3) * -0x71c71c71c71c71c7;
    do {
      uVar31 = 0;
      puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*puVar12);
      uStack_110 = *(undefined8 *)(puVar12 + 4);
      lStack_118 = *(long *)(puVar12 + 2);
      puVar12[2] = 0;
      puVar12[3] = 0;
      uStack_100 = *(undefined8 *)(puVar12 + 8);
      uStack_108 = *(undefined8 *)(puVar12 + 6);
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      uStack_f0 = *(undefined8 *)(puVar12 + 0xc);
      uStack_f8 = *(undefined8 *)(puVar12 + 10);
      uStack_e8 = *(undefined8 *)(puVar12 + 0xe);
      uStack_e0 = *(undefined8 *)(puVar12 + 0x10);
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar14 = puVar12;
      do {
        puVar28 = puVar14 + uVar31 * 0x12 + 0x12;
        uVar23 = uVar31 << 1 | 1;
        uVar36 = uVar31 * 2 + 2;
        if ((long)uVar36 < lVar11) {
          lVar17 = uVar31 * 0x12;
          uVar9 = puVar14[lVar17 + 0x24];
          uVar8 = puVar14[uVar31 * 0x12 + 0x12];
          uVar25 = uVar8;
          if (uVar8 <= uVar9) {
            uVar25 = uVar9;
          }
          uVar31 = uVar36;
          puVar34 = puVar14 + lVar17 + 0x24;
          if (uVar9 <= uVar8) {
            uVar31 = uVar23;
            puVar34 = puVar28;
          }
          *puVar14 = uVar25;
          uVar24 = *(undefined8 *)(puVar34 + 2);
          puVar34[2] = 0;
          puVar34[3] = 0;
          lVar17 = *(long *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = uVar24;
        }
        else {
          *puVar14 = *puVar28;
          uVar24 = *(undefined8 *)(puVar14 + uVar31 * 0x12 + 0x14);
          (puVar14 + uVar31 * 0x12 + 0x14)[0] = 0;
          (puVar14 + uVar31 * 0x12 + 0x14)[1] = 0;
          lVar17 = *(long *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = uVar24;
          puVar34 = puVar28;
          uVar31 = uVar23;
        }
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        puVar28 = puVar14 + 4;
        lVar17 = *(long *)puVar28;
        if (lVar17 != 0) {
          lVar37 = *(long *)(puVar14 + 6);
          lVar19 = lVar17;
          if (lVar37 != lVar17) {
            do {
              if (*(long *)(lVar37 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar37 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar37 + -0x38) != 0)) {
                  plVar18 = *(long **)(*(long *)(lVar37 + -0x38) + 8);
                  if ((plVar18 == (long *)0x0) &&
                     ((plVar18 = *(long **)(lVar37 + -0x40),
                      *(long **)(lVar37 + -0x40) == (long *)0x0 &&
                      (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar18 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar18 + 0x30))();
                }
              }
              *(undefined8 *)(lVar37 + -0x38) = 0;
              *(undefined8 *)(lVar37 + -0x58) = 0;
              *(undefined8 *)(lVar37 + -0x60) = 0;
              *(undefined8 *)(lVar37 + -0x48) = 0;
              *(undefined8 *)(lVar37 + -0x50) = 0;
              if (0 < *(int *)(lVar37 + -0x6c)) {
                lVar19 = 0;
                lVar29 = *(long *)(lVar37 + -0x30);
                do {
                  *(undefined4 *)(lVar29 + lVar19 * 4) = 0;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < *(int *)(lVar37 + -0x6c));
              }
              lVar19 = *(long *)(lVar37 + -0x28);
              if (lVar19 != lVar37 + -0x20 && lVar19 != 0) {
                _free(*(undefined8 *)(lVar19 + -8));
              }
              lVar37 = lVar37 + -0xc0;
            } while (lVar37 != lVar17);
            lVar19 = *(long *)puVar28;
          }
          *(long *)(puVar14 + 6) = lVar17;
          _free(lVar19);
          puVar28[0] = 0;
          puVar28[1] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
        }
        uVar24 = *(undefined8 *)(puVar34 + 4);
        *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(puVar34 + 6);
        *(undefined8 *)(puVar14 + 4) = uVar24;
        *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar34 + 8);
        puVar34[4] = 0;
        puVar34[5] = 0;
        puVar34[6] = 0;
        puVar34[7] = 0;
        puVar34[8] = 0;
        puVar34[9] = 0;
        puVar28 = puVar14 + 10;
        lVar17 = *(long *)puVar28;
        if (lVar17 != 0) {
          lVar37 = *(long *)(puVar14 + 0xc);
          lVar19 = lVar17;
          if (lVar37 != lVar17) {
            do {
              if (*(long *)(lVar37 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar37 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar37 + -0x38) != 0)) {
                  plVar18 = *(long **)(*(long *)(lVar37 + -0x38) + 8);
                  if ((plVar18 == (long *)0x0) &&
                     ((plVar18 = *(long **)(lVar37 + -0x40),
                      *(long **)(lVar37 + -0x40) == (long *)0x0 &&
                      (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar18 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar18 + 0x30))();
                }
              }
              *(undefined8 *)(lVar37 + -0x38) = 0;
              *(undefined8 *)(lVar37 + -0x58) = 0;
              *(undefined8 *)(lVar37 + -0x60) = 0;
              *(undefined8 *)(lVar37 + -0x48) = 0;
              *(undefined8 *)(lVar37 + -0x50) = 0;
              if (0 < *(int *)(lVar37 + -0x6c)) {
                lVar19 = 0;
                lVar29 = *(long *)(lVar37 + -0x30);
                do {
                  *(undefined4 *)(lVar29 + lVar19 * 4) = 0;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < *(int *)(lVar37 + -0x6c));
              }
              lVar19 = *(long *)(lVar37 + -0x28);
              if (lVar19 != lVar37 + -0x20 && lVar19 != 0) {
                _free(*(undefined8 *)(lVar19 + -8));
              }
              lVar37 = lVar37 + -0xd0;
            } while (lVar37 != lVar17);
            lVar19 = *(long *)puVar28;
          }
          *(long *)(puVar14 + 0xc) = lVar17;
          _free(lVar19);
          puVar28[0] = 0;
          puVar28[1] = 0;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
        }
        lVar17 = lStack_118;
        uVar24 = *(undefined8 *)(puVar34 + 10);
        *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(puVar34 + 0xc);
        *(undefined8 *)(puVar14 + 10) = uVar24;
        *(undefined8 *)(puVar14 + 0xe) = *(undefined8 *)(puVar34 + 0xe);
        puVar34[10] = 0;
        puVar34[0xb] = 0;
        puVar34[0xc] = 0;
        puVar34[0xd] = 0;
        puVar34[0xe] = 0;
        puVar34[0xf] = 0;
        *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
        puVar14 = puVar34;
      } while ((long)uVar31 <= (long)(lVar11 - 2U >> 1));
      if (puVar34 == puStack_128 + -0x12) {
        *puVar34 = (uint)puStack_120;
        lStack_118 = 0;
        lVar19 = *(long *)(puVar34 + 2);
        *(long *)(puVar34 + 2) = lVar17;
        if (lVar19 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar34 + 4);
        *(undefined8 *)(puVar34 + 6) = uStack_108;
        *(undefined8 *)(puVar34 + 4) = uStack_110;
        *(undefined8 *)(puVar34 + 8) = uStack_100;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        FUN_109428468(puVar34 + 10);
        *(undefined8 *)(puVar34 + 0xc) = uStack_f0;
        *(undefined8 *)(puVar34 + 10) = uStack_f8;
        *(undefined8 *)(puVar34 + 0xe) = uStack_e8;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        *(undefined8 *)(puVar34 + 0x10) = uStack_e0;
      }
      else {
        *puVar34 = puStack_128[-0x12];
        uVar24 = *(undefined8 *)(puStack_128 + -0x10);
        puStack_128[-0x10] = 0;
        puStack_128[-0xf] = 0;
        lVar17 = *(long *)(puVar34 + 2);
        *(undefined8 *)(puVar34 + 2) = uVar24;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar34 + 4);
        puVar14 = puStack_128 + -0xe;
        uVar24 = *(undefined8 *)puVar14;
        *(undefined8 *)(puVar34 + 6) = *(undefined8 *)(puStack_128 + -0xc);
        *(undefined8 *)(puVar34 + 4) = uVar24;
        *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puStack_128 + -10);
        puVar14[0] = 0;
        puVar14[1] = 0;
        puStack_128[-0xc] = 0;
        puStack_128[-0xb] = 0;
        puStack_128[-10] = 0;
        puStack_128[-9] = 0;
        FUN_109428468(puVar34 + 10);
        lVar17 = lStack_118;
        puVar28 = puStack_128 + -8;
        uVar24 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puStack_128 + -6);
        *(undefined8 *)(puVar34 + 10) = uVar24;
        *(undefined8 *)(puVar34 + 0xe) = *(undefined8 *)(puStack_128 + -4);
        puStack_128[-6] = 0;
        puStack_128[-5] = 0;
        puStack_128[-4] = 0;
        puStack_128[-3] = 0;
        puVar28[0] = 0;
        puVar28[1] = 0;
        *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puStack_128 + -2);
        puStack_128[-0x12] = (uint)puStack_120;
        lStack_118 = 0;
        lVar19 = *(long *)(puStack_128 + -0x10);
        *(long *)(puStack_128 + -0x10) = lVar17;
        if (lVar19 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar14);
        *(undefined8 *)(puStack_128 + -0xc) = uStack_108;
        *(undefined8 *)(puStack_128 + -0xe) = uStack_110;
        *(undefined8 *)(puStack_128 + -10) = uStack_100;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        FUN_109428468(puVar28);
        *(undefined8 *)(puStack_128 + -6) = uStack_f0;
        *(undefined8 *)(puStack_128 + -8) = uStack_f8;
        *(undefined8 *)(puStack_128 + -4) = uStack_e8;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        *(undefined8 *)(puStack_128 + -2) = uStack_e0;
        uVar31 = (long)puVar34 + (0x48 - (long)puVar12);
        if (0x48 < (long)uVar31) {
          uVar31 = (uVar31 >> 3) * -0x71c71c71c71c71c7 - 2 >> 1;
          puVar14 = puVar12 + uVar31 * 0x12;
          if (*puVar14 < *puVar34) {
            puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,*puVar34);
            uStack_c0 = *(undefined8 *)(puVar34 + 4);
            lStack_c8 = *(long *)(puVar34 + 2);
            puVar34[2] = 0;
            puVar34[3] = 0;
            uStack_b0 = *(undefined8 *)(puVar34 + 8);
            uStack_b8 = *(undefined8 *)(puVar34 + 6);
            puVar34[6] = 0;
            puVar34[7] = 0;
            puVar34[8] = 0;
            puVar34[9] = 0;
            puVar34[4] = 0;
            puVar34[5] = 0;
            uStack_a0 = *(undefined8 *)(puVar34 + 0xc);
            uStack_a8 = *(undefined8 *)(puVar34 + 10);
            uStack_98 = *(undefined8 *)(puVar34 + 0xe);
            uStack_90 = *(undefined8 *)(puVar34 + 0x10);
            puVar34[0xc] = 0;
            puVar34[0xd] = 0;
            puVar34[0xe] = 0;
            puVar34[0xf] = 0;
            puVar34[10] = 0;
            puVar34[0xb] = 0;
            uVar25 = *puVar14;
            do {
              puVar28 = puVar14;
              *puVar34 = uVar25;
              uVar24 = *(undefined8 *)(puVar28 + 2);
              puVar28[2] = 0;
              puVar28[3] = 0;
              lVar17 = *(long *)(puVar34 + 2);
              *(undefined8 *)(puVar34 + 2) = uVar24;
              if (lVar17 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar34 + 4);
              puVar32 = puVar28 + 4;
              uVar24 = *(undefined8 *)puVar32;
              *(undefined8 *)(puVar34 + 6) = *(undefined8 *)(puVar28 + 6);
              *(undefined8 *)(puVar34 + 4) = uVar24;
              *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puVar28 + 8);
              puVar32[0] = 0;
              puVar32[1] = 0;
              puVar28[6] = 0;
              puVar28[7] = 0;
              puVar28[8] = 0;
              puVar28[9] = 0;
              FUN_109428468(puVar34 + 10);
              lVar17 = lStack_c8;
              puVar15 = puVar28 + 10;
              uVar24 = *(undefined8 *)puVar15;
              *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar28 + 0xc);
              *(undefined8 *)(puVar34 + 10) = uVar24;
              *(undefined8 *)(puVar34 + 0xe) = *(undefined8 *)(puVar28 + 0xe);
              puVar15[0] = 0;
              puVar15[1] = 0;
              puVar28[0xc] = 0;
              puVar28[0xd] = 0;
              puVar28[0xe] = 0;
              puVar28[0xf] = 0;
              *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puVar28 + 0x10);
              if (uVar31 == 0) break;
              uVar31 = uVar31 - 1 >> 1;
              uVar25 = puVar12[uVar31 * 0x12];
              puVar14 = puVar12 + uVar31 * 0x12;
              puVar34 = puVar28;
            } while (uVar25 < (uint)puStack_d0);
            *puVar28 = (uint)puStack_d0;
            lStack_c8 = 0;
            lVar19 = *(long *)(puVar28 + 2);
            *(long *)(puVar28 + 2) = lVar17;
            if (lVar19 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar32);
            *(undefined8 *)(puVar28 + 6) = uStack_b8;
            *(undefined8 *)(puVar28 + 4) = uStack_c0;
            *(undefined8 *)(puVar28 + 8) = uStack_b0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            FUN_109428468(puVar15);
            *(undefined8 *)(puVar28 + 0xc) = uStack_a0;
            *(undefined8 *)(puVar28 + 10) = uStack_a8;
            *(undefined8 *)(puVar28 + 0xe) = uStack_98;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            *(undefined8 *)(puVar28 + 0x10) = uStack_90;
            puStack_d8 = &uStack_a8;
            FUN_10942a570(&puStack_d8);
            puStack_d8 = &uStack_c0;
            FUN_109427be4(&puStack_d8);
            lVar17 = lStack_c8;
            lStack_c8 = 0;
            if (lVar17 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
          }
        }
      }
      puStack_d0 = &uStack_f8;
      FUN_10942a570(&puStack_d0);
      puStack_d0 = &uStack_110;
      FUN_109427be4(&puStack_d0);
      lVar17 = lStack_118;
      lStack_118 = 0;
      if (lVar17 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      bVar3 = lVar11 < 3;
      lVar11 = lVar11 + -1;
      puStack_128 = puStack_128 + -0x12;
      if (bVar3) {
        return;
      }
    } while( true );
  }
  goto LAB_109429378;
code_r0x000109428e00:
  if (((ulong)puVar15 & 1) == 0) {
LAB_109428e04:
    FUN_10942887c(puVar12,puVar20,puVar30,uStack_164 & 1);
    uStack_164 = 0;
  }
  goto LAB_1094288d8;
}



/* Entry: 10942887c; end: 109429e8f;  */

void FUN_10942887c(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint *puVar27;
  long lVar28;
  ulong uVar29;
  uint *puVar30;
  ulong uVar31;
  uint *puVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uStack_144;
  uint *puStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_144 = param_4;
  puStack_108 = param_2;
  do {
    puVar30 = puStack_108 + -0x12;
    puVar32 = puStack_108 + -0x24;
    puVar27 = puStack_108 + -0x36;
    puVar12 = param_1;
LAB_1094288d8:
    param_1 = puVar12;
    uVar29 = (long)puStack_108 - (long)param_1;
    uVar34 = ((long)uVar29 >> 3) * -0x71c71c71c71c71c7;
    if (uVar34 - 2 == 0 || (long)uVar34 < 2) {
      if (uVar34 < 2) {
        return;
      }
      if (uVar34 == 2) {
        puVar12 = puStack_108 + -0x12;
        if (*param_1 <= puStack_108[-0x12]) {
          return;
        }
        goto LAB_109429e64;
      }
    }
    else {
      if (uVar34 == 3) {
        puVar27 = param_1 + 0x12;
        uVar24 = *puVar27;
        puVar12 = puStack_108 + -0x12;
        if (uVar24 < *param_1) {
          if ((uVar24 <= *puVar12) &&
             (func_0x00010942a3c4(param_1,puVar27), puVar32 = param_1 + 0x12, param_1 = puVar27,
             *puVar32 <= *puVar12)) {
            return;
          }
        }
        else {
          if (uVar24 <= *puVar12) {
            return;
          }
          func_0x00010942a3c4(puVar27,puVar12);
          puVar12 = puVar27;
          if (*param_1 <= param_1[0x12]) {
            return;
          }
        }
LAB_109429e64:
        func_0x00010942a3c4(param_1,puVar12);
        return;
      }
      if (uVar34 == 4) {
        FUN_109429e90(param_1,param_1 + 0x12,param_1 + 0x24,puVar30);
        return;
      }
      if (uVar34 == 5) {
        FUN_109429e90(param_1,param_1 + 0x12,param_1 + 0x24,param_1 + 0x36);
        if (param_1[0x36] <= puStack_108[-0x12]) {
          return;
        }
        func_0x00010942a3c4(param_1 + 0x36,puStack_108 + -0x12);
        if (param_1[0x24] <= param_1[0x36]) {
          return;
        }
        func_0x00010942a3c4(param_1 + 0x24,param_1 + 0x36);
        if (param_1[0x12] <= param_1[0x24]) {
          return;
        }
        func_0x00010942a3c4(param_1 + 0x12,param_1 + 0x24);
        if (*param_1 <= param_1[0x12]) {
          return;
        }
        puVar12 = param_1 + 0x12;
        goto LAB_109429e64;
      }
    }
    if ((long)uVar29 < 0x6c0) {
      if ((uStack_144 & 1) == 0) {
        if (param_1 == puStack_108) {
          return;
        }
        if (param_1 + 0x12 != puStack_108) {
          puVar12 = param_1 + 0x22;
          puVar27 = param_1 + 0x12;
          do {
            puVar32 = puVar27;
            if (param_1[0x12] < *param_1) {
              uStack_a0 = *(undefined8 *)(param_1 + 0x16);
              lStack_a8 = *(long *)(param_1 + 0x14);
              uStack_90 = *(undefined8 *)(param_1 + 0x1a);
              uStack_98 = *(undefined8 *)(param_1 + 0x18);
              puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,param_1[0x12]);
              param_1[0x14] = 0;
              param_1[0x15] = 0;
              param_1[0x16] = 0;
              param_1[0x17] = 0;
              param_1[0x18] = 0;
              param_1[0x19] = 0;
              param_1[0x1a] = 0;
              param_1[0x1b] = 0;
              uStack_80 = *(undefined8 *)(param_1 + 0x1e);
              uStack_88 = *(undefined8 *)(param_1 + 0x1c);
              param_1[0x1c] = 0;
              param_1[0x1d] = 0;
              param_1[0x1e] = 0;
              param_1[0x1f] = 0;
              uStack_78 = *(undefined8 *)(param_1 + 0x20);
              uStack_70 = *(undefined8 *)(param_1 + 0x22);
              param_1[0x20] = 0;
              param_1[0x21] = 0;
              uVar24 = *param_1;
              puVar27 = puVar12;
              do {
                puVar30 = puVar27;
                puVar30[-0x10] = uVar24;
                uVar23 = *(undefined8 *)(puVar30 + -0x20);
                puVar30[-0x20] = 0;
                puVar30[-0x1f] = 0;
                lVar20 = *(long *)(puVar30 + -0xe);
                *(undefined8 *)(puVar30 + -0xe) = uVar23;
                if (lVar20 != 0) {
                  FUN_1094305a8();
                  __ZdlPv();
                }
                FUN_109427db4(puVar30 + -0xc);
                *(undefined8 *)(puVar30 + -10) = *(undefined8 *)(puVar30 + -0x1c);
                *(undefined8 *)(puVar30 + -0xc) = *(undefined8 *)(puVar30 + -0x1e);
                *(undefined8 *)(puVar30 + -8) = *(undefined8 *)(puVar30 + -0x1a);
                puVar30[-0x1c] = 0;
                puVar30[-0x1b] = 0;
                puVar30[-0x1a] = 0;
                puVar30[-0x19] = 0;
                puVar30[-0x1e] = 0;
                puVar30[-0x1d] = 0;
                FUN_109428468(puVar30 + -6);
                lVar20 = lStack_a8;
                *(undefined8 *)(puVar30 + -4) = *(undefined8 *)(puVar30 + -0x16);
                *(undefined8 *)(puVar30 + -6) = *(undefined8 *)(puVar30 + -0x18);
                uVar23 = *(undefined8 *)(puVar30 + -0x14);
                puVar30[-0x18] = 0;
                puVar30[-0x17] = 0;
                puVar30[-0x16] = 0;
                puVar30[-0x15] = 0;
                puVar30[-0x14] = 0;
                puVar30[-0x13] = 0;
                puVar27 = puVar30 + -0x12;
                *(undefined8 *)(puVar30 + -2) = uVar23;
                *(undefined8 *)puVar30 = *(undefined8 *)puVar27;
                uVar24 = puVar30[-0x34];
              } while ((uint)puStack_b0 < uVar24);
              puVar30[-0x22] = (uint)puStack_b0;
              lStack_a8 = 0;
              lVar15 = *(long *)(puVar30 + -0x20);
              *(long *)(puVar30 + -0x20) = lVar20;
              if (lVar15 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar30 + -0x1e);
              *(undefined8 *)(puVar30 + -0x1c) = uStack_98;
              *(undefined8 *)(puVar30 + -0x1e) = uStack_a0;
              *(undefined8 *)(puVar30 + -0x1a) = uStack_90;
              uStack_a0 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              FUN_109428468(puVar30 + -0x18);
              *(undefined8 *)(puVar30 + -0x16) = uStack_80;
              *(undefined8 *)(puVar30 + -0x18) = uStack_88;
              *(undefined8 *)(puVar30 + -0x14) = uStack_78;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_78 = 0;
              *(undefined8 *)puVar27 = uStack_70;
              puStack_100 = &uStack_88;
              FUN_10942a570(&puStack_100);
              puStack_100 = &uStack_a0;
              FUN_109427be4(&puStack_100);
              lVar20 = lStack_a8;
              lStack_a8 = 0;
              if (lVar20 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
            }
            puVar27 = puVar32 + 0x12;
            puVar12 = puVar12 + 0x12;
            param_1 = puVar32;
          } while (puVar27 != puStack_108);
          return;
        }
        return;
      }
      if (param_1 == puStack_108) {
        return;
      }
      if (param_1 + 0x12 == puStack_108) {
        return;
      }
      lVar20 = 0;
      puVar12 = param_1;
      puVar27 = param_1 + 0x12;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == puStack_108) {
        return;
      }
      uVar31 = uVar34 - 2 >> 1;
      uVar22 = uVar31;
      goto LAB_109429378;
    }
    puVar13 = param_1 + (uVar34 >> 1) * 0x12;
    uVar24 = *puVar30;
    puVar12 = param_1;
    if (uVar29 < 0x2401) {
      uVar8 = *param_1;
      puVar12 = puVar13;
      if (uVar8 < *puVar13) {
        puVar14 = puVar30;
        if ((uVar24 < uVar8) ||
           (func_0x00010942a3c4(puVar13,param_1), puVar12 = param_1, *puVar30 < *param_1))
        goto LAB_109428bb8;
      }
      else if ((uVar24 < uVar8) &&
              (func_0x00010942a3c4(param_1,puVar30), puVar14 = param_1, *param_1 < *puVar13))
      goto LAB_109428bb8;
    }
    else {
      uVar8 = *puVar13;
      puVar14 = param_1;
      if (uVar8 < *param_1) {
        puVar11 = puVar30;
        if ((uVar24 < uVar8) ||
           (func_0x00010942a3c4(param_1,puVar13), puVar14 = puVar13, *puVar30 < *puVar13)) {
LAB_109428a00:
          func_0x00010942a3c4(puVar14,puVar11);
        }
      }
      else if ((uVar24 < uVar8) &&
              (func_0x00010942a3c4(puVar13,puVar30), puVar11 = puVar13, *puVar13 < *param_1))
      goto LAB_109428a00;
      puVar14 = param_1 + 0x12;
      puVar11 = puVar13 + -0x12;
      uVar24 = *puVar11;
      if (uVar24 < *puVar14) {
        puVar19 = puVar32;
        if ((*puVar32 < uVar24) ||
           (func_0x00010942a3c4(puVar14,puVar11), puVar14 = puVar11, *puVar32 < *puVar11)) {
LAB_109428ab4:
          func_0x00010942a3c4(puVar14,puVar19);
        }
      }
      else if ((*puVar32 < uVar24) &&
              (func_0x00010942a3c4(puVar11,puVar32), puVar19 = puVar11, *puVar11 < *puVar14))
      goto LAB_109428ab4;
      puVar14 = param_1 + 0x24;
      puVar19 = puVar13 + 0x12;
      uVar24 = *puVar19;
      if (uVar24 < *puVar14) {
        puVar18 = puVar27;
        if ((*puVar27 < uVar24) ||
           (func_0x00010942a3c4(puVar14,puVar19), puVar14 = puVar19, *puVar27 < *puVar19)) {
LAB_109428b38:
          func_0x00010942a3c4(puVar14,puVar18);
        }
      }
      else if ((*puVar27 < uVar24) &&
              (func_0x00010942a3c4(puVar19,puVar27), puVar18 = puVar19, *puVar19 < *puVar14))
      goto LAB_109428b38;
      uVar24 = *puVar13;
      puVar14 = puVar13;
      if (uVar24 < puVar13[-0x12]) {
        if ((puVar13[0x12] < uVar24) ||
           (func_0x00010942a3c4(puVar11,puVar13), puVar11 = puVar13, puVar13[0x12] < *puVar13)) {
LAB_109428bac:
          func_0x00010942a3c4(puVar11,puVar19);
        }
      }
      else if ((puVar13[0x12] < uVar24) &&
              (func_0x00010942a3c4(puVar13,puVar19), puVar19 = puVar13, *puVar13 < puVar13[-0x12]))
      goto LAB_109428bac;
LAB_109428bb8:
      func_0x00010942a3c4(puVar12,puVar14);
    }
    param_3 = param_3 + -1;
    uVar24 = *param_1;
    if (((uStack_144 & 1) == 0) && (uVar24 <= param_1[-0x12])) {
      puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,uVar24);
      puVar14 = param_1 + 4;
      uVar25 = *(undefined8 *)puVar14;
      uStack_a0 = *(undefined8 *)(param_1 + 4);
      uVar21 = *(undefined8 *)(param_1 + 2);
      param_1[2] = 0;
      param_1[3] = 0;
      uVar23 = *(undefined8 *)(param_1 + 6);
      uVar6 = *(undefined8 *)(param_1 + 8);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar13 = param_1 + 10;
      uVar33 = *(undefined8 *)puVar13;
      uVar5 = *(undefined8 *)(param_1 + 0xc);
      uVar7 = *(undefined8 *)(param_1 + 0xe);
      puVar13[0] = 0;
      puVar13[1] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      uVar26 = *(undefined8 *)(param_1 + 0x10);
      puVar12 = param_1;
      if (uVar24 < *puVar30) {
        do {
          puVar12 = puVar12 + 0x12;
        } while (*puVar12 <= uVar24);
      }
      else {
        do {
          puVar12 = puVar12 + 0x12;
          if (puStack_108 <= puVar12) break;
        } while (*puVar12 <= uVar24);
      }
      puVar11 = puStack_108;
      lStack_a8 = uVar21;
      uStack_98 = uVar23;
      uStack_90 = uVar6;
      uStack_88 = uVar33;
      uStack_80 = uVar5;
      uStack_78 = uVar7;
      uStack_70 = uVar26;
      if (puVar12 < puStack_108) {
        do {
          puVar11 = puVar11 + -0x12;
        } while (uVar24 < *puVar11);
      }
      while (puVar12 < puVar11) {
        func_0x00010942a3c4(puVar12,puVar11);
        do {
          puVar12 = puVar12 + 0x12;
        } while (*puVar12 <= uVar24);
        do {
          puVar11 = puVar11 + -0x12;
        } while (uVar24 < *puVar11);
      }
      if (puVar12 + -0x12 == param_1) {
        puVar12[-0x12] = uVar24;
        lVar20 = *(long *)(puVar12 + -0x10);
        *(undefined8 *)(puVar12 + -0x10) = uVar21;
      }
      else {
        *param_1 = puVar12[-0x12];
        uVar21 = *(undefined8 *)(puVar12 + -0x10);
        puVar12[-0x10] = 0;
        puVar12[-0xf] = 0;
        lVar20 = *(long *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar21;
        if (lVar20 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar14);
        uVar21 = *(undefined8 *)(puVar12 + -0xe);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar12 + -0xc);
        *(undefined8 *)(param_1 + 4) = uVar21;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar12 + -10);
        puVar12[-0xe] = 0;
        puVar12[-0xd] = 0;
        puVar12[-0xc] = 0;
        puVar12[-0xb] = 0;
        puVar12[-10] = 0;
        puVar12[-9] = 0;
        FUN_109428468(puVar13);
        uVar21 = *(undefined8 *)(puVar12 + -8);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar12 + -6);
        *(undefined8 *)(param_1 + 10) = uVar21;
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(puVar12 + -4);
        puVar12[-6] = 0;
        puVar12[-5] = 0;
        puVar12[-4] = 0;
        puVar12[-3] = 0;
        puVar12[-8] = 0;
        puVar12[-7] = 0;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar12 + -2);
        puVar12[-0x12] = uVar24;
        lVar20 = *(long *)(puVar12 + -0x10);
        *(long *)(puVar12 + -0x10) = lStack_a8;
      }
      lStack_a8 = 0;
      if (lVar20 != 0) {
        lStack_a8 = 0;
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar12 + -0xe);
      *(undefined8 *)(puVar12 + -0xe) = uVar25;
      *(undefined8 *)(puVar12 + -0xc) = uVar23;
      *(undefined8 *)(puVar12 + -10) = uVar6;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_109428468(puVar12 + -8);
      *(undefined8 *)(puVar12 + -8) = uVar33;
      *(undefined8 *)(puVar12 + -6) = uVar5;
      *(undefined8 *)(puVar12 + -4) = uVar7;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      *(undefined8 *)(puVar12 + -2) = uVar26;
      puStack_100 = &uStack_88;
      FUN_10942a570(&puStack_100);
      puStack_100 = &uStack_a0;
      FUN_109427be4(&puStack_100);
      lVar20 = lStack_a8;
      lStack_a8 = 0;
      if (lVar20 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      uStack_144 = 0;
      goto LAB_1094288d8;
    }
    lVar20 = 0;
    puVar14 = param_1 + 4;
    uVar25 = *(undefined8 *)puVar14;
    puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,uVar24);
    uStack_a0 = *(undefined8 *)(param_1 + 4);
    uVar21 = *(undefined8 *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    uVar23 = *(undefined8 *)(param_1 + 6);
    uVar6 = *(undefined8 *)(param_1 + 8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar14[0] = 0;
    puVar14[1] = 0;
    puVar13 = param_1 + 10;
    uVar26 = *(undefined8 *)puVar13;
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = *(undefined8 *)(param_1 + 0xe);
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    uVar33 = *(undefined8 *)(param_1 + 0x10);
    do {
      lVar15 = lVar20 + 0x48;
      lVar20 = lVar20 + 0x48;
    } while (*(uint *)((long)param_1 + lVar15) < uVar24);
    puVar11 = (uint *)((long)param_1 + lVar20);
    puVar19 = puStack_108;
    if (lVar20 == 0x48) {
      do {
        if (puVar19 <= puVar11) break;
        puVar19 = puVar19 + -0x12;
      } while (uVar24 <= *puVar19);
    }
    else {
      do {
        puVar19 = puVar19 + -0x12;
      } while (uVar24 <= *puVar19);
    }
    puVar12 = puVar11;
    puVar18 = puVar19;
    lStack_a8 = uVar21;
    uStack_98 = uVar23;
    uStack_90 = uVar6;
    uStack_88 = uVar26;
    uStack_80 = uVar5;
    uStack_78 = uVar7;
    uStack_70 = uVar33;
    if (puVar11 < puVar19) {
      do {
        func_0x00010942a3c4(puVar12,puVar18);
        do {
          puVar12 = puVar12 + 0x12;
        } while (*puVar12 < uVar24);
        do {
          puVar18 = puVar18 + -0x12;
        } while (uVar24 <= *puVar18);
      } while (puVar12 < puVar18);
    }
    puVar18 = puVar12 + -0x12;
    if (puVar18 == param_1) {
      puVar12[-0x12] = uVar24;
      lVar20 = *(long *)(puVar12 + -0x10);
      *(undefined8 *)(puVar12 + -0x10) = uVar21;
    }
    else {
      *param_1 = puVar12[-0x12];
      uVar21 = *(undefined8 *)(puVar12 + -0x10);
      puVar12[-0x10] = 0;
      puVar12[-0xf] = 0;
      lVar20 = *(long *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar21;
      if (lVar20 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4(puVar14);
      uVar21 = *(undefined8 *)(puVar12 + -0xe);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar12 + -0xc);
      *(undefined8 *)(param_1 + 4) = uVar21;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar12 + -10);
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      puVar12[-0xc] = 0;
      puVar12[-0xb] = 0;
      puVar12[-10] = 0;
      puVar12[-9] = 0;
      FUN_109428468(puVar13);
      uVar21 = *(undefined8 *)(puVar12 + -8);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar12 + -6);
      *(undefined8 *)(param_1 + 10) = uVar21;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(puVar12 + -4);
      puVar12[-6] = 0;
      puVar12[-5] = 0;
      puVar12[-4] = 0;
      puVar12[-3] = 0;
      puVar12[-8] = 0;
      puVar12[-7] = 0;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar12 + -2);
      puVar12[-0x12] = uVar24;
      lVar20 = *(long *)(puVar12 + -0x10);
      *(long *)(puVar12 + -0x10) = lStack_a8;
    }
    lStack_a8 = 0;
    if (lVar20 != 0) {
      lStack_a8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4(puVar12 + -0xe);
    *(undefined8 *)(puVar12 + -0xe) = uVar25;
    *(undefined8 *)(puVar12 + -0xc) = uVar23;
    *(undefined8 *)(puVar12 + -10) = uVar6;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_109428468(puVar12 + -8);
    *(undefined8 *)(puVar12 + -8) = uVar26;
    *(undefined8 *)(puVar12 + -6) = uVar5;
    *(undefined8 *)(puVar12 + -4) = uVar7;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    *(undefined8 *)(puVar12 + -2) = uVar33;
    puStack_100 = &uStack_88;
    FUN_10942a570(&puStack_100);
    puStack_100 = &uStack_a0;
    FUN_109427be4(&puStack_100);
    lVar20 = lStack_a8;
    lStack_a8 = 0;
    if (lVar20 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
    if (puVar11 < puVar19) goto LAB_109428e04;
    puVar13 = param_1;
    func_0x000109429f94(param_1,puVar18);
    puVar14 = puVar12;
    func_0x000109429f94(puVar12,puStack_108);
    if ((int)puVar14 == 0) goto code_r0x000109428e00;
    puStack_108 = puVar18;
    if (((ulong)puVar13 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1094291b8:
  if (puVar12[0x12] < *puVar12) {
    uStack_a0 = *(undefined8 *)(puVar12 + 0x16);
    lStack_a8 = *(long *)(puVar12 + 0x14);
    uStack_90 = *(undefined8 *)(puVar12 + 0x1a);
    uStack_98 = *(undefined8 *)(puVar12 + 0x18);
    puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,puVar12[0x12]);
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x17] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    uStack_80 = *(undefined8 *)(puVar12 + 0x1e);
    uStack_88 = *(undefined8 *)(puVar12 + 0x1c);
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1e] = 0;
    puVar12[0x1f] = 0;
    uStack_78 = *(undefined8 *)(puVar12 + 0x20);
    uStack_70 = *(undefined8 *)(puVar12 + 0x22);
    puVar12[0x20] = 0;
    puVar12[0x21] = 0;
    uVar24 = *puVar12;
    lVar15 = lVar20;
    do {
      lVar17 = lVar15;
      *(uint *)((long)param_1 + lVar17 + 0x48) = uVar24;
      uVar23 = *(undefined8 *)((long)param_1 + lVar17 + 8);
      *(undefined8 *)((long)param_1 + lVar17 + 8) = 0;
      lVar15 = *(long *)((long)param_1 + lVar17 + 0x50);
      *(undefined8 *)((long)param_1 + lVar17 + 0x50) = uVar23;
      if (lVar15 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_109427db4((long)param_1 + lVar17 + 0x58);
      *(undefined8 *)((long)param_1 + lVar17 + 0x60) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x18);
      *(undefined8 *)((long)param_1 + lVar17 + 0x58) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x10);
      *(undefined8 *)((long)param_1 + lVar17 + 0x68) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x20);
      *(undefined8 *)((long)param_1 + lVar17 + 0x18) = 0;
      *(undefined8 *)((long)param_1 + lVar17 + 0x20) = 0;
      *(undefined8 *)((long)param_1 + lVar17 + 0x10) = 0;
      FUN_109428468((long)param_1 + lVar17 + 0x70);
      *(undefined8 *)((long)param_1 + lVar17 + 0x78) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x30);
      *(undefined8 *)((long)param_1 + lVar17 + 0x70) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x28);
      *(undefined8 *)((long)param_1 + lVar17 + 0x28) = 0;
      *(undefined8 *)((long)param_1 + lVar17 + 0x30) = 0;
      uVar23 = *(undefined8 *)((long)param_1 + lVar17 + 0x38);
      *(undefined8 *)((long)param_1 + lVar17 + 0x38) = 0;
      *(undefined8 *)((long)param_1 + lVar17 + 0x80) = uVar23;
      *(undefined8 *)((long)param_1 + lVar17 + 0x88) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x40);
      if (lVar17 == 0) {
        *param_1 = (uint)puStack_b0;
        lVar15 = *(long *)(param_1 + 2);
        *(long *)(param_1 + 2) = lStack_a8;
        puVar12 = param_1;
        goto joined_r0x0001094292c4;
      }
      uVar24 = *(uint *)((long)param_1 + lVar17 + -0x48);
      lVar15 = lVar17 + -0x48;
    } while ((uint)puStack_b0 < uVar24);
    puVar12 = (uint *)((long)param_1 + lVar17);
    *puVar12 = (uint)puStack_b0;
    lVar15 = *(long *)((long)param_1 + lVar17 + 8);
    *(long *)((long)param_1 + lVar17 + 8) = lStack_a8;
joined_r0x0001094292c4:
    lStack_a8 = 0;
    if (lVar15 != 0) {
      lStack_a8 = 0;
      FUN_1094305a8();
      __ZdlPv();
    }
    FUN_109427db4((long)param_1 + lVar17 + 0x10);
    *(undefined8 *)((long)param_1 + lVar17 + 0x10) = uStack_a0;
    *(undefined8 *)(puVar12 + 8) = uStack_90;
    *(undefined8 *)(puVar12 + 6) = uStack_98;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_109428468((long)param_1 + lVar17 + 0x28);
    *(undefined8 *)((long)param_1 + lVar17 + 0x28) = uStack_88;
    *(undefined8 *)(puVar12 + 0xe) = uStack_78;
    *(undefined8 *)(puVar12 + 0xc) = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    *(undefined8 *)(puVar12 + 0x10) = uStack_70;
    puStack_100 = &uStack_88;
    FUN_10942a570(&puStack_100);
    puStack_100 = &uStack_a0;
    FUN_109427be4(&puStack_100);
    lVar15 = lStack_a8;
    lStack_a8 = 0;
    if (lVar15 != 0) {
      FUN_1094305a8();
      __ZdlPv();
    }
  }
  puVar32 = puVar27 + 0x12;
  lVar20 = lVar20 + 0x48;
  puVar12 = puVar27;
  puVar27 = puVar32;
  if (puVar32 == puStack_108) {
    return;
  }
  goto LAB_1094291b8;
LAB_109429378:
  if ((long)uVar22 <= (long)uVar31) {
    uVar2 = uVar22 << 1 | 1;
    puVar12 = param_1 + uVar2 * 0x12;
    uVar36 = uVar22 * 2 + 2;
    if ((long)uVar36 < (long)uVar34) {
      uVar24 = *puVar12;
      uVar9 = puVar12[0x12];
      uVar8 = uVar24;
      if (uVar24 <= uVar9) {
        uVar8 = uVar9;
      }
      puVar27 = puVar12 + 0x12;
      if (uVar9 <= uVar24) {
        uVar36 = uVar2;
        puVar27 = puVar12;
      }
      puVar12 = puVar27;
      puVar27 = param_1 + uVar22 * 0x12;
      uVar24 = *puVar27;
      if (uVar24 <= uVar8) {
LAB_1094293f0:
        puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,uVar24);
        uStack_a0 = *(undefined8 *)(puVar27 + 4);
        lStack_a8 = *(long *)(puVar27 + 2);
        puVar27[2] = 0;
        puVar27[3] = 0;
        uStack_90 = *(undefined8 *)(puVar27 + 8);
        uStack_98 = *(undefined8 *)(puVar27 + 6);
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27[7] = 0;
        puVar27[8] = 0;
        puVar27[9] = 0;
        uStack_80 = *(undefined8 *)(puVar27 + 0xc);
        uStack_88 = *(undefined8 *)(puVar27 + 10);
        uStack_78 = *(undefined8 *)(puVar27 + 0xe);
        puVar27[0xc] = 0;
        puVar27[0xd] = 0;
        puVar27[0xe] = 0;
        puVar27[0xf] = 0;
        puVar27[10] = 0;
        puVar27[0xb] = 0;
        uStack_70 = *(undefined8 *)(puVar27 + 0x10);
        uVar24 = *puVar12;
        do {
          while( true ) {
            puVar32 = puVar12;
            *puVar27 = uVar24;
            uVar23 = *(undefined8 *)(puVar32 + 2);
            puVar32[2] = 0;
            puVar32[3] = 0;
            lVar20 = *(long *)(puVar27 + 2);
            *(undefined8 *)(puVar27 + 2) = uVar23;
            if (lVar20 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar27 + 4);
            puVar30 = puVar32 + 4;
            uVar23 = *(undefined8 *)puVar30;
            *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar32 + 6);
            *(undefined8 *)(puVar27 + 4) = uVar23;
            *(undefined8 *)(puVar27 + 8) = *(undefined8 *)(puVar32 + 8);
            puVar30[0] = 0;
            puVar30[1] = 0;
            puVar32[6] = 0;
            puVar32[7] = 0;
            puVar32[8] = 0;
            puVar32[9] = 0;
            FUN_109428468(puVar27 + 10);
            lVar20 = lStack_a8;
            puVar13 = puVar32 + 10;
            uVar23 = *(undefined8 *)puVar13;
            *(undefined8 *)(puVar27 + 0xc) = *(undefined8 *)(puVar32 + 0xc);
            *(undefined8 *)(puVar27 + 10) = uVar23;
            *(undefined8 *)(puVar27 + 0xe) = *(undefined8 *)(puVar32 + 0xe);
            puVar13[0] = 0;
            puVar13[1] = 0;
            puVar32[0xc] = 0;
            puVar32[0xd] = 0;
            puVar32[0xe] = 0;
            puVar32[0xf] = 0;
            *(undefined8 *)(puVar27 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
            if ((long)uVar31 < (long)uVar36) goto LAB_109429520;
            uVar2 = uVar36 << 1 | 1;
            puVar14 = param_1 + uVar2 * 0x12;
            uVar36 = uVar36 * 2 + 2;
            puVar27 = puVar32;
            if ((long)uVar36 < (long)uVar34) break;
            uVar24 = *puVar14;
            puVar12 = puVar14;
            uVar36 = uVar2;
            if (uVar24 < (uint)puStack_b0) goto LAB_109429520;
          }
          uVar8 = *puVar14;
          uVar9 = puVar14[0x12];
          uVar24 = uVar8;
          if (uVar8 <= uVar9) {
            uVar24 = uVar9;
          }
          puVar12 = puVar14 + 0x12;
          if (uVar9 <= uVar8) {
            uVar36 = uVar2;
            puVar12 = puVar14;
          }
        } while ((uint)puStack_b0 <= uVar24);
LAB_109429520:
        *puVar32 = (uint)puStack_b0;
        lStack_a8 = 0;
        lVar15 = *(long *)(puVar32 + 2);
        *(long *)(puVar32 + 2) = lVar20;
        if (lVar15 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar30);
        *(undefined8 *)(puVar32 + 6) = uStack_98;
        *(undefined8 *)(puVar32 + 4) = uStack_a0;
        *(undefined8 *)(puVar32 + 8) = uStack_90;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        FUN_109428468(puVar13);
        *(undefined8 *)(puVar32 + 0xc) = uStack_80;
        *(undefined8 *)(puVar32 + 10) = uStack_88;
        *(undefined8 *)(puVar32 + 0xe) = uStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        *(undefined8 *)(puVar32 + 0x10) = uStack_70;
        puStack_100 = &uStack_88;
        FUN_10942a570(&puStack_100);
        puStack_100 = &uStack_a0;
        FUN_109427be4(&puStack_100);
        lVar20 = lStack_a8;
        lStack_a8 = 0;
        if (lVar20 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
      }
    }
    else {
      puVar27 = param_1 + uVar22 * 0x12;
      uVar24 = *puVar27;
      uVar36 = uVar2;
      if (uVar24 <= *puVar12) goto LAB_1094293f0;
    }
  }
  bVar3 = uVar22 == 0;
  uVar22 = uVar22 - 1;
  if (bVar3) {
    lVar20 = (uVar29 >> 3) * -0x71c71c71c71c71c7;
    do {
      uVar29 = 0;
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*param_1);
      uStack_f0 = *(undefined8 *)(param_1 + 4);
      lStack_f8 = *(long *)(param_1 + 2);
      param_1[2] = 0;
      param_1[3] = 0;
      uStack_e0 = *(undefined8 *)(param_1 + 8);
      uStack_e8 = *(undefined8 *)(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      uStack_d0 = *(undefined8 *)(param_1 + 0xc);
      uStack_d8 = *(undefined8 *)(param_1 + 10);
      uStack_c8 = *(undefined8 *)(param_1 + 0xe);
      uStack_c0 = *(undefined8 *)(param_1 + 0x10);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      puVar12 = param_1;
      do {
        puVar27 = puVar12 + uVar29 * 0x12 + 0x12;
        uVar22 = uVar29 << 1 | 1;
        uVar34 = uVar29 * 2 + 2;
        if ((long)uVar34 < lVar20) {
          lVar15 = uVar29 * 0x12;
          uVar9 = puVar12[lVar15 + 0x24];
          uVar8 = puVar12[uVar29 * 0x12 + 0x12];
          uVar24 = uVar8;
          if (uVar8 <= uVar9) {
            uVar24 = uVar9;
          }
          uVar29 = uVar34;
          puVar32 = puVar12 + lVar15 + 0x24;
          if (uVar9 <= uVar8) {
            uVar29 = uVar22;
            puVar32 = puVar27;
          }
          *puVar12 = uVar24;
          uVar23 = *(undefined8 *)(puVar32 + 2);
          puVar32[2] = 0;
          puVar32[3] = 0;
          lVar15 = *(long *)(puVar12 + 2);
          *(undefined8 *)(puVar12 + 2) = uVar23;
        }
        else {
          *puVar12 = *puVar27;
          uVar23 = *(undefined8 *)(puVar12 + uVar29 * 0x12 + 0x14);
          (puVar12 + uVar29 * 0x12 + 0x14)[0] = 0;
          (puVar12 + uVar29 * 0x12 + 0x14)[1] = 0;
          lVar15 = *(long *)(puVar12 + 2);
          *(undefined8 *)(puVar12 + 2) = uVar23;
          puVar32 = puVar27;
          uVar29 = uVar22;
        }
        if (lVar15 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        puVar27 = puVar12 + 4;
        lVar15 = *(long *)puVar27;
        if (lVar15 != 0) {
          lVar35 = *(long *)(puVar12 + 6);
          lVar17 = lVar15;
          if (lVar35 != lVar15) {
            do {
              if (*(long *)(lVar35 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar35 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar35 + -0x38) != 0)) {
                  plVar16 = *(long **)(*(long *)(lVar35 + -0x38) + 8);
                  if ((plVar16 == (long *)0x0) &&
                     ((plVar16 = *(long **)(lVar35 + -0x40),
                      *(long **)(lVar35 + -0x40) == (long *)0x0 &&
                      (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar16 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar16 + 0x30))();
                }
              }
              *(undefined8 *)(lVar35 + -0x38) = 0;
              *(undefined8 *)(lVar35 + -0x58) = 0;
              *(undefined8 *)(lVar35 + -0x60) = 0;
              *(undefined8 *)(lVar35 + -0x48) = 0;
              *(undefined8 *)(lVar35 + -0x50) = 0;
              if (0 < *(int *)(lVar35 + -0x6c)) {
                lVar17 = 0;
                lVar28 = *(long *)(lVar35 + -0x30);
                do {
                  *(undefined4 *)(lVar28 + lVar17 * 4) = 0;
                  lVar17 = lVar17 + 1;
                } while (lVar17 < *(int *)(lVar35 + -0x6c));
              }
              lVar17 = *(long *)(lVar35 + -0x28);
              if (lVar17 != lVar35 + -0x20 && lVar17 != 0) {
                _free(*(undefined8 *)(lVar17 + -8));
              }
              lVar35 = lVar35 + -0xc0;
            } while (lVar35 != lVar15);
            lVar17 = *(long *)puVar27;
          }
          *(long *)(puVar12 + 6) = lVar15;
          _free(lVar17);
          puVar27[0] = 0;
          puVar27[1] = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
        }
        uVar23 = *(undefined8 *)(puVar32 + 4);
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar32 + 6);
        *(undefined8 *)(puVar12 + 4) = uVar23;
        *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar32 + 8);
        puVar32[4] = 0;
        puVar32[5] = 0;
        puVar32[6] = 0;
        puVar32[7] = 0;
        puVar32[8] = 0;
        puVar32[9] = 0;
        puVar27 = puVar12 + 10;
        lVar15 = *(long *)puVar27;
        if (lVar15 != 0) {
          lVar35 = *(long *)(puVar12 + 0xc);
          lVar17 = lVar15;
          if (lVar35 != lVar15) {
            do {
              if (*(long *)(lVar35 + -0x38) != 0) {
                piVar1 = (int *)(*(long *)(lVar35 + -0x38) + 0x14);
                do {
                  iVar4 = *piVar1;
                  cVar10 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((iVar4 + -1 == 0) && (*(long *)(lVar35 + -0x38) != 0)) {
                  plVar16 = *(long **)(*(long *)(lVar35 + -0x38) + 8);
                  if ((plVar16 == (long *)0x0) &&
                     ((plVar16 = *(long **)(lVar35 + -0x40),
                      *(long **)(lVar35 + -0x40) == (long *)0x0 &&
                      (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                    FUN_109a83e3c();
                    plVar16 = plRam000000011382bb80;
                  }
                  (**(code **)(*plVar16 + 0x30))();
                }
              }
              *(undefined8 *)(lVar35 + -0x38) = 0;
              *(undefined8 *)(lVar35 + -0x58) = 0;
              *(undefined8 *)(lVar35 + -0x60) = 0;
              *(undefined8 *)(lVar35 + -0x48) = 0;
              *(undefined8 *)(lVar35 + -0x50) = 0;
              if (0 < *(int *)(lVar35 + -0x6c)) {
                lVar17 = 0;
                lVar28 = *(long *)(lVar35 + -0x30);
                do {
                  *(undefined4 *)(lVar28 + lVar17 * 4) = 0;
                  lVar17 = lVar17 + 1;
                } while (lVar17 < *(int *)(lVar35 + -0x6c));
              }
              lVar17 = *(long *)(lVar35 + -0x28);
              if (lVar17 != lVar35 + -0x20 && lVar17 != 0) {
                _free(*(undefined8 *)(lVar17 + -8));
              }
              lVar35 = lVar35 + -0xd0;
            } while (lVar35 != lVar15);
            lVar17 = *(long *)puVar27;
          }
          *(long *)(puVar12 + 0xc) = lVar15;
          _free(lVar17);
          puVar27[0] = 0;
          puVar27[1] = 0;
          puVar12[0xc] = 0;
          puVar12[0xd] = 0;
          puVar12[0xe] = 0;
          puVar12[0xf] = 0;
        }
        lVar15 = lStack_f8;
        uVar23 = *(undefined8 *)(puVar32 + 10);
        *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar32 + 0xc);
        *(undefined8 *)(puVar12 + 10) = uVar23;
        *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(puVar32 + 0xe);
        puVar32[10] = 0;
        puVar32[0xb] = 0;
        puVar32[0xc] = 0;
        puVar32[0xd] = 0;
        puVar32[0xe] = 0;
        puVar32[0xf] = 0;
        *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
        puVar12 = puVar32;
      } while ((long)uVar29 <= (long)(lVar20 - 2U >> 1));
      if (puVar32 == puStack_108 + -0x12) {
        *puVar32 = (uint)puStack_100;
        lStack_f8 = 0;
        lVar17 = *(long *)(puVar32 + 2);
        *(long *)(puVar32 + 2) = lVar15;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar32 + 4);
        *(undefined8 *)(puVar32 + 6) = uStack_e8;
        *(undefined8 *)(puVar32 + 4) = uStack_f0;
        *(undefined8 *)(puVar32 + 8) = uStack_e0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        FUN_109428468(puVar32 + 10);
        *(undefined8 *)(puVar32 + 0xc) = uStack_d0;
        *(undefined8 *)(puVar32 + 10) = uStack_d8;
        *(undefined8 *)(puVar32 + 0xe) = uStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        *(undefined8 *)(puVar32 + 0x10) = uStack_c0;
      }
      else {
        *puVar32 = puStack_108[-0x12];
        uVar23 = *(undefined8 *)(puStack_108 + -0x10);
        puStack_108[-0x10] = 0;
        puStack_108[-0xf] = 0;
        lVar15 = *(long *)(puVar32 + 2);
        *(undefined8 *)(puVar32 + 2) = uVar23;
        if (lVar15 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar32 + 4);
        puVar12 = puStack_108 + -0xe;
        uVar23 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar32 + 6) = *(undefined8 *)(puStack_108 + -0xc);
        *(undefined8 *)(puVar32 + 4) = uVar23;
        *(undefined8 *)(puVar32 + 8) = *(undefined8 *)(puStack_108 + -10);
        puVar12[0] = 0;
        puVar12[1] = 0;
        puStack_108[-0xc] = 0;
        puStack_108[-0xb] = 0;
        puStack_108[-10] = 0;
        puStack_108[-9] = 0;
        FUN_109428468(puVar32 + 10);
        lVar15 = lStack_f8;
        puVar27 = puStack_108 + -8;
        uVar23 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar32 + 0xc) = *(undefined8 *)(puStack_108 + -6);
        *(undefined8 *)(puVar32 + 10) = uVar23;
        *(undefined8 *)(puVar32 + 0xe) = *(undefined8 *)(puStack_108 + -4);
        puStack_108[-6] = 0;
        puStack_108[-5] = 0;
        puStack_108[-4] = 0;
        puStack_108[-3] = 0;
        puVar27[0] = 0;
        puVar27[1] = 0;
        *(undefined8 *)(puVar32 + 0x10) = *(undefined8 *)(puStack_108 + -2);
        puStack_108[-0x12] = (uint)puStack_100;
        lStack_f8 = 0;
        lVar17 = *(long *)(puStack_108 + -0x10);
        *(long *)(puStack_108 + -0x10) = lVar15;
        if (lVar17 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        FUN_109427db4(puVar12);
        *(undefined8 *)(puStack_108 + -0xc) = uStack_e8;
        *(undefined8 *)(puStack_108 + -0xe) = uStack_f0;
        *(undefined8 *)(puStack_108 + -10) = uStack_e0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        FUN_109428468(puVar27);
        *(undefined8 *)(puStack_108 + -6) = uStack_d0;
        *(undefined8 *)(puStack_108 + -8) = uStack_d8;
        *(undefined8 *)(puStack_108 + -4) = uStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        *(undefined8 *)(puStack_108 + -2) = uStack_c0;
        uVar29 = (long)puVar32 + (0x48 - (long)param_1);
        if (0x48 < (long)uVar29) {
          uVar29 = (uVar29 >> 3) * -0x71c71c71c71c71c7 - 2 >> 1;
          puVar12 = param_1 + uVar29 * 0x12;
          if (*puVar12 < *puVar32) {
            puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,*puVar32);
            uStack_a0 = *(undefined8 *)(puVar32 + 4);
            lStack_a8 = *(long *)(puVar32 + 2);
            puVar32[2] = 0;
            puVar32[3] = 0;
            uStack_90 = *(undefined8 *)(puVar32 + 8);
            uStack_98 = *(undefined8 *)(puVar32 + 6);
            puVar32[6] = 0;
            puVar32[7] = 0;
            puVar32[8] = 0;
            puVar32[9] = 0;
            puVar32[4] = 0;
            puVar32[5] = 0;
            uStack_80 = *(undefined8 *)(puVar32 + 0xc);
            uStack_88 = *(undefined8 *)(puVar32 + 10);
            uStack_78 = *(undefined8 *)(puVar32 + 0xe);
            uStack_70 = *(undefined8 *)(puVar32 + 0x10);
            puVar32[0xc] = 0;
            puVar32[0xd] = 0;
            puVar32[0xe] = 0;
            puVar32[0xf] = 0;
            puVar32[10] = 0;
            puVar32[0xb] = 0;
            uVar24 = *puVar12;
            do {
              puVar27 = puVar12;
              *puVar32 = uVar24;
              uVar23 = *(undefined8 *)(puVar27 + 2);
              puVar27[2] = 0;
              puVar27[3] = 0;
              lVar15 = *(long *)(puVar32 + 2);
              *(undefined8 *)(puVar32 + 2) = uVar23;
              if (lVar15 != 0) {
                FUN_1094305a8();
                __ZdlPv();
              }
              FUN_109427db4(puVar32 + 4);
              puVar30 = puVar27 + 4;
              uVar23 = *(undefined8 *)puVar30;
              *(undefined8 *)(puVar32 + 6) = *(undefined8 *)(puVar27 + 6);
              *(undefined8 *)(puVar32 + 4) = uVar23;
              *(undefined8 *)(puVar32 + 8) = *(undefined8 *)(puVar27 + 8);
              puVar30[0] = 0;
              puVar30[1] = 0;
              puVar27[6] = 0;
              puVar27[7] = 0;
              puVar27[8] = 0;
              puVar27[9] = 0;
              FUN_109428468(puVar32 + 10);
              lVar15 = lStack_a8;
              puVar13 = puVar27 + 10;
              uVar23 = *(undefined8 *)puVar13;
              *(undefined8 *)(puVar32 + 0xc) = *(undefined8 *)(puVar27 + 0xc);
              *(undefined8 *)(puVar32 + 10) = uVar23;
              *(undefined8 *)(puVar32 + 0xe) = *(undefined8 *)(puVar27 + 0xe);
              puVar13[0] = 0;
              puVar13[1] = 0;
              puVar27[0xc] = 0;
              puVar27[0xd] = 0;
              puVar27[0xe] = 0;
              puVar27[0xf] = 0;
              *(undefined8 *)(puVar32 + 0x10) = *(undefined8 *)(puVar27 + 0x10);
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1 >> 1;
              uVar24 = param_1[uVar29 * 0x12];
              puVar12 = param_1 + uVar29 * 0x12;
              puVar32 = puVar27;
            } while (uVar24 < (uint)puStack_b0);
            *puVar27 = (uint)puStack_b0;
            lStack_a8 = 0;
            lVar17 = *(long *)(puVar27 + 2);
            *(long *)(puVar27 + 2) = lVar15;
            if (lVar17 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4(puVar30);
            *(undefined8 *)(puVar27 + 6) = uStack_98;
            *(undefined8 *)(puVar27 + 4) = uStack_a0;
            *(undefined8 *)(puVar27 + 8) = uStack_90;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            FUN_109428468(puVar13);
            *(undefined8 *)(puVar27 + 0xc) = uStack_80;
            *(undefined8 *)(puVar27 + 10) = uStack_88;
            *(undefined8 *)(puVar27 + 0xe) = uStack_78;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            *(undefined8 *)(puVar27 + 0x10) = uStack_70;
            puStack_b8 = &uStack_88;
            FUN_10942a570(&puStack_b8);
            puStack_b8 = &uStack_a0;
            FUN_109427be4(&puStack_b8);
            lVar15 = lStack_a8;
            lStack_a8 = 0;
            if (lVar15 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
          }
        }
      }
      puStack_b0 = &uStack_d8;
      FUN_10942a570(&puStack_b0);
      puStack_b0 = &uStack_f0;
      FUN_109427be4(&puStack_b0);
      lVar15 = lStack_f8;
      lStack_f8 = 0;
      if (lVar15 != 0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      bVar3 = lVar20 < 3;
      lVar20 = lVar20 + -1;
      puStack_108 = puStack_108 + -0x12;
      if (bVar3) {
        return;
      }
    } while( true );
  }
  goto LAB_109429378;
code_r0x000109428e00:
  if (((ulong)puVar13 & 1) == 0) {
LAB_109428e04:
    FUN_10942887c(param_1,puVar18,param_3,uStack_144 & 1);
    uStack_144 = 0;
  }
  goto LAB_1094288d8;
}



/* Entry: 109429e90; end: 109429f93;  */

/* WARNING: Possible PIC construction at 0x000109429ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109429f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109429f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109429f40) */
/* WARNING: Removing unreachable block (ram,0x000109429f50) */
/* WARNING: Removing unreachable block (ram,0x000109429f6c) */
/* WARNING: Removing unreachable block (ram,0x000109429ed8) */
/* WARNING: Removing unreachable block (ram,0x000109429ee8) */
/* WARNING: Removing unreachable block (ram,0x000109429f08) */
/* WARNING: Removing unreachable block (ram,0x000109429f18) */
/* WARNING: Removing unreachable block (ram,0x00010942a548) */

void FUN_109429e90(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  
  uVar5 = *param_2;
  if (uVar5 < *param_1) {
    if (uVar5 <= *param_3) goto SUB_10942a3c4;
    func_0x00010942a3c4(param_1,param_3);
  }
  else {
    param_1 = param_2;
    param_2 = param_3;
    if (*param_3 < uVar5) goto SUB_10942a3c4;
  }
  param_1 = param_3;
  param_2 = param_4;
  if (*param_3 <= *param_4) {
    return;
  }
SUB_10942a3c4:
  uVar5 = *param_1;
  uVar10 = *(undefined8 *)(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar12 = param_1 + 4;
  uVar8 = *(undefined8 *)puVar12;
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar12[0] = 0;
  puVar12[1] = 0;
  puVar11 = param_1 + 10;
  uVar9 = *(undefined8 *)puVar11;
  puVar11[0] = 0;
  puVar11[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0xe);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = *param_2;
  uVar7 = *(undefined8 *)(param_2 + 2);
  param_2[2] = 0;
  param_2[3] = 0;
  lVar6 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = uVar7;
  uStack_d0 = uVar8;
  uStack_c8 = uVar1;
  uStack_c0 = uVar3;
  uStack_b8 = uVar9;
  uStack_b0 = uVar2;
  uStack_a8 = uVar4;
  uStack_a0 = uVar13;
  if (lVar6 != 0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  FUN_109427db4(puVar12);
  puVar12 = param_2 + 4;
  uVar7 = *(undefined8 *)puVar12;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  puVar12[0] = 0;
  puVar12[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_109428468(puVar11);
  puVar11 = param_2 + 10;
  uVar7 = *(undefined8 *)puVar11;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar7;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  puVar11[0] = 0;
  puVar11[1] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *param_2 = uVar5;
  lVar6 = *(long *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = uVar10;
  if (lVar6 != 0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  FUN_109427db4(puVar12);
  *(undefined8 *)(param_2 + 4) = uVar8;
  *(undefined8 *)(param_2 + 6) = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar3;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  FUN_109428468(puVar11);
  *(undefined8 *)(param_2 + 10) = uVar9;
  *(undefined8 *)(param_2 + 0xc) = uVar2;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  *(undefined8 *)(param_2 + 0xe) = uVar4;
  *(undefined8 *)(param_2 + 0x10) = uVar13;
  puStack_98 = &uStack_b8;
  FUN_10942a570(&puStack_98);
  puStack_98 = &uStack_d0;
  FUN_109427be4(&puStack_98);
  return;
}



/* Entry: 109429f94; end: 10942a56f;  */

/* WARNING: Removing unreachable block (ram,0x00010942a360) */

bool FUN_109429f94(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x71c71c71c71c71c7;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 != 2) {
LAB_10942a0cc:
      puVar9 = param_1 + 0x24;
      puVar10 = param_1 + 0x12;
      uVar1 = *puVar10;
      puVar2 = param_1;
      if (uVar1 < *param_1) {
        puVar4 = puVar9;
        if ((uVar1 <= *puVar9) &&
           (func_0x00010942a3c4(param_1,puVar10), puVar2 = puVar10, param_1[0x12] <= param_1[0x24]))
        goto LAB_10942a190;
      }
      else if ((uVar1 <= *puVar9) ||
              (func_0x00010942a3c4(puVar10,puVar9), puVar4 = puVar10, *param_1 <= param_1[0x12]))
      goto LAB_10942a190;
      func_0x00010942a3c4(puVar2,puVar4);
LAB_10942a190:
      if (param_1 + 0x36 == param_2) {
        return true;
      }
      lVar11 = 0;
      iVar12 = 0;
      puVar2 = param_1 + 0x36;
      do {
        uVar1 = *puVar2;
        if (uVar1 < *puVar9) {
          uStack_a0 = *(undefined8 *)(puVar2 + 4);
          uVar13 = *(undefined8 *)(puVar2 + 2);
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          uStack_90 = *(undefined8 *)(puVar2 + 8);
          uStack_98 = *(undefined8 *)(puVar2 + 6);
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          uStack_80 = *(undefined8 *)(puVar2 + 0xc);
          uStack_88 = *(undefined8 *)(puVar2 + 10);
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          uStack_78 = *(undefined8 *)(puVar2 + 0xe);
          uStack_70 = *(undefined8 *)(puVar2 + 0x10);
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          uVar7 = *puVar9;
          lVar3 = lVar11;
          do {
            lVar8 = lVar3;
            *(uint *)((long)param_1 + lVar8 + 0xd8) = uVar7;
            uVar6 = *(undefined8 *)((long)param_1 + lVar8 + 0x98);
            *(undefined8 *)((long)param_1 + lVar8 + 0x98) = 0;
            lVar3 = *(long *)((long)param_1 + lVar8 + 0xe0);
            *(undefined8 *)((long)param_1 + lVar8 + 0xe0) = uVar6;
            if (lVar3 != 0) {
              FUN_1094305a8();
              __ZdlPv();
            }
            FUN_109427db4((long)param_1 + lVar8 + 0xe8);
            *(undefined8 *)((long)param_1 + lVar8 + 0xf0) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xa8);
            *(undefined8 *)((long)param_1 + lVar8 + 0xe8) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xa0);
            *(undefined8 *)((long)param_1 + lVar8 + 0xf8) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xb0);
            *(undefined8 *)((long)param_1 + lVar8 + 0xa8) = 0;
            *(undefined8 *)((long)param_1 + lVar8 + 0xb0) = 0;
            *(undefined8 *)((long)param_1 + lVar8 + 0xa0) = 0;
            FUN_109428468((long)param_1 + lVar8 + 0x100);
            *(undefined8 *)((long)param_1 + lVar8 + 0x108) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xc0);
            *(undefined8 *)((long)param_1 + lVar8 + 0x100) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xb8);
            uVar6 = *(undefined8 *)((long)param_1 + lVar8 + 200);
            *(undefined8 *)((long)param_1 + lVar8 + 0xc0) = 0;
            *(undefined8 *)((long)param_1 + lVar8 + 200) = 0;
            *(undefined8 *)((long)param_1 + lVar8 + 0xb8) = 0;
            *(undefined8 *)((long)param_1 + lVar8 + 0x110) = uVar6;
            *(undefined8 *)((long)param_1 + lVar8 + 0x118) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0xd0);
            if (lVar8 == -0x90) {
              *param_1 = uVar1;
              lVar3 = *(long *)(param_1 + 2);
              *(undefined8 *)(param_1 + 2) = uVar13;
              puVar9 = param_1;
              goto joined_r0x00010942a2e4;
            }
            uVar7 = *(uint *)((long)param_1 + lVar8 + 0x48);
            lVar3 = lVar8 + -0x48;
          } while (uVar1 < uVar7);
          puVar9 = (uint *)((long)param_1 + lVar8 + 0x90);
          *puVar9 = uVar1;
          lVar3 = *(long *)((long)param_1 + lVar8 + 0x98);
          *(undefined8 *)((long)param_1 + lVar8 + 0x98) = uVar13;
joined_r0x00010942a2e4:
          if (lVar3 != 0) {
            FUN_1094305a8();
            __ZdlPv();
          }
          FUN_109427db4((long)param_1 + lVar8 + 0xa0);
          *(undefined8 *)((long)param_1 + lVar8 + 0xa0) = uStack_a0;
          *(undefined8 *)(puVar9 + 8) = uStack_90;
          *(undefined8 *)(puVar9 + 6) = uStack_98;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_a0 = 0;
          FUN_109428468((long)param_1 + lVar8 + 0xb8);
          *(undefined8 *)((long)param_1 + lVar8 + 0xb8) = uStack_88;
          *(undefined8 *)(puVar9 + 0xe) = uStack_78;
          *(undefined8 *)(puVar9 + 0xc) = uStack_80;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          *(undefined8 *)(puVar9 + 0x10) = uStack_70;
          puStack_68 = &uStack_88;
          FUN_10942a570(&puStack_68);
          puStack_68 = &uStack_a0;
          FUN_109427be4(&puStack_68);
          iVar12 = iVar12 + 1;
          if (iVar12 == 8) {
            return puVar2 + 0x12 == param_2;
          }
        }
        puVar10 = puVar2 + 0x12;
        lVar11 = lVar11 + 0x48;
        puVar9 = puVar2;
        puVar2 = puVar10;
        if (puVar10 == param_2) {
          return true;
        }
      } while( true );
    }
    if (*param_1 <= param_2[-0x12]) {
      return true;
    }
  }
  else {
    if (uVar5 != 3) {
      if (uVar5 == 4) {
        FUN_109429e90(param_1,param_1 + 0x12,param_1 + 0x24,param_2 + -0x12);
        return true;
      }
      if (uVar5 == 5) {
        FUN_109429e90(param_1,param_1 + 0x12,param_1 + 0x24,param_1 + 0x36);
        if (param_1[0x36] <= param_2[-0x12]) {
          return true;
        }
        func_0x00010942a3c4(param_1 + 0x36,param_2 + -0x12);
        if (param_1[0x24] <= param_1[0x36]) {
          return true;
        }
        func_0x00010942a3c4(param_1 + 0x24,param_1 + 0x36);
        if (param_1[0x12] <= param_1[0x24]) {
          return true;
        }
        func_0x00010942a3c4(param_1 + 0x12,param_1 + 0x24);
        if (*param_1 <= param_1[0x12]) {
          return true;
        }
        puVar2 = param_1 + 0x12;
        goto LAB_10942a0c4;
      }
      goto LAB_10942a0cc;
    }
    puVar2 = param_1 + 0x12;
    uVar1 = *puVar2;
    puVar9 = param_2 + -0x12;
    if (*param_1 <= uVar1) {
      if (uVar1 <= *puVar9) {
        return true;
      }
      func_0x00010942a3c4(puVar2,puVar9);
      if (*param_1 <= param_1[0x12]) {
        return true;
      }
      goto LAB_10942a0c4;
    }
    if ((uVar1 <= *puVar9) &&
       (func_0x00010942a3c4(param_1,puVar2), puVar10 = param_1 + 0x12, param_1 = puVar2,
       *puVar10 <= *puVar9)) {
      return true;
    }
  }
  puVar2 = param_2 + -0x12;
LAB_10942a0c4:
  func_0x00010942a3c4(param_1,puVar2);
  return true;
}



/* Entry: 10942a570; end: 10942a69b;  */

void FUN_10942a570(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar8 = (long *)*param_1;
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    lVar10 = plVar8[1];
    lVar6 = lVar9;
    if (lVar10 != lVar9) {
      do {
        if (*(long *)(lVar10 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar10 + -0x38) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar10 + -0x38) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar10 + -0x38) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar10 + -0x40), *(long **)(lVar10 + -0x40) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined8 *)(lVar10 + -0x58) = 0;
        *(undefined8 *)(lVar10 + -0x60) = 0;
        *(undefined8 *)(lVar10 + -0x48) = 0;
        *(undefined8 *)(lVar10 + -0x50) = 0;
        if (0 < *(int *)(lVar10 + -0x6c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar10 + -0x30);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar10 + -0x6c));
        }
        lVar6 = *(long *)(lVar10 + -0x28);
        if (lVar6 != lVar10 + -0x20 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar10 = lVar10 + -0xd0;
      } while (lVar10 != lVar9);
      lVar6 = *(long *)*param_1;
    }
    plVar8[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar6);
    return;
  }
  return;
}



/* Entry: 10942a69c; end: 10942b2c3;  */

void FUN_10942a69c(long *param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
LAB_10942a6d4:
  plVar5 = param_2 + -1;
  plVar14 = param_1;
LAB_10942a6e8:
  do {
    param_1 = plVar14;
    uVar8 = (long)param_2 - (long)param_1 >> 3;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        lVar9 = param_2[-1];
        lVar10 = *param_1;
        dVar20 = *(double *)(*(long *)param_3[1] + lVar9 * 8);
        dVar21 = *(double *)(*(long *)param_3[1] + lVar10 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar9 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        *param_1 = lVar9;
        param_2[-1] = lVar10;
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        lVar9 = *param_3;
        lVar10 = *(long *)param_3[1];
        plVar14 = param_1 + 1;
        lVar13 = *plVar14;
        lVar12 = *param_1;
        dVar21 = *(double *)(lVar10 + lVar13 * 8);
        dVar20 = *(double *)(lVar10 + lVar12 * 8);
        if (dVar21 == dVar20) {
          if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40)) {
LAB_10942b33c:
            lVar12 = *plVar5;
            dVar20 = *(double *)(lVar10 + lVar12 * 8);
            if (dVar20 == dVar21) {
              if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40) <=
                  *(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40)) {
                return;
              }
            }
            else if (dVar21 <= dVar20) {
              return;
            }
            *plVar14 = lVar12;
            *plVar5 = lVar13;
            lVar12 = *plVar14;
            lVar13 = *param_1;
            dVar20 = *(double *)(lVar10 + lVar12 * 8);
            dVar21 = *(double *)(lVar10 + lVar13 * 8);
            if (dVar20 == dVar21) {
              if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40) <=
                  *(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40)) {
                return;
              }
            }
            else if (dVar21 <= dVar20) {
              return;
            }
            *param_1 = lVar12;
            *plVar14 = lVar13;
            return;
          }
        }
        else if (dVar20 <= dVar21) goto LAB_10942b33c;
        lVar16 = *plVar5;
        dVar22 = *(double *)(lVar10 + lVar16 * 8);
        if (dVar22 == dVar21) {
          if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar16 * 0x48 + 0x40) <
              *(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40)) {
LAB_10942b32c:
            *param_1 = lVar16;
            *plVar5 = lVar12;
            return;
          }
        }
        else if (dVar22 < dVar21) goto LAB_10942b32c;
        *param_1 = lVar13;
        *plVar14 = lVar12;
        lVar13 = *plVar5;
        dVar21 = *(double *)(lVar10 + lVar13 * 8);
        if (dVar21 == dVar20) {
          if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar20 <= dVar21) {
          return;
        }
        *plVar14 = lVar13;
        *plVar5 = lVar12;
        return;
      }
      if (uVar8 == 4) {
        FUN_10942b2c4(param_1,param_1 + 1,param_1 + 2,*param_3,*(undefined8 *)param_3[1]);
        lVar10 = param_2[-1];
        lVar12 = param_1[2];
        lVar9 = *(long *)param_3[1];
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        param_1[2] = lVar10;
        param_2[-1] = lVar12;
        lVar10 = param_1[1];
        lVar12 = param_1[2];
        dVar20 = *(double *)(lVar9 + lVar12 * 8);
        dVar21 = *(double *)(lVar9 + lVar10 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        param_1[1] = lVar12;
        param_1[2] = lVar10;
        lVar10 = *param_1;
        dVar21 = *(double *)(lVar9 + lVar10 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        *param_1 = lVar12;
        param_1[1] = lVar10;
        return;
      }
      if (uVar8 == 5) {
        plVar14 = param_1 + 1;
        plVar6 = param_1 + 2;
        plVar2 = param_1 + 3;
        FUN_10942b2c4();
        lVar10 = *plVar2;
        lVar12 = *plVar6;
        lVar9 = *(long *)param_3[1];
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
LAB_10942b49c:
            *plVar6 = lVar10;
            *plVar2 = lVar12;
            lVar10 = *plVar6;
            lVar12 = *plVar14;
            dVar20 = *(double *)(lVar9 + lVar10 * 8);
            dVar21 = *(double *)(lVar9 + lVar12 * 8);
            if (dVar20 == dVar21) {
              if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <
                  *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
LAB_10942b4e8:
                *plVar14 = lVar10;
                *plVar6 = lVar12;
                lVar10 = *plVar14;
                lVar12 = *param_1;
                dVar20 = *(double *)(lVar9 + lVar10 * 8);
                dVar21 = *(double *)(lVar9 + lVar12 * 8);
                if (dVar20 == dVar21) {
                  if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <
                      *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
LAB_10942b52c:
                    *param_1 = lVar10;
                    *plVar14 = lVar12;
                  }
                }
                else if (dVar20 < dVar21) goto LAB_10942b52c;
              }
            }
            else if (dVar20 < dVar21) goto LAB_10942b4e8;
          }
        }
        else if (dVar20 < dVar21) goto LAB_10942b49c;
        lVar10 = *plVar5;
        lVar12 = *plVar2;
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        *plVar2 = lVar10;
        *plVar5 = lVar12;
        lVar10 = *plVar2;
        lVar12 = *plVar6;
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        *plVar6 = lVar10;
        *plVar2 = lVar12;
        lVar10 = *plVar6;
        lVar12 = *plVar14;
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40)) {
            return;
          }
        }
        else if (dVar21 <= dVar20) {
          return;
        }
        *plVar14 = lVar10;
        *plVar6 = lVar12;
        lVar10 = *plVar14;
        lVar12 = *param_1;
        dVar20 = *(double *)(lVar9 + lVar10 * 8);
        dVar21 = *(double *)(lVar9 + lVar12 * 8);
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar10 * 0x48 + 0x40) <
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40)) {
LAB_10942b674:
            *param_1 = lVar10;
            *plVar14 = lVar12;
            return;
          }
        }
        else if (dVar20 < dVar21) goto LAB_10942b674;
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      if ((param_5 & 1) != 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 1 == param_2) {
          return;
        }
        lVar9 = 0;
        lVar10 = *param_3;
        lVar12 = *(long *)param_3[1];
        plVar14 = param_1;
        plVar5 = param_1 + 1;
        goto LAB_10942af04;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 1 == param_2) {
        return;
      }
      lVar9 = *param_3;
      lVar10 = *(long *)param_3[1];
      plVar14 = param_1 + 1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar11 = uVar8 - 2 >> 1;
      lVar9 = *param_3;
      plVar14 = (long *)param_3[1];
      uVar19 = uVar11;
      goto LAB_10942ad74;
    }
    plVar14 = param_1 + (uVar8 >> 1);
    if (uVar8 < 0x81) {
      FUN_10942b2c4(plVar14,param_1,plVar5,*param_3,*(undefined8 *)param_3[1]);
      lVar9 = *param_1;
      lVar10 = *(long *)param_3[1];
    }
    else {
      FUN_10942b2c4(param_1,plVar14,plVar5,*param_3,*(undefined8 *)param_3[1]);
      FUN_10942b2c4(param_1 + 1,plVar14 + -1,param_2 + -2,*param_3,*(undefined8 *)param_3[1]);
      FUN_10942b2c4(param_1 + 2,plVar14 + 1,param_2 + -3,*param_3,*(undefined8 *)param_3[1]);
      FUN_10942b2c4(plVar14 + -1,plVar14,plVar14 + 1,*param_3,*(undefined8 *)param_3[1]);
      lVar9 = *param_1;
      *param_1 = *plVar14;
      *plVar14 = lVar9;
      lVar9 = *param_1;
      lVar10 = *(long *)param_3[1];
    }
    if ((param_5 & 1) != 0) {
      dVar20 = *(double *)(lVar10 + lVar9 * 8);
LAB_10942a830:
      param_4 = param_4 + -1;
      lVar12 = 0;
      lVar13 = *param_3;
      do {
        lVar16 = *(long *)((long)param_1 + lVar12 + 8);
        dVar21 = *(double *)(lVar10 + lVar16 * 8);
        if (dVar21 == dVar20) {
          if (*(ulong *)(*(long *)(lVar13 + 0x78) + lVar9 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(lVar13 + 0x78) + lVar16 * 0x48 + 0x40)) goto LAB_10942a874;
        }
        else if (dVar20 <= dVar21) goto LAB_10942a874;
        lVar12 = lVar12 + 8;
      } while( true );
    }
    dVar21 = *(double *)(lVar10 + param_1[-1] * 8);
    dVar20 = *(double *)(lVar10 + lVar9 * 8);
    if (dVar21 == dVar20) {
      if (*(ulong *)(*(long *)(*param_3 + 0x78) + param_1[-1] * 0x48 + 0x40) <
          *(ulong *)(*(long *)(*param_3 + 0x78) + lVar9 * 0x48 + 0x40)) goto LAB_10942a830;
    }
    else if (dVar21 < dVar20) goto LAB_10942a830;
    lVar12 = *plVar5;
    dVar21 = *(double *)(lVar10 + lVar12 * 8);
    plVar14 = param_1;
    if (dVar20 == dVar21) {
      lVar13 = *param_3;
      if (*(ulong *)(*(long *)(lVar13 + 0x78) + lVar12 * 0x48 + 0x40) <=
          *(ulong *)(*(long *)(lVar13 + 0x78) + lVar9 * 0x48 + 0x40)) goto LAB_10942aaa8;
LAB_10942aa78:
      do {
        while( true ) {
          plVar14 = plVar14 + 1;
          dVar22 = *(double *)(lVar10 + *plVar14 * 8);
          if (dVar20 != dVar22) break;
          if (*(ulong *)(*(long *)(lVar13 + 0x78) + lVar9 * 0x48 + 0x40) <
              *(ulong *)(*(long *)(lVar13 + 0x78) + *plVar14 * 0x48 + 0x40)) goto LAB_10942aaf8;
        }
      } while (dVar22 <= dVar20);
    }
    else {
      if (dVar20 < dVar21) {
        lVar13 = *param_3;
        goto LAB_10942aa78;
      }
LAB_10942aaa8:
      plVar14 = param_1 + 1;
      if (plVar14 < param_2) {
        do {
          dVar22 = *(double *)(lVar10 + *plVar14 * 8);
          if (dVar20 == dVar22) {
            if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar9 * 0x48 + 0x40) <
                *(ulong *)(*(long *)(*param_3 + 0x78) + *plVar14 * 0x48 + 0x40)) break;
          }
          else if (dVar20 < dVar22) break;
          plVar14 = plVar14 + 1;
        } while (plVar14 < param_2);
      }
    }
LAB_10942aaf8:
    plVar6 = param_2;
    if (plVar14 < param_2) {
      plVar6 = plVar5;
      do {
        if (dVar20 == dVar21) {
          if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar12 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(*param_3 + 0x78) + lVar9 * 0x48 + 0x40)) break;
        }
        else if (dVar21 <= dVar20) break;
        plVar6 = plVar6 + -1;
        lVar12 = *plVar6;
        dVar21 = *(double *)(lVar10 + lVar12 * 8);
      } while( true );
    }
    if (plVar14 < plVar6) {
      lVar12 = *plVar14;
      lVar13 = *plVar6;
      do {
        *plVar14 = lVar13;
        *plVar6 = lVar12;
        do {
          while( true ) {
            plVar14 = plVar14 + 1;
            lVar12 = *plVar14;
            dVar21 = *(double *)(lVar10 + lVar12 * 8);
            if (dVar20 != dVar21) break;
            lVar13 = *(long *)(*param_3 + 0x78);
            if (*(ulong *)(lVar13 + lVar9 * 0x48 + 0x40) < *(ulong *)(lVar13 + lVar12 * 0x48 + 0x40)
               ) goto LAB_10942aba8;
          }
        } while (dVar21 <= dVar20);
LAB_10942aba8:
        do {
          plVar6 = plVar6 + -1;
          lVar13 = *plVar6;
          dVar21 = *(double *)(lVar10 + lVar13 * 8);
          if (dVar20 == dVar21) {
            lVar16 = *(long *)(*param_3 + 0x78);
            if (*(ulong *)(lVar16 + lVar13 * 0x48 + 0x40) <=
                *(ulong *)(lVar16 + lVar9 * 0x48 + 0x40)) break;
            goto LAB_10942aba8;
          }
        } while (dVar20 < dVar21);
      } while (plVar14 < plVar6);
    }
    plVar6 = plVar14 + -1;
    if (plVar6 != param_1) {
      *param_1 = *plVar6;
    }
    param_5 = 0;
    *plVar6 = lVar9;
    param_4 = param_4 + -1;
  } while( true );
LAB_10942b17c:
  plVar5 = plVar14;
  lVar12 = *param_1;
  lVar13 = param_1[1];
  dVar20 = *(double *)(lVar10 + lVar13 * 8);
  dVar21 = *(double *)(lVar10 + lVar12 * 8);
  if (dVar20 == dVar21) {
    if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40) <
        *(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40)) {
LAB_10942b1bc:
      lVar16 = *param_3;
      do {
        while( true ) {
          plVar14 = param_1;
          param_1 = plVar14 + -1;
          lVar7 = *param_1;
          plVar14[1] = lVar12;
          dVar21 = *(double *)(lVar10 + lVar7 * 8);
          lVar12 = lVar7;
          if (dVar20 != dVar21) break;
          if (*(ulong *)(*(long *)(lVar16 + 0x78) + lVar7 * 0x48 + 0x40) <=
              *(ulong *)(*(long *)(lVar16 + 0x78) + lVar13 * 0x48 + 0x40)) goto LAB_10942b16c;
        }
      } while (dVar20 < dVar21);
LAB_10942b16c:
      *plVar14 = lVar13;
    }
  }
  else if (dVar20 < dVar21) goto LAB_10942b1bc;
  plVar14 = plVar5 + 1;
  param_1 = plVar5;
  if (plVar14 == param_2) {
    return;
  }
  goto LAB_10942b17c;
LAB_10942af04:
  lVar13 = *plVar14;
  lVar16 = plVar14[1];
  dVar20 = *(double *)(lVar12 + lVar16 * 8);
  dVar21 = *(double *)(lVar12 + lVar13 * 8);
  if (dVar20 == dVar21) {
    if (*(ulong *)(*(long *)(lVar10 + 0x78) + lVar16 * 0x48 + 0x40) <
        *(ulong *)(*(long *)(lVar10 + 0x78) + lVar13 * 0x48 + 0x40)) {
LAB_10942af44:
      plVar14[1] = lVar13;
      plVar6 = param_1;
      if (plVar14 != param_1) {
        lVar7 = *param_3;
        lVar13 = lVar9;
        do {
          lVar4 = ((long *)((long)param_1 + lVar13))[-1];
          dVar21 = *(double *)(lVar12 + lVar4 * 8);
          if (dVar20 == dVar21) {
            plVar6 = plVar14;
            if (*(ulong *)(*(long *)(lVar7 + 0x78) + lVar4 * 0x48 + 0x40) <=
                *(ulong *)(*(long *)(lVar7 + 0x78) + lVar16 * 0x48 + 0x40)) break;
          }
          else if (dVar21 <= dVar20) {
            plVar6 = (long *)((long)param_1 + lVar13);
            break;
          }
          plVar14 = plVar14 + -1;
          *(long *)((long)param_1 + lVar13) = lVar4;
          lVar13 = lVar13 + -8;
          plVar6 = param_1;
        } while (lVar13 != 0);
      }
      *plVar6 = lVar16;
    }
  }
  else if (dVar20 < dVar21) goto LAB_10942af44;
  plVar6 = plVar5 + 1;
  lVar9 = lVar9 + 8;
  plVar14 = plVar5;
  plVar5 = plVar6;
  if (plVar6 == param_2) {
    return;
  }
  goto LAB_10942af04;
LAB_10942ad74:
  do {
    if ((long)uVar19 <= (long)uVar11) {
      uVar18 = uVar19 << 1 | 1;
      plVar5 = param_1 + uVar18;
      uVar17 = uVar19 * 2 + 2;
      if ((long)uVar17 < (long)uVar8) {
        lVar12 = plVar5[1];
        lVar10 = *plVar14;
        dVar20 = *(double *)(lVar10 + *plVar5 * 8);
        dVar21 = *(double *)(lVar10 + lVar12 * 8);
        if (dVar20 == dVar21) {
          lVar13 = *(long *)(lVar9 + 0x78);
          if (*(ulong *)(lVar13 + *plVar5 * 0x48 + 0x40) < *(ulong *)(lVar13 + lVar12 * 0x48 + 0x40)
             ) {
LAB_10942ade8:
            plVar5 = plVar5 + 1;
            uVar18 = uVar17;
          }
        }
        else if (dVar20 < dVar21) goto LAB_10942ade8;
      }
      else {
        lVar10 = *plVar14;
      }
      lVar13 = param_1[uVar19];
      lVar12 = *plVar5;
      dVar21 = *(double *)(lVar10 + lVar12 * 8);
      dVar20 = *(double *)(lVar10 + lVar13 * 8);
      if (dVar21 == dVar20) {
        lVar16 = *(long *)(lVar9 + 0x78);
        if (*(ulong *)(lVar16 + lVar13 * 0x48 + 0x40) <= *(ulong *)(lVar16 + lVar12 * 0x48 + 0x40))
        {
LAB_10942ae2c:
          param_1[uVar19] = lVar12;
          if ((long)uVar18 <= (long)uVar11) {
            lVar12 = *param_3;
            do {
              lVar16 = uVar18 * 2;
              uVar18 = uVar18 << 1 | 1;
              plVar6 = param_1 + uVar18;
              uVar17 = lVar16 + 2;
              if ((long)uVar17 < (long)uVar8) {
                lVar16 = plVar6[1];
                dVar21 = *(double *)(lVar10 + *plVar6 * 8);
                dVar22 = *(double *)(lVar10 + lVar16 * 8);
                if (dVar21 == dVar22) {
                  lVar7 = *(long *)(lVar12 + 0x78);
                  if (*(ulong *)(lVar7 + *plVar6 * 0x48 + 0x40) <
                      *(ulong *)(lVar7 + lVar16 * 0x48 + 0x40)) {
LAB_10942aeac:
                    plVar6 = plVar6 + 1;
                    uVar18 = uVar17;
                  }
                }
                else if (dVar21 < dVar22) goto LAB_10942aeac;
              }
              lVar16 = *plVar6;
              dVar21 = *(double *)(lVar10 + lVar16 * 8);
              if (dVar21 == dVar20) {
                lVar7 = *(long *)(lVar12 + 0x78);
                if (*(ulong *)(lVar7 + lVar16 * 0x48 + 0x40) <
                    *(ulong *)(lVar7 + lVar13 * 0x48 + 0x40)) break;
              }
              else if (dVar21 < dVar20) break;
              *plVar5 = lVar16;
              plVar5 = plVar6;
            } while ((long)uVar18 <= (long)uVar11);
          }
          *plVar5 = lVar13;
        }
      }
      else if (dVar20 <= dVar21) goto LAB_10942ae2c;
    }
    bVar1 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar1);
  do {
    lVar10 = *param_1;
    lVar9 = *param_3;
    plVar14 = (long *)param_3[1];
    plVar5 = param_1;
    uVar19 = 0;
    do {
      plVar6 = plVar5 + uVar19 + 1;
      uVar17 = uVar19 << 1 | 1;
      uVar11 = uVar19 * 2 + 2;
      if ((long)uVar11 < (long)uVar8) {
        lVar12 = plVar5[uVar19 + 2];
        lVar13 = *plVar14;
        dVar20 = *(double *)(lVar13 + plVar5[uVar19 + 1] * 8);
        dVar21 = *(double *)(lVar13 + lVar12 * 8);
        if (dVar20 == dVar21) {
          lVar13 = *(long *)(lVar9 + 0x78);
          if (*(ulong *)(lVar13 + plVar5[uVar19 + 1] * 0x48 + 0x40) <
              *(ulong *)(lVar13 + lVar12 * 0x48 + 0x40)) {
LAB_10942afe8:
            plVar6 = plVar5 + uVar19 + 2;
            uVar17 = uVar11;
          }
        }
        else if (dVar20 < dVar21) goto LAB_10942afe8;
      }
      *plVar5 = *plVar6;
      plVar5 = plVar6;
      uVar19 = uVar17;
    } while ((long)uVar17 <= (long)(uVar8 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar6 == param_2) {
      *plVar6 = lVar10;
    }
    else {
      *plVar6 = *param_2;
      *param_2 = lVar10;
      lVar10 = (long)plVar6 + (8 - (long)param_1) >> 3;
      uVar19 = lVar10 - 2;
      if (1 < lVar10) {
        uVar11 = uVar19 >> 1;
        plVar5 = param_1 + uVar11;
        lVar13 = *plVar5;
        lVar12 = *plVar6;
        lVar10 = *plVar14;
        dVar21 = *(double *)(lVar10 + lVar13 * 8);
        dVar20 = *(double *)(lVar10 + lVar12 * 8);
        if (dVar21 == dVar20) {
          lVar9 = *(long *)(lVar9 + 0x78);
          if (*(ulong *)(lVar9 + lVar13 * 0x48 + 0x40) < *(ulong *)(lVar9 + lVar12 * 0x48 + 0x40)) {
LAB_10942b0e0:
            *plVar6 = lVar13;
            if (1 < uVar19) {
              lVar9 = *param_3;
              do {
                uVar19 = uVar11 - 1;
                uVar11 = uVar19 >> 1;
                plVar14 = param_1 + uVar11;
                lVar13 = *plVar14;
                dVar21 = *(double *)(lVar10 + lVar13 * 8);
                if (dVar21 == dVar20) {
                  if (*(ulong *)(*(long *)(lVar9 + 0x78) + lVar12 * 0x48 + 0x40) <=
                      *(ulong *)(*(long *)(lVar9 + 0x78) + lVar13 * 0x48 + 0x40)) break;
                }
                else if (dVar20 <= dVar21) break;
                *plVar5 = lVar13;
                plVar5 = plVar14;
              } while (1 < uVar19);
            }
            *plVar5 = lVar12;
          }
        }
        else if (dVar21 < dVar20) goto LAB_10942b0e0;
      }
    }
    bVar1 = (long)uVar8 < 3;
    uVar8 = uVar8 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_10942a874:
  plVar6 = (long *)((long)param_1 + lVar12);
  plVar14 = plVar6 + 1;
  plVar2 = plVar5;
  if (lVar12 != 0) {
    do {
      dVar21 = *(double *)(lVar10 + *plVar2 * 8);
      if (dVar21 == dVar20) {
        if (*(ulong *)(*(long *)(lVar13 + 0x78) + *plVar2 * 0x48 + 0x40) <
            *(ulong *)(*(long *)(lVar13 + 0x78) + lVar9 * 0x48 + 0x40)) goto LAB_10942a8cc;
      }
      else if (dVar21 < dVar20) goto LAB_10942a8cc;
      plVar2 = plVar2 + -1;
    } while( true );
  }
  plVar3 = plVar5;
  plVar2 = param_2;
  if (plVar14 < param_2) {
    do {
      dVar21 = *(double *)(lVar10 + *plVar3 * 8);
      plVar2 = plVar3;
      if (dVar21 == dVar20) {
        if ((plVar3 <= plVar14) ||
           (*(ulong *)(*(long *)(lVar13 + 0x78) + *plVar3 * 0x48 + 0x40) <
            *(ulong *)(*(long *)(lVar13 + 0x78) + lVar9 * 0x48 + 0x40))) break;
      }
      else if ((plVar3 <= plVar14) || (dVar21 < dVar20)) break;
      plVar3 = plVar3 + -1;
    } while( true );
  }
LAB_10942a8cc:
  if (plVar14 < plVar2) {
    lVar12 = *plVar2;
    plVar3 = plVar14;
    plVar15 = plVar2;
    do {
      *plVar3 = lVar12;
      *plVar15 = lVar16;
      do {
        while( true ) {
          plVar6 = plVar3;
          plVar3 = plVar6 + 1;
          lVar16 = *plVar3;
          dVar21 = *(double *)(lVar10 + lVar16 * 8);
          if (dVar21 != dVar20) break;
          lVar12 = *(long *)(*param_3 + 0x78);
          if (*(ulong *)(lVar12 + lVar9 * 0x48 + 0x40) <= *(ulong *)(lVar12 + lVar16 * 0x48 + 0x40))
          goto LAB_10942a938;
        }
      } while (dVar21 < dVar20);
LAB_10942a938:
      do {
        plVar15 = plVar15 + -1;
        lVar12 = *plVar15;
        dVar21 = *(double *)(lVar10 + lVar12 * 8);
        if (dVar21 == dVar20) {
          lVar13 = *(long *)(*param_3 + 0x78);
          if (*(ulong *)(lVar13 + lVar12 * 0x48 + 0x40) < *(ulong *)(lVar13 + lVar9 * 0x48 + 0x40))
          break;
          goto LAB_10942a938;
        }
      } while (dVar20 <= dVar21);
    } while (plVar3 < plVar15);
  }
  if (plVar6 != param_1) {
    *param_1 = *plVar6;
  }
  *plVar6 = lVar9;
  if (plVar2 <= plVar14) {
    plVar2 = param_1;
    FUN_10942b690(param_1,plVar6,param_3);
    plVar14 = plVar6 + 1;
    plVar3 = plVar14;
    FUN_10942b690(plVar14,param_2,param_3);
    if ((int)plVar3 != 0) goto LAB_10942abf8;
    if (((ulong)plVar2 & 1) != 0) goto LAB_10942a6e8;
  }
  FUN_10942a69c(param_1,plVar6,param_3,param_4,param_5 & 1);
  param_5 = 0;
  plVar14 = plVar6 + 1;
  goto LAB_10942a6e8;
LAB_10942abf8:
  param_2 = plVar6;
  if (((ulong)plVar2 & 1) != 0) {
    return;
  }
  goto LAB_10942a6d4;
}



/* Entry: 10942b2c4; end: 10942b417;  */

void FUN_10942b2c4(long *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = *param_2;
  lVar1 = *param_1;
  dVar5 = *(double *)(param_5 + lVar2 * 8);
  dVar4 = *(double *)(param_5 + lVar1 * 8);
  if (dVar5 == dVar4) {
    if (*(ulong *)(*(long *)(param_4 + 0x78) + lVar1 * 0x48 + 0x40) <=
        *(ulong *)(*(long *)(param_4 + 0x78) + lVar2 * 0x48 + 0x40)) {
LAB_10942b33c:
      lVar1 = *param_3;
      dVar4 = *(double *)(param_5 + lVar1 * 8);
      if (dVar4 == dVar5) {
        if (*(ulong *)(*(long *)(param_4 + 0x78) + lVar2 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(param_4 + 0x78) + lVar1 * 0x48 + 0x40)) {
          return;
        }
      }
      else if (dVar5 <= dVar4) {
        return;
      }
      *param_2 = lVar1;
      *param_3 = lVar2;
      lVar1 = *param_2;
      lVar2 = *param_1;
      dVar4 = *(double *)(param_5 + lVar1 * 8);
      dVar5 = *(double *)(param_5 + lVar2 * 8);
      if (dVar4 == dVar5) {
        if (*(ulong *)(*(long *)(param_4 + 0x78) + lVar2 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(param_4 + 0x78) + lVar1 * 0x48 + 0x40)) {
          return;
        }
      }
      else if (dVar5 <= dVar4) {
        return;
      }
      *param_1 = lVar1;
      *param_2 = lVar2;
      return;
    }
  }
  else if (dVar4 <= dVar5) goto LAB_10942b33c;
  lVar3 = *param_3;
  dVar6 = *(double *)(param_5 + lVar3 * 8);
  if (dVar6 == dVar5) {
    if (*(ulong *)(*(long *)(param_4 + 0x78) + lVar3 * 0x48 + 0x40) <
        *(ulong *)(*(long *)(param_4 + 0x78) + lVar2 * 0x48 + 0x40)) {
LAB_10942b32c:
      *param_1 = lVar3;
      *param_3 = lVar1;
      return;
    }
  }
  else if (dVar6 < dVar5) goto LAB_10942b32c;
  *param_1 = lVar2;
  *param_2 = lVar1;
  lVar2 = *param_3;
  dVar5 = *(double *)(param_5 + lVar2 * 8);
  if (dVar5 == dVar4) {
    if (*(ulong *)(*(long *)(param_4 + 0x78) + lVar1 * 0x48 + 0x40) <=
        *(ulong *)(*(long *)(param_4 + 0x78) + lVar2 * 0x48 + 0x40)) {
      return;
    }
  }
  else if (dVar4 <= dVar5) {
    return;
  }
  *param_2 = lVar2;
  *param_3 = lVar1;
  return;
}



/* Entry: 10942b418; end: 10942b68f;  */

void FUN_10942b418(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  FUN_10942b2c4();
  lVar2 = *param_4;
  lVar3 = *param_3;
  lVar1 = *(long *)param_6[1];
  dVar4 = *(double *)(lVar1 + lVar2 * 8);
  dVar5 = *(double *)(lVar1 + lVar3 * 8);
  if (dVar4 == dVar5) {
    if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40) <
        *(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40)) {
LAB_10942b49c:
      *param_3 = lVar2;
      *param_4 = lVar3;
      lVar2 = *param_3;
      lVar3 = *param_2;
      dVar4 = *(double *)(lVar1 + lVar2 * 8);
      dVar5 = *(double *)(lVar1 + lVar3 * 8);
      if (dVar4 == dVar5) {
        if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40) <
            *(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40)) {
LAB_10942b4e8:
          *param_2 = lVar2;
          *param_3 = lVar3;
          lVar2 = *param_2;
          lVar3 = *param_1;
          dVar4 = *(double *)(lVar1 + lVar2 * 8);
          dVar5 = *(double *)(lVar1 + lVar3 * 8);
          if (dVar4 == dVar5) {
            if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40) <
                *(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40)) {
LAB_10942b52c:
              *param_1 = lVar2;
              *param_2 = lVar3;
            }
          }
          else if (dVar4 < dVar5) goto LAB_10942b52c;
        }
      }
      else if (dVar4 < dVar5) goto LAB_10942b4e8;
    }
  }
  else if (dVar4 < dVar5) goto LAB_10942b49c;
  lVar2 = *param_5;
  lVar3 = *param_4;
  dVar4 = *(double *)(lVar1 + lVar2 * 8);
  dVar5 = *(double *)(lVar1 + lVar3 * 8);
  if (dVar4 == dVar5) {
    if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40) <=
        *(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40)) {
      return;
    }
  }
  else if (dVar5 <= dVar4) {
    return;
  }
  *param_4 = lVar2;
  *param_5 = lVar3;
  lVar2 = *param_4;
  lVar3 = *param_3;
  dVar4 = *(double *)(lVar1 + lVar2 * 8);
  dVar5 = *(double *)(lVar1 + lVar3 * 8);
  if (dVar4 == dVar5) {
    if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40) <=
        *(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40)) {
      return;
    }
  }
  else if (dVar5 <= dVar4) {
    return;
  }
  *param_3 = lVar2;
  *param_4 = lVar3;
  lVar2 = *param_3;
  lVar3 = *param_2;
  dVar4 = *(double *)(lVar1 + lVar2 * 8);
  dVar5 = *(double *)(lVar1 + lVar3 * 8);
  if (dVar4 == dVar5) {
    if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40) <=
        *(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40)) {
      return;
    }
  }
  else if (dVar5 <= dVar4) {
    return;
  }
  *param_2 = lVar2;
  *param_3 = lVar3;
  lVar2 = *param_2;
  lVar3 = *param_1;
  dVar4 = *(double *)(lVar1 + lVar2 * 8);
  dVar5 = *(double *)(lVar1 + lVar3 * 8);
  if (dVar4 == dVar5) {
    if (*(ulong *)(*(long *)(*param_6 + 0x78) + lVar2 * 0x48 + 0x40) <
        *(ulong *)(*(long *)(*param_6 + 0x78) + lVar3 * 0x48 + 0x40)) {
LAB_10942b674:
      *param_1 = lVar2;
      *param_2 = lVar3;
      return;
    }
  }
  else if (dVar4 < dVar5) goto LAB_10942b674;
  return;
}



/* Entry: 10942b690; end: 10942b9df;  */

bool FUN_10942b690(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  double dVar13;
  double dVar14;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      lVar3 = param_2[-1];
      lVar4 = *param_1;
      dVar13 = *(double *)(*(long *)param_3[1] + lVar3 * 8);
      dVar14 = *(double *)(*(long *)param_3[1] + lVar4 * 8);
      if (dVar13 == dVar14) {
        if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar4 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(*param_3 + 0x78) + lVar3 * 0x48 + 0x40)) {
          return true;
        }
      }
      else if (dVar14 <= dVar13) {
        return true;
      }
      *param_1 = lVar3;
      param_2[-1] = lVar4;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      FUN_10942b2c4(param_1,param_1 + 1,param_2 + -1,*param_3,*(undefined8 *)param_3[1]);
      return true;
    }
    if (uVar2 == 4) {
      FUN_10942b2c4(param_1,param_1 + 1,param_1 + 2,*param_3,*(undefined8 *)param_3[1]);
      lVar4 = param_2[-1];
      lVar7 = param_1[2];
      lVar3 = *(long *)param_3[1];
      dVar13 = *(double *)(lVar3 + lVar4 * 8);
      dVar14 = *(double *)(lVar3 + lVar7 * 8);
      if (dVar13 == dVar14) {
        if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar7 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(*param_3 + 0x78) + lVar4 * 0x48 + 0x40)) {
          return true;
        }
      }
      else if (dVar14 <= dVar13) {
        return true;
      }
      param_1[2] = lVar4;
      param_2[-1] = lVar7;
      lVar4 = param_1[1];
      lVar7 = param_1[2];
      dVar13 = *(double *)(lVar3 + lVar7 * 8);
      dVar14 = *(double *)(lVar3 + lVar4 * 8);
      if (dVar13 == dVar14) {
        if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar4 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(*param_3 + 0x78) + lVar7 * 0x48 + 0x40)) {
          return true;
        }
      }
      else if (dVar14 <= dVar13) {
        return true;
      }
      param_1[1] = lVar7;
      param_1[2] = lVar4;
      lVar4 = *param_1;
      dVar14 = *(double *)(lVar3 + lVar4 * 8);
      if (dVar13 == dVar14) {
        if (*(ulong *)(*(long *)(*param_3 + 0x78) + lVar4 * 0x48 + 0x40) <=
            *(ulong *)(*(long *)(*param_3 + 0x78) + lVar7 * 0x48 + 0x40)) {
          return true;
        }
      }
      else if (dVar14 <= dVar13) {
        return true;
      }
      *param_1 = lVar7;
      param_1[1] = lVar4;
      return true;
    }
    if (uVar2 == 5) {
      FUN_10942b418(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_10942b2c4(param_1,param_1 + 1,param_1 + 2,*param_3,*(undefined8 *)param_3[1]);
  if (param_1 + 3 != param_2) {
    lVar3 = 0;
    iVar6 = 0;
    lVar4 = *param_3;
    lVar7 = *(long *)param_3[1];
    plVar11 = param_1 + 3;
    plVar12 = param_1 + 2;
    do {
      plVar5 = plVar11;
      lVar8 = *plVar5;
      lVar9 = *plVar12;
      dVar13 = *(double *)(lVar7 + lVar8 * 8);
      dVar14 = *(double *)(lVar7 + lVar9 * 8);
      if (dVar13 == dVar14) {
        if (*(ulong *)(*(long *)(lVar4 + 0x78) + lVar8 * 0x48 + 0x40) <
            *(ulong *)(*(long *)(lVar4 + 0x78) + lVar9 * 0x48 + 0x40)) {
LAB_10942b834:
          *plVar5 = lVar9;
          lVar10 = *param_3;
          lVar9 = lVar3;
          do {
            lVar1 = *(long *)((long)param_1 + lVar9 + 8);
            dVar14 = *(double *)(lVar7 + lVar1 * 8);
            if (dVar13 == dVar14) {
              if (*(ulong *)(*(long *)(lVar10 + 0x78) + lVar1 * 0x48 + 0x40) <=
                  *(ulong *)(*(long *)(lVar10 + 0x78) + lVar8 * 0x48 + 0x40)) {
                plVar11 = (long *)((long)param_1 + lVar9 + 0x10);
                break;
              }
            }
            else {
              plVar11 = plVar12;
              if (dVar14 <= dVar13) break;
            }
            plVar12 = plVar12 + -1;
            *(long *)((long)param_1 + lVar9 + 0x10) = lVar1;
            lVar9 = lVar9 + -8;
            plVar11 = param_1;
          } while (lVar9 != -0x10);
          *plVar11 = lVar8;
          iVar6 = iVar6 + 1;
          if (iVar6 == 8) {
            return plVar5 + 1 == param_2;
          }
        }
      }
      else if (dVar13 < dVar14) goto LAB_10942b834;
      lVar3 = lVar3 + 8;
      plVar11 = plVar5 + 1;
      plVar12 = plVar5;
    } while (plVar5 + 1 != param_2);
  }
  return true;
}



/* Entry: 10942b9e0; end: 10942bb0b;  */

void FUN_10942b9e0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar8 = (long *)*param_1;
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    lVar10 = plVar8[1];
    lVar6 = lVar9;
    if (lVar10 != lVar9) {
      do {
        if (*(long *)(lVar10 + -0x28) != 0) {
          piVar1 = (int *)(*(long *)(lVar10 + -0x28) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar10 + -0x28) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar10 + -0x28) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar10 + -0x30), *(long **)(lVar10 + -0x30) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar10 + -0x28) = 0;
        *(undefined8 *)(lVar10 + -0x48) = 0;
        *(undefined8 *)(lVar10 + -0x50) = 0;
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined8 *)(lVar10 + -0x40) = 0;
        if (0 < *(int *)(lVar10 + -0x5c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar10 + -0x20);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar10 + -0x5c));
        }
        lVar6 = *(long *)(lVar10 + -0x18);
        if (lVar6 != lVar10 + -0x10 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar10 = lVar10 + -0xc0;
      } while (lVar10 != lVar9);
      lVar6 = *(long *)*param_1;
    }
    plVar8[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar6);
    return;
  }
  return;
}



/* Entry: 10942bb0c; end: 10942bc53;  */

long FUN_10942bb0c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if (*(long *)(param_1 + 0x80) != lVar4) {
      lVar5 = *(long *)(param_1 + 0x80) + -0x20;
      do {
        lStack_38 = lVar5;
        FUN_10942a570(&lStack_38);
        lStack_38 = lVar5 + -0x18;
        FUN_109427be4(&lStack_38);
        lVar1 = *(long *)(lVar5 + -0x20);
        *(undefined8 *)(lVar5 + -0x20) = 0;
        if (lVar1 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
        lVar1 = lVar5 + -0x28;
        lVar5 = lVar5 + -0x48;
      } while (lVar1 != lVar4);
      lVar5 = *(long *)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x80) = lVar4;
    __ZdlPv(lVar5);
  }
  plVar2 = *(long **)(param_1 + 0x60);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar2 = (long *)*(long *)(param_1 + 0x38);
  while (plVar2 != (long *)0x0) {
    lStack_38 = (long)(plVar2 + 3);
    lVar4 = *plVar2;
    FUN_10942b9e0(&lStack_38);
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x18);
    plVar3 = plVar2;
    if (plVar6 != plVar2) {
      do {
        plVar6 = plVar6 + -1;
        lVar4 = *plVar6;
        *plVar6 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
      } while (plVar6 != plVar2);
      plVar3 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x18) = plVar2;
    __ZdlPv(plVar3);
  }
  return param_1;
}



/* Entry: 10942bc54; end: 10942bc67;  */

undefined8 * FUN_10942bc54(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar7 = (undefined8 *)&UNK_10f56d48b;
  func_0x000104c4f6cc();
  uVar17 = *param_2;
  puVar7[0x29] = param_2[1];
  puVar7[0x28] = uVar17;
  uVar17 = param_2[2];
  puVar7[0x2b] = param_2[3];
  puVar7[0x2a] = uVar17;
  uVar17 = param_2[4];
  puVar7[0x2d] = param_2[5];
  puVar7[0x2c] = uVar17;
  puVar7[0x2e] = param_2[6];
  uVar17 = param_2[8];
  puVar7[0x31] = param_2[9];
  puVar7[0x30] = uVar17;
  uVar17 = param_2[10];
  puVar7[0x33] = param_2[0xb];
  puVar7[0x32] = uVar17;
  uVar17 = param_2[0xc];
  puVar7[0x35] = param_2[0xd];
  puVar7[0x34] = uVar17;
  uVar17 = param_2[0xe];
  puVar7[0x37] = param_2[0xf];
  puVar7[0x36] = uVar17;
  puVar7[0x38] = param_2[0x10];
  *(undefined4 *)(puVar7 + 0x3a) = *(undefined4 *)(param_2 + 0x12);
  puVar9 = puVar7;
  if (puVar7 + 0x28 != param_2) {
    puVar9 = (undefined8 *)param_2[0x13];
    puVar3 = (undefined8 *)param_2[0x14];
    uVar16 = (long)puVar3 - (long)puVar9;
    lVar10 = puVar7[0x3d];
    puVar8 = (undefined8 *)puVar7[0x3b];
    if ((ulong)(lVar10 - (long)puVar8) < uVar16) {
      uVar14 = ((long)uVar16 >> 3) * -0x5555555555555555;
      if (puVar8 != (undefined8 *)0x0) {
        puVar7[0x3c] = puVar8;
        __ZdlPv();
        lVar10 = 0;
        puVar7[0x3b] = 0;
        puVar7[0x3c] = 0;
        puVar7[0x3d] = 0;
      }
      if (0xaaaaaaaaaaaaaaa < uVar14) {
LAB_10942bec4:
        FUN_10942bf2c();
        plVar13 = (long *)puVar8[1];
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 1;
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            return puVar8;
          }
        }
        return puVar8;
      }
      uVar12 = (lVar10 >> 3) * 0x5555555555555556;
      if (uVar12 < uVar14 || uVar12 + ((long)uVar16 >> 3) * 0x5555555555555555 == 0) {
        uVar12 = uVar14;
      }
      if (0x555555555555554 < (ulong)((lVar10 >> 3) * -0x5555555555555555)) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_10942bec4;
      lVar10 = uVar12 * 0x18;
      __Znwm();
      puVar7[0x3b] = lVar10;
      puVar7[0x3c] = lVar10;
      puVar7[0x3d] = lVar10 + uVar12 * 0x18;
      if (puVar9 != puVar3) {
        lVar15 = ((uVar16 - 0x18) / 0x18) * 0x18 + 0x18;
        _memcpy(lVar10,puVar9,lVar15);
        lVar10 = lVar10 + lVar15;
      }
      puVar7[0x3c] = lVar10;
    }
    else {
      puVar11 = (undefined8 *)puVar7[0x3c];
      if ((ulong)((long)puVar11 - (long)puVar8) < uVar16) {
        puVar2 = (undefined8 *)((long)puVar9 + ((long)puVar11 - (long)puVar8));
        puVar6 = puVar11;
        if (puVar11 != puVar8) {
          do {
            uVar17 = *puVar9;
            puVar8[1] = puVar9[1];
            *puVar8 = uVar17;
            puVar8[2] = puVar9[2];
            puVar9 = puVar9 + 3;
            puVar8 = puVar8 + 3;
          } while (puVar9 != puVar2);
          puVar11 = (undefined8 *)puVar7[0x3c];
          puVar6 = puVar11;
        }
        for (; puVar2 != puVar3; puVar2 = puVar2 + 3) {
          uVar18 = puVar2[1];
          uVar17 = *puVar2;
          puVar11[2] = puVar2[2];
          puVar11[1] = uVar18;
          *puVar11 = uVar17;
          puVar11 = puVar11 + 3;
          puVar6 = puVar6 + 3;
        }
        puVar7[0x3c] = puVar6;
      }
      else {
        for (; puVar9 != puVar3; puVar9 = puVar9 + 3) {
          uVar17 = *puVar9;
          puVar8[1] = puVar9[1];
          *puVar8 = uVar17;
          puVar8[2] = puVar9[2];
          puVar8 = puVar8 + 3;
        }
        puVar7[0x3c] = puVar8;
      }
    }
    FUN_10928555c(puVar7 + 0x3e,param_2[0x16],param_2[0x17],
                  (long)(param_2[0x17] - param_2[0x16]) >> 2);
    puVar9 = puVar7 + 0x41;
    FUN_10942bf40(puVar9,param_2[0x19],param_2[0x1a],(long)(param_2[0x1a] - param_2[0x19]) >> 2);
  }
  puVar7[0x44] = param_2[0x1c];
  return puVar9;
}



/* Entry: 10942bc68; end: 10942bec7;  */

undefined8 * FUN_10942bc68(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar16 = *param_2;
  param_1[0x29] = param_2[1];
  param_1[0x28] = uVar16;
  uVar16 = param_2[2];
  param_1[0x2b] = param_2[3];
  param_1[0x2a] = uVar16;
  uVar16 = param_2[4];
  param_1[0x2d] = param_2[5];
  param_1[0x2c] = uVar16;
  param_1[0x2e] = param_2[6];
  uVar16 = param_2[8];
  param_1[0x31] = param_2[9];
  param_1[0x30] = uVar16;
  uVar16 = param_2[10];
  param_1[0x33] = param_2[0xb];
  param_1[0x32] = uVar16;
  uVar16 = param_2[0xc];
  param_1[0x35] = param_2[0xd];
  param_1[0x34] = uVar16;
  uVar16 = param_2[0xe];
  param_1[0x37] = param_2[0xf];
  param_1[0x36] = uVar16;
  param_1[0x38] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x12);
  puVar8 = param_1;
  if (param_1 + 0x28 != param_2) {
    puVar8 = (undefined8 *)param_2[0x13];
    puVar3 = (undefined8 *)param_2[0x14];
    uVar15 = (long)puVar3 - (long)puVar8;
    lVar9 = param_1[0x3d];
    puVar7 = (undefined8 *)param_1[0x3b];
    if ((ulong)(lVar9 - (long)puVar7) < uVar15) {
      uVar13 = ((long)uVar15 >> 3) * -0x5555555555555555;
      if (puVar7 != (undefined8 *)0x0) {
        param_1[0x3c] = puVar7;
        __ZdlPv();
        lVar9 = 0;
        param_1[0x3b] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
      }
      if (0xaaaaaaaaaaaaaaa < uVar13) {
LAB_10942bec4:
        FUN_10942bf2c();
        plVar12 = (long *)puVar7[1];
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            lVar9 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            return puVar7;
          }
        }
        return puVar7;
      }
      uVar11 = (lVar9 >> 3) * 0x5555555555555556;
      if (uVar11 < uVar13 || uVar11 + ((long)uVar15 >> 3) * 0x5555555555555555 == 0) {
        uVar11 = uVar13;
      }
      if (0x555555555555554 < (ulong)((lVar9 >> 3) * -0x5555555555555555)) {
        uVar11 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_10942bec4;
      lVar9 = uVar11 * 0x18;
      __Znwm();
      param_1[0x3b] = lVar9;
      param_1[0x3c] = lVar9;
      param_1[0x3d] = lVar9 + uVar11 * 0x18;
      if (puVar8 != puVar3) {
        lVar14 = ((uVar15 - 0x18) / 0x18) * 0x18 + 0x18;
        _memcpy(lVar9,puVar8,lVar14);
        lVar9 = lVar9 + lVar14;
      }
      param_1[0x3c] = lVar9;
    }
    else {
      puVar10 = (undefined8 *)param_1[0x3c];
      if ((ulong)((long)puVar10 - (long)puVar7) < uVar15) {
        puVar2 = (undefined8 *)((long)puVar8 + ((long)puVar10 - (long)puVar7));
        puVar6 = puVar10;
        if (puVar10 != puVar7) {
          do {
            uVar16 = *puVar8;
            puVar7[1] = puVar8[1];
            *puVar7 = uVar16;
            puVar7[2] = puVar8[2];
            puVar8 = puVar8 + 3;
            puVar7 = puVar7 + 3;
          } while (puVar8 != puVar2);
          puVar10 = (undefined8 *)param_1[0x3c];
          puVar6 = puVar10;
        }
        for (; puVar2 != puVar3; puVar2 = puVar2 + 3) {
          uVar17 = puVar2[1];
          uVar16 = *puVar2;
          puVar10[2] = puVar2[2];
          puVar10[1] = uVar17;
          *puVar10 = uVar16;
          puVar10 = puVar10 + 3;
          puVar6 = puVar6 + 3;
        }
        param_1[0x3c] = puVar6;
      }
      else {
        for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
          uVar16 = *puVar8;
          puVar7[1] = puVar8[1];
          *puVar7 = uVar16;
          puVar7[2] = puVar8[2];
          puVar7 = puVar7 + 3;
        }
        param_1[0x3c] = puVar7;
      }
    }
    FUN_10928555c(param_1 + 0x3e,param_2[0x16],param_2[0x17],
                  (long)(param_2[0x17] - param_2[0x16]) >> 2);
    puVar8 = param_1 + 0x41;
    FUN_10942bf40(puVar8,param_2[0x19],param_2[0x1a],(long)(param_2[0x1a] - param_2[0x19]) >> 2);
  }
  param_1[0x44] = param_2[0x1c];
  return puVar8;
}



/* Entry: 10942bec8; end: 10942bf2b;  */

long FUN_10942bec8(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10942bf2c; end: 10942bf3f;  */

void FUN_10942bf2c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar3 = (long *)&UNK_10f56d48b;
  func_0x000104c4f6cc();
  uVar7 = plVar3[2];
  plVar4 = (long *)*plVar3;
  if (param_4 <= (ulong)((long)(uVar7 - (long)plVar4) >> 2)) {
    plVar8 = (long *)plVar3[1];
    if (param_4 <= (ulong)((long)plVar8 - (long)plVar4 >> 2)) {
      if (param_3 - param_2 != 0) {
        _memmove();
      }
      plVar3[1] = (long)plVar4 + (param_3 - param_2);
      return;
    }
    param_2 = param_2 + ((long)plVar8 - (long)plVar4);
    if (plVar8 != plVar4) {
      _memmove();
      plVar8 = (long *)plVar3[1];
    }
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar8,param_2,param_3);
    }
LAB_10942c034:
    plVar3[1] = (long)plVar8 + param_3;
    return;
  }
  lVar6 = param_2;
  lVar5 = param_3;
  if (plVar4 != (long *)0x0) {
    plVar3[1] = (long)plVar4;
    __ZdlPv();
    uVar7 = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar7 >> 1;
    if ((ulong)((long)uVar7 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 >> 0x3e == 0) {
      plVar8 = (long *)(uVar1 * 4);
      __Znwm();
      *plVar3 = (long)plVar8;
      plVar3[1] = (long)plVar8;
      plVar3[2] = (long)plVar8 + (long)(uVar1 * 4);
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memcpy(plVar8,param_2,param_3);
      }
      goto LAB_10942c034;
    }
  }
  FUN_1092cc18c();
  if ((lVar6 != 0) && (lVar5 != 0)) {
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = 0x7fffffffffffffff / lVar5;
    }
    if (lVar6 <= lVar2) goto LAB_10942c0b8;
    goto LAB_10942c0ec;
  }
LAB_10942c0b8:
  uVar7 = lVar5 * lVar6;
  if (plVar4[1] == uVar7) goto LAB_10942c114;
  _free(*plVar4);
  if ((long)uVar7 < 1) {
LAB_10942c10c:
    lVar5 = 0;
  }
  else {
    if (uVar7 >> 0x3d != 0) {
LAB_10942c0ec:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10942c10c;
    }
    lVar5 = uVar7 * 8;
    _malloc();
    if (lVar5 == 0) goto LAB_10942c0ec;
  }
  *plVar4 = lVar5;
LAB_10942c114:
  plVar4[1] = lVar6;
  return;
}



/* Entry: 10942bf40; end: 10942c087;  */

void FUN_10942bf40(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = param_1[2];
  plVar3 = (long *)*param_1;
  if (param_4 <= (ulong)((long)(uVar6 - (long)plVar3) >> 2)) {
    plVar7 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar7 - (long)plVar3 >> 2)) {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(plVar3,param_2,param_3);
      }
      param_1[1] = (long)plVar3 + param_3;
      return;
    }
    param_2 = param_2 + ((long)plVar7 - (long)plVar3);
    if (plVar7 != plVar3) {
      _memmove();
      plVar7 = (long *)param_1[1];
    }
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar7,param_2,param_3);
    }
LAB_10942c034:
    param_1[1] = (long)plVar7 + param_3;
    return;
  }
  lVar5 = param_2;
  lVar4 = param_3;
  if (plVar3 != (long *)0x0) {
    param_1[1] = (long)plVar3;
    __ZdlPv();
    uVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar6 >> 1;
    if ((ulong)((long)uVar6 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 >> 0x3e == 0) {
      plVar7 = (long *)(uVar1 * 4);
      __Znwm();
      *param_1 = (long)plVar7;
      param_1[1] = (long)plVar7;
      param_1[2] = (long)plVar7 + (long)(uVar1 * 4);
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memcpy(plVar7,param_2,param_3);
      }
      goto LAB_10942c034;
    }
  }
  FUN_1092cc18c();
  if ((lVar5 != 0) && (lVar4 != 0)) {
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = 0x7fffffffffffffff / lVar4;
    }
    if (lVar5 <= lVar2) goto LAB_10942c0b8;
    goto LAB_10942c0ec;
  }
LAB_10942c0b8:
  uVar6 = lVar4 * lVar5;
  if (plVar3[1] == uVar6) goto LAB_10942c114;
  _free(*plVar3);
  if ((long)uVar6 < 1) {
LAB_10942c10c:
    lVar4 = 0;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
LAB_10942c0ec:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10942c10c;
    }
    lVar4 = uVar6 * 8;
    _malloc();
    if (lVar4 == 0) goto LAB_10942c0ec;
  }
  *plVar3 = lVar4;
LAB_10942c114:
  plVar3[1] = lVar5;
  return;
}



/* Entry: 10942c088; end: 10942c127;  */

void FUN_10942c088(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = 0x7fffffffffffffff / param_3;
    }
    if (param_2 <= lVar1) goto LAB_10942c0b8;
    goto LAB_10942c0ec;
  }
LAB_10942c0b8:
  uVar2 = param_3 * param_2;
  if (param_1[1] == uVar2) goto LAB_10942c114;
  _free(*param_1);
  if ((long)uVar2 < 1) {
LAB_10942c10c:
    lVar1 = 0;
  }
  else {
    if (uVar2 >> 0x3d != 0) {
LAB_10942c0ec:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10942c10c;
    }
    lVar1 = uVar2 * 8;
    _malloc();
    if (lVar1 == 0) goto LAB_10942c0ec;
  }
  *param_1 = lVar1;
LAB_10942c114:
  param_1[1] = param_2;
  return;
}



/* Entry: 10942c128; end: 10942c44f;  */

undefined8 * FUN_10942c128(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  uVar7 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  uVar7 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar7;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  FUN_10937da58(param_1 + 0xd,param_2 + 0xd);
  uVar7 = param_2[0x10];
  uVar9 = param_2[0x13];
  uVar8 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar7;
  param_1[0x13] = uVar9;
  param_1[0x12] = uVar8;
  uVar8 = param_2[0x15];
  uVar7 = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  uVar10 = param_2[0x1d];
  uVar9 = param_2[0x1c];
  uVar8 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  uVar12 = param_2[0x1b];
  uVar11 = param_2[0x1a];
  param_1[0x20] = param_2[0x20];
  param_1[0x1d] = uVar10;
  param_1[0x1c] = uVar9;
  param_1[0x1f] = uVar8;
  param_1[0x1e] = uVar7;
  param_1[0x1b] = uVar12;
  param_1[0x1a] = uVar11;
  uVar7 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar7;
  lVar6 = param_2[0x23];
  uVar7 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = param_2[0x24];
  uVar9 = param_2[0x27];
  uVar8 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar7;
  param_1[0x27] = uVar9;
  param_1[0x26] = uVar8;
  uVar7 = param_2[0x28];
  uVar9 = param_2[0x2b];
  uVar8 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar7;
  param_1[0x2b] = uVar9;
  param_1[0x2a] = uVar8;
  uVar8 = param_2[0x2d];
  uVar7 = param_2[0x2c];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2d] = uVar8;
  param_1[0x2c] = uVar7;
  uVar10 = param_2[0x35];
  uVar9 = param_2[0x34];
  uVar8 = param_2[0x37];
  uVar7 = param_2[0x36];
  uVar12 = param_2[0x33];
  uVar11 = param_2[0x32];
  param_1[0x38] = param_2[0x38];
  param_1[0x35] = uVar10;
  param_1[0x34] = uVar9;
  param_1[0x37] = uVar8;
  param_1[0x36] = uVar7;
  param_1[0x33] = uVar12;
  param_1[0x32] = uVar11;
  uVar7 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar7;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  lVar6 = param_2[0x3c] - param_2[0x3b];
  if (lVar6 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)((lVar6 >> 3) * -0x5555555555555555)) {
      FUN_10942bf2c();
      goto LAB_10942c3cc;
    }
    lVar5 = lVar6;
    __Znwm();
    param_1[0x3b] = lVar5;
    param_1[0x3c] = lVar5;
    param_1[0x3d] = lVar5 + lVar6;
    _memcpy();
    param_1[0x3c] = lVar5 + ((lVar6 - 0x18U) / 0x18) * 0x18 + 0x18;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  lVar6 = param_2[0x3f] - param_2[0x3e];
  if (lVar6 != 0) {
    if (lVar6 < 0) {
      FUN_10923f788();
      goto LAB_10942c3cc;
    }
    lVar5 = lVar6;
    __Znwm();
    param_1[0x3e] = lVar5;
    param_1[0x3f] = lVar5;
    param_1[0x40] = lVar5 + lVar6;
    _memcpy();
    param_1[0x3f] = lVar5 + lVar6;
  }
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  lVar6 = param_2[0x42] - param_2[0x41];
  if (lVar6 != 0) {
    if (lVar6 < 0) {
      FUN_1092cc18c();
LAB_10942c3cc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10942c3d0);
      (*pcVar4)();
    }
    lVar5 = lVar6;
    __Znwm();
    param_1[0x41] = lVar5;
    param_1[0x42] = lVar5;
    param_1[0x43] = lVar5 + lVar6;
    _memcpy();
    param_1[0x42] = lVar5 + lVar6;
  }
  param_1[0x44] = param_2[0x44];
  uVar8 = param_2[0x47];
  uVar7 = param_2[0x46];
  uVar10 = param_2[0x49];
  uVar9 = param_2[0x48];
  uVar12 = param_2[0x4b];
  uVar11 = param_2[0x4a];
  uVar13 = *(undefined8 *)((long)param_2 + 0x25a);
  *(undefined8 *)((long)param_1 + 0x262) = *(undefined8 *)((long)param_2 + 0x262);
  *(undefined8 *)((long)param_1 + 0x25a) = uVar13;
  param_1[0x49] = uVar10;
  param_1[0x48] = uVar9;
  param_1[0x4b] = uVar12;
  param_1[0x4a] = uVar11;
  param_1[0x47] = uVar8;
  param_1[0x46] = uVar7;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar6 = param_2[0x4f];
    uVar7 = param_2[0x4e];
    param_1[0x4f] = param_2[0x4f];
    param_1[0x4e] = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return param_1;
}



/* Entry: 10942c450; end: 10942c683;  */

long FUN_10942c450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(char *)(param_1 + 0x280) == '\x01') &&
     (plVar5 = *(long **)(param_1 + 0x278), plVar5 != (long *)0x0)) {
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
  if (*(long *)(param_1 + 0x208) != 0) {
    *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x208);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x118);
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
      _free(*(undefined8 *)(param_1 + 0x68));
      return param_1;
    }
  }
  _free(*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 10942c684; end: 10942c8c3;  */

long * FUN_10942c684(long *param_1,ulong param_2,float *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = uVar5 - 1;
    if ((uVar5 & uVar4) == 0) {
      uVar3 = uVar4 & param_2;
      plVar2 = *(long **)(*param_1 + uVar3 * 8);
    }
    else {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = param_2 / uVar5;
      }
      uVar3 = param_2;
      if (uVar5 <= param_2) {
        uVar3 = param_2 - uVar1 * uVar5;
      }
      plVar2 = *(long **)(*param_1 + uVar3 * 8);
    }
    if ((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) {
      if ((uVar5 & uVar4) == 0) {
        do {
          if (plVar2[1] == param_2) {
            if (((*(float *)(plVar2 + 2) == *param_3) &&
                (*(float *)((long)plVar2 + 0x14) == param_3[1])) &&
               (*(float *)(plVar2 + 3) == param_3[2])) {
              return plVar2;
            }
          }
          else if ((plVar2[1] & uVar4) != uVar3) break;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar2[1];
          if (uVar4 == param_2) {
            if (((*(float *)(plVar2 + 2) == *param_3) &&
                (*(float *)((long)plVar2 + 0x14) == param_3[1])) &&
               (*(float *)(plVar2 + 3) == param_3[2])) {
              return plVar2;
            }
          }
          else {
            if (uVar5 <= uVar4) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar4 / uVar5;
              }
              uVar4 = uVar4 - uVar1 * uVar5;
            }
            if (uVar4 != uVar3) break;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  if ((uVar5 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar5)) {
    return (long *)0x0;
  }
  uVar4 = 1;
  if (2 < uVar5) {
    uVar4 = (ulong)((uVar5 & uVar5 - 1) != 0);
  }
  uVar4 = uVar4 | uVar5 << 1;
  uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar5 = param_1[1];
  }
  if (uVar5 > uVar4 || uVar4 == uVar5) {
    if (uVar5 <= uVar4) {
      return (long *)0x0;
    }
    uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar5 < 3) || ((uVar5 & uVar5 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
    }
    if (uVar5 <= uVar4) {
      return (long *)0x0;
    }
  }
  FUN_10942c8c4(param_1,uVar4);
  return (long *)0x0;
}



/* Entry: 10942c8c4; end: 10942ca5b;  */

void FUN_10942c8c4(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    func_0x000104c4f6cc(&UNK_10f56d48b);
    puVar9 = &UNK_10f56d48b;
    func_0x000104c4f6cc();
    puVar10 = *(undefined8 **)(puVar9 + 8);
    uVar19 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar19;
    uVar19 = param_2[2];
    puVar10[3] = param_2[3];
    puVar10[2] = uVar19;
    uVar19 = param_2[4];
    puVar10[5] = param_2[5];
    puVar10[4] = uVar19;
    uVar20 = param_2[7];
    uVar19 = param_2[6];
    uVar21 = param_2[8];
    uVar23 = param_2[0xb];
    uVar22 = param_2[10];
    puVar10[9] = param_2[9];
    puVar10[8] = uVar21;
    puVar10[0xb] = uVar23;
    puVar10[10] = uVar22;
    puVar10[7] = uVar20;
    puVar10[6] = uVar19;
    uVar19 = param_2[0xc];
    uVar21 = param_2[0xf];
    uVar20 = param_2[0xe];
    puVar10[0xd] = param_2[0xd];
    puVar10[0xc] = uVar19;
    puVar10[0xf] = uVar21;
    puVar10[0xe] = uVar20;
    uVar19 = param_2[0x10];
    puVar10[0x11] = param_2[0x11];
    puVar10[0x10] = uVar19;
    lVar7 = param_2[0x13];
    uVar19 = param_2[0x12];
    puVar10[0x13] = param_2[0x13];
    puVar10[0x12] = uVar19;
    puVar10[0x16] = 0;
    puVar10[0x14] = puVar10 + 0xd;
    puVar10[0x15] = puVar10 + 0x16;
    puVar10[0x17] = 0;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)param_2 + 100) < 3) {
      puVar17 = (undefined8 *)param_2[0x15];
      puVar16 = (undefined8 *)puVar10[0x15];
      *puVar16 = *puVar17;
      puVar16[1] = puVar17[1];
    }
    else {
      *(undefined4 *)((long)puVar10 + 100) = 0;
      FUN_109a844cc(puVar10 + 0xc,*(undefined4 *)((long)param_2 + 100),0,0,0);
      if (0 < *(int *)((long)puVar10 + 100)) {
        lVar7 = 0;
        lVar8 = param_2[0x14];
        lVar3 = param_2[0x15];
        lVar2 = puVar10[0x14];
        lVar4 = puVar10[0x15];
        do {
          *(undefined4 *)(lVar2 + lVar7 * 4) = *(undefined4 *)(lVar8 + lVar7 * 4);
          *(undefined8 *)(lVar4 + lVar7 * 8) = *(undefined8 *)(lVar3 + lVar7 * 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)((long)puVar10 + 100));
      }
    }
    puVar10[0x18] = param_2[0x18];
    *(undefined8 **)(puVar9 + 8) = puVar10 + 0x1a;
    return;
  }
  lVar7 = (long)param_2 << 3;
  __Znwm();
  lVar8 = *param_1;
  *param_1 = lVar7;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  puVar10 = (undefined8 *)0x0;
  param_1[1] = (long)param_2;
  do {
    *(undefined8 *)(*param_1 + (long)puVar10 * 8) = 0;
    puVar10 = (undefined8 *)((long)puVar10 + 1);
  } while (param_2 != puVar10);
  plVar15 = param_1 + 2;
  plVar11 = (long *)*plVar15;
  if (plVar11 != (long *)0x0) {
    puVar10 = (undefined8 *)plVar11[1];
    uVar14 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar14) == 0) {
      *(long **)(*param_1 + ((ulong)puVar10 & uVar14) * 8) = plVar15;
      uVar13 = (ulong)puVar10 & uVar14;
      while (plVar15 = plVar11, plVar11 = (long *)*plVar15, plVar11 != (long *)0x0) {
        uVar18 = plVar11[1] & uVar14;
        if (uVar18 != uVar13) {
          lVar7 = *param_1;
          if (*(long *)(lVar7 + uVar18 * 8) == 0) {
            *(long **)(lVar7 + uVar18 * 8) = plVar15;
            uVar13 = uVar18;
          }
          else {
            *plVar15 = *plVar11;
            *plVar11 = **(long **)(lVar7 + uVar18 * 8);
            **(undefined8 **)(lVar7 + uVar18 * 8) = plVar11;
            plVar11 = plVar15;
          }
        }
      }
    }
    else {
      if (param_2 <= puVar10) {
        uVar14 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar10 / (ulong)param_2;
        }
        puVar10 = (undefined8 *)((long)puVar10 - uVar14 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar10 * 8) = plVar15;
      plVar15 = (long *)*plVar11;
      while (plVar12 = plVar11, plVar15 != (long *)0x0) {
        while( true ) {
          puVar17 = (undefined8 *)plVar15[1];
          if (param_2 <= puVar17) {
            uVar14 = 0;
            if (param_2 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar17 / (ulong)param_2;
            }
            puVar17 = (undefined8 *)((long)puVar17 - uVar14 * (long)param_2);
          }
          plVar11 = plVar15;
          if (puVar17 == puVar10) goto LAB_10942c984;
          lVar7 = *param_1;
          if (*(long *)(lVar7 + (long)puVar17 * 8) != 0) break;
          *(long **)(lVar7 + (long)puVar17 * 8) = plVar12;
          plVar11 = (long *)*plVar15;
          plVar12 = plVar15;
          puVar10 = puVar17;
          plVar15 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        *plVar12 = *plVar15;
        *plVar15 = **(long **)(lVar7 + (long)puVar17 * 8);
        **(undefined8 **)(lVar7 + (long)puVar17 * 8) = plVar15;
        plVar11 = plVar12;
LAB_10942c984:
        plVar15 = (long *)*plVar11;
      }
    }
  }
  return;
}



/* Entry: 10942ca5c; end: 10942ca83;  */

void FUN_10942ca5c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  func_0x000104c4f6cc(&UNK_10f56d48b);
  puVar8 = &UNK_10f56d48b;
  func_0x000104c4f6cc();
  puVar12 = *(undefined8 **)(puVar8 + 8);
  uVar13 = *param_2;
  puVar12[1] = param_2[1];
  *puVar12 = uVar13;
  uVar13 = param_2[2];
  puVar12[3] = param_2[3];
  puVar12[2] = uVar13;
  uVar13 = param_2[4];
  puVar12[5] = param_2[5];
  puVar12[4] = uVar13;
  uVar14 = param_2[7];
  uVar13 = param_2[6];
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  puVar12[9] = param_2[9];
  puVar12[8] = uVar15;
  puVar12[0xb] = uVar17;
  puVar12[10] = uVar16;
  puVar12[7] = uVar14;
  puVar12[6] = uVar13;
  uVar13 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar14 = param_2[0xe];
  puVar12[0xd] = param_2[0xd];
  puVar12[0xc] = uVar13;
  puVar12[0xf] = uVar15;
  puVar12[0xe] = uVar14;
  uVar13 = param_2[0x10];
  puVar12[0x11] = param_2[0x11];
  puVar12[0x10] = uVar13;
  lVar9 = param_2[0x13];
  uVar13 = param_2[0x12];
  puVar12[0x13] = param_2[0x13];
  puVar12[0x12] = uVar13;
  puVar12[0x16] = 0;
  puVar12[0x14] = puVar12 + 0xd;
  puVar12[0x15] = puVar12 + 0x16;
  puVar12[0x17] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar10 = (undefined8 *)param_2[0x15];
    puVar11 = (undefined8 *)puVar12[0x15];
    *puVar11 = *puVar10;
    puVar11[1] = puVar10[1];
  }
  else {
    *(undefined4 *)((long)puVar12 + 100) = 0;
    FUN_109a844cc(puVar12 + 0xc,*(undefined4 *)((long)param_2 + 100),0,0,0);
    if (0 < *(int *)((long)puVar12 + 100)) {
      lVar9 = 0;
      lVar2 = param_2[0x14];
      lVar4 = param_2[0x15];
      lVar3 = puVar12[0x14];
      lVar5 = puVar12[0x15];
      do {
        *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
        *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)puVar12 + 100));
    }
  }
  puVar12[0x18] = param_2[0x18];
  *(undefined8 **)(puVar8 + 8) = puVar12 + 0x1a;
  return;
}



/* Entry: 10942ca84; end: 10942cbb7;  */

void FUN_10942ca84(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = *(undefined8 **)(param_1 + 8);
  uVar12 = *param_2;
  puVar11[1] = param_2[1];
  *puVar11 = uVar12;
  uVar12 = param_2[2];
  puVar11[3] = param_2[3];
  puVar11[2] = uVar12;
  uVar12 = param_2[4];
  puVar11[5] = param_2[5];
  puVar11[4] = uVar12;
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  puVar11[9] = param_2[9];
  puVar11[8] = uVar14;
  puVar11[0xb] = uVar16;
  puVar11[10] = uVar15;
  puVar11[7] = uVar13;
  puVar11[6] = uVar12;
  uVar12 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar13 = param_2[0xe];
  puVar11[0xd] = param_2[0xd];
  puVar11[0xc] = uVar12;
  puVar11[0xf] = uVar14;
  puVar11[0xe] = uVar13;
  uVar12 = param_2[0x10];
  puVar11[0x11] = param_2[0x11];
  puVar11[0x10] = uVar12;
  lVar8 = param_2[0x13];
  uVar12 = param_2[0x12];
  puVar11[0x13] = param_2[0x13];
  puVar11[0x12] = uVar12;
  puVar11[0x16] = 0;
  puVar11[0x14] = puVar11 + 0xd;
  puVar11[0x15] = puVar11 + 0x16;
  puVar11[0x17] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar9 = (undefined8 *)param_2[0x15];
    puVar10 = (undefined8 *)puVar11[0x15];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar11 + 100) = 0;
    FUN_109a844cc(puVar11 + 0xc,*(undefined4 *)((long)param_2 + 100),0,0,0);
    if (0 < *(int *)((long)puVar11 + 100)) {
      lVar8 = 0;
      lVar2 = param_2[0x14];
      lVar4 = param_2[0x15];
      lVar3 = puVar11[0x14];
      lVar5 = puVar11[0x15];
      do {
        *(undefined4 *)(lVar3 + lVar8 * 4) = *(undefined4 *)(lVar2 + lVar8 * 4);
        *(undefined8 *)(lVar5 + lVar8 * 8) = *(undefined8 *)(lVar4 + lVar8 * 8);
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)puVar11 + 100));
    }
  }
  puVar11[0x18] = param_2[0x18];
  *(undefined8 **)(param_1 + 8) = puVar11 + 0x1a;
  return;
}



/* Entry: 10942cbb8; end: 10942cdef;  */

/* WARNING: Removing unreachable block (ram,0x00010942d02c) */
/* WARNING: Removing unreachable block (ram,0x00010942d040) */
/* WARNING: Removing unreachable block (ram,0x00010942d048) */
/* WARNING: Removing unreachable block (ram,0x00010942d050) */
/* WARNING: Removing unreachable block (ram,0x00010942d054) */
/* WARNING: Removing unreachable block (ram,0x00010942d05c) */
/* WARNING: Removing unreachable block (ram,0x00010942d064) */
/* WARNING: Removing unreachable block (ram,0x00010942d068) */
/* WARNING: Removing unreachable block (ram,0x00010942d070) */
/* WARNING: Removing unreachable block (ram,0x00010942d078) */
/* WARNING: Removing unreachable block (ram,0x00010942d080) */
/* WARNING: Removing unreachable block (ram,0x00010942d088) */
/* WARNING: Removing unreachable block (ram,0x00010942d094) */
/* WARNING: Removing unreachable block (ram,0x00010942d0a0) */
/* WARNING: Removing unreachable block (ram,0x00010942d0a4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0bc) */
/* WARNING: Removing unreachable block (ram,0x00010942d0c4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0d8) */
/* WARNING: Removing unreachable block (ram,0x00010942d0e4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0e8) */
/* WARNING: Removing unreachable block (ram,0x00010942d0ec) */
/* WARNING: Removing unreachable block (ram,0x00010942d03c) */

long * FUN_10942cbb8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar15 = param_1[1] - *param_1;
  uVar12 = (lVar15 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x13b13b13b13b13b < uVar12) {
    FUN_109428800();
    FUN_10942d114(&plStack_58);
    __Unwind_Resume();
    puVar10 = param_2;
    if (param_2 != param_3) {
      do {
        uVar16 = *puVar10;
        param_4[1] = puVar10[1];
        *param_4 = uVar16;
        uVar16 = puVar10[2];
        param_4[3] = puVar10[3];
        param_4[2] = uVar16;
        uVar16 = puVar10[4];
        param_4[5] = puVar10[5];
        param_4[4] = uVar16;
        uVar17 = puVar10[7];
        uVar16 = puVar10[6];
        uVar18 = puVar10[8];
        uVar20 = puVar10[0xb];
        uVar19 = puVar10[10];
        param_4[9] = puVar10[9];
        param_4[8] = uVar18;
        param_4[0xb] = uVar20;
        param_4[10] = uVar19;
        param_4[7] = uVar17;
        param_4[6] = uVar16;
        uVar16 = puVar10[0xd];
        lVar11 = puVar10[0xc];
        uVar17 = puVar10[0xe];
        param_4[0xf] = puVar10[0xf];
        param_4[0xe] = uVar17;
        uVar17 = puVar10[0x10];
        param_4[0x11] = puVar10[0x11];
        param_4[0x10] = uVar17;
        lVar15 = puVar10[0x13];
        uVar18 = puVar10[0x13];
        uVar17 = puVar10[0x12];
        param_4[0x16] = 0;
        param_4[0x13] = uVar18;
        param_4[0x12] = uVar17;
        param_4[0x14] = param_4 + 0xd;
        param_4[0x15] = param_4 + 0x16;
        param_4[0x17] = 0;
        param_1 = param_4 + 0xc;
        param_4[0xd] = uVar16;
        *param_1 = lVar11;
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar10 + 100) < 3) {
          puVar9 = (undefined8 *)puVar10[0x15];
          puVar13 = (undefined8 *)param_4[0x15];
          *puVar13 = *puVar9;
          puVar13[1] = puVar9[1];
        }
        else {
          *(undefined4 *)((long)param_4 + 100) = 0;
          FUN_109a844cc(param_1,*(undefined4 *)((long)puVar10 + 100),0,0,0);
          if (0 < *(int *)((long)param_4 + 100)) {
            lVar15 = 0;
            lVar11 = puVar10[0x14];
            lVar4 = puVar10[0x15];
            lVar3 = param_4[0x14];
            lVar5 = param_4[0x15];
            do {
              *(undefined4 *)(lVar3 + lVar15 * 4) = *(undefined4 *)(lVar11 + lVar15 * 4);
              *(undefined8 *)(lVar5 + lVar15 * 8) = *(undefined8 *)(lVar4 + lVar15 * 8);
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)((long)param_4 + 100));
          }
        }
        param_4[0x18] = puVar10[0x18];
        puVar10 = puVar10 + 0x1a;
        param_4 = param_4 + 0x1a;
      } while (puVar10 != param_3);
      do {
        if (param_2[0x13] != 0) {
          piVar1 = (int *)(param_2[0x13] + 0x14);
          do {
            iVar2 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar2 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar2 + -1 == 0) {
            if (param_2[0x13] != 0) {
              param_1 = *(long **)(param_2[0x13] + 8);
              if (((param_1 == (long *)0x0) &&
                  (param_1 = (long *)param_2[0x12], (long *)param_2[0x12] == (long *)0x0)) &&
                 (param_1 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
                FUN_109a83e3c();
                param_1 = plRam000000011382bb80;
              }
              (**(code **)(*param_1 + 0x30))();
            }
            param_2[0x13] = 0;
          }
        }
        param_2[0x13] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[0x11] = 0;
        param_2[0x10] = 0;
        if (0 < *(int *)((long)param_2 + 100)) {
          lVar15 = 0;
          lVar11 = param_2[0x14];
          do {
            *(undefined4 *)(lVar11 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < *(int *)((long)param_2 + 100));
        }
        puVar10 = (undefined8 *)param_2[0x15];
        if (puVar10 != param_2 + 0x16 && puVar10 != (undefined8 *)0x0) {
          param_1 = (long *)puVar10[-1];
          _free(param_1);
        }
        param_2 = param_2 + 0x1a;
      } while (param_2 != param_3);
    }
    return param_1;
  }
  lVar11 = param_1[2] - *param_1 >> 4;
  uVar14 = lVar11 * -0x6276276276276276;
  if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
    uVar14 = uVar12;
  }
  if (0x9d89d89d89d89c < (ulong)(lVar11 * 0x4ec4ec4ec4ec4ec5)) {
    uVar14 = 0x13b13b13b13b13b;
  }
  plStack_38 = param_1;
  if (uVar14 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109428814(param_1,uVar14,0);
  }
  puVar10 = (undefined8 *)((long)plVar8 + lVar15);
  plStack_40 = plVar8 + uVar14 * 0x1a;
  uVar16 = *param_2;
  puVar10[1] = param_2[1];
  *puVar10 = uVar16;
  uVar16 = param_2[2];
  puVar10[3] = param_2[3];
  puVar10[2] = uVar16;
  uVar16 = param_2[4];
  puVar10[5] = param_2[5];
  puVar10[4] = uVar16;
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  uVar18 = param_2[8];
  uVar20 = param_2[0xb];
  uVar19 = param_2[10];
  puVar10[9] = param_2[9];
  puVar10[8] = uVar18;
  puVar10[0xb] = uVar20;
  puVar10[10] = uVar19;
  puVar10[7] = uVar17;
  puVar10[6] = uVar16;
  uVar16 = param_2[0xc];
  uVar18 = param_2[0xf];
  uVar17 = param_2[0xe];
  puVar10[0xd] = param_2[0xd];
  puVar10[0xc] = uVar16;
  puVar10[0xf] = uVar18;
  puVar10[0xe] = uVar17;
  uVar16 = param_2[0x10];
  puVar10[0x11] = param_2[0x11];
  puVar10[0x10] = uVar16;
  lVar15 = param_2[0x13];
  uVar16 = param_2[0x12];
  puVar10[0x13] = param_2[0x13];
  puVar10[0x12] = uVar16;
  puVar10[0x16] = 0;
  puVar10[0x14] = puVar10 + 0xd;
  puVar10[0x15] = puVar10 + 0x16;
  puVar10[0x17] = 0;
  if (lVar15 != 0) {
    piVar1 = (int *)(lVar15 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_58 = plVar8;
  plStack_50 = puVar10;
  plStack_48 = puVar10;
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar9 = (undefined8 *)param_2[0x15];
    puVar13 = (undefined8 *)puVar10[0x15];
    *puVar13 = *puVar9;
    puVar13[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar10 + 100) = 0;
    FUN_109a844cc(puVar10 + 0xc,*(undefined4 *)((long)param_2 + 100),0,0,0);
    if (0 < *(int *)((long)puVar10 + 100)) {
      lVar15 = 0;
      lVar11 = param_2[0x14];
      lVar4 = param_2[0x15];
      lVar3 = puVar10[0x14];
      lVar5 = puVar10[0x15];
      do {
        *(undefined4 *)(lVar3 + lVar15 * 4) = *(undefined4 *)(lVar11 + lVar15 * 4);
        *(undefined8 *)(lVar5 + lVar15 * 8) = *(undefined8 *)(lVar4 + lVar15 * 8);
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((long)puVar10 + 100));
    }
  }
  puVar10[0x18] = param_2[0x18];
  plStack_48 = plStack_48 + 0x1a;
  lVar15 = (long)plStack_50 + (*param_1 - param_1[1]);
  FUN_10942cdf0(param_1,*param_1,param_1[1],lVar15);
  plVar8 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar15;
  lVar15 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar15;
  FUN_10942d114(&plStack_58);
  return plVar8;
}



/* Entry: 10942cdf0; end: 10942d113;  */

/* WARNING: Removing unreachable block (ram,0x00010942d02c) */
/* WARNING: Removing unreachable block (ram,0x00010942d040) */
/* WARNING: Removing unreachable block (ram,0x00010942d048) */
/* WARNING: Removing unreachable block (ram,0x00010942d050) */
/* WARNING: Removing unreachable block (ram,0x00010942d054) */
/* WARNING: Removing unreachable block (ram,0x00010942d05c) */
/* WARNING: Removing unreachable block (ram,0x00010942d064) */
/* WARNING: Removing unreachable block (ram,0x00010942d068) */
/* WARNING: Removing unreachable block (ram,0x00010942d070) */
/* WARNING: Removing unreachable block (ram,0x00010942d078) */
/* WARNING: Removing unreachable block (ram,0x00010942d080) */
/* WARNING: Removing unreachable block (ram,0x00010942d088) */
/* WARNING: Removing unreachable block (ram,0x00010942d094) */
/* WARNING: Removing unreachable block (ram,0x00010942d0a0) */
/* WARNING: Removing unreachable block (ram,0x00010942d0a4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0bc) */
/* WARNING: Removing unreachable block (ram,0x00010942d0c4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0d8) */
/* WARNING: Removing unreachable block (ram,0x00010942d0e4) */
/* WARNING: Removing unreachable block (ram,0x00010942d0e8) */
/* WARNING: Removing unreachable block (ram,0x00010942d0ec) */
/* WARNING: Removing unreachable block (ram,0x00010942d03c) */

void FUN_10942cdf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar11 = param_2;
  if (param_2 != param_3) {
    do {
      uVar14 = *puVar11;
      param_4[1] = puVar11[1];
      *param_4 = uVar14;
      uVar14 = puVar11[2];
      param_4[3] = puVar11[3];
      param_4[2] = uVar14;
      uVar14 = puVar11[4];
      param_4[5] = puVar11[5];
      param_4[4] = uVar14;
      uVar15 = puVar11[7];
      uVar14 = puVar11[6];
      uVar16 = puVar11[8];
      uVar18 = puVar11[0xb];
      uVar17 = puVar11[10];
      param_4[9] = puVar11[9];
      param_4[8] = uVar16;
      param_4[0xb] = uVar18;
      param_4[10] = uVar17;
      param_4[7] = uVar15;
      param_4[6] = uVar14;
      uVar15 = puVar11[0xd];
      uVar14 = puVar11[0xc];
      uVar16 = puVar11[0xe];
      param_4[0xf] = puVar11[0xf];
      param_4[0xe] = uVar16;
      uVar16 = puVar11[0x10];
      param_4[0x11] = puVar11[0x11];
      param_4[0x10] = uVar16;
      lVar10 = puVar11[0x13];
      uVar17 = puVar11[0x13];
      uVar16 = puVar11[0x12];
      param_4[0x16] = 0;
      param_4[0x13] = uVar17;
      param_4[0x12] = uVar16;
      param_4[0x14] = param_4 + 0xd;
      param_4[0x15] = param_4 + 0x16;
      param_4[0x17] = 0;
      param_4[0xd] = uVar15;
      param_4[0xc] = uVar14;
      if (lVar10 != 0) {
        piVar1 = (int *)(lVar10 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar11 + 100) < 3) {
        puVar9 = (undefined8 *)puVar11[0x15];
        puVar13 = (undefined8 *)param_4[0x15];
        *puVar13 = *puVar9;
        puVar13[1] = puVar9[1];
      }
      else {
        *(undefined4 *)((long)param_4 + 100) = 0;
        FUN_109a844cc(param_4 + 0xc,*(undefined4 *)((long)puVar11 + 100),0,0,0);
        if (0 < *(int *)((long)param_4 + 100)) {
          lVar10 = 0;
          lVar12 = puVar11[0x14];
          lVar4 = puVar11[0x15];
          lVar3 = param_4[0x14];
          lVar5 = param_4[0x15];
          do {
            *(undefined4 *)(lVar3 + lVar10 * 4) = *(undefined4 *)(lVar12 + lVar10 * 4);
            *(undefined8 *)(lVar5 + lVar10 * 8) = *(undefined8 *)(lVar4 + lVar10 * 8);
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)((long)param_4 + 100));
        }
      }
      param_4[0x18] = puVar11[0x18];
      puVar11 = puVar11 + 0x1a;
      param_4 = param_4 + 0x1a;
    } while (puVar11 != param_3);
    do {
      if (param_2[0x13] != 0) {
        piVar1 = (int *)(param_2[0x13] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          if (param_2[0x13] != 0) {
            plVar8 = *(long **)(param_2[0x13] + 8);
            if (((plVar8 == (long *)0x0) &&
                (plVar8 = (long *)param_2[0x12], (long *)param_2[0x12] == (long *)0x0)) &&
               (plVar8 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
              FUN_109a83e3c();
              plVar8 = plRam000000011382bb80;
            }
            (**(code **)(*plVar8 + 0x30))();
          }
          param_2[0x13] = 0;
        }
      }
      param_2[0x13] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      if (0 < *(int *)((long)param_2 + 100)) {
        lVar10 = 0;
        lVar12 = param_2[0x14];
        do {
          *(undefined4 *)(lVar12 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((long)param_2 + 100));
      }
      puVar11 = (undefined8 *)param_2[0x15];
      if (puVar11 != param_2 + 0x16 && puVar11 != (undefined8 *)0x0) {
        _free(puVar11[-1]);
      }
      param_2 = param_2 + 0x1a;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10942d114; end: 10942d21f;  */

long * FUN_10942d114(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar3) {
    param_1[2] = lVar9 + -0xd0;
    if (*(long *)(lVar9 + -0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar9 + -0x38) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x38) != 0)) {
        plVar6 = *(long **)(*(long *)(lVar9 + -0x38) + 8);
        if ((plVar6 == (long *)0x0) &&
           ((plVar6 = *(long **)(lVar9 + -0x40), *(long **)(lVar9 + -0x40) == (long *)0x0 &&
            (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar6 = plRam000000011382bb80;
        }
        (**(code **)(*plVar6 + 0x30))();
      }
    }
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x58) = 0;
    *(undefined8 *)(lVar9 + -0x60) = 0;
    *(undefined8 *)(lVar9 + -0x48) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    if (0 < *(int *)(lVar9 + -0x6c)) {
      lVar7 = 0;
      lVar8 = *(long *)(lVar9 + -0x30);
      do {
        *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + -0x6c));
    }
    lVar7 = *(long *)(lVar9 + -0x28);
    if (lVar7 != lVar9 + -0x20 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
    lVar9 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 10942d220; end: 10942d867;  */

undefined8 * FUN_10942d220(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 *puStack_70;
  ulong uStack_68;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  plVar11 = (long *)*param_2;
  plVar12 = (long *)param_2[1];
  if (plVar11 != plVar12) {
    do {
      plVar8 = plVar11 + 1;
      FUN_10942d868(param_1,*plVar11);
      plVar11 = plVar8;
    } while (plVar8 != plVar12);
    plVar11 = (long *)*param_2;
    plVar12 = (long *)param_2[1];
  }
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0x3f800000;
  uStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b0 = 0x3f800000;
  if (plVar11 != plVar12) {
    do {
      lVar14 = *(long *)(*plVar11 + 0x3f0);
      for (lVar13 = *(long *)(*plVar11 + 1000); lVar13 != lVar14; lVar13 = lVar13 + 0xd0) {
        uVar15 = *(ulong *)(lVar13 + 8);
        lVar10 = *plVar11;
        plVar3 = (long *)0x20;
        __Znwm();
        plVar3[2] = uVar15;
        plVar3[3] = lVar10;
        uVar5 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) * -0x622015f714c7d297;
        uVar5 = (uVar15 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
        *plVar3 = 0;
        plVar3[1] = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
        plVar8 = &lStack_d0;
        FUN_10942e5d0();
        uVar15 = uStack_c8;
        uVar6 = plVar3[1];
        uVar7 = uStack_c8 - 1;
        uVar5 = 0;
        if (uStack_c8 != 0) {
          uVar5 = uVar6 / uStack_c8;
        }
        uVar9 = uVar6;
        if (uStack_c8 <= uVar6) {
          uVar9 = uVar6 - uVar5 * uStack_c8;
        }
        if ((uStack_c8 & uVar7) == 0) {
          uVar9 = uVar7 & uVar6;
        }
        if (plVar8 == (long *)0x0) {
          *plVar3 = (long)plStack_c0;
          *(long ***)(lStack_d0 + uVar9 * 8) = &plStack_c0;
          plStack_c0 = plVar3;
          if (*plVar3 != 0) {
            uVar5 = *(ulong *)(*plVar3 + 8);
            if ((uStack_c8 & uVar7) == 0) {
              uVar5 = uVar5 & uVar7;
            }
            else if (uStack_c8 <= uVar5) {
              uVar15 = 0;
              if (uStack_c8 != 0) {
                uVar15 = uVar5 / uStack_c8;
              }
              uVar5 = uVar5 - uVar15 * uStack_c8;
            }
LAB_10942d2e0:
            *(long **)(lStack_d0 + uVar5 * 8) = plVar3;
          }
        }
        else {
          *plVar3 = *plVar8;
          *plVar8 = (long)plVar3;
          if (*plVar3 != 0) {
            uVar5 = *(ulong *)(*plVar3 + 8);
            if ((uVar15 & uVar7) == 0) {
              uVar5 = uVar5 & uVar7;
            }
            else if (uVar15 <= uVar5) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar5 / uVar15;
              }
              uVar5 = uVar5 - uVar6 * uVar15;
            }
            if (uVar5 != uVar9) goto LAB_10942d2e0;
          }
        }
        lStack_b8 = lStack_b8 + 1;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
    plVar11 = (long *)*param_2;
    plVar12 = (long *)param_2[1];
  }
  do {
    if (plVar11 == plVar12) {
      lVar13 = param_1[3];
      lVar14 = lStack_d0;
      plVar11 = plStack_c0;
      if (param_1[4] != lVar13) {
        lVar10 = 0;
        uVar5 = 0;
        do {
          lVar14 = *(long *)(lVar13 + lVar10);
          lVar1 = ((long *)(lVar13 + lVar10))[1];
          lVar13 = 0;
          if (lVar1 != lVar14) {
            lVar13 = LZCOUNT(lVar1 - lVar14 >> 2) * -2 + 0x7e;
          }
          puStack_70 = param_1;
          uStack_68 = uVar5;
          FUN_10942eb0c(lVar14,lVar1,&puStack_70,lVar13,1);
          uVar5 = uVar5 + 1;
          lVar13 = param_1[3];
          lVar10 = lVar10 + 0x18;
          lVar14 = lStack_d0;
          plVar11 = plStack_c0;
        } while (uVar5 < (ulong)((param_1[4] - lVar13 >> 3) * -0x5555555555555555));
      }
      while (plVar11 != (long *)0x0) {
        plVar11 = (long *)*plVar11;
        lStack_d0 = lVar14;
        __ZdlPv();
        lVar14 = lStack_d0;
      }
      lStack_d0 = 0;
      lVar13 = lStack_a0;
      plVar11 = plStack_90;
      if (lVar14 != 0) {
        __ZdlPv();
        lVar13 = lStack_a0;
        plVar11 = plStack_90;
      }
      while (plVar11 != (long *)0x0) {
        plVar11 = (long *)*plVar11;
        lStack_a0 = lVar13;
        __ZdlPv();
        lVar13 = lStack_a0;
      }
      lStack_a0 = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar13 = *(long *)(*plVar11 + 1000);
    lVar14 = *(long *)(*plVar11 + 0x3f0);
LAB_10942d44c:
    if (lVar13 != lVar14) {
      uVar5 = *(ulong *)(lVar13 + 8);
      iVar4 = *(int *)(uVar5 + 0x38);
      if (uStack_98 == 0) {
LAB_10942d4fc:
        if (uStack_c8 != 0) {
          uVar15 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
          uVar15 = (uVar5 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
          uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
          uVar6 = uStack_c8 - 1;
          if ((uStack_c8 & uVar6) == 0) {
            uVar7 = uVar6 & uVar15;
            plVar8 = *(long **)(lStack_d0 + uVar7 * 8);
          }
          else {
            uVar7 = uVar15;
            if (uStack_c8 <= uVar15) {
              uVar7 = 0;
              if (uStack_c8 != 0) {
                uVar7 = uVar15 / uStack_c8;
              }
              uVar7 = uVar15 - uVar7 * uStack_c8;
            }
            plVar8 = *(long **)(lStack_d0 + uVar7 * 8);
          }
          if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
            if ((uStack_c8 & uVar6) == 0) {
              do {
                if (plVar8[1] == uVar15) {
                  plVar3 = plVar8;
                  if (plVar8[2] == uVar5) goto LAB_10942d5f0;
                }
                else if ((plVar8[1] & uVar6) != uVar7) break;
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
            }
            else {
              do {
                uVar6 = plVar8[1];
                if (uVar6 == uVar15) {
                  plVar3 = plVar8;
                  if (plVar8[2] == uVar5) goto LAB_10942d5f0;
                }
                else {
                  if (uStack_c8 <= uVar6) {
                    uVar9 = 0;
                    if (uStack_c8 != 0) {
                      uVar9 = uVar6 / uStack_c8;
                    }
                    uVar6 = uVar6 - uVar9 * uStack_c8;
                  }
                  if (uVar6 != uVar7) break;
                }
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
            }
          }
        }
        goto LAB_10942d434;
      }
      uVar15 = (ulong)iVar4;
      uVar6 = uStack_98 - 1;
      if ((uStack_98 & uVar6) == 0) {
        uVar7 = uVar6 & uVar15;
        plVar8 = *(long **)(lStack_a0 + uVar7 * 8);
        if (plVar8 != (long *)0x0) goto LAB_10942d4b8;
        goto LAB_10942d4fc;
      }
      uVar7 = uVar15;
      if (uStack_98 <= uVar15) {
        uVar7 = 0;
        if (uStack_98 != 0) {
          uVar7 = uVar15 / uStack_98;
        }
        uVar7 = uVar15 - uVar7 * uStack_98;
      }
      plVar8 = *(long **)(lStack_a0 + uVar7 * 8);
      if (plVar8 == (long *)0x0) goto LAB_10942d4fc;
LAB_10942d4b8:
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10942d4fc;
          uVar9 = plVar8[1];
          if (uVar9 == uVar15) break;
          if ((uStack_98 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uStack_98 <= uVar9) {
            uVar2 = 0;
            if (uStack_98 != 0) {
              uVar2 = uVar9 / uStack_98;
            }
            uVar9 = uVar9 - uVar2 * uStack_98;
          }
          if (uVar9 != uVar7) goto LAB_10942d4fc;
        }
      } while (*(int *)(plVar8 + 2) != iVar4);
      goto LAB_10942d448;
    }
    plVar11 = plVar11 + 1;
  } while( true );
  while (plVar8[2] == uVar5) {
LAB_10942d5f0:
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) break;
  }
  if (plVar3 != plVar8) {
    do {
      FUN_10942dc50(param_1,*plVar11,plVar3[3]);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar8);
    iVar4 = *(int *)(uVar5 + 0x38);
  }
LAB_10942d434:
  puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,iVar4);
  func_0x000107c2aca0(&lStack_a0,&puStack_70,&puStack_70);
LAB_10942d448:
  lVar13 = lVar13 + 0xd0;
  goto LAB_10942d44c;
}



/* Entry: 10942d868; end: 10942dc4f;  */

void FUN_10942d868(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined4 uStack_74;
  ulong uStack_70;
  long lStack_68;
  
  plVar4 = param_1 + 3;
  lStack_68 = (param_1[4] - *plVar4 >> 3) * -0x5555555555555555;
  puVar5 = &uStack_70;
  uStack_70 = param_2;
  FUN_10942decc(param_1 + 6,puVar5,&uStack_70);
  if (((ulong)puVar5 & 1) == 0) {
LAB_10942dbf4:
    FUN_10940ce60(&UNK_10f56d492);
LAB_10942dc00:
    FUN_10923f788();
    goto LAB_10942dc0c;
  }
  plVar16 = (long *)param_1[4];
  lVar14 = (long)plVar16 - param_1[3];
  lVar19 = (lVar14 >> 3) * -0x5555555555555555;
  uVar8 = lVar19 + 1;
  uStack_70 = uVar8;
  if (lVar14 != 0) {
    lVar20 = 0;
    uVar17 = 0;
    do {
      plVar16 = (long *)(*param_1 + lVar20);
      puVar1 = (undefined4 *)plVar16[1];
      if ((undefined4 *)plVar16[2] <= puVar1) {
        lVar15 = *plVar16;
        uVar9 = ((long)puVar1 - lVar15 >> 2) + 1;
        if (uVar9 >> 0x3e == 0) {
          uVar6 = plVar16[2] - lVar15;
          uVar10 = (long)uVar6 >> 1;
          if (uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (0x7ffffffffffffffb < uVar6) {
            uVar10 = 0x3fffffffffffffff;
          }
          if (uVar10 >> 0x3e == 0) {
            lVar3 = uVar10 * 4;
            __Znwm();
            puVar1 = (undefined4 *)(lVar3 + ((long)puVar1 - lVar15));
            puVar13 = puVar1 + 1;
            *puVar1 = 0;
            _memcpy();
            *plVar16 = lVar3;
            plVar16[1] = (long)puVar13;
            plVar16[2] = lVar3 + uVar10 * 4;
            if (lVar15 != 0) {
              __ZdlPv(lVar15);
            }
            goto LAB_10942d9b8;
          }
        }
        else {
LAB_10942dbec:
          FUN_10923f788();
        }
LAB_10942dbf0:
        func_0x000104c4f740();
        goto LAB_10942dbf4;
      }
      puVar13 = puVar1 + 1;
      *puVar1 = 0;
LAB_10942d9b8:
      plVar16[1] = (long)puVar13;
      plVar16 = (long *)(*plVar4 + lVar20);
      puVar1 = (undefined4 *)plVar16[1];
      uVar18 = (undefined4)lVar19;
      if (puVar1 < (undefined4 *)plVar16[2]) {
        puVar13 = puVar1 + 1;
        *puVar1 = uVar18;
      }
      else {
        lVar15 = *plVar16;
        uVar9 = ((long)puVar1 - lVar15 >> 2) + 1;
        if (uVar9 >> 0x3e != 0) goto LAB_10942dbec;
        uVar6 = plVar16[2] - lVar15;
        uVar10 = (long)uVar6 >> 1;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7ffffffffffffffb < uVar6) {
          uVar10 = 0x3fffffffffffffff;
        }
        if (uVar10 >> 0x3e != 0) goto LAB_10942dbf0;
        lVar3 = uVar10 * 4;
        __Znwm();
        puVar1 = (undefined4 *)(lVar3 + ((long)puVar1 - lVar15));
        puVar13 = puVar1 + 1;
        *puVar1 = uVar18;
        _memcpy();
        *plVar16 = lVar3;
        plVar16[1] = (long)puVar13;
        plVar16[2] = lVar3 + uVar10 * 4;
        if (lVar15 != 0) {
          __ZdlPv(lVar15);
        }
      }
      plVar16[1] = (long)puVar13;
      uVar17 = uVar17 + 1;
      plVar16 = (long *)param_1[4];
      lVar20 = lVar20 + 0x18;
    } while (uVar17 < (ulong)(((long)plVar16 - param_1[3] >> 3) * -0x5555555555555555));
  }
  uStack_74 = 0;
  if (plVar16 < (long *)param_1[5]) {
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    if (uVar8 != 0) {
      if (uVar8 >> 0x3e != 0) goto LAB_10942dc00;
      lVar19 = uVar8 * 4;
      __Znwm();
      *plVar16 = lVar19;
      lVar19 = lVar19 + uVar8 * 4;
      plVar16[2] = lVar19;
      _bzero();
      plVar16[1] = lVar19;
    }
    param_1[4] = (long)(plVar16 + 3);
    param_1[4] = (long)(plVar16 + 3);
    piVar12 = *(int **)(param_1[3] + lVar14);
    piVar7 = (int *)((long *)(param_1[3] + lVar14))[1];
    if (piVar12 != piVar7) {
LAB_10942daec:
      uVar8 = (long)piVar7 + (-4 - (long)piVar12);
      if (uVar8 < 0x1c) {
        uVar9 = 0;
        piVar11 = piVar12;
      }
      else {
        uVar8 = (uVar8 >> 2) + 1;
        uVar9 = uVar8 & 0x7ffffffffffffff8;
        piVar11 = piVar12 + uVar9;
        uVar23 = 0x300000002;
        uVar21 = 0x100000000;
        piVar12 = piVar12 + 4;
        uVar17 = uVar9;
        do {
          iVar22 = (int)((ulong)uVar21 >> 0x20);
          iVar24 = (int)((ulong)uVar23 >> 0x20);
          *(undefined8 *)(piVar12 + -2) = uVar23;
          *(undefined8 *)(piVar12 + -4) = uVar21;
          *(ulong *)(piVar12 + 2) = CONCAT44(iVar24 + 4,(int)uVar23 + 4);
          *(ulong *)piVar12 = CONCAT44(iVar22 + 4,(int)uVar21 + 4);
          uVar21 = CONCAT44(iVar22 + 8,(int)uVar21 + 8);
          uVar23 = CONCAT44(iVar24 + 8,(int)uVar23 + 8);
          piVar12 = piVar12 + 8;
          uVar17 = uVar17 - 8;
        } while (uVar17 != 0);
        if (uVar8 == uVar9) goto LAB_10942db60;
      }
      do {
        piVar12 = piVar11 + 1;
        *piVar11 = (int)uVar9;
        uVar9 = (ulong)((int)uVar9 + 1);
        piVar11 = piVar12;
      } while (piVar12 != piVar7);
    }
  }
  else {
    FUN_10942e3a8(plVar4,&uStack_70,&uStack_74);
    param_1[4] = (long)plVar4;
    piVar12 = *(int **)(param_1[3] + lVar14);
    piVar7 = (int *)((long *)(param_1[3] + lVar14))[1];
    if (piVar12 != piVar7) goto LAB_10942daec;
  }
LAB_10942db60:
  uVar8 = uStack_70;
  uStack_74 = 0;
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    if (uStack_70 != 0) {
      if (uStack_70 >> 0x3e != 0) {
        FUN_10923f788();
LAB_10942dc0c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10942dc10);
        (*pcVar2)();
      }
      lVar14 = uStack_70 << 2;
      __Znwm();
      *plVar4 = lVar14;
      lVar14 = lVar14 + uVar8 * 4;
      plVar4[2] = lVar14;
      _bzero();
      plVar4[1] = lVar14;
    }
    plVar4 = plVar4 + 3;
    param_1[1] = (long)plVar4;
  }
  else {
    plVar4 = param_1;
    FUN_10942e3a8(param_1,&uStack_70,&uStack_74);
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 10942dc50; end: 10942decb;  */

undefined1  [16] FUN_10942dc50(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x24;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar4 = param_1[7];
  if (uVar4 != 0) {
    uVar9 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar9 = ((ulong)param_2 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
    uVar11 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = uVar4 - 1;
    if ((uVar4 & uVar9) == 0) {
      uVar12 = uVar9 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uVar4 <= uVar11) {
        uVar12 = 0;
        if (uVar4 != 0) {
          uVar12 = uVar11 / uVar4;
        }
        uVar12 = uVar11 - uVar12 * uVar4;
      }
    }
    plVar13 = *(long **)(param_1[6] + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if ((uVar4 & uVar9) == 0) {
        do {
          if (plVar13[1] == uVar11) {
            if ((ulong *)plVar13[2] == param_2) goto LAB_10942dd5c;
          }
          else if ((plVar13[1] & uVar9) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar13[1];
          if (uVar7 == uVar11) {
            if ((ulong *)plVar13[2] == param_2) goto LAB_10942dd5c;
          }
          else {
            if (uVar4 <= uVar7) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar1 * uVar4;
            }
            if (uVar7 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_10942deb4;
LAB_10942de30:
  puVar2 = (ulong *)(param_1 + 6);
  puVar3 = param_3;
  FUN_10942e9f8();
  uVar9 = *puVar2;
  puVar2 = (ulong *)(param_1 + 6);
  FUN_10942e9f8();
  uVar4 = *puVar2;
  if (uVar9 == uVar4) {
LAB_10942dea4:
    auVar14._8_8_ = param_3;
    auVar14._0_8_ = puVar2;
    return auVar14;
  }
  lVar5 = *param_1;
  uVar11 = (param_1[1] - lVar5 >> 3) * -0x5555555555555555;
  param_2 = param_3;
  if (uVar9 <= uVar11 && uVar4 <= uVar11) {
    lVar10 = *(long *)(lVar5 + uVar9 * 0x18);
    *(int *)(lVar10 + uVar4 * 4) = *(int *)(lVar10 + uVar4 * 4) + 1;
    lVar5 = *(long *)(lVar5 + uVar4 * 0x18);
    *(int *)(lVar5 + uVar9 * 4) = *(int *)(lVar5 + uVar9 * 4) + 1;
    goto LAB_10942dea4;
  }
  goto LAB_10942dec0;
LAB_10942dd5c:
  uVar11 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)param_3 >> 0x20) * -0x622015f714c7d297;
  uVar11 = ((ulong)param_3 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  uVar11 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
  if ((uVar4 & uVar9) == 0) {
    uVar12 = uVar9 & uVar11;
  }
  else {
    uVar12 = uVar11;
    if (uVar4 <= uVar11) {
      uVar12 = 0;
      if (uVar4 != 0) {
        uVar12 = uVar11 / uVar4;
      }
      uVar12 = uVar11 - uVar12 * uVar4;
    }
  }
  plVar13 = *(long **)(param_1[6] + uVar12 * 8);
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if ((uVar4 & uVar9) == 0) {
      do {
        if (plVar13[1] == uVar11) {
          if ((ulong *)plVar13[2] == param_3) goto LAB_10942de30;
        }
        else if ((plVar13[1] & uVar9) != uVar12) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar9 = plVar13[1];
        if (uVar9 == uVar11) {
          if ((ulong *)plVar13[2] == param_3) goto LAB_10942de30;
        }
        else {
          if (uVar4 <= uVar9) {
            uVar7 = 0;
            if (uVar4 != 0) {
              uVar7 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar7 * uVar4;
          }
          if (uVar9 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_10942deb4:
  FUN_10940ce60(&UNK_10f56d4b6);
  puVar3 = param_3;
LAB_10942dec0:
  plVar13 = (long *)&UNK_10f56d4d5;
  FUN_1093fd0ac();
  uVar9 = *param_2;
  uVar4 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
  uVar11 = (uVar9 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar11 = uVar11 ^ uVar11 >> 0x2f;
  uVar12 = uVar11 * -0x622015f714c7d297;
  uVar4 = plVar13[1];
  if (uVar4 != 0) {
    uVar7 = uVar4 - 1;
    if ((uVar4 & uVar7) == 0) {
      unaff_x24 = uVar12 & uVar7;
      plVar8 = *(long **)(*plVar13 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar12;
      if (uVar4 <= uVar12) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar12 / uVar4;
        }
        unaff_x24 = uVar12 - uVar1 * uVar4;
      }
      plVar8 = *(long **)(*plVar13 + unaff_x24 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar4 & uVar7) == 0) {
        do {
          if (plVar8[1] == uVar12) {
            if (plVar8[2] == uVar9) {
LAB_10942dff0:
              auVar15._8_8_ = 0;
              auVar15._0_8_ = plVar8;
              return auVar15;
            }
          }
          else if ((plVar8[1] & uVar7) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar12) {
            if (plVar8[2] == uVar9) goto LAB_10942dff0;
          }
          else {
            if (uVar4 <= uVar7) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar1 * uVar4;
            }
            if (uVar7 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar12;
  uVar9 = *puVar3;
  plVar8[3] = puVar3[1];
  plVar8[2] = uVar9;
  if ((uVar4 == 0) || (*(float *)(plVar13 + 4) * (float)uVar4 < (float)(plVar13[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar4) {
      uVar9 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar9 = uVar9 | uVar4 << 1;
    uVar7 = (ulong)((float)(plVar13[3] + 1) / *(float *)(plVar13 + 4));
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar4 = plVar13[1];
    }
    if (uVar4 < uVar9) {
LAB_10942e0c0:
      FUN_10942e210(plVar13,uVar9);
    }
    else if (uVar9 < uVar4) {
      uVar7 = (ulong)((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4));
      if ((uVar4 < 3) || ((uVar4 & uVar4 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
      if (uVar9 < uVar4) goto LAB_10942e0c0;
    }
    uVar4 = plVar13[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar12;
      lVar5 = *plVar13;
      plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
      goto joined_r0x00010942e154;
    }
    if (uVar12 < uVar4) {
      lVar5 = *plVar13;
      plVar6 = *(long **)(lVar5 + uVar11 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar12;
      goto joined_r0x00010942e154;
    }
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar9 = uVar12 / uVar4;
    }
    unaff_x24 = uVar12 - uVar9 * uVar4;
    lVar5 = *plVar13;
    plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) goto LAB_10942e16c;
LAB_10942e054:
    *plVar8 = *plVar6;
  }
  else {
    lVar5 = *plVar13;
    plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
joined_r0x00010942e154:
    if (plVar6 != (long *)0x0) goto LAB_10942e054;
LAB_10942e16c:
    plVar6 = plVar13 + 2;
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar8 == 0) goto LAB_10942e1d4;
    uVar9 = *(ulong *)(*plVar8 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar9 = uVar9 & uVar4 - 1;
    }
    else if (uVar4 <= uVar9) {
      uVar11 = 0;
      if (uVar4 != 0) {
        uVar11 = uVar9 / uVar4;
      }
      uVar9 = uVar9 - uVar11 * uVar4;
    }
    plVar6 = (long *)(*plVar13 + uVar9 * 8);
  }
  *plVar6 = (long)plVar8;
LAB_10942e1d4:
  plVar13[3] = plVar13[3] + 1;
  auVar16._8_8_ = 1;
  auVar16._0_8_ = plVar8;
  return auVar16;
}



/* Entry: 10942decc; end: 10942e20f;  */

undefined1  [16] FUN_10942decc(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar2 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar9 = uVar4 * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar9 & uVar5;
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar7 <= uVar9) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar9 / uVar7;
        }
        unaff_x24 = uVar9 - uVar1 * uVar7;
      }
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & uVar5) == 0) {
        do {
          if (plVar8[1] == uVar9) {
            if (plVar8[2] == uVar2) {
LAB_10942dff0:
              auVar10._8_8_ = 0;
              auVar10._0_8_ = plVar8;
              return auVar10;
            }
          }
          else if ((plVar8[1] & uVar5) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar8[1];
          if (uVar5 == uVar9) {
            if (plVar8[2] == uVar2) goto LAB_10942dff0;
          }
          else {
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar1 * uVar7;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar9;
  lVar6 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar2) {
LAB_10942e0c0:
      FUN_10942e210(param_1,uVar2);
    }
    else if (uVar2 < uVar7) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 < uVar7) goto LAB_10942e0c0;
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar9;
      lVar6 = *param_1;
      plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
      goto joined_r0x00010942e154;
    }
    if (uVar9 < uVar7) {
      lVar6 = *param_1;
      plVar3 = *(long **)(lVar6 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x00010942e154;
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar9 / uVar7;
    }
    unaff_x24 = uVar9 - uVar2 * uVar7;
    lVar6 = *param_1;
    plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_10942e16c;
LAB_10942e054:
    *plVar8 = *plVar3;
  }
  else {
    lVar6 = *param_1;
    plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
joined_r0x00010942e154:
    if (plVar3 != (long *)0x0) goto LAB_10942e054;
LAB_10942e16c:
    plVar3 = param_1 + 2;
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar8 == 0) goto LAB_10942e1d4;
    uVar2 = *(ulong *)(*plVar8 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar4 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar3 = (long)plVar8;
LAB_10942e1d4:
  param_1[3] = param_1[3] + 1;
  auVar11._8_8_ = 1;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10942e210; end: 10942e3a7;  */

undefined8 * FUN_10942e210(long *param_1,ulong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  
  if (param_2 == (ulong *)0x0) {
    puVar5 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return puVar5;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    puVar5 = (undefined8 *)*param_1;
    *param_1 = lVar4;
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puVar7 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar7 * 8) = 0;
      puVar7 = (ulong *)((long)puVar7 + 1);
    } while (param_2 != puVar7);
    plVar11 = param_1 + 2;
    plVar8 = (long *)*plVar11;
    if (plVar8 != (long *)0x0) {
      puVar7 = (ulong *)plVar8[1];
      uVar10 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar10) == 0) {
        *(long **)(*param_1 + ((ulong)puVar7 & uVar10) * 8) = plVar11;
        uVar15 = (ulong)puVar7 & uVar10;
        while (plVar11 = plVar8, plVar8 = (long *)*plVar11, plVar8 != (long *)0x0) {
          uVar16 = plVar8[1] & uVar10;
          if (uVar16 != uVar15) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar16 * 8) == 0) {
              *(long **)(lVar4 + uVar16 * 8) = plVar11;
              uVar15 = uVar16;
            }
            else {
              *plVar11 = *plVar8;
              *plVar8 = **(long **)(lVar4 + uVar16 * 8);
              **(undefined8 **)(lVar4 + uVar16 * 8) = plVar8;
              plVar8 = plVar11;
            }
          }
        }
      }
      else {
        if (param_2 <= puVar7) {
          uVar10 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar10 = (ulong)puVar7 / (ulong)param_2;
          }
          puVar7 = (ulong *)((long)puVar7 - uVar10 * (long)param_2);
        }
        *(long **)(*param_1 + (long)puVar7 * 8) = plVar11;
        plVar11 = (long *)*plVar8;
        while (plVar9 = plVar8, plVar11 != (long *)0x0) {
          while( true ) {
            puVar13 = (ulong *)plVar11[1];
            if (param_2 <= puVar13) {
              uVar10 = 0;
              if (param_2 != (ulong *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)param_2;
              }
              puVar13 = (ulong *)((long)puVar13 - uVar10 * (long)param_2);
            }
            plVar8 = plVar11;
            if (puVar13 == puVar7) goto LAB_10942e2d0;
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)puVar13 * 8) != 0) break;
            *(long **)(lVar4 + (long)puVar13 * 8) = plVar9;
            plVar8 = (long *)*plVar11;
            plVar9 = plVar11;
            puVar7 = puVar13;
            plVar11 = plVar8;
            if (plVar8 == (long *)0x0) {
              return puVar5;
            }
          }
          *plVar9 = *plVar11;
          *plVar11 = **(long **)(lVar4 + (long)puVar13 * 8);
          **(undefined8 **)(lVar4 + (long)puVar13 * 8) = plVar11;
          plVar8 = plVar9;
LAB_10942e2d0:
          plVar11 = (long *)*plVar8;
        }
      }
    }
    return puVar5;
  }
  func_0x000104c4f740();
  lVar4 = *param_1;
  lVar19 = param_1[1] - lVar4;
  uVar10 = (lVar19 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar10) {
    FUN_1092a9a64();
LAB_10942e534:
    func_0x000104c4f740();
LAB_10942e538:
    FUN_10923f788();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10942e540);
    (*pcVar3)();
  }
  lVar14 = param_1[2] - lVar4 >> 3;
  uVar15 = lVar14 * 0x5555555555555556;
  if (uVar15 < uVar10 || uVar15 - uVar10 == 0) {
    uVar15 = uVar10;
  }
  if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
    uVar15 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar15 == 0) {
    lVar14 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar15) goto LAB_10942e534;
    lVar14 = uVar15 * 0x18;
    __Znwm();
  }
  puVar5 = (undefined8 *)(lVar14 + lVar19);
  uVar10 = *param_2;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (uVar10 == 0) goto LAB_10942e4e4;
  if (uVar10 >> 0x3e != 0) goto LAB_10942e538;
  puVar6 = (undefined4 *)(uVar10 << 2);
  __Znwm();
  *puVar5 = puVar6;
  puVar5[1] = puVar6;
  puVar1 = puVar6 + uVar10;
  puVar5[2] = puVar1;
  uVar2 = *param_3;
  uVar10 = uVar10 - 1 & 0x3fffffffffffffff;
  if (uVar10 < 7) {
LAB_10942e4d4:
    do {
      puVar12 = puVar6 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar12;
    } while (puVar12 != puVar1);
  }
  else {
    uVar10 = uVar10 + 1;
    uVar17 = uVar10 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(puVar6 + 4);
    uVar16 = uVar17;
    do {
      puVar18[-1] = CONCAT44(uVar2,uVar2);
      puVar18[-2] = CONCAT44(uVar2,uVar2);
      puVar18[1] = CONCAT44(uVar2,uVar2);
      *puVar18 = CONCAT44(uVar2,uVar2);
      puVar18 = puVar18 + 4;
      uVar16 = uVar16 - 8;
    } while (uVar16 != 0);
    puVar6 = puVar6 + uVar17;
    if (uVar10 != uVar17) goto LAB_10942e4d4;
  }
  puVar5[1] = puVar1;
LAB_10942e4e4:
  _memcpy((long)puVar5 - lVar19,lVar4,lVar19);
  *param_1 = (long)puVar5 - lVar19;
  param_1[1] = (long)(puVar5 + 3);
  param_1[2] = lVar14 + uVar15 * 0x18;
  if (lVar4 != 0) {
    __ZdlPv(lVar4);
  }
  return puVar5 + 3;
}



/* Entry: 10942e3a8; end: 10942e563;  */

undefined8 * FUN_10942e3a8(long *param_1,ulong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  
  lVar3 = *param_1;
  lVar14 = param_1[1] - lVar3;
  uVar7 = (lVar14 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar7) {
    FUN_1092a9a64();
LAB_10942e534:
    func_0x000104c4f740();
LAB_10942e538:
    FUN_10923f788();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10942e540);
    (*pcVar5)();
  }
  lVar9 = param_1[2] - lVar3 >> 3;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
    uVar10 = uVar7;
  }
  if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar10 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_10942e534;
    lVar9 = uVar10 * 0x18;
    __Znwm();
  }
  puVar1 = (undefined8 *)(lVar9 + lVar14);
  uVar7 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (uVar7 == 0) goto LAB_10942e4e4;
  if (uVar7 >> 0x3e != 0) goto LAB_10942e538;
  puVar6 = (undefined4 *)(uVar7 << 2);
  __Znwm();
  *puVar1 = puVar6;
  puVar1[1] = puVar6;
  puVar2 = puVar6 + uVar7;
  puVar1[2] = puVar2;
  uVar4 = *param_3;
  uVar7 = uVar7 - 1 & 0x3fffffffffffffff;
  if (uVar7 < 7) {
LAB_10942e4d4:
    do {
      puVar8 = puVar6 + 1;
      *puVar6 = uVar4;
      puVar6 = puVar8;
    } while (puVar8 != puVar2);
  }
  else {
    uVar7 = uVar7 + 1;
    uVar11 = uVar7 & 0x7ffffffffffffff8;
    puVar12 = (undefined8 *)(puVar6 + 4);
    uVar13 = uVar11;
    do {
      puVar12[-1] = CONCAT44(uVar4,uVar4);
      puVar12[-2] = CONCAT44(uVar4,uVar4);
      puVar12[1] = CONCAT44(uVar4,uVar4);
      *puVar12 = CONCAT44(uVar4,uVar4);
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 8;
    } while (uVar13 != 0);
    puVar6 = puVar6 + uVar11;
    if (uVar7 != uVar11) goto LAB_10942e4d4;
  }
  puVar1[1] = puVar2;
LAB_10942e4e4:
  _memcpy((long)puVar1 - lVar14,lVar3,lVar14);
  *param_1 = (long)puVar1 - lVar14;
  param_1[1] = (long)(puVar1 + 3);
  param_1[2] = lVar9 + uVar10 * 0x18;
  if (lVar3 != 0) {
    __ZdlPv(lVar3);
  }
  return puVar1 + 3;
}



/* Entry: 10942e564; end: 10942e5cf;  */

long * FUN_10942e564(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar3 != plVar1) {
    while( true ) {
      plVar4 = plVar3 + -3;
      lVar2 = *plVar4;
      param_1[2] = (long)plVar4;
      if (lVar2 != 0) break;
      plVar3 = plVar4;
      if (plVar4 == plVar1) goto LAB_10942e5b4;
    }
    plVar3[-2] = lVar2;
    __ZdlPv();
    plVar3 = (long *)param_1[2];
  }
LAB_10942e5b4:
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10942e5d0; end: 10942e83f;  */

long * FUN_10942e5d0(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_1[1];
  if ((uVar10 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar10)) {
    uVar5 = uVar10 - 1;
    uVar6 = uVar10 & uVar5;
    goto joined_r0x00010942e7b8;
  }
  uVar6 = 1;
  if (2 < uVar10) {
    uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar6 = uVar6 | uVar10 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar10 = param_1[1];
  }
  if (uVar6 < uVar10 || uVar6 == uVar10) {
    if (uVar6 < uVar10) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        if (1 < uVar5) {
          uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
        }
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
      }
      if (uVar6 < uVar10) goto LAB_10942e714;
    }
  }
  else {
LAB_10942e714:
    FUN_10942e840(param_1,uVar6);
  }
  uVar10 = param_1[1];
  uVar5 = uVar10 - 1;
  uVar6 = uVar10 & uVar5;
joined_r0x00010942e7b8:
  if (uVar6 == 0) {
    plVar7 = *(long **)(*param_1 + (uVar5 & param_2) * 8);
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    bVar8 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar7;
      plVar7 = (long *)*plVar4;
      if (plVar7 == (long *)0x0) {
        return plVar4;
      }
      if ((plVar7[1] & uVar5) != (uVar5 & param_2)) {
        return plVar4;
      }
      if (plVar7[1] == param_2) {
        bVar2 = plVar7[2] == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar8;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar8 = (bool)(bVar8 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  else {
    uVar6 = param_2;
    if (uVar10 <= param_2) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = param_2 / uVar10;
      }
      uVar6 = param_2 - uVar6 * uVar10;
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      bVar8 = false;
      bVar1 = 0;
      do {
        plVar4 = plVar7;
        plVar7 = (long *)*plVar4;
        if (plVar7 == (long *)0x0) {
          return plVar4;
        }
        uVar9 = plVar7[1];
        uVar5 = uVar9;
        if (uVar10 <= uVar9) {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar9 / uVar10;
          }
          uVar5 = uVar9 - uVar5 * uVar10;
        }
        if (uVar5 != uVar6) {
          return plVar4;
        }
        if (uVar9 == param_2) {
          bVar2 = plVar7[2] == *param_3;
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar8;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar8 = (bool)(bVar8 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
  }
  return plVar4;
}



/* Entry: 10942e840; end: 10942e9f7;  */

/* WARNING: Removing unreachable block (ram,0x00010942fb84) */
/* WARNING: Removing unreachable block (ram,0x00010942fbdc) */
/* WARNING: Removing unreachable block (ram,0x00010942fc04) */
/* WARNING: Removing unreachable block (ram,0x00010942fc1c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc4c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc5c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc60) */
/* WARNING: Removing unreachable block (ram,0x00010942fc64) */
/* WARNING: Removing unreachable block (ram,0x00010942fc30) */
/* WARNING: Removing unreachable block (ram,0x00010942fc48) */
/* WARNING: Removing unreachable block (ram,0x00010942fc78) */
/* WARNING: Removing unreachable block (ram,0x00010942fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010942fc80) */
/* WARNING: Removing unreachable block (ram,0x00010942fc94) */
/* WARNING: Removing unreachable block (ram,0x00010942fc98) */
/* WARNING: Removing unreachable block (ram,0x00010942fc9c) */
/* WARNING: Removing unreachable block (ram,0x00010942fce4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcfc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010942fba0) */
/* WARNING: Removing unreachable block (ram,0x00010942fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010942fbcc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbac) */

uint * FUN_10942e840(long *param_1,uint *param_2,undefined8 *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  
  if (param_2 == (uint *)0x0) {
    puVar7 = (uint *)*param_1;
    *param_1 = 0;
    if (puVar7 != (uint *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar13 = param_1[1];
      if (uVar13 != 0) {
        uVar23 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) *
                 -0x622015f714c7d297;
        uVar23 = ((ulong)param_2 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
        uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
        uVar24 = uVar13 - 1;
        if ((uVar13 & uVar24) == 0) {
          uVar17 = uVar24 & uVar23;
        }
        else {
          uVar17 = uVar23;
          if (uVar13 <= uVar23) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar23 / uVar13;
            }
            uVar17 = uVar23 - uVar17 * uVar13;
          }
        }
        plVar11 = *(long **)(*param_1 + uVar17 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((uVar13 & uVar24) == 0) {
            do {
              if (plVar11[1] == uVar23) {
                if ((uint *)plVar11[2] == param_2) {
LAB_10942eaf4:
                  return (uint *)(plVar11 + 3);
                }
              }
              else if ((plVar11[1] & uVar24) != uVar17) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar24 = plVar11[1];
              if (uVar24 == uVar23) {
                if ((uint *)plVar11[2] == param_2) goto LAB_10942eaf4;
              }
              else {
                if (uVar13 <= uVar24) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar24 / uVar13;
                  }
                  uVar24 = uVar24 - uVar5 * uVar13;
                }
                if (uVar24 != uVar17) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      puVar7 = (uint *)&UNK_10f639994;
      FUN_109262df8();
      puVar10 = puVar7;
LAB_10942eb44:
      do {
        puVar20 = puVar10;
        uVar13 = (long)param_2 - (long)puVar20 >> 2;
        if ((long)uVar13 < 3) {
          if (uVar13 < 2) {
            return puVar7;
          }
          if (uVar13 == 2) {
            lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
            uVar12 = *puVar20;
            if (*(int *)(lVar6 + (long)(int)param_2[-1] * 4) <=
                *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
              return puVar7;
            }
            *puVar20 = param_2[-1];
            param_2[-1] = uVar12;
            return puVar7;
          }
        }
        else {
          if (uVar13 == 3) {
            uVar12 = *puVar20;
            uVar9 = puVar20[1];
            lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
            iVar14 = *(int *)(lVar6 + (long)(int)uVar9 * 4);
            uVar15 = param_2[-1];
            iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
            if (iVar14 <= *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
              if (iVar2 <= iVar14) {
                return puVar7;
              }
              puVar20[1] = uVar15;
              param_2[-1] = uVar9;
              uVar12 = *puVar20;
              if (*(int *)(lVar6 + (long)(int)puVar20[1] * 4) <=
                  *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
                return puVar7;
              }
              *puVar20 = puVar20[1];
              puVar20[1] = uVar12;
              return puVar7;
            }
            if (iVar14 < iVar2) {
              *puVar20 = uVar15;
              param_2[-1] = uVar12;
              return puVar7;
            }
            *puVar20 = uVar9;
            puVar20[1] = uVar12;
            if (*(int *)(lVar6 + (long)(int)param_2[-1] * 4) <=
                *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
              return puVar7;
            }
            puVar20[1] = param_2[-1];
            param_2[-1] = uVar12;
            return puVar7;
          }
          if (uVar13 == 4) {
            puVar22 = puVar20 + 1;
            uVar9 = *puVar22;
            puVar8 = puVar20 + 2;
            uVar15 = *puVar8;
            uVar12 = *puVar20;
            lVar28 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
            iVar14 = *(int *)(lVar28 + (long)(int)uVar9 * 4);
            lVar25 = (long)(int)uVar12;
            uVar18 = *(uint *)(lVar28 + (long)(int)uVar12 * 4);
            puVar10 = (uint *)(ulong)uVar18;
            lVar6 = (long)(int)uVar15;
            iVar2 = *(int *)(lVar28 + (long)(int)uVar15 * 4);
            puVar7 = puVar20;
            if ((int)uVar18 < iVar14) {
              puVar21 = puVar8;
              uVar18 = uVar12;
              if (iVar2 <= iVar14) {
                *puVar20 = uVar9;
                puVar20[1] = uVar12;
                uVar9 = *(uint *)(lVar28 + lVar6 * 4);
                puVar10 = (uint *)(ulong)uVar9;
                puVar7 = puVar22;
                if ((int)uVar9 <= *(int *)(lVar28 + lVar25 * 4)) {
                  uVar12 = param_2[-1];
                  uVar18 = uVar15;
                  if (*(int *)(lVar28 + (long)(int)uVar12 * 4) <= *(int *)(lVar28 + lVar6 * 4)) {
                    return puVar10;
                  }
                  goto LAB_10942f3d8;
                }
              }
LAB_10942f3a0:
              *puVar7 = uVar15;
              *puVar21 = uVar12;
              uVar12 = param_2[-1];
              if (*(int *)(lVar28 + (long)(int)uVar12 * 4) <= *(int *)(lVar28 + lVar25 * 4)) {
                return puVar10;
              }
            }
            else {
              uVar18 = uVar15;
              if (iVar14 < iVar2) {
                *puVar22 = uVar15;
                *puVar8 = uVar9;
                uVar3 = *(uint *)(lVar28 + lVar6 * 4);
                puVar10 = (uint *)(ulong)uVar3;
                lVar29 = lVar25 * 4;
                lVar25 = (long)(int)uVar9;
                lVar6 = lVar25;
                puVar21 = puVar22;
                uVar18 = uVar9;
                if (*(int *)(lVar28 + lVar29) < (int)uVar3) goto LAB_10942f3a0;
              }
              uVar12 = param_2[-1];
              if (*(int *)(lVar28 + (long)(int)uVar12 * 4) <= *(int *)(lVar28 + lVar6 * 4)) {
                return puVar10;
              }
            }
LAB_10942f3d8:
            *puVar8 = uVar12;
            param_2[-1] = uVar18;
            uVar12 = *puVar8;
            uVar9 = *puVar22;
            if (*(int *)(lVar28 + (long)(int)uVar12 * 4) <= *(int *)(lVar28 + (long)(int)uVar9 * 4))
            {
              return puVar10;
            }
            puVar20[1] = uVar12;
            puVar20[2] = uVar9;
            uVar9 = *puVar20;
            if (*(int *)(lVar28 + (long)(int)uVar12 * 4) <= *(int *)(lVar28 + (long)(int)uVar9 * 4))
            {
              return puVar10;
            }
            *puVar20 = uVar12;
            puVar20[1] = uVar9;
            return puVar10;
          }
          if (uVar13 == 5) {
            puVar7 = puVar20 + 1;
            puVar10 = puVar20 + 2;
            puVar22 = puVar20 + 3;
            uVar12 = *puVar7;
            uVar9 = *puVar20;
            lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
            iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
            uVar15 = *puVar10;
            iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
            if (*(int *)(lVar6 + (long)(int)uVar9 * 4) < iVar14) {
              if (iVar14 < iVar2) {
                *puVar20 = uVar15;
              }
              else {
                *puVar20 = uVar12;
                *puVar7 = uVar9;
                uVar15 = *puVar10;
                if (*(int *)(lVar6 + (long)(int)uVar15 * 4) <=
                    *(int *)(lVar6 + (long)(int)uVar9 * 4)) {
LAB_10942f528:
                  uVar18 = *puVar22;
                  if (*(int *)(lVar6 + (long)(int)uVar18 * 4) <=
                      *(int *)(lVar6 + (long)(int)uVar15 * 4)) goto LAB_10942f5a8;
                  goto LAB_10942f560;
                }
                *puVar7 = uVar15;
              }
              *puVar10 = uVar9;
              uVar18 = *puVar22;
              uVar15 = uVar9;
              if (*(int *)(lVar6 + (long)(int)uVar18 * 4) <= *(int *)(lVar6 + (long)(int)uVar9 * 4))
              goto LAB_10942f5a8;
            }
            else if (iVar14 < iVar2) {
              *puVar7 = uVar15;
              *puVar10 = uVar12;
              uVar9 = *puVar20;
              if (*(int *)(lVar6 + (long)(int)uVar9 * 4) < *(int *)(lVar6 + (long)(int)*puVar7 * 4))
              {
                *puVar20 = *puVar7;
                *puVar7 = uVar9;
                uVar15 = *puVar10;
                goto LAB_10942f528;
              }
              uVar18 = *puVar22;
              uVar15 = uVar12;
              if (*(int *)(lVar6 + (long)(int)uVar18 * 4) <= *(int *)(lVar6 + (long)(int)uVar12 * 4)
                 ) goto LAB_10942f5a8;
            }
            else {
              uVar18 = *puVar22;
              if (*(int *)(lVar6 + (long)(int)uVar18 * 4) <= *(int *)(lVar6 + (long)(int)uVar15 * 4)
                 ) goto LAB_10942f5a8;
            }
LAB_10942f560:
            *puVar10 = uVar18;
            *puVar22 = uVar15;
            uVar12 = *puVar7;
            if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar10 * 4))
            {
              *puVar7 = *puVar10;
              *puVar10 = uVar12;
              uVar12 = *puVar20;
              if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar7 * 4)
                 ) {
                *puVar20 = *puVar7;
                *puVar7 = uVar12;
              }
            }
LAB_10942f5a8:
            uVar12 = param_2[-1];
            uVar9 = *puVar22;
            if (*(int *)(lVar6 + (long)(int)uVar9 * 4) < *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
              *puVar22 = uVar12;
              param_2[-1] = uVar9;
              uVar12 = *puVar10;
              if (*(int *)(lVar6 + (long)(int)uVar12 * 4) <
                  *(int *)(lVar6 + (long)(int)*puVar22 * 4)) {
                *puVar10 = *puVar22;
                *puVar22 = uVar12;
                uVar12 = *puVar7;
                if (*(int *)(lVar6 + (long)(int)uVar12 * 4) <
                    *(int *)(lVar6 + (long)(int)*puVar10 * 4)) {
                  *puVar7 = *puVar10;
                  *puVar10 = uVar12;
                  uVar12 = *puVar20;
                  if (*(int *)(lVar6 + (long)(int)uVar12 * 4) <
                      *(int *)(lVar6 + (long)(int)*puVar7 * 4)) {
                    *puVar20 = *puVar7;
                    *puVar7 = uVar12;
                  }
                }
              }
            }
            return puVar20;
          }
        }
        if ((long)uVar13 < 0x18) {
          if ((param_5 & 1) == 0) {
            if (puVar20 == param_2) {
              return puVar7;
            }
            if (puVar20 + 1 == param_2) {
              return puVar7;
            }
            lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
            puVar10 = puVar20 + 1;
            do {
              puVar22 = puVar10;
              uVar12 = puVar20[1];
              lVar28 = (long)(int)*puVar20;
              puVar10 = puVar22;
              if (*(int *)(lVar6 + lVar28 * 4) < *(int *)(lVar6 + (long)(int)uVar12 * 4)) {
                do {
                  *puVar10 = (uint)lVar28;
                  lVar28 = (long)(int)puVar10[-2];
                  puVar10 = puVar10 + -1;
                } while (*(int *)(lVar6 + lVar28 * 4) < *(int *)(lVar6 + (long)(int)uVar12 * 4));
                *puVar10 = uVar12;
              }
              puVar10 = puVar22 + 1;
              puVar20 = puVar22;
            } while (puVar22 + 1 != param_2);
            return puVar7;
          }
          if (puVar20 == param_2) {
            return puVar7;
          }
          if (puVar20 + 1 == param_2) {
            return puVar7;
          }
          lVar28 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
          lVar6 = 4;
          puVar10 = puVar20;
          puVar22 = puVar20 + 1;
          do {
            uVar12 = puVar10[1];
            lVar29 = (long)(int)*puVar10;
            lVar25 = lVar6;
            if (*(int *)(lVar28 + lVar29 * 4) < *(int *)(lVar28 + (long)(int)uVar12 * 4)) {
              do {
                *(int *)((long)puVar20 + lVar25) = (int)lVar29;
                lVar4 = lVar25 + -4;
                puVar10 = puVar20;
                if (lVar4 == 0) goto LAB_10942f1ec;
                lVar29 = (long)*(int *)((long)puVar20 + lVar25 + -8);
                lVar25 = lVar4;
              } while (*(int *)(lVar28 + lVar29 * 4) < *(int *)(lVar28 + (long)(int)uVar12 * 4));
              puVar10 = (uint *)((long)puVar20 + lVar4);
LAB_10942f1ec:
              *puVar10 = uVar12;
            }
            puVar8 = puVar22 + 1;
            lVar6 = lVar6 + 4;
            puVar10 = puVar22;
            puVar22 = puVar8;
            if (puVar8 == param_2) {
              return puVar7;
            }
          } while( true );
        }
        if (param_4 == 0) {
          if (puVar20 == param_2) {
            return puVar7;
          }
          if (puVar20 == param_2) {
            return param_2;
          }
          lVar6 = (long)param_2 - (long)puVar20 >> 2;
          if (lVar6 < 2) goto LAB_10942fd00;
          uVar23 = lVar6 - 2U >> 1;
          plVar11 = (long *)*param_3;
          lVar28 = param_3[1];
          uVar13 = uVar23;
          goto LAB_10942fa60;
        }
        puVar22 = puVar20 + (uVar13 >> 1);
        lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        uVar12 = param_2[-1];
        iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
        puVar10 = puVar20;
        if (uVar13 < 0x81) {
          uVar15 = *puVar20;
          uVar9 = *puVar22;
          iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
          if (*(int *)(lVar6 + (long)(int)uVar9 * 4) < iVar2) {
            if (iVar2 < iVar14) {
              *puVar22 = uVar12;
            }
            else {
              *puVar22 = uVar15;
              *puVar20 = uVar9;
              if (*(int *)(lVar6 + (long)(int)param_2[-1] * 4) <=
                  *(int *)(lVar6 + (long)(int)uVar9 * 4)) goto LAB_10942ed28;
              *puVar20 = param_2[-1];
            }
            param_2[-1] = uVar9;
          }
          else if (iVar2 < iVar14) {
            *puVar20 = uVar12;
            param_2[-1] = uVar15;
            uVar12 = *puVar22;
            if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar20 * 4))
            {
              *puVar22 = *puVar20;
              *puVar20 = uVar12;
              goto joined_r0x00010942ee78;
            }
          }
LAB_10942ed28:
          uVar12 = *puVar20;
          if ((param_5 & 1) != 0) goto LAB_10942ed34;
LAB_10942ee7c:
          iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
          if (*(int *)(lVar6 + (long)(int)puVar20[-1] * 4) <= iVar14) {
            if (*(int *)(lVar6 + (long)(int)param_2[-1] * 4) < iVar14) {
              do {
                puVar10 = puVar10 + 1;
              } while (iVar14 <= *(int *)(lVar6 + (long)(int)*puVar10 * 4));
            }
            else {
              do {
                puVar10 = puVar10 + 1;
                if (param_2 <= puVar10) break;
              } while (iVar14 <= *(int *)(lVar6 + (long)(int)*puVar10 * 4));
            }
            puVar22 = param_2;
            if (puVar10 < param_2) {
              do {
                puVar22 = puVar22 + -1;
              } while (*(int *)(lVar6 + (long)(int)*puVar22 * 4) < iVar14);
            }
            if (puVar10 < puVar22) {
              uVar13 = (ulong)*puVar10;
              uVar23 = (ulong)*puVar22;
              do {
                *puVar10 = (uint)uVar23;
                *puVar22 = (uint)uVar13;
                iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
                do {
                  puVar10 = puVar10 + 1;
                  uVar13 = (ulong)(int)*puVar10;
                } while (iVar14 <= *(int *)(lVar6 + uVar13 * 4));
                do {
                  puVar22 = puVar22 + -1;
                  uVar23 = (ulong)(int)*puVar22;
                } while (*(int *)(lVar6 + uVar23 * 4) < iVar14);
              } while (puVar10 < puVar22);
            }
            puVar22 = puVar10 + -1;
            if (puVar22 != puVar20) {
              *puVar20 = *puVar22;
            }
            param_5 = 0;
            *puVar22 = uVar12;
            param_4 = param_4 + -1;
            goto LAB_10942eb44;
          }
        }
        else {
          uVar15 = *puVar22;
          uVar9 = *puVar20;
          iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
          if (*(int *)(lVar6 + (long)(int)uVar9 * 4) < iVar2) {
            if (iVar2 < iVar14) {
              *puVar20 = uVar12;
            }
            else {
              *puVar20 = uVar15;
              *puVar22 = uVar9;
              if (*(int *)(lVar6 + (long)(int)param_2[-1] * 4) <=
                  *(int *)(lVar6 + (long)(int)uVar9 * 4)) goto LAB_10942ec9c;
              *puVar22 = param_2[-1];
            }
            param_2[-1] = uVar9;
          }
          else if (iVar2 < iVar14) {
            *puVar22 = uVar12;
            param_2[-1] = uVar15;
            uVar12 = *puVar20;
            if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar22 * 4))
            {
              *puVar20 = *puVar22;
              *puVar22 = uVar12;
            }
          }
LAB_10942ec9c:
          puVar8 = puVar22 + -1;
          uVar9 = *puVar8;
          uVar12 = puVar20[1];
          iVar14 = *(int *)(lVar6 + (long)(int)uVar9 * 4);
          uVar15 = param_2[-2];
          iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
          if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < iVar14) {
            if (iVar14 < iVar2) {
              puVar20[1] = uVar15;
            }
            else {
              puVar20[1] = uVar9;
              *puVar8 = uVar12;
              if (*(int *)(lVar6 + (long)(int)param_2[-2] * 4) <=
                  *(int *)(lVar6 + (long)(int)uVar12 * 4)) goto LAB_10942ed60;
              *puVar8 = param_2[-2];
            }
            param_2[-2] = uVar12;
          }
          else if (iVar14 < iVar2) {
            *puVar8 = uVar15;
            param_2[-2] = uVar9;
            uVar12 = puVar20[1];
            if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar8 * 4))
            {
              puVar20[1] = *puVar8;
              *puVar8 = uVar12;
            }
          }
LAB_10942ed60:
          puVar21 = puVar22 + 1;
          uVar9 = *puVar21;
          uVar12 = puVar20[2];
          iVar14 = *(int *)(lVar6 + (long)(int)uVar9 * 4);
          uVar15 = param_2[-3];
          iVar2 = *(int *)(lVar6 + (long)(int)uVar15 * 4);
          if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < iVar14) {
            if (iVar14 < iVar2) {
              puVar20[2] = uVar15;
            }
            else {
              puVar20[2] = uVar9;
              *puVar21 = uVar12;
              if (*(int *)(lVar6 + (long)(int)param_2[-3] * 4) <=
                  *(int *)(lVar6 + (long)(int)uVar12 * 4)) goto LAB_10942edec;
              *puVar21 = param_2[-3];
            }
            param_2[-3] = uVar12;
          }
          else if (iVar14 < iVar2) {
            *puVar21 = uVar15;
            param_2[-3] = uVar9;
            uVar12 = puVar20[2];
            if (*(int *)(lVar6 + (long)(int)uVar12 * 4) < *(int *)(lVar6 + (long)(int)*puVar21 * 4))
            {
              puVar20[2] = *puVar21;
              *puVar21 = uVar12;
            }
          }
LAB_10942edec:
          uVar12 = *puVar22;
          uVar9 = puVar22[1];
          uVar15 = puVar22[-1];
          iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
          iVar2 = *(int *)(lVar6 + (long)(int)uVar9 * 4);
          if (*(int *)(lVar6 + (long)(int)uVar15 * 4) < iVar14) {
            uVar18 = uVar12;
            if (iVar2 <= iVar14) {
              puVar22[-1] = uVar12;
              *puVar22 = uVar15;
              puVar8 = puVar22;
              uVar12 = uVar15;
              uVar18 = uVar9;
              if (*(int *)(lVar6 + (long)(int)uVar9 * 4) <= *(int *)(lVar6 + (long)(int)uVar15 * 4))
              goto LAB_10942ee64;
            }
LAB_10942ee5c:
            *puVar8 = uVar9;
            *puVar21 = uVar15;
            uVar12 = uVar18;
          }
          else if (iVar14 < iVar2) {
            *puVar22 = uVar9;
            puVar22[1] = uVar12;
            puVar21 = puVar22;
            uVar12 = uVar9;
            uVar18 = uVar15;
            if (*(int *)(lVar6 + (long)(int)uVar15 * 4) < *(int *)(lVar6 + (long)(int)uVar9 * 4))
            goto LAB_10942ee5c;
          }
LAB_10942ee64:
          uVar9 = *puVar20;
          *puVar20 = uVar12;
          *puVar22 = uVar9;
          uVar12 = *puVar20;
joined_r0x00010942ee78:
          if ((param_5 & 1) == 0) goto LAB_10942ee7c;
LAB_10942ed34:
          iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
        }
        param_4 = param_4 + -1;
        lVar28 = 0;
        do {
          lVar25 = (long)*(int *)((long)puVar20 + lVar28 + 4);
          lVar28 = lVar28 + 4;
        } while (iVar14 < *(int *)(lVar6 + lVar25 * 4));
        puVar7 = (uint *)((long)puVar20 + lVar28);
        puVar10 = param_2;
        if (lVar28 == 4) {
          do {
            if (puVar10 <= puVar7) break;
            puVar10 = puVar10 + -1;
          } while (*(int *)(lVar6 + (long)(int)*puVar10 * 4) <= iVar14);
        }
        else {
          do {
            puVar10 = puVar10 + -1;
          } while (*(int *)(lVar6 + (long)(int)*puVar10 * 4) <= iVar14);
        }
        if (puVar7 < puVar10) {
          uVar13 = (ulong)*puVar10;
          puVar8 = puVar7;
          puVar21 = puVar10;
          do {
            *puVar8 = (uint)uVar13;
            *puVar21 = (uint)lVar25;
            iVar14 = *(int *)(lVar6 + (long)(int)uVar12 * 4);
            do {
              puVar22 = puVar8;
              puVar8 = puVar22 + 1;
              lVar25 = (long)(int)*puVar8;
            } while (iVar14 < *(int *)(lVar6 + lVar25 * 4));
            do {
              puVar21 = puVar21 + -1;
              uVar13 = (ulong)(int)*puVar21;
            } while (*(int *)(lVar6 + uVar13 * 4) <= iVar14);
          } while (puVar8 < puVar21);
        }
        else {
          puVar22 = puVar7 + -1;
        }
        if (puVar22 != puVar20) {
          *puVar20 = *puVar22;
        }
        *puVar22 = uVar12;
        if (puVar7 < puVar10) {
LAB_10942ef98:
          FUN_10942eb0c(puVar20,puVar22,param_3,param_4,(uint)param_5 & 1);
          param_5 = 0;
          puVar7 = puVar20;
          puVar10 = puVar22 + 1;
        }
        else {
          puVar8 = puVar20;
          FUN_10942f62c(puVar20,puVar22,param_3);
          puVar10 = puVar22 + 1;
          puVar7 = puVar10;
          FUN_10942f62c(puVar10,param_2,param_3);
          if ((int)puVar7 == 0) {
            if (((ulong)puVar8 & 1) == 0) goto LAB_10942ef98;
          }
          else {
            puVar10 = puVar20;
            param_2 = puVar22;
            if (((ulong)puVar8 & 1) != 0) {
              return puVar7;
            }
          }
        }
      } while( true );
    }
    lVar6 = (long)param_2 << 3;
    __Znwm();
    puVar7 = (uint *)*param_1;
    *param_1 = lVar6;
    if (puVar7 != (uint *)0x0) {
      __ZdlPv();
    }
    puVar10 = (uint *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar10 * 8) = 0;
      puVar10 = (uint *)((long)puVar10 + 1);
    } while (param_2 != puVar10);
    plVar19 = param_1 + 2;
    plVar11 = (long *)*plVar19;
    if (plVar11 != (long *)0x0) {
      puVar10 = (uint *)plVar11[1];
      puVar16 = (undefined *)((long)param_2 + -1);
      if (((ulong)param_2 & (ulong)puVar16) == 0) {
        *(long **)(*param_1 + ((ulong)puVar10 & (ulong)puVar16) * 8) = plVar19;
        uVar13 = (ulong)puVar10 & (ulong)puVar16;
        while (plVar19 = plVar11, plVar11 = (long *)*plVar19, plVar11 != (long *)0x0) {
          uVar23 = plVar11[1] & (ulong)puVar16;
          if (uVar23 != uVar13) {
            lVar6 = *param_1;
            plVar27 = plVar11;
            if (*(long *)(lVar6 + uVar23 * 8) == 0) {
              *(long **)(lVar6 + uVar23 * 8) = plVar19;
              uVar13 = uVar23;
            }
            else {
              do {
                plVar26 = plVar27;
                plVar27 = (long *)*plVar26;
                if (plVar27 == (long *)0x0) break;
              } while (plVar11[2] == plVar27[2]);
              *plVar19 = (long)plVar27;
              *plVar26 = **(long **)(lVar6 + uVar23 * 8);
              **(undefined8 **)(lVar6 + uVar23 * 8) = plVar11;
              plVar11 = plVar19;
            }
          }
        }
      }
      else {
        if (param_2 <= puVar10) {
          uVar13 = 0;
          if (param_2 != (uint *)0x0) {
            uVar13 = (ulong)puVar10 / (ulong)param_2;
          }
          puVar10 = (uint *)((long)puVar10 - uVar13 * (long)param_2);
        }
        *(long **)(*param_1 + (long)puVar10 * 8) = plVar19;
        while (plVar19 = plVar11, plVar11 = (long *)*plVar19, plVar11 != (long *)0x0) {
          puVar20 = (uint *)plVar11[1];
          if (param_2 <= puVar20) {
            uVar13 = 0;
            if (param_2 != (uint *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)param_2;
            }
            puVar20 = (uint *)((long)puVar20 - uVar13 * (long)param_2);
          }
          if (puVar20 != puVar10) {
            lVar6 = *param_1;
            plVar27 = plVar11;
            if (*(long *)(lVar6 + (long)puVar20 * 8) == 0) {
              *(long **)(lVar6 + (long)puVar20 * 8) = plVar19;
              puVar10 = puVar20;
            }
            else {
              do {
                plVar26 = plVar27;
                plVar27 = (long *)*plVar26;
                if (plVar27 == (long *)0x0) break;
              } while (plVar11[2] == plVar27[2]);
              *plVar19 = (long)plVar27;
              *plVar26 = **(long **)(lVar6 + (long)puVar20 * 8);
              **(long **)(lVar6 + (long)puVar20 * 8) = (long)plVar11;
              plVar11 = plVar19;
            }
          }
        }
      }
    }
  }
  return puVar7;
LAB_10942fa60:
  if ((long)uVar13 <= (long)uVar23) {
    uVar17 = uVar13 << 1 | 1;
    puVar7 = puVar20 + uVar17;
    uVar24 = uVar13 * 2 + 2;
    uVar12 = *puVar7;
    if ((long)uVar24 < lVar6) {
      uVar9 = puVar7[1];
      lVar25 = *(long *)(*plVar11 + lVar28 * 0x18);
      puVar10 = puVar7 + 1;
      if (*(int *)(lVar25 + (long)(int)uVar12 * 4) <= *(int *)(lVar25 + (long)(int)uVar9 * 4)) {
        uVar24 = uVar17;
        puVar10 = puVar7;
        uVar9 = uVar12;
      }
      uVar12 = uVar9;
      uVar9 = puVar20[uVar13];
      uVar17 = uVar24;
      puVar7 = puVar10;
      puVar10 = puVar20 + uVar13;
      if (*(int *)(lVar25 + (long)(int)uVar12 * 4) <= *(int *)(lVar25 + (long)(int)uVar9 * 4)) {
LAB_10942fb2c:
        do {
          while( true ) {
            puVar22 = puVar7;
            *puVar10 = uVar12;
            if ((long)uVar23 < (long)uVar17) goto LAB_10942fa54;
            uVar24 = uVar17 << 1 | 1;
            puVar8 = puVar20 + uVar24;
            uVar17 = uVar17 * 2 + 2;
            uVar12 = *puVar8;
            puVar10 = puVar22;
            if ((long)uVar17 < lVar6) break;
            uVar17 = uVar24;
            puVar7 = puVar8;
            if (*(int *)(lVar25 + (long)(int)uVar9 * 4) < *(int *)(lVar25 + (long)(int)uVar12 * 4))
            goto LAB_10942fa54;
          }
          uVar15 = puVar8[1];
          puVar7 = puVar8 + 1;
          if (*(int *)(lVar25 + (long)(int)uVar12 * 4) <= *(int *)(lVar25 + (long)(int)uVar15 * 4))
          {
            uVar17 = uVar24;
            puVar7 = puVar8;
            uVar15 = uVar12;
          }
          uVar12 = uVar15;
        } while (*(int *)(lVar25 + (long)(int)uVar12 * 4) <= *(int *)(lVar25 + (long)(int)uVar9 * 4)
                );
LAB_10942fa54:
        *puVar22 = uVar9;
      }
    }
    else {
      lVar25 = *(long *)(*plVar11 + lVar28 * 0x18);
      puVar10 = puVar20 + uVar13;
      uVar9 = *puVar10;
      if (*(int *)(lVar25 + (long)(int)uVar12 * 4) <= *(int *)(lVar25 + (long)(int)uVar9 * 4))
      goto LAB_10942fb2c;
    }
  }
  bVar1 = uVar13 == 0;
  uVar13 = uVar13 - 1;
  if (bVar1) {
LAB_10942fd00:
    puVar7 = param_2;
    if (1 < lVar6) {
      do {
        uVar12 = *puVar20;
        uVar23 = lVar6 - 2U >> 1;
        plVar11 = (long *)*param_3;
        lVar28 = param_3[1];
        uVar13 = 0;
        puVar10 = puVar20;
        do {
          while( true ) {
            puVar22 = puVar10 + uVar13 + 1;
            uVar9 = *puVar22;
            uVar17 = uVar13 << 1 | 1;
            uVar24 = uVar13 * 2 + 2;
            if ((long)uVar24 < lVar6) break;
            *puVar10 = uVar9;
            uVar13 = uVar17;
            puVar10 = puVar22;
            if ((long)uVar23 < (long)uVar17) goto LAB_10942fdac;
          }
          lVar25 = uVar13 + 2;
          uVar15 = puVar10[lVar25];
          lVar29 = *(long *)(*plVar11 + lVar28 * 0x18);
          uVar13 = uVar24;
          puVar8 = puVar10 + lVar25;
          if (*(int *)(lVar29 + (long)(int)uVar9 * 4) <= *(int *)(lVar29 + (long)(int)uVar15 * 4)) {
            uVar13 = uVar17;
            puVar8 = puVar22;
            uVar15 = uVar9;
          }
          puVar22 = puVar8;
          *puVar10 = uVar15;
          puVar10 = puVar22;
        } while ((long)uVar13 <= (long)uVar23);
LAB_10942fdac:
        puVar7 = puVar7 + -1;
        if (puVar22 == puVar7) {
          *puVar22 = uVar12;
        }
        else {
          *puVar22 = *puVar7;
          *puVar7 = uVar12;
          lVar25 = (long)((long)puVar22 + (4 - (long)puVar20)) >> 2;
          if (1 < lVar25) {
            uVar13 = lVar25 - 2U >> 1;
            lVar25 = (long)(int)puVar20[uVar13];
            lVar28 = *(long *)(*plVar11 + lVar28 * 0x18);
            uVar12 = *puVar22;
            puVar10 = puVar20 + uVar13;
            if (*(int *)(lVar28 + (long)(int)uVar12 * 4) < *(int *)(lVar28 + lVar25 * 4)) {
              do {
                puVar8 = puVar10;
                *puVar22 = (uint)lVar25;
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1 >> 1;
                lVar25 = (long)(int)puVar20[uVar13];
                puVar22 = puVar8;
                puVar10 = puVar20 + uVar13;
              } while (*(int *)(lVar28 + (long)(int)uVar12 * 4) < *(int *)(lVar28 + lVar25 * 4));
              *puVar8 = uVar12;
            }
          }
        }
        bVar1 = 2 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar1);
    }
    return param_2;
  }
  goto LAB_10942fa60;
}



/* Entry: 10942e9f8; end: 10942eb0b;  */

/* WARNING: Removing unreachable block (ram,0x00010942fb84) */
/* WARNING: Removing unreachable block (ram,0x00010942fbdc) */
/* WARNING: Removing unreachable block (ram,0x00010942fc04) */
/* WARNING: Removing unreachable block (ram,0x00010942fc1c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc4c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc5c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc60) */
/* WARNING: Removing unreachable block (ram,0x00010942fc64) */
/* WARNING: Removing unreachable block (ram,0x00010942fc30) */
/* WARNING: Removing unreachable block (ram,0x00010942fc48) */
/* WARNING: Removing unreachable block (ram,0x00010942fc78) */
/* WARNING: Removing unreachable block (ram,0x00010942fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010942fc80) */
/* WARNING: Removing unreachable block (ram,0x00010942fc94) */
/* WARNING: Removing unreachable block (ram,0x00010942fc98) */
/* WARNING: Removing unreachable block (ram,0x00010942fc9c) */
/* WARNING: Removing unreachable block (ram,0x00010942fce4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcfc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010942fba0) */
/* WARNING: Removing unreachable block (ram,0x00010942fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010942fbcc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbac) */

uint * FUN_10942e9f8(long *param_1,uint *param_2,undefined8 *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar15 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar15 = ((ulong)param_2 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
    uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
    uVar22 = uVar12 - 1;
    if ((uVar12 & uVar22) == 0) {
      uVar16 = uVar22 & uVar15;
    }
    else {
      uVar16 = uVar15;
      if (uVar12 <= uVar15) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = uVar15 / uVar12;
        }
        uVar16 = uVar15 - uVar16 * uVar12;
      }
    }
    plVar19 = *(long **)(*param_1 + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if ((uVar12 & uVar22) == 0) {
        do {
          if (plVar19[1] == uVar15) {
            if ((uint *)plVar19[2] == param_2) {
LAB_10942eaf4:
              return (uint *)(plVar19 + 3);
            }
          }
          else if ((plVar19[1] & uVar22) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar19[1];
          if (uVar22 == uVar15) {
            if ((uint *)plVar19[2] == param_2) goto LAB_10942eaf4;
          }
          else {
            if (uVar12 <= uVar22) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar22 / uVar12;
              }
              uVar22 = uVar22 - uVar5 * uVar12;
            }
            if (uVar22 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  puVar6 = (uint *)&UNK_10f639994;
  FUN_109262df8();
  puVar9 = puVar6;
LAB_10942eb44:
  do {
    puVar8 = puVar9;
    uVar12 = (long)param_2 - (long)puVar8 >> 2;
    if ((long)uVar12 < 3) {
      if (uVar12 < 2) {
        return puVar6;
      }
      if (uVar12 == 2) {
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        uVar11 = *puVar8;
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
            *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
          return puVar6;
        }
        *puVar8 = param_2[-1];
        param_2[-1] = uVar11;
        return puVar6;
      }
    }
    else {
      if (uVar12 == 3) {
        uVar11 = *puVar8;
        uVar10 = puVar8[1];
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar17 + (long)(int)uVar10 * 4);
        uVar14 = param_2[-1];
        iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
        if (iVar13 <= *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
          if (iVar2 <= iVar13) {
            return puVar6;
          }
          puVar8[1] = uVar14;
          param_2[-1] = uVar10;
          uVar11 = *puVar8;
          if (*(int *)(lVar17 + (long)(int)puVar8[1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
            return puVar6;
          }
          *puVar8 = puVar8[1];
          puVar8[1] = uVar11;
          return puVar6;
        }
        if (iVar13 < iVar2) {
          *puVar8 = uVar14;
          param_2[-1] = uVar11;
          return puVar6;
        }
        *puVar8 = uVar10;
        puVar8[1] = uVar11;
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
            *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
          return puVar6;
        }
        puVar8[1] = param_2[-1];
        param_2[-1] = uVar11;
        return puVar6;
      }
      if (uVar12 == 4) {
        puVar21 = puVar8 + 1;
        uVar10 = *puVar21;
        puVar7 = puVar8 + 2;
        uVar14 = *puVar7;
        uVar11 = *puVar8;
        lVar24 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar24 + (long)(int)uVar10 * 4);
        lVar23 = (long)(int)uVar11;
        uVar18 = *(uint *)(lVar24 + (long)(int)uVar11 * 4);
        puVar9 = (uint *)(ulong)uVar18;
        lVar17 = (long)(int)uVar14;
        iVar2 = *(int *)(lVar24 + (long)(int)uVar14 * 4);
        puVar6 = puVar8;
        if ((int)uVar18 < iVar13) {
          puVar20 = puVar7;
          uVar18 = uVar11;
          if (iVar2 <= iVar13) {
            *puVar8 = uVar10;
            puVar8[1] = uVar11;
            uVar10 = *(uint *)(lVar24 + lVar17 * 4);
            puVar9 = (uint *)(ulong)uVar10;
            puVar6 = puVar21;
            if ((int)uVar10 <= *(int *)(lVar24 + lVar23 * 4)) {
              uVar11 = param_2[-1];
              uVar18 = uVar14;
              if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + lVar17 * 4)) {
                return puVar9;
              }
              goto LAB_10942f3d8;
            }
          }
LAB_10942f3a0:
          *puVar6 = uVar14;
          *puVar20 = uVar11;
          uVar11 = param_2[-1];
          if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + lVar23 * 4)) {
            return puVar9;
          }
        }
        else {
          uVar18 = uVar14;
          if (iVar13 < iVar2) {
            *puVar21 = uVar14;
            *puVar7 = uVar10;
            uVar3 = *(uint *)(lVar24 + lVar17 * 4);
            puVar9 = (uint *)(ulong)uVar3;
            lVar25 = lVar23 * 4;
            lVar23 = (long)(int)uVar10;
            lVar17 = lVar23;
            puVar20 = puVar21;
            uVar18 = uVar10;
            if (*(int *)(lVar24 + lVar25) < (int)uVar3) goto LAB_10942f3a0;
          }
          uVar11 = param_2[-1];
          if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + lVar17 * 4)) {
            return puVar9;
          }
        }
LAB_10942f3d8:
        *puVar7 = uVar11;
        param_2[-1] = uVar18;
        uVar11 = *puVar7;
        uVar10 = *puVar21;
        if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + (long)(int)uVar10 * 4)) {
          return puVar9;
        }
        puVar8[1] = uVar11;
        puVar8[2] = uVar10;
        uVar10 = *puVar8;
        if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + (long)(int)uVar10 * 4)) {
          return puVar9;
        }
        *puVar8 = uVar11;
        puVar8[1] = uVar10;
        return puVar9;
      }
      if (uVar12 == 5) {
        puVar6 = puVar8 + 1;
        puVar9 = puVar8 + 2;
        puVar21 = puVar8 + 3;
        uVar11 = *puVar6;
        uVar10 = *puVar8;
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
        uVar14 = *puVar9;
        iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
        if (*(int *)(lVar17 + (long)(int)uVar10 * 4) < iVar13) {
          if (iVar13 < iVar2) {
            *puVar8 = uVar14;
          }
          else {
            *puVar8 = uVar11;
            *puVar6 = uVar10;
            uVar14 = *puVar9;
            if (*(int *)(lVar17 + (long)(int)uVar14 * 4) <= *(int *)(lVar17 + (long)(int)uVar10 * 4)
               ) {
LAB_10942f528:
              uVar18 = *puVar21;
              if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <=
                  *(int *)(lVar17 + (long)(int)uVar14 * 4)) goto LAB_10942f5a8;
              goto LAB_10942f560;
            }
            *puVar6 = uVar14;
          }
          *puVar9 = uVar10;
          uVar18 = *puVar21;
          uVar14 = uVar10;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar10 * 4))
          goto LAB_10942f5a8;
        }
        else if (iVar13 < iVar2) {
          *puVar6 = uVar14;
          *puVar9 = uVar11;
          uVar10 = *puVar8;
          if (*(int *)(lVar17 + (long)(int)uVar10 * 4) < *(int *)(lVar17 + (long)(int)*puVar6 * 4))
          {
            *puVar8 = *puVar6;
            *puVar6 = uVar10;
            uVar14 = *puVar9;
            goto LAB_10942f528;
          }
          uVar18 = *puVar21;
          uVar14 = uVar11;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar11 * 4))
          goto LAB_10942f5a8;
        }
        else {
          uVar18 = *puVar21;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar14 * 4))
          goto LAB_10942f5a8;
        }
LAB_10942f560:
        *puVar9 = uVar18;
        *puVar21 = uVar14;
        uVar11 = *puVar6;
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar9 * 4)) {
          *puVar6 = *puVar9;
          *puVar9 = uVar11;
          uVar11 = *puVar8;
          if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar6 * 4))
          {
            *puVar8 = *puVar6;
            *puVar6 = uVar11;
          }
        }
LAB_10942f5a8:
        uVar11 = param_2[-1];
        uVar10 = *puVar21;
        if (*(int *)(lVar17 + (long)(int)uVar10 * 4) < *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
          *puVar21 = uVar11;
          param_2[-1] = uVar10;
          uVar11 = *puVar9;
          if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar21 * 4))
          {
            *puVar9 = *puVar21;
            *puVar21 = uVar11;
            uVar11 = *puVar6;
            if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar9 * 4)
               ) {
              *puVar6 = *puVar9;
              *puVar9 = uVar11;
              uVar11 = *puVar8;
              if (*(int *)(lVar17 + (long)(int)uVar11 * 4) <
                  *(int *)(lVar17 + (long)(int)*puVar6 * 4)) {
                *puVar8 = *puVar6;
                *puVar6 = uVar11;
              }
            }
          }
        }
        return puVar8;
      }
    }
    if ((long)uVar12 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar8 == param_2) {
          return puVar6;
        }
        if (puVar8 + 1 == param_2) {
          return puVar6;
        }
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        puVar9 = puVar8 + 1;
        do {
          puVar21 = puVar9;
          uVar11 = puVar8[1];
          lVar24 = (long)(int)*puVar8;
          puVar9 = puVar21;
          if (*(int *)(lVar17 + lVar24 * 4) < *(int *)(lVar17 + (long)(int)uVar11 * 4)) {
            do {
              *puVar9 = (uint)lVar24;
              lVar24 = (long)(int)puVar9[-2];
              puVar9 = puVar9 + -1;
            } while (*(int *)(lVar17 + lVar24 * 4) < *(int *)(lVar17 + (long)(int)uVar11 * 4));
            *puVar9 = uVar11;
          }
          puVar9 = puVar21 + 1;
          puVar8 = puVar21;
        } while (puVar21 + 1 != param_2);
        return puVar6;
      }
      if (puVar8 == param_2) {
        return puVar6;
      }
      if (puVar8 + 1 == param_2) {
        return puVar6;
      }
      lVar24 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
      lVar17 = 4;
      puVar9 = puVar8;
      puVar21 = puVar8 + 1;
      do {
        uVar11 = puVar9[1];
        lVar25 = (long)(int)*puVar9;
        lVar23 = lVar17;
        if (*(int *)(lVar24 + lVar25 * 4) < *(int *)(lVar24 + (long)(int)uVar11 * 4)) {
          do {
            *(int *)((long)puVar8 + lVar23) = (int)lVar25;
            lVar4 = lVar23 + -4;
            puVar9 = puVar8;
            if (lVar4 == 0) goto LAB_10942f1ec;
            lVar25 = (long)*(int *)((long)puVar8 + lVar23 + -8);
            lVar23 = lVar4;
          } while (*(int *)(lVar24 + lVar25 * 4) < *(int *)(lVar24 + (long)(int)uVar11 * 4));
          puVar9 = (uint *)((long)puVar8 + lVar4);
LAB_10942f1ec:
          *puVar9 = uVar11;
        }
        puVar7 = puVar21 + 1;
        lVar17 = lVar17 + 4;
        puVar9 = puVar21;
        puVar21 = puVar7;
        if (puVar7 == param_2) {
          return puVar6;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar8 == param_2) {
        return puVar6;
      }
      if (puVar8 == param_2) {
        return param_2;
      }
      lVar17 = (long)param_2 - (long)puVar8 >> 2;
      if (lVar17 < 2) goto LAB_10942fd00;
      uVar15 = lVar17 - 2U >> 1;
      plVar19 = (long *)*param_3;
      lVar24 = param_3[1];
      uVar12 = uVar15;
      break;
    }
    puVar21 = puVar8 + (uVar12 >> 1);
    lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
    uVar11 = param_2[-1];
    iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
    puVar9 = puVar8;
    if (uVar12 < 0x81) {
      uVar14 = *puVar8;
      uVar10 = *puVar21;
      iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar10 * 4) < iVar2) {
        if (iVar2 < iVar13) {
          *puVar21 = uVar11;
        }
        else {
          *puVar21 = uVar14;
          *puVar8 = uVar10;
          if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar10 * 4)) goto LAB_10942ed28;
          *puVar8 = param_2[-1];
        }
        param_2[-1] = uVar10;
      }
      else if (iVar2 < iVar13) {
        *puVar8 = uVar11;
        param_2[-1] = uVar14;
        uVar11 = *puVar21;
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar8 * 4)) {
          *puVar21 = *puVar8;
          *puVar8 = uVar11;
          goto joined_r0x00010942ee78;
        }
      }
LAB_10942ed28:
      uVar11 = *puVar8;
      if ((param_5 & 1) != 0) goto LAB_10942ed34;
LAB_10942ee7c:
      iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
      if (*(int *)(lVar17 + (long)(int)puVar8[-1] * 4) <= iVar13) {
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) < iVar13) {
          do {
            puVar9 = puVar9 + 1;
          } while (iVar13 <= *(int *)(lVar17 + (long)(int)*puVar9 * 4));
        }
        else {
          do {
            puVar9 = puVar9 + 1;
            if (param_2 <= puVar9) break;
          } while (iVar13 <= *(int *)(lVar17 + (long)(int)*puVar9 * 4));
        }
        puVar21 = param_2;
        if (puVar9 < param_2) {
          do {
            puVar21 = puVar21 + -1;
          } while (*(int *)(lVar17 + (long)(int)*puVar21 * 4) < iVar13);
        }
        if (puVar9 < puVar21) {
          uVar12 = (ulong)*puVar9;
          uVar15 = (ulong)*puVar21;
          do {
            *puVar9 = (uint)uVar15;
            *puVar21 = (uint)uVar12;
            iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
            do {
              puVar9 = puVar9 + 1;
              uVar12 = (ulong)(int)*puVar9;
            } while (iVar13 <= *(int *)(lVar17 + uVar12 * 4));
            do {
              puVar21 = puVar21 + -1;
              uVar15 = (ulong)(int)*puVar21;
            } while (*(int *)(lVar17 + uVar15 * 4) < iVar13);
          } while (puVar9 < puVar21);
        }
        puVar21 = puVar9 + -1;
        if (puVar21 != puVar8) {
          *puVar8 = *puVar21;
        }
        param_5 = 0;
        *puVar21 = uVar11;
        param_4 = param_4 + -1;
        goto LAB_10942eb44;
      }
    }
    else {
      uVar14 = *puVar21;
      uVar10 = *puVar8;
      iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar10 * 4) < iVar2) {
        if (iVar2 < iVar13) {
          *puVar8 = uVar11;
        }
        else {
          *puVar8 = uVar14;
          *puVar21 = uVar10;
          if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar10 * 4)) goto LAB_10942ec9c;
          *puVar21 = param_2[-1];
        }
        param_2[-1] = uVar10;
      }
      else if (iVar2 < iVar13) {
        *puVar21 = uVar11;
        param_2[-1] = uVar14;
        uVar11 = *puVar8;
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar21 * 4)) {
          *puVar8 = *puVar21;
          *puVar21 = uVar11;
        }
      }
LAB_10942ec9c:
      puVar7 = puVar21 + -1;
      uVar10 = *puVar7;
      uVar11 = puVar8[1];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar10 * 4);
      uVar14 = param_2[-2];
      iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < iVar13) {
        if (iVar13 < iVar2) {
          puVar8[1] = uVar14;
        }
        else {
          puVar8[1] = uVar10;
          *puVar7 = uVar11;
          if (*(int *)(lVar17 + (long)(int)param_2[-2] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar11 * 4)) goto LAB_10942ed60;
          *puVar7 = param_2[-2];
        }
        param_2[-2] = uVar11;
      }
      else if (iVar13 < iVar2) {
        *puVar7 = uVar14;
        param_2[-2] = uVar10;
        uVar11 = puVar8[1];
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar7 * 4)) {
          puVar8[1] = *puVar7;
          *puVar7 = uVar11;
        }
      }
LAB_10942ed60:
      puVar20 = puVar21 + 1;
      uVar10 = *puVar20;
      uVar11 = puVar8[2];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar10 * 4);
      uVar14 = param_2[-3];
      iVar2 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < iVar13) {
        if (iVar13 < iVar2) {
          puVar8[2] = uVar14;
        }
        else {
          puVar8[2] = uVar10;
          *puVar20 = uVar11;
          if (*(int *)(lVar17 + (long)(int)param_2[-3] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar11 * 4)) goto LAB_10942edec;
          *puVar20 = param_2[-3];
        }
        param_2[-3] = uVar11;
      }
      else if (iVar13 < iVar2) {
        *puVar20 = uVar14;
        param_2[-3] = uVar10;
        uVar11 = puVar8[2];
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar20 * 4)) {
          puVar8[2] = *puVar20;
          *puVar20 = uVar11;
        }
      }
LAB_10942edec:
      uVar11 = *puVar21;
      uVar10 = puVar21[1];
      uVar14 = puVar21[-1];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
      iVar2 = *(int *)(lVar17 + (long)(int)uVar10 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar14 * 4) < iVar13) {
        uVar18 = uVar11;
        if (iVar2 <= iVar13) {
          puVar21[-1] = uVar11;
          *puVar21 = uVar14;
          puVar7 = puVar21;
          uVar11 = uVar14;
          uVar18 = uVar10;
          if (*(int *)(lVar17 + (long)(int)uVar10 * 4) <= *(int *)(lVar17 + (long)(int)uVar14 * 4))
          goto LAB_10942ee64;
        }
LAB_10942ee5c:
        *puVar7 = uVar10;
        *puVar20 = uVar14;
        uVar11 = uVar18;
      }
      else if (iVar13 < iVar2) {
        *puVar21 = uVar10;
        puVar21[1] = uVar11;
        puVar20 = puVar21;
        uVar11 = uVar10;
        uVar18 = uVar14;
        if (*(int *)(lVar17 + (long)(int)uVar14 * 4) < *(int *)(lVar17 + (long)(int)uVar10 * 4))
        goto LAB_10942ee5c;
      }
LAB_10942ee64:
      uVar10 = *puVar8;
      *puVar8 = uVar11;
      *puVar21 = uVar10;
      uVar11 = *puVar8;
joined_r0x00010942ee78:
      if ((param_5 & 1) == 0) goto LAB_10942ee7c;
LAB_10942ed34:
      iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
    }
    param_4 = param_4 + -1;
    lVar24 = 0;
    do {
      lVar23 = (long)*(int *)((long)puVar8 + lVar24 + 4);
      lVar24 = lVar24 + 4;
    } while (iVar13 < *(int *)(lVar17 + lVar23 * 4));
    puVar6 = (uint *)((long)puVar8 + lVar24);
    puVar9 = param_2;
    if (lVar24 == 4) {
      do {
        if (puVar9 <= puVar6) break;
        puVar9 = puVar9 + -1;
      } while (*(int *)(lVar17 + (long)(int)*puVar9 * 4) <= iVar13);
    }
    else {
      do {
        puVar9 = puVar9 + -1;
      } while (*(int *)(lVar17 + (long)(int)*puVar9 * 4) <= iVar13);
    }
    if (puVar6 < puVar9) {
      uVar12 = (ulong)*puVar9;
      puVar7 = puVar6;
      puVar20 = puVar9;
      do {
        *puVar7 = (uint)uVar12;
        *puVar20 = (uint)lVar23;
        iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
        do {
          puVar21 = puVar7;
          puVar7 = puVar21 + 1;
          lVar23 = (long)(int)*puVar7;
        } while (iVar13 < *(int *)(lVar17 + lVar23 * 4));
        do {
          puVar20 = puVar20 + -1;
          uVar12 = (ulong)(int)*puVar20;
        } while (*(int *)(lVar17 + uVar12 * 4) <= iVar13);
      } while (puVar7 < puVar20);
    }
    else {
      puVar21 = puVar6 + -1;
    }
    if (puVar21 != puVar8) {
      *puVar8 = *puVar21;
    }
    *puVar21 = uVar11;
    if (puVar6 < puVar9) {
LAB_10942ef98:
      FUN_10942eb0c(puVar8,puVar21,param_3,param_4,(uint)param_5 & 1);
      param_5 = 0;
      puVar6 = puVar8;
      puVar9 = puVar21 + 1;
    }
    else {
      puVar7 = puVar8;
      FUN_10942f62c(puVar8,puVar21,param_3);
      puVar9 = puVar21 + 1;
      puVar6 = puVar9;
      FUN_10942f62c(puVar9,param_2,param_3);
      if ((int)puVar6 == 0) {
        if (((ulong)puVar7 & 1) == 0) goto LAB_10942ef98;
      }
      else {
        puVar9 = puVar8;
        param_2 = puVar21;
        if (((ulong)puVar7 & 1) != 0) {
          return puVar6;
        }
      }
    }
  } while( true );
LAB_10942fa60:
  if ((long)uVar12 <= (long)uVar15) {
    uVar16 = uVar12 << 1 | 1;
    puVar6 = puVar8 + uVar16;
    uVar22 = uVar12 * 2 + 2;
    uVar11 = *puVar6;
    if ((long)uVar22 < lVar17) {
      uVar10 = puVar6[1];
      lVar23 = *(long *)(*plVar19 + lVar24 * 0x18);
      puVar9 = puVar6 + 1;
      if (*(int *)(lVar23 + (long)(int)uVar11 * 4) <= *(int *)(lVar23 + (long)(int)uVar10 * 4)) {
        uVar22 = uVar16;
        puVar9 = puVar6;
        uVar10 = uVar11;
      }
      uVar11 = uVar10;
      uVar10 = puVar8[uVar12];
      uVar16 = uVar22;
      puVar6 = puVar9;
      puVar9 = puVar8 + uVar12;
      if (*(int *)(lVar23 + (long)(int)uVar11 * 4) <= *(int *)(lVar23 + (long)(int)uVar10 * 4)) {
LAB_10942fb2c:
        do {
          while( true ) {
            puVar21 = puVar6;
            *puVar9 = uVar11;
            if ((long)uVar15 < (long)uVar16) goto LAB_10942fa54;
            uVar22 = uVar16 << 1 | 1;
            puVar7 = puVar8 + uVar22;
            uVar16 = uVar16 * 2 + 2;
            uVar11 = *puVar7;
            puVar9 = puVar21;
            if ((long)uVar16 < lVar17) break;
            uVar16 = uVar22;
            puVar6 = puVar7;
            if (*(int *)(lVar23 + (long)(int)uVar10 * 4) < *(int *)(lVar23 + (long)(int)uVar11 * 4))
            goto LAB_10942fa54;
          }
          uVar14 = puVar7[1];
          puVar6 = puVar7 + 1;
          if (*(int *)(lVar23 + (long)(int)uVar11 * 4) <= *(int *)(lVar23 + (long)(int)uVar14 * 4))
          {
            uVar16 = uVar22;
            puVar6 = puVar7;
            uVar14 = uVar11;
          }
          uVar11 = uVar14;
        } while (*(int *)(lVar23 + (long)(int)uVar11 * 4) <=
                 *(int *)(lVar23 + (long)(int)uVar10 * 4));
LAB_10942fa54:
        *puVar21 = uVar10;
      }
    }
    else {
      lVar23 = *(long *)(*plVar19 + lVar24 * 0x18);
      puVar9 = puVar8 + uVar12;
      uVar10 = *puVar9;
      if (*(int *)(lVar23 + (long)(int)uVar11 * 4) <= *(int *)(lVar23 + (long)(int)uVar10 * 4))
      goto LAB_10942fb2c;
    }
  }
  bVar1 = uVar12 == 0;
  uVar12 = uVar12 - 1;
  if (bVar1) {
LAB_10942fd00:
    puVar6 = param_2;
    if (1 < lVar17) {
      do {
        uVar11 = *puVar8;
        uVar15 = lVar17 - 2U >> 1;
        plVar19 = (long *)*param_3;
        lVar24 = param_3[1];
        uVar12 = 0;
        puVar9 = puVar8;
        do {
          while( true ) {
            puVar21 = puVar9 + uVar12 + 1;
            uVar10 = *puVar21;
            uVar16 = uVar12 << 1 | 1;
            uVar22 = uVar12 * 2 + 2;
            if ((long)uVar22 < lVar17) break;
            *puVar9 = uVar10;
            uVar12 = uVar16;
            puVar9 = puVar21;
            if ((long)uVar15 < (long)uVar16) goto LAB_10942fdac;
          }
          lVar23 = uVar12 + 2;
          uVar14 = puVar9[lVar23];
          lVar25 = *(long *)(*plVar19 + lVar24 * 0x18);
          uVar12 = uVar22;
          puVar7 = puVar9 + lVar23;
          if (*(int *)(lVar25 + (long)(int)uVar10 * 4) <= *(int *)(lVar25 + (long)(int)uVar14 * 4))
          {
            uVar12 = uVar16;
            puVar7 = puVar21;
            uVar14 = uVar10;
          }
          puVar21 = puVar7;
          *puVar9 = uVar14;
          puVar9 = puVar21;
        } while ((long)uVar12 <= (long)uVar15);
LAB_10942fdac:
        puVar6 = puVar6 + -1;
        if (puVar21 == puVar6) {
          *puVar21 = uVar11;
        }
        else {
          *puVar21 = *puVar6;
          *puVar6 = uVar11;
          lVar23 = (long)((long)puVar21 + (4 - (long)puVar8)) >> 2;
          if (1 < lVar23) {
            uVar12 = lVar23 - 2U >> 1;
            lVar23 = (long)(int)puVar8[uVar12];
            lVar24 = *(long *)(*plVar19 + lVar24 * 0x18);
            uVar11 = *puVar21;
            puVar9 = puVar8 + uVar12;
            if (*(int *)(lVar24 + (long)(int)uVar11 * 4) < *(int *)(lVar24 + lVar23 * 4)) {
              do {
                puVar7 = puVar9;
                *puVar21 = (uint)lVar23;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                lVar23 = (long)(int)puVar8[uVar12];
                puVar21 = puVar7;
                puVar9 = puVar8 + uVar12;
              } while (*(int *)(lVar24 + (long)(int)uVar11 * 4) < *(int *)(lVar24 + lVar23 * 4));
              *puVar7 = uVar11;
            }
          }
        }
        bVar1 = 2 < lVar17;
        lVar17 = lVar17 + -1;
      } while (bVar1);
    }
    return param_2;
  }
  goto LAB_10942fa60;
}



/* Entry: 10942eb0c; end: 10942f44b;  */

/* WARNING: Removing unreachable block (ram,0x00010942fb84) */
/* WARNING: Removing unreachable block (ram,0x00010942fbdc) */
/* WARNING: Removing unreachable block (ram,0x00010942fc04) */
/* WARNING: Removing unreachable block (ram,0x00010942fc1c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc4c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc5c) */
/* WARNING: Removing unreachable block (ram,0x00010942fc60) */
/* WARNING: Removing unreachable block (ram,0x00010942fc64) */
/* WARNING: Removing unreachable block (ram,0x00010942fc30) */
/* WARNING: Removing unreachable block (ram,0x00010942fc48) */
/* WARNING: Removing unreachable block (ram,0x00010942fc78) */
/* WARNING: Removing unreachable block (ram,0x00010942fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010942fc80) */
/* WARNING: Removing unreachable block (ram,0x00010942fc94) */
/* WARNING: Removing unreachable block (ram,0x00010942fc98) */
/* WARNING: Removing unreachable block (ram,0x00010942fc9c) */
/* WARNING: Removing unreachable block (ram,0x00010942fce4) */
/* WARNING: Removing unreachable block (ram,0x00010942fcfc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010942fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010942fba0) */
/* WARNING: Removing unreachable block (ram,0x00010942fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010942fbcc) */
/* WARNING: Removing unreachable block (ram,0x00010942fbac) */

uint * FUN_10942eb0c(uint *param_1,uint *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  
  puVar9 = param_1;
LAB_10942eb44:
  do {
    puVar7 = puVar9;
    uVar19 = (long)param_2 - (long)puVar7 >> 2;
    if ((long)uVar19 < 3) {
      if (uVar19 < 2) {
        return param_1;
      }
      if (uVar19 == 2) {
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        uVar12 = *puVar7;
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
            *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
          return param_1;
        }
        *puVar7 = param_2[-1];
        param_2[-1] = uVar12;
        return param_1;
      }
    }
    else {
      if (uVar19 == 3) {
        uVar12 = *puVar7;
        uVar11 = puVar7[1];
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
        uVar14 = param_2[-1];
        iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
        if (iVar13 <= *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
          if (iVar4 <= iVar13) {
            return param_1;
          }
          puVar7[1] = uVar14;
          param_2[-1] = uVar11;
          uVar12 = *puVar7;
          if (*(int *)(lVar17 + (long)(int)puVar7[1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
            return param_1;
          }
          *puVar7 = puVar7[1];
          puVar7[1] = uVar12;
          return param_1;
        }
        if (iVar13 < iVar4) {
          *puVar7 = uVar14;
          param_2[-1] = uVar12;
          return param_1;
        }
        *puVar7 = uVar11;
        puVar7[1] = uVar12;
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
            *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
          return param_1;
        }
        puVar7[1] = param_2[-1];
        param_2[-1] = uVar12;
        return param_1;
      }
      if (uVar19 == 4) {
        puVar15 = puVar7 + 1;
        uVar11 = *puVar15;
        puVar16 = puVar7 + 2;
        uVar14 = *puVar16;
        uVar12 = *puVar7;
        lVar23 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar23 + (long)(int)uVar11 * 4);
        lVar21 = (long)(int)uVar12;
        uVar18 = *(uint *)(lVar23 + (long)(int)uVar12 * 4);
        puVar8 = (uint *)(ulong)uVar18;
        lVar17 = (long)(int)uVar14;
        iVar4 = *(int *)(lVar23 + (long)(int)uVar14 * 4);
        puVar9 = puVar7;
        if ((int)uVar18 < iVar13) {
          puVar22 = puVar16;
          uVar18 = uVar12;
          if (iVar4 <= iVar13) {
            *puVar7 = uVar11;
            puVar7[1] = uVar12;
            uVar11 = *(uint *)(lVar23 + lVar17 * 4);
            puVar8 = (uint *)(ulong)uVar11;
            puVar9 = puVar15;
            if ((int)uVar11 <= *(int *)(lVar23 + lVar21 * 4)) {
              uVar12 = param_2[-1];
              uVar18 = uVar14;
              if (*(int *)(lVar23 + (long)(int)uVar12 * 4) <= *(int *)(lVar23 + lVar17 * 4)) {
                return puVar8;
              }
              goto LAB_10942f3d8;
            }
          }
LAB_10942f3a0:
          *puVar9 = uVar14;
          *puVar22 = uVar12;
          uVar12 = param_2[-1];
          if (*(int *)(lVar23 + (long)(int)uVar12 * 4) <= *(int *)(lVar23 + lVar21 * 4)) {
            return puVar8;
          }
        }
        else {
          uVar18 = uVar14;
          if (iVar13 < iVar4) {
            *puVar15 = uVar14;
            *puVar16 = uVar11;
            uVar5 = *(uint *)(lVar23 + lVar17 * 4);
            puVar8 = (uint *)(ulong)uVar5;
            lVar24 = lVar21 * 4;
            lVar21 = (long)(int)uVar11;
            lVar17 = lVar21;
            puVar22 = puVar15;
            uVar18 = uVar11;
            if (*(int *)(lVar23 + lVar24) < (int)uVar5) goto LAB_10942f3a0;
          }
          uVar12 = param_2[-1];
          if (*(int *)(lVar23 + (long)(int)uVar12 * 4) <= *(int *)(lVar23 + lVar17 * 4)) {
            return puVar8;
          }
        }
LAB_10942f3d8:
        *puVar16 = uVar12;
        param_2[-1] = uVar18;
        uVar12 = *puVar16;
        uVar11 = *puVar15;
        if (*(int *)(lVar23 + (long)(int)uVar12 * 4) <= *(int *)(lVar23 + (long)(int)uVar11 * 4)) {
          return puVar8;
        }
        puVar7[1] = uVar12;
        puVar7[2] = uVar11;
        uVar11 = *puVar7;
        if (*(int *)(lVar23 + (long)(int)uVar12 * 4) <= *(int *)(lVar23 + (long)(int)uVar11 * 4)) {
          return puVar8;
        }
        *puVar7 = uVar12;
        puVar7[1] = uVar11;
        return puVar8;
      }
      if (uVar19 == 5) {
        puVar9 = puVar7 + 1;
        puVar8 = puVar7 + 2;
        puVar15 = puVar7 + 3;
        uVar12 = *puVar9;
        uVar11 = *puVar7;
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
        uVar14 = *puVar8;
        iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < iVar13) {
          if (iVar13 < iVar4) {
            *puVar7 = uVar14;
          }
          else {
            *puVar7 = uVar12;
            *puVar9 = uVar11;
            uVar14 = *puVar8;
            if (*(int *)(lVar17 + (long)(int)uVar14 * 4) <= *(int *)(lVar17 + (long)(int)uVar11 * 4)
               ) {
LAB_10942f528:
              uVar18 = *puVar15;
              if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <=
                  *(int *)(lVar17 + (long)(int)uVar14 * 4)) goto LAB_10942f5a8;
              goto LAB_10942f560;
            }
            *puVar9 = uVar14;
          }
          *puVar8 = uVar11;
          uVar18 = *puVar15;
          uVar14 = uVar11;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar11 * 4))
          goto LAB_10942f5a8;
        }
        else if (iVar13 < iVar4) {
          *puVar9 = uVar14;
          *puVar8 = uVar12;
          uVar11 = *puVar7;
          if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)*puVar9 * 4))
          {
            *puVar7 = *puVar9;
            *puVar9 = uVar11;
            uVar14 = *puVar8;
            goto LAB_10942f528;
          }
          uVar18 = *puVar15;
          uVar14 = uVar12;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar12 * 4))
          goto LAB_10942f5a8;
        }
        else {
          uVar18 = *puVar15;
          if (*(int *)(lVar17 + (long)(int)uVar18 * 4) <= *(int *)(lVar17 + (long)(int)uVar14 * 4))
          goto LAB_10942f5a8;
        }
LAB_10942f560:
        *puVar8 = uVar18;
        *puVar15 = uVar14;
        uVar12 = *puVar9;
        if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar8 * 4)) {
          *puVar9 = *puVar8;
          *puVar8 = uVar12;
          uVar12 = *puVar7;
          if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar9 * 4))
          {
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
          }
        }
LAB_10942f5a8:
        uVar12 = param_2[-1];
        uVar11 = *puVar15;
        if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
          *puVar15 = uVar12;
          param_2[-1] = uVar11;
          uVar12 = *puVar8;
          if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar15 * 4))
          {
            *puVar8 = *puVar15;
            *puVar15 = uVar12;
            uVar12 = *puVar9;
            if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar8 * 4)
               ) {
              *puVar9 = *puVar8;
              *puVar8 = uVar12;
              uVar12 = *puVar7;
              if (*(int *)(lVar17 + (long)(int)uVar12 * 4) <
                  *(int *)(lVar17 + (long)(int)*puVar9 * 4)) {
                *puVar7 = *puVar9;
                *puVar9 = uVar12;
              }
            }
          }
        }
        return puVar7;
      }
    }
    if ((long)uVar19 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar7 == param_2) {
          return param_1;
        }
        if (puVar7 + 1 == param_2) {
          return param_1;
        }
        lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
        puVar9 = puVar7 + 1;
        do {
          puVar8 = puVar9;
          uVar12 = puVar7[1];
          lVar23 = (long)(int)*puVar7;
          puVar9 = puVar8;
          if (*(int *)(lVar17 + lVar23 * 4) < *(int *)(lVar17 + (long)(int)uVar12 * 4)) {
            do {
              *puVar9 = (uint)lVar23;
              lVar23 = (long)(int)puVar9[-2];
              puVar9 = puVar9 + -1;
            } while (*(int *)(lVar17 + lVar23 * 4) < *(int *)(lVar17 + (long)(int)uVar12 * 4));
            *puVar9 = uVar12;
          }
          puVar9 = puVar8 + 1;
          puVar7 = puVar8;
        } while (puVar8 + 1 != param_2);
        return param_1;
      }
      if (puVar7 == param_2) {
        return param_1;
      }
      if (puVar7 + 1 == param_2) {
        return param_1;
      }
      lVar23 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
      lVar17 = 4;
      puVar9 = puVar7;
      puVar8 = puVar7 + 1;
      do {
        uVar12 = puVar9[1];
        lVar24 = (long)(int)*puVar9;
        lVar21 = lVar17;
        if (*(int *)(lVar23 + lVar24 * 4) < *(int *)(lVar23 + (long)(int)uVar12 * 4)) {
          do {
            *(int *)((long)puVar7 + lVar21) = (int)lVar24;
            lVar6 = lVar21 + -4;
            puVar9 = puVar7;
            if (lVar6 == 0) goto LAB_10942f1ec;
            lVar24 = (long)*(int *)((long)puVar7 + lVar21 + -8);
            lVar21 = lVar6;
          } while (*(int *)(lVar23 + lVar24 * 4) < *(int *)(lVar23 + (long)(int)uVar12 * 4));
          puVar9 = (uint *)((long)puVar7 + lVar6);
LAB_10942f1ec:
          *puVar9 = uVar12;
        }
        puVar15 = puVar8 + 1;
        lVar17 = lVar17 + 4;
        puVar9 = puVar8;
        puVar8 = puVar15;
        if (puVar15 == param_2) {
          return param_1;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar7 == param_2) {
        return param_1;
      }
      if (puVar7 == param_2) {
        return param_2;
      }
      lVar17 = (long)param_2 - (long)puVar7 >> 2;
      if (lVar17 < 2) goto LAB_10942fd00;
      uVar20 = lVar17 - 2U >> 1;
      plVar3 = (long *)*param_3;
      lVar23 = param_3[1];
      uVar19 = uVar20;
      break;
    }
    puVar8 = puVar7 + (uVar19 >> 1);
    lVar17 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
    uVar12 = param_2[-1];
    iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
    puVar9 = puVar7;
    if (uVar19 < 0x81) {
      uVar14 = *puVar7;
      uVar11 = *puVar8;
      iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < iVar4) {
        if (iVar4 < iVar13) {
          *puVar8 = uVar12;
        }
        else {
          *puVar8 = uVar14;
          *puVar7 = uVar11;
          if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar11 * 4)) goto LAB_10942ed28;
          *puVar7 = param_2[-1];
        }
        param_2[-1] = uVar11;
      }
      else if (iVar4 < iVar13) {
        *puVar7 = uVar12;
        param_2[-1] = uVar14;
        uVar12 = *puVar8;
        if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar7 * 4)) {
          *puVar8 = *puVar7;
          *puVar7 = uVar12;
          goto joined_r0x00010942ee78;
        }
      }
LAB_10942ed28:
      uVar12 = *puVar7;
      if ((param_5 & 1) != 0) goto LAB_10942ed34;
LAB_10942ee7c:
      iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
      if (*(int *)(lVar17 + (long)(int)puVar7[-1] * 4) <= iVar13) {
        if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) < iVar13) {
          do {
            puVar9 = puVar9 + 1;
          } while (iVar13 <= *(int *)(lVar17 + (long)(int)*puVar9 * 4));
        }
        else {
          do {
            puVar9 = puVar9 + 1;
            if (param_2 <= puVar9) break;
          } while (iVar13 <= *(int *)(lVar17 + (long)(int)*puVar9 * 4));
        }
        puVar8 = param_2;
        if (puVar9 < param_2) {
          do {
            puVar8 = puVar8 + -1;
          } while (*(int *)(lVar17 + (long)(int)*puVar8 * 4) < iVar13);
        }
        if (puVar9 < puVar8) {
          uVar19 = (ulong)*puVar9;
          uVar20 = (ulong)*puVar8;
          do {
            *puVar9 = (uint)uVar20;
            *puVar8 = (uint)uVar19;
            iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
            do {
              puVar9 = puVar9 + 1;
              uVar19 = (ulong)(int)*puVar9;
            } while (iVar13 <= *(int *)(lVar17 + uVar19 * 4));
            do {
              puVar8 = puVar8 + -1;
              uVar20 = (ulong)(int)*puVar8;
            } while (*(int *)(lVar17 + uVar20 * 4) < iVar13);
          } while (puVar9 < puVar8);
        }
        puVar8 = puVar9 + -1;
        if (puVar8 != puVar7) {
          *puVar7 = *puVar8;
        }
        param_5 = 0;
        *puVar8 = uVar12;
        param_4 = param_4 + -1;
        goto LAB_10942eb44;
      }
    }
    else {
      uVar14 = *puVar8;
      uVar11 = *puVar7;
      iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar11 * 4) < iVar4) {
        if (iVar4 < iVar13) {
          *puVar7 = uVar12;
        }
        else {
          *puVar7 = uVar14;
          *puVar8 = uVar11;
          if (*(int *)(lVar17 + (long)(int)param_2[-1] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar11 * 4)) goto LAB_10942ec9c;
          *puVar8 = param_2[-1];
        }
        param_2[-1] = uVar11;
      }
      else if (iVar4 < iVar13) {
        *puVar8 = uVar12;
        param_2[-1] = uVar14;
        uVar12 = *puVar7;
        if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar8 * 4)) {
          *puVar7 = *puVar8;
          *puVar8 = uVar12;
        }
      }
LAB_10942ec9c:
      puVar15 = puVar8 + -1;
      uVar11 = *puVar15;
      uVar12 = puVar7[1];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
      uVar14 = param_2[-2];
      iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < iVar13) {
        if (iVar13 < iVar4) {
          puVar7[1] = uVar14;
        }
        else {
          puVar7[1] = uVar11;
          *puVar15 = uVar12;
          if (*(int *)(lVar17 + (long)(int)param_2[-2] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar12 * 4)) goto LAB_10942ed60;
          *puVar15 = param_2[-2];
        }
        param_2[-2] = uVar12;
      }
      else if (iVar13 < iVar4) {
        *puVar15 = uVar14;
        param_2[-2] = uVar11;
        uVar12 = puVar7[1];
        if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar15 * 4)) {
          puVar7[1] = *puVar15;
          *puVar15 = uVar12;
        }
      }
LAB_10942ed60:
      puVar16 = puVar8 + 1;
      uVar11 = *puVar16;
      uVar12 = puVar7[2];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
      uVar14 = param_2[-3];
      iVar4 = *(int *)(lVar17 + (long)(int)uVar14 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < iVar13) {
        if (iVar13 < iVar4) {
          puVar7[2] = uVar14;
        }
        else {
          puVar7[2] = uVar11;
          *puVar16 = uVar12;
          if (*(int *)(lVar17 + (long)(int)param_2[-3] * 4) <=
              *(int *)(lVar17 + (long)(int)uVar12 * 4)) goto LAB_10942edec;
          *puVar16 = param_2[-3];
        }
        param_2[-3] = uVar12;
      }
      else if (iVar13 < iVar4) {
        *puVar16 = uVar14;
        param_2[-3] = uVar11;
        uVar12 = puVar7[2];
        if (*(int *)(lVar17 + (long)(int)uVar12 * 4) < *(int *)(lVar17 + (long)(int)*puVar16 * 4)) {
          puVar7[2] = *puVar16;
          *puVar16 = uVar12;
        }
      }
LAB_10942edec:
      uVar12 = *puVar8;
      uVar11 = puVar8[1];
      uVar14 = puVar8[-1];
      iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
      iVar4 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
      if (*(int *)(lVar17 + (long)(int)uVar14 * 4) < iVar13) {
        uVar18 = uVar12;
        if (iVar4 <= iVar13) {
          puVar8[-1] = uVar12;
          *puVar8 = uVar14;
          puVar15 = puVar8;
          uVar12 = uVar14;
          uVar18 = uVar11;
          if (*(int *)(lVar17 + (long)(int)uVar11 * 4) <= *(int *)(lVar17 + (long)(int)uVar14 * 4))
          goto LAB_10942ee64;
        }
LAB_10942ee5c:
        *puVar15 = uVar11;
        *puVar16 = uVar14;
        uVar12 = uVar18;
      }
      else if (iVar13 < iVar4) {
        *puVar8 = uVar11;
        puVar8[1] = uVar12;
        puVar16 = puVar8;
        uVar12 = uVar11;
        uVar18 = uVar14;
        if (*(int *)(lVar17 + (long)(int)uVar14 * 4) < *(int *)(lVar17 + (long)(int)uVar11 * 4))
        goto LAB_10942ee5c;
      }
LAB_10942ee64:
      uVar11 = *puVar7;
      *puVar7 = uVar12;
      *puVar8 = uVar11;
      uVar12 = *puVar7;
joined_r0x00010942ee78:
      if ((param_5 & 1) == 0) goto LAB_10942ee7c;
LAB_10942ed34:
      iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
    }
    param_4 = param_4 + -1;
    lVar23 = 0;
    do {
      lVar21 = (long)*(int *)((long)puVar7 + lVar23 + 4);
      lVar23 = lVar23 + 4;
    } while (iVar13 < *(int *)(lVar17 + lVar21 * 4));
    puVar9 = (uint *)((long)puVar7 + lVar23);
    puVar8 = param_2;
    if (lVar23 == 4) {
      do {
        if (puVar8 <= puVar9) break;
        puVar8 = puVar8 + -1;
      } while (*(int *)(lVar17 + (long)(int)*puVar8 * 4) <= iVar13);
    }
    else {
      do {
        puVar8 = puVar8 + -1;
      } while (*(int *)(lVar17 + (long)(int)*puVar8 * 4) <= iVar13);
    }
    if (puVar9 < puVar8) {
      uVar19 = (ulong)*puVar8;
      puVar16 = puVar9;
      puVar22 = puVar8;
      do {
        *puVar16 = (uint)uVar19;
        *puVar22 = (uint)lVar21;
        iVar13 = *(int *)(lVar17 + (long)(int)uVar12 * 4);
        do {
          puVar15 = puVar16;
          puVar16 = puVar15 + 1;
          lVar21 = (long)(int)*puVar16;
        } while (iVar13 < *(int *)(lVar17 + lVar21 * 4));
        do {
          puVar22 = puVar22 + -1;
          uVar19 = (ulong)(int)*puVar22;
        } while (*(int *)(lVar17 + uVar19 * 4) <= iVar13);
      } while (puVar16 < puVar22);
    }
    else {
      puVar15 = puVar9 + -1;
    }
    if (puVar15 != puVar7) {
      *puVar7 = *puVar15;
    }
    *puVar15 = uVar12;
    if (puVar9 < puVar8) {
LAB_10942ef98:
      FUN_10942eb0c(puVar7,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
      param_1 = puVar7;
      puVar9 = puVar15 + 1;
    }
    else {
      puVar8 = puVar7;
      FUN_10942f62c(puVar7,puVar15,param_3);
      puVar9 = puVar15 + 1;
      param_1 = puVar9;
      FUN_10942f62c(puVar9,param_2,param_3);
      if ((int)param_1 == 0) {
        if (((ulong)puVar8 & 1) == 0) goto LAB_10942ef98;
      }
      else {
        puVar9 = puVar7;
        param_2 = puVar15;
        if (((ulong)puVar8 & 1) != 0) {
          return param_1;
        }
      }
    }
  } while( true );
LAB_10942fa60:
  if ((long)uVar19 <= (long)uVar20) {
    uVar10 = uVar19 << 1 | 1;
    puVar9 = puVar7 + uVar10;
    uVar1 = uVar19 * 2 + 2;
    uVar12 = *puVar9;
    if ((long)uVar1 < lVar17) {
      uVar11 = puVar9[1];
      lVar21 = *(long *)(*plVar3 + lVar23 * 0x18);
      puVar8 = puVar9 + 1;
      if (*(int *)(lVar21 + (long)(int)uVar12 * 4) <= *(int *)(lVar21 + (long)(int)uVar11 * 4)) {
        uVar1 = uVar10;
        puVar8 = puVar9;
        uVar11 = uVar12;
      }
      uVar12 = uVar11;
      uVar11 = puVar7[uVar19];
      uVar10 = uVar1;
      puVar9 = puVar8;
      puVar8 = puVar7 + uVar19;
      if (*(int *)(lVar21 + (long)(int)uVar12 * 4) <= *(int *)(lVar21 + (long)(int)uVar11 * 4)) {
LAB_10942fb2c:
        do {
          while( true ) {
            puVar15 = puVar9;
            *puVar8 = uVar12;
            if ((long)uVar20 < (long)uVar10) goto LAB_10942fa54;
            uVar1 = uVar10 << 1 | 1;
            puVar16 = puVar7 + uVar1;
            uVar10 = uVar10 * 2 + 2;
            uVar12 = *puVar16;
            puVar8 = puVar15;
            if ((long)uVar10 < lVar17) break;
            uVar10 = uVar1;
            puVar9 = puVar16;
            if (*(int *)(lVar21 + (long)(int)uVar11 * 4) < *(int *)(lVar21 + (long)(int)uVar12 * 4))
            goto LAB_10942fa54;
          }
          uVar14 = puVar16[1];
          puVar9 = puVar16 + 1;
          if (*(int *)(lVar21 + (long)(int)uVar12 * 4) <= *(int *)(lVar21 + (long)(int)uVar14 * 4))
          {
            uVar10 = uVar1;
            puVar9 = puVar16;
            uVar14 = uVar12;
          }
          uVar12 = uVar14;
        } while (*(int *)(lVar21 + (long)(int)uVar12 * 4) <=
                 *(int *)(lVar21 + (long)(int)uVar11 * 4));
LAB_10942fa54:
        *puVar15 = uVar11;
      }
    }
    else {
      lVar21 = *(long *)(*plVar3 + lVar23 * 0x18);
      puVar8 = puVar7 + uVar19;
      uVar11 = *puVar8;
      if (*(int *)(lVar21 + (long)(int)uVar12 * 4) <= *(int *)(lVar21 + (long)(int)uVar11 * 4))
      goto LAB_10942fb2c;
    }
  }
  bVar2 = uVar19 == 0;
  uVar19 = uVar19 - 1;
  if (bVar2) {
LAB_10942fd00:
    puVar9 = param_2;
    if (1 < lVar17) {
      do {
        uVar12 = *puVar7;
        uVar20 = lVar17 - 2U >> 1;
        plVar3 = (long *)*param_3;
        lVar23 = param_3[1];
        uVar19 = 0;
        puVar8 = puVar7;
        do {
          while( true ) {
            puVar15 = puVar8 + uVar19 + 1;
            uVar11 = *puVar15;
            uVar10 = uVar19 << 1 | 1;
            uVar1 = uVar19 * 2 + 2;
            if ((long)uVar1 < lVar17) break;
            *puVar8 = uVar11;
            uVar19 = uVar10;
            puVar8 = puVar15;
            if ((long)uVar20 < (long)uVar10) goto LAB_10942fdac;
          }
          lVar21 = uVar19 + 2;
          uVar14 = puVar8[lVar21];
          lVar24 = *(long *)(*plVar3 + lVar23 * 0x18);
          uVar19 = uVar1;
          puVar16 = puVar8 + lVar21;
          if (*(int *)(lVar24 + (long)(int)uVar11 * 4) <= *(int *)(lVar24 + (long)(int)uVar14 * 4))
          {
            uVar19 = uVar10;
            puVar16 = puVar15;
            uVar14 = uVar11;
          }
          puVar15 = puVar16;
          *puVar8 = uVar14;
          puVar8 = puVar15;
        } while ((long)uVar19 <= (long)uVar20);
LAB_10942fdac:
        puVar9 = puVar9 + -1;
        if (puVar15 == puVar9) {
          *puVar15 = uVar12;
        }
        else {
          *puVar15 = *puVar9;
          *puVar9 = uVar12;
          lVar21 = (long)puVar15 + (4 - (long)puVar7) >> 2;
          if (1 < lVar21) {
            uVar19 = lVar21 - 2U >> 1;
            lVar21 = (long)(int)puVar7[uVar19];
            lVar23 = *(long *)(*plVar3 + lVar23 * 0x18);
            uVar12 = *puVar15;
            puVar8 = puVar7 + uVar19;
            if (*(int *)(lVar23 + (long)(int)uVar12 * 4) < *(int *)(lVar23 + lVar21 * 4)) {
              do {
                puVar16 = puVar8;
                *puVar15 = (uint)lVar21;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1 >> 1;
                lVar21 = (long)(int)puVar7[uVar19];
                puVar15 = puVar16;
                puVar8 = puVar7 + uVar19;
              } while (*(int *)(lVar23 + (long)(int)uVar12 * 4) < *(int *)(lVar23 + lVar21 * 4));
              *puVar16 = uVar12;
            }
          }
        }
        bVar2 = 2 < lVar17;
        lVar17 = lVar17 + -1;
      } while (bVar2);
    }
    return param_2;
  }
  goto LAB_10942fa60;
}



/* Entry: 10942f44c; end: 10942f62b;  */

void FUN_10942f44c(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                  undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  lVar4 = *(long *)(*(long *)*param_6 + param_6[1] * 0x18);
  iVar6 = *(int *)(lVar4 + (long)iVar1 * 4);
  iVar5 = *param_3;
  iVar3 = *(int *)(lVar4 + (long)iVar5 * 4);
  if (*(int *)(lVar4 + (long)iVar2 * 4) < iVar6) {
    if (iVar6 < iVar3) {
      *param_1 = iVar5;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar5 = *param_3;
      if (*(int *)(lVar4 + (long)iVar5 * 4) <= *(int *)(lVar4 + (long)iVar2 * 4)) {
LAB_10942f528:
        iVar6 = *param_4;
        if (*(int *)(lVar4 + (long)iVar6 * 4) <= *(int *)(lVar4 + (long)iVar5 * 4))
        goto LAB_10942f5a8;
        goto LAB_10942f560;
      }
      *param_2 = iVar5;
    }
    *param_3 = iVar2;
    iVar6 = *param_4;
    iVar5 = iVar2;
    if (*(int *)(lVar4 + (long)iVar6 * 4) <= *(int *)(lVar4 + (long)iVar2 * 4)) goto LAB_10942f5a8;
  }
  else if (iVar6 < iVar3) {
    *param_2 = iVar5;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(int *)(lVar4 + (long)iVar2 * 4) < *(int *)(lVar4 + (long)*param_2 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar2;
      iVar5 = *param_3;
      goto LAB_10942f528;
    }
    iVar6 = *param_4;
    iVar5 = iVar1;
    if (*(int *)(lVar4 + (long)iVar6 * 4) <= *(int *)(lVar4 + (long)iVar1 * 4)) goto LAB_10942f5a8;
  }
  else {
    iVar6 = *param_4;
    if (*(int *)(lVar4 + (long)iVar6 * 4) <= *(int *)(lVar4 + (long)iVar5 * 4)) goto LAB_10942f5a8;
  }
LAB_10942f560:
  *param_3 = iVar6;
  *param_4 = iVar5;
  iVar1 = *param_2;
  if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_3 * 4)) {
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_2 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
LAB_10942f5a8:
  iVar1 = *param_4;
  if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_5 * 4)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_4 * 4)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_3 * 4)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(int *)(lVar4 + (long)iVar1 * 4) < *(int *)(lVar4 + (long)*param_2 * 4)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10942f62c; end: 10942fa17;  */

bool FUN_10942f62c(int *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
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
      lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
      iVar8 = *param_1;
      if (*(int *)(lVar6 + (long)param_2[-1] * 4) <= *(int *)(lVar6 + (long)iVar8 * 4)) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = iVar8;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      iVar8 = *param_1;
      iVar1 = param_1[1];
      lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
      iVar11 = *(int *)(lVar6 + (long)iVar1 * 4);
      iVar2 = param_2[-1];
      iVar16 = *(int *)(lVar6 + (long)iVar2 * 4);
      if (iVar11 <= *(int *)(lVar6 + (long)iVar8 * 4)) {
        if (iVar16 <= iVar11) {
          return true;
        }
        param_1[1] = iVar2;
        param_2[-1] = iVar1;
        iVar8 = *param_1;
        if (*(int *)(lVar6 + (long)param_1[1] * 4) <= *(int *)(lVar6 + (long)iVar8 * 4)) {
          return true;
        }
        *param_1 = param_1[1];
        param_1[1] = iVar8;
        return true;
      }
      if (iVar11 < iVar16) {
        *param_1 = iVar2;
        param_2[-1] = iVar8;
        return true;
      }
      *param_1 = iVar1;
      param_1[1] = iVar8;
      if (*(int *)(lVar6 + (long)param_2[-1] * 4) <= *(int *)(lVar6 + (long)iVar8 * 4)) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = iVar8;
      return true;
    }
    if (uVar4 == 4) {
      piVar7 = param_1 + 1;
      iVar1 = *piVar7;
      piVar14 = param_1 + 2;
      iVar11 = *piVar14;
      iVar8 = *param_1;
      lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
      iVar16 = *(int *)(lVar6 + (long)iVar1 * 4);
      lVar10 = (long)iVar8;
      lVar13 = (long)iVar11;
      iVar2 = *(int *)(lVar6 + (long)iVar11 * 4);
      piVar5 = param_1;
      if (*(int *)(lVar6 + (long)iVar8 * 4) < iVar16) {
        piVar15 = piVar14;
        iVar9 = iVar8;
        if (iVar2 <= iVar16) {
          *param_1 = iVar1;
          param_1[1] = iVar8;
          piVar5 = piVar7;
          if (*(int *)(lVar6 + lVar13 * 4) <= *(int *)(lVar6 + lVar10 * 4)) {
            iVar8 = param_2[-1];
            iVar9 = iVar11;
            if (*(int *)(lVar6 + (long)iVar8 * 4) <= *(int *)(lVar6 + lVar13 * 4)) {
              return true;
            }
            goto LAB_10942f9a0;
          }
        }
LAB_10942f968:
        *piVar5 = iVar11;
        *piVar15 = iVar8;
        iVar8 = param_2[-1];
        if (*(int *)(lVar6 + (long)iVar8 * 4) <= *(int *)(lVar6 + lVar10 * 4)) {
          return true;
        }
      }
      else {
        lVar12 = lVar13;
        iVar9 = iVar11;
        if (iVar16 < iVar2) {
          *piVar7 = iVar11;
          *piVar14 = iVar1;
          lVar3 = lVar10 * 4;
          lVar10 = (long)iVar1;
          lVar12 = lVar10;
          piVar15 = piVar7;
          iVar9 = iVar1;
          if (*(int *)(lVar6 + lVar3) < *(int *)(lVar6 + lVar13 * 4)) goto LAB_10942f968;
        }
        iVar8 = param_2[-1];
        if (*(int *)(lVar6 + (long)iVar8 * 4) <= *(int *)(lVar6 + lVar12 * 4)) {
          return true;
        }
      }
LAB_10942f9a0:
      *piVar14 = iVar8;
      param_2[-1] = iVar9;
      iVar8 = *piVar14;
      iVar1 = *piVar7;
      if (*(int *)(lVar6 + (long)iVar8 * 4) <= *(int *)(lVar6 + (long)iVar1 * 4)) {
        return true;
      }
      param_1[1] = iVar8;
      param_1[2] = iVar1;
      iVar1 = *param_1;
      if (*(int *)(lVar6 + (long)iVar8 * 4) <= *(int *)(lVar6 + (long)iVar1 * 4)) {
        return true;
      }
      *param_1 = iVar8;
      param_1[1] = iVar1;
      return true;
    }
    if (uVar4 == 5) {
      FUN_10942f44c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  piVar5 = param_1 + 2;
  iVar1 = *piVar5;
  piVar14 = param_1 + 1;
  iVar2 = *piVar14;
  lVar6 = *(long *)(*(long *)*param_3 + param_3[1] * 0x18);
  iVar11 = *(int *)(lVar6 + (long)iVar2 * 4);
  iVar8 = *param_1;
  iVar16 = *(int *)(lVar6 + (long)iVar1 * 4);
  piVar7 = param_1;
  if (*(int *)(lVar6 + (long)iVar8 * 4) < iVar11) {
    piVar15 = piVar5;
    if (iVar16 <= iVar11) {
      *param_1 = iVar2;
      param_1[1] = iVar8;
      iVar11 = *(int *)(lVar6 + (long)iVar1 * 4);
      iVar16 = *(int *)(lVar6 + (long)iVar8 * 4);
      piVar7 = piVar14;
      piVar14 = piVar5;
      goto LAB_10942f83c;
    }
  }
  else {
    if (iVar16 <= iVar11) goto LAB_10942f84c;
    *piVar14 = iVar1;
    *piVar5 = iVar2;
    iVar11 = *(int *)(lVar6 + (long)iVar1 * 4);
    iVar16 = *(int *)(lVar6 + (long)iVar8 * 4);
LAB_10942f83c:
    piVar15 = piVar14;
    if (iVar11 <= iVar16) goto LAB_10942f84c;
  }
  *piVar7 = iVar1;
  *piVar15 = iVar8;
LAB_10942f84c:
  if (param_1 + 3 != param_2) {
    iVar8 = 0;
    lVar10 = 0xc;
    piVar7 = param_1 + 3;
    do {
      iVar1 = *piVar7;
      lVar12 = (long)*piVar5;
      lVar13 = lVar10;
      if (*(int *)(lVar6 + lVar12 * 4) < *(int *)(lVar6 + (long)iVar1 * 4)) {
        do {
          *(int *)((long)param_1 + lVar13) = (int)lVar12;
          lVar3 = lVar13 + -4;
          if (lVar3 == 0) {
            *param_1 = iVar1;
            goto joined_r0x00010942f870;
          }
          lVar12 = (long)*(int *)((long)param_1 + lVar13 + -8);
          lVar13 = lVar3;
        } while (*(int *)(lVar6 + lVar12 * 4) < *(int *)(lVar6 + (long)iVar1 * 4));
        *(int *)((long)param_1 + lVar3) = iVar1;
joined_r0x00010942f870:
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return piVar7 + 1 == param_2;
        }
      }
      piVar14 = piVar7 + 1;
      lVar10 = lVar10 + 4;
      piVar5 = piVar7;
      piVar7 = piVar14;
    } while (piVar14 != param_2);
  }
  return true;
}



/* Entry: 10942fa18; end: 10942fe53;  */

uint * FUN_10942fa18(uint *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  ulong uVar1;
  uint *puVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  
  if (param_1 != param_2) {
    lVar13 = (long)param_2 - (long)param_1 >> 2;
    if (1 < lVar13) {
      uVar14 = lVar13 - 2U >> 1;
      plVar4 = (long *)*param_4;
      lVar17 = param_4[1];
      uVar16 = uVar14;
      do {
        if ((long)uVar16 <= (long)uVar14) {
          uVar10 = uVar16 << 1 | 1;
          puVar15 = param_1 + uVar10;
          uVar1 = uVar16 * 2 + 2;
          uVar19 = *puVar15;
          if ((long)uVar1 < lVar13) {
            uVar11 = puVar15[1];
            lVar8 = *(long *)(*plVar4 + lVar17 * 0x18);
            puVar12 = puVar15 + 1;
            if (*(int *)(lVar8 + (long)(int)uVar19 * 4) <= *(int *)(lVar8 + (long)(int)uVar11 * 4))
            {
              uVar1 = uVar10;
              puVar12 = puVar15;
              uVar11 = uVar19;
            }
            uVar19 = uVar11;
            uVar11 = param_1[uVar16];
            uVar10 = uVar1;
            puVar15 = puVar12;
            puVar12 = param_1 + uVar16;
            if (*(int *)(lVar8 + (long)(int)uVar19 * 4) <= *(int *)(lVar8 + (long)(int)uVar11 * 4))
            {
LAB_10942fb2c:
              do {
                while( true ) {
                  puVar18 = puVar15;
                  *puVar12 = uVar19;
                  if ((long)uVar14 < (long)uVar10) goto LAB_10942fa54;
                  uVar1 = uVar10 << 1 | 1;
                  puVar9 = param_1 + uVar1;
                  uVar10 = uVar10 * 2 + 2;
                  uVar19 = *puVar9;
                  puVar12 = puVar18;
                  if ((long)uVar10 < lVar13) break;
                  uVar10 = uVar1;
                  puVar15 = puVar9;
                  if (*(int *)(lVar8 + (long)(int)uVar11 * 4) <
                      *(int *)(lVar8 + (long)(int)uVar19 * 4)) goto LAB_10942fa54;
                }
                uVar7 = puVar9[1];
                puVar15 = puVar9 + 1;
                if (*(int *)(lVar8 + (long)(int)uVar19 * 4) <=
                    *(int *)(lVar8 + (long)(int)uVar7 * 4)) {
                  uVar10 = uVar1;
                  puVar15 = puVar9;
                  uVar7 = uVar19;
                }
                uVar19 = uVar7;
              } while (*(int *)(lVar8 + (long)(int)uVar19 * 4) <=
                       *(int *)(lVar8 + (long)(int)uVar11 * 4));
LAB_10942fa54:
              *puVar18 = uVar11;
            }
          }
          else {
            lVar8 = *(long *)(*plVar4 + lVar17 * 0x18);
            puVar12 = param_1 + uVar16;
            uVar11 = *puVar12;
            if (*(int *)(lVar8 + (long)(int)uVar19 * 4) <= *(int *)(lVar8 + (long)(int)uVar11 * 4))
            goto LAB_10942fb2c;
          }
        }
        bVar3 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar3);
    }
    puVar15 = param_2;
    if (param_2 != param_3) {
      lVar17 = *(long *)(*(long *)*param_4 + param_4[1] * 0x18);
      if (lVar13 < 2) {
        uVar16 = (ulong)*param_1;
        do {
          uVar19 = *puVar15;
          if (*(int *)(lVar17 + (long)(int)(uint)uVar16 * 4) <
              *(int *)(lVar17 + (long)(int)uVar19 * 4)) {
            *puVar15 = (uint)uVar16;
            *param_1 = uVar19;
            uVar16 = (long)(int)uVar19;
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != param_3);
      }
      else {
        do {
          uVar19 = *puVar15;
          if (*(int *)(lVar17 + (long)(int)*param_1 * 4) < *(int *)(lVar17 + (long)(int)uVar19 * 4))
          {
            *puVar15 = *param_1;
            *param_1 = uVar19;
            uVar11 = param_1[1];
            puVar12 = param_1;
            if ((long)param_2 - (long)param_1 == 8) {
              uVar16 = 1;
              puVar18 = param_1 + 1;
              if (*(int *)(lVar17 + (long)(int)uVar11 * 4) <=
                  *(int *)(lVar17 + (long)(int)uVar19 * 4)) {
LAB_10942fcb4:
                do {
                  while( true ) {
                    puVar9 = puVar18;
                    *puVar12 = uVar11;
                    if ((long)(lVar13 - 2U >> 1) < (long)uVar16) goto LAB_10942fbf4;
                    uVar14 = uVar16 << 1 | 1;
                    puVar2 = param_1 + uVar14;
                    uVar16 = uVar16 * 2 + 2;
                    uVar11 = *puVar2;
                    puVar12 = puVar9;
                    if ((long)uVar16 < lVar13) break;
                    puVar18 = puVar2;
                    uVar16 = uVar14;
                    if (*(int *)(lVar17 + (long)(int)uVar19 * 4) <
                        *(int *)(lVar17 + (long)(int)uVar11 * 4)) goto LAB_10942fbf4;
                  }
                  uVar7 = puVar2[1];
                  puVar18 = puVar2 + 1;
                  if (*(int *)(lVar17 + (long)(int)uVar11 * 4) <=
                      *(int *)(lVar17 + (long)(int)uVar7 * 4)) {
                    uVar16 = uVar14;
                    puVar18 = puVar2;
                    uVar7 = uVar11;
                  }
                  uVar11 = uVar7;
                } while (*(int *)(lVar17 + (long)(int)uVar11 * 4) <=
                         *(int *)(lVar17 + (long)(int)uVar19 * 4));
LAB_10942fbf4:
                *puVar9 = uVar19;
              }
            }
            else {
              uVar7 = param_1[2];
              iVar5 = *(int *)(lVar17 + (long)(int)uVar11 * 4);
              iVar6 = *(int *)(lVar17 + (long)(int)uVar7 * 4);
              puVar18 = param_1 + 2;
              if (iVar5 <= iVar6) {
                puVar18 = param_1 + 1;
                uVar7 = uVar11;
              }
              uVar11 = uVar7;
              uVar16 = 1;
              if (iVar6 < iVar5) {
                uVar16 = 2;
              }
              if (*(int *)(lVar17 + (long)(int)uVar11 * 4) <=
                  *(int *)(lVar17 + (long)(int)uVar19 * 4)) goto LAB_10942fcb4;
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != param_3);
      }
    }
    param_3 = puVar15;
    if (1 < lVar13) {
      do {
        uVar19 = *param_1;
        uVar14 = lVar13 - 2U >> 1;
        plVar4 = (long *)*param_4;
        lVar17 = param_4[1];
        uVar16 = 0;
        puVar15 = param_1;
        do {
          while( true ) {
            puVar12 = puVar15 + uVar16 + 1;
            uVar11 = *puVar12;
            uVar10 = uVar16 << 1 | 1;
            uVar1 = uVar16 * 2 + 2;
            if ((long)uVar1 < lVar13) break;
            *puVar15 = uVar11;
            uVar16 = uVar10;
            puVar15 = puVar12;
            if ((long)uVar14 < (long)uVar10) goto LAB_10942fdac;
          }
          lVar8 = uVar16 + 2;
          uVar7 = puVar15[lVar8];
          lVar20 = *(long *)(*plVar4 + lVar17 * 0x18);
          uVar16 = uVar1;
          puVar18 = puVar15 + lVar8;
          if (*(int *)(lVar20 + (long)(int)uVar11 * 4) <= *(int *)(lVar20 + (long)(int)uVar7 * 4)) {
            uVar16 = uVar10;
            puVar18 = puVar12;
            uVar7 = uVar11;
          }
          puVar12 = puVar18;
          *puVar15 = uVar7;
          puVar15 = puVar12;
        } while ((long)uVar16 <= (long)uVar14);
LAB_10942fdac:
        param_2 = param_2 + -1;
        if (puVar12 == param_2) {
          *puVar12 = uVar19;
        }
        else {
          *puVar12 = *param_2;
          *param_2 = uVar19;
          lVar8 = (long)puVar12 + (4 - (long)param_1) >> 2;
          if (1 < lVar8) {
            uVar16 = lVar8 - 2U >> 1;
            lVar8 = (long)(int)param_1[uVar16];
            lVar17 = *(long *)(*plVar4 + lVar17 * 0x18);
            uVar19 = *puVar12;
            puVar15 = param_1 + uVar16;
            if (*(int *)(lVar17 + (long)(int)uVar19 * 4) < *(int *)(lVar17 + lVar8 * 4)) {
              do {
                puVar18 = puVar15;
                *puVar12 = (uint)lVar8;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                lVar8 = (long)(int)param_1[uVar16];
                puVar12 = puVar18;
                puVar15 = param_1 + uVar16;
              } while (*(int *)(lVar17 + (long)(int)uVar19 * 4) < *(int *)(lVar17 + lVar8 * 4));
              *puVar18 = uVar19;
            }
          }
        }
        bVar3 = 2 < lVar13;
        lVar13 = lVar13 + -1;
      } while (bVar3);
    }
  }
  return param_3;
}



/* Entry: 10942fe54; end: 10942ff3b;  */

undefined8 * FUN_10942fe54(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[8];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[6];
  param_1[6] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)param_1[4];
    plVar3 = plVar1;
    if (plVar4 != plVar1) {
      do {
        plVar3 = plVar4 + -3;
        if (*plVar3 != 0) {
          plVar4[-2] = *plVar3;
          __ZdlPv();
        }
        plVar4 = plVar3;
      } while (plVar3 != plVar1);
      plVar3 = (long *)param_1[3];
    }
    param_1[4] = plVar1;
    __ZdlPv(plVar3);
  }
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar3 = plVar1;
    if (plVar4 != plVar1) {
      do {
        plVar3 = plVar4 + -3;
        if (*plVar3 != 0) {
          plVar4[-2] = *plVar3;
          __ZdlPv();
        }
        plVar4 = plVar3;
      } while (plVar3 != plVar1);
      plVar3 = (long *)*param_1;
    }
    param_1[1] = plVar1;
    __ZdlPv(plVar3);
  }
  return param_1;
}



/* Entry: 10942ff3c; end: 10942ff4f;  */

undefined * FUN_10942ff3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar8 = (long *)&UNK_10f56d48b;
  func_0x000104c4f6cc();
  lVar17 = plVar8[1] - *plVar8;
  uVar14 = (lVar17 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar14 < 0x13b13b13b13b13c) {
    lVar12 = plVar8[2] - *plVar8 >> 4;
    uVar16 = lVar12 * -0x6276276276276276;
    if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
      uVar16 = uVar14;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar12 * 0x4ec4ec4ec4ec4ec5)) {
      uVar16 = 0x13b13b13b13b13b;
    }
    plStack_58 = plVar8;
    if (uVar16 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = plVar8;
      FUN_109428814(plVar8,uVar16,0);
    }
    puVar7 = (undefined *)((long)plVar6 + lVar17);
    plStack_60 = plVar6 + uVar16 * 0x1a;
    uVar9 = *param_2;
    *puVar7 = 1;
    *(undefined8 *)(puVar7 + 8) = uVar9;
    uVar9 = *param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_3[1];
    *(undefined8 *)(puVar7 + 0x10) = uVar9;
    uVar9 = param_3[2];
    *(undefined8 *)(puVar7 + 0x28) = param_3[3];
    *(undefined8 *)(puVar7 + 0x20) = uVar9;
    uVar18 = param_3[5];
    uVar9 = param_3[4];
    uVar19 = param_3[6];
    uVar21 = param_3[9];
    uVar20 = param_3[8];
    *(undefined8 *)(puVar7 + 0x48) = param_3[7];
    *(undefined8 *)(puVar7 + 0x40) = uVar19;
    *(undefined8 *)(puVar7 + 0x58) = uVar21;
    *(undefined8 *)(puVar7 + 0x50) = uVar20;
    *(undefined8 *)(puVar7 + 0x38) = uVar18;
    *(undefined8 *)(puVar7 + 0x30) = uVar9;
    uVar9 = param_3[10];
    uVar19 = param_3[0xd];
    uVar18 = param_3[0xc];
    *(undefined8 *)(puVar7 + 0x68) = param_3[0xb];
    *(undefined8 *)(puVar7 + 0x60) = uVar9;
    *(undefined8 *)(puVar7 + 0x78) = uVar19;
    *(undefined8 *)(puVar7 + 0x70) = uVar18;
    uVar9 = param_3[0xe];
    *(undefined8 *)(puVar7 + 0x88) = param_3[0xf];
    *(undefined8 *)(puVar7 + 0x80) = uVar9;
    lVar17 = param_3[0x11];
    uVar9 = param_3[0x10];
    *(undefined8 *)(puVar7 + 0x98) = param_3[0x11];
    *(undefined8 *)(puVar7 + 0x90) = uVar9;
    *(undefined8 *)(puVar7 + 0xb0) = 0;
    *(undefined **)(puVar7 + 0xa0) = puVar7 + 0x68;
    *(undefined **)(puVar7 + 0xa8) = puVar7 + 0xb0;
    *(undefined8 *)(puVar7 + 0xb8) = 0;
    if (lVar17 != 0) {
      piVar1 = (int *)(lVar17 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_78 = plVar6;
    plStack_70 = (long *)puVar7;
    plStack_68 = (long *)puVar7;
    if (*(int *)((long)param_3 + 0x54) < 3) {
      puVar10 = (undefined8 *)param_3[0x13];
      puVar15 = *(undefined8 **)(puVar7 + 0xa8);
      *puVar15 = *puVar10;
      puVar15[1] = puVar10[1];
    }
    else {
      *(undefined4 *)(puVar7 + 100) = 0;
      FUN_109a844cc(puVar7 + 0x60,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
      if (0 < *(int *)(puVar7 + 100)) {
        lVar17 = 0;
        lVar12 = param_3[0x12];
        lVar13 = param_3[0x13];
        lVar11 = *(long *)(puVar7 + 0xa0);
        lVar3 = *(long *)(puVar7 + 0xa8);
        do {
          *(undefined4 *)(lVar11 + lVar17 * 4) = *(undefined4 *)(lVar12 + lVar17 * 4);
          *(undefined8 *)(lVar3 + lVar17 * 8) = *(undefined8 *)(lVar13 + lVar17 * 8);
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(puVar7 + 100));
      }
    }
    *(undefined8 *)(puVar7 + 0xc0) = 0xbff0000000000000;
    plStack_68 = (long *)((long)plStack_68 + 0xd0);
    puVar7 = (undefined *)((long)plStack_70 + (*plVar8 - plVar8[1]));
    FUN_10942cdf0(plVar8,*plVar8,plVar8[1],puVar7);
    plVar6 = plStack_68;
    plStack_78 = (long *)*plVar8;
    *plVar8 = (long)puVar7;
    lVar17 = plVar8[2];
    plVar8[2] = (long)plStack_60;
    plVar8[1] = (long)plStack_68;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar17;
    FUN_10942d114(&plStack_78);
    return (undefined *)plVar6;
  }
  FUN_109428800();
  FUN_10942d114(&plStack_78);
  __Unwind_Resume(plVar8);
  puVar7 = &UNK_10f56d48b;
  func_0x000104c4f6cc();
  if ((puVar7[0x18] & 1) == 0) {
    lVar12 = **(long **)(puVar7 + 8);
    for (lVar17 = **(long **)(puVar7 + 0x10); lVar17 != lVar12; lVar17 = lVar17 + -0xc0) {
      if (*(long *)(lVar17 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar17 + -0x28) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar17 + -0x28) != 0)) {
          plVar8 = *(long **)(*(long *)(lVar17 + -0x28) + 8);
          if ((plVar8 == (long *)0x0) &&
             ((plVar8 = *(long **)(lVar17 + -0x30), *(long **)(lVar17 + -0x30) == (long *)0x0 &&
              (plVar8 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar8 = plRam000000011382bb80;
          }
          (**(code **)(*plVar8 + 0x30))();
        }
      }
      *(undefined8 *)(lVar17 + -0x28) = 0;
      *(undefined8 *)(lVar17 + -0x48) = 0;
      *(undefined8 *)(lVar17 + -0x50) = 0;
      *(undefined8 *)(lVar17 + -0x38) = 0;
      *(undefined8 *)(lVar17 + -0x40) = 0;
      if (0 < *(int *)(lVar17 + -0x5c)) {
        lVar11 = 0;
        lVar13 = *(long *)(lVar17 + -0x20);
        do {
          *(undefined4 *)(lVar13 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar17 + -0x5c));
      }
      lVar11 = *(long *)(lVar17 + -0x18);
      if (lVar11 != lVar17 + -0x10 && lVar11 != 0) {
        _free(*(undefined8 *)(lVar11 + -8));
      }
    }
  }
  return puVar7;
}



/* Entry: 10942ff50; end: 10943019b;  */

undefined1 * FUN_10942ff50(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar17 = param_1[1] - *param_1;
  uVar14 = (lVar17 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar14 < 0x13b13b13b13b13c) {
    lVar12 = param_1[2] - *param_1 >> 4;
    uVar16 = lVar12 * -0x6276276276276276;
    if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
      uVar16 = uVar14;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar12 * 0x4ec4ec4ec4ec4ec5)) {
      uVar16 = 0x13b13b13b13b13b;
    }
    plStack_48 = param_1;
    if (uVar16 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_109428814(param_1,uVar16,0);
    }
    puVar2 = (undefined1 *)((long)plVar7 + lVar17);
    plStack_50 = plVar7 + uVar16 * 0x1a;
    uVar9 = *param_2;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 8) = uVar9;
    uVar9 = *param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_3[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar9;
    uVar9 = param_3[2];
    *(undefined8 *)(puVar2 + 0x28) = param_3[3];
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    uVar18 = param_3[5];
    uVar9 = param_3[4];
    uVar19 = param_3[6];
    uVar21 = param_3[9];
    uVar20 = param_3[8];
    *(undefined8 *)(puVar2 + 0x48) = param_3[7];
    *(undefined8 *)(puVar2 + 0x40) = uVar19;
    *(undefined8 *)(puVar2 + 0x58) = uVar21;
    *(undefined8 *)(puVar2 + 0x50) = uVar20;
    *(undefined8 *)(puVar2 + 0x38) = uVar18;
    *(undefined8 *)(puVar2 + 0x30) = uVar9;
    uVar9 = param_3[10];
    uVar19 = param_3[0xd];
    uVar18 = param_3[0xc];
    *(undefined8 *)(puVar2 + 0x68) = param_3[0xb];
    *(undefined8 *)(puVar2 + 0x60) = uVar9;
    *(undefined8 *)(puVar2 + 0x78) = uVar19;
    *(undefined8 *)(puVar2 + 0x70) = uVar18;
    uVar9 = param_3[0xe];
    *(undefined8 *)(puVar2 + 0x88) = param_3[0xf];
    *(undefined8 *)(puVar2 + 0x80) = uVar9;
    lVar17 = param_3[0x11];
    uVar9 = param_3[0x10];
    *(undefined8 *)(puVar2 + 0x98) = param_3[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar9;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined1 **)(puVar2 + 0xa0) = puVar2 + 0x68;
    *(undefined1 **)(puVar2 + 0xa8) = puVar2 + 0xb0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    if (lVar17 != 0) {
      piVar1 = (int *)(lVar17 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_68 = plVar7;
    plStack_60 = (long *)puVar2;
    plStack_58 = (long *)puVar2;
    if (*(int *)((long)param_3 + 0x54) < 3) {
      puVar10 = (undefined8 *)param_3[0x13];
      puVar15 = *(undefined8 **)(puVar2 + 0xa8);
      *puVar15 = *puVar10;
      puVar15[1] = puVar10[1];
    }
    else {
      *(undefined4 *)(puVar2 + 100) = 0;
      FUN_109a844cc(puVar2 + 0x60,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
      if (0 < *(int *)(puVar2 + 100)) {
        lVar17 = 0;
        lVar12 = param_3[0x12];
        lVar13 = param_3[0x13];
        lVar11 = *(long *)(puVar2 + 0xa0);
        lVar4 = *(long *)(puVar2 + 0xa8);
        do {
          *(undefined4 *)(lVar11 + lVar17 * 4) = *(undefined4 *)(lVar12 + lVar17 * 4);
          *(undefined8 *)(lVar4 + lVar17 * 8) = *(undefined8 *)(lVar13 + lVar17 * 8);
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(puVar2 + 100));
      }
    }
    *(undefined8 *)(puVar2 + 0xc0) = 0xbff0000000000000;
    plStack_58 = (long *)((long)plStack_58 + 0xd0);
    puVar2 = (undefined1 *)((long)plStack_60 + (*param_1 - param_1[1]));
    FUN_10942cdf0(param_1,*param_1,param_1[1],puVar2);
    plVar7 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = (long)puVar2;
    lVar17 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar17;
    FUN_10942d114(&plStack_68);
    return (undefined1 *)plVar7;
  }
  FUN_109428800();
  FUN_10942d114(&plStack_68);
  __Unwind_Resume(param_1);
  puVar8 = &UNK_10f56d48b;
  func_0x000104c4f6cc();
  if ((puVar8[0x18] & 1) == 0) {
    lVar12 = **(long **)(puVar8 + 8);
    for (lVar17 = **(long **)(puVar8 + 0x10); lVar17 != lVar12; lVar17 = lVar17 + -0xc0) {
      if (*(long *)(lVar17 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar17 + -0x28) + 0x14);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((iVar3 + -1 == 0) && (*(long *)(lVar17 + -0x28) != 0)) {
          plVar7 = *(long **)(*(long *)(lVar17 + -0x28) + 8);
          if ((plVar7 == (long *)0x0) &&
             ((plVar7 = *(long **)(lVar17 + -0x30), *(long **)(lVar17 + -0x30) == (long *)0x0 &&
              (plVar7 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar7 = plRam000000011382bb80;
          }
          (**(code **)(*plVar7 + 0x30))();
        }
      }
      *(undefined8 *)(lVar17 + -0x28) = 0;
      *(undefined8 *)(lVar17 + -0x48) = 0;
      *(undefined8 *)(lVar17 + -0x50) = 0;
      *(undefined8 *)(lVar17 + -0x38) = 0;
      *(undefined8 *)(lVar17 + -0x40) = 0;
      if (0 < *(int *)(lVar17 + -0x5c)) {
        lVar11 = 0;
        lVar13 = *(long *)(lVar17 + -0x20);
        do {
          *(undefined4 *)(lVar13 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar17 + -0x5c));
      }
      lVar11 = *(long *)(lVar17 + -0x18);
      if (lVar11 != lVar17 + -0x10 && lVar11 != 0) {
        _free(*(undefined8 *)(lVar11 + -8));
      }
    }
  }
  return puVar8;
}



/* Entry: 10943019c; end: 1094301af;  */

undefined * FUN_10943019c(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = &UNK_10f56d48b;
  func_0x000104c4f6cc();
  if ((puVar5[0x18] & 1) == 0) {
    lVar10 = **(long **)(puVar5 + 8);
    for (lVar9 = **(long **)(puVar5 + 0x10); lVar9 != lVar10; lVar9 = lVar9 + -0xc0) {
      if (*(long *)(lVar9 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x28) != 0)) {
          plVar6 = *(long **)(*(long *)(lVar9 + -0x28) + 8);
          if ((plVar6 == (long *)0x0) &&
             ((plVar6 = *(long **)(lVar9 + -0x30), *(long **)(lVar9 + -0x30) == (long *)0x0 &&
              (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar6 = plRam000000011382bb80;
          }
          (**(code **)(*plVar6 + 0x30))();
        }
      }
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x48) = 0;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined8 *)(lVar9 + -0x38) = 0;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      if (0 < *(int *)(lVar9 + -0x5c)) {
        lVar7 = 0;
        lVar8 = *(long *)(lVar9 + -0x20);
        do {
          *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar9 + -0x5c));
      }
      lVar7 = *(long *)(lVar9 + -0x18);
      if (lVar7 != lVar9 + -0x10 && lVar7 != 0) {
        _free(*(undefined8 *)(lVar7 + -8));
      }
    }
  }
  return puVar5;
}



/* Entry: 1094301b0; end: 1094302b7;  */

long FUN_1094301b0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar9 = **(long **)(param_1 + 8);
    for (lVar8 = **(long **)(param_1 + 0x10); lVar8 != lVar9; lVar8 = lVar8 + -0xc0) {
      if (*(long *)(lVar8 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar8 + -0x28) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar8 + -0x28) != 0)) {
          plVar5 = *(long **)(*(long *)(lVar8 + -0x28) + 8);
          if ((plVar5 == (long *)0x0) &&
             ((plVar5 = *(long **)(lVar8 + -0x30), *(long **)(lVar8 + -0x30) == (long *)0x0 &&
              (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar5 = plRam000000011382bb80;
          }
          (**(code **)(*plVar5 + 0x30))();
        }
      }
      *(undefined8 *)(lVar8 + -0x28) = 0;
      *(undefined8 *)(lVar8 + -0x48) = 0;
      *(undefined8 *)(lVar8 + -0x50) = 0;
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined8 *)(lVar8 + -0x40) = 0;
      if (0 < *(int *)(lVar8 + -0x5c)) {
        lVar6 = 0;
        lVar7 = *(long *)(lVar8 + -0x20);
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar8 + -0x5c));
      }
      lVar6 = *(long *)(lVar8 + -0x18);
      if (lVar6 != lVar8 + -0x10 && lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
    }
  }
  return param_1;
}



/* Entry: 1094302b8; end: 1094303c3;  */

long * FUN_1094302b8(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar3) {
    param_1[2] = lVar9 + -0xc0;
    if (*(long *)(lVar9 + -0x28) != 0) {
      piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x28) != 0)) {
        plVar6 = *(long **)(*(long *)(lVar9 + -0x28) + 8);
        if ((plVar6 == (long *)0x0) &&
           ((plVar6 = *(long **)(lVar9 + -0x30), *(long **)(lVar9 + -0x30) == (long *)0x0 &&
            (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar6 = plRam000000011382bb80;
        }
        (**(code **)(*plVar6 + 0x30))();
      }
    }
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined8 *)(lVar9 + -0x48) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x40) = 0;
    if (0 < *(int *)(lVar9 + -0x5c)) {
      lVar7 = 0;
      lVar8 = *(long *)(lVar9 + -0x20);
      do {
        *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + -0x5c));
    }
    lVar7 = *(long *)(lVar9 + -0x18);
    if (lVar7 != lVar9 + -0x10 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
    lVar9 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 1094303c4; end: 1094305a7;  */

long FUN_1094303c4(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if ((*(byte *)(puVar3 + 4) & 1) != 0) {
      func_0x0001053936ac();
    }
    if (puVar3[8] != 0) {
      func_0x000107c303ac(puVar3 + 8);
    }
    if (puVar3[5] != 0) {
      func_0x000107c303ac();
    }
    pbVar9 = (byte *)*puVar3;
    if (pbVar9 != (byte *)0x0) {
      pbVar5 = pbVar9;
      if ((byte *)puVar3[1] != pbVar9) {
        pbVar5 = (byte *)puVar3[1] + -0x38;
        do {
          if ((*pbVar5 & 1) != 0) {
            func_0x0001053936ac(pbVar5);
          }
          lVar7 = *(long *)(pbVar5 + 0x28);
          if (lVar7 != 0) {
            if ((*(byte *)(lVar7 + 8) & 1) != 0) {
              func_0x0001053936ac();
            }
            lVar8 = *(long *)(lVar7 + 0x18);
            if (lVar8 != 0) {
              if ((*(byte *)(lVar8 + 8) & 1) != 0) {
                func_0x0001053936ac();
              }
              __ZdlPv(lVar8);
            }
            lVar8 = *(long *)(lVar7 + 0x20);
            if (lVar8 != 0) {
              if ((*(byte *)(lVar8 + 8) & 1) != 0) {
                func_0x0001053936ac();
              }
              __ZdlPv(lVar8);
            }
            __ZdlPv(lVar7);
          }
          if (*(long *)(pbVar5 + 0x10) != 0) {
            func_0x000107c303ac();
          }
          pbVar2 = pbVar5 + -8;
          pbVar5 = pbVar5 + -0x40;
        } while (pbVar2 != pbVar9);
        pbVar5 = (byte *)*puVar3;
      }
      puVar3[1] = pbVar9;
      __ZdlPv(pbVar5);
    }
    __ZdlPv(puVar3);
  }
  lVar7 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar7 != 0) {
    FUN_10942fe54();
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x28);
    plVar1 = plVar4;
    if (plVar6 != plVar4) {
      do {
        plVar6 = plVar6 + -1;
        lVar7 = *plVar6;
        *plVar6 = 0;
        if (lVar7 != 0) {
          __ZdlPv();
        }
      } while (plVar6 != plVar4);
      plVar1 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x28) = plVar4;
    __ZdlPv(plVar1);
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x10);
    plVar1 = plVar4;
    if (plVar6 != plVar4) {
      do {
        plVar6 = plVar6 + -1;
        lVar7 = *plVar6;
        *plVar6 = 0;
        if (lVar7 != 0) {
          FUN_1094305a8();
          __ZdlPv();
        }
      } while (plVar6 != plVar4);
      plVar1 = *(long **)(param_1 + 8);
    }
    *(long **)(param_1 + 0x10) = plVar4;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 1094305a8; end: 10943064b;  */

long FUN_1094305a8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = *(long **)(param_1 + 0x458);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x440) == '\x01') && (*(long *)(param_1 + 0x428) != 0)) {
    *(long *)(param_1 + 0x430) = *(long *)(param_1 + 0x428);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x417) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x400));
  }
  lStack_28 = param_1 + 1000;
  FUN_10942a570(&lStack_28);
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  FUN_10942c450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10943064c; end: 10943095f;  */

undefined1  [16] FUN_10943064c(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar6 * uVar7;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if ((uVar7 & uVar2) == 0) {
        do {
          if (plVar4[1] == uVar8) {
            if ((int)plVar4[2] == iVar1) {
LAB_109430738:
              auVar9._8_8_ = 0;
              auVar9._0_8_ = plVar4;
              return auVar9;
            }
          }
          else if ((plVar4[1] & uVar2) != unaff_x24) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar4[1];
          if (uVar2 == uVar8) {
            if ((int)plVar4[2] == iVar1) goto LAB_109430738;
          }
          else {
            if (uVar7 <= uVar2) {
              uVar6 = 0;
              if (uVar7 != 0) {
                uVar6 = uVar2 / uVar7;
              }
              uVar2 = uVar2 - uVar6 * uVar7;
            }
            if (uVar2 != unaff_x24) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)0x20;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *(undefined4 *)*param_4;
  plVar4[3] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar2) {
LAB_109430810:
      FUN_109430960(param_1,uVar2);
    }
    else if (uVar2 < uVar7) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      if (uVar2 < uVar7) goto LAB_109430810;
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
      goto joined_r0x0001094308a4;
    }
    if (uVar8 < uVar7) {
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x0001094308a4;
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar2 * uVar7;
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_1094308bc;
LAB_1094307a4:
    *plVar4 = *plVar3;
  }
  else {
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
joined_r0x0001094308a4:
    if (plVar3 != (long *)0x0) goto LAB_1094307a4;
LAB_1094308bc:
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_109430924;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  *plVar3 = (long)plVar4;
LAB_109430924:
  param_1[3] = param_1[3] + 1;
  auVar10._8_8_ = 1;
  auVar10._0_8_ = plVar4;
  return auVar10;
}



/* Entry: 109430960; end: 109430af7;  */

undefined8 *
FUN_109430960(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined4 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return puVar10;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar9 = (long)param_2 << 3;
    __Znwm();
    puVar10 = (undefined8 *)*param_1;
    *param_1 = lVar9;
    if (puVar10 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puVar12 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar12 * 8) = 0;
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (param_2 != puVar12);
    plVar18 = param_1 + 2;
    plVar13 = (long *)*plVar18;
    if (plVar13 != (long *)0x0) {
      puVar12 = (undefined8 *)plVar13[1];
      uVar17 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar17) == 0) {
        *(long **)(*param_1 + ((ulong)puVar12 & uVar17) * 8) = plVar18;
        uVar19 = (ulong)puVar12 & uVar17;
        while (plVar18 = plVar13, plVar13 = (long *)*plVar18, plVar13 != (long *)0x0) {
          uVar24 = plVar13[1] & uVar17;
          if (uVar24 != uVar19) {
            lVar9 = *param_1;
            if (*(long *)(lVar9 + uVar24 * 8) == 0) {
              *(long **)(lVar9 + uVar24 * 8) = plVar18;
              uVar19 = uVar24;
            }
            else {
              *plVar18 = *plVar13;
              *plVar13 = **(long **)(lVar9 + uVar24 * 8);
              **(undefined8 **)(lVar9 + uVar24 * 8) = plVar13;
              plVar13 = plVar18;
            }
          }
        }
      }
      else {
        if (param_2 <= puVar12) {
          uVar17 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar17 = (ulong)puVar12 / (ulong)param_2;
          }
          puVar12 = (undefined8 *)((long)puVar12 - uVar17 * (long)param_2);
        }
        *(long **)(*param_1 + (long)puVar12 * 8) = plVar18;
        plVar18 = (long *)*plVar13;
        while (plVar14 = plVar13, plVar18 != (long *)0x0) {
          while( true ) {
            puVar20 = (undefined8 *)plVar18[1];
            if (param_2 <= puVar20) {
              uVar17 = 0;
              if (param_2 != (undefined8 *)0x0) {
                uVar17 = (ulong)puVar20 / (ulong)param_2;
              }
              puVar20 = (undefined8 *)((long)puVar20 - uVar17 * (long)param_2);
            }
            plVar13 = plVar18;
            if (puVar20 == puVar12) goto LAB_109430a20;
            lVar9 = *param_1;
            if (*(long *)(lVar9 + (long)puVar20 * 8) != 0) break;
            *(long **)(lVar9 + (long)puVar20 * 8) = plVar14;
            plVar13 = (long *)*plVar18;
            plVar14 = plVar18;
            puVar12 = puVar20;
            plVar18 = plVar13;
            if (plVar13 == (long *)0x0) {
              return puVar10;
            }
          }
          *plVar14 = *plVar18;
          *plVar18 = **(long **)(lVar9 + (long)puVar20 * 8);
          **(undefined8 **)(lVar9 + (long)puVar20 * 8) = plVar18;
          plVar13 = plVar14;
LAB_109430a20:
          plVar18 = (long *)*plVar13;
        }
      }
    }
    return puVar10;
  }
  func_0x000104c4f740();
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar10 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar10 >> 2 < (long)param_5) {
    lVar9 = *param_1;
    uVar17 = param_5 + ((long)puVar10 - lVar9 >> 2);
    if (uVar17 >> 0x3e != 0) {
      FUN_10923f788();
LAB_109430eac:
      func_0x000104c4f740();
      puVar26 = (undefined1 *)param_1[1];
      uVar16 = *param_2;
      *puVar26 = 1;
      *(undefined8 *)(puVar26 + 8) = uVar16;
      uVar16 = *param_3;
      *(undefined8 *)(puVar26 + 0x18) = param_3[1];
      *(undefined8 *)(puVar26 + 0x10) = uVar16;
      uVar16 = param_3[2];
      *(undefined8 *)(puVar26 + 0x28) = param_3[3];
      *(undefined8 *)(puVar26 + 0x20) = uVar16;
      uVar28 = param_3[5];
      uVar16 = param_3[4];
      uVar29 = param_3[6];
      uVar31 = param_3[9];
      uVar30 = param_3[8];
      *(undefined8 *)(puVar26 + 0x48) = param_3[7];
      *(undefined8 *)(puVar26 + 0x40) = uVar29;
      *(undefined8 *)(puVar26 + 0x58) = uVar31;
      *(undefined8 *)(puVar26 + 0x50) = uVar30;
      *(undefined8 *)(puVar26 + 0x38) = uVar28;
      *(undefined8 *)(puVar26 + 0x30) = uVar16;
      uVar16 = param_3[10];
      uVar29 = param_3[0xd];
      uVar28 = param_3[0xc];
      puVar10 = (undefined8 *)(puVar26 + 0x60);
      *(undefined8 *)(puVar26 + 0x68) = param_3[0xb];
      *puVar10 = uVar16;
      *(undefined8 *)(puVar26 + 0x78) = uVar29;
      *(undefined8 *)(puVar26 + 0x70) = uVar28;
      uVar16 = param_3[0xe];
      *(undefined8 *)(puVar26 + 0x88) = param_3[0xf];
      *(undefined8 *)(puVar26 + 0x80) = uVar16;
      lVar9 = param_3[0x11];
      uVar16 = param_3[0x10];
      *(undefined8 *)(puVar26 + 0x98) = param_3[0x11];
      *(undefined8 *)(puVar26 + 0x90) = uVar16;
      *(undefined8 *)(puVar26 + 0xb0) = 0;
      *(undefined1 **)(puVar26 + 0xa0) = puVar26 + 0x68;
      *(undefined1 **)(puVar26 + 0xa8) = puVar26 + 0xb0;
      *(undefined8 *)(puVar26 + 0xb8) = 0;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)param_3 + 0x54) < 3) {
        puVar12 = (undefined8 *)param_3[0x13];
        puVar20 = *(undefined8 **)(puVar26 + 0xa8);
        *puVar20 = *puVar12;
        puVar20[1] = puVar12[1];
      }
      else {
        *(undefined4 *)(puVar26 + 100) = 0;
        FUN_109a844cc(puVar10,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
        if (0 < *(int *)(puVar26 + 100)) {
          lVar9 = 0;
          lVar11 = param_3[0x12];
          lVar5 = param_3[0x13];
          lVar4 = *(long *)(puVar26 + 0xa0);
          lVar6 = *(long *)(puVar26 + 0xa8);
          do {
            *(undefined4 *)(lVar4 + lVar9 * 4) = *(undefined4 *)(lVar11 + lVar9 * 4);
            *(undefined8 *)(lVar6 + lVar9 * 8) = *(undefined8 *)(lVar5 + lVar9 * 8);
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(puVar26 + 100));
        }
      }
      *(undefined8 *)(puVar26 + 0xc0) = 0xbff0000000000000;
      param_1[1] = (long)(puVar26 + 0xd0);
      return puVar10;
    }
    uVar24 = param_1[2] - lVar9;
    uVar19 = (long)uVar24 >> 1;
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    if (0x7ffffffffffffffb < uVar24) {
      uVar19 = 0x3fffffffffffffff;
    }
    if (uVar19 == 0) {
      lVar11 = 0;
      puVar27 = (undefined8 *)((long)param_2 - lVar9);
      puVar20 = (undefined8 *)((long)puVar27 + param_5 * 4);
      puVar12 = puVar27;
    }
    else {
      if (uVar19 >> 0x3e != 0) goto LAB_109430eac;
      lVar11 = uVar19 << 2;
      __Znwm();
      puVar27 = (undefined8 *)((long)param_2 - lVar9);
      puVar12 = (undefined8 *)(lVar11 + (long)puVar27);
      puVar20 = (undefined8 *)((long)puVar12 + param_5 * 4);
    }
    puVar25 = puVar12;
    if ((6 < (param_5 - 1 & 0x3fffffffffffffff)) &&
       (0x1f < (ulong)((long)param_2 + ((lVar11 - (long)param_3) - lVar9)))) {
      uVar17 = (param_5 - 1 & 0x3fffffffffffffff) + 1;
      uVar22 = uVar17 & 0x7ffffffffffffff8;
      puVar25 = param_3 + 2;
      puVar15 = (undefined8 *)((long)puVar27 + lVar11 + 0x10);
      uVar24 = uVar22;
      do {
        uVar16 = puVar25[-2];
        uVar29 = puVar25[1];
        uVar28 = *puVar25;
        puVar15[-1] = puVar25[-1];
        puVar15[-2] = uVar16;
        puVar15[1] = uVar29;
        *puVar15 = uVar28;
        puVar25 = puVar25 + 4;
        puVar15 = puVar15 + 4;
        uVar24 = uVar24 - 8;
      } while (uVar24 != 0);
      puVar25 = (undefined8 *)((long)puVar12 + uVar22 * 4);
      param_3 = (undefined8 *)((long)param_3 + uVar22 * 4);
      if (uVar17 == uVar22) goto LAB_109430d88;
    }
    do {
      puVar15 = (undefined8 *)((long)puVar25 + 4);
      *(undefined4 *)puVar25 = *(undefined4 *)param_3;
      puVar25 = puVar15;
      param_3 = (undefined8 *)((long)param_3 + 4);
    } while (puVar15 != puVar20);
LAB_109430d88:
    _memcpy(puVar20,param_2,(long)puVar10 - (long)param_2);
    param_1[1] = (long)param_2;
    _memcpy(lVar11,lVar9,puVar27);
    *param_1 = lVar11;
    param_1[1] = (long)puVar20 + ((long)puVar10 - (long)param_2);
    param_1[2] = lVar11 + uVar19 * 4;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
    return puVar12;
  }
  lVar9 = (long)puVar10 - (long)param_2;
  if ((long)param_5 <= lVar9 >> 2) {
    lVar9 = param_5 * 4;
    puVar12 = (undefined8 *)((long)puVar10 + param_5 * -4);
    puVar20 = puVar10;
    if (puVar12 < puVar10) {
      if (puVar10 <= (undefined8 *)((long)puVar12 + 4U)) {
        puVar20 = (undefined8 *)((long)puVar12 + 4U);
      }
      uVar17 = (long)puVar20 + lVar9 + ~(ulong)puVar10;
      puVar27 = puVar10;
      if (0x1b < uVar17 && 7 < param_5) {
        uVar17 = (uVar17 >> 2) + 1;
        uVar24 = uVar17 & 0x7ffffffffffffff8;
        puVar27 = (undefined8 *)((long)puVar10 + uVar24 * 4);
        puVar20 = puVar10 + 2;
        puVar25 = (undefined8 *)((long)puVar20 + param_5 * -4);
        uVar19 = uVar24;
        do {
          uVar16 = puVar25[-2];
          uVar29 = puVar25[1];
          uVar28 = *puVar25;
          puVar20[-1] = puVar25[-1];
          puVar20[-2] = uVar16;
          puVar20[1] = uVar29;
          *puVar20 = uVar28;
          puVar20 = puVar20 + 4;
          puVar25 = puVar25 + 4;
          uVar19 = uVar19 - 8;
        } while (uVar19 != 0);
        puVar12 = (undefined8 *)((long)puVar12 + uVar24 * 4);
        puVar20 = puVar27;
        if (uVar17 == uVar24) goto LAB_109430dd8;
      }
      do {
        puVar25 = (undefined8 *)((long)puVar12 + 4);
        puVar20 = (undefined8 *)((long)puVar27 + 4);
        *(undefined4 *)puVar27 = *(undefined4 *)puVar12;
        puVar12 = puVar25;
        puVar27 = puVar20;
      } while (puVar25 < puVar10);
    }
LAB_109430dd8:
    param_1[1] = (long)puVar20;
    if (puVar10 != (undefined8 *)((long)param_2 + lVar9)) {
      _memmove((undefined8 *)((long)param_2 + lVar9),param_2);
    }
    goto LAB_109430e78;
  }
  lVar11 = param_4 - (lVar9 + (long)param_3);
  if (lVar11 != 0) {
    _memmove(puVar10,lVar9 + (long)param_3,lVar11);
  }
  puVar2 = (undefined4 *)((long)puVar10 + lVar11);
  param_1[1] = (long)puVar2;
  if (lVar9 >> 2 < 1) {
    return param_2;
  }
  puVar3 = (undefined4 *)((long)param_2 + param_5 * 4);
  puVar12 = (undefined8 *)(puVar2 + -param_5);
  puVar23 = puVar2;
  if (puVar12 < puVar10) {
    puVar23 = (undefined4 *)((long)param_3 + param_5 * 4);
    puVar20 = (undefined8 *)((long)param_2 + (param_4 - (long)puVar23) + 4);
    puVar27 = puVar10;
    if (puVar10 <= puVar20) {
      puVar27 = puVar20;
    }
    uVar17 = (long)puVar27 + (long)puVar23 + (~param_4 - (long)param_2);
    puVar21 = puVar2;
    if ((0x1b < uVar17) && (7 < param_5)) {
      uVar17 = (uVar17 >> 2) + 1;
      uVar24 = uVar17 & 0x7ffffffffffffff8;
      puVar20 = (undefined8 *)((long)param_2 + (param_4 - (long)param_3) + 0x10);
      puVar27 = (undefined8 *)((long)puVar20 + param_5 * -4);
      uVar19 = uVar24;
      do {
        uVar16 = puVar27[-2];
        uVar29 = puVar27[1];
        uVar28 = *puVar27;
        puVar20[-1] = puVar27[-1];
        puVar20[-2] = uVar16;
        puVar20[1] = uVar29;
        *puVar20 = uVar28;
        puVar20 = puVar20 + 4;
        puVar27 = puVar27 + 4;
        uVar19 = uVar19 - 8;
      } while (uVar19 != 0);
      puVar12 = (undefined8 *)((long)puVar12 + uVar24 * 4);
      puVar23 = puVar2 + uVar24;
      puVar21 = puVar2 + uVar24;
      if (uVar17 == uVar24) goto LAB_109430e4c;
    }
    do {
      puVar20 = (undefined8 *)((long)puVar12 + 4);
      puVar23 = puVar21 + 1;
      *puVar21 = *(undefined4 *)puVar12;
      puVar12 = puVar20;
      puVar21 = puVar23;
    } while (puVar20 < puVar10);
  }
LAB_109430e4c:
  param_1[1] = (long)puVar23;
  if (puVar2 != puVar3) {
    _memmove(puVar3,param_2);
  }
  if (puVar10 == param_2) {
    return param_2;
  }
LAB_109430e78:
  _memmove(param_2,param_3,lVar9);
  return param_2;
}



/* Entry: 109430af8; end: 109430eaf;  */

undefined8 *
FUN_109430af8(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar10 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar10 >> 2 < (long)param_5) {
    lVar23 = *param_1;
    uVar20 = param_5 + ((long)puVar10 - lVar23 >> 2);
    if (uVar20 >> 0x3e != 0) {
      FUN_10923f788();
LAB_109430eac:
      func_0x000104c4f740();
      puVar22 = (undefined1 *)param_1[1];
      uVar13 = *param_2;
      *puVar22 = 1;
      *(undefined8 *)(puVar22 + 8) = uVar13;
      uVar13 = *param_3;
      *(undefined8 *)(puVar22 + 0x18) = param_3[1];
      *(undefined8 *)(puVar22 + 0x10) = uVar13;
      uVar13 = param_3[2];
      *(undefined8 *)(puVar22 + 0x28) = param_3[3];
      *(undefined8 *)(puVar22 + 0x20) = uVar13;
      uVar25 = param_3[5];
      uVar13 = param_3[4];
      uVar26 = param_3[6];
      uVar28 = param_3[9];
      uVar27 = param_3[8];
      *(undefined8 *)(puVar22 + 0x48) = param_3[7];
      *(undefined8 *)(puVar22 + 0x40) = uVar26;
      *(undefined8 *)(puVar22 + 0x58) = uVar28;
      *(undefined8 *)(puVar22 + 0x50) = uVar27;
      *(undefined8 *)(puVar22 + 0x38) = uVar25;
      *(undefined8 *)(puVar22 + 0x30) = uVar13;
      uVar13 = param_3[10];
      uVar26 = param_3[0xd];
      uVar25 = param_3[0xc];
      puVar10 = (undefined8 *)(puVar22 + 0x60);
      *(undefined8 *)(puVar22 + 0x68) = param_3[0xb];
      *puVar10 = uVar13;
      *(undefined8 *)(puVar22 + 0x78) = uVar26;
      *(undefined8 *)(puVar22 + 0x70) = uVar25;
      uVar13 = param_3[0xe];
      *(undefined8 *)(puVar22 + 0x88) = param_3[0xf];
      *(undefined8 *)(puVar22 + 0x80) = uVar13;
      lVar23 = param_3[0x11];
      uVar13 = param_3[0x10];
      *(undefined8 *)(puVar22 + 0x98) = param_3[0x11];
      *(undefined8 *)(puVar22 + 0x90) = uVar13;
      *(undefined8 *)(puVar22 + 0xb0) = 0;
      *(undefined1 **)(puVar22 + 0xa0) = puVar22 + 0x68;
      *(undefined1 **)(puVar22 + 0xa8) = puVar22 + 0xb0;
      *(undefined8 *)(puVar22 + 0xb8) = 0;
      if (lVar23 != 0) {
        piVar1 = (int *)(lVar23 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)param_3 + 0x54) < 3) {
        puVar14 = (undefined8 *)param_3[0x13];
        puVar16 = *(undefined8 **)(puVar22 + 0xa8);
        *puVar16 = *puVar14;
        puVar16[1] = puVar14[1];
      }
      else {
        *(undefined4 *)(puVar22 + 100) = 0;
        FUN_109a844cc(puVar10,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
        if (0 < *(int *)(puVar22 + 100)) {
          lVar23 = 0;
          lVar9 = param_3[0x12];
          lVar5 = param_3[0x13];
          lVar4 = *(long *)(puVar22 + 0xa0);
          lVar6 = *(long *)(puVar22 + 0xa8);
          do {
            *(undefined4 *)(lVar4 + lVar23 * 4) = *(undefined4 *)(lVar9 + lVar23 * 4);
            *(undefined8 *)(lVar6 + lVar23 * 8) = *(undefined8 *)(lVar5 + lVar23 * 8);
            lVar23 = lVar23 + 1;
          } while (lVar23 < *(int *)(puVar22 + 100));
        }
      }
      *(undefined8 *)(puVar22 + 0xc0) = 0xbff0000000000000;
      param_1[1] = (long)(puVar22 + 0xd0);
      return puVar10;
    }
    uVar11 = param_1[2] - lVar23;
    uVar15 = (long)uVar11 >> 1;
    if (uVar15 <= uVar20) {
      uVar15 = uVar20;
    }
    if (0x7ffffffffffffffb < uVar11) {
      uVar15 = 0x3fffffffffffffff;
    }
    if (uVar15 == 0) {
      lVar9 = 0;
      puVar24 = (undefined8 *)((long)param_2 - lVar23);
      puVar16 = (undefined8 *)((long)puVar24 + param_5 * 4);
      puVar14 = puVar24;
    }
    else {
      if (uVar15 >> 0x3e != 0) goto LAB_109430eac;
      lVar9 = uVar15 << 2;
      __Znwm();
      puVar24 = (undefined8 *)((long)param_2 - lVar23);
      puVar14 = (undefined8 *)(lVar9 + (long)puVar24);
      puVar16 = (undefined8 *)((long)puVar14 + param_5 * 4);
    }
    puVar21 = puVar14;
    if ((6 < (param_5 - 1 & 0x3fffffffffffffff)) &&
       (0x1f < (ulong)((long)param_2 + ((lVar9 - (long)param_3) - lVar23)))) {
      uVar20 = (param_5 - 1 & 0x3fffffffffffffff) + 1;
      uVar18 = uVar20 & 0x7ffffffffffffff8;
      puVar21 = param_3 + 2;
      puVar12 = (undefined8 *)((long)puVar24 + lVar9 + 0x10);
      uVar11 = uVar18;
      do {
        uVar13 = puVar21[-2];
        uVar26 = puVar21[1];
        uVar25 = *puVar21;
        puVar12[-1] = puVar21[-1];
        puVar12[-2] = uVar13;
        puVar12[1] = uVar26;
        *puVar12 = uVar25;
        puVar21 = puVar21 + 4;
        puVar12 = puVar12 + 4;
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
      puVar21 = (undefined8 *)((long)puVar14 + uVar18 * 4);
      param_3 = (undefined8 *)((long)param_3 + uVar18 * 4);
      if (uVar20 == uVar18) goto LAB_109430d88;
    }
    do {
      puVar12 = (undefined8 *)((long)puVar21 + 4);
      *(undefined4 *)puVar21 = *(undefined4 *)param_3;
      puVar21 = puVar12;
      param_3 = (undefined8 *)((long)param_3 + 4);
    } while (puVar12 != puVar16);
LAB_109430d88:
    _memcpy(puVar16,param_2,(long)puVar10 - (long)param_2);
    param_1[1] = (long)param_2;
    _memcpy(lVar9,lVar23,puVar24);
    *param_1 = lVar9;
    param_1[1] = (long)puVar16 + ((long)puVar10 - (long)param_2);
    param_1[2] = lVar9 + uVar15 * 4;
    if (lVar23 != 0) {
      __ZdlPv(lVar23);
    }
    return puVar14;
  }
  lVar23 = (long)puVar10 - (long)param_2;
  if ((long)param_5 <= lVar23 >> 2) {
    lVar23 = param_5 * 4;
    puVar14 = (undefined8 *)((long)puVar10 + param_5 * -4);
    puVar16 = puVar10;
    if (puVar14 < puVar10) {
      if (puVar10 <= (undefined8 *)((long)puVar14 + 4U)) {
        puVar16 = (undefined8 *)((long)puVar14 + 4U);
      }
      uVar20 = (long)puVar16 + lVar23 + ~(ulong)puVar10;
      puVar24 = puVar10;
      if (0x1b < uVar20 && 7 < param_5) {
        uVar20 = (uVar20 >> 2) + 1;
        uVar11 = uVar20 & 0x7ffffffffffffff8;
        puVar24 = (undefined8 *)((long)puVar10 + uVar11 * 4);
        puVar16 = puVar10 + 2;
        puVar21 = (undefined8 *)((long)puVar16 + param_5 * -4);
        uVar15 = uVar11;
        do {
          uVar13 = puVar21[-2];
          uVar26 = puVar21[1];
          uVar25 = *puVar21;
          puVar16[-1] = puVar21[-1];
          puVar16[-2] = uVar13;
          puVar16[1] = uVar26;
          *puVar16 = uVar25;
          puVar16 = puVar16 + 4;
          puVar21 = puVar21 + 4;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
        puVar14 = (undefined8 *)((long)puVar14 + uVar11 * 4);
        puVar16 = puVar24;
        if (uVar20 == uVar11) goto LAB_109430dd8;
      }
      do {
        puVar21 = (undefined8 *)((long)puVar14 + 4);
        puVar16 = (undefined8 *)((long)puVar24 + 4);
        *(undefined4 *)puVar24 = *(undefined4 *)puVar14;
        puVar14 = puVar21;
        puVar24 = puVar16;
      } while (puVar21 < puVar10);
    }
LAB_109430dd8:
    param_1[1] = (long)puVar16;
    if (puVar10 != (undefined8 *)((long)param_2 + lVar23)) {
      _memmove((undefined8 *)((long)param_2 + lVar23),param_2);
    }
    goto LAB_109430e78;
  }
  lVar9 = param_4 - (lVar23 + (long)param_3);
  if (lVar9 != 0) {
    _memmove(puVar10,lVar23 + (long)param_3,lVar9);
  }
  puVar2 = (undefined4 *)((long)puVar10 + lVar9);
  param_1[1] = (long)puVar2;
  if (lVar23 >> 2 < 1) {
    return param_2;
  }
  puVar3 = (undefined4 *)((long)param_2 + param_5 * 4);
  puVar14 = (undefined8 *)(puVar2 + -param_5);
  puVar19 = puVar2;
  if (puVar14 < puVar10) {
    puVar19 = (undefined4 *)((long)param_3 + param_5 * 4);
    puVar16 = (undefined8 *)((long)param_2 + (param_4 - (long)puVar19) + 4);
    puVar24 = puVar10;
    if (puVar10 <= puVar16) {
      puVar24 = puVar16;
    }
    uVar20 = (long)puVar24 + (long)puVar19 + (~param_4 - (long)param_2);
    puVar17 = puVar2;
    if ((0x1b < uVar20) && (7 < param_5)) {
      uVar20 = (uVar20 >> 2) + 1;
      uVar11 = uVar20 & 0x7ffffffffffffff8;
      puVar16 = (undefined8 *)((long)param_2 + (param_4 - (long)param_3) + 0x10);
      puVar24 = (undefined8 *)((long)puVar16 + param_5 * -4);
      uVar15 = uVar11;
      do {
        uVar13 = puVar24[-2];
        uVar26 = puVar24[1];
        uVar25 = *puVar24;
        puVar16[-1] = puVar24[-1];
        puVar16[-2] = uVar13;
        puVar16[1] = uVar26;
        *puVar16 = uVar25;
        puVar16 = puVar16 + 4;
        puVar24 = puVar24 + 4;
        uVar15 = uVar15 - 8;
      } while (uVar15 != 0);
      puVar14 = (undefined8 *)((long)puVar14 + uVar11 * 4);
      puVar19 = puVar2 + uVar11;
      puVar17 = puVar2 + uVar11;
      if (uVar20 == uVar11) goto LAB_109430e4c;
    }
    do {
      puVar16 = (undefined8 *)((long)puVar14 + 4);
      puVar19 = puVar17 + 1;
      *puVar17 = *(undefined4 *)puVar14;
      puVar14 = puVar16;
      puVar17 = puVar19;
    } while (puVar16 < puVar10);
  }
LAB_109430e4c:
  param_1[1] = (long)puVar19;
  if (puVar2 != puVar3) {
    _memmove(puVar3,param_2);
  }
  if (puVar10 == param_2) {
    return param_2;
  }
LAB_109430e78:
  _memmove(param_2,param_3,lVar23);
  return param_2;
}



/* Entry: 109430eb0; end: 109430feb;  */

void FUN_109430eb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar12 = *(undefined1 **)(param_1 + 8);
  uVar8 = *param_2;
  *puVar12 = 1;
  *(undefined8 *)(puVar12 + 8) = uVar8;
  uVar8 = *param_3;
  *(undefined8 *)(puVar12 + 0x18) = param_3[1];
  *(undefined8 *)(puVar12 + 0x10) = uVar8;
  uVar8 = param_3[2];
  *(undefined8 *)(puVar12 + 0x28) = param_3[3];
  *(undefined8 *)(puVar12 + 0x20) = uVar8;
  uVar13 = param_3[5];
  uVar8 = param_3[4];
  uVar14 = param_3[6];
  uVar16 = param_3[9];
  uVar15 = param_3[8];
  *(undefined8 *)(puVar12 + 0x48) = param_3[7];
  *(undefined8 *)(puVar12 + 0x40) = uVar14;
  *(undefined8 *)(puVar12 + 0x58) = uVar16;
  *(undefined8 *)(puVar12 + 0x50) = uVar15;
  *(undefined8 *)(puVar12 + 0x38) = uVar13;
  *(undefined8 *)(puVar12 + 0x30) = uVar8;
  uVar8 = param_3[10];
  uVar14 = param_3[0xd];
  uVar13 = param_3[0xc];
  *(undefined8 *)(puVar12 + 0x68) = param_3[0xb];
  *(undefined8 *)(puVar12 + 0x60) = uVar8;
  *(undefined8 *)(puVar12 + 0x78) = uVar14;
  *(undefined8 *)(puVar12 + 0x70) = uVar13;
  uVar8 = param_3[0xe];
  *(undefined8 *)(puVar12 + 0x88) = param_3[0xf];
  *(undefined8 *)(puVar12 + 0x80) = uVar8;
  lVar9 = param_3[0x11];
  uVar8 = param_3[0x10];
  *(undefined8 *)(puVar12 + 0x98) = param_3[0x11];
  *(undefined8 *)(puVar12 + 0x90) = uVar8;
  *(undefined8 *)(puVar12 + 0xb0) = 0;
  *(undefined1 **)(puVar12 + 0xa0) = puVar12 + 0x68;
  *(undefined1 **)(puVar12 + 0xa8) = puVar12 + 0xb0;
  *(undefined8 *)(puVar12 + 0xb8) = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_3 + 0x54) < 3) {
    puVar10 = (undefined8 *)param_3[0x13];
    puVar11 = *(undefined8 **)(puVar12 + 0xa8);
    *puVar11 = *puVar10;
    puVar11[1] = puVar10[1];
  }
  else {
    *(undefined4 *)(puVar12 + 100) = 0;
    FUN_109a844cc(puVar12 + 0x60,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
    if (0 < *(int *)(puVar12 + 100)) {
      lVar9 = 0;
      lVar2 = param_3[0x12];
      lVar4 = param_3[0x13];
      lVar3 = *(long *)(puVar12 + 0xa0);
      lVar5 = *(long *)(puVar12 + 0xa8);
      do {
        *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
        *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(puVar12 + 100));
    }
  }
  *(undefined8 *)(puVar12 + 0xc0) = 0xbff0000000000000;
  *(undefined1 **)(param_1 + 8) = puVar12 + 0xd0;
  return;
}



/* Entry: 109430fec; end: 109431237;  */

long * FUN_109430fec(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar14 = param_1[1] - *param_1;
  uVar11 = (lVar14 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar11 < 0x13b13b13b13b13c) {
    lVar10 = param_1[2] - *param_1 >> 4;
    uVar13 = lVar10 * -0x6276276276276276;
    if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
      uVar13 = uVar11;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar10 * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x13b13b13b13b13b;
    }
    plStack_48 = param_1;
    if (uVar13 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_1;
      FUN_109428814(param_1,uVar13,0);
    }
    puVar2 = (undefined1 *)((long)plVar8 + lVar14);
    plStack_50 = plVar8 + uVar13 * 0x1a;
    lVar14 = *param_2;
    *puVar2 = 1;
    *(long *)(puVar2 + 8) = lVar14;
    uVar15 = *param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_3[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar15;
    uVar15 = param_3[2];
    *(undefined8 *)(puVar2 + 0x28) = param_3[3];
    *(undefined8 *)(puVar2 + 0x20) = uVar15;
    uVar16 = param_3[5];
    uVar15 = param_3[4];
    uVar17 = param_3[6];
    uVar19 = param_3[9];
    uVar18 = param_3[8];
    *(undefined8 *)(puVar2 + 0x48) = param_3[7];
    *(undefined8 *)(puVar2 + 0x40) = uVar17;
    *(undefined8 *)(puVar2 + 0x58) = uVar19;
    *(undefined8 *)(puVar2 + 0x50) = uVar18;
    *(undefined8 *)(puVar2 + 0x38) = uVar16;
    *(undefined8 *)(puVar2 + 0x30) = uVar15;
    uVar15 = param_3[10];
    uVar17 = param_3[0xd];
    uVar16 = param_3[0xc];
    *(undefined8 *)(puVar2 + 0x68) = param_3[0xb];
    *(undefined8 *)(puVar2 + 0x60) = uVar15;
    *(undefined8 *)(puVar2 + 0x78) = uVar17;
    *(undefined8 *)(puVar2 + 0x70) = uVar16;
    uVar15 = param_3[0xe];
    *(undefined8 *)(puVar2 + 0x88) = param_3[0xf];
    *(undefined8 *)(puVar2 + 0x80) = uVar15;
    lVar14 = param_3[0x11];
    uVar15 = param_3[0x10];
    *(undefined8 *)(puVar2 + 0x98) = param_3[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar15;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined1 **)(puVar2 + 0xa0) = puVar2 + 0x68;
    *(undefined1 **)(puVar2 + 0xa8) = puVar2 + 0xb0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    if (lVar14 != 0) {
      piVar1 = (int *)(lVar14 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plStack_68 = plVar8;
    plStack_60 = (long *)puVar2;
    plStack_58 = (long *)puVar2;
    if (*(int *)((long)param_3 + 0x54) < 3) {
      puVar9 = (undefined8 *)param_3[0x13];
      puVar12 = *(undefined8 **)(puVar2 + 0xa8);
      *puVar12 = *puVar9;
      puVar12[1] = puVar9[1];
    }
    else {
      *(undefined4 *)(puVar2 + 100) = 0;
      FUN_109a844cc(puVar2 + 0x60,*(undefined4 *)((long)param_3 + 0x54),0,0,0);
      if (0 < *(int *)(puVar2 + 100)) {
        lVar14 = 0;
        lVar10 = param_3[0x12];
        lVar4 = param_3[0x13];
        lVar3 = *(long *)(puVar2 + 0xa0);
        lVar5 = *(long *)(puVar2 + 0xa8);
        do {
          *(undefined4 *)(lVar3 + lVar14 * 4) = *(undefined4 *)(lVar10 + lVar14 * 4);
          *(undefined8 *)(lVar5 + lVar14 * 8) = *(undefined8 *)(lVar4 + lVar14 * 8);
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(puVar2 + 100));
      }
    }
    *(undefined8 *)(puVar2 + 0xc0) = 0xbff0000000000000;
    plStack_58 = (long *)((long)plStack_58 + 0xd0);
    puVar2 = (undefined1 *)((long)plStack_60 + (*param_1 - param_1[1]));
    FUN_10942cdf0(param_1,*param_1,param_1[1],puVar2);
    plVar8 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = (long)puVar2;
    lVar14 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar14;
    FUN_10942d114(&plStack_68);
    return plVar8;
  }
  FUN_109428800();
  FUN_10942d114(&plStack_68);
  __Unwind_Resume(param_1);
  if (param_2 != (long *)0x0) {
    FUN_109431238();
    FUN_109431238(param_1,param_2[1]);
    if (param_2[5] != 0) {
      param_2[6] = param_2[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return param_2;
  }
  return param_1;
}



/* Entry: 109431238; end: 109431287;  */

void FUN_109431238(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109431238(param_1,*param_2);
    FUN_109431238(param_1,param_2[1]);
    if (param_2[5] != 0) {
      param_2[6] = param_2[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109431288; end: 10943174b;  */

long * FUN_109431288(long *param_1,ulong param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar3 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar3 = uVar3 ^ uVar3 >> 0x2f;
  uVar12 = uVar3 * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar12;
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar12;
      if (uVar6 <= uVar12) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar12 / uVar6;
        }
        unaff_x24 = uVar12 - uVar9 * uVar6;
      }
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar6 & uVar4) == 0) {
        do {
          if (plVar7[1] == uVar12) {
            if (plVar7[2] == param_2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar4) != unaff_x24) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar4 == uVar12) {
            if (plVar7[2] == param_2) {
              return plVar7;
            }
          }
          else {
            if (uVar6 <= uVar4) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar9 * uVar6;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar12;
  plVar7[2] = *param_3;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar6 = param_1[1];
    }
    if (uVar6 < uVar4) {
LAB_10943146c:
      if (uVar4 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109431738);
        (*pcVar1)();
      }
      lVar8 = uVar4 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar8;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      uVar6 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
      plVar10 = param_1 + 2;
      plVar5 = (long *)*plVar10;
      if (plVar5 != (long *)0x0) {
        uVar6 = plVar5[1];
        uVar9 = uVar4 - 1;
        if ((uVar4 & uVar9) != 0) {
          if (uVar4 <= uVar6) {
            uVar9 = 0;
            if (uVar4 != 0) {
              uVar9 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar9 * uVar4;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar10;
          plVar10 = (long *)*plVar5;
joined_r0x0001094314e4:
          if (plVar10 != (long *)0x0) {
            do {
              uVar9 = plVar10[1];
              if (uVar4 <= uVar9) {
                uVar11 = 0;
                if (uVar4 != 0) {
                  uVar11 = uVar9 / uVar4;
                }
                uVar9 = uVar9 - uVar11 * uVar4;
              }
              if (uVar9 != uVar6) {
                lVar8 = *param_1;
                if (*(long *)(lVar8 + uVar9 * 8) == 0) goto code_r0x000109431540;
                *plVar5 = *plVar10;
                *plVar10 = **(long **)(lVar8 + uVar9 * 8);
                **(undefined8 **)(lVar8 + uVar9 * 8) = plVar10;
                plVar10 = plVar5;
              }
              plVar5 = plVar10;
              plVar10 = (long *)*plVar5;
              if (plVar10 == (long *)0x0) break;
            } while( true );
          }
          goto LAB_1094315b8;
        }
        uVar6 = uVar6 & uVar9;
        *(long **)(*param_1 + uVar6 * 8) = plVar10;
        for (plVar10 = (long *)*plVar5; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          uVar11 = plVar10[1] & uVar9;
          if (uVar11 != uVar6) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar11 * 8) == 0) {
              *(long **)(lVar8 + uVar11 * 8) = plVar5;
              uVar6 = uVar11;
            }
            else {
              *plVar5 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar8 + uVar11 * 8);
              **(long **)(lVar8 + uVar11 * 8) = (long)plVar10;
              plVar10 = plVar5;
            }
          }
          plVar5 = plVar10;
        }
      }
LAB_1094315b8:
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) == 0) goto LAB_1094315c8;
LAB_1094316f8:
      if (uVar4 <= uVar12) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar12 / uVar4;
        }
        unaff_x24 = uVar12 - uVar6 * uVar4;
        lVar8 = *param_1;
        plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
        goto joined_r0x0001094313fc;
      }
      lVar8 = *param_1;
      plVar5 = *(long **)(lVar8 + uVar3 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar12;
    }
    else {
      if (uVar4 < uVar6) {
        uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar4 <= uVar9) {
          uVar4 = uVar9;
        }
        if (uVar4 < uVar6) {
          if (uVar4 != 0) goto LAB_10943146c;
          lVar8 = *param_1;
          *param_1 = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          uVar4 = 0;
          param_1[1] = 0;
          uVar6 = 0xffffffffffffffff;
          goto LAB_1094315c8;
        }
        uVar6 = param_1[1];
      }
      uVar4 = uVar6;
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) != 0) goto LAB_1094316f8;
LAB_1094315c8:
      lVar8 = *param_1;
      plVar5 = *(long **)(lVar8 + (uVar6 & uVar12) * 8);
      unaff_x24 = uVar6 & uVar12;
    }
    if (plVar5 != (long *)0x0) goto LAB_109431400;
LAB_1094315d8:
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_109431680;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar3 * uVar4;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    lVar8 = *param_1;
    plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
    uVar4 = uVar6;
joined_r0x0001094313fc:
    if (plVar5 == (long *)0x0) goto LAB_1094315d8;
LAB_109431400:
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_109431680:
  param_1[3] = param_1[3] + 1;
  return plVar7;
code_r0x000109431540:
  *(long **)(lVar8 + uVar9 * 8) = plVar5;
  plVar5 = plVar10;
  plVar10 = (long *)*plVar10;
  uVar6 = uVar9;
  goto joined_r0x0001094314e4;
}



/* Entry: 10943174c; end: 1094317a3;  */

long * FUN_10943174c(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      lStack_28 = lVar1 + 0x18;
      FUN_10942b9e0(&lStack_28);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1094317a4; end: 1094319bb;  */

undefined8 * FUN_1094317a4(undefined8 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar5 = (undefined8 *)0xa8;
  __Znwm();
  puVar5[8] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 9) = 0x3f800000;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar5 + 0xe) = 0x3f800000;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  puVar6 = (undefined8 *)0xd8;
  __Znwm();
  puVar5[0x10] = puVar6 + 0x1b;
  puVar5[0x11] = puVar6 + 0x1b;
  *puVar6 = 0xffffffff;
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[9] = 0xffffffff;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0xffffffff;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x16] = 0;
  puVar6[0x15] = 0;
  puVar6[0x18] = 0;
  puVar6[0x17] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x19] = 0;
  puVar5[0xf] = puVar6;
  uVar7 = *(undefined8 *)(param_2 + 6);
  puVar5[0x13] = *(undefined8 *)(param_2 + 8);
  puVar5[0x12] = uVar7;
  puVar5[0x14] = *(undefined8 *)(param_2 + 10);
  param_1[8] = puVar5;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  uVar7 = *(undefined8 *)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 4);
  param_1[0x22] = uVar7;
  param_1[0x23] = lVar2;
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = *param_2;
    param_1[0x25] = uVar7;
    param_1[0x26] = 0;
  }
  else {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = *(undefined8 *)(param_2 + 2);
    lVar2 = *(long *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x24) = *param_2;
    param_1[0x25] = uVar7;
    param_1[0x26] = lVar2;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 6);
  param_1[0x29] = *(undefined8 *)(param_2 + 10);
  param_1[0x28] = uVar8;
  param_1[0x27] = uVar7;
  return param_1;
}



/* Entry: 1094319bc; end: 109431b6b;  */

long * FUN_1094319bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_109435f4c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109431b6c; end: 109431d4b;  */

void FUN_109431b6c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puStack_60;
  long lStack_58;
  char cStack_49;
  long lStack_48;
  
  if (*(long *)(param_2 + 0x30) != 0) {
    puVar2 = (undefined8 *)0x100;
    __Znwm();
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
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0x3ff0000000000000;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[6] = 0;
    puVar2[10] = 0x3ff0000000000000;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0x3ff0000000000000;
    puVar2[0xf] = 0;
    puVar2[0x12] = 0x3ff0000000000000;
    puVar2[0x14] = 0x3ff0000000000000;
    *(undefined1 *)(puVar2 + 0x16) = 0;
    *(undefined1 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)((long)puVar2 + 0xe4) = 0;
    *puVar2 = &PTR_FUN_110af6b38;
    puVar2[0x1e] = 0;
    *param_1 = puVar2;
    FUN_10942281c(&puStack_60,*(undefined8 *)(param_2 + 0x40),param_3);
    puVar4 = puStack_60;
    puStack_60 = (undefined4 *)0x0;
    lVar3 = lStack_58;
    while (lStack_48 != 0) {
      lStack_48 = *(long *)lStack_48;
      lStack_58 = lVar3;
      __ZdlPv();
      lVar3 = lStack_58;
    }
    lStack_58 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    puVar1 = puStack_60;
    puStack_60 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1094303c4();
      __ZdlPv();
    }
    lVar3 = puVar2[0x1e];
    puVar2[0x1e] = puVar4;
    if (lVar3 != 0) {
      FUN_1094303c4();
      __ZdlPv();
      puVar4 = (undefined4 *)puVar2[0x1e];
    }
    *(undefined4 *)(puVar2 + 1) = *puVar4;
    return;
  }
  FUN_10937e740(&puStack_60,&UNK_10f56d588);
  FUN_109388c6c(1,&UNK_10f56d502,&UNK_10f56d581,0xf8,&puStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(puStack_60);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 109431d4c; end: 10943356f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109431d4c(long *param_1,undefined8 *******param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  ulong *puVar5;
  char cVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *****pppppuVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  bool bVar25;
  int iVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 ******ppppppuVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  ulong *puVar35;
  long *plVar36;
  ulong uVar37;
  undefined8 *******pppppppuVar38;
  undefined8 ******ppppppuVar39;
  undefined8 ******ppppppuVar40;
  undefined8 ******ppppppuVar41;
  undefined8 ******ppppppuVar42;
  double dVar43;
  long *plStack_2e0;
  undefined8 *****pppppuStack_2c8;
  undefined8 *****pppppuStack_2c0;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 ******ppppppuStack_298;
  undefined8 ******ppppppuStack_290;
  long lStack_280;
  long lStack_278;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 *******pppppppuStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  undefined8 uStack_210;
  int iStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 ******ppppppuStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 ******ppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_2 + 0x3a) == 3) {
    if (param_1[5] == 0) {
      pppppppuStack_110 = (undefined8 *******)((ulong)pppppppuStack_110 & 0xffffffffffffff00);
      pppppppuStack_118 = (undefined8 *******)0x400000000;
      pppppppuStack_120 = (undefined8 *******)0x1500000015;
      lVar9 = 0x60;
      __Znwm();
      FUN_10939d65c();
      plVar10 = (long *)param_1[5];
      param_1[5] = lVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    ppppppuStack_1d0 = (undefined8 ******)0x0;
    lStack_1c8 = 0;
    uStack_1c0 = 0;
    ppppppuStack_1e8 = (undefined8 ******)0x0;
    ppppppuStack_1e0 = (undefined8 ******)0x0;
    uStack_1d8 = 0;
    pppppppuVar38 = param_2 + 2;
    pppppppuStack_110 = (undefined8 *******)0x4000000000000000;
    lStack_f0 = 0x4010000000000000;
    lStack_f8 = 0x4014000000000000;
    lStack_e0 = 0x3fd0000000000000;
    uStack_e8 = 0x400c000000000000;
    lStack_d0 = 3000;
    lStack_d8 = 1000;
    lStack_c0 = 5;
    lStack_c8 = 3;
    lStack_b0 = 0x14;
    lStack_b8 = 0x5dc;
    lStack_a8 = 0x1e00000046;
    pppppppuStack_118 = (undefined8 *******)CONCAT44(pppppppuStack_118._4_4_,4);
    iVar26 = *(int *)((long)param_2 + 0x14);
    if (*(int *)pppppppuVar38 <= *(int *)((long)param_2 + 0x14)) {
      iVar26 = *(int *)pppppppuVar38;
    }
    plStack_100 = (long *)0xa00000001;
    plStack_108 = (long *)0x15e0000001e;
    pppppppuStack_120 = (undefined8 *******)(ulong)CONCAT14(599 < iVar26,5);
    FUN_10944cbd8(param_2,&ppppppuStack_1d0,&ppppppuStack_1e8,&pppppppuStack_120,1);
    lVar9 = param_1[0x22];
    lVar31 = param_1[0x23];
    if (lVar31 != 0) {
      plVar10 = (long *)(lVar31 + 8);
      do {
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar25) {
          *plVar10 = *plVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plStack_250 = (long *)0x0;
    plStack_248 = (long *)0x0;
    ppppppuStack_198 = (undefined8 ******)0x0;
    ppppppuStack_190 = (undefined8 ******)0x0;
    plVar10 = (long *)0xd0;
    pppppppuStack_268 = &ppppppuStack_1d0;
    pppppppuStack_260 = &ppppppuStack_1e8;
    pppppppuStack_258 = param_2;
    pppppppuStack_1b0 = &ppppppuStack_1d0;
    pppppppuStack_1a8 = &ppppppuStack_1e8;
    pppppppuStack_1a0 = param_2;
    pppppppuStack_120 = &ppppppuStack_1d0;
    pppppppuStack_118 = &ppppppuStack_1e8;
    pppppppuStack_110 = param_2;
    plStack_108 = (long *)lVar9;
    plStack_100 = (long *)lVar31;
    __Znwm();
    plVar36 = plVar10 + 1;
    *plVar36 = 0;
    plVar14 = plVar10 + 3;
    *plVar14 = 0x32aaaba7;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0x3cb0b1bb;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
    plVar10[0xf] = 0;
    plVar10[0xe] = 0;
    plVar10[0x10] = 0;
    *plVar10 = (long)&PTR_FUN_110af5f98;
    plVar10[0x16] = (long)pppppppuStack_260;
    plVar10[0x15] = (long)pppppppuStack_268;
    plVar10[0x17] = (long)pppppppuStack_258;
    plVar10[0x18] = lVar9;
    plVar10[0x19] = lVar31;
    plStack_108 = (long *)0x0;
    plStack_100 = (long *)0x0;
    *(undefined4 *)(plVar10 + 0x11) = 8;
    __ZNSt3__15mutex4lockEv(plVar14);
    if ((*(uint *)(plVar10 + 0x11) >> 1 & 1) != 0) goto LAB_1094332ac;
    do {
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar25) {
        *plVar36 = *plVar36 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(uint *)(plVar10 + 0x11) = *(uint *)(plVar10 + 0x11) | 2;
    __ZNSt3__15mutex6unlockEv(plVar14);
    do {
      lVar9 = *plVar36;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar25) {
        *plVar36 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    plVar14 = plStack_100;
    if (plStack_100 != (long *)0x0) {
      plVar27 = plStack_100 + 1;
      do {
        lVar9 = *plVar27;
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar25) {
          *plVar27 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    ppppppuVar30 = ppppppuStack_190;
    if (ppppppuStack_190 != (undefined8 ******)0x0) {
      ppppppuVar39 = ppppppuStack_190 + 1;
      do {
        pppppuVar19 = *ppppppuVar39;
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
        if (bVar25) {
          *ppppppuVar39 = (undefined8 *****)((long)pppppuVar19 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppppuVar19 == (undefined8 *****)0x0) {
        (*(code *)(*ppppppuStack_190)[2])(ppppppuStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar30);
      }
    }
    plVar14 = plStack_248;
    if (plStack_248 != (long *)0x0) {
      plVar27 = plStack_248 + 1;
      do {
        lVar9 = *plVar27;
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar25) {
          *plVar27 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_248 + 0x10))(plStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    ppppppuVar30 = param_2[0x22];
    pppppuVar19 = ppppppuVar30[2];
    uVar28 = (ulong)pppppuVar19 >> 0x20;
    iVar26 = (int)pppppuVar19;
    if (uVar28 == 0 && iVar26 == 0) {
      uVar28 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = (long)(((long)pppppuVar19 << 0x20) * uVar28) >> 0x20;
      __Znam();
      if (0 < (int)((ulong)pppppuVar19 >> 0x20)) {
        uVar37 = 0;
        lVar33 = ((long)pppppuVar19 << 0x20) >> 0x20;
        lVar31 = lVar9;
        do {
          _memcpy(lVar31,(undefined8 *****)
                         ((long)ppppppuVar30[1] + uVar37 * (long)*(int *)(ppppppuVar30 + 3)),lVar33)
          ;
          uVar37 = uVar37 + 1;
          lVar31 = lVar31 + lVar33;
        } while (uVar28 != uVar37);
      }
    }
    ppuStack_220 = &PTR_FUN_110af4c80;
    uStack_210 = CONCAT44((int)uVar28,iVar26);
    lStack_218 = lVar9;
    iStack_208 = iVar26;
    FUN_1093fb548(&puStack_200,&ppuStack_220,5);
    ppuStack_220 = &PTR_FUN_110af4c80;
    if (lStack_218 != 0) {
      __ZdaPv();
    }
    lStack_218 = 0;
    uStack_210 = 0;
    iStack_208 = 0;
    pppppppuStack_238 = (undefined8 *******)0x0;
    pppppppuStack_230 = (undefined8 *******)0x0;
    pppppppuStack_228 = (undefined8 *******)0x0;
    iVar26 = *(int *)param_1[8];
    if (iVar26 == 0) {
      plVar14 = plVar10;
      FUN_109436df8(plVar10);
      pppppppuStack_1b0 = (undefined8 *******)0x0;
      pppppppuStack_1a8 = (undefined8 *******)0x0;
      pppppppuStack_1a0 = (undefined8 *******)0x0;
      FUN_1094335d4(&pppppppuStack_120,pppppppuVar38,&puStack_200,plVar14,0,0,param_1[5]);
      pppppppuStack_268 = &pppppppuStack_1b0;
      FUN_109427be4(&pppppppuStack_268);
      FUN_109422320(param_1[8],&pppppppuStack_120);
      if (pppppppuStack_118 == pppppppuStack_120) {
        bVar25 = false;
      }
      else {
        lVar9 = 0;
        uVar28 = 0;
        lVar31 = 0xb0;
        pppppppuVar17 = pppppppuStack_118;
        pppppppuVar20 = pppppppuStack_120;
        do {
          iVar26 = *(int *)((long)pppppppuVar20 + lVar31);
          if (-1 < iVar26) {
            plVar14 = param_1;
            FUN_109435a20(param_1,*(undefined8 *)((long)plStack_108 + lVar9),
                          (long)plStack_108 + lVar9);
            *(int *)(plVar14 + 3) = iVar26;
            pppppppuVar17 = pppppppuStack_118;
            pppppppuVar20 = pppppppuStack_120;
          }
          uVar28 = uVar28 + 1;
          uVar37 = ((long)pppppppuVar17 - (long)pppppppuVar20 >> 6) * -0x5555555555555555;
          lVar9 = lVar9 + 8;
          lVar31 = lVar31 + 0xc0;
        } while (uVar28 < uVar37);
        bVar25 = 0x31 < uVar37;
      }
      if (plStack_108 != (long *)0x0) {
        plStack_100 = plStack_108;
        __ZdlPv();
      }
      pppppppuStack_1b0 = &pppppppuStack_120;
      FUN_109427be4(&pppppppuStack_1b0);
      if (bVar25) goto LAB_1094324ec;
    }
    else {
      if (iVar26 == 1) {
LAB_1094324ec:
        (**(code **)(*(long *)param_1[5] + 0x20))((long *)param_1[5],&puStack_200);
      }
      else if (iVar26 == 3) {
        (**(code **)(*(long *)param_1[5] + 0x20))((long *)param_1[5],&puStack_200);
        FUN_10944d620(param_1[7],param_2,&puStack_200,&ppppppuStack_1d0,&ppppppuStack_1e8);
        lVar9 = param_1[7];
        if (*(int *)(lVar9 + 0x88) == 2) {
          puVar13 = *(undefined8 **)(lVar9 + 0x1f8);
          for (puVar12 = *(undefined8 **)(lVar9 + 0x1f0);
              (pppppppuVar17 = pppppppuStack_230, puVar12 != puVar13 &&
              (*(int *)((long)puVar12 + 0x6c) != 0)); puVar12 = puVar12 + 0x1a) {
            if (pppppppuStack_230 < pppppppuStack_228) {
              ppppppuVar30 = (undefined8 ******)*puVar12;
              pppppppuStack_230[1] = (undefined8 ******)puVar12[1];
              *pppppppuVar17 = ppppppuVar30;
              ppppppuVar30 = (undefined8 ******)puVar12[2];
              pppppppuVar17[3] = (undefined8 ******)puVar12[3];
              pppppppuVar17[2] = ppppppuVar30;
              ppppppuVar30 = (undefined8 ******)puVar12[4];
              pppppppuVar17[5] = (undefined8 ******)puVar12[5];
              pppppppuVar17[4] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)puVar12[7];
              ppppppuVar30 = (undefined8 ******)puVar12[6];
              ppppppuVar40 = (undefined8 ******)puVar12[8];
              ppppppuVar42 = (undefined8 ******)puVar12[0xb];
              ppppppuVar41 = (undefined8 ******)puVar12[10];
              pppppppuVar17[9] = (undefined8 ******)puVar12[9];
              pppppppuVar17[8] = ppppppuVar40;
              pppppppuVar17[0xb] = ppppppuVar42;
              pppppppuVar17[10] = ppppppuVar41;
              pppppppuVar17[7] = ppppppuVar39;
              pppppppuVar17[6] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)puVar12[0xd];
              ppppppuVar30 = (undefined8 ******)puVar12[0xc];
              ppppppuVar40 = (undefined8 ******)puVar12[0xe];
              pppppppuVar17[0xf] = (undefined8 ******)puVar12[0xf];
              pppppppuVar17[0xe] = ppppppuVar40;
              ppppppuVar40 = (undefined8 ******)puVar12[0x10];
              pppppppuVar17[0x11] = (undefined8 ******)puVar12[0x11];
              pppppppuVar17[0x10] = ppppppuVar40;
              lVar9 = puVar12[0x13];
              ppppppuVar41 = (undefined8 ******)puVar12[0x13];
              ppppppuVar40 = (undefined8 ******)puVar12[0x12];
              pppppppuVar17[0x16] = (undefined8 ******)0x0;
              pppppppuVar17[0x13] = ppppppuVar41;
              pppppppuVar17[0x12] = ppppppuVar40;
              pppppppuVar17[0x14] = pppppppuVar17 + 0xd;
              pppppppuVar17[0x15] = pppppppuVar17 + 0x16;
              pppppppuVar17[0x17] = (undefined8 ******)0x0;
              pppppppuVar17[0xd] = ppppppuVar39;
              pppppppuVar17[0xc] = ppppppuVar30;
              if (lVar9 != 0) {
                piVar1 = (int *)(lVar9 + 0x14);
                do {
                  cVar6 = '\x01';
                  bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar25) {
                    *piVar1 = *piVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (*(int *)((long)puVar12 + 100) < 3) {
                puVar15 = (undefined8 *)puVar12[0x15];
                ppppppuVar30 = pppppppuVar17[0x15];
                *ppppppuVar30 = (undefined8 *****)*puVar15;
                ppppppuVar30[1] = (undefined8 *****)puVar15[1];
              }
              else {
                *(undefined4 *)((long)pppppppuVar17 + 100) = 0;
                FUN_109a844cc(pppppppuVar17 + 0xc,*(undefined4 *)((long)puVar12 + 100),0,0,0);
                if (0 < *(int *)((long)pppppppuVar17 + 100)) {
                  lVar9 = 0;
                  lVar31 = puVar12[0x14];
                  lVar33 = puVar12[0x15];
                  ppppppuVar30 = pppppppuVar17[0x14];
                  ppppppuVar39 = pppppppuVar17[0x15];
                  do {
                    *(undefined4 *)((long)ppppppuVar30 + lVar9 * 4) =
                         *(undefined4 *)(lVar31 + lVar9 * 4);
                    ppppppuVar39[lVar9] = *(undefined8 ******)(lVar33 + lVar9 * 8);
                    lVar9 = lVar9 + 1;
                  } while (lVar9 < *(int *)((long)pppppppuVar17 + 100));
                }
              }
              pppppppuVar17[0x18] = (undefined8 ******)puVar12[0x18];
              pppppppuVar17 = pppppppuVar17 + 0x1a;
            }
            else {
              pppppppuVar17 = &pppppppuStack_238;
              FUN_10942cbb8(pppppppuVar17,puVar12);
            }
            pppppppuStack_230 = pppppppuVar17;
          }
        }
        if (pppppppuStack_238 == pppppppuStack_230) {
          pppppppuStack_1a8 = (undefined8 *******)param_2[0x11];
          pppppppuStack_1b0 = (undefined8 *******)param_2[0x10];
          ppppppuStack_198 = param_2[0x13];
          pppppppuStack_1a0 = (undefined8 *******)param_2[0x12];
          ppppppuStack_188 = param_2[0x15];
          ppppppuStack_190 = param_2[0x14];
          ppppppuStack_180 = param_2[0x16];
          ppppppuStack_148 = param_2[0x1d];
          ppppppuStack_150 = param_2[0x1c];
          ppppppuStack_138 = param_2[0x1f];
          ppppppuStack_140 = param_2[0x1e];
          ppppppuStack_130 = param_2[0x20];
          ppppppuStack_168 = param_2[0x19];
          ppppppuStack_170 = param_2[0x18];
          ppppppuStack_158 = param_2[0x1b];
          ppppppuStack_160 = param_2[0x1a];
          FUN_109388a48(&pppppppuStack_120,param_2 + 0x28,&pppppppuStack_1b0);
          FUN_109433ee0(param_1,param_2,&pppppppuStack_120);
          FUN_10944d620(param_1[7],param_2,&puStack_200,&ppppppuStack_1d0,&ppppppuStack_1e8);
          pppppppuVar20 = pppppppuStack_238;
          for (pppppppuVar17 = pppppppuStack_230; pppppppuVar17 != pppppppuVar20;
              pppppppuVar17 = pppppppuVar17 + -0x1a) {
            if (pppppppuVar17[-7] != (undefined8 ******)0x0) {
              piVar1 = (int *)((long)pppppppuVar17[-7] + 0x14);
              do {
                iVar26 = *piVar1;
                cVar6 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar25) {
                  *piVar1 = iVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar26 + -1 == 0) {
                if (pppppppuVar17[-7] != (undefined8 ******)0x0) {
                  ppppppuVar30 = (undefined8 ******)pppppppuVar17[-7][1];
                  if (((ppppppuVar30 == (undefined8 ******)0x0) &&
                      (ppppppuVar30 = pppppppuVar17[-8], pppppppuVar17[-8] == (undefined8 ******)0x0
                      )) && (ppppppuVar30 = ppppppuRam000000011382bb80,
                            ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                    FUN_109a83e3c();
                    ppppppuVar30 = ppppppuRam000000011382bb80;
                  }
                  (*(code *)(*ppppppuVar30)[6])();
                }
                pppppppuVar17[-7] = (undefined8 ******)0x0;
              }
            }
            pppppppuVar17[-7] = (undefined8 ******)0x0;
            pppppppuVar17[-0xb] = (undefined8 ******)0x0;
            pppppppuVar17[-0xc] = (undefined8 ******)0x0;
            pppppppuVar17[-9] = (undefined8 ******)0x0;
            pppppppuVar17[-10] = (undefined8 ******)0x0;
            if (0 < *(int *)((long)pppppppuVar17 + -0x6c)) {
              lVar9 = 0;
              ppppppuVar30 = pppppppuVar17[-6];
              do {
                *(undefined4 *)((long)ppppppuVar30 + lVar9 * 4) = 0;
                lVar9 = lVar9 + 1;
              } while (lVar9 < *(int *)((long)pppppppuVar17 + -0x6c));
            }
            pppppppuVar16 = (undefined8 *******)pppppppuVar17[-5];
            if (pppppppuVar16 != pppppppuVar17 + -4 && pppppppuVar16 != (undefined8 *******)0x0) {
              _free(pppppppuVar16[-1]);
            }
          }
          pppppppuStack_230 = pppppppuVar20;
          puVar13 = *(undefined8 **)(param_1[7] + 0x1f8);
          for (puVar12 = *(undefined8 **)(param_1[7] + 0x1f0); puVar12 != puVar13;
              puVar12 = puVar12 + 0x1a) {
            while( true ) {
              pppppppuVar17 = pppppppuStack_230;
              if (*(int *)((long)puVar12 + 0x6c) == 0) goto LAB_109432500;
              if (pppppppuStack_228 <= pppppppuStack_230) break;
              ppppppuVar30 = (undefined8 ******)*puVar12;
              pppppppuStack_230[1] = (undefined8 ******)puVar12[1];
              *pppppppuVar17 = ppppppuVar30;
              ppppppuVar30 = (undefined8 ******)puVar12[2];
              pppppppuVar17[3] = (undefined8 ******)puVar12[3];
              pppppppuVar17[2] = ppppppuVar30;
              ppppppuVar30 = (undefined8 ******)puVar12[4];
              pppppppuVar17[5] = (undefined8 ******)puVar12[5];
              pppppppuVar17[4] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)puVar12[7];
              ppppppuVar30 = (undefined8 ******)puVar12[6];
              ppppppuVar40 = (undefined8 ******)puVar12[8];
              ppppppuVar42 = (undefined8 ******)puVar12[0xb];
              ppppppuVar41 = (undefined8 ******)puVar12[10];
              pppppppuVar17[9] = (undefined8 ******)puVar12[9];
              pppppppuVar17[8] = ppppppuVar40;
              pppppppuVar17[0xb] = ppppppuVar42;
              pppppppuVar17[10] = ppppppuVar41;
              pppppppuVar17[7] = ppppppuVar39;
              pppppppuVar17[6] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)puVar12[0xd];
              ppppppuVar30 = (undefined8 ******)puVar12[0xc];
              ppppppuVar40 = (undefined8 ******)puVar12[0xe];
              pppppppuVar17[0xf] = (undefined8 ******)puVar12[0xf];
              pppppppuVar17[0xe] = ppppppuVar40;
              ppppppuVar40 = (undefined8 ******)puVar12[0x10];
              pppppppuVar17[0x11] = (undefined8 ******)puVar12[0x11];
              pppppppuVar17[0x10] = ppppppuVar40;
              lVar9 = puVar12[0x13];
              ppppppuVar41 = (undefined8 ******)puVar12[0x13];
              ppppppuVar40 = (undefined8 ******)puVar12[0x12];
              pppppppuVar17[0x16] = (undefined8 ******)0x0;
              pppppppuVar17[0x13] = ppppppuVar41;
              pppppppuVar17[0x12] = ppppppuVar40;
              pppppppuVar17[0x14] = pppppppuVar17 + 0xd;
              pppppppuVar17[0x15] = pppppppuVar17 + 0x16;
              pppppppuVar17[0x17] = (undefined8 ******)0x0;
              pppppppuVar17[0xd] = ppppppuVar39;
              pppppppuVar17[0xc] = ppppppuVar30;
              if (lVar9 != 0) {
                piVar1 = (int *)(lVar9 + 0x14);
                do {
                  cVar6 = '\x01';
                  bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar25) {
                    *piVar1 = *piVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (*(int *)((long)puVar12 + 100) < 3) {
                puVar15 = (undefined8 *)puVar12[0x15];
                ppppppuVar30 = pppppppuVar17[0x15];
                *ppppppuVar30 = (undefined8 *****)*puVar15;
                ppppppuVar30[1] = (undefined8 *****)puVar15[1];
              }
              else {
                *(undefined4 *)((long)pppppppuVar17 + 100) = 0;
                FUN_109a844cc(pppppppuVar17 + 0xc,*(undefined4 *)((long)puVar12 + 100),0,0,0);
                if (0 < *(int *)((long)pppppppuVar17 + 100)) {
                  lVar9 = 0;
                  lVar31 = puVar12[0x14];
                  lVar33 = puVar12[0x15];
                  ppppppuVar30 = pppppppuVar17[0x14];
                  ppppppuVar39 = pppppppuVar17[0x15];
                  do {
                    *(undefined4 *)((long)ppppppuVar30 + lVar9 * 4) =
                         *(undefined4 *)(lVar31 + lVar9 * 4);
                    ppppppuVar39[lVar9] = *(undefined8 ******)(lVar33 + lVar9 * 8);
                    lVar9 = lVar9 + 1;
                  } while (lVar9 < *(int *)((long)pppppppuVar17 + 100));
                }
              }
              pppppppuVar17[0x18] = (undefined8 ******)puVar12[0x18];
              pppppppuStack_230 = pppppppuVar17 + 0x1a;
              puVar12 = puVar12 + 0x1a;
              if (puVar12 == puVar13) goto LAB_109432500;
            }
            pppppppuVar17 = &pppppppuStack_238;
            FUN_10942cbb8(pppppppuVar17,puVar12);
            pppppppuStack_230 = pppppppuVar17;
          }
        }
      }
LAB_109432500:
      FUN_109434390(&pppppppuStack_268,*(undefined8 *)(param_1[5] + 0x20),
                    *(undefined8 *)(param_1[5] + 0x28),param_1);
      FUN_10942099c(param_1[8],param_2,&pppppppuStack_268,&pppppppuStack_238);
      dVar43 = (double)(ulong)(*(long *)(param_1[5] + 0x28) - *(long *)(param_1[5] + 0x20) >> 3);
      if ((dVar43 < (double)(ulong)((lStack_1c8 - (long)ppppppuStack_1d0 >> 4) * 0x2e8ba2e8ba2e8ba3)
                    * 0.7) &&
         (plVar14 = plVar10, FUN_109436df8(),
         dVar43 < (double)(ulong)((plVar14[1] - *plVar14 >> 4) * 0x2e8ba2e8ba2e8ba3) * 0.7)) {
        plVar14 = plVar10;
        FUN_109436df8(plVar10);
        FUN_1094335d4(&pppppppuStack_120,pppppppuVar38,&puStack_200,plVar14,pppppppuStack_268,
                      pppppppuStack_260,param_1[5]);
        FUN_109422320(param_1[8],&pppppppuStack_120);
        if (pppppppuStack_118 != pppppppuStack_120) {
          lVar9 = 0;
          uVar28 = 0;
          lVar31 = 0xb0;
          pppppppuVar17 = pppppppuStack_118;
          pppppppuVar20 = pppppppuStack_120;
          do {
            iVar26 = *(int *)((long)pppppppuVar20 + lVar31);
            if (-1 < iVar26) {
              plVar14 = param_1;
              FUN_109435a20(param_1,*(undefined8 *)((long)plStack_108 + lVar9),
                            (long)plStack_108 + lVar9);
              *(int *)(plVar14 + 3) = iVar26;
              pppppppuVar17 = pppppppuStack_118;
              pppppppuVar20 = pppppppuStack_120;
            }
            uVar28 = uVar28 + 1;
            lVar9 = lVar9 + 8;
            lVar31 = lVar31 + 0xc0;
          } while (uVar28 < (ulong)(((long)pppppppuVar17 - (long)pppppppuVar20 >> 6) *
                                   -0x5555555555555555));
        }
        if (plStack_108 != (long *)0x0) {
          plStack_100 = plStack_108;
          __ZdlPv();
        }
        pppppppuStack_1b0 = &pppppppuStack_120;
        FUN_109427be4(&pppppppuStack_1b0);
      }
      iVar26 = *(int *)param_1[8];
      if (iVar26 == 4 || iVar26 == 2) {
        lVar9 = param_1[7];
        param_1[7] = 0;
        if (lVar9 != 0) {
          FUN_109435f4c(lVar9);
          __ZdlPv();
          iVar26 = *(int *)param_1[8];
        }
        if (iVar26 != 2) {
          FUN_109423fac(&pppppppuStack_120);
          pppppppuVar17 = pppppppuStack_120;
          pppppppuStack_120 = (undefined8 *******)0x0;
          lVar9 = param_1[6];
          param_1[6] = (long)pppppppuVar17;
          if (lVar9 != 0) {
            FUN_1094303c4();
            __ZdlPv();
            pppppppuVar17 = pppppppuStack_120;
            pppppppuStack_120 = (undefined8 *******)0x0;
            if (pppppppuVar17 != (undefined8 *******)0x0) {
              FUN_1094303c4();
              __ZdlPv();
            }
          }
LAB_10943274c:
          plVar14 = plVar10;
          FUN_109436df8(plVar10);
          FUN_1094335d4(&ppppppuStack_298,pppppppuVar38,&puStack_200,plVar14,pppppppuStack_268,
                        pppppppuStack_260,param_1[5]);
          FUN_109422320(param_1[8],&ppppppuStack_298);
          if (ppppppuStack_290 != ppppppuStack_298) {
            lVar9 = 0;
            uVar28 = 0;
            lVar31 = 0xb0;
            ppppppuVar30 = ppppppuStack_290;
            ppppppuVar39 = ppppppuStack_298;
            do {
              iVar26 = *(int *)((long)ppppppuVar39 + lVar31);
              if (-1 < iVar26) {
                plVar14 = param_1;
                FUN_109435a20(param_1,*(undefined8 *)(lStack_280 + lVar9),lStack_280 + lVar9);
                *(int *)(plVar14 + 3) = iVar26;
                ppppppuVar30 = ppppppuStack_290;
                ppppppuVar39 = ppppppuStack_298;
              }
              uVar28 = uVar28 + 1;
              lVar9 = lVar9 + 8;
              lVar31 = lVar31 + 0xc0;
            } while (uVar28 < (ulong)(((long)ppppppuVar30 - (long)ppppppuVar39 >> 6) *
                                     -0x5555555555555555));
          }
          FUN_109434390(&pppppuStack_2c8,*(undefined8 *)(param_1[5] + 0x20),
                        *(undefined8 *)(param_1[5] + 0x28),param_1);
          plVar14 = plVar10;
          FUN_109436df8(plVar10);
          pppppuVar21 = pppppuStack_2c0;
          pppppppuStack_120 = (undefined8 *******)0x0;
          pppppppuStack_118 = (undefined8 *******)0x0;
          pppppppuStack_110 = (undefined8 *******)0x0;
          for (pppppuVar19 = pppppuStack_2c8; pppppuVar19 != pppppuVar21;
              pppppuVar19 = pppppuVar19 + 0x18) {
            while (pppppppuVar17 = pppppppuStack_118, pppppppuStack_118 < pppppppuStack_110) {
              *(undefined1 *)pppppppuStack_118 = 1;
              pppppppuVar17[1] = (undefined8 ******)0x0;
              ppppppuVar30 = (undefined8 ******)*pppppuVar19;
              pppppppuVar17[3] = (undefined8 ******)pppppuVar19[1];
              pppppppuVar17[2] = ppppppuVar30;
              ppppppuVar30 = (undefined8 ******)pppppuVar19[2];
              pppppppuVar17[5] = (undefined8 ******)pppppuVar19[3];
              pppppppuVar17[4] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)pppppuVar19[5];
              ppppppuVar30 = (undefined8 ******)pppppuVar19[4];
              ppppppuVar40 = (undefined8 ******)pppppuVar19[6];
              ppppppuVar42 = (undefined8 ******)pppppuVar19[9];
              ppppppuVar41 = (undefined8 ******)pppppuVar19[8];
              pppppppuVar17[9] = (undefined8 ******)pppppuVar19[7];
              pppppppuVar17[8] = ppppppuVar40;
              pppppppuVar17[0xb] = ppppppuVar42;
              pppppppuVar17[10] = ppppppuVar41;
              pppppppuVar17[7] = ppppppuVar39;
              pppppppuVar17[6] = ppppppuVar30;
              ppppppuVar39 = (undefined8 ******)pppppuVar19[0xb];
              ppppppuVar30 = (undefined8 ******)pppppuVar19[10];
              ppppppuVar40 = (undefined8 ******)pppppuVar19[0xc];
              pppppppuVar17[0xf] = (undefined8 ******)pppppuVar19[0xd];
              pppppppuVar17[0xe] = ppppppuVar40;
              ppppppuVar40 = (undefined8 ******)pppppuVar19[0xe];
              pppppppuVar17[0x11] = (undefined8 ******)pppppuVar19[0xf];
              pppppppuVar17[0x10] = ppppppuVar40;
              ppppuVar18 = pppppuVar19[0x11];
              ppppppuVar41 = (undefined8 ******)pppppuVar19[0x11];
              ppppppuVar40 = (undefined8 ******)pppppuVar19[0x10];
              pppppppuVar17[0x16] = (undefined8 ******)0x0;
              pppppppuVar17[0x13] = ppppppuVar41;
              pppppppuVar17[0x12] = ppppppuVar40;
              pppppppuVar17[0x14] = pppppppuVar17 + 0xd;
              pppppppuVar17[0x15] = pppppppuVar17 + 0x16;
              pppppppuVar17[0x17] = (undefined8 ******)0x0;
              pppppppuVar17[0xd] = ppppppuVar39;
              pppppppuVar17[0xc] = ppppppuVar30;
              if (ppppuVar18 != (undefined8 ****)0x0) {
                piVar1 = (int *)((long)ppppuVar18 + 0x14);
                do {
                  cVar6 = '\x01';
                  bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar25) {
                    *piVar1 = *piVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (*(int *)((long)pppppuVar19 + 0x54) < 3) {
                ppppuVar18 = pppppuVar19[0x13];
                ppppppuVar30 = pppppppuVar17[0x15];
                *ppppppuVar30 = (undefined8 *****)*ppppuVar18;
                ppppppuVar30[1] = (undefined8 *****)ppppuVar18[1];
              }
              else {
                *(undefined4 *)((long)pppppppuVar17 + 100) = 0;
                FUN_109a844cc(pppppppuVar17 + 0xc,*(undefined4 *)((long)pppppuVar19 + 0x54),0,0,0);
                if (0 < *(int *)((long)pppppppuVar17 + 100)) {
                  lVar9 = 0;
                  ppppuVar18 = pppppuVar19[0x12];
                  ppppuVar4 = pppppuVar19[0x13];
                  ppppppuVar30 = pppppppuVar17[0x14];
                  ppppppuVar39 = pppppppuVar17[0x15];
                  do {
                    *(undefined4 *)((long)ppppppuVar30 + lVar9 * 4) =
                         *(undefined4 *)((long)ppppuVar18 + lVar9 * 4);
                    ppppppuVar39[lVar9] = (undefined8 *****)ppppuVar4[lVar9];
                    lVar9 = lVar9 + 1;
                  } while (lVar9 < *(int *)((long)pppppppuVar17 + 100));
                }
              }
              pppppppuVar17[0x18] = (undefined8 ******)0xbff0000000000000;
              pppppppuStack_118 = pppppppuVar17 + 0x1a;
              pppppuVar19 = pppppuVar19 + 0x18;
              if (pppppuVar19 == pppppuVar21) goto LAB_109432960;
            }
            pppppppuVar17 = &pppppppuStack_120;
            FUN_109435688(pppppppuVar17,pppppuVar19);
            pppppppuStack_118 = pppppppuVar17;
          }
LAB_109432960:
          FUN_109426b80(&pppppppuStack_1b0,pppppppuVar38,&pppppppuStack_120,plVar14);
          if (pppppuStack_2c0 != pppppuStack_2c8) {
            lVar31 = 0;
            lVar9 = 0;
            uVar28 = 0;
            pppppuVar19 = pppppuStack_2c8;
            pppppuVar21 = pppppuStack_2c0;
            do {
              if (*(char *)((long)pppppppuStack_1b0 + lVar31) == '\x01') {
                FUN_10939da2c((long)pppppuVar19 + lVar9,(long)pppppppuStack_1b0 + lVar31 + 0x10);
                pppppuVar19 = pppppuStack_2c8;
                pppppuVar21 = pppppuStack_2c0;
              }
              uVar28 = uVar28 + 1;
              lVar9 = lVar9 + 0xc0;
              lVar31 = lVar31 + 0xd0;
            } while (uVar28 < (ulong)(((long)pppppuVar21 - (long)pppppuVar19 >> 6) *
                                     -0x5555555555555555));
          }
          pppppppuStack_1b8 = &pppppppuStack_1b0;
          FUN_10942a570(&pppppppuStack_1b8);
          pppppppuStack_1b0 = &pppppppuStack_120;
          FUN_10942a570(&pppppppuStack_1b0);
          FUN_109422320(param_1[8],&pppppuStack_2c8);
          if (pppppuStack_2c0 != pppppuStack_2c8) {
            lVar9 = 0;
            uVar28 = 0;
            lVar31 = 0xb0;
            pppppuVar19 = pppppuStack_2c0;
            pppppuVar21 = pppppuStack_2c8;
            do {
              iVar26 = *(int *)((long)pppppuVar21 + lVar31);
              if (-1 < iVar26) {
                plVar14 = param_1;
                FUN_109435a20(param_1,*(undefined8 *)(lStack_2b0 + lVar9),lStack_2b0 + lVar9);
                *(int *)(plVar14 + 3) = iVar26;
                pppppuVar19 = pppppuStack_2c0;
                pppppuVar21 = pppppuStack_2c8;
              }
              uVar28 = uVar28 + 1;
              lVar9 = lVar9 + 8;
              lVar31 = lVar31 + 0xc0;
            } while (uVar28 < (ulong)(((long)pppppuVar19 - (long)pppppuVar21 >> 6) *
                                     -0x5555555555555555));
          }
          pppppppuStack_1a8 = (undefined8 *******)param_2[0x11];
          pppppppuStack_1b0 = (undefined8 *******)param_2[0x10];
          ppppppuStack_198 = param_2[0x13];
          pppppppuStack_1a0 = (undefined8 *******)param_2[0x12];
          ppppppuStack_188 = param_2[0x15];
          ppppppuStack_190 = param_2[0x14];
          ppppppuStack_180 = param_2[0x16];
          ppppppuStack_148 = param_2[0x1d];
          ppppppuStack_150 = param_2[0x1c];
          ppppppuStack_138 = param_2[0x1f];
          ppppppuStack_140 = param_2[0x1e];
          ppppppuStack_130 = param_2[0x20];
          ppppppuStack_168 = param_2[0x19];
          ppppppuStack_170 = param_2[0x18];
          ppppppuStack_158 = param_2[0x1b];
          ppppppuStack_160 = param_2[0x1a];
          FUN_109388a48(&pppppppuStack_120,param_2 + 0x28,&pppppppuStack_1b0);
          FUN_109433ee0(param_1,param_2,&pppppppuStack_120);
          if (lStack_2b0 != 0) {
            lStack_2a8 = lStack_2b0;
            __ZdlPv();
          }
          pppppppuStack_120 = (undefined8 *******)&pppppuStack_2c8;
          FUN_109427be4(&pppppppuStack_120);
          if (lStack_280 != 0) {
            lStack_278 = lStack_280;
            __ZdlPv();
          }
          pppppppuStack_120 = &ppppppuStack_298;
          FUN_109427be4(&pppppppuStack_120);
          goto LAB_109432b10;
        }
        FUN_109423fac(&pppppppuStack_120);
        pppppppuVar17 = pppppppuStack_120;
        pppppppuStack_120 = (undefined8 *******)0x0;
        lVar9 = param_1[6];
        param_1[6] = (long)pppppppuVar17;
        if (lVar9 != 0) {
          FUN_1094303c4();
          __ZdlPv();
          pppppppuVar17 = pppppppuStack_120;
          pppppppuStack_120 = (undefined8 *******)0x0;
          if (pppppppuVar17 != (undefined8 *******)0x0) {
            FUN_1094303c4();
            __ZdlPv();
          }
          pppppppuVar17 = (undefined8 *******)param_1[6];
        }
        if (pppppppuVar17 != (undefined8 *******)0x0) goto LAB_10943274c;
        lVar9 = param_1[7];
        param_1[7] = 0;
        if (lVar9 == 0) {
          param_1[6] = 0;
        }
        else {
          FUN_109435f4c();
          __ZdlPv();
          lVar9 = param_1[6];
          param_1[6] = 0;
          if (lVar9 != 0) {
            FUN_1094303c4();
            __ZdlPv();
          }
        }
        puVar12 = (undefined8 *)0xa8;
        __Znwm();
        puVar12[8] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[6] = 0;
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 9) = 0x3f800000;
        puVar12[0xb] = 0;
        puVar12[10] = 0;
        puVar12[0xd] = 0;
        puVar12[0xc] = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0x3f800000;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        pppppppuStack_120 = (undefined8 *******)(puVar12 + 0xf);
        *pppppppuStack_120 = (undefined8 ******)0x0;
        pppppppuStack_118 = (undefined8 *******)((ulong)pppppppuStack_118 & 0xffffffffffffff00);
        puVar13 = (undefined8 *)0xd8;
        __Znwm();
        puVar12[0x10] = puVar13 + 0x1b;
        puVar12[0x11] = puVar13 + 0x1b;
        *puVar13 = 0xffffffff;
        puVar13[2] = 0;
        puVar13[1] = 0;
        puVar13[4] = 0;
        puVar13[3] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[9] = 0xffffffff;
        puVar13[0xb] = 0;
        puVar13[10] = 0;
        puVar13[0xd] = 0;
        puVar13[0xc] = 0;
        puVar13[0xf] = 0;
        puVar13[0xe] = 0;
        puVar13[0x11] = 0;
        puVar13[0x10] = 0;
        puVar13[0x12] = 0xffffffff;
        puVar13[0x14] = 0;
        puVar13[0x13] = 0;
        puVar13[0x16] = 0;
        puVar13[0x15] = 0;
        puVar13[0x18] = 0;
        puVar13[0x17] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x19] = 0;
        puVar12[0xf] = puVar13;
        lVar9 = param_1[0x27];
        puVar12[0x13] = param_1[0x28];
        puVar12[0x12] = lVar9;
        puVar12[0x14] = param_1[0x29];
        lVar9 = param_1[8];
        param_1[8] = (long)puVar12;
        if (lVar9 != 0) {
          FUN_10942bb0c();
          __ZdlPv();
        }
        plVar14 = (long *)param_1[5];
        param_1[5] = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      else {
LAB_109432b10:
        lVar9 = param_1[6];
        if (lVar9 == 0) {
LAB_109432c38:
          plVar11 = (long *)0x0;
          plVar34 = (long *)0x0;
          plVar29 = (long *)0x0;
        }
        else {
          plVar14 = *(long **)(lVar9 + 0x20);
          plVar27 = *(long **)(lVar9 + 0x28);
          if (plVar14 == plVar27) goto LAB_109432c38;
          plVar34 = (long *)0x0;
          plVar29 = (long *)0x0;
          plVar32 = (long *)0x0;
          do {
            lVar9 = *plVar14;
            plVar11 = plVar32;
            if (*(int *)(lVar9 + 0x50) != 0) {
              iVar26 = *(int *)(lVar9 + 0x38);
              pppppppuStack_118 = *(undefined8 ********)(lVar9 + 0x10);
              pppppppuStack_120 = *(undefined8 ********)(lVar9 + 8);
              pppppppuStack_110 = *(undefined8 ********)(lVar9 + 0x18);
              if (plVar34 < plVar29) {
                *plVar34 = (long)iVar26;
                plVar34[3] = (long)pppppppuStack_110;
                plVar34[2] = (long)pppppppuStack_118;
                plVar34[1] = (long)pppppppuStack_120;
                plVar34 = plVar34 + 4;
              }
              else {
                uVar28 = ((long)plVar34 - (long)plVar32 >> 5) + 1;
                if (uVar28 >> 0x3b != 0) {
                  func_0x000109435ed0();
                  goto LAB_1094332e0;
                }
                uVar37 = (long)plVar29 - (long)plVar32 >> 4;
                if (uVar37 <= uVar28) {
                  uVar37 = uVar28;
                }
                if (0x7fffffffffffffdf < (ulong)((long)plVar29 - (long)plVar32)) {
                  uVar37 = 0x7ffffffffffffff;
                }
                if (uVar37 >> 0x3b != 0) {
                  func_0x000104c4f740();
                  goto LAB_1094332e0;
                }
                plVar11 = (long *)(uVar37 << 5);
                __Znwm();
                plVar3 = (long *)((long)plVar11 + ((long)plVar34 - (long)plVar32));
                *plVar3 = (long)iVar26;
                plVar3[2] = (long)pppppppuStack_118;
                plVar3[1] = (long)pppppppuStack_120;
                plVar3[3] = (long)pppppppuStack_110;
                plVar2 = plVar11;
                for (plVar29 = plVar32; plVar29 != plVar34; plVar29 = plVar29 + 4) {
                  *plVar2 = *plVar29;
                  lVar31 = plVar29[2];
                  lVar9 = plVar29[1];
                  plVar2[3] = plVar29[3];
                  plVar2[2] = lVar31;
                  plVar2[1] = lVar9;
                  plVar2 = plVar2 + 4;
                }
                plVar29 = plVar11 + uVar37 * 4;
                plVar34 = plVar3 + 4;
                if (plVar32 != (long *)0x0) {
                  __ZdlPv(plVar32);
                }
              }
            }
            plVar14 = plVar14 + 1;
            plVar32 = plVar11;
          } while (plVar14 != plVar27);
        }
        lVar9 = param_1[10];
        if (lVar9 != 0) {
          param_1[0xb] = lVar9;
          __ZdlPv();
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
        }
        param_1[10] = (long)plVar11;
        param_1[0xb] = (long)plVar34;
        param_1[0xc] = (long)plVar29;
        lVar9 = param_1[5];
        if (lVar9 == 0) {
          plStack_2e0 = (long *)0x0;
          plVar14 = (long *)0x0;
          plVar27 = (long *)0x0;
        }
        else {
          puVar35 = *(ulong **)(lVar9 + 0x20);
          puVar5 = *(ulong **)(lVar9 + 0x28);
          if ((puVar35 != puVar5) && (param_1[1] != 0)) {
            plStack_2e0 = (long *)0x0;
            plVar14 = (long *)0x0;
            plVar27 = (long *)0x0;
LAB_109432e78:
            uVar28 = param_1[1];
            plVar34 = plStack_2e0;
            if (uVar28 != 0) {
              uVar37 = *puVar35;
              uVar22 = ((ulong)(uint)((int)uVar37 << 3) + 8 ^ uVar37 >> 0x20) * -0x622015f714c7d297;
              uVar22 = (uVar37 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
              uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
              uVar24 = uVar28 - 1;
              if ((uVar28 & uVar24) == 0) {
                uVar23 = uVar22 & uVar24;
                plVar29 = *(long **)(*param_1 + uVar23 * 8);
              }
              else {
                uVar23 = uVar22;
                if (uVar28 <= uVar22) {
                  uVar23 = 0;
                  if (uVar28 != 0) {
                    uVar23 = uVar22 / uVar28;
                  }
                  uVar23 = uVar22 - uVar23 * uVar28;
                }
                plVar29 = *(long **)(*param_1 + uVar23 * 8);
              }
              if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0))
              {
                if ((uVar28 & uVar24) == 0) {
                  do {
                    if (uVar22 - plVar29[1] == 0) {
                      if (plVar29[2] == uVar37) goto LAB_109432f6c;
                    }
                    else if ((plVar29[1] & uVar24) != uVar23) break;
                    plVar29 = (long *)*plVar29;
                  } while (plVar29 != (long *)0x0);
                }
                else {
                  do {
                    uVar24 = plVar29[1];
                    if (uVar22 - uVar24 == 0) {
                      if (plVar29[2] == uVar37) goto LAB_109432f6c;
                    }
                    else {
                      if (uVar28 <= uVar24) {
                        uVar7 = 0;
                        if (uVar28 != 0) {
                          uVar7 = uVar24 / uVar28;
                        }
                        uVar24 = uVar24 - uVar7 * uVar28;
                      }
                      if (uVar24 != uVar23) break;
                    }
                    plVar29 = (long *)*plVar29;
                  } while (plVar29 != (long *)0x0);
                }
              }
            }
            goto LAB_109432e6c;
          }
          plStack_2e0 = (long *)0x0;
          plVar14 = (long *)0x0;
          plVar27 = (long *)0x0;
        }
LAB_109432cc8:
        lVar9 = param_1[0xd];
        if (lVar9 != 0) {
          param_1[0xe] = lVar9;
          _free();
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        param_1[0xd] = (long)plStack_2e0;
        param_1[0xe] = (long)plVar14;
        param_1[0xf] = (long)plVar27;
        pppppppuStack_1a8 = (undefined8 *******)param_2[0x11];
        pppppppuStack_1b0 = (undefined8 *******)param_2[0x10];
        ppppppuStack_198 = param_2[0x13];
        pppppppuStack_1a0 = (undefined8 *******)param_2[0x12];
        ppppppuStack_188 = param_2[0x15];
        ppppppuStack_190 = param_2[0x14];
        ppppppuStack_180 = param_2[0x16];
        ppppppuStack_148 = param_2[0x1d];
        ppppppuStack_150 = param_2[0x1c];
        ppppppuStack_138 = param_2[0x1f];
        ppppppuStack_140 = param_2[0x1e];
        ppppppuStack_130 = param_2[0x20];
        ppppppuStack_168 = param_2[0x19];
        ppppppuStack_170 = param_2[0x18];
        ppppppuStack_158 = param_2[0x1b];
        ppppppuStack_160 = param_2[0x1a];
        FUN_109388a48(&pppppppuStack_120,param_2 + 0x28,&pppppppuStack_1b0);
        param_1[0x16] = lStack_f0;
        param_1[0x11] = (long)pppppppuStack_118;
        param_1[0x10] = (long)pppppppuStack_120;
        param_1[0x13] = (long)plStack_108;
        param_1[0x12] = (long)pppppppuStack_110;
        param_1[0x15] = lStack_f8;
        param_1[0x14] = (long)plStack_100;
        param_1[0x1d] = lStack_b8;
        param_1[0x1c] = lStack_c0;
        param_1[0x1f] = lStack_a8;
        param_1[0x1e] = lStack_b0;
        param_1[0x20] = lStack_a0;
        param_1[0x19] = lStack_d8;
        param_1[0x18] = lStack_e0;
        param_1[0x1b] = lStack_c8;
        param_1[0x1a] = lStack_d0;
      }
      if (plStack_250 != (long *)0x0) {
        plStack_248 = plStack_250;
        __ZdlPv();
      }
      pppppppuStack_120 = &pppppppuStack_268;
      FUN_109427be4(&pppppppuStack_120);
    }
    pppppppuStack_120 = &pppppppuStack_238;
    FUN_10942a570(&pppppppuStack_120);
    puVar12 = puStack_200;
    if (puStack_200 != (undefined8 *)0x0) {
      while (puStack_1f8 != puVar12) {
        puVar13 = puStack_1f8 + -4;
        (**(code **)*puVar13)(puVar13);
        puStack_1f8 = puVar13;
      }
      puStack_1f8 = puVar12;
      __ZdlPv(puStack_200);
    }
    do {
      lVar9 = *plVar36;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar25) {
        *plVar36 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    if (ppppppuStack_1e8 != (undefined8 ******)0x0) {
      ppppppuStack_1e0 = ppppppuStack_1e8;
      __ZdlPv();
    }
    pppppppuStack_120 = &ppppppuStack_1d0;
    FUN_10939cb28(&pppppppuStack_120);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_1094332ac:
  FUN_1094362d4(1);
LAB_1094332e0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1094332e4);
  (*pcVar8)();
LAB_109432f6c:
  plVar29 = param_1;
  FUN_109434e1c();
  lVar9 = *plVar29;
  pppppppuStack_110 = *(undefined8 ********)(*puVar35 + 0x1a8);
  pppppppuStack_118 = *(undefined8 ********)(*puVar35 + 0x1a0);
  if (plVar14 < plVar27) {
    *plVar14 = (long)(int)lVar9;
    plVar14[3] = (long)pppppppuStack_110;
    plVar14[2] = (long)pppppppuStack_118;
    plVar14 = plVar14 + 4;
LAB_109432e6c:
    plStack_2e0 = plVar34;
    puVar35 = puVar35 + 1;
    if (puVar35 == puVar5) goto LAB_109432cc8;
    goto LAB_109432e78;
  }
  lVar31 = (long)plVar14 - (long)plStack_2e0 >> 5;
  uVar28 = lVar31 + 1;
  if (uVar28 >> 0x3b != 0) {
    func_0x000109435ee4();
    goto LAB_1094332e0;
  }
  uVar37 = (long)plVar27 - (long)plStack_2e0 >> 4;
  if (uVar37 <= uVar28) {
    uVar37 = uVar28;
  }
  if (0x7fffffffffffffdf < (ulong)((long)plVar27 - (long)plStack_2e0)) {
    uVar37 = 0x7ffffffffffffff;
  }
  if (uVar37 >> 0x3b == 0) {
    lVar33 = uVar37 << 5;
    _malloc();
    if (lVar33 != 0) {
      plVar11 = (long *)(lVar33 + ((long)plVar14 - (long)plStack_2e0));
      *plVar11 = (long)(int)lVar9;
      plVar11[3] = (long)pppppppuStack_110;
      plVar11[2] = (long)pppppppuStack_118;
      plVar34 = plVar11 + lVar31 * -4;
      plVar29 = plVar34;
      for (plVar27 = plStack_2e0; plVar27 != plVar14; plVar27 = plVar27 + 4) {
        *plVar29 = *plVar27;
        lVar9 = plVar27[2];
        plVar29[3] = plVar27[3];
        plVar29[2] = lVar9;
        plVar29 = plVar29 + 4;
      }
      plVar27 = (long *)(lVar33 + uVar37 * 0x20);
      plVar14 = plVar11 + 4;
      if (plStack_2e0 != (long *)0x0) {
        _free(plStack_2e0);
      }
      goto LAB_109432e6c;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  goto LAB_1094332e0;
}



/* Entry: 109433570; end: 1094335d3;  */

long FUN_109433570(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1094335d4; end: 109433e9b;  */

/* WARNING: Removing unreachable block (ram,0x000109433e7c) */

long ** FUN_1094335d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                     long *param_5,long *param_6,long *param_7)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x20;
  long *plVar17;
  long *plVar18;
  double *pdVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long **pplStack_1d8;
  long *plStack_1d0;
  long **pplStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_1a8;
  double *pdStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long alStack_158 [3];
  long *plStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  long *plStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_158[0] = 0;
  alStack_158[1] = 0;
  alStack_158[2] = 0;
  uStack_190 = param_3;
  if ((ulong)((param_4[1] - *param_4 >> 4) * 0x2e8ba2e8ba2e8ba3) < 0x32) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    puStack_1a8 = param_1;
    if (param_5 == param_6) {
      (**(code **)(*param_7 + 0x10))(param_7,param_3);
      plVar21 = (long *)*param_4;
      plVar9 = (long *)param_4[1];
      if (plVar21 != plVar9) {
        do {
          (**(code **)(*param_7 + 0x18))(param_7,uStack_190,plVar21);
          dStack_138 = (double)plVar21[1];
          plStack_140 = (long *)*plVar21;
          dStack_128 = (double)plVar21[3];
          dStack_130 = (double)plVar21[2];
          dStack_118 = (double)plVar21[5];
          dStack_120 = (double)plVar21[4];
          dStack_108 = (double)plVar21[7];
          dStack_110 = (double)plVar21[6];
          dStack_f8 = (double)plVar21[9];
          dStack_100 = (double)plVar21[8];
          dStack_e8 = (double)plVar21[0xb];
          uStack_f0 = (double)plVar21[10];
          dStack_d8 = (double)plVar21[0xd];
          dStack_e0 = (double)plVar21[0xc];
          dStack_c8 = (double)plVar21[0xf];
          dStack_d0 = (double)plVar21[0xe];
          dStack_b8 = (double)plVar21[0x11];
          plStack_c0 = (long *)plVar21[0x10];
          uStack_a0 = 0;
          uStack_98 = 0;
          if (plVar21[0x11] != 0) {
            piVar1 = (int *)(plVar21[0x11] + 0x14);
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          pdStack_b0 = &dStack_e8;
          puStack_a8 = &uStack_a0;
          if (*(int *)((long)plVar21 + 0x54) < 3) {
            uStack_a0 = *(undefined8 *)plVar21[0x13];
            uStack_98 = ((undefined8 *)plVar21[0x13])[1];
          }
          else {
            uStack_f0 = (double)((ulong)uStack_f0 & 0xffffffff);
            FUN_109a844cc(&uStack_f0,*(undefined4 *)((long)plVar21 + 0x54),0,0,0);
            if (0 < uStack_f0._4_4_) {
              lVar14 = 0;
              lVar10 = plVar21[0x12];
              lVar22 = plVar21[0x13];
              do {
                *(undefined4 *)((long)pdStack_b0 + lVar14 * 4) =
                     *(undefined4 *)(lVar10 + lVar14 * 4);
                puStack_a8[lVar14] = *(undefined8 *)(lVar22 + lVar14 * 8);
                lVar14 = lVar14 + 1;
              } while (lVar14 < uStack_f0._4_4_);
            }
          }
          uStack_90 = 0xffffffff;
          FUN_109434f30(alStack_158,&plStack_140);
          if (dStack_b8 != 0.0) {
            piVar1 = (int *)((long)dStack_b8 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((iVar3 + -1 == 0) && (dStack_b8 != 0.0)) {
              plVar17 = *(long **)((long)dStack_b8 + 8);
              if ((*(long **)((long)dStack_b8 + 8) == (long *)0x0) &&
                 ((plVar17 = plStack_c0, plStack_c0 == (long *)0x0 &&
                  (plVar17 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                FUN_109a83e3c();
                plVar17 = plRam000000011382bb80;
              }
              (**(code **)(*plVar17 + 0x30))();
            }
          }
          dStack_b8 = 0.0;
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          if (0 < uStack_f0._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)pdStack_b0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_f0._4_4_);
          }
          if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
            _free(puStack_a8[-1]);
          }
          plVar21 = plVar21 + 0x16;
        } while (plVar21 != plVar9);
      }
      plVar21 = (long *)param_7[1];
      plVar9 = (long *)param_7[2];
      if (plVar21 == plVar9) {
        plVar17 = (long *)0x0;
        lVar14 = 0;
      }
      else {
        plVar20 = (long *)0x0;
        lVar10 = 0;
        plVar18 = (long *)0x0;
        do {
          while (lVar22 = *plVar21, plVar18 < plVar20) {
            plVar17 = plVar18 + 1;
            *plVar18 = lVar22;
            plVar21 = plVar21 + 1;
            lVar14 = lVar10;
            plVar18 = plVar17;
            if (plVar21 == plVar9) goto LAB_109433d40;
          }
          param_7 = (long *)((long)plVar18 - lVar10);
          uVar2 = ((long)param_7 >> 3) + 1;
          if (uVar2 >> 0x3d != 0) {
            FUN_109435674();
            goto LAB_109433dd0;
          }
          uVar16 = (long)plVar20 - lVar10 >> 2;
          if (uVar16 <= uVar2) {
            uVar16 = uVar2;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar20 - lVar10)) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109433dd0;
          }
          lVar14 = uVar16 << 3;
          __Znwm();
          plVar20 = (long *)(lVar14 + uVar16 * 8);
          plVar17 = (long *)(lVar14 + (long)param_7) + 1;
          *(long *)(lVar14 + (long)param_7) = lVar22;
          _memcpy();
          if (lVar10 != 0) {
            __ZdlPv(lVar10);
          }
          plVar21 = plVar21 + 1;
          lVar10 = lVar14;
          plVar18 = plVar17;
        } while (plVar21 != plVar9);
      }
    }
    else {
      lStack_170 = 0;
      plStack_168 = (long *)0x0;
      plStack_160 = (long *)0x0;
      do {
        while (plVar21 = plStack_168, plStack_160 <= plStack_168) {
          plVar21 = &lStack_170;
          FUN_109435688(plVar21,param_5);
          param_5 = param_5 + 0x18;
          plStack_168 = plVar21;
          if (param_5 == param_6) goto LAB_1094337a4;
        }
        *(undefined1 *)plStack_168 = 1;
        plVar21[1] = 0;
        lVar14 = *param_5;
        plVar21[3] = param_5[1];
        plVar21[2] = lVar14;
        lVar14 = param_5[2];
        plVar21[5] = param_5[3];
        plVar21[4] = lVar14;
        lVar10 = param_5[5];
        lVar14 = param_5[4];
        lVar22 = param_5[6];
        lVar24 = param_5[9];
        lVar23 = param_5[8];
        plVar21[9] = param_5[7];
        plVar21[8] = lVar22;
        plVar21[0xb] = lVar24;
        plVar21[10] = lVar23;
        plVar21[7] = lVar10;
        plVar21[6] = lVar14;
        lVar22 = param_5[0xb];
        lVar10 = param_5[10];
        lVar14 = param_5[0xc];
        plVar21[0xf] = param_5[0xd];
        plVar21[0xe] = lVar14;
        lVar14 = param_5[0xe];
        plVar21[0x11] = param_5[0xf];
        plVar21[0x10] = lVar14;
        lVar14 = param_5[0x11];
        lVar24 = param_5[0x11];
        lVar23 = param_5[0x10];
        plVar21[0x16] = 0;
        plVar21[0x13] = lVar24;
        plVar21[0x12] = lVar23;
        plVar21[0x14] = (long)(plVar21 + 0xd);
        plVar21[0x15] = (long)(plVar21 + 0x16);
        plVar21[0x17] = 0;
        plVar21[0xd] = lVar22;
        plVar21[0xc] = lVar10;
        if (lVar14 != 0) {
          piVar1 = (int *)(lVar14 + 0x14);
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)param_5 + 0x54) < 3) {
          puVar13 = (undefined8 *)param_5[0x13];
          puVar15 = (undefined8 *)plVar21[0x15];
          *puVar15 = *puVar13;
          puVar15[1] = puVar13[1];
        }
        else {
          *(undefined4 *)((long)plVar21 + 100) = 0;
          FUN_109a844cc(plVar21 + 0xc,*(undefined4 *)((long)param_5 + 0x54),0,0,0);
          if (0 < *(int *)((long)plVar21 + 100)) {
            lVar14 = 0;
            lVar10 = param_5[0x12];
            lVar23 = param_5[0x13];
            lVar22 = plVar21[0x14];
            lVar24 = plVar21[0x15];
            do {
              *(undefined4 *)(lVar22 + lVar14 * 4) = *(undefined4 *)(lVar10 + lVar14 * 4);
              *(undefined8 *)(lVar24 + lVar14 * 8) = *(undefined8 *)(lVar23 + lVar14 * 8);
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)((long)plVar21 + 100));
          }
        }
        plVar21[0x18] = -0x4010000000000000;
        param_5 = param_5 + 0x18;
        plStack_168 = plVar21 + 0x1a;
      } while (param_5 != param_6);
LAB_1094337a4:
      FUN_109426b80(&lStack_188,param_2,&lStack_170,param_4);
      pdVar19 = (double *)*param_4;
      pdStack_198 = (double *)param_4[1];
      if (pdVar19 == pdStack_198) {
        plVar17 = (long *)0x0;
        lVar14 = 0;
      }
      else {
        plVar17 = (long *)0x0;
        plVar21 = (long *)0x0;
        lVar14 = 0;
        pdStack_1a0 = &dStack_e8;
        do {
          if (lStack_188 != lStack_180) {
            lVar10 = lStack_188;
            do {
              bVar8 = false;
              if ((*pdVar19 == *(double *)(lVar10 + 0x10)) &&
                 (bVar8 = false, !NAN(pdVar19[1]) && !NAN(*(double *)(lVar10 + 0x18)))) {
                bVar8 = pdVar19[1] == *(double *)(lVar10 + 0x18);
              }
              if ((bVar8) && (*(int *)(pdVar19 + 5) == *(int *)(lVar10 + 0x38))) goto LAB_1094337e8;
              lVar10 = lVar10 + 0xd0;
            } while (lVar10 != lStack_180);
          }
          plVar9 = param_7;
          (**(code **)(*param_7 + 0x18))(param_7,uStack_190,pdVar19);
          if (plVar17 < plVar21) {
            *plVar17 = (long)plVar9;
            lVar10 = lVar14;
          }
          else {
            uVar2 = ((long)plVar17 - lVar14 >> 3) + 1;
            if (uVar2 >> 0x3d != 0) {
              FUN_109435674();
LAB_109433dd0:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x109433dd4);
              (*pcVar7)();
            }
            uVar16 = (long)plVar21 - lVar14 >> 2;
            if (uVar16 <= uVar2) {
              uVar16 = uVar2;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar21 - lVar14)) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_109433dd0;
            }
            lVar10 = uVar16 << 3;
            __Znwm();
            plVar17 = (long *)(lVar10 + ((long)plVar17 - lVar14));
            plVar21 = (long *)(lVar10 + uVar16 * 8);
            *plVar17 = (long)plVar9;
            _memcpy();
            if (lVar14 != 0) {
              __ZdlPv(lVar14);
            }
          }
          plVar17 = plVar17 + 1;
          dStack_138 = pdVar19[1];
          plStack_140 = (long *)*pdVar19;
          dStack_128 = pdVar19[3];
          dStack_130 = pdVar19[2];
          dStack_118 = pdVar19[5];
          dStack_120 = pdVar19[4];
          dStack_108 = pdVar19[7];
          dStack_110 = pdVar19[6];
          dStack_f8 = pdVar19[9];
          dStack_100 = pdVar19[8];
          dStack_e8 = pdVar19[0xb];
          uStack_f0 = pdVar19[10];
          dStack_d8 = pdVar19[0xd];
          dStack_e0 = pdVar19[0xc];
          dStack_c8 = pdVar19[0xf];
          dStack_d0 = pdVar19[0xe];
          dStack_b8 = pdVar19[0x11];
          plStack_c0 = (long *)pdVar19[0x10];
          pdStack_b0 = pdStack_1a0;
          uStack_a0 = 0;
          uStack_98 = 0;
          if (pdVar19[0x11] != 0.0) {
            piVar1 = (int *)((long)pdVar19[0x11] + 0x14);
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puStack_a8 = &uStack_a0;
          if (*(int *)((long)pdVar19 + 0x54) < 3) {
            uStack_a0 = *(undefined8 *)pdVar19[0x13];
            uStack_98 = ((undefined8 *)pdVar19[0x13])[1];
          }
          else {
            uStack_f0 = (double)((ulong)uStack_f0 & 0xffffffff);
            FUN_109a844cc(&uStack_f0,*(undefined4 *)((long)pdVar19 + 0x54),0,0,0);
            if (0 < uStack_f0._4_4_) {
              lVar14 = 0;
              dVar4 = pdVar19[0x12];
              dVar5 = pdVar19[0x13];
              do {
                *(undefined4 *)((long)pdStack_b0 + lVar14 * 4) =
                     *(undefined4 *)((long)dVar4 + lVar14 * 4);
                puStack_a8[lVar14] = *(undefined8 *)((long)dVar5 + lVar14 * 8);
                lVar14 = lVar14 + 1;
              } while (lVar14 < uStack_f0._4_4_);
            }
          }
          uStack_90 = 0xffffffff;
          FUN_109434f30(alStack_158,&plStack_140);
          if (dStack_b8 != 0.0) {
            piVar1 = (int *)((long)dStack_b8 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((iVar3 + -1 == 0) && (dStack_b8 != 0.0)) {
              plVar9 = *(long **)((long)dStack_b8 + 8);
              if ((*(long **)((long)dStack_b8 + 8) == (long *)0x0) &&
                 ((plVar9 = plStack_c0, plStack_c0 == (long *)0x0 &&
                  (plVar9 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                FUN_109a83e3c();
                plVar9 = plRam000000011382bb80;
              }
              (**(code **)(*plVar9 + 0x30))();
            }
          }
          dStack_b8 = 0.0;
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          if (0 < uStack_f0._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)pdStack_b0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_f0._4_4_);
          }
          lVar14 = lVar10;
          if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
            _free(puStack_a8[-1]);
          }
LAB_1094337e8:
          pdVar19 = pdVar19 + 0x16;
        } while (pdVar19 != pdStack_198);
      }
      plStack_140 = &lStack_188;
      FUN_10942a570(&plStack_140);
      plStack_140 = &lStack_170;
      FUN_10942a570(&plStack_140);
    }
LAB_109433d40:
    FUN_1094358c4(puStack_1a8,alStack_158,lVar14,plVar17);
    unaff_x20 = param_7;
    if (lVar14 != 0) {
      __ZdlPv(lVar14);
    }
  }
  plStack_140 = alStack_158;
  pplVar11 = &plStack_140;
  FUN_109427be4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    plStack_140 = &lStack_170;
    FUN_10942a570(&plStack_140);
    plStack_140 = alStack_158;
    FUN_109427be4(&plStack_140);
    pplVar12 = pplVar11;
    __Unwind_Resume();
    pcStack_1b8 = FUN_109433e9c;
    plStack_1d0 = unaff_x20;
    pplStack_1c8 = pplVar11;
    puStack_1c0 = &stack0xfffffffffffffff0;
    if (pplVar12[3] != (long *)0x0) {
      pplVar12[4] = pplVar12[3];
      __ZdlPv();
    }
    pplStack_1d8 = pplVar12;
    FUN_109427be4(&pplStack_1d8);
    return pplVar12;
  }
  return pplVar11;
}



/* Entry: 109433e9c; end: 109433edf;  */

long FUN_109433e9c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_109427be4(&lStack_28);
  return param_1;
}



/* Entry: 109433ee0; end: 10943438f;  */

void FUN_109433ee0(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  double dStack_120;
  double dStack_118;
  double dStack_110;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  
  piVar14 = (int *)(param_2 + 0x10);
  dStack_110 = 2.0;
  uStack_f0 = 0x4010000000000000;
  uStack_f8 = 0x4014000000000000;
  uStack_e0 = 0x3fd0000000000000;
  uStack_e8 = 0x400c000000000000;
  uStack_d0 = 3000;
  uStack_d8 = 1000;
  uStack_c0 = 5;
  uStack_c8 = 3;
  uStack_b0 = 0x14;
  uStack_b8 = 0x5dc;
  uStack_a8 = 0x1e00000046;
  uStack_100 = 0xa00000001;
  uStack_108 = 0x15e0000001e;
  iVar19 = *(int *)(param_2 + 0x14);
  if (*piVar14 <= *(int *)(param_2 + 0x14)) {
    iVar19 = *piVar14;
  }
  dStack_120 = (double)(ulong)CONCAT14(599 < iVar19,5);
  dStack_118 = (double)CONCAT44(dStack_118._4_4_,4);
  uVar8 = 0xd10;
  __Znwm();
  FUN_10944ade4();
  lVar9 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  if (lVar9 != 0) {
    FUN_109435f4c();
    __ZdlPv();
  }
  lVar9 = *(long *)(param_2 + 0x110);
  uVar20 = *(ulong *)(lVar9 + 0x10);
  uVar22 = uVar20 >> 0x20;
  iVar19 = (int)uVar20;
  if ((uVar22 == 0) && (iVar19 == 0)) {
    lVar15 = 0;
    uVar22 = 0;
  }
  else {
    lVar15 = (long)((uVar20 << 0x20) * uVar22) >> 0x20;
    __Znam();
    if (0 < (int)(uVar20 >> 0x20)) {
      uVar12 = 0;
      lVar16 = (long)(uVar20 << 0x20) >> 0x20;
      lVar18 = lVar15;
      do {
        _memcpy(lVar18,*(long *)(lVar9 + 8) + uVar12 * (long)*(int *)(lVar9 + 0x18),lVar16);
        uVar12 = uVar12 + 1;
        lVar18 = lVar18 + lVar16;
      } while (uVar22 != uVar12);
    }
  }
  ppuStack_158 = &PTR_FUN_110af4c80;
  uStack_148 = CONCAT44((int)uVar22,iVar19);
  lStack_150 = lVar15;
  iStack_140 = iVar19;
  FUN_1093fb548(&puStack_138,&ppuStack_158,5);
  ppuStack_158 = &PTR_FUN_110af4c80;
  if (lStack_150 != 0) {
    __ZdaPv();
  }
  lStack_150 = 0;
  uStack_148 = 0;
  iStack_140 = 0;
  pfStack_168 = (float *)0x0;
  pfStack_160 = (float *)0x0;
  pfStack_170 = (float *)0x0;
  plVar17 = *(long **)(*(long *)(param_1 + 0x30) + 0x20);
  plVar3 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
  if (plVar17 != plVar3) {
    pfVar21 = (float *)0x0;
    do {
      lVar9 = *plVar17;
      if (*(int *)(lVar9 + 0x50) != 0) {
        dVar23 = *(double *)(lVar9 + 8);
        dVar24 = *(double *)(lVar9 + 0x10);
        dVar25 = *(double *)(lVar9 + 0x18);
        dStack_120 = *(double *)(param_3 + 0x40) * dVar23 + *(double *)(param_3 + 0x58) * dVar24 +
                     *(double *)(param_3 + 0x70) * dVar25 + *(double *)(param_3 + 0x20);
        dStack_118 = *(double *)(param_3 + 0x48) * dVar23 + *(double *)(param_3 + 0x60) * dVar24 +
                     *(double *)(param_3 + 0x78) * dVar25 + *(double *)(param_3 + 0x28);
        dStack_110 = dVar23 * *(double *)(param_3 + 0x50) +
                     dVar24 * *(double *)(param_3 + 0x68) + dVar25 * *(double *)(param_3 + 0x80) +
                     *(double *)(param_3 + 0x30);
        piVar10 = piVar14;
        FUN_10937d5c4(piVar14,&dStack_a0,&dStack_120);
        pfVar5 = pfStack_170;
        if (((((int)piVar10 != 0) && (0.0 <= dStack_a0)) && (0.0 <= dStack_98)) &&
           ((dStack_a0 <= (double)(*piVar14 + -1) &&
            (dStack_98 <= (double)(*(int *)(param_2 + 0x14) + -1))))) {
          if (pfVar21 < pfStack_160) {
            *pfVar21 = (float)dVar23;
            pfVar21[1] = (float)dVar24;
            pfVar21[2] = (float)dVar25;
            pfVar21 = pfVar21 + 3;
            pfStack_168 = pfVar21;
          }
          else {
            lVar9 = (long)pfVar21 - (long)pfStack_170;
            uVar20 = (lVar9 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar20) {
              FUN_10937ed14();
LAB_109434320:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x109434324);
              (*pcVar7)();
            }
            lVar15 = (long)pfStack_160 - (long)pfStack_170 >> 2;
            uVar22 = lVar15 * 0x5555555555555556;
            if (uVar22 < uVar20 || uVar22 - uVar20 == 0) {
              uVar22 = uVar20;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar22 = 0x1555555555555555;
            }
            if (0x1555555555555555 < uVar22) {
              func_0x000104c4f740();
              goto LAB_109434320;
            }
            pfVar11 = (float *)(uVar22 * 0xc);
            __Znwm();
            pfVar2 = (float *)((long)pfVar11 + lVar9);
            *pfVar2 = (float)dVar23;
            pfVar2[1] = (float)dVar24;
            pfVar2[2] = (float)dVar25;
            pfVar4 = pfVar11;
            for (pfVar1 = pfVar5; pfVar1 != pfVar21; pfVar1 = pfVar1 + 3) {
              uVar8 = *(undefined8 *)pfVar1;
              pfVar4[2] = pfVar1[2];
              *(undefined8 *)pfVar4 = uVar8;
              pfVar4 = pfVar4 + 3;
            }
            pfStack_160 = pfVar11 + uVar22 * 3;
            pfVar21 = pfVar2 + 3;
            pfStack_170 = pfVar11;
            pfStack_168 = pfVar21;
            if (pfVar5 != (float *)0x0) {
              __ZdlPv(pfVar5);
              pfStack_168 = pfVar21;
            }
          }
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar3);
  }
  FUN_10944b564(*(undefined8 *)(param_1 + 0x38),param_3,&pfStack_170,param_2,&puStack_138,2);
  if (pfStack_170 != (float *)0x0) {
    pfStack_168 = pfStack_170;
    __ZdlPv();
  }
  puVar6 = puStack_138;
  if (puStack_138 != (undefined8 *)0x0) {
    while (puStack_130 != puVar6) {
      puVar13 = puStack_130 + -4;
      (**(code **)*puVar13)(puVar13);
      puStack_130 = puVar13;
    }
    puStack_130 = puVar6;
    __ZdlPv(puStack_138);
  }
  return;
}



/* Entry: 109434390; end: 109434dab;  */

void FUN_109434390(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined4 uVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  undefined4 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
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
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  puVar3 = (ulong *)(param_3 - param_2);
  if (puVar3 == (ulong *)0x0) {
    lVar10 = 0;
    puVar21 = (ulong *)0x0;
  }
  else {
    if ((long)puVar3 < 0) goto LAB_109434d04;
    puVar21 = puVar3;
    __Znwm();
    _memcpy();
    lVar10 = (long)puVar21 + (long)puVar3;
    auVar26 = NEON_fmov(0x3fe0000000000000,8);
    auVar25 = NEON_fmov(0xbfe0000000000000,8);
    puVar24 = puVar21;
    do {
      uVar23 = *puVar24;
      puStack_220 = *(undefined8 **)(uVar23 + 400);
      dStack_218 = *(double *)(uVar23 + 0x198);
      dStack_210 = *(double *)(uVar23 + 0x1a0);
      dStack_208 = *(double *)(uVar23 + 0x1a8);
      uStack_1f8 = *(undefined8 *)(uVar23 + 0x1b8);
      uStack_200 = *(undefined8 *)(uVar23 + 0x1b0);
      uStack_1e8 = *(undefined8 *)(uVar23 + 0x1c8);
      uStack_1f0 = *(undefined8 *)(uVar23 + 0x1c0);
      dStack_1e0 = *(double *)(uVar23 + 0x1d0);
      dStack_1d8 = *(double *)(uVar23 + 0x1d8);
      uStack_1c8 = *(undefined8 *)(uVar23 + 0x1e8);
      uStack_1d0 = *(ulong *)(uVar23 + 0x1e0);
      iVar1 = *(int *)(uVar23 + 0x1e4);
      lStack_1c0 = *(long *)(uVar23 + 0x1f0);
      uStack_1b8 = *(undefined8 *)(uVar23 + 0x1f8);
      uStack_1b0 = *(undefined8 *)(uVar23 + 0x200);
      uStack_1a8 = *(undefined8 *)(uVar23 + 0x208);
      plStack_1a0 = *(long **)(uVar23 + 0x210);
      lStack_198 = *(long *)(uVar23 + 0x218);
      uStack_180 = 0;
      uStack_178 = 0;
      if (*(long *)(uVar23 + 0x218) != 0) {
        piVar11 = (int *)(*(long *)(uVar23 + 0x218) + 0x14);
        do {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar9) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        iVar1 = *(int *)(uVar23 + 0x1e4);
      }
      puStack_190 = &uStack_1c8;
      puStack_188 = &uStack_180;
      if (iVar1 < 3) {
        uStack_180 = **(undefined8 **)(uVar23 + 0x228);
        uStack_178 = (*(undefined8 **)(uVar23 + 0x228))[1];
      }
      else {
        uStack_1d0 = uStack_1d0 & 0xffffffff;
        FUN_109a844cc(&uStack_1d0,iVar1,0,0,0);
        if (0 < (int)uStack_1d0._4_4_) {
          lVar13 = 0;
          lVar19 = *(long *)(uVar23 + 0x220);
          lVar14 = *(long *)(uVar23 + 0x228);
          do {
            *(undefined4 *)((long)puStack_190 + lVar13 * 4) = *(undefined4 *)(lVar19 + lVar13 * 4);
            puStack_188[lVar13] = *(undefined8 *)(lVar14 + lVar13 * 8);
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)uStack_1d0._4_4_);
        }
      }
      if (lStack_1c0 == 0) {
LAB_1094345b0:
        uStack_280 = *(ulong *)(uVar23 + 0x80);
        uStack_278 = *(undefined8 *)(uVar23 + 0x88);
        lStack_270 = *(long *)(uVar23 + 0x90);
        uStack_268 = *(undefined8 *)(uVar23 + 0x98);
        iVar1 = *(int *)(uVar23 + 0x84);
        uStack_258 = *(undefined8 *)(uVar23 + 0xa8);
        uStack_260 = *(undefined8 *)(uVar23 + 0xa0);
        plStack_250 = *(long **)(uVar23 + 0xb0);
        lStack_248 = *(long *)(uVar23 + 0xb8);
        uStack_230 = 0;
        uStack_228 = 0;
        if (*(long *)(uVar23 + 0xb8) != 0) {
          piVar11 = (int *)(*(long *)(uVar23 + 0xb8) + 0x14);
          do {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar9) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          iVar1 = *(int *)(uVar23 + 0x84);
        }
        uStack_240 = (ulong)&uStack_280 | 8;
        puStack_238 = &uStack_230;
        if (iVar1 < 3) {
          uStack_230 = **(undefined8 **)(uVar23 + 200);
          uStack_228 = (*(undefined8 **)(uVar23 + 200))[1];
        }
        else {
          uStack_280 = uStack_280 & 0xffffffff;
          FUN_109a844cc(&uStack_280,iVar1,0,0,0);
          if (0 < (int)uStack_280._4_4_) {
            lVar13 = 0;
            lVar19 = *(long *)(uVar23 + 0xc0);
            lVar14 = *(long *)(uVar23 + 200);
            do {
              *(undefined4 *)(uStack_240 + lVar13 * 4) = *(undefined4 *)(lVar19 + lVar13 * 4);
              puStack_238[lVar13] = *(undefined8 *)(lVar14 + lVar13 * 8);
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)uStack_280._4_4_);
          }
        }
        puVar6 = puStack_188;
        puVar7 = puStack_190;
        if (lStack_270 != 0) {
          if ((int)uStack_280._4_4_ < 3) {
            lVar13 = (long)uStack_278._4_4_ * (long)(int)uStack_278;
          }
          else {
            uVar15 = (ulong)uStack_280._4_4_ & 0x7ffffffe;
            piVar11 = (int *)(uStack_240 + 4);
            lVar19 = 1;
            lVar13 = 1;
            uVar12 = uVar15;
            do {
              lVar19 = lVar19 * piVar11[-1];
              lVar13 = lVar13 * *piVar11;
              piVar11 = piVar11 + 2;
              uVar12 = uVar12 - 2;
            } while (uVar12 != 0);
            lVar13 = lVar13 * lVar19;
            lVar19 = uStack_280._4_4_ - uVar15;
            if (lVar19 != 0) {
              piVar11 = (int *)(uStack_240 + ((ulong)(uStack_280._4_4_ >> 1) & 0x3fffffff) * 8);
              do {
                lVar13 = lVar13 * *piVar11;
                lVar19 = lVar19 + -1;
                piVar11 = piVar11 + 1;
              } while (lVar19 != 0);
            }
          }
          if (lVar13 != 0) {
            puStack_140 = *(undefined8 **)(uVar23 + 400);
            dStack_138 = *(double *)(uVar23 + 0x198);
            uStack_120 = *(undefined8 *)(uVar23 + 0x1b0);
            uStack_118 = CONCAT44(uStack_118._4_4_,*(int *)(uVar23 + 0x1b8));
            uStack_110 = *(undefined8 *)(uVar23 + 0x1c0);
            uStack_108 = *(undefined8 *)(uVar23 + 0x1c8);
            uStack_f0 = 0x42ff0000;
            uStack_e4 = 0;
            uStack_e0 = 0;
            iStack_ec = 0;
            uStack_e8 = 0;
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
            puStack_b0 = (undefined8 *)&uStack_e8;
            puStack_a8 = &uStack_a0;
            dStack_100 = (double)_pow(*(undefined8 *)(uVar23 + 0x1c8),
                                      (double)*(int *)(uVar23 + 0x1b8));
            dStack_f8 = 1.0 / dStack_100;
            dStack_130 = ((double)puStack_140 + auVar26._0_8_) * dStack_100 + auVar25._0_8_;
            dStack_128 = (dStack_138 + auVar26._8_8_) * dStack_100 + auVar25._8_8_;
            auStack_158[0] = 0x2010000;
            uStack_148 = 0;
            puStack_150 = &uStack_f0;
            FUN_109a479a0(&uStack_280,auStack_158);
            dStack_218 = dStack_138;
            puStack_220 = puStack_140;
            dStack_208 = dStack_128;
            dStack_210 = dStack_130;
            uStack_1f8 = uStack_118;
            uStack_200 = uStack_120;
            uStack_1e8 = uStack_108;
            uStack_1f0 = uStack_110;
            dStack_1d8 = dStack_f8;
            dStack_1e0 = dStack_100;
            if (lStack_198 != 0) {
              piVar11 = (int *)(lStack_198 + 0x14);
              do {
                iVar1 = *piVar11;
                cVar2 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar9) {
                  *piVar11 = iVar1 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((iVar1 + -1 == 0) && (lStack_198 != 0)) {
                plVar18 = *(long **)(lStack_198 + 8);
                if ((*(long **)(lStack_198 + 8) == (long *)0x0) &&
                   ((plVar18 = plStack_1a0, plStack_1a0 == (long *)0x0 &&
                    (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                  FUN_109a83e3c();
                  plVar18 = plRam000000011382bb80;
                }
                (**(code **)(*plVar18 + 0x30))();
              }
            }
            if (0 < (int)uStack_1d0._4_4_) {
              lVar13 = 0;
              do {
                *(undefined4 *)((long)puStack_190 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < (int)uStack_1d0._4_4_);
            }
            uStack_1d0 = CONCAT44(iStack_ec,uStack_f0);
            uStack_1c8 = CONCAT44(uStack_e4,uStack_e8);
            lStack_1c0 = CONCAT44(uStack_dc,uStack_e0);
            uStack_1b8 = CONCAT44(uStack_d4,uStack_d8);
            uStack_1a8 = CONCAT44(uStack_c4,uStack_c8);
            uStack_1b0 = CONCAT44(uStack_cc,uStack_d0);
            plStack_1a0 = (long *)CONCAT44(uStack_bc,uStack_c0);
            lStack_198 = lStack_b8;
            puVar6 = puStack_190;
            puVar7 = puStack_188;
            if ((puStack_188 != &uStack_180) &&
               (puVar6 = &uStack_1c8, puVar7 = &uStack_180, puStack_188 != (undefined8 *)0x0)) {
              _free(puStack_188[-1]);
            }
            puStack_188 = puVar7;
            puStack_190 = puVar6;
            puVar5 = puStack_a8;
            puVar6 = puStack_a8;
            puVar7 = puStack_b0;
            if (iStack_ec < 3) {
              *puStack_188 = *puStack_a8;
              puStack_188[1] = puVar5[1];
              uStack_f0 = 0x42ff0000;
              uStack_e4 = 0;
              uStack_e0 = 0;
              iStack_ec = 0;
              uStack_e8 = 0;
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
              puVar6 = puStack_188;
              puVar7 = puStack_190;
              if (puVar5 != &uStack_a0) {
                _free(puVar5[-1]);
                puVar6 = puStack_188;
                puVar7 = puStack_190;
              }
            }
          }
        }
        puStack_190 = puVar7;
        puStack_188 = puVar6;
        if (lStack_248 != 0) {
          piVar11 = (int *)(lStack_248 + 0x14);
          do {
            iVar1 = *piVar11;
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar9) {
              *piVar11 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((iVar1 + -1 == 0) && (lStack_248 != 0)) {
            plVar18 = *(long **)(lStack_248 + 8);
            if ((*(long **)(lStack_248 + 8) == (long *)0x0) &&
               ((plVar18 = plStack_250, plStack_250 == (long *)0x0 &&
                (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar18 = plRam000000011382bb80;
            }
            (**(code **)(*plVar18 + 0x30))();
          }
        }
        lStack_248 = 0;
        uStack_268 = 0;
        lStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        if (0 < (int)uStack_280._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)(uStack_240 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)uStack_280._4_4_);
        }
        if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
          _free(puStack_238[-1]);
        }
      }
      else {
        if ((int)uStack_1d0._4_4_ < 3) {
          lVar13 = (long)uStack_1c8._4_4_ * (long)(int)uStack_1c8;
        }
        else {
          uVar15 = (ulong)uStack_1d0._4_4_ & 0x7ffffffe;
          piVar11 = (int *)((long)puStack_190 + 4);
          lVar19 = 1;
          lVar13 = 1;
          uVar12 = uVar15;
          do {
            lVar19 = lVar19 * piVar11[-1];
            lVar13 = lVar13 * *piVar11;
            piVar11 = piVar11 + 2;
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
          lVar13 = lVar13 * lVar19;
          lVar19 = uStack_1d0._4_4_ - uVar15;
          if (lVar19 != 0) {
            piVar11 = (int *)(puStack_190 + ((ulong)(uStack_1d0._4_4_ >> 1) & 0x3fffffff));
            do {
              lVar13 = lVar13 * *piVar11;
              lVar19 = lVar19 + -1;
              piVar11 = piVar11 + 1;
            } while (lVar19 != 0);
          }
        }
        if (lVar13 == 0) goto LAB_1094345b0;
      }
      uVar12 = param_4[1];
      if (uVar12 != 0) {
        uVar15 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
        uVar15 = (uVar23 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
        uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
        uVar16 = uVar12 - 1;
        if ((uVar12 & uVar16) == 0) {
          uVar17 = uVar16 & uVar15;
          plVar18 = *(long **)(*param_4 + uVar17 * 8);
        }
        else {
          uVar17 = uVar15;
          if (uVar12 <= uVar15) {
            uVar17 = 0;
            if (uVar12 != 0) {
              uVar17 = uVar15 / uVar12;
            }
            uVar17 = uVar15 - uVar17 * uVar12;
          }
          plVar18 = *(long **)(*param_4 + uVar17 * 8);
        }
        if (plVar18 != (long *)0x0) {
          for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
            uVar20 = plVar18[1];
            if (uVar15 - uVar20 == 0) {
              if (plVar18[2] == uVar23) {
                plVar18 = param_4;
                FUN_109434e1c(param_4,uVar23);
                uVar22 = (undefined4)*plVar18;
                goto LAB_1094349e0;
              }
            }
            else {
              if ((uVar12 & uVar16) == 0) {
                uVar20 = uVar20 & uVar16;
              }
              else if (uVar12 <= uVar20) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar20 / uVar12;
                }
                uVar20 = uVar20 - uVar4 * uVar12;
              }
              if (uVar20 != uVar17) break;
            }
          }
        }
      }
      uVar22 = 0xffffffff;
LAB_1094349e0:
      dStack_128 = dStack_208;
      dStack_130 = dStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      dStack_f8 = dStack_1d8;
      dStack_100 = dStack_1e0;
      dStack_138 = dStack_218;
      puStack_140 = puStack_220;
      uStack_e8 = (undefined4)uStack_1c8;
      uStack_e4 = (undefined4)((ulong)uStack_1c8 >> 0x20);
      uStack_f0 = (undefined4)uStack_1d0;
      uStack_d8 = (undefined4)uStack_1b8;
      uStack_d4 = (undefined4)((ulong)uStack_1b8 >> 0x20);
      uStack_e0 = (undefined4)lStack_1c0;
      uStack_dc = (undefined4)((ulong)lStack_1c0 >> 0x20);
      uStack_c8 = (undefined4)uStack_1a8;
      uStack_c4 = (undefined4)((ulong)uStack_1a8 >> 0x20);
      uStack_d0 = (undefined4)uStack_1b0;
      uStack_cc = (undefined4)((ulong)uStack_1b0 >> 0x20);
      lStack_b8 = lStack_198;
      uStack_c0 = SUB84(plStack_1a0,0);
      uStack_bc = (undefined4)((ulong)plStack_1a0 >> 0x20);
      uStack_a0 = 0;
      uStack_98 = 0;
      if (lStack_198 != 0) {
        piVar11 = (int *)(lStack_198 + 0x14);
        do {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar9) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((int)uStack_1d0._4_4_ < 3) {
        uStack_a0 = *puStack_188;
        uStack_98 = puStack_188[1];
        iStack_ec = uStack_1d0._4_4_;
        puStack_b0 = (undefined8 *)&uStack_e8;
        puStack_a8 = &uStack_a0;
      }
      else {
        iStack_ec = 0;
        puStack_b0 = (undefined8 *)&uStack_e8;
        puStack_a8 = &uStack_a0;
        FUN_109a844cc(&uStack_f0,uStack_1d0._4_4_,0,0,0);
        if (0 < iStack_ec) {
          lVar13 = 0;
          do {
            *(undefined4 *)((long)puStack_b0 + lVar13 * 4) =
                 *(undefined4 *)((long)puStack_190 + lVar13 * 4);
            puStack_a8[lVar13] = puStack_188[lVar13];
            lVar13 = lVar13 + 1;
          } while (lVar13 < iStack_ec);
        }
      }
      uStack_90 = uVar22;
      FUN_109434f30(&uStack_170,&puStack_140);
      if (lStack_b8 != 0) {
        piVar11 = (int *)(lStack_b8 + 0x14);
        do {
          iVar1 = *piVar11;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar9) {
            *piVar11 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((iVar1 + -1 == 0) && (lStack_b8 != 0)) {
          plVar18 = *(long **)(lStack_b8 + 8);
          if ((*(long **)(lStack_b8 + 8) == (long *)0x0) &&
             ((plVar18 = (long *)CONCAT44(uStack_bc,uStack_c0),
              (long *)CONCAT44(uStack_bc,uStack_c0) == (long *)0x0 &&
              (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar18 = plRam000000011382bb80;
          }
          (**(code **)(*plVar18 + 0x30))();
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
      if (0 < iStack_ec) {
        lVar13 = 0;
        do {
          *(undefined4 *)((long)puStack_b0 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_ec);
      }
      if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
        _free(puStack_a8[-1]);
      }
      if (lStack_198 != 0) {
        piVar11 = (int *)(lStack_198 + 0x14);
        do {
          iVar1 = *piVar11;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar9) {
            *piVar11 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((iVar1 + -1 == 0) && (lStack_198 != 0)) {
          plVar18 = *(long **)(lStack_198 + 8);
          if ((*(long **)(lStack_198 + 8) == (long *)0x0) &&
             ((plVar18 = plStack_1a0, plStack_1a0 == (long *)0x0 &&
              (plVar18 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar18 = plRam000000011382bb80;
          }
          (**(code **)(*plVar18 + 0x30))();
        }
      }
      lStack_198 = 0;
      uStack_1b8 = 0;
      lStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (0 < (int)uStack_1d0._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)((long)puStack_190 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_1d0._4_4_);
      }
      if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
        _free(puStack_188[-1]);
      }
      bVar9 = puVar24 != (ulong *)((long)puVar3 + (long)puVar21 + -8);
      puVar24 = puVar24 + 1;
    } while (bVar9);
  }
  FUN_1094358c4(param_1,&uStack_170,puVar21,lVar10);
  if (puVar21 != (ulong *)0x0) {
    __ZdlPv(puVar21);
  }
  puStack_140 = &uStack_170;
  FUN_109427be4(&puStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_109434d04:
  FUN_109435674();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109434d0c);
  (*pcVar8)();
}



/* Entry: 109434dac; end: 109434e1b;  */

undefined8 * FUN_109434dac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -4;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar3;
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 109434e1c; end: 109434f2f;  */

long ****** FUN_109434e1c(long *param_1,undefined8 *param_2)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  int *piVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  ulong uVar15;
  ulong uVar16;
  long ****pppplVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long ****pppplVar23;
  long *****ppppplVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  long *****ppppplStack_80;
  long ****pppplStack_78;
  long ****pppplStack_70;
  byte bStack_68;
  long ****pppplStack_60;
  long ****pppplStack_58;
  
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar15 = ((ulong)param_2 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
    uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
    uVar21 = uVar11 - 1;
    if ((uVar11 & uVar21) == 0) {
      uVar16 = uVar21 & uVar15;
    }
    else {
      uVar16 = uVar15;
      if (uVar11 <= uVar15) {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar15 / uVar11;
        }
        uVar16 = uVar15 - uVar16 * uVar11;
      }
    }
    plVar20 = *(long **)(*param_1 + uVar16 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if ((uVar11 & uVar21) == 0) {
        do {
          if (uVar15 - plVar20[1] == 0) {
            if ((undefined8 *)plVar20[2] == param_2) {
LAB_109434f18:
              return (long ******)(plVar20 + 3);
            }
          }
          else if ((plVar20[1] & uVar21) != uVar16) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar20[1];
          if (uVar15 - uVar21 == 0) {
            if ((undefined8 *)plVar20[2] == param_2) goto LAB_109434f18;
          }
          else {
            if (uVar11 <= uVar21) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar21 / uVar11;
              }
              uVar21 = uVar21 - uVar6 * uVar11;
            }
            if (uVar21 != uVar16) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  pppppplVar7 = (long ******)&UNK_10f639994;
  FUN_109262df8();
  ppppplVar9 = pppppplVar7[1];
  if (ppppplVar9 < pppppplVar7[2]) {
    pppplVar17 = (long ****)*param_2;
    ppppplVar9[1] = (long ****)param_2[1];
    *ppppplVar9 = pppplVar17;
    pppplVar17 = (long ****)param_2[2];
    ppppplVar9[3] = (long ****)param_2[3];
    ppppplVar9[2] = pppplVar17;
    pppplVar23 = (long ****)param_2[5];
    pppplVar17 = (long ****)param_2[4];
    pppplVar10 = (long ****)param_2[6];
    pppplVar29 = (long ****)param_2[9];
    pppplVar28 = (long ****)param_2[8];
    ppppplVar9[7] = (long ****)param_2[7];
    ppppplVar9[6] = pppplVar10;
    ppppplVar9[9] = pppplVar29;
    ppppplVar9[8] = pppplVar28;
    ppppplVar9[5] = pppplVar23;
    ppppplVar9[4] = pppplVar17;
    pppplVar23 = (long ****)param_2[0xb];
    pppplVar17 = (long ****)param_2[10];
    pppplVar10 = (long ****)param_2[0xc];
    ppppplVar9[0xd] = (long ****)param_2[0xd];
    ppppplVar9[0xc] = pppplVar10;
    pppplVar10 = (long ****)param_2[0xe];
    ppppplVar9[0xf] = (long ****)param_2[0xf];
    ppppplVar9[0xe] = pppplVar10;
    pppplVar28 = (long ****)param_2[0x11];
    pppplVar10 = (long ****)param_2[0x10];
    ppppplVar9[0x14] = (long ****)0x0;
    ppppplVar9[0xb] = pppplVar23;
    ppppplVar9[10] = pppplVar17;
    ppppplVar9[0x15] = (long ****)0x0;
    piVar12 = (int *)((long)param_2 + 0x54);
    iVar3 = *piVar12;
    ppppplVar9[0x11] = pppplVar28;
    ppppplVar9[0x10] = pppplVar10;
    ppppplVar9[0x12] = (long ****)(ppppplVar9 + 0xb);
    ppppplVar9[0x13] = (long ****)(ppppplVar9 + 0x14);
    pppplVar17 = (long ****)param_2[0x13];
    if (iVar3 < 3) {
      ppppplVar9[0x14] = (long ****)*pppplVar17;
      ppppplVar9[0x15] = (long ****)pppplVar17[1];
    }
    else {
      ppppplVar9[0x12] = (long ****)param_2[0x12];
      ppppplVar9[0x13] = pppplVar17;
      param_2[0x12] = param_2 + 0xb;
      param_2[0x13] = param_2 + 0x14;
    }
    *(undefined4 *)(param_2 + 10) = 0x42ff0000;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    piVar12[0] = 0;
    piVar12[1] = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x7c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    *(undefined4 *)(ppppplVar9 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    ppppplVar9 = ppppplVar9 + 0x18;
    pppppplVar8 = pppppplVar7;
  }
  else {
    lVar22 = (long)ppppplVar9 - (long)*pppppplVar7;
    uVar11 = (lVar22 >> 6) * -0x5555555555555555 + 1;
    if (0x155555555555555 < uVar11) {
      FUN_109428144();
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_10942803c(&ppppplStack_80);
      FUN_109435568(&ppppplStack_a8);
      __Unwind_Resume();
      if (pppppplVar7[0x11] != (long *****)0x0) {
        piVar12 = (int *)((long)pppppplVar7[0x11] + 0x14);
        do {
          iVar3 = *piVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar5) {
            *piVar12 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((iVar3 + -1 == 0) && (pppppplVar7[0x11] != (long *****)0x0)) {
          ppppplVar9 = (long *****)pppppplVar7[0x11][1];
          if ((ppppplVar9 == (long *****)0x0) &&
             ((ppppplVar9 = pppppplVar7[0x10], pppppplVar7[0x10] == (long *****)0x0 &&
              (ppppplVar9 = ppppplRam000000011382bb80, ppppplRam000000011382bb80 == (long *****)0x0)
              ))) {
            FUN_109a83e3c();
            ppppplVar9 = ppppplRam000000011382bb80;
          }
          (*(code *)(*ppppplVar9)[6])();
        }
      }
      pppppplVar7[0x11] = (long *****)0x0;
      pppppplVar7[0xd] = (long *****)0x0;
      pppppplVar7[0xc] = (long *****)0x0;
      pppppplVar7[0xf] = (long *****)0x0;
      pppppplVar7[0xe] = (long *****)0x0;
      if (0 < *(int *)((long)pppppplVar7 + 0x54)) {
        lVar22 = 0;
        ppppplVar9 = pppppplVar7[0x12];
        do {
          *(undefined4 *)((long)ppppplVar9 + lVar22 * 4) = 0;
          lVar22 = lVar22 + 1;
        } while (lVar22 < *(int *)((long)pppppplVar7 + 0x54));
      }
      pppppplVar8 = (long ******)pppppplVar7[0x13];
      if (pppppplVar8 != pppppplVar7 + 0x14 && pppppplVar8 != (long ******)0x0) {
        _free(pppppplVar8[-1]);
      }
      return pppppplVar7;
    }
    lVar18 = (long)pppppplVar7[2] - (long)*pppppplVar7 >> 6;
    uVar15 = lVar18 * 0x5555555555555556;
    if (uVar15 < uVar11 || uVar15 - uVar11 == 0) {
      uVar15 = uVar11;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar15 = 0x155555555555555;
    }
    ppppplStack_88 = (long *****)pppppplVar7;
    if (uVar15 == 0) {
      pppppplVar8 = (long ******)0x0;
    }
    else {
      pppppplVar8 = pppppplVar7;
      FUN_109428158(pppppplVar7,uVar15,0);
    }
    pppplStack_a0 = (long ****)((long)pppppplVar8 + lVar22);
    ppppplStack_90 = (long *****)(pppppplVar8 + uVar15 * 0x18);
    uVar25 = *param_2;
    pppplStack_a0[1] = (long ***)param_2[1];
    *pppplStack_a0 = (long ***)uVar25;
    uVar25 = param_2[2];
    pppplStack_a0[3] = (long ***)param_2[3];
    pppplStack_a0[2] = (long ***)uVar25;
    uVar26 = param_2[5];
    uVar25 = param_2[4];
    uVar27 = param_2[6];
    uVar31 = param_2[9];
    uVar30 = param_2[8];
    pppplStack_a0[7] = (long ***)param_2[7];
    pppplStack_a0[6] = (long ***)uVar27;
    pppplStack_a0[9] = (long ***)uVar31;
    pppplStack_a0[8] = (long ***)uVar30;
    pppplStack_a0[5] = (long ***)uVar26;
    pppplStack_a0[4] = (long ***)uVar25;
    uVar25 = param_2[10];
    uVar27 = param_2[0xd];
    uVar26 = param_2[0xc];
    pppplStack_a0[0xb] = (long ***)param_2[0xb];
    pppplStack_a0[10] = (long ***)uVar25;
    pppplStack_a0[0xd] = (long ***)uVar27;
    pppplStack_a0[0xc] = (long ***)uVar26;
    uVar25 = param_2[0xe];
    pppplStack_a0[0xf] = (long ***)param_2[0xf];
    pppplStack_a0[0xe] = (long ***)uVar25;
    uVar26 = param_2[0x11];
    uVar25 = param_2[0x10];
    pppplStack_a0[0x15] = (long ***)0x0;
    pppplStack_a0[0x14] = (long ***)0x0;
    piVar12 = (int *)((long)param_2 + 0x54);
    iVar3 = *piVar12;
    pppplStack_a0[0x11] = (long ***)uVar26;
    pppplStack_a0[0x10] = (long ***)uVar25;
    pppplStack_a0[0x12] = (long ***)(pppplStack_a0 + 0xb);
    pppplStack_a0[0x13] = (long ***)(pppplStack_a0 + 0x14);
    puVar19 = (undefined8 *)param_2[0x13];
    if (iVar3 < 3) {
      pppplStack_a0[0x14] = (long ***)*puVar19;
      pppplStack_a0[0x15] = (long ***)puVar19[1];
    }
    else {
      pppplStack_a0[0x12] = (long ***)param_2[0x12];
      pppplStack_a0[0x13] = (long ***)puVar19;
      param_2[0x12] = param_2 + 0xb;
      param_2[0x13] = param_2 + 0x14;
    }
    *(undefined4 *)(param_2 + 10) = 0x42ff0000;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x7c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    piVar12[0] = 0;
    piVar12[1] = 0;
    *(undefined4 *)(pppplStack_a0 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    pppplStack_98 = pppplStack_a0 + 0x18;
    ppppplVar13 = *pppppplVar7;
    ppppplVar2 = pppppplVar7[1];
    pppplStack_78 = (long ****)&pppplStack_60;
    pppplStack_70 = (long ****)&pppplStack_58;
    bStack_68 = 0;
    ppppplVar1 = (long *****)((long)pppplStack_a0 + ((long)ppppplVar13 - (long)ppppplVar2));
    ppppplVar9 = ppppplVar13;
    ppppplVar24 = ppppplVar1;
    ppppplStack_a8 = (long *****)pppppplVar8;
    ppppplStack_80 = (long *****)pppppplVar7;
    pppplStack_60 = (long ****)ppppplVar1;
    pppplStack_58 = (long ****)ppppplVar1;
    if ((long)ppppplVar13 - (long)ppppplVar2 != 0) {
      do {
        pppplVar17 = *ppppplVar9;
        ppppplVar24[1] = ppppplVar9[1];
        *ppppplVar24 = pppplVar17;
        pppplVar17 = ppppplVar9[2];
        ppppplVar24[3] = ppppplVar9[3];
        ppppplVar24[2] = pppplVar17;
        pppplVar23 = ppppplVar9[5];
        pppplVar17 = ppppplVar9[4];
        pppplVar10 = ppppplVar9[6];
        pppplVar29 = ppppplVar9[9];
        pppplVar28 = ppppplVar9[8];
        ppppplVar24[7] = ppppplVar9[7];
        ppppplVar24[6] = pppplVar10;
        ppppplVar24[9] = pppplVar29;
        ppppplVar24[8] = pppplVar28;
        ppppplVar24[5] = pppplVar23;
        ppppplVar24[4] = pppplVar17;
        pppplVar10 = ppppplVar9[0xb];
        pppplVar23 = ppppplVar9[10];
        pppplVar17 = ppppplVar9[0xc];
        ppppplVar24[0xd] = ppppplVar9[0xd];
        ppppplVar24[0xc] = pppplVar17;
        pppplVar17 = ppppplVar9[0xe];
        ppppplVar24[0xf] = ppppplVar9[0xf];
        ppppplVar24[0xe] = pppplVar17;
        pppplVar17 = ppppplVar9[0x11];
        pppplVar29 = ppppplVar9[0x11];
        pppplVar28 = ppppplVar9[0x10];
        ppppplVar24[0x14] = (long ****)0x0;
        ppppplVar24[0x11] = pppplVar29;
        ppppplVar24[0x10] = pppplVar28;
        ppppplVar24[0x12] = (long ****)(ppppplVar24 + 0xb);
        ppppplVar24[0x13] = (long ****)(ppppplVar24 + 0x14);
        ppppplVar24[0x15] = (long ****)0x0;
        ppppplVar24[0xb] = pppplVar10;
        ppppplVar24[10] = pppplVar23;
        if (pppplVar17 != (long ****)0x0) {
          piVar12 = (int *)((long)pppplVar17 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppplStack_58 = (long ****)ppppplVar24;
        if (*(int *)((long)ppppplVar9 + 0x54) < 3) {
          pppplVar17 = ppppplVar9[0x13];
          pppplVar23 = ppppplVar24[0x13];
          *pppplVar23 = *pppplVar17;
          pppplVar23[1] = pppplVar17[1];
        }
        else {
          *(undefined4 *)((long)ppppplVar24 + 0x54) = 0;
          FUN_109a844cc(ppppplVar24 + 10,*(undefined4 *)((long)ppppplVar9 + 0x54),0,0,0);
          if (0 < *(int *)((long)ppppplVar24 + 0x54)) {
            lVar22 = 0;
            pppplVar17 = ppppplVar9[0x12];
            pppplVar10 = ppppplVar9[0x13];
            pppplVar23 = ppppplVar24[0x12];
            pppplVar28 = ppppplVar24[0x13];
            do {
              *(undefined4 *)((long)pppplVar23 + lVar22 * 4) =
                   *(undefined4 *)((long)pppplVar17 + lVar22 * 4);
              pppplVar28[lVar22] = pppplVar10[lVar22];
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)((long)ppppplVar24 + 0x54));
          }
        }
        *(undefined4 *)(ppppplVar24 + 0x16) = *(undefined4 *)(ppppplVar9 + 0x16);
        ppppplVar9 = ppppplVar9 + 0x18;
        pppplStack_58 = pppplStack_58 + 0x18;
        ppppplVar24 = (long *****)pppplStack_58;
      } while (ppppplVar9 != ppppplVar2);
      bStack_68 = 1;
      do {
        if (ppppplVar13[0x11] != (long ****)0x0) {
          piVar12 = (int *)((long)ppppplVar13[0x11] + 0x14);
          do {
            iVar3 = *piVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            if (ppppplVar13[0x11] != (long ****)0x0) {
              ppppplVar9 = (long *****)ppppplVar13[0x11][1];
              if (((ppppplVar9 == (long *****)0x0) &&
                  (ppppplVar9 = (long *****)ppppplVar13[0x10],
                  (long *****)ppppplVar13[0x10] == (long *****)0x0)) &&
                 (ppppplVar9 = ppppplRam000000011382bb80,
                 ppppplRam000000011382bb80 == (long *****)0x0)) {
                FUN_109a83e3c();
                ppppplVar9 = ppppplRam000000011382bb80;
              }
              (*(code *)(*ppppplVar9)[6])();
            }
            ppppplVar13[0x11] = (long ****)0x0;
          }
        }
        ppppplVar13[0x11] = (long ****)0x0;
        ppppplVar13[0xd] = (long ****)0x0;
        ppppplVar13[0xc] = (long ****)0x0;
        ppppplVar13[0xf] = (long ****)0x0;
        ppppplVar13[0xe] = (long ****)0x0;
        if (0 < *(int *)((long)ppppplVar13 + 0x54)) {
          lVar22 = 0;
          pppplVar17 = ppppplVar13[0x12];
          do {
            *(undefined4 *)((long)pppplVar17 + lVar22 * 4) = 0;
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((long)ppppplVar13 + 0x54));
        }
        ppppplVar9 = (long *****)ppppplVar13[0x13];
        if (ppppplVar9 != ppppplVar13 + 0x14 && ppppplVar9 != (long *****)0x0) {
          _free(ppppplVar9[-1]);
        }
        ppppplVar13 = ppppplVar13 + 0x18;
      } while (ppppplVar13 != ppppplVar2);
      if ((bStack_68 & 1) == 0) {
        pppplVar23 = (long ****)*pppplStack_78;
        for (pppplVar17 = (long ****)*pppplStack_70; pppplVar17 != pppplVar23;
            pppplVar17 = pppplVar17 + -0x18) {
          if (pppplVar17[-7] != (long ***)0x0) {
            piVar12 = (int *)((long)pppplVar17[-7] + 0x14);
            do {
              iVar3 = *piVar12;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              if (pppplVar17[-7] != (long ***)0x0) {
                ppppplVar9 = (long *****)pppplVar17[-7][1];
                if (((ppppplVar9 == (long *****)0x0) &&
                    (ppppplVar9 = (long *****)pppplVar17[-8],
                    (long *****)pppplVar17[-8] == (long *****)0x0)) &&
                   (ppppplVar9 = ppppplRam000000011382bb80,
                   ppppplRam000000011382bb80 == (long *****)0x0)) {
                  FUN_109a83e3c();
                  ppppplVar9 = ppppplRam000000011382bb80;
                }
                (*(code *)(*ppppplVar9)[6])();
              }
              pppplVar17[-7] = (long ***)0x0;
            }
          }
          pppplVar17[-7] = (long ***)0x0;
          pppplVar17[-0xb] = (long ***)0x0;
          pppplVar17[-0xc] = (long ***)0x0;
          pppplVar17[-9] = (long ***)0x0;
          pppplVar17[-10] = (long ***)0x0;
          if (0 < *(int *)((long)pppplVar17 + -0x6c)) {
            lVar22 = 0;
            ppplVar14 = pppplVar17[-6];
            do {
              *(undefined4 *)((long)ppplVar14 + lVar22 * 4) = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)((long)pppplVar17 + -0x6c));
          }
          pppplVar10 = (long ****)pppplVar17[-5];
          if (pppplVar10 != pppplVar17 + -4 && pppplVar10 != (long ****)0x0) {
            _free(pppplVar10[-1]);
          }
        }
      }
    }
    ppppplVar9 = (long *****)pppplStack_98;
    ppppplStack_a8 = *pppppplVar7;
    *pppppplVar7 = ppppplVar1;
    ppppplVar13 = pppppplVar7[2];
    pppppplVar7[2] = ppppplStack_90;
    pppppplVar7[1] = (long *****)pppplStack_98;
    pppppplVar8 = &ppppplStack_a8;
    pppplStack_a0 = (long ****)ppppplStack_a8;
    pppplStack_98 = (long ****)ppppplStack_a8;
    ppppplStack_90 = ppppplVar13;
    FUN_109435568(pppppplVar8);
  }
  pppppplVar7[1] = ppppplVar9;
  return pppppplVar8;
}



/* Entry: 109434f30; end: 109435497;  */

long ****** FUN_109434f30(long ******param_1,undefined8 *param_2)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long ******pppppplVar6;
  long *****ppppplVar7;
  ulong uVar8;
  long ****pppplVar9;
  int *piVar10;
  long *****ppppplVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long ****pppplVar18;
  long *****ppppplVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *****ppppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long *****ppppplStack_80;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long ****pppplStack_68;
  long ****pppplStack_60;
  byte bStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  
  ppppplVar7 = param_1[1];
  if (ppppplVar7 < param_1[2]) {
    pppplVar13 = (long ****)*param_2;
    ppppplVar7[1] = (long ****)param_2[1];
    *ppppplVar7 = pppplVar13;
    pppplVar13 = (long ****)param_2[2];
    ppppplVar7[3] = (long ****)param_2[3];
    ppppplVar7[2] = pppplVar13;
    pppplVar18 = (long ****)param_2[5];
    pppplVar13 = (long ****)param_2[4];
    pppplVar9 = (long ****)param_2[6];
    pppplVar24 = (long ****)param_2[9];
    pppplVar23 = (long ****)param_2[8];
    ppppplVar7[7] = (long ****)param_2[7];
    ppppplVar7[6] = pppplVar9;
    ppppplVar7[9] = pppplVar24;
    ppppplVar7[8] = pppplVar23;
    ppppplVar7[5] = pppplVar18;
    ppppplVar7[4] = pppplVar13;
    pppplVar18 = (long ****)param_2[0xb];
    pppplVar13 = (long ****)param_2[10];
    pppplVar9 = (long ****)param_2[0xc];
    ppppplVar7[0xd] = (long ****)param_2[0xd];
    ppppplVar7[0xc] = pppplVar9;
    pppplVar9 = (long ****)param_2[0xe];
    ppppplVar7[0xf] = (long ****)param_2[0xf];
    ppppplVar7[0xe] = pppplVar9;
    pppplVar23 = (long ****)param_2[0x11];
    pppplVar9 = (long ****)param_2[0x10];
    ppppplVar7[0x14] = (long ****)0x0;
    ppppplVar7[0xb] = pppplVar18;
    ppppplVar7[10] = pppplVar13;
    ppppplVar7[0x15] = (long ****)0x0;
    piVar10 = (int *)((long)param_2 + 0x54);
    iVar3 = *piVar10;
    ppppplVar7[0x11] = pppplVar23;
    ppppplVar7[0x10] = pppplVar9;
    ppppplVar7[0x12] = (long ****)(ppppplVar7 + 0xb);
    ppppplVar7[0x13] = (long ****)(ppppplVar7 + 0x14);
    pppplVar13 = (long ****)param_2[0x13];
    if (iVar3 < 3) {
      ppppplVar7[0x14] = (long ****)*pppplVar13;
      ppppplVar7[0x15] = (long ****)pppplVar13[1];
    }
    else {
      ppppplVar7[0x12] = (long ****)param_2[0x12];
      ppppplVar7[0x13] = pppplVar13;
      param_2[0x12] = param_2 + 0xb;
      param_2[0x13] = param_2 + 0x14;
    }
    *(undefined4 *)(param_2 + 10) = 0x42ff0000;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    piVar10[0] = 0;
    piVar10[1] = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x7c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    *(undefined4 *)(ppppplVar7 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    ppppplVar7 = ppppplVar7 + 0x18;
    pppppplVar6 = param_1;
  }
  else {
    lVar17 = (long)ppppplVar7 - (long)*param_1;
    uVar8 = (lVar17 >> 6) * -0x5555555555555555 + 1;
    if (0x155555555555555 < uVar8) {
      FUN_109428144();
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_10942803c(&ppppplStack_70);
      FUN_109435568(&ppppplStack_98);
      __Unwind_Resume();
      if (param_1[0x11] != (long *****)0x0) {
        piVar10 = (int *)((long)param_1[0x11] + 0x14);
        do {
          iVar3 = *piVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((iVar3 + -1 == 0) && (param_1[0x11] != (long *****)0x0)) {
          ppppplVar7 = (long *****)param_1[0x11][1];
          if ((ppppplVar7 == (long *****)0x0) &&
             ((ppppplVar7 = param_1[0x10], param_1[0x10] == (long *****)0x0 &&
              (ppppplVar7 = ppppplRam000000011382bb80, ppppplRam000000011382bb80 == (long *****)0x0)
              ))) {
            FUN_109a83e3c();
            ppppplVar7 = ppppplRam000000011382bb80;
          }
          (*(code *)(*ppppplVar7)[6])();
        }
      }
      param_1[0x11] = (long *****)0x0;
      param_1[0xd] = (long *****)0x0;
      param_1[0xc] = (long *****)0x0;
      param_1[0xf] = (long *****)0x0;
      param_1[0xe] = (long *****)0x0;
      if (0 < *(int *)((long)param_1 + 0x54)) {
        lVar17 = 0;
        ppppplVar7 = param_1[0x12];
        do {
          *(undefined4 *)((long)ppppplVar7 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)((long)param_1 + 0x54));
      }
      pppppplVar6 = (long ******)param_1[0x13];
      if (pppppplVar6 != param_1 + 0x14 && pppppplVar6 != (long ******)0x0) {
        _free(pppppplVar6[-1]);
      }
      return param_1;
    }
    lVar14 = (long)param_1[2] - (long)*param_1 >> 6;
    uVar16 = lVar14 * 0x5555555555555556;
    if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
      uVar16 = uVar8;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar16 = 0x155555555555555;
    }
    ppppplStack_78 = (long *****)param_1;
    if (uVar16 == 0) {
      pppppplVar6 = (long ******)0x0;
    }
    else {
      pppppplVar6 = param_1;
      FUN_109428158(param_1,uVar16,0);
    }
    pppplStack_90 = (long ****)((long)pppppplVar6 + lVar17);
    ppppplStack_80 = (long *****)(pppppplVar6 + uVar16 * 0x18);
    uVar20 = *param_2;
    pppplStack_90[1] = (long ***)param_2[1];
    *pppplStack_90 = (long ***)uVar20;
    uVar20 = param_2[2];
    pppplStack_90[3] = (long ***)param_2[3];
    pppplStack_90[2] = (long ***)uVar20;
    uVar21 = param_2[5];
    uVar20 = param_2[4];
    uVar22 = param_2[6];
    uVar26 = param_2[9];
    uVar25 = param_2[8];
    pppplStack_90[7] = (long ***)param_2[7];
    pppplStack_90[6] = (long ***)uVar22;
    pppplStack_90[9] = (long ***)uVar26;
    pppplStack_90[8] = (long ***)uVar25;
    pppplStack_90[5] = (long ***)uVar21;
    pppplStack_90[4] = (long ***)uVar20;
    uVar20 = param_2[10];
    uVar22 = param_2[0xd];
    uVar21 = param_2[0xc];
    pppplStack_90[0xb] = (long ***)param_2[0xb];
    pppplStack_90[10] = (long ***)uVar20;
    pppplStack_90[0xd] = (long ***)uVar22;
    pppplStack_90[0xc] = (long ***)uVar21;
    uVar20 = param_2[0xe];
    pppplStack_90[0xf] = (long ***)param_2[0xf];
    pppplStack_90[0xe] = (long ***)uVar20;
    uVar21 = param_2[0x11];
    uVar20 = param_2[0x10];
    pppplStack_90[0x15] = (long ***)0x0;
    pppplStack_90[0x14] = (long ***)0x0;
    piVar10 = (int *)((long)param_2 + 0x54);
    iVar3 = *piVar10;
    pppplStack_90[0x11] = (long ***)uVar21;
    pppplStack_90[0x10] = (long ***)uVar20;
    pppplStack_90[0x12] = (long ***)(pppplStack_90 + 0xb);
    pppplStack_90[0x13] = (long ***)(pppplStack_90 + 0x14);
    puVar15 = (undefined8 *)param_2[0x13];
    if (iVar3 < 3) {
      pppplStack_90[0x14] = (long ***)*puVar15;
      pppplStack_90[0x15] = (long ***)puVar15[1];
    }
    else {
      pppplStack_90[0x12] = (long ***)param_2[0x12];
      pppplStack_90[0x13] = (long ***)puVar15;
      param_2[0x12] = param_2 + 0xb;
      param_2[0x13] = param_2 + 0x14;
    }
    *(undefined4 *)(param_2 + 10) = 0x42ff0000;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x7c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    piVar10[0] = 0;
    piVar10[1] = 0;
    *(undefined4 *)(pppplStack_90 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    pppplStack_88 = pppplStack_90 + 0x18;
    ppppplVar11 = *param_1;
    ppppplVar2 = param_1[1];
    pppplStack_68 = (long ****)&pppplStack_50;
    pppplStack_60 = (long ****)&pppplStack_48;
    bStack_58 = 0;
    ppppplVar1 = (long *****)((long)pppplStack_90 + ((long)ppppplVar11 - (long)ppppplVar2));
    ppppplVar7 = ppppplVar11;
    ppppplVar19 = ppppplVar1;
    ppppplStack_98 = (long *****)pppppplVar6;
    ppppplStack_70 = (long *****)param_1;
    pppplStack_50 = (long ****)ppppplVar1;
    pppplStack_48 = (long ****)ppppplVar1;
    if ((long)ppppplVar11 - (long)ppppplVar2 != 0) {
      do {
        pppplVar13 = *ppppplVar7;
        ppppplVar19[1] = ppppplVar7[1];
        *ppppplVar19 = pppplVar13;
        pppplVar13 = ppppplVar7[2];
        ppppplVar19[3] = ppppplVar7[3];
        ppppplVar19[2] = pppplVar13;
        pppplVar18 = ppppplVar7[5];
        pppplVar13 = ppppplVar7[4];
        pppplVar9 = ppppplVar7[6];
        pppplVar24 = ppppplVar7[9];
        pppplVar23 = ppppplVar7[8];
        ppppplVar19[7] = ppppplVar7[7];
        ppppplVar19[6] = pppplVar9;
        ppppplVar19[9] = pppplVar24;
        ppppplVar19[8] = pppplVar23;
        ppppplVar19[5] = pppplVar18;
        ppppplVar19[4] = pppplVar13;
        pppplVar9 = ppppplVar7[0xb];
        pppplVar18 = ppppplVar7[10];
        pppplVar13 = ppppplVar7[0xc];
        ppppplVar19[0xd] = ppppplVar7[0xd];
        ppppplVar19[0xc] = pppplVar13;
        pppplVar13 = ppppplVar7[0xe];
        ppppplVar19[0xf] = ppppplVar7[0xf];
        ppppplVar19[0xe] = pppplVar13;
        pppplVar13 = ppppplVar7[0x11];
        pppplVar24 = ppppplVar7[0x11];
        pppplVar23 = ppppplVar7[0x10];
        ppppplVar19[0x14] = (long ****)0x0;
        ppppplVar19[0x11] = pppplVar24;
        ppppplVar19[0x10] = pppplVar23;
        ppppplVar19[0x12] = (long ****)(ppppplVar19 + 0xb);
        ppppplVar19[0x13] = (long ****)(ppppplVar19 + 0x14);
        ppppplVar19[0x15] = (long ****)0x0;
        ppppplVar19[0xb] = pppplVar9;
        ppppplVar19[10] = pppplVar18;
        if (pppplVar13 != (long ****)0x0) {
          piVar10 = (int *)((long)pppplVar13 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppplStack_48 = (long ****)ppppplVar19;
        if (*(int *)((long)ppppplVar7 + 0x54) < 3) {
          pppplVar13 = ppppplVar7[0x13];
          pppplVar18 = ppppplVar19[0x13];
          *pppplVar18 = *pppplVar13;
          pppplVar18[1] = pppplVar13[1];
        }
        else {
          *(undefined4 *)((long)ppppplVar19 + 0x54) = 0;
          FUN_109a844cc(ppppplVar19 + 10,*(undefined4 *)((long)ppppplVar7 + 0x54),0,0,0);
          if (0 < *(int *)((long)ppppplVar19 + 0x54)) {
            lVar17 = 0;
            pppplVar13 = ppppplVar7[0x12];
            pppplVar9 = ppppplVar7[0x13];
            pppplVar18 = ppppplVar19[0x12];
            pppplVar23 = ppppplVar19[0x13];
            do {
              *(undefined4 *)((long)pppplVar18 + lVar17 * 4) =
                   *(undefined4 *)((long)pppplVar13 + lVar17 * 4);
              pppplVar23[lVar17] = pppplVar9[lVar17];
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)((long)ppppplVar19 + 0x54));
          }
        }
        *(undefined4 *)(ppppplVar19 + 0x16) = *(undefined4 *)(ppppplVar7 + 0x16);
        ppppplVar7 = ppppplVar7 + 0x18;
        pppplStack_48 = pppplStack_48 + 0x18;
        ppppplVar19 = (long *****)pppplStack_48;
      } while (ppppplVar7 != ppppplVar2);
      bStack_58 = 1;
      do {
        if (ppppplVar11[0x11] != (long ****)0x0) {
          piVar10 = (int *)((long)ppppplVar11[0x11] + 0x14);
          do {
            iVar3 = *piVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            if (ppppplVar11[0x11] != (long ****)0x0) {
              ppppplVar7 = (long *****)ppppplVar11[0x11][1];
              if (((ppppplVar7 == (long *****)0x0) &&
                  (ppppplVar7 = (long *****)ppppplVar11[0x10],
                  (long *****)ppppplVar11[0x10] == (long *****)0x0)) &&
                 (ppppplVar7 = ppppplRam000000011382bb80,
                 ppppplRam000000011382bb80 == (long *****)0x0)) {
                FUN_109a83e3c();
                ppppplVar7 = ppppplRam000000011382bb80;
              }
              (*(code *)(*ppppplVar7)[6])();
            }
            ppppplVar11[0x11] = (long ****)0x0;
          }
        }
        ppppplVar11[0x11] = (long ****)0x0;
        ppppplVar11[0xd] = (long ****)0x0;
        ppppplVar11[0xc] = (long ****)0x0;
        ppppplVar11[0xf] = (long ****)0x0;
        ppppplVar11[0xe] = (long ****)0x0;
        if (0 < *(int *)((long)ppppplVar11 + 0x54)) {
          lVar17 = 0;
          pppplVar13 = ppppplVar11[0x12];
          do {
            *(undefined4 *)((long)pppplVar13 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)((long)ppppplVar11 + 0x54));
        }
        ppppplVar7 = (long *****)ppppplVar11[0x13];
        if (ppppplVar7 != ppppplVar11 + 0x14 && ppppplVar7 != (long *****)0x0) {
          _free(ppppplVar7[-1]);
        }
        ppppplVar11 = ppppplVar11 + 0x18;
      } while (ppppplVar11 != ppppplVar2);
      if ((bStack_58 & 1) == 0) {
        pppplVar18 = (long ****)*pppplStack_68;
        for (pppplVar13 = (long ****)*pppplStack_60; pppplVar13 != pppplVar18;
            pppplVar13 = pppplVar13 + -0x18) {
          if (pppplVar13[-7] != (long ***)0x0) {
            piVar10 = (int *)((long)pppplVar13[-7] + 0x14);
            do {
              iVar3 = *piVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              if (pppplVar13[-7] != (long ***)0x0) {
                ppppplVar7 = (long *****)pppplVar13[-7][1];
                if (((ppppplVar7 == (long *****)0x0) &&
                    (ppppplVar7 = (long *****)pppplVar13[-8],
                    (long *****)pppplVar13[-8] == (long *****)0x0)) &&
                   (ppppplVar7 = ppppplRam000000011382bb80,
                   ppppplRam000000011382bb80 == (long *****)0x0)) {
                  FUN_109a83e3c();
                  ppppplVar7 = ppppplRam000000011382bb80;
                }
                (*(code *)(*ppppplVar7)[6])();
              }
              pppplVar13[-7] = (long ***)0x0;
            }
          }
          pppplVar13[-7] = (long ***)0x0;
          pppplVar13[-0xb] = (long ***)0x0;
          pppplVar13[-0xc] = (long ***)0x0;
          pppplVar13[-9] = (long ***)0x0;
          pppplVar13[-10] = (long ***)0x0;
          if (0 < *(int *)((long)pppplVar13 + -0x6c)) {
            lVar17 = 0;
            ppplVar12 = pppplVar13[-6];
            do {
              *(undefined4 *)((long)ppplVar12 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)((long)pppplVar13 + -0x6c));
          }
          pppplVar9 = (long ****)pppplVar13[-5];
          if (pppplVar9 != pppplVar13 + -4 && pppplVar9 != (long ****)0x0) {
            _free(pppplVar9[-1]);
          }
        }
      }
    }
    ppppplVar7 = (long *****)pppplStack_88;
    ppppplStack_98 = *param_1;
    *param_1 = ppppplVar1;
    ppppplVar11 = param_1[2];
    param_1[2] = ppppplStack_80;
    param_1[1] = (long *****)pppplStack_88;
    pppppplVar6 = &ppppplStack_98;
    pppplStack_90 = (long ****)ppppplStack_98;
    pppplStack_88 = (long ****)ppppplStack_98;
    ppppplStack_80 = ppppplVar11;
    FUN_109435568(pppppplVar6);
  }
  param_1[1] = ppppplVar7;
  return pppppplVar6;
}



/* Entry: 109435498; end: 109435567;  */

long FUN_109435498(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x88) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) && (*(long *)(param_1 + 0x88) != 0)) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x88) + 8);
      if ((plVar5 == (long *)0x0) &&
         ((plVar5 = *(long **)(param_1 + 0x80), *(long **)(param_1 + 0x80) == (long *)0x0 &&
          (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar5 = plRam000000011382bb80;
      }
      (**(code **)(*plVar5 + 0x30))();
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x54));
  }
  lVar6 = *(long *)(param_1 + 0x98);
  if (lVar6 != param_1 + 0xa0 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  return param_1;
}



/* Entry: 109435568; end: 109435673;  */

long * FUN_109435568(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar3) {
    param_1[2] = lVar9 + -0xc0;
    if (*(long *)(lVar9 + -0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar9 + -0x38) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x38) != 0)) {
        plVar6 = *(long **)(*(long *)(lVar9 + -0x38) + 8);
        if ((plVar6 == (long *)0x0) &&
           ((plVar6 = *(long **)(lVar9 + -0x40), *(long **)(lVar9 + -0x40) == (long *)0x0 &&
            (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar6 = plRam000000011382bb80;
        }
        (**(code **)(*plVar6 + 0x30))();
      }
    }
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x58) = 0;
    *(undefined8 *)(lVar9 + -0x60) = 0;
    *(undefined8 *)(lVar9 + -0x48) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    if (0 < *(int *)(lVar9 + -0x6c)) {
      lVar7 = 0;
      lVar8 = *(long *)(lVar9 + -0x30);
      do {
        *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + -0x6c));
    }
    lVar7 = *(long *)(lVar9 + -0x28);
    if (lVar7 != lVar9 + -0x20 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
    lVar9 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 109435674; end: 109435687;  */

long * FUN_109435674(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar14 = plVar6[1] - *plVar6;
  uVar11 = (lVar14 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar11 < 0x13b13b13b13b13c) {
    lVar10 = plVar6[2] - *plVar6 >> 4;
    uVar13 = lVar10 * -0x6276276276276276;
    if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
      uVar13 = uVar11;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar10 * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x13b13b13b13b13b;
    }
    plStack_48 = plVar6;
    if (uVar13 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = plVar6;
      FUN_109428814(plVar6,uVar13,0);
    }
    puVar2 = (undefined1 *)((long)plVar7 + lVar14);
    plStack_50 = plVar7 + uVar13 * 0x1a;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 8) = 0;
    lVar14 = *param_2;
    *(long *)(puVar2 + 0x18) = param_2[1];
    *(long *)(puVar2 + 0x10) = lVar14;
    lVar14 = param_2[2];
    *(long *)(puVar2 + 0x28) = param_2[3];
    *(long *)(puVar2 + 0x20) = lVar14;
    lVar10 = param_2[5];
    lVar14 = param_2[4];
    lVar15 = param_2[6];
    lVar17 = param_2[9];
    lVar16 = param_2[8];
    *(long *)(puVar2 + 0x48) = param_2[7];
    *(long *)(puVar2 + 0x40) = lVar15;
    *(long *)(puVar2 + 0x58) = lVar17;
    *(long *)(puVar2 + 0x50) = lVar16;
    *(long *)(puVar2 + 0x38) = lVar10;
    *(long *)(puVar2 + 0x30) = lVar14;
    lVar14 = param_2[10];
    lVar15 = param_2[0xd];
    lVar10 = param_2[0xc];
    *(long *)(puVar2 + 0x68) = param_2[0xb];
    *(long *)(puVar2 + 0x60) = lVar14;
    *(long *)(puVar2 + 0x78) = lVar15;
    *(long *)(puVar2 + 0x70) = lVar10;
    lVar14 = param_2[0xe];
    *(long *)(puVar2 + 0x88) = param_2[0xf];
    *(long *)(puVar2 + 0x80) = lVar14;
    lVar14 = param_2[0x11];
    lVar10 = param_2[0x10];
    *(long *)(puVar2 + 0x98) = param_2[0x11];
    *(long *)(puVar2 + 0x90) = lVar10;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined1 **)(puVar2 + 0xa0) = puVar2 + 0x68;
    *(undefined1 **)(puVar2 + 0xa8) = puVar2 + 0xb0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    if (lVar14 != 0) {
      piVar1 = (int *)(lVar14 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_68 = plVar7;
    plStack_60 = (long *)puVar2;
    plStack_58 = (long *)puVar2;
    if (*(int *)((long)param_2 + 0x54) < 3) {
      puVar9 = (undefined8 *)param_2[0x13];
      puVar12 = *(undefined8 **)(puVar2 + 0xa8);
      *puVar12 = *puVar9;
      puVar12[1] = puVar9[1];
    }
    else {
      *(undefined4 *)(puVar2 + 100) = 0;
      FUN_109a844cc(puVar2 + 0x60,*(undefined4 *)((long)param_2 + 0x54),0,0,0);
      if (0 < *(int *)(puVar2 + 100)) {
        lVar14 = 0;
        lVar10 = param_2[0x12];
        lVar16 = param_2[0x13];
        lVar15 = *(long *)(puVar2 + 0xa0);
        lVar17 = *(long *)(puVar2 + 0xa8);
        do {
          *(undefined4 *)(lVar15 + lVar14 * 4) = *(undefined4 *)(lVar10 + lVar14 * 4);
          *(undefined8 *)(lVar17 + lVar14 * 8) = *(undefined8 *)(lVar16 + lVar14 * 8);
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(puVar2 + 100));
      }
    }
    *(undefined8 *)(puVar2 + 0xc0) = 0xbff0000000000000;
    plStack_58 = (long *)((long)plStack_58 + 0xd0);
    puVar2 = (undefined1 *)((long)plStack_60 + (*plVar6 - plVar6[1]));
    FUN_10942cdf0(plVar6,*plVar6,plVar6[1],puVar2);
    plVar7 = plStack_58;
    plStack_68 = (long *)*plVar6;
    *plVar6 = (long)puVar2;
    lVar14 = plVar6[2];
    plVar6[2] = (long)plStack_50;
    plVar6[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar14;
    FUN_10942d114(&plStack_68);
    return plVar7;
  }
  FUN_109428800();
  FUN_10942d114(&plStack_68);
  __Unwind_Resume();
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  lVar14 = *param_2;
  lVar10 = param_2[1];
  lVar15 = lVar10 - lVar14;
  if (lVar15 != 0) {
    uVar11 = (lVar15 >> 6) * -0x5555555555555555;
    if (0x155555555555555 < uVar11) {
      FUN_109428144();
      goto LAB_1094359c8;
    }
    plVar7 = plVar6;
    FUN_109428158(plVar6,uVar11,0);
    *plVar6 = (long)plVar7;
    plVar6[1] = (long)plVar7;
    plVar6[2] = (long)plVar7 + lVar15;
    plVar8 = plVar6;
    FUN_109427ec8(plVar6,lVar14,lVar10,plVar7);
    plVar6[1] = (long)plVar8;
  }
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  param_4 = param_4 - param_3;
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_109435674();
LAB_1094359c8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1094359cc);
      (*pcVar5)();
    }
    lVar14 = param_4;
    __Znwm();
    plVar6[3] = lVar14;
    plVar6[4] = lVar14;
    plVar6[5] = lVar14 + param_4;
    _memcpy();
    plVar6[4] = lVar14 + param_4;
  }
  return plVar6;
}


