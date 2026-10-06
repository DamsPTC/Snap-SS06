/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10893a58c; end: 10893a59f;  */

void FUN_10893a58c(void)

{
  FUN_10893a57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893a5a0; end: 10893a5ab;  */

long FUN_10893a5a0(long param_1)

{
  FUN_10893a28c(param_1 + 0x38);
  func_0x000104be7e54(param_1 + 0x30);
  func_0x0001089383c8(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10893a5ac; end: 10893a5e3;  */

long FUN_10893a5ac(long param_1)

{
  FUN_10893a28c(param_1 + 0x20);
  func_0x000104be7e54(param_1 + 0x18);
  func_0x0001089383c8(param_1 + 8);
  return param_1;
}



/* Entry: 10893a5e4; end: 10893a5f7;  */

void FUN_10893a5e4(void)

{
  FUN_10893a5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893a5f8; end: 10893a6b3;  */

void FUN_10893a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long unaff_x19;
  ulong uVar12;
  undefined1 auStack_418 [16];
  long lStack_408;
  long alStack_3c0 [4];
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  long lStack_390;
  undefined1 *puStack_388;
  undefined8 ******ppppppuStack_380;
  code *pcStack_378;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 ******ppppppuStack_340;
  code *pcStack_338;
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 ******ppppppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 ******ppppppuStack_260;
  code *pcStack_258;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 *****pppppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined4 uStack_198;
  undefined2 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined1 ***pppuStack_130;
  code *pcStack_128;
  long alStack_118 [3];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 uStack_d8;
  undefined2 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  uVar10 = param_3;
  uVar6 = param_5;
  func_0x00010893b41c();
  uStack_48 = extraout_x8;
  func_0x00010893b4d8();
  func_0x0001052808e4();
  FUN_10893ab30(auStack_78,param_3);
  func_0x0001052808e4(auStack_68,param_4);
  uStack_50 = 7;
  uStack_58 = (undefined1)param_5;
  lVar2 = *(long *)(unaff_x19 + 0x18);
  lVar3 = unaff_x19 + 0x20;
  func_0x00010893b5c0();
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  do {
    func_0x00010b9a8d98();
    func_0x00010893b5d8();
    uStack_d8 = (undefined1)lVar3;
  } while (!(bool)in_ZR);
  func_0x00010893b4a0();
  uStack_b0 = 0xffffffffffffffc0;
  pcStack_98 = FUN_10893a6b4;
  lStack_a8 = lVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010893b41c();
  uStack_d0 = 7;
  uStack_b8 = extraout_x8_00;
  FUN_108b75534(auStack_c8,uVar10);
  lVar3 = *(long *)(lVar2 + 0x18);
  func_0x00010893b544(lVar3,lVar2 + 0x28);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_b8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_c8;
  do {
    func_0x00010b9a8d98();
    func_0x00010893b5d8();
  } while (!(bool)in_ZR);
  func_0x00010893b4a0();
  uStack_100 = 0xffffffffffffffe0;
  pcStack_e8 = FUN_10893a74c;
  lStack_f8 = lVar3;
  ppuStack_f0 = &puStack_a0;
  func_0x00010893b408();
  func_0x00010893b4a8();
  plVar7 = alStack_118;
  uVar10 = 1;
  FUN_10893aae4(extraout_x8_01,puVar4 + 0x30);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_128 = FUN_10893a798;
    plVar9 = plVar7;
    uVar11 = uVar10;
    pppuStack_130 = &ppuStack_f0;
    func_0x00010893b41c();
    uStack_168 = extraout_x8_02;
    func_0x00010893b4d8();
    func_0x0001052808e4();
    uStack_190 = 4;
    uStack_198 = SUB84(plVar7,0);
    func_0x000105280820(auStack_188,uVar10);
    FUN_10893abf0(auStack_178,uVar6);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    func_0x00010893b5c0(uVar5,lVar3 + 0x38);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_168);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar4 = auStack_178;
    do {
      func_0x00010b9a8d98();
      func_0x00010893b5d8();
    } while (!(bool)in_ZR);
    func_0x00010893b4a0();
    uStack_1d0 = 0xffffffffffffffc0;
    pcStack_1b8 = FUN_10893a86c;
    uStack_1c8 = uVar5;
    ppppuStack_1c0 = &pppuStack_130;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893ac10();
    func_0x00010893b4cc(*(undefined8 *)(puVar4 + 0x18),puVar4 + 0x40);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      uStack_210 = 0xffffffffffffffc0;
      pcStack_1f8 = FUN_10893a8c0;
      plVar7 = plVar9;
      uStack_220 = uVar10;
      uStack_218 = uVar6;
      puStack_208 = puVar4;
      pppppuStack_200 = &ppppuStack_1c0;
      func_0x00010893b41c();
      uStack_228 = extraout_x8_03;
      func_0x00010893b4d8();
      func_0x0001052808e4();
      FUN_108b77cf8(auStack_238,plVar9);
      uVar6 = *(undefined8 *)(puVar4 + 0x18);
      func_0x00010893b544(uVar6,puVar4 + 0x48);
      do {
        func_0x00010893b53c();
        func_0x00010893b588();
      } while (!(bool)in_ZR);
      func_0x00010893b3f4(uStack_228);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      puVar4 = auStack_238;
      do {
        func_0x00010b9a8d98();
        func_0x00010893b5d8();
      } while (!(bool)in_ZR);
      func_0x00010893b4a0();
      uStack_270 = 0xffffffffffffffe0;
      pcStack_258 = FUN_10893a954;
      uStack_268 = uVar6;
      ppppppuStack_260 = &pppppuStack_200;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b7866c();
      lVar3 = *(long *)(puVar4 + 0x18);
      func_0x00010893b4cc(lVar3,puVar4 + 0x50);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        uStack_2b0 = 0xffffffffffffffe0;
        pcStack_298 = FUN_10893a9a8;
        puStack_2a8 = puVar4;
        ppppppuStack_2a0 = &ppppppuStack_260;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_10893ac94();
        func_0x00010893b4cc(*(undefined8 *)(lVar3 + 0x18),lVar3 + 0x58);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          uStack_2f0 = 0xffffffffffffffe0;
          pcStack_2d8 = FUN_10893a9fc;
          plVar9 = plVar7;
          uStack_300 = uVar10;
          puStack_2f8 = auStack_248;
          lStack_2e8 = lVar3;
          ppppppuStack_2e0 = &ppppppuStack_2a0;
          func_0x00010893b41c();
          uStack_308 = extraout_x8_04;
          func_0x00010893b4d8();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_318,plVar7);
          uVar6 = *(undefined8 *)(lVar3 + 0x18);
          func_0x00010893b544(uVar6,lVar3 + 0x60);
          do {
            func_0x00010893b53c();
            func_0x00010893b588();
          } while (!(bool)in_ZR);
          func_0x00010893b3f4(uStack_308);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          lVar3 = 0x10;
          do {
            puVar4 = auStack_328 + lVar3;
            func_0x00010b9a8d98();
            lVar3 = lVar3 + -0x10;
            uVar1 = lVar3 == -0x10;
          } while (!(bool)uVar1);
          func_0x00010893b4a0();
          pcStack_338 = FUN_10893aa98;
          lStack_350 = lVar3;
          uStack_348 = uVar6;
          ppppppuStack_340 = &ppppppuStack_2e0;
          func_0x00010893b408();
          func_0x00010893b4d8();
          FUN_108b80a1c();
          plVar7 = *(long **)(puVar4 + 0x18);
          func_0x00010893b4cc();
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            plVar8 = alStack_3c0;
            pcStack_378 = FUN_10893aae4;
            uStack_3a0 = uVar10;
            puStack_398 = auStack_328;
            lStack_390 = lVar3;
            puStack_388 = puVar4;
            ppppppuStack_380 = &ppppppuStack_340;
            func_0x00010893b408();
            func_0x00010893b5b4();
            if (((ulong)plVar7 & 1) == 0) {
              func_0x00010893b514();
              func_0x000104bda914();
              plVar7 = plVar8;
            }
            func_0x00010893b3dc();
            if (!(bool)uVar1) {
              ___stack_chk_fail();
              func_0x00010893b574();
              func_0x00010b9abe10(&lStack_408,(plVar7[1] - *plVar7) / 0xe8);
              lVar2 = 0;
              lVar3 = 0x18;
              for (uVar12 = 0; uVar12 < (ulong)((plVar9[1] - *plVar9) / 0xe8); uVar12 = uVar12 + 1)
              {
                FUN_108b7866c(auStack_418,*plVar9 + lVar2);
                func_0x00010b9a9020(lStack_408 + lVar3,auStack_418);
                func_0x00010893b498();
                lVar3 = lVar3 + 0x10;
                lVar2 = lVar2 + 0xe8;
              }
              func_0x00010b9a8f84(uVar11,&lStack_408);
              func_0x000104bddf38(&lStack_408);
              return;
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893a6b4; end: 10893a74b;  */

void FUN_10893a6b4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long unaff_x19;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_388 [16];
  long lStack_378;
  long alStack_330 [4];
  undefined8 uStack_310;
  undefined1 *puStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  code *pcStack_2e8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 ******ppppppuStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined1 ******ppppppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *****pppppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 ****ppppuStack_170;
  code *pcStack_168;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 ***pppuStack_130;
  code *pcStack_128;
  undefined4 uStack_108;
  undefined2 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_48 = param_2;
  func_0x00010893b41c();
  uStack_40 = 7;
  uStack_28 = extraout_x8;
  FUN_108b75534(auStack_38,param_3);
  lVar2 = *(long *)(unaff_x19 + 0x18);
  func_0x00010893b544(lVar2,unaff_x19 + 0x28);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_38;
  do {
    func_0x00010b9a8d98();
    func_0x00010893b5d8();
  } while (!(bool)in_ZR);
  func_0x00010893b4a0();
  uStack_70 = 0xffffffffffffffe0;
  pcStack_58 = FUN_10893a74c;
  lStack_68 = lVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010893b408();
  func_0x00010893b4a8();
  plVar5 = alStack_88;
  uVar8 = 1;
  FUN_10893aae4(extraout_x8_00,puVar3 + 0x30);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_98 = FUN_10893a798;
    plVar7 = plVar5;
    uVar9 = uVar8;
    ppuStack_a0 = &puStack_60;
    func_0x00010893b41c();
    uStack_d8 = extraout_x8_01;
    func_0x00010893b4d8();
    func_0x0001052808e4();
    uStack_100 = 4;
    uStack_108 = SUB84(plVar5,0);
    func_0x000105280820(auStack_f8,uVar8);
    FUN_10893abf0(auStack_e8,param_5);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    func_0x00010893b5c0(uVar4,lVar2 + 0x38);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_d8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar3 = auStack_e8;
    do {
      func_0x00010b9a8d98();
      func_0x00010893b5d8();
    } while (!(bool)in_ZR);
    func_0x00010893b4a0();
    uStack_140 = 0xffffffffffffffc0;
    pcStack_128 = FUN_10893a86c;
    uStack_138 = uVar4;
    pppuStack_130 = &ppuStack_a0;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893ac10();
    func_0x00010893b4cc(*(undefined8 *)(puVar3 + 0x18),puVar3 + 0x40);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      uStack_180 = 0xffffffffffffffc0;
      pcStack_168 = FUN_10893a8c0;
      plVar5 = plVar7;
      uStack_190 = uVar8;
      uStack_188 = param_5;
      puStack_178 = puVar3;
      ppppuStack_170 = &pppuStack_130;
      func_0x00010893b41c();
      uStack_198 = extraout_x8_02;
      func_0x00010893b4d8();
      func_0x0001052808e4();
      FUN_108b77cf8(auStack_1a8,plVar7);
      uVar4 = *(undefined8 *)(puVar3 + 0x18);
      func_0x00010893b544(uVar4,puVar3 + 0x48);
      do {
        func_0x00010893b53c();
        func_0x00010893b588();
      } while (!(bool)in_ZR);
      func_0x00010893b3f4(uStack_198);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      puVar3 = auStack_1a8;
      do {
        func_0x00010b9a8d98();
        func_0x00010893b5d8();
      } while (!(bool)in_ZR);
      func_0x00010893b4a0();
      uStack_1e0 = 0xffffffffffffffe0;
      pcStack_1c8 = FUN_10893a954;
      uStack_1d8 = uVar4;
      pppppuStack_1d0 = &ppppuStack_170;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b7866c();
      lVar2 = *(long *)(puVar3 + 0x18);
      func_0x00010893b4cc(lVar2,puVar3 + 0x50);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        uStack_220 = 0xffffffffffffffe0;
        pcStack_208 = FUN_10893a9a8;
        puStack_218 = puVar3;
        ppppppuStack_210 = &pppppuStack_1d0;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_10893ac94();
        func_0x00010893b4cc(*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x58);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          uStack_260 = 0xffffffffffffffe0;
          pcStack_248 = FUN_10893a9fc;
          plVar7 = plVar5;
          uStack_270 = uVar8;
          puStack_268 = auStack_1b8;
          lStack_258 = lVar2;
          ppppppuStack_250 = &ppppppuStack_210;
          func_0x00010893b41c();
          uStack_278 = extraout_x8_03;
          func_0x00010893b4d8();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_288,plVar5);
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          func_0x00010893b544(uVar4,lVar2 + 0x60);
          do {
            func_0x00010893b53c();
            func_0x00010893b588();
          } while (!(bool)in_ZR);
          func_0x00010893b3f4(uStack_278);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          lVar2 = 0x10;
          do {
            puVar3 = auStack_298 + lVar2;
            func_0x00010b9a8d98();
            lVar2 = lVar2 + -0x10;
            uVar1 = lVar2 == -0x10;
          } while (!(bool)uVar1);
          func_0x00010893b4a0();
          pcStack_2a8 = FUN_10893aa98;
          lStack_2c0 = lVar2;
          uStack_2b8 = uVar4;
          ppppppuStack_2b0 = &ppppppuStack_250;
          func_0x00010893b408();
          func_0x00010893b4d8();
          FUN_108b80a1c();
          plVar5 = *(long **)(puVar3 + 0x18);
          func_0x00010893b4cc();
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            plVar6 = alStack_330;
            pcStack_2e8 = FUN_10893aae4;
            uStack_310 = uVar8;
            puStack_308 = auStack_298;
            lStack_300 = lVar2;
            puStack_2f8 = puVar3;
            ppppppuStack_2f0 = &ppppppuStack_2b0;
            func_0x00010893b408();
            func_0x00010893b5b4();
            if (((ulong)plVar5 & 1) == 0) {
              func_0x00010893b514();
              func_0x000104bda914();
              plVar5 = plVar6;
            }
            func_0x00010893b3dc();
            if (!(bool)uVar1) {
              ___stack_chk_fail();
              func_0x00010893b574();
              func_0x00010b9abe10(&lStack_378,(plVar5[1] - *plVar5) / 0xe8);
              lVar10 = 0;
              lVar2 = 0x18;
              for (uVar11 = 0; uVar11 < (ulong)((plVar7[1] - *plVar7) / 0xe8); uVar11 = uVar11 + 1)
              {
                FUN_108b7866c(auStack_388,*plVar7 + lVar10);
                func_0x00010b9a9020(lStack_378 + lVar2,auStack_388);
                func_0x00010893b498();
                lVar2 = lVar2 + 0x10;
                lVar10 = lVar10 + 0xe8;
              }
              func_0x00010b9a8f84(uVar9,&lStack_378);
              func_0x000104bddf38(&lStack_378);
              return;
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893a74c; end: 10893a797;  */

void FUN_10893a74c(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x19;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_338 [16];
  long lStack_328;
  long alStack_2e0 [4];
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  long lStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 ******ppppppuStack_2a0;
  code *pcStack_298;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 ******ppppppuStack_260;
  code *pcStack_258;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 ******ppppppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *****pppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 ****ppppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_38 [3];
  
  func_0x00010893b408();
  func_0x00010893b4a8();
  plVar5 = alStack_38;
  uVar8 = 1;
  FUN_10893aae4(extraout_x8,param_1 + 0x30);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893a798;
    plVar7 = plVar5;
    uVar9 = uVar8;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b41c();
    uStack_88 = extraout_x8_00;
    func_0x00010893b4d8();
    func_0x0001052808e4();
    uStack_b0 = 4;
    uStack_b8 = SUB84(plVar5,0);
    func_0x000105280820(auStack_a8,uVar8);
    FUN_10893abf0(auStack_98,in_x4);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x00010893b5c0(uVar2,unaff_x19 + 0x38);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_88);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar3 = auStack_98;
    do {
      func_0x00010b9a8d98();
      func_0x00010893b5d8();
    } while (!(bool)in_ZR);
    func_0x00010893b4a0();
    uStack_f0 = 0xffffffffffffffc0;
    pcStack_d8 = FUN_10893a86c;
    uStack_e8 = uVar2;
    ppuStack_e0 = &puStack_50;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893ac10();
    func_0x00010893b4cc(*(undefined8 *)(puVar3 + 0x18),puVar3 + 0x40);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      uStack_130 = 0xffffffffffffffc0;
      pcStack_118 = FUN_10893a8c0;
      plVar5 = plVar7;
      uStack_140 = uVar8;
      uStack_138 = in_x4;
      puStack_128 = puVar3;
      pppuStack_120 = &ppuStack_e0;
      func_0x00010893b41c();
      uStack_148 = extraout_x8_01;
      func_0x00010893b4d8();
      func_0x0001052808e4();
      FUN_108b77cf8(auStack_158,plVar7);
      uVar2 = *(undefined8 *)(puVar3 + 0x18);
      func_0x00010893b544(uVar2,puVar3 + 0x48);
      do {
        func_0x00010893b53c();
        func_0x00010893b588();
      } while (!(bool)in_ZR);
      func_0x00010893b3f4(uStack_148);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      puVar3 = auStack_158;
      do {
        func_0x00010b9a8d98();
        func_0x00010893b5d8();
      } while (!(bool)in_ZR);
      func_0x00010893b4a0();
      uStack_190 = 0xffffffffffffffe0;
      pcStack_178 = FUN_10893a954;
      uStack_188 = uVar2;
      ppppuStack_180 = &pppuStack_120;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b7866c();
      lVar4 = *(long *)(puVar3 + 0x18);
      func_0x00010893b4cc(lVar4,puVar3 + 0x50);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        uStack_1d0 = 0xffffffffffffffe0;
        pcStack_1b8 = FUN_10893a9a8;
        puStack_1c8 = puVar3;
        pppppuStack_1c0 = &ppppuStack_180;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_10893ac94();
        func_0x00010893b4cc(*(undefined8 *)(lVar4 + 0x18),lVar4 + 0x58);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          uStack_210 = 0xffffffffffffffe0;
          pcStack_1f8 = FUN_10893a9fc;
          plVar7 = plVar5;
          uStack_220 = uVar8;
          puStack_218 = auStack_168;
          lStack_208 = lVar4;
          ppppppuStack_200 = &pppppuStack_1c0;
          func_0x00010893b41c();
          uStack_228 = extraout_x8_02;
          func_0x00010893b4d8();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_238,plVar5);
          uVar2 = *(undefined8 *)(lVar4 + 0x18);
          func_0x00010893b544(uVar2,lVar4 + 0x60);
          do {
            func_0x00010893b53c();
            func_0x00010893b588();
          } while (!(bool)in_ZR);
          func_0x00010893b3f4(uStack_228);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          lVar4 = 0x10;
          do {
            puVar3 = auStack_248 + lVar4;
            func_0x00010b9a8d98();
            lVar4 = lVar4 + -0x10;
            uVar1 = lVar4 == -0x10;
          } while (!(bool)uVar1);
          func_0x00010893b4a0();
          pcStack_258 = FUN_10893aa98;
          lStack_270 = lVar4;
          uStack_268 = uVar2;
          ppppppuStack_260 = &ppppppuStack_200;
          func_0x00010893b408();
          func_0x00010893b4d8();
          FUN_108b80a1c();
          plVar5 = *(long **)(puVar3 + 0x18);
          func_0x00010893b4cc();
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            plVar6 = alStack_2e0;
            pcStack_298 = FUN_10893aae4;
            uStack_2c0 = uVar8;
            puStack_2b8 = auStack_248;
            lStack_2b0 = lVar4;
            puStack_2a8 = puVar3;
            ppppppuStack_2a0 = &ppppppuStack_260;
            func_0x00010893b408();
            func_0x00010893b5b4();
            if (((ulong)plVar5 & 1) == 0) {
              func_0x00010893b514();
              func_0x000104bda914();
              plVar5 = plVar6;
            }
            func_0x00010893b3dc();
            if (!(bool)uVar1) {
              ___stack_chk_fail();
              func_0x00010893b574();
              func_0x00010b9abe10(&lStack_328,(plVar5[1] - *plVar5) / 0xe8);
              lVar10 = 0;
              lVar4 = 0x18;
              for (uVar11 = 0; uVar11 < (ulong)((plVar7[1] - *plVar7) / 0xe8); uVar11 = uVar11 + 1)
              {
                FUN_108b7866c(auStack_338,*plVar7 + lVar10);
                func_0x00010b9a9020(lStack_328 + lVar4,auStack_338);
                func_0x00010893b498();
                lVar4 = lVar4 + 0x10;
                lVar10 = lVar10 + 0xe8;
              }
              func_0x00010b9a8f84(uVar9,&lStack_328);
              func_0x000104bddf38(&lStack_328);
              return;
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893a798; end: 10893a86b;  */

void FUN_10893a798(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_2f8 [16];
  long lStack_2e8;
  long alStack_2a0 [4];
  undefined8 uStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined8 ******ppppppuStack_260;
  code *pcStack_258;
  long lStack_230;
  undefined8 uStack_228;
  undefined1 ******ppppppuStack_220;
  code *pcStack_218;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *****pppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined1 ****ppppuStack_180;
  code *pcStack_178;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  plVar7 = param_3;
  uVar8 = param_4;
  func_0x00010893b41c();
  uStack_48 = extraout_x8;
  func_0x00010893b4d8();
  func_0x0001052808e4();
  uStack_70 = 4;
  uStack_78 = SUB84(param_3,0);
  func_0x000105280820(auStack_68,param_4);
  FUN_10893abf0(auStack_58,param_5);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x00010893b5c0(uVar2,unaff_x19 + 0x38);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  do {
    func_0x00010b9a8d98();
    func_0x00010893b5d8();
  } while (!(bool)in_ZR);
  func_0x00010893b4a0();
  uStack_b0 = 0xffffffffffffffc0;
  pcStack_98 = FUN_10893a86c;
  uStack_a8 = uVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_10893ac10();
  func_0x00010893b4cc(*(undefined8 *)(puVar3 + 0x18),puVar3 + 0x40);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    uStack_f0 = 0xffffffffffffffc0;
    pcStack_d8 = FUN_10893a8c0;
    plVar5 = plVar7;
    uStack_100 = param_4;
    uStack_f8 = param_5;
    puStack_e8 = puVar3;
    ppuStack_e0 = &puStack_a0;
    func_0x00010893b41c();
    uStack_108 = extraout_x8_00;
    func_0x00010893b4d8();
    func_0x0001052808e4();
    FUN_108b77cf8(auStack_118,plVar7);
    uVar2 = *(undefined8 *)(puVar3 + 0x18);
    func_0x00010893b544(uVar2,puVar3 + 0x48);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_108);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar3 = auStack_118;
    do {
      func_0x00010b9a8d98();
      func_0x00010893b5d8();
    } while (!(bool)in_ZR);
    func_0x00010893b4a0();
    uStack_150 = 0xffffffffffffffe0;
    pcStack_138 = FUN_10893a954;
    uStack_148 = uVar2;
    pppuStack_140 = &ppuStack_e0;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_108b7866c();
    lVar4 = *(long *)(puVar3 + 0x18);
    func_0x00010893b4cc(lVar4,puVar3 + 0x50);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      uStack_190 = 0xffffffffffffffe0;
      pcStack_178 = FUN_10893a9a8;
      puStack_188 = puVar3;
      ppppuStack_180 = &pppuStack_140;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_10893ac94();
      func_0x00010893b4cc(*(undefined8 *)(lVar4 + 0x18),lVar4 + 0x58);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        uStack_1d0 = 0xffffffffffffffe0;
        pcStack_1b8 = FUN_10893a9fc;
        plVar7 = plVar5;
        uStack_1e0 = param_4;
        puStack_1d8 = auStack_128;
        lStack_1c8 = lVar4;
        pppppuStack_1c0 = &ppppuStack_180;
        func_0x00010893b41c();
        uStack_1e8 = extraout_x8_01;
        func_0x00010893b4d8();
        FUN_108b7c71c();
        func_0x0001052808e4(auStack_1f8,plVar5);
        uVar2 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010893b544(uVar2,lVar4 + 0x60);
        do {
          func_0x00010893b53c();
          func_0x00010893b588();
        } while (!(bool)in_ZR);
        func_0x00010893b3f4(uStack_1e8);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        lVar4 = 0x10;
        do {
          puVar3 = auStack_208 + lVar4;
          func_0x00010b9a8d98();
          lVar4 = lVar4 + -0x10;
          uVar1 = lVar4 == -0x10;
        } while (!(bool)uVar1);
        func_0x00010893b4a0();
        pcStack_218 = FUN_10893aa98;
        lStack_230 = lVar4;
        uStack_228 = uVar2;
        ppppppuStack_220 = &pppppuStack_1c0;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_108b80a1c();
        plVar5 = *(long **)(puVar3 + 0x18);
        func_0x00010893b4cc();
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          plVar6 = alStack_2a0;
          pcStack_258 = FUN_10893aae4;
          uStack_280 = param_4;
          puStack_278 = auStack_208;
          lStack_270 = lVar4;
          puStack_268 = puVar3;
          ppppppuStack_260 = &ppppppuStack_220;
          func_0x00010893b408();
          func_0x00010893b5b4();
          if (((ulong)plVar5 & 1) == 0) {
            func_0x00010893b514();
            func_0x000104bda914();
            plVar5 = plVar6;
          }
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b574();
            func_0x00010b9abe10(&lStack_2e8,(plVar5[1] - *plVar5) / 0xe8);
            lVar9 = 0;
            lVar4 = 0x18;
            for (uVar10 = 0; uVar10 < (ulong)((plVar7[1] - *plVar7) / 0xe8); uVar10 = uVar10 + 1) {
              FUN_108b7866c(auStack_2f8,*plVar7 + lVar9);
              func_0x00010b9a9020(lStack_2e8 + lVar4,auStack_2f8);
              func_0x00010893b498();
              lVar4 = lVar4 + 0x10;
              lVar9 = lVar9 + 0xe8;
            }
            func_0x00010b9a8f84(uVar8,&lStack_2e8);
            func_0x000104bddf38(&lStack_2e8);
            return;
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10893a86c; end: 10893a8bf;  */

void FUN_10893a86c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_268 [16];
  long lStack_258;
  long alStack_210 [4];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_10893ac10();
  func_0x00010893b4cc(*(undefined8 *)(param_1 + 0x18),param_1 + 0x40);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    plVar4 = param_3;
    func_0x00010893b41c();
    uStack_78 = extraout_x8;
    func_0x00010893b4d8();
    func_0x0001052808e4();
    FUN_108b77cf8(auStack_88,param_3);
    func_0x00010893b544(*(undefined8 *)(param_1 + 0x18),param_1 + 0x48);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar2 = auStack_88;
    do {
      func_0x00010b9a8d98();
      func_0x00010893b5d8();
    } while (!(bool)in_ZR);
    func_0x00010893b4a0();
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_108b7866c();
    lVar3 = *(long *)(puVar2 + 0x18);
    func_0x00010893b4cc(lVar3,puVar2 + 0x50);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_10893ac94();
      func_0x00010893b4cc(*(undefined8 *)(lVar3 + 0x18),lVar3 + 0x58);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        plVar6 = plVar4;
        func_0x00010893b41c();
        uStack_158 = extraout_x8_00;
        func_0x00010893b4d8();
        FUN_108b7c71c();
        func_0x0001052808e4(auStack_168,plVar4);
        func_0x00010893b544(*(undefined8 *)(lVar3 + 0x18),lVar3 + 0x60);
        do {
          func_0x00010893b53c();
          func_0x00010893b588();
        } while (!(bool)in_ZR);
        func_0x00010893b3f4(uStack_158);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        lVar3 = 0x10;
        do {
          puVar2 = auStack_178 + lVar3;
          func_0x00010b9a8d98();
          lVar3 = lVar3 + -0x10;
          uVar1 = lVar3 == -0x10;
        } while (!(bool)uVar1);
        func_0x00010893b4a0();
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_108b80a1c();
        plVar4 = *(long **)(puVar2 + 0x18);
        func_0x00010893b4cc();
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          plVar5 = alStack_210;
          func_0x00010893b408();
          func_0x00010893b5b4();
          if (((ulong)plVar4 & 1) == 0) {
            func_0x00010893b514();
            func_0x000104bda914();
            plVar4 = plVar5;
          }
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b574();
            func_0x00010b9abe10(&lStack_258,(plVar4[1] - *plVar4) / 0xe8);
            lVar7 = 0;
            lVar3 = 0x18;
            for (uVar8 = 0; uVar8 < (ulong)((plVar6[1] - *plVar6) / 0xe8); uVar8 = uVar8 + 1) {
              FUN_108b7866c(auStack_268,*plVar6 + lVar7);
              func_0x00010b9a9020(lStack_258 + lVar3,auStack_268);
              func_0x00010893b498();
              lVar3 = lVar3 + 0x10;
              lVar7 = lVar7 + 0xe8;
            }
            func_0x00010b9a8f84(param_4,&lStack_258);
            func_0x000104bddf38(&lStack_258);
            return;
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10893a8c0; end: 10893a953;  */

void FUN_10893a8c0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_228 [16];
  long lStack_218;
  long alStack_1d0 [4];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  plVar4 = param_3;
  func_0x00010893b41c();
  uStack_38 = extraout_x8;
  func_0x00010893b4d8();
  func_0x0001052808e4();
  FUN_108b77cf8(auStack_48,param_3);
  func_0x00010893b544(*(undefined8 *)(unaff_x19 + 0x18),unaff_x19 + 0x48);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_48;
  do {
    func_0x00010b9a8d98();
    func_0x00010893b5d8();
  } while (!(bool)in_ZR);
  func_0x00010893b4a0();
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b7866c();
  lVar3 = *(long *)(puVar2 + 0x18);
  func_0x00010893b4cc(lVar3,puVar2 + 0x50);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893ac94();
    func_0x00010893b4cc(*(undefined8 *)(lVar3 + 0x18),lVar3 + 0x58);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      plVar6 = plVar4;
      func_0x00010893b41c();
      uStack_118 = extraout_x8_00;
      func_0x00010893b4d8();
      FUN_108b7c71c();
      func_0x0001052808e4(auStack_128,plVar4);
      func_0x00010893b544(*(undefined8 *)(lVar3 + 0x18),lVar3 + 0x60);
      do {
        func_0x00010893b53c();
        func_0x00010893b588();
      } while (!(bool)in_ZR);
      func_0x00010893b3f4(uStack_118);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      lVar3 = 0x10;
      do {
        puVar2 = auStack_138 + lVar3;
        func_0x00010b9a8d98();
        lVar3 = lVar3 + -0x10;
        uVar1 = lVar3 == -0x10;
      } while (!(bool)uVar1);
      func_0x00010893b4a0();
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b80a1c();
      plVar4 = *(long **)(puVar2 + 0x18);
      func_0x00010893b4cc();
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        plVar5 = alStack_1d0;
        func_0x00010893b408();
        func_0x00010893b5b4();
        if (((ulong)plVar4 & 1) == 0) {
          func_0x00010893b514();
          func_0x000104bda914();
          plVar4 = plVar5;
        }
        func_0x00010893b3dc();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x00010893b574();
          func_0x00010b9abe10(&lStack_218,(plVar4[1] - *plVar4) / 0xe8);
          lVar7 = 0;
          lVar3 = 0x18;
          for (uVar8 = 0; uVar8 < (ulong)((plVar6[1] - *plVar6) / 0xe8); uVar8 = uVar8 + 1) {
            FUN_108b7866c(auStack_228,*plVar6 + lVar7);
            func_0x00010b9a9020(lStack_218 + lVar3,auStack_228);
            func_0x00010893b498();
            lVar3 = lVar3 + 0x10;
            lVar7 = lVar7 + 0xe8;
          }
          func_0x00010b9a8f84(param_4,&lStack_218);
          func_0x000104bddf38(&lStack_218);
          return;
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10893a954; end: 10893a9a7;  */

void FUN_10893a954(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  long alStack_170 [4];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b7866c();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010893b4cc(lVar2,param_1 + 0x50);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893ac94();
    func_0x00010893b4cc(*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x58);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      plVar6 = param_3;
      func_0x00010893b41c();
      uStack_b8 = extraout_x8;
      func_0x00010893b4d8();
      FUN_108b7c71c();
      func_0x0001052808e4(auStack_c8,param_3);
      func_0x00010893b544(*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x60);
      do {
        func_0x00010893b53c();
        func_0x00010893b588();
      } while (!(bool)in_ZR);
      func_0x00010893b3f4(uStack_b8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      lVar2 = 0x10;
      do {
        puVar3 = auStack_d8 + lVar2;
        func_0x00010b9a8d98();
        lVar2 = lVar2 + -0x10;
        uVar1 = lVar2 == -0x10;
      } while (!(bool)uVar1);
      func_0x00010893b4a0();
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b80a1c();
      plVar4 = *(long **)(puVar3 + 0x18);
      func_0x00010893b4cc();
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        plVar5 = alStack_170;
        func_0x00010893b408();
        func_0x00010893b5b4();
        if (((ulong)plVar4 & 1) == 0) {
          func_0x00010893b514();
          func_0x000104bda914();
          plVar4 = plVar5;
        }
        func_0x00010893b3dc();
        if ((bool)uVar1) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010893b574();
        func_0x00010b9abe10(&lStack_1b8,(plVar4[1] - *plVar4) / 0xe8);
        lVar7 = 0;
        lVar2 = 0x18;
        for (uVar8 = 0; uVar8 < (ulong)((plVar6[1] - *plVar6) / 0xe8); uVar8 = uVar8 + 1) {
          FUN_108b7866c(auStack_1c8,*plVar6 + lVar7);
          func_0x00010b9a9020(lStack_1b8 + lVar2,auStack_1c8);
          func_0x00010893b498();
          lVar2 = lVar2 + 0x10;
          lVar7 = lVar7 + 0xe8;
        }
        func_0x00010b9a8f84(param_4,&lStack_1b8);
        func_0x000104bddf38(&lStack_1b8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10893a9a8; end: 10893a9fb;  */

void FUN_10893a9a8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_188 [16];
  long lStack_178;
  long alStack_130 [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_10893ac94();
  func_0x00010893b4cc(*(undefined8 *)(param_1 + 0x18),param_1 + 0x58);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    plVar5 = param_3;
    func_0x00010893b41c();
    uStack_78 = extraout_x8;
    func_0x00010893b4d8();
    FUN_108b7c71c();
    func_0x0001052808e4(auStack_88,param_3);
    func_0x00010893b544(*(undefined8 *)(param_1 + 0x18),param_1 + 0x60);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    lVar6 = 0x10;
    do {
      puVar2 = auStack_98 + lVar6;
      func_0x00010b9a8d98();
      lVar6 = lVar6 + -0x10;
      uVar1 = lVar6 == -0x10;
    } while (!(bool)uVar1);
    func_0x00010893b4a0();
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_108b80a1c();
    plVar3 = *(long **)(puVar2 + 0x18);
    func_0x00010893b4cc();
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      plVar4 = alStack_130;
      func_0x00010893b408();
      func_0x00010893b5b4();
      if (((ulong)plVar3 & 1) == 0) {
        func_0x00010893b514();
        func_0x000104bda914();
        plVar3 = plVar4;
      }
      func_0x00010893b3dc();
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010893b574();
      func_0x00010b9abe10(&lStack_178,(plVar3[1] - *plVar3) / 0xe8);
      lVar7 = 0;
      lVar6 = 0x18;
      for (uVar8 = 0; uVar8 < (ulong)((plVar5[1] - *plVar5) / 0xe8); uVar8 = uVar8 + 1) {
        FUN_108b7866c(auStack_188,*plVar5 + lVar7);
        func_0x00010b9a9020(lStack_178 + lVar6,auStack_188);
        func_0x00010893b498();
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + 0xe8;
      }
      func_0x00010b9a8f84(param_4,&lStack_178);
      func_0x000104bddf38(&lStack_178);
      return;
    }
  }
  return;
}



/* Entry: 10893a9fc; end: 10893aa97;  */

void FUN_10893a9fc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_148 [16];
  long lStack_138;
  long alStack_f0 [4];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  plVar5 = param_3;
  func_0x00010893b41c();
  uStack_38 = extraout_x8;
  func_0x00010893b4d8();
  FUN_108b7c71c();
  func_0x0001052808e4(auStack_48,param_3);
  func_0x00010893b544(*(undefined8 *)(unaff_x19 + 0x18),unaff_x19 + 0x60);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = 0x10;
  do {
    puVar2 = auStack_58 + lVar6;
    func_0x00010b9a8d98();
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x00010893b4a0();
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b80a1c();
  plVar3 = *(long **)(puVar2 + 0x18);
  func_0x00010893b4cc();
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    plVar4 = alStack_f0;
    func_0x00010893b408();
    func_0x00010893b5b4();
    if (((ulong)plVar3 & 1) == 0) {
      func_0x00010893b514();
      func_0x000104bda914();
      plVar3 = plVar4;
    }
    func_0x00010893b3dc();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010893b574();
      func_0x00010b9abe10(&lStack_138,(plVar3[1] - *plVar3) / 0xe8);
      lVar7 = 0;
      lVar6 = 0x18;
      for (uVar8 = 0; uVar8 < (ulong)((plVar5[1] - *plVar5) / 0xe8); uVar8 = uVar8 + 1) {
        FUN_108b7866c(auStack_148,*plVar5 + lVar7);
        func_0x00010b9a9020(lStack_138 + lVar6,auStack_148);
        func_0x00010893b498();
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + 0xe8;
      }
      func_0x00010b9a8f84(param_4,&lStack_138);
      func_0x000104bddf38(&lStack_138);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10893aa98; end: 10893aae3;  */

void FUN_10893aa98(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  long alStack_90 [4];
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b80a1c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010893b4cc();
  func_0x00010893b498();
  func_0x00010893b3dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010893b430();
  func_0x00010893b4a0();
  plVar2 = alStack_90;
  func_0x00010893b408();
  func_0x00010893b5b4();
  if (((ulong)plVar1 & 1) == 0) {
    func_0x00010893b514();
    func_0x000104bda914();
    plVar1 = plVar2;
  }
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b574();
    func_0x00010b9abe10(&lStack_d8,(plVar1[1] - *plVar1) / 0xe8);
    lVar3 = 0;
    lVar5 = 0x18;
    for (uVar4 = 0; uVar4 < (ulong)((param_3[1] - *param_3) / 0xe8); uVar4 = uVar4 + 1) {
      FUN_108b7866c(auStack_e8,*param_3 + lVar3);
      func_0x00010b9a9020(lStack_d8 + lVar5,auStack_e8);
      func_0x00010893b498();
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + 0xe8;
    }
    func_0x00010b9a8f84(param_4,&lStack_d8);
    func_0x000104bddf38(&lStack_d8);
    return;
  }
  return;
}



/* Entry: 10893aae4; end: 10893ab2f;  */

void FUN_10893aae4(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long alStack_50 [4];
  
  plVar1 = alStack_50;
  func_0x00010893b408();
  func_0x00010893b5b4();
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010893b514();
    func_0x000104bda914();
    param_1 = plVar1;
  }
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b574();
    func_0x00010b9abe10(&lStack_98,(param_1[1] - *param_1) / 0xe8);
    lVar2 = 0;
    lVar4 = 0x18;
    for (uVar3 = 0; uVar3 < (ulong)((param_3[1] - *param_3) / 0xe8); uVar3 = uVar3 + 1) {
      FUN_108b7866c(auStack_a8,*param_3 + lVar2);
      func_0x00010b9a9020(lStack_98 + lVar4,auStack_a8);
      func_0x00010893b498();
      lVar4 = lVar4 + 0x10;
      lVar2 = lVar2 + 0xe8;
    }
    func_0x00010b9a8f84(param_4,&lStack_98);
    func_0x000104bddf38(&lStack_98);
    return;
  }
  return;
}



/* Entry: 10893ab30; end: 10893abef;  */

void FUN_10893ab30(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010893b574();
  func_0x00010b9abe10(&lStack_48,(param_1[1] - *param_1) / 0xe8);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((unaff_x20[1] - *unaff_x20) / 0xe8); uVar2 = uVar2 + 1) {
    FUN_108b7866c(auStack_58,*unaff_x20 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010893b498();
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0xe8;
  }
  func_0x00010b9a8f84();
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 10893abf0; end: 10893ac0f;  */

undefined4 * FUN_10893abf0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined4 auStack_60 [2];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 2) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b758cc();
  func_0x000107c30f7c(auStack_68,0x113828370);
  uStack_50 = 4;
  auStack_58[0] = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b759fc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_108b758cc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828378 & 1) == 0) {
    puVar3 = (undefined4 *)0x113828378;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501986);
      puVar4 = &UNK_10f50199f;
      func_0x000107c31088(auStack_d8,&UNK_10f50199f);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f5019a5;
      func_0x000107c31088(auStack_e0,&UNK_10f5019a5);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828368,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      puVar3 = (undefined4 *)0x113828378;
      ___cxa_guard_release(0x113828378);
    }
  }
  FUN_108b759fc(uStack_98);
  if ((bool)uVar1) {
    return (undefined4 *)0x113828368;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10893ac10; end: 10893ac93;  */

void FUN_10893ac10(void)

{
  long lVar1;
  int extraout_w11;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010893b574();
  func_0x00010529d1b8(&lStack_38);
  plVar2 = (long *)(unaff_x20 + 0x10);
  while (lVar1 = lStack_38, plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x00010893b59c();
    func_0x00010893b594(lVar1 + 0x18);
    func_0x00010893b498();
  }
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    do {
      func_0x00010893b52c();
    } while (extraout_w11 != 0);
  }
  func_0x00010893b564();
  func_0x000104bddedc(auStack_48);
  func_0x00010893b580();
  return;
}



