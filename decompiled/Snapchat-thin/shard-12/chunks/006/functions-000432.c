/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109457fd4; end: 109458097;  */

void FUN_109457fd4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  uVar8 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  uVar8 = param_2[6];
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar8 = param_2[8];
  *(undefined8 *)(param_1 + 0x58) = param_2[9];
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 10);
  puVar3 = (undefined8 *)param_2[0xb];
  lVar1 = param_2[0xc];
  if (*(long *)(param_1 + 0x70) != lVar1) {
    FUN_10942c088(param_1 + 0x68,lVar1,1);
    lVar1 = *(long *)(param_1 + 0x70);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  uVar4 = lVar1 - (lVar1 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar1) {
    lVar5 = 0;
    puVar6 = puVar2;
    puVar7 = puVar3;
    do {
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      lVar5 = lVar5 + 2;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar5 < (long)uVar4);
  }
  lVar5 = lVar1 % 2;
  if (lVar5 != 0 && lVar5 < 0 == SBORROW8(lVar1,uVar4)) {
    puVar2 = puVar2 + (lVar1 / 2) * 2;
    puVar3 = puVar3 + (lVar1 / 2) * 2;
    do {
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109458098; end: 1094586bb;  */

undefined8 * FUN_109458098(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  double *pdVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *unaff_x19;
  undefined *unaff_x21;
  undefined *puVar14;
  ulong unaff_x22;
  double *unaff_x23;
  long unaff_x24;
  double *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar15;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar19;
  ulong unaff_d11;
  double dStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  undefined8 uStack_510;
  int iStack_508;
  undefined4 uStack_504;
  double dStack_500;
  undefined8 uStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  undefined4 uStack_4e0;
  int iStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  undefined4 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  double dStack_480;
  double dStack_478;
  undefined4 uStack_470;
  int iStack_46c;
  undefined1 auStack_468 [8];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_438;
  undefined1 *puStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  double dStack_3e0;
  undefined8 uStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  undefined4 uStack_3c0;
  int iStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  long lStack_388;
  undefined4 *puStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_350;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  double *pdStack_308;
  long lStack_300;
  double *pdStack_2f8;
  ulong uStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined4 *puStack_298;
  undefined4 *puStack_290;
  undefined1 *puStack_288;
  double *pdStack_280;
  undefined8 *puStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  undefined8 uStack_250;
  uint uStack_248;
  undefined4 uStack_244;
  double dStack_240;
  undefined8 uStack_238;
  double dStack_230;
  double dStack_228;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  double dStack_1c0;
  double dStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
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
  undefined4 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  ppuVar11 = &PTR_PTR_1132d94b8;
  if ((undefined **)param_3[3] != (undefined **)0x0) {
    ppuVar11 = (undefined **)param_3[3];
  }
  puVar6 = param_2;
  pdStack_280 = param_3;
  if (0 < *(int *)(ppuVar11 + 4)) {
    unaff_x24 = 0;
    unaff_x26 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    puStack_288 = auStack_1a8;
    unaff_x28 = &uStack_160;
    unaff_x23 = &dStack_270;
    puStack_298 = &uStack_218;
    unaff_d9 = 0x2000000001;
    puStack_278 = auStack_1d0;
    unaff_x25 = &dStack_150;
    unaff_d10 = 0x3ff0000000000000;
    puStack_290 = &uStack_f8;
    auVar18 = NEON_fmov(0x3fe0000000000000,8);
    auVar17 = NEON_fmov(0xbfe0000000000000,8);
    dStack_2b8 = auVar17._8_8_;
    dStack_2c0 = auVar17._0_8_;
    dStack_2a8 = auVar18._8_8_;
    dStack_2b0 = auVar18._0_8_;
    unaff_x27 = 0x42ff0000;
    do {
      puVar13 = ppuVar11[3];
      ppuVar11 = ppuVar11 + 3;
      if (((ulong)puVar13 & 1) != 0) {
        ppuVar11 = (undefined **)(puVar13 + unaff_x24 * 8 + 7);
      }
      unaff_x21 = *ppuVar11;
      uStack_1b0 = 0x42ff0000;
      unaff_x26[1] = 0;
      *unaff_x26 = 0;
      unaff_x26[3] = 0;
      unaff_x26[2] = 0;
      unaff_x26[5] = 0;
      unaff_x26[4] = 0;
      *(undefined8 *)((long)unaff_x26 + 0x34) = 0;
      *(undefined8 *)((long)unaff_x26 + 0x2c) = 0;
      puStack_170 = puStack_288;
      uStack_160 = 0;
      uStack_158 = 0;
      dStack_150 = 6.79038653113828e-313;
      puStack_168 = unaff_x28;
      FUN_109a83fd0(&uStack_1b0,2,&dStack_150,0);
      dStack_1c0 = (double)(float)*(undefined8 *)(unaff_x21 + 0x30);
      dStack_1b8 = (double)(float)((ulong)*(undefined8 *)(unaff_x21 + 0x30) >> 0x20);
      uVar2 = *(uint *)(unaff_x21 + 0x3c);
      unaff_x22 = (ulong)uVar2;
      fVar19 = *(float *)(unaff_x21 + 0x38);
      unaff_d11 = (ulong)(uint)fVar19;
      puVar13 = unaff_x21;
      FUN_109407fc8(unaff_x21,&uStack_1b0,0);
      if ((int)puVar13 == 0) {
        dStack_268 = dStack_1b8;
        dStack_270 = dStack_1c0;
        uStack_250 = 0;
        uStack_220 = 0x42ff0000;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_1f4 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        puStack_1e0 = puStack_298;
        puStack_1d8 = puStack_278;
        *puStack_278 = 0;
        puStack_278[1] = 0;
        uStack_248 = uVar2;
        dStack_240 = (double)fVar19;
        uStack_238 = param_1;
        dStack_230 = (double)_pow();
        dStack_228 = 1.0 / dStack_230;
        dStack_260 = (dStack_270 + dStack_2b0) * dStack_230 + dStack_2c0;
        dStack_258 = (dStack_268 + dStack_2a8) * dStack_230 + dStack_2b8;
        uStack_a0 = *(undefined8 *)(unaff_x21 + 0x28);
        dStack_148 = dStack_1b8;
        dStack_150 = dStack_1c0;
        uStack_128 = CONCAT44(uStack_244,uStack_248);
        uStack_130 = uStack_250;
        uStack_118 = uStack_238;
        dStack_120 = dStack_240;
        uStack_100 = 0x42ff0000;
        uStack_f4 = 0;
        uStack_f0 = 0;
        iStack_fc = 0;
        uStack_f8 = 0;
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
        puStack_c0 = puStack_290;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_220 = 0x42ff0000;
        lStack_1e8 = 0;
        uStack_1ec = 0;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uVar5 = param_2[1];
        dStack_140 = dStack_260;
        dStack_138 = dStack_258;
        dStack_110 = dStack_230;
        dStack_108 = dStack_228;
        if (uVar5 < (ulong)param_2[2]) {
          param_3 = &dStack_150;
          puStack_b8 = &uStack_b0;
          FUN_109460068();
          puVar6 = (undefined8 *)(uVar5 + 0xc0);
        }
        else {
          param_3 = &dStack_150;
          puVar6 = param_2;
          puStack_b8 = &uStack_b0;
          FUN_10945fdec();
        }
        param_2[1] = puVar6;
        if (lStack_c8 != 0) {
          piVar1 = (int *)(lStack_c8 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_100;
            func_0x000109a848d4();
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
        if (0 < iStack_fc) {
          lVar10 = 0;
          do {
            puStack_c0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_fc);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_b8[-1];
          _free();
        }
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_220;
            func_0x000109a848d4();
          }
        }
        if (0 < iStack_21c) {
          lVar10 = 0;
          do {
            puStack_1e0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_21c);
        }
      }
      else {
        FUN_109460a1c(0,&dStack_270,&dStack_1c0,unaff_x22,&uStack_1b0);
        uStack_a0 = *(undefined8 *)(unaff_x21 + 0x28);
        uStack_128 = CONCAT44(uStack_244,uStack_248);
        dStack_138 = dStack_258;
        dStack_140 = dStack_260;
        uStack_130 = uStack_250;
        uStack_118 = uStack_238;
        dStack_120 = dStack_240;
        dStack_108 = dStack_228;
        dStack_110 = dStack_230;
        dStack_148 = dStack_268;
        dStack_150 = dStack_270;
        uStack_f8 = uStack_218;
        uStack_f4 = uStack_214;
        uStack_100 = uStack_220;
        iStack_fc = iStack_21c;
        uStack_e8 = uStack_208;
        uStack_e4 = uStack_204;
        uStack_f0 = uStack_210;
        uStack_ec = uStack_20c;
        uStack_d8 = uStack_1f8;
        uStack_d4 = uStack_1f4;
        uStack_e0 = uStack_200;
        uStack_dc = uStack_1fc;
        lStack_c8 = lStack_1e8;
        uStack_d0 = uStack_1f0;
        uStack_cc = uStack_1ec;
        puStack_c0 = puStack_290;
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (iStack_21c < 3) {
          uStack_b0 = *puStack_1d8;
          uStack_a8 = puStack_1d8[1];
          puStack_b8 = &uStack_b0;
        }
        else {
          puStack_b8 = puStack_1d8;
          puStack_c0 = puStack_1e0;
          puStack_1e0 = puStack_298;
          puStack_1d8 = puStack_278;
        }
        uStack_220 = 0x42ff0000;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_1f4 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uVar5 = param_2[1];
        if (uVar5 < (ulong)param_2[2]) {
          param_3 = &dStack_150;
          FUN_109460068();
          puVar6 = (undefined8 *)(uVar5 + 0xc0);
        }
        else {
          param_3 = &dStack_150;
          puVar6 = param_2;
          FUN_10945fdec();
        }
        param_2[1] = puVar6;
        if (lStack_c8 != 0) {
          piVar1 = (int *)(lStack_c8 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_100;
            func_0x000109a848d4();
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
        if (0 < iStack_fc) {
          lVar10 = 0;
          do {
            puStack_c0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_fc);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_b8[-1];
          _free();
        }
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_220;
            func_0x000109a848d4();
          }
        }
        if (0 < iStack_21c) {
          lVar10 = 0;
          do {
            puStack_1e0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_21c);
        }
      }
      lStack_1e8 = 0;
      uStack_1f4 = 0;
      uStack_1f8 = 0;
      uStack_1fc = 0;
      uStack_200 = 0;
      uStack_204 = 0;
      uStack_208 = 0;
      uStack_20c = 0;
      uStack_210 = 0;
      if (puStack_1d8 != puStack_278 && puStack_1d8 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puStack_1d8[-1];
        _free();
      }
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          puVar6 = (undefined8 *)&uStack_1b0;
          func_0x000109a848d4();
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      if (0 < iStack_1ac) {
        lVar10 = 0;
        do {
          *(undefined4 *)(puStack_170 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_1ac);
      }
      if (puStack_168 != unaff_x28 && puStack_168 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puStack_168[-1];
        _free();
      }
      unaff_x24 = unaff_x24 + 1;
      ppuVar11 = &PTR_PTR_1132d94b8;
      if ((undefined **)pdStack_280[3] != (undefined **)0x0) {
        ppuVar11 = (undefined **)pdStack_280[3];
      }
      unaff_x19 = param_2;
      unaff_d8 = param_1;
    } while (unaff_x24 < *(int *)(ppuVar11 + 4));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_1b0);
      FUN_10945fb40(unaff_x19);
    }
    puVar7 = puVar6;
    uVar16 = __Unwind_Resume();
    uStack_340 = unaff_d11;
    uStack_338 = unaff_d10;
    uStack_330 = unaff_d9;
    uStack_328 = unaff_d8;
    puStack_320 = unaff_x28;
    uStack_318 = unaff_x27;
    puStack_310 = unaff_x26;
    pdStack_308 = unaff_x25;
    lStack_300 = unaff_x24;
    pdStack_2f8 = unaff_x23;
    uStack_2f0 = unaff_x22;
    puStack_2e8 = unaff_x21;
    puStack_2e0 = puVar6;
    puStack_2d8 = unaff_x19;
    puStack_2d0 = &stack0xfffffffffffffff0;
    pcStack_2c8 = FUN_1094586bc;
    lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    ppuVar11 = &PTR_PTR_1132d94b8;
    if ((undefined **)param_3[3] != (undefined **)0x0) {
      ppuVar11 = (undefined **)param_3[3];
    }
    puVar6 = puVar7;
    pdVar9 = param_3;
    if (0 < *(int *)(ppuVar11 + 4)) {
      lVar10 = 0;
      puVar15 = (undefined8 *)((ulong)&uStack_470 | 4);
      auVar18 = NEON_fmov(0x3fe0000000000000,8);
      auVar17 = NEON_fmov(0xbfe0000000000000,8);
      do {
        puVar13 = ppuVar11[3];
        ppuVar11 = ppuVar11 + 3;
        if (((ulong)puVar13 & 1) != 0) {
          ppuVar11 = (undefined **)(puVar13 + lVar10 * 8 + 7);
        }
        puVar14 = *ppuVar11;
        uStack_470 = 0x42ff0000;
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        uStack_420 = 0;
        uStack_418 = 0;
        dStack_410 = 6.79038653113828e-313;
        puStack_430 = auStack_468;
        puStack_428 = &uStack_420;
        FUN_109a83fd0(&uStack_470,2,&dStack_410,0);
        dStack_480 = (double)(float)*(undefined8 *)(puVar14 + 0x30);
        dStack_478 = (double)(float)((ulong)*(undefined8 *)(puVar14 + 0x30) >> 0x20);
        iVar8 = *(int *)(puVar14 + 0x3c);
        fVar19 = *(float *)(puVar14 + 0x38);
        puVar13 = puVar14;
        FUN_109407fc8(puVar14,&uStack_470,0);
        if ((int)puVar13 == 0) {
          dStack_528 = dStack_478;
          dStack_530 = dStack_480;
          uStack_510 = 0;
          uStack_4e0 = 0x42ff0000;
          uStack_4d4 = 0;
          uStack_4d0 = 0;
          iStack_4dc = 0;
          uStack_4d8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uStack_4b4 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          lStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_4ac = 0;
          uStack_490 = 0;
          uStack_488 = 0;
          iStack_508 = iVar8;
          dStack_500 = (double)fVar19;
          uStack_4f8 = uVar16;
          puStack_4a0 = &uStack_4d8;
          puStack_498 = &uStack_490;
          dStack_4f0 = (double)_pow(uVar16,(double)iVar8);
          dStack_4e8 = 1.0 / dStack_4f0;
          dStack_520 = (dStack_530 + auVar18._0_8_) * dStack_4f0 + auVar17._0_8_;
          dStack_518 = (dStack_528 + auVar18._8_8_) * dStack_4f0 + auVar17._8_8_;
          dStack_408 = dStack_478;
          dStack_410 = dStack_480;
          dStack_3f8 = dStack_518;
          dStack_400 = dStack_520;
          uStack_3e8 = CONCAT44(uStack_504,iStack_508);
          uStack_3f0 = uStack_510;
          uStack_3d8 = uStack_4f8;
          dStack_3e0 = dStack_500;
          dStack_3c8 = dStack_4e8;
          dStack_3d0 = dStack_4f0;
          uStack_3c0 = 0x42ff0000;
          uStack_3b4 = 0;
          uStack_3b0 = 0;
          iStack_3bc = 0;
          uStack_3b8 = 0;
          uStack_3a4 = 0;
          uStack_3a0 = 0;
          uStack_3ac = 0;
          uStack_3a8 = 0;
          uStack_394 = 0;
          uStack_39c = 0;
          uStack_398 = 0;
          lStack_388 = 0;
          uStack_390 = 0;
          uStack_38c = 0;
          puStack_380 = &uStack_3b8;
          puStack_378 = &uStack_370;
          uStack_370 = 0;
          uStack_368 = 0;
          uStack_4e0 = 0x42ff0000;
          lStack_4a8 = 0;
          uStack_4ac = 0;
          uStack_4b4 = 0;
          uStack_4b0 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uStack_4d4 = 0;
          uStack_4d0 = 0;
          iStack_4dc = 0;
          uStack_4d8 = 0;
          uStack_360 = *(undefined8 *)(puVar14 + 0x28);
          uVar5 = puVar7[1];
          if (uVar5 < (ulong)puVar7[2]) {
            pdVar9 = &dStack_410;
            FUN_109460068();
            puVar6 = (undefined8 *)(uVar5 + 0xc0);
          }
          else {
            pdVar9 = &dStack_410;
            puVar6 = puVar7;
            FUN_10945fdec();
          }
          puVar7[1] = puVar6;
          if (lStack_388 != 0) {
            piVar1 = (int *)(lStack_388 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              puVar6 = (undefined8 *)&uStack_3c0;
              func_0x000109a848d4();
            }
          }
          lStack_388 = 0;
          uStack_3a8 = 0;
          uStack_3a4 = 0;
          uStack_3b0 = 0;
          uStack_3ac = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          if (0 < iStack_3bc) {
            lVar12 = 0;
            do {
              puStack_380[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_3bc);
          }
          if (puStack_378 != &uStack_370 && puStack_378 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)puStack_378[-1];
            _free();
          }
          if (lStack_4a8 != 0) {
            piVar1 = (int *)(lStack_4a8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              puVar6 = (undefined8 *)&uStack_4e0;
              func_0x000109a848d4();
            }
          }
          if (0 < iStack_4dc) {
            lVar12 = 0;
            do {
              puStack_4a0[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_4dc);
          }
        }
        else {
          FUN_109460a1c(0,(double)fVar19,uVar16,&dStack_530,&dStack_480,iVar8,&uStack_470);
          dStack_3f8 = dStack_518;
          dStack_400 = dStack_520;
          uStack_3e8 = CONCAT44(uStack_504,iStack_508);
          uStack_3f0 = uStack_510;
          uStack_3d8 = uStack_4f8;
          dStack_3e0 = dStack_500;
          dStack_3c8 = dStack_4e8;
          dStack_3d0 = dStack_4f0;
          dStack_408 = dStack_528;
          dStack_410 = dStack_530;
          uStack_3b8 = uStack_4d8;
          uStack_3b4 = uStack_4d4;
          uStack_3c0 = uStack_4e0;
          iStack_3bc = iStack_4dc;
          uStack_3a8 = uStack_4c8;
          uStack_3a4 = uStack_4c4;
          uStack_3b0 = uStack_4d0;
          uStack_3ac = uStack_4cc;
          uStack_398 = uStack_4b8;
          uStack_394 = uStack_4b4;
          uStack_3a0 = uStack_4c0;
          uStack_39c = uStack_4bc;
          lStack_388 = lStack_4a8;
          uStack_390 = uStack_4b0;
          uStack_38c = uStack_4ac;
          puStack_380 = &uStack_3b8;
          puStack_378 = &uStack_370;
          uStack_370 = 0;
          uStack_368 = 0;
          if (iStack_4dc < 3) {
            uStack_370 = *puStack_498;
            uStack_368 = puStack_498[1];
          }
          else {
            puStack_378 = puStack_498;
            puStack_380 = puStack_4a0;
            puStack_498 = &uStack_490;
            puStack_4a0 = &uStack_4d8;
          }
          uStack_4e0 = 0x42ff0000;
          uStack_4d4 = 0;
          uStack_4d0 = 0;
          iStack_4dc = 0;
          uStack_4d8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uStack_4b4 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          lStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_4ac = 0;
          uStack_360 = *(undefined8 *)(puVar14 + 0x28);
          uVar5 = puVar7[1];
          if (uVar5 < (ulong)puVar7[2]) {
            pdVar9 = &dStack_410;
            FUN_109460068();
            puVar6 = (undefined8 *)(uVar5 + 0xc0);
          }
          else {
            pdVar9 = &dStack_410;
            puVar6 = puVar7;
            FUN_10945fdec();
          }
          puVar7[1] = puVar6;
          if (lStack_388 != 0) {
            piVar1 = (int *)(lStack_388 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              puVar6 = (undefined8 *)&uStack_3c0;
              func_0x000109a848d4();
            }
          }
          lStack_388 = 0;
          uStack_3a8 = 0;
          uStack_3a4 = 0;
          uStack_3b0 = 0;
          uStack_3ac = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          if (0 < iStack_3bc) {
            lVar12 = 0;
            do {
              puStack_380[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_3bc);
          }
          if (puStack_378 != &uStack_370 && puStack_378 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)puStack_378[-1];
            _free();
          }
          if (lStack_4a8 != 0) {
            piVar1 = (int *)(lStack_4a8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              puVar6 = (undefined8 *)&uStack_4e0;
              func_0x000109a848d4();
            }
          }
          if (0 < iStack_4dc) {
            lVar12 = 0;
            do {
              puStack_4a0[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_4dc);
          }
        }
        lStack_4a8 = 0;
        uStack_4b4 = 0;
        uStack_4b8 = 0;
        uStack_4bc = 0;
        uStack_4c0 = 0;
        uStack_4c4 = 0;
        uStack_4c8 = 0;
        uStack_4cc = 0;
        uStack_4d0 = 0;
        if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_498[-1];
          _free();
        }
        if (lStack_438 != 0) {
          piVar1 = (int *)(lStack_438 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_470;
            func_0x000109a848d4();
          }
        }
        lStack_438 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        if (0 < iStack_46c) {
          lVar12 = 0;
          do {
            *(undefined4 *)(puStack_430 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_46c);
        }
        if (puStack_428 != &uStack_420 && puStack_428 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_428[-1];
          _free();
        }
        lVar10 = lVar10 + 1;
        ppuVar11 = &PTR_PTR_1132d94b8;
        if ((undefined **)param_3[3] != (undefined **)0x0) {
          ppuVar11 = (undefined **)param_3[3];
        }
        unaff_x19 = puVar7;
      } while (lVar10 < *(int *)(ppuVar11 + 4));
    }
    iVar8 = (int)pdVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) {
      return puVar6;
    }
    ___stack_chk_fail();
    if (iVar8 != 0) {
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_470);
      FUN_10945fb40(unaff_x19);
    }
    __Unwind_Resume();
    if (*(char *)(puVar6 + 0x50) == '\x01') {
      FUN_109454ebc(puVar6 + 0x4e);
    }
    if (puVar6[0x41] != 0) {
      puVar6[0x42] = puVar6[0x41];
      __ZdlPv();
    }
    if (puVar6[0x3e] != 0) {
      puVar6[0x3f] = puVar6[0x3e];
      __ZdlPv();
    }
    if (puVar6[0x3b] != 0) {
      puVar6[0x3c] = puVar6[0x3b];
      __ZdlPv();
    }
    func_0x000109454f14(puVar6 + 0x22);
    _free(puVar6[0xd]);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 1094586bc; end: 109458cdf;  */

undefined8 * FUN_1094586bc(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  double *pdVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *unaff_x19;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  double dStack_240;
  undefined8 uStack_238;
  double dStack_230;
  double dStack_228;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
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
  undefined4 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  ppuVar9 = &PTR_PTR_1132d94b8;
  if ((undefined **)param_3[3] != (undefined **)0x0) {
    ppuVar9 = (undefined **)param_3[3];
  }
  puVar6 = param_2;
  pdVar8 = param_3;
  if (0 < *(int *)(ppuVar9 + 4)) {
    lVar13 = 0;
    puVar14 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    auVar16 = NEON_fmov(0x3fe0000000000000,8);
    auVar15 = NEON_fmov(0xbfe0000000000000,8);
    do {
      puVar11 = ppuVar9[3];
      ppuVar9 = ppuVar9 + 3;
      if (((ulong)puVar11 & 1) != 0) {
        ppuVar9 = (undefined **)(puVar11 + lVar13 * 8 + 7);
      }
      puVar12 = *ppuVar9;
      uStack_1b0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      dStack_150 = 6.79038653113828e-313;
      puStack_170 = auStack_1a8;
      puStack_168 = &uStack_160;
      FUN_109a83fd0(&uStack_1b0,2,&dStack_150,0);
      dStack_1c0 = (double)(float)*(undefined8 *)(puVar12 + 0x30);
      dStack_1b8 = (double)(float)((ulong)*(undefined8 *)(puVar12 + 0x30) >> 0x20);
      uVar2 = *(undefined4 *)(puVar12 + 0x3c);
      fVar17 = *(float *)(puVar12 + 0x38);
      puVar11 = puVar12;
      FUN_109407fc8(puVar12,&uStack_1b0,0);
      if ((int)puVar11 == 0) {
        dStack_268 = dStack_1b8;
        dStack_270 = dStack_1c0;
        uStack_250 = 0;
        uStack_220 = 0x42ff0000;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_1f4 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_248 = uVar2;
        dStack_240 = (double)fVar17;
        uStack_238 = param_1;
        puStack_1e0 = &uStack_218;
        puStack_1d8 = &uStack_1d0;
        dStack_230 = (double)_pow();
        dStack_228 = 1.0 / dStack_230;
        dStack_260 = (dStack_270 + auVar16._0_8_) * dStack_230 + auVar15._0_8_;
        dStack_258 = (dStack_268 + auVar16._8_8_) * dStack_230 + auVar15._8_8_;
        uStack_a0 = *(undefined8 *)(puVar12 + 0x28);
        dStack_148 = dStack_1b8;
        dStack_150 = dStack_1c0;
        uStack_128 = CONCAT44(uStack_244,uStack_248);
        uStack_130 = uStack_250;
        uStack_118 = uStack_238;
        dStack_120 = dStack_240;
        uStack_100 = 0x42ff0000;
        uStack_f4 = 0;
        uStack_f0 = 0;
        iStack_fc = 0;
        uStack_f8 = 0;
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
        uStack_220 = 0x42ff0000;
        lStack_1e8 = 0;
        uStack_1ec = 0;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uVar5 = param_2[1];
        dStack_140 = dStack_260;
        dStack_138 = dStack_258;
        dStack_110 = dStack_230;
        dStack_108 = dStack_228;
        if (uVar5 < (ulong)param_2[2]) {
          pdVar8 = &dStack_150;
          puStack_c0 = &uStack_f8;
          puStack_b8 = &uStack_b0;
          FUN_109460068();
          puVar6 = (undefined8 *)(uVar5 + 0xc0);
        }
        else {
          pdVar8 = &dStack_150;
          puVar6 = param_2;
          puStack_c0 = &uStack_f8;
          puStack_b8 = &uStack_b0;
          FUN_10945fdec();
        }
        param_2[1] = puVar6;
        if (lStack_c8 != 0) {
          piVar1 = (int *)(lStack_c8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_100;
            func_0x000109a848d4();
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
        if (0 < iStack_fc) {
          lVar10 = 0;
          do {
            puStack_c0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_fc);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_b8[-1];
          _free();
        }
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_220;
            func_0x000109a848d4();
          }
        }
        if (0 < iStack_21c) {
          lVar10 = 0;
          do {
            puStack_1e0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_21c);
        }
      }
      else {
        FUN_109460a1c(0,&dStack_270,&dStack_1c0,uVar2,&uStack_1b0);
        uStack_a0 = *(undefined8 *)(puVar12 + 0x28);
        uStack_128 = CONCAT44(uStack_244,uStack_248);
        dStack_138 = dStack_258;
        dStack_140 = dStack_260;
        uStack_130 = uStack_250;
        uStack_118 = uStack_238;
        dStack_120 = dStack_240;
        dStack_108 = dStack_228;
        dStack_110 = dStack_230;
        dStack_148 = dStack_268;
        dStack_150 = dStack_270;
        uStack_f8 = uStack_218;
        uStack_f4 = uStack_214;
        uStack_100 = uStack_220;
        iStack_fc = iStack_21c;
        uStack_e8 = uStack_208;
        uStack_e4 = uStack_204;
        uStack_f0 = uStack_210;
        uStack_ec = uStack_20c;
        uStack_d8 = uStack_1f8;
        uStack_d4 = uStack_1f4;
        uStack_e0 = uStack_200;
        uStack_dc = uStack_1fc;
        lStack_c8 = lStack_1e8;
        uStack_d0 = uStack_1f0;
        uStack_cc = uStack_1ec;
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (iStack_21c < 3) {
          uStack_b0 = *puStack_1d8;
          uStack_a8 = puStack_1d8[1];
          puStack_c0 = &uStack_f8;
          puStack_b8 = &uStack_b0;
        }
        else {
          puStack_b8 = puStack_1d8;
          puStack_c0 = puStack_1e0;
          puStack_1e0 = &uStack_218;
          puStack_1d8 = &uStack_1d0;
        }
        uStack_220 = 0x42ff0000;
        uStack_214 = 0;
        uStack_210 = 0;
        iStack_21c = 0;
        uStack_218 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_1f4 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uVar5 = param_2[1];
        if (uVar5 < (ulong)param_2[2]) {
          pdVar8 = &dStack_150;
          FUN_109460068();
          puVar6 = (undefined8 *)(uVar5 + 0xc0);
        }
        else {
          pdVar8 = &dStack_150;
          puVar6 = param_2;
          FUN_10945fdec();
        }
        param_2[1] = puVar6;
        if (lStack_c8 != 0) {
          piVar1 = (int *)(lStack_c8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_100;
            func_0x000109a848d4();
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
        if (0 < iStack_fc) {
          lVar10 = 0;
          do {
            puStack_c0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_fc);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_b8[-1];
          _free();
        }
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            puVar6 = (undefined8 *)&uStack_220;
            func_0x000109a848d4();
          }
        }
        if (0 < iStack_21c) {
          lVar10 = 0;
          do {
            puStack_1e0[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_21c);
        }
      }
      lStack_1e8 = 0;
      uStack_1f4 = 0;
      uStack_1f8 = 0;
      uStack_1fc = 0;
      uStack_200 = 0;
      uStack_204 = 0;
      uStack_208 = 0;
      uStack_20c = 0;
      uStack_210 = 0;
      if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puStack_1d8[-1];
        _free();
      }
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          puVar6 = (undefined8 *)&uStack_1b0;
          func_0x000109a848d4();
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      if (0 < iStack_1ac) {
        lVar10 = 0;
        do {
          *(undefined4 *)(puStack_170 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_1ac);
      }
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puStack_168[-1];
        _free();
      }
      lVar13 = lVar13 + 1;
      ppuVar9 = &PTR_PTR_1132d94b8;
      if ((undefined **)param_3[3] != (undefined **)0x0) {
        ppuVar9 = (undefined **)param_3[3];
      }
      unaff_x19 = param_2;
    } while (lVar13 < *(int *)(ppuVar9 + 4));
  }
  iVar7 = (int)pdVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_1b0);
    FUN_10945fb40(unaff_x19);
  }
  __Unwind_Resume();
  if (*(char *)(puVar6 + 0x50) == '\x01') {
    FUN_109454ebc(puVar6 + 0x4e);
  }
  if (puVar6[0x41] != 0) {
    puVar6[0x42] = puVar6[0x41];
    __ZdlPv();
  }
  if (puVar6[0x3e] != 0) {
    puVar6[0x3f] = puVar6[0x3e];
    __ZdlPv();
  }
  if (puVar6[0x3b] != 0) {
    puVar6[0x3c] = puVar6[0x3b];
    __ZdlPv();
  }
  func_0x000109454f14(puVar6 + 0x22);
  _free(puVar6[0xd]);
  return puVar6;
}



/* Entry: 109458ce0; end: 109458d53;  */

long FUN_109458ce0(long param_1)

{
  if (*(char *)(param_1 + 0x280) == '\x01') {
    FUN_109454ebc(param_1 + 0x270);
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
  func_0x000109454f14(param_1 + 0x110);
  _free(*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 109458d54; end: 10945a7d3;  */

void FUN_109458d54(int *param_1,char *param_2,long param_3)

{
  ulong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long *plVar29;
  int iVar30;
  ulong *puVar31;
  char *pcVar32;
  double dVar33;
  ulong *puVar34;
  undefined ***pppuVar35;
  undefined ***unaff_x23;
  char *pcVar36;
  undefined4 *puVar37;
  long *plVar39;
  undefined ***unaff_x25;
  undefined ***pppuVar40;
  ulong uVar41;
  long lVar42;
  undefined *puVar43;
  undefined *puStack_170;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined ***pppuStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  float fStack_a0;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  double dStack_80;
  double dStack_78;
  undefined4 *puVar38;
  
  puVar31 = *(ulong **)(param_1 + 8);
  puVar34 = *(ulong **)(param_1 + 10);
  if ((puVar31 == puVar34) || (*(long *)(param_1 + 2) == *(long *)(param_1 + 4))) {
    FUN_10940ce60(&UNK_10f56dbea);
LAB_10945a624:
    FUN_10940ce60(&UNK_10f56dbd2);
LAB_10945a640:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10945a644);
    (*pcVar10)();
  }
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  puStack_170 = *(undefined **)(param_3 + 0x48);
  if (puStack_170 == (undefined *)0x0) {
    puStack_170 = *(undefined **)(param_3 + 8);
    if (((ulong)puStack_170 & 1) != 0) {
      puStack_170 = *(undefined **)((ulong)puStack_170 & 0xfffffffffffffffe);
    }
    func_0x0001093431a0();
    *(undefined **)(param_3 + 0x48) = puStack_170;
    puVar31 = *(ulong **)(param_1 + 8);
    puVar34 = *(ulong **)(param_1 + 10);
  }
  pppuStack_b8 = (undefined ***)0x0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  fStack_a0 = 1.0;
  if (puVar31 != puVar34) {
    lVar42 = 0;
    unaff_x23 = &ppuStack_100;
    do {
      pppuVar40 = pppuStack_b8;
      uVar41 = *puVar31;
      if ((*(uint *)(uVar41 + 0x50) & 0xfffffffe) == 2) {
        uVar18 = ((ulong)(uint)((int)uVar41 << 3) + 8 ^ uVar41 >> 0x20) * -0x622015f714c7d297;
        uVar18 = (uVar41 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
        pppuVar35 = (undefined ***)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
        if (pppuStack_b8 != (undefined ***)0x0) {
          uVar18 = (long)pppuStack_b8 - 1;
          if (((ulong)pppuStack_b8 & uVar18) == 0) {
            unaff_x25 = (undefined ***)(uVar18 & (ulong)pppuVar35);
          }
          else {
            unaff_x25 = pppuVar35;
            if (pppuStack_b8 <= pppuVar35) {
              uVar26 = 0;
              if (pppuStack_b8 != (undefined ***)0x0) {
                uVar26 = (ulong)pppuVar35 / (ulong)pppuStack_b8;
              }
              unaff_x25 = (undefined ***)((long)pppuVar35 - uVar26 * (long)pppuStack_b8);
            }
          }
          puVar19 = *(undefined8 **)(lStack_c0 + (long)unaff_x25 * 8);
          if (puVar19 != (undefined8 *)0x0) {
            for (plVar39 = (long *)*puVar19; plVar39 != (long *)0x0; plVar39 = (long *)*plVar39) {
              pppuVar20 = (undefined ***)plVar39[1];
              if (pppuVar20 == pppuVar35) {
                if (plVar39[2] == uVar41) goto LAB_109459170;
              }
              else {
                if (((ulong)pppuStack_b8 & uVar18) == 0) {
                  pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar18);
                }
                else if (pppuStack_b8 <= pppuVar20) {
                  uVar26 = 0;
                  if (pppuStack_b8 != (undefined ***)0x0) {
                    uVar26 = (ulong)pppuVar20 / (ulong)pppuStack_b8;
                  }
                  pppuVar20 = (undefined ***)((long)pppuVar20 - uVar26 * (long)pppuStack_b8);
                }
                if (pppuVar20 != unaff_x25) break;
              }
            }
          }
        }
        plVar39 = (long *)0x20;
        __Znwm();
        *plVar39 = 0;
        plVar39[1] = (long)pppuVar35;
        plVar39[2] = uVar41;
        plVar39[3] = 0;
        if ((pppuVar40 == (undefined ***)0x0) ||
           (fStack_a0 * (float)pppuVar40 < (float)(uStack_a8 + 1))) {
          uVar41 = 1;
          if ((undefined ***)0x2 < pppuVar40) {
            uVar41 = (ulong)(((ulong)pppuVar40 & (long)pppuVar40 - 1U) != 0);
          }
          pppuVar20 = (undefined ***)(uVar41 | (long)pppuVar40 << 1);
          pppuVar21 = (undefined ***)(long)((float)(uStack_a8 + 1) / fStack_a0);
          if (pppuVar20 <= pppuVar21) {
            pppuVar20 = pppuVar21;
          }
          pppuVar21 = pppuVar40;
          if ((long)pppuVar20 - 1U == 0) {
            pppuVar20 = (undefined ***)0x2;
          }
          else if (((ulong)pppuVar20 & (long)pppuVar20 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppuVar21 = pppuStack_b8;
          }
          pppuVar40 = pppuVar20;
          if (pppuVar21 < pppuVar20) {
LAB_109458f84:
            if ((ulong)pppuVar40 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10945a640;
            }
            lVar11 = (long)pppuVar40 << 3;
            __Znwm();
            bVar2 = lStack_c0 != 0;
            lStack_c0 = lVar11;
            if (bVar2) {
              __ZdlPv();
            }
            pppuVar20 = (undefined ***)0x0;
            do {
              *(undefined8 *)(lStack_c0 + (long)pppuVar20 * 8) = 0;
              pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
            } while (pppuVar40 != pppuVar20);
            pppuStack_b8 = pppuVar40;
            if (plStack_b0 != (long *)0x0) {
              pppuVar20 = (undefined ***)plStack_b0[1];
              uVar41 = (long)pppuVar40 - 1;
              if (((ulong)pppuVar40 & uVar41) == 0) {
                pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar41);
              }
              else if (pppuVar40 <= pppuVar20) {
                uVar18 = 0;
                if (pppuVar40 != (undefined ***)0x0) {
                  uVar18 = (ulong)pppuVar20 / (ulong)pppuVar40;
                }
                pppuVar20 = (undefined ***)((long)pppuVar20 - uVar18 * (long)pppuVar40);
              }
              *(long ***)(lStack_c0 + (long)pppuVar20 * 8) = &plStack_b0;
              plVar24 = (long *)*plStack_b0;
              plVar29 = plStack_b0;
              while (plVar24 != (long *)0x0) {
                pppuVar21 = (undefined ***)plVar24[1];
                if (((ulong)pppuVar40 & uVar41) == 0) {
                  pppuVar21 = (undefined ***)((ulong)pppuVar21 & uVar41);
                }
                else if (pppuVar40 <= pppuVar21) {
                  uVar18 = 0;
                  if (pppuVar40 != (undefined ***)0x0) {
                    uVar18 = (ulong)pppuVar21 / (ulong)pppuVar40;
                  }
                  pppuVar21 = (undefined ***)((long)pppuVar21 - uVar18 * (long)pppuVar40);
                }
                plVar25 = plVar24;
                if (pppuVar21 != pppuVar20) {
                  if (*(long *)(lStack_c0 + (long)pppuVar21 * 8) == 0) {
                    *(long **)(lStack_c0 + (long)pppuVar21 * 8) = plVar29;
                    pppuVar20 = pppuVar21;
                  }
                  else {
                    *plVar29 = *plVar24;
                    *plVar24 = **(long **)(lStack_c0 + (long)pppuVar21 * 8);
                    **(undefined8 **)(lStack_c0 + (long)pppuVar21 * 8) = plVar24;
                    plVar25 = plVar29;
                  }
                }
                plVar29 = plVar25;
                plVar24 = (long *)*plVar25;
              }
            }
          }
          else {
            pppuVar40 = pppuVar21;
            if (pppuVar20 < pppuVar21) {
              pppuVar40 = (undefined ***)(long)((float)uStack_a8 / fStack_a0);
              if ((pppuVar21 < (undefined ***)0x3) ||
                 (((ulong)pppuVar21 & (long)pppuVar21 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined ***)0x1 < pppuVar40) {
                pppuVar40 = (undefined ***)(1L << (-LZCOUNT((long)pppuVar40 + -1) & 0x3fU));
              }
              lVar11 = lStack_c0;
              if (pppuVar20 <= pppuVar40) {
                pppuVar20 = pppuVar40;
              }
              pppuVar40 = pppuStack_b8;
              if (pppuVar20 < pppuVar21) {
                pppuVar40 = pppuVar20;
                if (pppuVar20 != (undefined ***)0x0) goto LAB_109458f84;
                lStack_c0 = 0;
                if (lVar11 != 0) {
                  __ZdlPv();
                }
                pppuStack_b8 = (undefined ***)0x0;
                pppuVar40 = (undefined ***)0x0;
              }
            }
          }
          if (((ulong)pppuVar40 & (long)pppuVar40 - 1U) == 0) {
            unaff_x25 = (undefined ***)((long)pppuVar40 - 1U & (ulong)pppuVar35);
          }
          else {
            unaff_x25 = pppuVar35;
            if (pppuVar40 <= pppuVar35) {
              uVar41 = 0;
              if (pppuVar40 != (undefined ***)0x0) {
                uVar41 = (ulong)pppuVar35 / (ulong)pppuVar40;
              }
              unaff_x25 = (undefined ***)((long)pppuVar35 - uVar41 * (long)pppuVar40);
            }
          }
        }
        plVar24 = *(long **)(lStack_c0 + (long)unaff_x25 * 8);
        if (plVar24 == (long *)0x0) {
          *plVar39 = (long)plStack_b0;
          *(long ***)(lStack_c0 + (long)unaff_x25 * 8) = &plStack_b0;
          plStack_b0 = plVar39;
          if (*plVar39 != 0) {
            pppuVar35 = *(undefined ****)(*plVar39 + 8);
            if (((ulong)pppuVar40 & (long)pppuVar40 - 1U) == 0) {
              pppuVar35 = (undefined ***)((ulong)pppuVar35 & (long)pppuVar40 - 1U);
            }
            else if (pppuVar40 <= pppuVar35) {
              uVar41 = 0;
              if (pppuVar40 != (undefined ***)0x0) {
                uVar41 = (ulong)pppuVar35 / (ulong)pppuVar40;
              }
              pppuVar35 = (undefined ***)((long)pppuVar35 - uVar41 * (long)pppuVar40);
            }
            plVar24 = (long *)(lStack_c0 + (long)pppuVar35 * 8);
            goto LAB_109459160;
          }
        }
        else {
          *plVar39 = *plVar24;
LAB_109459160:
          *plVar24 = (long)plVar39;
        }
        uStack_a8 = uStack_a8 + 1;
LAB_109459170:
        plVar39[3] = lVar42;
        lVar11 = (long)puStack_170 + 0x10;
        func_0x000107c303b0(lVar11,0x109343154);
        *(long *)(lVar11 + 0x28) = (long)*(int *)(*puVar31 + 0x38);
        uVar41 = *puVar31;
        ppuStack_110 = &PTR_FUN_110aeb040;
        pppuStack_108 = (undefined ***)0x0;
        ppuStack_100 = (undefined **)
                       CONCAT44((float)*(double *)(uVar41 + 0x10),(float)*(double *)(uVar41 + 8));
        uStack_f8 = (double)(ulong)(uint)(float)*(double *)(uVar41 + 0x18);
        *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 1;
        pppuVar40 = *(undefined ****)(lVar11 + 0x18);
        if (pppuVar40 == (undefined ***)0x0) {
          pppuVar40 = *(undefined ****)(lVar11 + 8);
          if (((ulong)pppuVar40 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
          }
          FUN_109307df0();
          *(undefined ****)(lVar11 + 0x18) = pppuVar40;
        }
        if (pppuVar40 != &ppuStack_110) {
          pppuVar20 = (undefined ***)pppuVar40[1];
          pppuVar35 = pppuVar20;
          if (((ulong)pppuVar20 & 1) != 0) {
            pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
          }
          pppuVar21 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          if (pppuVar35 == pppuVar21) {
            lVar22 = 0;
            pppuVar40[1] = (undefined **)pppuStack_108;
            do {
              uVar5 = *(undefined1 *)((long)pppuVar40 + lVar22 + 0x10);
              *(undefined1 *)((long)pppuVar40 + lVar22 + 0x10) =
                   *(undefined1 *)((long)unaff_x23 + lVar22);
              *(undefined1 *)((long)unaff_x23 + lVar22) = uVar5;
              lVar22 = lVar22 + 1;
              pppuStack_108 = pppuVar20;
            } while (lVar22 != 0xc);
          }
          else {
            func_0x0001093068c4(pppuVar40);
            FUN_1093067b8(pppuVar40,&ppuStack_110);
          }
        }
        if (((ulong)pppuStack_108 & 1) != 0) {
          func_0x0001053936ac(&pppuStack_108);
        }
        uVar41 = *puVar31;
        ppuStack_110 = &PTR_FUN_110aeb040;
        pppuStack_108 = (undefined ***)0x0;
        ppuStack_100 = (undefined **)
                       CONCAT44((float)*(double *)(uVar41 + 0x28),(float)*(double *)(uVar41 + 0x20))
        ;
        uStack_f8 = (double)(ulong)(uint)(float)*(double *)(uVar41 + 0x30);
        *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 2;
        unaff_x25 = *(undefined ****)(lVar11 + 0x20);
        if (unaff_x25 == (undefined ***)0x0) {
          unaff_x25 = *(undefined ****)(lVar11 + 8);
          if (((ulong)unaff_x25 & 1) != 0) {
            unaff_x25 = *(undefined ****)((ulong)unaff_x25 & 0xfffffffffffffffe);
          }
          FUN_109307df0();
          *(undefined ****)(lVar11 + 0x20) = unaff_x25;
        }
        if (unaff_x25 != &ppuStack_110) {
          pppuVar35 = (undefined ***)unaff_x25[1];
          pppuVar40 = pppuVar35;
          if (((ulong)pppuVar35 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuVar35 & 0xfffffffffffffffe);
          }
          pppuVar20 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar20 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          if (pppuVar40 == pppuVar20) {
            lVar11 = 0;
            unaff_x25[1] = (undefined **)pppuStack_108;
            do {
              uVar5 = *(undefined1 *)((long)unaff_x25 + lVar11 + 0x10);
              *(undefined1 *)((long)unaff_x25 + lVar11 + 0x10) =
                   *(undefined1 *)((long)unaff_x23 + lVar11);
              *(undefined1 *)((long)unaff_x23 + lVar11) = uVar5;
              lVar11 = lVar11 + 1;
              pppuStack_108 = pppuVar35;
            } while (lVar11 != 0xc);
          }
          else {
            func_0x0001093068c4(unaff_x25);
            FUN_1093067b8(unaff_x25,&ppuStack_110);
          }
        }
        if (((ulong)pppuStack_108 & 1) != 0) {
          func_0x0001053936ac(&pppuStack_108);
        }
        lVar42 = lVar42 + 1;
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != puVar34);
  }
  plVar24 = *(long **)(param_1 + 4);
  for (plVar39 = *(long **)(param_1 + 2); plVar39 != plVar24; plVar39 = plVar39 + 1) {
    if (*(int *)*plVar39 - 3U < 2) {
      lVar42 = param_3 + 0x18;
      func_0x000107c303b0(lVar42,0x109345f48);
      *(uint *)(lVar42 + 0x10) = *(uint *)(lVar42 + 0x10) | 2;
      uVar41 = *(ulong *)(lVar42 + 0x20);
      if (uVar41 == 0) {
        uVar41 = *(ulong *)(lVar42 + 8);
        if ((uVar41 & 1) != 0) {
          uVar41 = *(ulong *)(uVar41 & 0xfffffffffffffffe);
        }
        func_0x000109345e3c();
        *(ulong *)(lVar42 + 0x20) = uVar41;
      }
      *(int *)(uVar41 + 0x10) = *param_1;
      *(uint *)(lVar42 + 0x10) = *(uint *)(lVar42 + 0x10) | 1;
      uVar41 = *(ulong *)(lVar42 + 0x18);
      if (uVar41 == 0) {
        uVar41 = *(ulong *)(lVar42 + 8);
        if ((uVar41 & 1) != 0) {
          uVar41 = *(ulong *)(uVar41 & 0xfffffffffffffffe);
        }
        func_0x000109345edc();
        *(ulong *)(lVar42 + 0x18) = uVar41;
      }
      lVar42 = *plVar39;
      pcVar36 = *(char **)(lVar42 + 1000);
      pcVar32 = *(char **)(lVar42 + 0x3f0);
      if (pcVar36 != pcVar32) {
        do {
          if ((*pcVar36 == '\x01') && (pppuStack_b8 != (undefined ***)0x0)) {
            uVar18 = *(ulong *)(pcVar36 + 8);
            uVar26 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) * -0x622015f714c7d297;
            uVar26 = (uVar18 >> 0x20 ^ uVar26 >> 0x2f ^ uVar26) * -0x622015f714c7d297;
            pppuVar40 = (undefined ***)((uVar26 ^ uVar26 >> 0x2f) * -0x622015f714c7d297);
            uVar26 = (long)pppuStack_b8 - 1;
            if (((ulong)pppuStack_b8 & uVar26) == 0) {
              pppuVar35 = (undefined ***)((ulong)pppuVar40 & uVar26);
            }
            else {
              pppuVar35 = pppuVar40;
              if (pppuStack_b8 <= pppuVar40) {
                uVar6 = 0;
                if (pppuStack_b8 != (undefined ***)0x0) {
                  uVar6 = (ulong)pppuVar40 / (ulong)pppuStack_b8;
                }
                pppuVar35 = (undefined ***)((long)pppuVar40 - uVar6 * (long)pppuStack_b8);
              }
            }
            plVar29 = *(long **)(lStack_c0 + (long)pppuVar35 * 8);
            if (plVar29 != (long *)0x0) {
LAB_109459508:
              while (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0) {
                pppuVar20 = (undefined ***)plVar29[1];
                if ((long)pppuVar40 - (long)pppuVar20 != 0) goto LAB_10945952c;
                if (plVar29[2] == uVar18) {
                  if (*(long *)(pcVar36 + 0x70) != 0) {
                    uVar18 = (ulong)*(uint *)(pcVar36 + 100);
                    if ((int)*(uint *)(pcVar36 + 100) < 3) {
                      lVar42 = (long)*(int *)(pcVar36 + 0x6c) * (long)*(int *)(pcVar36 + 0x68);
                    }
                    else {
                      lVar42 = 1;
                      piVar23 = *(int **)(pcVar36 + 0xa0);
                      do {
                        lVar42 = lVar42 * *piVar23;
                        uVar18 = uVar18 - 1;
                        piVar23 = piVar23 + 1;
                      } while (uVar18 != 0);
                    }
                    if (lVar42 != 0) {
                      pppuVar40 = (undefined ***)(uVar41 + 0x18);
                      func_0x000107c303b0(pppuVar40,0x109345d94);
                      if ((*param_1 == 0) || (*param_1 == 3)) {
                        uStack_e8 = (ulong)*(int *)(*(long *)(pcVar36 + 8) + 0x38);
                        ppuStack_110 = &PTR_FUN_110af0118;
                        pppuStack_108 = (undefined ***)0x0;
                        ppuStack_100 = (undefined **)0x0;
                        uStack_f8 = 0.0;
                        uStack_cc = 0;
                        puStack_f0 = &DAT_11383d918;
                        uVar16 = *(undefined8 *)(pcVar36 + 0x18);
                        auVar7[9] = (char)((ulong)uVar16 >> 8);
                        auVar7._0_9_ = *(unkbyte9 *)(pcVar36 + 0x10);
                        auVar7[10] = (char)((ulong)uVar16 >> 0x10);
                        auVar7[0xb] = (char)((ulong)uVar16 >> 0x18);
                        auVar7[0xc] = (char)((ulong)uVar16 >> 0x20);
                        auVar7[0xd] = (char)((ulong)uVar16 >> 0x28);
                        auVar7[0xe] = (char)((ulong)uVar16 >> 0x30);
                        auVar7[0xf] = (char)((ulong)uVar16 >> 0x38);
                        fVar8 = (float)auVar7._8_8_;
                        pppuStack_e0 = (undefined ***)
                                       CONCAT17((char)((uint)fVar8 >> 0x18),
                                                CONCAT16((char)((uint)fVar8 >> 0x10),
                                                         CONCAT15((char)((uint)fVar8 >> 8),
                                                                  CONCAT14(SUB41(fVar8,0),
                                                                           (float)(double)*(unkbyte9
                                                                                            *)(
                                                  pcVar36 + 0x10)))));
                        fStack_d8 = (float)*(double *)(pcVar36 + 0x40);
                        uStack_d4 = *(undefined4 *)(pcVar36 + 0x38);
                        fStack_d0 = (float)*(double *)(pcVar36 + 0x30);
                        FUN_109408094(pcVar36 + 0x60,0,&ppuStack_110);
                        if (pppuVar40 != &ppuStack_110) {
                          pppuVar35 = (undefined ***)pppuVar40[1];
                          if (((ulong)pppuVar35 & 1) != 0) {
                            pppuVar35 = *(undefined ****)((ulong)pppuVar35 & 0xfffffffffffffffe);
                          }
                          pppuVar20 = pppuStack_108;
                          if (((ulong)pppuStack_108 & 1) != 0) {
                            pppuVar20 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe)
                            ;
                          }
                          if (pppuVar35 == pppuVar20) {
                            func_0x000109344238(pppuVar40,&ppuStack_110);
                          }
                          else {
                            func_0x0001093439c8(pppuVar40);
                            FUN_109344104(pppuVar40,&ppuStack_110);
                          }
                        }
                        func_0x000109343954(&ppuStack_110);
                        break;
                      }
                      goto LAB_10945a624;
                    }
                  }
                  break;
                }
              }
            }
          }
LAB_109459670:
          pcVar36 = pcVar36 + 0xd0;
        } while (pcVar36 != pcVar32);
        lVar42 = *plVar39;
      }
      uStack_c8 = 0;
      ppuStack_100 = *(undefined ***)(lVar42 + 0x20);
      puStack_f0 = (undefined *)*(long *)(lVar42 + 0x48);
      uStack_f8 = (double)*(undefined8 *)(lVar42 + 0x40);
      ppuStack_110 = &PTR_FUN_110aeb130;
      pppuStack_108 = (undefined ***)0x0;
      pppuStack_e0 = *(undefined ****)(lVar42 + 0x38);
      uStack_e8 = *(ulong *)(lVar42 + 0x30);
      fStack_d0 = (float)*(undefined8 *)(lVar42 + 0x68);
      uStack_cc = (undefined4)((ulong)*(undefined8 *)(lVar42 + 0x68) >> 0x20);
      fStack_d8 = (float)*(undefined8 *)(lVar42 + 0x60);
      uStack_d4 = (undefined4)((ulong)*(undefined8 *)(lVar42 + 0x60) >> 0x20);
      *(uint *)(uVar41 + 0x10) = *(uint *)(uVar41 + 0x10) | 1;
      pppuVar40 = *(undefined ****)(uVar41 + 0x38);
      if (pppuVar40 == (undefined ***)0x0) {
        pppuVar40 = *(undefined ****)(uVar41 + 8);
        if (((ulong)pppuVar40 & 1) != 0) {
          pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
        }
        func_0x000109307ed8();
        *(undefined ****)(uVar41 + 0x38) = pppuVar40;
      }
      if (pppuVar40 != &ppuStack_110) {
        pppuVar20 = (undefined ***)pppuVar40[1];
        pppuVar35 = pppuVar20;
        if (((ulong)pppuVar20 & 1) != 0) {
          pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
        }
        pppuVar21 = pppuStack_108;
        if (((ulong)pppuStack_108 & 1) != 0) {
          pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
        }
        if (pppuVar35 == pppuVar21) {
          lVar11 = 0;
          pppuVar40[1] = (undefined **)pppuStack_108;
          do {
            uVar5 = *(undefined1 *)((long)pppuVar40 + lVar11 + 0x10);
            *(undefined1 *)((long)pppuVar40 + lVar11 + 0x10) =
                 *(undefined1 *)((long)&ppuStack_100 + lVar11);
            *(undefined1 *)((long)&ppuStack_100 + lVar11) = uVar5;
            lVar11 = lVar11 + 1;
            pppuStack_108 = pppuVar20;
          } while (lVar11 != 0x38);
        }
        else {
          func_0x000109307550(pppuVar40);
          FUN_1093073f0(pppuVar40,&ppuStack_110);
        }
      }
      if (((ulong)pppuStack_108 & 1) != 0) {
        func_0x0001053936ac(&pppuStack_108);
      }
      *(undefined4 *)(uVar41 + 100) = *(undefined4 *)(lVar42 + 0x20);
      *(undefined4 *)(uVar41 + 0x68) = *(undefined4 *)(lVar42 + 0x24);
      *(float *)(uVar41 + 0x60) = (float)*(double *)(*plVar39 + 0x2a0);
      lVar42 = *plVar39;
      if (*(char *)(lVar42 + 0x417) < '\0') {
        func_0x000107c3192c(&uStack_130,*(undefined8 *)(lVar42 + 0x400),
                            *(undefined8 *)(lVar42 + 0x408));
      }
      else {
        uStack_128 = *(ulong *)(lVar42 + 0x408);
        uStack_130 = *(undefined8 *)(lVar42 + 0x400);
        uStack_120 = *(ulong *)(lVar42 + 0x410);
      }
      uVar18 = uStack_128;
      if (-1 < (long)uStack_120) {
        uVar18 = uStack_120 >> 0x38;
      }
      if (uVar18 != 0) {
        uVar18 = *(ulong *)(uVar41 + 8);
        if ((uVar18 & 1) != 0) {
          uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar41 + 0x30,&uStack_130,uVar18);
      }
      lVar42 = *plVar39;
      if (*(char *)(lVar42 + 0x440) == '\x01') {
        ppuStack_110 = &PTR_FUN_110af0208;
        pppuStack_108 = (undefined ***)0x0;
        pppuStack_e0 = (undefined ***)0x0;
        uStack_f8 = 0.0;
        puStack_f0 = (undefined *)0x0;
        ppuStack_100 = (undefined **)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        fStack_d8 = *(float *)(lVar42 + 0x418);
        FUN_1099a24ac(&puStack_90,lVar42 + 0x418);
        puVar9 = puStack_88;
        puVar37 = puStack_90;
        iVar30 = (int)uStack_f8 + (int)((ulong)((long)puStack_88 - (long)puStack_90) >> 2);
        iVar13 = (int)uStack_f8;
        if (uStack_f8._4_4_ < iVar30) {
          func_0x000107c29104(&uStack_f8,(ulong)uStack_f8 & 0xffffffff,iVar30);
          iVar13 = SUB84(uStack_f8,0);
        }
        uStack_f8 = (double)CONCAT44(uStack_f8._4_4_,iVar30);
        if (puVar37 != puVar9) {
          puVar14 = (undefined4 *)((long)puStack_f0 + (long)iVar13 * 4);
          do {
            puVar38 = puVar37 + 1;
            *puVar14 = *puVar37;
            puVar14 = puVar14 + 1;
            puVar37 = puVar38;
          } while (puVar38 != puVar9);
        }
        ppuStack_158 = &PTR_FUN_110af0168;
        ppuStack_150 = (undefined **)0x0;
        uStack_148 = *(undefined8 *)(lVar42 + 0x41c);
        pppuStack_140 = (undefined ***)(ulong)*(uint *)(lVar42 + 0x424);
        ppuStack_100 = (undefined **)((ulong)ppuStack_100 | 1);
        if (pppuStack_e0 == (undefined ***)0x0) {
          pppuVar40 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          func_0x000109345df4();
          pppuStack_e0 = pppuVar40;
        }
        pppuVar40 = pppuStack_e0;
        if (pppuStack_e0 != &ppuStack_158) {
          ppuVar15 = pppuStack_e0[1];
          ppuVar12 = ppuVar15;
          if (((ulong)ppuVar15 & 1) != 0) {
            ppuVar12 = *(undefined ***)((ulong)ppuVar15 & 0xfffffffffffffffe);
          }
          ppuVar27 = ppuStack_150;
          if (((ulong)ppuStack_150 & 1) != 0) {
            ppuVar27 = *(undefined ***)((ulong)ppuStack_150 & 0xfffffffffffffffe);
          }
          if (ppuVar12 == ppuVar27) {
            lVar42 = 0;
            pppuStack_e0[1] = ppuStack_150;
            do {
              uVar5 = *(undefined1 *)((long)pppuStack_e0 + lVar42 + 0x10);
              *(undefined1 *)((long)pppuStack_e0 + lVar42 + 0x10) =
                   *(undefined1 *)((long)&uStack_148 + lVar42);
              *(undefined1 *)((long)&uStack_148 + lVar42) = uVar5;
              lVar42 = lVar42 + 1;
              ppuStack_150 = ppuVar15;
            } while (lVar42 != 0xc);
          }
          else {
            func_0x000109344358(pppuStack_e0);
            func_0x0001093442ac(pppuVar40,&ppuStack_158);
          }
        }
        if (((ulong)ppuStack_150 & 1) != 0) {
          func_0x0001053936ac(&ppuStack_150);
        }
        if (puStack_90 != (undefined4 *)0x0) {
          puStack_88 = puStack_90;
          __ZdlPv();
        }
        *(uint *)(uVar41 + 0x10) = *(uint *)(uVar41 + 0x10) | 0x10;
        pppuVar40 = *(undefined ****)(uVar41 + 0x58);
        if (pppuVar40 == (undefined ***)0x0) {
          pppuVar40 = *(undefined ****)(uVar41 + 8);
          if (((ulong)pppuVar40 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
          }
          func_0x000109345e84();
          *(undefined ****)(uVar41 + 0x58) = pppuVar40;
        }
        if (pppuVar40 != &ppuStack_110) {
          pppuVar35 = (undefined ***)pppuVar40[1];
          if (((ulong)pppuVar35 & 1) != 0) {
            pppuVar35 = *(undefined ****)((ulong)pppuVar35 & 0xfffffffffffffffe);
          }
          pppuVar20 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar20 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          if (pppuVar35 == pppuVar20) {
            FUN_109344cc4(pppuVar40,&ppuStack_110);
          }
          else {
            FUN_1093446e0(pppuVar40);
            FUN_109344bb8(pppuVar40,&ppuStack_110);
          }
        }
        FUN_109344654(&ppuStack_110);
        lVar42 = *plVar39;
      }
      ppuStack_158 = &PTR_FUN_110aeb180;
      ppuStack_150 = (undefined **)0x0;
      pppuStack_140 = (undefined ***)0x0;
      pppuStack_138 = (undefined ***)0x0;
      uStack_148 = 0;
      FUN_1093804f0(&puStack_90,lVar42 + 0x2b0);
      ppuStack_100 = (undefined **)((double)puStack_90 * dStack_78);
      uStack_f8 = (double)puStack_88 * dStack_78;
      puStack_f0 = (undefined *)(dStack_78 * dStack_80);
      unaff_x23 = &ppuStack_110;
      ppuStack_110 = &PTR_FUN_110aeb090;
      pppuStack_108 = (undefined ***)0x0;
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      uStack_148 = CONCAT44(uStack_148._4_4_,1);
      pppuVar40 = (undefined ***)0x0;
      func_0x000109307e38();
      pppuStack_140 = pppuVar40;
      if (pppuVar40 != unaff_x23) {
        pppuVar20 = (undefined ***)pppuVar40[1];
        pppuVar35 = pppuVar20;
        if (((ulong)pppuVar20 & 1) != 0) {
          pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
        }
        pppuVar21 = pppuStack_108;
        if (((ulong)pppuStack_108 & 1) != 0) {
          pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
        }
        if (pppuVar35 == pppuVar21) {
          lVar11 = 0;
          pppuVar40[1] = (undefined **)pppuStack_108;
          do {
            uVar5 = *(undefined1 *)((long)pppuVar40 + lVar11 + 0x10);
            *(undefined1 *)((long)pppuVar40 + lVar11 + 0x10) =
                 *(undefined1 *)((long)&ppuStack_100 + lVar11);
            *(undefined1 *)((long)&ppuStack_100 + lVar11) = uVar5;
            lVar11 = lVar11 + 1;
            pppuStack_108 = pppuVar20;
          } while (lVar11 != 0x18);
        }
        else {
          func_0x000109306ca4(pppuVar40);
          func_0x000109306b90(pppuVar40,&ppuStack_110);
        }
      }
      if (((ulong)pppuStack_108 & 1) != 0) {
        func_0x0001053936ac(&pppuStack_108);
      }
      ppuStack_110 = &PTR_FUN_110aeb090;
      pppuStack_108 = (undefined ***)0x0;
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      uStack_f8 = *(double *)(lVar42 + 0x2d8);
      ppuStack_100 = *(undefined ***)(lVar42 + 0x2d0);
      puStack_f0 = *(undefined **)(lVar42 + 0x2e0);
      uStack_148 = CONCAT44(uStack_148._4_4_,3);
      pppuVar40 = (undefined ***)0x0;
      func_0x000109307e38();
      pppuStack_138 = pppuVar40;
      if (pppuVar40 != unaff_x23) {
        pppuVar20 = (undefined ***)pppuVar40[1];
        pppuVar35 = pppuVar20;
        if (((ulong)pppuVar20 & 1) != 0) {
          pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
        }
        pppuVar21 = pppuStack_108;
        if (((ulong)pppuStack_108 & 1) != 0) {
          pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
        }
        if (pppuVar35 == pppuVar21) {
          lVar42 = 0;
          pppuVar40[1] = (undefined **)pppuStack_108;
          do {
            uVar5 = *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10);
            *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10) =
                 *(undefined1 *)((long)&ppuStack_100 + lVar42);
            *(undefined1 *)((long)&ppuStack_100 + lVar42) = uVar5;
            lVar42 = lVar42 + 1;
            pppuStack_108 = pppuVar20;
          } while (lVar42 != 0x18);
        }
        else {
          func_0x000109306ca4(pppuVar40);
          func_0x000109306b90(pppuVar40,&ppuStack_110);
        }
      }
      if (((ulong)pppuStack_108 & 1) != 0) {
        func_0x0001053936ac(&pppuStack_108);
      }
      *(uint *)(uVar41 + 0x10) = *(uint *)(uVar41 + 0x10) | 2;
      pppuVar40 = *(undefined ****)(uVar41 + 0x40);
      if (pppuVar40 == (undefined ***)0x0) {
        pppuVar40 = *(undefined ****)(uVar41 + 8);
        if (((ulong)pppuVar40 & 1) != 0) {
          pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
        }
        func_0x000109307f2c();
        *(undefined ****)(uVar41 + 0x40) = pppuVar40;
      }
      if (pppuVar40 != &ppuStack_158) {
        ppuVar15 = pppuVar40[1];
        ppuVar12 = ppuVar15;
        if (((ulong)ppuVar15 & 1) != 0) {
          ppuVar12 = *(undefined ***)((ulong)ppuVar15 & 0xfffffffffffffffe);
        }
        ppuVar27 = ppuStack_150;
        if (((ulong)ppuStack_150 & 1) != 0) {
          ppuVar27 = *(undefined ***)((ulong)ppuStack_150 & 0xfffffffffffffffe);
        }
        if (ppuVar12 == ppuVar27) {
          lVar42 = 0;
          pppuVar40[1] = ppuStack_150;
          uVar3 = *(undefined4 *)(pppuVar40 + 2);
          *(undefined4 *)(pppuVar40 + 2) = (undefined4)uStack_148;
          uStack_148 = CONCAT44(uStack_148._4_4_,uVar3);
          do {
            uVar5 = *(undefined1 *)((long)pppuVar40 + lVar42 + 0x18);
            *(undefined1 *)((long)pppuVar40 + lVar42 + 0x18) =
                 *(undefined1 *)((long)&pppuStack_140 + lVar42);
            *(undefined1 *)((long)&pppuStack_140 + lVar42) = uVar5;
            lVar42 = lVar42 + 1;
            ppuStack_150 = ppuVar15;
          } while (lVar42 != 0x10);
        }
        else {
          FUN_109307090(pppuVar40);
          FUN_10930731c(pppuVar40,&ppuStack_158);
        }
      }
      FUN_109307000(&ppuStack_158);
      lVar42 = *plVar39;
      if (*(char *)(lVar42 + 0x268) == '\x01') {
        ppuStack_110 = &PTR_FUN_110aeb0e0;
        pppuStack_108 = (undefined ***)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        puStack_f0 = *(undefined **)(lVar42 + 0x250);
        uStack_f8 = *(double *)(lVar42 + 0x248);
        ppuStack_100 = *(undefined ***)(lVar42 + 0x240);
        *(uint *)(uVar41 + 0x10) = *(uint *)(uVar41 + 0x10) | 4;
        pppuVar40 = *(undefined ****)(uVar41 + 0x48);
        if (pppuVar40 == (undefined ***)0x0) {
          pppuVar40 = *(undefined ****)(uVar41 + 8);
          if (((ulong)pppuVar40 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
          }
          func_0x000109307e88();
          *(undefined ****)(uVar41 + 0x48) = pppuVar40;
        }
        if (pppuVar40 != unaff_x23) {
          pppuVar20 = (undefined ***)pppuVar40[1];
          pppuVar35 = pppuVar20;
          if (((ulong)pppuVar20 & 1) != 0) {
            pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
          }
          pppuVar21 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          if (pppuVar35 == pppuVar21) {
            lVar42 = 0;
            pppuVar40[1] = (undefined **)pppuStack_108;
            do {
              uVar5 = *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10);
              *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10) =
                   *(undefined1 *)((long)&ppuStack_100 + lVar42);
              *(undefined1 *)((long)&ppuStack_100 + lVar42) = uVar5;
              lVar42 = lVar42 + 1;
              pppuStack_108 = pppuVar20;
            } while (lVar42 != 0x18);
          }
          else {
            func_0x000109307b00(pppuVar40);
            func_0x0001093079ec(pppuVar40,&ppuStack_110);
          }
        }
        if (((ulong)pppuStack_108 & 1) != 0) {
          func_0x0001053936ac(&pppuStack_108);
        }
        lVar42 = *plVar39;
      }
      if (*(char *)(lVar42 + 0x278) == '\x01') {
        FUN_1093804f0(&ppuStack_110,lVar42 + 0x130);
        ppuVar12 = (undefined **)((double)ppuStack_110 * uStack_f8);
        dVar33 = (double)pppuStack_108 * uStack_f8;
        puStack_f0 = (undefined *)(uStack_f8 * (double)ppuStack_100);
        ppuStack_110 = &PTR_FUN_110aeb090;
        pppuStack_108 = (undefined ***)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        uStack_f8 = dVar33;
        ppuStack_100 = ppuVar12;
        *(uint *)(uVar41 + 0x10) = *(uint *)(uVar41 + 0x10) | 8;
        pppuVar40 = *(undefined ****)(uVar41 + 0x50);
        if (pppuVar40 == (undefined ***)0x0) {
          pppuVar40 = *(undefined ****)(uVar41 + 8);
          if (((ulong)pppuVar40 & 1) != 0) {
            pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
          }
          func_0x000109307e38();
          *(undefined ****)(uVar41 + 0x50) = pppuVar40;
        }
        if (pppuVar40 != unaff_x23) {
          pppuVar20 = (undefined ***)pppuVar40[1];
          pppuVar35 = pppuVar20;
          if (((ulong)pppuVar20 & 1) != 0) {
            pppuVar35 = *(undefined ****)((ulong)pppuVar20 & 0xfffffffffffffffe);
          }
          pppuVar21 = pppuStack_108;
          if (((ulong)pppuStack_108 & 1) != 0) {
            pppuVar21 = *(undefined ****)((ulong)pppuStack_108 & 0xfffffffffffffffe);
          }
          if (pppuVar35 == pppuVar21) {
            lVar42 = 0;
            pppuVar40[1] = (undefined **)pppuStack_108;
            do {
              uVar5 = *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10);
              *(undefined1 *)((long)pppuVar40 + lVar42 + 0x10) =
                   *(undefined1 *)((long)&ppuStack_100 + lVar42);
              *(undefined1 *)((long)&ppuStack_100 + lVar42) = uVar5;
              lVar42 = lVar42 + 1;
              pppuStack_108 = pppuVar20;
            } while (lVar42 != 0x18);
          }
          else {
            func_0x000109306ca4(pppuVar40);
            func_0x000109306b90(pppuVar40,&ppuStack_110);
          }
        }
        if (((ulong)pppuStack_108 & 1) != 0) {
          func_0x0001053936ac(&pppuStack_108);
        }
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(uStack_130);
      }
    }
  }
  *(char *)(param_3 + 0x58) = (char)param_1[0x14];
  plVar39 = *(long **)(param_1 + 0x18);
  if (plVar39 != (long *)0x0) {
    lVar42 = *plVar39;
    lVar11 = plVar39[1];
    if (lVar42 != lVar11) {
      do {
        lVar22 = param_3 + 0x30;
        func_0x000107c303b0(lVar22,0x1093478fc);
        if (lVar42 != lVar22) {
          FUN_1093464bc(lVar22);
          FUN_1093467c8(lVar22,lVar42);
        }
        lVar42 = lVar42 + 0x40;
      } while (lVar42 != lVar11);
      plVar39 = *(long **)(param_1 + 0x18);
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
    pppuVar40 = *(undefined ****)(param_3 + 0x50);
    if (pppuVar40 == (undefined ***)0x0) {
      pppuVar40 = *(undefined ****)(param_3 + 8);
      if (((ulong)pppuVar40 & 1) != 0) {
        pppuVar40 = *(undefined ****)((ulong)pppuVar40 & 0xfffffffffffffffe);
      }
      func_0x000109348a00();
      *(undefined ****)(param_3 + 0x50) = pppuVar40;
    }
    unaff_x23 = (undefined ***)(plVar39 + 3);
    if (unaff_x23 != pppuVar40) {
      FUN_109347c18(pppuVar40);
      FUN_109347f30(pppuVar40,unaff_x23);
    }
  }
  func_0x000109460bac(&lStack_c0);
  if (*param_2 == '\x01') {
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
    uVar41 = *(ulong *)(param_3 + 0x48);
    if (uVar41 == 0) {
      uVar41 = *(ulong *)(param_3 + 8);
      if ((uVar41 & 1) != 0) {
        uVar41 = *(ulong *)(uVar41 & 0xfffffffffffffffe);
      }
      func_0x0001093431a0();
      *(ulong *)(param_3 + 0x48) = uVar41;
    }
    pppuStack_108 = (undefined ***)0x0;
    ppuStack_110 = (undefined **)0x0;
    uStack_f8 = 0.0;
    ppuStack_100 = (undefined **)0x0;
    puStack_f0 = (undefined *)CONCAT44(puStack_f0._4_4_,0x3f800000);
    lVar42 = *(long *)(param_1 + 8);
    if ((long)*(int *)(uVar41 + 0x18) != *(long *)(param_1 + 10) - lVar42 >> 3) {
      FUN_10940ce60(&UNK_10f56dfd0);
      goto LAB_10945a640;
    }
    if (*(long *)(param_1 + 10) != lVar42) {
      dVar33 = 0.0;
      pppuVar40 = (undefined ***)0x0;
      uVar18 = 0;
      puVar31 = (ulong *)(uVar41 + 0x10);
      puStack_170 = &UNK_10f56dffe;
      do {
        puVar34 = puVar31;
        if ((*puVar31 & 1) != 0) {
          puVar34 = (ulong *)(*puVar31 + (long)(int)uVar18 * 8 + 7);
        }
        pppuVar35 = *(undefined ****)(*puVar34 + 0x28);
        lVar42 = *(long *)(lVar42 + uVar18 * 8);
        iVar30 = *(int *)(lVar42 + 0x38);
        if (pppuVar35 != (undefined ***)(long)iVar30) {
LAB_10945a5fc:
          FUN_10940ce60(puStack_170);
          goto LAB_10945a640;
        }
        if ((*(byte *)(lVar42 + 0x48) & 1) == 0) {
          puStack_170 = &UNK_10f56e01a;
          goto LAB_10945a5fc;
        }
        puVar43 = *(undefined **)(lVar42 + 0x40);
        if (pppuVar40 != (undefined ***)0x0) {
          uVar41 = (long)pppuVar40 - 1;
          if (((ulong)pppuVar40 & uVar41) == 0) {
            unaff_x23 = (undefined ***)(uVar41 & (ulong)pppuVar35);
          }
          else {
            unaff_x23 = pppuVar35;
            if (pppuVar40 <= pppuVar35) {
              uVar26 = 0;
              if (pppuVar40 != (undefined ***)0x0) {
                uVar26 = (ulong)pppuVar35 / (ulong)pppuVar40;
              }
              unaff_x23 = (undefined ***)((long)pppuVar35 - uVar26 * (long)pppuVar40);
            }
          }
          plVar39 = (long *)ppuStack_110[(long)unaff_x23];
          if (plVar39 != (long *)0x0) {
            do {
              while( true ) {
                plVar39 = (long *)*plVar39;
                if (plVar39 == (long *)0x0) goto LAB_10945a138;
                pppuVar20 = (undefined ***)plVar39[1];
                if (pppuVar20 != pppuVar35) break;
                if (*(int *)(plVar39 + 2) == iVar30) {
                  plVar39[3] = (long)puVar43;
                  uVar41 = *puVar34;
                  goto LAB_10945a3f4;
                }
              }
              if (((ulong)pppuVar40 & uVar41) == 0) {
                pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar41);
              }
              else if (pppuVar40 <= pppuVar20) {
                uVar26 = 0;
                if (pppuVar40 != (undefined ***)0x0) {
                  uVar26 = (ulong)pppuVar20 / (ulong)pppuVar40;
                }
                pppuVar20 = (undefined ***)((long)pppuVar20 - uVar26 * (long)pppuVar40);
              }
            } while (pppuVar20 == unaff_x23);
          }
        }
LAB_10945a138:
        ppuVar12 = (undefined **)0x20;
        __Znwm();
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[1] = (undefined *)pppuVar35;
        *(int *)(ppuVar12 + 2) = iVar30;
        ppuVar12[3] = (undefined *)0x0;
        if ((pppuVar40 == (undefined ***)0x0) ||
           (puStack_f0._0_4_ * (float)pppuVar40 < (float)((long)dVar33 + 1))) {
          uVar41 = 1;
          if ((undefined ***)0x2 < pppuVar40) {
            uVar41 = (ulong)(((ulong)pppuVar40 & (long)pppuVar40 - 1U) != 0);
          }
          pppuVar20 = (undefined ***)(uVar41 | (long)pppuVar40 << 1);
          pppuVar21 = (undefined ***)(long)((float)((long)dVar33 + 1) / puStack_f0._0_4_);
          if (pppuVar20 <= pppuVar21) {
            pppuVar20 = pppuVar21;
          }
          pppuVar21 = pppuVar40;
          if ((long)pppuVar20 - 1U == 0) {
            pppuVar20 = (undefined ***)0x2;
          }
          else if (((ulong)pppuVar20 & (long)pppuVar20 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppuVar21 = pppuStack_108;
          }
          pppuVar40 = pppuVar20;
          if (pppuVar21 < pppuVar20) {
LAB_10945a1dc:
            if ((ulong)pppuVar40 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10945a640;
            }
            ppuVar15 = (undefined **)((long)pppuVar40 << 3);
            __Znwm();
            bVar2 = ppuStack_110 != (undefined **)0x0;
            ppuStack_110 = ppuVar15;
            if (bVar2) {
              __ZdlPv();
            }
            pppuVar20 = (undefined ***)0x0;
            do {
              ppuStack_110[(long)pppuVar20] = (undefined *)0x0;
              pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
            } while (pppuVar40 != pppuVar20);
            pppuStack_108 = pppuVar40;
            if (ppuStack_100 != (undefined **)0x0) {
              pppuVar20 = (undefined ***)ppuStack_100[1];
              uVar41 = (long)pppuVar40 - 1;
              if (((ulong)pppuVar40 & uVar41) == 0) {
                pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar41);
              }
              else if (pppuVar40 <= pppuVar20) {
                uVar26 = 0;
                if (pppuVar40 != (undefined ***)0x0) {
                  uVar26 = (ulong)pppuVar20 / (ulong)pppuVar40;
                }
                pppuVar20 = (undefined ***)((long)pppuVar20 - uVar26 * (long)pppuVar40);
              }
              ppuStack_110[(long)pppuVar20] = (undefined *)&ppuStack_100;
              ppuVar15 = (undefined **)*ppuStack_100;
              ppuVar27 = ppuStack_100;
              while (ppuVar15 != (undefined **)0x0) {
                pppuVar21 = (undefined ***)ppuVar15[1];
                if (((ulong)pppuVar40 & uVar41) == 0) {
                  pppuVar21 = (undefined ***)((ulong)pppuVar21 & uVar41);
                }
                else if (pppuVar40 <= pppuVar21) {
                  uVar26 = 0;
                  if (pppuVar40 != (undefined ***)0x0) {
                    uVar26 = (ulong)pppuVar21 / (ulong)pppuVar40;
                  }
                  pppuVar21 = (undefined ***)((long)pppuVar21 - uVar26 * (long)pppuVar40);
                }
                ppuVar28 = ppuVar15;
                if (pppuVar21 != pppuVar20) {
                  if (ppuStack_110[(long)pppuVar21] == (undefined *)0x0) {
                    ppuStack_110[(long)pppuVar21] = (undefined *)ppuVar27;
                    pppuVar20 = pppuVar21;
                  }
                  else {
                    *ppuVar27 = *ppuVar15;
                    *ppuVar15 = *(undefined **)ppuStack_110[(long)pppuVar21];
                    *(undefined ***)ppuStack_110[(long)pppuVar21] = ppuVar15;
                    ppuVar28 = ppuVar27;
                  }
                }
                ppuVar27 = ppuVar28;
                ppuVar15 = (undefined **)*ppuVar28;
              }
            }
          }
          else {
            pppuVar40 = pppuVar21;
            if (pppuVar20 < pppuVar21) {
              pppuVar40 = (undefined ***)(long)((float)(ulong)uStack_f8 / puStack_f0._0_4_);
              if ((pppuVar21 < (undefined ***)0x3) ||
                 (((ulong)pppuVar21 & (long)pppuVar21 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined ***)0x1 < pppuVar40) {
                pppuVar40 = (undefined ***)(1L << (-LZCOUNT((long)pppuVar40 + -1) & 0x3fU));
              }
              ppuVar15 = ppuStack_110;
              if (pppuVar20 <= pppuVar40) {
                pppuVar20 = pppuVar40;
              }
              pppuVar40 = pppuStack_108;
              if (pppuVar20 < pppuVar21) {
                pppuVar40 = pppuVar20;
                if (pppuVar20 != (undefined ***)0x0) goto LAB_10945a1dc;
                ppuStack_110 = (undefined **)0x0;
                if (ppuVar15 != (undefined **)0x0) {
                  __ZdlPv();
                }
                pppuStack_108 = (undefined ***)0x0;
                pppuVar40 = (undefined ***)0x0;
              }
            }
          }
          if (((ulong)pppuVar40 & (long)pppuVar40 - 1U) == 0) {
            unaff_x23 = (undefined ***)((long)pppuVar40 - 1U & (ulong)pppuVar35);
          }
          else {
            unaff_x23 = pppuVar35;
            if (pppuVar40 <= pppuVar35) {
              uVar41 = 0;
              if (pppuVar40 != (undefined ***)0x0) {
                uVar41 = (ulong)pppuVar35 / (ulong)pppuVar40;
              }
              unaff_x23 = (undefined ***)((long)pppuVar35 - uVar41 * (long)pppuVar40);
            }
          }
        }
        ppuVar15 = (undefined **)ppuStack_110[(long)unaff_x23];
        if (ppuVar15 == (undefined **)0x0) {
          *ppuVar12 = (undefined *)ppuStack_100;
          ppuStack_110[(long)unaff_x23] = (undefined *)&ppuStack_100;
          ppuStack_100 = ppuVar12;
          if (*ppuVar12 != (undefined *)0x0) {
            pppuVar35 = *(undefined ****)(*ppuVar12 + 8);
            if (((ulong)pppuVar40 & (long)pppuVar40 - 1U) == 0) {
              pppuVar35 = (undefined ***)((ulong)pppuVar35 & (long)pppuVar40 - 1U);
            }
            else if (pppuVar40 <= pppuVar35) {
              uVar41 = 0;
              if (pppuVar40 != (undefined ***)0x0) {
                uVar41 = (ulong)pppuVar35 / (ulong)pppuVar40;
              }
              pppuVar35 = (undefined ***)((long)pppuVar35 - uVar41 * (long)pppuVar40);
            }
            ppuVar15 = ppuStack_110 + (long)pppuVar35;
            goto LAB_10945a3b0;
          }
        }
        else {
          *ppuVar12 = *ppuVar15;
LAB_10945a3b0:
          *ppuVar15 = (undefined *)ppuVar12;
        }
        dVar33 = (double)((long)uStack_f8 + 1);
        uVar41 = *puVar31;
        lVar42 = *(long *)(*(long *)(param_1 + 8) + uVar18 * 8);
        cVar4 = *(char *)(lVar42 + 0x48);
        ppuVar12[3] = puVar43;
        puVar34 = puVar31;
        if ((uVar41 & 1) != 0) {
          puVar34 = (ulong *)(uVar41 + (long)(int)uVar18 * 8 + 7);
        }
        uVar41 = *puVar34;
        uStack_f8 = dVar33;
        if (cVar4 == '\x01') {
LAB_10945a3f4:
          uVar16 = *(undefined8 *)(lVar42 + 0x40);
        }
        else {
          uVar16 = 0;
        }
        *(undefined8 *)(uVar41 + 0x28) = uVar16;
        uVar18 = uVar18 + 1;
        lVar42 = *(long *)(param_1 + 8);
      } while (uVar18 < (ulong)(*(long *)(param_1 + 10) - lVar42 >> 3));
    }
    uVar41 = *(ulong *)(param_3 + 0x18);
    puVar31 = (ulong *)(param_3 + 0x18);
    if ((uVar41 & 1) != 0) {
      puVar31 = (ulong *)(uVar41 + 7);
    }
    if (*(int *)(param_3 + 0x20) != 0) {
      puVar34 = puVar31 + *(int *)(param_3 + 0x20);
      do {
        uVar18 = *puVar31;
        *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
        uVar41 = *(ulong *)(uVar18 + 0x18);
        if (uVar41 == 0) {
          uVar41 = *(ulong *)(uVar18 + 8);
          if ((uVar41 & 1) != 0) {
            uVar41 = *(ulong *)(uVar41 & 0xfffffffffffffffe);
          }
          func_0x000109345edc();
          *(ulong *)(uVar18 + 0x18) = uVar41;
        }
        uVar18 = *(ulong *)(uVar41 + 0x18);
        puVar17 = (ulong *)(uVar41 + 0x18);
        if ((uVar18 & 1) != 0) {
          puVar17 = (ulong *)(uVar18 + 7);
        }
        if (*(int *)(uVar41 + 0x20) != 0) {
          if (pppuStack_108 == (undefined ***)0x0) {
LAB_10945a5bc:
            FUN_10940ce60(&UNK_10f56e03c);
            goto LAB_10945a640;
          }
          puVar1 = puVar17 + *(int *)(uVar41 + 0x20);
          uVar41 = (long)pppuStack_108 - 1;
          do {
            iVar30 = (int)*(undefined8 *)(*puVar17 + 0x28);
            pppuVar40 = (undefined ***)(long)iVar30;
            if (((ulong)pppuStack_108 & uVar41) == 0) {
              pppuVar35 = (undefined ***)(uVar41 & (ulong)pppuVar40);
            }
            else {
              pppuVar35 = pppuVar40;
              if (pppuStack_108 <= pppuVar40) {
                uVar18 = 0;
                if (pppuStack_108 != (undefined ***)0x0) {
                  uVar18 = (ulong)pppuVar40 / (ulong)pppuStack_108;
                }
                pppuVar35 = (undefined ***)((long)pppuVar40 - uVar18 * (long)pppuStack_108);
              }
            }
            plVar39 = (long *)ppuStack_110[(long)pppuVar35];
            if (plVar39 == (long *)0x0) goto LAB_10945a5bc;
            do {
              while( true ) {
                plVar39 = (long *)*plVar39;
                if (plVar39 == (long *)0x0) goto LAB_10945a5bc;
                pppuVar20 = (undefined ***)plVar39[1];
                if (pppuVar20 == pppuVar40) break;
                if (((ulong)pppuStack_108 & uVar41) == 0) {
                  pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar41);
                }
                else if (pppuStack_108 <= pppuVar20) {
                  uVar18 = 0;
                  if (pppuStack_108 != (undefined ***)0x0) {
                    uVar18 = (ulong)pppuVar20 / (ulong)pppuStack_108;
                  }
                  pppuVar20 = (undefined ***)((long)pppuVar20 - uVar18 * (long)pppuStack_108);
                }
                if (pppuVar20 != pppuVar35) goto LAB_10945a5bc;
              }
            } while (*(int *)(plVar39 + 2) != iVar30);
            *(long *)(*puVar17 + 0x28) = plVar39[3];
            puVar17 = puVar17 + 1;
          } while (puVar17 != puVar1);
        }
        puVar31 = puVar31 + 1;
      } while (puVar31 != puVar34);
    }
    func_0x00010945fd24(&ppuStack_110);
  }
  return;
LAB_10945952c:
  if (((ulong)pppuStack_b8 & uVar26) == 0) {
    pppuVar20 = (undefined ***)((ulong)pppuVar20 & uVar26);
  }
  else if (pppuStack_b8 <= pppuVar20) {
    uVar6 = 0;
    if (pppuStack_b8 != (undefined ***)0x0) {
      uVar6 = (ulong)pppuVar20 / (ulong)pppuStack_b8;
    }
    pppuVar20 = (undefined ***)((long)pppuVar20 - uVar6 * (long)pppuStack_b8);
  }
  if (pppuVar20 != pppuVar35) goto LAB_109459670;
  goto LAB_109459508;
}



/* Entry: 10945a7d4; end: 10945a80b;  */

long FUN_10945a7d4(long param_1)

{
  FUN_10945fda0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c34ee4(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10945a80c; end: 10945a99b;  */

undefined8 * FUN_10945a80c(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *apuStack_68 [3];
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  else {
    if (*param_1 != '\x01') {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(apuStack_68,param_1);
      FUN_10928a5e0(auStack_50,&UNK_10f5688c5,apuStack_68);
      FUN_10937bbbc(uVar3,0x131,auStack_50);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10945a92c);
      (*pcVar1)();
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  func_0x000107c31940(auStack_50,param_2);
  apuStack_68[0] = auStack_50;
  FUN_109460ddc(puVar2,auStack_50,&UNK_10dd5b8f9,apuStack_68,&uStack_31);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return puVar2 + 7;
}



/* Entry: 10945a99c; end: 10945ab2b;  */

long * FUN_10945a99c(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_40 [15];
  char cStack_31;
  
  puVar3 = auStack_40;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_31,param_1,1);
  if (cStack_31 == '\x01') {
    __ZNKSt3__18ios_base6getlocEv(auStack_40,(long)param_1 + *(long *)(*param_1 + -0x18));
    __ZNKSt3__16locale9use_facetERNS0_2idE(auStack_40,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    __ZNSt3__16localeD1Ev(auStack_40);
    while( true ) {
      plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
        (**(code **)(*plVar4 + 0x48))();
        uVar2 = (uint)plVar4;
        if (uVar2 == 0xffffffff) {
          uVar2 = 2;
          goto LAB_10945aa84;
        }
      }
      else {
        uVar2 = (uint)*(byte *)plVar4[3];
      }
      if (((uVar2 >> 7 & 1) != 0) ||
         ((*(uint *)(*(long *)(puVar3 + 0x10) + (ulong)(uVar2 & 0x7f) * 4) >> 0xe & 1) == 0)) break;
      plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = plVar4[3] + 1;
      }
    }
    uVar2 = 0;
LAB_10945aa84:
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | uVar2);
  }
  return param_1;
}



/* Entry: 10945ab2c; end: 10945abc7;  */

long FUN_10945ab2c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
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
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x54));
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != param_1 + 0xa0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10945abc8; end: 10945ac63;  */

long FUN_10945abc8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
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
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x54));
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != param_1 + 0xa0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10945ac64; end: 10945ad37;  */

undefined8 * FUN_10945ac64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_1093f28c0(param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 10945ad38; end: 10945addb;  */

long FUN_10945ad38(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  FUN_10923b090();
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi_110346758)
              (param_2,0,10);
    return param_2;
  }
  return 0;
}



/* Entry: 10945addc; end: 10945af0f;  */

void FUN_10945addc(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  pppuVar1 = &ppuStack_140;
  FUN_10926db08(&ppuStack_140);
  FUN_1092b4db8(&ppuStack_140,"view",4);
  uStack_31 = 0x30;
  FUN_1092bf390();
  *(undefined8 *)((long)pppuVar1 + *(long *)((long)*pppuVar1 + -0x18) + 0x18) = 3;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1092b4db8();
  FUN_10926dc5c(param_1,&ppuStack_138,&uStack_31);
  appuStack_d0[0] = &PTR_DAT_11088d708;
  ppuStack_140 = &PTR_SUB_11088d6e0;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_140,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10945af10; end: 10945da3b;  */

void FUN_10945af10(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  long *****ppppplVar7;
  long ******pppppplVar8;
  long *plVar9;
  long *****ppppplVar10;
  undefined4 *puVar11;
  long ***ppplVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long *plVar18;
  long *****ppppplVar19;
  undefined **ppuVar20;
  undefined ***pppuVar21;
  long lVar22;
  long **pplVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined **unaff_x27;
  long **pplVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  long ****pppplVar49;
  undefined *puVar50;
  long *****ppppplStack_9a0;
  uint uStack_92c;
  long ***ppplStack_920;
  long ***ppplStack_918;
  undefined4 *puStack_908;
  float fStack_900;
  undefined4 uStack_8fc;
  char cStack_8e9;
  float fStack_8e8;
  undefined4 uStack_8e4;
  char cStack_8d1;
  long *****ppppplStack_8d0;
  long *****ppppplStack_8c8;
  long *****ppppplStack_8c0;
  long *plStack_8b8;
  long *****ppppplStack_8b0;
  long *****ppppplStack_8a8;
  long *****ppppplStack_8a0;
  long *plStack_890;
  long *plStack_888;
  long *plStack_880;
  double dStack_878;
  double dStack_870;
  double dStack_868;
  long *aplStack_860 [16];
  long *plStack_7e0;
  long *plStack_7d8;
  long *****ppppplStack_7d0;
  undefined8 uStack_7c8;
  undefined **ppuStack_7c0;
  long *plStack_7b8;
  long ****pppplStack_7b0;
  long lStack_7a8;
  long ****pppplStack_7a0;
  long *plStack_798;
  long lStack_790;
  float fStack_788;
  long *plStack_778;
  long ****pppplStack_770;
  long ****pppplStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *****ppppplStack_750;
  long *****ppppplStack_748;
  long *****ppppplStack_740;
  double dStack_738;
  long lStack_730;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined8 uStack_720;
  undefined **ppuStack_718;
  double dStack_710;
  double dStack_708;
  undefined4 uStack_700;
  undefined8 uStack_6fc;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long *****ppppplStack_690;
  long *****ppppplStack_688;
  undefined4 uStack_680;
  int iStack_67c;
  long alStack_678 [3];
  long *plStack_660;
  long *plStack_658;
  long *****ppppplStack_650;
  undefined8 uStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  uint auStack_630 [2];
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined **ppuStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  long *****ppppplStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_410;
  long *****ppppplStack_408;
  long *****ppppplStack_400;
  char cStack_3f8;
  undefined8 uStack_3f0;
  undefined2 uStack_3e8;
  undefined1 uStack_3e0;
  long *plStack_3d8;
  char cStack_3d0;
  undefined8 auStack_3c0 [2];
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  uint uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long *****ppppplStack_350;
  long *****ppppplStack_348;
  long *****ppppplStack_340;
  double dStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  double dStack_310;
  double dStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2fc;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long *****ppppplStack_280;
  double dStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  double dStack_250;
  double dStack_248;
  undefined4 uStack_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  long lStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long *****ppppplStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  long *****ppppplStack_1b8;
  long *****ppppplStack_1b0;
  char cStack_1a8;
  undefined8 uStack_1a0;
  long *****ppppplStack_190;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  double dStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  double dStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [104];
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_760 = 0;
  pppplStack_768 = (long ****)0x0;
  lStack_758 = 0;
  func_0x000107c31940(&ppppplStack_650,&UNK_10f56de89);
  (**(code **)(*param_2 + 0x10))(&pppplStack_770,param_2,&ppppplStack_650);
  if ((long)ppuStack_640 < 0) {
    __ZdlPv(ppppplStack_650);
  }
  ppppplVar7 = (long *****)pppplStack_770;
  (*(code *)(*pppplStack_770)[5])();
  if (((ulong)ppppplVar7 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_650,&UNK_10f56de9e);
    (**(code **)(*param_2 + 0x10))(&ppppplStack_1d0,param_2,&ppppplStack_650);
    ppppplVar10 = ppppplStack_1d0;
    pppplVar49 = pppplStack_770;
    ppppplStack_1d0 = (long *****)0x0;
    pppplStack_770 = (long ****)ppppplVar10;
    if ((long *****)pppplVar49 != (long *****)0x0) {
      (*(code *)(*pppplVar49)[1])();
      ppppplVar10 = ppppplStack_1d0;
      ppppplStack_1d0 = (long *****)0x0;
      if (ppppplVar10 != (long *****)0x0) {
        (*(code *)(*ppppplVar10)[1])();
      }
    }
    if ((long)ppuStack_640 < 0) {
      __ZdlPv(ppppplStack_650);
    }
    ppppplVar10 = (long *****)pppplStack_770;
    (*(code *)(*pppplStack_770)[5])();
    if (((ulong)ppppplVar10 & 1) == 0) {
      FUN_10937e740(&ppppplStack_650,&UNK_10f56dec6);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56deb4,0x40a,&ppppplStack_650);
      if ((long)ppuStack_640 < 0) {
        __ZdlPv(ppppplStack_650);
      }
      *param_1 = 0;
      goto LAB_10945d220;
    }
  }
  (*(code *)(*pppplStack_770)[4])(&plStack_778);
  plVar18 = plStack_778;
  puVar50 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
  iVar24 = 3;
  do {
    __ZNKSt3__18ios_base6getlocEv(&ppppplStack_650,(long)plVar18 + *(long *)(*plVar18 + -0x18));
    pppppplVar8 = &ppppplStack_650;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,puVar50);
    (*(code *)(*pppppplVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppppplStack_650);
    FUN_109242d18(plVar18,&pppplStack_768,pppppplVar8);
    iVar24 = iVar24 + -1;
  } while (iVar24 != 0);
  plVar14 = plVar18;
  FUN_10945ad38(plVar18,&pppplStack_768);
  plVar9 = plVar18;
  FUN_10945ad38(plVar18,&pppplStack_768);
  fVar30 = (float)FUN_10945da3c(plVar18,&pppplStack_768);
  fVar31 = (float)FUN_10945da3c(plVar18,&pppplStack_768);
  fVar32 = (float)FUN_10945da3c(plVar18,&pppplStack_768);
  fVar33 = (float)FUN_10945da3c(plVar18,&pppplStack_768);
  iVar24 = (int)plVar14;
  dVar34 = (double)_atan2((double)iVar24,(double)(fVar30 + fVar30));
  iVar25 = (int)plVar9;
  dVar35 = (double)_atan2((double)iVar25,(double)(fVar31 + fVar31));
  dStack_380 = (double)fVar32;
  dStack_378 = (double)fVar33;
  auStack_3c0[0] = CONCAT44(iVar25,iVar24);
  dStack_390 = ((dVar34 + dVar34) / 0.017453292519943295) * 0.017453292519943295;
  dVar34 = ((dVar35 + dVar35) / 0.017453292519943295) * 0.017453292519943295;
  uStack_370 = 0;
  lStack_360 = 0;
  uStack_368 = 0;
  if ((fVar32 != 0.0) || (fVar33 != 0.0)) {
    uStack_370 = 1;
  }
  dStack_3b0 = (double)iVar24 / 2.0;
  dStack_3a8 = (double)iVar25 / 2.0;
  dStack_388 = dVar34;
  dVar35 = (double)_tan(dStack_390 * 0.5);
  dVar35 = ((double)iVar24 / 2.0) / dVar35;
  dStack_398 = (double)_tan(dVar34 * 0.5);
  plVar18 = plStack_778;
  dStack_398 = ((double)iVar25 / 2.0) / dStack_398;
  plStack_778 = (long *)0x0;
  dStack_3a0 = dVar35;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  pppplVar49 = pppplStack_770;
  pppplStack_770 = (long ****)0x0;
  if ((long *****)pppplVar49 != (long *****)0x0) {
    (*(code *)(*pppplVar49)[1])();
  }
  ppppplStack_1b8 = (long *****)0x0;
  ppuStack_1c0 = (undefined **)0x0;
  uStack_1c8 = 0;
  ppppplStack_1d0 = (long *****)0x0;
  ppppplStack_1b0 = (long *****)CONCAT44(ppppplStack_1b0._4_4_,0x3f800000);
  ppppplVar10 = (long *****)0x68;
  __Znwm();
  *(undefined4 *)ppppplVar10 = 0;
  *(undefined1 *)(ppppplVar10 + 10) = 0;
  ppppplVar10[2] = (long ****)0x0;
  ppppplVar10[1] = (long ****)0x0;
  ppppplVar10[4] = (long ****)0x0;
  ppppplVar10[3] = (long ****)0x0;
  ppppplVar10[6] = (long ****)0x0;
  ppppplVar10[5] = (long ****)0x0;
  ppppplVar10[0xb] = (long ****)0x0;
  ppppplVar10[0xc] = (long ****)0x0;
  ppppplStack_350 = ppppplVar10;
  func_0x000107c31940(&ppppplStack_650,&UNK_10f56ddbb);
  (**(code **)(*param_2 + 0x10))(&ppppplStack_750,param_2,&ppppplStack_650);
  if ((long)ppuStack_640 < 0) {
    __ZdlPv(ppppplStack_650);
  }
  pppppplVar8 = (long ******)ppppplStack_750;
  (*(code *)(*ppppplStack_750)[5])();
  puVar50 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
  if ((int)pppppplVar8 == 0) {
    ppppplStack_288 = (long *****)0x0;
    ppppplStack_290 = (long *****)0x0;
    ppppplStack_280 = (long *****)0x0;
    func_0x000107c31940(&ppppplStack_650,&UNK_10f56de47);
    (**(code **)(*param_2 + 0x10))(&plStack_880,param_2,&ppppplStack_650);
    (**(code **)(*plStack_880 + 0x20))(aplStack_860);
    plVar18 = plStack_880;
    plStack_880 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if ((long)ppuStack_640 < 0) {
      __ZdlPv(ppppplStack_650);
    }
    plVar18 = aplStack_860[0];
    __ZNKSt3__18ios_base6getlocEv
              (&ppppplStack_650,(long)aplStack_860[0] + *(long *)(*aplStack_860[0] + -0x18));
    pppppplVar8 = &ppppplStack_650;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppppplVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppppplStack_650);
    FUN_109242d18(plVar18,&ppppplStack_290,pppppplVar8);
    unaff_x27 = &PTR_DAT_11088d7b0;
    do {
      __ZNKSt3__18ios_base6getlocEv(&ppppplStack_650,(long)plVar18 + *(long *)(*plVar18 + -0x18));
      pppppplVar8 = &ppppplStack_650;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppppplVar8)[7])();
      __ZNSt3__16localeD1Ev(&ppppplStack_650);
      FUN_109242d18(plVar18,&ppppplStack_290,pppppplVar8);
      FUN_10945ac64(&ppppplStack_650,&ppppplStack_290,0x18);
      pppppplVar8 = &ppppplStack_650;
      FUN_10945ad38(pppppplVar8,&ppppplStack_290);
      lVar26 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
      lVar22 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
      lVar36 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
      uVar2 = *(uint *)((long)auStack_630 + (long)ppppplStack_650[-3]) & 5;
      if (uVar2 == 0) {
        lVar37 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
        lVar38 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
        lVar39 = func_0x00010945ad8c(&ppppplStack_650,&ppppplStack_290);
        ppppplVar10 = ppppplStack_350;
        uVar13 = *(uint *)((long)auStack_630 + (long)ppppplStack_650[-3]);
        plVar14 = (long *)0x68;
        __Znwm();
        bVar6 = (uVar13 & 5) != 0;
        if (bVar6) {
          lVar39 = 0;
          lVar38 = 0;
        }
        *plVar14 = 0;
        if (bVar6) {
          lVar37 = 0;
        }
        plVar14[1] = lVar26;
        plVar14[2] = lVar22;
        plVar14[3] = lVar36;
        plVar14[4] = lVar37;
        plVar14[5] = lVar38;
        plVar14[6] = lVar39;
        *(undefined4 *)(plVar14 + 7) = 0x80000000;
        *(undefined1 *)(plVar14 + 8) = 0;
        *(undefined1 *)(plVar14 + 9) = 0;
        plVar14[10] = 0;
        plVar14[0xb] = 0;
        *(undefined1 *)(plVar14 + 0xc) = 0;
        lVar26 = (long)(int)pppppplVar8;
        plStack_880 = plVar14;
        FUN_1094547a0(ppppplVar10,&plStack_880,lVar26);
        pppppplVar8 = &ppppplStack_1d0;
        alStack_678[0] = lVar26;
        FUN_109462af4(pppppplVar8,lVar26,alStack_678);
        pppppplVar8[3] = (long *****)(long)(int)ppppplVar10;
        plVar14 = plStack_880;
        plStack_880 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          __ZdlPv();
        }
      }
      ppppplStack_650 = (long *****)&PTR_SUB_1108a5a38;
      ppuStack_640 = &PTR_DAT_1108a5a60;
      ppuStack_5d0 = &PTR_DAT_1108a5a88;
      ppuStack_638 = &PTR_DAT_11088d7b0;
      if (lStack_5e8 < 0) {
        __ZdlPv(uStack_5f8);
      }
      ppuStack_638 = (undefined **)(puVar50 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_630);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppplStack_650,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&ppuStack_5d0);
      plVar14 = aplStack_860[0];
    } while (uVar2 == 0);
    aplStack_860[0] = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if ((long)ppppplStack_280 < 0) {
      __ZdlPv(ppppplStack_290);
    }
LAB_10945b7a4:
    pppplStack_7b0 = (long ****)ppppplStack_350;
    ppppplStack_350 = (long *****)0x0;
    pppplStack_7a0 = (long ****)0x0;
    lStack_7a8 = 0;
    lStack_790 = 0;
    plStack_798 = (long *)0x0;
    fStack_788 = ppppplStack_1b0._0_4_;
    FUN_109460178((ulong)&pppplStack_7b0 | 8,uStack_1c8);
    if (ppuStack_1c0 != (undefined **)0x0) {
      ppuVar20 = ppuStack_1c0;
      ppppplVar10 = (long *****)pppplStack_7a0;
      do {
        ppppplVar17 = (long *****)ppuVar20[2];
        if (ppppplVar10 != (long *****)0x0) {
          uVar16 = (long)ppppplVar10 - 1;
          if (((ulong)ppppplVar10 & uVar16) == 0) {
            unaff_x27 = (undefined **)((ulong)ppppplVar17 & uVar16);
          }
          else {
            unaff_x27 = (undefined **)ppppplVar17;
            if (ppppplVar10 <= ppppplVar17) {
              uVar15 = 0;
              if (ppppplVar10 != (long *****)0x0) {
                uVar15 = (ulong)ppppplVar17 / (ulong)ppppplVar10;
              }
              unaff_x27 = (undefined **)((long)ppppplVar17 - uVar15 * (long)ppppplVar10);
            }
          }
          plVar18 = *(long **)(lStack_7a8 + (long)unaff_x27 * 8);
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_10945b878;
                ppppplVar19 = (long *****)plVar18[1];
                if (ppppplVar19 != ppppplVar17) break;
                if ((long *****)plVar18[2] == ppppplVar17) goto LAB_10945b988;
              }
              if (((ulong)ppppplVar10 & uVar16) == 0) {
                ppppplVar19 = (long *****)((ulong)ppppplVar19 & uVar16);
              }
              else if (ppppplVar10 <= ppppplVar19) {
                uVar15 = 0;
                if (ppppplVar10 != (long *****)0x0) {
                  uVar15 = (ulong)ppppplVar19 / (ulong)ppppplVar10;
                }
                ppppplVar19 = (long *****)((long)ppppplVar19 - uVar15 * (long)ppppplVar10);
              }
            } while (ppppplVar19 == (long *****)unaff_x27);
          }
        }
LAB_10945b878:
        plVar18 = (long *)0x20;
        __Znwm();
        *plVar18 = 0;
        plVar18[1] = (long)ppppplVar17;
        puVar50 = ppuVar20[2];
        plVar18[3] = (long)ppuVar20[3];
        plVar18[2] = (long)puVar50;
        if ((ppppplVar10 == (long *****)0x0) ||
           (fStack_788 * (float)ppppplVar10 < (float)(lStack_790 + 1))) {
          uVar16 = 1;
          if ((long *****)0x2 < ppppplVar10) {
            uVar16 = (ulong)(((ulong)ppppplVar10 & (long)ppppplVar10 - 1U) != 0);
          }
          uVar16 = uVar16 | (long)ppppplVar10 << 1;
          uVar15 = (ulong)((float)(lStack_790 + 1) / fStack_788);
          if (uVar16 <= uVar15) {
            uVar16 = uVar15;
          }
          FUN_109460178((ulong)&pppplStack_7b0 | 8,uVar16);
          ppppplVar10 = (long *****)pppplStack_7a0;
          if (((ulong)pppplStack_7a0 & (long)pppplStack_7a0 - 1U) == 0) {
            unaff_x27 = (undefined **)((long)pppplStack_7a0 - 1U & (ulong)ppppplVar17);
          }
          else {
            unaff_x27 = (undefined **)ppppplVar17;
            if (pppplStack_7a0 <= ppppplVar17) {
              uVar16 = 0;
              if ((long *****)pppplStack_7a0 != (long *****)0x0) {
                uVar16 = (ulong)ppppplVar17 / (ulong)pppplStack_7a0;
              }
              unaff_x27 = (undefined **)((long)ppppplVar17 - uVar16 * (long)pppplStack_7a0);
            }
          }
        }
        plVar14 = *(long **)(lStack_7a8 + (long)unaff_x27 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar18 = (long)plStack_798;
          *(long ***)(lStack_7a8 + (long)unaff_x27 * 8) = &plStack_798;
          plStack_798 = plVar18;
          if (*plVar18 != 0) {
            ppppplVar17 = *(long ******)(*plVar18 + 8);
            if (((ulong)ppppplVar10 & (long)ppppplVar10 - 1U) == 0) {
              ppppplVar17 = (long *****)((ulong)ppppplVar17 & (long)ppppplVar10 - 1U);
            }
            else if (ppppplVar10 <= ppppplVar17) {
              uVar16 = 0;
              if (ppppplVar10 != (long *****)0x0) {
                uVar16 = (ulong)ppppplVar17 / (ulong)ppppplVar10;
              }
              ppppplVar17 = (long *****)((long)ppppplVar17 - uVar16 * (long)ppppplVar10);
            }
            plVar14 = (long *)(lStack_7a8 + (long)ppppplVar17 * 8);
            goto LAB_10945b978;
          }
        }
        else {
          *plVar18 = *plVar14;
LAB_10945b978:
          *plVar14 = (long)plVar18;
        }
        lStack_790 = lStack_790 + 1;
LAB_10945b988:
        ppuVar20 = (undefined **)*ppuVar20;
      } while (ppuVar20 != (undefined **)0x0);
    }
  }
  else {
    (*(code *)(*ppppplStack_750)[4])(aplStack_860);
    uStack_648 = 0;
    ppppplStack_650 = (long *****)&PTR_FUN_110aeff78;
    auStack_630[0] = 0;
    auStack_630[1] = 0;
    ppuStack_640 = (undefined **)0x0;
    ppuStack_638 = (undefined **)0x0;
    uStack_628 = uStack_628 & 0xffffffff00000000;
    if (*(int *)((long)aplStack_860[0] + *(long *)(*aplStack_860[0] + -0x18) + 0x20) == 0) {
      uVar16 = 0;
      func_0x00010b4d15d4();
      if ((uVar16 & 1) != 0) {
        pppuVar21 = &ppuStack_640;
        if (((ulong)ppuStack_640 & 1) != 0) {
          pppuVar21 = (undefined ***)((long)ppuStack_640 + 7);
        }
        if ((int)ppuStack_638 != 0) {
          lVar26 = (long)(int)ppuStack_638 << 3;
          do {
            ppppplVar10 = ppppplStack_350;
            ppuVar27 = *pppuVar21;
            ppuVar20 = &PTR_PTR_1132cf2d8;
            if ((undefined **)ppuVar27[3] != (undefined **)0x0) {
              ppuVar20 = (undefined **)ppuVar27[3];
            }
            if ((*(byte *)(ppuVar27 + 2) >> 1 & 1) == 0) {
              ppplStack_918 = (long ***)0x0;
              ppplStack_920 = (long ***)0x0;
              pppplVar49 = (long ****)0x0;
            }
            else {
              uVar40 = *(undefined8 *)(ppuVar27[4] + 0x10);
              ppplStack_920 = (long ***)(double)(float)uVar40;
              ppplStack_918 = (long ***)(double)(float)((ulong)uVar40 >> 0x20);
              pppplVar49 = (long ****)(double)*(float *)(ppuVar27[4] + 0x18);
            }
            puVar50 = ppuVar20[2];
            fVar30 = *(float *)(ppuVar20 + 3);
            ppppplVar17 = (long *****)0x68;
            __Znwm();
            *ppppplVar17 = (long ****)0x0;
            ppppplVar17[2] = (long ****)(double)(float)((ulong)puVar50 >> 0x20);
            ppppplVar17[1] = (long ****)(double)SUB84(puVar50,0);
            ppppplVar17[3] = (long ****)(double)fVar30;
            ppppplVar17[5] = (long ****)ppplStack_918;
            ppppplVar17[4] = (long ****)ppplStack_920;
            ppppplVar17[6] = pppplVar49;
            *(undefined4 *)(ppppplVar17 + 7) = 0x80000000;
            *(undefined1 *)(ppppplVar17 + 8) = 0;
            *(undefined1 *)(ppppplVar17 + 9) = 0;
            ppppplVar17[10] = (long ****)0x0;
            ppppplVar17[0xb] = (long ****)0x0;
            *(undefined1 *)(ppppplVar17 + 0xc) = 0;
            ppppplStack_290 = ppppplVar17;
            FUN_1094547a0(ppppplVar10,&ppppplStack_290,ppuVar27[5]);
            plStack_880 = (long *)ppuVar27[5];
            pppppplVar8 = &ppppplStack_1d0;
            FUN_109462af4(pppppplVar8,plStack_880,&plStack_880);
            pppppplVar8[3] = (long *****)(long)(int)ppppplVar10;
            ppppplVar10 = ppppplStack_290;
            ppppplStack_290 = (long *****)0x0;
            if (ppppplVar10 != (long *****)0x0) {
              __ZdlPv();
            }
            pppuVar21 = pppuVar21 + 1;
            lVar26 = lVar26 + -8;
          } while (lVar26 != 0);
        }
        FUN_109342dfc(&ppppplStack_650);
        plVar18 = aplStack_860[0];
        aplStack_860[0] = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        goto LAB_10945b7a4;
      }
      FUN_10937e740(&ppppplStack_290,&UNK_10f56de0d);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56ddc9,0x353,&ppppplStack_290);
    }
    else {
      FUN_10937e740(&ppppplStack_290,&UNK_10f56dde0);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56ddc9,0x34f,&ppppplStack_290);
    }
    if ((long)ppppplStack_280 < 0) {
      __ZdlPv(ppppplStack_290);
    }
    lStack_790 = 0;
    lStack_7a8 = 0;
    pppplStack_7b0 = (long ****)0x0;
    plStack_798 = (long *)0x0;
    pppplStack_7a0 = (long ****)0x0;
    fStack_788 = 1.0;
    FUN_109342dfc(&ppppplStack_650);
    plVar18 = aplStack_860[0];
    aplStack_860[0] = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
  }
  ppppplVar10 = ppppplStack_750;
  ppppplStack_750 = (long *****)0x0;
  if ((long ******)ppppplVar10 != (long ******)0x0) {
    (*(code *)(*ppppplVar10)[1])();
  }
  ppppplVar10 = ppppplStack_350;
  puVar50 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
  ppppplStack_350 = (long *****)0x0;
  if (ppppplVar10 != (long *****)0x0) {
    FUN_1094605a0(&ppppplStack_350);
  }
  FUN_109460348(&ppppplStack_1d0);
  func_0x000107c31940(&ppppplStack_650,&UNK_10f56deed);
  (**(code **)(*param_2 + 0x10))(&plStack_7b8,param_2,&ppppplStack_650);
  if ((long)ppuStack_640 < 0) {
    __ZdlPv(ppppplStack_650);
  }
  plVar18 = plStack_7b8;
  (**(code **)(*plStack_7b8 + 0x28))();
  if ((int)plVar18 == 0) {
    uVar40 = 0x3ff199999999999a;
  }
  else {
    (**(code **)(*plStack_7b8 + 0x20))(&ppppplStack_1d0);
    ppppplVar10 = ppppplStack_1d0;
    __ZNKSt3__18ios_base6getlocEv
              (&ppppplStack_650,(long)ppppplStack_1d0 + (long)(*ppppplStack_1d0)[-3]);
    pppppplVar8 = &ppppplStack_650;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppppplVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppppplStack_650);
    FUN_109242d18(ppppplVar10,&pppplStack_768,pppppplVar8);
    uVar40 = func_0x00010945ad8c(ppppplStack_1d0,&pppplStack_768);
    ppppplVar10 = ppppplStack_1d0;
    ppppplStack_1d0 = (long *****)0x0;
    if (ppppplVar10 != (long *****)0x0) {
      (*(code *)(*ppppplVar10)[1])();
    }
  }
  uStack_92c = 0;
  auVar42 = NEON_fmov(0x403e000000000000,8);
  auVar46 = NEON_fmov(0x3fe0000000000000,8);
  auVar43 = NEON_fmov(0xbfe0000000000000,8);
LAB_10945bbbc:
  func_0x000107c31940(&ppppplStack_650,&UNK_10f56de55);
  FUN_10945addc(&ppppplStack_7d0,&ppppplStack_650,uStack_92c);
  if ((long)ppuStack_640 < 0) {
    __ZdlPv(ppppplStack_650);
  }
  (**(code **)(*param_2 + 0x10))(&plStack_7d8,param_2,&ppppplStack_7d0);
  plVar18 = plStack_7d8;
  (**(code **)(*plStack_7d8 + 0x28))();
  if (((ulong)plVar18 & 1) == 0) goto LAB_10945d190;
  (**(code **)(*plStack_7d8 + 0x20))(&plStack_7e0);
  plVar18 = plStack_7e0;
  __ZNKSt3__18ios_base6getlocEv
            (&ppppplStack_650,(long)plStack_7e0 + *(long *)(*plStack_7e0 + -0x18));
  pppppplVar8 = &ppppplStack_650;
  __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (*(code *)(*pppppplVar8)[7])();
  __ZNSt3__16localeD1Ev(&ppppplStack_650);
  FUN_109242d18(plVar18,&pppplStack_768,pppppplVar8);
  lVar26 = 0;
  pplVar23 = aplStack_860;
  do {
    lVar22 = 4;
    pplVar29 = pplVar23;
    do {
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(plVar18,pplVar29);
      plVar14 = plStack_7e0;
      pplVar29 = pplVar29 + 4;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar26 = lVar26 + 1;
    pplVar23 = pplVar23 + 1;
  } while (lVar26 != 4);
  if ((*(byte *)((long)plVar18 + *(long *)(*plVar18 + -0x18) + 0x20) & 5) != 0) goto LAB_10945d178;
  plStack_7e0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar18 = plStack_7d8;
  plStack_7d8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plStack_880 = (long *)0x0;
  dStack_878 = 0.0;
  dStack_870 = 0.0;
  dStack_868 = 1.0;
  func_0x000107c31940(&ppppplStack_1d0,&UNK_10f56de64);
  FUN_10945addc(&ppppplStack_650,&ppppplStack_1d0,uStack_92c);
  (**(code **)(*param_2 + 0x10))(&plStack_888,param_2,&ppppplStack_650);
  if ((long)ppuStack_640 < 0) {
    __ZdlPv(ppppplStack_650);
  }
  if ((long)ppuStack_1c0 < 0) {
    __ZdlPv(ppppplStack_1d0);
  }
  plVar18 = plStack_888;
  (**(code **)(*plStack_888 + 0x28))();
  if ((int)plVar18 == 0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*plStack_888 + 0x20))(&ppppplStack_1d0);
    ppppplVar10 = ppppplStack_1d0;
    __ZNKSt3__18ios_base6getlocEv
              (&ppppplStack_650,(long)ppppplStack_1d0 + (long)(*ppppplStack_1d0)[-3]);
    pppppplVar8 = &ppppplStack_650;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppppplVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppppplStack_650);
    FUN_109242d18(ppppplVar10,&pppplStack_768,pppppplVar8);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&plStack_880);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
    ppppplVar17 = ppppplStack_1d0;
    bVar6 = (*(uint *)((long)ppppplVar10 + (long)((*ppppplVar10)[-3] + 4)) & 5) == 0;
    ppppplStack_1d0 = (long *****)0x0;
    if (ppppplVar17 != (long *****)0x0) {
      (*(code *)(*ppppplVar17)[1])();
    }
  }
  plVar18 = plStack_888;
  plStack_888 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  if (((ulong)ppppplVar7 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_1d0,&UNK_10f56de71);
    FUN_10945addc(&ppppplStack_650,&ppppplStack_1d0,uStack_92c);
    if ((long)ppuStack_7c0 < 0) {
      __ZdlPv(ppppplStack_7d0);
    }
    uStack_7c8 = uStack_648;
    ppppplStack_7d0 = ppppplStack_650;
    ppuStack_7c0 = ppuStack_640;
    ppuStack_640 = (undefined **)((ulong)ppuStack_640 & 0xffffffffffffff);
    ppppplStack_650 = (long *****)((ulong)ppppplStack_650 & 0xffffffffffffff00);
    if ((long)ppuStack_1c0 < 0) {
      __ZdlPv(ppppplStack_1d0);
    }
    (**(code **)(*param_2 + 0x10))(&ppppplStack_1d0,param_2,&ppppplStack_7d0);
    ppppplVar10 = ppppplStack_1d0;
    (*(code *)(*ppppplStack_1d0)[5])();
    if (((ulong)ppppplVar10 & 1) == 0) {
      ppppplStack_290 = ppppplStack_7d0;
      if (-1 < (long)ppuStack_7c0) {
        ppppplStack_290 = (long *****)&ppppplStack_7d0;
      }
      FUN_1093780e0(&ppppplStack_650,&UNK_10f56df00,&ppppplStack_290);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56deb4,0x457,&ppppplStack_650);
      if ((long)ppuStack_640 < 0) {
        __ZdlPv(ppppplStack_650);
      }
      ppppplVar7 = ppppplStack_1d0;
      ppppplStack_1d0 = (long *****)0x0;
      if (ppppplVar7 != (long *****)0x0) {
        (*(code *)(*ppppplVar7)[1])();
      }
LAB_10945d160:
      plVar18 = plStack_888;
      plStack_888 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
LAB_10945d178:
      plVar18 = plStack_7e0;
      plStack_7e0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
LAB_10945d190:
      plVar18 = plStack_7d8;
      plStack_7d8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      if ((long)ppuStack_7c0 < 0) {
        __ZdlPv(ppppplStack_7d0);
      }
      pppplVar49 = pppplStack_7b0;
      plVar18 = plStack_7b8;
      pppplStack_7b0 = (long ****)0x0;
      *param_1 = pppplVar49;
      plStack_7b8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      FUN_109460348((ulong)&pppplStack_7b0 | 8);
      pppplVar49 = pppplStack_7b0;
      pppplStack_7b0 = (long ****)0x0;
      if (pppplVar49 != (long ****)0x0) {
        FUN_1094605a0(&pppplStack_7b0);
      }
      _free(uStack_368);
      plVar18 = plStack_778;
      plStack_778 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
LAB_10945d220:
      ppppplVar7 = (long *****)pppplStack_770;
      pppplStack_770 = (long ****)0x0;
      if (ppppplVar7 != (long *****)0x0) {
        (*(code *)(*ppppplVar7)[1])();
      }
      if (lStack_758 < 0) {
        ppppplVar7 = (long *****)pppplStack_768;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
        return;
      }
      ___stack_chk_fail();
      if ((long)ppppplStack_280 < 0) {
        __ZdlPv(ppppplStack_290);
      }
      FUN_109342dfc(&ppppplStack_650);
      plVar18 = aplStack_860[0];
      aplStack_860[0] = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      ppppplVar10 = ppppplStack_750;
      ppppplStack_750 = (long *****)0x0;
      if ((long ******)ppppplVar10 != (long ******)0x0) {
        (*(code *)(*ppppplVar10)[1])();
      }
      pppppplVar8 = (long ******)ppppplStack_350;
      ppppplStack_350 = (long *****)0x0;
      if (pppppplVar8 != (long ******)0x0) {
        FUN_1094605a0(&ppppplStack_350);
      }
      FUN_109460348(&ppppplStack_1d0);
      _free(uStack_368);
      plVar18 = plStack_778;
      plStack_778 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      pppplVar49 = pppplStack_770;
      pppplStack_770 = (long ****)0x0;
      if (pppplVar49 != (long ****)0x0) {
        (*(code *)(*pppplVar49)[1])();
      }
      if (lStack_758 < 0) {
        __ZdlPv(pppplStack_768);
      }
      __Unwind_Resume(ppppplVar7);
      FUN_10923b090();
      ppppplVar7 = pppppplVar8[1];
      if (-1 < (char)*(byte *)((long)pppppplVar8 + 0x17)) {
        ppppplVar7 = (long *****)(ulong)*(byte *)((long)pppppplVar8 + 0x17);
      }
      if (ppppplVar7 == (long *****)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm_110346750
      )(pppppplVar8,0);
      return;
    }
    (*(code *)(*ppppplStack_1d0)[4])(&ppppplStack_290);
    ppppplVar10 = ppppplStack_290;
    iVar24 = 3;
    do {
      __ZNKSt3__18ios_base6getlocEv(&ppppplStack_650,(long)ppppplVar10 + (long)(*ppppplVar10)[-3]);
      pppppplVar8 = &ppppplStack_650;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppppplVar8)[7])();
      __ZNSt3__16localeD1Ev(&ppppplStack_650);
      FUN_109242d18(ppppplVar10,&pppplStack_768,pppppplVar8);
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(ppppplVar10,&ppppplStack_750);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
    uVar2 = *(uint *)((long)ppppplVar10 + (long)((*ppppplVar10)[-3] + 4)) & 5;
    if (uVar2 == 0) {
      iVar24 = (int)ppppplStack_750;
      dVar34 = (double)_atan2((double)(int)ppppplStack_750,
                              (double)(ppppplStack_8b0._0_4_ + ppppplStack_8b0._0_4_));
      iVar25 = (int)alStack_678[0];
      dVar35 = (double)_atan2((double)(int)alStack_678[0],
                              (double)(ppppplStack_8d0._0_4_ + ppppplStack_8d0._0_4_));
      dVar47 = (double)fStack_8e8;
      dVar48 = (double)fStack_900;
      uVar28 = CONCAT44(iVar25,iVar24);
      dVar44 = (double)iVar24 / 2.0;
      dVar45 = (double)iVar25 / 2.0;
      dVar34 = ((dVar34 + dVar34) / 0.017453292519943295) * 0.017453292519943295;
      dVar35 = ((dVar35 + dVar35) / 0.017453292519943295) * 0.017453292519943295;
      uVar13 = (uint)(fStack_8e8 != 0.0);
      if (fStack_900 != 0.0) {
        uVar13 = 1;
      }
      dVar41 = (double)_tan(dVar34 * 0.5);
      dStack_398 = (double)_tan(dVar35 * 0.5);
      dStack_398 = dVar45 / dStack_398;
      auStack_3c0[0] = uVar28;
      dStack_3b0 = dVar44;
      dStack_3a8 = dVar45;
      dStack_3a0 = dVar44 / dVar41;
      dStack_390 = dVar34;
      dStack_388 = dVar35;
      dStack_380 = dVar47;
      dStack_378 = dVar48;
      uStack_370 = uVar13;
      if (lStack_360 != 0) {
        FUN_10942c088(&uStack_368,0,1);
      }
    }
    else {
      ppppplStack_350 = ppppplStack_7d0;
      if (-1 < (long)ppuStack_7c0) {
        ppppplStack_350 = (long *****)&ppppplStack_7d0;
      }
      FUN_1093780e0(&ppppplStack_650,&UNK_10f56df32,&ppppplStack_350);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56deb4,0x466,&ppppplStack_650);
      if ((long)ppuStack_640 < 0) {
        __ZdlPv(ppppplStack_650);
      }
    }
    ppppplVar10 = ppppplStack_290;
    ppppplStack_290 = (long *****)0x0;
    if ((long ******)ppppplVar10 != (long ******)0x0) {
      (*(code *)(*ppppplVar10)[1])();
    }
    ppppplVar10 = ppppplStack_1d0;
    ppppplStack_1d0 = (long *****)0x0;
    if (ppppplVar10 != (long *****)0x0) {
      (*(code *)(*ppppplVar10)[1])();
    }
    if (uVar2 != 0) goto LAB_10945d160;
  }
  ppppplStack_650 = (long *****)0x0;
  ppuStack_640 = (undefined **)0x0;
  lStack_5e8 = 0;
  uStack_5e0 = 0;
  uStack_628 = 0;
  auStack_630[0] = 0;
  auStack_630[1] = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5f0 = 0;
  uStack_5c8 = 0;
  uStack_5c0 = 0;
  ppuStack_5d0 = (undefined **)0x0;
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_5b0 = 0;
  uStack_5b8 = 0x3ff0000000000000;
  uStack_590 = 0x3ff0000000000000;
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_568 = 0;
  uStack_570 = 0x3ff0000000000000;
  uStack_550 = 0x3ff0000000000000;
  plStack_538 = (long *)0x0;
  uStack_540 = 0;
  dStack_528 = 0.0;
  plStack_530 = (long *)0x0;
  dStack_520 = 0.0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_510 = 0;
  dStack_518 = 1.0;
  uStack_4f8 = 0x3ff0000000000000;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4f0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4d0 = 0x3ff0000000000000;
  uStack_4b0 = 0x3ff0000000000000;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_4a8 = 0;
  uStack_490 = 0x3ff0000000000000;
  uStack_480 = 0;
  lStack_470 = 0;
  lStack_478 = 0;
  lStack_460 = 0;
  uStack_468 = 0;
  uStack_450 = 0;
  lStack_458 = 0;
  lStack_440 = 0;
  lStack_448 = 0;
  uStack_438 = 0;
  ppppplStack_408 = (long *****)0x403e000000000000;
  ppppplStack_400 = (long *****)0x403e000000000000;
  cStack_3f8 = '\0';
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  cStack_3d0 = '\0';
  func_0x000107c31940(&ppppplStack_290,&UNK_10f56de80);
  FUN_10945addc(&ppppplStack_1d0,&ppppplStack_290,uStack_92c);
  if ((long)ppuStack_7c0 < 0) {
    __ZdlPv(ppppplStack_7d0);
  }
  uStack_7c8 = uStack_1c8;
  ppppplStack_7d0 = ppppplStack_1d0;
  ppuStack_7c0 = ppuStack_1c0;
  ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff);
  ppppplStack_1d0 = (long *****)((ulong)ppppplStack_1d0 & 0xffffffffffffff00);
  if ((long)ppppplStack_280 < 0) {
    __ZdlPv(ppppplStack_290);
  }
  (**(code **)(*param_2 + 0x10))(&plStack_890,param_2,&ppppplStack_7d0);
  plVar18 = plStack_890;
  (**(code **)(*plStack_890 + 0x28))();
  if ((int)plVar18 != 0) {
    (**(code **)(*plStack_890 + 0x20))(&ppppplStack_290);
    ppppplVar10 = ppppplStack_290;
    __ZNKSt3__18ios_base6getlocEv
              (&ppppplStack_1d0,(long)ppppplStack_290 + (long)(*ppppplStack_290)[-3]);
    pppppplVar8 = &ppppplStack_1d0;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppppplVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppppplStack_1d0);
    FUN_109242d18(ppppplVar10,&pppplStack_768,pppppplVar8);
    cStack_1a8 = '\0';
    ppppplStack_1b8 = (long *****)auVar42._0_8_;
    ppppplStack_1b0 = (long *****)auVar42._8_8_;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&ppppplStack_1d0);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&uStack_1c8);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&ppuStack_1c0);
    if ((*(byte *)((long)ppppplVar10 + (long)((*ppppplVar10)[-3] + 4)) & 5) == 0) {
      cStack_1a8 = '\x01';
LAB_10945c374:
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&ppppplStack_350);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(ppppplVar10,&ppppplStack_750);
      if ((*(byte *)((long)ppppplVar10 + (long)((*ppppplVar10)[-3] + 4)) & 5) == 0) {
        ppppplStack_1b8 = ppppplStack_350;
        ppppplStack_1b0 = ppppplStack_750;
      }
      uStack_418 = uStack_1c8;
      ppppplStack_420 = ppppplStack_1d0;
      ppppplStack_408 = ppppplStack_1b8;
      ppuStack_410 = ppuStack_1c0;
      cStack_3f8 = cStack_1a8;
      ppppplStack_400 = ppppplStack_1b0;
      uStack_3f0 = uStack_1a0;
    }
    else if (cStack_1a8 == '\x01') goto LAB_10945c374;
    ppppplVar10 = ppppplStack_290;
    ppppplStack_290 = (long *****)0x0;
    if ((long ******)ppppplVar10 != (long ******)0x0) {
      (*(code *)(*ppppplVar10)[1])();
    }
  }
  plVar18 = plStack_890;
  plStack_890 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  ppppplStack_8b0 = (long *****)0x0;
  ppppplStack_8a8 = (long *****)0x0;
  ppppplStack_8a0 = (long *****)0x0;
  func_0x000107c31940(&ppppplStack_290,&UNK_10f56df68);
  FUN_10945addc(&ppppplStack_1d0,&ppppplStack_290,uStack_92c);
  if ((long)ppuStack_7c0 < 0) {
    __ZdlPv(ppppplStack_7d0);
  }
  uStack_7c8 = uStack_1c8;
  ppppplStack_7d0 = ppppplStack_1d0;
  ppuStack_7c0 = ppuStack_1c0;
  ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff);
  ppppplStack_1d0 = (long *****)((ulong)ppppplStack_1d0 & 0xffffffffffffff00);
  if ((long)ppppplStack_280 < 0) {
    __ZdlPv(ppppplStack_290);
  }
  (**(code **)(*param_2 + 0x10))(&plStack_8b8,param_2,&ppppplStack_7d0);
  plVar18 = plStack_8b8;
  (**(code **)(*plStack_8b8 + 0x28))();
  if ((int)plVar18 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&ppppplStack_290,&DAT_10f62a9de,param_3);
    FUN_10945addc(&ppppplStack_1d0,&ppppplStack_290,uStack_92c);
    if ((long)ppuStack_7c0 < 0) {
      __ZdlPv(ppppplStack_7d0);
    }
    uStack_7c8 = uStack_1c8;
    ppppplStack_7d0 = ppppplStack_1d0;
    ppuStack_7c0 = ppuStack_1c0;
    ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff);
    ppppplStack_1d0 = (long *****)((ulong)ppppplStack_1d0 & 0xffffffffffffff00);
    if ((long)ppppplStack_280 < 0) {
      __ZdlPv(ppppplStack_290);
    }
    func_0x000107c31940(&fStack_900,&UNK_10f56df7a);
    FUN_10945addc(&fStack_8e8,&fStack_900,uStack_92c);
    ppppplStack_8d0 = (long *****)0x0;
    ppppplStack_8c8 = (long *****)0x0;
    ppppplStack_8c0 = (long *****)0x0;
    (**(code **)(*param_2 + 0x10))(&plStack_658,param_2,&fStack_8e8);
    plVar18 = plStack_658;
    (**(code **)(*plStack_658 + 0x28))();
    if (((ulong)plVar18 & 1) == 0) {
      ppppplStack_290 = (long *****)CONCAT44(uStack_8e4,fStack_8e8);
      if (-1 < cStack_8d1) {
        ppppplStack_290 = (long *****)&fStack_8e8;
      }
      FUN_1093780e0(&ppppplStack_1d0,&UNK_10f56dd5c,&ppppplStack_290);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dd3d,0x322,&ppppplStack_1d0);
      if ((long)ppuStack_1c0 < 0) {
        __ZdlPv(ppppplStack_1d0);
      }
    }
    else {
      (**(code **)(*plStack_658 + 0x20))(&plStack_660);
      plVar18 = plStack_660;
      alStack_678[1] = 0;
      alStack_678[0] = 0;
      alStack_678[2] = 0;
      __ZNKSt3__18ios_base6getlocEv
                (&ppppplStack_1d0,(long)plStack_660 + *(long *)(*plStack_660 + -0x18));
      pppppplVar8 = &ppppplStack_1d0;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppppplVar8)[7])();
      __ZNSt3__16localeD1Ev(&ppppplStack_1d0);
      FUN_109242d18(plVar18,alStack_678,pppppplVar8);
      while( true ) {
        __ZNKSt3__18ios_base6getlocEv(&ppppplStack_1d0,(long)plVar18 + *(long *)(*plVar18 + -0x18));
        pppppplVar8 = &ppppplStack_1d0;
        __ZNKSt3__16locale9use_facetERNS0_2idE(pppppplVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*pppppplVar8)[7])();
        __ZNSt3__16localeD1Ev(&ppppplStack_1d0);
        FUN_109242d18(plVar18,alStack_678,pppppplVar8);
        if ((*(byte *)((long)plVar18 + *(long *)(*plVar18 + -0x18) + 0x20) & 5) != 0) break;
        FUN_1093f2800(&ppppplStack_1d0,alStack_678,8);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppppplStack_1d0,&iStack_67c);
        uStack_6a0 = 0xbff0000000000000;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppppplStack_1d0,&uStack_680);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd();
        if ((*(byte *)((long)&ppppplStack_1b0 + (long)ppppplStack_1d0[-3]) & 5) != 0) {
          puVar50 = &UNK_10f56dd71;
LAB_10945d2a4:
          func_0x000105688514(puVar50);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10945d2ac);
          (*pcVar5)();
        }
        FUN_10945a99c(&ppppplStack_1d0);
        if ((*(byte *)((long)&ppppplStack_1b0 + (long)ppppplStack_1d0[-3]) >> 1 & 1) == 0) {
          puVar50 = &UNK_10f56dd95;
          goto LAB_10945d2a4;
        }
        ppppplStack_750 = ppppplStack_688;
        ppppplStack_748 = ppppplStack_690;
        lStack_730 = lStack_698;
        uStack_728 = uStack_680;
        uStack_720 = uStack_6a0;
        ppuStack_718 = (undefined **)0x4000000000000000;
        uStack_700 = 0x42ff0000;
        uStack_6f4 = 0;
        uStack_6f0 = 0;
        uStack_6fc = 0;
        uStack_6e4 = 0;
        uStack_6e0 = 0;
        uStack_6ec = 0;
        uStack_6e8 = 0;
        uStack_6d4 = 0;
        uStack_6dc = 0;
        uStack_6d8 = 0;
        lStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6cc = 0;
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        lStack_6c0 = (long)&uStack_6fc + 4;
        puStack_6b8 = &uStack_6b0;
        dStack_710 = (double)_ldexp(0x3ff0000000000000);
        dStack_708 = 1.0 / dStack_710;
        ppppplStack_740 =
             (long *****)(((double)ppppplStack_750 + auVar46._0_8_) * dStack_710 + auVar43._0_8_);
        dStack_738 = ((double)ppppplStack_748 + auVar46._8_8_) * dStack_710 + auVar43._8_8_;
        ppppplStack_348 = ppppplStack_748;
        ppppplStack_350 = ppppplStack_750;
        uStack_328 = CONCAT44(uStack_724,uStack_728);
        lStack_330 = lStack_730;
        uStack_268 = CONCAT44(uStack_724,uStack_728);
        ppuStack_318 = ppuStack_718;
        uStack_320 = uStack_720;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        lStack_1e0 = (long)iStack_67c;
        iStack_2a0 = iStack_67c;
        ppppplStack_288 = ppppplStack_748;
        ppppplStack_290 = ppppplStack_750;
        ppuStack_258 = ppuStack_718;
        uStack_260 = uStack_720;
        lStack_270 = lStack_730;
        uStack_240 = 0x42ff0000;
        lStack_208 = 0;
        uStack_20c = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_21c = 0;
        uStack_218 = 0;
        uStack_224 = 0;
        uStack_220 = 0;
        uStack_22c = 0;
        uStack_228 = 0;
        uStack_234 = 0;
        uStack_230 = 0;
        uStack_23c = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_300 = 0x42ff0000;
        lStack_2c8 = 0;
        uStack_2cc = 0;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        uStack_2dc = 0;
        uStack_2d8 = 0;
        uStack_2e4 = 0;
        uStack_2e0 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        uStack_2f4 = 0;
        uStack_2f0 = 0;
        uStack_2fc = 0;
        ppppplStack_340 = ppppplStack_740;
        dStack_338 = dStack_738;
        dStack_310 = dStack_710;
        dStack_308 = dStack_708;
        lStack_2c0 = (long)&uStack_2fc + 4;
        puStack_2b8 = &uStack_2b0;
        ppppplStack_280 = ppppplStack_740;
        dStack_278 = dStack_738;
        dStack_250 = dStack_710;
        dStack_248 = dStack_708;
        lStack_200 = (long)&uStack_23c + 4;
        puStack_1f8 = &uStack_1f0;
        if (ppppplStack_8c8 < ppppplStack_8c0) {
          FUN_109460068(ppppplStack_8c8,&ppppplStack_290);
          pppppplVar8 = (long ******)(ppppplStack_8c8 + 0x18);
        }
        else {
          pppppplVar8 = &ppppplStack_8d0;
          FUN_10945fdec(pppppplVar8,&ppppplStack_290);
        }
        ppppplStack_8c8 = (long *****)pppppplVar8;
        if (lStack_208 != 0) {
          piVar1 = (int *)(lStack_208 + 0x14);
          do {
            iVar24 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar24 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar24 + -1 == 0) {
            func_0x000109a848d4(&uStack_240);
          }
        }
        lStack_208 = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        uStack_230 = 0;
        uStack_22c = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        if (0 < (int)uStack_23c) {
          lVar26 = 0;
          do {
            *(undefined4 *)(lStack_200 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)uStack_23c);
        }
        if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
          _free(puStack_1f8[-1]);
        }
        if (lStack_2c8 != 0) {
          piVar1 = (int *)(lStack_2c8 + 0x14);
          do {
            iVar24 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar24 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar24 + -1 == 0) {
            func_0x000109a848d4(&uStack_300);
          }
        }
        lStack_2c8 = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0;
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        if (0 < (int)uStack_2fc) {
          lVar26 = 0;
          do {
            *(undefined4 *)(lStack_2c0 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)uStack_2fc);
        }
        if (puStack_2b8 != &uStack_2b0 && puStack_2b8 != (undefined8 *)0x0) {
          _free(puStack_2b8[-1]);
        }
        if (lStack_6c8 != 0) {
          piVar1 = (int *)(lStack_6c8 + 0x14);
          do {
            iVar24 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar24 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar24 + -1 == 0) {
            func_0x000109a848d4(&uStack_700);
          }
        }
        lStack_6c8 = 0;
        uStack_6e8 = 0;
        uStack_6e4 = 0;
        uStack_6f0 = 0;
        uStack_6ec = 0;
        uStack_6d8 = 0;
        uStack_6d4 = 0;
        uStack_6e0 = 0;
        uStack_6dc = 0;
        if (0 < (int)uStack_6fc) {
          lVar26 = 0;
          do {
            *(undefined4 *)(lStack_6c0 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)uStack_6fc);
        }
        if (puStack_6b8 != &uStack_6b0 && puStack_6b8 != (undefined8 *)0x0) {
          _free(puStack_6b8[-1]);
        }
        ppuStack_158 = &PTR_DAT_1108df740;
        ppppplStack_1d0 = (long *****)&PTR_DAT_1108df718;
        ppuStack_1c0 = &PTR_DAT_11088d7b0;
        if (uStack_170 < 0) {
          __ZdlPv(ppppplStack_180);
        }
        ppuStack_1c0 = (undefined **)(puVar50 + 0x10);
        __ZNSt3__16localeD1Ev(&ppppplStack_1b8);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppppplStack_1d0,&PTR_PTR_1108df758);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&ppuStack_158);
      }
      if (alStack_678[2] < 0) {
        __ZdlPv(alStack_678[0]);
      }
      plVar18 = plStack_660;
      plStack_660 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
    }
    plVar18 = plStack_658;
    plStack_658 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    FUN_10945fa3c(&ppppplStack_8b0);
    pppppplVar8 = (long ******)ppppplStack_8c8;
    ppppplStack_9a0 = ppppplStack_8d0;
    ppppplStack_8a8 = ppppplStack_8c8;
    ppppplStack_8b0 = ppppplStack_8d0;
    ppppplStack_8a0 = ppppplStack_8c0;
    ppppplStack_8c8 = (long *****)0x0;
    ppppplStack_8c0 = (long *****)0x0;
    ppppplStack_8d0 = (long *****)0x0;
    FUN_10945fb40(&ppppplStack_8d0);
    if (cStack_8d1 < '\0') {
      __ZdlPv(CONCAT44(uStack_8e4,fStack_8e8));
    }
    if (cStack_8e9 < '\0') {
      __ZdlPv(CONCAT44(uStack_8fc,fStack_900));
    }
  }
  else {
    (**(code **)(*plStack_8b8 + 0x20))(&ppppplStack_750);
    uStack_1c8 = 0;
    ppppplStack_1d0 = (long *****)&PTR_FUN_110af02a8;
    ppppplStack_1b8 = (long *****)0x0;
    ppppplStack_1b0 = (long *****)0x0;
    ppuStack_1c0 = (undefined **)0x0;
    if (*(int *)((long)ppppplStack_750 + (long)((*ppppplStack_750)[-3] + 4)) == 0) {
      uVar16 = 0;
      func_0x00010b4d15d4();
      if ((uVar16 & 1) == 0) {
        FUN_10937e740(&ppppplStack_290,&UNK_10f56dc96);
        FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc55,0x305,&ppppplStack_290);
        goto LAB_10945cc34;
      }
      pppppplVar8 = (long ******)&PTR_PTR_1132d94b8;
      if ((long ******)ppppplStack_1b8 != (long ******)0x0) {
        pppppplVar8 = (long ******)ppppplStack_1b8;
      }
      if (*(int *)(pppppplVar8 + 4) < 1) {
        FUN_10937e740(&ppppplStack_290,&UNK_10f56dcd2);
        FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc55,0x309,&ppppplStack_290);
        goto LAB_10945cc34;
      }
      pppppplVar8 = (long ******)&PTR_PTR_1132d9460;
      if ((long ******)ppppplStack_1b0 != (long ******)0x0) {
        pppppplVar8 = (long ******)ppppplStack_1b0;
      }
      if (*(int *)(pppppplVar8 + 2) == 3) {
        FUN_1094586bc(0x3ff0000000000000,&ppppplStack_350,&ppppplStack_1d0);
      }
      else {
        if (*(int *)(pppppplVar8 + 2) != 0) {
          FUN_10937e740(&ppppplStack_290,&UNK_10f56dd1d);
          FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc55,0x317,&ppppplStack_290);
          goto LAB_10945cc34;
        }
        FUN_109458098(0x3ff0000000000000,&ppppplStack_350,&ppppplStack_1d0);
      }
    }
    else {
      FUN_10937e740(&ppppplStack_290,&UNK_10f56dc66);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc55,0x301,&ppppplStack_290);
LAB_10945cc34:
      if ((long)ppppplStack_280 < 0) {
        __ZdlPv(ppppplStack_290);
      }
      ppppplStack_348 = (long *****)0x0;
      ppppplStack_350 = (long *****)0x0;
      ppppplStack_340 = (long *****)0x0;
    }
    FUN_1093458c0(&ppppplStack_1d0);
    FUN_10945fa3c(&ppppplStack_8b0);
    pppppplVar8 = (long ******)ppppplStack_348;
    ppppplStack_9a0 = ppppplStack_350;
    ppppplStack_8a8 = ppppplStack_348;
    ppppplStack_8b0 = ppppplStack_350;
    ppppplStack_8a0 = ppppplStack_340;
    ppppplStack_340 = (long *****)0x0;
    ppppplStack_350 = (long *****)0x0;
    ppppplStack_348 = (long *****)0x0;
    FUN_10945fb40(&ppppplStack_350);
    ppppplVar10 = ppppplStack_750;
    ppppplStack_750 = (long *****)0x0;
    if ((long ******)ppppplVar10 != (long ******)0x0) {
      (*(code *)(*ppppplVar10)[1])();
    }
  }
  ppppplStack_650 = (long *****)(double)uStack_92c;
  FUN_109457fd4(&ppppplStack_650,auStack_3c0);
  dVar34 = (double)plStack_880 * (double)plStack_880 + dStack_870 * dStack_870 +
           dStack_878 * dStack_878 + dStack_868 * dStack_868;
  plStack_530 = plStack_880;
  dStack_528 = dStack_878;
  dStack_520 = dStack_870;
  dStack_518 = dStack_868;
  if (0.0 < dVar34) {
    dVar34 = SQRT(dVar34);
    plStack_530 = (long *)((double)plStack_880 / dVar34);
    dStack_528 = dStack_878 / dVar34;
    dStack_520 = dStack_870 / dVar34;
    dStack_518 = dStack_868 / dVar34;
  }
  uStack_3e8 = CONCAT11(uStack_3e8._1_1_,bVar6);
  FUN_10937fc48(&ppppplStack_1d0,aplStack_860);
  func_0x00010937fbc4(&ppppplStack_290,&ppppplStack_1d0);
  uStack_168 = uStack_268;
  uStack_170 = lStack_270;
  ppuStack_158 = ppuStack_258;
  uStack_160 = uStack_260;
  dStack_150 = dStack_250;
  ppppplStack_188 = ppppplStack_288;
  ppppplStack_190 = ppppplStack_290;
  dStack_178 = dStack_278;
  ppppplStack_180 = ppppplStack_280;
  puVar11 = (undefined4 *)0x470;
  __Znwm();
  FUN_1094607b0(uVar40);
  *puVar11 = 4;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppplStack_290,&DAT_10f62a9de,param_3);
  FUN_10945addc(&ppppplStack_1d0,&ppppplStack_290,uStack_92c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puVar11 + 0x100,&ppppplStack_1d0);
  if ((long)ppuStack_1c0 < 0) {
    __ZdlPv(ppppplStack_1d0);
  }
  if ((long)ppppplStack_280 < 0) {
    __ZdlPv(ppppplStack_290);
  }
  if ((long ******)ppppplStack_9a0 != pppppplVar8) {
    do {
      if ((long *****)pppplStack_7a0 != (long *****)0x0) {
        ppppplVar10 = (long *****)ppppplStack_9a0[0x16];
        uVar16 = (long)pppplStack_7a0 - 1;
        if (((ulong)pppplStack_7a0 & uVar16) == 0) {
          ppppplVar17 = (long *****)(uVar16 & (ulong)ppppplVar10);
        }
        else {
          ppppplVar17 = ppppplVar10;
          if (pppplStack_7a0 <= ppppplVar10) {
            uVar15 = 0;
            if ((long *****)pppplStack_7a0 != (long *****)0x0) {
              uVar15 = (ulong)ppppplVar10 / (ulong)pppplStack_7a0;
            }
            ppppplVar17 = (long *****)((long)ppppplVar10 - uVar15 * (long)pppplStack_7a0);
          }
        }
        plVar18 = *(long **)(lStack_7a8 + (long)ppppplVar17 * 8);
        if (plVar18 != (long *)0x0) {
LAB_10945cdf8:
          while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
            ppppplVar19 = (long *****)plVar18[1];
            if (ppppplVar19 != ppppplVar10) goto LAB_10945ce1c;
            if ((long *****)plVar18[2] == ppppplVar10) {
              ppplVar12 = (long ***)pppplStack_7b0[4][plVar18[3]];
              if ((((double)ppplVar12[4] == 0.0) && ((double)ppplVar12[5] == 0.0)) &&
                 ((double)ppplVar12[6] == 0.0)) {
                dVar34 = *(double *)(puVar11 + 0xe0);
                dVar35 = *(double *)(puVar11 + 0xe6);
                dVar44 = *(double *)(puVar11 + 0xec);
                dVar45 = *(double *)(puVar11 + 0xe4);
                dVar47 = *(double *)(puVar11 + 0xea);
                dVar48 = *(double *)(puVar11 + 0xf0);
                ppplVar12[5] = (long **)((*(double *)(puVar11 + 0xe2) * 0.0 +
                                         *(double *)(puVar11 + 0xe8) * 0.0) -
                                        *(double *)(puVar11 + 0xee));
                ppplVar12[4] = (long **)((dVar34 * 0.0 + dVar35 * 0.0) - dVar44);
                ppplVar12[6] = (long **)(dVar45 * 0.0 + (dVar47 * 0.0 - dVar48));
              }
              *(undefined1 *)(ppplVar12 + 0xc) = 1;
              *(undefined4 *)(ppplVar12 + 10) = 3;
              FUN_1094545a4(&ppppplStack_1d0,ppplVar12,ppppplStack_9a0);
              FUN_1094239ac(puVar11,&ppppplStack_1d0);
              if (lStack_138 != 0) {
                piVar1 = (int *)(lStack_138 + 0x14);
                do {
                  iVar24 = *piVar1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar24 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar24 + -1 == 0) {
                  func_0x000109a848d4(&uStack_170);
                }
              }
              lStack_138 = 0;
              ppuStack_158 = (undefined **)0x0;
              uStack_160 = 0;
              uStack_148 = 0;
              dStack_150 = 0.0;
              if (0 < uStack_170._4_4_) {
                lVar26 = 0;
                do {
                  *(undefined4 *)(lStack_130 + lVar26 * 4) = 0;
                  lVar26 = lVar26 + 1;
                } while (lVar26 < uStack_170._4_4_);
              }
              if (puStack_128 != auStack_120 && puStack_128 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_128 + -8));
              }
              break;
            }
          }
        }
      }
LAB_10945cf64:
      ppppplStack_9a0 = ppppplStack_9a0 + 0x18;
    } while ((long ******)ppppplStack_9a0 != pppppplVar8);
  }
  puStack_908 = puVar11;
  FUN_1094546bc(pppplStack_7b0 + 1,&puStack_908);
  puVar11 = puStack_908;
  puStack_908 = (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  plVar18 = plStack_8b8;
  plStack_8b8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  FUN_10945fb40(&ppppplStack_8b0);
  plVar18 = plStack_890;
  plStack_890 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plVar18 = plStack_3d8;
  if ((cStack_3d0 == '\x01') && (plStack_3d8 != (long *)0x0)) {
    plVar14 = plStack_3d8 + 1;
    do {
      lVar26 = *plVar14;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar26 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  if (lStack_448 != 0) {
    lStack_440 = lStack_448;
    __ZdlPv();
  }
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  if (lStack_478 != 0) {
    lStack_470 = lStack_478;
    __ZdlPv();
  }
  plVar18 = plStack_538;
  if (plStack_538 != (long *)0x0) {
    plVar14 = plStack_538 + 1;
    do {
      lVar26 = *plVar14;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar26 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_538 + 0x10))(plStack_538);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  _free(lStack_5e8);
  plVar18 = plStack_888;
  plStack_888 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plVar18 = plStack_7e0;
  plStack_7e0 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plVar18 = plStack_7d8;
  plStack_7d8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  if ((long)ppuStack_7c0 < 0) {
    __ZdlPv(ppppplStack_7d0);
  }
  uStack_92c = uStack_92c + 1;
  goto LAB_10945bbbc;
LAB_10945ce1c:
  if (((ulong)pppplStack_7a0 & uVar16) == 0) {
    ppppplVar19 = (long *****)((ulong)ppppplVar19 & uVar16);
  }
  else if (pppplStack_7a0 <= ppppplVar19) {
    uVar15 = 0;
    if ((long *****)pppplStack_7a0 != (long *****)0x0) {
      uVar15 = (ulong)ppppplVar19 / (ulong)pppplStack_7a0;
    }
    ppppplVar19 = (long *****)((long)ppppplVar19 - uVar15 * (long)pppplStack_7a0);
  }
  if (ppppplVar19 != ppppplVar17) goto LAB_10945cf64;
  goto LAB_10945cdf8;
}



/* Entry: 10945da3c; end: 10945dac7;  */

undefined8 FUN_10945da3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  FUN_10923b090();
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm_110346750)
              (param_3,0);
    return CONCAT44(uVar3,uVar2);
  }
  return 0;
}



/* Entry: 10945dac8; end: 10945eba3;  */

void FUN_10945dac8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  int *piVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  long *plVar10;
  float fVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined **ppuVar18;
  uint uVar19;
  float *pfVar20;
  long *plVar21;
  undefined **ppuVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined **ppuVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  undefined ***pppuVar30;
  ulong uVar31;
  ulong unaff_x24;
  ulong uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar36;
  double dVar35;
  double dVar37;
  float fVar38;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 auStack_3b0 [2];
  char cStack_399;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined8 uStack_32f;
  long *plStack_320;
  int aiStack_318 [2];
  undefined8 *****apppppuStack_310 [2];
  char cStack_2f9;
  long *plStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined2 uStack_28e;
  long lStack_288;
  long lStack_280;
  long *plStack_270;
  long *plStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  long lStack_230;
  float fStack_228;
  long lStack_220;
  ulong uStack_218;
  long *plStack_210;
  ulong uStack_208;
  float fStack_200;
  undefined **ppuStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong auStack_1d8 [6];
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 *****apppppuStack_190 [11];
  undefined8 uStack_138;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c31940(auStack_398,&UNK_10f56daa1);
  func_0x000107c31940(auStack_3b0,&UNK_10f56dc0f);
  (**(code **)(*param_2 + 0x10))(&plStack_3b8,param_2,auStack_398);
  (**(code **)(*param_2 + 0x10))(&plStack_3c0,param_2,auStack_3b0);
  plVar13 = plStack_3b8;
  (**(code **)(*plStack_3b8 + 0x28))();
  if (((int)plVar13 == 0) ||
     (plVar13 = plStack_3c0, (**(code **)(*plStack_3c0 + 0x28))(), (int)plVar13 == 0)) {
    plVar13 = plStack_3b8;
    (**(code **)(*plStack_3b8 + 0x28))();
    if ((int)plVar13 == 0) {
      FUN_10945af10(param_1,param_2,param_3);
    }
    else {
      FUN_109456b54(param_1,param_2);
    }
  }
  else {
    func_0x000107c31940(&ppuStack_120,&UNK_10f56dc0f);
    (**(code **)(*param_2 + 0x10))(&plStack_268,param_2,&ppuStack_120);
    if ((int)fStack_10c < 0) {
      __ZdlPv(ppuStack_120);
    }
    plVar13 = plStack_268;
    (**(code **)(*plStack_268 + 0x28))();
    if (((ulong)plVar13 & 1) == 0) {
      FUN_10937e740(&ppuStack_120,&UNK_10f56dc2a);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc17,499,&ppuStack_120);
      if ((int)fStack_10c < 0) {
        __ZdlPv(ppuStack_120);
      }
      *param_1 = 0;
    }
    else {
      func_0x000107c31940(&ppuStack_120,&UNK_10f56daa1);
      (**(code **)(*param_2 + 0x10))(&plStack_270,param_2,&ppuStack_120);
      if ((int)fStack_10c < 0) {
        __ZdlPv(ppuStack_120);
      }
      plVar13 = plStack_270;
      (**(code **)(*plStack_270 + 0x28))();
      if (((ulong)plVar13 & 1) == 0) {
        FUN_10937e740(&ppuStack_120,&UNK_10f56db37);
        FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc17,0x1f8,&ppuStack_120);
        if ((int)fStack_10c < 0) {
          __ZdlPv(ppuStack_120);
        }
        *param_1 = 0;
      }
      else {
        (**(code **)(*plStack_268 + 0x10))(&lStack_288);
        uStack_28e = 0;
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        lStack_2b8 = lStack_280 - lStack_288;
        lStack_2c0 = lStack_288;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        puStack_2f0 = &uStack_2e8;
        uStack_2e8 = 0;
        puStack_2d8 = &uStack_2d0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        uStack_2e0 = 0;
        FUN_10985da9c(aiStack_318,&puStack_2f0,&lStack_2c0);
        if (aiStack_318[0] != 0) {
          apppppuStack_190[0] = apppppuStack_310[0];
          if (-1 < cStack_2f9) {
            apppppuStack_190[0] = apppppuStack_310;
          }
          FUN_1093780e0(&ppuStack_120,&UNK_10f56dc4b,apppppuStack_190);
          FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc17,0x203,&ppuStack_120);
          if ((int)fStack_10c < 0) {
            __ZdlPv(ppuStack_120);
          }
          if (-1 < cStack_2f9) {
            apppppuStack_310[0] = apppppuStack_310;
          }
          func_0x000105688514(apppppuStack_310[0]);
          goto LAB_10945e8ac;
        }
        (**(code **)(*plStack_270 + 0x20))(&plStack_320);
        ppuStack_380 = &PTR_FUN_110af0078;
        uStack_378 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_32f = 0;
        uStack_337 = 0;
        uStack_330 = 0;
        if (*(int *)((long)plStack_320 + *(long *)(*plStack_320 + -0x18) + 0x20) == 0) {
          uVar15 = 0;
          func_0x00010b4d15d4();
          plVar13 = plStack_2f8;
          if ((uVar15 & 1) == 0) {
            FUN_10937e740(&ppuStack_120,&UNK_10f56db7b);
            FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc17,0x20f,&ppuStack_120);
            goto LAB_10945de5c;
          }
          uStack_1e8 = 0;
          ppuStack_1f0 = &PTR_FUN_110af0078;
          auStack_1d8[0] = 0;
          uStack_1e0 = 0;
          auStack_1d8[2] = 0;
          auStack_1d8[1] = 0;
          auStack_1d8[4] = 0;
          auStack_1d8[3] = 0;
          uStack_1a8 = 0;
          auStack_1d8[5] = 0;
          uStack_19f = 0;
          uStack_1a7 = 0;
          uStack_1a0 = 0;
          FUN_1093432b4(&ppuStack_1f0);
          FUN_1093436f4(&ppuStack_1f0,&ppuStack_380);
          if (((int)((ulong)(plVar13[6] - plVar13[5]) >> 2) < 1) ||
             (iVar28 = *(int *)plVar13[5], iVar28 == -1)) {
            puStack_3d8 = (undefined8 *)0x0;
          }
          else {
            puStack_3d8 = *(undefined8 **)(plVar13[2] + (long)iVar28 * 8);
          }
          piVar4 = (int *)plVar13[0x11];
          uVar19 = (uint)((ulong)(plVar13[0x12] - (long)piVar4) >> 2);
          if ((int)uVar19 < 1) {
            puStack_3e0 = (undefined8 *)0x0;
LAB_10945dfec:
            puStack_3f0 = (undefined8 *)0x0;
            puStack_3e8 = (undefined8 *)0x0;
          }
          else {
            if (*piVar4 == -1) {
              puStack_3e0 = (undefined8 *)0x0;
            }
            else {
              puStack_3e0 = *(undefined8 **)(plVar13[2] + (long)*piVar4 * 8);
            }
            if (uVar19 == 1) goto LAB_10945dfec;
            if (piVar4[1] == -1) {
              puStack_3e8 = (undefined8 *)0x0;
            }
            else {
              puStack_3e8 = *(undefined8 **)(plVar13[2] + (long)piVar4[1] * 8);
            }
            if (uVar19 < 3) {
              puStack_3f0 = (undefined8 *)0x0;
            }
            else if (piVar4[2] == -1) {
              puStack_3f0 = (undefined8 *)0x0;
            }
            else {
              puStack_3f0 = *(undefined8 **)(plVar13[2] + (long)piVar4[2] * 8);
            }
          }
          uStack_218 = 0;
          lStack_220 = 0;
          uStack_208 = 0;
          plStack_210 = (long *)0x0;
          fStack_200 = 1.0;
          uStack_1e0 = uStack_1e0 | 1;
          uVar15 = CONCAT71(uStack_1a7,uStack_1a8);
          if (uVar15 == 0) {
            uVar15 = uStack_1e8;
            if ((uStack_1e8 & 1) != 0) {
              uVar15 = *(ulong *)(uStack_1e8 & 0xfffffffffffffffe);
            }
            func_0x0001093431a0();
            uStack_1a8 = (undefined1)uVar15;
            uStack_1a7 = (undefined7)(uVar15 >> 8);
          }
          if ((int)plVar13[0x14] != 0) {
            uVar27 = 0;
            do {
              fVar8 = fStack_10c;
              uVar29 = uStack_208;
              uVar31 = uStack_218;
              lVar16 = 0;
              uVar32 = 0;
              pfVar20 = (float *)(*(long *)*puStack_3d8 + puStack_3d8[6] + puStack_3d8[5] * uVar27);
              fVar38 = *pfVar20;
              uVar34 = *(undefined8 *)(pfVar20 + 1);
              lStack_230 = CONCAT17((char)((ulong)uVar34 >> 0x18),
                                    CONCAT16((char)((ulong)uVar34 >> 0x10),
                                             CONCAT15((char)((ulong)uVar34 >> 8),
                                                      *(undefined5 *)pfVar20)));
              fVar36 = (float)((ulong)uVar34 >> 0x20);
              do {
                lVar2 = 0x9e3779b9;
                if (*(float *)((long)&lStack_230 + lVar16) != 0.0) {
                  lVar2 = (ulong)(uint)*(float *)((long)&lStack_230 + lVar16) + 0x9e3779b9;
                }
                uVar32 = (uVar32 >> 2) + uVar32 * 0x40 + lVar2 ^ uVar32;
                lVar16 = lVar16 + 4;
              } while (lVar16 != 0xc);
              fStack_10c = (float)uVar34;
              fVar11 = fStack_10c;
              fStack_10c = fVar8;
              if (uStack_218 != 0) {
                uVar17 = uStack_218 - 1;
                if ((uStack_218 & uVar17) == 0) {
                  unaff_x24 = uVar17 & uVar32;
                }
                else {
                  unaff_x24 = uVar32;
                  if (uStack_218 <= uVar32) {
                    uVar23 = 0;
                    if (uStack_218 != 0) {
                      uVar23 = uVar32 / uStack_218;
                    }
                    unaff_x24 = uVar32 - uVar23 * uStack_218;
                  }
                }
                plVar21 = *(long **)(lStack_220 + unaff_x24 * 8);
                if (plVar21 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar21 = (long *)*plVar21;
                      if (plVar21 == (long *)0x0) goto LAB_10945e188;
                      uVar23 = plVar21[1];
                      if (uVar23 != uVar32) break;
                      uVar23 = 0;
                      do {
                        fVar8 = *(float *)((long)plVar21 + uVar23 * 4 + 0x10);
                        fVar33 = *(float *)((long)&lStack_230 + uVar23 * 4);
                        if (1 < uVar23) break;
                        uVar23 = uVar23 + 1;
                      } while (fVar8 == fVar33);
                      if (fVar8 == fVar33) {
                        iVar28 = *(int *)((long)plVar21 + 0x1c);
                        goto LAB_10945e50c;
                      }
                    }
                    if ((uStack_218 & uVar17) == 0) {
                      uVar23 = uVar23 & uVar17;
                    }
                    else if (uStack_218 <= uVar23) {
                      uVar6 = 0;
                      if (uStack_218 != 0) {
                        uVar6 = uVar23 / uStack_218;
                      }
                      uVar23 = uVar23 - uVar6 * uStack_218;
                    }
                  } while (uVar23 == unaff_x24);
                }
              }
LAB_10945e188:
              plVar21 = (long *)0x20;
              fStack_228 = fVar36;
              __Znwm();
              *plVar21 = 0;
              plVar21[1] = uVar32;
              plVar21[2] = lStack_230;
              *(float *)(plVar21 + 3) = fStack_228;
              *(int *)((long)plVar21 + 0x1c) = (int)uVar29;
              fVar38 = (float)(uVar29 + 1);
              if ((uVar31 == 0) || (fStack_200 * (float)uVar31 < fVar38)) {
                uVar29 = 1;
                if (2 < uVar31) {
                  uVar29 = (ulong)((uVar31 & uVar31 - 1) != 0);
                }
                uVar29 = uVar29 | uVar31 << 1;
                uVar17 = (ulong)(fVar38 / fStack_200);
                if (uVar29 <= uVar17) {
                  uVar29 = uVar17;
                }
                uVar17 = uVar31;
                if (uVar29 - 1 == 0) {
                  uVar29 = 2;
                }
                else if ((uVar29 & uVar29 - 1) != 0) {
                  __ZNSt3__112__next_primeEm();
                  uVar17 = uStack_218;
                }
                uVar31 = uVar29;
                if (uVar17 < uVar29) {
LAB_10945e228:
                  if (uVar31 >> 0x3d != 0) goto LAB_10945e830;
                  lVar16 = uVar31 << 3;
                  __Znwm();
                  bVar1 = lStack_220 != 0;
                  lStack_220 = lVar16;
                  if (bVar1) {
                    __ZdlPv();
                  }
                  uVar29 = 0;
                  do {
                    *(undefined8 *)(lStack_220 + uVar29 * 8) = 0;
                    uVar29 = uVar29 + 1;
                  } while (uVar31 != uVar29);
                  uStack_218 = uVar31;
                  if (plStack_210 != (long *)0x0) {
                    uVar29 = plStack_210[1];
                    uVar17 = uVar31 - 1;
                    if ((uVar31 & uVar17) == 0) {
                      uVar29 = uVar29 & uVar17;
                    }
                    else if (uVar31 <= uVar29) {
                      uVar23 = 0;
                      if (uVar31 != 0) {
                        uVar23 = uVar29 / uVar31;
                      }
                      uVar29 = uVar29 - uVar23 * uVar31;
                    }
                    *(long ***)(lStack_220 + uVar29 * 8) = &plStack_210;
                    plVar24 = (long *)*plStack_210;
                    plVar10 = plStack_210;
                    while (plVar24 != (long *)0x0) {
                      uVar23 = plVar24[1];
                      if ((uVar31 & uVar17) == 0) {
                        uVar23 = uVar23 & uVar17;
                      }
                      else if (uVar31 <= uVar23) {
                        uVar6 = 0;
                        if (uVar31 != 0) {
                          uVar6 = uVar23 / uVar31;
                        }
                        uVar23 = uVar23 - uVar6 * uVar31;
                      }
                      plVar25 = plVar24;
                      if (uVar23 != uVar29) {
                        if (*(long *)(lStack_220 + uVar23 * 8) == 0) {
                          *(long **)(lStack_220 + uVar23 * 8) = plVar10;
                          uVar29 = uVar23;
                        }
                        else {
                          *plVar10 = *plVar24;
                          *plVar24 = **(long **)(lStack_220 + uVar23 * 8);
                          **(undefined8 **)(lStack_220 + uVar23 * 8) = plVar24;
                          plVar25 = plVar10;
                        }
                      }
                      plVar10 = plVar25;
                      plVar24 = (long *)*plVar25;
                    }
                  }
                }
                else {
                  uVar31 = uVar17;
                  if (uVar29 < uVar17) {
                    uVar31 = (ulong)((float)uStack_208 / fStack_200);
                    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if (1 < uVar31) {
                      uVar31 = 1L << (-LZCOUNT(uVar31 - 1) & 0x3fU);
                    }
                    lVar16 = lStack_220;
                    if (uVar29 <= uVar31) {
                      uVar29 = uVar31;
                    }
                    uVar31 = uStack_218;
                    if (uVar29 < uVar17) {
                      uVar31 = uVar29;
                      if (uVar29 != 0) goto LAB_10945e228;
                      lStack_220 = 0;
                      if (lVar16 != 0) {
                        __ZdlPv();
                      }
                      uStack_218 = 0;
                      uVar31 = 0;
                    }
                  }
                }
                if ((uVar31 & uVar31 - 1) == 0) {
                  unaff_x24 = uVar31 - 1 & uVar32;
                }
                else {
                  unaff_x24 = uVar32;
                  if (uVar31 <= uVar32) {
                    uVar29 = 0;
                    if (uVar31 != 0) {
                      uVar29 = uVar32 / uVar31;
                    }
                    unaff_x24 = uVar32 - uVar29 * uVar31;
                  }
                }
              }
              plVar24 = *(long **)(lStack_220 + unaff_x24 * 8);
              if (plVar24 == (long *)0x0) {
                *plVar21 = (long)plStack_210;
                *(long ***)(lStack_220 + unaff_x24 * 8) = &plStack_210;
                plStack_210 = plVar21;
                if (*plVar21 != 0) {
                  uVar29 = *(ulong *)(*plVar21 + 8);
                  if ((uVar31 & uVar31 - 1) == 0) {
                    uVar29 = uVar29 & uVar31 - 1;
                  }
                  else if (uVar31 <= uVar29) {
                    uVar32 = 0;
                    if (uVar31 != 0) {
                      uVar32 = uVar29 / uVar31;
                    }
                    uVar29 = uVar29 - uVar32 * uVar31;
                  }
                  plVar24 = (long *)(lStack_220 + uVar29 * 8);
                  goto LAB_10945e404;
                }
              }
              else {
                *plVar21 = *plVar24;
LAB_10945e404:
                *plVar24 = (long)plVar21;
              }
              uStack_208 = uStack_208 + 1;
              iVar28 = *(int *)((long)plVar21 + 0x1c);
              unaff_x24 = uVar15 + 0x10;
              func_0x000107c303b0(unaff_x24,0x109343154);
              *(long *)(unaff_x24 + 0x28) = (long)iVar28;
              ppuStack_118 = (undefined **)0x0;
              ppuStack_120 = &PTR_FUN_110aeb040;
              uStack_104 = 0;
              fVar38 = (float)lStack_230;
              fStack_110 = (float)lStack_230;
              *(uint *)(unaff_x24 + 0x10) = *(uint *)(unaff_x24 + 0x10) | 1;
              pppuVar30 = *(undefined ****)(unaff_x24 + 0x18);
              fStack_10c = fVar11;
              fStack_108 = fVar36;
              if (pppuVar30 == (undefined ***)0x0) {
                pppuVar30 = *(undefined ****)(unaff_x24 + 8);
                if (((ulong)pppuVar30 & 1) != 0) {
                  pppuVar30 = *(undefined ****)((ulong)pppuVar30 & 0xfffffffffffffffe);
                }
                FUN_109307df0();
                *(undefined ****)(unaff_x24 + 0x18) = pppuVar30;
              }
              if (pppuVar30 != &ppuStack_120) {
                ppuVar18 = pppuVar30[1];
                ppuVar22 = ppuVar18;
                if (((ulong)ppuVar18 & 1) != 0) {
                  ppuVar22 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
                }
                ppuVar26 = ppuStack_118;
                if (((ulong)ppuStack_118 & 1) != 0) {
                  ppuVar26 = *(undefined ***)((ulong)ppuStack_118 & 0xfffffffffffffffe);
                }
                if (ppuVar22 == ppuVar26) {
                  lVar16 = 0;
                  pppuVar30[1] = ppuStack_118;
                  ppuStack_118 = ppuVar18;
                  do {
                    uVar5 = *(undefined1 *)((long)pppuVar30 + lVar16 + 0x10);
                    *(undefined1 *)((long)pppuVar30 + lVar16 + 0x10) =
                         *(undefined1 *)((long)&fStack_110 + lVar16);
                    *(undefined1 *)((long)&fStack_110 + lVar16) = uVar5;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 0xc);
                }
                else {
                  func_0x0001093068c4(pppuVar30);
                  FUN_1093067b8(pppuVar30,&ppuStack_120);
                }
              }
              if (((ulong)ppuStack_118 & 1) != 0) {
                func_0x0001053936ac(&ppuStack_118);
              }
LAB_10945e50c:
              puVar3 = auStack_1d8;
              if ((auStack_1d8[0] & 1) != 0) {
                puVar3 = (ulong *)(auStack_1d8[0] +
                                   (ulong)*(ushort *)
                                           (*(long *)*puStack_3e0 + puStack_3e0[6] +
                                           puStack_3e0[5] * uVar27) * 8 + 7);
              }
              uVar29 = *puVar3;
              *(uint *)(uVar29 + 0x10) = *(uint *)(uVar29 + 0x10) | 1;
              uVar31 = *(ulong *)(uVar29 + 0x18);
              if (uVar31 == 0) {
                uVar31 = *(ulong *)(uVar29 + 8);
                if ((uVar31 & 1) != 0) {
                  uVar31 = *(ulong *)(uVar31 & 0xfffffffffffffffe);
                }
                func_0x000109345edc();
                *(ulong *)(uVar29 + 0x18) = uVar31;
              }
              ppuVar22 = &PTR_PTR_1132cf3a8;
              if (*(undefined ***)(uVar31 + 0x40) != (undefined **)0x0) {
                ppuVar22 = *(undefined ***)(uVar31 + 0x40);
              }
              FUN_109456af8(&ppuStack_120,ppuVar22[3],ppuVar22[4]);
              ppuVar22 = &PTR_PTR_1132cf358;
              if (*(undefined ***)(uVar31 + 0x38) != (undefined **)0x0) {
                ppuVar22 = *(undefined ***)(uVar31 + 0x38);
              }
              FUN_109457f90(apppppuStack_190,ppuVar22);
              dVar9 = (double)fVar38;
              dVar35 = (double)fVar11;
              dVar37 = (double)fVar36;
              dStack_260 = dStack_e0 * dVar9 + dStack_c8 * dVar35 + dStack_b0 * dVar37 + dStack_100;
              dStack_258 = dStack_d8 * dVar9 + dStack_c0 * dVar35 + dStack_a8 * dVar37 + dStack_f8;
              dStack_250 = dVar9 * dStack_d0 + dVar35 * dStack_b8 + dVar37 * dStack_a0 + dStack_f0;
              FUN_10937d5c4(apppppuStack_190,&dStack_240,&dStack_260);
              lVar16 = uVar31 + 0x18;
              func_0x000107c303b0(lVar16,0x109345d94);
              *(long *)(lVar16 + 0x28) = (long)iVar28;
              auVar7[8] = uStack_238;
              auVar7._0_8_ = dStack_240;
              auVar7[9] = (char)uStack_237;
              auVar7[10] = (char)((uint7)uStack_237 >> 8);
              auVar7[0xb] = (char)((uint7)uStack_237 >> 0x10);
              auVar7[0xc] = (char)((uint7)uStack_237 >> 0x18);
              auVar7[0xd] = (char)((uint7)uStack_237 >> 0x20);
              auVar7[0xe] = (char)((uint7)uStack_237 >> 0x28);
              auVar7[0xf] = (char)((uint7)uStack_237 >> 0x30);
              fVar38 = (float)auVar7._8_8_;
              *(ulong *)(lVar16 + 0x30) =
                   CONCAT17((char)((uint)fVar38 >> 0x18),
                            CONCAT16((char)((uint)fVar38 >> 0x10),
                                     CONCAT15((char)((uint)fVar38 >> 8),
                                              CONCAT14(SUB41(fVar38,0),(float)dStack_240))));
              *(undefined4 *)(lVar16 + 0x38) =
                   *(undefined4 *)(*(long *)*puStack_3f0 + puStack_3f0[6] + puStack_3f0[5] * uVar27)
              ;
              *(uint *)(lVar16 + 0x3c) =
                   (uint)*(byte *)(*(long *)*puStack_3e8 + puStack_3e8[6] + puStack_3e8[5] * uVar27)
              ;
              puVar14 = *(undefined8 **)(lVar16 + 8);
              if (((ulong)puVar14 & 1) != 0) {
                puVar14 = *(undefined8 **)((ulong)puVar14 & 0xfffffffffffffffe);
              }
              if (((uint)*(undefined8 *)(lVar16 + 0x20) >> 1 & 1) == 0) {
                if (puVar14 == (undefined8 *)0x0) {
                  puVar14 = (undefined8 *)0x18;
                  __Znwm();
                  uVar31 = 2;
                }
                else {
                  func_0x00010b4d80a4();
                  uVar31 = 3;
                }
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                *(ulong *)(lVar16 + 0x20) = uVar31 | (ulong)puVar14;
              }
              func_0x000107c2c4d8();
              _free(uStack_138);
              uVar27 = uVar27 + 1;
            } while (uVar27 < *(uint *)(plVar13 + 0x14));
          }
          FUN_109456e5c(param_1,&ppuStack_1f0);
          func_0x000109460bf4(&lStack_220);
          func_0x000109343234(&ppuStack_1f0);
        }
        else {
          FUN_10937e740(&ppuStack_120,&UNK_10f56db56);
          FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56dc17,0x20b,&ppuStack_120);
LAB_10945de5c:
          if ((int)fStack_10c < 0) {
            __ZdlPv(ppuStack_120);
          }
          *param_1 = 0;
        }
        func_0x000109343234(&ppuStack_380);
        plVar13 = plStack_320;
        plStack_320 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_2f8;
        plStack_2f8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (cStack_2f9 < '\0') {
          __ZdlPv(apppppuStack_310[0]);
        }
        FUN_10945fda0(&puStack_2d8,uStack_2d0);
        func_0x000107c34ee4(&puStack_2f0,uStack_2e8);
        if (lStack_288 != 0) {
          lStack_280 = lStack_288;
          __ZdlPv();
        }
      }
      plVar13 = plStack_270;
      plStack_270 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    plVar13 = plStack_268;
    plStack_268 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
  }
  plVar13 = plStack_3c0;
  plStack_3c0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_3b8;
  plStack_3b8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (cStack_399 < '\0') {
    __ZdlPv(auStack_3b0[0]);
  }
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10945e830:
  func_0x000104c4f740();
LAB_10945e8ac:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10945e8b0);
  (*pcVar12)();
}



/* Entry: 10945eba4; end: 10945ee2b;  */

void FUN_10945eba4(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long *plVar13;
  undefined4 ***pppuVar14;
  undefined4 ***pppuVar15;
  undefined4 **ppuVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined4 ***pppuStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 **ppuStack_4a0;
  int *piStack_498;
  undefined1 **ppuStack_490;
  code *pcStack_488;
  undefined8 *puStack_480;
  undefined4 uStack_474;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  int aiStack_460 [13];
  undefined1 uStack_429;
  undefined4 *puStack_428;
  undefined4 **appuStack_420 [12];
  undefined1 auStack_3c0 [4];
  int iStack_3bc;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_378;
  undefined1 auStack_370 [32];
  long lStack_350;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined8 *apuStack_2e0 [2];
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
  long alStack_278 [3];
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [152];
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  ulong uStack_70;
  long *plStack_68;
  char cStack_60;
  long lStack_48;
  
  ppuVar9 = apuStack_2e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  apuStack_2e0[0] = *(undefined8 **)(param_2 + 4);
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
  FUN_10937da58(alStack_278,param_2 + 0x1e);
  uStack_258 = *(undefined8 *)(param_2 + 0x26);
  uStack_260 = *(undefined8 *)(param_2 + 0x24);
  uStack_248 = *(undefined8 *)(param_2 + 0x2a);
  uStack_250 = *(undefined8 *)(param_2 + 0x28);
  uStack_238 = *(undefined8 *)(param_2 + 0x2e);
  uStack_240 = *(undefined8 *)(param_2 + 0x2c);
  uStack_230 = *(undefined8 *)(param_2 + 0x30);
  uStack_1f8 = *(undefined8 *)(param_2 + 0x3e);
  uStack_200 = *(undefined8 *)(param_2 + 0x3c);
  uStack_1e8 = *(undefined8 *)(param_2 + 0x42);
  uStack_1f0 = *(undefined8 *)(param_2 + 0x40);
  uStack_1e0 = *(undefined8 *)(param_2 + 0x44);
  uStack_218 = *(undefined8 *)(param_2 + 0x36);
  uStack_220 = *(undefined8 *)(param_2 + 0x34);
  uStack_208 = *(undefined8 *)(param_2 + 0x3a);
  uStack_210 = *(undefined8 *)(param_2 + 0x38);
  plStack_1c8 = *(long **)(param_2 + 0x4a);
  uStack_1d0 = *(undefined8 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x4a) != 0) {
    plVar13 = (long *)(*(long *)(param_2 + 0x4a) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1b8 = *(undefined8 *)(param_2 + 0x4e);
  uStack_1c0 = *(undefined8 *)(param_2 + 0x4c);
  uStack_1a8 = *(undefined8 *)(param_2 + 0x52);
  uStack_1b0 = *(undefined8 *)(param_2 + 0x50);
  FUN_109460390(auStack_1a0,param_2 + 0x54);
  uStack_7e = *(undefined8 *)((long)param_2 + 0x272);
  uStack_80 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x26a) >> 0x30);
  uStack_a8 = *(undefined8 *)(param_2 + 0x92);
  uStack_b0 = *(undefined8 *)(param_2 + 0x90);
  uStack_98 = *(undefined8 *)(param_2 + 0x96);
  uStack_a0 = *(undefined8 *)(param_2 + 0x94);
  uStack_90 = *(undefined8 *)(param_2 + 0x98);
  uStack_88 = (undefined2)*(undefined8 *)(param_2 + 0x9a);
  uStack_86 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x9a) >> 0x10);
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  cStack_60 = '\0';
  if (*(char *)(param_2 + 0xa4) == '\x01') {
    plStack_68 = *(long **)(param_2 + 0xa2);
    uStack_70 = *(ulong *)(param_2 + 0xa0);
    if (*(long *)(param_2 + 0xa2) != 0) {
      plVar13 = (long *)(*(long *)(param_2 + 0xa2) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    cStack_60 = '\x01';
  }
  puVar5 = (undefined8 *)0x470;
  __Znwm();
  FUN_1094607b0(0x4000000000000000);
  plVar13 = plStack_68;
  *param_1 = puVar5;
  *(undefined4 *)puVar5 = *param_2;
  if ((cStack_60 == '\x01') && (plStack_68 != (long *)0x0)) {
    plVar2 = plStack_68 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
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
  plVar13 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar2 = plStack_1c8 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  lVar12 = alStack_278[0];
  ___stack_chk_fail();
  __ZdlPv(puVar5);
  FUN_109458ce0(apuStack_2e0);
  __Unwind_Resume();
  pcStack_2e8 = FUN_10945ee2c;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_460[2] = 0;
  aiStack_460[3] = 0;
  aiStack_460[0] = 0;
  aiStack_460[1] = 0;
  aiStack_460[6] = 0;
  aiStack_460[7] = 0;
  aiStack_460[4] = 0;
  aiStack_460[5] = 0;
  aiStack_460[8] = 0x3f800000;
  pppuVar14 = (undefined4 ***)ppuVar9[4];
  pppuVar15 = (undefined4 ***)ppuVar9[5];
  ppuVar10 = ppuVar9;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (pppuVar14 != pppuVar15) {
    puVar5 = (undefined8 *)&UNK_10dd5b8f9;
    do {
      ppuVar16 = *pppuVar14;
      puVar6 = (undefined8 *)0x68;
      __Znwm();
      *puVar6 = *ppuVar16;
      puVar20 = ppuVar16[2];
      puVar19 = ppuVar16[1];
      puVar6[3] = ppuVar16[3];
      puVar6[2] = puVar20;
      puVar6[1] = puVar19;
      puVar20 = ppuVar16[5];
      puVar19 = ppuVar16[4];
      puVar6[6] = ppuVar16[6];
      puVar6[5] = puVar20;
      puVar6[4] = puVar19;
      puVar20 = ppuVar16[8];
      puVar19 = ppuVar16[7];
      puVar22 = ppuVar16[10];
      puVar21 = ppuVar16[9];
      uVar23 = *(undefined8 *)((long)ppuVar16 + 0x51);
      *(undefined8 *)((long)puVar6 + 0x59) = *(undefined8 *)((long)ppuVar16 + 0x59);
      *(undefined8 *)((long)puVar6 + 0x51) = uVar23;
      puVar6[10] = puVar22;
      puVar6[9] = puVar21;
      puVar6[8] = puVar20;
      puVar6[7] = puVar19;
      puStack_428 = (undefined4 *)CONCAT44(puStack_428._4_4_,*(undefined4 *)(ppuVar16 + 7));
      piVar8 = aiStack_460;
      appuStack_420[0] = &puStack_428;
      FUN_10943064c(piVar8,&puStack_428,&UNK_10dd5b8f9,appuStack_420,&puStack_470);
      *(undefined8 **)(piVar8 + 6) = puVar6;
      *(int *)(puVar6 + 7) =
           (int)((ulong)(*(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x20)) >> 3);
      ppuVar10 = &puStack_468;
      puStack_468 = puVar6;
      FUN_1094269c0(lVar12 + 0x20);
      puVar6 = puStack_468;
      puStack_468 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      pppuVar14 = pppuVar14 + 1;
    } while (pppuVar14 != pppuVar15);
  }
  plVar13 = ppuVar9[1];
  plVar2 = ppuVar9[2];
  if (plVar13 != plVar2) {
    pppuVar15 = appuStack_420;
    ppuVar9 = (undefined8 **)&UNK_10dd5b8f9;
    do {
      FUN_10945eba4(&puStack_470,*plVar13);
      lVar18 = *(long *)(*plVar13 + 0x3f0);
      for (lVar17 = *(long *)(*plVar13 + 1000); lVar17 != lVar18; lVar17 = lVar17 + 0xd0) {
        if (*(int *)(*(long *)(lVar17 + 8) + 0x50) != 0) {
          uStack_474 = *(undefined4 *)(*(long *)(lVar17 + 8) + 0x38);
          piVar8 = aiStack_460;
          puStack_428 = &uStack_474;
          FUN_10943064c(piVar8,&uStack_474,&UNK_10dd5b8f9,&puStack_428,&uStack_429);
          FUN_1094545a4(appuStack_420,*(undefined8 *)(piVar8 + 6),lVar17 + 0x10);
          puVar5 = puStack_470;
          FUN_1094239ac(puStack_470,appuStack_420);
          if (lStack_388 != 0) {
            piVar8 = (int *)(lStack_388 + 0x14);
            do {
              iVar1 = *piVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(auStack_3c0);
            }
          }
          lStack_388 = 0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          if (0 < iStack_3bc) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_380 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_3bc);
          }
          if (puStack_378 != auStack_370 && puStack_378 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_378 + -8));
          }
        }
      }
      puStack_480 = puStack_470;
      ppuVar10 = &puStack_480;
      FUN_1094546bc(lVar12 + 8);
      puVar6 = puStack_480;
      puStack_480 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  piVar8 = aiStack_460;
  FUN_109462cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puStack_480;
  puStack_480 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  FUN_109462cec(aiStack_460);
  piVar7 = piVar8;
  __Unwind_Resume();
  pcStack_488 = FUN_10945f14c;
  iVar1 = *piVar7;
  pppuStack_4c0 = pppuVar15;
  plStack_4b8 = plVar2;
  plStack_4b0 = plVar13;
  puStack_4a8 = puVar5;
  ppuStack_4a0 = ppuVar9;
  piStack_498 = piVar8;
  ppuStack_490 = &puStack_2f0;
  if (iVar1 == *(int *)ppuVar10) {
    piVar8 = (int *)0x68;
    __Znwm();
    *piVar8 = iVar1;
    *(undefined1 *)(piVar8 + 0x14) = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    piVar8[10] = 0;
    piVar8[0xb] = 0;
    piVar8[0x16] = 0;
    piVar8[0x17] = 0;
    piVar8[0x18] = 0;
    piVar8[0x19] = 0;
    *extraout_x8 = piVar8;
    FUN_10945ee2c();
    FUN_10945ee2c(piVar8,ppuVar10);
  }
  else {
    FUN_10937e740(auStack_4d8,&UNK_10f56df92);
    FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56df8c,0x4e8,auStack_4d8);
    if (cStack_4c1 < '\0') {
      __ZdlPv(auStack_4d8[0]);
    }
    *extraout_x8 = 0;
  }
  return;
}



/* Entry: 10945ee2c; end: 10945f14b;  */

void FUN_10945ee2c(long param_1,undefined8 **param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *extraout_x8;
  undefined8 *unaff_x21;
  long *plVar10;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 **ppuVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined4 ***pppuStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 **ppuStack_1c0;
  int *piStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  int aiStack_180 [13];
  undefined1 uStack_149;
  undefined4 *puStack_148;
  undefined4 **appuStack_140 [12];
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_180[2] = 0;
  aiStack_180[3] = 0;
  aiStack_180[0] = 0;
  aiStack_180[1] = 0;
  aiStack_180[6] = 0;
  aiStack_180[7] = 0;
  aiStack_180[4] = 0;
  aiStack_180[5] = 0;
  aiStack_180[8] = 0x3f800000;
  pppuVar11 = (undefined4 ***)param_2[4];
  pppuVar12 = (undefined4 ***)param_2[5];
  ppuVar8 = param_2;
  if (pppuVar11 != pppuVar12) {
    unaff_x21 = (undefined8 *)&UNK_10dd5b8f9;
    do {
      ppuVar13 = *pppuVar11;
      puVar5 = (undefined8 *)0x68;
      __Znwm();
      *puVar5 = *ppuVar13;
      puVar17 = ppuVar13[2];
      puVar16 = ppuVar13[1];
      puVar5[3] = ppuVar13[3];
      puVar5[2] = puVar17;
      puVar5[1] = puVar16;
      puVar17 = ppuVar13[5];
      puVar16 = ppuVar13[4];
      puVar5[6] = ppuVar13[6];
      puVar5[5] = puVar17;
      puVar5[4] = puVar16;
      puVar17 = ppuVar13[8];
      puVar16 = ppuVar13[7];
      puVar19 = ppuVar13[10];
      puVar18 = ppuVar13[9];
      uVar20 = *(undefined8 *)((long)ppuVar13 + 0x51);
      *(undefined8 *)((long)puVar5 + 0x59) = *(undefined8 *)((long)ppuVar13 + 0x59);
      *(undefined8 *)((long)puVar5 + 0x51) = uVar20;
      puVar5[10] = puVar19;
      puVar5[9] = puVar18;
      puVar5[8] = puVar17;
      puVar5[7] = puVar16;
      puStack_148 = (undefined4 *)CONCAT44(puStack_148._4_4_,*(undefined4 *)(ppuVar13 + 7));
      piVar7 = aiStack_180;
      appuStack_140[0] = &puStack_148;
      FUN_10943064c(piVar7,&puStack_148,&UNK_10dd5b8f9,appuStack_140,&puStack_190);
      *(undefined8 **)(piVar7 + 6) = puVar5;
      *(int *)(puVar5 + 7) =
           (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3);
      ppuVar8 = &puStack_188;
      puStack_188 = puVar5;
      FUN_1094269c0(param_1 + 0x20);
      puVar5 = puStack_188;
      puStack_188 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      pppuVar11 = pppuVar11 + 1;
    } while (pppuVar11 != pppuVar12);
  }
  plVar10 = param_2[1];
  plVar2 = param_2[2];
  if (plVar10 != plVar2) {
    pppuVar12 = appuStack_140;
    param_2 = (undefined8 **)&UNK_10dd5b8f9;
    do {
      FUN_10945eba4(&puStack_190,*plVar10);
      lVar15 = *(long *)(*plVar10 + 0x3f0);
      for (lVar14 = *(long *)(*plVar10 + 1000); lVar14 != lVar15; lVar14 = lVar14 + 0xd0) {
        if (*(int *)(*(long *)(lVar14 + 8) + 0x50) != 0) {
          uStack_194 = *(undefined4 *)(*(long *)(lVar14 + 8) + 0x38);
          piVar7 = aiStack_180;
          puStack_148 = &uStack_194;
          FUN_10943064c(piVar7,&uStack_194,&UNK_10dd5b8f9,&puStack_148,&uStack_149);
          FUN_1094545a4(appuStack_140,*(undefined8 *)(piVar7 + 6),lVar14 + 0x10);
          unaff_x21 = puStack_190;
          FUN_1094239ac(puStack_190,appuStack_140);
          if (lStack_a8 != 0) {
            piVar7 = (int *)(lStack_a8 + 0x14);
            do {
              iVar1 = *piVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar4) {
                *piVar7 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(auStack_e0);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          if (0 < iStack_dc) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_a0 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_dc);
          }
          if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_98 + -8));
          }
        }
      }
      puStack_1a0 = puStack_190;
      ppuVar8 = &puStack_1a0;
      FUN_1094546bc(param_1 + 8);
      puVar5 = puStack_1a0;
      puStack_1a0 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  piVar7 = aiStack_180;
  FUN_109462cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puStack_1a0;
  puStack_1a0 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  FUN_109462cec(aiStack_180);
  piVar6 = piVar7;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10945f14c;
  iVar1 = *piVar6;
  pppuStack_1e0 = pppuVar12;
  plStack_1d8 = plVar2;
  plStack_1d0 = plVar10;
  puStack_1c8 = unaff_x21;
  ppuStack_1c0 = param_2;
  piStack_1b8 = piVar7;
  puStack_1b0 = &stack0xfffffffffffffff0;
  if (iVar1 == *(int *)ppuVar8) {
    piVar7 = (int *)0x68;
    __Znwm();
    *piVar7 = iVar1;
    *(undefined1 *)(piVar7 + 0x14) = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[0xc] = 0;
    piVar7[0xd] = 0;
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    piVar7[0x16] = 0;
    piVar7[0x17] = 0;
    piVar7[0x18] = 0;
    piVar7[0x19] = 0;
    *extraout_x8 = piVar7;
    FUN_10945ee2c();
    FUN_10945ee2c(piVar7,ppuVar8);
  }
  else {
    FUN_10937e740(auStack_1f8,&UNK_10f56df92);
    FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56df8c,0x4e8,auStack_1f8);
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    *extraout_x8 = 0;
  }
  return;
}



/* Entry: 10945f14c; end: 10945f253;  */

void FUN_10945f14c(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  iVar1 = *param_2;
  if (iVar1 == *param_3) {
    piVar2 = (int *)0x68;
    __Znwm();
    *piVar2 = iVar1;
    *(undefined1 *)(piVar2 + 0x14) = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    *param_1 = piVar2;
    FUN_10945ee2c();
    FUN_10945ee2c(piVar2,param_3);
  }
  else {
    FUN_10937e740(auStack_58,&UNK_10f56df92);
    FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56df8c,0x4e8,auStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10945f254; end: 10945f3b7;  */

void FUN_10945f254(undefined8 *param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar10;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plVar9;
  
  if ((param_4 & 1) == 0) {
    puVar5 = param_2;
    FUN_10937eb64();
    uVar6 = 0x4d2;
    *(undefined4 *)puVar5 = 0x4d2;
    lVar7 = 1;
    do {
      uVar6 = (int)lVar7 + (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965;
      *(uint *)((long)puVar5 + lVar7 * 4) = uVar6;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x270);
    puVar5[0x138] = 0;
  }
  uStack_50 = 0;
  pplVar3 = &plStack_48;
  FUN_109460520(pplVar3,*param_2,&uStack_50);
  plVar10 = plStack_48;
  if (plStack_48 != plStack_40) {
    lVar7 = 0;
    plVar8 = plStack_48;
    do {
      plVar9 = plVar8 + 1;
      *plVar8 = lVar7;
      lVar7 = lVar7 + 1;
      plVar8 = plVar9;
    } while (plVar9 != plStack_40);
  }
  FUN_10937eb64();
  FUN_109462d34(plVar10,plStack_40,pplVar3);
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  param_1[2] = 0;
  *param_1 = puVar5;
  if (*param_3 != 0) {
    plVar8 = plStack_48 + *param_3;
    plVar10 = plStack_48;
    do {
      puVar4 = param_1;
      func_0x000107827634(param_1,puVar5,plVar10,plVar10);
      puVar1 = (undefined8 *)puVar4[1];
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar4[2];
          bVar2 = (undefined8 *)*puVar5 != puVar4;
          puVar4 = puVar5;
        } while (bVar2);
      }
      else {
        do {
          puVar5 = puVar1;
          puVar1 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8);
  }
  if (plStack_48 != (long *)0x0) {
    __ZdlPv(plStack_48);
  }
  return;
}



/* Entry: 10945f3b8; end: 10945f87f;  */

void FUN_10945f3b8(undefined8 *param_1,uint *param_2,undefined8 **param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 **ppuStack_1b8;
  undefined8 *puStack_1b0;
  uint *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 uStack_149;
  undefined4 *puStack_148;
  undefined4 **appuStack_140 [12];
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2;
  puVar18 = (undefined8 *)(ulong)uVar2;
  puVar7 = (uint *)0x68;
  ppuVar11 = param_3;
  puStack_1a8 = param_2;
  __Znwm();
  *puVar7 = uVar2;
  *(undefined1 *)(puVar7 + 0x14) = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  *param_1 = puVar7;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 0x3f800000;
  ppuVar19 = param_3 + 1;
  ppuVar20 = (undefined8 **)*param_3;
  puStack_1b0 = param_1;
  if (ppuVar20 != ppuVar19) {
    ppuStack_1b8 = param_3;
    do {
      lVar12 = *(long *)(*(long *)(puStack_1a8 + 2) + (long)ppuVar20[4] * 8);
      param_3 = *(undefined8 ***)(lVar12 + 0x3f0);
      for (ppuVar22 = *(undefined8 ***)(lVar12 + 1000); ppuVar22 != param_3;
          ppuVar22 = ppuVar22 + 0x1a) {
        puVar18 = ppuVar22[1];
        if (*(int *)(puVar18 + 10) != 0) {
          iVar3 = *(int *)(puVar18 + 7);
          uVar13 = (ulong)iVar3;
          if (uStack_178 != 0) {
            uVar14 = uStack_178 - 1;
            if ((uStack_178 & uVar14) == 0) {
              uVar15 = uVar14 & uVar13;
            }
            else {
              uVar15 = uVar13;
              if (uStack_178 <= uVar13) {
                uVar15 = 0;
                if (uStack_178 != 0) {
                  uVar15 = uVar13 / uStack_178;
                }
                uVar15 = uVar13 - uVar15 * uStack_178;
              }
            }
            plVar16 = *(long **)(lStack_180 + uVar15 * 8);
            if (plVar16 != (long *)0x0) {
              do {
                while( true ) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_10945f510;
                  uVar17 = plVar16[1];
                  if (uVar17 != uVar13) break;
                  if (*(int *)(plVar16 + 2) == iVar3) goto LAB_10945f5b4;
                }
                if ((uStack_178 & uVar14) == 0) {
                  uVar17 = uVar17 & uVar14;
                }
                else if (uStack_178 <= uVar17) {
                  uVar5 = 0;
                  if (uStack_178 != 0) {
                    uVar5 = uVar17 / uStack_178;
                  }
                  uVar17 = uVar17 - uVar5 * uStack_178;
                }
              } while (uVar17 == uVar15);
            }
          }
LAB_10945f510:
          puVar8 = (undefined8 *)0x68;
          __Znwm();
          *puVar8 = *puVar18;
          uVar24 = puVar18[2];
          uVar23 = puVar18[1];
          puVar8[3] = puVar18[3];
          puVar8[2] = uVar24;
          puVar8[1] = uVar23;
          uVar24 = puVar18[5];
          uVar23 = puVar18[4];
          puVar8[6] = puVar18[6];
          puVar8[5] = uVar24;
          puVar8[4] = uVar23;
          uVar24 = puVar18[8];
          uVar23 = puVar18[7];
          uVar26 = puVar18[10];
          uVar25 = puVar18[9];
          uVar27 = *(undefined8 *)((long)puVar18 + 0x51);
          *(undefined8 *)((long)puVar8 + 0x59) = *(undefined8 *)((long)puVar18 + 0x59);
          *(undefined8 *)((long)puVar8 + 0x51) = uVar27;
          puVar8[10] = uVar26;
          puVar8[9] = uVar25;
          puVar8[8] = uVar24;
          puVar8[7] = uVar23;
          puStack_148 = (undefined4 *)CONCAT44(puStack_148._4_4_,*(undefined4 *)(ppuVar22[1] + 7));
          plVar16 = &lStack_180;
          appuStack_140[0] = &puStack_148;
          FUN_10943064c(plVar16,&puStack_148,&UNK_10dd5b8f9,appuStack_140,&puStack_190);
          plVar16[3] = (long)puVar8;
          *(int *)(puVar8 + 7) = (int)((ulong)(*(long *)(puVar7 + 10) - *(long *)(puVar7 + 8)) >> 3)
          ;
          ppuVar11 = &puStack_188;
          puStack_188 = puVar8;
          FUN_1094269c0(puVar7 + 8);
          puVar8 = puStack_188;
          puStack_188 = (undefined8 *)0x0;
          if (puVar8 != (undefined8 *)0x0) {
            __ZdlPv();
          }
        }
LAB_10945f5b4:
      }
      ppuVar22 = (undefined8 **)ppuVar20[1];
      ppuVar21 = ppuVar20;
      if ((undefined8 **)ppuVar20[1] == (undefined8 **)0x0) {
        do {
          ppuVar20 = (undefined8 **)ppuVar21[2];
          bVar6 = (undefined8 **)*ppuVar20 != ppuVar21;
          ppuVar21 = ppuVar20;
        } while (bVar6);
      }
      else {
        do {
          ppuVar20 = ppuVar22;
          ppuVar22 = (undefined8 **)*ppuVar20;
        } while ((undefined8 **)*ppuVar20 != (undefined8 **)0x0);
      }
    } while (ppuVar20 != ppuVar19);
    ppuVar20 = (undefined8 **)*ppuStack_1b8;
  }
  if (ppuVar20 != ppuVar19) {
    param_3 = (undefined8 **)&UNK_10dd5b8f9;
    do {
      puVar18 = ppuVar20[4];
      lVar12 = *(long *)(puStack_1a8 + 2);
      FUN_10945eba4(&puStack_190,*(undefined8 *)(lVar12 + (long)puVar18 * 8));
      lVar12 = *(long *)(lVar12 + (long)puVar18 * 8);
      puVar8 = *(undefined8 **)(lVar12 + 1000);
      puVar18 = *(undefined8 **)(lVar12 + 0x3f0);
      if (puVar8 != puVar18) {
        do {
          if (*(int *)(puVar8[1] + 0x50) != 0) {
            uStack_194 = *(undefined4 *)(puVar8[1] + 0x38);
            plVar16 = &lStack_180;
            puStack_148 = &uStack_194;
            FUN_10943064c(plVar16,&uStack_194,&UNK_10dd5b8f9,&puStack_148,&uStack_149);
            FUN_1094545a4(appuStack_140,plVar16[3],puVar8 + 2);
            FUN_1094239ac(puStack_190,appuStack_140);
            if (lStack_a8 != 0) {
              piVar1 = (int *)(lStack_a8 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(auStack_e0);
              }
            }
            lStack_a8 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            if (0 < iStack_dc) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_a0 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_dc);
            }
            if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_98 + -8));
            }
          }
          puVar8 = puVar8 + 0x1a;
        } while (puVar8 != puVar18);
        puVar7 = (uint *)*puStack_1b0;
      }
      puStack_1a0 = puStack_190;
      puStack_190 = (undefined8 *)0x0;
      ppuVar11 = &puStack_1a0;
      FUN_1094546bc(puVar7 + 2);
      puVar8 = puStack_1a0;
      puStack_1a0 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      ppuVar22 = (undefined8 **)ppuVar20[1];
      ppuVar21 = ppuVar20;
      if ((undefined8 **)ppuVar20[1] == (undefined8 **)0x0) {
        do {
          ppuVar20 = (undefined8 **)ppuVar21[2];
          bVar6 = (undefined8 **)*ppuVar20 != ppuVar21;
          ppuVar21 = ppuVar20;
        } while (bVar6);
      }
      else {
        do {
          ppuVar20 = ppuVar22;
          ppuVar22 = (undefined8 **)*ppuVar20;
        } while ((undefined8 **)*ppuVar20 != (undefined8 **)0x0);
      }
    } while (ppuVar20 != ppuVar19);
  }
  plVar16 = &lStack_180;
  FUN_109462cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puStack_1a0;
  puStack_1a0 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  if (puStack_190 != (undefined8 *)0x0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  ppuVar20 = (undefined8 **)*puStack_1b0;
  FUN_109462cec(&lStack_180);
  *puStack_1b0 = 0;
  if (ppuVar20 != (undefined8 **)0x0) {
    ppuVar11 = ppuVar20;
    FUN_1094605a0();
  }
  plVar9 = plVar16;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10945f880;
  puStack_210 = (undefined8 *)(plVar9[2] - plVar9[1] >> 3);
  ppuStack_1f0 = param_3;
  ppuStack_1e8 = ppuVar20;
  plStack_1e0 = plVar16;
  puStack_1d8 = puVar18;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if (*ppuVar11 < puStack_210) {
    FUN_10945f254(auStack_208,&puStack_210);
    FUN_10945f3b8(extraout_x8,plVar9,auStack_208);
    func_0x0001074c71f0(auStack_208,uStack_200);
  }
  else {
    lVar12 = *plVar9;
    puVar10 = (undefined4 *)0x68;
    __Znwm();
    *puVar10 = (int)lVar12;
    *(undefined1 *)(puVar10 + 0x14) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined8 *)(puVar10 + 0xc) = 0;
    *(undefined8 *)(puVar10 + 10) = 0;
    *(undefined8 *)(puVar10 + 0x16) = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0;
    *extraout_x8 = puVar10;
    FUN_10945ee2c();
  }
  return;
}



/* Entry: 10945f880; end: 10945f95f;  */

void FUN_10945f880(undefined8 *param_1,undefined4 *param_2,ulong *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  uStack_50 = *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3;
  if (*param_3 < uStack_50) {
    FUN_10945f254(auStack_48,&uStack_50);
    FUN_10945f3b8(param_1,param_2,auStack_48);
    func_0x0001074c71f0(auStack_48,uStack_40);
  }
  else {
    uVar1 = *param_2;
    puVar2 = (undefined4 *)0x68;
    __Znwm();
    *puVar2 = uVar1;
    *(undefined1 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *param_1 = puVar2;
    FUN_10945ee2c();
  }
  return;
}



/* Entry: 10945f960; end: 10945f9cb;  */

undefined8 * FUN_10945f960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x0001074714f0(param_1 + 2,param_2 + 2);
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



/* Entry: 10945f9cc; end: 10945fa3b;  */

void FUN_10945f9cc(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_109265f60(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10945fa3c; end: 10945fa9f;  */

void FUN_10945fa3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0xc0;
        FUN_10945faa0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    _free(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10945faa0; end: 10945fb3f;  */

void FUN_10945faa0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
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
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x54));
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 == param_1 + 0xa0 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10945fb40; end: 10945fba7;  */

void FUN_10945fb40(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0xc0;
        FUN_10945faa0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar1);
    return;
  }
  return;
}



/* Entry: 10945fba8; end: 10945fbf7;  */

void FUN_10945fba8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10945fbf8(uVar1);
    lVar2 = uVar1 + 0xd0;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10942cbb8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10945fbf8; end: 10945fcc3;  */

undefined8 * FUN_10945fbf8(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  uVar9 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  uVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar9;
  lVar4 = param_2[0x13];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  param_1[0x16] = 0;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
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
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar5 = (undefined8 *)param_2[0x15];
    puVar6 = (undefined8 *)param_1[0x15];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868();
  }
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 10945fcc4; end: 10945fcd7;  */

long * FUN_10945fcc4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x40;
    FUN_109346454();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10945fcd8; end: 10945fd6b;  */

long * FUN_10945fcd8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x40;
    FUN_109346454();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10945fd6c; end: 10945fd9f;  */

void FUN_10945fd6c(void)

{
  long *plVar1;
  undefined *puVar2;
  
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar1 = (long)(PTR___ZTVSt19bad_optional_access_110346b78 + 0x10);
  puVar2 = PTR___ZTISt19bad_optional_access_110346a50;
  ___cxa_throw();
  if (puVar2 != (undefined *)0x0) {
    FUN_10945fda0();
    FUN_10945fda0(plVar1,*(undefined8 *)(puVar2 + 8));
    func_0x000107c34ee4(puVar2 + 0x28,*(undefined8 *)(puVar2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return;
  }
  return;
}



/* Entry: 10945fda0; end: 10945fdeb;  */

void FUN_10945fda0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10945fda0(param_1,*param_2);
    FUN_10945fda0(param_1,param_2[1]);
    func_0x000107c34ee4(param_2 + 5,param_2[6]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10945fdec; end: 109460067;  */

long * FUN_10945fdec(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x21;
  long lVar13;
  long unaff_x23;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  lVar10 = param_1[1];
  lVar13 = lVar10 - *param_1;
  uVar7 = (lVar13 >> 6) * -0x5555555555555555 + 1;
  if (0x155555555555555 < uVar7) {
    FUN_109460118();
    if (lVar10 != unaff_x23) {
      do {
        FUN_10945faa0(unaff_x21);
        unaff_x21 = unaff_x21 + -0xc0;
        lVar13 = lVar13 + 0xc0;
      } while (lVar13 != 0);
    }
    FUN_10946012c(&puStack_88);
    __Unwind_Resume();
    lVar13 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar13;
    lVar13 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar13;
    lVar10 = param_2[5];
    lVar13 = param_2[4];
    lVar20 = param_2[6];
    lVar24 = param_2[9];
    lVar22 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = lVar20;
    param_1[9] = lVar24;
    param_1[8] = lVar22;
    param_1[5] = lVar10;
    param_1[4] = lVar13;
    lVar10 = param_2[0xb];
    lVar13 = param_2[10];
    lVar20 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar20;
    lVar20 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = lVar20;
    lVar22 = param_2[0x11];
    lVar20 = param_2[0x10];
    param_1[0x14] = 0;
    param_1[0xb] = lVar10;
    param_1[10] = lVar13;
    param_1[0x15] = 0;
    piVar6 = (int *)((long)param_2 + 0x54);
    iVar2 = *piVar6;
    param_1[0x11] = lVar22;
    param_1[0x10] = lVar20;
    param_1[0x12] = (long)(param_1 + 0xb);
    param_1[0x13] = (long)(param_1 + 0x14);
    plVar8 = (long *)param_2[0x13];
    if (iVar2 < 3) {
      param_1[0x14] = *plVar8;
      param_1[0x15] = plVar8[1];
    }
    else {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = (long)plVar8;
      param_2[0x12] = (long)(param_2 + 0xb);
      param_2[0x13] = (long)(param_2 + 0x14);
    }
    *(undefined4 *)(param_2 + 10) = 0x42ff0000;
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    piVar6[0] = 0;
    piVar6[1] = 0;
    *(undefined8 *)((long)param_2 + 0x6c) = 0;
    *(undefined8 *)((long)param_2 + 100) = 0;
    *(undefined8 *)((long)param_2 + 0x7c) = 0;
    *(undefined8 *)((long)param_2 + 0x74) = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_1[0x16] = param_2[0x16];
    return param_1;
  }
  lVar10 = param_1[2] - *param_1 >> 6;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
    uVar11 = uVar7;
  }
  if (0xaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar11 = 0x155555555555555;
  }
  plStack_68 = param_1;
  if (uVar11 != 0) {
    if (uVar11 < 0x155555555555556) {
      puVar5 = (undefined8 *)(uVar11 * 0xc0);
      _malloc();
      if (puVar5 != (undefined8 *)0x0) goto LAB_10945feb4;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  puVar5 = (undefined8 *)0x0;
LAB_10945feb4:
  lVar13 = (long)puVar5 + lVar13;
  puStack_88 = puVar5;
  puStack_80 = (undefined8 *)lVar13;
  puStack_70 = puVar5 + uVar11 * 0x18;
  FUN_109460068(lVar13,param_2);
  puVar12 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar14 = (undefined8 *)(lVar13 - ((long)puVar1 - (long)puVar12));
  plStack_78 = (long *)(lVar13 + 0xc0);
  plVar8 = plStack_78;
  puVar15 = puVar14;
  puVar16 = puVar12;
  puVar5 = puVar5 + uVar11 * 0x18;
  if (puVar1 != puVar12) {
    do {
      uVar17 = *puVar16;
      puVar15[1] = puVar16[1];
      *puVar15 = uVar17;
      uVar17 = puVar16[2];
      puVar15[3] = puVar16[3];
      puVar15[2] = uVar17;
      uVar18 = puVar16[5];
      uVar17 = puVar16[4];
      uVar19 = puVar16[6];
      uVar23 = puVar16[9];
      uVar21 = puVar16[8];
      puVar15[7] = puVar16[7];
      puVar15[6] = uVar19;
      puVar15[9] = uVar23;
      puVar15[8] = uVar21;
      puVar15[5] = uVar18;
      puVar15[4] = uVar17;
      uVar18 = puVar16[0xb];
      uVar17 = puVar16[10];
      uVar19 = puVar16[0xc];
      puVar15[0xd] = puVar16[0xd];
      puVar15[0xc] = uVar19;
      uVar19 = puVar16[0xe];
      puVar15[0xf] = puVar16[0xf];
      puVar15[0xe] = uVar19;
      lVar13 = puVar16[0x11];
      uVar21 = puVar16[0x11];
      uVar19 = puVar16[0x10];
      puVar15[0x14] = 0;
      puVar15[0x11] = uVar21;
      puVar15[0x10] = uVar19;
      puVar15[0x12] = puVar15 + 0xb;
      puVar15[0x13] = puVar15 + 0x14;
      puVar15[0x15] = 0;
      puVar15[0xb] = uVar18;
      puVar15[10] = uVar17;
      if (lVar13 != 0) {
        piVar6 = (int *)(lVar13 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = *piVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar16 + 0x54) < 3) {
        puVar5 = (undefined8 *)puVar16[0x13];
        puVar9 = (undefined8 *)puVar15[0x13];
        *puVar9 = *puVar5;
        puVar9[1] = puVar5[1];
      }
      else {
        *(undefined4 *)((long)puVar15 + 0x54) = 0;
        func_0x000109a84868();
      }
      puVar5 = puVar16 + 0x18;
      puVar15[0x16] = puVar16[0x16];
      puVar15 = puVar15 + 0x18;
      puVar16 = puVar5;
    } while (puVar5 != puVar1);
    do {
      FUN_10945faa0(puVar12);
      puVar12 = puVar12 + 0x18;
    } while (puVar12 != puVar1);
    puVar12 = (undefined8 *)*param_1;
    plVar8 = plStack_78;
    puVar5 = puStack_70;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)plVar8;
  puStack_70 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar5;
  puStack_88 = puVar12;
  puStack_80 = puVar12;
  plStack_78 = puVar12;
  FUN_10946012c(&puStack_88);
  return plVar8;
}



/* Entry: 109460068; end: 109460117;  */

void FUN_109460068(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar6 = param_2[6];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  uVar6 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar6;
  uVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar6;
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0x14] = 0;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  param_1[0x15] = 0;
  piVar2 = (int *)((long)param_2 + 0x54);
  iVar1 = *piVar2;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0x12] = param_1 + 0xb;
  param_1[0x13] = param_1 + 0x14;
  puVar3 = (undefined8 *)param_2[0x13];
  if (iVar1 < 3) {
    param_1[0x14] = *puVar3;
    param_1[0x15] = puVar3[1];
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = puVar3;
    param_2[0x12] = param_2 + 0xb;
    param_2[0x13] = param_2 + 0x14;
  }
  *(undefined4 *)(param_2 + 10) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x5c) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x6c) = 0;
  *(undefined8 *)((long)param_2 + 100) = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_1[0x16] = param_2[0x16];
  return;
}



/* Entry: 109460118; end: 10946012b;  */

long * FUN_109460118(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0xc0;
    FUN_10945faa0();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    _free();
  }
  return plVar2;
}



/* Entry: 10946012c; end: 109460177;  */

long * FUN_10946012c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xc0;
    FUN_10945faa0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 109460178; end: 109460347;  */

long * FUN_109460178(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104c4f740();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109460348; end: 10946038f;  */

long * FUN_109460348(long *param_1)

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



/* Entry: 109460390; end: 1094604a3;  */

undefined8 * FUN_109460390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1094604a4(param_1 + 0x13,param_2[0x13],param_2[0x14],
                ((long)(param_2[0x14] - param_2[0x13]) >> 3) * -0x5555555555555555);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_109285684(param_1 + 0x16,param_2[0x16],param_2[0x17],
                (long)(param_2[0x17] - param_2[0x16]) >> 2);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_1092cc0dc();
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



/* Entry: 1094604a4; end: 10946051f;  */

void FUN_1094604a4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    func_0x000109455020(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 3;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109460520; end: 10946059f;  */

undefined8 * FUN_109460520(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10940097c(param_1);
    puVar1 = (undefined8 *)param_1[1];
    lVar3 = param_2 << 3;
    uVar4 = *param_3;
    puVar2 = puVar1;
    do {
      *puVar2 = uVar4;
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1094605a0; end: 1094606f3;  */

void FUN_1094605a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    *(long *)(param_2 + 0x60) = 0;
    if (lVar1 != 0) {
      FUN_109460b68();
    }
    lVar1 = *(long *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = 0;
    if (lVar1 != 0) {
      func_0x000109460618();
    }
    lStack_28 = param_2 + 0x20;
    func_0x0001094606b4(&lStack_28);
    lStack_28 = param_2 + 8;
    FUN_1094606f4(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 1094606f4; end: 109460767;  */

void FUN_1094606f4(long *param_1)

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
        lVar2 = lVar2 + -8;
        FUN_109454df4(lVar2,0);
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



/* Entry: 109460768; end: 1094607af;  */

long * FUN_109460768(long *param_1)

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



/* Entry: 1094607b0; end: 109460a1b;  */

double * FUN_1094607b0(double param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double extraout_d1;
  undefined1 auVar14 [16];
  double extraout_d2;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined4 auStack_128 [2];
  double *pdStack_120;
  undefined8 uStack_118;
  double *pdStack_110;
  double *pdStack_108;
  double *pdStack_100;
  double *pdStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  long lStack_48;
  
  iVar8 = (int)param_4;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_2 = 0;
  param_2[2] = *param_3;
  param_2[4] = param_3[2];
  dVar9 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = dVar9;
  dVar9 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = dVar9;
  dVar9 = param_3[8];
  param_2[0xb] = param_3[9];
  param_2[10] = dVar9;
  dVar9 = param_3[10];
  param_2[0xd] = param_3[0xb];
  param_2[0xc] = dVar9;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 0xc);
  FUN_10937da58(param_2 + 0xf,param_3 + 0xd);
  dVar10 = param_3[0x10];
  dVar9 = param_3[0x12];
  dVar12 = param_3[0x13];
  param_2[0x13] = param_3[0x11];
  param_2[0x12] = dVar10;
  param_2[0x15] = dVar12;
  param_2[0x14] = dVar9;
  dVar12 = param_3[0x15];
  dVar9 = param_3[0x14];
  param_2[0x18] = param_3[0x16];
  param_2[0x17] = dVar12;
  param_2[0x16] = dVar9;
  dVar9 = param_3[0x1c];
  dVar12 = param_3[0x1d];
  dVar13 = param_3[0x1f];
  dVar11 = param_3[0x1e];
  dVar10 = param_3[0x1a];
  dVar4 = param_3[0x1b];
  param_2[0x22] = param_3[0x20];
  param_2[0x1f] = dVar12;
  param_2[0x1e] = dVar9;
  param_2[0x21] = dVar13;
  param_2[0x20] = dVar11;
  param_2[0x1d] = dVar4;
  param_2[0x1c] = dVar10;
  dVar9 = param_3[0x18];
  param_2[0x1b] = param_3[0x19];
  param_2[0x1a] = dVar9;
  dVar9 = param_3[0x23];
  dVar12 = param_3[0x22];
  param_2[0x25] = param_3[0x23];
  param_2[0x24] = dVar12;
  if (dVar9 != 0.0) {
    plVar1 = (long *)((long)dVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  dVar10 = param_3[0x24];
  dVar9 = param_3[0x26];
  dVar12 = param_3[0x27];
  param_2[0x27] = param_3[0x25];
  param_2[0x26] = dVar10;
  param_2[0x29] = dVar12;
  param_2[0x28] = dVar9;
  pdVar7 = param_3 + 0x28;
  FUN_109460390(param_2 + 0x2a);
  dVar13 = param_3[0x47];
  dVar11 = param_3[0x46];
  dVar9 = param_3[0x48];
  dVar12 = param_3[0x49];
  dVar10 = param_3[0x4a];
  dVar4 = param_3[0x4b];
  uVar16 = *(undefined8 *)((long)param_3 + 0x25a);
  *(undefined8 *)((long)param_2 + 0x272) = *(undefined8 *)((long)param_3 + 0x262);
  *(undefined8 *)((long)param_2 + 0x26a) = uVar16;
  param_2[0x4b] = dVar12;
  param_2[0x4a] = dVar9;
  param_2[0x4d] = dVar4;
  param_2[0x4c] = dVar10;
  param_2[0x49] = dVar13;
  param_2[0x48] = dVar11;
  *(undefined1 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x52) = 0;
  if (*(char *)(param_3 + 0x50) == '\x01') {
    dVar9 = param_3[0x4f];
    dVar12 = param_3[0x4e];
    param_2[0x51] = param_3[0x4f];
    param_2[0x50] = dVar12;
    if (dVar9 != 0.0) {
      plVar1 = (long *)((long)dVar9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_2 + 0x52) = 1;
  }
  param_2[0x54] = param_1;
  dVar10 = *param_4;
  dVar9 = param_4[2];
  dVar12 = param_4[3];
  param_2[0x57] = param_4[1];
  param_2[0x56] = dVar10;
  param_2[0x59] = dVar12;
  param_2[0x58] = dVar9;
  dVar12 = param_4[5];
  dVar9 = param_4[4];
  param_2[0x5c] = param_4[6];
  param_2[0x5b] = dVar12;
  param_2[0x5a] = dVar9;
  dVar9 = param_4[0xc];
  dVar12 = param_4[0xd];
  dVar13 = param_4[0xf];
  dVar11 = param_4[0xe];
  dVar10 = param_4[10];
  dVar4 = param_4[0xb];
  param_2[0x66] = param_4[0x10];
  param_2[99] = dVar12;
  param_2[0x62] = dVar9;
  param_2[0x65] = dVar13;
  param_2[100] = dVar11;
  param_2[0x61] = dVar4;
  param_2[0x60] = dVar10;
  dVar9 = param_4[8];
  param_2[0x5f] = param_4[9];
  param_2[0x5e] = dVar9;
  FUN_10937f718(&dStack_90,param_4);
  param_2[0x69] = dStack_88;
  param_2[0x68] = dStack_90;
  param_2[0x6b] = dStack_78;
  param_2[0x6a] = dStack_80;
  param_2[0x6d] = dStack_68;
  param_2[0x6c] = dStack_70;
  param_2[0x6e] = dStack_60;
  pdVar5 = param_2 + 0x68;
  func_0x00010937fbc4(&dStack_d8);
  param_2[0x75] = dStack_b0;
  param_2[0x74] = dStack_b8;
  param_2[0x77] = dStack_a0;
  param_2[0x76] = dStack_a8;
  param_2[0x78] = dStack_98;
  param_2[0x71] = dStack_d0;
  param_2[0x70] = dStack_d8;
  param_2[0x73] = dStack_c0;
  param_2[0x72] = dStack_c8;
  *(undefined1 *)(param_2 + 0x88) = 0;
  dVar9 = 0.0;
  param_2[0x8a] = 0.0;
  param_2[0x89] = 0.0;
  param_2[0x8c] = 0.0;
  param_2[0x8b] = 0.0;
  param_2[0x7b] = 0.0;
  param_2[0x7a] = 0.0;
  param_2[0x7d] = 0.0;
  param_2[0x7c] = 0.0;
  param_2[0x7f] = 0.0;
  param_2[0x7e] = 0.0;
  param_2[0x81] = 0.0;
  param_2[0x80] = 0.0;
  *(undefined8 *)((long)param_2 + 0x411) = 0;
  *(undefined8 *)((long)param_2 + 0x409) = 0;
  *(undefined4 *)(param_2 + 0x8d) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000109454f14(param_2 + 0x24);
  _free(param_2[0xf]);
  pdVar6 = pdVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_109460a1c;
  dVar12 = *pdVar7;
  pdVar6[1] = pdVar7[1];
  *pdVar6 = dVar12;
  pdVar6[4] = dVar9;
  *(int *)(pdVar6 + 5) = iVar8;
  pdVar6[6] = extraout_d1;
  pdVar6[7] = extraout_d2;
  *(undefined4 *)(pdVar6 + 10) = 0x42ff0000;
  *(undefined8 *)((long)pdVar6 + 0x5c) = 0;
  *(undefined8 *)((long)pdVar6 + 0x54) = 0;
  *(undefined8 *)((long)pdVar6 + 0x6c) = 0;
  *(undefined8 *)((long)pdVar6 + 100) = 0;
  *(undefined8 *)((long)pdVar6 + 0x7c) = 0;
  *(undefined8 *)((long)pdVar6 + 0x74) = 0;
  pdVar6[0x14] = 0.0;
  pdVar6[0x11] = 0.0;
  pdVar6[0x10] = 0.0;
  pdVar6[0x12] = (double)(pdVar6 + 0xb);
  pdVar6[0x13] = (double)(pdVar6 + 0x14);
  pdVar6[0x15] = 0.0;
  dVar9 = extraout_d2;
  pdStack_110 = param_3;
  pdStack_108 = pdVar5;
  pdStack_100 = param_2 + 2;
  pdStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _pow(extraout_d2,(double)iVar8);
  pdVar6[8] = dVar9;
  pdVar6[9] = 1.0 / dVar9;
  auVar15 = NEON_fmov(0x3fe0000000000000,8);
  auVar14 = NEON_fmov(0xbfe0000000000000,8);
  pdVar6[3] = (pdVar6[1] + auVar15._8_8_) * dVar9 + auVar14._8_8_;
  pdVar6[2] = (*pdVar6 + auVar15._0_8_) * dVar9 + auVar14._0_8_;
  auStack_128[0] = 0x2010000;
  uStack_118 = 0;
  pdStack_120 = pdVar6 + 10;
  FUN_109a479a0(param_5,auStack_128);
  return pdVar6;
}



/* Entry: 109460a1c; end: 109460af7;  */

double * FUN_109460a1c(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                      undefined4 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 auStack_48 [2];
  double *pdStack_40;
  undefined8 uStack_38;
  
  dVar3 = *param_5;
  param_4[1] = param_5[1];
  *param_4 = dVar3;
  param_4[4] = param_1;
  *(undefined4 *)(param_4 + 5) = param_6;
  param_4[6] = param_2;
  param_4[7] = param_3;
  *(undefined4 *)(param_4 + 10) = 0x42ff0000;
  *(undefined8 *)((long)param_4 + 0x5c) = 0;
  *(undefined8 *)((long)param_4 + 0x54) = 0;
  *(undefined8 *)((long)param_4 + 0x6c) = 0;
  *(undefined8 *)((long)param_4 + 100) = 0;
  *(undefined8 *)((long)param_4 + 0x7c) = 0;
  *(undefined8 *)((long)param_4 + 0x74) = 0;
  param_4[0x14] = 0.0;
  param_4[0x11] = 0.0;
  param_4[0x10] = 0.0;
  param_4[0x12] = (double)(param_4 + 0xb);
  param_4[0x13] = (double)(param_4 + 0x14);
  param_4[0x15] = 0.0;
  _pow();
  param_4[8] = param_3;
  param_4[9] = 1.0 / param_3;
  auVar2 = NEON_fmov(0x3fe0000000000000,8);
  auVar1 = NEON_fmov(0xbfe0000000000000,8);
  param_4[3] = (param_4[1] + auVar2._8_8_) * param_3 + auVar1._8_8_;
  param_4[2] = (*param_4 + auVar2._0_8_) * param_3 + auVar1._0_8_;
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  pdStack_40 = param_4 + 10;
  FUN_109a479a0(param_7,auStack_48);
  return param_4;
}



/* Entry: 109460af8; end: 109460b67;  */

void FUN_109460af8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x40;
        FUN_109346454();
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



/* Entry: 109460b68; end: 109460c3b;  */

void FUN_109460b68(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    FUN_109347bb8(param_2 + 0x18);
    lStack_28 = param_2;
    FUN_109460af8(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 109460c3c; end: 109460c8f;  */

void FUN_109460c3c(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                  undefined8 *param_5)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd_1103464c0)(*param_5);
    return;
  }
  FUN_10926db08(&ppuStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*param_5,&ppuStack_150);
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



/* Entry: 109460c90; end: 109460c9b;  */

int FUN_109460c90(double *param_1)

{
  return (int)*param_1;
}



/* Entry: 109460c9c; end: 109460ddb;  */

void FUN_109460c9c(undefined8 param_1,undefined8 *param_2,int param_3)

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
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*param_2,&ppuStack_150);
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



/* Entry: 109460ddc; end: 109460e77;  */

undefined1  [16]
FUN_109460ddc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_109381fc0(param_1,&uStack_38,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x48;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    FUN_109381f6c(param_1,uStack_38,plVar2,lVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 109460e78; end: 10946187b;  */

void FUN_109460e78(undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long *plVar22;
  
  iVar19 = (int)param_5;
  iVar17 = (int)param_6;
  switch(*param_2) {
  case 0:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    pcVar6 = "null";
    break;
  case 1:
    plVar3 = (long *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0) {
      UNRECOVERED_JUMPTABLE = (code *)puVar10[1];
      pcVar6 = "{}";
      goto code_r0x000109461190;
    }
    if (param_3 != 0) {
      (*(code *)puVar10[1])(plVar3,&DAT_10f38bea1,2);
      uVar13 = iVar17 + iVar19;
      uVar20 = (ulong)uVar13;
      plVar3 = param_1 + 0x4c;
      cVar1 = *(char *)((long)param_1 + 0x277);
      if (cVar1 < 0) {
        uVar12 = param_1[0x4d];
        if (uVar12 < uVar20) goto code_r0x000109461840;
      }
      else if ((uint)(int)cVar1 <= uVar13 && uVar13 != (int)cVar1) {
        uVar12 = (ulong)(int)cVar1;
code_r0x000109461840:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (plVar3,uVar12 << 1,0x20);
      }
      plVar7 = (long *)**(undefined8 **)(param_2 + 8);
      if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
        uVar12 = 0;
        do {
          plVar4 = plVar3;
          if (*(char *)((long)param_1 + 0x277) < '\0') {
            plVar4 = (long *)*plVar3;
          }
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar4,uVar20);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
          FUN_109461a14(param_1,plVar7 + 4,param_4);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e057,3);
          FUN_109460e78(param_1,plVar7 + 7,1,param_4,param_5,uVar20);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f56e05b,2);
          plVar4 = (long *)plVar7[1];
          plVar22 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar22[2];
              bVar2 = (long *)*plVar7 != plVar22;
              plVar22 = plVar7;
            } while (bVar2);
          }
          else {
            do {
              plVar7 = plVar4;
              plVar4 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
      }
      plVar4 = plVar3;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar4 = (long *)*plVar3;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar4,uVar20);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
      FUN_109461a14(param_1,plVar7 + 4,param_4);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e057,3);
      FUN_109460e78(param_1,plVar7 + 7,1,param_4,param_5,uVar20);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar7 = (long *)*param_1;
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
      goto code_r0x0001094617fc;
    }
    (*(code *)*puVar10)(plVar3,0x7b);
    plVar3 = (long *)**(undefined8 **)(param_2 + 8);
    if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
      uVar20 = 0;
      do {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_109461a14(param_1,plVar3 + 4,param_4);
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
        FUN_109460e78(param_1,plVar3 + 7,0,param_4,param_5,param_6);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
        plVar7 = (long *)plVar3[1];
        plVar4 = plVar3;
        if ((long *)plVar3[1] == (long *)0x0) {
          do {
            plVar3 = (long *)plVar4[2];
            bVar2 = (long *)*plVar3 != plVar4;
            plVar4 = plVar3;
          } while (bVar2);
        }
        else {
          do {
            plVar3 = plVar7;
            plVar7 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_109461a14(param_1,plVar3 + 4,param_4);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\":",2);
    FUN_109460e78(param_1,plVar3 + 7,0,param_4,param_5,param_6);
    goto code_r0x000109461800;
  case 2:
    plVar3 = (long *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (**(long **)(param_2 + 8) != (*(long **)(param_2 + 8))[1]) {
      if (param_3 == 0) {
        (*(code *)*puVar10)(plVar3,0x5b);
        plVar3 = *(long **)(param_2 + 8);
        for (lVar9 = *plVar3; lVar9 != plVar3[1] + -0x10; lVar9 = lVar9 + 0x10) {
          FUN_109460e78(param_1,lVar9,0,param_4,param_5,param_6);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          plVar3 = *(long **)(param_2 + 8);
        }
        FUN_109460e78(param_1,plVar3[1] + -0x10,0,param_4,param_5,param_6);
      }
      else {
        (*(code *)puVar10[1])(plVar3,&UNK_10f56e061,2);
        uVar13 = iVar17 + iVar19;
        uVar20 = (ulong)uVar13;
        plVar3 = param_1 + 0x4c;
        cVar1 = *(char *)((long)param_1 + 0x277);
        if (cVar1 < 0) {
          uVar12 = param_1[0x4d];
          if (uVar12 < uVar20) goto code_r0x00010946182c;
        }
        else if ((uint)(int)cVar1 <= uVar13 && uVar13 != (int)cVar1) {
          uVar12 = (ulong)(int)cVar1;
code_r0x00010946182c:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (plVar3,uVar12 << 1,0x20);
        }
        lVar9 = **(long **)(param_2 + 8);
        if (lVar9 != (*(long **)(param_2 + 8))[1] + -0x10) {
          do {
            plVar7 = plVar3;
            if (*(char *)((long)param_1 + 0x277) < '\0') {
              plVar7 = (long *)*plVar3;
            }
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
            FUN_109460e78(param_1,lVar9,1,param_4,param_5,uVar20);
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f56e05b,2);
            lVar9 = lVar9 + 0x10;
          } while (lVar9 != *(long *)(*(long *)(param_2 + 8) + 8) + -0x10);
        }
        plVar7 = plVar3;
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar7 = (long *)*plVar3;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
        FUN_109460e78(param_1,*(long *)(*(long *)(param_2 + 8) + 8) + -0x10,1,param_4,param_5,uVar20
                     );
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (*(char *)((long)param_1 + 0x277) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar3,param_6 & 0xffffffff);
      }
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
      uVar8 = 0x5d;
      goto code_r0x000109461810;
    }
    UNRECOVERED_JUMPTABLE = (code *)puVar10[1];
    pcVar6 = "[]";
code_r0x000109461190:
    uVar8 = 2;
    goto code_r0x000109461258;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_109461a14(param_1,*(undefined8 *)(param_2 + 8),param_4);
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    uVar8 = 0x22;
    goto code_r0x000109461810;
  case 4:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    if (param_2[8] != '\x01') {
      pcVar6 = "false";
code_r0x000109461254:
      uVar8 = 5;
      goto code_r0x000109461258;
    }
    pcVar6 = "true";
    break;
  case 5:
    uVar20 = *(ulong *)(param_2 + 8);
    if (uVar20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001094620b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
      return;
    }
    puVar10 = param_1 + 2;
    if ((long)uVar20 < 0) {
      *(undefined1 *)puVar10 = 0x2d;
      uVar20 = -uVar20;
      if (uVar20 < 10) {
        iVar19 = 1;
      }
      else {
        uVar12 = uVar20;
        iVar17 = 4;
        do {
          iVar19 = iVar17;
          if (uVar12 < 100) {
            iVar19 = iVar19 + -2;
            goto code_r0x0001094621a4;
          }
          if (uVar12 < 1000) {
            iVar19 = iVar19 + -1;
            goto code_r0x0001094621a4;
          }
          if (uVar12 >> 4 < 0x271) goto code_r0x0001094621a4;
          bVar2 = 99999 < uVar12;
          uVar12 = uVar12 / 10000;
          iVar17 = iVar19 + 4;
        } while (bVar2);
        iVar19 = iVar19 + 1;
      }
code_r0x0001094621a4:
      uVar13 = iVar19 + 1;
code_r0x0001094621a8:
      puVar15 = (undefined2 *)((long)puVar10 + (ulong)uVar13);
      if (99 < uVar20) {
        do {
          uVar12 = uVar20 / 100;
          puVar15 = puVar15 + -1;
          *puVar15 = *(undefined2 *)(&UNK_10dfca7dc + (uVar20 % 100) * 2);
          uVar16 = uVar20 >> 4;
          uVar20 = uVar12;
        } while (0x270 < uVar16);
      }
      if (9 < uVar20) {
        puVar15[-1] = *(undefined2 *)(&UNK_10dfca7dc + uVar20 * 2);
        goto code_r0x000109462224;
      }
    }
    else {
      if (9 < uVar20) {
        uVar12 = uVar20;
        uVar14 = 4;
        do {
          uVar13 = uVar14;
          if (uVar12 < 100) {
            uVar13 = uVar13 - 2;
            goto code_r0x0001094621a8;
          }
          if (uVar12 < 1000) {
            uVar13 = uVar13 - 1;
            goto code_r0x0001094621a8;
          }
          if (uVar12 >> 4 < 0x271) goto code_r0x0001094621a8;
          bVar2 = 99999 < uVar12;
          uVar12 = uVar12 / 10000;
          uVar14 = uVar13 + 4;
        } while (bVar2);
        uVar13 = uVar13 + 1;
        goto code_r0x0001094621a8;
      }
      puVar15 = (undefined2 *)((long)param_1 + 0x11);
      uVar13 = 1;
    }
    *(byte *)((long)puVar15 + -1) = (byte)uVar20 | 0x30;
code_r0x000109462224:
                    /* WARNING: Could not recover jumptable at 0x000109462230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar10,uVar13);
    return;
  case 6:
    uVar20 = *(ulong *)(param_2 + 8);
    if (uVar20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109462264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
      return;
    }
    if (uVar20 < 10) {
      puVar15 = (undefined2 *)((long)param_1 + 0x11);
      uVar14 = 1;
    }
    else {
      uVar12 = uVar20;
      uVar13 = 4;
      do {
        uVar14 = uVar13;
        if (uVar12 < 100) {
          uVar14 = uVar14 - 2;
          goto code_r0x0001094622c8;
        }
        if (uVar12 < 1000) {
          uVar14 = uVar14 - 1;
          goto code_r0x0001094622c8;
        }
        if (uVar12 >> 4 < 0x271) goto code_r0x0001094622c8;
        uVar16 = uVar12 >> 5;
        uVar12 = uVar12 / 10000;
        uVar13 = uVar14 + 4;
      } while (0xc34 < uVar16);
      uVar14 = uVar14 + 1;
code_r0x0001094622c8:
      puVar15 = (undefined2 *)((long)(param_1 + 2) + (ulong)uVar14);
      if (99 < uVar20) {
        do {
          uVar12 = uVar20 / 100;
          puVar15 = puVar15 + -1;
          *puVar15 = *(undefined2 *)(&UNK_10dfca8a4 + (uVar20 % 100) * 2);
          uVar16 = uVar20 >> 4;
          uVar20 = uVar12;
        } while (0x270 < uVar16);
      }
      if (9 < uVar20) {
        puVar15[-1] = *(undefined2 *)(&UNK_10dfca8a4 + uVar20 * 2);
        goto code_r0x000109462344;
      }
    }
    *(byte *)((long)puVar15 + -1) = (byte)uVar20 | 0x30;
code_r0x000109462344:
                    /* WARNING: Could not recover jumptable at 0x000109462350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar14);
    return;
  case 7:
    if ((*(ulong *)(param_2 + 8) & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      pcVar6 = (char *)(param_1 + 2);
      pcVar5 = pcVar6;
      FUN_1094623c8(pcVar6,param_1 + 10);
      plVar3 = (long *)*param_1;
      lVar9 = (long)pcVar5 - (long)pcVar6;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    }
    else {
      plVar3 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
      pcVar6 = "null";
      lVar9 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001094623c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,pcVar6,lVar9);
    return;
  case 8:
    plVar3 = (long *)*param_1;
    if (param_3 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3,&UNK_10f56e07f,10);
      puVar18 = (undefined1 *)**(long **)(param_2 + 8);
      puVar11 = (undefined1 *)(*(long **)(param_2 + 8))[1];
      if (puVar18 != puVar11) {
        for (; puVar18 != puVar11 + -1; puVar18 = puVar18 + 1) {
          FUN_109461fe0(param_1,*puVar18);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar11 = *(undefined1 **)(*(long *)(param_2 + 8) + 8);
        }
        FUN_109461fe0(param_1,puVar11[-1]);
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e08a,0xc);
      if (*(char *)(*(long *)(param_2 + 8) + 0x19) == '\x01') {
        FUN_109461fe0(param_1,*(undefined1 *)(*(long *)(param_2 + 8) + 0x18));
        goto code_r0x000109461800;
      }
      plVar3 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
      pcVar6 = "null}";
      goto code_r0x000109461254;
    }
    (**(code **)(*plVar3 + 8))(plVar3,&DAT_10f38bea1,2);
    uVar13 = iVar17 + iVar19;
    uVar20 = (ulong)uVar13;
    plVar3 = param_1 + 0x4c;
    cVar1 = *(char *)((long)param_1 + 0x277);
    plVar7 = plVar3;
    if (cVar1 < 0) {
      uVar12 = param_1[0x4d];
      if (uVar12 < uVar20) goto code_r0x000109461858;
      plVar4 = (long *)*param_1;
code_r0x000109461284:
      plVar7 = (long *)*plVar3;
    }
    else if (uVar13 < (uint)(int)cVar1 || uVar13 == (int)cVar1) {
      plVar4 = (long *)*param_1;
    }
    else {
      uVar12 = (ulong)(int)cVar1;
code_r0x000109461858:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (plVar3,uVar12 << 1,0x20);
      plVar4 = (long *)*param_1;
      if (*(char *)((long)param_1 + 0x277) < '\0') goto code_r0x000109461284;
    }
    (**(code **)(*plVar4 + 8))(plVar4,plVar7,uVar20);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e064,10);
    puVar18 = (undefined1 *)**(long **)(param_2 + 8);
    puVar11 = (undefined1 *)(*(long **)(param_2 + 8))[1];
    if (puVar18 != puVar11) {
      if (puVar18 != puVar11 + -1) {
        do {
          puVar21 = puVar18 + 1;
          FUN_109461fe0(param_1,*puVar18);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_10f68f19e,2);
          puVar11 = *(undefined1 **)(*(long *)(param_2 + 8) + 8);
          puVar18 = puVar21;
        } while (puVar21 != puVar11 + -1);
      }
      FUN_109461fe0(param_1,puVar11[-1]);
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e06f,3);
    plVar7 = plVar3;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar7 = (long *)*plVar3;
    }
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar7,uVar20);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&UNK_10f56e073,0xb);
    if (*(char *)(*(long *)(param_2 + 8) + 0x19) == '\x01') {
      FUN_109461fe0(param_1,*(undefined1 *)(*(long *)(param_2 + 8) + 0x18));
    }
    else {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"null",4);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
    plVar7 = (long *)*param_1;
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
code_r0x0001094617fc:
    (*UNRECOVERED_JUMPTABLE)(plVar7,plVar3,param_6 & 0xffffffff);
code_r0x000109461800:
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    uVar8 = 0x7d;
code_r0x000109461810:
                    /* WARNING: Could not recover jumptable at 0x000109461828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar8);
    return;
  case 9:
    plVar3 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    pcVar6 = "<discarded>";
    uVar8 = 0xb;
    goto code_r0x000109461258;
  default:
    return;
  }
  uVar8 = 4;
code_r0x000109461258:
                    /* WARNING: Could not recover jumptable at 0x000109461270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,pcVar6,uVar8);
  return;
}



/* Entry: 10946187c; end: 1094619bb;  */

undefined8 *
FUN_10946187c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar2 = param_1;
  _localeconv();
  param_1[10] = puVar2;
  uVar3 = 0;
  if ((undefined1 *)puVar2[1] != (undefined1 *)0x0) {
    uVar3 = *(undefined1 *)puVar2[1];
  }
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  uVar3 = 0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    uVar3 = *(undefined1 *)*puVar2;
  }
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  *(undefined8 *)((long)param_1 + 0x5a) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined8 *)((long)param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)((long)param_1 + 0x82) = 0;
  *(undefined8 *)((long)param_1 + 0x7a) = 0;
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  *(undefined8 *)((long)param_1 + 0x8a) = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  *(undefined8 *)((long)param_1 + 0xaa) = 0;
  *(undefined8 *)((long)param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *(undefined8 *)((long)param_1 + 0xf2) = 0;
  *(undefined8 *)((long)param_1 + 0xea) = 0;
  *(undefined8 *)((long)param_1 + 0x102) = 0;
  *(undefined8 *)((long)param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x112) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x122) = 0;
  *(undefined8 *)((long)param_1 + 0x11a) = 0;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x12a) = 0;
  *(undefined8 *)((long)param_1 + 0x142) = 0;
  *(undefined8 *)((long)param_1 + 0x13a) = 0;
  *(undefined8 *)((long)param_1 + 0x152) = 0;
  *(undefined8 *)((long)param_1 + 0x14a) = 0;
  *(undefined8 *)((long)param_1 + 0x162) = 0;
  *(undefined8 *)((long)param_1 + 0x15a) = 0;
  *(undefined8 *)((long)param_1 + 0x172) = 0;
  *(undefined8 *)((long)param_1 + 0x16a) = 0;
  *(undefined8 *)((long)param_1 + 0x182) = 0;
  *(undefined8 *)((long)param_1 + 0x17a) = 0;
  *(undefined8 *)((long)param_1 + 0x192) = 0;
  *(undefined8 *)((long)param_1 + 0x18a) = 0;
  *(undefined8 *)((long)param_1 + 0x1a2) = 0;
  *(undefined8 *)((long)param_1 + 0x19a) = 0;
  *(undefined8 *)((long)param_1 + 0x1b2) = 0;
  *(undefined8 *)((long)param_1 + 0x1aa) = 0;
  *(undefined8 *)((long)param_1 + 0x1c2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ba) = 0;
  *(undefined8 *)((long)param_1 + 0x1d2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ca) = 0;
  *(undefined8 *)((long)param_1 + 0x1e2) = 0;
  *(undefined8 *)((long)param_1 + 0x1da) = 0;
  *(undefined8 *)((long)param_1 + 0x1f2) = 0;
  *(undefined8 *)((long)param_1 + 0x1ea) = 0;
  *(undefined8 *)((long)param_1 + 0x202) = 0;
  *(undefined8 *)((long)param_1 + 0x1fa) = 0;
  *(undefined8 *)((long)param_1 + 0x212) = 0;
  *(undefined8 *)((long)param_1 + 0x20a) = 0;
  *(undefined8 *)((long)param_1 + 0x222) = 0;
  *(undefined8 *)((long)param_1 + 0x21a) = 0;
  *(undefined8 *)((long)param_1 + 0x232) = 0;
  *(undefined8 *)((long)param_1 + 0x22a) = 0;
  *(undefined8 *)((long)param_1 + 0x242) = 0;
  *(undefined8 *)((long)param_1 + 0x23a) = 0;
  *(undefined8 *)((long)param_1 + 0x252) = 0;
  *(undefined8 *)((long)param_1 + 0x24a) = 0;
  *(undefined1 *)((long)param_1 + 0x25a) = param_3;
  puVar2 = (undefined8 *)0x208;
  __Znwm();
  param_1[0x4c] = puVar2;
  param_1[0x4e] = 0x8000000000000208;
  uVar4 = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3,
                                                  CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
  uVar1 = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3,
                                                  CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
  param_1[0x4d] = 0x200;
  puVar2[1] = uVar1;
  *puVar2 = uVar4;
  puVar2[3] = uVar1;
  puVar2[2] = uVar4;
  puVar2[5] = uVar1;
  puVar2[4] = uVar4;
  puVar2[7] = uVar1;
  puVar2[6] = uVar4;
  puVar2[9] = uVar1;
  puVar2[8] = uVar4;
  puVar2[0xb] = uVar1;
  puVar2[10] = uVar4;
  puVar2[0xd] = uVar1;
  puVar2[0xc] = uVar4;
  puVar2[0xf] = uVar1;
  puVar2[0xe] = uVar4;
  puVar2[0x11] = uVar1;
  puVar2[0x10] = uVar4;
  puVar2[0x13] = uVar1;
  puVar2[0x12] = uVar4;
  puVar2[0x15] = uVar1;
  puVar2[0x14] = uVar4;
  puVar2[0x17] = uVar1;
  puVar2[0x16] = uVar4;
  puVar2[0x19] = uVar1;
  puVar2[0x18] = uVar4;
  puVar2[0x1b] = uVar1;
  puVar2[0x1a] = uVar4;
  puVar2[0x1d] = uVar1;
  puVar2[0x1c] = uVar4;
  puVar2[0x1f] = uVar1;
  puVar2[0x1e] = uVar4;
  puVar2[0x21] = uVar1;
  puVar2[0x20] = uVar4;
  puVar2[0x23] = uVar1;
  puVar2[0x22] = uVar4;
  puVar2[0x25] = uVar1;
  puVar2[0x24] = uVar4;
  puVar2[0x27] = uVar1;
  puVar2[0x26] = uVar4;
  puVar2[0x29] = uVar1;
  puVar2[0x28] = uVar4;
  puVar2[0x2b] = uVar1;
  puVar2[0x2a] = uVar4;
  puVar2[0x2d] = uVar1;
  puVar2[0x2c] = uVar4;
  puVar2[0x2f] = uVar1;
  puVar2[0x2e] = uVar4;
  puVar2[0x31] = uVar1;
  puVar2[0x30] = uVar4;
  puVar2[0x33] = uVar1;
  puVar2[0x32] = uVar4;
  puVar2[0x35] = uVar1;
  puVar2[0x34] = uVar4;
  puVar2[0x37] = uVar1;
  puVar2[0x36] = uVar4;
  puVar2[0x39] = uVar1;
  puVar2[0x38] = uVar4;
  puVar2[0x3b] = uVar1;
  puVar2[0x3a] = uVar4;
  puVar2[0x3d] = uVar1;
  puVar2[0x3c] = uVar4;
  puVar2[0x3f] = uVar1;
  puVar2[0x3e] = uVar4;
  *(undefined1 *)(puVar2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4f) = param_4;
  return param_1;
}



/* Entry: 1094619bc; end: 109461a13;  */

long FUN_1094619bc(long param_1)

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



/* Entry: 109461a14; end: 109461fdf;  */

void FUN_109461a14(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar15;
  ulong uVar16;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  uint unaff_w25;
  long lVar20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong uStack_70;
  byte bStack_61;
  
  uVar18 = (ulong)*(char *)((long)param_2 + 0x17);
  uVar19 = param_2[1];
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar19 = uVar18;
  }
  if (uVar19 == 0) {
    return;
  }
  lVar20 = 0;
  uVar19 = 0;
  lVar14 = 0;
  lVar10 = 0;
  uVar16 = 0;
  puVar9 = (undefined *)((long)param_1 + 0x5a);
  do {
    plVar6 = (long *)*param_2;
    if (-1 < (long)uVar18) {
      plVar6 = param_2;
    }
    bVar4 = *(byte *)((long)plVar6 + uVar19);
    uVar1 = unaff_w25 << 6;
    unaff_w25 = 0xffU >> (ulong)((byte)(&UNK_10dfca584)[bVar4] & 0x1f) & (uint)bVar4;
    if ((int)uVar16 != 0) {
      unaff_w25 = bVar4 & 0x3f | uVar1;
    }
    bVar4 = (&UNK_10dfca684)[uVar16 * 0x10 + (ulong)(uint)(byte)(&UNK_10dfca584)[bVar4]];
    uVar16 = (ulong)bVar4;
    if (bVar4 == 1) {
      iVar3 = *(int *)(param_1 + 0x4f);
      if (1 < iVar3 - 1U) {
        if (iVar3 != 0) {
          uVar16 = 1;
          goto LAB_109461c8c;
        }
        bStack_61 = 3;
        uStack_78 = 0;
        _snprintf(&uStack_78,3,&UNK_10f56e0bd);
        uVar8 = 0x20;
        ___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(auStack_d8,uVar19);
        FUN_10928a5e0(auStack_c0,&UNK_10f56e0c2,auStack_d8);
        FUN_109259240(auStack_a8,auStack_c0,&UNK_10f56e0df);
        puVar5 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
        if (-1 < (char)bStack_61) {
          uStack_70 = (ulong)bStack_61;
          puVar5 = &uStack_78;
        }
        puVar7 = auStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,puVar5,uStack_70);
        uStack_88 = puVar7[1];
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_10937bbbc(uVar8,0x13c,&uStack_90);
        ___cxa_throw(uVar8,&PTR_DAT_110af4510,FUN_10937bd14);
        goto LAB_109461f1c;
      }
      uVar19 = uVar19 - (lVar14 != 0);
      if (iVar3 != 1) goto LAB_109461c80;
      lVar11 = lVar10 + 3;
      if (param_3 == 0) {
        uVar12 = 0xbd;
        uVar15 = 0xbf;
        uVar17 = 0xef;
      }
      else {
        uVar12 = 0x66;
        puVar9[lVar11] = 0x66;
        *(undefined2 *)(puVar9 + lVar10 + 4) = 0x6466;
        lVar11 = lVar10 + 6;
        uVar15 = 0x75;
        uVar17 = 0x5c;
      }
      puVar9[lVar10] = uVar17;
      puVar9[lVar10 + 1] = uVar15;
      puVar9[lVar10 + 2] = uVar12;
      if (0xc < lVar11 - 500U) {
        uVar16 = 0;
        lVar14 = 0;
        lVar10 = lVar11;
        lVar20 = lVar11;
        goto LAB_109461c8c;
      }
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
LAB_109461c68:
      (*UNRECOVERED_JUMPTABLE)(plVar6,puVar9,lVar11);
      uVar16 = 0;
      lVar14 = 0;
      lVar10 = 0;
      lVar20 = 0;
    }
    else if (bVar4 == 0) {
      if ((int)unaff_w25 < 0xc) {
        if (unaff_w25 == 8) {
          uVar13 = 0x625c;
        }
        else if (unaff_w25 == 9) {
          uVar13 = 0x745c;
        }
        else {
          if (unaff_w25 != 10) goto LAB_109461bf4;
          uVar13 = 0x6e5c;
        }
LAB_109461c44:
        *(undefined2 *)(puVar9 + lVar20) = uVar13;
        lVar11 = lVar20 + 2;
      }
      else {
        if (0x21 < (int)unaff_w25) {
          if (unaff_w25 == 0x22) {
            uVar13 = 0x225c;
          }
          else {
            if (unaff_w25 != 0x5c) goto LAB_109461bf4;
            uVar13 = 0x5c5c;
          }
          goto LAB_109461c44;
        }
        if (unaff_w25 == 0xc) {
          uVar13 = 0x665c;
          goto LAB_109461c44;
        }
        if (unaff_w25 == 0xd) {
          uVar13 = 0x725c;
          goto LAB_109461c44;
        }
LAB_109461bf4:
        uVar1 = 0;
        if (0x7e < unaff_w25) {
          uVar1 = param_3;
        }
        if (unaff_w25 < 0x20 || uVar1 != 0) {
          if (unaff_w25 >> 0x10 == 0) {
            _snprintf(puVar9 + lVar20,7,&UNK_10f56e0a9);
            lVar11 = lVar20 + 6;
          }
          else {
            _snprintf(puVar9 + lVar20,0xd,&UNK_10f56e0b0);
            lVar11 = lVar20 + 0xc;
          }
        }
        else {
          lVar11 = lVar20 + 1;
          puVar9[lVar20] = *(undefined1 *)((long)plVar6 + uVar19);
        }
      }
      lVar10 = lVar11;
      if (lVar11 - 500U < 0xd) {
        plVar6 = (long *)*param_1;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
        goto LAB_109461c68;
      }
LAB_109461c80:
      uVar16 = 0;
      lVar14 = 0;
      lVar20 = lVar10;
    }
    else {
      if ((param_3 & 1) == 0) {
        puVar9[lVar20] = *(undefined1 *)((long)plVar6 + uVar19);
        lVar20 = lVar20 + 1;
      }
      lVar14 = lVar14 + 1;
    }
LAB_109461c8c:
    uVar19 = uVar19 + 1;
    uVar18 = (ulong)*(char *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      uVar2 = uVar18;
    }
  } while (uVar19 < uVar2);
  if ((int)uVar16 == 0) {
    if (lVar20 == 0) {
      return;
    }
    plVar6 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
    lVar10 = lVar20;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4f);
    if (iVar3 == 1) {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar9);
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
      if (param_3 == 0) {
        puVar9 = &UNK_10f56e112;
        lVar10 = 3;
      }
      else {
        puVar9 = &UNK_10f56e10b;
        lVar10 = 6;
      }
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 != 0) {
          return;
        }
        bStack_61 = 3;
        uStack_78 = 0;
        _snprintf(&uStack_78,3,&UNK_10f56e0bd);
        uVar8 = 0x20;
        ___cxa_allocate_exception(0x20);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&uStack_90,&UNK_10f56e0e4,&uStack_78);
        FUN_10937bbbc(uVar8,0x13c,&uStack_90);
        ___cxa_throw(uVar8,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_109461f1c:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x109461f20);
        (*UNRECOVERED_JUMPTABLE)();
      }
      plVar6 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000109461d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,puVar9,lVar10);
  return;
}



/* Entry: 109461fe0; end: 109462353;  */

void FUN_109461fe0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109462004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if (param_2 < 10) {
    uVar2 = 1;
    uVar1 = param_2;
  }
  else {
    if (param_2 < 100) {
      *(undefined *)((long)param_1 + 0x11) = (&UNK_10dfca715)[(ulong)param_2 * 2];
      bVar3 = (&UNK_10dfca714)[(ulong)param_2 * 2];
      uVar2 = 2;
      goto LAB_109462068;
    }
    uVar1 = param_2 * 0x29 >> 0xc;
    *(undefined2 *)((long)param_1 + 0x11) =
         *(undefined2 *)(&UNK_10dfca714 + ((ulong)(param_2 + uVar1 * -100) & 0xff) * 2);
    uVar2 = 3;
  }
  bVar3 = (byte)uVar1 | 0x30;
LAB_109462068:
  *(byte *)(param_1 + 2) = bVar3;
                    /* WARNING: Could not recover jumptable at 0x000109462080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar2);
  return;
}



/* Entry: 109462354; end: 1094623c7;  */

void FUN_109462354(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    pcVar3 = (char *)(param_2 + 2);
    pcVar2 = pcVar3;
    FUN_1094623c8(pcVar3,param_2 + 10);
    plVar1 = (long *)*param_2;
    lVar4 = (long)pcVar2 - (long)pcVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
  }
  else {
    plVar1 = (long *)*param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
    pcVar3 = "null";
    lVar4 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001094623c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pcVar3,lVar4);
  return;
}



/* Entry: 1094623c8; end: 1094625db;  */

undefined2 * FUN_1094623c8(double param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte *pbVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 uStack_48;
  
  puVar9 = param_2;
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    puVar9 = (undefined2 *)((long)param_2 + 1);
    *(undefined1 *)param_2 = 0x2d;
  }
  if (param_1 == 0.0) {
    *puVar9 = 0x2e30;
    *(undefined1 *)(puVar9 + 1) = 0x30;
    return (undefined2 *)((long)puVar9 + 3);
  }
  uStack_48 = 0;
  FUN_1094625dc(puVar9,(long)&uStack_48 + 4,&uStack_48);
  lVar8 = (long)uStack_48._4_4_;
  uVar1 = (int)uStack_48 + lVar8;
  iVar10 = (int)uVar1;
  if ((-1 < (int)uStack_48) && (iVar10 < 0x10)) {
    _memset((undefined1 *)((long)puVar9 + lVar8),0x30);
    *(undefined2 *)((long)puVar9 + uVar1) = 0x302e;
    return (undefined2 *)((long)puVar9 + uVar1) + 1;
  }
  if (0xfffffff0 < iVar10 - 0x10U) {
    puVar2 = (undefined1 *)((long)puVar9 + (uVar1 & 0xffffffff));
    _memmove(puVar2 + 1,puVar2,lVar8 - (uVar1 & 0xffffffff));
    *puVar2 = 0x2e;
    return (undefined2 *)((long)puVar9 + lVar8 + 1);
  }
  if (iVar10 + 3U < 4) {
    puVar2 = (undefined1 *)((long)(puVar9 + 1) + (ulong)(uint)-iVar10);
    _memmove(puVar2,puVar9,lVar8);
    *puVar9 = 0x2e30;
    _memset(puVar9 + 1,0x30,(ulong)(uint)-iVar10);
    return (undefined2 *)(puVar2 + lVar8);
  }
  if (uStack_48._4_4_ != 1) {
    _memmove(puVar9 + 1,(undefined1 *)((long)puVar9 + 1),lVar8 + -1);
    *(undefined1 *)((long)puVar9 + 1) = 0x2e;
    puVar9 = (undefined2 *)((long)puVar9 + lVar8);
  }
  uVar6 = 0x2d;
  if (1U - iVar10 == 0 || 1 < iVar10) {
    uVar6 = 0x2b;
  }
  *(undefined1 *)(puVar9 + 1) = uVar6;
  *(undefined1 *)((long)puVar9 + 1) = 0x65;
  uVar4 = iVar10 - 1U;
  if ((int)(iVar10 - 1U) < 0) {
    uVar4 = 1U - iVar10;
  }
  if (uVar4 < 10) {
    *(undefined1 *)((long)puVar9 + 3) = 0x30;
  }
  else {
    if (99 < uVar4) {
      *(char *)((long)puVar9 + 3) = (char)(uVar4 / 100) + '0';
      pbVar7 = (byte *)((long)puVar9 + 5);
      *(byte *)(puVar9 + 2) = (byte)((uVar4 % 100) / 10) | 0x30;
      bVar5 = (byte)((uVar4 % 100) % 10);
      lVar8 = 4;
      goto LAB_1094625b8;
    }
    uVar3 = (uVar4 & 0xff) / 10;
    *(byte *)((long)puVar9 + 3) = (byte)uVar3 | 0x30;
    uVar4 = uVar4 + uVar3 * -10;
  }
  bVar5 = (byte)uVar4;
  pbVar7 = (byte *)(puVar9 + 2);
  lVar8 = 3;
LAB_1094625b8:
  *pbVar7 = bVar5 | 0x30;
  return (undefined2 *)((long)(puVar9 + 1) + lVar8);
}



/* Entry: 1094625dc; end: 1094626ff;  */

void FUN_1094625dc(undefined8 param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 in_x7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_109462700(&uStack_c0);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  auStack_80[0] = uStack_a0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  iVar4 = (-0x3d - iStack_98) * 0x13441;
  iVar2 = iVar4 + 0x3ffff;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar2 = iVar2 >> 0x12;
  if (0 < -0x3d - iStack_98) {
    iVar2 = iVar2 + 1;
  }
  lVar1 = (long)((int)((iVar2 + 0x133U + (iVar2 + 0x133U >> 0x1c & 7)) * 0x10000) >> 0x13) * 0x10;
  uStack_90 = *(undefined8 *)(&UNK_10dfca970 + lVar1);
  uVar3 = *(undefined8 *)(&UNK_10dfca978 + lVar1);
  uStack_88 = (undefined4)uVar3;
  puVar5 = &uStack_70;
  puVar8 = &uStack_90;
  func_0x0001094627a8(puVar5,puVar8);
  puVar6 = &uStack_60;
  puVar9 = &uStack_90;
  func_0x0001094627a8(puVar6,puVar9);
  puVar7 = auStack_80;
  puVar10 = &uStack_90;
  func_0x0001094627a8();
  *param_3 = -(int)((ulong)uVar3 >> 0x20);
  FUN_109462808(param_1,param_2,param_3,(long)puVar6 + 1,(ulong)puVar9 & 0xffffffff,puVar5,
                (ulong)puVar8 & 0xffffffff,in_x7,(long)puVar7 + -1,(ulong)puVar10 & 0xffffffff);
  return;
}



/* Entry: 109462700; end: 109462807;  */

void FUN_109462700(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  uVar4 = param_2 & 0xfffffffffffff;
  if (param_2 >> 0x34 == 0) {
    uVar5 = (param_2 & 0x3fffffffffffffff) << 1 | 1;
    uVar3 = 0xfffffbce;
    iVar6 = -0x433;
    uVar9 = uVar4;
    uVar2 = param_2;
  }
  else {
    uVar9 = uVar4 | 0x10000000000000;
    uVar3 = (param_2 >> 0x34) + 0xfffffbcd;
    uVar5 = uVar9 << 1 | 1;
    iVar6 = (int)uVar3 + -1;
    uVar2 = uVar9;
    if ((param_2 >> 0x35 != 0) && (uVar4 == 0)) {
      iVar8 = (int)uVar3 + -2;
      lVar7 = 0x3fffffffffffff;
      uVar9 = 0x10000000000000;
      goto LAB_10946276c;
    }
  }
  lVar7 = uVar2 * 2 + -1;
  iVar8 = iVar6;
LAB_10946276c:
  do {
    uVar2 = uVar5 << 1;
    iVar6 = iVar6 + -1;
    uVar4 = uVar5 & 0x7fffffffffffffff;
    uVar5 = uVar2;
  } while (uVar4 >> 0x3e == 0);
  do {
    uVar5 = uVar9 << 1;
    uVar1 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar1;
    uVar4 = uVar9 & 0x7fffffffffffffff;
    uVar9 = uVar5;
  } while (uVar4 >> 0x3e == 0);
  *param_1 = uVar5;
  *(uint *)(param_1 + 1) = uVar1;
  param_1[2] = lVar7 << ((ulong)(uint)(iVar8 - iVar6) & 0x3f);
  *(int *)(param_1 + 3) = iVar6;
  param_1[4] = uVar2;
  *(int *)(param_1 + 5) = iVar6;
  return;
}



/* Entry: 109462808; end: 109462ac3;  */

void FUN_109462808(long param_1,int *param_2,int *param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,int param_10)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  
  uVar10 = param_9 - param_4;
  uVar7 = param_9 - param_6;
  uVar8 = (ulong)(uint)-param_10;
  uVar6 = 1L << (uVar8 & 0x3f);
  uVar13 = param_9 >> (uVar8 & 0x3f);
  uVar9 = uVar6 - 1 & param_9;
  uVar12 = (uint)uVar13;
  if (uVar12 < 1000000000) {
    if (uVar12 < 100000000) {
      if (uVar12 < 10000000) {
        if (uVar12 < 1000000) {
          uVar14 = 10;
          if (uVar12 < 10) {
            uVar14 = 1;
          }
          iVar20 = 1;
          if (9 < uVar12) {
            iVar20 = 2;
          }
          uVar2 = 100;
          if (uVar12 < 100) {
            uVar2 = uVar14;
          }
          iVar3 = 3;
          if (uVar12 < 100) {
            iVar3 = iVar20;
          }
          uVar14 = 1000;
          if (uVar12 < 1000) {
            uVar14 = uVar2;
          }
          iVar20 = 4;
          if (uVar12 < 1000) {
            iVar20 = iVar3;
          }
          uVar2 = 10000;
          if (uVar12 >> 4 < 0x271) {
            uVar2 = uVar14;
          }
          iVar3 = 5;
          if (uVar12 >> 4 < 0x271) {
            iVar3 = iVar20;
          }
          if (0xc34 < uVar12 >> 5) {
            uVar2 = 100000;
          }
          uVar15 = (ulong)uVar2;
          iVar20 = 6;
          if (uVar12 >> 5 < 0xc35) {
            iVar20 = iVar3;
          }
        }
        else {
          uVar15 = 1000000;
          iVar20 = 7;
        }
      }
      else {
        uVar15 = 10000000;
        iVar20 = 8;
      }
    }
    else {
      uVar15 = 100000000;
      iVar20 = 9;
    }
  }
  else {
    uVar15 = 1000000000;
    iVar20 = 10;
  }
  lVar11 = param_1 + -1;
  do {
    if (iVar20 < 1) {
      iVar20 = 0;
      do {
        uVar15 = uVar10;
        uVar13 = uVar7;
        iVar3 = *param_2;
        *param_2 = iVar3 + 1;
        *(char *)(param_1 + iVar3) = (char)(uVar9 * 10 >> (uVar8 & 0x3f)) + '0';
        uVar10 = uVar15 * 10;
        uVar7 = uVar13 * 10;
        iVar20 = iVar20 + -1;
        uVar9 = uVar6 - 1 & uVar9 * 10;
      } while (uVar10 < uVar9);
      *param_3 = *param_3 + iVar20;
      if ((uVar9 < uVar7) && (uVar6 <= uVar10 - uVar9)) {
        iVar20 = *param_2;
        uVar10 = uVar13 * 10 - uVar9;
        uVar9 = uVar6 + uVar9;
        uVar8 = uVar15 * 10 - uVar9;
        do {
          if ((uVar7 <= uVar9) && (uVar10 <= uVar13 * -10 + uVar9)) {
            return;
          }
          *(char *)(lVar11 + iVar20) = *(char *)(lVar11 + iVar20) + -1;
          if (uVar7 <= uVar9) {
            return;
          }
          uVar10 = uVar10 - uVar6;
          uVar9 = uVar9 + uVar6;
          bVar4 = uVar6 <= uVar8;
          uVar8 = uVar8 - uVar6;
        } while (bVar4);
      }
      return;
    }
    uVar12 = 0;
    uVar14 = (uint)uVar15;
    if (uVar14 != 0) {
      uVar12 = (uint)uVar13 / uVar14;
    }
    uVar13 = (ulong)((uint)uVar13 - uVar12 * uVar14);
    iVar3 = *param_2;
    *param_2 = iVar3 + 1;
    *(char *)(param_1 + iVar3) = (char)uVar12 + '0';
    iVar20 = iVar20 + -1;
    lVar17 = uVar13 << (uVar8 & 0x3f);
    uVar1 = lVar17 + uVar9;
    if (uVar10 < uVar1) {
      uVar15 = uVar15 / 10;
    }
    else {
      *param_3 = *param_3 + iVar20;
      uVar5 = uVar15 << (uVar8 & 0x3f);
      if (uVar7 <= uVar1 || uVar10 - uVar1 < uVar5) {
        return;
      }
      iVar3 = *param_2;
      uVar16 = uVar7 - uVar1;
      uVar18 = uVar9 + lVar17 + uVar5;
      uVar19 = uVar10 - uVar18;
      do {
        if (((uVar7 <= uVar18) && (uVar16 <= (param_6 - param_9) + uVar18)) ||
           (*(char *)(lVar11 + iVar3) = *(char *)(lVar11 + iVar3) + -1, uVar7 <= uVar18)) break;
        uVar16 = uVar16 - uVar5;
        uVar18 = uVar18 + uVar5;
        bVar4 = uVar5 <= uVar19;
        uVar19 = uVar19 - uVar5;
      } while (bVar4);
    }
    if (uVar1 <= uVar10) {
      return;
    }
  } while( true );
}



/* Entry: 109462ac4; end: 109462af3;  */

long FUN_109462ac4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
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



/* Entry: 109462af4; end: 109462ceb;  */

long * FUN_109462af4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[2] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x20;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  plVar4[2] = *param_3;
  plVar4[3] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_109460178(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_109462cb4;
    uVar2 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar5 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_109462cb4:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 109462cec; end: 109462d33;  */

long * FUN_109462cec(long *param_1)

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



/* Entry: 109462d34; end: 109462ddf;  */

long FUN_109462d34(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_2 - (long)param_1 >> 3;
  if (1 < lVar3) {
    uStack_48 = 0x7fffffffffffffff;
    uStack_50 = 0;
    puVar1 = param_1;
    for (; param_1 < (undefined8 *)(param_2 + -8); param_1 = param_1 + 1) {
      lVar3 = lVar3 + -1;
      uStack_60 = 0;
      puVar2 = &uStack_50;
      lStack_58 = lVar3;
      func_0x000109453a74(puVar2,param_3,&uStack_60);
      if (puVar2 != (undefined8 *)0x0) {
        uVar4 = *param_1;
        *param_1 = puVar1[(long)puVar2];
        puVar1[(long)puVar2] = uVar4;
      }
      puVar1 = puVar1 + 1;
    }
  }
  return param_2;
}



/* Entry: 109462de0; end: 109463dff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109462de0(double *param_1,long param_2,long param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  long **pplVar10;
  double *pdVar11;
  ulong uVar12;
  long **pplVar13;
  ulong uVar14;
  ulong uVar15;
  long **pplVar16;
  undefined1 uVar17;
  int *piVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long **pplVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long **pplVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long **pplVar35;
  double *pdVar36;
  long **pplVar37;
  double *pdVar38;
  long lVar39;
  double *pdVar40;
  long **pplVar41;
  ulong uVar42;
  double dVar43;
  double dVar44;
  long *plVar45;
  undefined8 uVar46;
  long *plVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  long *plVar52;
  long *plVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  long *plVar57;
  undefined8 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  long lStack_328;
  ulong uStack_320;
  double adStack_310 [4];
  long *plStack_2f0;
  long *plStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  double adStack_2c0 [6];
  long *aplStack_290 [6];
  double dStack_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double adStack_210 [4];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong auStack_1e0 [4];
  double adStack_1c0 [4];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  double adStack_180 [4];
  undefined2 uStack_160;
  double dStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  double adStack_130 [4];
  ulong uStack_110;
  double *pdStack_100;
  ulong uStack_f0;
  double *pdStack_e0;
  double *pdStack_d8;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = *(long **)(param_2 + 0x20);
  plVar53 = *(long **)(param_2 + 0x28);
  if (plVar22 != plVar53) {
    puVar33 = *(undefined8 **)(param_2 + 8);
    puVar3 = *(undefined8 **)(param_2 + 0x10);
    if (puVar33 != puVar3) {
      uVar26 = 0;
      dVar43 = 0.0;
      auVar51 = ZEXT216(0);
      plVar45 = plVar22;
      do {
        lVar30 = *plVar45;
        if ((*(uint *)(lVar30 + 0x50) & 0xfffffffe) == 2) {
          dVar56 = auVar51._8_8_;
          auVar51._0_8_ = auVar51._0_8_ + *(double *)(lVar30 + 8);
          auVar51._8_8_ = dVar56 + *(double *)(lVar30 + 0x10);
          dVar43 = dVar43 + *(double *)(lVar30 + 0x18);
          uVar26 = uVar26 + 1;
        }
        plVar45 = plVar45 + 1;
      } while (plVar45 != plVar53);
      if (uVar26 != 0) {
        dVar56 = (double)uVar26;
        dVar59 = auVar51._0_8_ / dVar56;
        dVar60 = auVar51._8_8_ / dVar56;
        dVar43 = dVar43 / dVar56;
        auVar49 = ZEXT216(0);
        do {
          lVar30 = *plVar22;
          if ((*(uint *)(lVar30 + 0x50) & 0xfffffffe) == 2) {
            dVar44 = auVar49._8_8_;
            auVar49._0_8_ = auVar49._0_8_ + ABS(*(double *)(lVar30 + 8) - dVar59);
            auVar49._8_8_ = dVar44 + ABS(*(double *)(lVar30 + 0x18) - dVar43);
          }
          plVar22 = plVar22 + 1;
        } while (plVar22 != plVar53);
        pdVar40 = (double *)0x0;
        pdVar38 = (double *)0x0;
        dVar44 = auVar49._0_8_ / dVar56;
        dVar56 = auVar49._8_8_ / dVar56;
        if (dVar56 <= dVar44) {
          dVar56 = dVar44;
        }
        dVar44 = 0.0;
        dVar61 = 0.0;
        pdVar11 = (double *)0x0;
        do {
          piVar18 = (int *)*puVar33;
          pdVar36 = pdVar11;
          if ((*piVar18 - 3U < 2) && ((char)piVar18[0x9a] == '\x01')) {
            aplStack_290[0] = *(long **)(piVar18 + 0xd8);
            aplStack_290[1] = *(long **)(piVar18 + 0xda);
            aplStack_290[2] = *(long **)(piVar18 + 0xdc);
            adStack_130[0] = *(double *)(piVar18 + 0x90);
            adStack_130[1] = *(double *)(piVar18 + 0x92);
            adStack_130[2] = *(double *)(piVar18 + 0x94);
            dVar63 = *(double *)(piVar18 + 0x96);
            dVar62 = *(double *)(piVar18 + 0x98);
            if (pdVar38 < pdVar40) {
              dVar50 = *(double *)(piVar18 + 0x90);
              dVar54 = *(double *)(piVar18 + 0x92);
              pdVar38[2] = *(double *)(piVar18 + 0x94);
              pdVar38[1] = dVar54;
              *pdVar38 = dVar50;
              pdVar38[4] = (double)aplStack_290[1];
              pdVar38[3] = (double)aplStack_290[0];
              pdVar38[5] = (double)aplStack_290[2];
              pdVar2 = pdVar38;
            }
            else {
              lVar30 = (long)pdVar38 - (long)pdVar11;
              uVar26 = (lVar30 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar26) goto LAB_109463d90;
              lVar39 = (long)pdVar40 - (long)pdVar11 >> 4;
              uVar21 = lVar39 * 0x5555555555555556;
              if (uVar21 < uVar26 || uVar21 - uVar26 == 0) {
                uVar21 = uVar26;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar39 * -0x5555555555555555)) {
                uVar21 = 0x555555555555555;
              }
              if (uVar21 == 0) {
                param_3 = 0;
              }
              else {
                FUN_109463e14();
              }
              pdVar2 = (double *)(uVar21 + lVar30);
              pdVar2[1] = adStack_130[1];
              *pdVar2 = adStack_130[0];
              pdVar2[2] = adStack_130[2];
              pdVar2[4] = (double)aplStack_290[1];
              pdVar2[3] = (double)aplStack_290[0];
              pdVar2[5] = (double)aplStack_290[2];
              uVar26 = SUB168(SEXT816(lVar30) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              pdVar36 = pdVar2 + ((uVar26 >> 3) - ((long)uVar26 >> 0x3f)) * 6;
              pdVar1 = pdVar36;
              for (pdVar40 = pdVar11; pdVar40 != pdVar38; pdVar40 = pdVar40 + 6) {
                dVar50 = *pdVar40;
                dVar54 = pdVar40[1];
                pdVar1[2] = pdVar40[2];
                pdVar1[1] = dVar54;
                *pdVar1 = dVar50;
                dVar50 = pdVar40[3];
                dVar54 = pdVar40[4];
                pdVar1[5] = pdVar40[5];
                pdVar1[4] = dVar54;
                pdVar1[3] = dVar50;
                pdVar1 = pdVar1 + 6;
              }
              pdVar40 = (double *)(uVar21 + param_3 * 0x30);
              if (pdVar11 != (double *)0x0) {
                __ZdlPv(pdVar11);
              }
            }
            pdVar38 = pdVar2 + 6;
            if (dVar44 <= dVar63) {
              dVar44 = dVar63;
            }
            if (dVar61 <= dVar62) {
              dVar61 = dVar62;
            }
          }
          puVar33 = puVar33 + 1;
          pdVar11 = pdVar36;
        } while (puVar33 != puVar3);
        if ((long)pdVar38 - (long)pdVar36 == 0) {
          pdVar40 = (double *)0x0;
          pdVar38 = (double *)0x0;
        }
        else {
          pdVar40 = (double *)(((long)pdVar38 - (long)pdVar36 >> 4) * -0x5555555555555555);
          if ((double *)0x555555555555555 < pdVar40) {
            FUN_109463e00();
            goto LAB_109463d9c;
          }
          FUN_109463e14();
          lVar30 = 0;
          do {
            puVar33 = (undefined8 *)((long)pdVar36 + lVar30);
            puVar3 = (undefined8 *)((long)pdVar40 + lVar30);
            uVar46 = *puVar33;
            uVar58 = puVar33[1];
            puVar3[2] = puVar33[2];
            puVar3[1] = uVar58;
            *puVar3 = uVar46;
            uVar46 = puVar33[3];
            uVar58 = puVar33[4];
            puVar3[5] = puVar33[5];
            puVar3[4] = uVar58;
            puVar3[3] = uVar46;
            lVar30 = lVar30 + 0x30;
          } while ((double *)(puVar33 + 6) != pdVar38);
          pdVar38 = (double *)((long)pdVar40 + lVar30);
        }
        if (pdVar36 != (double *)0x0) {
          __ZdlPv(pdVar36);
        }
        lVar30 = ((long)pdVar38 - (long)pdVar40 >> 4) * -0x5555555555555555;
        if (lVar30 != 0) {
          if (lVar30 != 1) {
            lStack_2d8 = 0;
            lStack_2d0 = 0;
            uStack_2c8 = 0;
            for (pdVar11 = pdVar40; pdVar11 != pdVar38; pdVar11 = pdVar11 + 6) {
              aplStack_290[0] =
                   (long *)((*pdVar11 - pdVar11[5]) * (*pdVar11 - pdVar11[5]) +
                           (pdVar11[1] - pdVar11[3]) * (pdVar11[1] - pdVar11[3]));
              FUN_10944b2d4(&lStack_2d8,aplStack_290);
            }
            aplStack_290[0] = (long *)0x0;
            FUN_109460520(&plStack_2f0,lVar30,aplStack_290);
            if (plStack_2f0 != plStack_2e8) {
              lVar30 = 0;
              plVar22 = plStack_2f0;
              do {
                plVar53 = plVar22 + 1;
                *plVar22 = lVar30;
                lVar30 = lVar30 + 1;
                plVar22 = plVar53;
              } while (plVar53 != plStack_2e8);
            }
            aplStack_290[0] = &lStack_2d8;
            lVar30 = 0;
            if (plStack_2e8 != plStack_2f0) {
              lVar30 = LZCOUNT((long)plStack_2e8 - (long)plStack_2f0 >> 3) * -2 + 0x7e;
            }
            FUN_109463e58(plStack_2f0,plStack_2e8,aplStack_290,lVar30,1);
            plVar22 = plStack_2f0;
            pauVar27 = (undefined1 (*) [16])
                       (pdVar40 + plStack_2f0[(long)plStack_2e8 - (long)plStack_2f0 >> 4] * 6);
            auVar49 = *pauVar27;
            pauVar19 = (undefined1 (*) [16])
                       (pdVar40 +
                       (plStack_2f0 + ((long)plStack_2e8 - (long)plStack_2f0 >> 4))[-1] * 6);
            auVar51 = *pauVar19;
            uStack_160 = 0;
            aplStack_290[1] = *(long **)(pauVar27[2] + 8);
            aplStack_290[0] = *(long **)(pauVar27[1] + 8);
            aplStack_290[3] = (long *)*(double *)(pauVar19[2] + 8);
            aplStack_290[2] = (long *)*(double *)(pauVar19[1] + 8);
            aplStack_290[5] = *(long **)(pauVar27[1] + 8);
            aplStack_290[4] = (long *)-(double)*(long **)(pauVar27[2] + 8);
            dStack_258 = *(double *)(pauVar19[1] + 8);
            dStack_260 = -*(double *)(pauVar19[2] + 8);
            uStack_248 = 0;
            uStack_250 = 0x3ff0000000000000;
            uStack_238 = 0;
            uStack_240 = 0x3ff0000000000000;
            uStack_228 = 0x3ff0000000000000;
            uStack_230 = 0;
            uStack_218 = 0x3ff0000000000000;
            uStack_220 = 0;
            lVar30 = -0x80;
            pdVar38 = adStack_180;
            do {
              dVar62 = *(double *)((long)adStack_210 + lVar30 + 8);
              dVar63 = *(double *)((long)adStack_210 + lVar30 + 0x10);
              dVar50 = *(double *)((long)adStack_210 + lVar30 + 0x18);
              dVar62 = SQRT(*(double *)((long)adStack_210 + lVar30) *
                            *(double *)((long)adStack_210 + lVar30) + dVar63 * dVar63 +
                            dVar62 * dVar62 + dVar50 * dVar50);
              *pdVar38 = dVar62;
              pdVar38[-4] = dVar62;
              pdVar38 = pdVar38 + 1;
              lVar30 = lVar30 + 0x20;
            } while (lVar30 != 0);
            bVar5 = false;
            auVar48 = NEON_fmax(auStack_1a0,auStack_190,8);
            dVar62 = auVar48._8_8_;
            if (auVar48._8_8_ <= auVar48._0_8_) {
              dVar62 = auVar48._0_8_;
            }
            pplVar16 = aplStack_290 + 3;
            uVar26 = (ulong)aplStack_290 | 8;
            uStack_320 = uVar26 >> 3;
            pplVar37 = aplStack_290 + 5;
            pplVar35 = aplStack_290 + 4;
            uVar23 = (ulong)pplVar37 >> 3;
            lVar30 = -3;
            uStack_148 = 4;
            dStack_150 = 0.0;
            uVar34 = 3;
            lStack_328 = 1;
            pplVar41 = aplStack_290;
            uVar21 = 0;
            do {
              uVar14 = uVar34;
              if ((long)(uVar23 & 1) <= (long)uVar34) {
                uVar14 = uVar23 & 1;
              }
              plVar45 = *(long **)(auStack_1a0 + uVar21 * 8);
              plVar53 = plVar45;
              if (uVar21 == 3) {
                lVar20 = 0;
              }
              else {
                lVar20 = 0;
                lVar39 = 0x1f;
                do {
                  plVar47 = pplVar41[lVar39];
                  lVar7 = lVar39 + -0x1e;
                  plVar52 = plVar47;
                  if ((double)plVar47 <= (double)plVar45) {
                    plVar47 = plVar45;
                    lVar7 = lVar20;
                    plVar52 = plVar53;
                  }
                  plVar53 = plVar52;
                  lVar20 = lVar7;
                  plVar45 = plVar47;
                  lVar39 = lVar39 + 1;
                } while (uVar21 + lVar39 != 0x22);
              }
              if ((uStack_148 == 4) &&
                 ((double)plVar53 * (double)plVar53 <
                  dVar62 * 2.220446049250313e-16 * dVar62 * 2.220446049250313e-16 * 0.25 *
                  (double)(4 - uVar21))) {
                uStack_148 = uVar21;
              }
              uVar31 = lVar20 + uVar21;
              auStack_1e0[uVar21] = uVar31;
              if (lVar20 != 0) {
                plVar53 = aplStack_290[uVar31 * 4];
                plVar45 = aplStack_290[uVar31 * 4 + 1];
                plVar47 = aplStack_290[uVar31 * 4 + 2];
                uVar46 = aplStack_290[uVar31 * 4 + 3];
                plVar52 = aplStack_290[uVar21 * 4];
                uVar58 = aplStack_290[uVar21 * 4 + 3];
                plVar57 = aplStack_290[uVar21 * 4 + 2];
                aplStack_290[uVar31 * 4 + 1] = aplStack_290[uVar21 * 4 + 1];
                aplStack_290[uVar31 * 4] = plVar52;
                aplStack_290[uVar31 * 4 + 3] = (long *)uVar58;
                aplStack_290[uVar31 * 4 + 2] = plVar57;
                aplStack_290[uVar21 * 4 + 1] = plVar45;
                aplStack_290[uVar21 * 4] = plVar53;
                aplStack_290[uVar21 * 4 + 3] = (long *)uVar46;
                aplStack_290[uVar21 * 4 + 2] = plVar47;
                uVar46 = *(undefined8 *)(auStack_1a0 + uVar21 * 8);
                *(undefined8 *)(auStack_1a0 + uVar21 * 8) =
                     *(undefined8 *)(auStack_1a0 + uVar31 * 8);
                *(undefined8 *)(auStack_1a0 + uVar31 * 8) = uVar46;
                dVar63 = adStack_180[uVar21];
                adStack_180[uVar21] = adStack_180[uVar31];
                adStack_180[uVar31] = dVar63;
                bVar5 = (bool)(bVar5 ^ 1);
              }
              pplVar10 = aplStack_290 + uVar21 * 5;
              uVar42 = 3 - uVar21;
              pplVar29 = pplVar10 + 1;
              uVar31 = (ulong)pplVar29 >> 3 & 1;
              if (uVar21 == 3) {
                plVar45 = *pplVar10;
LAB_1094635d0:
                adStack_210[uVar21] = 0.0;
                if (uVar42 <= uVar31) {
                  uVar31 = uVar42;
                }
                if (uVar31 != 0) {
                  _bzero(pplVar29,uVar31 << 3);
                }
                lVar39 = uVar42 - uVar31;
                uVar25 = (ulong)((uint)lVar39 + (((uint)lVar39 & 0x80) >> 7) >> 1) & 0xff;
                uVar28 = uVar31 | uVar25 << 1;
                if (1 < lVar39) {
                  uVar12 = uVar28;
                  if (uVar28 <= (uVar31 | 2)) {
                    uVar12 = uVar31 | 2;
                  }
                  _bzero(pplVar29 + uVar31,(uVar12 + ~uVar31 & 0xffffffffffffffe) * 8 + 0x10);
                }
                if (uVar28 < uVar42) {
                  _bzero(pplVar29 + uVar25 * 2 + uVar31,(lVar39 + uVar25 * -2) * 8);
                }
              }
              else {
                if (uVar21 < 2) {
                  plVar53 = *pplVar29;
                  dVar63 = (double)plVar53 * (double)plVar53 +
                           (double)pplVar10[2] * (double)pplVar10[2];
                  pplVar24 = pplVar16;
                  lVar39 = lStack_328;
                  if (uVar21 == 0) {
                    do {
                      dVar63 = dVar63 + (double)*pplVar24 * (double)*pplVar24;
                      lVar39 = lVar39 + -1;
                      pplVar24 = pplVar24 + 1;
                    } while (lVar39 != 0);
                  }
                }
                else {
                  plVar53 = *pplVar29;
                  dVar63 = (double)plVar53 * (double)plVar53;
                }
                plVar47 = *pplVar10;
                plVar45 = plVar47;
                if (dVar63 <= 2.2250738585072014e-308) goto LAB_1094635d0;
                plVar45 = (long *)SQRT(dVar63 + (double)plVar47 * (double)plVar47);
                if (0.0 <= (double)plVar47) {
                  plVar45 = (long *)-(double)plVar45;
                }
                dVar63 = (double)plVar47 - (double)plVar45;
                if (((ulong)pplVar29 >> 3 & 1) != 0) {
                  *pplVar29 = (long *)((double)plVar53 / dVar63);
                }
                uVar25 = uVar42 - uVar31 & 2 | (ulong)pplVar29 >> 3 & 1;
                if (1 < uVar42 - uVar31) {
                  do {
                    plVar53 = pplVar29[uVar31];
                    (pplVar29 + uVar31)[1] = (long *)((double)(pplVar29 + uVar31)[1] / dVar63);
                    pplVar29[uVar31] = (long *)((double)plVar53 / dVar63);
                    uVar28 = uVar31 + 2;
                    uVar31 = 2;
                  } while (uVar28 < uVar25);
                }
                if (uVar25 < uVar42) {
                  uVar31 = uVar34 - (uStack_320 & 1);
                  lVar39 = uVar31 + (uVar31 >> 1 & 1) * -2;
                  pdVar38 = (double *)(uVar26 + ((uStack_320 & 1) << 3 | (uVar31 >> 1 & 1) << 4));
                  do {
                    *pdVar38 = *pdVar38 / dVar63;
                    lVar39 = lVar39 + -1;
                    pdVar38 = pdVar38 + 1;
                  } while (lVar39 != 0);
                }
                adStack_210[uVar21] = ((double)plVar45 - (double)plVar47) / (double)plVar45;
              }
              *pplVar10 = plVar45;
              if (dStack_150 < ABS((double)plVar45)) {
                dStack_150 = ABS((double)plVar45);
              }
              if (uVar21 == 3) goto LAB_1094639e8;
              uVar31 = uVar21 + 1;
              dVar63 = adStack_210[uVar21];
              if (dVar63 != 0.0) {
                uVar25 = 0;
                lVar39 = uVar14 << 3;
                pplVar10 = aplStack_290 + uVar21 * 4 + uVar31;
                pdVar38 = adStack_1c0 + uVar31;
                pplVar29 = aplStack_290 + uVar21 + uVar31 * 4 + 1;
                uVar28 = 2;
                if (1 < uVar21) {
                  uVar28 = 0;
                }
                pplVar24 = pplVar37 + uVar28;
                do {
                  if (uVar21 < 2) {
                    dVar50 = (double)*pplVar10 * (double)pplVar29[uVar25 * 4] +
                             (double)pplVar10[1] * (double)(pplVar29 + uVar25 * 4)[1];
                    pdVar11 = (double *)(uVar26 + uVar28 * 8);
                    pplVar13 = pplVar24;
                    lVar20 = uVar28 + lVar30;
                    if (uVar28 < uVar42) {
                      do {
                        dVar50 = dVar50 + *pdVar11 * (double)*pplVar13;
                        bVar9 = lVar20 != -1;
                        pdVar11 = pdVar11 + 1;
                        pplVar13 = pplVar13 + 1;
                        lVar20 = lVar20 + 1;
                      } while (bVar9);
                    }
                  }
                  else {
                    dVar50 = (double)*pplVar10 * (double)pplVar29[uVar25 * 4];
                  }
                  pdVar38[uVar25] = dVar50;
                  uVar25 = uVar25 + 1;
                  pplVar24 = pplVar24 + 4;
                } while (uVar25 != uVar42);
                uVar25 = 0;
                pplVar24 = pplVar35;
                do {
                  pplVar41[uVar25 + 0x1b] =
                       (long *)((double)*pplVar24 + (double)pplVar41[uVar25 + 0x1b]);
                  uVar25 = uVar25 + 1;
                  pplVar24 = pplVar24 + 4;
                } while (uVar34 != uVar25);
                lVar20 = 0;
                uVar25 = 0;
                do {
                  *(double *)((long)pplVar35 + lVar20) =
                       *(double *)((long)pplVar35 + lVar20) -
                       dVar63 * (double)pplVar41[uVar25 + 0x1b];
                  uVar25 = uVar25 + 1;
                  lVar20 = lVar20 + 0x20;
                } while (uVar34 != uVar25);
                dVar50 = adStack_210[uVar21];
                uStack_110 = uVar42;
                if (uVar21 < 2) {
                  dVar63 = (double)*pplVar10 * dVar50;
                  adStack_130[1] = (double)pplVar10[1] * dVar50;
                  adStack_130[0] = dVar63;
                }
                uVar25 = uVar42 & 2;
                if (uVar25 != uVar42) {
                  do {
                    adStack_130[uVar25] = dVar50 * *(double *)(uVar26 + uVar25 * 8);
                    uVar25 = uVar25 + 1;
                    dVar63 = adStack_130[0];
                  } while (uVar34 != uVar25);
                }
                uVar25 = 0;
                pdStack_100 = pdVar38;
                uStack_f0 = uVar42;
                pdStack_e0 = adStack_130;
                pdStack_d8 = pdVar38;
                uStack_c8 = uVar42;
                uStack_c0 = 1;
                uVar12 = (ulong)pplVar29 >> 3 & 1;
                uVar28 = uVar12;
                if ((long)uVar42 <= (long)uVar12) {
                  uVar28 = uVar42;
                }
                uVar32 = uVar42 - uVar28 & 0xfffffffffffffffe | uVar28;
                pplVar10 = pplVar37;
                do {
                  if (uVar12 != 0) {
                    pplVar29[uVar25 * 4] =
                         (long *)((double)pplVar29[uVar25 * 4] - dVar63 * pdVar38[uVar25]);
                  }
                  lVar20 = lVar39;
                  pdVar11 = adStack_130 + uVar14;
                  uVar15 = uVar28;
                  uVar6 = uVar32;
                  if (1 < (long)(uVar42 - uVar28)) {
                    do {
                      dVar50 = *pdVar11;
                      dVar54 = pdVar38[uVar25];
                      dVar55 = *(double *)((long)pplVar37 + lVar20);
                      ((double *)((long)pplVar37 + lVar20))[1] =
                           ((double *)((long)pplVar37 + lVar20))[1] - pdVar11[1] * dVar54;
                      *(double *)((long)pplVar37 + lVar20) = dVar55 - dVar50 * dVar54;
                      uVar15 = uVar15 + 2;
                      lVar20 = lVar20 + 0x10;
                      pdVar11 = pdVar11 + 2;
                    } while ((long)uVar15 < (long)uVar32);
                  }
                  for (; (long)uVar6 < (long)uVar42; uVar6 = uVar6 + 1) {
                    pplVar10[uVar6] =
                         (long *)((double)pplVar10[uVar6] - adStack_130[uVar6] * pdVar38[uVar25]);
                  }
                  uVar25 = uVar25 + 1;
                  lVar39 = lVar39 + 0x20;
                  pplVar10 = pplVar10 + 4;
                } while (uVar25 != uVar42);
              }
              if (uVar21 < 3) {
                pplVar29 = pplVar37;
                uVar14 = uVar31;
                do {
                  dVar63 = *(double *)(auStack_1a0 + uVar14 * 8);
                  if (dVar63 != 0.0) {
                    dVar54 = (ABS((double)aplStack_290[uVar14 * 4 + uVar21]) / dVar63 + 1.0) *
                             (1.0 - ABS((double)aplStack_290[uVar14 * 4 + uVar21]) / dVar63);
                    dVar50 = 0.0;
                    if (0.0 <= dVar54) {
                      dVar50 = dVar54;
                    }
                    dVar54 = dVar63 / adStack_180[uVar14];
                    if (dVar54 * dVar54 * dVar50 <= 1.4901161193847656e-08) {
                      pplVar10 = aplStack_290 + uVar14 * 4 + uVar31;
                      if (uVar21 == 2) {
                        dVar63 = (double)*pplVar10 * (double)*pplVar10;
                      }
                      else {
                        dVar63 = (double)*pplVar10 * (double)*pplVar10 +
                                 (double)pplVar10[1] * (double)pplVar10[1];
                        uVar25 = uVar42 & 2;
                        if ((uVar42 & 2) != uVar42) {
                          do {
                            dVar63 = dVar63 + (double)pplVar29[uVar25] * (double)pplVar29[uVar25];
                            uVar25 = uVar25 + 1;
                          } while (uVar34 != uVar25);
                        }
                      }
                      dVar63 = SQRT(dVar63);
                      adStack_180[uVar14] = dVar63;
                    }
                    else {
                      dVar63 = dVar63 * SQRT(dVar50);
                    }
                    *(double *)(auStack_1a0 + uVar14 * 8) = dVar63;
                  }
                  uVar14 = uVar14 + 1;
                  pplVar29 = pplVar29 + 4;
                } while (uVar14 != 4);
              }
              pplVar41 = pplVar41 + 1;
              lStack_328 = lStack_328 + -1;
              pplVar16 = pplVar16 + 5;
              uVar34 = uVar34 - 1;
              uStack_320 = (ulong)((uint)uStack_320 ^ 1);
              uVar26 = uVar26 + 0x28;
              lVar30 = lVar30 + 1;
              pplVar37 = pplVar37 + 5;
              pplVar35 = pplVar35 + 5;
              uVar23 = (ulong)((uint)uVar23 ^ 1);
              uVar21 = uVar31;
            } while( true );
          }
          dVar62 = pdVar38[-6];
          dVar60 = pdVar38[-4];
          dVar50 = pdVar38[-5];
          goto LAB_109463d54;
        }
        uVar17 = 0;
        *(undefined1 *)param_1 = 0;
        goto LAB_109463d78;
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  goto LAB_109463134;
LAB_1094639e8:
  lVar30 = 0;
  uStack_1e8 = 0x300000002;
  uStack_1f0 = 0x100000000;
  do {
    uVar26 = -(auStack_1e0[lVar30] >> 0x1f & 1) & 0xfffffffc00000000 |
             (auStack_1e0[lVar30] & 0xffffffff) << 2;
    uVar4 = *(undefined4 *)((long)&uStack_1f0 + lVar30 * 4);
    *(undefined4 *)((long)&uStack_1f0 + lVar30 * 4) = *(undefined4 *)((long)&uStack_1f0 + uVar26);
    *(undefined4 *)((long)&uStack_1f0 + uVar26) = uVar4;
    uVar26 = uStack_148;
    lVar30 = lVar30 + 1;
  } while (lVar30 != 4);
  uStack_140 = 0xffffffffffffffff;
  if (!bVar5) {
    uStack_140 = 1;
  }
  uStack_160 = CONCAT11(uStack_160._1_1_,1);
  if (uStack_148 == 0) {
    adStack_310[0] = 0.0;
    plStack_2f0 = plVar22;
    dVar62 = 0.0;
    adStack_310[2] = 0.0;
    dVar63 = 0.0;
  }
  else {
    auVar49 = NEON_ext(auVar49,auVar49,8,1);
    auVar51 = NEON_ext(auVar51,auVar51,8,1);
    adStack_2c0[1] = (double)auVar49._8_8_;
    adStack_2c0[0] = auVar49._0_8_;
    adStack_2c0[3] = (double)auVar51._8_8_;
    adStack_2c0[2] = (double)auVar51._0_8_;
    if ((long)uStack_148 < 1) {
      FUN_109464cc8(aplStack_290,uStack_148,adStack_2c0,uStack_148);
    }
    else {
      uVar34 = (ulong)adStack_2c0 | 8;
      uVar23 = (ulong)aplStack_290 | 8;
      uVar31 = 3;
      uVar14 = 0;
      uVar21 = uVar34;
      do {
        uVar25 = uVar34 >> 3 & 1;
        uVar42 = uVar31;
        if ((long)uVar25 <= (long)uVar31) {
          uVar42 = uVar25;
        }
        pdVar38 = adStack_2c0 + uVar14;
        uVar25 = uVar14 + 1;
        dVar62 = adStack_210[uVar14];
        if (uVar14 == 3) {
          *pdVar38 = (1.0 - dVar62) * *pdVar38;
        }
        else if (dVar62 != 0.0) {
          uVar12 = 3 - uVar14;
          pdVar38 = adStack_2c0 + uVar14 + 1;
          uVar28 = uVar12 - ((long)uVar12 >> 0x3f);
          if (uVar14 - 2 < 3) {
            dVar50 = *pdVar38;
            dVar63 = (double)aplStack_290[uVar25 + uVar14 * 4] * dVar50;
          }
          else {
            uVar32 = uVar28 & 0xfffffffffffffffe;
            pplVar41 = aplStack_290 + uVar25 + uVar14 * 4;
            dVar50 = *pdVar38;
            dVar63 = (double)*pplVar41 * dVar50 + (double)pplVar41[1] * adStack_2c0[uVar14 + 2];
            if ((long)uVar32 < (long)uVar12) {
              do {
                dVar63 = dVar63 + *(double *)(uVar23 + uVar32 * 8) *
                                  *(double *)(uVar21 + uVar32 * 8);
                uVar32 = uVar32 + 1;
              } while (uVar14 + uVar32 != 3);
            }
          }
          uVar28 = uVar28 & 0xfffffffffffffffe;
          dVar54 = adStack_2c0[uVar14];
          dVar63 = dVar63 + dVar54;
          adStack_2c0[5] = dVar63;
          adStack_2c0[uVar14] = dVar54 - dVar62 * dVar63;
          uStack_110 = uVar12;
          if (uVar14 < 2) {
            lVar39 = 0;
            lVar30 = 0;
            do {
              dVar54 = *(double *)(uVar23 + lVar39);
              *(double *)((long)adStack_130 + lVar39 + 8) =
                   ((double *)(uVar23 + lVar39))[1] * dVar62;
              *(double *)((long)adStack_130 + lVar39) = dVar54 * dVar62;
              lVar30 = lVar30 + 2;
              lVar39 = lVar39 + 0x10;
            } while (lVar30 < (long)uVar28);
          }
          if ((long)uVar28 < (long)uVar12) {
            do {
              adStack_130[uVar28] = dVar62 * *(double *)(uVar23 + uVar28 * 8);
              uVar28 = uVar28 + 1;
            } while (uVar14 + uVar28 != 3);
          }
          pdStack_100 = adStack_2c0 + 5;
          uStack_f0 = 1;
          pdStack_e0 = adStack_130;
          pdStack_d8 = adStack_2c0 + 5;
          uStack_c0 = 1;
          uStack_c8 = 1;
          uVar14 = (ulong)pdVar38 >> 3 & 1;
          if ((long)uVar12 <= (long)uVar14) {
            uVar14 = uVar12;
          }
          if (0 < (long)uVar14) {
            *pdVar38 = dVar50 - dVar63 * adStack_130[0];
          }
          lVar30 = (uVar12 - uVar14 & 0xfffffffffffffffe) + uVar14;
          if (1 < (long)(uVar12 - uVar14)) {
            lVar39 = uVar42 << 3;
            do {
              dVar62 = *(double *)((long)adStack_130 + lVar39);
              dVar50 = *(double *)(uVar21 + lVar39);
              ((double *)(uVar21 + lVar39))[1] =
                   ((double *)(uVar21 + lVar39))[1] -
                   *(double *)((long)adStack_130 + lVar39 + 8) * dVar63;
              *(double *)(uVar21 + lVar39) = dVar50 - dVar62 * dVar63;
              uVar14 = uVar14 + 2;
              lVar39 = lVar39 + 0x10;
            } while ((long)uVar14 < lVar30);
          }
          for (; lVar30 < (long)uVar12; lVar30 = lVar30 + 1) {
            *(double *)(uVar21 + lVar30 * 8) =
                 *(double *)(uVar21 + lVar30 * 8) - dVar63 * adStack_130[lVar30];
          }
        }
        uVar21 = uVar21 + 8;
        uVar23 = uVar23 + 0x28;
        uVar31 = uVar31 - 1;
        uVar34 = uVar34 + 8;
        uVar14 = uVar25;
      } while (uVar25 != uVar26);
      FUN_109464cc8(aplStack_290,uVar26,adStack_2c0,uVar26);
      uVar21 = 0;
      do {
        adStack_310[*(int *)((long)&uStack_1f0 + uVar21 * 4)] = adStack_2c0[uVar21];
        uVar21 = uVar21 + 1;
      } while (uVar26 != uVar21);
      dVar62 = adStack_310[3];
      dVar63 = adStack_310[1];
      if (3 < uVar26) goto LAB_109463d08;
    }
    do {
      adStack_310[*(int *)((long)&uStack_1f0 + uVar26 * 4)] = 0.0;
      uVar26 = uVar26 + 1;
      dVar62 = adStack_310[3];
      dVar63 = adStack_310[1];
    } while (uVar26 != 4);
  }
LAB_109463d08:
  if (plStack_2f0 != (long *)0x0) {
    __ZdlPv();
  }
  dVar50 = adStack_310[2] + -(dVar63 * dVar43) + dVar59 * adStack_310[0];
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  dVar62 = dVar43 * adStack_310[0] + dVar59 * dVar63 + dVar62;
LAB_109463d54:
  *param_1 = dVar62;
  param_1[2] = dVar60;
  param_1[1] = dVar50;
  param_1[3] = dVar44;
  param_1[4] = dVar61;
  *(float *)(param_1 + 5) = (float)(dVar56 * 0.01);
  uVar17 = 1;
LAB_109463d78:
  *(undefined1 *)(param_1 + 6) = uVar17;
  if (pdVar40 != (double *)0x0) {
    __ZdlPv(pdVar40);
  }
LAB_109463134:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
LAB_109463d90:
  FUN_109463e00();
LAB_109463d9c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109463da0);
  (*pcVar8)();
}



/* Entry: 109463e00; end: 109463e13;  */

void FUN_109463e00(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
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
  
  plVar9 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar9 < (long *)0x555555555555556) {
    __Znwm((long)plVar9 * 0x30);
    return;
  }
  func_0x000104c4f740();
LAB_109463e88:
  plVar18 = plVar9;
  uVar6 = (long)param_2 - (long)plVar18 >> 3;
  if (uVar6 - 2 == 0 || (long)uVar6 < 2) {
    if (uVar6 < 2) {
      return;
    }
    if (uVar6 == 2) {
      lVar8 = *plVar18;
      if (*(double *)(*(long *)*param_3 + param_2[-1] * 8) <
          *(double *)(*(long *)*param_3 + lVar8 * 8)) {
        *plVar18 = param_2[-1];
        param_2[-1] = lVar8;
        return;
      }
      return;
    }
  }
  else {
    if (uVar6 == 3) {
      lVar8 = *plVar18;
      lVar11 = plVar18[1];
      lVar7 = *(long *)*param_3;
      dVar20 = *(double *)(lVar7 + lVar11 * 8);
      dVar19 = *(double *)(lVar7 + lVar8 * 8);
      lVar14 = param_2[-1];
      dVar21 = *(double *)(lVar7 + lVar14 * 8);
      if (dVar20 < dVar19) {
        if (dVar20 <= dVar21) {
          *plVar18 = lVar11;
          plVar18[1] = lVar8;
          if (dVar19 <= *(double *)(lVar7 + param_2[-1] * 8)) {
            return;
          }
          plVar18[1] = param_2[-1];
        }
        else {
          *plVar18 = lVar14;
        }
        param_2[-1] = lVar8;
        return;
      }
      if (dVar21 < dVar20) {
        plVar18[1] = lVar14;
        param_2[-1] = lVar11;
        lVar8 = *plVar18;
        if (*(double *)(lVar7 + plVar18[1] * 8) < *(double *)(lVar7 + lVar8 * 8)) {
          *plVar18 = plVar18[1];
          plVar18[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 4) {
      plVar10 = plVar18 + 1;
      lVar8 = *plVar10;
      plVar3 = plVar18 + 2;
      lVar7 = *plVar3;
      lVar11 = *(long *)*param_3;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      lVar14 = *plVar18;
      dVar19 = *(double *)(lVar11 + lVar14 * 8);
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      plVar9 = plVar18;
      if (dVar19 <= dVar21) {
        lVar13 = lVar7;
        if (dVar21 <= dVar20) goto LAB_1094647d4;
        *plVar10 = lVar7;
        *plVar3 = lVar8;
        plVar17 = plVar10;
        lVar4 = lVar8;
joined_r0x00010946475c:
        lVar13 = lVar8;
        if (dVar19 <= dVar20) goto LAB_1094647d4;
      }
      else {
        lVar4 = lVar14;
        plVar17 = plVar3;
        if (dVar21 <= dVar20) {
          *plVar18 = lVar8;
          plVar18[1] = lVar14;
          lVar8 = lVar7;
          plVar9 = plVar10;
          goto joined_r0x00010946475c;
        }
      }
      *plVar9 = lVar7;
      *plVar17 = lVar14;
      lVar13 = lVar4;
LAB_1094647d4:
      if (*(double *)(lVar11 + lVar13 * 8) <= *(double *)(lVar11 + param_2[-1] * 8)) {
        return;
      }
      *plVar3 = param_2[-1];
      param_2[-1] = lVar13;
      lVar7 = *plVar3;
      lVar8 = *plVar10;
      dVar19 = *(double *)(lVar11 + lVar7 * 8);
      if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
        plVar18[1] = lVar7;
        plVar18[2] = lVar8;
        lVar8 = *plVar18;
        if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar18 = lVar7;
          plVar18[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 5) {
      lVar11 = *(long *)*param_3;
      plVar9 = plVar18 + 1;
      plVar10 = plVar18 + 2;
      plVar3 = plVar18 + 3;
      lVar7 = *plVar9;
      lVar14 = *plVar18;
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      dVar19 = *(double *)(lVar11 + lVar14 * 8);
      lVar8 = *plVar10;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      if (dVar19 <= dVar20) {
        if (dVar21 < dVar20) {
          *plVar9 = lVar8;
          *plVar10 = lVar7;
          lVar14 = *plVar18;
          lVar8 = lVar7;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar14 * 8)) {
            *plVar18 = *plVar9;
            *plVar9 = lVar14;
            lVar8 = *plVar10;
          }
        }
      }
      else {
        if (dVar20 <= dVar21) {
          *plVar18 = lVar7;
          *plVar9 = lVar14;
          lVar8 = *plVar10;
          if (dVar19 <= *(double *)(lVar11 + lVar8 * 8)) goto LAB_1094648ec;
          *plVar9 = lVar8;
        }
        else {
          *plVar18 = lVar8;
        }
        *plVar10 = lVar14;
        lVar8 = lVar14;
      }
LAB_1094648ec:
      if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
        *plVar10 = *plVar3;
        *plVar3 = lVar8;
        lVar8 = *plVar9;
        if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar9 = *plVar10;
          *plVar10 = lVar8;
          lVar8 = *plVar18;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar18 = *plVar9;
            *plVar9 = lVar8;
          }
        }
      }
      lVar8 = param_2[-1];
      lVar7 = *plVar3;
      if (*(double *)(lVar11 + lVar8 * 8) < *(double *)(lVar11 + lVar7 * 8)) {
        *plVar3 = lVar8;
        param_2[-1] = lVar7;
        lVar8 = *plVar10;
        if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar10 = *plVar3;
          *plVar3 = lVar8;
          lVar8 = *plVar9;
          if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar9 = *plVar10;
            *plVar10 = lVar8;
            lVar8 = *plVar18;
            if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
              *plVar18 = *plVar9;
              *plVar9 = lVar8;
            }
          }
        }
      }
      return;
    }
  }
  if ((long)uVar6 < 0x18) {
    if ((param_5 & 1) == 0) {
      if (plVar18 == param_2) {
        return;
      }
      if (plVar18 + 1 != param_2) {
        lVar8 = *(long *)*param_3;
        plVar9 = plVar18 + 1;
        do {
          plVar10 = plVar9;
          lVar11 = *plVar18;
          lVar7 = plVar18[1];
          dVar19 = *(double *)(lVar8 + lVar7 * 8);
          plVar9 = plVar10;
          if (dVar19 < *(double *)(lVar8 + lVar11 * 8)) {
            do {
              *plVar9 = lVar11;
              lVar11 = plVar9[-2];
              plVar9 = plVar9 + -1;
            } while (dVar19 < *(double *)(lVar8 + lVar11 * 8));
            *plVar9 = lVar7;
          }
          plVar9 = plVar10 + 1;
          plVar18 = plVar10;
        } while (plVar10 + 1 != param_2);
        return;
      }
      return;
    }
    if (plVar18 == param_2) {
      return;
    }
    if (plVar18 + 1 == param_2) {
      return;
    }
    lVar11 = *(long *)*param_3;
    lVar8 = 8;
    plVar9 = plVar18;
    plVar10 = plVar18 + 1;
    do {
      lVar7 = *plVar9;
      lVar14 = plVar9[1];
      dVar19 = *(double *)(lVar11 + lVar14 * 8);
      lVar13 = lVar8;
      if (dVar19 < *(double *)(lVar11 + lVar7 * 8)) {
        do {
          *(long *)((long)plVar18 + lVar13) = lVar7;
          lVar4 = lVar13 + -8;
          plVar9 = plVar18;
          if (lVar4 == 0) goto LAB_1094644f8;
          lVar7 = *(long *)((long)plVar18 + lVar13 + -0x10);
          lVar13 = lVar4;
        } while (dVar19 < *(double *)(lVar11 + lVar7 * 8));
        plVar9 = (long *)((long)plVar18 + lVar4);
LAB_1094644f8:
        *plVar9 = lVar14;
      }
      plVar3 = plVar10 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar10;
      plVar10 = plVar3;
      if (plVar3 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (plVar18 == param_2) {
      return;
    }
    uVar5 = uVar6 - 2 >> 1;
    plVar9 = (long *)*param_3;
    uVar12 = uVar5;
    do {
      if ((long)uVar12 <= (long)uVar5) {
        uVar16 = uVar12 << 1 | 1;
        plVar10 = plVar18 + uVar16;
        uVar15 = uVar12 * 2 + 2;
        lVar8 = *plVar9;
        if (((long)uVar15 < (long)uVar6) &&
           (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
          uVar16 = uVar15;
          plVar10 = plVar10 + 1;
        }
        lVar7 = *plVar10;
        lVar11 = plVar18[uVar12];
        dVar19 = *(double *)(lVar8 + lVar11 * 8);
        plVar3 = plVar18 + uVar12;
        if (dVar19 <= *(double *)(lVar8 + lVar7 * 8)) {
          do {
            plVar17 = plVar10;
            *plVar3 = lVar7;
            if ((long)uVar5 < (long)uVar16) break;
            uVar1 = uVar16 << 1 | 1;
            plVar10 = plVar18 + uVar1;
            uVar15 = uVar16 * 2 + 2;
            uVar16 = uVar1;
            if (((long)uVar15 < (long)uVar6) &&
               (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
              uVar16 = uVar15;
              plVar10 = plVar10 + 1;
            }
            lVar7 = *plVar10;
            plVar3 = plVar17;
          } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
          *plVar17 = lVar11;
        }
      }
      bVar2 = uVar12 != 0;
      uVar12 = uVar12 - 1;
    } while (bVar2);
    do {
      lVar8 = *plVar18;
      plVar10 = (long *)*param_3;
      plVar9 = plVar18;
      uVar12 = 0;
      do {
        uVar15 = uVar12 << 1 | 1;
        uVar5 = uVar12 * 2 + 2;
        plVar3 = plVar9 + uVar12 + 1;
        if (((long)uVar5 < (long)uVar6) &&
           (lVar11 = *plVar10,
           *(double *)(lVar11 + plVar9[uVar12 + 1] * 8) <
           *(double *)(lVar11 + plVar9[uVar12 + 2] * 8))) {
          plVar3 = plVar9 + uVar12 + 2;
          uVar15 = uVar5;
        }
        *plVar9 = *plVar3;
        plVar9 = plVar3;
        uVar12 = uVar15;
      } while ((long)uVar15 <= (long)(uVar6 - 2 >> 1));
      param_2 = param_2 + -1;
      if (plVar3 == param_2) {
        *plVar3 = lVar8;
      }
      else {
        *plVar3 = *param_2;
        *param_2 = lVar8;
        lVar8 = (long)((long)plVar3 + (8 - (long)plVar18)) >> 3;
        if (1 < lVar8) {
          uVar12 = lVar8 - 2U >> 1;
          lVar7 = plVar18[uVar12];
          lVar11 = *plVar3;
          lVar8 = *plVar10;
          dVar19 = *(double *)(lVar8 + lVar11 * 8);
          plVar9 = plVar18 + uVar12;
          if (*(double *)(lVar8 + lVar7 * 8) < dVar19) {
            do {
              plVar10 = plVar9;
              *plVar3 = lVar7;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              lVar7 = plVar18[uVar12];
              plVar3 = plVar10;
              plVar9 = plVar18 + uVar12;
            } while (*(double *)(lVar8 + lVar7 * 8) < dVar19);
            *plVar10 = lVar11;
          }
        }
      }
      bVar2 = (long)uVar6 < 3;
      uVar6 = uVar6 - 1;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  plVar9 = plVar18 + (uVar6 >> 1);
  lVar8 = *(long *)*param_3;
  lVar11 = param_2[-1];
  dVar19 = *(double *)(lVar8 + lVar11 * 8);
  if (uVar6 < 0x81) {
    lVar14 = *plVar18;
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar14 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar18 = lVar11;
        param_2[-1] = lVar14;
        lVar11 = *plVar9;
        if (*(double *)(lVar8 + *plVar18 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar9 = *plVar18;
          *plVar18 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar9 = lVar14;
        *plVar18 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_10946416c;
        *plVar18 = param_2[-1];
      }
      else {
        *plVar9 = lVar11;
      }
      param_2[-1] = lVar7;
    }
  }
  else {
    lVar14 = *plVar9;
    lVar7 = *plVar18;
    dVar21 = *(double *)(lVar8 + lVar14 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar9 = lVar11;
        param_2[-1] = lVar14;
        lVar11 = *plVar18;
        if (*(double *)(lVar8 + *plVar9 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar18 = *plVar9;
          *plVar9 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar18 = lVar14;
        *plVar9 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_109463fc8;
        *plVar9 = param_2[-1];
      }
      else {
        *plVar18 = lVar11;
      }
      param_2[-1] = lVar7;
    }
LAB_109463fc8:
    plVar10 = plVar9 + -1;
    lVar7 = *plVar10;
    lVar11 = plVar18[1];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar14 = param_2[-2];
    dVar21 = *(double *)(lVar8 + lVar14 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar10 = lVar14;
        param_2[-2] = lVar7;
        lVar11 = plVar18[1];
        if (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar18[1] = *plVar10;
          *plVar10 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar18[1] = lVar7;
        *plVar10 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-2] * 8)) goto LAB_109464074;
        *plVar10 = param_2[-2];
      }
      else {
        plVar18[1] = lVar14;
      }
      param_2[-2] = lVar11;
    }
LAB_109464074:
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    lVar11 = plVar18[2];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar14 = param_2[-3];
    dVar21 = *(double *)(lVar8 + lVar14 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar3 = lVar14;
        param_2[-3] = lVar7;
        lVar11 = plVar18[2];
        if (*(double *)(lVar8 + *plVar3 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar18[2] = *plVar3;
          *plVar3 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar18[2] = lVar7;
        *plVar3 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-3] * 8)) goto LAB_1094640fc;
        *plVar3 = param_2[-3];
      }
      else {
        plVar18[2] = lVar14;
      }
      param_2[-3] = lVar11;
    }
LAB_1094640fc:
    lVar11 = plVar9[-1];
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar14 = plVar9[1];
    dVar20 = *(double *)(lVar8 + lVar14 * 8);
    if (dVar19 <= dVar21) {
      if (dVar20 < dVar21) {
        *plVar9 = lVar14;
        plVar9[1] = lVar7;
        plVar3 = plVar9;
        lVar7 = lVar14;
        lVar13 = lVar11;
        if (dVar20 < dVar19) goto LAB_109464158;
      }
    }
    else {
      lVar13 = lVar7;
      if (dVar21 <= dVar20) {
        plVar9[-1] = lVar7;
        *plVar9 = lVar11;
        plVar10 = plVar9;
        lVar7 = lVar11;
        lVar13 = lVar14;
        if (dVar19 <= dVar20) goto LAB_109464160;
      }
LAB_109464158:
      *plVar10 = lVar14;
      *plVar3 = lVar11;
      lVar7 = lVar13;
    }
LAB_109464160:
    lVar11 = *plVar18;
    *plVar18 = lVar7;
    *plVar9 = lVar11;
  }
LAB_10946416c:
  param_4 = param_4 + -1;
  lVar11 = *plVar18;
  plVar9 = plVar18;
  if ((param_5 & 1) == 0) {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    if (dVar19 <= *(double *)(lVar8 + plVar18[-1] * 8)) {
      if (*(double *)(lVar8 + param_2[-1] * 8) <= dVar19) {
        do {
          plVar9 = plVar9 + 1;
          if (param_2 <= plVar9) break;
        } while (*(double *)(lVar8 + *plVar9 * 8) <= dVar19);
      }
      else {
        do {
          plVar9 = plVar9 + 1;
        } while (*(double *)(lVar8 + *plVar9 * 8) <= dVar19);
      }
      plVar10 = param_2;
      if (plVar9 < param_2) {
        do {
          plVar10 = plVar10 + -1;
        } while (dVar19 < *(double *)(lVar8 + *plVar10 * 8));
      }
      if (plVar9 < plVar10) {
        lVar7 = *plVar9;
        lVar14 = *plVar10;
        do {
          *plVar9 = lVar14;
          *plVar10 = lVar7;
          do {
            plVar9 = plVar9 + 1;
            lVar7 = *plVar9;
          } while (*(double *)(lVar8 + lVar7 * 8) <= dVar19);
          do {
            plVar10 = plVar10 + -1;
            lVar14 = *plVar10;
          } while (dVar19 < *(double *)(lVar8 + lVar14 * 8));
        } while (plVar9 < plVar10);
      }
      plVar10 = plVar9 + -1;
      if (plVar10 != plVar18) {
        *plVar18 = *plVar10;
      }
      param_5 = 0;
      *plVar10 = lVar11;
      goto LAB_109463e88;
    }
  }
  else {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
  }
  lVar7 = 0;
  do {
    lVar14 = *(long *)((long)plVar18 + lVar7 + 8);
    lVar7 = lVar7 + 8;
  } while (*(double *)(lVar8 + lVar14 * 8) < dVar19);
  plVar10 = (long *)((long)plVar18 + lVar7);
  plVar3 = param_2;
  if (lVar7 == 8) {
    do {
      if (plVar3 <= plVar10) break;
      plVar3 = plVar3 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar3 * 8));
  }
  else {
    do {
      plVar3 = plVar3 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar3 * 8));
  }
  plVar9 = plVar10;
  if (plVar10 < plVar3) {
    lVar7 = *plVar3;
    plVar17 = plVar3;
    do {
      *plVar9 = lVar7;
      *plVar17 = lVar14;
      do {
        plVar9 = plVar9 + 1;
        lVar14 = *plVar9;
      } while (*(double *)(lVar8 + lVar14 * 8) < dVar19);
      do {
        plVar17 = plVar17 + -1;
        lVar7 = *plVar17;
      } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
    } while (plVar9 < plVar17);
  }
  plVar17 = plVar9 + -1;
  if (plVar17 != plVar18) {
    *plVar18 = *plVar17;
  }
  *plVar17 = lVar11;
  if (plVar10 < plVar3) {
LAB_10946428c:
    FUN_109463e58(plVar18,plVar17,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  }
  else {
    plVar10 = plVar18;
    FUN_1094649cc(plVar18,plVar17,*param_3);
    plVar3 = plVar9;
    FUN_1094649cc(plVar9,param_2,*param_3);
    if ((int)plVar3 == 0) {
      if (((ulong)plVar10 & 1) == 0) goto LAB_10946428c;
    }
    else {
      plVar9 = plVar18;
      param_2 = plVar17;
      if (((ulong)plVar10 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_109463e88;
}



/* Entry: 109463e14; end: 109463e57;  */

void FUN_109463e14(long *param_1,long *param_2,undefined8 *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (param_1 < (long *)0x555555555555556) {
    __Znwm((long)param_1 * 0x30);
    return;
  }
  func_0x000104c4f740();
LAB_109463e88:
  plVar13 = param_1;
  uVar6 = (long)param_2 - (long)plVar13 >> 3;
  if (uVar6 - 2 == 0 || (long)uVar6 < 2) {
    if (uVar6 < 2) {
      return;
    }
    if (uVar6 == 2) {
      lVar8 = *plVar13;
      if (*(double *)(*(long *)*param_3 + param_2[-1] * 8) <
          *(double *)(*(long *)*param_3 + lVar8 * 8)) {
        *plVar13 = param_2[-1];
        param_2[-1] = lVar8;
        return;
      }
      return;
    }
  }
  else {
    if (uVar6 == 3) {
      lVar8 = *plVar13;
      lVar11 = plVar13[1];
      lVar7 = *(long *)*param_3;
      dVar20 = *(double *)(lVar7 + lVar11 * 8);
      dVar19 = *(double *)(lVar7 + lVar8 * 8);
      lVar15 = param_2[-1];
      dVar21 = *(double *)(lVar7 + lVar15 * 8);
      if (dVar20 < dVar19) {
        if (dVar20 <= dVar21) {
          *plVar13 = lVar11;
          plVar13[1] = lVar8;
          if (dVar19 <= *(double *)(lVar7 + param_2[-1] * 8)) {
            return;
          }
          plVar13[1] = param_2[-1];
        }
        else {
          *plVar13 = lVar15;
        }
        param_2[-1] = lVar8;
        return;
      }
      if (dVar21 < dVar20) {
        plVar13[1] = lVar15;
        param_2[-1] = lVar11;
        lVar8 = *plVar13;
        if (*(double *)(lVar7 + plVar13[1] * 8) < *(double *)(lVar7 + lVar8 * 8)) {
          *plVar13 = plVar13[1];
          plVar13[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 4) {
      plVar10 = plVar13 + 1;
      lVar8 = *plVar10;
      plVar3 = plVar13 + 2;
      lVar7 = *plVar3;
      lVar11 = *(long *)*param_3;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      lVar15 = *plVar13;
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      plVar9 = plVar13;
      if (dVar19 <= dVar21) {
        lVar14 = lVar7;
        if (dVar21 <= dVar20) goto LAB_1094647d4;
        *plVar10 = lVar7;
        *plVar3 = lVar8;
        plVar18 = plVar10;
        lVar4 = lVar8;
joined_r0x00010946475c:
        lVar14 = lVar8;
        if (dVar19 <= dVar20) goto LAB_1094647d4;
      }
      else {
        lVar4 = lVar15;
        plVar18 = plVar3;
        if (dVar21 <= dVar20) {
          *plVar13 = lVar8;
          plVar13[1] = lVar15;
          lVar8 = lVar7;
          plVar9 = plVar10;
          goto joined_r0x00010946475c;
        }
      }
      *plVar9 = lVar7;
      *plVar18 = lVar15;
      lVar14 = lVar4;
LAB_1094647d4:
      if (*(double *)(lVar11 + lVar14 * 8) <= *(double *)(lVar11 + param_2[-1] * 8)) {
        return;
      }
      *plVar3 = param_2[-1];
      param_2[-1] = lVar14;
      lVar7 = *plVar3;
      lVar8 = *plVar10;
      dVar19 = *(double *)(lVar11 + lVar7 * 8);
      if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
        plVar13[1] = lVar7;
        plVar13[2] = lVar8;
        lVar8 = *plVar13;
        if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar13 = lVar7;
          plVar13[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 5) {
      lVar11 = *(long *)*param_3;
      plVar9 = plVar13 + 1;
      plVar10 = plVar13 + 2;
      plVar3 = plVar13 + 3;
      lVar7 = *plVar9;
      lVar15 = *plVar13;
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      lVar8 = *plVar10;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      if (dVar19 <= dVar20) {
        if (dVar21 < dVar20) {
          *plVar9 = lVar8;
          *plVar10 = lVar7;
          lVar15 = *plVar13;
          lVar8 = lVar7;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar15 * 8)) {
            *plVar13 = *plVar9;
            *plVar9 = lVar15;
            lVar8 = *plVar10;
          }
        }
      }
      else {
        if (dVar20 <= dVar21) {
          *plVar13 = lVar7;
          *plVar9 = lVar15;
          lVar8 = *plVar10;
          if (dVar19 <= *(double *)(lVar11 + lVar8 * 8)) goto LAB_1094648ec;
          *plVar9 = lVar8;
        }
        else {
          *plVar13 = lVar8;
        }
        *plVar10 = lVar15;
        lVar8 = lVar15;
      }
LAB_1094648ec:
      if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
        *plVar10 = *plVar3;
        *plVar3 = lVar8;
        lVar8 = *plVar9;
        if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar9 = *plVar10;
          *plVar10 = lVar8;
          lVar8 = *plVar13;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar13 = *plVar9;
            *plVar9 = lVar8;
          }
        }
      }
      lVar8 = param_2[-1];
      lVar7 = *plVar3;
      if (*(double *)(lVar11 + lVar8 * 8) < *(double *)(lVar11 + lVar7 * 8)) {
        *plVar3 = lVar8;
        param_2[-1] = lVar7;
        lVar8 = *plVar10;
        if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar10 = *plVar3;
          *plVar3 = lVar8;
          lVar8 = *plVar9;
          if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar9 = *plVar10;
            *plVar10 = lVar8;
            lVar8 = *plVar13;
            if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
              *plVar13 = *plVar9;
              *plVar9 = lVar8;
            }
          }
        }
      }
      return;
    }
  }
  if ((long)uVar6 < 0x18) {
    if ((param_5 & 1) == 0) {
      if (plVar13 == param_2) {
        return;
      }
      if (plVar13 + 1 != param_2) {
        lVar8 = *(long *)*param_3;
        plVar9 = plVar13 + 1;
        do {
          plVar10 = plVar9;
          lVar11 = *plVar13;
          lVar7 = plVar13[1];
          dVar19 = *(double *)(lVar8 + lVar7 * 8);
          plVar13 = plVar10;
          if (dVar19 < *(double *)(lVar8 + lVar11 * 8)) {
            do {
              *plVar13 = lVar11;
              lVar11 = plVar13[-2];
              plVar13 = plVar13 + -1;
            } while (dVar19 < *(double *)(lVar8 + lVar11 * 8));
            *plVar13 = lVar7;
          }
          plVar9 = plVar10 + 1;
          plVar13 = plVar10;
        } while (plVar10 + 1 != param_2);
        return;
      }
      return;
    }
    if (plVar13 == param_2) {
      return;
    }
    if (plVar13 + 1 == param_2) {
      return;
    }
    lVar11 = *(long *)*param_3;
    lVar8 = 8;
    plVar9 = plVar13;
    plVar10 = plVar13 + 1;
    do {
      lVar7 = *plVar9;
      lVar15 = plVar9[1];
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      lVar14 = lVar8;
      if (dVar19 < *(double *)(lVar11 + lVar7 * 8)) {
        do {
          *(long *)((long)plVar13 + lVar14) = lVar7;
          lVar4 = lVar14 + -8;
          plVar9 = plVar13;
          if (lVar4 == 0) goto LAB_1094644f8;
          lVar7 = *(long *)((long)plVar13 + lVar14 + -0x10);
          lVar14 = lVar4;
        } while (dVar19 < *(double *)(lVar11 + lVar7 * 8));
        plVar9 = (long *)((long)plVar13 + lVar4);
LAB_1094644f8:
        *plVar9 = lVar15;
      }
      plVar3 = plVar10 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar10;
      plVar10 = plVar3;
      if (plVar3 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (plVar13 == param_2) {
      return;
    }
    uVar5 = uVar6 - 2 >> 1;
    plVar9 = (long *)*param_3;
    uVar12 = uVar5;
    do {
      if ((long)uVar12 <= (long)uVar5) {
        uVar17 = uVar12 << 1 | 1;
        plVar10 = plVar13 + uVar17;
        uVar16 = uVar12 * 2 + 2;
        lVar8 = *plVar9;
        if (((long)uVar16 < (long)uVar6) &&
           (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
          uVar17 = uVar16;
          plVar10 = plVar10 + 1;
        }
        lVar7 = *plVar10;
        lVar11 = plVar13[uVar12];
        dVar19 = *(double *)(lVar8 + lVar11 * 8);
        plVar3 = plVar13 + uVar12;
        if (dVar19 <= *(double *)(lVar8 + lVar7 * 8)) {
          do {
            plVar18 = plVar10;
            *plVar3 = lVar7;
            if ((long)uVar5 < (long)uVar17) break;
            uVar1 = uVar17 << 1 | 1;
            plVar10 = plVar13 + uVar1;
            uVar16 = uVar17 * 2 + 2;
            uVar17 = uVar1;
            if (((long)uVar16 < (long)uVar6) &&
               (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
              uVar17 = uVar16;
              plVar10 = plVar10 + 1;
            }
            lVar7 = *plVar10;
            plVar3 = plVar18;
          } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
          *plVar18 = lVar11;
        }
      }
      bVar2 = uVar12 != 0;
      uVar12 = uVar12 - 1;
    } while (bVar2);
    do {
      lVar8 = *plVar13;
      plVar10 = (long *)*param_3;
      plVar9 = plVar13;
      uVar12 = 0;
      do {
        uVar16 = uVar12 << 1 | 1;
        uVar5 = uVar12 * 2 + 2;
        plVar3 = plVar9 + uVar12 + 1;
        if (((long)uVar5 < (long)uVar6) &&
           (lVar11 = *plVar10,
           *(double *)(lVar11 + plVar9[uVar12 + 1] * 8) <
           *(double *)(lVar11 + plVar9[uVar12 + 2] * 8))) {
          plVar3 = plVar9 + uVar12 + 2;
          uVar16 = uVar5;
        }
        *plVar9 = *plVar3;
        plVar9 = plVar3;
        uVar12 = uVar16;
      } while ((long)uVar16 <= (long)(uVar6 - 2 >> 1));
      param_2 = param_2 + -1;
      if (plVar3 == param_2) {
        *plVar3 = lVar8;
      }
      else {
        *plVar3 = *param_2;
        *param_2 = lVar8;
        lVar8 = (long)plVar3 + (8 - (long)plVar13) >> 3;
        if (1 < lVar8) {
          uVar12 = lVar8 - 2U >> 1;
          lVar7 = plVar13[uVar12];
          lVar11 = *plVar3;
          lVar8 = *plVar10;
          dVar19 = *(double *)(lVar8 + lVar11 * 8);
          plVar9 = plVar13 + uVar12;
          if (*(double *)(lVar8 + lVar7 * 8) < dVar19) {
            do {
              plVar10 = plVar9;
              *plVar3 = lVar7;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              lVar7 = plVar13[uVar12];
              plVar3 = plVar10;
              plVar9 = plVar13 + uVar12;
            } while (*(double *)(lVar8 + lVar7 * 8) < dVar19);
            *plVar10 = lVar11;
          }
        }
      }
      bVar2 = (long)uVar6 < 3;
      uVar6 = uVar6 - 1;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  plVar9 = plVar13 + (uVar6 >> 1);
  lVar8 = *(long *)*param_3;
  lVar11 = param_2[-1];
  dVar19 = *(double *)(lVar8 + lVar11 * 8);
  if (uVar6 < 0x81) {
    lVar15 = *plVar13;
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar13 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar9;
        if (*(double *)(lVar8 + *plVar13 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar9 = *plVar13;
          *plVar13 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar9 = lVar15;
        *plVar13 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_10946416c;
        *plVar13 = param_2[-1];
      }
      else {
        *plVar9 = lVar11;
      }
      param_2[-1] = lVar7;
    }
  }
  else {
    lVar15 = *plVar9;
    lVar7 = *plVar13;
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar9 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar13;
        if (*(double *)(lVar8 + *plVar9 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar13 = *plVar9;
          *plVar9 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar13 = lVar15;
        *plVar9 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_109463fc8;
        *plVar9 = param_2[-1];
      }
      else {
        *plVar13 = lVar11;
      }
      param_2[-1] = lVar7;
    }
LAB_109463fc8:
    plVar10 = plVar9 + -1;
    lVar7 = *plVar10;
    lVar11 = plVar13[1];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = param_2[-2];
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar10 = lVar15;
        param_2[-2] = lVar7;
        lVar11 = plVar13[1];
        if (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar13[1] = *plVar10;
          *plVar10 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar13[1] = lVar7;
        *plVar10 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-2] * 8)) goto LAB_109464074;
        *plVar10 = param_2[-2];
      }
      else {
        plVar13[1] = lVar15;
      }
      param_2[-2] = lVar11;
    }
LAB_109464074:
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    lVar11 = plVar13[2];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = param_2[-3];
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar3 = lVar15;
        param_2[-3] = lVar7;
        lVar11 = plVar13[2];
        if (*(double *)(lVar8 + *plVar3 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar13[2] = *plVar3;
          *plVar3 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar13[2] = lVar7;
        *plVar3 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-3] * 8)) goto LAB_1094640fc;
        *plVar3 = param_2[-3];
      }
      else {
        plVar13[2] = lVar15;
      }
      param_2[-3] = lVar11;
    }
LAB_1094640fc:
    lVar11 = plVar9[-1];
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = plVar9[1];
    dVar20 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar21) {
      if (dVar20 < dVar21) {
        *plVar9 = lVar15;
        plVar9[1] = lVar7;
        plVar3 = plVar9;
        lVar7 = lVar15;
        lVar14 = lVar11;
        if (dVar20 < dVar19) goto LAB_109464158;
      }
    }
    else {
      lVar14 = lVar7;
      if (dVar21 <= dVar20) {
        plVar9[-1] = lVar7;
        *plVar9 = lVar11;
        plVar10 = plVar9;
        lVar7 = lVar11;
        lVar14 = lVar15;
        if (dVar19 <= dVar20) goto LAB_109464160;
      }
LAB_109464158:
      *plVar10 = lVar15;
      *plVar3 = lVar11;
      lVar7 = lVar14;
    }
LAB_109464160:
    lVar11 = *plVar13;
    *plVar13 = lVar7;
    *plVar9 = lVar11;
  }
LAB_10946416c:
  param_4 = param_4 + -1;
  lVar11 = *plVar13;
  param_1 = plVar13;
  if ((param_5 & 1) == 0) {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    if (dVar19 <= *(double *)(lVar8 + plVar13[-1] * 8)) {
      if (*(double *)(lVar8 + param_2[-1] * 8) <= dVar19) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(double *)(lVar8 + *param_1 * 8) <= dVar19);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (*(double *)(lVar8 + *param_1 * 8) <= dVar19);
      }
      plVar9 = param_2;
      if (param_1 < param_2) {
        do {
          plVar9 = plVar9 + -1;
        } while (dVar19 < *(double *)(lVar8 + *plVar9 * 8));
      }
      if (param_1 < plVar9) {
        lVar7 = *param_1;
        lVar15 = *plVar9;
        do {
          *param_1 = lVar15;
          *plVar9 = lVar7;
          do {
            param_1 = param_1 + 1;
            lVar7 = *param_1;
          } while (*(double *)(lVar8 + lVar7 * 8) <= dVar19);
          do {
            plVar9 = plVar9 + -1;
            lVar15 = *plVar9;
          } while (dVar19 < *(double *)(lVar8 + lVar15 * 8));
        } while (param_1 < plVar9);
      }
      plVar9 = param_1 + -1;
      if (plVar9 != plVar13) {
        *plVar13 = *plVar9;
      }
      param_5 = 0;
      *plVar9 = lVar11;
      goto LAB_109463e88;
    }
  }
  else {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
  }
  lVar7 = 0;
  do {
    lVar15 = *(long *)((long)plVar13 + lVar7 + 8);
    lVar7 = lVar7 + 8;
  } while (*(double *)(lVar8 + lVar15 * 8) < dVar19);
  plVar9 = (long *)((long)plVar13 + lVar7);
  plVar10 = param_2;
  if (lVar7 == 8) {
    do {
      if (plVar10 <= plVar9) break;
      plVar10 = plVar10 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar10 * 8));
  }
  else {
    do {
      plVar10 = plVar10 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar10 * 8));
  }
  param_1 = plVar9;
  if (plVar9 < plVar10) {
    lVar7 = *plVar10;
    plVar3 = plVar10;
    do {
      *param_1 = lVar7;
      *plVar3 = lVar15;
      do {
        param_1 = param_1 + 1;
        lVar15 = *param_1;
      } while (*(double *)(lVar8 + lVar15 * 8) < dVar19);
      do {
        plVar3 = plVar3 + -1;
        lVar7 = *plVar3;
      } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
    } while (param_1 < plVar3);
  }
  plVar3 = param_1 + -1;
  if (plVar3 != plVar13) {
    *plVar13 = *plVar3;
  }
  *plVar3 = lVar11;
  if (plVar9 < plVar10) {
LAB_10946428c:
    FUN_109463e58(plVar13,plVar3,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  }
  else {
    plVar9 = plVar13;
    FUN_1094649cc(plVar13,plVar3,*param_3);
    plVar10 = param_1;
    FUN_1094649cc(param_1,param_2,*param_3);
    if ((int)plVar10 == 0) {
      if (((ulong)plVar9 & 1) == 0) goto LAB_10946428c;
    }
    else {
      param_1 = plVar13;
      param_2 = plVar3;
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_109463e88;
}



/* Entry: 109463e58; end: 109464857;  */

void FUN_109463e58(long *param_1,long *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
LAB_109463e88:
  plVar13 = param_1;
  uVar6 = (long)param_2 - (long)plVar13 >> 3;
  if (uVar6 - 2 == 0 || (long)uVar6 < 2) {
    if (uVar6 < 2) {
      return;
    }
    if (uVar6 == 2) {
      lVar8 = *plVar13;
      if (*(double *)(*(long *)*param_3 + param_2[-1] * 8) <
          *(double *)(*(long *)*param_3 + lVar8 * 8)) {
        *plVar13 = param_2[-1];
        param_2[-1] = lVar8;
        return;
      }
      return;
    }
  }
  else {
    if (uVar6 == 3) {
      lVar8 = *plVar13;
      lVar11 = plVar13[1];
      lVar7 = *(long *)*param_3;
      dVar20 = *(double *)(lVar7 + lVar11 * 8);
      dVar19 = *(double *)(lVar7 + lVar8 * 8);
      lVar15 = param_2[-1];
      dVar21 = *(double *)(lVar7 + lVar15 * 8);
      if (dVar20 < dVar19) {
        if (dVar20 <= dVar21) {
          *plVar13 = lVar11;
          plVar13[1] = lVar8;
          if (dVar19 <= *(double *)(lVar7 + param_2[-1] * 8)) {
            return;
          }
          plVar13[1] = param_2[-1];
        }
        else {
          *plVar13 = lVar15;
        }
        param_2[-1] = lVar8;
        return;
      }
      if (dVar21 < dVar20) {
        plVar13[1] = lVar15;
        param_2[-1] = lVar11;
        lVar8 = *plVar13;
        if (*(double *)(lVar7 + plVar13[1] * 8) < *(double *)(lVar7 + lVar8 * 8)) {
          *plVar13 = plVar13[1];
          plVar13[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 4) {
      plVar10 = plVar13 + 1;
      lVar8 = *plVar10;
      plVar3 = plVar13 + 2;
      lVar7 = *plVar3;
      lVar11 = *(long *)*param_3;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      lVar15 = *plVar13;
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      plVar9 = plVar13;
      if (dVar19 <= dVar21) {
        lVar14 = lVar7;
        if (dVar21 <= dVar20) goto LAB_1094647d4;
        *plVar10 = lVar7;
        *plVar3 = lVar8;
        plVar18 = plVar10;
        lVar4 = lVar8;
joined_r0x00010946475c:
        lVar14 = lVar8;
        if (dVar19 <= dVar20) goto LAB_1094647d4;
      }
      else {
        lVar4 = lVar15;
        plVar18 = plVar3;
        if (dVar21 <= dVar20) {
          *plVar13 = lVar8;
          plVar13[1] = lVar15;
          lVar8 = lVar7;
          plVar9 = plVar10;
          goto joined_r0x00010946475c;
        }
      }
      *plVar9 = lVar7;
      *plVar18 = lVar15;
      lVar14 = lVar4;
LAB_1094647d4:
      if (*(double *)(lVar11 + lVar14 * 8) <= *(double *)(lVar11 + param_2[-1] * 8)) {
        return;
      }
      *plVar3 = param_2[-1];
      param_2[-1] = lVar14;
      lVar7 = *plVar3;
      lVar8 = *plVar10;
      dVar19 = *(double *)(lVar11 + lVar7 * 8);
      if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
        plVar13[1] = lVar7;
        plVar13[2] = lVar8;
        lVar8 = *plVar13;
        if (dVar19 < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar13 = lVar7;
          plVar13[1] = lVar8;
          return;
        }
        return;
      }
      return;
    }
    if (uVar6 == 5) {
      lVar11 = *(long *)*param_3;
      plVar9 = plVar13 + 1;
      plVar10 = plVar13 + 2;
      plVar3 = plVar13 + 3;
      lVar7 = *plVar9;
      lVar15 = *plVar13;
      dVar20 = *(double *)(lVar11 + lVar7 * 8);
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      lVar8 = *plVar10;
      dVar21 = *(double *)(lVar11 + lVar8 * 8);
      if (dVar19 <= dVar20) {
        if (dVar21 < dVar20) {
          *plVar9 = lVar8;
          *plVar10 = lVar7;
          lVar15 = *plVar13;
          lVar8 = lVar7;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar15 * 8)) {
            *plVar13 = *plVar9;
            *plVar9 = lVar15;
            lVar8 = *plVar10;
          }
        }
      }
      else {
        if (dVar20 <= dVar21) {
          *plVar13 = lVar7;
          *plVar9 = lVar15;
          lVar8 = *plVar10;
          if (dVar19 <= *(double *)(lVar11 + lVar8 * 8)) goto LAB_1094648ec;
          *plVar9 = lVar8;
        }
        else {
          *plVar13 = lVar8;
        }
        *plVar10 = lVar15;
        lVar8 = lVar15;
      }
LAB_1094648ec:
      if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
        *plVar10 = *plVar3;
        *plVar3 = lVar8;
        lVar8 = *plVar9;
        if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar9 = *plVar10;
          *plVar10 = lVar8;
          lVar8 = *plVar13;
          if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar13 = *plVar9;
            *plVar9 = lVar8;
          }
        }
      }
      lVar8 = param_2[-1];
      lVar7 = *plVar3;
      if (*(double *)(lVar11 + lVar8 * 8) < *(double *)(lVar11 + lVar7 * 8)) {
        *plVar3 = lVar8;
        param_2[-1] = lVar7;
        lVar8 = *plVar10;
        if (*(double *)(lVar11 + *plVar3 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
          *plVar10 = *plVar3;
          *plVar3 = lVar8;
          lVar8 = *plVar9;
          if (*(double *)(lVar11 + *plVar10 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
            *plVar9 = *plVar10;
            *plVar10 = lVar8;
            lVar8 = *plVar13;
            if (*(double *)(lVar11 + *plVar9 * 8) < *(double *)(lVar11 + lVar8 * 8)) {
              *plVar13 = *plVar9;
              *plVar9 = lVar8;
            }
          }
        }
      }
      return;
    }
  }
  if ((long)uVar6 < 0x18) {
    if ((param_5 & 1) == 0) {
      if (plVar13 == param_2) {
        return;
      }
      if (plVar13 + 1 != param_2) {
        lVar8 = *(long *)*param_3;
        plVar9 = plVar13 + 1;
        do {
          plVar10 = plVar9;
          lVar11 = *plVar13;
          lVar7 = plVar13[1];
          dVar19 = *(double *)(lVar8 + lVar7 * 8);
          plVar13 = plVar10;
          if (dVar19 < *(double *)(lVar8 + lVar11 * 8)) {
            do {
              *plVar13 = lVar11;
              lVar11 = plVar13[-2];
              plVar13 = plVar13 + -1;
            } while (dVar19 < *(double *)(lVar8 + lVar11 * 8));
            *plVar13 = lVar7;
          }
          plVar9 = plVar10 + 1;
          plVar13 = plVar10;
        } while (plVar10 + 1 != param_2);
        return;
      }
      return;
    }
    if (plVar13 == param_2) {
      return;
    }
    if (plVar13 + 1 == param_2) {
      return;
    }
    lVar11 = *(long *)*param_3;
    lVar8 = 8;
    plVar9 = plVar13;
    plVar10 = plVar13 + 1;
    do {
      lVar7 = *plVar9;
      lVar15 = plVar9[1];
      dVar19 = *(double *)(lVar11 + lVar15 * 8);
      lVar14 = lVar8;
      if (dVar19 < *(double *)(lVar11 + lVar7 * 8)) {
        do {
          *(long *)((long)plVar13 + lVar14) = lVar7;
          lVar4 = lVar14 + -8;
          plVar9 = plVar13;
          if (lVar4 == 0) goto LAB_1094644f8;
          lVar7 = *(long *)((long)plVar13 + lVar14 + -0x10);
          lVar14 = lVar4;
        } while (dVar19 < *(double *)(lVar11 + lVar7 * 8));
        plVar9 = (long *)((long)plVar13 + lVar4);
LAB_1094644f8:
        *plVar9 = lVar15;
      }
      plVar3 = plVar10 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar10;
      plVar10 = plVar3;
      if (plVar3 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (plVar13 == param_2) {
      return;
    }
    uVar5 = uVar6 - 2 >> 1;
    plVar9 = (long *)*param_3;
    uVar12 = uVar5;
    do {
      if ((long)uVar12 <= (long)uVar5) {
        uVar17 = uVar12 << 1 | 1;
        plVar10 = plVar13 + uVar17;
        uVar16 = uVar12 * 2 + 2;
        lVar8 = *plVar9;
        if (((long)uVar16 < (long)uVar6) &&
           (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
          uVar17 = uVar16;
          plVar10 = plVar10 + 1;
        }
        lVar7 = *plVar10;
        lVar11 = plVar13[uVar12];
        dVar19 = *(double *)(lVar8 + lVar11 * 8);
        plVar3 = plVar13 + uVar12;
        if (dVar19 <= *(double *)(lVar8 + lVar7 * 8)) {
          do {
            plVar18 = plVar10;
            *plVar3 = lVar7;
            if ((long)uVar5 < (long)uVar17) break;
            uVar1 = uVar17 << 1 | 1;
            plVar10 = plVar13 + uVar1;
            uVar16 = uVar17 * 2 + 2;
            uVar17 = uVar1;
            if (((long)uVar16 < (long)uVar6) &&
               (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + plVar10[1] * 8))) {
              uVar17 = uVar16;
              plVar10 = plVar10 + 1;
            }
            lVar7 = *plVar10;
            plVar3 = plVar18;
          } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
          *plVar18 = lVar11;
        }
      }
      bVar2 = uVar12 != 0;
      uVar12 = uVar12 - 1;
    } while (bVar2);
    do {
      lVar8 = *plVar13;
      plVar10 = (long *)*param_3;
      plVar9 = plVar13;
      uVar12 = 0;
      do {
        uVar16 = uVar12 << 1 | 1;
        uVar5 = uVar12 * 2 + 2;
        plVar3 = plVar9 + uVar12 + 1;
        if (((long)uVar5 < (long)uVar6) &&
           (lVar11 = *plVar10,
           *(double *)(lVar11 + plVar9[uVar12 + 1] * 8) <
           *(double *)(lVar11 + plVar9[uVar12 + 2] * 8))) {
          plVar3 = plVar9 + uVar12 + 2;
          uVar16 = uVar5;
        }
        *plVar9 = *plVar3;
        plVar9 = plVar3;
        uVar12 = uVar16;
      } while ((long)uVar16 <= (long)(uVar6 - 2 >> 1));
      param_2 = param_2 + -1;
      if (plVar3 == param_2) {
        *plVar3 = lVar8;
      }
      else {
        *plVar3 = *param_2;
        *param_2 = lVar8;
        lVar8 = (long)plVar3 + (8 - (long)plVar13) >> 3;
        if (1 < lVar8) {
          uVar12 = lVar8 - 2U >> 1;
          lVar7 = plVar13[uVar12];
          lVar11 = *plVar3;
          lVar8 = *plVar10;
          dVar19 = *(double *)(lVar8 + lVar11 * 8);
          plVar9 = plVar13 + uVar12;
          if (*(double *)(lVar8 + lVar7 * 8) < dVar19) {
            do {
              plVar10 = plVar9;
              *plVar3 = lVar7;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              lVar7 = plVar13[uVar12];
              plVar3 = plVar10;
              plVar9 = plVar13 + uVar12;
            } while (*(double *)(lVar8 + lVar7 * 8) < dVar19);
            *plVar10 = lVar11;
          }
        }
      }
      bVar2 = (long)uVar6 < 3;
      uVar6 = uVar6 - 1;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  plVar9 = plVar13 + (uVar6 >> 1);
  lVar8 = *(long *)*param_3;
  lVar11 = param_2[-1];
  dVar19 = *(double *)(lVar8 + lVar11 * 8);
  if (uVar6 < 0x81) {
    lVar15 = *plVar13;
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar13 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar9;
        if (*(double *)(lVar8 + *plVar13 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar9 = *plVar13;
          *plVar13 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar9 = lVar15;
        *plVar13 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_10946416c;
        *plVar13 = param_2[-1];
      }
      else {
        *plVar9 = lVar11;
      }
      param_2[-1] = lVar7;
    }
  }
  else {
    lVar15 = *plVar9;
    lVar7 = *plVar13;
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    if (dVar20 <= dVar21) {
      if (dVar19 < dVar21) {
        *plVar9 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar13;
        if (*(double *)(lVar8 + *plVar9 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          *plVar13 = *plVar9;
          *plVar9 = lVar11;
        }
      }
    }
    else {
      if (dVar21 <= dVar19) {
        *plVar13 = lVar15;
        *plVar9 = lVar7;
        if (dVar20 <= *(double *)(lVar8 + param_2[-1] * 8)) goto LAB_109463fc8;
        *plVar9 = param_2[-1];
      }
      else {
        *plVar13 = lVar11;
      }
      param_2[-1] = lVar7;
    }
LAB_109463fc8:
    plVar10 = plVar9 + -1;
    lVar7 = *plVar10;
    lVar11 = plVar13[1];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = param_2[-2];
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar10 = lVar15;
        param_2[-2] = lVar7;
        lVar11 = plVar13[1];
        if (*(double *)(lVar8 + *plVar10 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar13[1] = *plVar10;
          *plVar10 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar13[1] = lVar7;
        *plVar10 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-2] * 8)) goto LAB_109464074;
        *plVar10 = param_2[-2];
      }
      else {
        plVar13[1] = lVar15;
      }
      param_2[-2] = lVar11;
    }
LAB_109464074:
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    lVar11 = plVar13[2];
    dVar20 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = param_2[-3];
    dVar21 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar20) {
      if (dVar21 < dVar20) {
        *plVar3 = lVar15;
        param_2[-3] = lVar7;
        lVar11 = plVar13[2];
        if (*(double *)(lVar8 + *plVar3 * 8) < *(double *)(lVar8 + lVar11 * 8)) {
          plVar13[2] = *plVar3;
          *plVar3 = lVar11;
        }
      }
    }
    else {
      if (dVar20 <= dVar21) {
        plVar13[2] = lVar7;
        *plVar3 = lVar11;
        if (dVar19 <= *(double *)(lVar8 + param_2[-3] * 8)) goto LAB_1094640fc;
        *plVar3 = param_2[-3];
      }
      else {
        plVar13[2] = lVar15;
      }
      param_2[-3] = lVar11;
    }
LAB_1094640fc:
    lVar11 = plVar9[-1];
    lVar7 = *plVar9;
    dVar21 = *(double *)(lVar8 + lVar7 * 8);
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    lVar15 = plVar9[1];
    dVar20 = *(double *)(lVar8 + lVar15 * 8);
    if (dVar19 <= dVar21) {
      if (dVar20 < dVar21) {
        *plVar9 = lVar15;
        plVar9[1] = lVar7;
        plVar3 = plVar9;
        lVar7 = lVar15;
        lVar14 = lVar11;
        if (dVar20 < dVar19) goto LAB_109464158;
      }
    }
    else {
      lVar14 = lVar7;
      if (dVar21 <= dVar20) {
        plVar9[-1] = lVar7;
        *plVar9 = lVar11;
        plVar10 = plVar9;
        lVar7 = lVar11;
        lVar14 = lVar15;
        if (dVar19 <= dVar20) goto LAB_109464160;
      }
LAB_109464158:
      *plVar10 = lVar15;
      *plVar3 = lVar11;
      lVar7 = lVar14;
    }
LAB_109464160:
    lVar11 = *plVar13;
    *plVar13 = lVar7;
    *plVar9 = lVar11;
  }
LAB_10946416c:
  param_4 = param_4 + -1;
  lVar11 = *plVar13;
  param_1 = plVar13;
  if ((param_5 & 1) == 0) {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
    if (dVar19 <= *(double *)(lVar8 + plVar13[-1] * 8)) {
      if (*(double *)(lVar8 + param_2[-1] * 8) <= dVar19) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(double *)(lVar8 + *param_1 * 8) <= dVar19);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (*(double *)(lVar8 + *param_1 * 8) <= dVar19);
      }
      plVar9 = param_2;
      if (param_1 < param_2) {
        do {
          plVar9 = plVar9 + -1;
        } while (dVar19 < *(double *)(lVar8 + *plVar9 * 8));
      }
      if (param_1 < plVar9) {
        lVar7 = *param_1;
        lVar15 = *plVar9;
        do {
          *param_1 = lVar15;
          *plVar9 = lVar7;
          do {
            param_1 = param_1 + 1;
            lVar7 = *param_1;
          } while (*(double *)(lVar8 + lVar7 * 8) <= dVar19);
          do {
            plVar9 = plVar9 + -1;
            lVar15 = *plVar9;
          } while (dVar19 < *(double *)(lVar8 + lVar15 * 8));
        } while (param_1 < plVar9);
      }
      plVar9 = param_1 + -1;
      if (plVar9 != plVar13) {
        *plVar13 = *plVar9;
      }
      param_5 = 0;
      *plVar9 = lVar11;
      goto LAB_109463e88;
    }
  }
  else {
    dVar19 = *(double *)(lVar8 + lVar11 * 8);
  }
  lVar7 = 0;
  do {
    lVar15 = *(long *)((long)plVar13 + lVar7 + 8);
    lVar7 = lVar7 + 8;
  } while (*(double *)(lVar8 + lVar15 * 8) < dVar19);
  plVar9 = (long *)((long)plVar13 + lVar7);
  plVar10 = param_2;
  if (lVar7 == 8) {
    do {
      if (plVar10 <= plVar9) break;
      plVar10 = plVar10 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar10 * 8));
  }
  else {
    do {
      plVar10 = plVar10 + -1;
    } while (dVar19 <= *(double *)(lVar8 + *plVar10 * 8));
  }
  param_1 = plVar9;
  if (plVar9 < plVar10) {
    lVar7 = *plVar10;
    plVar3 = plVar10;
    do {
      *param_1 = lVar7;
      *plVar3 = lVar15;
      do {
        param_1 = param_1 + 1;
        lVar15 = *param_1;
      } while (*(double *)(lVar8 + lVar15 * 8) < dVar19);
      do {
        plVar3 = plVar3 + -1;
        lVar7 = *plVar3;
      } while (dVar19 <= *(double *)(lVar8 + lVar7 * 8));
    } while (param_1 < plVar3);
  }
  plVar3 = param_1 + -1;
  if (plVar3 != plVar13) {
    *plVar13 = *plVar3;
  }
  *plVar3 = lVar11;
  if (plVar9 < plVar10) {
LAB_10946428c:
    FUN_109463e58(plVar13,plVar3,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  else {
    plVar9 = plVar13;
    FUN_1094649cc(plVar13,plVar3,*param_3);
    plVar10 = param_1;
    FUN_1094649cc(param_1,param_2,*param_3);
    if ((int)plVar10 == 0) {
      if (((ulong)plVar9 & 1) == 0) goto LAB_10946428c;
    }
    else {
      param_1 = plVar13;
      param_2 = plVar3;
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_109463e88;
}



/* Entry: 109464858; end: 1094649cb;  */

void FUN_109464858(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  dVar5 = *(double *)(param_6 + lVar1 * 8);
  dVar4 = *(double *)(param_6 + lVar2 * 8);
  lVar3 = *param_3;
  dVar6 = *(double *)(param_6 + lVar3 * 8);
  if (dVar4 <= dVar5) {
    if (dVar6 < dVar5) {
      *param_2 = lVar3;
      *param_3 = lVar1;
      lVar2 = *param_1;
      lVar3 = lVar1;
      if (*(double *)(param_6 + *param_2 * 8) < *(double *)(param_6 + lVar2 * 8)) {
        *param_1 = *param_2;
        *param_2 = lVar2;
        lVar3 = *param_3;
      }
    }
  }
  else {
    if (dVar5 <= dVar6) {
      *param_1 = lVar1;
      *param_2 = lVar2;
      lVar3 = *param_3;
      if (dVar4 <= *(double *)(param_6 + lVar3 * 8)) goto LAB_1094648ec;
      *param_2 = lVar3;
    }
    else {
      *param_1 = lVar3;
    }
    *param_3 = lVar2;
    lVar3 = lVar2;
  }
LAB_1094648ec:
  if (*(double *)(param_6 + *param_4 * 8) < *(double *)(param_6 + lVar3 * 8)) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(double *)(param_6 + *param_3 * 8) < *(double *)(param_6 + lVar3 * 8)) {
      *param_2 = *param_3;
      *param_3 = lVar3;
      lVar3 = *param_1;
      if (*(double *)(param_6 + *param_2 * 8) < *(double *)(param_6 + lVar3 * 8)) {
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
    }
  }
  lVar3 = *param_4;
  if (*(double *)(param_6 + *param_5 * 8) < *(double *)(param_6 + lVar3 * 8)) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    if (*(double *)(param_6 + *param_4 * 8) < *(double *)(param_6 + lVar3 * 8)) {
      *param_3 = *param_4;
      *param_4 = lVar3;
      lVar3 = *param_2;
      if (*(double *)(param_6 + *param_3 * 8) < *(double *)(param_6 + lVar3 * 8)) {
        *param_2 = *param_3;
        *param_3 = lVar3;
        lVar3 = *param_1;
        if (*(double *)(param_6 + *param_2 * 8) < *(double *)(param_6 + lVar3 * 8)) {
          *param_1 = *param_2;
          *param_2 = lVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 1094649cc; end: 109464cc7;  */

bool FUN_1094649cc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      lVar3 = *param_1;
      if (*(double *)(*param_3 + param_2[-1] * 8) < *(double *)(*param_3 + lVar3 * 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar3;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      lVar3 = *param_1;
      lVar4 = param_1[1];
      lVar6 = *param_3;
      dVar14 = *(double *)(lVar6 + lVar4 * 8);
      dVar13 = *(double *)(lVar6 + lVar3 * 8);
      lVar10 = param_2[-1];
      dVar15 = *(double *)(lVar6 + lVar10 * 8);
      if (dVar14 < dVar13) {
        if (dVar14 <= dVar15) {
          *param_1 = lVar4;
          param_1[1] = lVar3;
          if (dVar13 <= *(double *)(lVar6 + param_2[-1] * 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        else {
          *param_1 = lVar10;
        }
        param_2[-1] = lVar3;
        return true;
      }
      if (dVar15 < dVar14) {
        param_1[1] = lVar10;
        param_2[-1] = lVar4;
        lVar3 = *param_1;
        if (*(double *)(lVar6 + param_1[1] * 8) < *(double *)(lVar6 + lVar3 * 8)) {
          *param_1 = param_1[1];
          param_1[1] = lVar3;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 4) {
      plVar7 = param_1 + 1;
      lVar3 = *plVar7;
      plVar9 = param_1 + 2;
      lVar6 = *plVar9;
      lVar4 = *param_3;
      dVar15 = *(double *)(lVar4 + lVar3 * 8);
      lVar10 = *param_1;
      dVar13 = *(double *)(lVar4 + lVar10 * 8);
      dVar14 = *(double *)(lVar4 + lVar6 * 8);
      plVar8 = param_1;
      if (dVar13 <= dVar15) {
        lVar11 = lVar6;
        if (dVar15 <= dVar14) goto LAB_109464c40;
        *plVar7 = lVar6;
        *plVar9 = lVar3;
        plVar12 = plVar7;
        lVar1 = lVar3;
joined_r0x000109464c28:
        lVar11 = lVar3;
        if (dVar13 <= dVar14) goto LAB_109464c40;
      }
      else {
        lVar1 = lVar10;
        plVar12 = plVar9;
        if (dVar15 <= dVar14) {
          *param_1 = lVar3;
          param_1[1] = lVar10;
          lVar3 = lVar6;
          plVar8 = plVar7;
          goto joined_r0x000109464c28;
        }
      }
      *plVar8 = lVar6;
      *plVar12 = lVar10;
      lVar11 = lVar1;
LAB_109464c40:
      if (*(double *)(lVar4 + lVar11 * 8) <= *(double *)(lVar4 + param_2[-1] * 8)) {
        return true;
      }
      *plVar9 = param_2[-1];
      param_2[-1] = lVar11;
      lVar6 = *plVar9;
      lVar3 = *plVar7;
      dVar13 = *(double *)(lVar4 + lVar6 * 8);
      if (dVar13 < *(double *)(lVar4 + lVar3 * 8)) {
        param_1[1] = lVar6;
        param_1[2] = lVar3;
        lVar3 = *param_1;
        if (dVar13 < *(double *)(lVar4 + lVar3 * 8)) {
          *param_1 = lVar6;
          param_1[1] = lVar3;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 5) {
      FUN_109464858(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,*param_3);
      return true;
    }
  }
  plVar7 = param_1 + 2;
  lVar4 = *plVar7;
  plVar9 = param_1 + 1;
  lVar10 = *plVar9;
  lVar3 = *param_3;
  dVar15 = *(double *)(lVar3 + lVar10 * 8);
  lVar6 = *param_1;
  dVar13 = *(double *)(lVar3 + lVar6 * 8);
  dVar14 = *(double *)(lVar3 + lVar4 * 8);
  plVar8 = param_1;
  if (dVar13 <= dVar15) {
    if (dVar15 <= dVar14) goto LAB_109464b80;
    *plVar9 = lVar4;
    *plVar7 = lVar10;
    plVar12 = plVar9;
joined_r0x000109464b74:
    if (dVar13 <= dVar14) goto LAB_109464b80;
  }
  else {
    plVar12 = plVar7;
    if (dVar15 <= dVar14) {
      *param_1 = lVar10;
      param_1[1] = lVar6;
      plVar8 = plVar9;
      goto joined_r0x000109464b74;
    }
  }
  *plVar8 = lVar4;
  *plVar12 = lVar6;
LAB_109464b80:
  if (param_1 + 3 != param_2) {
    iVar5 = 0;
    lVar4 = 0x18;
    plVar8 = param_1 + 3;
    do {
      plVar9 = plVar8;
      lVar11 = *plVar9;
      lVar10 = *plVar7;
      dVar13 = *(double *)(lVar3 + lVar11 * 8);
      lVar6 = lVar4;
      if (dVar13 < *(double *)(lVar3 + lVar10 * 8)) {
        do {
          *(long *)((long)param_1 + lVar6) = lVar10;
          lVar1 = lVar6 + -8;
          plVar8 = param_1;
          if (lVar1 == 0) goto LAB_109464be0;
          lVar10 = *(long *)((long)param_1 + lVar6 + -0x10);
          lVar6 = lVar1;
        } while (dVar13 < *(double *)(lVar3 + lVar10 * 8));
        plVar8 = (long *)((long)param_1 + lVar1);
LAB_109464be0:
        *plVar8 = lVar11;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return plVar9 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 8;
      plVar8 = plVar9 + 1;
      plVar7 = plVar9;
    } while (plVar9 + 1 != param_2);
  }
  return true;
}



/* Entry: 109464cc8; end: 109464f73;  */

void FUN_109464cc8(long ***param_1,long ****param_2,undefined *param_3,long ****param_4,
                  long ****param_5,long ****param_6)

{
  bool bVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  undefined *puVar4;
  double *pdVar5;
  undefined *puVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined *puVar11;
  long ****pppplVar12;
  long lVar13;
  long ***ppplVar14;
  long ****pppplVar15;
  undefined *puVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  undefined *puVar21;
  long ****unaff_x19;
  long ***ppplVar22;
  long lVar23;
  long ****unaff_x21;
  long ***ppplVar24;
  undefined *puVar25;
  long lVar26;
  long ****unaff_x22;
  long ****pppplVar27;
  long ****pppplVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  long **pplVar45;
  long **pplStack_90;
  long ***ppplStack_88;
  undefined8 uStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppplVar14 = &pplStack_90;
  ppplVar8 = &pplStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar12 = param_5;
  if ((ulong)param_5 >> 0x3d == 0) {
    puVar11 = param_3;
    unaff_x19 = param_5;
    unaff_x21 = param_2;
    if (param_4 == (long ****)0x0) {
      pppplVar9 = (long ****)((long)param_5 << 3);
      if (param_5 < (long ****)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar13 = -((ulong)((long)pppplVar9 + 0x1eU) & 0xfffffffffffffff0);
        ppplVar14 = (long ***)((long)&pplStack_90 + lVar13);
        unaff_x22 = (long ****)((long)&pplStack_90 + lVar13);
        pppplVar10 = unaff_x22;
      }
      else {
        _malloc();
        unaff_x22 = pppplVar9;
        pppplVar10 = pppplVar9;
        if (pppplVar9 == (long ****)0x0) goto LAB_109464f34;
      }
    }
    else {
      ppplVar14 = &pplStack_90;
      pppplVar9 = param_2;
      unaff_x22 = (long ****)0x0;
      pppplVar10 = param_4;
    }
    if (0 < (long)param_3) {
      pppplVar27 = param_2 + (long)param_3 * 5 + -4;
      pppplVar28 = pppplVar10 + (long)param_3;
      do {
        puVar16 = (undefined *)0x0;
        puVar11 = param_3;
        if ((undefined *)0x7 < param_3) {
          puVar11 = (undefined *)0x8;
        }
        pppplVar18 = pppplVar27 + -(long)puVar11;
        pppplVar9 = (long ****)(param_3 + -(long)puVar11);
        pppplVar2 = pppplVar10 + (long)pppplVar9;
        pppplVar19 = (long ****)((ulong)pppplVar2 >> 3 & 1);
        pppplVar20 = pppplVar27;
        do {
          param_4 = (long ****)(param_3 + ~(ulong)puVar16);
          param_1 = pppplVar10[(long)param_4];
          if ((double)param_1 != 0.0) {
            pppplVar12 = param_2 + (long)param_4 * 4;
            param_1 = (long ***)((double)param_1 / (double)pppplVar12[(long)param_4]);
            pppplVar10[(long)param_4] = param_1;
            pppplVar3 = (long ****)(puVar11 + ~(ulong)puVar16);
            if (0 < (long)pppplVar3) {
              pppplVar12 = pppplVar28 + -(long)puVar11;
              pppplVar15 = pppplVar19;
              pppplVar7 = pppplVar18;
              param_4 = pppplVar19;
              if (((ulong)pppplVar2 & 7) != 0) {
                pppplVar15 = pppplVar3;
                param_4 = pppplVar3;
              }
              for (; pppplVar15 != (long ****)0x0; pppplVar15 = (long ****)((long)pppplVar15 + -1))
              {
                *pppplVar12 = (long ***)((double)*pppplVar12 - (double)param_1 * (double)*pppplVar7)
                ;
                pppplVar12 = pppplVar12 + 1;
                pppplVar7 = pppplVar7 + 1;
              }
              lVar13 = (long)pppplVar3 - (long)param_4;
              pppplVar12 = (long ****)(lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffe);
              param_6 = (long ****)((long)pppplVar12 + (long)param_4);
              if (1 < lVar13) {
                lVar13 = (long)puVar11 * -8 + (long)param_4 * 8;
                pppplVar15 = param_4;
                do {
                  dVar29 = *(double *)((long)pppplVar20 + lVar13);
                  dVar30 = *(double *)((long)pppplVar28 + lVar13);
                  ((double *)((long)pppplVar28 + lVar13))[1] =
                       ((double *)((long)pppplVar28 + lVar13))[1] -
                       ((double *)((long)pppplVar20 + lVar13))[1] * (double)param_1;
                  *(double *)((long)pppplVar28 + lVar13) = dVar30 - dVar29 * (double)param_1;
                  pppplVar15 = (long ****)((long)pppplVar15 + 2);
                  lVar13 = lVar13 + 0x10;
                } while ((long)pppplVar15 < (long)param_6);
              }
              if ((long)param_6 < (long)pppplVar3) {
                puVar21 = (undefined *)(((long)param_4 - (long)puVar11) + (long)pppplVar12);
                do {
                  pppplVar28[(long)puVar21] =
                       (long ***)
                       ((double)pppplVar28[(long)puVar21] -
                       (double)param_1 * (double)pppplVar20[(long)puVar21]);
                  puVar21 = puVar21 + 1;
                  param_4 = (long ****)(puVar16 + (long)puVar21);
                } while (param_4 != (long ****)0xffffffffffffffff);
              }
            }
          }
          puVar16 = puVar16 + 1;
          pppplVar18 = pppplVar18 + -4;
          pppplVar20 = pppplVar20 + -4;
        } while (puVar16 != puVar11);
        if (0 < (long)pppplVar9) {
          ppplStack_78 = (long ***)(param_2 + (long)pppplVar9 * 4);
          uStack_70 = 4;
          uStack_80 = 1;
          param_4 = &ppplStack_78;
          pppplVar12 = &ppplStack_88;
          param_1 = (long ***)0xbff0000000000000;
          param_6 = pppplVar10;
          ppplStack_88 = (long ***)pppplVar2;
          FUN_109464f74();
        }
        pppplVar27 = pppplVar27 + -0x28;
        pppplVar28 = pppplVar28 + -8;
        puVar16 = param_3 + -8;
        bVar1 = 7 < (long)param_3;
        param_3 = puVar16;
      } while (puVar16 != (undefined *)0x0 && bVar1);
    }
    if ((long ****)0x4000 < param_5) {
      pppplVar9 = unaff_x22;
      _free();
    }
    ppplVar8 = ppplVar14;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
LAB_109464f34:
    pppplVar9 = (long ****)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar11 = PTR___ZTISt9bad_alloc_110346a68;
    param_4 = (long ****)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long ****)0x4000 < unaff_x19) {
    _free(unaff_x22);
  }
  pppplVar10 = pppplVar9;
  __Unwind_Resume();
  ppplVar14 = param_4[1];
  puVar16 = (undefined *)0x10;
  if (0x7c < ((ulong)ppplVar14 >> 5 & 0xffffffffffffff)) {
    puVar16 = (undefined *)0x4;
  }
  puVar21 = puVar11;
  if (0x7f < (long)puVar11) {
    puVar21 = puVar16;
  }
  if (0 < (long)puVar11) {
    *(long *****)((long)ppplVar8 + -0x20) = unaff_x22;
    *(long *****)((long)ppplVar8 + -0x18) = unaff_x21;
    *(long *****)((long)ppplVar8 + -0x10) = pppplVar9;
    *(long *****)((long)ppplVar8 + -8) = unaff_x19;
    ppplVar17 = *param_4;
    lVar13 = (long)ppplVar14 * 8;
    ppplVar8 = ppplVar17 + 8;
    puVar16 = (undefined *)0x0;
    do {
      puVar4 = puVar16 + (long)puVar21;
      puVar6 = puVar4;
      if ((long)puVar11 <= (long)puVar4) {
        puVar6 = puVar11;
      }
      if ((long)pppplVar10 < 0x10) {
        pppplVar9 = (long ****)0x0;
      }
      else {
        pppplVar9 = (long ****)0x0;
        ppplVar22 = ppplVar8;
        do {
          dVar41 = 0.0;
          dVar42 = 0.0;
          dVar43 = 0.0;
          dVar44 = 0.0;
          dVar39 = 0.0;
          dVar40 = 0.0;
          dVar37 = 0.0;
          dVar38 = 0.0;
          dVar35 = 0.0;
          dVar36 = 0.0;
          dVar33 = 0.0;
          dVar34 = 0.0;
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar29 = 0.0;
          dVar30 = 0.0;
          ppplVar24 = ppplVar22;
          puVar25 = puVar16;
          do {
            pplVar45 = (*pppplVar12)[(long)puVar25];
            dVar41 = dVar41 + (double)ppplVar24[-8] * (double)pplVar45;
            dVar42 = dVar42 + (double)ppplVar24[-7] * (double)pplVar45;
            dVar43 = dVar43 + (double)ppplVar24[-6] * (double)pplVar45;
            dVar44 = dVar44 + (double)ppplVar24[-5] * (double)pplVar45;
            dVar39 = dVar39 + (double)ppplVar24[-4] * (double)pplVar45;
            dVar40 = dVar40 + (double)ppplVar24[-3] * (double)pplVar45;
            dVar37 = dVar37 + (double)ppplVar24[-2] * (double)pplVar45;
            dVar38 = dVar38 + (double)ppplVar24[-1] * (double)pplVar45;
            dVar35 = dVar35 + (double)*ppplVar24 * (double)pplVar45;
            dVar36 = dVar36 + (double)ppplVar24[1] * (double)pplVar45;
            dVar33 = dVar33 + (double)ppplVar24[2] * (double)pplVar45;
            dVar34 = dVar34 + (double)ppplVar24[3] * (double)pplVar45;
            dVar31 = dVar31 + (double)ppplVar24[4] * (double)pplVar45;
            dVar32 = dVar32 + (double)ppplVar24[5] * (double)pplVar45;
            dVar29 = dVar29 + (double)ppplVar24[6] * (double)pplVar45;
            dVar30 = dVar30 + (double)ppplVar24[7] * (double)pplVar45;
            puVar25 = puVar25 + 1;
            ppplVar24 = ppplVar24 + (long)ppplVar14;
          } while ((long)puVar25 < (long)puVar6);
          pppplVar28 = param_6 + (long)pppplVar9;
          pppplVar28[1] = (long ***)((double)pppplVar28[1] + dVar42 * (double)param_1);
          *pppplVar28 = (long ***)((double)*pppplVar28 + dVar41 * (double)param_1);
          pppplVar28[3] = (long ***)((double)pppplVar28[3] + dVar44 * (double)param_1);
          pppplVar28[2] = (long ***)((double)pppplVar28[2] + dVar43 * (double)param_1);
          pppplVar28[5] = (long ***)((double)pppplVar28[5] + dVar40 * (double)param_1);
          pppplVar28[4] = (long ***)((double)pppplVar28[4] + dVar39 * (double)param_1);
          pppplVar28[7] = (long ***)((double)pppplVar28[7] + dVar38 * (double)param_1);
          pppplVar28[6] = (long ***)((double)pppplVar28[6] + dVar37 * (double)param_1);
          pppplVar28[9] = (long ***)((double)pppplVar28[9] + dVar36 * (double)param_1);
          pppplVar28[8] = (long ***)((double)pppplVar28[8] + dVar35 * (double)param_1);
          pppplVar28[0xb] = (long ***)((double)pppplVar28[0xb] + dVar34 * (double)param_1);
          pppplVar28[10] = (long ***)((double)pppplVar28[10] + dVar33 * (double)param_1);
          pppplVar28[0xd] = (long ***)((double)pppplVar28[0xd] + dVar32 * (double)param_1);
          pppplVar28[0xc] = (long ***)((double)pppplVar28[0xc] + dVar31 * (double)param_1);
          pppplVar28[0xf] = (long ***)((double)pppplVar28[0xf] + dVar30 * (double)param_1);
          pppplVar28[0xe] = (long ***)((double)pppplVar28[0xe] + dVar29 * (double)param_1);
          pppplVar9 = pppplVar9 + 2;
          ppplVar22 = ppplVar22 + 0x10;
        } while ((long)pppplVar9 < (long)((long)pppplVar10 + -0xf));
      }
      if ((long)pppplVar9 < (long)((long)pppplVar10 + -7)) {
        lVar23 = (long)pppplVar9 << 3;
        dVar33 = 0.0;
        dVar34 = 0.0;
        dVar35 = 0.0;
        dVar36 = 0.0;
        dVar31 = 0.0;
        dVar32 = 0.0;
        dVar29 = 0.0;
        dVar30 = 0.0;
        puVar25 = puVar16;
        do {
          pplVar45 = (*pppplVar12)[(long)puVar25];
          pdVar5 = (double *)((long)ppplVar17 + lVar23);
          dVar33 = dVar33 + *pdVar5 * (double)pplVar45;
          dVar34 = dVar34 + pdVar5[1] * (double)pplVar45;
          dVar35 = dVar35 + pdVar5[2] * (double)pplVar45;
          dVar36 = dVar36 + pdVar5[3] * (double)pplVar45;
          dVar31 = dVar31 + pdVar5[4] * (double)pplVar45;
          dVar32 = dVar32 + pdVar5[5] * (double)pplVar45;
          dVar29 = dVar29 + pdVar5[6] * (double)pplVar45;
          dVar30 = dVar30 + pdVar5[7] * (double)pplVar45;
          puVar25 = puVar25 + 1;
          lVar23 = lVar23 + lVar13;
        } while ((long)puVar25 < (long)puVar6);
        pppplVar28 = param_6 + (long)pppplVar9;
        pppplVar28[1] = (long ***)((double)pppplVar28[1] + dVar34 * (double)param_1);
        *pppplVar28 = (long ***)((double)*pppplVar28 + dVar33 * (double)param_1);
        pppplVar28[3] = (long ***)((double)pppplVar28[3] + dVar36 * (double)param_1);
        pppplVar28[2] = (long ***)((double)pppplVar28[2] + dVar35 * (double)param_1);
        pppplVar28[5] = (long ***)((double)pppplVar28[5] + dVar32 * (double)param_1);
        pppplVar28[4] = (long ***)((double)pppplVar28[4] + dVar31 * (double)param_1);
        pppplVar28[7] = (long ***)((double)pppplVar28[7] + dVar30 * (double)param_1);
        pppplVar28[6] = (long ***)((double)pppplVar28[6] + dVar29 * (double)param_1);
        pppplVar9 = (long ****)((ulong)pppplVar9 | 8);
      }
      if ((long)pppplVar9 < (long)((long)pppplVar10 + -5)) {
        ppplVar22 = ppplVar17 + (long)pppplVar9;
        dVar31 = 0.0;
        dVar32 = 0.0;
        dVar33 = 0.0;
        dVar34 = 0.0;
        dVar29 = 0.0;
        dVar30 = 0.0;
        puVar25 = puVar16;
        do {
          pplVar45 = (*pppplVar12)[(long)puVar25];
          dVar31 = dVar31 + (double)*ppplVar22 * (double)pplVar45;
          dVar32 = dVar32 + (double)ppplVar22[1] * (double)pplVar45;
          dVar33 = dVar33 + (double)ppplVar22[2] * (double)pplVar45;
          dVar34 = dVar34 + (double)ppplVar22[3] * (double)pplVar45;
          dVar29 = dVar29 + (double)ppplVar22[4] * (double)pplVar45;
          dVar30 = dVar30 + (double)ppplVar22[5] * (double)pplVar45;
          puVar25 = puVar25 + 1;
          ppplVar22 = ppplVar22 + (long)ppplVar14;
        } while ((long)puVar25 < (long)puVar6);
        pppplVar28 = param_6 + (long)pppplVar9;
        pppplVar28[1] = (long ***)((double)pppplVar28[1] + dVar32 * (double)param_1);
        *pppplVar28 = (long ***)((double)*pppplVar28 + dVar31 * (double)param_1);
        pppplVar28[3] = (long ***)((double)pppplVar28[3] + dVar34 * (double)param_1);
        pppplVar28[2] = (long ***)((double)pppplVar28[2] + dVar33 * (double)param_1);
        pppplVar28[5] = (long ***)((double)pppplVar28[5] + dVar30 * (double)param_1);
        pppplVar28[4] = (long ***)((double)pppplVar28[4] + dVar29 * (double)param_1);
        pppplVar9 = (long ****)((long)pppplVar9 + 6);
      }
      if ((long)pppplVar9 < (long)((long)pppplVar10 + -3)) {
        lVar23 = (long)pppplVar9 << 3;
        dVar29 = 0.0;
        dVar30 = 0.0;
        dVar31 = 0.0;
        dVar32 = 0.0;
        puVar25 = puVar16;
        do {
          pplVar45 = (*pppplVar12)[(long)puVar25];
          pdVar5 = (double *)((long)ppplVar17 + lVar23);
          dVar31 = dVar31 + *pdVar5 * (double)pplVar45;
          dVar32 = dVar32 + pdVar5[1] * (double)pplVar45;
          dVar29 = dVar29 + pdVar5[2] * (double)pplVar45;
          dVar30 = dVar30 + pdVar5[3] * (double)pplVar45;
          puVar25 = puVar25 + 1;
          lVar23 = lVar23 + lVar13;
        } while ((long)puVar25 < (long)puVar6);
        pppplVar28 = param_6 + (long)pppplVar9;
        pppplVar28[1] = (long ***)((double)pppplVar28[1] + dVar32 * (double)param_1);
        *pppplVar28 = (long ***)((double)*pppplVar28 + dVar31 * (double)param_1);
        pppplVar28[3] = (long ***)((double)pppplVar28[3] + dVar30 * (double)param_1);
        pppplVar28[2] = (long ***)((double)pppplVar28[2] + dVar29 * (double)param_1);
        pppplVar9 = (long ****)((long)pppplVar9 + 4);
      }
      if ((long)pppplVar9 < (long)((long)pppplVar10 + -1)) {
        lVar23 = (long)pppplVar9 * 8;
        dVar29 = 0.0;
        dVar30 = 0.0;
        puVar25 = puVar16;
        do {
          dVar29 = dVar29 + *(double *)((long)ppplVar17 + lVar23) *
                            (double)(*pppplVar12)[(long)puVar25];
          dVar30 = dVar30 + ((double *)((long)ppplVar17 + lVar23))[1] *
                            (double)(*pppplVar12)[(long)puVar25];
          puVar25 = puVar25 + 1;
          lVar23 = lVar23 + lVar13;
        } while ((long)puVar25 < (long)puVar6);
        ppplVar22 = param_6[(long)pppplVar9];
        (param_6 + (long)pppplVar9)[1] =
             (long ***)((double)(param_6 + (long)pppplVar9)[1] + dVar30 * (double)param_1);
        param_6[(long)pppplVar9] = (long ***)((double)ppplVar22 + dVar29 * (double)param_1);
        pppplVar9 = (long ****)((long)pppplVar9 + 2);
      }
      if ((long)pppplVar9 < (long)pppplVar10) {
        ppplVar22 = *pppplVar12;
        lVar23 = (long)pppplVar9 << 3;
        do {
          dVar29 = 0.0;
          lVar26 = lVar23;
          puVar25 = puVar16;
          do {
            dVar29 = dVar29 + *(double *)((long)ppplVar17 + lVar26) *
                              (double)ppplVar22[(long)puVar25];
            puVar25 = puVar25 + 1;
            lVar26 = lVar26 + lVar13;
          } while ((long)puVar25 < (long)puVar6);
          param_6[(long)pppplVar9] =
               (long ***)((double)param_6[(long)pppplVar9] + dVar29 * (double)param_1);
          pppplVar9 = (long ****)((long)pppplVar9 + 1);
          lVar23 = lVar23 + 8;
        } while (pppplVar9 != pppplVar10);
      }
      ppplVar8 = ppplVar8 + (long)puVar21 * (long)ppplVar14;
      ppplVar17 = ppplVar17 + (long)puVar21 * (long)ppplVar14;
      puVar16 = puVar4;
    } while ((long)puVar4 < (long)puVar11);
  }
  return;
}



/* Entry: 109464f74; end: 1094652b7;  */

void FUN_109464f74(double param_1,ulong param_2,long param_3,long *param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  double *pdVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
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
  double dVar31;
  double dVar32;
  
  uVar4 = param_4[1];
  lVar6 = 0x10;
  if (0x7c < (uVar4 >> 5 & 0xffffffffffffff)) {
    lVar6 = 4;
  }
  lVar2 = param_3;
  if (0x7f < param_3) {
    lVar2 = lVar6;
  }
  if (0 < param_3) {
    lVar6 = *param_4;
    lVar7 = uVar4 * 8;
    pdVar8 = (double *)(lVar6 + 0x40);
    lVar9 = 0;
    do {
      lVar1 = lVar9 + lVar2;
      lVar3 = lVar1;
      if (param_3 <= lVar1) {
        lVar3 = param_3;
      }
      if ((long)param_2 < 0x10) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        pdVar10 = pdVar8;
        do {
          dVar28 = 0.0;
          dVar29 = 0.0;
          dVar30 = 0.0;
          dVar31 = 0.0;
          dVar26 = 0.0;
          dVar27 = 0.0;
          dVar24 = 0.0;
          dVar25 = 0.0;
          dVar22 = 0.0;
          dVar23 = 0.0;
          dVar20 = 0.0;
          dVar21 = 0.0;
          dVar18 = 0.0;
          dVar19 = 0.0;
          dVar16 = 0.0;
          dVar17 = 0.0;
          pdVar14 = pdVar10;
          lVar13 = lVar9;
          do {
            dVar32 = *(double *)(*param_5 + lVar13 * 8);
            dVar28 = dVar28 + pdVar14[-8] * dVar32;
            dVar29 = dVar29 + pdVar14[-7] * dVar32;
            dVar30 = dVar30 + pdVar14[-6] * dVar32;
            dVar31 = dVar31 + pdVar14[-5] * dVar32;
            dVar26 = dVar26 + pdVar14[-4] * dVar32;
            dVar27 = dVar27 + pdVar14[-3] * dVar32;
            dVar24 = dVar24 + pdVar14[-2] * dVar32;
            dVar25 = dVar25 + pdVar14[-1] * dVar32;
            dVar22 = dVar22 + *pdVar14 * dVar32;
            dVar23 = dVar23 + pdVar14[1] * dVar32;
            dVar20 = dVar20 + pdVar14[2] * dVar32;
            dVar21 = dVar21 + pdVar14[3] * dVar32;
            dVar18 = dVar18 + pdVar14[4] * dVar32;
            dVar19 = dVar19 + pdVar14[5] * dVar32;
            dVar16 = dVar16 + pdVar14[6] * dVar32;
            dVar17 = dVar17 + pdVar14[7] * dVar32;
            lVar13 = lVar13 + 1;
            pdVar14 = pdVar14 + uVar4;
          } while (lVar13 < lVar3);
          pdVar14 = (double *)(param_6 + uVar5 * 8);
          pdVar14[1] = pdVar14[1] + dVar29 * param_1;
          *pdVar14 = *pdVar14 + dVar28 * param_1;
          pdVar14[3] = pdVar14[3] + dVar31 * param_1;
          pdVar14[2] = pdVar14[2] + dVar30 * param_1;
          pdVar14[5] = pdVar14[5] + dVar27 * param_1;
          pdVar14[4] = pdVar14[4] + dVar26 * param_1;
          pdVar14[7] = pdVar14[7] + dVar25 * param_1;
          pdVar14[6] = pdVar14[6] + dVar24 * param_1;
          pdVar14[9] = pdVar14[9] + dVar23 * param_1;
          pdVar14[8] = pdVar14[8] + dVar22 * param_1;
          pdVar14[0xb] = pdVar14[0xb] + dVar21 * param_1;
          pdVar14[10] = pdVar14[10] + dVar20 * param_1;
          pdVar14[0xd] = pdVar14[0xd] + dVar19 * param_1;
          pdVar14[0xc] = pdVar14[0xc] + dVar18 * param_1;
          pdVar14[0xf] = pdVar14[0xf] + dVar17 * param_1;
          pdVar14[0xe] = pdVar14[0xe] + dVar16 * param_1;
          uVar5 = uVar5 + 0x10;
          pdVar10 = pdVar10 + 0x10;
        } while ((long)uVar5 < (long)(param_2 - 0xf));
      }
      if ((long)uVar5 < (long)(param_2 - 7)) {
        lVar12 = uVar5 << 3;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar18 = 0.0;
        dVar19 = 0.0;
        dVar16 = 0.0;
        dVar17 = 0.0;
        lVar13 = lVar9;
        do {
          dVar24 = *(double *)(*param_5 + lVar13 * 8);
          pdVar10 = (double *)(lVar6 + lVar12);
          dVar20 = dVar20 + *pdVar10 * dVar24;
          dVar21 = dVar21 + pdVar10[1] * dVar24;
          dVar22 = dVar22 + pdVar10[2] * dVar24;
          dVar23 = dVar23 + pdVar10[3] * dVar24;
          dVar18 = dVar18 + pdVar10[4] * dVar24;
          dVar19 = dVar19 + pdVar10[5] * dVar24;
          dVar16 = dVar16 + pdVar10[6] * dVar24;
          dVar17 = dVar17 + pdVar10[7] * dVar24;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + lVar7;
        } while (lVar13 < lVar3);
        pdVar10 = (double *)(param_6 + uVar5 * 8);
        pdVar10[1] = pdVar10[1] + dVar21 * param_1;
        *pdVar10 = *pdVar10 + dVar20 * param_1;
        pdVar10[3] = pdVar10[3] + dVar23 * param_1;
        pdVar10[2] = pdVar10[2] + dVar22 * param_1;
        pdVar10[5] = pdVar10[5] + dVar19 * param_1;
        pdVar10[4] = pdVar10[4] + dVar18 * param_1;
        pdVar10[7] = pdVar10[7] + dVar17 * param_1;
        pdVar10[6] = pdVar10[6] + dVar16 * param_1;
        uVar5 = uVar5 | 8;
      }
      if ((long)uVar5 < (long)(param_2 - 5)) {
        pdVar10 = (double *)(lVar6 + uVar5 * 8);
        dVar18 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar16 = 0.0;
        dVar17 = 0.0;
        lVar13 = lVar9;
        do {
          dVar22 = *(double *)(*param_5 + lVar13 * 8);
          dVar18 = dVar18 + *pdVar10 * dVar22;
          dVar19 = dVar19 + pdVar10[1] * dVar22;
          dVar20 = dVar20 + pdVar10[2] * dVar22;
          dVar21 = dVar21 + pdVar10[3] * dVar22;
          dVar16 = dVar16 + pdVar10[4] * dVar22;
          dVar17 = dVar17 + pdVar10[5] * dVar22;
          lVar13 = lVar13 + 1;
          pdVar10 = pdVar10 + uVar4;
        } while (lVar13 < lVar3);
        pdVar10 = (double *)(param_6 + uVar5 * 8);
        pdVar10[1] = pdVar10[1] + dVar19 * param_1;
        *pdVar10 = *pdVar10 + dVar18 * param_1;
        pdVar10[3] = pdVar10[3] + dVar21 * param_1;
        pdVar10[2] = pdVar10[2] + dVar20 * param_1;
        pdVar10[5] = pdVar10[5] + dVar17 * param_1;
        pdVar10[4] = pdVar10[4] + dVar16 * param_1;
        uVar5 = uVar5 + 6;
      }
      if ((long)uVar5 < (long)(param_2 - 3)) {
        lVar12 = uVar5 << 3;
        dVar16 = 0.0;
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar19 = 0.0;
        lVar13 = lVar9;
        do {
          dVar20 = *(double *)(*param_5 + lVar13 * 8);
          pdVar10 = (double *)(lVar6 + lVar12);
          dVar18 = dVar18 + *pdVar10 * dVar20;
          dVar19 = dVar19 + pdVar10[1] * dVar20;
          dVar16 = dVar16 + pdVar10[2] * dVar20;
          dVar17 = dVar17 + pdVar10[3] * dVar20;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + lVar7;
        } while (lVar13 < lVar3);
        pdVar10 = (double *)(param_6 + uVar5 * 8);
        pdVar10[1] = pdVar10[1] + dVar19 * param_1;
        *pdVar10 = *pdVar10 + dVar18 * param_1;
        pdVar10[3] = pdVar10[3] + dVar17 * param_1;
        pdVar10[2] = pdVar10[2] + dVar16 * param_1;
        uVar5 = uVar5 + 4;
      }
      if ((long)uVar5 < (long)(param_2 - 1)) {
        lVar11 = uVar5 * 8;
        dVar16 = 0.0;
        dVar17 = 0.0;
        lVar12 = lVar11;
        lVar13 = lVar9;
        do {
          dVar18 = *(double *)(*param_5 + lVar13 * 8);
          dVar16 = dVar16 + *(double *)(lVar6 + lVar12) * dVar18;
          dVar17 = dVar17 + ((double *)(lVar6 + lVar12))[1] * dVar18;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + lVar7;
        } while (lVar13 < lVar3);
        dVar18 = *(double *)(param_6 + lVar11);
        ((double *)(param_6 + lVar11))[1] = ((double *)(param_6 + lVar11))[1] + dVar17 * param_1;
        *(double *)(param_6 + lVar11) = dVar18 + dVar16 * param_1;
        uVar5 = uVar5 + 2;
      }
      if ((long)uVar5 < (long)param_2) {
        lVar12 = *param_5;
        lVar13 = uVar5 << 3;
        do {
          dVar16 = 0.0;
          lVar15 = lVar13;
          lVar11 = lVar9;
          do {
            dVar16 = dVar16 + *(double *)(lVar6 + lVar15) * *(double *)(lVar12 + lVar11 * 8);
            lVar11 = lVar11 + 1;
            lVar15 = lVar15 + lVar7;
          } while (lVar11 < lVar3);
          *(double *)(param_6 + uVar5 * 8) = *(double *)(param_6 + uVar5 * 8) + dVar16 * param_1;
          uVar5 = uVar5 + 1;
          lVar13 = lVar13 + 8;
        } while (uVar5 != param_2);
      }
      pdVar8 = pdVar8 + lVar2 * uVar4;
      lVar6 = lVar6 + lVar2 * uVar4 * 8;
      lVar9 = lVar1;
    } while (lVar1 < param_3);
  }
  return;
}



/* Entry: 1094652b8; end: 10946552b;  */

undefined8 *
FUN_1094652b8(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar7;
  int *piVar8;
  uint auStack_a40 [624];
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plVar6;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  uVar3 = 0x1571;
  iVar4 = 1;
  lVar7 = 0x2d;
  *(undefined4 *)(param_1 + 0x16) = 0x1571;
  do {
    iVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965;
    uVar3 = iVar2 + iVar4;
    *(int *)((long)param_1 + lVar7 * 4) = (int)lVar7 + iVar2 + -0x2c;
    iVar4 = iVar4 + 1;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x29c);
  param_1[0x14e] = 0;
  auStack_a40[0] = 0;
  func_0x00010742638c(param_1 + 0x11,param_2[1] - *param_2 >> 3,auStack_a40);
  piVar8 = (int *)*param_3;
  piVar1 = (int *)param_3[1];
  if (param_2[1] - *param_2 >> 3 == (long)piVar1 - (long)piVar8 >> 2) {
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      iVar4 = *piVar8;
      FUN_10946552c(param_1,iVar4);
      FUN_10946557c(param_1,(long)iVar4,*(undefined8 *)(*param_2 + (long)iVar4 * 8));
    }
  }
  else {
    FUN_10940c35c(&plStack_78);
    if (plStack_78 != plStack_70) {
      lVar7 = 0;
      plVar5 = plStack_78;
      do {
        plVar6 = plVar5 + 1;
        *plVar5 = lVar7;
        lVar7 = lVar7 + 1;
        plVar5 = plVar6;
      } while (plVar6 != plStack_70);
    }
    uVar3 = 0x1571;
    lVar7 = 1;
    do {
      uVar3 = (int)lVar7 + (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965;
      auStack_a40[lVar7] = uVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x270);
    uVar3 = 0x4d2;
    auStack_a40[0] = 0x4d2;
    lVar7 = 1;
    do {
      uVar3 = (int)lVar7 + (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965;
      auStack_a40[lVar7] = uVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x270);
    uStack_80 = 0;
    FUN_109462d34(plStack_78,plStack_70,auStack_a40);
    for (plVar5 = plStack_78; plVar5 != plStack_70; plVar5 = plVar5 + 1) {
      lVar7 = *plVar5;
      FUN_10946552c(param_1,lVar7);
      FUN_10946557c(param_1,lVar7,*(undefined8 *)(*param_2 + lVar7 * 8));
    }
    if (plStack_78 != (long *)0x0) {
      __ZdlPv(plStack_78);
    }
  }
  return param_1;
}



/* Entry: 10946552c; end: 10946557b;  */

void FUN_10946552c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_2;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar3 = param_1 + 0x40;
  FUN_109465b64(lVar3,param_2,&uStack_24);
  *(int *)(lVar3 + 0x14) = (int)((ulong)(lVar2 - lVar1) >> 2);
  FUN_10923b3a0((long *)(param_1 + 0x28),&uStack_24);
  return;
}



/* Entry: 10946557c; end: 109465683;  */

void FUN_10946557c(long param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(long *)(param_3 + 0x3d8) - *(long *)(param_3 + 0x3d0) >> 2;
  if (*(ulong *)(param_1 + 0xa8) <= uVar3) {
    uVar3 = *(ulong *)(param_1 + 0xa8);
  }
  puVar1 = (undefined8 *)0xa68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = param_2;
  uStack_48 = 0x3fa999999999999a;
  uStack_50 = 0x3f947ae147ae147b;
  FUN_109452ff8(puVar1 + 3,param_3 + 0x3d0,uVar3,&uStack_50);
  puVar1[1] = (long)*(int *)(puVar1 + 2);
  puVar2 = puVar1;
  func_0x000109465f68(param_1);
  if ((((ulong)puVar2 & 1) == 0) && (puVar1 != (undefined8 *)0x0)) {
    func_0x0001094663b0(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 109465684; end: 109465a4b;  */

void FUN_109465684(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  int iStack_ac;
  int *piStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  
  piStack_90 = (int *)0x0;
  piStack_88 = (int *)0x0;
  uStack_80 = 0;
  piStack_a8 = (int *)0x0;
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  piVar1 = *(int **)(param_1 + 0x90);
  for (piVar12 = *(int **)(param_1 + 0x88); piVar12 != piVar1; piVar12 = piVar12 + 1) {
    if (0 < *piVar12) {
      *piVar12 = *piVar12 + -1;
    }
  }
  lVar15 = *(long *)(param_1 + 0x28);
  uVar13 = *(long *)(param_1 + 0x30) - lVar15 >> 2;
  if (*(ulong *)(param_1 + 0xa0) <= uVar13) {
    uVar13 = *(ulong *)(param_1 + 0xa0);
  }
  piVar12 = piStack_90;
  piVar1 = piStack_88;
  if (uVar13 != 0) {
    lVar19 = 0;
    uVar13 = 0;
    uVar20 = 0;
    do {
      lVar9 = param_1;
      FUN_109466494(param_1,lVar15 + lVar19);
      if (lVar9 == 0) {
        FUN_109262df8(&UNK_10f56e116);
        goto LAB_109465a00;
      }
      uVar4 = *(uint *)(lVar9 + 0x60);
      if ((int)*(uint *)(lVar9 + 0x60) <= (int)uVar20) {
        uVar4 = uVar20;
      }
      uVar13 = uVar13 + 1;
      lVar15 = *(long *)(param_1 + 0x28);
      uVar14 = *(long *)(param_1 + 0x30) - lVar15 >> 2;
      if (*(ulong *)(param_1 + 0xa0) <= uVar14) {
        uVar14 = *(ulong *)(param_1 + 0xa0);
      }
      lVar19 = lVar19 + 4;
      uVar20 = uVar4;
    } while (uVar13 < uVar14);
    piVar12 = piStack_90;
    piVar1 = piStack_88;
    if (uVar14 != 0) {
      lVar19 = 0;
      uVar13 = 0;
      do {
        piVar12 = piStack_90;
        piVar1 = piStack_88;
        if ((double)uVar14 / 2.0 < (double)(ulong)((long)piStack_88 - (long)piStack_90 >> 2)) break;
        FUN_10923b3a0(&piStack_a8,lVar15 + lVar19);
        lVar15 = param_1;
        FUN_109466494(param_1,*(long *)(param_1 + 0x28) + lVar19);
        if (lVar15 == 0) {
          FUN_109262df8(&UNK_10f56e116);
LAB_109465a00:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109465a04);
          (*pcVar8)();
        }
        if ((*(int *)(lVar15 + 0x60) < 5) || ((double)*(int *)(lVar15 + 0x60) < (double)uVar4 * 0.1)
           ) {
          FUN_10923b3a0(&piStack_90,*(long *)(param_1 + 0x28) + lVar19);
        }
        uVar13 = uVar13 + 1;
        lVar15 = *(long *)(param_1 + 0x28);
        uVar14 = *(long *)(param_1 + 0x30) - lVar15 >> 2;
        if (*(ulong *)(param_1 + 0xa0) <= uVar14) {
          uVar14 = *(ulong *)(param_1 + 0xa0);
        }
        lVar19 = lVar19 + 4;
        piVar12 = piStack_90;
        piVar1 = piStack_88;
      } while (uVar13 < uVar14);
    }
  }
  do {
    piVar7 = piStack_88;
    if (piVar12 == piStack_88) {
      if (piStack_a8 != (int *)0x0) {
        piStack_a0 = piStack_a8;
        piStack_88 = piVar1;
        __ZdlPv();
      }
      if (piStack_90 != (int *)0x0) {
        piStack_88 = piStack_90;
        __ZdlPv();
      }
      return;
    }
    iVar2 = *piVar12;
    iStack_ac = -1;
    piStack_88 = piVar1;
    if (piStack_a8 != piStack_a0) {
      uVar20 = 0;
      uVar13 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
      iVar16 = -1;
      piVar17 = piStack_a8;
      do {
        iVar6 = *piVar17;
        if (uVar13 < (ulong)(long)iVar6 || uVar13 - (long)iVar6 == 0) {
          FUN_1093fd0ac(&UNK_10f56d4d5);
          goto LAB_109465a00;
        }
        puVar18 = (undefined8 *)(param_2[3] + (long)iVar6 * 0x18);
        for (piVar10 = (int *)*puVar18; piVar10 != (int *)puVar18[1]; piVar10 = piVar10 + 1) {
          iVar3 = *piVar10;
          uVar14 = (ulong)iVar3;
          piVar11 = piStack_a8;
          do {
            if (*piVar11 == iVar3) {
              if (piVar11 != piStack_a0) goto LAB_1094658a0;
              break;
            }
            piVar11 = piVar11 + 1;
          } while (piVar11 != piStack_a0);
          if (*(int *)(*(long *)(param_1 + 0x88) + uVar14 * 4) == 0) {
            if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
              FUN_1093fd0ac(&UNK_10f56d4d5);
              goto LAB_109465a00;
            }
            uVar4 = *(uint *)(*(long *)(*param_2 + (long)iVar6 * 0x18) + uVar14 * 4);
            if (uVar20 < uVar4) {
              iVar16 = iVar3;
              uVar20 = uVar4;
              iStack_ac = iVar3;
            }
            break;
          }
LAB_1094658a0:
        }
        piVar17 = piVar17 + 1;
      } while (piVar17 != piStack_a0);
      if (-1 < iVar16) {
        FUN_10923b3a0(&piStack_a8,&iStack_ac);
        iVar16 = iStack_ac;
        *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)iVar2 * 4) = 0x1e;
        iStack_78 = iStack_ac;
        lVar15 = param_1 + 0x40;
        iStack_74 = iVar2;
        FUN_109465b64(lVar15,iVar2,&iStack_74);
        uVar20 = *(uint *)(lVar15 + 0x14);
        lVar19 = *(long *)(param_1 + 0x28);
        lVar15 = param_1 + 0x40;
        FUN_109465b64(lVar15,iVar16,&iStack_78);
        uVar4 = *(uint *)(lVar15 + 0x14);
        lVar15 = *(long *)(param_1 + 0x28);
        uVar5 = *(undefined4 *)(lVar19 + (ulong)uVar20 * 4);
        *(undefined4 *)(lVar19 + (ulong)uVar20 * 4) = *(undefined4 *)(lVar15 + (ulong)uVar4 * 4);
        *(undefined4 *)(lVar15 + (ulong)uVar4 * 4) = uVar5;
        lVar15 = param_1 + 0x40;
        FUN_109465b64(lVar15,iVar2,&iStack_74);
        lVar19 = param_1 + 0x40;
        FUN_109465b64(lVar19,iVar16,&iStack_78);
        uVar5 = *(undefined4 *)(lVar15 + 0x14);
        *(undefined4 *)(lVar15 + 0x14) = *(undefined4 *)(lVar19 + 0x14);
        *(undefined4 *)(lVar19 + 0x14) = uVar5;
      }
    }
    piVar12 = piVar12 + 1;
    piVar1 = piStack_88;
    piStack_88 = piVar7;
  } while( true );
}



/* Entry: 109465a4c; end: 109465b63;  */

long * FUN_109465a4c(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
    param_1 = 0xffffffff;
    uVar6 = 0xffffffff;
LAB_109465b40:
    return (long *)(param_1 & 0xffffffff | uVar6 << 0x20);
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0x28) +
          *(int *)(*(long *)(param_1 + 0x70) + (long)*(int *)(param_1 + 0x68) * 4) * 4;
  uVar13 = param_1;
  FUN_109466494();
  if (uVar13 != 0) {
    iVar5 = *(int *)(uVar13 + 0x68);
    if (iVar5 < *(int *)(uVar13 + 100)) {
      uVar1 = *(uint *)(*(long *)(uVar13 + 0x30) + (long)iVar5 * 4);
      uVar6 = (ulong)uVar1;
      *(int *)(uVar13 + 0x68) = iVar5 + 1;
      if (-1 < (int)uVar1) {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x28) +
                         (long)*(int *)(*(long *)(param_1 + 0x70) +
                                       (long)*(int *)(param_1 + 0x68) * 4) * 4);
        uVar13 = (long)*(int *)(param_1 + 0x68) + 1;
        uVar12 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 2;
        iVar5 = 0;
        if (uVar12 != 0) {
          iVar5 = (int)(uVar13 / uVar12);
        }
        *(int *)(param_1 + 0x68) = (int)uVar13 - iVar5 * (int)uVar12;
        param_1 = (ulong)uVar1;
        goto LAB_109465b40;
      }
    }
    lVar7 = *(long *)(param_1 + 0x70);
    lVar11 = lVar7 + (long)*(int *)(param_1 + 0x68) * 4;
    lVar2 = *(long *)(param_1 + 0x78) - (lVar11 + 4);
    if (lVar2 != 0) {
      _memmove(lVar11,lVar11 + 4,lVar2);
      lVar7 = *(long *)(param_1 + 0x70);
    }
    lVar11 = lVar11 + lVar2;
    *(long *)(param_1 + 0x78) = lVar11;
    if (lVar7 != lVar11) {
      uVar6 = lVar11 - lVar7 >> 2;
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = (int)((ulong)(long)*(int *)(param_1 + 0x68) / uVar6);
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - iVar5 * (int)uVar6;
    }
    FUN_109465a4c(param_1);
    uVar6 = param_1 >> 0x20;
    goto LAB_109465b40;
  }
  plVar4 = (long *)&UNK_10f56e116;
  FUN_109262df8();
  uVar13 = (ulong)iVar5;
  uVar6 = plVar4[1];
  if (uVar6 != 0) {
    uVar12 = uVar6 - 1;
    if ((uVar6 & uVar12) == 0) {
      unaff_x24 = uVar12 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar6 <= uVar13) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar13 / uVar6;
        }
        unaff_x24 = uVar13 - uVar10 * uVar6;
      }
    }
    plVar9 = *(long **)(*plVar4 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar13) {
          if (*(int *)(plVar9 + 2) == iVar5) {
            return plVar9;
          }
        }
        else {
          if ((uVar6 & uVar12) == 0) {
            uVar10 = uVar10 & uVar12;
          }
          else if (uVar6 <= uVar10) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar3 * uVar6;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar13;
  *(undefined4 *)(plVar9 + 2) = *param_3;
  *(undefined4 *)((long)plVar9 + 0x14) = 0;
  if ((uVar6 == 0) || (*(float *)(plVar4 + 4) * (float)uVar6 < (float)(plVar4[3] + 1))) {
    uVar12 = 1;
    if (2 < uVar6) {
      uVar12 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar12 = uVar12 | uVar6 << 1;
    uVar6 = (ulong)((float)(plVar4[3] + 1) / *(float *)(plVar4 + 4));
    if (uVar12 <= uVar6) {
      uVar12 = uVar6;
    }
    FUN_109465d5c(plVar4,uVar12);
    uVar6 = plVar4[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar6 <= uVar13) {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar13 / uVar6;
        }
        unaff_x24 = uVar13 - uVar12 * uVar6;
      }
    }
  }
  lVar11 = *plVar4;
  plVar8 = *(long **)(lVar11 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar4 + 2;
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
    *(long **)(lVar11 + unaff_x24 * 8) = plVar8;
    if (*plVar9 == 0) goto LAB_109465d24;
    uVar13 = *(ulong *)(*plVar9 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar13 = uVar13 & uVar6 - 1;
    }
    else if (uVar6 <= uVar13) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar13 / uVar6;
      }
      uVar13 = uVar13 - uVar12 * uVar6;
    }
    plVar8 = (long *)(*plVar4 + uVar13 * 8);
  }
  else {
    *plVar9 = *plVar8;
  }
  *plVar8 = (long)plVar9;
LAB_109465d24:
  plVar4[3] = plVar4[3] + 1;
  return plVar9;
}



/* Entry: 109465b64; end: 109465d5b;  */

long * FUN_109465b64(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar8) {
          if (*(int *)(plVar4 + 2) == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x18;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *param_3;
  *(undefined4 *)((long)plVar4 + 0x14) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_109465d5c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_109465d24;
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
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_109465d24:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 109465d5c; end: 109465e2b;  */

undefined1  [16] FUN_109465d5c(long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar3 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 < param_2) {
LAB_109465da4:
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = *param_1;
      *param_1 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
        plVar3 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        param_2[1] = (long)(int)param_2[2];
        plVar3 = param_1;
        FUN_109465fbc();
        bVar1 = plVar3 == (long *)0x0;
        if (bVar1) {
          FUN_1094660bc(param_1,param_2);
          plVar3 = param_2;
        }
        auVar14[8] = bVar1;
        auVar14._0_8_ = plVar3;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      lVar4 = (long)param_2 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar11 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar2 = 0;
          if (param_2 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar2 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
        plVar8 = (long *)*plVar6;
        while (plVar8 != (long *)0x0) {
          plVar10 = (long *)plVar8[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar7);
          }
          else if (param_2 <= plVar10) {
            uVar2 = 0;
            if (param_2 != (long *)0x0) {
              uVar2 = (ulong)plVar10 / (ulong)param_2;
            }
            plVar10 = (long *)((long)plVar10 - uVar2 * (long)param_2);
          }
          plVar9 = plVar8;
          if (plVar10 != plVar11) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar10 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar10 * 8) = plVar6;
              plVar11 = plVar10;
            }
            else {
              *plVar6 = *plVar8;
              *plVar8 = **(undefined8 **)(lVar4 + (long)plVar10 * 8);
              **(long **)(lVar4 + (long)plVar10 * 8) = (long)plVar8;
              plVar9 = plVar6;
            }
          }
          plVar6 = plVar9;
          plVar8 = (long *)*plVar9;
        }
      }
    }
    auVar13._8_8_ = plVar3;
    auVar13._0_8_ = lVar5;
    return auVar13;
  }
  if (param_2 < plVar11) {
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (param_2 < plVar11) goto LAB_109465da4;
  }
  auVar12._8_8_ = plVar6;
  auVar12._0_8_ = plVar3;
  return auVar12;
}



/* Entry: 109465e2c; end: 109465fbb;  */

undefined1  [16] FUN_109465e2c(long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  plVar5 = param_2;
  if (param_2 == (long *)0x0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      __ZdlPv();
      plVar5 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      param_2[1] = (long)(int)param_2[2];
      plVar5 = param_1;
      FUN_109465fbc();
      bVar1 = plVar5 == (long *)0x0;
      if (bVar1) {
        FUN_1094660bc(param_1,param_2);
        plVar5 = param_2;
      }
      auVar13[8] = bVar1;
      auVar13._0_8_ = plVar5;
      auVar13._9_7_ = 0;
      return auVar13;
    }
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (param_2 != plVar6);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)plVar6[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar7);
      }
      else if (param_2 <= plVar8) {
        uVar2 = 0;
        if (param_2 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar2 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar6;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar2 = 0;
          if (param_2 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar2 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar8) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar11 * 8) = plVar6;
            plVar8 = plVar11;
          }
          else {
            *plVar6 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
            **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar6;
          }
        }
        plVar6 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  auVar12._8_8_ = plVar5;
  auVar12._0_8_ = lVar4;
  return auVar12;
}



/* Entry: 109465fbc; end: 1094660bb;  */

long * FUN_109465fbc(long *param_1,ulong param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = param_2 / uVar3;
      }
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = param_2 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) {
      do {
        uVar6 = plVar2[1];
        if (uVar6 == param_2) {
          if ((int)plVar2[2] == *param_3) {
            return plVar2;
          }
        }
        else {
          if ((uVar3 & uVar4) == 0) {
            uVar6 = uVar6 & uVar4;
          }
          else if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) break;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  if ((uVar3 == 0) || (*(float *)(param_1 + 4) * (float)uVar3 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar3) {
      uVar4 = (ulong)((uVar3 & uVar3 - 1) != 0);
    }
    uVar4 = uVar4 | uVar3 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_10946615c(param_1,uVar4);
  }
  return (long *)0x0;
}



/* Entry: 1094660bc; end: 10946615b;  */

void FUN_1094660bc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = param_1[1];
  uVar4 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar4 = uVar3 & uVar4;
  }
  else if (uVar2 <= uVar4) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar4 / uVar2;
    }
    uVar4 = uVar4 - uVar1 * uVar2;
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + uVar4 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(lVar6 + uVar4 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10946614c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar2 <= uVar4) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar4 / uVar2;
      }
      uVar4 = uVar4 - uVar3 * uVar2;
    }
    plVar5 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *param_2 = *plVar5;
  }
  *plVar5 = (long)param_2;
LAB_10946614c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10946615c; end: 10946622b;  */

void FUN_10946615c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1094661a4:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x0001094663b0(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_1094661a4;
  }
  return;
}



/* Entry: 10946622c; end: 109466493;  */

void FUN_10946622c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x0001094663b0(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 109466494; end: 109466533;  */

long * FUN_109466494(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109466534; end: 10946af97;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_109466534(long *param_1,double param_2,long *param_3,long *param_4,long *param_5,
                  int param_6,int param_7,int param_8)

{
  long lVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  float *pfVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined1 (*pauVar21) [16];
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 *puVar24;
  undefined1 (*pauVar25) [16];
  undefined8 *puVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  undefined1 (*pauVar30) [16];
  float *pfVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  char *pcVar35;
  undefined8 *puVar36;
  long lVar37;
  int *piVar38;
  undefined4 *puVar39;
  ulong uVar40;
  float *pfVar41;
  undefined4 *puVar42;
  double *pdVar43;
  long *plVar44;
  ulong uVar45;
  undefined8 uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  undefined1 (*pauVar50) [16];
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  long lVar54;
  undefined8 *puVar55;
  undefined8 **ppuVar56;
  long lVar57;
  long *plVar58;
  long lVar59;
  undefined1 (*pauVar60) [16];
  undefined8 *puVar61;
  long lVar62;
  long *plVar63;
  ulong uVar64;
  float fVar65;
  undefined4 uVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined4 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  undefined1 auVar80 [16];
  double dVar84;
  double dVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar95;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  double dVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 (**ppauStack_6a0) [16];
  undefined8 *puStack_5e0;
  undefined1 (*pauStack_5d0) [16];
  float *pfStack_5c0;
  float *pfStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 **ppuStack_580;
  undefined8 *puStack_578;
  float *pfStack_568;
  undefined8 *puStack_560;
  float *pfStack_558;
  undefined8 *puStack_550;
  float *pfStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  float **ppfStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  float *pfStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  float **ppfStack_4e8;
  undefined8 uStack_4e0;
  undefined8 **ppuStack_4d8;
  undefined8 *puStack_4d0;
  ulong uStack_4c8;
  float *pfStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  float **ppfStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 *puStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  undefined4 uStack_450;
  float fStack_44c;
  float fStack_448;
  undefined4 uStack_444;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  float *pfStack_428;
  undefined8 *puStack_420;
  undefined1 (*pauStack_418) [16];
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined1 (*pauStack_3a0) [16];
  undefined8 *puStack_398;
  undefined1 (*pauStack_390) [16];
  undefined8 *puStack_388;
  undefined1 (*pauStack_380) [16];
  undefined8 *puStack_378;
  uint uStack_370;
  undefined4 uStack_36c;
  int iStack_368;
  int iStack_364;
  float fStack_360;
  undefined1 uStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined2 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  float *pfStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 **ppuStack_248;
  undefined8 uStack_240;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 **ppuStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  float *pfStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  pdVar43 = (double *)(param_1 + 4);
  *pdVar43 = 0.0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar44 = param_1 + 8;
  *plVar44 = 0x3ff0000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  if (param_6 == 0) {
    lVar57 = *param_4;
    lVar34 = param_4[1];
    puStack_590 = (undefined8 *)0x0;
    puStack_588 = (undefined8 *)0x0;
    puStack_598 = (undefined8 *)0x0;
    uVar64 = (lVar34 - lVar57 >> 4) * 0x4ec4ec4ec4ec4ec5;
    uStack_5a0 = (double)CONCAT44((int)uVar64 << 1,6);
    if (lVar34 - lVar57 == 0) {
      if (lVar57 != lVar34) {
LAB_109466cb8:
        fVar102 = (float)param_2;
        do {
          while( true ) {
            uStack_450 = CONCAT31(uStack_450._1_3_,0.0 < fVar102);
            puStack_440 = (undefined8 *)*param_3;
            puStack_430 = (undefined8 *)param_3[2];
            pfStack_428 = (float *)param_3[3];
            puStack_420 = (undefined8 *)param_3[4];
            pauStack_418 = (undefined1 (*) [16])param_3[5];
            puStack_410 = (undefined8 *)param_3[6];
            puStack_408 = (undefined8 *)param_3[7];
            puStack_400 = (undefined8 *)param_3[8];
            puStack_3f8 = (undefined8 *)param_3[9];
            lStack_3f0 = CONCAT44(lStack_3f0._4_4_,(int)param_3[10]);
            fStack_44c = fVar102;
            fStack_448 = fVar102 * fVar102;
            FUN_10937da58(&uStack_3e8,param_3 + 0xb);
            fStack_45c = (float)*(double *)(lVar57 + 0x58);
            fStack_464 = (float)((double)(float)*(double *)(lVar57 + 0x20) - (double)param_3[2]) *
                         fStack_45c;
            fStack_460 = (float)((double)(float)*(double *)(lVar57 + 0x28) - (double)param_3[3]) *
                         fStack_45c;
            fStack_458 = (float)((double)puStack_420 * (double)fStack_45c);
            fStack_454 = (float)((double)pauStack_418 * (double)fStack_45c);
            lVar59 = *(long *)(lVar57 + 8);
            puStack_470 = (undefined8 *)
                          CONCAT44((float)*(double *)(lVar59 + 0x10),(float)*(double *)(lVar59 + 8))
            ;
            fStack_468 = (float)*(double *)(lVar59 + 0x18);
            if (puStack_590 < puStack_588) break;
            lVar59 = ((long)puStack_590 - (long)puStack_598 >> 5) * -0x3333333333333333;
            uVar64 = lVar59 + 1;
            if (0x199999999999999 < uVar64) {
              FUN_10946bc00();
              goto LAB_10946ace0;
            }
            lVar49 = (long)puStack_588 - (long)puStack_598 >> 5;
            uVar40 = lVar49 * -0x6666666666666666;
            if (uVar40 < uVar64 || uVar40 - uVar64 == 0) {
              uVar40 = uVar64;
            }
            if (0xcccccccccccccb < (ulong)(lVar49 * -0x3333333333333333)) {
              uVar40 = 0x199999999999999;
            }
            FUN_10946bc14(&pfStack_290,uVar40,lVar59,&puStack_598);
            puVar61 = puStack_590;
            puVar24 = (undefined8 *)CONCAT44(uStack_280._4_4_,(float)uStack_280);
            *puVar24 = puStack_470;
            *(float *)(puVar24 + 1) = fStack_468;
            *(ulong *)((long)puVar24 + 0xc) = CONCAT44(fStack_460,fStack_464);
            *(ulong *)((long)puVar24 + 0x24) = CONCAT44(fStack_448,fStack_44c);
            *(ulong *)((long)puVar24 + 0x1c) = CONCAT44(uStack_450,fStack_454);
            *(ulong *)((long)puVar24 + 0x14) = CONCAT44(fStack_458,fStack_45c);
            puVar24[6] = puStack_440;
            puVar24[9] = pfStack_428;
            puVar24[8] = puStack_430;
            puVar24[0xb] = pauStack_418;
            puVar24[10] = puStack_420;
            puVar24[0xd] = puStack_408;
            puVar24[0xc] = puStack_410;
            puVar24[0xf] = puStack_3f8;
            puVar24[0xe] = puStack_400;
            *(undefined4 *)(puVar24 + 0x10) = (undefined4)lStack_3f0;
            puVar24[0x11] = uStack_3e8;
            puVar24[0x12] = uStack_3e0;
            uStack_3e8 = 0;
            uStack_3e0 = 0;
            puVar55 = (undefined8 *)
                      ((long)puStack_598 +
                      (CONCAT44(uStack_288._4_4_,(float)uStack_288) - (long)puStack_590));
            puVar19 = puStack_598;
            puVar36 = puVar55;
            if (puStack_590 != puStack_598) {
              do {
                uVar46 = *puVar19;
                *(undefined4 *)(puVar36 + 1) = *(undefined4 *)(puVar19 + 1);
                *puVar36 = uVar46;
                *(undefined8 *)((long)puVar36 + 0xc) = *(undefined8 *)((long)puVar19 + 0xc);
                uVar46 = *(undefined8 *)((long)puVar19 + 0x14);
                uVar99 = *(undefined8 *)((long)puVar19 + 0x1c);
                *(undefined8 *)((long)puVar36 + 0x24) = *(undefined8 *)((long)puVar19 + 0x24);
                *(undefined8 *)((long)puVar36 + 0x1c) = uVar99;
                *(undefined8 *)((long)puVar36 + 0x14) = uVar46;
                puVar36[6] = puVar19[6];
                uVar46 = puVar19[8];
                puVar36[9] = puVar19[9];
                puVar36[8] = uVar46;
                uVar46 = puVar19[10];
                puVar36[0xb] = puVar19[0xb];
                puVar36[10] = uVar46;
                uVar46 = puVar19[0xc];
                puVar36[0xd] = puVar19[0xd];
                puVar36[0xc] = uVar46;
                uVar46 = puVar19[0xe];
                puVar36[0xf] = puVar19[0xf];
                puVar36[0xe] = uVar46;
                *(undefined4 *)(puVar36 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
                puVar36[0x11] = puVar19[0x11];
                puVar36[0x12] = puVar19[0x12];
                puVar19[0x11] = 0;
                puVar19[0x12] = 0;
                puVar19 = puVar19 + 0x14;
                puVar36 = puVar36 + 0x14;
                puVar33 = puStack_598;
              } while (puVar19 != puStack_590);
              do {
                _free(puVar33[0x11]);
                puVar33 = puVar33 + 0x14;
              } while (puVar33 != puVar61);
            }
            puVar19 = puStack_598;
            uStack_288._0_4_ = SUB84(puStack_598,0);
            uStack_288._4_4_ = (float)((ulong)puStack_598 >> 0x20);
            puStack_588 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
            bVar11 = puStack_598 != (undefined8 *)0x0;
            puStack_598 = puVar55;
            uStack_280._0_4_ = (float)uStack_288;
            uStack_280._4_4_ = uStack_288._4_4_;
            if (bVar11) {
              puStack_590 = puVar24 + 0x14;
              _free(puVar19);
            }
            puStack_590 = puVar24 + 0x14;
            _free(uStack_3e8);
            lVar57 = lVar57 + 0xd0;
            if (lVar57 == lVar34) goto LAB_109466fc4;
          }
          *(float *)(puStack_590 + 1) = fStack_468;
          *puStack_590 = puStack_470;
          *(ulong *)((long)puStack_590 + 0xc) = CONCAT44(fStack_460,fStack_464);
          *(ulong *)((long)puStack_590 + 0x24) = CONCAT44(fStack_448,fStack_44c);
          *(ulong *)((long)puStack_590 + 0x1c) = CONCAT44(uStack_450,fStack_454);
          *(ulong *)((long)puStack_590 + 0x14) = CONCAT44(fStack_458,fStack_45c);
          puStack_590[6] = puStack_440;
          puStack_590[9] = pfStack_428;
          puStack_590[8] = puStack_430;
          puStack_590[0xb] = pauStack_418;
          puStack_590[10] = puStack_420;
          puStack_590[0xd] = puStack_408;
          puStack_590[0xc] = puStack_410;
          puStack_590[0xf] = puStack_3f8;
          puStack_590[0xe] = puStack_400;
          *(undefined4 *)(puStack_590 + 0x10) = (undefined4)lStack_3f0;
          puStack_590[0x11] = uStack_3e8;
          puStack_590[0x12] = uStack_3e0;
          uStack_3e8 = 0;
          uStack_3e0 = 0;
          puStack_590 = puStack_590 + 0x14;
          _free(0);
          lVar57 = lVar57 + 0xd0;
        } while (lVar57 != lVar34);
      }
    }
    else {
      if (0x199999999999999 < uVar64) {
        FUN_10946bc00();
        goto LAB_10946ace0;
      }
      FUN_10946bc14(&puStack_470,uVar64,0,&puStack_598);
      puVar24 = puStack_590;
      puVar55 = (undefined8 *)
                ((long)puStack_598 + (CONCAT44(fStack_464,fStack_468) - (long)puStack_590));
      puVar19 = puStack_598;
      puVar61 = puVar55;
      if (puStack_590 != puStack_598) {
        do {
          uVar46 = *puVar19;
          *(undefined4 *)(puVar61 + 1) = *(undefined4 *)(puVar19 + 1);
          *puVar61 = uVar46;
          *(undefined8 *)((long)puVar61 + 0xc) = *(undefined8 *)((long)puVar19 + 0xc);
          uVar46 = *(undefined8 *)((long)puVar19 + 0x14);
          uVar99 = *(undefined8 *)((long)puVar19 + 0x1c);
          *(undefined8 *)((long)puVar61 + 0x24) = *(undefined8 *)((long)puVar19 + 0x24);
          *(undefined8 *)((long)puVar61 + 0x1c) = uVar99;
          *(undefined8 *)((long)puVar61 + 0x14) = uVar46;
          puVar61[6] = puVar19[6];
          uVar46 = puVar19[8];
          puVar61[9] = puVar19[9];
          puVar61[8] = uVar46;
          uVar46 = puVar19[10];
          puVar61[0xb] = puVar19[0xb];
          puVar61[10] = uVar46;
          uVar46 = puVar19[0xc];
          puVar61[0xd] = puVar19[0xd];
          puVar61[0xc] = uVar46;
          uVar46 = puVar19[0xe];
          puVar61[0xf] = puVar19[0xf];
          puVar61[0xe] = uVar46;
          *(undefined4 *)(puVar61 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
          puVar61[0x11] = puVar19[0x11];
          puVar61[0x12] = puVar19[0x12];
          puVar19[0x11] = 0;
          puVar19[0x12] = 0;
          puVar19 = puVar19 + 0x14;
          puVar61 = puVar61 + 0x14;
          puVar36 = puStack_598;
        } while (puVar19 != puStack_590);
        do {
          _free(puVar36[0x11]);
          puVar36 = puVar36 + 0x14;
        } while (puVar36 != puVar24);
      }
      puVar19 = puStack_598;
      puStack_590 = (undefined8 *)CONCAT44(fStack_45c,fStack_460);
      puStack_588 = (undefined8 *)CONCAT44(fStack_454,fStack_458);
      fStack_468 = SUB84(puStack_598,0);
      fStack_464 = (float)((ulong)puStack_598 >> 0x20);
      bVar11 = puStack_598 != (undefined8 *)0x0;
      puStack_598 = puVar55;
      fStack_460 = fStack_468;
      fStack_45c = fStack_464;
      if (bVar11) {
        _free(puVar19);
      }
      lVar57 = *param_4;
      lVar34 = param_4[1];
      if (lVar57 != lVar34) goto LAB_109466cb8;
    }
LAB_109466fc4:
    pfStack_5b0 = (float *)0x0;
    puStack_5a8 = (undefined8 *)0x0;
    pfVar16 = (float *)0x18;
    _malloc();
    if (pfVar16 == (float *)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10946ace0;
    }
    puStack_5a8 = (undefined8 *)0x6;
    pfStack_5b0 = pfVar16;
    FUN_1093804f0(&puStack_470,param_5);
    puVar19 = puStack_5a8;
    dVar68 = (double)CONCAT44(fStack_454,fStack_458);
    *(long *)(pfStack_5b0 + 2) =
         CONCAT44((float)(double)param_5[4],
                  (float)(dVar68 * (double)CONCAT44(fStack_45c,fStack_460)));
    *(long *)pfStack_5b0 =
         CONCAT44((float)((double)CONCAT44(fStack_464,fStack_468) * dVar68),
                  (float)((double)puStack_470 * dVar68));
    *(long *)(pfStack_5b0 + 4) =
         CONCAT44((float)SUB168(*(undefined1 (*) [16])(param_5 + 5),8),
                  (float)SUB168(*(undefined1 (*) [16])(param_5 + 5),0));
    fStack_458 = 0.0;
    fStack_454 = 0.0;
    fStack_460 = 0.0;
    fStack_45c = 0.0;
    fStack_448 = 0.0;
    uStack_444 = 0;
    uStack_450 = 0;
    fStack_44c = 0.0;
    fStack_468 = 0.0;
    fStack_464 = 0.0;
    puStack_470 = (undefined8 *)0x0;
    puStack_440 = &uStack_5a0;
    uStack_35c = 0;
    puStack_430 = (undefined8 *)0x0;
    puStack_438 = (undefined8 *)0x0;
    puStack_420 = (undefined8 *)0x0;
    pfStack_428 = (float *)0x0;
    puStack_410 = (undefined8 *)0x0;
    pauStack_418 = (undefined1 (*) [16])0x0;
    uStack_3e8 = 0;
    lStack_3f0 = 0;
    puStack_3a8 = (undefined8 *)0x0;
    puStack_3b0 = (undefined8 *)0x0;
    puStack_398 = (undefined8 *)0x0;
    pauStack_3a0 = (undefined1 (*) [16])0x0;
    puStack_388 = (undefined8 *)0x0;
    pauStack_390 = (undefined1 (*) [16])0x0;
    puStack_378 = (undefined8 *)0x0;
    pauStack_380 = (undefined1 (*) [16])0x0;
    iStack_368 = 0;
    iStack_364 = 0;
    iVar8 = iStack_364;
    uStack_370 = 0;
    uStack_36c = 0;
    uStack_358 = CONCAT44(uStack_358._4_4_,3);
    uStack_3e0 = CONCAT44(uStack_3e0._4_4_,0x42c80000);
    uStack_3c8 = 0;
    uStack_3d0 = 0x39b504f339b504f3;
    uStack_3b8._0_5_ = (uint5)(uint)(float)uStack_3b8;
    lStack_3d8 = (long)param_7;
    puStack_408 = puStack_5a8;
    iVar15 = uStack_5a0._4_4_;
    puVar55 = (undefined8 *)(long)uStack_5a0._4_4_;
    puStack_3f8 = (undefined8 *)0x0;
    iStack_364 = uStack_5a0._4_4_ >> 0x1f;
    iVar9 = iStack_364;
    puStack_400 = puVar55;
    iStack_364 = iVar8;
    if (puStack_5a8 == (undefined8 *)0x0) {
      puStack_388 = (undefined8 *)0x0;
      if (uStack_5a0._4_4_ != 0) goto LAB_109467104;
LAB_10946715c:
      puStack_378 = puVar19;
      iStack_368 = iVar15;
      puStack_430 = (undefined8 *)0x0;
      iStack_364 = iVar9;
      goto LAB_109467270;
    }
    if (0 < (long)puStack_5a8) {
      if ((ulong)puStack_5a8 >> 0x3e == 0) {
        pauVar60 = (undefined1 (*) [16])((long)puStack_5a8 << 2);
        pauVar21 = pauVar60;
        _malloc();
        if (pauVar21 != (undefined1 (*) [16])0x0) {
          puStack_398 = puVar19;
          pauVar25 = pauVar60;
          pauStack_3a0 = pauVar21;
          _malloc();
          if (pauVar25 != (undefined1 (*) [16])0x0) {
            puStack_388 = puVar19;
            pauStack_390 = pauVar25;
            _malloc();
            if (pauVar60 != (undefined1 (*) [16])0x0) goto joined_r0x000109467240;
          }
        }
      }
LAB_109467310:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10946ace0;
    }
    pauStack_380 = (undefined1 (*) [16])0x0;
    puStack_398 = puStack_5a8;
    puStack_388 = puStack_5a8;
    pauVar60 = pauStack_380;
joined_r0x000109467240:
    pauStack_380 = pauVar60;
    if (iVar15 == 0) goto LAB_10946715c;
LAB_109467104:
    puStack_378 = puVar19;
    if (0 < iVar15) {
      puVar61 = (undefined8 *)((long)puVar55 << 2);
      puVar24 = puVar61;
      _malloc();
      if (puVar24 != (undefined8 *)0x0) {
        uStack_370 = (uint)puVar24;
        uStack_36c = (undefined4)((ulong)puVar24 >> 0x20);
        iStack_368 = iVar15;
        iStack_364 = iVar9;
        _malloc();
        if (puVar61 != (undefined8 *)0x0) goto joined_r0x000109467138;
      }
      goto LAB_109467310;
    }
    uStack_370 = 0;
    uStack_36c = 0;
    puStack_438 = (undefined8 *)0x0;
    puVar61 = puStack_438;
    iStack_368 = iVar15;
    iStack_364 = iVar9;
joined_r0x000109467138:
    puStack_438 = puVar61;
    puStack_430 = puVar55;
    if (puVar19 != (undefined8 *)0x0) {
      lVar57 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        lVar57 = 0x7fffffffffffffff / (long)puVar19;
      }
      if (lVar57 < (long)puVar55) goto LAB_109467310;
    }
LAB_109467270:
    ppauStack_6a0 = &pauStack_390;
    FUN_1093c3d54(&puStack_470,(long)puVar19 * (long)puVar55,puVar55,puVar19);
    puVar19 = puStack_408;
    if (((ulong)uStack_3b8 & 0x100000000) == 0) {
      pauVar21 = pauStack_418;
      if (puStack_410 != puStack_408) {
        _free(pauStack_418);
        if (0 < (long)puVar19) {
          if ((ulong)puVar19 >> 0x3e == 0) {
            pauVar21 = (undefined1 (*) [16])((long)puVar19 << 2);
            _malloc();
            if (pauVar21 != (undefined1 (*) [16])0x0) goto LAB_1094672d4;
          }
          goto LAB_109467310;
        }
        pauVar21 = (undefined1 (*) [16])0x0;
      }
LAB_1094672d4:
      pauStack_418 = pauVar21;
      puStack_410 = puVar19;
    }
    puVar19 = puStack_408;
    pfVar16 = pfStack_428;
    if (puStack_420 != puStack_408) {
      _free(pfStack_428);
      if (0 < (long)puVar19) {
        if ((ulong)puVar19 >> 0x3e == 0) {
          pfVar16 = (float *)((long)puVar19 << 2);
          _malloc();
          if (pfVar16 != (float *)0x0) goto LAB_109467340;
        }
        goto LAB_109467310;
      }
      pfVar16 = (float *)0x0;
    }
LAB_109467340:
    pfStack_428 = pfVar16;
    puVar55 = puStack_440;
    puStack_3f8 = (undefined8 *)0x0;
    lStack_3f0 = 0;
    puStack_420 = puVar19;
    if ((((((0 < (long)puStack_408) && ((long)puStack_408 <= (long)puStack_400)) &&
          (0.0 <= (float)uStack_3d0)) && ((0.0 <= uStack_3d0._4_4_ && (0.0 <= (float)uStack_3c8))))
        && (0 < lStack_3d8)) && (0.0 < (float)uStack_3e0)) {
      puVar19 = puStack_408;
      pauVar21 = pauStack_418;
      if (uStack_3b8._4_1_ == '\x01') {
        do {
          if (*(float *)*pauVar21 <= 0.0) goto LAB_109467530;
          puVar19 = (undefined8 *)((long)puVar19 - 1);
          pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        } while (puVar19 != (undefined8 *)0x0);
      }
      puStack_3f8 = (undefined8 *)0x1;
      pfStack_500 = *(float **)pfStack_5b0;
      uStack_4f8._0_4_ = pfStack_5b0[2];
      lVar57 = puStack_440[1];
      if (puStack_440[2] != lVar57) {
        lVar34 = 0;
        uVar64 = 0;
        uVar46 = *(undefined8 *)(pfStack_5b0 + ((long)puStack_5a8 - 3));
        fVar102 = pfStack_5b0[(long)puStack_5a8 - 1];
        lVar59 = 0x28;
        do {
          puVar19 = puStack_438;
          FUN_10937fe84(&pfStack_500,&pfStack_290,0);
          lVar49 = lVar57 + lVar59;
          fVar65 = (float)*(undefined8 *)(lVar49 + -0x28);
          fVar100 = (float)*(undefined8 *)(lVar49 + -0x24);
          fVar86 = (float)((ulong)*(undefined8 *)(lVar49 + -0x24) >> 0x20);
          fVar72 = fVar102 + (float)uStack_288 * fVar65 +
                             uStack_280._4_4_ * fVar100 + (float)uStack_270 * fVar86;
          fVar79 = 1.0 / fVar72;
          if (fVar72 == 0.0) {
            fVar79 = 1.0;
          }
          *(float *)((long)puVar19 + lVar34) =
               *(float *)(lVar49 + -0x10) *
               fVar79 * ((float)uVar46 +
                        SUB84(pfStack_290,0) * fVar65 + uStack_288._4_4_ * fVar100 +
                        (float)uStack_278 * fVar86) - *(float *)(lVar49 + -0x1c);
          ((float *)((long)puVar19 + lVar34))[1] =
               *(float *)(lVar49 + -0xc) *
               fVar79 * ((float)((ulong)uVar46 >> 0x20) +
                        (float)((ulong)pfStack_290 >> 0x20) * fVar65 + (float)uStack_280 * fVar100 +
                        uStack_278._4_4_ * fVar86) - *(float *)(lVar49 + -0x18);
          if (*(char *)(lVar49 + -8) == '\x01') {
            fVar72 = (float)*(undefined8 *)((long)puVar19 + lVar34);
            fVar79 = (float)((ulong)*(undefined8 *)((long)puVar19 + lVar34) >> 0x20);
            fVar65 = fVar72 * fVar72 + fVar79 * fVar79;
            if (*(float *)(lVar57 + lVar59) < fVar65) {
              fVar65 = *(float *)(lVar57 + lVar59 + -4) / SQRT(fVar65);
              if (fVar65 <= 1.1754944e-38) {
                fVar65 = 1.1754944e-38;
              }
              *(ulong *)((long)puVar19 + lVar34) =
                   CONCAT44(fVar79 * SQRT(fVar65),fVar72 * SQRT(fVar65));
            }
          }
          uVar64 = uVar64 + 1;
          lVar57 = puVar55[1];
          lVar34 = lVar34 + 8;
          lVar59 = lVar59 + 0xa0;
        } while (uVar64 < (ulong)((puVar55[2] - lVar57 >> 5) * -0x3333333333333333));
      }
      uVar66 = FUN_10946bcac(puStack_438,puStack_430);
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,uVar66);
      fStack_360 = 0.0;
      puStack_3c0 = (undefined8 *)0x1;
LAB_109467810:
      puVar19 = puStack_440;
      pfStack_548 = *(float **)pfStack_5b0;
      puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,pfStack_5b0[2]);
      lVar57 = puStack_440[1];
      if (puStack_440[2] != lVar57) {
        lVar34 = 0;
        uVar64 = 0;
        uVar46 = *(undefined8 *)(pfStack_5b0 + ((long)puStack_5a8 - 3));
        fVar102 = pfStack_5b0[(long)puStack_5a8 - 1];
        do {
          FUN_10937fe84(&pfStack_548,&pfStack_500,&pfStack_290);
          puVar55 = (undefined8 *)(lVar57 + lVar34);
          fVar72 = (float)*puVar55;
          fVar79 = (float)*(undefined8 *)((long)puVar55 + 4);
          fVar100 = (float)((ulong)*(undefined8 *)((long)puVar55 + 4) >> 0x20);
          fVar65 = (float)uStack_4e0 * fVar100;
          fVar86 = fVar102 + (float)uStack_4f8 * fVar72 + uStack_4f0._4_4_ * fVar79 + fVar65;
          fVar87 = 1.0 / fVar86;
          if (fVar86 == 0.0) {
            fVar87 = 1.0;
          }
          fVar88 = ((float)uVar46 +
                   SUB84(pfStack_500,0) * fVar72 + uStack_4f8._4_4_ * fVar79 +
                   SUB84(ppfStack_4e8,0) * fVar100) * fVar87;
          fVar95 = ((float)((ulong)uVar46 >> 0x20) +
                   (float)((ulong)pfStack_500 >> 0x20) * fVar72 + (float)uStack_4f0 * fVar79 +
                   (float)((ulong)ppfStack_4e8 >> 0x20) * fVar100) * fVar87;
          fVar86 = (float)puVar55[3];
          fVar89 = (float)((ulong)puVar55[3] >> 0x20);
          if ((*(char *)(puVar55 + 4) != '\x01') ||
             (fVar65 = -(float)*(undefined8 *)((long)puVar55 + 0xc) + fVar88 * fVar86,
             fVar98 = -(float)((ulong)*(undefined8 *)((long)puVar55 + 0xc) >> 0x20) +
                      fVar95 * fVar89, fVar65 = fVar65 * fVar65 + fVar98 * fVar98,
             fVar65 <= *(float *)(puVar55 + 5))) {
            bVar5 = 0;
          }
          else {
            fVar65 = *(float *)(lVar57 + lVar34 + 0x24) / SQRT(fVar65);
            if (fVar65 <= 1.1754944e-38) {
              fVar65 = 1.1754944e-38;
            }
            fVar65 = SQRT(fVar65);
            bVar5 = 1;
          }
          fVar105 = SUB84(ppuStack_248,0) * fVar72 + uStack_240._4_4_ * fVar79 +
                    SUB84(uStack_230,0) * fVar100;
          fVar106 = (float)((ulong)ppuStack_248 >> 0x20) * fVar72 + fStack_238 * fVar79 +
                    (float)((ulong)uStack_230 >> 0x20) * fVar100;
          fVar104 = fVar72 * (float)uStack_240 + fVar79 * fStack_234 + fVar100 * ppuStack_228._0_4_;
          fVar107 = -fVar88;
          fVar108 = -fVar95;
          fVar98 = fVar86 * (SUB84(pfStack_290,0) * fVar72 + uStack_288._4_4_ * fVar79 +
                             (float)uStack_278 * fVar100 + fVar105 * fVar107) * fVar87;
          fVar105 = fVar89 * (uStack_270._4_4_ * fVar72 + SUB84(puStack_260,0) * fVar79 +
                              fStack_254 * fVar100 + fVar105 * fVar108) * fVar87;
          fVar101 = fVar86 * ((float)((ulong)pfStack_290 >> 0x20) * fVar72 +
                              (float)uStack_280 * fVar79 + uStack_278._4_4_ * fVar100 +
                             fVar106 * fVar107) * fVar87;
          fVar106 = fVar89 * ((float)uStack_268 * fVar72 +
                              (float)((ulong)puStack_260 >> 0x20) * fVar79 + fStack_250 * fVar100 +
                             fVar106 * fVar108) * fVar87;
          uVar99 = NEON_rev64(CONCAT44(fVar100 * (float)uStack_270,fVar79 * fStack_258),4);
          auVar69._0_4_ =
               fVar86 * (((float)uStack_288 * fVar72 + (float)uVar99 + fVar79 * uStack_280._4_4_) -
                        fVar88 * fVar104) * fVar87;
          auVar69._4_4_ =
               fVar89 * ((uStack_268._4_4_ * fVar72 +
                         (float)((ulong)uVar99 >> 0x20) + fVar100 * fStack_24c) - fVar95 * fVar104)
                        * fVar87;
          auVar69._8_4_ = fVar86 * fVar87;
          auVar69._12_4_ = fVar89 * 0.0;
          auVar75._0_4_ = fVar86 * 0.0;
          auVar75._4_4_ = fVar89 * fVar87;
          auVar75._8_4_ = fVar86 * fVar107 * fVar87;
          auVar75._12_4_ = fVar89 * fVar108 * fVar87;
          auVar82._0_4_ = fVar98 * fVar65;
          auVar82._4_4_ = fVar105 * fVar65;
          auVar82._8_4_ = fVar101 * fVar65;
          auVar82._12_4_ = fVar106 * fVar65;
          auVar90._0_4_ = auVar75._0_4_ * fVar65;
          auVar90._4_4_ = auVar75._4_4_ * fVar65;
          auVar90._8_4_ = auVar75._8_4_ * fVar65;
          auVar90._12_4_ = auVar75._12_4_ * fVar65;
          iVar15 = -(uint)bVar5;
          auVar96._4_4_ = iVar15;
          auVar96._0_4_ = iVar15;
          auVar96._8_4_ = iVar15;
          auVar96._12_4_ = iVar15;
          auVar74._4_4_ = auVar69._4_4_ * fVar65;
          auVar74._0_4_ = auVar69._0_4_ * fVar65;
          auVar74._8_4_ = auVar69._8_4_ * fVar65;
          auVar74._12_4_ = auVar69._12_4_ * fVar65;
          auVar69 = auVar69 ^ (auVar69 ^ auVar74) & auVar96;
          auVar76._4_4_ = fVar105;
          auVar76._0_4_ = fVar98;
          auVar76._8_4_ = fVar101;
          auVar76._12_4_ = fVar106;
          auVar82 = auVar82 ^ (auVar82 ^ auVar76) & ~auVar96;
          auVar75 = auVar75 ^ (auVar75 ^ auVar90) & auVar96;
          lVar57 = CONCAT44(fStack_464,fStack_468);
          puVar55 = puStack_470 + uVar64;
          *puVar55 = auVar82._0_8_;
          auVar74 = NEON_ext(auVar82,auVar82,8,1);
          *(long *)((long)puVar55 + lVar57 * 4) = auVar74._0_8_;
          puVar55[lVar57] = auVar69._0_8_;
          auVar74 = NEON_ext(auVar69,auVar69,8,1);
          *(long *)((long)puVar55 + lVar57 * 0xc) = auVar74._0_8_;
          puVar55[lVar57 * 2] = auVar75._0_8_;
          auVar74 = NEON_ext(auVar75,auVar75,8,1);
          *(long *)((long)puVar55 + lVar57 * 0x14) = auVar74._0_8_;
          uVar64 = uVar64 + 1;
          lVar57 = puVar19[1];
          lVar34 = lVar34 + 0xa0;
        } while (uVar64 < (ulong)((puVar19[2] - lVar57 >> 5) * -0x3333333333333333));
      }
      lStack_3f0 = lStack_3f0 + 1;
      if (0 < (long)puStack_5a8) {
        lVar34 = 0;
        lVar57 = 0;
        do {
          puVar19 = puStack_470;
          lVar59 = CONCAT44(fStack_464,fStack_468);
          if ((bRam0000000113732db8 & 1) == 0) {
            iVar15 = 0x13732db8;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d88 = 1.0842022e-19;
              ___cxa_guard_release(&bRam0000000113732db8);
            }
          }
          if ((bRam0000000113732dc0 & 1) == 0) {
            iVar15 = 0x13732dc0;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d8c = 4.5035996e+15;
              ___cxa_guard_release(&bRam0000000113732dc0);
            }
          }
          if ((bRam0000000113732dc8 & 1) == 0) {
            iVar15 = 0x13732dc8;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d90 = 9.223372e+18;
              ___cxa_guard_release(&bRam0000000113732dc8);
            }
          }
          if ((bRam0000000113732dd0 & 1) == 0) {
            iVar15 = 0x13732dd0;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d94 = 1.323489e-23;
              ___cxa_guard_release(&bRam0000000113732dd0);
            }
          }
          if ((bRam0000000113732dd8 & 1) == 0) {
            iVar15 = 0x13732dd8;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d98 = 1.1920929e-07;
              ___cxa_guard_release(&bRam0000000113732dd8);
            }
          }
          if ((bRam0000000113732de0 & 1) == 0) {
            iVar15 = 0x13732de0;
            ___cxa_guard_acquire();
            if (iVar15 != 0) {
              fRam0000000113732d9c = SQRT(fRam0000000113732d98);
              ___cxa_guard_release(&bRam0000000113732de0);
            }
          }
          if (lVar59 < 1) {
            fVar102 = 0.0;
LAB_109467ab8:
            fVar72 = SQRT(fVar102);
          }
          else {
            fVar79 = (float)lVar59;
            fVar102 = 0.0;
            fVar65 = 0.0;
            pfVar16 = (float *)((long)puVar19 + lVar59 * lVar34);
            fVar72 = 0.0;
            do {
              fVar100 = *pfVar16;
              fVar87 = ABS(fVar100);
              fVar86 = fVar72;
              fVar100 = fVar102 + fVar100 * fVar100;
              if (fVar87 < fRam0000000113732d88) {
                fVar86 = fVar72 + fRam0000000113732d90 * fVar87 * fRam0000000113732d90 * fVar87;
                fVar100 = fVar102;
              }
              if (fRam0000000113732d8c / fVar79 < fVar87) {
                fVar86 = fVar72;
                fVar100 = fVar102;
                fVar65 = fVar65 + fRam0000000113732d94 * fVar87 * fRam0000000113732d94 * fVar87;
              }
              fVar102 = fVar100;
              lVar59 = lVar59 + -1;
              pfVar16 = pfVar16 + 1;
              fVar72 = fVar86;
            } while (lVar59 != 0);
            fVar72 = fVar102;
            if (!NAN(fVar102)) {
              if (fVar65 <= 0.0) {
                if (fVar86 <= 0.0) goto LAB_109467ab8;
                if (0.0 < fVar102) {
                  fVar72 = SQRT(fVar102);
                  fVar102 = SQRT(fVar86) / fRam0000000113732d90;
                  goto LAB_109467c18;
                }
                fVar72 = SQRT(fVar86) / fRam0000000113732d90;
              }
              else {
                fVar72 = SQRT(fVar65);
                if ((fVar72 <= 3.4028235e+38) &&
                   (fVar72 = fVar72 / fRam0000000113732d94, 0.0 < fVar102)) {
                  fVar102 = SQRT(fVar102);
LAB_109467c18:
                  fVar65 = fVar102;
                  if (fVar72 <= fVar102) {
                    fVar65 = fVar72;
                  }
                  if (fVar102 <= fVar72) {
                    fVar102 = fVar72;
                  }
                  fVar72 = fVar102;
                  if (fRam0000000113732d9c * fVar102 < fVar65) {
                    fVar72 = fVar102 * SQRT((fVar65 / fVar102) * (fVar65 / fVar102) + 1.0);
                  }
                }
              }
            }
          }
          *(float *)(*pauStack_390 + lVar57 * 4) = fVar72;
          lVar57 = lVar57 + 1;
          lVar34 = lVar34 + 4;
        } while (lVar57 < (long)puStack_5a8);
      }
      FUN_10946c21c(&pfStack_290,&puStack_470);
      uStack_278._0_4_ = 0.0;
      uStack_278._4_4_ = 0.0;
      uStack_270._0_4_ = 0.0;
      uStack_270._4_4_ = 0.0;
      lVar57 = CONCAT44(fStack_45c,fStack_460);
      if (CONCAT44(fStack_464,fStack_468) <= CONCAT44(fStack_45c,fStack_460)) {
        lVar57 = CONCAT44(fStack_464,fStack_468);
      }
      FUN_1093c3de4(&uStack_278,lVar57);
      fVar65 = fStack_45c;
      fVar102 = fStack_460;
      puVar19 = (undefined8 *)CONCAT44(fStack_45c,fStack_460);
      puVar55 = (undefined8 *)(long)(int)fStack_460;
      uStack_268._0_4_ = 0.0;
      uStack_268._4_4_ = 0.0;
      puStack_260 = (undefined8 *)0x0;
      if (fStack_460 != 0.0) {
        if ((long)puVar55 < 1) {
          lVar57 = 0;
        }
        else {
          lVar57 = (ulong)(uint)fStack_460 << 2;
          _malloc();
          if (lVar57 == 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10946ace0;
          }
        }
        uStack_268._0_4_ = (float)lVar57;
        uStack_268._4_4_ = (float)((ulong)lVar57 >> 0x20);
      }
      fStack_258 = 0.0;
      fStack_254 = 0.0;
      fStack_250 = 0.0;
      fStack_24c = 0.0;
      puStack_260 = puVar55;
      if (puVar19 == (undefined8 *)0x0) {
        uStack_240._0_4_ = 0.0;
        uStack_240._4_4_ = 0.0;
LAB_109467e58:
        fStack_234 = 0.0;
        fStack_238 = 0.0;
        ppuStack_248 = (undefined8 **)0x0;
        fStack_24c = fVar65;
        fStack_250 = fVar102;
        ppuVar56 = (undefined8 **)0x0;
        uStack_230 = puVar19;
      }
      else {
        if ((long)puVar19 < 1) {
          uStack_240._0_4_ = fVar102;
          uStack_240._4_4_ = fVar65;
          goto LAB_109467e58;
        }
        if ((uint)fVar65 >> 0x1d != 0) {
LAB_10946aba0:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946ace0;
        }
        lVar57 = (long)puVar19 << 3;
        _malloc();
        if (lVar57 == 0) goto LAB_10946aba0;
        fStack_258 = (float)lVar57;
        fStack_254 = (float)((ulong)lVar57 >> 0x20);
        fStack_250 = fVar102;
        fStack_24c = fVar65;
        ppuVar56 = (undefined8 **)((long)puVar19 << 2);
        ppuStack_248 = (undefined8 **)0x0;
        uStack_240._0_4_ = 0.0;
        uStack_240._4_4_ = 0.0;
        ppuVar22 = ppuVar56;
        _malloc();
        if (ppuVar22 == (undefined8 **)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946ace0;
        }
        uStack_240._0_4_ = fVar102;
        uStack_240._4_4_ = fVar65;
        fStack_238 = 0.0;
        fStack_234 = 0.0;
        uStack_230 = (undefined8 *)0x0;
        ppuVar23 = ppuVar56;
        ppuStack_248 = ppuVar22;
        _malloc();
        if (ppuVar23 == (undefined8 **)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946ace0;
        }
        fStack_238 = SUB84(ppuVar23,0);
        fStack_234 = (float)((ulong)ppuVar23 >> 0x20);
        ppuStack_228 = (undefined8 **)0x0;
        puStack_220 = (undefined8 *)0x0;
        uStack_230 = puVar19;
        _malloc();
        if (ppuVar56 == (undefined8 **)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946ace0;
        }
      }
      uStack_218 = uStack_218 & 0xffffffffffff0000;
      ppuStack_228 = ppuVar56;
      puStack_220 = puVar19;
      FUN_1093c40c4(&pfStack_290);
      pfVar16 = pfStack_290;
      lVar57 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
      lVar34 = CONCAT44(uStack_280._4_4_,(float)uStack_280);
      if ((CONCAT44(fStack_44c,uStack_450) != lVar57) || (CONCAT44(uStack_444,fStack_448) != lVar34)
         ) {
        if ((lVar57 != 0) && (lVar34 != 0)) {
          lVar59 = 0;
          if (lVar34 != 0) {
            lVar59 = 0x7fffffffffffffff / lVar34;
          }
          if (lVar59 < lVar57) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10946ace0;
          }
        }
        FUN_1093c3d54(&fStack_458,lVar34 * lVar57);
        lVar57 = CONCAT44(fStack_44c,uStack_450);
        lVar34 = CONCAT44(uStack_444,fStack_448);
      }
      puVar55 = puStack_260;
      puVar19 = (undefined8 *)CONCAT44(fStack_454,fStack_458);
      uVar40 = lVar57 * lVar34;
      uVar64 = uVar40 + 3;
      if (-1 < (long)uVar40) {
        uVar64 = uVar40;
      }
      uVar45 = uVar64 & 0xfffffffffffffffc;
      if (3 < (long)uVar40) {
        lVar57 = 0;
        puVar24 = puVar19;
        pfVar41 = pfVar16;
        do {
          uVar46 = *(undefined8 *)pfVar41;
          puVar24[1] = *(undefined8 *)(pfVar41 + 2);
          *puVar24 = uVar46;
          lVar57 = lVar57 + 4;
          puVar24 = puVar24 + 2;
          pfVar41 = pfVar41 + 4;
        } while (lVar57 < (long)uVar45);
      }
      uVar47 = (long)uVar40 % 4;
      if (uVar47 != 0 && (long)uVar47 < 0 == SBORROW8(uVar40,uVar45)) {
        if ((7 < uVar47) && (0x1f < (ulong)((long)puVar19 - (long)pfVar16))) {
          uVar48 = uVar47 & 0xfffffffffffffff8;
          uVar45 = uVar45 + uVar48;
          pfVar41 = pfVar16 + ((long)uVar64 >> 2) * 4 + 4;
          puVar24 = puVar19 + ((long)uVar64 >> 2) * 2 + 2;
          uVar64 = uVar48;
          do {
            uVar46 = *(undefined8 *)(pfVar41 + -4);
            uVar99 = *(undefined8 *)pfVar41;
            uVar6 = *(undefined8 *)(pfVar41 + 2);
            puVar24[-1] = *(undefined8 *)(pfVar41 + -2);
            puVar24[-2] = uVar46;
            puVar24[1] = uVar6;
            *puVar24 = uVar99;
            pfVar41 = pfVar41 + 8;
            puVar24 = puVar24 + 4;
            uVar64 = uVar64 - 8;
          } while (uVar64 != 0);
          if (uVar47 == uVar48) goto LAB_109467f80;
        }
        lVar57 = uVar40 - uVar45;
        pfVar41 = (float *)((long)puVar19 + uVar45 * 4);
        pfVar16 = pfVar16 + uVar45;
        do {
          *pfVar41 = *pfVar16;
          lVar57 = lVar57 + -1;
          pfVar41 = pfVar41 + 1;
          pfVar16 = pfVar16 + 1;
        } while (lVar57 != 0);
      }
LAB_109467f80:
      puVar19 = (undefined8 *)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (puStack_3a8 != puStack_260) {
        _free(puStack_3b0);
        if (0 < (long)puVar55) {
          if ((ulong)puVar55 >> 0x3e == 0) {
            puVar24 = (undefined8 *)((long)puVar55 << 2);
            _malloc();
            if (puVar24 != (undefined8 *)0x0) goto LAB_109467fc0;
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10946ace0;
        }
        puVar24 = (undefined8 *)0x0;
LAB_109467fc0:
        puStack_3a8 = puVar55;
        puStack_3b0 = puVar24;
      }
      puVar24 = (undefined8 *)((long)puVar55 + 3);
      if (-1 < (long)puVar55) {
        puVar24 = puVar55;
      }
      uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
      if (3 < (long)puVar55) {
        lVar57 = 0;
        puVar61 = puStack_3b0;
        puVar36 = puVar19;
        do {
          uVar46 = *puVar36;
          puVar61[1] = puVar36[1];
          *puVar61 = uVar46;
          lVar57 = lVar57 + 4;
          puVar61 = puVar61 + 2;
          puVar36 = puVar36 + 2;
        } while (lVar57 < (long)uVar64);
      }
      uVar40 = (long)puVar55 % 4;
      if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar55,uVar64)) {
        if ((7 < uVar40) && (0x1f < (ulong)((long)puStack_3b0 - (long)puVar19))) {
          uVar47 = uVar40 & 0xfffffffffffffff8;
          uVar64 = uVar64 + uVar47;
          puVar61 = puVar19 + ((long)puVar24 >> 2) * 2 + 2;
          puVar24 = puStack_3b0 + ((long)puVar24 >> 2) * 2 + 2;
          uVar45 = uVar47;
          do {
            uVar46 = puVar61[-2];
            uVar99 = *puVar61;
            uVar6 = puVar61[1];
            puVar24[-1] = puVar61[-1];
            puVar24[-2] = uVar46;
            puVar24[1] = uVar6;
            *puVar24 = uVar99;
            puVar61 = puVar61 + 4;
            puVar24 = puVar24 + 4;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
          if (uVar40 == uVar47) goto LAB_109468084;
        }
        lVar57 = (long)puVar55 - uVar64;
        puVar39 = (undefined4 *)((long)puStack_3b0 + uVar64 * 4);
        puVar42 = (undefined4 *)((long)puVar19 + uVar64 * 4);
        do {
          *puVar39 = *puVar42;
          lVar57 = lVar57 + -1;
          puVar39 = puVar39 + 1;
          puVar42 = puVar42 + 1;
        } while (lVar57 != 0);
      }
LAB_109468084:
      fVar102 = 0.0;
      if (puStack_3c0 == (undefined8 *)0x1) {
        if ((((ulong)uStack_3b8 & 0x100000000) == 0) && (0 < (long)puStack_408)) {
          puVar19 = (undefined8 *)0x0;
          if (((undefined8 *)0x7 < puStack_408) &&
             (0x1f < (ulong)((long)pauStack_418 - (long)pauStack_390))) {
            puVar19 = (undefined8 *)((ulong)puStack_408 & 0x7ffffffffffffff8);
            pauVar21 = pauStack_418 + 1;
            pauVar60 = pauStack_390 + 1;
            puVar55 = puVar19;
            do {
              auVar74 = pauVar60[-1];
              auVar76 = *pauVar60;
              auVar83._0_4_ = -(uint)(auVar74._0_4_ == 0.0);
              auVar83._4_4_ = -(uint)(auVar74._4_4_ == 0.0);
              auVar83._8_4_ = -(uint)(auVar74._8_4_ == 0.0);
              auVar83._12_4_ = -(uint)(auVar74._12_4_ == 0.0);
              auVar69 = NEON_fmov(0x3f800000,4);
              auVar74 = auVar74 ^ (auVar74 ^ auVar69) & auVar83;
              auVar3._4_4_ = -(uint)(auVar76._4_4_ == 0.0);
              auVar3._0_4_ = -(uint)(auVar76._0_4_ == 0.0);
              auVar3._8_4_ = -(uint)(auVar76._8_4_ == 0.0);
              auVar3._12_4_ = -(uint)(auVar76._12_4_ == 0.0);
              auVar76 = auVar76 ^ (auVar76 ^ auVar69) & auVar3;
              *(long *)(pauVar21[-1] + 8) = auVar74._8_8_;
              *(long *)pauVar21[-1] = auVar74._0_8_;
              *(long *)(*pauVar21 + 8) = auVar76._8_8_;
              *(long *)*pauVar21 = auVar76._0_8_;
              pauVar21 = pauVar21 + 2;
              pauVar60 = pauVar60 + 2;
              puVar55 = puVar55 + -1;
            } while (puVar55 != (undefined8 *)0x0);
            if (puStack_408 == puVar19) goto LAB_109468138;
          }
          lVar57 = (long)puStack_408 - (long)puVar19;
          pfVar16 = (float *)(*pauStack_390 + (long)puVar19 * 4);
          pfVar41 = (float *)(*pauStack_418 + (long)puVar19 * 4);
          do {
            fVar102 = 1.0;
            if (*pfVar16 != 0.0) {
              fVar102 = *pfVar16;
            }
            *pfVar41 = fVar102;
            lVar57 = lVar57 + -1;
            pfVar16 = pfVar16 + 1;
            pfVar41 = pfVar41 + 1;
          } while (lVar57 != 0);
        }
LAB_109468138:
        fVar102 = (float)FUN_10946c2c4(&pauStack_418,&pfStack_5b0);
        uStack_3b8 = (undefined8 *)CONCAT44(uStack_3b8._4_4_,fVar102 * (float)uStack_3e0);
        if (fVar102 * (float)uStack_3e0 == 0.0) {
          uStack_3b8 = (undefined8 *)CONCAT44(uStack_3b8._4_4_,(float)uStack_3e0);
        }
      }
      puVar55 = puStack_438;
      puVar19 = puStack_430;
      if ((undefined8 *)CONCAT44(iStack_364,iStack_368) != puStack_430) {
        FUN_1093c61bc(&uStack_370,puStack_430,1);
        puVar19 = (undefined8 *)CONCAT44(iStack_364,iStack_368);
      }
      puVar61 = (undefined8 *)CONCAT44(uStack_36c,uStack_370);
      puVar24 = (undefined8 *)((long)puVar19 + 3);
      if (-1 < (long)puVar19) {
        puVar24 = puVar19;
      }
      uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
      if (3 < (long)puVar19) {
        lVar57 = 0;
        puVar36 = puVar61;
        puVar33 = puVar55;
        do {
          uVar46 = *puVar33;
          puVar36[1] = puVar33[1];
          *puVar36 = uVar46;
          lVar57 = lVar57 + 4;
          puVar36 = puVar36 + 2;
          puVar33 = puVar33 + 2;
        } while (lVar57 < (long)uVar64);
      }
      uVar40 = (long)puVar19 % 4;
      if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar19,uVar64)) {
        if ((7 < uVar40) && (0x1f < (ulong)((long)puVar61 - (long)puVar55))) {
          uVar47 = uVar40 & 0xfffffffffffffff8;
          uVar64 = uVar64 + uVar47;
          puVar36 = puVar55 + ((long)puVar24 >> 2) * 2 + 2;
          puVar24 = puVar61 + ((long)puVar24 >> 2) * 2 + 2;
          uVar45 = uVar47;
          do {
            uVar46 = puVar36[-2];
            uVar99 = *puVar36;
            uVar6 = puVar36[1];
            puVar24[-1] = puVar36[-1];
            puVar24[-2] = uVar46;
            puVar24[1] = uVar6;
            *puVar24 = uVar99;
            puVar36 = puVar36 + 4;
            puVar24 = puVar24 + 4;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
          if (uVar40 == uVar47) goto LAB_109468248;
        }
        lVar57 = (long)puVar19 - uVar64;
        puVar39 = (undefined4 *)((long)puVar61 + uVar64 * 4);
        puVar42 = (undefined4 *)((long)puVar55 + uVar64 * 4);
        do {
          *puVar39 = *puVar42;
          lVar57 = lVar57 + -1;
          puVar39 = puVar39 + 1;
          puVar42 = puVar42 + 1;
        } while (lVar57 != 0);
      }
LAB_109468248:
      lVar57 = CONCAT44(uStack_280._4_4_,(float)uStack_280);
      if (CONCAT44(uStack_288._4_4_,(float)uStack_288) <=
          CONCAT44(uStack_280._4_4_,(float)uStack_280)) {
        lVar57 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
      }
      func_0x0001093c625c(&pfStack_558,&puStack_438);
      if (0 < lVar57) {
        lVar34 = 0;
        do {
          lStack_518 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
          uStack_4f8 = (undefined8 **)(lStack_518 - lVar34);
          uStack_4e0 = (undefined8 *)((long)puStack_550 - (long)uStack_4f8);
          pfStack_500 = pfStack_558 + (long)uStack_4e0;
          uStack_4f0._0_4_ = 1.4013e-45;
          uStack_4f0._4_4_ = 0.0;
          ppfStack_4e8 = &pfStack_558;
          ppuStack_4d8 = (undefined8 **)0x0;
          puStack_4d0 = puStack_550;
          lVar59 = lVar34 + 1;
          puStack_540 = (undefined8 *)(lStack_518 - lVar59);
          pfStack_548 = pfStack_290 + lVar59 + lStack_518 * lVar34;
          ppfStack_530 = &pfStack_290;
          lStack_528 = lVar59;
          lStack_520 = lVar34;
          FUN_1093c62e0(&pfStack_500,&pfStack_548,
                        CONCAT44(uStack_278._4_4_,(float)uStack_278) + lVar34 * 4,&pfStack_568);
          lVar34 = lVar59;
        } while (lVar59 != lVar57);
      }
      pfVar16 = (float *)CONCAT44(uStack_36c,uStack_370);
      puVar19 = (undefined8 *)CONCAT44(iStack_364,iStack_368);
      uStack_370 = (uint)pfStack_558;
      uStack_36c = (undefined4)((ulong)pfStack_558 >> 0x20);
      iStack_368 = (int)puStack_550;
      iStack_364 = (int)((ulong)puStack_550 >> 0x20);
      pfStack_558 = pfVar16;
      puStack_550 = puVar19;
      _free();
      puVar19 = (undefined8 *)CONCAT44(uStack_36c,uStack_370);
      puVar55 = puStack_408;
      if (puStack_420 != puStack_408) {
        FUN_1093c61bc(&pfStack_428,puStack_408,1);
        puVar55 = puStack_420;
      }
      pauVar60 = pauStack_390;
      pauVar21 = pauStack_418;
      puVar24 = (undefined8 *)((long)puVar55 + 3);
      if (-1 < (long)puVar55) {
        puVar24 = puVar55;
      }
      uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
      if (3 < (long)puVar55) {
        lVar57 = 0;
        pfVar16 = pfStack_428;
        puVar61 = puVar19;
        do {
          uVar46 = *puVar61;
          *(undefined8 *)(pfVar16 + 2) = puVar61[1];
          *(undefined8 *)pfVar16 = uVar46;
          lVar57 = lVar57 + 4;
          pfVar16 = pfVar16 + 4;
          puVar61 = puVar61 + 2;
        } while (lVar57 < (long)uVar64);
      }
      uVar40 = (long)puVar55 % 4;
      if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar55,uVar64)) {
        if ((7 < uVar40) && (0x1f < (ulong)((long)pfStack_428 - (long)puVar19))) {
          uVar47 = uVar40 & 0xfffffffffffffff8;
          uVar64 = uVar64 + uVar47;
          puVar61 = puVar19 + ((long)puVar24 >> 2) * 2 + 2;
          pfVar16 = pfStack_428 + ((long)puVar24 >> 2) * 4 + 4;
          uVar45 = uVar47;
          do {
            uVar46 = puVar61[-2];
            uVar99 = *puVar61;
            uVar6 = puVar61[1];
            *(undefined8 *)(pfVar16 + -2) = puVar61[-1];
            *(undefined8 *)(pfVar16 + -4) = uVar46;
            *(undefined8 *)(pfVar16 + 2) = uVar6;
            *(undefined8 *)pfVar16 = uVar99;
            puVar61 = puVar61 + 4;
            pfVar16 = pfVar16 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
          if (uVar40 == uVar47) goto LAB_1094683f4;
        }
        lVar57 = (long)puVar55 - uVar64;
        pfVar16 = pfStack_428 + uVar64;
        pfVar41 = (float *)((long)puVar19 + uVar64 * 4);
        do {
          *pfVar16 = *pfVar41;
          lVar57 = lVar57 + -1;
          pfVar16 = pfVar16 + 1;
          pfVar41 = pfVar41 + 1;
        } while (lVar57 != 0);
      }
LAB_1094683f4:
      fVar65 = (float)uStack_3e8;
      uStack_3e8 = uStack_3e8 & 0xffffffff;
      fVar72 = 0.0;
      if ((fVar65 != 0.0) && (0 < (long)puStack_408)) {
        uVar64 = 0;
        lVar34 = CONCAT44(fStack_454,fStack_458);
        puVar19 = (undefined8 *)(lVar34 + 0x30);
        lVar59 = CONCAT44(fStack_44c,uStack_450) * 4;
        lVar57 = lVar34;
        do {
          while (*(float *)(*pauStack_390 + (long)*(int *)((long)puStack_3b0 + uVar64 * 4) * 4) ==
                 0.0) {
            puVar55 = (undefined8 *)(uVar64 + 1);
            puVar19 = (undefined8 *)((long)puVar19 + lVar59);
            uVar64 = uVar64 + 1;
            lVar57 = lVar57 + lVar59;
            if (puVar55 == puStack_408) goto LAB_1094685cc;
          }
          pfVar16 = (float *)(lVar34 + uVar64 * CONCAT44(fStack_44c,uStack_450) * 4);
          puVar55 = (undefined8 *)(uVar64 + 1);
          if (uVar64 < 3) {
            fVar79 = *pfVar16 * (*pfStack_428 / fVar65);
            if (uVar64 != 0) {
              uVar40 = 0;
              do {
                fVar79 = fVar79 + *(float *)(lVar57 + uVar40 * 4 + 4) *
                                  (pfStack_428[uVar40 + 1] / fVar65);
                uVar40 = uVar40 + 1;
              } while (uVar64 != uVar40);
            }
          }
          else {
            uVar40 = (ulong)puVar55 & 0x7ffffffffffffffc;
            auVar91._0_4_ = *pfVar16 * (*pfStack_428 / fVar65);
            auVar91._4_4_ = pfVar16[1] * (pfStack_428[1] / fVar65);
            auVar91._8_4_ = pfVar16[2] * (pfStack_428[2] / fVar65);
            auVar91._12_4_ = pfVar16[3] * (pfStack_428[3] / fVar65);
            if (6 < uVar64) {
              uVar45 = (ulong)puVar55 & 0x7ffffffffffffff8;
              fVar79 = pfVar16[4] * ((float)*(undefined8 *)(pfStack_428 + 4) / fVar65);
              fVar100 = pfVar16[5] *
                        ((float)((ulong)*(undefined8 *)(pfStack_428 + 4) >> 0x20) / fVar65);
              fVar86 = pfVar16[6] * ((float)*(undefined8 *)(pfStack_428 + 6) / fVar65);
              fVar87 = pfVar16[7] *
                       ((float)((ulong)*(undefined8 *)(pfStack_428 + 6) >> 0x20) / fVar65);
              auVar92 = auVar91;
              if (0xe < uVar64) {
                uVar47 = 8;
                puVar24 = puVar19;
                pfVar41 = pfStack_428 + 0xc;
                do {
                  auVar92._0_4_ =
                       auVar91._0_4_ +
                       (float)puVar24[-2] * ((float)*(undefined8 *)(pfVar41 + -4) / fVar65);
                  auVar92._4_4_ =
                       auVar91._4_4_ +
                       (float)((ulong)puVar24[-2] >> 0x20) *
                       ((float)((ulong)*(undefined8 *)(pfVar41 + -4) >> 0x20) / fVar65);
                  auVar92._8_4_ =
                       auVar91._8_4_ +
                       (float)puVar24[-1] * ((float)*(undefined8 *)(pfVar41 + -2) / fVar65);
                  auVar92._12_4_ =
                       auVar91._12_4_ +
                       (float)((ulong)puVar24[-1] >> 0x20) *
                       ((float)((ulong)*(undefined8 *)(pfVar41 + -2) >> 0x20) / fVar65);
                  fVar79 = fVar79 + (float)*puVar24 * ((float)*(undefined8 *)pfVar41 / fVar65);
                  fVar100 = fVar100 + (float)((ulong)*puVar24 >> 0x20) *
                                      ((float)((ulong)*(undefined8 *)pfVar41 >> 0x20) / fVar65);
                  fVar86 = fVar86 + (float)puVar24[1] *
                                    ((float)*(undefined8 *)(pfVar41 + 2) / fVar65);
                  fVar87 = fVar87 + (float)((ulong)puVar24[1] >> 0x20) *
                                    ((float)((ulong)*(undefined8 *)(pfVar41 + 2) >> 0x20) / fVar65);
                  uVar47 = uVar47 + 8;
                  pfVar41 = pfVar41 + 8;
                  puVar24 = puVar24 + 4;
                  auVar91 = auVar92;
                } while (uVar47 < uVar45);
              }
              auVar91._0_4_ = fVar79 + auVar92._0_4_;
              auVar91._4_4_ = fVar100 + auVar92._4_4_;
              auVar91._8_4_ = fVar86 + auVar92._8_4_;
              auVar91._12_4_ = fVar87 + auVar92._12_4_;
              if (uVar45 < uVar40) {
                pfVar16 = pfVar16 + uVar45;
                uVar99 = *(undefined8 *)(pfStack_428 + uVar45 + 2);
                uVar46 = *(undefined8 *)(pfStack_428 + uVar45);
                auVar91._0_4_ = auVar91._0_4_ + *pfVar16 * ((float)uVar46 / fVar65);
                auVar91._4_4_ =
                     auVar91._4_4_ + pfVar16[1] * ((float)((ulong)uVar46 >> 0x20) / fVar65);
                auVar91._8_4_ = auVar91._8_4_ + pfVar16[2] * ((float)uVar99 / fVar65);
                auVar91._12_4_ =
                     auVar91._12_4_ + pfVar16[3] * ((float)((ulong)uVar99 >> 0x20) / fVar65);
              }
            }
            auVar74 = NEON_ext(auVar91,auVar91,8,1);
            fVar79 = auVar91._0_4_ + auVar74._0_4_ + auVar91._4_4_ + auVar74._4_4_;
            if (uVar40 <= uVar64) {
              do {
                fVar79 = fVar79 + *(float *)(lVar57 + uVar40 * 4) * (pfStack_428[uVar40] / fVar65);
                uVar40 = uVar40 + 1;
              } while (uVar64 + 1 != uVar40);
            }
          }
          fVar79 = ABS(fVar79 / *(float *)(*pauStack_390 +
                                          (long)*(int *)((long)puStack_3b0 + uVar64 * 4) * 4));
          if (fVar79 <= fVar72) {
            fVar79 = fVar72;
          }
          uStack_3e8 = CONCAT44(fVar79,(float)uStack_3e8);
          puVar19 = (undefined8 *)((long)puVar19 + lVar59);
          uVar64 = uVar64 + 1;
          lVar57 = lVar57 + lVar59;
          fVar72 = fVar79;
        } while (puVar55 != puStack_408);
      }
LAB_1094685cc:
      if ((float)uStack_3c8 < fVar72) {
        if (((ulong)uStack_3b8 & 0x100000000) == 0) {
          if (puStack_410 == puStack_388) {
            puVar19 = (undefined8 *)((long)puStack_388 + 3);
            puVar55 = puStack_388;
            if (-1 < (long)puStack_388) {
              puVar19 = puStack_388;
            }
          }
          else {
            FUN_1093c61bc(&pauStack_418,puStack_388,1);
            puVar19 = (undefined8 *)((long)puStack_410 + 3);
            puVar55 = puStack_410;
            if (-1 < (long)puStack_410) {
              puVar19 = puStack_410;
            }
          }
          uVar64 = (ulong)puVar19 & 0xfffffffffffffffc;
          if (3 < (long)puVar55) {
            lVar57 = 0;
            pauVar25 = pauStack_418;
            pauVar50 = pauVar21;
            pauVar30 = pauVar60;
            do {
              auVar74 = NEON_fmax(*pauVar50,*pauVar30,4);
              *(long *)(*pauVar25 + 8) = auVar74._8_8_;
              *(long *)*pauVar25 = auVar74._0_8_;
              lVar57 = lVar57 + 4;
              pauVar25 = pauVar25 + 1;
              pauVar50 = pauVar50 + 1;
              pauVar30 = pauVar30 + 1;
            } while (lVar57 < (long)uVar64);
          }
          uVar40 = (long)puVar55 - uVar64;
          if (uVar40 != 0 && (long)uVar64 <= (long)puVar55) {
            if (((7 < uVar40) && (0x1f < (ulong)((long)pauStack_418 - (long)pauVar21))) &&
               (0x1f < (ulong)((long)pauStack_418 - (long)pauVar60))) {
              lVar57 = (long)puVar19 >> 2;
              uVar47 = uVar40 & 0xfffffffffffffff8;
              uVar64 = uVar64 + uVar47;
              pauVar25 = pauStack_418 + lVar57 + 1;
              pauVar50 = pauVar60 + lVar57 + 1;
              pauVar30 = pauVar21 + lVar57 + 1;
              uVar45 = uVar47;
              do {
                auVar74 = pauVar30[-1];
                auVar76 = *pauVar30;
                auVar69 = pauVar50[-1];
                fVar65 = (float)((ulong)*(undefined8 *)(*pauVar50 + 8) >> 0x20);
                auVar94._0_4_ = -(uint)(auVar74._0_4_ < auVar69._0_4_);
                auVar94._4_4_ = -(uint)(auVar74._4_4_ < auVar69._4_4_);
                auVar94._8_4_ = -(uint)(auVar74._8_4_ < auVar69._8_4_);
                auVar94._12_4_ = -(uint)(auVar74._12_4_ < auVar69._12_4_);
                auVar97._0_4_ = -(uint)(auVar76._0_4_ < (float)*(undefined8 *)*pauVar50);
                auVar97._4_4_ =
                     -(uint)(auVar76._4_4_ < (float)((ulong)*(undefined8 *)*pauVar50 >> 0x20));
                auVar97._8_4_ = -(uint)(auVar76._8_4_ < (float)*(undefined8 *)(*pauVar50 + 8));
                auVar97._12_4_ = -(uint)(auVar76._12_4_ < fVar65);
                auVar74 = auVar74 ^ (auVar74 ^ auVar69) & auVar94;
                auVar4._12_4_ = fVar65;
                auVar4._0_12_ = *(undefined1 (*) [12])*pauVar50;
                auVar76 = auVar76 ^ (auVar76 ^ auVar4) & auVar97;
                *(long *)(pauVar25[-1] + 8) = auVar74._8_8_;
                *(long *)pauVar25[-1] = auVar74._0_8_;
                *(long *)(*pauVar25 + 8) = auVar76._8_8_;
                *(long *)*pauVar25 = auVar76._0_8_;
                pauVar25 = pauVar25 + 2;
                pauVar50 = pauVar50 + 2;
                pauVar30 = pauVar30 + 2;
                uVar45 = uVar45 - 8;
              } while (uVar45 != 0);
              if (uVar40 == uVar47) goto LAB_1094686b4;
            }
            lVar57 = (long)puVar55 - uVar64;
            lVar34 = uVar64 * 4;
            pfVar16 = (float *)(*pauStack_418 + lVar34);
            pfVar41 = (float *)(*pauVar60 + lVar34);
            pfVar31 = (float *)(*pauVar21 + lVar34);
            do {
              fVar65 = *pfVar41;
              if (*pfVar41 <= *pfVar31) {
                fVar65 = *pfVar31;
              }
              *pfVar16 = fVar65;
              lVar57 = lVar57 + -1;
              pfVar16 = pfVar16 + 1;
              pfVar41 = pfVar41 + 1;
              pfVar31 = pfVar31 + 1;
            } while (lVar57 != 0);
          }
        }
LAB_1094686b4:
        fVar65 = (float)uStack_3b8;
LAB_1094686c0:
        pfVar16 = pfStack_290;
        puVar19 = (undefined8 *)0x0;
        pfStack_548 = (float *)0x0;
        puStack_540 = (undefined8 *)0x0;
        puStack_538 = (undefined8 *)0x0;
        lVar57 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
        lVar34 = CONCAT44(uStack_280._4_4_,(float)uStack_280);
        if (lVar57 != 0 || lVar34 != 0) {
          if (lVar57 != 0 && lVar34 != 0) {
            lVar59 = 0;
            if (lVar34 != 0) {
              lVar59 = 0x7fffffffffffffff / lVar34;
            }
            if (lVar59 < lVar57) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10946ace0;
            }
          }
          FUN_1093c3d54(&pfStack_548,lVar34 * lVar57);
          uVar40 = (long)puStack_538 * (long)puStack_540;
          uVar64 = uVar40 + 3;
          if (-1 < (long)uVar40) {
            uVar64 = uVar40;
          }
          uVar45 = uVar64 & 0xfffffffffffffffc;
          if (3 < (long)uVar40) {
            lVar57 = 0;
            pfVar41 = pfStack_548;
            pfVar31 = pfVar16;
            do {
              uVar46 = *(undefined8 *)pfVar31;
              *(undefined8 *)(pfVar41 + 2) = *(undefined8 *)(pfVar31 + 2);
              *(undefined8 *)pfVar41 = uVar46;
              lVar57 = lVar57 + 4;
              pfVar41 = pfVar41 + 4;
              pfVar31 = pfVar31 + 4;
            } while (lVar57 < (long)uVar45);
          }
          uVar47 = (long)uVar40 % 4;
          if (uVar47 != 0 && (long)uVar47 < 0 == SBORROW8(uVar40,uVar45)) {
            if ((7 < uVar47) && (0x1f < (ulong)((long)pfStack_548 - (long)pfVar16))) {
              uVar48 = uVar47 & 0xfffffffffffffff8;
              uVar45 = uVar45 + uVar48;
              pfVar41 = pfVar16 + ((long)uVar64 >> 2) * 4 + 4;
              pfVar31 = pfStack_548 + ((long)uVar64 >> 2) * 4 + 4;
              uVar64 = uVar48;
              do {
                uVar46 = *(undefined8 *)(pfVar41 + -4);
                uVar99 = *(undefined8 *)pfVar41;
                uVar6 = *(undefined8 *)(pfVar41 + 2);
                *(undefined8 *)(pfVar31 + -2) = *(undefined8 *)(pfVar41 + -2);
                *(undefined8 *)(pfVar31 + -4) = uVar46;
                *(undefined8 *)(pfVar31 + 2) = uVar6;
                *(undefined8 *)pfVar31 = uVar99;
                pfVar41 = pfVar41 + 8;
                pfVar31 = pfVar31 + 8;
                uVar64 = uVar64 - 8;
              } while (uVar64 != 0);
              if (uVar47 == uVar48) goto LAB_1094687cc;
            }
            lVar57 = uVar40 - uVar45;
            pfVar41 = pfStack_548 + uVar45;
            pfVar16 = pfVar16 + uVar45;
            do {
              *pfVar41 = *pfVar16;
              lVar57 = lVar57 + -1;
              pfVar41 = pfVar41 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar57 != 0);
          }
LAB_1094687cc:
          puVar19 = (undefined8 *)CONCAT44(uStack_280._4_4_,(float)uStack_280);
        }
        pfVar16 = pfStack_428;
        pfStack_558 = (float *)0x0;
        puStack_550 = (undefined8 *)0x0;
        pfStack_568 = (float *)0x0;
        puStack_560 = (undefined8 *)0x0;
        if (uStack_218._1_1_ == '\x01') {
          fVar72 = uStack_218._4_4_;
          if (0 < (long)uStack_208) goto LAB_109468824;
LAB_1094687fc:
          puVar55 = (undefined8 *)0x0;
        }
        else {
          puVar55 = puVar19;
          if ((long)CONCAT44(uStack_288._4_4_,(float)uStack_288) <= (long)puVar19) {
            puVar55 = (undefined8 *)CONCAT44(uStack_288._4_4_,(float)uStack_288);
          }
          fVar72 = (float)(long)puVar55 / 8388608.0;
          if ((long)uStack_208 < 1) goto LAB_1094687fc;
LAB_109468824:
          fVar72 = ABS(pfStack_210._0_4_) * fVar72;
          lVar57 = CONCAT44(uStack_288._4_4_,(float)uStack_288);
          if (uStack_208 == 1) {
            uVar64 = 0;
            puVar55 = (undefined8 *)0x0;
          }
          else {
            lVar59 = 0;
            lVar49 = 0;
            uVar64 = uStack_208 & 0x7ffffffffffffffe;
            lVar34 = 1;
            pfVar41 = pfStack_290;
            do {
              if (fVar72 < ABS(*pfVar41)) {
                lVar59 = lVar59 + 1;
              }
              if (fVar72 < ABS(pfVar41[lVar57 + 1])) {
                lVar49 = lVar49 + 1;
              }
              pfVar41 = pfVar41 + lVar57 * 2 + 2;
              lVar34 = lVar34 + 2;
            } while (lVar34 - uVar64 != 1);
            puVar55 = (undefined8 *)(lVar49 + lVar59);
            if (uStack_208 == uVar64) goto LAB_1094688d8;
          }
          lVar34 = uStack_208 - uVar64;
          pfVar41 = (float *)((long)pfStack_290 + uVar64 * (lVar57 * 4 + 4));
          do {
            if (fVar72 < ABS(*pfVar41)) {
              puVar55 = (undefined8 *)((long)puVar55 + 1);
            }
            pfVar41 = pfVar41 + lVar57 + 1;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
LAB_1094688d8:
        if (puStack_420 != (undefined8 *)0x0) {
          FUN_1093c61bc(&pfStack_558,puStack_420,1);
          puVar24 = (undefined8 *)((long)puStack_550 + 3);
          if (-1 < (long)puStack_550) {
            puVar24 = puStack_550;
          }
          uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
          if (3 < (long)puStack_550) {
            lVar57 = 0;
            pfVar41 = pfStack_558;
            pfVar31 = pfVar16;
            do {
              uVar46 = *(undefined8 *)pfVar31;
              *(undefined8 *)(pfVar41 + 2) = *(undefined8 *)(pfVar31 + 2);
              *(undefined8 *)pfVar41 = uVar46;
              lVar57 = lVar57 + 4;
              pfVar41 = pfVar41 + 4;
              pfVar31 = pfVar31 + 4;
            } while (lVar57 < (long)uVar64);
          }
          uVar40 = (long)puStack_550 % 4;
          if (uVar40 != 0 && (long)uVar64 <= (long)puStack_550) {
            if ((7 < uVar40) && (0x1f < (ulong)((long)pfStack_558 - (long)pfVar16))) {
              uVar47 = uVar40 & 0xfffffffffffffff8;
              uVar64 = uVar64 + uVar47;
              pfVar41 = pfVar16 + ((long)puVar24 >> 2) * 4 + 4;
              pfVar31 = pfStack_558 + ((long)puVar24 >> 2) * 4 + 4;
              uVar45 = uVar47;
              do {
                uVar46 = *(undefined8 *)(pfVar41 + -4);
                uVar99 = *(undefined8 *)pfVar41;
                uVar6 = *(undefined8 *)(pfVar41 + 2);
                *(undefined8 *)(pfVar31 + -2) = *(undefined8 *)(pfVar41 + -2);
                *(undefined8 *)(pfVar31 + -4) = uVar46;
                *(undefined8 *)(pfVar31 + 2) = uVar6;
                *(undefined8 *)pfVar31 = uVar99;
                pfVar41 = pfVar41 + 8;
                pfVar31 = pfVar31 + 8;
                uVar45 = uVar45 - 8;
              } while (uVar45 != 0);
              if (uVar40 == uVar47) goto LAB_1094689ac;
            }
            lVar57 = (long)puStack_550 - uVar64;
            pfVar41 = pfStack_558 + uVar64;
            pfVar16 = pfVar16 + uVar64;
            do {
              *pfVar41 = *pfVar16;
              lVar57 = lVar57 + -1;
              pfVar41 = pfVar41 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar57 != 0);
          }
        }
LAB_1094689ac:
        uVar64 = (long)puVar19 - (long)puVar55;
        pfVar16 = pfStack_558 + ((long)puStack_550 - uVar64);
        if (((ulong)pfVar16 & 3) == 0) {
          uVar40 = (ulong)-((uint)pfVar16 >> 2) & 3;
          if ((long)uVar64 <= (long)uVar40) {
            uVar40 = uVar64;
          }
          uVar45 = uVar64 - uVar40;
          uVar47 = uVar45 + 3;
          if (-1 < (long)uVar45) {
            uVar47 = uVar45;
          }
        }
        else {
          uVar45 = 0;
          uVar47 = 0;
          uVar40 = uVar64;
        }
        if (0 < (long)uVar40) {
          _bzero(pfVar16,uVar40 << 2);
        }
        lVar57 = (uVar47 & 0xfffffffffffffffc) + uVar40;
        if (3 < (long)uVar45) {
          lVar34 = lVar57;
          if (lVar57 <= (long)(uVar40 + 4)) {
            lVar34 = uVar40 + 4;
          }
          _bzero(pfVar16 + uVar40,(lVar34 + ~uVar40 & 0x3ffffffffffffffc) * 4 + 0x10);
        }
        if (lVar57 < (long)uVar64) {
          _bzero(pfVar16 + ((long)uVar47 >> 2) * 4 + uVar40,
                 (uVar45 - (uVar47 & 0xfffffffffffffffc)) * 4);
        }
        uStack_4e0 = (undefined8 *)0x0;
        ppuStack_4d8 = (undefined8 **)0x0;
        pfStack_500 = pfStack_548;
        uStack_4f8._0_4_ = SUB84(puVar55,0);
        uStack_4f8._4_4_ = (float)((ulong)puVar55 >> 0x20);
        ppfStack_4e8 = &pfStack_548;
        puStack_4d0 = puStack_540;
        if ((pfStack_558 != pfStack_428) || (puStack_550 != puStack_420)) {
          puVar24 = (undefined8 *)((ulong)-((uint)pfStack_558 >> 2) & 3);
          if ((long)puVar55 <= (long)puVar24) {
            puVar24 = puVar55;
          }
          puVar61 = puVar55;
          if (((ulong)pfStack_558 & 3) == 0) {
            puVar61 = puVar24;
          }
          uVar40 = (long)puVar55 - (long)puVar61;
          uVar64 = uVar40 + 3;
          if ((long)puVar61 <= (long)puVar55) {
            uVar64 = uVar40;
          }
          if (0 < (long)puVar61) {
            puVar24 = (undefined8 *)0x0;
            if (((undefined8 *)0x7 < puVar61) &&
               (0x1f < (ulong)((long)pfStack_558 - (long)pfStack_428))) {
              puVar24 = (undefined8 *)((ulong)puVar61 & 0x7ffffffffffffff8);
              pfVar16 = pfStack_428 + 4;
              pfVar41 = pfStack_558 + 4;
              puVar36 = puVar24;
              do {
                uVar46 = *(undefined8 *)(pfVar16 + -4);
                uVar99 = *(undefined8 *)pfVar16;
                uVar6 = *(undefined8 *)(pfVar16 + 2);
                *(undefined8 *)(pfVar41 + -2) = *(undefined8 *)(pfVar16 + -2);
                *(undefined8 *)(pfVar41 + -4) = uVar46;
                *(undefined8 *)(pfVar41 + 2) = uVar6;
                *(undefined8 *)pfVar41 = uVar99;
                pfVar16 = pfVar16 + 8;
                pfVar41 = pfVar41 + 8;
                puVar36 = puVar36 + -1;
              } while (puVar36 != (undefined8 *)0x0);
              if (puVar61 == puVar24) goto LAB_109468b20;
            }
            lVar57 = (long)puVar61 - (long)puVar24;
            pfVar16 = pfStack_428 + (long)puVar24;
            pfVar41 = pfStack_558 + (long)puVar24;
            do {
              *pfVar41 = *pfVar16;
              lVar57 = lVar57 + -1;
              pfVar16 = pfVar16 + 1;
              pfVar41 = pfVar41 + 1;
            } while (lVar57 != 0);
          }
LAB_109468b20:
          lVar57 = (uVar64 & 0xfffffffffffffffc) + (long)puVar61;
          if (3 < (long)uVar40) {
            pfVar16 = pfStack_428 + (long)puVar61;
            pfVar41 = pfStack_558 + (long)puVar61;
            puVar24 = puVar61;
            do {
              uVar46 = *(undefined8 *)pfVar16;
              *(undefined8 *)(pfVar41 + 2) = *(undefined8 *)(pfVar16 + 2);
              *(undefined8 *)pfVar41 = uVar46;
              puVar24 = (undefined8 *)((long)puVar24 + 4);
              pfVar16 = pfVar16 + 4;
              pfVar41 = pfVar41 + 4;
            } while ((long)puVar24 < lVar57);
          }
          if (lVar57 < (long)puVar55) {
            uVar40 = (long)puVar55 - ((long)puVar61 + (uVar64 & 0xfffffffffffffffc));
            if ((7 < uVar40) && (0x1f < (ulong)((long)pfStack_558 - (long)pfStack_428))) {
              uVar45 = uVar40 & 0xfffffffffffffff8;
              lVar57 = lVar57 + uVar45;
              pfVar16 = pfStack_558 + (long)puVar61 + ((long)uVar64 >> 2) * 4 + 4;
              pfVar41 = pfStack_428 + (long)puVar61 + ((long)uVar64 >> 2) * 4 + 4;
              uVar64 = uVar45;
              do {
                uVar46 = *(undefined8 *)(pfVar41 + -4);
                uVar99 = *(undefined8 *)pfVar41;
                uVar6 = *(undefined8 *)(pfVar41 + 2);
                *(undefined8 *)(pfVar16 + -2) = *(undefined8 *)(pfVar41 + -2);
                *(undefined8 *)(pfVar16 + -4) = uVar46;
                *(undefined8 *)(pfVar16 + 2) = uVar6;
                *(undefined8 *)pfVar16 = uVar99;
                pfVar16 = pfVar16 + 8;
                pfVar41 = pfVar41 + 8;
                uVar64 = uVar64 - 8;
              } while (uVar64 != 0);
              if (uVar40 == uVar45) goto LAB_109468bdc;
            }
            lVar34 = (long)puVar55 - lVar57;
            pfVar16 = pfStack_428 + lVar57;
            pfVar41 = pfStack_558 + lVar57;
            do {
              *pfVar41 = *pfVar16;
              lVar34 = lVar34 + -1;
              pfVar16 = pfVar16 + 1;
              pfVar41 = pfVar41 + 1;
            } while (lVar34 != 0);
          }
        }
LAB_109468bdc:
        uStack_4f0._0_4_ = (float)uStack_4f8;
        uStack_4f0._4_4_ = uStack_4f8._4_4_;
        if (puVar55 != (undefined8 *)0x0) {
          FUN_10946c554(&pfStack_500,pfStack_558,puVar55);
        }
        if (puStack_398 != puStack_260) {
          FUN_1093c61bc(&pauStack_3a0,puStack_260,1);
        }
        FUN_10946c680(&pauStack_3a0,&uStack_268,&pfStack_558);
        pauVar60 = pauStack_3a0;
        pauVar21 = pauStack_418;
        puVar24 = puStack_398;
        if (puStack_560 != puStack_398) {
          FUN_1093c61bc(&pfStack_568,puStack_398,1);
          puVar24 = puStack_560;
        }
        puVar61 = (undefined8 *)((long)puVar24 + 3);
        if (-1 < (long)puVar24) {
          puVar61 = puVar24;
        }
        uVar64 = (ulong)puVar61 & 0xfffffffffffffffc;
        if (3 < (long)puVar24) {
          lVar57 = 0;
          pfVar16 = pfStack_568;
          pauVar25 = pauVar21;
          pauVar50 = pauVar60;
          do {
            fVar72 = *(float *)*pauVar25;
            fVar79 = *(float *)(*pauVar25 + 4);
            fVar100 = *(float *)(*pauVar25 + 0xc);
            fVar86 = *(float *)*pauVar50;
            fVar87 = *(float *)(*pauVar50 + 4);
            fVar89 = *(float *)(*pauVar50 + 0xc);
            pfVar16[2] = *(float *)(*pauVar25 + 8) * *(float *)(*pauVar50 + 8);
            pfVar16[3] = fVar100 * fVar89;
            *pfVar16 = fVar72 * fVar86;
            pfVar16[1] = fVar79 * fVar87;
            lVar57 = lVar57 + 4;
            pfVar16 = pfVar16 + 4;
            pauVar25 = pauVar25 + 1;
            pauVar50 = pauVar50 + 1;
          } while (lVar57 < (long)uVar64);
        }
        uVar40 = (long)puVar24 % 4;
        if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar24,uVar64)) {
          if (((7 < uVar40) && (0x1f < (ulong)((long)pfStack_568 - (long)pauVar21))) &&
             (0x1f < (ulong)((long)pfStack_568 - (long)pauVar60))) {
            lVar57 = (long)puVar61 >> 2;
            uVar47 = uVar40 & 0xfffffffffffffff8;
            uVar64 = uVar64 + uVar47;
            pfVar16 = pfStack_568 + lVar57 * 4 + 4;
            pauVar25 = pauVar60 + lVar57 + 1;
            pauVar50 = pauVar21 + lVar57 + 1;
            uVar45 = uVar47;
            do {
              fVar72 = *(float *)pauVar50[-1];
              fVar79 = *(float *)(pauVar50[-1] + 4);
              fVar100 = *(float *)(pauVar50[-1] + 0xc);
              fVar86 = *(float *)*pauVar50;
              fVar87 = *(float *)(*pauVar50 + 4);
              fVar89 = *(float *)(*pauVar50 + 8);
              fVar88 = *(float *)(*pauVar50 + 0xc);
              auVar74 = pauVar25[-1];
              uVar99 = *(undefined8 *)(*pauVar25 + 8);
              uVar46 = *(undefined8 *)*pauVar25;
              pfVar16[-2] = *(float *)(pauVar50[-1] + 8) * auVar74._8_4_;
              pfVar16[-1] = fVar100 * auVar74._12_4_;
              pfVar16[-4] = fVar72 * auVar74._0_4_;
              pfVar16[-3] = fVar79 * auVar74._4_4_;
              pfVar16[2] = fVar89 * (float)uVar99;
              pfVar16[3] = fVar88 * (float)((ulong)uVar99 >> 0x20);
              *pfVar16 = fVar86 * (float)uVar46;
              pfVar16[1] = fVar87 * (float)((ulong)uVar46 >> 0x20);
              pfVar16 = pfVar16 + 8;
              pauVar25 = pauVar25 + 2;
              pauVar50 = pauVar50 + 2;
              uVar45 = uVar45 - 8;
            } while (uVar45 != 0);
            if (uVar40 == uVar47) goto LAB_109468cc4;
          }
          lVar57 = (long)puVar24 - uVar64;
          pfVar16 = pfStack_568 + uVar64;
          pfVar41 = (float *)(*pauVar60 + uVar64 * 4);
          pfVar31 = (float *)(*pauVar21 + uVar64 * 4);
          do {
            *pfVar16 = *pfVar31 * *pfVar41;
            lVar57 = lVar57 + -1;
            pfVar16 = pfVar16 + 1;
            pfVar41 = pfVar41 + 1;
            pfVar31 = pfVar31 + 1;
          } while (lVar57 != 0);
        }
LAB_109468cc4:
        fVar79 = (float)FUN_10946c78c(&pfStack_568);
        puVar24 = puStack_260;
        fVar72 = fVar79 - fVar65;
        if (fVar65 * 0.1 < fVar72) {
          fVar100 = 0.0;
          if (puVar19 != puVar55) goto LAB_109468e60;
          uStack_4f8._0_4_ = 0.0;
          uStack_4f8._4_4_ = 0.0;
          uStack_4f0._0_4_ = 0.0;
          uStack_4f0._4_4_ = 0.0;
          ppfStack_4e8 = (float **)0x0;
          FUN_1093c61bc(&uStack_4f0,puStack_260,1);
          uStack_4f8._0_4_ = (float)uStack_4f0;
          uStack_4f8._4_4_ = uStack_4f0._4_4_;
          if (0 < (long)puStack_560) {
            pfVar16 = (float *)CONCAT44(uStack_4f0._4_4_,(float)uStack_4f0);
            puVar55 = puStack_560;
            piVar38 = (int *)CONCAT44(uStack_268._4_4_,(float)uStack_268);
            do {
              *pfVar16 = *(float *)(*pauStack_418 + (long)*piVar38 * 4) * pfStack_568[*piVar38];
              puVar55 = (undefined8 *)((long)puVar55 - 1);
              pfVar16 = pfVar16 + 1;
              piVar38 = piVar38 + 1;
            } while (puVar55 != (undefined8 *)0x0);
          }
          uStack_4e0 = (undefined8 *)CONCAT44(uStack_4e0._4_4_,fVar79);
          if (puStack_550 != puVar24) {
            FUN_1093c61bc(&pfStack_558,puVar24,1);
            puVar24 = puStack_550;
          }
          puVar55 = (undefined8 *)((long)puVar24 + 3);
          if (-1 < (long)puVar24) {
            puVar55 = puVar24;
          }
          uVar64 = (ulong)puVar55 & 0xfffffffffffffffc;
          if (3 < (long)puVar24) {
            lVar34 = 0;
            lVar57 = 0;
            do {
              pfVar16 = (float *)(CONCAT44(uStack_4f8._4_4_,(float)uStack_4f8) + lVar34);
              fVar100 = *pfVar16;
              fVar86 = pfVar16[1];
              fVar87 = pfVar16[3];
              pfVar41 = (float *)((long)pfStack_558 + lVar34);
              pfVar41[2] = pfVar16[2] / (float)uStack_4e0;
              pfVar41[3] = fVar87 / (float)uStack_4e0;
              *pfVar41 = fVar100 / (float)uStack_4e0;
              pfVar41[1] = fVar86 / (float)uStack_4e0;
              lVar57 = lVar57 + 4;
              lVar34 = lVar34 + 0x10;
            } while (lVar57 < (long)uVar64);
          }
          uVar40 = (long)puVar24 % 4;
          if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar24,uVar64)) {
            lVar57 = CONCAT44(uStack_4f8._4_4_,(float)uStack_4f8);
            if (7 < uVar40) {
              lVar34 = (long)puVar55 >> 2;
              if ((pfStack_558 + (long)puVar24 <= &uStack_4e0 ||
                   (float *)((long)&uStack_4e0 + 4U) <= pfStack_558 + lVar34 * 4) &&
                 ((float *)(lVar57 + (long)puVar24 * 4) <= pfStack_558 + lVar34 * 4 ||
                  pfStack_558 + (long)puVar24 <= (float *)(lVar57 + lVar34 * 0x10))) {
                uVar47 = uVar40 & 0xfffffffffffffff8;
                uVar64 = uVar64 + uVar47;
                pauVar21 = (undefined1 (*) [16])(lVar57 + lVar34 * 0x10 + 0x10);
                pfVar16 = pfStack_558 + lVar34 * 4 + 4;
                uVar45 = uVar47;
                do {
                  fVar100 = *(float *)pauVar21[-1];
                  fVar86 = *(float *)(pauVar21[-1] + 4);
                  fVar87 = *(float *)(pauVar21[-1] + 0xc);
                  auVar74 = *pauVar21;
                  pfVar16[-2] = *(float *)(pauVar21[-1] + 8) / (float)uStack_4e0;
                  pfVar16[-1] = fVar87 / (float)uStack_4e0;
                  pfVar16[-4] = fVar100 / (float)uStack_4e0;
                  pfVar16[-3] = fVar86 / (float)uStack_4e0;
                  pfVar16[2] = auVar74._8_4_ / (float)uStack_4e0;
                  pfVar16[3] = auVar74._12_4_ / (float)uStack_4e0;
                  *pfVar16 = auVar74._0_4_ / (float)uStack_4e0;
                  pfVar16[1] = auVar74._4_4_ / (float)uStack_4e0;
                  pauVar21 = pauVar21 + 2;
                  pfVar16 = pfVar16 + 8;
                  uVar45 = uVar45 - 8;
                } while (uVar45 != 0);
                if (uVar40 == uVar47) goto LAB_109468e10;
              }
            }
            lVar34 = (long)puVar24 - uVar64;
            pfVar16 = pfStack_558 + uVar64;
            pfVar41 = (float *)(lVar57 + uVar64 * 4);
            do {
              *pfVar16 = *pfVar41 / (float)uStack_4e0;
              lVar34 = lVar34 + -1;
              pfVar16 = pfVar16 + 1;
              pfVar41 = pfVar41 + 1;
            } while (lVar34 != 0);
          }
LAB_109468e10:
          _free(CONCAT44(uStack_4f0._4_4_,(float)uStack_4f0));
          uStack_4e0 = (undefined8 *)0x0;
          ppuStack_4d8 = (undefined8 **)0x0;
          pfStack_500 = pfStack_548;
          uStack_4f8._0_4_ = SUB84(puVar19,0);
          uStack_4f8._4_4_ = (float)((ulong)puVar19 >> 0x20);
          ppfStack_4e8 = &pfStack_548;
          puStack_4d0 = puStack_540;
          uStack_4f0._0_4_ = (float)uStack_4f8;
          uStack_4f0._4_4_ = uStack_4f8._4_4_;
          if (puVar19 != (undefined8 *)0x0) {
            FUN_10946cb2c(&pfStack_500,pfStack_558,puStack_550);
          }
          fVar100 = (float)FUN_10946c78c(&pfStack_558);
          fVar100 = ((fVar72 / fVar65) / fVar100) / fVar100;
LAB_109468e60:
          if (0 < (long)puVar19) {
            pfVar16 = pfStack_548 + 0xc;
            pfVar41 = pfStack_548;
            puVar55 = (undefined8 *)0x0;
            do {
              pfVar31 = pfStack_548 + (long)puVar55 * (long)puStack_540;
              puVar24 = (undefined8 *)((long)puVar55 + 1);
              if (puVar55 < (undefined8 *)0x3) {
                fVar86 = *pfStack_428 * *pfVar31;
                if (puVar55 != (undefined8 *)0x0) {
                  puVar61 = (undefined8 *)0x0;
                  do {
                    fVar86 = fVar86 + pfStack_428[(long)puVar61 + 1] * pfVar41[(long)puVar61 + 1];
                    puVar61 = (undefined8 *)((long)puVar61 + 1);
                  } while (puVar55 != puVar61);
                }
              }
              else {
                puVar61 = (undefined8 *)((ulong)puVar24 & 0x7ffffffffffffffc);
                auVar70._0_4_ = *pfVar31 * *pfStack_428;
                auVar70._4_4_ = pfVar31[1] * pfStack_428[1];
                auVar70._8_4_ = pfVar31[2] * pfStack_428[2];
                auVar70._12_4_ = pfVar31[3] * pfStack_428[3];
                if ((undefined8 *)0x6 < puVar55) {
                  puVar36 = (undefined8 *)((ulong)puVar24 & 0x7ffffffffffffff8);
                  auVar74 = *(undefined1 (*) [16])(pfStack_428 + 4);
                  fVar86 = pfVar31[4] * auVar74._0_4_;
                  fVar87 = pfVar31[5] * auVar74._4_4_;
                  fVar89 = pfVar31[6] * auVar74._8_4_;
                  fVar88 = pfVar31[7] * auVar74._12_4_;
                  auVar71 = auVar70;
                  if ((undefined8 *)0xe < puVar55) {
                    puVar33 = (undefined8 *)0x8;
                    pfVar27 = pfVar16;
                    pauVar21 = (undefined1 (*) [16])(pfStack_428 + 0xc);
                    do {
                      auVar74 = pauVar21[-1];
                      auVar76 = *pauVar21;
                      auVar71._0_4_ = auVar70._0_4_ + pfVar27[-4] * auVar74._0_4_;
                      auVar71._4_4_ = auVar70._4_4_ + pfVar27[-3] * auVar74._4_4_;
                      auVar71._8_4_ = auVar70._8_4_ + pfVar27[-2] * auVar74._8_4_;
                      auVar71._12_4_ = auVar70._12_4_ + pfVar27[-1] * auVar74._12_4_;
                      fVar86 = fVar86 + (float)*(undefined8 *)pfVar27 * auVar76._0_4_;
                      fVar87 = fVar87 + (float)((ulong)*(undefined8 *)pfVar27 >> 0x20) *
                                        auVar76._4_4_;
                      fVar89 = fVar89 + (float)*(undefined8 *)(pfVar27 + 2) * auVar76._8_4_;
                      fVar88 = fVar88 + (float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) *
                                        auVar76._12_4_;
                      puVar33 = puVar33 + 1;
                      pauVar21 = pauVar21 + 2;
                      pfVar27 = pfVar27 + 8;
                      auVar70 = auVar71;
                    } while (puVar33 < puVar36);
                  }
                  auVar70._0_4_ = fVar86 + auVar71._0_4_;
                  auVar70._4_4_ = fVar87 + auVar71._4_4_;
                  auVar70._8_4_ = fVar89 + auVar71._8_4_;
                  auVar70._12_4_ = fVar88 + auVar71._12_4_;
                  if (puVar36 < puVar61) {
                    pfVar31 = pfVar31 + (long)puVar36;
                    auVar74 = *(undefined1 (*) [16])(pfStack_428 + (long)puVar36);
                    auVar70._0_4_ = auVar70._0_4_ + *pfVar31 * auVar74._0_4_;
                    auVar70._4_4_ = auVar70._4_4_ + pfVar31[1] * auVar74._4_4_;
                    auVar70._8_4_ = auVar70._8_4_ + pfVar31[2] * auVar74._8_4_;
                    auVar70._12_4_ = auVar70._12_4_ + pfVar31[3] * auVar74._12_4_;
                  }
                }
                auVar74 = NEON_ext(auVar70,auVar70,8,1);
                fVar86 = auVar70._0_4_ + auVar74._0_4_ + auVar70._4_4_ + auVar74._4_4_;
                if (puVar61 <= puVar55) {
                  do {
                    fVar86 = fVar86 + pfStack_428[(long)puVar61] * pfVar41[(long)puVar61];
                    puVar61 = (undefined8 *)((long)puVar61 + 1);
                  } while ((undefined8 *)((long)puVar55 + 1) != puVar61);
                }
              }
              pfStack_558[(long)puVar55] =
                   fVar86 / *(float *)(*pauStack_418 +
                                      (long)*(int *)(CONCAT44(uStack_268._4_4_,(float)uStack_268) +
                                                    (long)puVar55 * 4) * 4);
              pfVar16 = pfVar16 + (long)puStack_540;
              pfVar41 = pfVar41 + (long)puStack_540;
              puVar55 = puVar24;
            } while (puVar24 != puVar19);
          }
          fVar87 = (float)FUN_10946bcac(pfStack_558,puStack_550);
          fVar86 = fVar87 / fVar65;
          if (fVar86 == 0.0) {
            fVar86 = 0.1;
            if (fVar65 <= 0.1) {
              fVar86 = fVar65;
            }
            fVar86 = 1.1754944e-38 / fVar86;
          }
          lVar57 = 0;
          fVar89 = fVar100;
          if (fVar100 <= fStack_360) {
            fVar89 = fStack_360;
          }
          fVar88 = fVar86;
          if (fVar89 <= fVar86) {
            fVar88 = fVar89;
          }
          fStack_360 = fVar87 / fVar79;
          if (fVar88 != 0.0) {
            fStack_360 = fVar88;
          }
          do {
            puVar55 = puStack_410;
            pauVar21 = pauStack_418;
            if (fStack_360 == 0.0) {
              fStack_360 = fVar86 * 0.001;
              if (fVar86 * 0.001 <= 1.1754944e-38) {
                fStack_360 = 1.1754944e-38;
              }
            }
            fVar79 = fStack_360;
            if (puStack_550 != puStack_410) {
              _free();
              if (0 < (long)puVar55) {
                if ((ulong)puVar55 >> 0x3e == 0) {
                  pfVar16 = (float *)((long)puVar55 << 2);
                  _malloc();
                  if (pfVar16 != (float *)0x0) goto LAB_1094690f8;
                }
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
              pfVar16 = (float *)0x0;
LAB_1094690f8:
              puStack_550 = puVar55;
              pfStack_558 = pfVar16;
            }
            puVar24 = (undefined8 *)((long)puVar55 + 3);
            if (-1 < (long)puVar55) {
              puVar24 = puVar55;
            }
            uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
            fVar79 = SQRT(fVar79);
            if (3 < (long)puVar55) {
              lVar34 = 0;
              pfVar16 = pfStack_558;
              pauVar60 = pauVar21;
              do {
                auVar77._0_8_ =
                     CONCAT44(*(float *)(*pauVar60 + 4) * fVar79,*(float *)*pauVar60 * fVar79);
                auVar77._8_4_ = *(float *)(*pauVar60 + 8) * fVar79;
                auVar77._12_4_ = *(float *)(*pauVar60 + 0xc) * fVar79;
                *(long *)(pfVar16 + 2) = auVar77._8_8_;
                *(undefined8 *)pfVar16 = auVar77._0_8_;
                lVar34 = lVar34 + 4;
                pfVar16 = pfVar16 + 4;
                pauVar60 = pauVar60 + 1;
              } while (lVar34 < (long)uVar64);
            }
            uVar40 = (long)puVar55 % 4;
            if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar55,uVar64)) {
              if ((7 < uVar40) && (0x1f < (ulong)((long)pfStack_558 - (long)pauVar21))) {
                uVar47 = uVar40 & 0xfffffffffffffff8;
                uVar64 = uVar64 + uVar47;
                pauVar60 = pauVar21 + ((long)puVar24 >> 2) + 1;
                pfVar16 = pfStack_558 + ((long)puVar24 >> 2) * 4 + 4;
                uVar45 = uVar47;
                do {
                  fVar87 = *(float *)*pauVar60;
                  fVar89 = *(float *)(*pauVar60 + 4);
                  fVar88 = *(float *)(*pauVar60 + 8);
                  fVar95 = *(float *)(*pauVar60 + 0xc);
                  auVar78._0_8_ =
                       CONCAT44(*(float *)(pauVar60[-1] + 4) * fVar79,
                                *(float *)pauVar60[-1] * fVar79);
                  auVar78._8_4_ = *(float *)(pauVar60[-1] + 8) * fVar79;
                  auVar78._12_4_ = *(float *)(pauVar60[-1] + 0xc) * fVar79;
                  *(long *)(pfVar16 + -2) = auVar78._8_8_;
                  *(undefined8 *)(pfVar16 + -4) = auVar78._0_8_;
                  pfVar16[2] = fVar88 * fVar79;
                  pfVar16[3] = fVar95 * fVar79;
                  *pfVar16 = fVar87 * fVar79;
                  pfVar16[1] = fVar89 * fVar79;
                  pauVar60 = pauVar60 + 2;
                  pfVar16 = pfVar16 + 8;
                  uVar45 = uVar45 - 8;
                } while (uVar45 != 0);
                if (uVar40 == uVar47) goto LAB_1094691c8;
              }
              lVar34 = (long)puVar55 - uVar64;
              pfVar16 = (float *)(*pauVar21 + uVar64 * 4);
              pfVar41 = pfStack_558 + uVar64;
              do {
                *pfVar41 = fVar79 * *pfVar16;
                lVar34 = lVar34 + -1;
                pfVar16 = pfVar16 + 1;
                pfVar41 = pfVar41 + 1;
              } while (lVar34 != 0);
            }
LAB_1094691c8:
            if ((long)puVar19 < 1) {
              uVar64 = 0;
              pauVar21 = (undefined1 (*) [16])((long)puStack_538 << 2);
              if ((long)puStack_538 < 1) goto LAB_109469228;
LAB_1094691f8:
              puVar55 = puStack_538;
              if (((ulong)puStack_538 >> 0x3e != 0) ||
                 (pauVar60 = pauVar21, _malloc(), pauVar60 == (undefined1 (*) [16])0x0)) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
            }
            else {
              if (((ulong)puVar19 >> 0x3e != 0) ||
                 (uVar64 = (long)puVar19 * 4, _malloc(), uVar64 == 0)) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
              pauVar21 = (undefined1 (*) [16])((long)puStack_538 << 2);
              if (0 < (long)puStack_538) goto LAB_1094691f8;
LAB_109469228:
              pauVar60 = (undefined1 (*) [16])0x0;
              puVar55 = puStack_538;
            }
            puVar61 = puStack_540;
            pfVar16 = pfStack_548;
            puVar24 = puVar55;
            if ((long)puStack_540 <= (long)puVar55) {
              puVar24 = puStack_540;
            }
            pauVar25 = pauStack_3a0;
            puVar36 = puStack_398;
            if (puStack_398 != puVar24) {
              _free();
              puVar36 = puVar24;
              if ((long)puVar24 < 1) {
                pauVar25 = (undefined1 (*) [16])0x0;
              }
              else {
                pauVar25 = (undefined1 (*) [16])((long)puVar24 << 2);
                _malloc();
                if (pauVar25 == (undefined1 (*) [16])0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10946ace0;
                }
              }
            }
            puStack_398 = puVar36;
            pauStack_3a0 = pauVar25;
            puVar36 = puStack_420;
            pfVar41 = pfStack_428;
            pauVar25 = pauStack_3a0;
            if (0 < (long)puVar24) {
              do {
                *(float *)*pauVar25 = *pfVar16;
                pfVar16 = pfVar16 + (long)puVar61 + 1;
                puVar24 = (undefined8 *)((long)puVar24 - 1);
                pauVar25 = (undefined1 (*) [16])(*pauVar25 + 4);
              } while (puVar24 != (undefined8 *)0x0);
            }
            puVar24 = puVar55;
            if (puVar55 == puStack_420) {
LAB_1094692ec:
              puVar61 = (undefined8 *)((long)puVar36 + 3);
              if (-1 < (long)puVar36) {
                puVar61 = puVar36;
              }
              uVar45 = (ulong)puVar61 & 0xfffffffffffffffc;
              if (3 < (long)puVar36) {
                lVar59 = 0;
                lVar34 = 0;
                do {
                  auVar74 = *(undefined1 (*) [16])((long)pfVar41 + lVar59);
                  *(long *)((long)(*pauVar60 + lVar59) + 8) = auVar74._8_8_;
                  *(long *)(*pauVar60 + lVar59) = auVar74._0_8_;
                  lVar34 = lVar34 + 4;
                  lVar59 = lVar59 + 0x10;
                } while (lVar34 < (long)uVar45);
              }
              uVar40 = (long)puVar36 % 4;
              if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar36,uVar45)) {
LAB_10946932c:
                if ((7 < uVar40) && (0x1f < (ulong)((long)pauVar60 - (long)pfVar41))) {
                  uVar48 = uVar40 & 0xfffffffffffffff8;
                  pauVar25 = (undefined1 (*) [16])(pfVar41 + uVar45 + 4);
                  puVar61 = (undefined8 *)(pauVar60[1] + uVar45 * 4);
                  uVar47 = uVar48;
                  do {
                    auVar74 = pauVar25[-1];
                    auVar76 = *pauVar25;
                    puVar61[-1] = auVar74._8_8_;
                    puVar61[-2] = auVar74._0_8_;
                    puVar61[1] = auVar76._8_8_;
                    *puVar61 = auVar76._0_8_;
                    pauVar25 = pauVar25 + 2;
                    puVar61 = puVar61 + 4;
                    uVar47 = uVar47 - 8;
                  } while (uVar47 != 0);
                  uVar45 = uVar45 + uVar48;
                  if (uVar40 == uVar48) goto LAB_1094693c8;
                }
                lVar34 = (long)puVar36 - uVar45;
                pfVar16 = pfVar41 + uVar45;
                pfVar41 = (float *)(*pauVar60 + uVar45 * 4);
                do {
                  *pfVar41 = *pfVar16;
                  lVar34 = lVar34 + -1;
                  pfVar16 = pfVar16 + 1;
                  pfVar41 = pfVar41 + 1;
                } while (lVar34 != 0);
              }
            }
            else {
              _free(pauVar60);
              puVar24 = puVar36;
              if (0 < (long)puVar36) {
                if ((ulong)puVar36 >> 0x3e == 0) {
                  pauVar60 = (undefined1 (*) [16])((long)puVar36 << 2);
                  _malloc();
                  if (pauVar60 != (undefined1 (*) [16])0x0) goto LAB_1094692ec;
                }
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
              pauVar60 = (undefined1 (*) [16])0x0;
              uVar45 = -(-(long)puVar36 & 0xfffffffffffffffcU);
              uVar40 = (long)puVar36 + (-(long)puVar36 & 0xfffffffffffffffcU);
              if (uVar40 != 0 && (long)uVar45 <= (long)puVar36) goto LAB_10946932c;
            }
LAB_1094693c8:
            puVar61 = puStack_540;
            pfVar41 = pfStack_548;
            pfVar16 = pfStack_558;
            if ((long)puVar55 < 1) {
              puVar61 = (undefined8 *)0x0;
              uVar40 = (long)pauVar60 + ((long)puVar24 - (long)puVar55) * 4;
              if ((uVar40 & 3) != 0) goto LAB_109469834;
LAB_109469988:
              puVar36 = (undefined8 *)((ulong)-((uint)uVar40 >> 2) & 3);
              if ((long)puVar55 <= (long)puVar36) {
                puVar36 = puVar55;
              }
              uVar45 = (long)puVar55 - (long)puVar36;
              uVar47 = uVar45 + 3;
              if (-1 < (long)uVar45) {
                uVar47 = uVar45;
              }
            }
            else {
              puVar36 = (undefined8 *)0x0;
              pfVar31 = pfStack_548 + 4;
              pfVar29 = pfStack_548;
              pfVar27 = pfStack_548;
              puVar33 = puVar55;
              do {
                uVar40 = (ulong)((long)puVar36 < (long)puVar55);
                puVar51 = puVar36;
                if ((long)puVar36 < (long)puVar55) {
                  puVar51 = (undefined8 *)((long)puVar36 + 1);
                }
                if ((long)puVar51 < (long)puVar55) {
                  uVar45 = (long)puVar55 + (-uVar40 - (long)puVar36);
                  if (7 < uVar45 && puStack_540 == (undefined8 *)0x1) {
                    puVar51 = (undefined8 *)((long)puVar51 + (uVar45 & 0xfffffffffffffff8));
                    uVar47 = (long)puVar33 - uVar40 & 0xfffffffffffffff8;
                    pfVar28 = pfVar31 + (long)puVar36 + uVar40;
                    pauVar25 = (undefined1 (*) [16])(pfVar27 + (long)puVar36 + uVar40);
                    do {
                      auVar74 = *pauVar25;
                      auVar76 = pauVar25[1];
                      *(long *)(pfVar28 + -2) = auVar74._8_8_;
                      *(long *)(pfVar28 + -4) = auVar74._0_8_;
                      *(long *)(pfVar28 + 2) = auVar76._8_8_;
                      *(long *)pfVar28 = auVar76._0_8_;
                      pfVar28 = pfVar28 + 8;
                      uVar47 = uVar47 - 8;
                      pauVar25 = pauVar25 + 2;
                    } while (uVar47 != 0);
                    if (uVar45 == (uVar45 & 0xfffffffffffffff8)) goto LAB_1094693f0;
                  }
                  lVar59 = (long)puVar55 - (long)puVar51;
                  lVar34 = (long)puStack_540 * 4 * (long)puVar51;
                  pfVar28 = pfVar29 + (long)puVar51;
                  do {
                    *pfVar28 = *(float *)((long)pfVar27 + lVar34);
                    lVar34 = lVar34 + (long)puStack_540 * 4;
                    lVar59 = lVar59 + -1;
                    pfVar28 = pfVar28 + 1;
                  } while (lVar59 != 0);
                }
LAB_1094693f0:
                puVar36 = (undefined8 *)((long)puVar36 + 1);
                puVar33 = (undefined8 *)((long)puVar33 - 1);
                pfVar31 = pfVar31 + (long)puStack_540;
                pfVar27 = pfVar27 + 1;
                pfVar29 = pfVar29 + (long)puStack_540;
              } while (puVar36 != puVar55);
              puVar36 = (undefined8 *)0x0;
              lVar62 = (long)puStack_540 * 4;
              lVar34 = lVar62 + 4;
              pauVar25 = (undefined1 (*) [16])(pfStack_548 + 1);
              lVar49 = CONCAT44(uStack_268._4_4_,(float)uStack_268);
              lVar59 = (long)pfStack_548 + (long)pauVar21;
              pfStack_5c0 = pfStack_548;
              puStack_5e0 = (undefined8 *)(uVar64 + 4);
              pauStack_5d0 = pauVar25;
              puVar33 = puVar55;
              do {
                puVar33 = (undefined8 *)((long)puVar33 - 1);
                iVar15 = *(int *)(lVar49 + (long)puVar36 * 4);
                if (pfVar16[iVar15] == 0.0) break;
                uVar45 = (long)puVar55 - (long)puVar36;
                lVar37 = uVar64 + ((long)puVar19 - uVar45) * 4;
                uVar40 = uVar45;
                if (((uVar64 & 3) == 0) &&
                   (uVar40 = (ulong)-((uint)lVar37 >> 2) & 3, (long)uVar45 <= (long)uVar40)) {
                  uVar40 = uVar45;
                }
                uVar48 = uVar45 - uVar40;
                uVar47 = uVar48 + 3;
                if (-1 < (long)uVar48) {
                  uVar47 = uVar48;
                }
                if (0 < (long)uVar40) {
                  _bzero(lVar37,uVar40 << 2);
                }
                lVar54 = (uVar47 & 0xfffffffffffffffc) + uVar40;
                if (3 < (long)uVar48) {
                  lVar1 = lVar54;
                  if (lVar54 <= (long)(uVar40 + 4)) {
                    lVar1 = uVar40 + 4;
                  }
                  _bzero(lVar37 + uVar40 * 4,(lVar1 + ~uVar40 & 0x3ffffffffffffffc) * 4 + 0x10);
                }
                if (lVar54 < (long)uVar45) {
                  _bzero(lVar37 + ((long)uVar47 >> 2) * 0x10 + uVar40 * 4,
                         (uVar48 - (uVar47 & 0xfffffffffffffffc)) * 4);
                }
                lVar37 = 0;
                *(float *)(uVar64 + (long)puVar36 * 4) = pfVar16[iVar15];
                fVar79 = 0.0;
                pfVar31 = pfStack_5c0;
                pauVar50 = pauStack_5d0;
                puVar51 = puStack_5e0;
                puVar52 = puVar33;
                puVar53 = puVar36;
                do {
                  fVar87 = pfVar41[(long)((long)puVar53 * (long)puVar61 + (long)puVar53)];
                  fVar89 = *(float *)(uVar64 + (long)puVar53 * 4);
                  if (fVar89 == 0.0) {
                    fVar95 = -1.0;
                    if (fVar87 <= 0.0) {
                      fVar95 = 1.0;
                    }
                    fVar88 = 0.0;
                  }
                  else if (fVar87 == 0.0) {
                    fVar88 = 1.0;
                    if (0.0 <= fVar89) {
                      fVar88 = -1.0;
                    }
                    fVar95 = 0.0;
                  }
                  else if (ABS(fVar87) <= ABS(fVar89)) {
                    fVar98 = -fVar87 / fVar89;
                    fVar95 = SQRT(fVar98 * fVar98 + 1.0);
                    fVar88 = -fVar95;
                    if (0.0 <= fVar89) {
                      fVar88 = fVar95;
                    }
                    fVar88 = -1.0 / fVar88;
                    fVar95 = -(fVar98 * fVar88);
                  }
                  else {
                    fVar88 = fVar89 / -fVar87;
                    fVar98 = SQRT(fVar88 * fVar88 + 1.0);
                    fVar95 = -fVar98;
                    if (fVar87 <= 0.0) {
                      fVar95 = fVar98;
                    }
                    fVar95 = 1.0 / fVar95;
                    fVar88 = -(fVar88 * fVar95);
                  }
                  pfVar41[(long)((long)puVar53 * (long)puVar61 + (long)puVar53)] =
                       fVar89 * fVar88 + fVar87 * fVar95;
                  fVar87 = *(float *)(*pauVar60 + (long)puVar53 * 4);
                  *(float *)(*pauVar60 + (long)puVar53 * 4) = fVar79 * fVar88 + fVar87 * fVar95;
                  puVar53 = (undefined8 *)((long)puVar53 + 1);
                  if ((long)puVar53 < (long)puVar55) {
                    uVar40 = (long)puVar55 + (~(ulong)puVar36 - lVar37);
                    fVar89 = -fVar88;
                    puVar26 = puVar53;
                    if ((3 < uVar40) &&
                       (((ulong)(lVar59 + lVar62 * (long)puVar36 + lVar62 * lVar37) <=
                         (ulong)((long)(uVar64 + 4) + ((long)puVar36 + lVar37) * 4) ||
                        (*pauVar21 + uVar64 <= *pauVar25 + lVar34 * lVar37 + lVar34 * (long)puVar36)
                        ))) {
                      uVar45 = (ulong)puVar52 & 0xfffffffffffffffc;
                      puVar26 = (undefined8 *)((long)puVar53 + (uVar40 & 0xfffffffffffffffc));
                      pauVar30 = pauVar50;
                      puVar32 = puVar51;
                      do {
                        auVar74 = *pauVar30;
                        fVar98 = (float)*puVar32;
                        fVar105 = (float)((ulong)*puVar32 >> 0x20);
                        fVar101 = (float)puVar32[1];
                        fVar106 = (float)((ulong)puVar32[1] >> 0x20);
                        puVar32[1] = CONCAT44(fVar106 * fVar95 + auVar74._12_4_ * fVar89,
                                              fVar101 * fVar95 + auVar74._8_4_ * fVar89);
                        *puVar32 = CONCAT44(fVar105 * fVar95 + auVar74._4_4_ * fVar89,
                                            fVar98 * fVar95 + auVar74._0_4_ * fVar89);
                        *(ulong *)(*pauVar30 + 8) =
                             CONCAT44(fVar106 * fVar88 + auVar74._12_4_ * fVar95,
                                      fVar101 * fVar88 + auVar74._8_4_ * fVar95);
                        *(ulong *)*pauVar30 =
                             CONCAT44(fVar105 * fVar88 + auVar74._4_4_ * fVar95,
                                      fVar98 * fVar88 + auVar74._0_4_ * fVar95);
                        uVar45 = uVar45 - 4;
                        pauVar30 = pauVar30 + 1;
                        puVar32 = puVar32 + 2;
                      } while (uVar45 != 0);
                      if (uVar40 == (uVar40 & 0xfffffffffffffffc)) goto LAB_109469654;
                    }
                    lVar54 = (long)puVar55 - (long)puVar26;
                    pfVar27 = (float *)(uVar64 + (long)puVar26 * 4);
                    pfVar29 = pfVar31 + (long)puVar26;
                    do {
                      fVar98 = *pfVar29;
                      fVar105 = *pfVar27;
                      *pfVar27 = fVar95 * fVar105 + fVar98 * fVar89;
                      *pfVar29 = fVar88 * fVar105 + fVar98 * fVar95;
                      lVar54 = lVar54 + -1;
                      pfVar27 = pfVar27 + 1;
                      pfVar29 = pfVar29 + 1;
                    } while (lVar54 != 0);
                  }
LAB_109469654:
                  lVar37 = lVar37 + 1;
                  puVar52 = (undefined8 *)((long)puVar52 + -1);
                  fVar79 = fVar79 * fVar95 - fVar87 * fVar88;
                  puVar51 = (undefined8 *)((long)puVar51 + 4);
                  pauVar50 = (undefined1 (*) [16])(*pauVar50 + lVar34);
                  pfVar31 = pfVar31 + (long)puVar61;
                } while (puVar53 != puVar55);
                puVar36 = (undefined8 *)((long)puVar36 + 1);
                puStack_5e0 = (undefined8 *)((long)puStack_5e0 + 4);
                pauStack_5d0 = (undefined1 (*) [16])(*pauStack_5d0 + lVar34);
                pfStack_5c0 = pfStack_5c0 + (long)puVar61;
              } while (puVar36 != puVar55);
              puVar36 = (undefined8 *)0x0;
              do {
                puVar61 = puVar36;
                if (*(float *)(uVar64 + (long)puVar36 * 4) == 0.0) break;
                puVar36 = (undefined8 *)((long)puVar36 + 1);
                puVar61 = puVar55;
              } while (puVar55 != puVar36);
              puVar55 = (undefined8 *)((long)puVar55 - (long)puVar61);
              uVar40 = (long)pauVar60 + ((long)puVar24 - (long)puVar55) * 4;
              if ((uVar40 & 3) == 0) goto LAB_109469988;
LAB_109469834:
              uVar45 = 0;
              uVar47 = 0;
              puVar36 = puVar55;
            }
            if (0 < (long)puVar36) {
              _bzero(uVar40,(long)puVar36 << 2);
            }
            lVar34 = (uVar47 & 0xfffffffffffffffc) + (long)puVar36;
            if (3 < (long)uVar45) {
              lVar59 = lVar34;
              if (lVar34 <= (long)puVar36 + 4) {
                lVar59 = (long)puVar36 + 4;
              }
              _bzero(uVar40 + (long)puVar36 * 4,
                     (lVar59 + ~(ulong)puVar36 & 0x3ffffffffffffffc) * 4 + 0x10);
            }
            if (lVar34 < (long)puVar55) {
              _bzero(uVar40 + ((long)uVar47 >> 2) * 0x10 + (long)puVar36 * 4,
                     (uVar45 - (uVar47 & 0xfffffffffffffffc)) * 4);
            }
            uStack_4e0 = (undefined8 *)0x0;
            ppuStack_4d8 = (undefined8 **)0x0;
            pfStack_500 = pfStack_548;
            uStack_4f8._0_4_ = SUB84(puVar61,0);
            uStack_4f8._4_4_ = (float)((ulong)puVar61 >> 0x20);
            ppfStack_4e8 = &pfStack_548;
            puStack_4d0 = puStack_540;
            uStack_4f0._0_4_ = (float)uStack_4f8;
            uStack_4f0._4_4_ = uStack_4f8._4_4_;
            if (puVar61 == (undefined8 *)0x0) {
              puVar55 = puStack_538;
              if ((long)puStack_540 <= (long)puStack_538) {
                puVar55 = puStack_540;
              }
              if (puVar19 == puVar55) goto LAB_109469908;
LAB_1094699cc:
              puVar61 = puStack_538;
              puVar36 = puStack_540;
              pfVar16 = pfStack_548;
              _free(uVar64);
              if ((long)puVar55 < 1) {
                uVar64 = 0;
                pauVar21 = pauStack_3a0;
                puVar61 = puStack_398;
                puVar55 = puStack_260;
                if (puStack_398 != puStack_260) goto LAB_10946992c;
                goto joined_r0x000109469a6c;
              }
              if ((ulong)puVar55 >> 0x3e == 0) {
                uVar64 = (long)puVar55 << 2;
                _malloc();
                if (uVar64 != 0) goto LAB_1094699f4;
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10946ace0;
            }
            FUN_10946ce10(&pfStack_500,pauVar60,puVar61);
            puVar55 = puStack_538;
            if ((long)puStack_540 <= (long)puStack_538) {
              puVar55 = puStack_540;
            }
            if (puVar19 != puVar55) goto LAB_1094699cc;
LAB_109469908:
            puVar61 = puStack_538;
            pfVar16 = pfStack_548;
            puVar36 = puStack_540;
            if ((long)puVar55 < 1) {
              pauVar21 = pauStack_3a0;
              puVar61 = puStack_398;
              puVar55 = puStack_260;
              if (puStack_398 != puStack_260) goto LAB_10946992c;
joined_r0x000109469a6c:
              puStack_398 = puVar61;
              pauStack_3a0 = pauVar21;
              if (pauStack_3a0 != pauVar60) goto LAB_109469b30;
LAB_109469a70:
              puVar61 = puStack_260;
              pauVar21 = pauStack_3a0;
              if (puVar55 != puVar24) goto LAB_109469b30;
              if (0 < (long)puStack_260) {
                lVar34 = 1;
                _calloc(1,puStack_260);
                if (lVar34 == 0) goto LAB_10946aa9c;
                lVar59 = 0;
                do {
                  lVar49 = lVar59 + 1;
                  if (*(char *)(lVar34 + lVar59) != '\x01') {
                    *(undefined1 *)(lVar34 + lVar59) = 1;
                    lVar62 = (long)*(int *)(CONCAT44(uStack_268._4_4_,(float)uStack_268) +
                                           lVar59 * 4);
                    if (lVar59 != lVar62) {
                      uVar66 = *(undefined4 *)(*pauVar21 + lVar59 * 4);
                      do {
                        uVar73 = *(undefined4 *)(*pauVar21 + lVar62 * 4);
                        *(undefined4 *)(*pauVar21 + lVar62 * 4) = uVar66;
                        *(undefined4 *)(*pauVar21 + lVar59 * 4) = uVar73;
                        *(undefined1 *)(lVar34 + lVar62) = 1;
                        lVar62 = (long)*(int *)(CONCAT44(uStack_268._4_4_,(float)uStack_268) +
                                               lVar62 * 4);
                        uVar66 = uVar73;
                      } while (lVar59 != lVar62);
                    }
                  }
                  lVar59 = lVar49;
                } while (lVar49 < (long)puVar61);
              }
              _free();
            }
            else {
LAB_1094699f4:
              puVar33 = (undefined8 *)0x0;
              do {
                *(float *)(uVar64 + (long)puVar33 * 4) = *pfVar16;
                puVar33 = (undefined8 *)((long)puVar33 + 1);
                pfVar16 = pfVar16 + (long)puVar36 + 1;
              } while (puVar55 != puVar33);
              if ((long)puStack_540 <= (long)puVar61) {
                puVar61 = puStack_540;
              }
              if (0 < (long)puVar61) {
                puVar55 = (undefined8 *)0x0;
                pfVar16 = pfStack_548;
                do {
                  *pfVar16 = *(float *)(*pauStack_3a0 + (long)puVar55 * 4);
                  puVar55 = (undefined8 *)((long)puVar55 + 1);
                  pfVar16 = pfVar16 + (long)puStack_540 + 1;
                } while (puVar61 != puVar55);
              }
              pauVar21 = pauStack_3a0;
              puVar61 = puStack_398;
              puVar55 = puStack_260;
              if (puStack_398 == puStack_260) goto joined_r0x000109469a6c;
LAB_10946992c:
              puVar55 = puStack_260;
              _free(pauStack_3a0);
              if (0 < (long)puVar55) {
                if ((ulong)puVar55 >> 0x3e == 0) {
                  pauVar21 = (undefined1 (*) [16])((long)puVar55 << 2);
                  _malloc();
                  puVar61 = puVar55;
                  if (pauVar21 != (undefined1 (*) [16])0x0) goto joined_r0x000109469a6c;
                }
LAB_10946aa9c:
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
              pauStack_3a0 = (undefined1 (*) [16])0x0;
              puStack_398 = puVar55;
              if (pauVar60 == (undefined1 (*) [16])0x0) goto LAB_109469a70;
LAB_109469b30:
              if (0 < (long)puVar24) {
                piVar38 = (int *)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                pauVar21 = pauVar60;
                do {
                  *(undefined4 *)(*pauStack_3a0 + (long)*piVar38 * 4) = *(undefined4 *)*pauVar21;
                  puVar24 = (undefined8 *)((long)puVar24 - 1);
                  piVar38 = piVar38 + 1;
                  pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
                } while (puVar24 != (undefined8 *)0x0);
              }
            }
            _free(pauVar60);
            puVar55 = puStack_398;
            pauVar60 = pauStack_3a0;
            pauVar21 = pauStack_418;
            if (puStack_560 == puStack_398) {
              puVar24 = (undefined8 *)((long)puStack_398 + 3);
              if (-1 < (long)puStack_398) {
                puVar24 = puVar55;
              }
            }
            else {
              _free();
              if (0 < (long)puVar55) {
                if ((ulong)puVar55 >> 0x3e == 0) {
                  pfVar16 = (float *)((long)puVar55 << 2);
                  _malloc();
                  if (pfVar16 != (float *)0x0) goto LAB_109469bd0;
                }
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10946ace0;
              }
              pfVar16 = (float *)0x0;
LAB_109469bd0:
              puVar24 = (undefined8 *)((long)puVar55 + 3);
              pfStack_568 = pfVar16;
              puStack_560 = puVar55;
              if (-1 < (long)puVar55) {
                puVar24 = puVar55;
              }
            }
            uVar40 = (ulong)puVar24 & 0xfffffffffffffffc;
            if (3 < (long)puVar55) {
              lVar34 = 0;
              pfVar16 = pfStack_568;
              pauVar25 = pauVar21;
              pauVar50 = pauVar60;
              do {
                fVar79 = *(float *)*pauVar25;
                fVar87 = *(float *)(*pauVar25 + 4);
                fVar89 = *(float *)(*pauVar25 + 0xc);
                fVar88 = *(float *)*pauVar50;
                fVar95 = *(float *)(*pauVar50 + 4);
                fVar98 = *(float *)(*pauVar50 + 0xc);
                pfVar16[2] = *(float *)(*pauVar25 + 8) * *(float *)(*pauVar50 + 8);
                pfVar16[3] = fVar89 * fVar98;
                *pfVar16 = fVar79 * fVar88;
                pfVar16[1] = fVar87 * fVar95;
                lVar34 = lVar34 + 4;
                pfVar16 = pfVar16 + 4;
                pauVar25 = pauVar25 + 1;
                pauVar50 = pauVar50 + 1;
              } while (lVar34 < (long)uVar40);
            }
            uVar45 = (long)puVar55 - uVar40;
            if (uVar45 != 0 && (long)uVar40 <= (long)puVar55) {
              if (((7 < uVar45) && (0x1f < (ulong)((long)pfStack_568 - (long)pauVar21))) &&
                 (0x1f < (ulong)((long)pfStack_568 - (long)pauVar60))) {
                lVar34 = (long)puVar24 >> 2;
                uVar48 = uVar45 & 0xfffffffffffffff8;
                uVar40 = uVar40 + uVar48;
                pfVar16 = pfStack_568 + lVar34 * 4 + 4;
                pauVar25 = pauVar60 + lVar34 + 1;
                pauVar50 = pauVar21 + lVar34 + 1;
                uVar47 = uVar48;
                do {
                  fVar79 = *(float *)pauVar50[-1];
                  fVar87 = *(float *)(pauVar50[-1] + 4);
                  fVar89 = *(float *)(pauVar50[-1] + 0xc);
                  fVar88 = *(float *)*pauVar50;
                  fVar95 = *(float *)(*pauVar50 + 4);
                  fVar98 = *(float *)(*pauVar50 + 8);
                  fVar105 = *(float *)(*pauVar50 + 0xc);
                  auVar74 = pauVar25[-1];
                  uVar99 = *(undefined8 *)(*pauVar25 + 8);
                  uVar46 = *(undefined8 *)*pauVar25;
                  pfVar16[-2] = *(float *)(pauVar50[-1] + 8) * auVar74._8_4_;
                  pfVar16[-1] = fVar89 * auVar74._12_4_;
                  pfVar16[-4] = fVar79 * auVar74._0_4_;
                  pfVar16[-3] = fVar87 * auVar74._4_4_;
                  pfVar16[2] = fVar98 * (float)uVar99;
                  pfVar16[3] = fVar105 * (float)((ulong)uVar99 >> 0x20);
                  *pfVar16 = fVar88 * (float)uVar46;
                  pfVar16[1] = fVar95 * (float)((ulong)uVar46 >> 0x20);
                  pfVar16 = pfVar16 + 8;
                  pauVar25 = pauVar25 + 2;
                  pauVar50 = pauVar50 + 2;
                  uVar47 = uVar47 - 8;
                } while (uVar47 != 0);
                if (uVar45 == uVar48) goto LAB_109469c54;
              }
              lVar34 = (long)puVar55 - uVar40;
              pfVar16 = (float *)(*pauVar60 + uVar40 * 4);
              pfVar41 = (float *)(*pauVar21 + uVar40 * 4);
              pfVar31 = pfStack_568 + uVar40;
              do {
                *pfVar31 = *pfVar41 * *pfVar16;
                lVar34 = lVar34 + -1;
                pfVar16 = pfVar16 + 1;
                pfVar41 = pfVar41 + 1;
                pfVar31 = pfVar31 + 1;
              } while (lVar34 != 0);
            }
LAB_109469c54:
            fVar79 = (float)FUN_10946c78c(&pfStack_568);
            puVar55 = puStack_560;
            if (ABS(fVar79 - fVar65) <= fVar65 * 0.1) goto LAB_109469e88;
            lVar57 = lVar57 + 1;
            fVar87 = fVar79 - fVar65;
            if ((((fVar100 == 0.0) && (fVar87 <= fVar72)) && (fVar72 < 0.0)) || (lVar57 == 10))
            goto LAB_109469e88;
            if (puStack_550 != puStack_260) {
              FUN_1093c61bc(&pfStack_558,puStack_260,1);
            }
            if (0 < (long)puVar55) {
              piVar38 = (int *)CONCAT44(uStack_268._4_4_,(float)uStack_268);
              pfVar16 = pfStack_558;
              do {
                *pfVar16 = *(float *)(*pauStack_418 + (long)*piVar38 * 4) *
                           (pfStack_568[*piVar38] / fVar79);
                puVar55 = (undefined8 *)((long)puVar55 - 1);
                piVar38 = piVar38 + 1;
                pfVar16 = pfVar16 + 1;
              } while (puVar55 != (undefined8 *)0x0);
            }
            if (0 < (long)puVar19) {
              lVar34 = (long)puStack_540 * 4 + 4;
              pfVar16 = pfStack_558 + 5;
              pauVar21 = (undefined1 (*) [16])(pfStack_548 + 5);
              pfVar41 = pfStack_548;
              puVar24 = (undefined8 *)0x0;
              puVar55 = puVar19;
              do {
                puVar55 = (undefined8 *)((long)puVar55 + -1);
                fVar72 = pfStack_558[(long)puVar24] / *(float *)(uVar64 + (long)puVar24 * 4);
                pfStack_558[(long)puVar24] = fVar72;
                puVar61 = (undefined8 *)((long)puVar24 + 1);
                if ((long)puVar61 < (long)puVar19) {
                  uVar40 = (long)puVar19 + ~(ulong)puVar24;
                  puVar36 = puVar61;
                  if ((7 < uVar40) &&
                     (((float *)((long)pfStack_548 +
                                (long)puStack_540 * 4 * (long)puVar24 + (long)puVar19 * 4) <=
                       pfStack_558 + (long)puVar24 + 1 ||
                      (pfStack_558 + (long)puVar19 <=
                       (float *)((long)pfStack_548 + lVar34 * (long)puVar24 + 4))))) {
                    uVar45 = (ulong)puVar55 & 0xfffffffffffffff8;
                    puVar36 = (undefined8 *)((long)puVar61 + (uVar40 & 0xfffffffffffffff8));
                    pauVar60 = pauVar21;
                    pfVar31 = pfVar16;
                    do {
                      auVar74 = pauVar60[-1];
                      auVar76 = *pauVar60;
                      auVar93._0_8_ =
                           CONCAT44(pfVar31[1] - auVar76._4_4_ * fVar72,
                                    *pfVar31 - auVar76._0_4_ * fVar72);
                      auVar93._8_4_ = pfVar31[2] - auVar76._8_4_ * fVar72;
                      auVar93._12_4_ = pfVar31[3] - auVar76._12_4_ * fVar72;
                      *(ulong *)(pfVar31 + -2) =
                           CONCAT44((float)((ulong)*(undefined8 *)(pfVar31 + -2) >> 0x20) -
                                    auVar74._12_4_ * fVar72,
                                    (float)*(undefined8 *)(pfVar31 + -2) - auVar74._8_4_ * fVar72);
                      *(ulong *)(pfVar31 + -4) =
                           CONCAT44((float)((ulong)*(undefined8 *)(pfVar31 + -4) >> 0x20) -
                                    auVar74._4_4_ * fVar72,
                                    (float)*(undefined8 *)(pfVar31 + -4) - auVar74._0_4_ * fVar72);
                      *(long *)(pfVar31 + 2) = auVar93._8_8_;
                      *(undefined8 *)pfVar31 = auVar93._0_8_;
                      pfVar31 = pfVar31 + 8;
                      pauVar60 = pauVar60 + 2;
                      uVar45 = uVar45 - 8;
                    } while (uVar45 != 0);
                    if (uVar40 == (uVar40 & 0xfffffffffffffff8)) goto LAB_109469d34;
                  }
                  lVar59 = (long)puVar19 - (long)puVar36;
                  pfVar31 = pfStack_558 + (long)puVar36;
                  pfVar27 = pfVar41 + (long)puVar36;
                  do {
                    *pfVar31 = *pfVar31 - fVar72 * *pfVar27;
                    lVar59 = lVar59 + -1;
                    pfVar31 = pfVar31 + 1;
                    pfVar27 = pfVar27 + 1;
                  } while (lVar59 != 0);
                }
LAB_109469d34:
                pfVar16 = pfVar16 + 1;
                pauVar21 = (undefined1 (*) [16])(*pauVar21 + lVar34);
                pfVar41 = pfVar41 + (long)puStack_540;
                puVar24 = puVar61;
              } while (puVar61 != puVar19);
            }
            fVar72 = (float)FUN_10946c78c(&pfStack_558);
            bVar11 = false;
            bVar12 = true;
            bVar14 = false;
            if (fVar100 < fStack_360) {
              bVar11 = false;
              bVar12 = false;
              bVar14 = true;
              if (!NAN(fVar87)) {
                bVar11 = fVar87 < 0.0;
                bVar12 = fVar87 == 0.0;
                bVar14 = false;
              }
            }
            fVar79 = fStack_360;
            if (bVar12 || bVar11 != bVar14) {
              fVar79 = fVar100;
            }
            fVar100 = fVar79;
            bVar11 = false;
            if ((fStack_360 < fVar86) && (bVar11 = false, !NAN(fVar87))) {
              bVar11 = fVar87 < 0.0;
            }
            fVar79 = fStack_360;
            if (!bVar11) {
              fVar79 = fVar86;
            }
            fVar86 = fVar79;
            fStack_360 = fStack_360 + ((fVar87 / fVar65) / fVar72) / fVar72;
            if (fStack_360 <= fVar100) {
              fStack_360 = fVar100;
            }
            _free(uVar64);
            fVar72 = fVar87;
          } while( true );
        }
        fStack_360 = 0.0;
        goto LAB_109469e9c;
      }
LAB_10946a978:
      uVar66 = 0;
LAB_10946a97c:
      bVar11 = false;
      uStack_358 = CONCAT44(uStack_358._4_4_,uVar66);
      goto LAB_10946a984;
    }
LAB_109467530:
    uStack_358 = CONCAT44(uStack_358._4_4_,3);
LAB_109467538:
    uStack_35c = 1;
    dVar67 = (double)(float)*(long *)pfStack_5b0;
    dVar85 = (double)(float)((ulong)*(long *)pfStack_5b0 >> 0x20);
    dVar103 = (double)pfStack_5b0[2];
    uVar46 = *(undefined8 *)(pfStack_5b0 + ((long)puStack_5a8 - 3));
    fVar102 = pfStack_5b0[(long)puStack_5a8 - 1];
    dVar68 = dVar103 * dVar103 + dVar67 * dVar67 + dVar85 * dVar85;
    if (dVar68 == 0.0) {
      uStack_278 = 1.0;
      auVar81 = ZEXT216(0);
      uStack_280 = 0.0;
    }
    else {
      dVar68 = SQRT(dVar68);
      auVar74 = ___sincos_stret(dVar68 * 0.5);
      uStack_278 = auVar74._8_8_;
      dVar84 = auVar74._0_8_;
      auVar81._0_8_ = (dVar67 * dVar84) / dVar68;
      auVar81._8_8_ = (dVar85 * dVar84) / dVar68;
      uStack_280 = (dVar84 * dVar103) / dVar68;
    }
    dVar67 = auVar81._0_8_;
    uStack_288 = auVar81._8_8_;
    dVar68 = SQRT(dVar67 * dVar67 + uStack_280 * uStack_280 +
                  uStack_288 * uStack_288 + uStack_278 * uStack_278);
    pfStack_290 = (float *)(dVar67 / dVar68);
    uStack_288 = uStack_288 / dVar68;
    uStack_280 = uStack_280 / dVar68;
    uStack_278 = uStack_278 / dVar68;
    puStack_260 = (undefined8 *)(double)fVar102;
    uStack_270 = (double)(float)uVar46;
    uStack_268 = (double)(float)((ulong)uVar46 >> 0x20);
    func_0x00010937fbc4(&pfStack_500,&pfStack_290);
    ppuStack_228 = ppuStack_4d8;
    uStack_230 = uStack_4e0;
    uStack_218 = uStack_4c8;
    puStack_220 = puStack_4d0;
    pfStack_210 = pfStack_4c0;
    ppuStack_248 = uStack_4f8;
    fStack_250 = SUB84(pfStack_500,0);
    fStack_24c = (float)((ulong)pfStack_500 >> 0x20);
    fStack_238 = SUB84(ppfStack_4e8,0);
    fStack_234 = (float)((ulong)ppfStack_4e8 >> 0x20);
    uStack_240 = uStack_4f0;
    _free(CONCAT44(uStack_36c,uStack_370));
    _free(pauStack_380);
    _free(pauStack_390);
    _free(pauStack_3a0);
    _free(puStack_3b0);
    _free(pauStack_418);
    _free(pfStack_428);
    _free(puStack_438);
    _free(CONCAT44(fStack_454,fStack_458));
    _free(puStack_470);
    _free(pfStack_5b0);
    puVar55 = puStack_598;
    puVar19 = puStack_590;
    if (puStack_598 != (undefined8 *)0x0) {
      for (; puVar19 != puVar55; puVar19 = puVar19 + -0x14) {
        _free(puVar19[-3]);
      }
      puStack_590 = puVar55;
      _free(puStack_598);
    }
    param_1[1] = (long)uStack_288;
    *param_1 = (long)pfStack_290;
    param_1[3] = (long)uStack_278;
    param_1[2] = (long)uStack_280;
    param_1[5] = (long)uStack_268;
    *pdVar43 = uStack_270;
    param_1[6] = (long)puStack_260;
    param_1[0xd] = (long)ppuStack_228;
    param_1[0xc] = (long)uStack_230;
    param_1[0xf] = uStack_218;
    param_1[0xe] = (long)puStack_220;
    param_1[0x10] = (long)pfStack_210;
    param_1[9] = (long)ppuStack_248;
    *plVar44 = CONCAT44(fStack_24c,fStack_250);
    param_1[0xb] = CONCAT44(fStack_234,fStack_238);
    param_1[10] = (long)uStack_240;
LAB_109467700:
    FUN_10946af98(param_3,param_4);
    if ((0.0 < param_2) && (param_8 != 0)) {
      pcVar35 = (char *)*param_4;
      pcVar2 = (char *)param_4[1];
      if (pcVar35 != pcVar2) {
        do {
          if ((*pcVar35 == '\x01') && (param_2 * param_2 < *(double *)(pcVar35 + 0xc0))) {
            *pcVar35 = '\0';
          }
          pcVar35 = pcVar35 + 0xd0;
        } while (pcVar35 != pcVar2);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    FUN_1093804f0(&puStack_470,param_5);
    dVar68 = (double)CONCAT44(fStack_454,fStack_458);
    uStack_5a0 = (double)puStack_470 * dVar68;
    puStack_598 = (undefined8 *)((double)CONCAT44(fStack_464,fStack_468) * dVar68);
    puStack_590 = (undefined8 *)(dVar68 * (double)CONCAT44(fStack_45c,fStack_460));
    puStack_588 = (undefined8 *)param_5[4];
    ppuStack_580 = (undefined8 **)param_5[5];
    puStack_578 = (undefined8 *)param_5[6];
    pfVar16 = (float *)0x108;
    __Znwm();
    FUN_10997306c();
    lVar57 = *param_4;
    pfStack_558 = pfVar16;
    if (param_4[1] - lVar57 == 0) {
      plVar17 = (long *)0x0;
LAB_1094667e8:
      pfStack_500 = (float *)*param_5;
      uStack_4f8 = (undefined8 **)param_5[1];
      uStack_4f0 = (undefined1 (**) [16])param_5[2];
      ppfStack_4e8 = (float **)param_5[3];
      uStack_4e0 = (undefined8 *)param_5[4];
      ppuStack_4d8 = (undefined8 **)param_5[5];
      puStack_4d0 = (undefined8 *)param_5[6];
      lStack_4a0 = param_5[0xc];
      lStack_498 = param_5[0xd];
      lStack_490 = param_5[0xe];
      lStack_488 = param_5[0xf];
      lStack_480 = param_5[0x10];
      pfStack_4c0 = (float *)param_5[8];
      puStack_4b8 = (undefined8 *)param_5[9];
      puStack_4b0 = (undefined8 *)param_5[10];
      ppfStack_4a8 = (float **)param_5[0xb];
joined_r0x000109466818:
      if (plVar17 != (long *)0x0) {
        __ZdlPv(plVar17);
      }
      pfVar16 = pfStack_558;
      pfStack_558 = (float *)0x0;
      if (pfVar16 != (float *)0x0) {
        FUN_1099733ec();
        __ZdlPv();
      }
      param_1[1] = (long)uStack_4f8;
      *param_1 = (long)pfStack_500;
      param_1[3] = (long)ppfStack_4e8;
      param_1[2] = (long)uStack_4f0;
      param_1[5] = (long)ppuStack_4d8;
      *pdVar43 = (double)uStack_4e0;
      param_1[6] = (long)puStack_4d0;
      param_1[0xd] = lStack_498;
      param_1[0xc] = lStack_4a0;
      param_1[0xf] = lStack_488;
      param_1[0xe] = lStack_490;
      param_1[0x10] = lStack_480;
      param_1[9] = (long)puStack_4b8;
      *plVar44 = (long)pfStack_4c0;
      param_1[0xb] = (long)ppfStack_4a8;
      param_1[10] = (long)puStack_4b0;
      goto LAB_109467700;
    }
    lVar34 = param_4[1] - lVar57 >> 4;
    if ((ulong)(lVar34 * 0x4ec4ec4ec4ec4ec5) >> 0x3d == 0) {
      plVar17 = (long *)(lVar34 * 0x7627627627627628);
      __Znwm();
      lVar59 = 0;
      uVar64 = 0;
      plVar63 = plVar17 + lVar34 * 0xec4ec4ec4ec4ec5;
      plVar58 = plVar17;
      do {
        pcVar35 = (char *)(lVar57 + lVar59);
        plVar18 = plVar58;
        if ((*pcVar35 == '\x01') && ((*(uint *)(*(long *)(pcVar35 + 8) + 0x50) & 0xfffffffe) == 2))
        {
          plVar18 = param_3;
          FUN_10946b98c(param_3,pcVar35);
          if (param_2 <= 0.0 || param_6 != 1) {
            puVar19 = (undefined8 *)0x0;
          }
          else {
            puVar19 = (undefined8 *)0x18;
            __Znwm();
            *puVar19 = &PTR_DAT_110b1ef40;
            puVar19[1] = param_2 * param_2;
            puVar19[2] = 1.0 / (param_2 * param_2);
          }
          puStack_470 = &uStack_5a0;
          FUN_109973894(pfStack_558,plVar18,puVar19,&puStack_470,1);
          if (plVar58 < plVar63) {
            plVar18 = plVar58 + 1;
            *plVar58 = (long)pcVar35;
          }
          else {
            uVar40 = ((long)plVar58 - (long)plVar17 >> 3) + 1;
            if (uVar40 >> 0x3d != 0) {
              FUN_10946e798();
              goto LAB_10946ace0;
            }
            uVar45 = (long)plVar63 - (long)plVar17 >> 2;
            if (uVar45 <= uVar40) {
              uVar45 = uVar40;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar63 - (long)plVar17)) {
              uVar45 = 0x1fffffffffffffff;
            }
            if (uVar45 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10946ace0;
            }
            plVar20 = (long *)(uVar45 << 3);
            __Znwm();
            plVar63 = (long *)((long)plVar20 + ((long)plVar58 - (long)plVar17));
            plVar18 = plVar63 + 1;
            *plVar63 = (long)pcVar35;
            _memcpy();
            plVar63 = plVar20 + uVar45;
            __ZdlPv(plVar17);
            plVar17 = plVar20;
          }
        }
        uVar64 = uVar64 + 1;
        lVar57 = *param_4;
        lVar59 = lVar59 + 0xd0;
        plVar58 = plVar18;
      } while (uVar64 < (ulong)((param_4[1] - lVar57 >> 4) * 0x4ec4ec4ec4ec4ec5));
      if ((ulong)((long)plVar18 - (long)plVar17) < 0x11) goto LAB_1094667e8;
      uStack_288._0_4_ = 1.4013e-45;
      uStack_288._4_4_ = 0.0;
      pfStack_290 = (float *)0x200000001;
      uStack_280._0_4_ = 2.8026e-44;
      uStack_280._4_4_ = (float)((uint)uStack_280._4_4_ & 0xffffff00);
      uStack_278._0_4_ = 2.8026e-45;
      uStack_268._0_4_ = -1.8890966e+26;
      uStack_268._4_4_ = 0.60239995;
      uStack_270._0_4_ = -3.1514847e+24;
      uStack_270._4_4_ = 0.1417772;
      fStack_258 = 4.172325e-08;
      fStack_254 = 1.775;
      puStack_260 = (undefined8 *)0x3f50624dd2f1a9fc;
      fStack_250 = 2.8026e-44;
      fStack_24c = 7.00649e-45;
      uStack_240._0_4_ = 0.0;
      uStack_240._4_4_ = 2.5625;
      ppuStack_248 = (undefined8 **)0x3feccccccccccccd;
      fStack_238 = 0.0;
      fStack_234 = 0.0;
      uVar7 = (uint)uStack_230;
      puStack_220 = (undefined8 *)0x41cdcd6500000000;
      uStack_218 = CONCAT44(uStack_218._4_4_,1);
      uStack_208 = 0x4341c37937e08000;
      pfStack_210 = (float *)0x40c3880000000000;
      uStack_1f8 = 0x3f50624dd2f1a9fc;
      uStack_200 = 0x3949f623d5a8a733;
      uStack_1e8 = 0x4693b8b5b5056e17;
      uStack_1f0 = 0x3eb0c6f7a0b5ed8d;
      uStack_1e0 = 5;
      uStack_1d0 = 0x3ddb7cdfd9d7bdbb;
      uStack_1d8 = 0x3eb0c6f7a0b5ed8d;
      uStack_1c8 = 0x3e45798ee2308c3a;
      uStack_1b8 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0x3f800000;
      uStack_188 = 0x200000000;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_170 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_168 = 0;
      uStack_150 = 0x3f50624dd2f1a9fc;
      uStack_148 = 0x1f400000000;
      uStack_140 = 0x3fb999999999999a;
      uStack_138 = 1;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_f9 = 4;
      uStack_110 = 0x706d742f;
      uStack_10c = 0;
      uStack_f8 = 1;
      uStack_f4 = 0;
      uStack_e8 = 0x3eb0c6f7a0b5ed8d;
      uStack_f0 = 0x3e45798ee2308c3a;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_1c0 = 0x100000001;
      uStack_230 = (undefined8 *)CONCAT44(5,uVar7 & 0xffffff00);
      ppuStack_228 = (undefined8 **)CONCAT44(ppuStack_228._4_4_,param_7);
      uStack_134 = 0;
      puStack_470 = (undefined8 *)0x200000001;
      puVar19 = (undefined8 *)0x20;
      __Znwm();
      fStack_468 = SUB84(puVar19,0);
      fStack_464 = (float)((ulong)puVar19 >> 0x20);
      puVar19[1] = 0x7361772065766c6f;
      *puVar19 = 0x533a3a7365726563;
      *(undefined8 *)((long)puVar19 + 0x14) = 0x2e64656c6c616320;
      *(undefined8 *)((long)puVar19 + 0xc) = 0x746f6e2073617720;
      *(undefined1 *)((long)puVar19 + 0x1c) = 0;
      auVar74 = NEON_fmov(0xbff0000000000000,8);
      fStack_458 = 4.48416e-44;
      fStack_454 = -0.0;
      fStack_460 = 3.92364e-44;
      fStack_45c = 0.0;
      puStack_408 = auVar74._8_8_;
      fStack_448 = auVar74._8_4_;
      uStack_444 = auVar74._12_4_;
      puStack_410 = auVar74._0_8_;
      uStack_450 = auVar74._0_4_;
      fStack_44c = auVar74._4_4_;
      puStack_440 = (undefined8 *)0xbff0000000000000;
      puStack_438 = (undefined8 *)0x0;
      pfStack_428 = (float *)0x0;
      puStack_430 = (undefined8 *)0x0;
      puStack_420 = (undefined8 *)0xffffffffffffffff;
      pauStack_418 = (undefined1 (*) [16])0xffffffffffffffff;
      lStack_3f0 = -0x4010000000000000;
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,0xffffffff);
      uStack_3e0 = 0xbff0000000000000;
      lStack_3d8 = CONCAT44(lStack_3d8._4_4_,0xffffffff);
      uStack_3d0 = 0xbff0000000000000;
      uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0xffffffff);
      pauStack_3a0 = (undefined1 (*) [16])0xbff0000000000000;
      puStack_378 = (undefined8 *)0xffffffffffffffff;
      pauStack_380 = (undefined1 (*) [16])0xffffffffffffffff;
      puStack_388 = (undefined8 *)0xffffffffffffffff;
      pauStack_390 = (undefined1 (*) [16])0xffffffffffffffff;
      puStack_398 = (undefined8 *)0xffffffffffffffff;
      uStack_370 = uStack_370 & 0xffffff00;
      iStack_364 = 2;
      fStack_360 = 2.8026e-45;
      uStack_36c = 0xffffffff;
      iStack_368 = -1;
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_330 = 0;
      uStack_338 = 0;
      uStack_320 = 0;
      uStack_328 = 0;
      uStack_310 = 0;
      uStack_318 = 0;
      uStack_300 = 0;
      uStack_308 = 0;
      uStack_2f8 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2b0 = 0;
      uStack_2a0 = 0x200000001;
      uStack_2a8 = 0x200000004;
      uStack_298 = 0xffffffff00000000;
      puStack_400 = puStack_410;
      puStack_3f8 = puStack_408;
      puStack_3c0 = puStack_410;
      uStack_3b8 = puStack_408;
      puStack_3b0 = puStack_410;
      puStack_3a8 = puStack_408;
      FUN_1099a00a4();
      puStack_4d0 = puStack_578;
      ppuStack_4d8 = ppuStack_580;
      uStack_4e0 = puStack_588;
      puVar55 = puStack_590;
      puVar19 = puStack_598;
      dVar68 = uStack_5a0;
      dVar67 = (double)puStack_590 * (double)puStack_590 +
               uStack_5a0 * uStack_5a0 + (double)puStack_598 * (double)puStack_598;
      if (dVar67 == 0.0) {
        dVar103 = 1.0;
        auVar80 = ZEXT216(0);
        dVar67 = 0.0;
      }
      else {
        dVar67 = SQRT(dVar67);
        auVar74 = ___sincos_stret(dVar67 * 0.5);
        dVar103 = auVar74._8_8_;
        dVar85 = auVar74._0_8_;
        auVar80._0_8_ = (dVar68 * dVar85) / dVar67;
        auVar80._8_8_ = ((double)puVar19 * dVar85) / dVar67;
        dVar67 = ((double)puVar55 * dVar85) / dVar67;
      }
      dVar85 = auVar80._0_8_;
      dVar84 = auVar80._8_8_;
      dVar68 = SQRT(dVar85 * dVar85 + dVar67 * dVar67 + dVar84 * dVar84 + dVar103 * dVar103);
      pfStack_500 = (float *)(dVar85 / dVar68);
      uStack_4f8 = (undefined8 **)(dVar84 / dVar68);
      uStack_4f0 = (undefined1 (**) [16])(dVar67 / dVar68);
      ppfStack_4e8 = (float **)(dVar103 / dVar68);
      func_0x00010937fbc4(&pfStack_548,&pfStack_500);
      lStack_498 = lStack_520;
      lStack_4a0 = lStack_528;
      lStack_488 = lStack_510;
      lStack_490 = lStack_518;
      lStack_480 = lStack_508;
      puStack_4b8 = puStack_540;
      pfStack_4c0 = pfStack_548;
      ppfStack_4a8 = ppfStack_530;
      puStack_4b0 = puStack_538;
      FUN_10943e408(&puStack_470);
      func_0x00010943e4cc(&pfStack_290);
      goto joined_r0x000109466818;
    }
  }
  FUN_10946e798();
LAB_10946ace0:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10946ace4);
  (*pcVar10)();
LAB_109469e88:
  _free(uVar64);
LAB_109469e9c:
  _free(pfStack_568);
  _free(pfStack_558);
  _free(pfStack_548);
  pauVar21 = pauStack_3a0;
  pfVar16 = pfStack_5b0;
  puVar19 = (undefined8 *)((long)puStack_398 + 3);
  if (-1 < (long)puStack_398) {
    puVar19 = puStack_398;
  }
  uVar64 = (ulong)puVar19 & 0xfffffffffffffffc;
  if (3 < (long)puStack_398) {
    lVar57 = 0;
    pauVar60 = pauStack_3a0;
    do {
      fVar65 = *(float *)*pauVar60;
      fVar72 = *(float *)(*pauVar60 + 4);
      *(float *)(*pauVar60 + 8) = -*(float *)(*pauVar60 + 8);
      *(float *)(*pauVar60 + 0xc) = -*(float *)(*pauVar60 + 0xc);
      *(float *)*pauVar60 = -fVar65;
      *(float *)(*pauVar60 + 4) = -fVar72;
      lVar57 = lVar57 + 4;
      pauVar60 = pauVar60 + 1;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puStack_398 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puStack_398,uVar64)) {
    if (7 < uVar40) {
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      pauVar60 = pauStack_3a0 + ((long)puVar19 >> 2) + 1;
      uVar45 = uVar47;
      do {
        fVar65 = *(float *)pauVar60[-1];
        fVar72 = *(float *)(pauVar60[-1] + 4);
        fVar79 = *(float *)(pauVar60[-1] + 0xc);
        fVar100 = *(float *)*pauVar60;
        fVar86 = *(float *)(*pauVar60 + 4);
        fVar87 = *(float *)(*pauVar60 + 8);
        fVar89 = *(float *)(*pauVar60 + 0xc);
        *(float *)(pauVar60[-1] + 8) = -*(float *)(pauVar60[-1] + 8);
        *(float *)(pauVar60[-1] + 0xc) = -fVar79;
        *(float *)pauVar60[-1] = -fVar65;
        *(float *)(pauVar60[-1] + 4) = -fVar72;
        *(float *)(*pauVar60 + 8) = -fVar87;
        *(float *)(*pauVar60 + 0xc) = -fVar89;
        *(float *)*pauVar60 = -fVar100;
        *(float *)(*pauVar60 + 4) = -fVar86;
        pauVar60 = pauVar60 + 2;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_109469f5c;
    }
    lVar57 = (long)puStack_398 - uVar64;
    pfVar41 = (float *)(*pauStack_3a0 + uVar64 * 4);
    do {
      *pfVar41 = -*pfVar41;
      lVar57 = lVar57 + -1;
      pfVar41 = pfVar41 + 1;
    } while (lVar57 != 0);
  }
LAB_109469f5c:
  puVar19 = puStack_398;
  if (puStack_388 != puStack_398) {
    FUN_1093c61bc(ppauStack_6a0,puStack_398,1);
    puVar19 = puStack_388;
  }
  puVar55 = (undefined8 *)((long)puVar19 + 3);
  if (-1 < (long)puVar19) {
    puVar55 = puVar19;
  }
  uVar64 = (ulong)puVar55 & 0xfffffffffffffffc;
  if (3 < (long)puVar19) {
    lVar57 = 0;
    pauVar60 = pauStack_390;
    pfVar41 = pfVar16;
    pauVar25 = pauVar21;
    do {
      fVar65 = *pfVar41;
      fVar72 = pfVar41[1];
      fVar79 = pfVar41[3];
      fVar100 = *(float *)*pauVar25;
      fVar86 = *(float *)(*pauVar25 + 4);
      fVar87 = *(float *)(*pauVar25 + 0xc);
      *(float *)(*pauVar60 + 8) = pfVar41[2] + *(float *)(*pauVar25 + 8);
      *(float *)(*pauVar60 + 0xc) = fVar79 + fVar87;
      *(float *)*pauVar60 = fVar65 + fVar100;
      *(float *)(*pauVar60 + 4) = fVar72 + fVar86;
      lVar57 = lVar57 + 4;
      pauVar60 = pauVar60 + 1;
      pfVar41 = pfVar41 + 4;
      pauVar25 = pauVar25 + 1;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puVar19 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar19,uVar64)) {
    if (((7 < uVar40) && (0x1f < (ulong)((long)pauStack_390 - (long)pfVar16))) &&
       (0x1f < (ulong)((long)pauStack_390 - (long)pauVar21))) {
      lVar57 = (long)puVar55 >> 2;
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      pauVar60 = pauStack_390 + lVar57 + 1;
      pauVar25 = pauVar21 + lVar57 + 1;
      pfVar41 = pfVar16 + lVar57 * 4 + 4;
      uVar45 = uVar47;
      do {
        fVar65 = pfVar41[-4];
        fVar72 = pfVar41[-3];
        fVar79 = pfVar41[-1];
        fVar100 = *pfVar41;
        fVar86 = pfVar41[1];
        fVar87 = pfVar41[2];
        fVar89 = pfVar41[3];
        auVar74 = pauVar25[-1];
        uVar99 = *(undefined8 *)(*pauVar25 + 8);
        uVar46 = *(undefined8 *)*pauVar25;
        *(float *)(pauVar60[-1] + 8) = pfVar41[-2] + auVar74._8_4_;
        *(float *)(pauVar60[-1] + 0xc) = fVar79 + auVar74._12_4_;
        *(float *)pauVar60[-1] = fVar65 + auVar74._0_4_;
        *(float *)(pauVar60[-1] + 4) = fVar72 + auVar74._4_4_;
        *(float *)(*pauVar60 + 8) = fVar87 + (float)uVar99;
        *(float *)(*pauVar60 + 0xc) = fVar89 + (float)((ulong)uVar99 >> 0x20);
        *(float *)*pauVar60 = fVar100 + (float)uVar46;
        *(float *)(*pauVar60 + 4) = fVar86 + (float)((ulong)uVar46 >> 0x20);
        pauVar60 = pauVar60 + 2;
        pauVar25 = pauVar25 + 2;
        pfVar41 = pfVar41 + 8;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_10946a008;
    }
    lVar57 = (long)puVar19 - uVar64;
    pfVar41 = (float *)(*pauStack_390 + uVar64 * 4);
    pfVar31 = (float *)(*pauVar21 + uVar64 * 4);
    pfVar16 = pfVar16 + uVar64;
    do {
      *pfVar41 = *pfVar16 + *pfVar31;
      lVar57 = lVar57 + -1;
      pfVar41 = pfVar41 + 1;
      pfVar31 = pfVar31 + 1;
      pfVar16 = pfVar16 + 1;
    } while (lVar57 != 0);
  }
LAB_10946a008:
  fVar65 = (float)FUN_10946c2c4(&pauStack_418,&pauStack_3a0);
  puVar19 = puStack_440;
  if (puStack_3c0 == (undefined8 *)0x1) {
    fVar72 = fVar65;
    if ((float)uStack_3b8 <= fVar65) {
      fVar72 = (float)uStack_3b8;
    }
    uStack_3b8 = (undefined8 *)CONCAT44(uStack_3b8._4_4_,fVar72);
  }
  pfStack_548 = *(float **)*pauStack_390;
  puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,*(undefined4 *)(*pauStack_390 + 8));
  lVar57 = puStack_440[1];
  if (puStack_440[2] != lVar57) {
    lVar34 = 0;
    uVar64 = 0;
    uVar46 = *(undefined8 *)(pauStack_390[-1] + (long)puStack_388 * 4 + 4);
    fVar72 = *(float *)(pauStack_390[-1] + (long)puStack_388 * 4 + 0xc);
    lVar59 = 0x28;
    do {
      lVar62 = CONCAT44(uStack_36c,uStack_370);
      FUN_10937fe84(&pfStack_548,&pfStack_500,0);
      lVar49 = lVar57 + lVar59;
      fVar79 = (float)*(undefined8 *)(lVar49 + -0x28);
      fVar87 = (float)*(undefined8 *)(lVar49 + -0x24);
      fVar89 = (float)((ulong)*(undefined8 *)(lVar49 + -0x24) >> 0x20);
      fVar100 = fVar72 + (float)uStack_4f8 * fVar79 +
                         uStack_4f0._4_4_ * fVar87 + (float)uStack_4e0 * fVar89;
      fVar86 = 1.0 / fVar100;
      if (fVar100 == 0.0) {
        fVar86 = 1.0;
      }
      *(float *)(lVar62 + lVar34) =
           *(float *)(lVar49 + -0x10) *
           fVar86 * ((float)uVar46 +
                    SUB84(pfStack_500,0) * fVar79 + uStack_4f8._4_4_ * fVar87 +
                    SUB84(ppfStack_4e8,0) * fVar89) - *(float *)(lVar49 + -0x1c);
      ((float *)(lVar62 + lVar34))[1] =
           *(float *)(lVar49 + -0xc) *
           fVar86 * ((float)((ulong)uVar46 >> 0x20) +
                    (float)((ulong)pfStack_500 >> 0x20) * fVar79 + (float)uStack_4f0 * fVar87 +
                    (float)((ulong)ppfStack_4e8 >> 0x20) * fVar89) - *(float *)(lVar49 + -0x18);
      if (*(char *)(lVar49 + -8) == '\x01') {
        fVar100 = (float)*(undefined8 *)(lVar62 + lVar34);
        fVar86 = (float)((ulong)*(undefined8 *)(lVar62 + lVar34) >> 0x20);
        fVar79 = fVar100 * fVar100 + fVar86 * fVar86;
        if (*(float *)(lVar57 + lVar59) < fVar79) {
          fVar79 = *(float *)(lVar57 + lVar59 + -4) / SQRT(fVar79);
          if (fVar79 <= 1.1754944e-38) {
            fVar79 = 1.1754944e-38;
          }
          *(ulong *)(lVar62 + lVar34) = CONCAT44(fVar86 * SQRT(fVar79),fVar100 * SQRT(fVar79));
        }
      }
      uVar64 = uVar64 + 1;
      lVar57 = puVar19[1];
      lVar34 = lVar34 + 8;
      lVar59 = lVar59 + 0xa0;
    } while (uVar64 < (ulong)((puVar19[2] - lVar57 >> 5) * -0x3333333333333333));
  }
  puStack_3f8 = (undefined8 *)((long)puStack_3f8 + 1);
  fVar72 = (float)FUN_10946bcac(CONCAT44(uStack_36c,uStack_370),CONCAT44(iStack_364,iStack_368));
  fVar100 = fVar72 * 0.1;
  fVar79 = -1.0;
  if (fVar100 < (float)uStack_3e8) {
    fVar79 = 1.0 - (fVar72 / (float)uStack_3e8) * (fVar72 / (float)uStack_3e8);
  }
  pfStack_548 = (float *)0x0;
  puStack_540 = (undefined8 *)0x0;
  pfStack_500 = &fStack_458;
  uStack_4f8 = &puStack_3b0;
  uStack_4f0 = &pauStack_3a0;
  if (CONCAT44(fStack_44c,uStack_450) != 0) {
    FUN_1093c61bc(&pfStack_548,CONCAT44(fStack_44c,uStack_450),1);
    if (0 < (long)puStack_540) {
      _bzero(pfStack_548,(long)puStack_540 << 2);
    }
  }
  FUN_10946d0f4(&fStack_458,&uStack_4f8,&pfStack_548);
  pfVar16 = pfStack_548;
  puVar19 = puStack_540;
  if (puStack_378 != puStack_540) {
    FUN_1093c61bc(&pauStack_380,puStack_540,1);
    puVar19 = puStack_378;
  }
  puVar55 = (undefined8 *)((long)puVar19 + 3);
  if (-1 < (long)puVar19) {
    puVar55 = puVar19;
  }
  uVar64 = (ulong)puVar55 & 0xfffffffffffffffc;
  if (3 < (long)puVar19) {
    lVar57 = 0;
    pauVar21 = pauStack_380;
    pfVar41 = pfVar16;
    do {
      uVar46 = *(undefined8 *)pfVar41;
      *(undefined8 *)(*pauVar21 + 8) = *(undefined8 *)(pfVar41 + 2);
      *(undefined8 *)*pauVar21 = uVar46;
      lVar57 = lVar57 + 4;
      pauVar21 = pauVar21 + 1;
      pfVar41 = pfVar41 + 4;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puVar19 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar19,uVar64)) {
    if ((7 < uVar40) && (0x1f < (ulong)((long)pauStack_380 - (long)pfVar16))) {
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      pfVar41 = pfVar16 + ((long)puVar55 >> 2) * 4 + 4;
      pauVar21 = pauStack_380 + ((long)puVar55 >> 2) + 1;
      uVar45 = uVar47;
      do {
        uVar46 = *(undefined8 *)(pfVar41 + -4);
        uVar99 = *(undefined8 *)pfVar41;
        uVar6 = *(undefined8 *)(pfVar41 + 2);
        *(undefined8 *)(pauVar21[-1] + 8) = *(undefined8 *)(pfVar41 + -2);
        *(undefined8 *)pauVar21[-1] = uVar46;
        *(undefined8 *)(*pauVar21 + 8) = uVar6;
        *(undefined8 *)*pauVar21 = uVar99;
        pfVar41 = pfVar41 + 8;
        pauVar21 = pauVar21 + 2;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_10946a310;
    }
    lVar57 = (long)puVar19 - uVar64;
    pfVar41 = (float *)(*pauStack_380 + uVar64 * 4);
    pfVar16 = pfVar16 + uVar64;
    do {
      *pfVar41 = *pfVar16;
      lVar57 = lVar57 + -1;
      pfVar41 = pfVar41 + 1;
      pfVar16 = pfVar16 + 1;
    } while (lVar57 != 0);
  }
LAB_10946a310:
  _free(pfStack_548);
  fVar86 = (float)FUN_10946bcac(pauStack_380,puStack_378);
  pauVar21 = pauStack_390;
  fVar86 = (fVar86 / (float)uStack_3e8) * (fVar86 / (float)uStack_3e8);
  fVar87 = (fVar65 * SQRT(fStack_360)) / (float)uStack_3e8;
  fVar87 = fVar87 * fVar87;
  fVar88 = fVar86 + fVar87 + fVar87;
  fVar89 = fVar79 / fVar88;
  if (fVar88 == 0.0) {
    fVar89 = 0.0;
  }
  if (fVar89 <= 0.25) {
    if (0.0 <= fVar79) {
      fVar86 = 0.5;
    }
    else {
      fVar86 = fVar86 + fVar87;
      fVar86 = (fVar86 * -0.5) / (-fVar86 + fVar79 * 0.5);
    }
    bVar11 = false;
    bVar12 = false;
    if (0.1 <= fVar86) {
      bVar11 = false;
      bVar12 = true;
      if (!NAN(fVar100) && !NAN((float)uStack_3e8)) {
        bVar11 = fVar100 < (float)uStack_3e8;
        bVar12 = false;
      }
    }
    fVar100 = 0.1;
    if (bVar11 != bVar12) {
      fVar100 = fVar86;
    }
    fVar86 = fVar65 / 0.1;
    if ((float)uStack_3b8 <= fVar65 / 0.1) {
      fVar86 = (float)uStack_3b8;
    }
    fVar65 = fVar100 * fVar86;
    fStack_360 = fStack_360 / fVar100;
LAB_10946a530:
    uStack_3b8 = (undefined8 *)CONCAT44(uStack_3b8._4_4_,fVar65);
  }
  else if ((fStack_360 == 0.0) || (0.75 <= fVar89)) {
    fVar65 = fVar65 + fVar65;
    fStack_360 = fStack_360 * 0.5;
    goto LAB_10946a530;
  }
  if (fVar89 < 0.0001) goto LAB_10946a7dc;
  puVar19 = puStack_388;
  if (puStack_5a8 != puStack_388) {
    FUN_1093c61bc(&pfStack_5b0,puStack_388,1);
    puVar19 = puStack_5a8;
  }
  pauVar60 = pauStack_418;
  pfVar16 = pfStack_5b0;
  puVar55 = (undefined8 *)((long)puVar19 + 3);
  if (-1 < (long)puVar19) {
    puVar55 = puVar19;
  }
  uVar64 = (ulong)puVar55 & 0xfffffffffffffffc;
  if (3 < (long)puVar19) {
    lVar57 = 0;
    pfVar41 = pfStack_5b0;
    pauVar25 = pauVar21;
    do {
      lVar34 = *(long *)*pauVar25;
      *(long *)(pfVar41 + 2) = *(long *)(*pauVar25 + 8);
      *(long *)pfVar41 = lVar34;
      lVar57 = lVar57 + 4;
      pfVar41 = pfVar41 + 4;
      pauVar25 = pauVar25 + 1;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puVar19 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar19,uVar64)) {
    if ((7 < uVar40) && (0x1f < (ulong)((long)pfStack_5b0 - (long)pauVar21))) {
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      pauVar25 = pauVar21 + ((long)puVar55 >> 2) + 1;
      pfVar41 = pfStack_5b0 + ((long)puVar55 >> 2) * 4 + 4;
      uVar45 = uVar47;
      do {
        uVar46 = *(undefined8 *)pauVar25[-1];
        uVar99 = *(undefined8 *)*pauVar25;
        uVar6 = *(undefined8 *)(*pauVar25 + 8);
        *(undefined8 *)(pfVar41 + -2) = *(undefined8 *)(pauVar25[-1] + 8);
        *(undefined8 *)(pfVar41 + -4) = uVar46;
        *(undefined8 *)(pfVar41 + 2) = uVar6;
        *(undefined8 *)pfVar41 = uVar99;
        pauVar25 = pauVar25 + 2;
        pfVar41 = pfVar41 + 8;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_10946a62c;
    }
    lVar57 = (long)puVar19 - uVar64;
    pfVar41 = pfStack_5b0 + uVar64;
    pfVar31 = (float *)(*pauVar21 + uVar64 * 4);
    do {
      *pfVar41 = *pfVar31;
      lVar57 = lVar57 + -1;
      pfVar41 = pfVar41 + 1;
      pfVar31 = pfVar31 + 1;
    } while (lVar57 != 0);
  }
LAB_10946a62c:
  puVar19 = puStack_5a8;
  if (puStack_388 != puStack_5a8) {
    FUN_1093c61bc(ppauStack_6a0,puStack_5a8,1);
    puVar19 = puStack_388;
  }
  puVar55 = (undefined8 *)((long)puVar19 + 3);
  if (-1 < (long)puVar19) {
    puVar55 = puVar19;
  }
  uVar64 = (ulong)puVar55 & 0xfffffffffffffffc;
  if (3 < (long)puVar19) {
    lVar57 = 0;
    pauVar21 = pauStack_390;
    pauVar25 = pauVar60;
    pfVar41 = pfVar16;
    do {
      fVar102 = *(float *)*pauVar25;
      fVar65 = *(float *)(*pauVar25 + 4);
      fVar100 = *(float *)(*pauVar25 + 0xc);
      fVar86 = *pfVar41;
      fVar87 = pfVar41[1];
      fVar95 = pfVar41[3];
      *(float *)(*pauVar21 + 8) = *(float *)(*pauVar25 + 8) * pfVar41[2];
      *(float *)(*pauVar21 + 0xc) = fVar100 * fVar95;
      *(float *)*pauVar21 = fVar102 * fVar86;
      *(float *)(*pauVar21 + 4) = fVar65 * fVar87;
      lVar57 = lVar57 + 4;
      pauVar21 = pauVar21 + 1;
      pauVar25 = pauVar25 + 1;
      pfVar41 = pfVar41 + 4;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puVar19 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar19,uVar64)) {
    if (((7 < uVar40) && (0x1f < (ulong)((long)pauStack_390 - (long)pauVar60))) &&
       (0x1f < (ulong)((long)pauStack_390 - (long)pfVar16))) {
      lVar57 = (long)puVar55 >> 2;
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      pauVar21 = pauStack_390 + lVar57 + 1;
      pfVar41 = pfVar16 + lVar57 * 4 + 4;
      pauVar25 = pauVar60 + lVar57 + 1;
      uVar45 = uVar47;
      do {
        fVar102 = *(float *)pauVar25[-1];
        fVar65 = *(float *)(pauVar25[-1] + 4);
        fVar100 = *(float *)(pauVar25[-1] + 0xc);
        fVar86 = *(float *)*pauVar25;
        fVar87 = *(float *)(*pauVar25 + 4);
        fVar95 = *(float *)(*pauVar25 + 8);
        fVar98 = *(float *)(*pauVar25 + 0xc);
        auVar74 = *(undefined1 (*) [16])(pfVar41 + -4);
        uVar99 = *(undefined8 *)(pfVar41 + 2);
        uVar46 = *(undefined8 *)pfVar41;
        *(float *)(pauVar21[-1] + 8) = *(float *)(pauVar25[-1] + 8) * auVar74._8_4_;
        *(float *)(pauVar21[-1] + 0xc) = fVar100 * auVar74._12_4_;
        *(float *)pauVar21[-1] = fVar102 * auVar74._0_4_;
        *(float *)(pauVar21[-1] + 4) = fVar65 * auVar74._4_4_;
        *(float *)(*pauVar21 + 8) = fVar95 * (float)uVar99;
        *(float *)(*pauVar21 + 0xc) = fVar98 * (float)((ulong)uVar99 >> 0x20);
        *(float *)*pauVar21 = fVar86 * (float)uVar46;
        *(float *)(*pauVar21 + 4) = fVar87 * (float)((ulong)uVar46 >> 0x20);
        pauVar21 = pauVar21 + 2;
        pfVar41 = pfVar41 + 8;
        pauVar25 = pauVar25 + 2;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_10946a6d4;
    }
    lVar57 = (long)puVar19 - uVar64;
    pfVar41 = (float *)(*pauStack_390 + uVar64 * 4);
    pfVar16 = pfVar16 + uVar64;
    pfVar31 = (float *)(*pauVar60 + uVar64 * 4);
    do {
      *pfVar41 = *pfVar31 * *pfVar16;
      lVar57 = lVar57 + -1;
      pfVar41 = pfVar41 + 1;
      pfVar16 = pfVar16 + 1;
      pfVar31 = pfVar31 + 1;
    } while (lVar57 != 0);
  }
LAB_10946a6d4:
  puVar55 = (undefined8 *)CONCAT44(iStack_364,iStack_368);
  puVar19 = (undefined8 *)CONCAT44(uStack_36c,uStack_370);
  if (puStack_430 != puVar55) {
    FUN_1093c61bc(&puStack_438,puVar55,1);
    puVar55 = puStack_430;
  }
  puVar24 = (undefined8 *)((long)puVar55 + 3);
  if (-1 < (long)puVar55) {
    puVar24 = puVar55;
  }
  uVar64 = (ulong)puVar24 & 0xfffffffffffffffc;
  if (3 < (long)puVar55) {
    lVar57 = 0;
    puVar61 = puStack_438;
    puVar36 = puVar19;
    do {
      uVar46 = *puVar36;
      puVar61[1] = puVar36[1];
      *puVar61 = uVar46;
      lVar57 = lVar57 + 4;
      puVar61 = puVar61 + 2;
      puVar36 = puVar36 + 2;
    } while (lVar57 < (long)uVar64);
  }
  uVar40 = (long)puVar55 % 4;
  if (uVar40 != 0 && (long)uVar40 < 0 == SBORROW8((long)puVar55,uVar64)) {
    if ((7 < uVar40) && (0x1f < (ulong)((long)puStack_438 - (long)puVar19))) {
      uVar47 = uVar40 & 0xfffffffffffffff8;
      uVar64 = uVar64 + uVar47;
      puVar61 = puVar19 + ((long)puVar24 >> 2) * 2 + 2;
      puVar24 = puStack_438 + ((long)puVar24 >> 2) * 2 + 2;
      uVar45 = uVar47;
      do {
        uVar46 = puVar61[-2];
        uVar99 = *puVar61;
        uVar6 = puVar61[1];
        puVar24[-1] = puVar61[-1];
        puVar24[-2] = uVar46;
        puVar24[1] = uVar6;
        *puVar24 = uVar99;
        puVar61 = puVar61 + 4;
        puVar24 = puVar24 + 4;
        uVar45 = uVar45 - 8;
      } while (uVar45 != 0);
      if (uVar40 == uVar47) goto LAB_10946a7b8;
    }
    lVar57 = (long)puVar55 - uVar64;
    puVar39 = (undefined4 *)((long)puStack_438 + uVar64 * 4);
    puVar42 = (undefined4 *)((long)puVar19 + uVar64 * 4);
    do {
      *puVar39 = *puVar42;
      lVar57 = lVar57 + -1;
      puVar39 = puVar39 + 1;
      puVar42 = puVar42 + 1;
    } while (lVar57 != 0);
  }
LAB_10946a7b8:
  fVar102 = (float)FUN_10946bcac(pauStack_390,puStack_388);
  uStack_3e8 = CONCAT44(uStack_3e8._4_4_,fVar72);
  puStack_3c0 = (undefined8 *)((long)puStack_3c0 + 1);
LAB_10946a7dc:
  fVar79 = ABS(fVar79);
  bVar11 = false;
  bVar12 = true;
  if (fVar89 * 0.5 <= 1.0) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar79) && !NAN((float)uStack_3d0)) {
      bVar11 = fVar79 == (float)uStack_3d0;
      bVar12 = (float)uStack_3d0 <= fVar79;
    }
  }
  bVar14 = false;
  bVar13 = true;
  if (!bVar12 || bVar11) {
    bVar14 = false;
    bVar13 = true;
    if (!NAN(fVar88) && !NAN((float)uStack_3d0)) {
      bVar14 = fVar88 == (float)uStack_3d0;
      bVar13 = (float)uStack_3d0 <= fVar88;
    }
  }
  if (!bVar13 || bVar14) goto LAB_10946a978;
  if ((float)uStack_3b8 <= fVar102 * uStack_3d0._4_4_) goto LAB_10946a978;
  if (lStack_3d8 <= (long)puStack_3f8) {
    uVar66 = 2;
    goto LAB_10946a97c;
  }
  uVar66 = 0;
  bVar11 = false;
  bVar12 = true;
  if (fVar88 <= 1.1920929e-07) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar79)) {
      bVar11 = fVar79 == 1.1920929e-07;
      bVar12 = 1.1920929e-07 <= fVar79;
    }
  }
  if ((!bVar12 || bVar11) && fVar89 * 0.5 <= 1.0) goto LAB_10946a97c;
  bVar11 = false;
  bVar12 = false;
  if (fVar102 * 1.1920929e-07 < (float)uStack_3b8) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(uStack_3e8._4_4_)) {
      bVar11 = uStack_3e8._4_4_ == 1.1920929e-07;
      bVar12 = 1.1920929e-07 <= uStack_3e8._4_4_;
    }
  }
  if (!bVar12 || bVar11) goto LAB_10946a97c;
  fVar65 = (float)uStack_3b8;
  if (0.0001 <= fVar89) goto LAB_10946a9cc;
  goto LAB_1094686c0;
LAB_10946a9cc:
  bVar11 = true;
LAB_10946a984:
  _free(ppuStack_228);
  _free(CONCAT44(fStack_234,fStack_238));
  _free(ppuStack_248);
  _free(CONCAT44(fStack_254,fStack_258));
  _free(CONCAT44(uStack_268._4_4_,(float)uStack_268));
  _free(CONCAT44(uStack_278._4_4_,(float)uStack_278));
  _free(pfStack_290);
  if (!bVar11) goto LAB_109467538;
  goto LAB_109467810;
}



/* Entry: 10946af98; end: 10946b1d3;  */

void FUN_10946af98(undefined8 *param_1,long *param_2,double *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  double dVar3;
  code *pcVar4;
  double *pdVar5;
  long lVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  double *pdVar14;
  double *pdVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  double *extraout_x8;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double extraout_d1;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double *pdStack_690;
  undefined8 *puStack_688;
  double dStack_680;
  double dStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined4 uStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_590;
  undefined8 uStack_58c;
  undefined8 uStack_584;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined2 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_49c;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined1 uStack_319;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  char cStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  double *apdStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar5 = &dStack_140;
  pdVar14 = param_3;
  pdVar15 = param_3;
  FUN_1093804f0();
  iVar17 = (int)param_6;
  uVar16 = (undefined4)param_5;
  dStack_1b0 = dStack_140 * dStack_128;
  dStack_1a8 = dStack_138 * dStack_128;
  dVar22 = dStack_128 * dStack_130;
  pcVar19 = (char *)*param_2;
  pcVar1 = (char *)param_2[1];
  dStack_1a0 = dVar22;
  if (pcVar19 != pcVar1) {
    dVar30 = param_3[5];
    dVar23 = param_3[4];
    dVar31 = param_3[6];
    dVar22 = dVar23;
    do {
      if (*pcVar19 == '\x01') {
        cStack_f8 = '\0';
        dStack_f0 = 0.0;
        dStack_e8 = 0.0;
        uStack_e0 = *param_1;
        uStack_c8 = param_1[3];
        uStack_d0 = param_1[2];
        dStack_c0 = (double)param_1[4];
        dStack_b8 = (double)param_1[5];
        uStack_a8 = param_1[7];
        uStack_b0 = param_1[6];
        uStack_a0 = param_1[8];
        uStack_98 = param_1[9];
        uStack_90 = *(undefined4 *)(param_1 + 10);
        FUN_10937da58(apdStack_88,param_1 + 0xb);
        dStack_110 = *(double *)(pcVar19 + 0x58);
        dStack_120 = (*(double *)(pcVar19 + 0x20) - (double)param_1[2]) * dStack_110;
        dStack_118 = (*(double *)(pcVar19 + 0x28) - (double)param_1[3]) * dStack_110;
        dStack_108 = dStack_c0 * dStack_110;
        dStack_100 = dStack_b8 * dStack_110;
        lVar18 = *(long *)(pcVar19 + 8);
        dStack_138 = *(double *)(lVar18 + 0x10);
        dStack_140 = *(double *)(lVar18 + 8);
        dStack_130 = *(double *)(lVar18 + 0x18);
        pdVar14 = &dStack_190;
        pdVar15 = (double *)0x0;
        func_0x0001093801bc(&dStack_1b0);
        dVar22 = dVar31 + dStack_140 * dStack_180 +
                          dStack_138 * dStack_168 + dStack_130 * dStack_150;
        dVar28 = 1.0 / dVar22;
        if (dVar22 == 0.0) {
          dVar28 = 1.0;
        }
        dVar22 = -dStack_120 +
                 (dVar23 + dStack_190 * dStack_140 + dStack_178 * dStack_138 +
                           dStack_160 * dStack_130) * dVar28 * dStack_108;
        dVar28 = -dStack_118 +
                 (dVar30 + dStack_188 * dStack_140 + dStack_170 * dStack_138 +
                           dStack_158 * dStack_130) * dVar28 * dStack_100;
        if ((cStack_f8 == '\x01') &&
           (dVar26 = dVar22 * dVar22 + dVar28 * dVar28, dStack_e8 < dVar26)) {
          dVar26 = dStack_f0 / SQRT(dVar26);
          if (dVar26 <= 2.2250738585072014e-308) {
            dVar26 = 2.2250738585072014e-308;
          }
          dVar22 = dVar22 * SQRT(dVar26);
          dVar28 = dVar28 * SQRT(dVar26);
        }
        dVar22 = dVar22 * dVar22 + dVar28 * dVar28;
        *(double *)(pcVar19 + 0xc0) = dVar22;
        pdVar5 = apdStack_88[0];
        _free();
      }
      iVar17 = (int)param_6;
      uVar16 = (undefined4)param_5;
      pcVar19 = pcVar19 + 0xd0;
    } while (pcVar19 != pcVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _free(apdStack_88[0]);
  __Unwind_Resume();
  __Unwind_Resume();
  FUN_1093804f0(&pdStack_690,pdVar15);
  dStack_2d0 = (double)pdStack_690 * dStack_678;
  dStack_2c8 = (double)puStack_688 * dStack_678;
  dStack_2c0 = dStack_678 * dStack_680;
  dStack_2b0 = pdVar15[5];
  dStack_2b8 = pdVar15[4];
  dStack_2a8 = pdVar15[6];
  lVar6 = 0x108;
  __Znwm();
  FUN_10997306c();
  pcVar19 = (char *)*pdVar14;
  pcVar1 = (char *)pdVar14[1];
  lVar18 = (long)pcVar1 - (long)pcVar19;
  lStack_2d8 = lVar6;
  if (lVar18 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar18 = lVar18 >> 4;
    if ((ulong)(lVar18 * 0x4ec4ec4ec4ec4ec5) >> 0x3d != 0) {
      FUN_10946e798();
LAB_10946b8e8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10946b8ec);
      (*pcVar4)();
    }
    puVar7 = (undefined8 *)(lVar18 * 0x7627627627627628);
    __Znwm();
    puVar11 = puVar7 + lVar18 * 0xec4ec4ec4ec4ec5;
    puVar12 = puVar7;
    do {
      puVar9 = puVar12;
      if ((*pcVar19 == '\x01') && ((*(uint *)(*(long *)(pcVar19 + 8) + 0x50) & 0xfffffffe) == 2)) {
        pdVar8 = pdVar5;
        FUN_10946b98c(pdVar5,pcVar19);
        if (dVar22 <= 0.0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)0x18;
          __Znwm();
          *puVar9 = &PTR_DAT_110b1ef40;
          puVar9[1] = dVar22 * dVar22;
          puVar9[2] = 1.0 / (dVar22 * dVar22);
        }
        pdStack_690 = &dStack_2d0;
        FUN_109973894(lStack_2d8,pdVar8,puVar9,&pdStack_690,1);
        if (puVar12 < puVar11) {
          puVar9 = puVar12 + 1;
          *puVar12 = pcVar19;
        }
        else {
          uVar21 = ((long)puVar12 - (long)puVar7 >> 3) + 1;
          if (uVar21 >> 0x3d != 0) {
            FUN_10946e798();
            goto LAB_10946b8e8;
          }
          uVar20 = (long)puVar11 - (long)puVar7 >> 2;
          if (uVar20 <= uVar21) {
            uVar20 = uVar21;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar11 - (long)puVar7)) {
            uVar20 = 0x1fffffffffffffff;
          }
          if (uVar20 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10946b8e8;
          }
          puVar10 = (undefined8 *)(uVar20 << 3);
          __Znwm();
          puVar11 = (undefined8 *)((long)puVar10 + ((long)puVar12 - (long)puVar7));
          puVar9 = puVar11 + 1;
          *puVar11 = pcVar19;
          _memcpy();
          puVar11 = puVar10 + uVar20;
          __ZdlPv(puVar7);
          puVar7 = puVar10;
        }
      }
      pcVar19 = pcVar19 + 0xd0;
      puVar12 = puVar9;
    } while (pcVar19 != pcVar1);
    uVar21 = (long)puVar9 - (long)puVar7 >> 3;
    if (2 < uVar21) {
      puVar11 = (undefined8 *)0x38;
      __Znwm();
      puVar12 = (undefined8 *)0x20;
      __Znwm();
      uVar2 = *param_4;
      puVar12[1] = param_4[1];
      *puVar12 = uVar2;
      puVar12[2] = param_4[2];
      puVar12[3] = (double)uVar21 * 10.0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = &PTR_FUN_110af61b8;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 4) = 1;
      puVar13 = (undefined4 *)0x4;
      __Znwm();
      *puVar13 = 6;
      puVar11[2] = puVar13 + 1;
      puVar11[3] = puVar13 + 1;
      *puVar11 = &PTR_FUN_110af6430;
      puVar11[1] = puVar13;
      puVar11[5] = puVar12;
      *(undefined4 *)(puVar11 + 6) = 1;
      pdStack_690 = &dStack_2d0;
      FUN_109973894(lStack_2d8,puVar11,0,&pdStack_690,1);
      uStack_4a8 = 1;
      uStack_4b0 = 0x200000001;
      uStack_4a0 = 0x14;
      uStack_49c = 0;
      uStack_498 = 2;
      uStack_488 = 0x3f1a36e2eb1c432d;
      uStack_490 = 0x3e112e0be826d695;
      uStack_478 = 0x3fe3333333333333;
      uStack_480 = 0x3f50624dd2f1a9fc;
      uStack_470 = 0x500000014;
      uStack_460 = 0x4024000000000000;
      uStack_468 = 0x3feccccccccccccd;
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_440 = 0x41cdcd6500000000;
      uStack_438 = 1;
      uStack_428 = 0x4341c37937e08000;
      uStack_430 = 0x40c3880000000000;
      uStack_418 = 0x3f50624dd2f1a9fc;
      uStack_420 = 0x3949f623d5a8a733;
      uStack_408 = 0x4693b8b5b5056e17;
      uStack_410 = 0x3eb0c6f7a0b5ed8d;
      uStack_400 = 5;
      uStack_3f0 = 0x3ddb7cdfd9d7bdbb;
      uStack_3f8 = 0x3eb0c6f7a0b5ed8d;
      uStack_3e8 = 0x3e45798ee2308c3a;
      uStack_3d8 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3b0 = 0x3f800000;
      uStack_3a8 = 0x200000000;
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_390 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_388 = 0;
      uStack_370 = 0x3f50624dd2f1a9fc;
      uStack_368 = 0x1f400000000;
      uStack_360 = 0x3fb999999999999a;
      uStack_358 = 1;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_319 = 4;
      uStack_330 = 0x706d742f;
      uStack_32c = 0;
      uStack_318 = 1;
      uStack_314 = 0;
      uStack_308 = 0x3eb0c6f7a0b5ed8d;
      uStack_310 = 0x3e45798ee2308c3a;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_3e0 = 0x100000001;
      uStack_44c = 5;
      uStack_354 = 0;
      pdStack_690 = (double *)0x200000001;
      puVar11 = (undefined8 *)0x20;
      uStack_448 = uVar16;
      __Znwm();
      puVar11[1] = 0x7361772065766c6f;
      *puVar11 = 0x533a3a7365726563;
      *(undefined8 *)((long)puVar11 + 0x14) = 0x2e64656c6c616320;
      *(undefined8 *)((long)puVar11 + 0xc) = 0x746f6e2073617720;
      *(undefined1 *)((long)puVar11 + 0x1c) = 0;
      auVar27 = NEON_fmov(0xbff0000000000000,8);
      dStack_678 = -1.58101006669199e-322;
      dStack_680 = 1.38338380835549e-322;
      uStack_668 = auVar27._8_8_;
      uStack_670 = auVar27._0_8_;
      uStack_660 = 0xbff0000000000000;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_648 = 0;
      uStack_640 = 0xffffffffffffffff;
      uStack_638 = 0xffffffffffffffff;
      uStack_610 = 0xbff0000000000000;
      uStack_608 = 0xffffffff;
      uStack_600 = 0xbff0000000000000;
      uStack_5f8 = 0xffffffff;
      uStack_5f0 = 0xbff0000000000000;
      uStack_5e8 = 0xffffffff;
      uStack_5c0 = 0xbff0000000000000;
      uStack_598 = 0xffffffffffffffff;
      uStack_5a0 = 0xffffffffffffffff;
      uStack_5a8 = 0xffffffffffffffff;
      uStack_5b0 = 0xffffffffffffffff;
      uStack_5b8 = 0xffffffffffffffff;
      uStack_590 = 0;
      uStack_584 = 0x200000002;
      uStack_58c = 0xffffffffffffffff;
      uStack_570 = 0;
      uStack_578 = 0;
      uStack_560 = 0;
      uStack_568 = 0;
      uStack_550 = 0;
      uStack_558 = 0;
      uStack_540 = 0;
      uStack_548 = 0;
      uStack_530 = 0;
      uStack_538 = 0;
      uStack_520 = 0;
      uStack_528 = 0;
      uStack_518 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4d0 = 0;
      uStack_4c0 = 0x200000001;
      uStack_4c8 = 0x200000004;
      uStack_4b8 = 0xffffffff00000000;
      puStack_688 = puVar11;
      uStack_630 = uStack_670;
      uStack_628 = uStack_668;
      uStack_620 = uStack_670;
      uStack_618 = uStack_668;
      uStack_5e0 = uStack_670;
      uStack_5d8 = uStack_668;
      uStack_5d0 = uStack_670;
      uStack_5c8 = uStack_668;
      FUN_1099a00a4();
      dVar3 = dStack_2a8;
      dVar26 = dStack_2b0;
      dVar28 = dStack_2b8;
      dVar31 = dStack_2c0;
      dVar30 = dStack_2c8;
      dVar23 = dStack_2d0;
      dVar24 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0 + dStack_2c8 * dStack_2c8;
      if (dVar24 == 0.0) {
        dVar23 = 1.0;
        dVar29 = 0.0;
        dVar30 = 0.0;
        dVar24 = 0.0;
      }
      else {
        dVar24 = SQRT(dVar24);
        dVar25 = dVar24 * 0.5;
        ___sincos_stret();
        dVar29 = (dVar23 * dVar25) / dVar24;
        dVar30 = (dVar30 * dVar25) / dVar24;
        dVar24 = (dVar31 * dVar25) / dVar24;
        dVar23 = extraout_d1;
      }
      extraout_x8[2] = dVar24;
      extraout_x8[3] = dVar23;
      dVar23 = extraout_x8[2];
      dVar31 = extraout_x8[3];
      dVar24 = SQRT(dVar29 * dVar29 + dVar23 * dVar23 + dVar30 * dVar30 + dVar31 * dVar31);
      extraout_x8[1] = dVar30 / dVar24;
      *extraout_x8 = dVar29 / dVar24;
      extraout_x8[3] = dVar31 / dVar24;
      extraout_x8[2] = dVar23 / dVar24;
      extraout_x8[5] = dVar26;
      extraout_x8[4] = dVar28;
      extraout_x8[6] = dVar3;
      func_0x00010937fbc4(&dStack_298,extraout_x8);
      extraout_x8[0xd] = dStack_270;
      extraout_x8[0xc] = dStack_278;
      extraout_x8[0xf] = dStack_260;
      extraout_x8[0xe] = dStack_268;
      extraout_x8[0x10] = dStack_258;
      extraout_x8[9] = dStack_290;
      extraout_x8[8] = dStack_298;
      extraout_x8[0xb] = dStack_280;
      extraout_x8[10] = dStack_288;
      FUN_10943e408(&pdStack_690);
      func_0x00010943e4cc(&uStack_4b0);
      goto joined_r0x00010946b414;
    }
  }
  dVar31 = *pdVar15;
  dVar23 = pdVar15[2];
  dVar30 = pdVar15[3];
  extraout_x8[1] = pdVar15[1];
  *extraout_x8 = dVar31;
  extraout_x8[3] = dVar30;
  extraout_x8[2] = dVar23;
  dVar23 = pdVar15[4];
  extraout_x8[5] = pdVar15[5];
  extraout_x8[4] = dVar23;
  extraout_x8[6] = pdVar15[6];
  dVar31 = pdVar15[0xc];
  dVar23 = pdVar15[0xe];
  dVar30 = pdVar15[0xf];
  extraout_x8[0xd] = pdVar15[0xd];
  extraout_x8[0xc] = dVar31;
  extraout_x8[0xf] = dVar30;
  extraout_x8[0xe] = dVar23;
  extraout_x8[0x10] = pdVar15[0x10];
  dVar23 = pdVar15[8];
  dVar31 = pdVar15[0xb];
  dVar30 = pdVar15[10];
  extraout_x8[9] = pdVar15[9];
  extraout_x8[8] = dVar23;
  extraout_x8[0xb] = dVar31;
  extraout_x8[10] = dVar30;
joined_r0x00010946b414:
  if (puVar7 != (undefined8 *)0x0) {
    __ZdlPv(puVar7);
  }
  lVar18 = lStack_2d8;
  lStack_2d8 = 0;
  if (lVar18 != 0) {
    FUN_1099733ec();
    __ZdlPv();
  }
  FUN_10946af98(pdVar5,pdVar14,extraout_x8);
  if ((0.0 < dVar22) && (iVar17 != 0)) {
    pcVar19 = (char *)*pdVar14;
    pcVar1 = (char *)pdVar14[1];
    if (pcVar19 != pcVar1) {
      do {
        if ((*pcVar19 == '\x01') && (dVar22 * dVar22 < *(double *)(pcVar19 + 0xc0))) {
          *pcVar19 = '\0';
        }
        pcVar19 = pcVar19 + 0xd0;
      } while (pcVar19 != pcVar1);
    }
  }
  return;
}



/* Entry: 10946b1d4; end: 10946b98b;  */

void FUN_10946b1d4(double *param_1,double param_2,undefined8 param_3,long *param_4,double *param_5,
                  undefined8 *param_6,undefined4 param_7,int param_8)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double extraout_d1;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double *pdStack_4d0;
  undefined8 *puStack_4c8;
  double dStack_4c0;
  double dStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 uStack_3d0;
  undefined8 uStack_3cc;
  undefined8 uStack_3c4;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined2 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_159;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  FUN_1093804f0(&pdStack_4d0,param_5);
  dStack_110 = (double)pdStack_4d0 * dStack_4b8;
  dStack_108 = (double)puStack_4c8 * dStack_4b8;
  dStack_100 = dStack_4b8 * dStack_4c0;
  dStack_f0 = param_5[5];
  dStack_f8 = param_5[4];
  dStack_e8 = param_5[6];
  lVar6 = 0x108;
  __Znwm();
  FUN_10997306c();
  pcVar15 = (char *)*param_4;
  pcVar1 = (char *)param_4[1];
  lVar14 = (long)pcVar1 - (long)pcVar15;
  lStack_118 = lVar6;
  if (lVar14 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar14 = lVar14 >> 4;
    if ((ulong)(lVar14 * 0x4ec4ec4ec4ec4ec5) >> 0x3d != 0) {
      FUN_10946e798();
LAB_10946b8e8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10946b8ec);
      (*pcVar5)();
    }
    puVar7 = (undefined8 *)(lVar14 * 0x7627627627627628);
    __Znwm();
    puVar11 = puVar7 + lVar14 * 0xec4ec4ec4ec4ec5;
    puVar12 = puVar7;
    do {
      puVar9 = puVar12;
      if ((*pcVar15 == '\x01') && ((*(uint *)(*(long *)(pcVar15 + 8) + 0x50) & 0xfffffffe) == 2)) {
        uVar8 = param_3;
        FUN_10946b98c(param_3,pcVar15);
        if (param_2 <= 0.0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)0x18;
          __Znwm();
          *puVar9 = &PTR_DAT_110b1ef40;
          puVar9[1] = param_2 * param_2;
          puVar9[2] = 1.0 / (param_2 * param_2);
        }
        pdStack_4d0 = &dStack_110;
        FUN_109973894(lStack_118,uVar8,puVar9,&pdStack_4d0,1);
        if (puVar12 < puVar11) {
          puVar9 = puVar12 + 1;
          *puVar12 = pcVar15;
        }
        else {
          uVar17 = ((long)puVar12 - (long)puVar7 >> 3) + 1;
          if (uVar17 >> 0x3d != 0) {
            FUN_10946e798();
            goto LAB_10946b8e8;
          }
          uVar16 = (long)puVar11 - (long)puVar7 >> 2;
          if (uVar16 <= uVar17) {
            uVar16 = uVar17;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar11 - (long)puVar7)) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10946b8e8;
          }
          puVar10 = (undefined8 *)(uVar16 << 3);
          __Znwm();
          puVar11 = (undefined8 *)((long)puVar10 + ((long)puVar12 - (long)puVar7));
          puVar9 = puVar11 + 1;
          *puVar11 = pcVar15;
          _memcpy();
          puVar11 = puVar10 + uVar16;
          __ZdlPv(puVar7);
          puVar7 = puVar10;
        }
      }
      pcVar15 = pcVar15 + 0xd0;
      puVar12 = puVar9;
    } while (pcVar15 != pcVar1);
    uVar17 = (long)puVar9 - (long)puVar7 >> 3;
    if (2 < uVar17) {
      puVar11 = (undefined8 *)0x38;
      __Znwm();
      puVar12 = (undefined8 *)0x20;
      __Znwm();
      uVar8 = *param_6;
      puVar12[1] = param_6[1];
      *puVar12 = uVar8;
      puVar12[2] = param_6[2];
      puVar12[3] = (double)uVar17 * 10.0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = &PTR_FUN_110af61b8;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 4) = 1;
      puVar13 = (undefined4 *)0x4;
      __Znwm();
      *puVar13 = 6;
      puVar11[2] = puVar13 + 1;
      puVar11[3] = puVar13 + 1;
      *puVar11 = &PTR_FUN_110af6430;
      puVar11[1] = puVar13;
      puVar11[5] = puVar12;
      *(undefined4 *)(puVar11 + 6) = 1;
      pdStack_4d0 = &dStack_110;
      FUN_109973894(lStack_118,puVar11,0,&pdStack_4d0,1);
      uStack_2e8 = 1;
      uStack_2f0 = 0x200000001;
      uStack_2e0 = 0x14;
      uStack_2dc = 0;
      uStack_2d8 = 2;
      uStack_2c8 = 0x3f1a36e2eb1c432d;
      uStack_2d0 = 0x3e112e0be826d695;
      uStack_2b8 = 0x3fe3333333333333;
      uStack_2c0 = 0x3f50624dd2f1a9fc;
      uStack_2b0 = 0x500000014;
      uStack_2a0 = 0x4024000000000000;
      uStack_2a8 = 0x3feccccccccccccd;
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_280 = 0x41cdcd6500000000;
      uStack_278 = 1;
      uStack_268 = 0x4341c37937e08000;
      uStack_270 = 0x40c3880000000000;
      uStack_258 = 0x3f50624dd2f1a9fc;
      uStack_260 = 0x3949f623d5a8a733;
      uStack_248 = 0x4693b8b5b5056e17;
      uStack_250 = 0x3eb0c6f7a0b5ed8d;
      uStack_240 = 5;
      uStack_230 = 0x3ddb7cdfd9d7bdbb;
      uStack_238 = 0x3eb0c6f7a0b5ed8d;
      uStack_228 = 0x3e45798ee2308c3a;
      uStack_218 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1f0 = 0x3f800000;
      uStack_1e8 = 0x200000000;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1d0 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0x3f50624dd2f1a9fc;
      uStack_1a8 = 0x1f400000000;
      uStack_1a0 = 0x3fb999999999999a;
      uStack_198 = 1;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_159 = 4;
      uStack_170 = 0x706d742f;
      uStack_16c = 0;
      uStack_158 = 1;
      uStack_154 = 0;
      uStack_148 = 0x3eb0c6f7a0b5ed8d;
      uStack_150 = 0x3e45798ee2308c3a;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_220 = 0x100000001;
      uStack_28c = 5;
      uStack_194 = 0;
      pdStack_4d0 = (double *)0x200000001;
      puVar11 = (undefined8 *)0x20;
      uStack_288 = param_7;
      __Znwm();
      puVar11[1] = 0x7361772065766c6f;
      *puVar11 = 0x533a3a7365726563;
      *(undefined8 *)((long)puVar11 + 0x14) = 0x2e64656c6c616320;
      *(undefined8 *)((long)puVar11 + 0xc) = 0x746f6e2073617720;
      *(undefined1 *)((long)puVar11 + 0x1c) = 0;
      auVar22 = NEON_fmov(0xbff0000000000000,8);
      dStack_4b8 = -1.58101006669199e-322;
      dStack_4c0 = 1.38338380835549e-322;
      uStack_4a8 = auVar22._8_8_;
      uStack_4b0 = auVar22._0_8_;
      uStack_4a0 = 0xbff0000000000000;
      uStack_498 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_480 = 0xffffffffffffffff;
      uStack_478 = 0xffffffffffffffff;
      uStack_450 = 0xbff0000000000000;
      uStack_448 = 0xffffffff;
      uStack_440 = 0xbff0000000000000;
      uStack_438 = 0xffffffff;
      uStack_430 = 0xbff0000000000000;
      uStack_428 = 0xffffffff;
      uStack_400 = 0xbff0000000000000;
      uStack_3d8 = 0xffffffffffffffff;
      uStack_3e0 = 0xffffffffffffffff;
      uStack_3e8 = 0xffffffffffffffff;
      uStack_3f0 = 0xffffffffffffffff;
      uStack_3f8 = 0xffffffffffffffff;
      uStack_3d0 = 0;
      uStack_3c4 = 0x200000002;
      uStack_3cc = 0xffffffffffffffff;
      uStack_3b0 = 0;
      uStack_3b8 = 0;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      uStack_390 = 0;
      uStack_398 = 0;
      uStack_380 = 0;
      uStack_388 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_358 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_310 = 0;
      uStack_300 = 0x200000001;
      uStack_308 = 0x200000004;
      uStack_2f8 = 0xffffffff00000000;
      puStack_4c8 = puVar11;
      uStack_470 = uStack_4b0;
      uStack_468 = uStack_4a8;
      uStack_460 = uStack_4b0;
      uStack_458 = uStack_4a8;
      uStack_420 = uStack_4b0;
      uStack_418 = uStack_4a8;
      uStack_410 = uStack_4b0;
      uStack_408 = uStack_4a8;
      FUN_1099a00a4();
      dVar4 = dStack_e8;
      dVar3 = dStack_f0;
      dVar2 = dStack_f8;
      dVar18 = dStack_100;
      dVar24 = dStack_108;
      dVar19 = dStack_110;
      dVar20 = dStack_100 * dStack_100 + dStack_110 * dStack_110 + dStack_108 * dStack_108;
      if (dVar20 == 0.0) {
        dVar19 = 1.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar20 = 0.0;
      }
      else {
        dVar20 = SQRT(dVar20);
        dVar21 = dVar20 * 0.5;
        ___sincos_stret();
        dVar23 = (dVar19 * dVar21) / dVar20;
        dVar24 = (dVar24 * dVar21) / dVar20;
        dVar20 = (dVar18 * dVar21) / dVar20;
        dVar19 = extraout_d1;
      }
      param_1[2] = dVar20;
      param_1[3] = dVar19;
      dVar19 = param_1[2];
      dVar18 = param_1[3];
      dVar20 = SQRT(dVar23 * dVar23 + dVar19 * dVar19 + dVar24 * dVar24 + dVar18 * dVar18);
      param_1[1] = dVar24 / dVar20;
      *param_1 = dVar23 / dVar20;
      param_1[3] = dVar18 / dVar20;
      param_1[2] = dVar19 / dVar20;
      param_1[5] = dVar3;
      param_1[4] = dVar2;
      param_1[6] = dVar4;
      func_0x00010937fbc4(&dStack_d8,param_1);
      param_1[0xd] = dStack_b0;
      param_1[0xc] = dStack_b8;
      param_1[0xf] = dStack_a0;
      param_1[0xe] = dStack_a8;
      param_1[0x10] = dStack_98;
      param_1[9] = dStack_d0;
      param_1[8] = dStack_d8;
      param_1[0xb] = dStack_c0;
      param_1[10] = dStack_c8;
      FUN_10943e408(&pdStack_4d0);
      func_0x00010943e4cc(&uStack_2f0);
      goto joined_r0x00010946b414;
    }
  }
  dVar18 = *param_5;
  dVar19 = param_5[2];
  dVar24 = param_5[3];
  param_1[1] = param_5[1];
  *param_1 = dVar18;
  param_1[3] = dVar24;
  param_1[2] = dVar19;
  dVar19 = param_5[4];
  param_1[5] = param_5[5];
  param_1[4] = dVar19;
  param_1[6] = param_5[6];
  dVar18 = param_5[0xc];
  dVar19 = param_5[0xe];
  dVar24 = param_5[0xf];
  param_1[0xd] = param_5[0xd];
  param_1[0xc] = dVar18;
  param_1[0xf] = dVar24;
  param_1[0xe] = dVar19;
  param_1[0x10] = param_5[0x10];
  dVar19 = param_5[8];
  dVar18 = param_5[0xb];
  dVar24 = param_5[10];
  param_1[9] = param_5[9];
  param_1[8] = dVar19;
  param_1[0xb] = dVar18;
  param_1[10] = dVar24;
joined_r0x00010946b414:
  if (puVar7 != (undefined8 *)0x0) {
    __ZdlPv(puVar7);
  }
  lVar14 = lStack_118;
  lStack_118 = 0;
  if (lVar14 != 0) {
    FUN_1099733ec();
    __ZdlPv();
  }
  FUN_10946af98(param_3,param_4,param_1);
  if ((0.0 < param_2) && (param_8 != 0)) {
    pcVar15 = (char *)*param_4;
    pcVar1 = (char *)param_4[1];
    if (pcVar15 != pcVar1) {
      do {
        if ((*pcVar15 == '\x01') && (param_2 * param_2 < *(double *)(pcVar15 + 0xc0))) {
          *pcVar15 = '\0';
        }
        pcVar15 = pcVar15 + 0xd0;
      } while (pcVar15 != pcVar1);
    }
  }
  return;
}



/* Entry: 10946b98c; end: 10946bac7;  */

undefined8 * FUN_10946b98c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar2 = (undefined8 *)0xb0;
  __Znwm();
  puVar2[8] = *param_1;
  uVar5 = param_1[2];
  uVar8 = param_1[5];
  uVar7 = param_1[4];
  puVar2[0xb] = param_1[3];
  puVar2[10] = uVar5;
  puVar2[0xd] = uVar8;
  puVar2[0xc] = uVar7;
  uVar5 = param_1[6];
  uVar8 = param_1[9];
  uVar7 = param_1[8];
  puVar2[0xf] = param_1[7];
  puVar2[0xe] = uVar5;
  puVar2[0x11] = uVar8;
  puVar2[0x10] = uVar7;
  *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(param_1 + 10);
  FUN_10937da58(puVar2 + 0x13,param_1 + 0xb);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  puVar2[5] = *(undefined8 *)(param_2 + 0x28);
  puVar2[4] = uVar5;
  dVar6 = (double)param_1[2];
  puVar2[5] = (double)puVar2[5] - (double)param_1[3];
  puVar2[4] = (double)puVar2[4] - dVar6;
  puVar2[6] = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(long *)(param_2 + 8);
  uVar5 = *(undefined8 *)(lVar4 + 8);
  puVar2[1] = *(undefined8 *)(lVar4 + 0x10);
  *puVar2 = uVar5;
  puVar2[2] = *(undefined8 *)(lVar4 + 0x18);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_DAT_110af64c8;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 4) = 2;
  puVar3 = (undefined4 *)0x4;
  __Znwm();
  *puVar3 = 6;
  puVar1[2] = puVar3 + 1;
  puVar1[3] = puVar3 + 1;
  *puVar1 = &PTR_FUN_110af6470;
  puVar1[1] = puVar3;
  puVar1[5] = puVar2;
  *(undefined4 *)(puVar1 + 6) = 1;
  return puVar1;
}



/* Entry: 10946bac8; end: 10946bb37;  */

undefined8 * FUN_10946bac8(undefined8 *param_1)

{
  _free(param_1[0x20]);
  _free(param_1[0x1e]);
  _free(param_1[0x1c]);
  _free(param_1[0x1a]);
  _free(param_1[0x18]);
  _free(param_1[0xb]);
  _free(param_1[9]);
  _free(param_1[7]);
  _free(param_1[3]);
  _free(*param_1);
  return param_1;
}



/* Entry: 10946bb38; end: 10946bbff;  */

long FUN_10946bb38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != lVar2) {
      do {
        lVar3 = lVar1 + -0xa0;
        _free(*(undefined8 *)(lVar1 + -0x18));
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 0x10) = lVar2;
    _free(lVar3);
  }
  return param_1;
}



/* Entry: 10946bc00; end: 10946bc13;  */

void FUN_10946bc00(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 != 0) {
    if (param_2 < 0x19999999999999a) {
      lVar1 = param_2 * 0xa0;
      _malloc();
      if (lVar1 != 0) goto LAB_10946bc88;
    }
    plVar2 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  lVar1 = 0;
LAB_10946bc88:
  lVar3 = lVar1 + param_3 * 0xa0;
  *plVar2 = lVar1;
  plVar2[1] = lVar3;
  plVar2[2] = lVar3;
  plVar2[3] = lVar1 + param_2 * 0xa0;
  return;
}



/* Entry: 10946bc14; end: 10946bcab;  */

void FUN_10946bc14(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 != 0) {
    if (param_2 < 0x19999999999999a) {
      lVar1 = param_2 * 0xa0;
      _malloc();
      if (lVar1 != 0) goto LAB_10946bc88;
    }
    param_1 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  lVar1 = 0;
LAB_10946bc88:
  lVar2 = lVar1 + param_3 * 0xa0;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0xa0;
  return;
}



/* Entry: 10946bcac; end: 10946be67;  */

void FUN_10946bcac(float *param_1,ulong param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_40bc;
  float fStack_40b8;
  float fStack_40b4;
  float *pfStack_40b0;
  ulong uStack_40a8;
  float afStack_4090 [4096];
  ulong uStack_90;
  long lStack_78;
  undefined1 auVar12 [16];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 1) {
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x00010946be60:
    uVar1 = param_2;
    if (lVar5 == lStack_78) {
      return;
    }
  }
  else {
    fStack_40b8 = 1.0;
    fStack_40b4 = 0.0;
    fStack_40bc = 0.0;
    if ((long)param_2 < 1) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x00010946be60;
    }
    lVar5 = 0;
    uVar7 = param_2;
    pfVar4 = param_1;
    do {
      uVar1 = uVar7;
      if (0xfff < (long)uVar7) {
        uVar1 = 0x1000;
      }
      uVar3 = uVar1 + 3;
      if (-1 < (long)uVar1) {
        uVar3 = uVar1;
      }
      uVar8 = uVar3 & 0xfffffffffffffffc;
      uStack_90 = uVar1;
      if (3 < (long)uVar7) {
        uVar2 = uVar8;
        if ((long)uVar8 < 5) {
          uVar2 = 4;
        }
        _memcpy(afStack_4090,pfVar4,uVar2 * 4);
      }
      if ((long)uVar8 < (long)uVar1) {
        lVar6 = (long)uVar3 >> 2;
        _memcpy(afStack_4090 + lVar6 * 4,pfVar4 + lVar6 * 4,uVar1 * 4 + lVar6 * -0x10);
      }
      uStack_40a8 = uStack_90;
      param_3 = &fStack_40bc;
      param_4 = &fStack_40b4;
      param_5 = &fStack_40b8;
      param_1 = afStack_4090;
      uVar1 = uStack_90;
      pfStack_40b0 = afStack_4090;
      FUN_10946be68();
      lVar5 = lVar5 + 0x1000;
      pfVar4 = pfVar4 + 0x1000;
      uVar7 = uVar7 - 0x1000;
    } while (lVar5 < (long)param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar7 = uVar1 + 7;
  if (-1 < (long)uVar1) {
    uVar7 = uVar1;
  }
  uVar7 = uVar7 & 0xfffffffffffffff8;
  uVar3 = uVar1 + 3;
  uVar8 = uVar3;
  if (-1 < (long)uVar1) {
    uVar8 = uVar1;
  }
  uVar2 = uVar8 & 0xfffffffffffffffc;
  if (uVar3 < 7) {
    fVar10 = ABS(*param_1);
    if (1 < (long)uVar1) {
      lVar5 = uVar1 - 1;
      pfVar4 = param_1;
      fVar13 = fVar10;
      do {
        pfVar4 = pfVar4 + 1;
        fVar10 = ABS(*pfVar4);
        if (ABS(*pfVar4) <= fVar13) {
          fVar10 = fVar13;
        }
        lVar5 = lVar5 + -1;
        fVar13 = fVar10;
      } while (lVar5 != 0);
    }
  }
  else {
    auVar20._0_4_ = ABS(*param_1);
    auVar20._4_4_ = ABS(param_1[1]);
    auVar20._8_4_ = ABS(param_1[2]);
    auVar20._12_4_ = ABS(param_1[3]);
    if (7 < (long)uVar1) {
      auVar14._0_4_ = ABS(param_1[4]);
      auVar14._4_4_ = ABS(param_1[5]);
      auVar14._8_4_ = ABS(param_1[6]);
      auVar14._12_4_ = ABS(param_1[7]);
      if (0xf < uVar1) {
        pfVar4 = param_1 + 0xc;
        lVar5 = 8;
        do {
          auVar18._0_4_ = ABS(pfVar4[-4]);
          auVar18._4_4_ = ABS(pfVar4[-3]);
          auVar18._8_4_ = ABS(pfVar4[-2]);
          auVar18._12_4_ = ABS(pfVar4[-1]);
          auVar20 = NEON_fmax(auVar20,auVar18,4);
          auVar19._0_4_ = ABS((float)*(undefined8 *)pfVar4);
          auVar19._4_4_ = ABS((float)((ulong)*(undefined8 *)pfVar4 >> 0x20));
          auVar19._8_4_ = ABS((float)*(undefined8 *)(pfVar4 + 2));
          auVar19._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20));
          auVar14 = NEON_fmax(auVar14,auVar19,4);
          lVar5 = lVar5 + 8;
          pfVar4 = pfVar4 + 8;
        } while (lVar5 < (long)uVar7);
      }
      auVar20 = NEON_fmax(auVar20,auVar14,4);
      if ((long)uVar7 < (long)uVar2) {
        pfVar4 = param_1 + uVar7;
        auVar15._0_4_ = ABS(*pfVar4);
        auVar15._4_4_ = ABS(pfVar4[1]);
        auVar15._8_4_ = ABS(pfVar4[2]);
        auVar15._12_4_ = ABS(pfVar4[3]);
        auVar20 = NEON_fmax(auVar20,auVar15,4);
      }
    }
    auVar14 = NEON_ext(auVar20,auVar20,8,1);
    uVar9 = auVar20._0_8_ ^
            (auVar20._0_8_ ^ auVar14._0_8_) &
            CONCAT44(-(uint)(auVar20._4_4_ < auVar14._4_4_),-(uint)(auVar20._0_4_ < auVar14._0_4_));
    fVar10 = (float)(uVar9 >> 0x20);
    uVar11 = (ulong)(uint)fVar10;
    if (fVar10 <= (float)uVar9) {
      uVar11 = uVar9 & 0xffffffff;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar11;
    fVar10 = (float)uVar11;
    lVar5 = (long)uVar1 % 4;
    if (lVar5 != 0 && lVar5 < 0 == SBORROW8(uVar1,uVar2)) {
      pfVar4 = param_1 + ((long)uVar8 >> 2) * 4;
      do {
        fVar10 = ABS(*pfVar4);
        if (ABS(*pfVar4) <= auVar12._0_4_) {
          fVar10 = auVar12._0_4_;
        }
        auVar12 = ZEXT416((uint)fVar10);
        lVar5 = lVar5 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  fVar13 = *param_4;
  if (fVar10 <= fVar13) {
    if (NAN(fVar10)) {
LAB_10946bfd8:
      *param_4 = fVar10;
      fVar13 = fVar10;
    }
joined_r0x00010946bfe4:
    if (fVar13 <= 0.0) {
      return;
    }
  }
  else {
    *param_3 = (fVar13 / fVar10) * (fVar13 / fVar10) * *param_3;
    if (1.0 / fVar10 <= 3.4028235e+38) {
      if (3.4028235e+38 < fVar10) {
        *param_5 = 1.0;
        goto LAB_10946bfd8;
      }
      *param_4 = fVar10;
      *param_5 = 1.0 / fVar10;
      fVar13 = *param_4;
      goto joined_r0x00010946bfe4;
    }
    *param_5 = 3.4028235e+38;
    *param_4 = 2.938736e-39;
  }
  if (uVar1 == 0) {
    *param_3 = *param_3 + 0.0;
    return;
  }
  fVar10 = *param_5;
  if (uVar3 < 7) {
    fVar13 = fVar10 * *param_1 * fVar10 * *param_1;
    if (1 < (long)uVar1) {
      if (uVar1 < 9) {
        uVar3 = 1;
      }
      else {
        uVar8 = uVar1 - 1 & 0xfffffffffffffff8;
        uVar3 = uVar8 | 1;
        pfVar4 = param_1 + 5;
        uVar7 = uVar8;
        do {
          fVar21 = (float)*(undefined8 *)pfVar4 * fVar10;
          fVar23 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar10;
          fVar25 = (float)*(undefined8 *)(pfVar4 + 2) * fVar10;
          fVar27 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * fVar10;
          fVar13 = fVar13 + pfVar4[-4] * fVar10 * pfVar4[-4] * fVar10 +
                   pfVar4[-3] * fVar10 * pfVar4[-3] * fVar10 +
                   pfVar4[-2] * fVar10 * pfVar4[-2] * fVar10 +
                   pfVar4[-1] * fVar10 * pfVar4[-1] * fVar10 + fVar21 * fVar21 + fVar23 * fVar23 +
                   fVar25 * fVar25 + fVar27 * fVar27;
          pfVar4 = pfVar4 + 8;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0);
        if (uVar1 - 1 == uVar8) goto LAB_10946c174;
      }
      lVar5 = uVar1 - uVar3;
      pfVar4 = param_1 + uVar3;
      do {
        fVar13 = fVar13 + fVar10 * *pfVar4 * fVar10 * *pfVar4;
        lVar5 = lVar5 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  else {
    auVar16._0_4_ = *param_1 * fVar10 * *param_1 * fVar10;
    auVar16._4_4_ = param_1[1] * fVar10 * param_1[1] * fVar10;
    auVar16._8_4_ = param_1[2] * fVar10 * param_1[2] * fVar10;
    auVar16._12_4_ = param_1[3] * fVar10 * param_1[3] * fVar10;
    if (7 < (long)uVar1) {
      fVar13 = param_1[4] * fVar10 * param_1[4] * fVar10;
      fVar21 = param_1[5] * fVar10 * param_1[5] * fVar10;
      fVar23 = param_1[6] * fVar10 * param_1[6] * fVar10;
      fVar25 = param_1[7] * fVar10 * param_1[7] * fVar10;
      auVar17 = auVar16;
      if (0xf < uVar1) {
        pfVar4 = param_1 + 0xc;
        lVar5 = 8;
        do {
          fVar27 = (float)*(undefined8 *)(pfVar4 + -4) * fVar10;
          fVar22 = (float)((ulong)*(undefined8 *)(pfVar4 + -4) >> 0x20) * fVar10;
          fVar24 = (float)*(undefined8 *)(pfVar4 + -2) * fVar10;
          fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20) * fVar10;
          auVar17._0_4_ = auVar16._0_4_ + fVar27 * fVar27;
          auVar17._4_4_ = auVar16._4_4_ + fVar22 * fVar22;
          auVar17._8_4_ = auVar16._8_4_ + fVar24 * fVar24;
          auVar17._12_4_ = auVar16._12_4_ + fVar26 * fVar26;
          fVar27 = (float)*(undefined8 *)pfVar4 * fVar10;
          fVar22 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar10;
          fVar24 = (float)*(undefined8 *)(pfVar4 + 2) * fVar10;
          fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * fVar10;
          fVar13 = fVar13 + fVar27 * fVar27;
          fVar21 = fVar21 + fVar22 * fVar22;
          fVar23 = fVar23 + fVar24 * fVar24;
          fVar25 = fVar25 + fVar26 * fVar26;
          lVar5 = lVar5 + 8;
          pfVar4 = pfVar4 + 8;
          auVar16 = auVar17;
        } while (lVar5 < (long)uVar7);
      }
      auVar16._0_4_ = fVar13 + auVar17._0_4_;
      auVar16._4_4_ = fVar21 + auVar17._4_4_;
      auVar16._8_4_ = fVar23 + auVar17._8_4_;
      auVar16._12_4_ = fVar25 + auVar17._12_4_;
      if ((long)uVar7 < (long)uVar2) {
        pfVar4 = param_1 + uVar7;
        auVar16._0_4_ = auVar16._0_4_ + *pfVar4 * fVar10 * *pfVar4 * fVar10;
        auVar16._4_4_ = auVar16._4_4_ + pfVar4[1] * fVar10 * pfVar4[1] * fVar10;
        auVar16._8_4_ = auVar16._8_4_ + pfVar4[2] * fVar10 * pfVar4[2] * fVar10;
        auVar16._12_4_ = auVar16._12_4_ + pfVar4[3] * fVar10 * pfVar4[3] * fVar10;
      }
    }
    auVar20 = NEON_ext(auVar16,auVar16,8,1);
    fVar13 = auVar16._0_4_ + auVar20._0_4_ + auVar16._4_4_ + auVar20._4_4_;
    uVar7 = (long)uVar1 % 4;
    if (uVar7 != 0 && (long)uVar7 < 0 == SBORROW8(uVar1,uVar2)) {
      if (7 < uVar7) {
        uVar9 = uVar7 & 0xfffffffffffffff8;
        uVar2 = uVar2 + uVar9;
        pfVar4 = param_1 + ((long)uVar8 >> 2) * 4 + 4;
        uVar3 = uVar9;
        do {
          fVar21 = (float)*(undefined8 *)pfVar4 * fVar10;
          fVar23 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar10;
          fVar25 = (float)*(undefined8 *)(pfVar4 + 2) * fVar10;
          fVar27 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * fVar10;
          fVar13 = fVar13 + pfVar4[-4] * fVar10 * pfVar4[-4] * fVar10 +
                   pfVar4[-3] * fVar10 * pfVar4[-3] * fVar10 +
                   pfVar4[-2] * fVar10 * pfVar4[-2] * fVar10 +
                   pfVar4[-1] * fVar10 * pfVar4[-1] * fVar10 + fVar21 * fVar21 + fVar23 * fVar23 +
                   fVar25 * fVar25 + fVar27 * fVar27;
          pfVar4 = pfVar4 + 8;
          uVar3 = uVar3 - 8;
        } while (uVar3 != 0);
        if (uVar7 == uVar9) goto LAB_10946c174;
      }
      lVar5 = uVar1 - uVar2;
      pfVar4 = param_1 + uVar2;
      do {
        fVar13 = fVar13 + fVar10 * *pfVar4 * fVar10 * *pfVar4;
        lVar5 = lVar5 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_10946c174:
  *param_3 = fVar13 + *param_3;
  return;
}



/* Entry: 10946be68; end: 10946c21b;  */

void FUN_10946be68(float *param_1,ulong param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar10 [16];
  
  uVar4 = param_2 + 7;
  if (-1 < (long)param_2) {
    uVar4 = param_2;
  }
  uVar4 = uVar4 & 0xfffffffffffffff8;
  uVar2 = param_2 + 3;
  uVar5 = uVar2;
  if (-1 < (long)param_2) {
    uVar5 = param_2;
  }
  uVar1 = uVar5 & 0xfffffffffffffffc;
  if (uVar2 < 7) {
    fVar8 = ABS(*param_1);
    if (1 < (long)param_2) {
      lVar7 = param_2 - 1;
      pfVar3 = param_1;
      fVar11 = fVar8;
      do {
        pfVar3 = pfVar3 + 1;
        fVar8 = ABS(*pfVar3);
        if (ABS(*pfVar3) <= fVar11) {
          fVar8 = fVar11;
        }
        lVar7 = lVar7 + -1;
        fVar11 = fVar8;
      } while (lVar7 != 0);
    }
  }
  else {
    auVar18._0_4_ = ABS(*param_1);
    auVar18._4_4_ = ABS(param_1[1]);
    auVar18._8_4_ = ABS(param_1[2]);
    auVar18._12_4_ = ABS(param_1[3]);
    if (7 < (long)param_2) {
      auVar12._0_4_ = ABS(param_1[4]);
      auVar12._4_4_ = ABS(param_1[5]);
      auVar12._8_4_ = ABS(param_1[6]);
      auVar12._12_4_ = ABS(param_1[7]);
      if (0xf < param_2) {
        pfVar3 = param_1 + 0xc;
        lVar7 = 8;
        do {
          auVar16._0_4_ = ABS(pfVar3[-4]);
          auVar16._4_4_ = ABS(pfVar3[-3]);
          auVar16._8_4_ = ABS(pfVar3[-2]);
          auVar16._12_4_ = ABS(pfVar3[-1]);
          auVar18 = NEON_fmax(auVar18,auVar16,4);
          auVar17._0_4_ = ABS((float)*(undefined8 *)pfVar3);
          auVar17._4_4_ = ABS((float)((ulong)*(undefined8 *)pfVar3 >> 0x20));
          auVar17._8_4_ = ABS((float)*(undefined8 *)(pfVar3 + 2));
          auVar17._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20));
          auVar12 = NEON_fmax(auVar12,auVar17,4);
          lVar7 = lVar7 + 8;
          pfVar3 = pfVar3 + 8;
        } while (lVar7 < (long)uVar4);
      }
      auVar18 = NEON_fmax(auVar18,auVar12,4);
      if ((long)uVar4 < (long)uVar1) {
        pfVar3 = param_1 + uVar4;
        auVar13._0_4_ = ABS(*pfVar3);
        auVar13._4_4_ = ABS(pfVar3[1]);
        auVar13._8_4_ = ABS(pfVar3[2]);
        auVar13._12_4_ = ABS(pfVar3[3]);
        auVar18 = NEON_fmax(auVar18,auVar13,4);
      }
    }
    auVar12 = NEON_ext(auVar18,auVar18,8,1);
    uVar6 = auVar18._0_8_ ^
            (auVar18._0_8_ ^ auVar12._0_8_) &
            CONCAT44(-(uint)(auVar18._4_4_ < auVar12._4_4_),-(uint)(auVar18._0_4_ < auVar12._0_4_));
    fVar8 = (float)(uVar6 >> 0x20);
    uVar9 = (ulong)(uint)fVar8;
    if (fVar8 <= (float)uVar6) {
      uVar9 = uVar6 & 0xffffffff;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar9;
    fVar8 = (float)uVar9;
    lVar7 = (long)param_2 % 4;
    if (lVar7 != 0 && lVar7 < 0 == SBORROW8(param_2,uVar1)) {
      pfVar3 = param_1 + ((long)uVar5 >> 2) * 4;
      do {
        fVar8 = ABS(*pfVar3);
        if (ABS(*pfVar3) <= auVar10._0_4_) {
          fVar8 = auVar10._0_4_;
        }
        auVar10 = ZEXT416((uint)fVar8);
        lVar7 = lVar7 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar7 != 0);
    }
  }
  fVar11 = *param_4;
  if (fVar8 <= fVar11) {
    if (NAN(fVar8)) {
LAB_10946bfd8:
      *param_4 = fVar8;
      fVar11 = fVar8;
    }
joined_r0x00010946bfe4:
    if (fVar11 <= 0.0) {
      return;
    }
  }
  else {
    *param_3 = (fVar11 / fVar8) * (fVar11 / fVar8) * *param_3;
    if (1.0 / fVar8 <= 3.4028235e+38) {
      if (3.4028235e+38 < fVar8) {
        *param_5 = 1.0;
        goto LAB_10946bfd8;
      }
      *param_4 = fVar8;
      *param_5 = 1.0 / fVar8;
      fVar11 = *param_4;
      goto joined_r0x00010946bfe4;
    }
    *param_5 = 3.4028235e+38;
    *param_4 = 2.938736e-39;
  }
  if (param_2 == 0) {
    *param_3 = *param_3 + 0.0;
    return;
  }
  fVar8 = *param_5;
  if (uVar2 < 7) {
    fVar11 = fVar8 * *param_1 * fVar8 * *param_1;
    if (1 < (long)param_2) {
      if (param_2 < 9) {
        uVar2 = 1;
      }
      else {
        uVar5 = param_2 - 1 & 0xfffffffffffffff8;
        uVar2 = uVar5 | 1;
        pfVar3 = param_1 + 5;
        uVar4 = uVar5;
        do {
          fVar19 = (float)*(undefined8 *)pfVar3 * fVar8;
          fVar21 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar8;
          fVar23 = (float)*(undefined8 *)(pfVar3 + 2) * fVar8;
          fVar25 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * fVar8;
          fVar11 = fVar11 + pfVar3[-4] * fVar8 * pfVar3[-4] * fVar8 +
                   pfVar3[-3] * fVar8 * pfVar3[-3] * fVar8 + pfVar3[-2] * fVar8 * pfVar3[-2] * fVar8
                   + pfVar3[-1] * fVar8 * pfVar3[-1] * fVar8 + fVar19 * fVar19 + fVar21 * fVar21 +
                   fVar23 * fVar23 + fVar25 * fVar25;
          pfVar3 = pfVar3 + 8;
          uVar4 = uVar4 - 8;
        } while (uVar4 != 0);
        if (param_2 - 1 == uVar5) goto LAB_10946c174;
      }
      lVar7 = param_2 - uVar2;
      pfVar3 = param_1 + uVar2;
      do {
        fVar11 = fVar11 + fVar8 * *pfVar3 * fVar8 * *pfVar3;
        lVar7 = lVar7 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar7 != 0);
    }
  }
  else {
    auVar14._0_4_ = *param_1 * fVar8 * *param_1 * fVar8;
    auVar14._4_4_ = param_1[1] * fVar8 * param_1[1] * fVar8;
    auVar14._8_4_ = param_1[2] * fVar8 * param_1[2] * fVar8;
    auVar14._12_4_ = param_1[3] * fVar8 * param_1[3] * fVar8;
    if (7 < (long)param_2) {
      fVar11 = param_1[4] * fVar8 * param_1[4] * fVar8;
      fVar19 = param_1[5] * fVar8 * param_1[5] * fVar8;
      fVar21 = param_1[6] * fVar8 * param_1[6] * fVar8;
      fVar23 = param_1[7] * fVar8 * param_1[7] * fVar8;
      auVar15 = auVar14;
      if (0xf < param_2) {
        pfVar3 = param_1 + 0xc;
        lVar7 = 8;
        do {
          fVar25 = (float)*(undefined8 *)(pfVar3 + -4) * fVar8;
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar3 + -4) >> 0x20) * fVar8;
          fVar22 = (float)*(undefined8 *)(pfVar3 + -2) * fVar8;
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20) * fVar8;
          auVar15._0_4_ = auVar14._0_4_ + fVar25 * fVar25;
          auVar15._4_4_ = auVar14._4_4_ + fVar20 * fVar20;
          auVar15._8_4_ = auVar14._8_4_ + fVar22 * fVar22;
          auVar15._12_4_ = auVar14._12_4_ + fVar24 * fVar24;
          fVar25 = (float)*(undefined8 *)pfVar3 * fVar8;
          fVar20 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar8;
          fVar22 = (float)*(undefined8 *)(pfVar3 + 2) * fVar8;
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * fVar8;
          fVar11 = fVar11 + fVar25 * fVar25;
          fVar19 = fVar19 + fVar20 * fVar20;
          fVar21 = fVar21 + fVar22 * fVar22;
          fVar23 = fVar23 + fVar24 * fVar24;
          lVar7 = lVar7 + 8;
          pfVar3 = pfVar3 + 8;
          auVar14 = auVar15;
        } while (lVar7 < (long)uVar4);
      }
      auVar14._0_4_ = fVar11 + auVar15._0_4_;
      auVar14._4_4_ = fVar19 + auVar15._4_4_;
      auVar14._8_4_ = fVar21 + auVar15._8_4_;
      auVar14._12_4_ = fVar23 + auVar15._12_4_;
      if ((long)uVar4 < (long)uVar1) {
        pfVar3 = param_1 + uVar4;
        auVar14._0_4_ = auVar14._0_4_ + *pfVar3 * fVar8 * *pfVar3 * fVar8;
        auVar14._4_4_ = auVar14._4_4_ + pfVar3[1] * fVar8 * pfVar3[1] * fVar8;
        auVar14._8_4_ = auVar14._8_4_ + pfVar3[2] * fVar8 * pfVar3[2] * fVar8;
        auVar14._12_4_ = auVar14._12_4_ + pfVar3[3] * fVar8 * pfVar3[3] * fVar8;
      }
    }
    auVar18 = NEON_ext(auVar14,auVar14,8,1);
    fVar11 = auVar14._0_4_ + auVar18._0_4_ + auVar14._4_4_ + auVar18._4_4_;
    uVar4 = (long)param_2 % 4;
    if (uVar4 != 0 && (long)uVar4 < 0 == SBORROW8(param_2,uVar1)) {
      if (7 < uVar4) {
        uVar6 = uVar4 & 0xfffffffffffffff8;
        uVar1 = uVar1 + uVar6;
        pfVar3 = param_1 + ((long)uVar5 >> 2) * 4 + 4;
        uVar2 = uVar6;
        do {
          fVar19 = (float)*(undefined8 *)pfVar3 * fVar8;
          fVar21 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar8;
          fVar23 = (float)*(undefined8 *)(pfVar3 + 2) * fVar8;
          fVar25 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * fVar8;
          fVar11 = fVar11 + pfVar3[-4] * fVar8 * pfVar3[-4] * fVar8 +
                   pfVar3[-3] * fVar8 * pfVar3[-3] * fVar8 + pfVar3[-2] * fVar8 * pfVar3[-2] * fVar8
                   + pfVar3[-1] * fVar8 * pfVar3[-1] * fVar8 + fVar19 * fVar19 + fVar21 * fVar21 +
                   fVar23 * fVar23 + fVar25 * fVar25;
          pfVar3 = pfVar3 + 8;
          uVar2 = uVar2 - 8;
        } while (uVar2 != 0);
        if (uVar4 == uVar6) goto LAB_10946c174;
      }
      lVar7 = param_2 - uVar1;
      pfVar3 = param_1 + uVar1;
      do {
        fVar11 = fVar11 + fVar8 * *pfVar3 * fVar8 * *pfVar3;
        lVar7 = lVar7 + -1;
        pfVar3 = pfVar3 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_10946c174:
  *param_3 = fVar11 + *param_3;
  return;
}



/* Entry: 10946c21c; end: 10946c2c3;  */

float * FUN_10946c21c(float *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x8;
  ulong uVar16;
  undefined4 *puVar17;
  int *piVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float *pfVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float afStack_4140 [2];
  long lStack_4138;
  long lStack_4130;
  long lStack_4128;
  float *pfStack_4120;
  float *pfStack_4118;
  undefined1 **ppuStack_4110;
  code *pcStack_4108;
  undefined1 *puStack_4100;
  long lStack_40f8;
  float fStack_40ec;
  undefined4 uStack_40e8;
  undefined4 uStack_40e4;
  float *pfStack_40e0;
  long *plStack_40d8;
  float afStack_40c0 [2];
  undefined8 uStack_40b8;
  undefined1 auStack_40b0 [16368];
  long *plStack_c0;
  long lStack_a8;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar15 = *(long *)(param_2 + 8);
  lVar23 = *(long *)(param_2 + 0x10);
  uVar14 = lVar23 * lVar15;
  if (uVar14 == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    *(long *)(param_1 + 2) = lVar15;
    *(long *)(param_1 + 4) = lVar23;
    lVar15 = *(long *)(param_2 + 0x10) * *(long *)(param_2 + 8);
joined_r0x00010946c29c:
    if (lVar15 != 0) {
      _memcpy();
    }
    return param_1;
  }
  if (uVar14 >> 0x3e == 0) {
    lVar8 = uVar14 * 4;
    _malloc();
    if (lVar8 != 0) {
      *(long *)param_1 = lVar8;
      *(long *)(param_1 + 2) = lVar15;
      *(long *)(param_1 + 4) = lVar23;
      lVar15 = *(long *)(param_2 + 0x10) * *(long *)(param_2 + 8);
      goto joined_r0x00010946c29c;
    }
  }
  pfVar9 = (float *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  plVar12 = (long *)PTR___ZTISt9bad_alloc_110346a68;
  pfVar11 = (float *)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  pcStack_38 = FUN_10946c2c4;
  puStack_40 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar22 = (float *)plVar12[1];
  if (pfVar22 == (float *)0x1) {
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x00010946c54c:
    if (lVar8 == lStack_a8) {
      return pfVar9;
    }
  }
  else {
    uStack_40e8 = 0x3f800000;
    uStack_40e4 = 0;
    fStack_40ec = 0.0;
    if ((long)pfVar22 < 1) {
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x00010946c54c;
    }
    lVar15 = 0;
    lVar23 = 0;
    param_1 = afStack_40c0;
    puVar24 = *(undefined8 **)pfVar9;
    puVar26 = (undefined8 *)*plVar12;
    lStack_40f8 = (long)param_1 - (long)puVar26;
    puStack_4100 = auStack_40b0;
    puVar25 = puVar24;
    pfVar5 = pfVar22;
    do {
      pfVar6 = pfVar5 + -0x400;
      if (0xfff < (long)pfVar5) {
        pfVar5 = (float *)0x1000;
      }
      pfVar11 = pfVar22 + lVar15 * -0x400;
      if (0xfff < (long)pfVar11) {
        pfVar11 = (float *)0x1000;
      }
      plVar13 = (long *)((long)pfVar22 - lVar23);
      plVar12 = plVar13;
      if (0xfff < (long)plVar13) {
        plVar12 = (long *)0x1000;
      }
      plVar3 = (long *)((long)plVar12 + 3);
      if (-1 < (long)plVar12) {
        plVar3 = plVar12;
      }
      pfVar9 = (float *)((ulong)plVar3 & 0xfffffffffffffffc);
      if (3 < (long)plVar13) {
        lVar8 = 0;
        pfVar10 = param_1;
        puVar20 = puVar25;
        puVar21 = puVar26;
        do {
          uVar30 = *puVar20;
          uVar32 = *puVar21;
          *(ulong *)(pfVar10 + 2) =
               CONCAT44((float)((ulong)puVar20[1] >> 0x20) * (float)((ulong)puVar21[1] >> 0x20),
                        (float)puVar20[1] * (float)puVar21[1]);
          *(ulong *)pfVar10 =
               CONCAT44((float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar32 >> 0x20),
                        (float)uVar30 * (float)uVar32);
          lVar8 = lVar8 + 4;
          pfVar10 = pfVar10 + 4;
          puVar20 = puVar20 + 2;
          puVar21 = puVar21 + 2;
        } while (lVar8 < (long)pfVar9);
      }
      if ((long)pfVar9 < (long)plVar12) {
        uVar14 = (long)pfVar11 - (long)pfVar9;
        pfVar11 = pfVar9;
        if (((7 < uVar14) && (0x1f < (ulong)((long)param_1 + (lVar15 * -0x4000 - (long)puVar24))))
           && (0x1f < (ulong)(lStack_40f8 + lVar15 * -0x4000))) {
          pfVar11 = (float *)((long)pfVar9 + (uVar14 & 0xfffffffffffffff8));
          lVar8 = ((long)plVar3 >> 2) * 0x10;
          puVar20 = (undefined8 *)(puStack_4100 + lVar8);
          uVar16 = (long)pfVar5 - (long)pfVar9 & 0xfffffffffffffff8;
          do {
            puVar21 = (undefined8 *)((long)puVar25 + lVar8);
            puVar2 = (undefined8 *)((long)puVar26 + lVar8);
            uVar30 = *puVar21;
            uVar33 = puVar21[3];
            uVar32 = puVar21[2];
            uVar35 = *puVar2;
            uVar37 = puVar2[3];
            uVar36 = puVar2[2];
            puVar20[-1] = CONCAT44((float)((ulong)puVar21[1] >> 0x20) *
                                   (float)((ulong)puVar2[1] >> 0x20),
                                   (float)puVar21[1] * (float)puVar2[1]);
            puVar20[-2] = CONCAT44((float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar35 >> 0x20),
                                   (float)uVar30 * (float)uVar35);
            puVar20[1] = CONCAT44((float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar37 >> 0x20),
                                  (float)uVar33 * (float)uVar37);
            *puVar20 = CONCAT44((float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar36 >> 0x20),
                                (float)uVar32 * (float)uVar36);
            puVar20 = puVar20 + 4;
            lVar8 = lVar8 + 0x20;
            uVar16 = uVar16 - 8;
          } while (uVar16 != 0);
          if (uVar14 == (uVar14 & 0xfffffffffffffff8)) goto LAB_10946c394;
        }
        do {
          param_1[(long)pfVar11] =
               *(float *)((long)puVar25 + (long)pfVar11 * 4) *
               *(float *)((long)puVar26 + (long)pfVar11 * 4);
          pfVar11 = (float *)((long)pfVar11 + 1);
        } while (pfVar5 != pfVar11);
      }
LAB_10946c394:
      pfVar11 = &fStack_40ec;
      pfVar9 = param_1;
      pfStack_40e0 = param_1;
      plStack_40d8 = plVar12;
      plStack_c0 = plVar12;
      FUN_10946be68();
      lVar23 = lVar23 + 0x1000;
      lVar15 = lVar15 + 1;
      puVar26 = puVar26 + 0x800;
      puVar25 = puVar25 + 0x800;
      pfVar5 = pfVar6;
    } while (lVar23 < (long)pfVar22);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return pfVar9;
    }
  }
  ___stack_chk_fail();
  lStack_4130 = lVar23;
  lStack_4128 = lVar15;
  pfStack_4120 = pfVar22;
  pfStack_4118 = param_1;
  ppuStack_4110 = &puStack_40;
  pcStack_4108 = FUN_10946c554;
  pfVar5 = afStack_4140;
  pfVar6 = afStack_4140;
  lStack_4138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)pfVar11 >> 0x3e == 0) {
    param_1 = pfVar11;
    if (plVar12 == (long *)0x0) {
      pfVar22 = (float *)((long)pfVar11 << 2);
      if (pfVar11 < (float *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = -(extraout_x8 + 0x1eU & 0xfffffffffffffff0);
        pfVar5 = (float *)((long)afStack_4140 + lVar15);
        pfVar22 = (float *)((long)afStack_4140 + lVar15);
      }
      else {
        _malloc();
        if (pfVar22 == (float *)0x0) goto LAB_10946c640;
      }
    }
    else {
      pfVar22 = (float *)0x0;
      pfVar5 = afStack_4140;
    }
    plVar12 = *(long **)pfVar9;
    pfVar10 = *(float **)(pfVar9 + 4);
    plVar13 = *(long **)(*(long *)(pfVar9 + 6) + 8);
    FUN_1093c6c14();
    if ((float *)0x8000 < pfVar11) {
      pfVar10 = pfVar22;
      _free();
    }
    pfVar6 = pfVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4138) {
      return pfVar10;
    }
  }
  else {
LAB_10946c640:
    pfVar10 = (float *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    plVar12 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    plVar13 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((float *)0x8000 < param_1) {
    _free(pfVar22);
  }
  pfVar11 = pfVar10;
  __Unwind_Resume();
  *(long *)((long)pfVar6 + -0x30) = lVar23;
  *(float **)((long)pfVar6 + -0x28) = pfVar10;
  *(float **)((long)pfVar6 + -0x20) = pfVar22;
  *(float **)((long)pfVar6 + -0x18) = param_1;
  *(undefined1 ****)((long)pfVar6 + -0x10) = &ppuStack_4110;
  *(code **)((long)pfVar6 + -8) = FUN_10946c680;
  lVar15 = plVar13[1];
  puVar4 = *(undefined4 **)pfVar11;
  if (puVar4 != (undefined4 *)*plVar13 || *(long *)(pfVar11 + 2) != lVar15) {
    if (0 < lVar15) {
      puVar17 = (undefined4 *)*plVar13;
      piVar18 = (int *)*plVar12;
      do {
        puVar4[*piVar18] = *puVar17;
        lVar15 = lVar15 + -1;
        puVar17 = puVar17 + 1;
        piVar18 = piVar18 + 1;
      } while (lVar15 != 0);
    }
    return pfVar11;
  }
  lVar15 = plVar12[1];
  if (lVar15 < 1) {
    pfVar11 = (float *)0x0;
  }
  else {
    pfVar11 = (float *)0x1;
    _calloc(1,lVar15);
    if (pfVar11 == (float *)0x0) {
      pfVar11 = (float *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      *(undefined1 **)((long)pfVar6 + -0x40) = (undefined1 *)((long)pfVar6 + -0x10);
      *(code **)((long)pfVar6 + -0x38) = FUN_10946c78c;
      if ((bRam0000000113732de8 & 1) == 0) {
        iVar7 = 0x13732de8;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732da0 = 1.0842022e-19;
          ___cxa_guard_release(0x113732de8);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      if ((bRam0000000113732df0 & 1) == 0) {
        iVar7 = 0x13732df0;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732da4 = 4.5035996e+15;
          ___cxa_guard_release(0x113732df0);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      if ((bRam0000000113732df8 & 1) == 0) {
        iVar7 = 0x13732df8;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732da8 = 9.223372e+18;
          ___cxa_guard_release(0x113732df8);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      if ((bRam0000000113732e00 & 1) == 0) {
        iVar7 = 0x13732e00;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732dac = 1.323489e-23;
          ___cxa_guard_release(0x113732e00);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      if ((bRam0000000113732e08 & 1) == 0) {
        iVar7 = 0x13732e08;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732db0 = 1.1920929e-07;
          ___cxa_guard_release(0x113732e08);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      if ((bRam0000000113732e10 & 1) == 0) {
        iVar7 = 0x13732e10;
        *(float **)((long)pfVar6 + -0x48) = pfVar11;
        ___cxa_guard_acquire();
        pfVar11 = *(float **)((long)pfVar6 + -0x48);
        if (iVar7 != 0) {
          fRam0000000113732db4 = SQRT(fRam0000000113732db0);
          ___cxa_guard_release(0x113732e10);
          pfVar11 = *(float **)((long)pfVar6 + -0x48);
        }
      }
      lVar15 = *(long *)(pfVar11 + 2);
      if (lVar15 < 1) {
        return pfVar11;
      }
      fVar28 = (float)lVar15;
      fVar34 = 0.0;
      fVar29 = 0.0;
      fVar38 = 0.0;
      pfVar22 = *(float **)pfVar11;
      do {
        fVar39 = *pfVar22;
        fVar40 = ABS(fVar39);
        fVar41 = fVar34;
        fVar39 = fVar29 + fVar39 * fVar39;
        if (fVar40 < fRam0000000113732da0) {
          fVar41 = fVar34 + fRam0000000113732da8 * fVar40 * fRam0000000113732da8 * fVar40;
          fVar39 = fVar29;
        }
        if (fRam0000000113732da4 / fVar28 < fVar40) {
          fVar41 = fVar34;
          fVar39 = fVar29;
          fVar38 = fVar38 + fRam0000000113732dac * fVar40 * fRam0000000113732dac * fVar40;
        }
        fVar29 = fVar39;
        fVar34 = fVar41;
        lVar15 = lVar15 + -1;
        pfVar22 = pfVar22 + 1;
      } while (lVar15 != 0);
      if (!NAN(fVar29)) {
        if (fVar38 <= 0.0) {
          if (fVar34 <= 0.0) {
            return pfVar11;
          }
          if (fVar29 <= 0.0) {
            return pfVar11;
          }
          fVar38 = SQRT(fVar29);
          fVar29 = SQRT(fVar34) / fRam0000000113732da8;
        }
        else {
          if (3.4028235e+38 < SQRT(fVar38)) {
            return pfVar11;
          }
          fVar38 = SQRT(fVar38) / fRam0000000113732dac;
          if (fVar29 <= 0.0) {
            return pfVar11;
          }
          fVar29 = SQRT(fVar29);
        }
        fVar28 = fVar29;
        if (fVar38 <= fVar29) {
          fVar28 = fVar38;
        }
        if (fVar29 <= fVar38) {
          fVar29 = fVar38;
        }
        if (fRam0000000113732db4 * fVar29 < fVar28) {
          return pfVar11;
        }
      }
      return pfVar11;
    }
    lVar8 = *plVar12;
    lVar23 = 0;
    do {
      lVar1 = lVar23 + 1;
      if (*(char *)((long)pfVar11 + lVar23) != '\x01') {
        *(undefined1 *)((long)pfVar11 + lVar23) = 1;
        lVar19 = (long)*(int *)(lVar8 + lVar23 * 4);
        if (lVar23 != lVar19) {
          uVar27 = puVar4[lVar23];
          do {
            uVar31 = puVar4[lVar19];
            puVar4[lVar19] = uVar27;
            puVar4[lVar23] = uVar31;
            *(undefined1 *)((long)pfVar11 + lVar19) = 1;
            lVar19 = (long)*(int *)(lVar8 + lVar19 * 4);
            uVar27 = uVar31;
          } while (lVar23 != lVar19);
        }
      }
      lVar23 = lVar1;
    } while (lVar1 < lVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return pfVar11;
}



/* Entry: 10946c2c4; end: 10946c553;  */

ulong FUN_10946c2c4(float *param_1,long *param_2,float *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  int *piVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float *unaff_x19;
  long lVar22;
  long *plVar23;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined8 uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  long alStack_4110 [4];
  long *plStack_40f0;
  float *pfStack_40e8;
  undefined1 *puStack_40e0;
  code *pcStack_40d8;
  undefined1 *puStack_40d0;
  long lStack_40c8;
  float afStack_40bc [3];
  float *pfStack_40b0;
  long *plStack_40a8;
  float afStack_4090 [2];
  undefined8 uStack_4088;
  undefined1 auStack_4080 [16368];
  long *plStack_90;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)param_2[1];
  if (plVar23 == (long *)0x1) {
    uVar18 = (ulong)(uint)**(float **)param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      fVar27 = ABS(**(float **)param_1 * *(float *)*param_2);
      goto LAB_10946c50c;
    }
  }
  else {
    afStack_40bc[1] = 1.0;
    afStack_40bc[2] = 0.0;
    afStack_40bc[0] = 0.0;
    if ((long)plVar23 < 1) {
      uVar18 = 0;
      fVar36 = 0.0;
      fVar27 = 0.0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto LAB_10946c504;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      unaff_x19 = afStack_4090;
      puVar24 = *(undefined8 **)param_1;
      puVar26 = (undefined8 *)*param_2;
      lStack_40c8 = (long)unaff_x19 - (long)puVar26;
      puStack_40d0 = auStack_4080;
      puVar25 = puVar24;
      plVar4 = plVar23;
      do {
        plVar5 = plVar4 + -0x200;
        if (0xfff < (long)plVar4) {
          plVar4 = (long *)0x1000;
        }
        plVar7 = plVar23 + unaff_x21 * -0x200;
        if (0xfff < (long)plVar7) {
          plVar7 = (long *)0x1000;
        }
        plVar9 = (long *)((long)plVar23 - unaff_x22);
        param_2 = plVar9;
        if (0xfff < (long)plVar9) {
          param_2 = (long *)0x1000;
        }
        plVar10 = (long *)((long)param_2 + 3);
        if (-1 < (long)param_2) {
          plVar10 = param_2;
        }
        plVar12 = (long *)((ulong)plVar10 & 0xfffffffffffffffc);
        if (3 < (long)plVar9) {
          lVar22 = 0;
          pfVar17 = unaff_x19;
          puVar20 = puVar25;
          puVar21 = puVar26;
          do {
            uVar28 = *puVar20;
            uVar30 = *puVar21;
            *(ulong *)(pfVar17 + 2) =
                 CONCAT44((float)((ulong)puVar20[1] >> 0x20) * (float)((ulong)puVar21[1] >> 0x20),
                          (float)puVar20[1] * (float)puVar21[1]);
            *(ulong *)pfVar17 =
                 CONCAT44((float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar30 >> 0x20),
                          (float)uVar28 * (float)uVar30);
            lVar22 = lVar22 + 4;
            pfVar17 = pfVar17 + 4;
            puVar20 = puVar20 + 2;
            puVar21 = puVar21 + 2;
          } while (lVar22 < (long)plVar12);
        }
        if ((long)plVar12 < (long)param_2) {
          uVar18 = (long)plVar7 - (long)plVar12;
          plVar7 = plVar12;
          if (((7 < uVar18) &&
              (0x1f < (ulong)((long)unaff_x19 + (unaff_x21 * -0x4000 - (long)puVar24)))) &&
             (0x1f < (ulong)(lStack_40c8 + unaff_x21 * -0x4000))) {
            plVar7 = (long *)((long)plVar12 + (uVar18 & 0xfffffffffffffff8));
            lVar22 = ((long)plVar10 >> 2) * 0x10;
            puVar20 = (undefined8 *)(puStack_40d0 + lVar22);
            uVar13 = (long)plVar4 - (long)plVar12 & 0xfffffffffffffff8;
            do {
              puVar21 = (undefined8 *)((long)puVar25 + lVar22);
              puVar2 = (undefined8 *)((long)puVar26 + lVar22);
              uVar28 = *puVar21;
              uVar31 = puVar21[3];
              uVar30 = puVar21[2];
              uVar33 = *puVar2;
              uVar35 = puVar2[3];
              uVar34 = puVar2[2];
              puVar20[-1] = CONCAT44((float)((ulong)puVar21[1] >> 0x20) *
                                     (float)((ulong)puVar2[1] >> 0x20),
                                     (float)puVar21[1] * (float)puVar2[1]);
              puVar20[-2] = CONCAT44((float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar33 >> 0x20)
                                     ,(float)uVar28 * (float)uVar33);
              puVar20[1] = CONCAT44((float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar35 >> 0x20),
                                    (float)uVar31 * (float)uVar35);
              *puVar20 = CONCAT44((float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar34 >> 0x20),
                                  (float)uVar30 * (float)uVar34);
              puVar20 = puVar20 + 4;
              lVar22 = lVar22 + 0x20;
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            if (uVar18 == (uVar18 & 0xfffffffffffffff8)) goto LAB_10946c394;
          }
          do {
            unaff_x19[(long)plVar7] =
                 *(float *)((long)puVar25 + (long)plVar7 * 4) *
                 *(float *)((long)puVar26 + (long)plVar7 * 4);
            plVar7 = (long *)((long)plVar7 + 1);
          } while (plVar4 != plVar7);
        }
LAB_10946c394:
        param_3 = afStack_40bc;
        param_1 = unaff_x19;
        pfStack_40b0 = unaff_x19;
        plStack_40a8 = param_2;
        plStack_90 = param_2;
        FUN_10946be68();
        unaff_x22 = unaff_x22 + 0x1000;
        unaff_x21 = unaff_x21 + 1;
        puVar26 = puVar26 + 0x800;
        puVar25 = puVar25 + 0x800;
        plVar4 = plVar5;
      } while (unaff_x22 < (long)plVar23);
      uVar18 = (ulong)(uint)afStack_40bc[0];
      fVar36 = afStack_40bc[0];
      fVar27 = afStack_40bc[2];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
LAB_10946c504:
        fVar27 = fVar27 * SQRT(fVar36);
LAB_10946c50c:
        return (ulong)(uint)fVar27;
      }
    }
  }
  ___stack_chk_fail();
  alStack_4110[2] = unaff_x22;
  alStack_4110[3] = unaff_x21;
  plStack_40f0 = plVar23;
  pfStack_40e8 = unaff_x19;
  puStack_40e0 = &stack0xfffffffffffffff0;
  pcStack_40d8 = FUN_10946c554;
  plVar4 = alStack_4110;
  plVar5 = alStack_4110;
  alStack_4110[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3e == 0) {
    unaff_x19 = param_3;
    if (param_2 == (long *)0x0) {
      plVar23 = (long *)((long)param_3 << 2);
      if (param_3 < (float *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar22 = -(extraout_x8 + 0x1eU & 0xfffffffffffffff0);
        plVar4 = (long *)((long)alStack_4110 + lVar22);
        plVar23 = (long *)((long)alStack_4110 + lVar22);
      }
      else {
        _malloc();
        if (plVar23 == (long *)0x0) goto LAB_10946c640;
      }
    }
    else {
      plVar23 = (long *)0x0;
      plVar4 = alStack_4110;
    }
    plVar9 = *(long **)param_1;
    plVar7 = *(long **)(param_1 + 4);
    plVar10 = *(long **)(*(long *)(param_1 + 6) + 8);
    FUN_1093c6c14();
    if ((float *)0x8000 < param_3) {
      plVar7 = plVar23;
      _free();
    }
    plVar5 = plVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_4110[1]) {
      return uVar18;
    }
  }
  else {
LAB_10946c640:
    plVar7 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    plVar9 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    plVar10 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((float *)0x8000 < unaff_x19) {
    _free(plVar23);
  }
  plVar4 = plVar7;
  __Unwind_Resume();
  *(long *)((long)plVar5 + -0x30) = unaff_x22;
  *(long **)((long)plVar5 + -0x28) = plVar7;
  *(long **)((long)plVar5 + -0x20) = plVar23;
  *(float **)((long)plVar5 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)plVar5 + -0x10) = &puStack_40e0;
  *(code **)((long)plVar5 + -8) = FUN_10946c680;
  lVar22 = plVar10[1];
  puVar3 = (uint *)*plVar4;
  if (puVar3 != (uint *)*plVar10 || plVar4[1] != lVar22) {
    if (0 < lVar22) {
      puVar14 = (uint *)*plVar10;
      piVar16 = (int *)*plVar9;
      do {
        uVar18 = (ulong)*puVar14;
        puVar3[*piVar16] = *puVar14;
        lVar22 = lVar22 + -1;
        puVar14 = puVar14 + 1;
        piVar16 = piVar16 + 1;
      } while (lVar22 != 0);
    }
    return uVar18;
  }
  lVar22 = plVar9[1];
  if (0 < lVar22) {
    lVar8 = 1;
    _calloc(1,lVar22);
    if (lVar8 == 0) {
      plVar23 = (long *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      *(undefined1 **)((long)plVar5 + -0x40) = (undefined1 *)((long)plVar5 + -0x10);
      *(code **)((long)plVar5 + -0x38) = FUN_10946c78c;
      if ((bRam0000000113732de8 & 1) == 0) {
        iVar6 = 0x13732de8;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732da0 = 1.0842022e-19;
          ___cxa_guard_release(0x113732de8);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      if ((bRam0000000113732df0 & 1) == 0) {
        iVar6 = 0x13732df0;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732da4 = 4.5035996e+15;
          ___cxa_guard_release(0x113732df0);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      if ((bRam0000000113732df8 & 1) == 0) {
        iVar6 = 0x13732df8;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732da8 = 9.223372e+18;
          ___cxa_guard_release(0x113732df8);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      if ((bRam0000000113732e00 & 1) == 0) {
        iVar6 = 0x13732e00;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732dac = 1.323489e-23;
          ___cxa_guard_release(0x113732e00);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      if ((bRam0000000113732e08 & 1) == 0) {
        iVar6 = 0x13732e08;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732db0 = 1.1920929e-07;
          ___cxa_guard_release(0x113732e08);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      if ((bRam0000000113732e10 & 1) == 0) {
        iVar6 = 0x13732e10;
        *(long **)((long)plVar5 + -0x48) = plVar23;
        ___cxa_guard_acquire();
        plVar23 = *(long **)((long)plVar5 + -0x48);
        if (iVar6 != 0) {
          fRam0000000113732db4 = SQRT(fRam0000000113732db0);
          ___cxa_guard_release(0x113732e10);
          plVar23 = *(long **)((long)plVar5 + -0x48);
        }
      }
      lVar22 = plVar23[1];
      if (0 < lVar22) {
        fVar27 = (float)lVar22;
        fVar32 = 0.0;
        uVar18 = 0;
        fVar36 = 0.0;
        pfVar17 = (float *)*plVar23;
        do {
          fVar37 = *pfVar17;
          fVar38 = ABS(fVar37);
          fVar39 = fVar32;
          fVar37 = (float)uVar18 + fVar37 * fVar37;
          if (fVar38 < fRam0000000113732da0) {
            fVar39 = fVar32 + fRam0000000113732da8 * fVar38 * fRam0000000113732da8 * fVar38;
            fVar37 = (float)uVar18;
          }
          if (fRam0000000113732da4 / fVar27 < fVar38) {
            fVar36 = fVar36 + fRam0000000113732dac * fVar38 * fRam0000000113732dac * fVar38;
          }
          uVar13 = (ulong)(uint)fVar37;
          if (fRam0000000113732da4 / fVar27 < fVar38) {
            fVar39 = fVar32;
            uVar13 = uVar18;
          }
          uVar18 = uVar13;
          fVar32 = fVar39;
          lVar22 = lVar22 + -1;
          pfVar17 = pfVar17 + 1;
        } while (lVar22 != 0);
        fVar27 = (float)uVar18;
        if (!NAN(fVar27)) {
          if (fVar36 <= 0.0) {
            if (fVar32 <= 0.0) goto LAB_10946c8d4;
            if (fVar27 <= 0.0) {
              return (ulong)(uint)(SQRT(fVar32) / fRam0000000113732da8);
            }
            fVar36 = SQRT(fVar27);
            fVar27 = SQRT(fVar32) / fRam0000000113732da8;
          }
          else {
            fVar36 = SQRT(fVar36);
            if (3.4028235e+38 < fVar36) {
              return (ulong)(uint)fVar36;
            }
            fVar36 = fVar36 / fRam0000000113732dac;
            if (fVar27 <= 0.0) {
              return (ulong)(uint)fVar36;
            }
            fVar27 = SQRT(fVar27);
          }
          fVar32 = fVar27;
          if (fVar36 <= fVar27) {
            fVar32 = fVar36;
          }
          if (fVar27 <= fVar36) {
            fVar27 = fVar36;
          }
          uVar18 = (ulong)(uint)fVar27;
          if (fRam0000000113732db4 * fVar27 < fVar32) {
            return (ulong)(uint)(fVar27 * SQRT((fVar32 / fVar27) * (fVar32 / fVar27) + 1.0));
          }
        }
        return uVar18;
      }
      uVar18 = 0;
LAB_10946c8d4:
      return (ulong)(uint)SQRT((float)uVar18);
    }
    lVar11 = *plVar9;
    lVar15 = 0;
    do {
      lVar1 = lVar15 + 1;
      if (*(char *)(lVar8 + lVar15) != '\x01') {
        *(undefined1 *)(lVar8 + lVar15) = 1;
        lVar19 = (long)*(int *)(lVar11 + lVar15 * 4);
        if (lVar15 != lVar19) {
          uVar13 = (ulong)puVar3[lVar15];
          do {
            uVar29 = puVar3[lVar19];
            uVar18 = (ulong)uVar29;
            puVar3[lVar19] = (uint)uVar13;
            puVar3[lVar15] = uVar29;
            *(undefined1 *)(lVar8 + lVar19) = 1;
            lVar19 = (long)*(int *)(lVar11 + lVar19 * 4);
            uVar13 = uVar18;
          } while (lVar15 != lVar19);
        }
      }
      lVar15 = lVar1;
    } while (lVar1 < lVar22);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return uVar18;
}