/* Entry: 10893ac94; end: 10893ad3b;  */

void FUN_10893ac94(void)

{
  long lVar1;
  int extraout_w11;
  long unaff_x20;
  long *plVar2;
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  long lStack_38;
  
  func_0x00010893b574();
  func_0x00010529d1b8(&lStack_38);
  plVar2 = (long *)(unaff_x20 + 0x10);
  while (lVar1 = lStack_38, plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x00010893b59c();
    func_0x00010893b594(lVar1 + 0x18);
    func_0x00010893b498();
    auStack_48[0] = *(undefined4 *)(plVar2 + 5);
    uStack_40 = 4;
    func_0x00010893b594(lStack_38 + 0x18);
    func_0x00010893b498();
  }
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    do {
      func_0x00010893b52c();
    } while (extraout_w11 != 0);
  }
  func_0x00010893b564();
  func_0x000104bddedc(auStack_48);
  func_0x00010893b580();
  return;
}



/* Entry: 10893ad3c; end: 10893ad4b;  */

void FUN_10893ad3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ae48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893ad4c; end: 10893ad5f;  */

void FUN_10893ad4c(void)

{
  FUN_10893ad3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893ad60; end: 10893ad6b;  */

long FUN_10893ad60(long param_1)

{
  FUN_10893a524(param_1 + 0x38);
  func_0x000104be7e54(param_1 + 0x30);
  func_0x000108938220(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10893ad6c; end: 10893ada3;  */

long FUN_10893ad6c(long param_1)

{
  FUN_10893a524(param_1 + 0x20);
  func_0x000104be7e54(param_1 + 0x18);
  func_0x000108938220(param_1 + 8);
  return param_1;
}



/* Entry: 10893ada4; end: 10893adb7;  */

void FUN_10893ada4(void)

{
  FUN_10893ad6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893adb8; end: 10893adf7;  */

void FUN_10893adb8(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  long lVar10;
  undefined1 uStack_299;
  long lStack_298;
  undefined1 *puStack_290;
  undefined8 *puStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  long alStack_270 [4];
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined1 auStack_218 [24];
  int *piStack_200;
  long lStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [24];
  int *piStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  int *piStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [24];
  int *piStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  int *piStack_100;
  undefined8 uStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  int *piStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  int aiStack_98 [2];
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  func_0x00010893b408();
  func_0x00010893b4a8();
  iVar5 = (int)param_1 + 0x20;
  func_0x00010893b488();
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893adf8;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b43c();
    uStack_90 = 4;
    uStack_80 = 4;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = param_1 + 0x28;
    puVar8 = (undefined8 *)0x2;
    aiStack_98[0] = iVar5;
    uStack_88 = param_3;
    uStack_78 = extraout_x8;
    FUN_10893b074(uVar9,uVar6,aiStack_98);
    do {
      func_0x00010893b53c();
      func_0x00010893b588();
    } while (!(bool)in_ZR);
    func_0x00010893b3f4(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    lVar10 = 0x10;
    do {
      lVar2 = (long)aiStack_98 + lVar10;
      func_0x00010b9a8d98();
      lVar10 = lVar10 + -0x10;
      uVar1 = lVar10 == -0x10;
    } while (!(bool)uVar1);
    func_0x00010893b4a0();
    pcStack_a8 = FUN_10893ae8c;
    piStack_c0 = aiStack_98;
    uStack_b8 = uVar9;
    ppuStack_b0 = &puStack_50;
    func_0x00010893b408();
    if ((uVar6 >> 0x20 & 1) == 0) {
      uStack_d8 = 0;
      uStack_d0 = 1;
    }
    else {
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uVar6);
      uStack_d0 = 4;
    }
    uStack_cf = 0;
    func_0x00010893b488(*(undefined8 *)(lVar2 + 0x18));
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_e8 = FUN_10893aeec;
      piStack_100 = aiStack_98;
      uStack_f8 = uVar9;
      pppuStack_f0 = &ppuStack_b0;
      func_0x00010893b408();
      func_0x00010893b4a8();
      func_0x00010893b488();
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        pcStack_128 = FUN_10893af2c;
        piStack_140 = aiStack_98;
        uStack_138 = uVar9;
        pppuStack_130 = &pppuStack_f0;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_108b7f5a4();
        lVar10 = *(long *)(lVar2 + 0x18);
        func_0x00010893b4e4(lVar10,lVar2 + 0x40,auStack_158);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          pcStack_168 = FUN_10893af84;
          piStack_180 = aiStack_98;
          lStack_178 = lVar2;
          pppuStack_170 = &pppuStack_130;
          func_0x00010893b408();
          func_0x00010893b4a8();
          func_0x00010893b488();
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            pcStack_1a8 = FUN_10893afc4;
            piStack_1c0 = aiStack_98;
            lStack_1b8 = lVar2;
            pppuStack_1b0 = &pppuStack_170;
            func_0x00010893b408();
            func_0x00010893b4d8();
            FUN_10893b0c0();
            lVar2 = *(long *)(lVar10 + 0x18);
            func_0x00010893b4e4(lVar2,lVar10 + 0x50,auStack_1d8);
            func_0x00010893b498();
            func_0x00010893b3dc();
            if (!(bool)uVar1) {
              ___stack_chk_fail();
              func_0x00010893b430();
              func_0x00010893b4a0();
              pcStack_1e8 = FUN_10893b01c;
              piStack_200 = aiStack_98;
              lStack_1f8 = lVar10;
              pppuStack_1f0 = &pppuStack_1b0;
              func_0x00010893b408();
              func_0x00010893b4d8();
              FUN_108b76ab8();
              plVar3 = *(long **)(lVar2 + 0x18);
              puVar7 = auStack_218;
              func_0x00010893b4e4(plVar3,lVar2 + 0x58);
              func_0x00010893b498();
              func_0x00010893b3dc();
              if (!(bool)uVar1) {
                ___stack_chk_fail();
                func_0x00010893b430();
                func_0x00010893b4a0();
                plVar4 = alStack_270;
                pcStack_228 = FUN_10893b074;
                pppuStack_230 = &pppuStack_1f0;
                func_0x00010893b408();
                func_0x00010893b5b4();
                if (((ulong)plVar3 & 1) == 0) {
                  func_0x00010893b514();
                  func_0x000104bda914();
                  plVar3 = plVar4;
                }
                func_0x00010893b3dc();
                if (!(bool)uVar1) {
                  ___stack_chk_fail();
                  pcStack_278 = FUN_10893b0c0;
                  puStack_290 = puVar7;
                  puStack_288 = puVar8;
                  pppuStack_280 = &pppuStack_230;
                  FUN_108b80734(*plVar3,&UNK_10df74577);
                  puVar8 = puStack_288;
                  puVar7 = puStack_290;
                  func_0x00010893b574(extraout_x8_00);
                  lVar10 = *plVar3;
                  if (lVar10 == 0) {
                    *(undefined2 *)(puVar8 + 1) = 1;
                    *puVar8 = 0;
                  }
                  else {
                    func_0x00010893b4bc(lVar10,&PTR_DAT_110a9af10);
                    if (lVar10 == 0) {
                      FUN_10893b198(puVar8,&uStack_299,puVar7);
                    }
                    else {
                      lStack_298 = *(long *)(lVar10 + 8);
                      if ((lStack_298 != 0) && (*(long *)(lStack_298 + 0x10) != 0)) {
                        do {
                          func_0x00010893b52c();
                          lStack_298 = extraout_x8_01;
                        } while (extraout_w11 != 0);
                      }
                      func_0x00010b9a8f6c(puVar8,&lStack_298);
                      func_0x000104be7e54(&lStack_298);
                    }
                  }
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893adf8; end: 10893ae8b;  */

void FUN_10893adf8(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  long lVar9;
  undefined1 uStack_259;
  long lStack_258;
  undefined1 *puStack_250;
  undefined8 *puStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  long alStack_230 [4];
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined4 *puStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_198 [24];
  undefined4 *puStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined4 *puStack_140;
  long lStack_138;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  undefined1 auStack_118 [24];
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  auStack_58[0] = param_2;
  uStack_48 = param_3;
  func_0x00010893b43c();
  uStack_50 = 4;
  uStack_40 = 4;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = param_1 + 0x28;
  puVar7 = (undefined8 *)0x2;
  uStack_38 = extraout_x8;
  FUN_10893b074(uVar8,uVar5,auStack_58);
  do {
    func_0x00010893b53c();
    func_0x00010893b588();
  } while (!(bool)in_ZR);
  func_0x00010893b3f4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar9 = 0x10;
    do {
      lVar2 = (long)auStack_58 + lVar9;
      func_0x00010b9a8d98();
      lVar9 = lVar9 + -0x10;
      uVar1 = lVar9 == -0x10;
    } while (!(bool)uVar1);
    func_0x00010893b4a0();
    pcStack_68 = FUN_10893ae8c;
    puStack_80 = auStack_58;
    uStack_78 = uVar8;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    if ((uVar5 >> 0x20 & 1) == 0) {
      uStack_98 = 0;
      uStack_90 = 1;
    }
    else {
      uStack_98 = CONCAT44(uStack_98._4_4_,(int)uVar5);
      uStack_90 = 4;
    }
    uStack_8f = 0;
    func_0x00010893b488(*(undefined8 *)(lVar2 + 0x18));
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_a8 = FUN_10893aeec;
      puStack_c0 = auStack_58;
      uStack_b8 = uVar8;
      ppuStack_b0 = &puStack_70;
      func_0x00010893b408();
      func_0x00010893b4a8();
      func_0x00010893b488();
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        pcStack_e8 = FUN_10893af2c;
        puStack_100 = auStack_58;
        uStack_f8 = uVar8;
        pppuStack_f0 = &ppuStack_b0;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_108b7f5a4();
        lVar9 = *(long *)(lVar2 + 0x18);
        func_0x00010893b4e4(lVar9,lVar2 + 0x40,auStack_118);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          pcStack_128 = FUN_10893af84;
          puStack_140 = auStack_58;
          lStack_138 = lVar2;
          pppuStack_130 = &pppuStack_f0;
          func_0x00010893b408();
          func_0x00010893b4a8();
          func_0x00010893b488();
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            pcStack_168 = FUN_10893afc4;
            puStack_180 = auStack_58;
            lStack_178 = lVar2;
            pppuStack_170 = &pppuStack_130;
            func_0x00010893b408();
            func_0x00010893b4d8();
            FUN_10893b0c0();
            lVar2 = *(long *)(lVar9 + 0x18);
            func_0x00010893b4e4(lVar2,lVar9 + 0x50,auStack_198);
            func_0x00010893b498();
            func_0x00010893b3dc();
            if (!(bool)uVar1) {
              ___stack_chk_fail();
              func_0x00010893b430();
              func_0x00010893b4a0();
              pcStack_1a8 = FUN_10893b01c;
              puStack_1c0 = auStack_58;
              lStack_1b8 = lVar9;
              pppuStack_1b0 = &pppuStack_170;
              func_0x00010893b408();
              func_0x00010893b4d8();
              FUN_108b76ab8();
              plVar3 = *(long **)(lVar2 + 0x18);
              puVar6 = auStack_1d8;
              func_0x00010893b4e4(plVar3,lVar2 + 0x58);
              func_0x00010893b498();
              func_0x00010893b3dc();
              if (!(bool)uVar1) {
                ___stack_chk_fail();
                func_0x00010893b430();
                func_0x00010893b4a0();
                plVar4 = alStack_230;
                pcStack_1e8 = FUN_10893b074;
                pppuStack_1f0 = &pppuStack_1b0;
                func_0x00010893b408();
                func_0x00010893b5b4();
                if (((ulong)plVar3 & 1) == 0) {
                  func_0x00010893b514();
                  func_0x000104bda914();
                  plVar3 = plVar4;
                }
                func_0x00010893b3dc();
                if (!(bool)uVar1) {
                  ___stack_chk_fail();
                  pcStack_238 = FUN_10893b0c0;
                  puStack_250 = puVar6;
                  puStack_248 = puVar7;
                  pppuStack_240 = &pppuStack_1f0;
                  FUN_108b80734(*plVar3,&UNK_10df74577);
                  puVar7 = puStack_248;
                  puVar6 = puStack_250;
                  func_0x00010893b574(extraout_x8_00);
                  lVar9 = *plVar3;
                  if (lVar9 == 0) {
                    *(undefined2 *)(puVar7 + 1) = 1;
                    *puVar7 = 0;
                  }
                  else {
                    func_0x00010893b4bc(lVar9,&PTR_DAT_110a9af10);
                    if (lVar9 == 0) {
                      FUN_10893b198(puVar7,&uStack_259,puVar6);
                    }
                    else {
                      lStack_258 = *(long *)(lVar9 + 8);
                      if ((lStack_258 != 0) && (*(long *)(lStack_258 + 0x10) != 0)) {
                        do {
                          func_0x00010893b52c();
                          lStack_258 = extraout_x8_01;
                        } while (extraout_w11 != 0);
                      }
                      func_0x00010b9a8f6c(puVar7,&lStack_258);
                      func_0x000104be7e54(&lStack_258);
                    }
                  }
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 10893ae8c; end: 10893aeeb;  */

void FUN_10893ae8c(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_1f9;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  long alStack_1d0 [4];
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  undefined1 auStack_178 [24];
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [24];
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  
  func_0x00010893b408();
  if ((param_2 >> 0x20 & 1) == 0) {
    uStack_38 = 0;
    uStack_30 = 1;
  }
  else {
    uStack_38 = CONCAT44(uStack_38._4_4_,(int)param_2);
    uStack_30 = 4;
  }
  uStack_2f = 0;
  func_0x00010893b488(*(undefined8 *)(param_1 + 0x18));
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893aeec;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    func_0x00010893b4a8();
    func_0x00010893b488();
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_88 = FUN_10893af2c;
      ppuStack_90 = &puStack_50;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b7f5a4();
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010893b4e4(lVar2,param_1 + 0x40,auStack_b8);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        pcStack_c8 = FUN_10893af84;
        pppuStack_d0 = &ppuStack_90;
        func_0x00010893b408();
        func_0x00010893b4a8();
        func_0x00010893b488();
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          pcStack_108 = FUN_10893afc4;
          pppuStack_110 = &pppuStack_d0;
          func_0x00010893b408();
          func_0x00010893b4d8();
          FUN_10893b0c0();
          lVar3 = *(long *)(lVar2 + 0x18);
          func_0x00010893b4e4(lVar3,lVar2 + 0x50,auStack_138);
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            pcStack_148 = FUN_10893b01c;
            pppuStack_150 = &pppuStack_110;
            func_0x00010893b408();
            func_0x00010893b4d8();
            FUN_108b76ab8();
            plVar4 = *(long **)(lVar3 + 0x18);
            puVar6 = auStack_178;
            func_0x00010893b4e4(plVar4,lVar3 + 0x58);
            func_0x00010893b498();
            func_0x00010893b3dc();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010893b430();
              func_0x00010893b4a0();
              plVar5 = alStack_1d0;
              pcStack_188 = FUN_10893b074;
              pppuStack_190 = &pppuStack_150;
              func_0x00010893b408();
              func_0x00010893b5b4();
              if (((ulong)plVar4 & 1) == 0) {
                func_0x00010893b514();
                func_0x000104bda914();
                plVar4 = plVar5;
              }
              func_0x00010893b3dc();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                pcStack_1d8 = FUN_10893b0c0;
                puStack_1f0 = puVar6;
                puStack_1e8 = param_4;
                pppuStack_1e0 = &pppuStack_190;
                FUN_108b80734(*plVar4,&UNK_10df74577);
                puVar1 = puStack_1e8;
                puVar6 = puStack_1f0;
                func_0x00010893b574(extraout_x8);
                lVar2 = *plVar4;
                if (lVar2 == 0) {
                  *(undefined2 *)(puVar1 + 1) = 1;
                  *puVar1 = 0;
                }
                else {
                  func_0x00010893b4bc(lVar2,&PTR_DAT_110a9af10);
                  if (lVar2 == 0) {
                    FUN_10893b198(puVar1,&uStack_1f9,puVar6);
                  }
                  else {
                    lStack_1f8 = *(long *)(lVar2 + 8);
                    if ((lStack_1f8 != 0) && (*(long *)(lStack_1f8 + 0x10) != 0)) {
                      do {
                        func_0x00010893b52c();
                        lStack_1f8 = extraout_x8_00;
                      } while (extraout_w11 != 0);
                    }
                    func_0x00010b9a8f6c(puVar1,&lStack_1f8);
                    func_0x000104be7e54(&lStack_1f8);
                  }
                }
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893aeec; end: 10893af2b;  */

void FUN_10893aeec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_1b9;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long alStack_190 [4];
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [24];
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [24];
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [24];
  undefined1 *puStack_50;
  code *pcStack_48;
  
  func_0x00010893b408();
  func_0x00010893b4a8();
  func_0x00010893b488();
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893af2c;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_108b7f5a4();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010893b4e4(lVar2,param_1 + 0x40,auStack_78);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_88 = FUN_10893af84;
      ppuStack_90 = &puStack_50;
      func_0x00010893b408();
      func_0x00010893b4a8();
      func_0x00010893b488();
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        pcStack_c8 = FUN_10893afc4;
        pppuStack_d0 = &ppuStack_90;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_10893b0c0();
        lVar3 = *(long *)(lVar2 + 0x18);
        func_0x00010893b4e4(lVar3,lVar2 + 0x50,auStack_f8);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          pcStack_108 = FUN_10893b01c;
          pppuStack_110 = &pppuStack_d0;
          func_0x00010893b408();
          func_0x00010893b4d8();
          FUN_108b76ab8();
          plVar4 = *(long **)(lVar3 + 0x18);
          puVar6 = auStack_138;
          func_0x00010893b4e4(plVar4,lVar3 + 0x58);
          func_0x00010893b498();
          func_0x00010893b3dc();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010893b430();
            func_0x00010893b4a0();
            plVar5 = alStack_190;
            pcStack_148 = FUN_10893b074;
            pppuStack_150 = &pppuStack_110;
            func_0x00010893b408();
            func_0x00010893b5b4();
            if (((ulong)plVar4 & 1) == 0) {
              func_0x00010893b514();
              func_0x000104bda914();
              plVar4 = plVar5;
            }
            func_0x00010893b3dc();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              pcStack_198 = FUN_10893b0c0;
              puStack_1b0 = puVar6;
              puStack_1a8 = param_4;
              pppuStack_1a0 = &pppuStack_150;
              FUN_108b80734(*plVar4,&UNK_10df74577);
              puVar1 = puStack_1a8;
              puVar6 = puStack_1b0;
              func_0x00010893b574(extraout_x8);
              lVar2 = *plVar4;
              if (lVar2 == 0) {
                *(undefined2 *)(puVar1 + 1) = 1;
                *puVar1 = 0;
              }
              else {
                func_0x00010893b4bc(lVar2,&PTR_DAT_110a9af10);
                if (lVar2 == 0) {
                  FUN_10893b198(puVar1,&uStack_1b9,puVar6);
                }
                else {
                  lStack_1b8 = *(long *)(lVar2 + 8);
                  if ((lStack_1b8 != 0) && (*(long *)(lStack_1b8 + 0x10) != 0)) {
                    do {
                      func_0x00010893b52c();
                      lStack_1b8 = extraout_x8_00;
                    } while (extraout_w11 != 0);
                  }
                  func_0x00010b9a8f6c(puVar1,&lStack_1b8);
                  func_0x000104be7e54(&lStack_1b8);
                }
              }
              return;
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10893af2c; end: 10893af83;  */

void FUN_10893af2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_179;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  long alStack_150 [4];
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [24];
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [24];
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b7f5a4();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010893b4e4(lVar2,param_1 + 0x40,auStack_38);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893af84;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    func_0x00010893b4a8();
    func_0x00010893b488();
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_88 = FUN_10893afc4;
      ppuStack_90 = &puStack_50;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_10893b0c0();
      lVar3 = *(long *)(lVar2 + 0x18);
      func_0x00010893b4e4(lVar3,lVar2 + 0x50,auStack_b8);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        pcStack_c8 = FUN_10893b01c;
        pppuStack_d0 = &ppuStack_90;
        func_0x00010893b408();
        func_0x00010893b4d8();
        FUN_108b76ab8();
        plVar4 = *(long **)(lVar3 + 0x18);
        puVar6 = auStack_f8;
        func_0x00010893b4e4(plVar4,lVar3 + 0x58);
        func_0x00010893b498();
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010893b430();
          func_0x00010893b4a0();
          plVar5 = alStack_150;
          pcStack_108 = FUN_10893b074;
          pppuStack_110 = &pppuStack_d0;
          func_0x00010893b408();
          func_0x00010893b5b4();
          if (((ulong)plVar4 & 1) == 0) {
            func_0x00010893b514();
            func_0x000104bda914();
            plVar4 = plVar5;
          }
          func_0x00010893b3dc();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            pcStack_158 = FUN_10893b0c0;
            puStack_170 = puVar6;
            puStack_168 = param_4;
            pppuStack_160 = &pppuStack_110;
            FUN_108b80734(*plVar4,&UNK_10df74577);
            puVar1 = puStack_168;
            puVar6 = puStack_170;
            func_0x00010893b574(extraout_x8);
            lVar2 = *plVar4;
            if (lVar2 == 0) {
              *(undefined2 *)(puVar1 + 1) = 1;
              *puVar1 = 0;
            }
            else {
              func_0x00010893b4bc(lVar2,&PTR_DAT_110a9af10);
              if (lVar2 == 0) {
                FUN_10893b198(puVar1,&uStack_179,puVar6);
              }
              else {
                lStack_178 = *(long *)(lVar2 + 8);
                if ((lStack_178 != 0) && (*(long *)(lStack_178 + 0x10) != 0)) {
                  do {
                    func_0x00010893b52c();
                    lStack_178 = extraout_x8_00;
                  } while (extraout_w11 != 0);
                }
                func_0x00010b9a8f6c(puVar1,&lStack_178);
                func_0x000104be7e54(&lStack_178);
              }
            }
            return;
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10893af84; end: 10893afc3;  */

void FUN_10893af84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  undefined8 *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  long alStack_110 [4];
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [24];
  undefined1 *puStack_50;
  code *pcStack_48;
  
  func_0x00010893b408();
  func_0x00010893b4a8();
  func_0x00010893b488();
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893afc4;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_10893b0c0();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010893b4e4(lVar2,param_1 + 0x50,auStack_78);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      pcStack_88 = FUN_10893b01c;
      ppuStack_90 = &puStack_50;
      func_0x00010893b408();
      func_0x00010893b4d8();
      FUN_108b76ab8();
      plVar3 = *(long **)(lVar2 + 0x18);
      puVar5 = auStack_b8;
      func_0x00010893b4e4(plVar3,lVar2 + 0x58);
      func_0x00010893b498();
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010893b430();
        func_0x00010893b4a0();
        plVar4 = alStack_110;
        pcStack_c8 = FUN_10893b074;
        pppuStack_d0 = &ppuStack_90;
        func_0x00010893b408();
        func_0x00010893b5b4();
        if (((ulong)plVar3 & 1) == 0) {
          func_0x00010893b514();
          func_0x000104bda914();
          plVar3 = plVar4;
        }
        func_0x00010893b3dc();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          pcStack_118 = FUN_10893b0c0;
          puStack_130 = puVar5;
          puStack_128 = param_4;
          pppuStack_120 = &pppuStack_d0;
          FUN_108b80734(*plVar3,&UNK_10df74577);
          puVar1 = puStack_128;
          puVar5 = puStack_130;
          func_0x00010893b574(extraout_x8);
          lVar2 = *plVar3;
          if (lVar2 == 0) {
            *(undefined2 *)(puVar1 + 1) = 1;
            *puVar1 = 0;
          }
          else {
            func_0x00010893b4bc(lVar2,&PTR_DAT_110a9af10);
            if (lVar2 == 0) {
              FUN_10893b198(puVar1,&uStack_139,puVar5);
            }
            else {
              lStack_138 = *(long *)(lVar2 + 8);
              if ((lStack_138 != 0) && (*(long *)(lStack_138 + 0x10) != 0)) {
                do {
                  func_0x00010893b52c();
                  lStack_138 = extraout_x8_00;
                } while (extraout_w11 != 0);
              }
              func_0x00010b9a8f6c(puVar1,&lStack_138);
              func_0x000104be7e54(&lStack_138);
            }
          }
          return;
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10893afc4; end: 10893b01b;  */

void FUN_10893afc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_f9;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  long alStack_d0 [4];
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [24];
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [24];
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_10893b0c0();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010893b4e4(lVar2,param_1 + 0x50,auStack_38);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010893b430();
    func_0x00010893b4a0();
    pcStack_48 = FUN_10893b01c;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010893b408();
    func_0x00010893b4d8();
    FUN_108b76ab8();
    plVar3 = *(long **)(lVar2 + 0x18);
    puVar5 = auStack_78;
    func_0x00010893b4e4(plVar3,lVar2 + 0x58);
    func_0x00010893b498();
    func_0x00010893b3dc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010893b430();
      func_0x00010893b4a0();
      plVar4 = alStack_d0;
      pcStack_88 = FUN_10893b074;
      ppuStack_90 = &puStack_50;
      func_0x00010893b408();
      func_0x00010893b5b4();
      if (((ulong)plVar3 & 1) == 0) {
        func_0x00010893b514();
        func_0x000104bda914();
        plVar3 = plVar4;
      }
      func_0x00010893b3dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_10893b0c0;
        puStack_f0 = puVar5;
        puStack_e8 = param_4;
        pppuStack_e0 = &ppuStack_90;
        FUN_108b80734(*plVar3,&UNK_10df74577);
        puVar1 = puStack_e8;
        puVar5 = puStack_f0;
        func_0x00010893b574(extraout_x8);
        lVar2 = *plVar3;
        if (lVar2 == 0) {
          *(undefined2 *)(puVar1 + 1) = 1;
          *puVar1 = 0;
        }
        else {
          func_0x00010893b4bc(lVar2,&PTR_DAT_110a9af10);
          if (lVar2 == 0) {
            FUN_10893b198(puVar1,&uStack_f9,puVar5);
          }
          else {
            lStack_f8 = *(long *)(lVar2 + 8);
            if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
              do {
                func_0x00010893b52c();
                lStack_f8 = extraout_x8_00;
              } while (extraout_w11 != 0);
            }
            func_0x00010b9a8f6c(puVar1,&lStack_f8);
            func_0x000104be7e54(&lStack_f8);
          }
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10893b01c; end: 10893b073;  */

void FUN_10893b01c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long alStack_90 [4];
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [24];
  
  func_0x00010893b408();
  func_0x00010893b4d8();
  FUN_108b76ab8();
  plVar2 = *(long **)(param_1 + 0x18);
  puVar5 = auStack_38;
  func_0x00010893b4e4(plVar2,param_1 + 0x58);
  func_0x00010893b498();
  func_0x00010893b3dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010893b430();
  func_0x00010893b4a0();
  plVar3 = alStack_90;
  pcStack_48 = FUN_10893b074;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010893b408();
  func_0x00010893b5b4();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x00010893b514();
    func_0x000104bda914();
    plVar2 = plVar3;
  }
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_98 = FUN_10893b0c0;
    puStack_b0 = puVar5;
    puStack_a8 = param_4;
    ppuStack_a0 = &puStack_50;
    FUN_108b80734(*plVar2,&UNK_10df74577);
    puVar1 = puStack_a8;
    puVar5 = puStack_b0;
    func_0x00010893b574(extraout_x8);
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      *(undefined2 *)(puVar1 + 1) = 1;
      *puVar1 = 0;
    }
    else {
      func_0x00010893b4bc(lVar4,&PTR_DAT_110a9af10);
      if (lVar4 == 0) {
        FUN_10893b198(puVar1,&uStack_b9,puVar5);
      }
      else {
        lStack_b8 = *(long *)(lVar4 + 8);
        if ((lStack_b8 != 0) && (*(long *)(lStack_b8 + 0x10) != 0)) {
          do {
            func_0x00010893b52c();
            lStack_b8 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        func_0x00010b9a8f6c(puVar1,&lStack_b8);
        func_0x000104be7e54(&lStack_b8);
      }
    }
    return;
  }
  return;
}



/* Entry: 10893b074; end: 10893b0bf;  */

void FUN_10893b074(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  undefined1 uStack_79;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long alStack_50 [4];
  
  plVar3 = alStack_50;
  func_0x00010893b408();
  func_0x00010893b5b4();
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010893b514();
    func_0x000104bda914();
    param_1 = plVar3;
  }
  func_0x00010893b3dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_58 = FUN_10893b0c0;
    uStack_70 = param_3;
    puStack_68 = param_4;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_108b80734(*param_1,&UNK_10df74577);
    puVar2 = puStack_68;
    uVar1 = uStack_70;
    func_0x00010893b574(extraout_x8);
    lVar4 = *param_1;
    if (lVar4 == 0) {
      *(undefined2 *)(puVar2 + 1) = 1;
      *puVar2 = 0;
    }
    else {
      func_0x00010893b4bc(lVar4,&PTR_DAT_110a9af10);
      if (lVar4 == 0) {
        FUN_10893b198(puVar2,&uStack_79,uVar1);
      }
      else {
        lStack_78 = *(long *)(lVar4 + 8);
        if ((lStack_78 != 0) && (*(long *)(lStack_78 + 0x10) != 0)) {
          do {
            func_0x00010893b52c();
            lStack_78 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        func_0x00010b9a8f6c(puVar2,&lStack_78);
        func_0x000104be7e54(&lStack_78);
      }
    }
    return;
  }
  return;
}



/* Entry: 10893b0c0; end: 10893b197;  */

void FUN_10893b0c0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 uStack_29;
  long lStack_28;
  
  FUN_108b80734(*param_2,&UNK_10df74577);
  func_0x00010893b574(param_1);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *(undefined2 *)(unaff_x19 + 1) = 1;
    *unaff_x19 = 0;
  }
  else {
    func_0x00010893b4bc(lVar1,&PTR_DAT_110a9af10);
    if (lVar1 == 0) {
      FUN_10893b198(unaff_x19,&uStack_29,unaff_x20);
    }
    else {
      lStack_28 = *(long *)(lVar1 + 8);
      if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
        do {
          func_0x00010893b52c();
          lStack_28 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x00010b9a8f6c(unaff_x19,&lStack_28);
      func_0x000104be7e54(&lStack_28);
    }
  }
  return;
}



/* Entry: 10893b198; end: 10893b2bf;  */

void FUN_10893b198(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  int extraout_w11;
  int iVar3;
  long alStack_58 [2];
  int iStack_48;
  long lStack_40;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  alStack_58[0] = *param_2;
  lVar1 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,alStack_58);
  if (lVar1 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x28);
    func_0x000104bf7d80(alStack_58,lVar1 + 0x18);
    if (alStack_58[0] != 0) {
      lStack_38 = alStack_58[0];
      if (*(long *)(alStack_58[0] + 0x10) != 0) {
        do {
          func_0x00010893b52c();
          lStack_38 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x00010893b5a8();
      func_0x000104be7e54(&lStack_38);
      plVar2 = alStack_58;
      goto LAB_10893b2a4;
    }
    iVar3 = iVar3 + 1;
    func_0x000104be7e54(alStack_58);
  }
  FUN_108b7cc94(&lStack_38,param_2);
  iStack_48 = iVar3;
  if (lVar1 == 0) {
    lStack_40 = *param_2;
    func_0x000104bf822c(alStack_58,lStack_38);
    FUN_10893b2c0(0x11328ad40,&lStack_40,alStack_58);
  }
  else {
    func_0x000104bf822c(alStack_58,lStack_38);
    func_0x000104bf7db8(lVar1 + 0x18,alStack_58);
  }
  func_0x000104bdc2a0(alStack_58);
  func_0x00010893b5a8();
  plVar2 = &lStack_38;
LAB_10893b2a4:
  func_0x000104be7e54(plVar2);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  return;
}



/* Entry: 10893b2c0; end: 10893b2ef;  */

void FUN_10893b2c0(void)

{
  func_0x00010893b2d8();
  return;
}



/* Entry: 10893b2f0; end: 10893b357;  */

undefined1  [16] FUN_10893b2f0(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_10893b358(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000104bf7e44(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x000104bdc220(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10893b358; end: 10893b3db;  */

void FUN_10893b358(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = *param_3;
  uVar2 = *param_4;
  puVar1[4] = param_4[1];
  puVar1[3] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_4 + 2);
  param_2 = param_2 + 0x18;
  func_0x000104bf7ea8();
  puVar1[1] = param_2;
  return;
}



/* Entry: 10893b3dc; end: 10893b5e3;  */

void FUN_10893b3dc(void)

{
  return;
}



/* Entry: 10893b5e4; end: 10893b7f7;  */

void FUN_10893b5e4(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 unaff_x27;
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined *puStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
  if (param_2[2] == 0) {
    param_1[0xc] = 1;
  }
  else if ((param_2[2] == 2) && ((*(byte *)(param_2 + 0xe) & 1) != 0)) {
    puStack_90 = &UNK_10e52b660;
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puVar10 = (undefined8 *)(param_2 + 8);
LAB_10893b66c:
    puVar10 = (undefined8 *)*puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      puVar3 = puVar10 + 2;
      FUN_108941204();
      if (*(int *)(puVar10 + 5) == 2) {
        if (*(char *)((long)puVar10 + 0x34) != '\x01') goto LAB_10893b6b0;
        unaff_x27 = *(undefined8 *)((long)puVar10 + 0x2c);
        uVar11 = 2;
      }
      else if (*(int *)(puVar10 + 5) == 0) {
        uVar11 = 1;
      }
      else {
LAB_10893b6b0:
        uVar11 = 0;
      }
      lVar6 = 0;
      Hint_Prefetch(puStack_90,0,2,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puVar3 + 0x2219159b;
      uVar5 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puVar3 + 0x2219159b) * -0x622015f714c7d297;
      uVar9 = (ulong)puStack_90 >> 0xc ^ uVar5 >> 7;
      bVar8 = (byte)uVar5 & 0x7f;
      while( true ) {
        uVar9 = uVar9 & uStack_80;
        uVar13 = *(undefined8 *)(puStack_90 + uVar9);
        bVar12 = (byte)((ulong)uVar13 >> 8);
        bVar14 = (byte)((ulong)uVar13 >> 0x10);
        bVar15 = (byte)((ulong)uVar13 >> 0x18);
        bVar16 = (byte)((ulong)uVar13 >> 0x20);
        bVar17 = (byte)((ulong)uVar13 >> 0x28);
        bVar18 = (byte)((ulong)uVar13 >> 0x30);
        bVar19 = (byte)((ulong)uVar13 >> 0x38);
        for (uVar5 = CONCAT17(-(bVar19 == bVar8),
                              CONCAT16(-(bVar18 == bVar8),
                                       CONCAT15(-(bVar17 == bVar8),
                                                CONCAT14(-(bVar16 == bVar8),
                                                         CONCAT13(-(bVar15 == bVar8),
                                                                  CONCAT12(-(bVar14 == bVar8),
                                                                           CONCAT11(-(bVar12 ==
                                                                                     bVar8),-((byte)
                                                  uVar13 == bVar8)))))))) & 0x8080808080808080;
            uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
          uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          if (*(undefined8 **)
               (lStack_88 +
               (uVar9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uStack_80) * 0x18) ==
              puVar3) goto LAB_10893b66c;
        }
        bVar12 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                     CONCAT16(-(bVar18 == 0x80),
                                              CONCAT15(-(bVar17 == 0x80),
                                                       CONCAT14(-(bVar16 == 0x80),
                                                                CONCAT13(-(bVar15 == 0x80),
                                                                         CONCAT12(-(bVar14 == 0x80),
                                                                                  CONCAT11(-(bVar12 
                                                  == 0x80),-((byte)uVar13 == 0x80)))))))),1);
        if ((bVar12 & 1) != 0) break;
        lVar6 = lVar6 + 8;
        uVar9 = lVar6 + uVar9;
      }
      ppuVar4 = &puStack_90;
      FUN_10893b7f8();
      puVar7 = (undefined8 *)(lStack_88 + (long)ppuVar4 * 0x18);
      *puVar7 = puVar3;
      puVar7[1] = unaff_x27;
      *(undefined4 *)(puVar7 + 2) = uVar11;
      goto LAB_10893b66c;
    }
    func_0x00010893ba44(param_1 + 4,&puStack_90);
    param_1[0xc] = 2;
    FUN_1089394d0(&puStack_90);
  }
  else {
    param_1[0xc] = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x10,param_2 + 0x12);
  param_1[0x16] = param_2[0x18];
  return;
}



/* Entry: 10893b7f8; end: 10893b8ff;  */

void FUN_10893b7f8(long *param_1,undefined *param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  puVar6 = param_2;
  func_0x000107c2b954();
  lVar7 = *param_1;
  if ((*(long *)(lVar7 + -8) == 0) && (*(char *)(lVar7 + (long)plVar4) != -2)) {
    uVar10 = param_1[2];
    if ((uVar10 < 9) || (uVar10 * 0x19 < (ulong)(param_1[3] << 5))) {
      puVar6 = (undefined *)(uVar10 << 1 | 1);
      plVar4 = param_1;
      FUN_10893b900();
    }
    else {
      puVar6 = &UNK_110a9af20;
      plVar4 = param_1;
      func_0x00010ae6c914(param_1,&UNK_110a9af20,auStack_40);
    }
    func_0x00010893ba60();
    lVar7 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(lVar7 + -8) = *(long *)(lVar7 + -8) - (ulong)(*(char *)(lVar7 + (long)plVar4) == -0x80)
  ;
  bVar2 = (byte)param_2 & 0x7f;
  uVar10 = param_1[2];
  *(byte *)(lVar7 + (long)plVar4) = bVar2;
  *(byte *)(lVar7 + (uVar10 & (long)plVar4 - 7U) + (uVar10 & 7)) = bVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *plVar4;
  plVar11 = (long *)plVar4[1];
  lVar12 = plVar4[2];
  plVar4[2] = (long)puVar6;
  plVar5 = plVar4;
  func_0x000107810840();
  lVar13 = plVar4[1];
  for (lVar7 = 0; lVar12 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar8 = *plVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar8;
      func_0x00010893ba60();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + lVar8) * 'i') & 0x7f;
      uVar10 = plVar4[2];
      lVar8 = *plVar4;
      *(byte *)(lVar8 + (long)plVar5) = bVar2;
      *(byte *)(lVar8 + ((long)plVar5 - 7U & uVar10) + (uVar10 & 7)) = bVar2;
      plVar9 = (long *)(lVar13 + (long)plVar5 * 0x18);
      lVar14 = plVar11[1];
      lVar8 = *plVar11;
      plVar9[2] = plVar11[2];
      plVar9[1] = lVar14;
      *plVar9 = lVar8;
    }
    plVar11 = plVar11 + 3;
  }
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10893b900; end: 10893b9ff;  */

void FUN_10893b900(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *param_1;
  plVar8 = (long *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  plVar4 = param_1;
  func_0x000107810840();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      lVar5 = *plVar8;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar5;
      func_0x00010893ba60();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + lVar5) * 'i') & 0x7f;
      uVar7 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar4) = bVar2;
      *(byte *)(lVar5 + ((long)plVar4 - 7U & uVar7) + (uVar7 & 7)) = bVar2;
      plVar6 = (long *)(lVar11 + (long)plVar4 * 0x18);
      lVar12 = plVar8[1];
      lVar5 = *plVar8;
      plVar6[2] = plVar8[2];
      plVar6[1] = lVar12;
      *plVar6 = lVar5;
    }
    plVar8 = plVar8 + 3;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10893ba00; end: 10893ba6b;  */

ulong FUN_10893ba00(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 10893ba6c; end: 10893bad3;  */

void FUN_10893ba6c(void)

{
  long extraout_x8;
  
  func_0x00010893d0d0();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10893bad4; end: 10893badb;  */

void FUN_10893bad4(long param_1)

{
  long extraout_x8;
  
  func_0x00010893d0d0(param_1 + -8);
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10893badc; end: 10893bb43;  */

void FUN_10893badc(void)

{
  long extraout_x8;
  
  func_0x00010893d0d0();
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10893bb44; end: 10893bb4b;  */

void FUN_10893bb44(long param_1)

{
  long extraout_x8;
  
  func_0x00010893d0d0(param_1 + -8);
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10893bb4c; end: 10893bbc3;  */

void FUN_10893bb4c(long param_1,ulong param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
            (*(long **)(param_1 + 0x20),param_2 & 0xffffffff | 0x100000000);
  return;
}



/* Entry: 10893bbc4; end: 10893bbcb;  */

void FUN_10893bbc4(long param_1,ulong param_2)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
            (*(long **)(param_1 + 0x18),param_2 & 0xffffffff | 0x100000000);
  return;
}



/* Entry: 10893bbcc; end: 10893bc33;  */

void FUN_10893bbcc(void)

{
  long extraout_x8;
  
  func_0x00010893d0d0();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10893bc34; end: 10893bc3b;  */

void FUN_10893bc34(long param_1)

{
  long extraout_x8;
  
  func_0x00010893d0d0(param_1 + -8);
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10893bc3c; end: 10893beab;  */

void FUN_10893bc3c(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  undefined4 *puStack_348;
  long lStack_340;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [56];
  undefined1 auStack_288 [60];
  undefined1 auStack_24c [60];
  undefined1 auStack_210 [56];
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined1 auStack_1c8 [344];
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  puVar1 = (undefined4 *)*param_2;
  lStack_340 = param_2[1];
  puStack_348 = puVar1;
  if (lStack_340 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10 != 0);
  }
  puStack_58 = puVar1 + 0x4c;
  puStack_60 = puVar1 + 0x52;
  puStack_68 = puVar1 + 0x58;
  puStack_70 = puVar1 + 0x5e;
  lVar3 = *(long *)(puVar1 + 2);
  uStack_1d4 = (uint)lVar3 & ((uint)(lVar3 >> 0x3f) ^ 0xffffffff);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = puVar1[4];
  uStack_1d8 = *puVar1;
  uStack_1d0 = (uint)(0 < lVar3);
  FUN_10893c18c(auStack_210,puVar1 + 8);
  func_0x00010893c1ec(auStack_24c,puVar1 + 0x16);
  func_0x00010893c1ec(auStack_288,puVar1 + 0x2a);
  FUN_10893c18c(auStack_2c0,puVar1 + 0x3e);
  FUN_10893c270(auStack_2d8,&puStack_58,*(undefined8 *)(puVar1 + 0x4c),&puStack_58,
                *(undefined8 *)(puVar1 + 0x4e));
  FUN_10893c37c(auStack_2f0,&puStack_60,*(undefined8 *)(puVar1 + 0x52),&puStack_60,
                *(undefined8 *)(puVar1 + 0x54));
  FUN_10893c37c(auStack_308,&puStack_68,*(undefined8 *)(puVar1 + 0x58),&puStack_68,
                *(undefined8 *)(puVar1 + 0x5a));
  FUN_10893c270(auStack_320,&puStack_70,*(undefined8 *)(puVar1 + 0x5e),&puStack_70,
                *(undefined8 *)(puVar1 + 0x60));
  FUN_10893c478(auStack_1c8,uVar2,CONCAT44(uStack_1d4,uStack_1d8),(uint)(0 < lVar3),auStack_210,
                auStack_24c,auStack_288,auStack_2c0,auStack_2d8,auStack_2f0,auStack_308,auStack_320)
  ;
  (**(code **)(*plVar4 + 0x48))(plVar4,auStack_1c8);
  FUN_10893ceb0(auStack_1c8);
  func_0x00010893ceec(auStack_320);
  func_0x00010893cf18(auStack_308);
  func_0x00010893cf18(auStack_2f0);
  func_0x00010893ceec(auStack_2d8);
  FUN_10893c0fc(&puStack_348);
  return;
}



/* Entry: 10893beac; end: 10893beb3;  */

void FUN_10893beac(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  undefined4 *puStack_348;
  long lStack_340;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [56];
  undefined1 auStack_288 [60];
  undefined1 auStack_24c [60];
  undefined1 auStack_210 [56];
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined1 auStack_1c8 [344];
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  puVar1 = (undefined4 *)*param_2;
  lStack_340 = param_2[1];
  puStack_348 = puVar1;
  if (lStack_340 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10 != 0);
  }
  puStack_58 = puVar1 + 0x4c;
  puStack_60 = puVar1 + 0x52;
  puStack_68 = puVar1 + 0x58;
  puStack_70 = puVar1 + 0x5e;
  lVar3 = *(long *)(puVar1 + 2);
  uStack_1d4 = (uint)lVar3 & ((uint)(lVar3 >> 0x3f) ^ 0xffffffff);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = puVar1[4];
  uStack_1d8 = *puVar1;
  uStack_1d0 = (uint)(0 < lVar3);
  FUN_10893c18c(auStack_210,puVar1 + 8);
  func_0x00010893c1ec(auStack_24c,puVar1 + 0x16);
  func_0x00010893c1ec(auStack_288,puVar1 + 0x2a);
  FUN_10893c18c(auStack_2c0,puVar1 + 0x3e);
  FUN_10893c270(auStack_2d8,&puStack_58,*(undefined8 *)(puVar1 + 0x4c),&puStack_58,
                *(undefined8 *)(puVar1 + 0x4e));
  FUN_10893c37c(auStack_2f0,&puStack_60,*(undefined8 *)(puVar1 + 0x52),&puStack_60,
                *(undefined8 *)(puVar1 + 0x54));
  FUN_10893c37c(auStack_308,&puStack_68,*(undefined8 *)(puVar1 + 0x58),&puStack_68,
                *(undefined8 *)(puVar1 + 0x5a));
  FUN_10893c270(auStack_320,&puStack_70,*(undefined8 *)(puVar1 + 0x5e),&puStack_70,
                *(undefined8 *)(puVar1 + 0x60));
  FUN_10893c478(auStack_1c8,uVar2,CONCAT44(uStack_1d4,uStack_1d8),(uint)(0 < lVar3),auStack_210,
                auStack_24c,auStack_288,auStack_2c0,auStack_2d8,auStack_2f0,auStack_308,auStack_320)
  ;
  (**(code **)(*plVar4 + 0x48))(plVar4,auStack_1c8);
  FUN_10893ceb0(auStack_1c8);
  func_0x00010893ceec(auStack_320);
  func_0x00010893cf18(auStack_308);
  func_0x00010893cf18(auStack_2f0);
  func_0x00010893ceec(auStack_2d8);
  FUN_10893c0fc(&puStack_348);
  return;
}



/* Entry: 10893beb4; end: 10893bf1b;  */

void FUN_10893beb4(void)

{
  long extraout_x8;
  
  func_0x00010893d0d0();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10893bf1c; end: 10893bf23;  */

void FUN_10893bf1c(long param_1)

{
  long extraout_x8;
  
  func_0x00010893d0d0(param_1 + -0x18);
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10893bf24; end: 10893c093;  */

void FUN_10893bf24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_98 = uVar1;
  lStack_90 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10 != 0);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a9b0f0;
  if (lVar2 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10_00 != 0);
  }
  puVar3[3] = &PTR_FUN_110a9b140;
  puVar3[4] = uVar1;
  puVar3[5] = lVar2;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010893c120(&uStack_88);
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_60 = puVar3 + 3;
  puStack_58 = puVar3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&puStack_60);
  FUN_10893cfec(&puStack_60);
  func_0x00010893cf44(&uStack_70);
  func_0x00010893c120(&uStack_98);
  return;
}



/* Entry: 10893c094; end: 10893c09f;  */

void FUN_10893c094(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_98 = uVar1;
  lStack_90 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10 != 0);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a9b0f0;
  if (lVar2 != 0) {
    do {
      func_0x00010893d160();
    } while (extraout_w10_00 != 0);
  }
  puVar3[3] = &PTR_FUN_110a9b140;
  puVar3[4] = uVar1;
  puVar3[5] = lVar2;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010893c120(&uStack_88);
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_60 = puVar3 + 3;
  puStack_58 = puVar3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&puStack_60);
  FUN_10893cfec(&puStack_60);
  func_0x00010893cf44(&uStack_70);
  func_0x00010893c120(&uStack_98);
  return;
}



/* Entry: 10893c0a0; end: 10893c0b3;  */

void FUN_10893c0a0(void)

{
  func_0x00010893c144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893c0b4; end: 10893c0fb;  */

long FUN_10893c0b4(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10893c0fc; end: 10893c18b;  */

void FUN_10893c0fc(long param_1)

{
  func_0x00010893d1f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10893c18c; end: 10893c26f;  */

void FUN_10893c18c(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 1);
    lVar4 = *(long *)(param_2 + 4);
    uVar1 = 0x100000000;
    if (lVar4 < 1) {
      uVar1 = 0;
    }
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 1) = uVar3;
    *(ulong *)(param_1 + 3) = (uint)lVar4 & ((uint)(lVar4 >> 0x3f) ^ 0xffffffff) | uVar1;
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  return;
}



/* Entry: 10893c270; end: 10893c37b;  */

void FUN_10893c270(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010893d170();
  uStack_70 = 0;
  uStack_78 = param_1;
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x50) {
    __ZNSt3__19to_stringEx(&uStack_68,*(undefined8 *)(unaff_x21 + 0x18));
    uStack_a8 = *(undefined8 *)(unaff_x21 + 0x20);
    uStack_a0 = *(undefined4 *)(unaff_x21 + 0x28);
    uStack_98 = *(undefined8 *)(unaff_x21 + 0x30);
    uStack_80 = *(undefined4 *)(unaff_x21 + 0x48);
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_b0 = uStack_58;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_88 = *(undefined8 *)(unaff_x21 + 0x40);
    uStack_90 = *(undefined8 *)(unaff_x21 + 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    FUN_10893c480();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  }
  uStack_70 = 1;
  func_0x00010893c878(&uStack_78);
  return;
}



/* Entry: 10893c37c; end: 10893c477;  */

void FUN_10893c37c(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010893d170();
  uStack_70 = 0;
  uStack_78 = param_1;
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    __ZNSt3__19to_stringEx(&uStack_68,*(undefined8 *)(unaff_x21 + 0x30));
    uStack_88 = uStack_60;
    uStack_90 = uStack_68;
    uStack_80 = uStack_58;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    FUN_10893c928();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  }
  uStack_70 = 1;
  func_0x00010893cd00(&uStack_78);
  return;
}



/* Entry: 10893c478; end: 10893c47f;  */

void FUN_10893c478(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  param_1[3] = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  uVar6 = param_5[5];
  uVar5 = param_5[4];
  *(undefined8 *)(param_1 + 0x10) = param_5[6];
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  uVar4 = param_6[3];
  uVar3 = param_6[2];
  uVar6 = param_6[5];
  uVar5 = param_6[4];
  uVar7 = *(undefined8 *)((long)param_6 + 0x2c);
  *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)((long)param_6 + 0x34);
  *(undefined8 *)(param_1 + 0x1d) = uVar7;
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  uVar4 = param_7[3];
  uVar3 = param_7[2];
  uVar6 = param_7[5];
  uVar5 = param_7[4];
  uVar7 = *(undefined8 *)((long)param_7 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)((long)param_7 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar7;
  *(undefined8 *)(param_1 + 0x2b) = uVar6;
  *(undefined8 *)(param_1 + 0x29) = uVar5;
  *(undefined8 *)(param_1 + 0x27) = uVar4;
  *(undefined8 *)(param_1 + 0x25) = uVar3;
  *(undefined8 *)(param_1 + 0x23) = uVar2;
  *(undefined8 *)(param_1 + 0x21) = uVar1;
  uVar3 = param_8[1];
  uVar2 = *param_8;
  uVar4 = param_8[2];
  uVar6 = param_8[5];
  uVar5 = param_8[4];
  uVar1 = param_8[6];
  *(undefined8 *)(param_1 + 0x36) = param_8[3];
  *(undefined8 *)(param_1 + 0x34) = uVar4;
  *(undefined8 *)(param_1 + 0x3a) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x40) = param_9[1];
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  *(undefined8 *)(param_1 + 0x42) = param_9[2];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *param_10;
  *(undefined8 *)(param_1 + 0x46) = param_10[1];
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  uVar1 = *param_11;
  *(undefined8 *)(param_1 + 0x4c) = param_11[1];
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  *(undefined8 *)(param_1 + 0x4e) = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar1 = *param_12;
  *(undefined8 *)(param_1 + 0x52) = param_12[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x54) = param_12[2];
  *param_12 = 0;
  param_12[1] = 0;
  param_12[2] = 0;
  return;
}



/* Entry: 10893c480; end: 10893c4f3;  */

undefined8 * FUN_10893c480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    uVar6 = *(undefined8 *)((long)param_2 + 0x4c);
    *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined8 *)((long)puVar1 + 0x4c) = uVar6;
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    puVar1[9] = uVar5;
    puVar1[8] = uVar4;
    puVar1 = puVar1 + 0xc;
  }
  else {
    puVar1 = param_1;
    FUN_10893c4f4();
  }
  param_1[1] = puVar1;
  return puVar1 + -0xc;
}



/* Entry: 10893c4f4; end: 10893c59f;  */

undefined8 FUN_10893c4f4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010893d1dc();
  FUN_10893c5a0();
  func_0x00010893d134();
  FUN_10893c638();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[3];
  puStack_48[5] = unaff_x20[5];
  puStack_48[4] = uVar2;
  puStack_48[3] = uVar1;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  uVar2 = unaff_x20[7];
  uVar1 = unaff_x20[6];
  uVar4 = unaff_x20[9];
  uVar3 = unaff_x20[8];
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0x4c);
  *(undefined8 *)((long)puStack_48 + 0x54) = *(undefined8 *)((long)unaff_x20 + 0x54);
  *(undefined8 *)((long)puStack_48 + 0x4c) = uVar5;
  puStack_48[7] = uVar2;
  puStack_48[6] = uVar1;
  puStack_48[9] = uVar4;
  puStack_48[8] = uVar3;
  puStack_48 = puStack_48 + 0xc;
  FUN_10893c5e8();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010893c80c(auStack_58);
  return uVar1;
}



/* Entry: 10893c5a0; end: 10893c5e7;  */

long * FUN_10893c5a0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x2aaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x60;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x155555555555554 < uVar1) {
      plVar2 = (long *)0x2aaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_10893c62c();
  func_0x00010893d128();
  plVar2 = param_1 + 2;
  FUN_10893c6c4(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x60) * 0x60);
  func_0x00010893d07c();
  return plVar2;
}



/* Entry: 10893c5e8; end: 10893c62b;  */

void FUN_10893c5e8(long *param_1,long param_2)

{
  func_0x00010893d128();
  FUN_10893c6c4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x60) * 0x60);
  func_0x00010893d07c();
  return;
}



/* Entry: 10893c62c; end: 10893c637;  */

void FUN_10893c62c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010893d1ac();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010893c674(param_4);
  }
  func_0x00010893d194(0x60);
  return;
}



/* Entry: 10893c638; end: 10893c697;  */

void FUN_10893c638(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010893c674(param_4);
  }
  func_0x00010893d194(0x60);
  return;
}



/* Entry: 10893c698; end: 10893c6c3;  */

void FUN_10893c698(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  undefined8 *puStack_38;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010893d108();
  for (puVar1 = extraout_x8; puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    param_4[2] = puVar1[2];
    param_4[1] = uVar3;
    *param_4 = uVar2;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    param_4[5] = puVar1[5];
    param_4[4] = uVar3;
    param_4[3] = uVar2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
    uVar3 = puVar1[7];
    uVar2 = puVar1[6];
    uVar5 = puVar1[9];
    uVar4 = puVar1[8];
    uVar6 = *(undefined8 *)((long)puVar1 + 0x4c);
    *(undefined8 *)((long)param_4 + 0x54) = *(undefined8 *)((long)puVar1 + 0x54);
    *(undefined8 *)((long)param_4 + 0x4c) = uVar6;
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    param_4[9] = uVar5;
    param_4[8] = uVar4;
    param_4 = param_4 + 0xc;
    puStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10893c754();
  FUN_10893c788(auStack_60);
  return;
}



/* Entry: 10893c6c4; end: 10893c753;  */

void FUN_10893c6c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  undefined8 *puStack_28;
  
  func_0x00010893d108();
  for (puVar1 = extraout_x8; puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    param_4[2] = puVar1[2];
    param_4[1] = uVar3;
    *param_4 = uVar2;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    param_4[5] = puVar1[5];
    param_4[4] = uVar3;
    param_4[3] = uVar2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
    uVar3 = puVar1[7];
    uVar2 = puVar1[6];
    uVar5 = puVar1[9];
    uVar4 = puVar1[8];
    uVar6 = *(undefined8 *)((long)puVar1 + 0x4c);
    *(undefined8 *)((long)param_4 + 0x54) = *(undefined8 *)((long)puVar1 + 0x54);
    *(undefined8 *)((long)param_4 + 0x4c) = uVar6;
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    param_4[9] = uVar5;
    param_4[8] = uVar4;
    param_4 = param_4 + 0xc;
    puStack_28 = param_4;
  }
  uStack_38 = 1;
  FUN_10893c754();
  FUN_10893c788(auStack_50);
  return;
}



/* Entry: 10893c754; end: 10893c787;  */

void FUN_10893c754(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  return;
}



/* Entry: 10893c788; end: 10893c7b7;  */

long FUN_10893c788(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10893c7b8(param_1);
  }
  return param_1;
}



/* Entry: 10893c7b8; end: 10893c7d7;  */

void FUN_10893c7b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x48);
  }
  return;
}



/* Entry: 10893c7d8; end: 10893c837;  */

void FUN_10893c7d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_3 + -0x48);
  }
  return;
}



/* Entry: 10893c838; end: 10893c83f;  */

void FUN_10893c838(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x48);
  }
  return;
}



/* Entry: 10893c840; end: 10893c8df;  */

void FUN_10893c840(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x48);
  }
  return;
}



/* Entry: 10893c8e0; end: 10893c8e7;  */

void FUN_10893c8e0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x48);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893c8e8; end: 10893c927;  */

void FUN_10893c8e8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x48);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893c928; end: 10893c98b;  */

undefined8 * FUN_10893c928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar6 = *(undefined8 *)((long)param_2 + 0x1c);
    *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined8 *)((long)puVar1 + 0x1c) = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    puVar1[8] = param_2[8];
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    puVar1 = puVar1 + 9;
  }
  else {
    puVar1 = param_1;
    FUN_10893c98c();
  }
  param_1[1] = puVar1;
  return puVar1 + -9;
}



/* Entry: 10893c98c; end: 10893ca23;  */

undefined8 FUN_10893c98c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010893d1dc();
  FUN_10893ca24();
  func_0x00010893d134();
  FUN_10893cacc();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0x1c);
  *(undefined8 *)((long)puStack_48 + 0x24) = *(undefined8 *)((long)unaff_x20 + 0x24);
  *(undefined8 *)((long)puStack_48 + 0x1c) = uVar5;
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  puStack_48[3] = uVar4;
  puStack_48[2] = uVar3;
  uVar2 = unaff_x20[7];
  uVar1 = unaff_x20[6];
  puStack_48[8] = unaff_x20[8];
  puStack_48[7] = uVar2;
  puStack_48[6] = uVar1;
  unaff_x20[7] = 0;
  unaff_x20[8] = 0;
  unaff_x20[6] = 0;
  puStack_48 = puStack_48 + 9;
  FUN_10893ca7c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010893cc94(auStack_58);
  return uVar1;
}



/* Entry: 10893ca24; end: 10893ca7b;  */

long * FUN_10893ca24(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x38e38e38e38e38f) {
    uVar1 = (param_1[2] - *param_1) / 0x48;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1c71c71c71c71c6 < uVar1) {
      plVar2 = (long *)0x38e38e38e38e38e;
    }
    return plVar2;
  }
  FUN_10893cac0();
  func_0x00010893d128();
  plVar2 = param_1 + 2;
  FUN_10893cb5c(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x00010893d07c();
  return plVar2;
}



/* Entry: 10893ca7c; end: 10893cabf;  */

void FUN_10893ca7c(long *param_1,long param_2)

{
  func_0x00010893d128();
  FUN_10893cb5c(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x00010893d07c();
  return;
}



/* Entry: 10893cac0; end: 10893cacb;  */

void FUN_10893cac0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010893d1ac();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010893cb08(param_4);
  }
  func_0x00010893d194(0x48);
  return;
}



/* Entry: 10893cacc; end: 10893cb2b;  */

void FUN_10893cacc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010893cb08(param_4);
  }
  func_0x00010893d194(0x48);
  return;
}



/* Entry: 10893cb2c; end: 10893cb5b;  */

void FUN_10893cb2c(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  undefined8 *puStack_38;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010893d108();
  for (puVar1 = extraout_x8; puVar1 != param_3; puVar1 = puVar1 + 9) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar6 = *(undefined8 *)((long)puVar1 + 0x1c);
    *(undefined8 *)((long)param_4 + 0x24) = *(undefined8 *)((long)puVar1 + 0x24);
    *(undefined8 *)((long)param_4 + 0x1c) = uVar6;
    param_4[1] = uVar3;
    *param_4 = uVar2;
    param_4[3] = uVar5;
    param_4[2] = uVar4;
    uVar3 = puVar1[7];
    uVar2 = puVar1[6];
    param_4[8] = puVar1[8];
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    param_4 = param_4 + 9;
    puStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10893cbdc();
  FUN_10893cc10(auStack_60);
  return;
}



/* Entry: 10893cb5c; end: 10893cbdb;  */

void FUN_10893cb5c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  undefined8 *puStack_28;
  
  func_0x00010893d108();
  for (puVar1 = extraout_x8; puVar1 != param_3; puVar1 = puVar1 + 9) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar6 = *(undefined8 *)((long)puVar1 + 0x1c);
    *(undefined8 *)((long)param_4 + 0x24) = *(undefined8 *)((long)puVar1 + 0x24);
    *(undefined8 *)((long)param_4 + 0x1c) = uVar6;
    param_4[1] = uVar3;
    *param_4 = uVar2;
    param_4[3] = uVar5;
    param_4[2] = uVar4;
    uVar3 = puVar1[7];
    uVar2 = puVar1[6];
    param_4[8] = puVar1[8];
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    param_4 = param_4 + 9;
    puStack_28 = param_4;
  }
  uStack_38 = 1;
  FUN_10893cbdc();
  FUN_10893cc10(auStack_50);
  return;
}



/* Entry: 10893cbdc; end: 10893cc0f;  */

void FUN_10893cbdc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x30);
  }
  return;
}



/* Entry: 10893cc10; end: 10893cc3f;  */

long FUN_10893cc10(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10893cc40(param_1);
  }
  return param_1;
}



/* Entry: 10893cc40; end: 10893cc5f;  */

void FUN_10893cc40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10893cc60; end: 10893ccbf;  */

void FUN_10893cc60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_3 + -0x18);
  }
  return;
}



/* Entry: 10893ccc0; end: 10893ccc7;  */

void FUN_10893ccc0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x48;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10893ccc8; end: 10893cd67;  */

void FUN_10893ccc8(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x48;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10893cd68; end: 10893cd6f;  */

void FUN_10893cd68(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893cd70; end: 10893cdaf;  */

void FUN_10893cd70(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893d128();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893cdb0; end: 10893ceaf;  */

void FUN_10893cdb0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  param_1[3] = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  uVar6 = param_5[5];
  uVar5 = param_5[4];
  *(undefined8 *)(param_1 + 0x10) = param_5[6];
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  uVar4 = param_6[3];
  uVar3 = param_6[2];
  uVar6 = param_6[5];
  uVar5 = param_6[4];
  uVar7 = *(undefined8 *)((long)param_6 + 0x2c);
  *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)((long)param_6 + 0x34);
  *(undefined8 *)(param_1 + 0x1d) = uVar7;
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  uVar4 = param_7[3];
  uVar3 = param_7[2];
  uVar6 = param_7[5];
  uVar5 = param_7[4];
  uVar7 = *(undefined8 *)((long)param_7 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)((long)param_7 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar7;
  *(undefined8 *)(param_1 + 0x2b) = uVar6;
  *(undefined8 *)(param_1 + 0x29) = uVar5;
  *(undefined8 *)(param_1 + 0x27) = uVar4;
  *(undefined8 *)(param_1 + 0x25) = uVar3;
  *(undefined8 *)(param_1 + 0x23) = uVar2;
  *(undefined8 *)(param_1 + 0x21) = uVar1;
  uVar3 = param_8[1];
  uVar2 = *param_8;
  uVar4 = param_8[2];
  uVar6 = param_8[5];
  uVar5 = param_8[4];
  uVar1 = param_8[6];
  *(undefined8 *)(param_1 + 0x36) = param_8[3];
  *(undefined8 *)(param_1 + 0x34) = uVar4;
  *(undefined8 *)(param_1 + 0x3a) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x40) = param_9[1];
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  *(undefined8 *)(param_1 + 0x42) = param_9[2];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *param_10;
  *(undefined8 *)(param_1 + 0x46) = param_10[1];
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  uVar1 = *param_11;
  *(undefined8 *)(param_1 + 0x4c) = param_11[1];
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  *(undefined8 *)(param_1 + 0x4e) = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar1 = *param_12;
  *(undefined8 *)(param_1 + 0x52) = param_12[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x54) = param_12[2];
  *param_12 = 0;
  param_12[1] = 0;
  param_12[2] = 0;
  return;
}



/* Entry: 10893ceb0; end: 10893cf67;  */

long FUN_10893ceb0(long param_1)

{
  func_0x00010893ceec(param_1 + 0x140);
  func_0x00010893cf18(param_1 + 0x128);
  func_0x00010893cf18(param_1 + 0x110);
  func_0x00010893ceec(param_1 + 0xf8);
  return param_1;
}



/* Entry: 10893cf68; end: 10893cf77;  */

void FUN_10893cf68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893cf78; end: 10893cf8b;  */

void FUN_10893cf78(void)

{
  FUN_10893cf68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


