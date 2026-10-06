/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006d8588; end: 006d8623;  */

undefined8 * FUN_006d8588(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 in_ZR;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar30;
  long lVar31;
  undefined1 extraout_w9;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auStack_508 [40];
  undefined8 auStack_4e0 [5];
  undefined1 auStack_4b8 [40];
  long lStack_490;
  ulong uStack_488;
  undefined1 **ppuStack_480;
  code *pcStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  ulong uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [160];
  ushort uStack_340;
  uint uStack_33e;
  byte bStack_33a;
  byte bStack_339;
  undefined2 uStack_338;
  uint uStack_336;
  byte bStack_332;
  uint uStack_331;
  byte bStack_32d;
  byte bStack_32c;
  ushort uStack_32b;
  uint uStack_329;
  byte bStack_325;
  uint uStack_324;
  ushort uStack_300;
  uint uStack_2fe;
  byte bStack_2fa;
  byte bStack_2f9;
  undefined2 uStack_2f8;
  uint uStack_2f6;
  byte bStack_2f2;
  uint uStack_2f1;
  byte bStack_2ed;
  byte bStack_2ec;
  ushort uStack_2eb;
  uint uStack_2e9;
  byte bStack_2e5;
  uint uStack_2e4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  byte bStack_1e7;
  uint uStack_1e6;
  byte bStack_1e2;
  byte bStack_1e1;
  undefined2 uStack_1e0;
  uint uStack_1de;
  byte bStack_1da;
  uint uStack_1d9;
  byte bStack_1d5;
  byte bStack_1d4;
  ushort uStack_1d3;
  uint uStack_1d1;
  byte bStack_1cd;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_118 [160];
  byte abStack_78 [31];
  undefined1 uStack_59;
  undefined8 uStack_38;
  
  func_0x006da5f4();
  uStack_38 = extraout_x8;
  FUN_006eb00c(param_3,0x20,abStack_78);
  abStack_78[0] = abStack_78[0] & 0xf8;
  func_0x006da880(uStack_59);
  FUN_006d7b00(auStack_118,abStack_78);
  puVar14 = param_1;
  FUN_006d92d0(param_1,auStack_118);
  uVar54 = *param_3;
  uVar56 = param_3[3];
  uVar55 = param_3[2];
  param_2[1] = param_3[1];
  *param_2 = uVar54;
  param_2[3] = uVar56;
  param_2[2] = uVar55;
  uVar54 = *param_1;
  uVar56 = param_1[3];
  uVar55 = param_1[2];
  param_2[5] = param_1[1];
  param_2[4] = uVar54;
  param_2[7] = uVar56;
  param_2[6] = uVar55;
  func_0x006da5a8(uStack_38);
  if ((bool)in_ZR) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_006d8624;
  lVar16 = param_4;
  puStack_3f8 = puVar14;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x006da5f4();
  uStack_1a8 = extraout_x8_00;
  FUN_006eb00c(lVar16,0x20,&bStack_1e8);
  uVar30 = (ulong)bStack_1e8;
  bStack_1e8 = (byte)(uVar30 & 0xf8);
  func_0x006da880(uStack_1cc._3_1_);
  uStack_1cc = CONCAT13(extraout_w9,(undefined3)uStack_1cc);
  uStack_3e8 = 0xbb67ae8584caa73b;
  lStack_3f0 = 0x6a09e667f3bcc908;
  uStack_408 = 0xa54ff53a5f1d36f1;
  lStack_410 = 0x3c6ef372fe94f82b;
  uStack_2b8 = 0xbb67ae8584caa73b;
  uStack_2c0 = 0x6a09e667f3bcc908;
  uStack_2a8 = 0xa54ff53a5f1d36f1;
  uStack_2b0 = 0x3c6ef372fe94f82b;
  uStack_418 = 0x9b05688c2b3e6c1f;
  lStack_420 = 0x510e527fade682d1;
  uStack_428 = 0x5be0cd19137e2179;
  lStack_430 = 0x1f83d9abfb41bd6b;
  uStack_298 = 0x9b05688c2b3e6c1f;
  uStack_2a0 = 0x510e527fade682d1;
  uStack_288 = 0x5be0cd19137e2179;
  uStack_290 = 0x1f83d9abfb41bd6b;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_1f0 = 0x4000000000;
  func_0x006da6cc(&uStack_2c0,auStack_1c8);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_300,&uStack_2c0);
  FUN_006d7f14(&uStack_300);
  FUN_006d7b00(auStack_3e0,&uStack_300);
  FUN_006d92d0(puVar14,auStack_3e0);
  uStack_2b8 = uStack_3e8;
  uStack_2c0 = lStack_3f0;
  uStack_2a8 = uStack_408;
  uStack_2b0 = lStack_410;
  uStack_298 = uStack_418;
  uStack_2a0 = lStack_420;
  uStack_288 = uStack_428;
  uStack_290 = lStack_430;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_1f0 = 0x4000000000;
  func_0x006da6cc(&uStack_2c0,puVar14);
  func_0x006da6cc(&uStack_2c0,param_4 + 0x20);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_340,&uStack_2c0);
  FUN_006d7f14(&uStack_340);
  uVar11 = (ulong)uStack_340 | ((ulong)(byte)uStack_33e & 0x1f) << 0x10;
  uVar12 = (ulong)uStack_32b | ((ulong)(byte)uStack_329 & 0x1f) << 0x10;
  uVar13 = uVar30 & 0xf8 | (ulong)bStack_1e7 << 8 | ((ulong)(byte)uStack_1e6 & 0x1f) << 0x10;
  uVar27 = (ulong)uStack_1d3 | ((ulong)(byte)uStack_1d1 & 0x1f) << 0x10;
  uVar45 = (ulong)(uStack_33e >> 5) & 0x1fffff;
  uVar23 = (ulong)((uStack_33e >> 0x18 | (uint)bStack_33a << 8 | (uint)bStack_339 << 0x10) >> 2) &
           0x1fffff;
  uVar52 = (ulong)(uStack_1e6 >> 5) & 0x1fffff;
  uVar47 = (ulong)((uStack_1e6 >> 0x18 | (uint)bStack_1e2 << 8 | (uint)bStack_1e1 << 0x10) >> 2) &
           0x1fffff;
  lStack_3f0 = uVar52 * uVar45 + uVar13 * uVar23 + uVar47 * uVar11 +
               ((ulong)((uStack_2fe >> 0x18 | (uint)bStack_2fa << 8 | (uint)bStack_2f9 << 0x10) >> 2
                       ) & 0x1fffff);
  uVar42 = (ulong)(CONCAT13((undefined1)uStack_336,CONCAT21(uStack_338,bStack_339)) >> 7) & 0x1fffff
  ;
  uVar15 = (ulong)(uStack_336 >> 4) & 0x1fffff;
  uVar32 = (ulong)(CONCAT13((undefined1)uStack_1de,CONCAT21(uStack_1e0,bStack_1e1)) >> 7) & 0x1fffff
  ;
  uVar20 = (ulong)(uStack_1de >> 4) & 0x1fffff;
  lVar16 = uVar52 * uVar42 + uVar13 * uVar15 + uVar32 * uVar45 + uVar11 * uVar20 + uVar47 * uVar23 +
           ((ulong)(uStack_2f6 >> 4) & 0x1fffff);
  uVar19 = (ulong)((uStack_336 >> 0x18 | (uint)bStack_332 << 8 | (uStack_331 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar17 = (ulong)(uStack_331 >> 6) & 0x1fffff;
  uVar21 = (ulong)(uStack_1d9 >> 6) & 0x1fffff;
  uVar28 = (ulong)((uStack_1de >> 0x18 | (uint)bStack_1da << 8 | (uStack_1d9 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  lStack_420 = uVar19 * uVar52 + uVar13 * uVar17 + uVar32 * uVar42 + uVar23 * uVar20 +
               uVar47 * uVar15 + uVar11 * uVar21 + uVar28 * uVar45 +
               ((ulong)(uStack_2f1 >> 6) & 0x1fffff);
  uVar24 = ((ulong)(uStack_331 >> 0x18) | (ulong)bStack_32d << 8 | (ulong)bStack_32c << 0x10) >> 3;
  uVar49 = ((ulong)(uStack_1d9 >> 0x18) | (ulong)bStack_1d5 << 8 | (ulong)bStack_1d4 << 0x10) >> 3;
  lStack_430 = uVar24 * uVar52 + uVar13 * uVar12 + uVar19 * uVar32 + uVar20 * uVar15 +
               uVar47 * uVar17 + uVar23 * uVar21 + uVar28 * uVar42 + uVar49 * uVar45 +
               uVar27 * uVar11 + (ulong)uStack_2eb + ((ulong)(byte)uStack_2e9 & 0x1f) * 0x10000;
  uVar40 = (ulong)(uStack_329 >> 5) & 0x1fffff;
  uVar38 = (ulong)((uStack_329 >> 0x18 | (uint)bStack_325 << 8 | (uStack_324 & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  uVar51 = (ulong)(uStack_1d1 >> 5) & 0x1fffff;
  uVar43 = (ulong)((uStack_1d1 >> 0x18 | (uint)bStack_1cd << 8 | (uStack_1cc & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  lStack_438 = uVar52 * uVar40 + uVar13 * uVar38 + uVar24 * uVar32 + uVar20 * uVar17 +
               uVar47 * uVar12 + uVar21 * uVar15 + uVar28 * uVar19 + uVar49 * uVar42 +
               uVar51 * uVar45 + uVar27 * uVar23 + uVar43 * uVar11 +
               ((ulong)((uStack_2e9 >> 0x18 | (uint)bStack_2e5 << 8 | (uStack_2e4 & 0xff) << 0x10)
                       >> 2) & 0x1fffff);
  lStack_410 = ((ulong)uStack_300 | ((ulong)(byte)uStack_2fe & 0x1f) << 0x10) + uVar13 * uVar11;
  uVar30 = lStack_410 + 0x100000;
  lStack_460 = uVar11 * uVar52 + uVar13 * uVar45 + ((ulong)(uStack_2fe >> 5) & 0x1fffff) +
               (uVar30 >> 0x15);
  lStack_410 = lStack_410 - (uVar30 & 0xffffffffffe00000);
  uVar30 = lVar16 + 0x100000;
  lStack_448 = uVar52 * uVar15 + uVar13 * uVar19 + uVar23 * uVar32 + uVar20 * uVar45 +
               uVar47 * uVar42 + uVar28 * uVar11 + (uVar30 >> 0x15) +
               ((ulong)((uStack_2f6 >> 0x18 | (uint)bStack_2f2 << 8 | (uStack_2f1 & 0xff) << 0x10)
                       >> 1) & 0x1fffff);
  lStack_470 = uVar52 * uVar17 + uVar13 * uVar24 + uVar32 * uVar15 + uVar20 * uVar42 +
               uVar47 * uVar19 + uVar21 * uVar45 + uVar28 * uVar23 + uVar49 * uVar11 +
               (((ulong)(uStack_2f1 >> 0x18) | (ulong)bStack_2ed << 8 | (ulong)bStack_2ec << 0x10)
               >> 3);
  lStack_468 = uVar12 * uVar52 + uVar13 * uVar40 + uVar32 * uVar17 + uVar19 * uVar20 +
               uVar47 * uVar24 + uVar21 * uVar42 + uVar28 * uVar15 + uVar49 * uVar23 +
               uVar11 * uVar51 + uVar27 * uVar45 + ((ulong)(uStack_2e9 >> 5) & 0x1fffff);
  uVar34 = (ulong)(uStack_324 >> 7);
  uVar35 = (ulong)(uStack_1cc >> 7);
  lVar48 = uVar52 * uVar34 + uVar32 * uVar40 + uVar12 * uVar20 + uVar47 * uVar38 + uVar21 * uVar17 +
           uVar28 * uVar24 + uVar49 * uVar19 + uVar51 * uVar42 + uVar27 * uVar15 + uVar35 * uVar45 +
           uVar43 * uVar23;
  lVar36 = uVar49 * uVar34 + uVar51 * uVar40 + uVar27 * uVar38 + uVar24 * uVar35 + uVar43 * uVar12;
  uVar1 = lVar36 + 0x100000;
  lVar44 = uVar38 * uVar51 + uVar27 * uVar34 + uVar12 * uVar35 + uVar43 * uVar40 + (uVar1 >> 0x15);
  lVar53 = uVar32 * uVar34 + uVar38 * uVar20 + uVar12 * uVar21 + uVar28 * uVar40 + uVar49 * uVar24 +
           uVar19 * uVar51 + uVar27 * uVar17 + uVar35 * uVar42 + uVar43 * uVar15;
  uStack_458 = lStack_3f0 + 0x100000;
  lStack_450 = uVar23 * uVar52 + uVar13 * uVar42 + uVar11 * uVar32 + uVar47 * uVar45 +
               ((ulong)(CONCAT13((undefined1)uStack_2f6,CONCAT21(uStack_2f8,bStack_2f9)) >> 7) &
               0x1fffff) + (uStack_458 >> 0x15);
  uVar18 = lVar48 + 0x100000;
  lVar22 = uVar38 * uVar32 + uVar20 * uVar40 + uVar47 * uVar34 + uVar24 * uVar21 + uVar28 * uVar12 +
           uVar49 * uVar17 + uVar51 * uVar15 + uVar27 * uVar19 + uVar23 * uVar35 + uVar43 * uVar42 +
           (uVar18 >> 0x15);
  lVar37 = uVar38 * uVar21 + uVar28 * uVar34 + uVar49 * uVar40 + uVar24 * uVar51 + uVar27 * uVar12 +
           uVar19 * uVar35 + uVar43 * uVar17;
  uVar2 = lVar53 + 0x100000;
  lVar26 = uVar20 * uVar34 + uVar21 * uVar40 + uVar28 * uVar38 + uVar49 * uVar12 + uVar51 * uVar17 +
           uVar27 * uVar24 + uVar35 * uVar15 + uVar43 * uVar19 + (uVar2 >> 0x15);
  uVar3 = lVar37 + 0x100000;
  lVar8 = uVar21 * uVar34 + uVar49 * uVar38 + uVar12 * uVar51 + uVar27 * uVar40 + uVar35 * uVar17 +
          uVar43 * uVar24 + (uVar3 >> 0x15);
  lVar31 = uVar51 * uVar34 + uVar35 * uVar40 + uVar43 * uVar38;
  uVar4 = lVar31 + 0x100000;
  lVar29 = uVar38 * uVar35 + uVar43 * uVar34 + (uVar4 >> 0x15);
  uVar5 = uVar35 * uVar34 + 0x100000;
  uVar25 = uVar5 >> 0x15;
  uVar6 = lStack_460 + 0x100000;
  lStack_460 = lStack_460 - (uVar6 & 0xffffffffffe00000);
  uVar7 = lStack_450 + 0x100000;
  lStack_440 = (lVar16 - (uVar30 & 0xffffffffffe00000)) + (uVar7 >> 0x15);
  lStack_450 = lStack_450 - (uVar7 & 0xffffffffffe00000);
  uVar30 = lVar8 + 0x100000;
  lVar16 = (lVar36 - (uVar1 & 0xffffffffffe00000)) + (uVar30 >> 0x15);
  uVar1 = lVar44 + 0x100000;
  lVar31 = (lVar31 - (uVar4 & 0x1ffffffe00000)) + (uVar1 >> 0x15);
  lVar44 = lVar44 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar29 + 0x100000;
  lVar36 = (uVar35 * uVar34 - (uVar5 & 0x7ffffffe00000)) + (uVar1 >> 0x15);
  lVar29 = lVar29 - (uVar1 & 0x1ffffffe00000);
  lVar39 = lStack_470 + (lStack_420 + 0x100000U >> 0x15);
  lVar9 = lStack_468 + (lStack_430 + 0x100000U >> 0x15);
  uVar1 = lVar39 + 0x100000;
  lVar41 = (lVar31 * 0xa2c13 + lVar44 * 0x72d18 + lVar16 * 0x9fb67 + lStack_430 + (uVar1 >> 0x15)) -
           (lStack_430 + 0x100000U & 0xffffffffffe00000);
  uVar4 = lVar9 + 0x100000;
  lVar10 = uVar38 * uVar52 + uVar13 * uVar34 + uVar12 * uVar32 + uVar24 * uVar20 + uVar47 * uVar40 +
           uVar19 * uVar21 + uVar28 * uVar17 + uVar49 * uVar15 + uVar23 * uVar51 + uVar27 * uVar42 +
           uVar11 * uVar35 + uVar43 * uVar45 + (ulong)(uStack_2e4 >> 7) +
           (lStack_438 + 0x100000U >> 0x15);
  lVar46 = (lVar36 * 0xa2c13 + lVar29 * 0x72d18 + lVar31 * 0x9fb67 + lVar44 * -0xf39ad +
            lVar16 * 0x215d1 + (uVar4 >> 0x15) + lStack_438) -
           (lStack_438 + 0x100000U & 0xffffffffffe00000);
  uVar5 = lVar10 + 0x100000;
  lVar48 = ((lVar48 + uVar25 * 0x72d18) - (uVar18 & 0xffffffffffe00000)) + lVar36 * 0x9fb67 +
           lVar29 * -0xf39ad + lVar31 * 0x215d1 + lVar44 * -0xa6f7d + (uVar5 >> 0x15);
  uVar18 = lVar22 + 0x100000;
  uVar7 = lVar48 + 0x100000;
  lVar22 = ((lVar22 + uVar25 * 0x9fb67) - (uVar18 & 0xffffffffffe00000)) + lVar36 * -0xf39ad +
           lVar29 * 0x215d1 + lVar31 * -0xa6f7d + ((long)uVar7 >> 0x15);
  uVar11 = lVar26 + 0x100000;
  lVar37 = ((lVar37 + (long)(int)uVar25 * -0xa6f7d) - (uVar3 & 0xffffffffffe00000)) +
           (uVar11 >> 0x15);
  lVar33 = ((lStack_420 + lVar16 * 0xa2c13) - (lStack_420 + 0x100000U & 0xffffffffffe00000)) +
           (lStack_448 + 0x100000U >> 0x15);
  uVar3 = lVar41 + 0x100000;
  lVar9 = ((lVar29 * 0xa2c13 + lVar31 * 0x72d18 + lVar44 * 0x9fb67 + lVar16 * -0xf39ad + lVar9) -
          (uVar4 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar53 = ((lVar53 + (long)(int)uVar25 * -0xf39ad) - (uVar2 & 0xffffffffffe00000)) +
           (uVar18 >> 0x15) + lVar36 * 0x215d1 + lVar29 * -0xa6f7d;
  uVar18 = lVar46 + 0x100000;
  lVar29 = ((lVar36 * 0x72d18 + uVar25 * 0xa2c13 + lVar29 * 0x9fb67 + lVar31 * -0xf39ad +
             lVar44 * 0x215d1 + lVar16 * -0xa6f7d + lVar10) - (uVar5 & 0xffffffffffe00000)) +
           ((long)uVar18 >> 0x15);
  uVar2 = lVar53 + 0x100000;
  lVar26 = ((lVar26 + uVar25 * 0x215d1) - (uVar11 & 0xffffffffffe00000)) + lVar36 * -0xa6f7d +
           ((long)uVar2 >> 0x15);
  uVar4 = lVar37 + 0x100000;
  lVar8 = (lVar8 - (uVar30 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar30 = lVar29 + 0x100000;
  lVar31 = (lVar48 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15);
  uVar5 = lVar22 + 0x100000;
  lVar36 = (lVar53 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar22 = lVar22 - (uVar5 & 0xffffffffffe00000);
  uVar2 = lVar26 + 0x100000;
  lVar10 = (lVar37 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar26 = lVar26 - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar9 + 0x100000;
  lVar53 = (lVar46 + lVar8 * -0xa6f7d + ((long)uVar2 >> 0x15)) - (uVar18 & 0xffffffffffe00000);
  uVar18 = lVar33 + 0x100000;
  lVar16 = ((lVar44 * 0xa2c13 + lVar16 * 0x72d18 + lVar39) - (uVar1 & 0xffffffffffe00000)) +
           ((long)uVar18 >> 0x15);
  uVar1 = lVar16 + 0x100000;
  lVar46 = (lVar8 * -0xf39ad + lVar10 * 0x215d1 + lVar26 * -0xa6f7d + lVar41 + ((long)uVar1 >> 0x15)
           ) - (uVar3 & 0xffffffffffe00000);
  lVar48 = lStack_410 + lVar31 * 0xa2c13;
  uVar3 = lVar48 + 0x100000;
  lVar44 = lStack_460 + lVar31 * 0x72d18 + lVar22 * 0xa2c13 + ((long)uVar3 >> 0x15);
  lVar37 = ((lVar33 + lVar8 * 0x72d18) - (uVar18 & 0xffffffffffe00000)) + lVar10 * 0x9fb67 +
           lVar26 * -0xf39ad + lVar36 * 0x215d1 + lVar22 * -0xa6f7d;
  uVar18 = lVar37 + 0x100000;
  lVar16 = ((lVar8 * 0x9fb67 + lVar10 * -0xf39ad + lVar26 * 0x215d1 + lVar16) -
           (uVar1 & 0xffffffffffe00000)) + lVar36 * -0xa6f7d + ((long)uVar18 >> 0x15);
  uVar1 = lVar46 + 0x100000;
  lVar39 = ((lVar8 * 0x215d1 + lVar10 * -0xa6f7d + lVar9) - (uVar2 & 0xffffffffffe00000)) +
           ((long)uVar1 >> 0x15);
  uVar2 = lVar53 + 0x100000;
  lVar29 = (lVar29 - (uVar30 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar30 = lVar44 + 0x100000;
  uVar4 = lVar16 + 0x100000;
  uVar5 = lVar39 + 0x100000;
  lVar39 = lVar39 - (uVar5 & 0xffffffffffe00000);
  uVar7 = lVar29 + 0x100000;
  lVar50 = (long)uVar7 >> 0x15;
  lVar33 = ((lStack_3f0 + (uVar6 >> 0x15)) - (uStack_458 & 0xffffffffffe00000)) + lVar31 * 0x9fb67 +
           lVar36 * 0xa2c13 + lVar22 * 0x72d18;
  uVar6 = lVar33 + 0x100000;
  lVar9 = lStack_450 + lVar26 * 0xa2c13 + lVar31 * -0xf39ad + lVar36 * 0x72d18 + lVar22 * 0x9fb67 +
          ((long)uVar6 >> 0x15);
  uVar11 = lVar9 + 0x100000;
  lVar41 = lStack_440 + lVar10 * 0xa2c13 + lVar26 * 0x72d18 + lVar31 * 0x215d1 + lVar36 * 0x9fb67 +
           lVar22 * -0xf39ad;
  uVar12 = lVar41 + 0x100000;
  lVar22 = ((lStack_448 + lVar8 * 0xa2c13) - (lStack_448 + 0x100000U & 0xffffffffffe00000)) +
           lVar10 * 0x72d18 + lVar26 * 0x9fb67 + lVar31 * -0xa6f7d + lVar36 * -0xf39ad +
           lVar22 * 0x215d1 + ((long)uVar12 >> 0x15);
  uVar13 = lVar22 + 0x100000;
  uVar27 = (lVar48 - (uVar3 & 0xffffffffffe00000)) + lVar50 * 0xa2c13;
  uVar3 = ((lVar44 + lVar50 * 0x72d18) - (uVar30 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15);
  uVar30 = ((lVar33 + lVar50 * 0x9fb67) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15) +
           ((long)uVar3 >> 0x15);
  uVar6 = ((lVar9 + lVar50 * -0xf39ad) - (uVar11 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15);
  uVar11 = ((lVar41 + lVar50 * 0x215d1) - (uVar12 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15) +
           ((long)uVar6 >> 0x15);
  uVar12 = ((lVar22 + lVar50 * -0xa6f7d) - (uVar13 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15);
  uVar18 = (lVar37 - (uVar18 & 0xffffffffffe00000)) + ((long)uVar13 >> 0x15) +
           ((long)uVar12 >> 0x15);
  uVar13 = (lVar16 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar18 >> 0x15);
  uVar1 = (lVar46 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar13 >> 0x15);
  uVar4 = lVar39 + ((long)uVar1 >> 0x15);
  uVar2 = ((lVar53 + ((long)uVar5 >> 0x15)) - (uVar2 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar5 = (lVar29 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar44 = (long)uVar5 >> 0x15;
  lVar16 = (uVar27 & 0x1fffff) + lVar44 * 0xa2c13;
  *(char *)((long)puStack_3f8 + 0x21) = (char)((ulong)lVar16 >> 8);
  uVar3 = (uVar3 & 0x1fffff) + lVar44 * 0x72d18 + (lVar16 >> 0x15);
  *(char *)(puStack_3f8 + 4) = (char)lVar16;
  *(byte *)((long)puStack_3f8 + 0x22) =
       (byte)((ulong)lVar16 >> 0x10) & 0x1f | (byte)((uint)uVar3 << 5);
  *(char *)((long)puStack_3f8 + 0x23) = (char)(uVar3 >> 3);
  *(char *)((long)puStack_3f8 + 0x24) = (char)(uVar3 >> 0xb);
  uVar7 = (uVar30 & 0x1fffff) + lVar44 * 0x9fb67 + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x25) = (byte)((uint)uVar3 >> 0x13) & 3 | (byte)((uint)uVar7 << 2);
  *(char *)((long)puStack_3f8 + 0x26) = (char)(uVar7 >> 6);
  uVar3 = (uVar6 & 0x1fffff) + lVar44 * -0xf39ad + ((long)uVar7 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x27) = (byte)((uint)uVar7 >> 0xe) & 0x7f | (byte)((uint)uVar3 << 7)
  ;
  *(char *)(puStack_3f8 + 5) = (char)(uVar3 >> 1);
  *(char *)((long)puStack_3f8 + 0x29) = (char)(uVar3 >> 9);
  uVar6 = (uVar11 & 0x1fffff) + lVar44 * 0x215d1 + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x2a) = (byte)((uint)uVar3 >> 0x11) & 0xf | (byte)((uint)uVar6 << 4)
  ;
  *(char *)((long)puStack_3f8 + 0x2b) = (char)(uVar6 >> 4);
  *(char *)((long)puStack_3f8 + 0x2c) = (char)(uVar6 >> 0xc);
  uVar3 = (uVar12 & 0x1fffff) + lVar44 * -0xa6f7d + ((long)uVar6 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x2d) = (byte)((uint)uVar6 >> 0x14) & 1 | (byte)((uint)uVar3 << 1);
  *(char *)((long)puStack_3f8 + 0x2e) = (char)(uVar3 >> 7);
  uVar6 = (uVar18 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x2f) = (byte)((uint)uVar3 >> 0xf) & 0x3f | (byte)((uint)uVar6 << 6)
  ;
  *(char *)(puStack_3f8 + 6) = (char)(uVar6 >> 2);
  *(char *)((long)puStack_3f8 + 0x31) = (char)(uVar6 >> 10);
  uVar3 = (uVar13 & 0x1fffff) + ((long)uVar6 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x32) = (byte)((uint)uVar6 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)((long)puStack_3f8 + 0x33) = (char)(uVar3 >> 5);
  lVar16 = (uVar1 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(char *)((long)puStack_3f8 + 0x34) = (char)(uVar3 >> 0xd);
  *(char *)((long)puStack_3f8 + 0x36) = (char)((ulong)lVar16 >> 8);
  uVar1 = (uVar4 & 0x1fffff) + (lVar16 >> 0x15);
  *(char *)((long)puStack_3f8 + 0x35) = (char)lVar16;
  *(byte *)((long)puStack_3f8 + 0x37) =
       (byte)((ulong)lVar16 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(puStack_3f8 + 7) = (char)(uVar1 >> 3);
  *(char *)((long)puStack_3f8 + 0x39) = (char)(uVar1 >> 0xb);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  uVar3 = (uVar5 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)((long)puStack_3f8 + 0x3a) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)((long)puStack_3f8 + 0x3b) = (char)(uVar2 >> 6);
  *(byte *)((long)puStack_3f8 + 0x3c) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)((long)puStack_3f8 + 0x3d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar5) >> 1)
  ;
  *(char *)((long)puStack_3f8 + 0x3e) = (char)(uVar3 >> 9);
  *(char *)((long)puStack_3f8 + 0x3f) = (char)(uVar3 >> 0x11);
  func_0x006da5a8(uStack_1a8);
  if ((bool)in_ZR) {
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  pcStack_478 = FUN_006d92d0;
  lStack_490 = lVar39;
  uStack_488 = uVar30;
  ppuStack_480 = &puStack_130;
  func_0x006da6c0();
  FUN_006d746c(auStack_4b8,uVar18 + 0x50);
  FUN_006da0f4(auStack_4e0,uVar30,auStack_4b8);
  FUN_006da0f4(auStack_508,uVar30 + 0x28,auStack_4b8);
  FUN_006d7490(lVar39,auStack_508);
  puVar14 = auStack_4e0;
  FUN_006d7648();
  *(byte *)(lVar39 + 0x1f) = *(byte *)(lVar39 + 0x1f) ^ (byte)((int)puVar14 << 7);
  return puVar14;
}



/* Entry: 006d8624; end: 006d92cf;  */

undefined1 * FUN_006d8624(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 in_ZR;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 extraout_x8;
  ulong uVar30;
  long lVar31;
  undefined1 extraout_w9;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  undefined1 auStack_3e8 [40];
  undefined1 auStack_3c0 [40];
  undefined1 auStack_398 [40];
  long lStack_370;
  ulong uStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  ulong uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [160];
  ushort uStack_220;
  uint uStack_21e;
  byte bStack_21a;
  byte bStack_219;
  undefined2 uStack_218;
  uint uStack_216;
  byte bStack_212;
  uint uStack_211;
  byte bStack_20d;
  byte bStack_20c;
  ushort uStack_20b;
  uint uStack_209;
  byte bStack_205;
  uint uStack_204;
  ushort uStack_1e0;
  uint uStack_1de;
  byte bStack_1da;
  byte bStack_1d9;
  undefined2 uStack_1d8;
  uint uStack_1d6;
  byte bStack_1d2;
  uint uStack_1d1;
  byte bStack_1cd;
  byte bStack_1cc;
  ushort uStack_1cb;
  uint uStack_1c9;
  byte bStack_1c5;
  uint uStack_1c4;
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
  undefined8 uStack_d0;
  byte bStack_c8;
  byte bStack_c7;
  uint uStack_c6;
  byte bStack_c2;
  byte bStack_c1;
  undefined2 uStack_c0;
  uint uStack_be;
  byte bStack_ba;
  uint uStack_b9;
  byte bStack_b5;
  byte bStack_b4;
  ushort uStack_b3;
  uint uStack_b1;
  byte bStack_ad;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  
  lVar15 = param_4;
  lStack_2d8 = param_1;
  func_0x006da5f4();
  uStack_88 = extraout_x8;
  FUN_006eb00c(lVar15,0x20,&bStack_c8);
  uVar30 = (ulong)bStack_c8;
  bStack_c8 = (byte)(uVar30 & 0xf8);
  func_0x006da880(uStack_ac._3_1_);
  uStack_ac = CONCAT13(extraout_w9,(undefined3)uStack_ac);
  uStack_2c8 = 0xbb67ae8584caa73b;
  lStack_2d0 = 0x6a09e667f3bcc908;
  uStack_2e8 = 0xa54ff53a5f1d36f1;
  lStack_2f0 = 0x3c6ef372fe94f82b;
  uStack_198 = 0xbb67ae8584caa73b;
  uStack_1a0 = 0x6a09e667f3bcc908;
  uStack_188 = 0xa54ff53a5f1d36f1;
  uStack_190 = 0x3c6ef372fe94f82b;
  uStack_2f8 = 0x9b05688c2b3e6c1f;
  lStack_300 = 0x510e527fade682d1;
  uStack_308 = 0x5be0cd19137e2179;
  lStack_310 = 0x1f83d9abfb41bd6b;
  uStack_178 = 0x9b05688c2b3e6c1f;
  uStack_180 = 0x510e527fade682d1;
  uStack_168 = 0x5be0cd19137e2179;
  uStack_170 = 0x1f83d9abfb41bd6b;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_d0 = 0x4000000000;
  func_0x006da6cc(&uStack_1a0,auStack_a8);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_1e0,&uStack_1a0);
  FUN_006d7f14(&uStack_1e0);
  FUN_006d7b00(auStack_2c0,&uStack_1e0);
  FUN_006d92d0(param_1,auStack_2c0);
  uStack_198 = uStack_2c8;
  uStack_1a0 = lStack_2d0;
  uStack_188 = uStack_2e8;
  uStack_190 = lStack_2f0;
  uStack_178 = uStack_2f8;
  uStack_180 = lStack_300;
  uStack_168 = uStack_308;
  uStack_170 = lStack_310;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_d0 = 0x4000000000;
  func_0x006da6cc(&uStack_1a0,param_1);
  func_0x006da6cc(&uStack_1a0,param_4 + 0x20);
  func_0x006da7c8();
  FUN_006f67d0(&uStack_220,&uStack_1a0);
  FUN_006d7f14(&uStack_220);
  uVar11 = (ulong)uStack_220 | ((ulong)(byte)uStack_21e & 0x1f) << 0x10;
  uVar12 = (ulong)uStack_20b | ((ulong)(byte)uStack_209 & 0x1f) << 0x10;
  uVar13 = uVar30 & 0xf8 | (ulong)bStack_c7 << 8 | ((ulong)(byte)uStack_c6 & 0x1f) << 0x10;
  uVar27 = (ulong)uStack_b3 | ((ulong)(byte)uStack_b1 & 0x1f) << 0x10;
  uVar45 = (ulong)(uStack_21e >> 5) & 0x1fffff;
  uVar23 = (ulong)((uStack_21e >> 0x18 | (uint)bStack_21a << 8 | (uint)bStack_219 << 0x10) >> 2) &
           0x1fffff;
  uVar52 = (ulong)(uStack_c6 >> 5) & 0x1fffff;
  uVar47 = (ulong)((uStack_c6 >> 0x18 | (uint)bStack_c2 << 8 | (uint)bStack_c1 << 0x10) >> 2) &
           0x1fffff;
  lStack_2d0 = uVar52 * uVar45 + uVar13 * uVar23 + uVar47 * uVar11 +
               ((ulong)((uStack_1de >> 0x18 | (uint)bStack_1da << 8 | (uint)bStack_1d9 << 0x10) >> 2
                       ) & 0x1fffff);
  uVar42 = (ulong)(CONCAT13((undefined1)uStack_216,CONCAT21(uStack_218,bStack_219)) >> 7) & 0x1fffff
  ;
  uVar14 = (ulong)(uStack_216 >> 4) & 0x1fffff;
  uVar32 = (ulong)(CONCAT13((undefined1)uStack_be,CONCAT21(uStack_c0,bStack_c1)) >> 7) & 0x1fffff;
  uVar20 = (ulong)(uStack_be >> 4) & 0x1fffff;
  lVar15 = uVar52 * uVar42 + uVar13 * uVar14 + uVar32 * uVar45 + uVar11 * uVar20 + uVar47 * uVar23 +
           ((ulong)(uStack_1d6 >> 4) & 0x1fffff);
  uVar19 = (ulong)((uStack_216 >> 0x18 | (uint)bStack_212 << 8 | (uStack_211 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar17 = (ulong)(uStack_211 >> 6) & 0x1fffff;
  uVar21 = (ulong)(uStack_b9 >> 6) & 0x1fffff;
  uVar28 = (ulong)((uStack_be >> 0x18 | (uint)bStack_ba << 8 | (uStack_b9 & 0xff) << 0x10) >> 1) &
           0x1fffff;
  lStack_300 = uVar19 * uVar52 + uVar13 * uVar17 + uVar32 * uVar42 + uVar23 * uVar20 +
               uVar47 * uVar14 + uVar11 * uVar21 + uVar28 * uVar45 +
               ((ulong)(uStack_1d1 >> 6) & 0x1fffff);
  uVar24 = ((ulong)(uStack_211 >> 0x18) | (ulong)bStack_20d << 8 | (ulong)bStack_20c << 0x10) >> 3;
  uVar49 = ((ulong)(uStack_b9 >> 0x18) | (ulong)bStack_b5 << 8 | (ulong)bStack_b4 << 0x10) >> 3;
  lStack_310 = uVar24 * uVar52 + uVar13 * uVar12 + uVar19 * uVar32 + uVar20 * uVar14 +
               uVar47 * uVar17 + uVar23 * uVar21 + uVar28 * uVar42 + uVar49 * uVar45 +
               uVar27 * uVar11 + (ulong)uStack_1cb + ((ulong)(byte)uStack_1c9 & 0x1f) * 0x10000;
  uVar40 = (ulong)(uStack_209 >> 5) & 0x1fffff;
  uVar38 = (ulong)((uStack_209 >> 0x18 | (uint)bStack_205 << 8 | (uStack_204 & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  uVar51 = (ulong)(uStack_b1 >> 5) & 0x1fffff;
  uVar43 = (ulong)((uStack_b1 >> 0x18 | (uint)bStack_ad << 8 | (uStack_ac & 0xff) << 0x10) >> 2) &
           0x1fffff;
  lStack_318 = uVar52 * uVar40 + uVar13 * uVar38 + uVar24 * uVar32 + uVar20 * uVar17 +
               uVar47 * uVar12 + uVar21 * uVar14 + uVar28 * uVar19 + uVar49 * uVar42 +
               uVar51 * uVar45 + uVar27 * uVar23 + uVar43 * uVar11 +
               ((ulong)((uStack_1c9 >> 0x18 | (uint)bStack_1c5 << 8 | (uStack_1c4 & 0xff) << 0x10)
                       >> 2) & 0x1fffff);
  lStack_2f0 = ((ulong)uStack_1e0 | ((ulong)(byte)uStack_1de & 0x1f) << 0x10) + uVar13 * uVar11;
  uVar30 = lStack_2f0 + 0x100000;
  lStack_340 = uVar11 * uVar52 + uVar13 * uVar45 + ((ulong)(uStack_1de >> 5) & 0x1fffff) +
               (uVar30 >> 0x15);
  lStack_2f0 = lStack_2f0 - (uVar30 & 0xffffffffffe00000);
  uVar30 = lVar15 + 0x100000;
  lStack_328 = uVar52 * uVar14 + uVar13 * uVar19 + uVar23 * uVar32 + uVar20 * uVar45 +
               uVar47 * uVar42 + uVar28 * uVar11 + (uVar30 >> 0x15) +
               ((ulong)((uStack_1d6 >> 0x18 | (uint)bStack_1d2 << 8 | (uStack_1d1 & 0xff) << 0x10)
                       >> 1) & 0x1fffff);
  lStack_350 = uVar52 * uVar17 + uVar13 * uVar24 + uVar32 * uVar14 + uVar20 * uVar42 +
               uVar47 * uVar19 + uVar21 * uVar45 + uVar28 * uVar23 + uVar49 * uVar11 +
               (((ulong)(uStack_1d1 >> 0x18) | (ulong)bStack_1cd << 8 | (ulong)bStack_1cc << 0x10)
               >> 3);
  lStack_348 = uVar12 * uVar52 + uVar13 * uVar40 + uVar32 * uVar17 + uVar19 * uVar20 +
               uVar47 * uVar24 + uVar21 * uVar42 + uVar28 * uVar14 + uVar49 * uVar23 +
               uVar11 * uVar51 + uVar27 * uVar45 + ((ulong)(uStack_1c9 >> 5) & 0x1fffff);
  uVar34 = (ulong)(uStack_204 >> 7);
  uVar35 = (ulong)(uStack_ac >> 7);
  lVar48 = uVar52 * uVar34 + uVar32 * uVar40 + uVar12 * uVar20 + uVar47 * uVar38 + uVar21 * uVar17 +
           uVar28 * uVar24 + uVar49 * uVar19 + uVar51 * uVar42 + uVar27 * uVar14 + uVar35 * uVar45 +
           uVar43 * uVar23;
  lVar36 = uVar49 * uVar34 + uVar51 * uVar40 + uVar27 * uVar38 + uVar24 * uVar35 + uVar43 * uVar12;
  uVar1 = lVar36 + 0x100000;
  lVar44 = uVar38 * uVar51 + uVar27 * uVar34 + uVar12 * uVar35 + uVar43 * uVar40 + (uVar1 >> 0x15);
  lVar53 = uVar32 * uVar34 + uVar38 * uVar20 + uVar12 * uVar21 + uVar28 * uVar40 + uVar49 * uVar24 +
           uVar19 * uVar51 + uVar27 * uVar17 + uVar35 * uVar42 + uVar43 * uVar14;
  uStack_338 = lStack_2d0 + 0x100000;
  lStack_330 = uVar23 * uVar52 + uVar13 * uVar42 + uVar11 * uVar32 + uVar47 * uVar45 +
               ((ulong)(CONCAT13((undefined1)uStack_1d6,CONCAT21(uStack_1d8,bStack_1d9)) >> 7) &
               0x1fffff) + (uStack_338 >> 0x15);
  uVar18 = lVar48 + 0x100000;
  lVar22 = uVar38 * uVar32 + uVar20 * uVar40 + uVar47 * uVar34 + uVar24 * uVar21 + uVar28 * uVar12 +
           uVar49 * uVar17 + uVar51 * uVar14 + uVar27 * uVar19 + uVar23 * uVar35 + uVar43 * uVar42 +
           (uVar18 >> 0x15);
  lVar37 = uVar38 * uVar21 + uVar28 * uVar34 + uVar49 * uVar40 + uVar24 * uVar51 + uVar27 * uVar12 +
           uVar19 * uVar35 + uVar43 * uVar17;
  uVar2 = lVar53 + 0x100000;
  lVar26 = uVar20 * uVar34 + uVar21 * uVar40 + uVar28 * uVar38 + uVar49 * uVar12 + uVar51 * uVar17 +
           uVar27 * uVar24 + uVar35 * uVar14 + uVar43 * uVar19 + (uVar2 >> 0x15);
  uVar3 = lVar37 + 0x100000;
  lVar8 = uVar21 * uVar34 + uVar49 * uVar38 + uVar12 * uVar51 + uVar27 * uVar40 + uVar35 * uVar17 +
          uVar43 * uVar24 + (uVar3 >> 0x15);
  lVar31 = uVar51 * uVar34 + uVar35 * uVar40 + uVar43 * uVar38;
  uVar4 = lVar31 + 0x100000;
  lVar29 = uVar38 * uVar35 + uVar43 * uVar34 + (uVar4 >> 0x15);
  uVar5 = uVar35 * uVar34 + 0x100000;
  uVar25 = uVar5 >> 0x15;
  uVar6 = lStack_340 + 0x100000;
  lStack_340 = lStack_340 - (uVar6 & 0xffffffffffe00000);
  uVar7 = lStack_330 + 0x100000;
  lStack_320 = (lVar15 - (uVar30 & 0xffffffffffe00000)) + (uVar7 >> 0x15);
  lStack_330 = lStack_330 - (uVar7 & 0xffffffffffe00000);
  uVar30 = lVar8 + 0x100000;
  lVar15 = (lVar36 - (uVar1 & 0xffffffffffe00000)) + (uVar30 >> 0x15);
  uVar1 = lVar44 + 0x100000;
  lVar31 = (lVar31 - (uVar4 & 0x1ffffffe00000)) + (uVar1 >> 0x15);
  lVar44 = lVar44 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar29 + 0x100000;
  lVar36 = (uVar35 * uVar34 - (uVar5 & 0x7ffffffe00000)) + (uVar1 >> 0x15);
  lVar29 = lVar29 - (uVar1 & 0x1ffffffe00000);
  lVar39 = lStack_350 + (lStack_300 + 0x100000U >> 0x15);
  lVar9 = lStack_348 + (lStack_310 + 0x100000U >> 0x15);
  uVar1 = lVar39 + 0x100000;
  lVar41 = (lVar31 * 0xa2c13 + lVar44 * 0x72d18 + lVar15 * 0x9fb67 + lStack_310 + (uVar1 >> 0x15)) -
           (lStack_310 + 0x100000U & 0xffffffffffe00000);
  uVar4 = lVar9 + 0x100000;
  lVar10 = uVar38 * uVar52 + uVar13 * uVar34 + uVar12 * uVar32 + uVar24 * uVar20 + uVar47 * uVar40 +
           uVar19 * uVar21 + uVar28 * uVar17 + uVar49 * uVar14 + uVar23 * uVar51 + uVar27 * uVar42 +
           uVar11 * uVar35 + uVar43 * uVar45 + (ulong)(uStack_1c4 >> 7) +
           (lStack_318 + 0x100000U >> 0x15);
  lVar46 = (lVar36 * 0xa2c13 + lVar29 * 0x72d18 + lVar31 * 0x9fb67 + lVar44 * -0xf39ad +
            lVar15 * 0x215d1 + (uVar4 >> 0x15) + lStack_318) -
           (lStack_318 + 0x100000U & 0xffffffffffe00000);
  uVar5 = lVar10 + 0x100000;
  lVar48 = ((lVar48 + uVar25 * 0x72d18) - (uVar18 & 0xffffffffffe00000)) + lVar36 * 0x9fb67 +
           lVar29 * -0xf39ad + lVar31 * 0x215d1 + lVar44 * -0xa6f7d + (uVar5 >> 0x15);
  uVar18 = lVar22 + 0x100000;
  uVar7 = lVar48 + 0x100000;
  lVar22 = ((lVar22 + uVar25 * 0x9fb67) - (uVar18 & 0xffffffffffe00000)) + lVar36 * -0xf39ad +
           lVar29 * 0x215d1 + lVar31 * -0xa6f7d + ((long)uVar7 >> 0x15);
  uVar11 = lVar26 + 0x100000;
  lVar37 = ((lVar37 + (long)(int)uVar25 * -0xa6f7d) - (uVar3 & 0xffffffffffe00000)) +
           (uVar11 >> 0x15);
  lVar33 = ((lStack_300 + lVar15 * 0xa2c13) - (lStack_300 + 0x100000U & 0xffffffffffe00000)) +
           (lStack_328 + 0x100000U >> 0x15);
  uVar3 = lVar41 + 0x100000;
  lVar9 = ((lVar29 * 0xa2c13 + lVar31 * 0x72d18 + lVar44 * 0x9fb67 + lVar15 * -0xf39ad + lVar9) -
          (uVar4 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar53 = ((lVar53 + (long)(int)uVar25 * -0xf39ad) - (uVar2 & 0xffffffffffe00000)) +
           (uVar18 >> 0x15) + lVar36 * 0x215d1 + lVar29 * -0xa6f7d;
  uVar18 = lVar46 + 0x100000;
  lVar29 = ((lVar36 * 0x72d18 + uVar25 * 0xa2c13 + lVar29 * 0x9fb67 + lVar31 * -0xf39ad +
             lVar44 * 0x215d1 + lVar15 * -0xa6f7d + lVar10) - (uVar5 & 0xffffffffffe00000)) +
           ((long)uVar18 >> 0x15);
  uVar2 = lVar53 + 0x100000;
  lVar26 = ((lVar26 + uVar25 * 0x215d1) - (uVar11 & 0xffffffffffe00000)) + lVar36 * -0xa6f7d +
           ((long)uVar2 >> 0x15);
  uVar4 = lVar37 + 0x100000;
  lVar8 = (lVar8 - (uVar30 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar30 = lVar29 + 0x100000;
  lVar31 = (lVar48 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15);
  uVar5 = lVar22 + 0x100000;
  lVar36 = (lVar53 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar22 = lVar22 - (uVar5 & 0xffffffffffe00000);
  uVar2 = lVar26 + 0x100000;
  lVar10 = (lVar37 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar26 = lVar26 - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar9 + 0x100000;
  lVar53 = (lVar46 + lVar8 * -0xa6f7d + ((long)uVar2 >> 0x15)) - (uVar18 & 0xffffffffffe00000);
  uVar18 = lVar33 + 0x100000;
  lVar15 = ((lVar44 * 0xa2c13 + lVar15 * 0x72d18 + lVar39) - (uVar1 & 0xffffffffffe00000)) +
           ((long)uVar18 >> 0x15);
  uVar1 = lVar15 + 0x100000;
  lVar46 = (lVar8 * -0xf39ad + lVar10 * 0x215d1 + lVar26 * -0xa6f7d + lVar41 + ((long)uVar1 >> 0x15)
           ) - (uVar3 & 0xffffffffffe00000);
  lVar48 = lStack_2f0 + lVar31 * 0xa2c13;
  uVar3 = lVar48 + 0x100000;
  lVar44 = lStack_340 + lVar31 * 0x72d18 + lVar22 * 0xa2c13 + ((long)uVar3 >> 0x15);
  lVar37 = ((lVar33 + lVar8 * 0x72d18) - (uVar18 & 0xffffffffffe00000)) + lVar10 * 0x9fb67 +
           lVar26 * -0xf39ad + lVar36 * 0x215d1 + lVar22 * -0xa6f7d;
  uVar18 = lVar37 + 0x100000;
  lVar15 = ((lVar8 * 0x9fb67 + lVar10 * -0xf39ad + lVar26 * 0x215d1 + lVar15) -
           (uVar1 & 0xffffffffffe00000)) + lVar36 * -0xa6f7d + ((long)uVar18 >> 0x15);
  uVar1 = lVar46 + 0x100000;
  lVar39 = ((lVar8 * 0x215d1 + lVar10 * -0xa6f7d + lVar9) - (uVar2 & 0xffffffffffe00000)) +
           ((long)uVar1 >> 0x15);
  uVar2 = lVar53 + 0x100000;
  lVar29 = (lVar29 - (uVar30 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar30 = lVar44 + 0x100000;
  uVar4 = lVar15 + 0x100000;
  uVar5 = lVar39 + 0x100000;
  lVar39 = lVar39 - (uVar5 & 0xffffffffffe00000);
  uVar7 = lVar29 + 0x100000;
  lVar50 = (long)uVar7 >> 0x15;
  lVar33 = ((lStack_2d0 + (uVar6 >> 0x15)) - (uStack_338 & 0xffffffffffe00000)) + lVar31 * 0x9fb67 +
           lVar36 * 0xa2c13 + lVar22 * 0x72d18;
  uVar6 = lVar33 + 0x100000;
  lVar9 = lStack_330 + lVar26 * 0xa2c13 + lVar31 * -0xf39ad + lVar36 * 0x72d18 + lVar22 * 0x9fb67 +
          ((long)uVar6 >> 0x15);
  uVar11 = lVar9 + 0x100000;
  lVar41 = lStack_320 + lVar10 * 0xa2c13 + lVar26 * 0x72d18 + lVar31 * 0x215d1 + lVar36 * 0x9fb67 +
           lVar22 * -0xf39ad;
  uVar12 = lVar41 + 0x100000;
  lVar22 = ((lStack_328 + lVar8 * 0xa2c13) - (lStack_328 + 0x100000U & 0xffffffffffe00000)) +
           lVar10 * 0x72d18 + lVar26 * 0x9fb67 + lVar31 * -0xa6f7d + lVar36 * -0xf39ad +
           lVar22 * 0x215d1 + ((long)uVar12 >> 0x15);
  uVar13 = lVar22 + 0x100000;
  uVar27 = (lVar48 - (uVar3 & 0xffffffffffe00000)) + lVar50 * 0xa2c13;
  uVar3 = ((lVar44 + lVar50 * 0x72d18) - (uVar30 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15);
  uVar30 = ((lVar33 + lVar50 * 0x9fb67) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15) +
           ((long)uVar3 >> 0x15);
  uVar6 = ((lVar9 + lVar50 * -0xf39ad) - (uVar11 & 0xffffffffffe00000)) + ((long)uVar30 >> 0x15);
  uVar11 = ((lVar41 + lVar50 * 0x215d1) - (uVar12 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15) +
           ((long)uVar6 >> 0x15);
  uVar12 = ((lVar22 + lVar50 * -0xa6f7d) - (uVar13 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15);
  uVar18 = (lVar37 - (uVar18 & 0xffffffffffe00000)) + ((long)uVar13 >> 0x15) +
           ((long)uVar12 >> 0x15);
  uVar13 = (lVar15 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar18 >> 0x15);
  uVar1 = (lVar46 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar13 >> 0x15);
  uVar4 = lVar39 + ((long)uVar1 >> 0x15);
  uVar2 = ((lVar53 + ((long)uVar5 >> 0x15)) - (uVar2 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar5 = (lVar29 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar44 = (long)uVar5 >> 0x15;
  lVar15 = (uVar27 & 0x1fffff) + lVar44 * 0xa2c13;
  *(char *)(lStack_2d8 + 0x21) = (char)((ulong)lVar15 >> 8);
  uVar3 = (uVar3 & 0x1fffff) + lVar44 * 0x72d18 + (lVar15 >> 0x15);
  *(char *)(lStack_2d8 + 0x20) = (char)lVar15;
  *(byte *)(lStack_2d8 + 0x22) = (byte)((ulong)lVar15 >> 0x10) & 0x1f | (byte)((uint)uVar3 << 5);
  *(char *)(lStack_2d8 + 0x23) = (char)(uVar3 >> 3);
  *(char *)(lStack_2d8 + 0x24) = (char)(uVar3 >> 0xb);
  uVar7 = (uVar30 & 0x1fffff) + lVar44 * 0x9fb67 + ((long)uVar3 >> 0x15);
  *(byte *)(lStack_2d8 + 0x25) = (byte)((uint)uVar3 >> 0x13) & 3 | (byte)((uint)uVar7 << 2);
  *(char *)(lStack_2d8 + 0x26) = (char)(uVar7 >> 6);
  uVar3 = (uVar6 & 0x1fffff) + lVar44 * -0xf39ad + ((long)uVar7 >> 0x15);
  *(byte *)(lStack_2d8 + 0x27) = (byte)((uint)uVar7 >> 0xe) & 0x7f | (byte)((uint)uVar3 << 7);
  *(char *)(lStack_2d8 + 0x28) = (char)(uVar3 >> 1);
  *(char *)(lStack_2d8 + 0x29) = (char)(uVar3 >> 9);
  uVar6 = (uVar11 & 0x1fffff) + lVar44 * 0x215d1 + ((long)uVar3 >> 0x15);
  *(byte *)(lStack_2d8 + 0x2a) = (byte)((uint)uVar3 >> 0x11) & 0xf | (byte)((uint)uVar6 << 4);
  *(char *)(lStack_2d8 + 0x2b) = (char)(uVar6 >> 4);
  *(char *)(lStack_2d8 + 0x2c) = (char)(uVar6 >> 0xc);
  uVar3 = (uVar12 & 0x1fffff) + lVar44 * -0xa6f7d + ((long)uVar6 >> 0x15);
  *(byte *)(lStack_2d8 + 0x2d) = (byte)((uint)uVar6 >> 0x14) & 1 | (byte)((uint)uVar3 << 1);
  *(char *)(lStack_2d8 + 0x2e) = (char)(uVar3 >> 7);
  uVar6 = (uVar18 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(byte *)(lStack_2d8 + 0x2f) = (byte)((uint)uVar3 >> 0xf) & 0x3f | (byte)((uint)uVar6 << 6);
  *(char *)(lStack_2d8 + 0x30) = (char)(uVar6 >> 2);
  *(char *)(lStack_2d8 + 0x31) = (char)(uVar6 >> 10);
  uVar3 = (uVar13 & 0x1fffff) + ((long)uVar6 >> 0x15);
  *(byte *)(lStack_2d8 + 0x32) = (byte)((uint)uVar6 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)(lStack_2d8 + 0x33) = (char)(uVar3 >> 5);
  lVar15 = (uVar1 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(char *)(lStack_2d8 + 0x34) = (char)(uVar3 >> 0xd);
  *(char *)(lStack_2d8 + 0x36) = (char)((ulong)lVar15 >> 8);
  uVar1 = (uVar4 & 0x1fffff) + (lVar15 >> 0x15);
  *(char *)(lStack_2d8 + 0x35) = (char)lVar15;
  *(byte *)(lStack_2d8 + 0x37) = (byte)((ulong)lVar15 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(lStack_2d8 + 0x38) = (char)(uVar1 >> 3);
  *(char *)(lStack_2d8 + 0x39) = (char)(uVar1 >> 0xb);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  uVar3 = (uVar5 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(lStack_2d8 + 0x3a) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)(lStack_2d8 + 0x3b) = (char)(uVar2 >> 6);
  *(byte *)(lStack_2d8 + 0x3c) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)(lStack_2d8 + 0x3d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar5) >> 1);
  *(char *)(lStack_2d8 + 0x3e) = (char)(uVar3 >> 9);
  *(char *)(lStack_2d8 + 0x3f) = (char)(uVar3 >> 0x11);
  func_0x006da5a8(uStack_88);
  if ((bool)in_ZR) {
    return (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_006d92d0;
  lStack_370 = lVar39;
  uStack_368 = uVar30;
  puStack_360 = &stack0xfffffffffffffff0;
  func_0x006da6c0();
  FUN_006d746c(auStack_398,uVar18 + 0x50);
  FUN_006da0f4(auStack_3c0,uVar30,auStack_398);
  FUN_006da0f4(auStack_3e8,uVar30 + 0x28,auStack_398);
  FUN_006d7490(lVar39,auStack_3e8);
  puVar16 = auStack_3c0;
  FUN_006d7648();
  *(byte *)(lVar39 + 0x1f) = *(byte *)(lVar39 + 0x1f) ^ (byte)((int)puVar16 << 7);
  return puVar16;
}



/* Entry: 006d92d0; end: 006d933f;  */

void FUN_006d92d0(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  func_0x006da6c0();
  FUN_006d746c(auStack_48,param_2 + 0x50);
  FUN_006da0f4(auStack_70);
  FUN_006da0f4(auStack_98,unaff_x19 + 0x28,auStack_48);
  FUN_006d7490();
  iVar1 = 0;
  FUN_006d7648();
  *(byte *)(unaff_x20 + 0x1f) = *(byte *)(unaff_x20 + 0x1f) ^ (byte)(iVar1 << 7);
  return;
}



/* Entry: 006d9340; end: 006d9b03;  */

void FUN_006d9340(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  long *plVar10;
  char *pcVar11;
  ulong *puVar12;
  char *pcVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar15;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  char *unaff_x20;
  uint uVar25;
  ulong unaff_x21;
  ulong *unaff_x22;
  int iVar26;
  long *unaff_x23;
  undefined *unaff_x24;
  long *unaff_x25;
  ulong uVar27;
  byte *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auStack_11c8 [40];
  undefined1 auStack_11a0 [40];
  undefined1 auStack_1178 [40];
  ulong uStack_1150;
  char *pcStack_1148;
  undefined1 ***pppuStack_1140;
  code *pcStack_1138;
  char *pcStack_1128;
  ulong uStack_1120;
  ulong uStack_1118;
  ulong uStack_1110;
  ulong uStack_1108;
  ulong uStack_1100;
  long lStack_10f8;
  long lStack_10f0;
  long lStack_10e8;
  long lStack_10e0;
  long lStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  long lStack_1080;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  long lStack_1050;
  undefined1 auStack_1040 [40];
  long lStack_1018;
  long lStack_1010;
  long lStack_1008;
  long lStack_1000;
  long lStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_fd0;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  long lStack_fa0;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  long lStack_f70;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  long lStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  long lStack_f18;
  ulong uStack_f10;
  ulong uStack_f08;
  ulong uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ee8;
  long *plStack_ed0;
  undefined8 uStack_ec8;
  byte *pbStack_ec0;
  long *plStack_eb8;
  undefined *puStack_eb0;
  long *plStack_ea8;
  ulong *puStack_ea0;
  ulong uStack_e98;
  undefined1 *puStack_e90;
  char *pcStack_e88;
  undefined1 **ppuStack_e80;
  code *pcStack_e78;
  ulong auStack_e70 [5];
  undefined1 auStack_e48 [40];
  long lStack_e20;
  long lStack_e18;
  long lStack_e10;
  long lStack_e08;
  long lStack_e00;
  undefined1 auStack_df0 [40];
  long lStack_dc8;
  long lStack_dc0;
  long lStack_db8;
  long lStack_db0;
  long lStack_da8;
  long lStack_da0;
  long lStack_d98;
  long lStack_d90;
  long lStack_d88;
  long lStack_d80;
  ulong uStack_d50;
  ulong uStack_d48;
  ulong uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d28;
  long *plStack_d20;
  undefined8 uStack_d18;
  char *pcStack_d10;
  ulong *puStack_d08;
  undefined1 *puStack_d00;
  code *pcStack_cf8;
  long lStack_cf0;
  long lStack_ce8;
  long lStack_ce0;
  long lStack_cd8;
  ulong uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  ulong auStack_c50 [4];
  ulong uStack_c30;
  long lStack_c28;
  long lStack_c20;
  long lStack_c18;
  long lStack_c10;
  long lStack_c00;
  long lStack_bf8;
  long lStack_bf0;
  long lStack_be8;
  long lStack_be0;
  undefined1 auStack_bd8 [40];
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  long lStack_b88;
  long lStack_b80;
  long lStack_b78;
  long lStack_b70;
  long lStack_b68;
  ulong uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  ulong auStack_ac0 [10];
  undefined8 auStack_a70 [2];
  undefined8 uStack_a60;
  long lStack_a50;
  undefined1 auStack_a48 [40];
  undefined8 auStack_a20 [2];
  undefined8 uStack_a10;
  long lStack_a00;
  undefined8 auStack_9f0 [2];
  undefined8 uStack_9e0;
  long lStack_9d0;
  undefined8 auStack_9c0 [2];
  undefined8 uStack_9b0;
  long lStack_9a0;
  undefined8 auStack_990 [2];
  undefined8 uStack_980;
  long lStack_970;
  undefined1 auStack_960 [64];
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  long lStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_850;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined1 auStack_7d0 [40];
  undefined1 auStack_7a8 [40];
  long alStack_780 [4];
  long lStack_760;
  undefined1 auStack_730 [40];
  undefined1 auStack_708 [40];
  undefined1 auStack_6e0 [160];
  undefined1 auStack_640 [160];
  undefined1 auStack_5a0 [160];
  undefined1 auStack_500 [160];
  undefined1 auStack_460 [160];
  undefined1 auStack_3c0 [160];
  undefined1 auStack_320 [168];
  char acStack_278 [256];
  byte abStack_178 [256];
  undefined8 uStack_78;
  
  func_0x006da5f4();
  uVar8 = *(byte *)((long)param_3 + 0x3f) == 0x1f;
  uStack_78 = extraout_x8;
  if (*(byte *)((long)param_3 + 0x3f) < 0x20) {
    uVar17 = param_4;
    func_0x006da6c0();
    unaff_x25 = &lStack_c00;
    FUN_006d7698(auStack_bd8,uVar17);
    uStack_b90 = 0;
    uStack_b98 = 0;
    uStack_ba0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 1;
    func_0x006da2f4(auStack_ac0,auStack_bd8);
    func_0x006da0f4(&uStack_b60,auStack_ac0,&UNK_0082d528);
    func_0x006d777c(&lStack_820,auStack_ac0,&uStack_bb0);
    func_0x006d77bc(&uStack_920,&lStack_820);
    lStack_820 = uStack_b60 + 1;
    uStack_810 = uStack_b50;
    uStack_818 = uStack_b58;
    lStack_800 = lStack_b40;
    uStack_808 = uStack_b48;
    func_0x006da0f4(auStack_ac0,&uStack_920,&lStack_820);
    func_0x006da2f4(alStack_780,auStack_ac0);
    func_0x006da610();
    func_0x006da5c8();
    func_0x006da0f4(abStack_178,auStack_ac0,abStack_178);
    func_0x006da0f4(alStack_780,alStack_780,abStack_178);
    func_0x006da65c(alStack_780);
    func_0x006da5d4();
    func_0x006da610();
    iVar26 = 4;
    do {
      func_0x006da5c8();
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    func_0x006da5d4();
    func_0x006da610();
    iVar26 = 9;
    while( true ) {
      if (iVar26 == 0) break;
      func_0x006da2f4();
      iVar26 = iVar26 + -1;
    }
    func_0x006da654(abStack_178,abStack_178);
    func_0x006da85c();
    iVar26 = 0x13;
    do {
      func_0x006da868();
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    func_0x006da744();
    func_0x006da5c8();
    iVar26 = 9;
    do {
      func_0x006da5c8();
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    func_0x006da5d4();
    func_0x006da610();
    iVar26 = 0x31;
    while( true ) {
      if (iVar26 == 0) break;
      func_0x006da2f4();
      iVar26 = iVar26 + -1;
    }
    func_0x006da654(abStack_178,abStack_178);
    func_0x006da85c();
    iVar26 = 99;
    do {
      func_0x006da868();
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    func_0x006da744();
    func_0x006da5c8();
    iVar26 = 0x31;
    do {
      func_0x006da5c8();
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    func_0x006da5d4();
    func_0x006da65c(alStack_780);
    func_0x006da65c(alStack_780);
    func_0x006da0f4(&lStack_c00,alStack_780,auStack_ac0);
    func_0x006da0f4(&lStack_c00,&lStack_c00,&uStack_920);
    func_0x006da2f4(&uStack_b60,&lStack_c00);
    func_0x006da0f4(&uStack_b60,&uStack_b60,&lStack_820);
    param_2 = &uStack_b60;
    func_0x006d777c(&uStack_cd0,param_2,&uStack_920);
    iVar26 = (int)&uStack_cd0;
    FUN_006d7838();
    unaff_x21 = param_4;
    unaff_x22 = param_3;
    if (iVar26 != 0) {
      func_0x006da88c(lStack_900 + lStack_b40,uStack_b60,uStack_b50,uStack_920,uStack_910);
      iVar26 = (int)&uStack_cd0;
      uStack_cd0 = uStack_b60;
      uStack_cc8 = uStack_b58;
      uStack_cc0 = uStack_b50;
      uStack_cb8 = uStack_b48;
      uStack_cb0 = extraout_x8_00;
      FUN_006d7838();
      unaff_x23 = (long *)0x0;
      if (iVar26 != 0) goto LAB_006d96e0;
      func_0x006da0f4(&lStack_c00,&lStack_c00,&UNK_0082d550);
    }
    unaff_x23 = &lStack_c00;
    uVar25 = (uint)&lStack_c00;
    FUN_006d7648();
    unaff_x24 = &UNK_0082d000;
    if (uVar25 != *(byte *)(param_4 + 0x1f) >> 7) {
      lStack_760 = 0xffffffffffffe - lStack_be0;
      alStack_780[0] = 0xfffffffffffda - lStack_c00;
      alStack_780[1] = 0xffffffffffffe - lStack_bf8;
      alStack_780[2] = 0xffffffffffffe - lStack_bf0;
      alStack_780[3] = 0xffffffffffffe - lStack_be8;
      func_0x006d77bc(&lStack_c00,alStack_780);
    }
    func_0x006da0f4(&lStack_b88,&lStack_c00,auStack_bd8);
    unaff_x26 = (byte *)0xffffffffffffe;
    lStack_c10 = 0xffffffffffffe - lStack_be0;
    lStack_ce8 = 0xffffffffffffe;
    lStack_cf0 = 0xfffffffffffda;
    uStack_c30 = 0xfffffffffffda - lStack_c00;
    lStack_c28 = 0xffffffffffffe - lStack_bf8;
    lStack_cd8 = 0xffffffffffffe;
    lStack_ce0 = 0xffffffffffffe;
    lStack_c20 = 0xffffffffffffe - lStack_bf0;
    lStack_c18 = 0xffffffffffffe - lStack_be8;
    func_0x006d77bc(&lStack_c00,&uStack_c30);
    lStack_c10 = 0xffffffffffffe - lStack_b68;
    uStack_c30 = lStack_cf0 - lStack_b88;
    lStack_c28 = lStack_ce8 - lStack_b80;
    lStack_c20 = lStack_ce0 - lStack_b78;
    lStack_c18 = lStack_cd8 - lStack_b70;
    param_2 = &uStack_c30;
    func_0x006d77bc(&lStack_b88,param_2);
    uStack_838 = param_3[1];
    uStack_840 = *param_3;
    uStack_828 = param_3[3];
    uStack_830 = param_3[2];
    auStack_c50[1] = param_3[5];
    auStack_c50[0] = param_3[4];
    auStack_c50[3] = param_3[7];
    auStack_c50[2] = param_3[6];
    lVar15 = 0x18;
    do {
      uVar17 = *(ulong *)((long)auStack_c50 + lVar15);
      uVar19 = *(ulong *)(&UNK_0082d5a0 + lVar15);
      uVar8 = uVar17 == uVar19;
      if (uVar19 <= uVar17 && !(bool)uVar8) break;
      if (uVar19 > uVar17) {
        uStack_918 = 0xbb67ae8584caa73b;
        uStack_920 = 0x6a09e667f3bcc908;
        uStack_908 = 0xa54ff53a5f1d36f1;
        uStack_910 = 0x3c6ef372fe94f82b;
        uStack_8f8 = 0x9b05688c2b3e6c1f;
        lStack_900 = 0x510e527fade682d1;
        uStack_8e8 = 0x5be0cd19137e2179;
        uStack_8f0 = 0x1f83d9abfb41bd6b;
        uStack_8d8 = 0;
        uStack_8e0 = 0;
        uStack_850 = 0x4000000000;
        func_0x006da6cc(&uStack_920,param_3);
        func_0x006da6cc(&uStack_920,param_4);
        FUN_006eb66c(&uStack_920);
        FUN_006f67d0(auStack_960,&uStack_920);
        FUN_006d7f14(auStack_960);
        func_0x006da490(abStack_178,auStack_960);
        func_0x006da490(acStack_278,auStack_c50);
        FUN_006d7898(alStack_780,&lStack_c00);
        FUN_006d7de8(&lStack_820,&lStack_c00);
        func_0x006d791c(&uStack_b60,&lStack_820);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_6e0);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_640);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_5a0);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_500);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_460);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_3c0);
        func_0x006da738();
        FUN_006d795c();
        func_0x006da5bc();
        func_0x006da664(auStack_320);
        uStack_c98 = 0;
        uStack_ca0 = 0;
        uStack_c88 = 0;
        uStack_c90 = 0;
        uStack_cb8 = 0;
        uStack_cc0 = 0;
        uStack_cb0 = 0;
        uStack_cc8 = 0;
        uStack_cd0 = 0;
        uStack_ca8 = 1;
        uStack_c70 = 0;
        uStack_c78 = 0;
        uStack_c60 = 0;
        uStack_c68 = 0;
        unaff_x21 = 0xff;
        uStack_c80 = 1;
        goto LAB_006d9890;
      }
      lVar15 = lVar15 + -8;
      uVar8 = lVar15 == -8;
    } while (!(bool)uVar8);
  }
LAB_006d96e0:
  bVar9 = false;
LAB_006d96e4:
  func_0x006da5a8(uStack_78,bVar9);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    pcStack_cf8 = FUN_006d9b04;
    pcStack_d10 = unaff_x20;
    puStack_d08 = unaff_x19;
    puStack_d00 = &stack0xfffffffffffffff0;
    func_0x006da6c0();
    FUN_006e92d4(param_2,0x20);
    *(byte *)unaff_x19 = (byte)*unaff_x19 | 7;
    *(byte *)((long)unaff_x19 + 0x1f) = *(byte *)((long)unaff_x19 + 0x1f) & 0x3f | 0x80;
    puVar14 = auStack_e70;
    puVar12 = auStack_e70;
    plStack_d20 = unaff_x28;
    uStack_d18 = unaff_x27;
    func_0x006da5f4();
    uStack_d48 = unaff_x19[1];
    uStack_d40 = unaff_x19[2];
    uStack_d50 = *unaff_x19 & 0xfffffffffffffff8;
    uStack_d38._7_1_ = (undefined1)(unaff_x19[3] >> 0x38);
    uVar7 = uStack_d38._7_1_;
    uStack_d38 = unaff_x19[3];
    uStack_d28 = extraout_x8_01;
    func_0x006da880(uVar7);
    uStack_d38 = CONCAT17(extraout_w9,(undefined7)uStack_d38);
    FUN_006d7b00(auStack_df0,&uStack_d50);
    lStack_e00 = lStack_da8 + lStack_d80;
    lStack_e20 = lStack_dc8 + lStack_da0;
    lStack_e18 = lStack_dc0 + lStack_d98;
    lStack_e10 = lStack_db8 + lStack_d90;
    lStack_e08 = lStack_db0 + lStack_d88;
    func_0x006d777c(auStack_e48,&lStack_da0,&lStack_dc8);
    FUN_006d9f68(auStack_e70,auStack_e48);
    func_0x006da0f4(auStack_e70,&lStack_e20,auStack_e70);
    pcVar11 = unaff_x20;
    FUN_006d7490();
    func_0x006da5a8(uStack_d28);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_e78 = FUN_006d9c24;
    pcStack_1128 = pcVar11;
    plStack_ed0 = unaff_x28;
    uStack_ec8 = unaff_x27;
    pbStack_ec0 = unaff_x26;
    plStack_eb8 = unaff_x25;
    puStack_eb0 = unaff_x24;
    plStack_ea8 = unaff_x23;
    puStack_ea0 = unaff_x22;
    uStack_e98 = unaff_x21;
    puStack_e90 = auStack_df0;
    pcStack_e88 = unaff_x20;
    ppuStack_e80 = &puStack_d00;
    func_0x006da5f4();
    uStack_f08 = puVar12[1];
    uStack_f00 = puVar12[2];
    uStack_f10 = *puVar12 & 0xfffffffffffffff8;
    uStack_ef8._7_1_ = (undefined1)(puVar12[3] >> 0x38);
    uVar8 = uStack_ef8._7_1_;
    uStack_ef8 = puVar12[3];
    uStack_ee8 = extraout_x8_02;
    func_0x006da880(uVar8);
    uStack_ef8 = CONCAT17(extraout_w9_00,(undefined7)uStack_ef8);
    FUN_006d7698(&uStack_f38,puVar14);
    lStack_f40 = 0;
    uStack_f48 = 0;
    uStack_f50 = 0;
    uStack_f58 = 0;
    uStack_f60 = 1;
    uStack_f88 = 0;
    uStack_f90 = 0;
    uStack_f78 = 0;
    uStack_f80 = 0;
    lStack_f70 = 0;
    uStack_fe0 = 0;
    uStack_fe8 = 0;
    lStack_fd0 = 0;
    uStack_fd8 = 0;
    lStack_fa0 = lStack_f18;
    uStack_ff0 = 1;
    uVar19 = 0xfe;
    uStack_fb8 = uStack_f30;
    uStack_fc0 = uStack_f38;
    uStack_fa8 = uStack_f20;
    uStack_fb0 = uStack_f28;
    uVar17 = 0;
    do {
      uVar25 = *(byte *)((long)&uStack_f10 + (uVar19 >> 3)) >> (ulong)((uint)uVar19 & 7) & 1;
      uVar27 = (ulong)uVar25;
      func_0x006da568(&uStack_f60,&uStack_fc0,uVar25 ^ (uint)uVar17);
      func_0x006da78c();
      func_0x006d777c(&lStack_10f8,&uStack_fc0,&uStack_ff0);
      func_0x006d777c(&uStack_1120,&uStack_f60,&uStack_f90);
      uVar28 = uStack_f60;
      uVar30 = uStack_f58;
      uVar32 = uStack_f50;
      uVar34 = uStack_f48;
      func_0x006da88c(uStack_f60,uStack_f50,uStack_f90,uStack_f80);
      uVar29 = uStack_fc0;
      uVar31 = uStack_fb8;
      uVar33 = uStack_fb0;
      uVar35 = uStack_fa8;
      uStack_1070 = uVar28;
      uStack_1068 = uVar30;
      uStack_1060 = uVar32;
      uStack_1058 = uVar34;
      func_0x006da88c(uStack_fc0,uStack_fb0,uStack_ff0,uStack_fe0);
      lStack_1050 = lStack_f70 + lStack_f40;
      lStack_1080 = lStack_fd0 + lStack_fa0;
      uStack_10a0 = uVar29;
      uStack_1098 = uVar31;
      uStack_1090 = uVar33;
      uStack_1088 = uVar35;
      func_0x006da0f4(&uStack_ff0,&lStack_10f8,&uStack_1070);
      func_0x006da0f4(&uStack_f90,&uStack_10a0,&uStack_1120);
      func_0x006da2f4(&lStack_1018,&uStack_1120);
      func_0x006da2f4(auStack_1040,&uStack_1070);
      uVar28 = uStack_ff0;
      uVar29 = uStack_fe8;
      uVar30 = uStack_fe0;
      uVar31 = uStack_fd8;
      func_0x006da88c(lStack_f70 + lStack_fd0,uStack_ff0,uStack_fe0,uStack_f90,uStack_f80);
      uStack_10d0 = uVar28;
      uStack_10c8 = uVar29;
      uStack_10c0 = uVar30;
      uStack_10b8 = uVar31;
      func_0x006d777c(&uStack_10a0,&uStack_ff0,&uStack_f90);
      func_0x006da0f4(&uStack_f60,auStack_1040,&lStack_1018);
      func_0x006d777c(&uStack_1120,auStack_1040,&lStack_1018);
      func_0x006da2f4(&uStack_f90,&uStack_10a0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_1100;
      lVar16 = SUB168(auVar2 * ZEXT816(0x1db42),8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_1108;
      lVar20 = SUB168(auVar3 * ZEXT816(0x1db42),8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uStack_1110;
      lVar21 = SUB168(auVar4 * ZEXT816(0x1db42),8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uStack_1118;
      lVar15 = SUB168(auVar5 * ZEXT816(0x1db42),8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uStack_1120;
      uVar23 = uStack_1120 * 0x1db42 >> 0x33 | SUB168(auVar6 * ZEXT816(0x1db42),8) << 0xd;
      uVar17 = uVar23 + uStack_1118 * 0x1db42;
      if (CARRY8(uVar23,uStack_1118 * 0x1db42)) {
        lVar15 = lVar15 + 1;
      }
      uVar24 = uVar17 >> 0x33 | lVar15 << 0xd;
      uVar23 = uVar24 + uStack_1110 * 0x1db42;
      if (CARRY8(uVar24,uStack_1110 * 0x1db42)) {
        lVar21 = lVar21 + 1;
      }
      uVar22 = uVar23 >> 0x33 | lVar21 << 0xd;
      uVar24 = uVar22 + uStack_1108 * 0x1db42;
      if (CARRY8(uVar22,uStack_1108 * 0x1db42)) {
        lVar20 = lVar20 + 1;
      }
      uVar18 = uVar24 >> 0x33 | lVar20 << 0xd;
      uVar22 = uVar18 + uStack_1100 * 0x1db42;
      if (CARRY8(uVar18,uStack_1100 * 0x1db42)) {
        lVar16 = lVar16 + 1;
      }
      uVar18 = (uStack_1120 * 0x1db42 & 0x7fffffffffffe) + (uVar22 >> 0x33 | lVar16 << 0xd) * 0x13;
      uVar17 = (uVar17 & 0x7ffffffffffff) + (uVar18 >> 0x33);
      func_0x006da2f4(&uStack_fc0,&uStack_10d0);
      lStack_10f8 = (uVar18 & 0x7ffffffffffff) + lStack_1018;
      lStack_10f0 = (uVar17 & 0x7ffffffffffff) + lStack_1010;
      lStack_10e8 = (uVar23 & 0x7ffffffffffff) + lStack_1008 + (uVar17 >> 0x33);
      lStack_10e0 = (uVar24 & 0x7ffffffffffff) + lStack_1000;
      lStack_10d8 = (uVar22 & 0x7ffffffffffff) + lStack_ff8;
      func_0x006da0f4(&uStack_ff0,&uStack_f38,&uStack_f90);
      func_0x006da0f4(&uStack_f90,&uStack_1120,&lStack_10f8);
      uVar25 = (uint)uVar19 - 1;
      uVar19 = (ulong)uVar25;
      uVar17 = uVar27;
    } while (-1 < (int)uVar25);
    func_0x006da568(&uStack_f60,&uStack_fc0,uVar27);
    func_0x006da78c();
    FUN_006d746c(&uStack_f90,&uStack_f90);
    func_0x006da0f4(&uStack_f60,&uStack_f60,&uStack_f90);
    pcVar11 = pcStack_1128;
    FUN_006d7490(pcStack_1128,&uStack_f60);
    iVar26 = 0x82d5c0;
    pcVar13 = pcVar11;
    func_0x006da83c(&UNK_0082d5c0,pcVar11);
    bVar9 = iVar26 == 0;
    uVar17 = (ulong)!bVar9;
    func_0x006da5a8(uStack_ee8,uVar17);
    if (!bVar9) {
      ___stack_chk_fail();
      pcStack_1148 = pcVar11;
      pcStack_1138 = FUN_006d9f68;
      uStack_1150 = uVar27;
      pppuStack_1140 = &ppuStack_e80;
      func_0x006da2f4(auStack_1178);
      func_0x006da2f4(auStack_11a0,auStack_1178);
      func_0x006da6b0(auStack_11a0);
      func_0x006da0f4(auStack_11a0,pcVar13,auStack_11a0);
      func_0x006da6b8(auStack_1178,auStack_1178);
      func_0x006da2f4(auStack_11c8,auStack_1178);
      func_0x006da0f4(auStack_11a0,auStack_11a0,auStack_11c8);
      func_0x006da6b0(auStack_11c8);
      iVar26 = 4;
      do {
        func_0x006da604();
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da61c();
      func_0x006da6b0(auStack_11c8);
      iVar26 = 9;
      while( true ) {
        if (iVar26 == 0) break;
        func_0x006da2f4();
        iVar26 = iVar26 + -1;
      }
      func_0x006da6b8(auStack_11c8,auStack_11c8);
      func_0x006da844();
      iVar26 = 0x13;
      do {
        func_0x006da850();
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da79c();
      func_0x006da604();
      iVar26 = 9;
      do {
        func_0x006da604();
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da61c();
      func_0x006da6b0(auStack_11c8);
      iVar26 = 0x31;
      while( true ) {
        if (iVar26 == 0) break;
        func_0x006da2f4();
        iVar26 = iVar26 + -1;
      }
      func_0x006da6b8(auStack_11c8,auStack_11c8);
      func_0x006da844();
      iVar26 = 99;
      do {
        func_0x006da850();
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da79c();
      func_0x006da604();
      iVar26 = 0x31;
      do {
        func_0x006da604();
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da61c();
      func_0x006da6b0(auStack_11a0);
      iVar26 = 4;
      do {
        func_0x006da6b0(auStack_11a0);
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      func_0x006da0f4(uVar17,auStack_11a0,auStack_1178);
      return;
    }
  }
  return;
  while (uVar25 = (int)unaff_x21 - 1, unaff_x21 = (ulong)uVar25, -1 < (int)uVar25) {
LAB_006d9890:
    if ((abStack_178[unaff_x21] != 0) || (acStack_278[unaff_x21] != '\0')) goto LAB_006d98ac;
  }
  unaff_x21 = 0xffffffff;
LAB_006d98ac:
  unaff_x22 = auStack_ac0;
  unaff_x25 = &lStack_820;
  unaff_x26 = abStack_178;
  unaff_x27 = 0xa0;
  unaff_x28 = alStack_780;
  unaff_x20 = acStack_278;
  unaff_x24 = (undefined *)0x78;
  unaff_x23 = (long *)&UNK_00834e00;
  uVar25 = (uint)unaff_x21;
  while (-1 < (int)uVar25) {
    FUN_006d7e34(&lStack_820,&uStack_cd0);
    bVar1 = unaff_x26[unaff_x21];
    if ((char)bVar1 < '\x01') {
      if ((char)bVar1 < '\0') {
        func_0x006da5bc();
        func_0x006da7ac();
        lVar15 = (ulong)(-(uint)bVar1 >> 1 & 0x7f) * 0xa0;
        func_0x006da62c();
        func_0x006da810(auStack_9f0);
        func_0x006da828(auStack_9c0);
        func_0x006da0f4(auStack_a20,auStack_708 + lVar15,auStack_a48);
        func_0x006da0f4(auStack_990,auStack_a70,auStack_730 + lVar15);
        func_0x006da718(lStack_970 << 1,auStack_990[0],uStack_980);
        func_0x006d777c();
        func_0x006da7f0(lStack_9a0 + lStack_9d0,auStack_9f0[0],uStack_9e0,auStack_9c0[0],uStack_9b0)
        ;
        func_0x006d77bc(auStack_9f0,auStack_7a8);
        func_0x006d777c(auStack_7d0,auStack_9f0,auStack_a20);
        func_0x006da7d8(lStack_a00 + lStack_9d0,auStack_9f0[0],uStack_9e0,auStack_a20[0],uStack_a10)
        ;
      }
    }
    else {
      func_0x006da5bc();
      FUN_006d795c(&lStack_820,auStack_ac0,unaff_x28 + (ulong)(bVar1 >> 1) * 0x14);
    }
    uVar25 = (uint)unaff_x20[unaff_x21];
    if (unaff_x20[unaff_x21] < '\x01') {
      if ((int)uVar25 < 0) {
        func_0x006da5bc();
        func_0x006da7ac();
        func_0x006da62c();
        func_0x006da810(auStack_9c0);
        func_0x006da828(auStack_990);
        func_0x006da0f4(auStack_9f0,(-uVar25 >> 1 & 0x7f) * 0x78 + 0x834e50,auStack_a48);
        func_0x006da718(lStack_a50 << 1,auStack_a70[0],uStack_a60);
        func_0x006d777c();
        func_0x006da7f0(lStack_970 + lStack_9a0,auStack_9c0[0],uStack_9b0,auStack_990[0],uStack_980)
        ;
        func_0x006d77bc(auStack_9c0,auStack_7a8);
        func_0x006d777c(auStack_7d0,auStack_9c0,auStack_9f0);
        func_0x006da7d8(lStack_9d0 + lStack_9a0,auStack_9c0[0],uStack_9b0,auStack_9f0[0],uStack_9e0)
        ;
      }
    }
    else {
      func_0x006da5bc();
      func_0x006d7a5c(&lStack_820,auStack_ac0,(uVar25 >> 1 & 0x7f) * 0x78 + 0x834e00);
    }
    func_0x006d78ec(&uStack_cd0,&lStack_820);
    uVar25 = (int)unaff_x21 - 1;
    unaff_x21 = (ulong)uVar25;
  }
  unaff_x19 = &uStack_cd0;
  FUN_006d746c(alStack_780,&uStack_c80);
  func_0x006da654(abStack_178,&uStack_cd0);
  func_0x006da654(acStack_278,&uStack_ca8);
  FUN_006d7490(&lStack_820,acStack_278);
  iVar26 = 0;
  FUN_006d7648();
  uStack_808 = CONCAT17(uStack_808._7_1_ ^ (byte)(iVar26 << 7),(undefined7)uStack_808);
  plVar10 = &lStack_820;
  param_2 = &uStack_840;
  func_0x006da83c(plVar10,param_2);
  uVar8 = (int)plVar10 == 0;
  bVar9 = (bool)uVar8;
  goto LAB_006d96e4;
}



/* Entry: 006d9b04; end: 006d9b4f;  */

void FUN_006d9b04(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined1 in_ZR;
  bool bVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong *unaff_x19;
  int iVar21;
  undefined8 unaff_x20;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_4d8 [40];
  undefined1 auStack_4b0 [40];
  undefined1 auStack_488 [40];
  ulong uStack_460;
  undefined8 uStack_458;
  undefined1 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined1 auStack_350 [40];
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined1 *puStack_190;
  code *pcStack_188;
  ulong auStack_180 [5];
  undefined1 auStack_158 [40];
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_100 [40];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x006da6c0();
  FUN_006e92d4(param_2,0x20);
  *(byte *)unaff_x19 = (byte)*unaff_x19 | 7;
  *(byte *)((long)unaff_x19 + 0x1f) = *(byte *)((long)unaff_x19 + 0x1f) & 0x3f | 0x80;
  puVar12 = auStack_180;
  puVar10 = auStack_180;
  func_0x006da5f4();
  uStack_58 = unaff_x19[1];
  uStack_50 = unaff_x19[2];
  uStack_60 = *unaff_x19 & 0xfffffffffffffff8;
  uStack_48._7_1_ = (undefined1)(unaff_x19[3] >> 0x38);
  uVar7 = uStack_48._7_1_;
  uStack_48 = unaff_x19[3];
  uStack_38 = extraout_x8;
  func_0x006da880(uVar7);
  uStack_48 = CONCAT17(extraout_w9,(undefined7)uStack_48);
  FUN_006d7b00(auStack_100,&uStack_60);
  lStack_110 = lStack_b8 + lStack_90;
  lStack_130 = lStack_d8 + lStack_b0;
  lStack_128 = lStack_d0 + lStack_a8;
  lStack_120 = lStack_c8 + lStack_a0;
  lStack_118 = lStack_c0 + lStack_98;
  func_0x006d777c(auStack_158,&lStack_b0,&lStack_d8);
  FUN_006d9f68(auStack_180,auStack_158);
  FUN_006da0f4(auStack_180,&lStack_130,auStack_180);
  FUN_006d7490();
  func_0x006da5a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_006d9c24;
  uStack_438 = unaff_x20;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x006da5f4();
  uStack_218 = puVar10[1];
  uStack_210 = puVar10[2];
  uStack_220 = *puVar10 & 0xfffffffffffffff8;
  uStack_208._7_1_ = (undefined1)(puVar10[3] >> 0x38);
  uVar7 = uStack_208._7_1_;
  uStack_208 = puVar10[3];
  uStack_1f8 = extraout_x8_00;
  func_0x006da880(uVar7);
  uStack_208 = CONCAT17(extraout_w9_00,(undefined7)uStack_208);
  func_0x006d7698(&uStack_248,puVar12);
  lStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_270 = 1;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_280 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  lStack_2e0 = 0;
  uStack_2e8 = 0;
  lStack_2b0 = lStack_228;
  uStack_300 = 1;
  uVar22 = 0xfe;
  uStack_2c8 = uStack_240;
  uStack_2d0 = uStack_248;
  uStack_2b8 = uStack_230;
  uStack_2c0 = uStack_238;
  uVar9 = 0;
  do {
    uVar1 = *(byte *)((long)&uStack_220 + (uVar22 >> 3)) >> (ulong)((uint)uVar22 & 7) & 1;
    uVar23 = (ulong)uVar1;
    func_0x006da568(&uStack_270,&uStack_2d0,uVar1 ^ (uint)uVar9);
    func_0x006da78c();
    func_0x006d777c(&lStack_408,&uStack_2d0,&uStack_300);
    func_0x006d777c(&uStack_430,&uStack_270,&uStack_2a0);
    uVar11 = uStack_270;
    uVar25 = uStack_268;
    uVar27 = uStack_260;
    uVar29 = uStack_258;
    func_0x006da88c(uStack_270,uStack_260,uStack_2a0,uStack_290);
    uVar24 = uStack_2d0;
    uVar26 = uStack_2c8;
    uVar28 = uStack_2c0;
    uVar30 = uStack_2b8;
    uStack_380 = uVar11;
    uStack_378 = uVar25;
    uStack_370 = uVar27;
    uStack_368 = uVar29;
    func_0x006da88c(uStack_2d0,uStack_2c0,uStack_300,uStack_2f0);
    lStack_360 = lStack_280 + lStack_250;
    lStack_390 = lStack_2e0 + lStack_2b0;
    uStack_3b0 = uVar24;
    uStack_3a8 = uVar26;
    uStack_3a0 = uVar28;
    uStack_398 = uVar30;
    FUN_006da0f4(&uStack_300,&lStack_408,&uStack_380);
    FUN_006da0f4(&uStack_2a0,&uStack_3b0,&uStack_430);
    func_0x006da2f4(&lStack_328,&uStack_430);
    func_0x006da2f4(auStack_350,&uStack_380);
    uVar11 = uStack_300;
    uVar24 = uStack_2f8;
    uVar25 = uStack_2f0;
    uVar26 = uStack_2e8;
    func_0x006da88c(lStack_280 + lStack_2e0,uStack_300,uStack_2f0,uStack_2a0,uStack_290);
    uStack_3e0 = uVar11;
    uStack_3d8 = uVar24;
    uStack_3d0 = uVar25;
    uStack_3c8 = uVar26;
    func_0x006d777c(&uStack_3b0,&uStack_300,&uStack_2a0);
    FUN_006da0f4(&uStack_270,auStack_350,&lStack_328);
    func_0x006d777c(&uStack_430,auStack_350,&lStack_328);
    func_0x006da2f4(&uStack_2a0,&uStack_3b0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_410;
    lVar13 = SUB168(auVar2 * ZEXT816(0x1db42),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_418;
    lVar15 = SUB168(auVar3 * ZEXT816(0x1db42),8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_420;
    lVar16 = SUB168(auVar4 * ZEXT816(0x1db42),8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_428;
    lVar20 = SUB168(auVar5 * ZEXT816(0x1db42),8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_430;
    uVar18 = uStack_430 * 0x1db42 >> 0x33 | SUB168(auVar6 * ZEXT816(0x1db42),8) << 0xd;
    uVar9 = uVar18 + uStack_428 * 0x1db42;
    if (CARRY8(uVar18,uStack_428 * 0x1db42)) {
      lVar20 = lVar20 + 1;
    }
    uVar19 = uVar9 >> 0x33 | lVar20 << 0xd;
    uVar18 = uVar19 + uStack_420 * 0x1db42;
    if (CARRY8(uVar19,uStack_420 * 0x1db42)) {
      lVar16 = lVar16 + 1;
    }
    uVar17 = uVar18 >> 0x33 | lVar16 << 0xd;
    uVar19 = uVar17 + uStack_418 * 0x1db42;
    if (CARRY8(uVar17,uStack_418 * 0x1db42)) {
      lVar15 = lVar15 + 1;
    }
    uVar14 = uVar19 >> 0x33 | lVar15 << 0xd;
    uVar17 = uVar14 + uStack_410 * 0x1db42;
    if (CARRY8(uVar14,uStack_410 * 0x1db42)) {
      lVar13 = lVar13 + 1;
    }
    uVar14 = (uStack_430 * 0x1db42 & 0x7fffffffffffe) + (uVar17 >> 0x33 | lVar13 << 0xd) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uVar14 >> 0x33);
    func_0x006da2f4(&uStack_2d0,&uStack_3e0);
    lStack_408 = (uVar14 & 0x7ffffffffffff) + lStack_328;
    lStack_400 = (uVar9 & 0x7ffffffffffff) + lStack_320;
    lStack_3f8 = (uVar18 & 0x7ffffffffffff) + lStack_318 + (uVar9 >> 0x33);
    lStack_3f0 = (uVar19 & 0x7ffffffffffff) + lStack_310;
    lStack_3e8 = (uVar17 & 0x7ffffffffffff) + lStack_308;
    FUN_006da0f4(&uStack_300,&uStack_248,&uStack_2a0);
    FUN_006da0f4(&uStack_2a0,&uStack_430,&lStack_408);
    uVar1 = (uint)uVar22 - 1;
    uVar22 = (ulong)uVar1;
    uVar9 = uVar23;
  } while (-1 < (int)uVar1);
  func_0x006da568(&uStack_270,&uStack_2d0,uVar23);
  func_0x006da78c();
  FUN_006d746c(&uStack_2a0,&uStack_2a0);
  FUN_006da0f4(&uStack_270,&uStack_270,&uStack_2a0);
  FUN_006d7490(uStack_438,&uStack_270);
  iVar21 = 0x82d5c0;
  uVar11 = uStack_438;
  func_0x006da83c(&UNK_0082d5c0,uStack_438);
  bVar8 = iVar21 == 0;
  uVar9 = (ulong)!bVar8;
  func_0x006da5a8(uStack_1f8,uVar9);
  if (!bVar8) {
    ___stack_chk_fail();
    uStack_458 = uStack_438;
    pcStack_448 = FUN_006d9f68;
    uStack_460 = uVar23;
    ppuStack_450 = &puStack_190;
    func_0x006da2f4(auStack_488);
    func_0x006da2f4(auStack_4b0,auStack_488);
    func_0x006da6b0(auStack_4b0);
    FUN_006da0f4(auStack_4b0,uVar11,auStack_4b0);
    func_0x006da6b8(auStack_488,auStack_488);
    func_0x006da2f4(auStack_4d8,auStack_488);
    FUN_006da0f4(auStack_4b0,auStack_4b0,auStack_4d8);
    func_0x006da6b0(auStack_4d8);
    iVar21 = 4;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4d8);
    iVar21 = 9;
    while( true ) {
      if (iVar21 == 0) break;
      func_0x006da2f4();
      iVar21 = iVar21 + -1;
    }
    func_0x006da6b8(auStack_4d8,auStack_4d8);
    func_0x006da844();
    iVar21 = 0x13;
    do {
      func_0x006da850();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar21 = 9;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4d8);
    iVar21 = 0x31;
    while( true ) {
      if (iVar21 == 0) break;
      func_0x006da2f4();
      iVar21 = iVar21 + -1;
    }
    func_0x006da6b8(auStack_4d8,auStack_4d8);
    func_0x006da844();
    iVar21 = 99;
    do {
      func_0x006da850();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar21 = 0x31;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4b0);
    iVar21 = 4;
    do {
      func_0x006da6b0(auStack_4b0);
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    FUN_006da0f4(uVar9,auStack_4b0,auStack_488);
    return;
  }
  return;
}



/* Entry: 006d9b50; end: 006d9c23;  */

void FUN_006d9b50(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined1 in_ZR;
  bool bVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_4d8 [40];
  undefined1 auStack_4b0 [40];
  undefined1 auStack_488 [40];
  ulong uStack_460;
  undefined8 uStack_458;
  undefined1 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined1 auStack_350 [40];
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined1 *puStack_190;
  code *pcStack_188;
  ulong auStack_180 [5];
  undefined1 auStack_158 [40];
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_100 [40];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar12 = auStack_180;
  puVar10 = auStack_180;
  func_0x006da5f4();
  uStack_58 = param_2[1];
  uStack_50 = param_2[2];
  uStack_60 = *param_2 & 0xfffffffffffffff8;
  uStack_48._7_1_ = (undefined1)(param_2[3] >> 0x38);
  uVar7 = uStack_48._7_1_;
  uStack_48 = param_2[3];
  uStack_38 = extraout_x8;
  func_0x006da880(uVar7);
  uStack_48 = CONCAT17(extraout_w9,(undefined7)uStack_48);
  FUN_006d7b00(auStack_100,&uStack_60);
  lStack_110 = lStack_b8 + lStack_90;
  lStack_130 = lStack_d8 + lStack_b0;
  lStack_128 = lStack_d0 + lStack_a8;
  lStack_120 = lStack_c8 + lStack_a0;
  lStack_118 = lStack_c0 + lStack_98;
  func_0x006d777c(auStack_158,&lStack_b0,&lStack_d8);
  FUN_006d9f68(auStack_180,auStack_158);
  FUN_006da0f4(auStack_180,&lStack_130,auStack_180);
  FUN_006d7490();
  func_0x006da5a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_006d9c24;
  uStack_438 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x006da5f4();
  uStack_218 = puVar10[1];
  uStack_210 = puVar10[2];
  uStack_220 = *puVar10 & 0xfffffffffffffff8;
  uStack_208._7_1_ = (undefined1)(puVar10[3] >> 0x38);
  uVar7 = uStack_208._7_1_;
  uStack_208 = puVar10[3];
  uStack_1f8 = extraout_x8_00;
  func_0x006da880(uVar7);
  uStack_208 = CONCAT17(extraout_w9_00,(undefined7)uStack_208);
  func_0x006d7698(&uStack_248,puVar12);
  lStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_270 = 1;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_280 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  lStack_2e0 = 0;
  uStack_2e8 = 0;
  lStack_2b0 = lStack_228;
  uStack_300 = 1;
  uVar22 = 0xfe;
  uStack_2c8 = uStack_240;
  uStack_2d0 = uStack_248;
  uStack_2b8 = uStack_230;
  uStack_2c0 = uStack_238;
  uVar9 = 0;
  do {
    uVar1 = *(byte *)((long)&uStack_220 + (uVar22 >> 3)) >> (ulong)((uint)uVar22 & 7) & 1;
    uVar23 = (ulong)uVar1;
    func_0x006da568(&uStack_270,&uStack_2d0,uVar1 ^ (uint)uVar9);
    func_0x006da78c();
    func_0x006d777c(&lStack_408,&uStack_2d0,&uStack_300);
    func_0x006d777c(&uStack_430,&uStack_270,&uStack_2a0);
    uVar24 = uStack_270;
    uVar25 = uStack_268;
    uVar27 = uStack_260;
    uVar29 = uStack_258;
    func_0x006da88c(uStack_270,uStack_260,uStack_2a0,uStack_290);
    uVar11 = uStack_2d0;
    uVar26 = uStack_2c8;
    uVar28 = uStack_2c0;
    uVar30 = uStack_2b8;
    uStack_380 = uVar24;
    uStack_378 = uVar25;
    uStack_370 = uVar27;
    uStack_368 = uVar29;
    func_0x006da88c(uStack_2d0,uStack_2c0,uStack_300,uStack_2f0);
    lStack_360 = lStack_280 + lStack_250;
    lStack_390 = lStack_2e0 + lStack_2b0;
    uStack_3b0 = uVar11;
    uStack_3a8 = uVar26;
    uStack_3a0 = uVar28;
    uStack_398 = uVar30;
    FUN_006da0f4(&uStack_300,&lStack_408,&uStack_380);
    FUN_006da0f4(&uStack_2a0,&uStack_3b0,&uStack_430);
    func_0x006da2f4(&lStack_328,&uStack_430);
    func_0x006da2f4(auStack_350,&uStack_380);
    uVar24 = uStack_300;
    uVar11 = uStack_2f8;
    uVar25 = uStack_2f0;
    uVar26 = uStack_2e8;
    func_0x006da88c(lStack_280 + lStack_2e0,uStack_300,uStack_2f0,uStack_2a0,uStack_290);
    uStack_3e0 = uVar24;
    uStack_3d8 = uVar11;
    uStack_3d0 = uVar25;
    uStack_3c8 = uVar26;
    func_0x006d777c(&uStack_3b0,&uStack_300,&uStack_2a0);
    FUN_006da0f4(&uStack_270,auStack_350,&lStack_328);
    func_0x006d777c(&uStack_430,auStack_350,&lStack_328);
    func_0x006da2f4(&uStack_2a0,&uStack_3b0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_410;
    lVar13 = SUB168(auVar2 * ZEXT816(0x1db42),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_418;
    lVar15 = SUB168(auVar3 * ZEXT816(0x1db42),8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_420;
    lVar16 = SUB168(auVar4 * ZEXT816(0x1db42),8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_428;
    lVar20 = SUB168(auVar5 * ZEXT816(0x1db42),8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_430;
    uVar18 = uStack_430 * 0x1db42 >> 0x33 | SUB168(auVar6 * ZEXT816(0x1db42),8) << 0xd;
    uVar9 = uVar18 + uStack_428 * 0x1db42;
    if (CARRY8(uVar18,uStack_428 * 0x1db42)) {
      lVar20 = lVar20 + 1;
    }
    uVar19 = uVar9 >> 0x33 | lVar20 << 0xd;
    uVar18 = uVar19 + uStack_420 * 0x1db42;
    if (CARRY8(uVar19,uStack_420 * 0x1db42)) {
      lVar16 = lVar16 + 1;
    }
    uVar17 = uVar18 >> 0x33 | lVar16 << 0xd;
    uVar19 = uVar17 + uStack_418 * 0x1db42;
    if (CARRY8(uVar17,uStack_418 * 0x1db42)) {
      lVar15 = lVar15 + 1;
    }
    uVar14 = uVar19 >> 0x33 | lVar15 << 0xd;
    uVar17 = uVar14 + uStack_410 * 0x1db42;
    if (CARRY8(uVar14,uStack_410 * 0x1db42)) {
      lVar13 = lVar13 + 1;
    }
    uVar14 = (uStack_430 * 0x1db42 & 0x7fffffffffffe) + (uVar17 >> 0x33 | lVar13 << 0xd) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uVar14 >> 0x33);
    func_0x006da2f4(&uStack_2d0,&uStack_3e0);
    lStack_408 = (uVar14 & 0x7ffffffffffff) + lStack_328;
    lStack_400 = (uVar9 & 0x7ffffffffffff) + lStack_320;
    lStack_3f8 = (uVar18 & 0x7ffffffffffff) + lStack_318 + (uVar9 >> 0x33);
    lStack_3f0 = (uVar19 & 0x7ffffffffffff) + lStack_310;
    lStack_3e8 = (uVar17 & 0x7ffffffffffff) + lStack_308;
    FUN_006da0f4(&uStack_300,&uStack_248,&uStack_2a0);
    FUN_006da0f4(&uStack_2a0,&uStack_430,&lStack_408);
    uVar1 = (uint)uVar22 - 1;
    uVar22 = (ulong)uVar1;
    uVar9 = uVar23;
  } while (-1 < (int)uVar1);
  func_0x006da568(&uStack_270,&uStack_2d0,uVar23);
  func_0x006da78c();
  FUN_006d746c(&uStack_2a0,&uStack_2a0);
  FUN_006da0f4(&uStack_270,&uStack_270,&uStack_2a0);
  uVar24 = uStack_438;
  FUN_006d7490(uStack_438,&uStack_270);
  iVar21 = 0x82d5c0;
  uVar11 = uVar24;
  func_0x006da83c(&UNK_0082d5c0,uVar24);
  bVar8 = iVar21 == 0;
  uVar9 = (ulong)!bVar8;
  func_0x006da5a8(uStack_1f8,uVar9);
  if (!bVar8) {
    ___stack_chk_fail();
    uStack_458 = uVar24;
    pcStack_448 = FUN_006d9f68;
    uStack_460 = uVar23;
    ppuStack_450 = &puStack_190;
    func_0x006da2f4(auStack_488);
    func_0x006da2f4(auStack_4b0,auStack_488);
    func_0x006da6b0(auStack_4b0);
    FUN_006da0f4(auStack_4b0,uVar11,auStack_4b0);
    func_0x006da6b8(auStack_488,auStack_488);
    func_0x006da2f4(auStack_4d8,auStack_488);
    FUN_006da0f4(auStack_4b0,auStack_4b0,auStack_4d8);
    func_0x006da6b0(auStack_4d8);
    iVar21 = 4;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4d8);
    iVar21 = 9;
    while( true ) {
      if (iVar21 == 0) break;
      func_0x006da2f4();
      iVar21 = iVar21 + -1;
    }
    func_0x006da6b8(auStack_4d8,auStack_4d8);
    func_0x006da844();
    iVar21 = 0x13;
    do {
      func_0x006da850();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar21 = 9;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4d8);
    iVar21 = 0x31;
    while( true ) {
      if (iVar21 == 0) break;
      func_0x006da2f4();
      iVar21 = iVar21 + -1;
    }
    func_0x006da6b8(auStack_4d8,auStack_4d8);
    func_0x006da844();
    iVar21 = 99;
    do {
      func_0x006da850();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar21 = 0x31;
    do {
      func_0x006da604();
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_4b0);
    iVar21 = 4;
    do {
      func_0x006da6b0(auStack_4b0);
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    FUN_006da0f4(uVar9,auStack_4b0,auStack_488);
    return;
  }
  return;
}



/* Entry: 006d9c24; end: 006d9f67;  */

void FUN_006d9c24(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  undefined1 extraout_w9;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_358 [40];
  undefined1 auStack_330 [40];
  undefined1 auStack_308 [40];
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d0 [40];
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  uStack_2b8 = param_1;
  func_0x006da5f4();
  uStack_98 = param_2[1];
  uStack_90 = param_2[2];
  uStack_a0 = *param_2 & 0xfffffffffffffff8;
  uStack_88._7_1_ = (undefined1)(param_2[3] >> 0x38);
  uVar7 = uStack_88._7_1_;
  uStack_88 = param_2[3];
  uStack_78 = extraout_x8;
  func_0x006da880(uVar7);
  uStack_88 = CONCAT17(extraout_w9,(undefined7)uStack_88);
  FUN_006d7698(&uStack_c8,param_3);
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_100 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  lStack_160 = 0;
  uStack_168 = 0;
  lStack_130 = lStack_a8;
  uStack_180 = 1;
  uVar20 = 0xfe;
  uStack_148 = uStack_c0;
  uStack_150 = uStack_c8;
  uStack_138 = uStack_b0;
  uStack_140 = uStack_b8;
  uVar9 = 0;
  do {
    uVar1 = *(byte *)((long)&uStack_a0 + (uVar20 >> 3)) >> (ulong)((uint)uVar20 & 7) & 1;
    uVar21 = (ulong)uVar1;
    func_0x006da568(&uStack_f0,&uStack_150,uVar1 ^ (uint)uVar9);
    func_0x006da78c();
    func_0x006d777c(&lStack_288,&uStack_150,&uStack_180);
    func_0x006d777c(&uStack_2b0,&uStack_f0,&uStack_120);
    uVar22 = uStack_f0;
    uVar23 = uStack_e8;
    uVar25 = uStack_e0;
    uVar27 = uStack_d8;
    func_0x006da88c(uStack_f0,uStack_e0,uStack_120,uStack_110);
    uVar10 = uStack_150;
    uVar24 = uStack_148;
    uVar26 = uStack_140;
    uVar28 = uStack_138;
    uStack_200 = uVar22;
    uStack_1f8 = uVar23;
    uStack_1f0 = uVar25;
    uStack_1e8 = uVar27;
    func_0x006da88c(uStack_150,uStack_140,uStack_180,uStack_170);
    lStack_1e0 = lStack_100 + lStack_d0;
    lStack_210 = lStack_160 + lStack_130;
    uStack_230 = uVar10;
    uStack_228 = uVar24;
    uStack_220 = uVar26;
    uStack_218 = uVar28;
    FUN_006da0f4(&uStack_180,&lStack_288,&uStack_200);
    FUN_006da0f4(&uStack_120,&uStack_230,&uStack_2b0);
    func_0x006da2f4(&lStack_1a8,&uStack_2b0);
    func_0x006da2f4(auStack_1d0,&uStack_200);
    uVar22 = uStack_180;
    uVar10 = uStack_178;
    uVar23 = uStack_170;
    uVar24 = uStack_168;
    func_0x006da88c(lStack_100 + lStack_160,uStack_180,uStack_170,uStack_120,uStack_110);
    uStack_260 = uVar22;
    uStack_258 = uVar10;
    uStack_250 = uVar23;
    uStack_248 = uVar24;
    func_0x006d777c(&uStack_230,&uStack_180,&uStack_120);
    FUN_006da0f4(&uStack_f0,auStack_1d0,&lStack_1a8);
    func_0x006d777c(&uStack_2b0,auStack_1d0,&lStack_1a8);
    func_0x006da2f4(&uStack_120,&uStack_230);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_290;
    lVar11 = SUB168(auVar2 * ZEXT816(0x1db42),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_298;
    lVar13 = SUB168(auVar3 * ZEXT816(0x1db42),8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_2a0;
    lVar14 = SUB168(auVar4 * ZEXT816(0x1db42),8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_2a8;
    lVar18 = SUB168(auVar5 * ZEXT816(0x1db42),8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_2b0;
    uVar16 = uStack_2b0 * 0x1db42 >> 0x33 | SUB168(auVar6 * ZEXT816(0x1db42),8) << 0xd;
    uVar9 = uVar16 + uStack_2a8 * 0x1db42;
    if (CARRY8(uVar16,uStack_2a8 * 0x1db42)) {
      lVar18 = lVar18 + 1;
    }
    uVar17 = uVar9 >> 0x33 | lVar18 << 0xd;
    uVar16 = uVar17 + uStack_2a0 * 0x1db42;
    if (CARRY8(uVar17,uStack_2a0 * 0x1db42)) {
      lVar14 = lVar14 + 1;
    }
    uVar15 = uVar16 >> 0x33 | lVar14 << 0xd;
    uVar17 = uVar15 + uStack_298 * 0x1db42;
    if (CARRY8(uVar15,uStack_298 * 0x1db42)) {
      lVar13 = lVar13 + 1;
    }
    uVar12 = uVar17 >> 0x33 | lVar13 << 0xd;
    uVar15 = uVar12 + uStack_290 * 0x1db42;
    if (CARRY8(uVar12,uStack_290 * 0x1db42)) {
      lVar11 = lVar11 + 1;
    }
    uVar12 = (uStack_2b0 * 0x1db42 & 0x7fffffffffffe) + (uVar15 >> 0x33 | lVar11 << 0xd) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uVar12 >> 0x33);
    func_0x006da2f4(&uStack_150,&uStack_260);
    lStack_288 = (uVar12 & 0x7ffffffffffff) + lStack_1a8;
    lStack_280 = (uVar9 & 0x7ffffffffffff) + lStack_1a0;
    lStack_278 = (uVar16 & 0x7ffffffffffff) + lStack_198 + (uVar9 >> 0x33);
    lStack_270 = (uVar17 & 0x7ffffffffffff) + lStack_190;
    lStack_268 = (uVar15 & 0x7ffffffffffff) + lStack_188;
    FUN_006da0f4(&uStack_180,&uStack_c8,&uStack_120);
    FUN_006da0f4(&uStack_120,&uStack_2b0,&lStack_288);
    uVar1 = (uint)uVar20 - 1;
    uVar20 = (ulong)uVar1;
    uVar9 = uVar21;
  } while (-1 < (int)uVar1);
  func_0x006da568(&uStack_f0,&uStack_150,uVar21);
  func_0x006da78c();
  FUN_006d746c(&uStack_120,&uStack_120);
  FUN_006da0f4(&uStack_f0,&uStack_f0,&uStack_120);
  uVar22 = uStack_2b8;
  FUN_006d7490(uStack_2b8,&uStack_f0);
  iVar19 = 0x82d5c0;
  uVar10 = uVar22;
  func_0x006da83c(&UNK_0082d5c0,uVar22);
  bVar8 = iVar19 == 0;
  uVar9 = (ulong)!bVar8;
  func_0x006da5a8(uStack_78,uVar9);
  if (!bVar8) {
    ___stack_chk_fail();
    uStack_2d8 = uVar22;
    pcStack_2c8 = FUN_006d9f68;
    uStack_2e0 = uVar21;
    puStack_2d0 = &stack0xfffffffffffffff0;
    func_0x006da2f4(auStack_308);
    func_0x006da2f4(auStack_330,auStack_308);
    func_0x006da6b0(auStack_330);
    FUN_006da0f4(auStack_330,uVar10,auStack_330);
    func_0x006da6b8(auStack_308,auStack_308);
    func_0x006da2f4(auStack_358,auStack_308);
    FUN_006da0f4(auStack_330,auStack_330,auStack_358);
    func_0x006da6b0(auStack_358);
    iVar19 = 4;
    do {
      func_0x006da604();
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_358);
    iVar19 = 9;
    while( true ) {
      if (iVar19 == 0) break;
      func_0x006da2f4();
      iVar19 = iVar19 + -1;
    }
    func_0x006da6b8(auStack_358,auStack_358);
    func_0x006da844();
    iVar19 = 0x13;
    do {
      func_0x006da850();
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar19 = 9;
    do {
      func_0x006da604();
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_358);
    iVar19 = 0x31;
    while( true ) {
      if (iVar19 == 0) break;
      func_0x006da2f4();
      iVar19 = iVar19 + -1;
    }
    func_0x006da6b8(auStack_358,auStack_358);
    func_0x006da844();
    iVar19 = 99;
    do {
      func_0x006da850();
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    func_0x006da79c();
    func_0x006da604();
    iVar19 = 0x31;
    do {
      func_0x006da604();
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    func_0x006da61c();
    func_0x006da6b0(auStack_330);
    iVar19 = 4;
    do {
      func_0x006da6b0(auStack_330);
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    FUN_006da0f4(uVar9,auStack_330,auStack_308);
    return;
  }
  return;
}



/* Entry: 006d9f68; end: 006da0f3;  */

void FUN_006d9f68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  func_0x006da2f4(auStack_48);
  func_0x006da2f4(auStack_70,auStack_48);
  func_0x006da6b0(auStack_70);
  func_0x006da0f4(auStack_70,param_2,auStack_70);
  func_0x006da6b8(auStack_48,auStack_48);
  func_0x006da2f4(auStack_98,auStack_48);
  func_0x006da0f4(auStack_70,auStack_70,auStack_98);
  func_0x006da6b0(auStack_98);
  iVar1 = 4;
  do {
    func_0x006da604();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da61c();
  func_0x006da6b0(auStack_98);
  iVar1 = 9;
  while( true ) {
    if (iVar1 == 0) break;
    func_0x006da2f4();
    iVar1 = iVar1 + -1;
  }
  func_0x006da6b8(auStack_98,auStack_98);
  func_0x006da844();
  iVar1 = 0x13;
  do {
    func_0x006da850();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da79c();
  func_0x006da604();
  iVar1 = 9;
  do {
    func_0x006da604();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da61c();
  func_0x006da6b0(auStack_98);
  iVar1 = 0x31;
  while( true ) {
    if (iVar1 == 0) break;
    func_0x006da2f4();
    iVar1 = iVar1 + -1;
  }
  func_0x006da6b8(auStack_98,auStack_98);
  func_0x006da844();
  iVar1 = 99;
  do {
    func_0x006da850();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da79c();
  func_0x006da604();
  iVar1 = 0x31;
  do {
    func_0x006da604();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da61c();
  func_0x006da6b0(auStack_70);
  iVar1 = 4;
  do {
    func_0x006da6b0(auStack_70);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x006da0f4(param_1,auStack_70,auStack_48);
  return;
}



/* Entry: 006da0f4; end: 006da45b;  */

void FUN_006da0f4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  long lVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  
  uVar5 = param_3[3];
  uVar9 = param_3[4];
  uVar73 = uVar9 * 0x13;
  uVar6 = param_2[3];
  uVar10 = param_2[4];
  uVar7 = param_3[1];
  uVar11 = param_3[2];
  uVar63 = uVar5 * 0x13;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar63;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar10;
  uVar66 = uVar11 * 0x13;
  uVar72 = *param_3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar7 * 0x13;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar10;
  uVar65 = uVar7 * 0x13 * uVar10;
  uVar74 = param_2[2];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar6;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar66;
  uVar1 = uVar6 * uVar66 + uVar65;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar74;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar63;
  uVar64 = uVar1 + uVar74 * uVar63;
  uVar8 = *param_2;
  uVar12 = param_2[1];
  uVar69 = uVar64 + uVar12 * uVar73;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar73;
  uVar70 = uVar69 + uVar8 * uVar72;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar72;
  uVar75 = uVar6 * uVar73 + uVar63 * uVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar6;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar73;
  uVar71 = uVar6 * uVar63 + uVar66 * uVar10;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar66;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar10;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar63;
  uVar2 = uVar71 + uVar74 * uVar73;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar74;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar73;
  uVar3 = uVar2 + uVar72 * uVar12;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar72;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar12;
  uVar4 = uVar3 + uVar8 * uVar7;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar7;
  lVar68 = SUB168(auVar21 * auVar46,8) + SUB168(auVar20 * auVar45,8) +
           (ulong)CARRY8(uVar6 * uVar63,uVar66 * uVar10) + SUB168(auVar22 * auVar47,8) +
           (ulong)CARRY8(uVar71,uVar74 * uVar73) + SUB168(auVar23 * auVar48,8) +
           (ulong)CARRY8(uVar2,uVar72 * uVar12) + SUB168(auVar24 * auVar49,8) +
           (ulong)CARRY8(uVar3,uVar8 * uVar7);
  uVar64 = uVar70 >> 0x33 |
           (SUB168(auVar15 * auVar40,8) + SUB168(auVar14 * auVar39,8) +
            (ulong)CARRY8(uVar6 * uVar66,uVar65) + SUB168(auVar16 * auVar41,8) +
            (ulong)CARRY8(uVar1,uVar74 * uVar63) + SUB168(auVar17 * auVar42,8) +
            (ulong)CARRY8(uVar64,uVar12 * uVar73) + SUB168(auVar18 * auVar43,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar72)) * 0x2000;
  uVar1 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar68 = lVar68 + 1;
  }
  uVar64 = uVar75 + uVar12 * uVar7;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar12;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar7;
  uVar69 = uVar64 + uVar72 * uVar74;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar72;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  uVar71 = uVar69 + uVar8 * uVar11;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar8;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar11;
  lVar67 = SUB168(auVar19 * auVar44,8) + SUB168(auVar13 * auVar38,8) +
           (ulong)CARRY8(uVar6 * uVar73,uVar63 * uVar10) + SUB168(auVar25 * auVar50,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar7) + SUB168(auVar26 * auVar51,8) +
           (ulong)CARRY8(uVar64,uVar72 * uVar74) + SUB168(auVar27 * auVar52,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar11);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar73;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar10;
  uVar69 = uVar1 >> 0x33 | lVar68 << 0xd;
  uVar64 = uVar71 + uVar69;
  if (CARRY8(uVar71,uVar69)) {
    lVar67 = lVar67 + 1;
  }
  uVar69 = uVar74 * uVar7 + uVar73 * uVar10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar74;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar7;
  uVar75 = uVar69 + uVar12 * uVar11;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar12;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar11;
  uVar71 = uVar75 + uVar72 * uVar6;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar72;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar6;
  uVar2 = uVar71 + uVar8 * uVar5;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar8;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar5;
  lVar68 = SUB168(auVar29 * auVar54,8) + SUB168(auVar28 * auVar53,8) +
           (ulong)CARRY8(uVar74 * uVar7,uVar73 * uVar10) + SUB168(auVar30 * auVar55,8) +
           (ulong)CARRY8(uVar69,uVar12 * uVar11) + SUB168(auVar31 * auVar56,8) +
           (ulong)CARRY8(uVar75,uVar72 * uVar6) + SUB168(auVar32 * auVar57,8) +
           (ulong)CARRY8(uVar71,uVar8 * uVar5);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar7;
  uVar75 = uVar64 >> 0x33 | lVar67 << 0xd;
  uVar69 = uVar2 + uVar75;
  if (CARRY8(uVar2,uVar75)) {
    lVar68 = lVar68 + 1;
  }
  uVar75 = uVar74 * uVar11 + uVar6 * uVar7;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar74;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar11;
  uVar71 = uVar75 + uVar12 * uVar5;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar12;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar5;
  uVar2 = uVar71 + uVar72 * uVar10;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar72;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar10;
  uVar3 = uVar2 + uVar8 * uVar9;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar8;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar9;
  lVar67 = SUB168(auVar34 * auVar59,8) + SUB168(auVar33 * auVar58,8) +
           (ulong)CARRY8(uVar74 * uVar11,uVar6 * uVar7) + SUB168(auVar35 * auVar60,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar5) + SUB168(auVar36 * auVar61,8) +
           (ulong)CARRY8(uVar71,uVar72 * uVar10) + SUB168(auVar37 * auVar62,8) +
           (ulong)CARRY8(uVar2,uVar8 * uVar9);
  uVar71 = uVar69 >> 0x33 | lVar68 << 0xd;
  uVar75 = uVar3 + uVar71;
  if (CARRY8(uVar3,uVar71)) {
    lVar67 = lVar67 + 1;
  }
  uVar70 = (uVar70 & 0x7ffffffffffff) + (uVar75 >> 0x33 | lVar67 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar70 >> 0x33);
  *param_1 = uVar70 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar64 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[3] = uVar69 & 0x7ffffffffffff;
  param_1[4] = uVar75 & 0x7ffffffffffff;
  return;
}



/* Entry: 006da45c; end: 006da6d3;  */

void FUN_006da45c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x28; lVar1 = lVar1 + 8) {
    *(ulong *)(param_1 + lVar1) =
         *(ulong *)(param_2 + lVar1) & -param_3 |
         *(ulong *)(param_1 + lVar1) & (-param_3 ^ 0xffffffffffffffffU);
  }
  return;
}



/* Entry: 006da6d4; end: 006da703;  */

void FUN_006da6d4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x006d7814(param_1,param_2 + 5,param_2);
  lVar1 = param_2[9];
  lVar2 = param_2[4];
  lVar3 = param_2[5];
  lVar5 = param_2[8];
  lVar4 = param_2[7];
  lVar6 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  *(long *)(param_1 + 0x30) = (param_2[6] - param_2[1]) + 0xffffffffffffe;
  *(long *)(param_1 + 0x28) = (lVar3 - lVar6) + 0xfffffffffffda;
  *(long *)(param_1 + 0x40) = (lVar5 - lVar8) + 0xffffffffffffe;
  *(long *)(param_1 + 0x38) = (lVar4 - lVar7) + 0xffffffffffffe;
  *(long *)(param_1 + 0x48) = (lVar1 - lVar2) + 0xffffffffffffe;
  return;
}



/* Entry: 006da704; end: 006daa4b;  */

void FUN_006da704(long param_1)

{
  ulong in_x10;
  
  *(ulong *)(param_1 + 0x20) = in_x10 & 0x7ffffffffffff;
  return;
}



/* Entry: 006daa4c; end: 006daab7;  */

void FUN_006daa4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  
  puVar1 = param_1;
  func_0x006dcdf4(*param_1);
  func_0x006dcde0();
  func_0x006dcdcc();
  func_0x006dce30();
  func_0x006dce1c();
  *puVar1 = extraout_w8;
  puVar1[1] = extraout_w9;
  FUN_006daab8();
  func_0x006dce88();
  func_0x006dce78();
  func_0x006dce1c(*param_1);
  func_0x006dce30();
  func_0x006dcdcc();
  func_0x006dcde0();
  func_0x006dcdf4();
  *param_1 = extraout_w8_00;
  param_1[1] = extraout_w9_00;
  return;
}



/* Entry: 006daab8; end: 006db8e3;  */

void FUN_006daab8(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *param_1 >> 0x1d | *param_1 << 3;
  uVar3 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar4 = param_2[0x1e] ^ uVar6;
    uVar1 = (param_2[0x1f] ^ uVar6) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (param_2[0x1f] ^ uVar6) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1c];
    uVar1 = (uVar3 ^ param_2[0x1d]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x1a];
    uVar1 = (uVar6 ^ param_2[0x1b]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x18];
    uVar1 = (uVar3 ^ param_2[0x19]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x16];
    uVar1 = (uVar6 ^ param_2[0x17]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x14];
    uVar1 = (uVar3 ^ param_2[0x15]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x12];
    uVar1 = (uVar6 ^ param_2[0x13]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x10];
    uVar1 = (uVar3 ^ param_2[0x11]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0xe];
    uVar1 = (uVar6 ^ param_2[0xf]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[0xc];
    uVar1 = (uVar3 ^ param_2[0xd]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[10];
    uVar1 = (uVar6 ^ param_2[0xb]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[8];
    uVar1 = (uVar3 ^ param_2[9]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[6];
    uVar1 = (uVar6 ^ param_2[7]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[4];
    uVar1 = (uVar3 ^ param_2[5]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[2];
    uVar1 = (uVar6 ^ param_2[3]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ *param_2;
    lVar5 = 4;
  }
  else {
    uVar4 = *param_2 ^ uVar6;
    uVar1 = (param_2[1] ^ uVar6) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (param_2[1] ^ uVar6) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[2];
    uVar1 = (uVar3 ^ param_2[3]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[4];
    uVar1 = (uVar6 ^ param_2[5]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[6];
    uVar1 = (uVar3 ^ param_2[7]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[8];
    uVar1 = (uVar6 ^ param_2[9]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[10];
    uVar1 = (uVar3 ^ param_2[0xb]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[0xc];
    uVar1 = (uVar6 ^ param_2[0xd]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[0xe];
    uVar1 = (uVar3 ^ param_2[0xf]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x10];
    uVar1 = (uVar6 ^ param_2[0x11]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x12];
    uVar1 = (uVar3 ^ param_2[0x13]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x14];
    uVar1 = (uVar6 ^ param_2[0x15]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x16];
    uVar1 = (uVar3 ^ param_2[0x17]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x18];
    uVar1 = (uVar6 ^ param_2[0x19]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1a];
    uVar1 = (uVar3 ^ param_2[0x1b]) >> 4;
    uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar3 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x1c];
    uVar1 = (uVar6 ^ param_2[0x1d]) >> 4;
    uVar3 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&UNK_00835adc + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_00835cdc + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_00835edc + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_008360dc + (ulong)((uVar1 | (uVar6 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1e];
    lVar5 = 0x7c;
  }
  uVar1 = *(uint *)((long)param_2 + lVar5) ^ uVar3;
  uVar2 = uVar1 >> 4;
  uVar6 = *(uint *)(&UNK_008359dc + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^ uVar6 ^
          *(uint *)(&UNK_00835bdc + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
          *(uint *)(&UNK_00835ddc + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&UNK_00835fdc + (ulong)(uVar4 >> 0x1a) * 4) ^
          *(uint *)(&UNK_00835adc + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
          *(uint *)(&UNK_00835cdc + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&UNK_00835edc + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&UNK_008360dc + (ulong)((uVar2 | uVar1 << 0x1c) >> 0x1a) * 4);
  *param_1 = uVar3 >> 3 | uVar3 << 0x1d;
  param_1[1] = uVar6 >> 3 | uVar6 << 0x1d;
  return;
}



/* Entry: 006db8e4; end: 006db953;  */

void FUN_006db8e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  
  puVar1 = param_1;
  func_0x006dcdf4(*param_1);
  func_0x006dcde0();
  func_0x006dcdcc();
  func_0x006dce30();
  func_0x006dce1c();
  *puVar1 = extraout_w8;
  puVar1[1] = extraout_w9;
  FUN_006daab8();
  func_0x006dce78();
  func_0x006dce88();
  func_0x006dce1c(*param_1);
  func_0x006dce30();
  func_0x006dcdcc();
  func_0x006dcde0();
  func_0x006dcdf4();
  *param_1 = extraout_w8_00;
  param_1[1] = extraout_w9_00;
  return;
}



/* Entry: 006db954; end: 006dc80b;  */

void FUN_006db954(uint *param_1,uint *param_2,int param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar7;
  uint extraout_w9;
  uint extraout_w9_00;
  uint uVar8;
  uint extraout_w10;
  uint extraout_w10_00;
  uint uVar9;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  uint uVar12;
  long extraout_x13;
  long extraout_x13_00;
  uint uVar13;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  long lVar14;
  ulong extraout_x15_00;
  ulong extraout_x16;
  ulong extraout_x16_00;
  
  uVar10 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar9 = uVar10 ^ *param_1;
  uVar8 = param_1[1] ^ uVar10 << 4;
  uVar10 = uVar8 & 0xffff ^ uVar9 >> 0x10;
  uVar8 = uVar10 ^ uVar8;
  uVar9 = uVar9 ^ uVar10 << 0x10;
  uVar10 = (uVar9 ^ uVar8 >> 2) & 0x33333333;
  uVar9 = uVar10 ^ uVar9;
  uVar8 = uVar8 ^ uVar10 << 2;
  uVar10 = (uVar8 ^ uVar9 >> 8) & 0xff00ff;
  uVar8 = uVar10 ^ uVar8;
  uVar9 = uVar9 ^ uVar10 << 8;
  uVar10 = (uVar9 ^ uVar8 >> 1) & 0x55555555;
  uVar9 = uVar10 ^ uVar9;
  uVar8 = uVar8 ^ uVar10 << 1;
  uVar10 = uVar9 >> 0x1d | uVar9 << 3;
  uVar9 = uVar8 >> 0x1d | uVar8 << 3;
  if (param_3 == 0) {
    func_0x006dceb4(0xf0f0f0f);
    lVar11 = extraout_x12_00 + 0x600;
    lVar14 = extraout_x12_00 + 0x100;
    lVar1 = extraout_x12_00 + 0x300;
    lVar2 = extraout_x12_00 + 0x500;
    lVar3 = extraout_x12_00 + 0x700;
    uVar9 = param_7 ^ param_8 ^
            *(uint *)(extraout_x14_00 + (extraout_x16_00 & 0xffffffff) * 4) ^
            *(uint *)(lVar11 + (extraout_x15_00 >> 0x1a & 0x3f) * 4) ^
            *(uint *)(lVar14 + (ulong)(param_4 >> 2 & 0x3f) * 4) ^
            *(uint *)(lVar1 + (ulong)(param_4 >> 10 & 0x3f) * 4) ^
            *(uint *)(lVar2 + (ulong)(param_4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar3 + (ulong)(param_4 >> 0x1a) * 4) ^ uVar9;
    uVar8 = uVar9 ^ param_2[0x1c];
    uVar7 = (uVar9 ^ param_2[0x1d]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x1a];
    uVar7 = (uVar10 ^ param_2[0x1b]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x18];
    uVar7 = (uVar9 ^ param_2[0x19]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x16];
    uVar7 = (uVar10 ^ param_2[0x17]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x14];
    uVar7 = (uVar9 ^ param_2[0x15]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x12];
    uVar7 = (uVar10 ^ param_2[0x13]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x10];
    uVar7 = (uVar9 ^ param_2[0x11]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0xe];
    uVar7 = (uVar10 ^ param_2[0xf]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0xc];
    uVar7 = (uVar9 ^ param_2[0xd]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[10];
    uVar7 = (uVar10 ^ param_2[0xb]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[8];
    uVar7 = (uVar9 ^ param_2[9]) >> 4;
    uVar10 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^ uVar10
    ;
    uVar8 = uVar10 ^ param_2[6];
    uVar7 = (uVar10 ^ param_2[7]) >> 4;
    uVar9 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^ uVar9;
    uVar8 = uVar9 ^ param_2[4];
    uVar7 = (uVar9 ^ param_2[5]) >> 4;
    uVar6 = *(uint *)(extraout_x12_00 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13_00 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14_00 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^ uVar10;
    uVar10 = uVar6 ^ param_2[2];
    uVar8 = (uVar6 ^ param_2[3]) >> 4;
    uVar12 = *(uint *)(extraout_x12_00 + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13_00 + (ulong)(uVar10 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14_00 + (ulong)(uVar10 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar10 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar8 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar8 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar8 | (uVar6 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^ uVar9;
    uVar13 = uVar12 ^ *param_2;
    lVar14 = 4;
    lVar11 = extraout_x12_00;
    uVar10 = extraout_w11_00;
    uVar9 = extraout_w10_00;
    uVar8 = extraout_w9_00;
    uVar7 = extraout_w8_00;
  }
  else {
    func_0x006dceb4(0xf0f0f0f);
    lVar11 = extraout_x12 + 0x600;
    lVar14 = extraout_x12 + 0x100;
    lVar1 = extraout_x12 + 0x300;
    lVar2 = extraout_x12 + 0x500;
    lVar3 = extraout_x12 + 0x700;
    uVar9 = param_7 ^ param_8 ^
            *(uint *)(extraout_x14 + (extraout_x16 & 0xffffffff) * 4) ^
            *(uint *)(lVar11 + (extraout_x15 >> 0x1a & 0x3f) * 4) ^
            *(uint *)(lVar14 + (ulong)(param_4 >> 2 & 0x3f) * 4) ^
            *(uint *)(lVar1 + (ulong)(param_4 >> 10 & 0x3f) * 4) ^
            *(uint *)(lVar2 + (ulong)(param_4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar3 + (ulong)(param_4 >> 0x1a) * 4) ^ uVar9;
    uVar8 = uVar9 ^ param_2[2];
    uVar7 = (uVar9 ^ param_2[3]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^ uVar10
    ;
    uVar8 = uVar10 ^ param_2[4];
    uVar7 = (uVar10 ^ param_2[5]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^ uVar9;
    uVar8 = uVar9 ^ param_2[6];
    uVar7 = (uVar9 ^ param_2[7]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^ uVar10
    ;
    uVar8 = uVar10 ^ param_2[8];
    uVar7 = (uVar10 ^ param_2[9]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^ uVar9;
    uVar8 = uVar9 ^ param_2[10];
    uVar7 = (uVar9 ^ param_2[0xb]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0xc];
    uVar7 = (uVar10 ^ param_2[0xd]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0xe];
    uVar7 = (uVar9 ^ param_2[0xf]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x10];
    uVar7 = (uVar10 ^ param_2[0x11]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x12];
    uVar7 = (uVar9 ^ param_2[0x13]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x14];
    uVar7 = (uVar10 ^ param_2[0x15]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x16];
    uVar7 = (uVar9 ^ param_2[0x17]) >> 4;
    uVar10 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^
             uVar10;
    uVar8 = uVar10 ^ param_2[0x18];
    uVar7 = (uVar10 ^ param_2[0x19]) >> 4;
    uVar9 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar10 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^
            uVar9;
    uVar8 = uVar9 ^ param_2[0x1a];
    uVar7 = (uVar9 ^ param_2[0x1b]) >> 4;
    uVar6 = *(uint *)(extraout_x12 + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(extraout_x13 + (ulong)(uVar8 >> 10 & 0x3f) * 4) ^
            *(uint *)(extraout_x14 + (ulong)(uVar8 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(lVar11 + (ulong)(uVar8 >> 0x1a) * 4) ^
            *(uint *)(lVar14 + (ulong)((uVar7 & 0xfc) >> 2) * 4) ^
            *(uint *)(lVar1 + (ulong)((uVar7 & 0xfc00) >> 10) * 4) ^
            *(uint *)(lVar2 + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(lVar3 + (ulong)((uVar7 | (uVar9 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^
            uVar10;
    uVar10 = uVar6 ^ param_2[0x1c];
    uVar8 = (uVar6 ^ param_2[0x1d]) >> 4;
    uVar12 = *(uint *)(extraout_x12 + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(extraout_x13 + (ulong)(uVar10 >> 10 & 0x3f) * 4) ^
             *(uint *)(extraout_x14 + (ulong)(uVar10 >> 0x12 & 0x3f) * 4) ^
             *(uint *)(lVar11 + (ulong)(uVar10 >> 0x1a) * 4) ^
             *(uint *)(lVar14 + (ulong)((uVar8 & 0xfc) >> 2) * 4) ^
             *(uint *)(lVar1 + (ulong)((uVar8 & 0xfc00) >> 10) * 4) ^
             *(uint *)(lVar2 + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4) ^
             *(uint *)(lVar3 + (ulong)((uVar8 | (uVar6 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^
             uVar9;
    uVar13 = uVar12 ^ param_2[0x1e];
    lVar14 = 0x7c;
    lVar11 = extraout_x12;
    uVar10 = extraout_w11;
    uVar9 = extraout_w10;
    uVar8 = extraout_w9;
    uVar7 = extraout_w8;
  }
  uVar4 = *(uint *)((long)param_2 + lVar14) ^ uVar12;
  uVar5 = uVar4 >> 4;
  uVar6 = *(uint *)(lVar11 + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^ uVar6 ^
          *(uint *)(lVar11 + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(lVar11 + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(lVar11 + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(lVar11 + (ulong)((uVar5 & 0xfc) >> 2) * 4 + 0x100) ^
          *(uint *)(lVar11 + (ulong)((uVar5 & 0xfc00) >> 10) * 4 + 0x300) ^
          *(uint *)(lVar11 + (ulong)((uVar5 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
          *(uint *)(lVar11 + (ulong)((uVar5 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700);
  uVar10 = ((uVar6 >> 3 | uVar6 << 0x1d) >> 1 ^ (uVar12 >> 3 | uVar12 << 0x1d)) & uVar10;
  uVar12 = uVar10 ^ (uVar12 >> 3 | uVar12 << 0x1d);
  uVar6 = uVar10 << 1 ^ (uVar6 >> 3 | uVar6 << 0x1d);
  uVar9 = (uVar6 ^ uVar12 >> 8) & uVar9;
  uVar6 = uVar9 ^ uVar6;
  uVar12 = uVar12 ^ uVar9 << 8;
  uVar8 = (uVar12 ^ uVar6 >> 2) & uVar8;
  uVar12 = uVar8 ^ uVar12;
  uVar6 = uVar6 ^ uVar8 << 2;
  uVar10 = uVar6 & 0xffff ^ uVar12 >> 0x10;
  uVar6 = uVar10 ^ uVar6;
  uVar12 = uVar12 ^ uVar10 << 0x10;
  uVar7 = (uVar12 ^ uVar6 >> 4) & uVar7;
  *param_1 = uVar7 ^ uVar12;
  param_1[1] = uVar6 ^ uVar7 << 4;
  return;
}



/* Entry: 006dc80c; end: 006dcdcb;  */

void FUN_006dc80c(uint *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6,uint *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined1 extraout_w8;
  undefined1 uVar11;
  undefined8 extraout_x8;
  byte *pbVar12;
  undefined8 extraout_x8_00;
  undefined1 uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uStack_70;
  uint uStack_6c;
  undefined1 uVar4;
  
  puVar7 = param_1;
  puVar15 = param_2;
  uVar8 = param_3;
  puVar9 = param_5;
  func_0x006dce54();
  uVar19 = (ulong)*puVar9;
  if (param_6 == 0) {
    lVar17 = (long)param_1 + 3;
    uVar14 = puVar9[1];
    while( true ) {
      uVar6 = param_3 - 8 == 0;
      uVar18 = (uint)uVar19;
      if (param_3 < 8) break;
      uVar1 = *(uint *)(lVar17 + -3);
      uVar19 = (ulong)uVar1;
      uVar2 = *(uint *)(lVar17 + 1);
      func_0x006dce98();
      uVar1 = uVar1 ^ uVar18;
      uVar14 = uVar2 ^ uVar14;
      *param_2 = (char)uVar1;
      param_2[1] = (char)(uVar1 >> 8);
      param_2[2] = (char)(uVar1 >> 0x10);
      param_2[3] = (char)(uVar1 >> 0x18);
      param_2[4] = (char)uVar14;
      param_2[5] = (char)(uVar14 >> 8);
      param_2[6] = (char)(uVar14 >> 0x10);
      param_2[7] = (char)(uVar14 >> 0x18);
      param_2 = param_2 + 8;
      lVar17 = lVar17 + 8;
      param_3 = param_3 - 8;
      uVar14 = uVar2;
    }
    if (param_3 != 0) {
      uVar1 = *(uint *)(lVar17 + -3);
      uVar2 = *(uint *)(lVar17 + 1);
      func_0x006dce98();
      uVar18 = uVar1 ^ uVar18;
      uVar14 = uVar2 ^ uVar14;
      param_2 = param_2 + param_3;
      switch(param_3) {
      case 7:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar14 >> 0x10);
      case 6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar14 >> 8);
      case 5:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar14;
      case 4:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar18 >> 0x18);
      case 3:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar18 >> 0x10);
      case 2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar18 >> 8);
      case 1:
        param_2[-1] = (char)uVar18;
        uVar18 = uVar1;
        uVar14 = uVar2;
      }
    }
    *(char *)param_5 = (char)uVar18;
    *(char *)((long)param_5 + 1) = (char)(uVar18 >> 8);
    *(char *)((long)param_5 + 2) = (char)(uVar18 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)(uVar18 >> 0x18);
    *(char *)(param_5 + 1) = (char)uVar14;
    *(char *)((long)param_5 + 5) = (char)(uVar14 >> 8);
    *(char *)((long)param_5 + 6) = (char)(uVar14 >> 0x10);
    *(char *)((long)param_5 + 7) = (char)(uVar14 >> 0x18);
  }
  else {
    param_2 = param_2 + 3;
    uVar14 = puVar9[1];
    while( true ) {
      uVar6 = param_3 - 8 == 0;
      if (param_3 < 8) break;
      func_0x006dce64(*param_1 ^ (uint)uVar19);
      uVar19 = (ulong)uStack_70;
      *(uint *)(param_2 + -3) = uStack_70;
      *(uint *)(param_2 + 1) = uStack_6c;
      param_2 = param_2 + 8;
      param_3 = param_3 - 8;
      param_1 = param_1 + 2;
      uVar14 = uStack_6c;
    }
    if (param_3 == 0) {
      uVar10 = (undefined1)(uVar19 >> 8);
      uVar13 = (undefined1)(uVar19 >> 0x10);
      uVar16 = (undefined1)(uVar19 >> 0x18);
      uStack_6c = uVar14;
    }
    else {
      pbVar12 = (byte *)((long)param_1 + param_3);
      uVar14 = 0;
      switch(param_3) {
      case 7:
        pbVar12 = pbVar12 + -1;
      case 6:
        pbVar12 = pbVar12 + -1;
      case 5:
        pbVar12 = pbVar12 + -1;
      case 4:
        pbVar12 = pbVar12 + -1;
        uVar14 = (uint)*pbVar12 << 0x18;
      case 3:
        pbVar12 = pbVar12 + -1;
        uVar14 = uVar14 | (uint)*pbVar12 << 0x10;
      case 2:
        pbVar12 = pbVar12 + -1;
        uVar14 = uVar14 | (uint)*pbVar12 << 8;
      case 1:
        func_0x006dce64((uVar14 | pbVar12[-1]) ^ (uint)uVar19);
        uVar19 = (ulong)uStack_70;
        uVar10 = (undefined1)(uStack_70 >> 8);
        uVar13 = (undefined1)(uStack_70 >> 0x10);
        uVar16 = (undefined1)(uStack_70 >> 0x18);
        *(uint *)(param_2 + -3) = uStack_70;
        *(uint *)(param_2 + 1) = uStack_6c;
      }
    }
    *(char *)param_5 = (char)uVar19;
    *(undefined1 *)((long)param_5 + 1) = uVar10;
    *(undefined1 *)((long)param_5 + 2) = uVar13;
    *(undefined1 *)((long)param_5 + 3) = uVar16;
    *(char *)(param_5 + 1) = (char)uStack_6c;
    *(char *)((long)param_5 + 5) = (char)(uStack_6c >> 8);
    *(char *)((long)param_5 + 6) = (char)(uStack_6c >> 0x10);
    *(char *)((long)param_5 + 7) = (char)(uStack_6c >> 0x18);
  }
  func_0x006dce08(extraout_x8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = param_7;
  func_0x006dce54();
  uVar14 = *puVar9;
  uVar18 = puVar9[1];
  if (param_8 == 0) {
    lVar17 = (long)puVar7 + 3;
    while( true ) {
      uVar6 = uVar8 - 8 == 0;
      if (uVar8 < 8) break;
      uVar1 = *(uint *)(lVar17 + -3);
      uVar2 = *(uint *)(lVar17 + 1);
      func_0x006dce44();
      FUN_006db8e4();
      uVar14 = uVar1 ^ uVar14;
      uVar18 = uVar2 ^ uVar18;
      *puVar15 = (char)uVar14;
      puVar15[1] = (char)(uVar14 >> 8);
      puVar15[2] = (char)(uVar14 >> 0x10);
      puVar15[3] = (char)(uVar14 >> 0x18);
      puVar15[4] = (char)uVar18;
      puVar15[5] = (char)(uVar18 >> 8);
      puVar15[6] = (char)(uVar18 >> 0x10);
      puVar15[7] = (char)(uVar18 >> 0x18);
      puVar15 = puVar15 + 8;
      lVar17 = lVar17 + 8;
      uVar8 = uVar8 - 8;
      uVar14 = uVar1;
      uVar18 = uVar2;
    }
    if (uVar8 != 0) {
      uVar1 = *(uint *)(lVar17 + -3);
      uVar2 = *(uint *)(lVar17 + 1);
      func_0x006dce44();
      FUN_006db8e4();
      uVar14 = uVar1 ^ uVar14;
      uVar18 = uVar2 ^ uVar18;
      puVar15 = puVar15 + uVar8;
      switch(uVar8) {
      case 7:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar18 >> 0x10);
      case 6:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar18 >> 8);
      case 5:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)uVar18;
      case 4:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar14 >> 0x18);
      case 3:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar14 >> 0x10);
      case 2:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar14 >> 8);
      case 1:
        puVar15[-1] = (char)uVar14;
        uVar14 = uVar1;
        uVar18 = uVar2;
      }
    }
    *(char *)param_7 = (char)uVar14;
    *(char *)((long)param_7 + 1) = (char)(uVar14 >> 8);
    *(char *)((long)param_7 + 2) = (char)(uVar14 >> 0x10);
    *(char *)((long)param_7 + 3) = (char)(uVar14 >> 0x18);
    *(char *)(param_7 + 1) = (char)uVar18;
    *(char *)((long)param_7 + 5) = (char)(uVar18 >> 8);
    *(char *)((long)param_7 + 6) = (char)(uVar18 >> 0x10);
    *(char *)((long)param_7 + 7) = (char)(uVar18 >> 0x18);
  }
  else {
    puVar15 = puVar15 + 3;
    while( true ) {
      uVar6 = uVar8 - 8 == 0;
      uVar10 = (undefined1)uVar18;
      uVar5 = (undefined1)(uVar14 >> 0x10);
      uVar13 = (undefined1)(uVar14 >> 0x18);
      uVar16 = (undefined1)(uVar18 >> 8);
      uVar3 = (undefined1)(uVar18 >> 0x10);
      uVar4 = (undefined1)(uVar18 >> 0x18);
      if (uVar8 < 8) break;
      func_0x006dce44();
      FUN_006daa4c();
      func_0x006dcee0();
      puVar15[-1] = uVar5;
      *puVar15 = uVar13;
      puVar15[1] = uVar10;
      puVar15[2] = uVar16;
      puVar15[3] = uVar3;
      puVar15[4] = uVar4;
      puVar15 = puVar15 + 8;
      uVar8 = uVar8 - 8;
    }
    switch(uVar8) {
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
      func_0x006dce44();
      FUN_006daa4c();
      func_0x006dcee0();
      puVar15[-1] = uVar5;
      *puVar15 = uVar13;
      puVar15[1] = uVar10;
      puVar15[2] = uVar16;
      puVar15[3] = uVar3;
      puVar15[4] = uVar4;
      uVar11 = extraout_w8;
      break;
    default:
      uVar11 = (undefined1)(uVar14 >> 8);
    }
    *(char *)param_7 = (char)uVar14;
    *(undefined1 *)((long)param_7 + 1) = uVar11;
    *(undefined1 *)((long)param_7 + 2) = uVar5;
    *(undefined1 *)((long)param_7 + 3) = uVar13;
    *(undefined1 *)(param_7 + 1) = uVar10;
    *(undefined1 *)((long)param_7 + 5) = uVar16;
    *(undefined1 *)((long)param_7 + 6) = uVar3;
    *(undefined1 *)((long)param_7 + 7) = uVar4;
  }
  func_0x006dce08(extraout_x8_00);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 006dcdcc; end: 006dcf2f;  */

void FUN_006dcdcc(void)

{
  return;
}



/* Entry: 006dcf30; end: 006dcf6f;  */

code * FUN_006dcf30(long param_1)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  int *piVar4;
  undefined8 uStack_20;
  ulong uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)&uStack_20;
    uStack_20 = *(undefined8 *)(param_1 + 0x18);
    uStack_18 = (ulong)(*(uint *)(param_1 + 0x14) &
                       ((int)*(uint *)(param_1 + 0x14) >> 0x1f ^ 0xffffffffU));
    FUN_006dcf70(&uStack_20);
    return UNRECOVERED_JUMPTABLE;
  }
  if (iVar1 != 0) {
    lVar3 = 0x13;
    piVar2 = (int *)&UNK_00a11a08;
    while (piVar4 = piVar2, lVar3 = lVar3 + -1, lVar3 != 0) {
      piVar2 = piVar4 + 8;
      if (*piVar4 == iVar1) {
        UNRECOVERED_JUMPTABLE = *(code **)(piVar4 + 2);
                    /* WARNING: Could not recover jumptable at 0x006dcf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return (code *)0x0;
}



/* Entry: 006dcf70; end: 006dcfef;  */

code * FUN_006dcf70(undefined8 *param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  int *piVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1[1];
  puVar4 = &UNK_008361dc;
  lVar6 = 7;
  do {
    if (uVar5 == (byte)puVar4[9]) {
      if (puVar4[9] == 0) {
LAB_006dcfdc:
        if (*(int *)(puVar4 + 0xc) != 0) {
          lVar6 = 0x13;
          piVar1 = (int *)&UNK_00a11a08;
          while (piVar3 = piVar1, lVar6 = lVar6 + -1, lVar6 != 0) {
            piVar1 = piVar3 + 8;
            if (*piVar3 == *(int *)(puVar4 + 0xc)) {
              UNRECOVERED_JUMPTABLE = *(code **)(piVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x006dcf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return UNRECOVERED_JUMPTABLE;
            }
          }
        }
        return (code *)0x0;
      }
      uVar2 = *param_1;
      _memcmp(uVar2,puVar4,uVar5);
      if ((int)uVar2 == 0) goto LAB_006dcfdc;
    }
    puVar4 = puVar4 + 0x10;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      return (code *)0x0;
    }
  } while( true );
}



/* Entry: 006dcff0; end: 006dd147;  */

long FUN_006dcff0(void)

{
  long lVar1;
  
  lVar1 = 0x120;
  FUN_00701e90();
  if (lVar1 == 0) {
    FUN_006de8e4(10,0,0x41,0,0);
  }
  else {
    _bzero(lVar1,0x120);
    *(undefined4 *)(lVar1 + 0x110) = 1;
    FUN_00706444(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x118) = 0;
  }
  return lVar1;
}



/* Entry: 006dd148; end: 006dd173;  */

long FUN_006dd148(ulong param_1)

{
  long lVar1;
  
  if (param_1 < 0x80) {
    lVar1 = 1;
  }
  else {
    lVar1 = 1;
    for (; param_1 != 0; param_1 = param_1 >> 8) {
      lVar1 = lVar1 + 1;
    }
  }
  return lVar1;
}



/* Entry: 006dd174; end: 006dd233;  */

undefined8 FUN_006dd174(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (((((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) &&
       (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) &&
      ((lVar2 = lVar3, FUN_006e3858(), (int)lVar2 == 0 &&
       (lVar2 = lVar4, FUN_006e3858(), (int)lVar2 == 0)))) && (FUN_006e3858(), (int)lVar5 == 0)) {
    FUN_006e3e84();
    iVar1 = (int)lVar4;
    if ((((iVar1 == 0xa0) || (iVar1 == 0x100)) || (iVar1 == 0xe0)) &&
       (FUN_006e3e84(), (uint)lVar3 < 0x2711)) {
      return 1;
    }
  }
  func_0x006dd4dc();
  func_0x006dd4a4();
  return 0;
}



/* Entry: 006dd234; end: 006dd273;  */

bool FUN_006dd234(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iStack_34;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  FUN_006e3c80();
  *param_2 = lVar2;
  if (lVar2 == 0) {
    return false;
  }
  FUN_006d4564(param_1,&lStack_30,2);
  if ((int)param_1 != 0) {
    plVar1 = &lStack_30;
    FUN_006d4770(plVar1,&iStack_34);
    if ((int)plVar1 != 0) {
      if (iStack_34 == 0) {
        FUN_006e405c(lStack_30,uStack_28,lVar2);
        return lStack_30 != 0;
      }
      func_0x006d2e10();
      goto LAB_006d2d2c;
    }
  }
  func_0x006d2e10();
LAB_006d2d2c:
  func_0x006d2e04();
  return false;
}



/* Entry: 006dd274; end: 006dd29b;  */

undefined8 FUN_006dd274(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [32];
  int iVar2;
  
  if (param_2 == 0) {
    func_0x006dd4a4(10,0,0x43);
    return 0;
  }
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar3 = param_1;
    FUN_006d39c0(param_1,auStack_40,2);
    if (((int)uVar3 != 0) &&
       ((uVar4 = param_2, FUN_006e3e84(), (uVar4 & 7) != 0 ||
        (FUN_006d3a70(auStack_40,0), iVar1 != 0)))) {
      uVar4 = param_2;
      FUN_006e3eb8(param_2);
      FUN_006d2e1c(auStack_40,uVar4 & 0xffffffff,param_2);
      if ((iVar2 != 0) && (FUN_006d3748(), (int)param_1 != 0)) {
        return 1;
      }
    }
    func_0x006d2e10();
  }
  else {
    func_0x006d2e10();
  }
  func_0x006d2e04();
  return 0;
}



/* Entry: 006dd29c; end: 006dd48b;  */

long FUN_006dd29c(long param_1)

{
  int iVar1;
  long lVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long lStack_28;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)auStack_30;
  iVar2 = (int)auStack_30;
  iVar3 = (int)auStack_30;
  lVar4 = param_1;
  FUN_006dcff0();
  if (lVar4 != 0) {
    func_0x006dd4d0(param_1,auStack_30);
    if (((((int)param_1 == 0) || (func_0x006dd4e8(), iVar1 == 0)) ||
        (FUN_006dd234(auStack_30,lVar4 + 0x10), iVar2 == 0)) ||
       ((FUN_006dd234(auStack_30,lVar4 + 0x18), iVar3 == 0 || (lStack_28 != 0)))) {
      func_0x006dd4dc();
      func_0x006dd4a4();
    }
    else {
      lVar5 = lVar4;
      FUN_006dd174();
      if ((int)lVar5 != 0) {
        return lVar4;
      }
    }
    func_0x006dd058(lVar4);
  }
  return 0;
}



/* Entry: 006dd48c; end: 006dd4ef;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006dd48c(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 10;
  FUN_006de604(10,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0xa00006a;
  }
  return;
}



/* Entry: 006dd4f0; end: 006dd763;  */

undefined1 * FUN_006dd4f0(undefined8 param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  long lVar7;
  byte *pbStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x006dde14(param_1,auStack_50);
  if ((int)param_1 == 0) {
LAB_006dd5a4:
    func_0x006dde20();
    func_0x006dde08();
    return (undefined1 *)0x0;
  }
  puVar2 = auStack_50;
  func_0x006d46c4(puVar2,&lStack_68);
  if (((int)puVar2 == 0) || (lStack_68 != 1)) goto LAB_006dd5a4;
  puVar2 = auStack_50;
  func_0x006dde34(puVar2,&lStack_60);
  if ((int)puVar2 == 0) goto LAB_006dd5a4;
  puVar2 = auStack_50;
  func_0x006d4604(puVar2,0xa0000000);
  if ((int)puVar2 == 0) {
    if (param_2 == (undefined1 *)0x0) {
      func_0x006dde20();
      func_0x006dde08();
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = (undefined1 *)0x0;
      puVar4 = param_2;
LAB_006dd5dc:
      FUN_006ec99c();
      param_2 = puVar2;
      if ((puVar2 != (undefined1 *)0x0) &&
         (puVar3 = puVar2, func_0x006ecaf8(puVar2,puVar4), (int)puVar3 != 0)) {
        lVar7 = lStack_60;
        FUN_006e405c(lStack_60,uStack_58,0);
        puVar3 = puVar4;
        FUN_006ebef0();
        *(undefined1 **)(puVar2 + 8) = puVar3;
        if ((lVar7 == 0) ||
           ((puVar3 == (undefined1 *)0x0 ||
            (puVar3 = puVar2, FUN_006ecbbc(puVar2,lVar7), (int)puVar3 == 0)))) goto LAB_006dd6d8;
        puVar3 = auStack_50;
        func_0x006d4604(puVar3,0xa0000001);
        if ((int)puVar3 == 0) {
          FUN_006ec820(puVar4,*(long *)(puVar2 + 8) + 8,*(long *)(puVar2 + 0x10) + 0x18);
          if ((int)puVar4 == 0) goto LAB_006dd6d8;
          *(uint *)(puVar2 + 0x18) = *(uint *)(puVar2 + 0x18) | 2;
LAB_006dd72c:
          if (lStack_48 == 0) {
            puVar4 = puVar2;
            func_0x006ecc98();
            if ((int)puVar4 != 0) {
              FUN_006e3cd0(lVar7);
              FUN_006eb8ec(puVar6);
              return puVar2;
            }
            goto LAB_006dd6d8;
          }
        }
        else {
          puVar3 = auStack_50;
          FUN_006d4564(puVar3,auStack_78,0xa0000001);
          if ((int)puVar3 != 0) {
            puVar3 = auStack_78;
            FUN_006d4564(puVar3,&pbStack_88,3);
            if (((int)puVar3 != 0) && (lStack_80 != 0)) {
              pbVar5 = pbStack_88 + 1;
              bVar1 = *pbStack_88;
              lStack_80 = lStack_80 + -1;
              pbStack_88 = pbVar5;
              if ((bVar1 == 0) &&
                 (((lStack_80 != 0 &&
                   (FUN_006edb34(puVar4,*(undefined8 *)(puVar2 + 8),pbVar5,lStack_80,0),
                   (int)puVar4 != 0)) && (lStack_70 == 0)))) {
                *(uint *)(puVar2 + 0x1c) = *pbStack_88 & 0xfe;
                goto LAB_006dd72c;
              }
            }
          }
        }
        func_0x006dde20();
        func_0x006dde08();
        goto LAB_006dd6d8;
      }
    }
  }
  else {
    puVar2 = auStack_50;
    FUN_006d4564(puVar2,auStack_78,0xa0000000);
    if ((int)puVar2 == 0) {
      puVar6 = (undefined1 *)0x0;
LAB_006dd6c8:
      func_0x006dde20();
      func_0x006dde08();
    }
    else {
      puVar6 = auStack_78;
      FUN_006dd764();
      if (puVar6 != (undefined1 *)0x0) {
        puVar2 = puVar6;
        puVar4 = puVar6;
        if (((param_2 == (undefined1 *)0x0) ||
            (puVar2 = param_2, FUN_006eadf0(param_2,puVar6,0), puVar4 = param_2, (int)puVar2 == 0))
           && (lStack_70 == 0)) goto LAB_006dd5dc;
        goto LAB_006dd6c8;
      }
    }
    param_2 = (undefined1 *)0x0;
  }
  lVar7 = 0;
  puVar2 = param_2;
LAB_006dd6d8:
  func_0x006eca8c(puVar2);
  FUN_006e3cd0(lVar7);
  FUN_006eb8ec(puVar6);
  return (undefined1 *)0x0;
}



/* Entry: 006dd764; end: 006ddc47;  */

void FUN_006dd764(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char **ppcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  undefined1 auStack_100 [16];
  char *pcStack_f0;
  ulong uStack_e8;
  char *pcStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  int iStack_94;
  char *pcStack_90;
  long lStack_88;
  char *pcStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  iVar1 = (int)auStack_100;
  lVar9 = param_1;
  FUN_006d4604(param_1,0x20000010);
  if ((int)lVar9 == 0) {
    FUN_006d4564(param_1,&uStack_40,6);
    if ((int)param_1 == 0) {
      func_0x006dde20();
    }
    else {
      FUN_006eb754();
      pbVar10 = (byte *)(param_1 + 0x10);
      lVar9 = 4;
      do {
        if ((uStack_38 == *pbVar10) &&
           (uVar6 = uStack_40, FUN_006ddd7c(uStack_40,*(undefined8 *)(pbVar10 + -8),uStack_38),
           (int)uVar6 == 0)) {
          FUN_006eb954(*(undefined4 *)(pbVar10 + -0x10));
          return;
        }
        pbVar10 = pbVar10 + 0x38;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      func_0x006dde20();
    }
    func_0x006dde08();
    return;
  }
  func_0x006dde14(param_1,&uStack_40);
  if ((int)param_1 != 0) {
    puVar3 = &uStack_40;
    func_0x006d46c4(puVar3,&lStack_a0);
    if (((int)puVar3 != 0) && (lStack_a0 == 1)) {
      puVar3 = &uStack_40;
      func_0x006dde14(puVar3,auStack_50,0x80);
      if ((int)puVar3 != 0) {
        puVar4 = auStack_50;
        FUN_006d4564(puVar4,&uStack_60,6);
        if ((((int)puVar4 != 0) && (lStack_58 == 7)) &&
           (_memcmp(uStack_60,&UNK_0083624c,7), (int)uStack_60 == 0)) {
          puVar4 = auStack_50;
          FUN_006d4564(puVar4,auStack_b0,2);
          if ((int)puVar4 != 0) {
            iVar2 = (int)auStack_b0;
            FUN_006d4744();
            if ((iVar2 != 0) && (lStack_48 == 0)) {
              puVar3 = &uStack_40;
              func_0x006dde14(puVar3,auStack_70,0x80);
              if ((int)puVar3 != 0) {
                puVar4 = auStack_70;
                func_0x006dde34(puVar4,auStack_c0);
                if ((int)puVar4 != 0) {
                  puVar4 = auStack_70;
                  func_0x006dde34(puVar4,auStack_d0);
                  if ((int)puVar4 != 0) {
                    puVar4 = auStack_70;
                    FUN_006d47bc(puVar4,0,0,3);
                    if (((int)puVar4 != 0) && (lStack_68 == 0)) {
                      puVar3 = &uStack_40;
                      func_0x006dde34(puVar3,&pcStack_80,0x80);
                      if ((int)puVar3 != 0) {
                        puVar3 = &uStack_40;
                        FUN_006d4564(puVar3,auStack_100,2);
                        if (((int)puVar3 != 0) && (FUN_006d4744(), iVar1 != 0)) {
                          puVar3 = &uStack_40;
                          FUN_006d47bc(puVar3,&pcStack_90,&iStack_94,2);
                          if (((((int)puVar3 != 0) && (uStack_38 == 0)) &&
                              ((iStack_94 == 0 || ((lStack_88 == 1 && (*pcStack_90 == '\x01'))))))
                             && ((lStack_78 != 0 &&
                                 ((*pcStack_80 == '\x04' &&
                                  (uVar7 = lStack_78 - 1, (uVar7 & 1) == 0)))))) {
                            uStack_e8 = uVar7 >> 1;
                            pcStack_f0 = pcStack_80 + 1 + (uVar7 >> 1);
                            pcStack_e0 = pcStack_80 + 1;
                            uStack_d8 = uStack_e8;
                            FUN_006eb754();
                            plVar8 = puVar3 + 5;
                            lVar9 = 4;
                            do {
                              uVar7 = (ulong)*(byte *)(plVar8 + -1);
                              puVar4 = auStack_b0;
                              func_0x006dde2c(puVar4,*plVar8);
                              if ((int)puVar4 != 0) {
                                puVar4 = auStack_c0;
                                func_0x006dde2c(puVar4,*plVar8 + uVar7);
                                if ((int)puVar4 != 0) {
                                  puVar4 = auStack_d0;
                                  func_0x006dde2c(puVar4,*plVar8 + uVar7 * 2);
                                  if ((int)puVar4 != 0) {
                                    ppcVar5 = &pcStack_e0;
                                    func_0x006dde2c(ppcVar5,*plVar8 + uVar7 * 3);
                                    if ((int)ppcVar5 != 0) {
                                      ppcVar5 = &pcStack_f0;
                                      func_0x006dde2c(ppcVar5,*plVar8 + uVar7 * 4);
                                      if (((int)ppcVar5 != 0) &&
                                         (iVar1 = (int)auStack_100,
                                         func_0x006dde2c(auStack_100,*plVar8 + uVar7 * 5),
                                         iVar1 != 0)) {
                                        FUN_006eb954((int)plVar8[-5]);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                              plVar8 = plVar8 + 7;
                              lVar9 = lVar9 + -1;
                            } while (lVar9 != 0);
                            func_0x006dde20();
                            goto LAB_006dd810;
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
  func_0x006dde20();
LAB_006dd810:
  func_0x006dde08();
  return;
}



/* Entry: 006ddc48; end: 006ddce7;  */

void FUN_006ddc48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  FUN_006ecd54(param_2,param_3,param_4,0,0,param_5);
  if ((lVar1 != 0) && (FUN_006d3bbc(param_1,&uStack_48,lVar1), (int)param_1 != 0)) {
    FUN_006ecd54(param_2,param_3,param_4,uStack_48,lVar1,param_5);
  }
  return;
}



/* Entry: 006ddce8; end: 006ddd7b;  */

void FUN_006ddce8(long param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uStack_40;
  ulong uStack_38;
  
  FUN_006d4564(param_1,&uStack_40,6);
  if ((int)param_1 == 0) {
    func_0x006dde20();
  }
  else {
    FUN_006eb754();
    pbVar2 = (byte *)(param_1 + 0x10);
    lVar3 = 4;
    do {
      if ((uStack_38 == *pbVar2) &&
         (uVar1 = uStack_40, FUN_006ddd7c(uStack_40,*(undefined8 *)(pbVar2 + -8),uStack_38),
         (int)uVar1 == 0)) {
        FUN_006eb954(*(undefined4 *)(pbVar2 + -0x10));
        return;
      }
      pbVar2 = pbVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x006dde20();
  }
  func_0x006dde08();
  return;
}



/* Entry: 006ddd7c; end: 006ddd8b;  */

undefined8 FUN_006ddd7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)();
    return param_1;
  }
  return 0;
}



/* Entry: 006ddd8c; end: 006dde07;  */

void FUN_006ddd8c(undefined8 *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcStack_20;
  long lStack_18;
  
  lStack_18 = param_1[1];
  pcVar2 = (char *)*param_1;
  pcVar1 = pcVar2 + lStack_18;
  for (; (pcStack_20 = pcVar1, lStack_18 != 0 && (pcStack_20 = pcVar2, *pcVar2 == '\0'));
      pcVar2 = pcVar2 + 1) {
    lStack_18 = lStack_18 + -1;
  }
  pcVar2 = param_2 + param_3;
  for (; (pcVar1 = pcVar2, param_3 != 0 && (pcVar1 = param_2, *param_2 == '\0'));
      param_2 = param_2 + 1) {
    param_3 = param_3 + -1;
  }
  FUN_006d41bc(&pcStack_20,pcVar1);
  return;
}



/* Entry: 006dde08; end: 006dde4b;  */

void FUN_006dde08(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006dde4c; end: 006ddfb7;  */

undefined1  [16]
FUN_006dde4c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4,
            code *param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 *puStack_188;
  undefined1 auStack_180 [216];
  undefined1 *puStack_a8;
  undefined1 auStack_9a [66];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar5 = param_4[2];
  puStack_a8 = param_2;
  if (lVar5 == 0) {
    FUN_006ddfb8();
    puVar3 = param_2;
  }
  else {
    uVar4 = *param_4;
    uVar1 = uVar4;
    FUN_006eadf0(uVar4,*param_3,0);
    if ((int)uVar1 == 0) {
      puVar3 = auStack_180;
      uVar1 = uVar4;
      FUN_006eaeb0(uVar4,puVar3,param_3 + 1,lVar5 + 0x18);
      if ((int)uVar1 != 0) {
        puVar3 = auStack_9a;
        FUN_006eaf0c(uVar4,puVar3,&puStack_188,0x42,auStack_180);
        if ((int)uVar4 != 0) {
          if (param_5 == (code *)0x0) {
            if (puStack_188 < param_2) {
              puStack_a8 = puStack_188;
              param_2 = puStack_188;
            }
            if (param_2 == (undefined1 *)0x0) goto LAB_006ddf38;
            puVar3 = auStack_9a;
            _memcpy(param_1,puVar3,param_2);
          }
          else {
            puVar2 = auStack_9a;
            (*param_5)(puVar2,puStack_188,param_1,&puStack_a8);
            puVar3 = puStack_188;
            param_2 = puStack_a8;
            if (puVar2 == (undefined1 *)0x0) {
              FUN_006ddfb8();
              puVar3 = puStack_188;
              goto LAB_006ddf28;
            }
          }
          puStack_188 = puVar3;
          if ((ulong)param_2 >> 0x1f == 0) goto LAB_006ddf38;
          FUN_006ddfb8();
          goto LAB_006ddf28;
        }
      }
      FUN_006ddfb8();
    }
    else {
      puVar3 = (undefined1 *)0x0;
    }
  }
LAB_006ddf28:
  FUN_006de8e4();
  param_2 = (undefined1 *)0xffffffff;
  puStack_188 = puVar3;
LAB_006ddf38:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    return ZEXT816(0x1b);
  }
  auVar6._8_8_ = puStack_188;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Entry: 006ddfb8; end: 006ddfc3;  */

undefined1  [16] FUN_006ddfb8(void)

{
  return ZEXT816(0x1b);
}



/* Entry: 006ddfc4; end: 006de0c3;  */

long FUN_006ddfc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,long param_6)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_6 + 0x28) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x28) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006de018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  FUN_006eb500(param_2,param_3,param_6);
  if (param_2 != 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_006de0c4(param_6);
    puVar1 = &uStack_50;
    FUN_006d3654(puVar1,param_4,param_6);
    if ((int)puVar1 != 0) {
      puVar1 = &uStack_50;
      FUN_006de110(puVar1,param_2);
      if ((int)puVar1 != 0) {
        puVar1 = &uStack_50;
        FUN_006d36d4(puVar1,0,auStack_58);
        if ((int)puVar1 != 0) {
          lVar2 = 1;
          goto LAB_006de0a0;
        }
      }
    }
    func_0x006de44c();
    func_0x006de440();
    func_0x006d3688(&uStack_50);
  }
  auStack_58[0] = 0;
  lVar2 = 0;
LAB_006de0a0:
  *param_5 = auStack_58[0];
  func_0x006eb0e8(param_2);
  return lVar2;
}



/* Entry: 006de0c4; end: 006de10f;  */

long FUN_006de0c4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((param_1[5] == 0) || (pcVar5 = *(code **)(param_1[5] + 0x20), pcVar5 == (code *)0x0)) {
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = *param_1 + 0x10;
    FUN_006e3eb8();
    param_1 = (long *)(uVar2 & 0xffffffff);
  }
  else {
    (*pcVar5)();
  }
  lVar4 = (long)param_1 + 1;
  FUN_006de414();
  lVar3 = 0;
  plVar1 = (long *)((long)param_1 + lVar4 + 2);
  if ((param_1 <= plVar1) && (-1 < (long)plVar1)) {
    lVar4 = (long)plVar1 * 2;
    FUN_006de414();
    lVar4 = lVar4 + (long)plVar1 * 2;
    lVar3 = 0;
    if ((ulong)((long)plVar1 * 2) <= lVar4 + 1U) {
      lVar3 = lVar4 + 1;
    }
  }
  return lVar3;
}



/* Entry: 006de110; end: 006de18f;  */

undefined8 FUN_006de110(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  uVar3 = param_1;
  FUN_006d39c0(param_1,auStack_40,0x20000010);
  if (((((int)uVar3 == 0) || (func_0x006d2d54(auStack_40,*param_2), iVar1 == 0)) ||
      (func_0x006d2d54(auStack_40,param_2[1]), iVar2 == 0)) || (FUN_006d3748(), (int)param_1 == 0))
  {
    func_0x006de44c();
    func_0x006de440();
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 006de190; end: 006de25f;  */

undefined8
FUN_006de190(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  lVar1 = param_4;
  FUN_006de260(param_4,param_5);
  if (lVar1 != 0) {
    puVar2 = &uStack_48;
    FUN_006de2ac(puVar2,&lStack_50,lVar1);
    if ((((int)puVar2 != 0) && (lStack_50 == param_5)) &&
       ((param_5 == 0 || (_memcmp(param_4,uStack_48,param_5), (int)param_4 == 0)))) {
      FUN_006eb114(param_2,param_3,lVar1,param_6);
      goto LAB_006de21c;
    }
    func_0x006de44c();
    func_0x006de440();
  }
  param_2 = 0;
LAB_006de21c:
  func_0x00701ed0(uStack_48);
  func_0x006de458();
  return param_2;
}



/* Entry: 006de260; end: 006de2ab;  */

undefined1 * FUN_006de260(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  lStack_28 = param_2;
  func_0x006de394();
  if ((puVar1 == (undefined8 *)0x0) || (lStack_28 != 0)) {
    func_0x006de44c();
    func_0x006de440();
    func_0x006de458();
    puVar1 = (undefined8 *)0x0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 006de2ac; end: 006de33b;  */

undefined8 FUN_006de2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&uStack_50;
  iVar2 = (int)&uStack_50;
  iVar3 = (int)&uStack_50;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_006d35b0(&uStack_50,0);
  if (((iVar1 == 0) || (FUN_006de110(&uStack_50,param_3), iVar2 == 0)) ||
     (FUN_006d36d4(&uStack_50,param_1,param_2), iVar3 == 0)) {
    func_0x006de44c();
    func_0x006de440();
    func_0x006d3688(&uStack_50);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 006de33c; end: 006de413;  */

long FUN_006de33c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 1;
  FUN_006de414();
  lVar2 = 0;
  uVar1 = param_1 + lVar3 + 2;
  if ((param_1 <= uVar1) && (-1 < (long)uVar1)) {
    lVar3 = uVar1 * 2;
    FUN_006de414();
    lVar3 = lVar3 + uVar1 * 2;
    lVar2 = 0;
    if (uVar1 * 2 <= lVar3 + 1U) {
      lVar2 = lVar3 + 1;
    }
  }
  return lVar2;
}



/* Entry: 006de414; end: 006de477;  */

long FUN_006de414(ulong param_1)

{
  long lVar1;
  
  if (param_1 < 0x80) {
    lVar1 = 1;
  }
  else {
    lVar1 = 1;
    for (; param_1 != 0; param_1 = param_1 >> 8) {
      lVar1 = lVar1 + 1;
    }
  }
  return lVar1;
}



/* Entry: 006de478; end: 006de597;  */

undefined4
FUN_006de478(long param_1,int param_2,undefined8 *param_3,uint *param_4,long *param_5,
            undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  lVar3 = param_1;
  FUN_006de604();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(uint *)(lVar3 + 0x184) == *(uint *)(lVar3 + 0x180)) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x184) + 1 & 0xf;
  if (param_2 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x180);
  }
  puVar6 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
  uVar2 = *(undefined4 *)(puVar6 + 2);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != (uint *)0x0)) {
    puVar4 = (undefined *)*puVar6;
    if (puVar4 == (undefined *)0x0) {
      uVar5 = 0;
      puVar4 = &UNK_00916488;
    }
    else {
      uVar5 = (uint)*(ushort *)((long)puVar6 + 0x14);
    }
    *param_3 = puVar4;
    *param_4 = uVar5;
  }
  if (param_5 != (long *)0x0) {
    if (puVar6[1] != 0) {
      *param_5 = puVar6[1];
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      if ((int)param_1 == 0) {
        return uVar2;
      }
      if (puVar6[1] != 0) {
        func_0x006dedc0();
        *(undefined8 *)(lVar3 + 0x188) = puVar6[1];
      }
      puVar6[1] = 0;
      goto LAB_006de56c;
    }
    *param_5 = (long)&UNK_00916487;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
  }
  if ((int)param_1 == 0) {
    return uVar2;
  }
LAB_006de56c:
  func_0x006de65c(puVar6);
  *(uint *)(lVar3 + 0x184) = uVar1;
  return uVar2;
}



/* Entry: 006de598; end: 006de5af;  */

/* WARNING: Removing unreachable block (ram,0x006de4f4) */
/* WARNING: Removing unreachable block (ram,0x006de504) */
/* WARNING: Removing unreachable block (ram,0x006de4fc) */
/* WARNING: Removing unreachable block (ram,0x006de510) */
/* WARNING: Removing unreachable block (ram,0x006de4dc) */
/* WARNING: Removing unreachable block (ram,0x006de4f0) */
/* WARNING: Removing unreachable block (ram,0x006de51c) */
/* WARNING: Removing unreachable block (ram,0x006de554) */
/* WARNING: Removing unreachable block (ram,0x006de524) */
/* WARNING: Removing unreachable block (ram,0x006de52c) */
/* WARNING: Removing unreachable block (ram,0x006de534) */
/* WARNING: Removing unreachable block (ram,0x006de538) */
/* WARNING: Removing unreachable block (ram,0x006de540) */
/* WARNING: Removing unreachable block (ram,0x006de54c) */
/* WARNING: Removing unreachable block (ram,0x006de56c) */
/* WARNING: Removing unreachable block (ram,0x006de564) */

undefined4 FUN_006de598(void)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0;
  FUN_006de604();
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x184) == *(int *)(lVar1 + 0x180))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + (ulong)(*(int *)(lVar1 + 0x184) + 1U & 0xf) * 0x18 + 0x10);
  }
  return uVar2;
}



/* Entry: 006de5b0; end: 006de603;  */

void FUN_006de5b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_006de604();
  if (param_1 != 0) {
    lVar2 = 0x10;
    lVar1 = param_1;
    do {
      func_0x006de65c(lVar1);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    func_0x006dedc0();
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}



/* Entry: 006de604; end: 006de683;  */

void FUN_006de604(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00706560();
  if (lVar1 == 0) {
    lVar1 = 400;
    FUN_00701e90();
    if (lVar1 != 0) {
      _bzero();
      FUN_007065dc(0,lVar1,FUN_006ded30);
    }
  }
  return;
}



/* Entry: 006de684; end: 006de76f;  */

void FUN_006de684(undefined4 *param_1)

{
  ___error();
  *param_1 = 0;
  return;
}



/* Entry: 006de770; end: 006de8d7;  */

ulong FUN_006de770(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if (param_3 == 0) {
    param_2 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    if (((uint)(param_1 >> 0x19) & 0x7f) < 0x11) {
      puVar6 = (&PTR_DAT_00a11c48)[param_1 >> 0x18 & 0xff];
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    func_0x006de69c();
    if (puVar6 == (undefined *)0x0) {
      FUN_00702090(auStack_88,0x40,&UNK_00916452);
    }
    if (param_1 == 0) {
      FUN_00702090(auStack_c8,0x40,&UNK_0091645a);
    }
    puVar4 = &UNK_00916465;
    FUN_00702090(param_2,param_3);
    param_1 = param_2;
    _strlen();
    bVar2 = param_1 == param_3 - 1;
    in_ZR = 4 < param_3 && bVar2;
    puVar6 = puVar4;
    if (4 < param_3 && bVar2) {
      uVar3 = param_2;
      puVar5 = (undefined *)0x4;
      uVar1 = (param_2 + param_1) - 4;
      do {
        param_1 = uVar1;
        puVar6 = puVar5;
        _strchr(uVar3,0x3a);
        if ((uVar3 == 0) || (in_ZR = uVar3 == param_1, param_1 < uVar3)) {
          FUN_006de8d8(param_1,0x3a);
          break;
        }
        uVar3 = uVar3 + 1;
        puVar5 = puVar6 + -1;
        uVar1 = param_1 + 1;
        param_1 = uVar3;
        puVar6 = puVar4;
      } while (puVar5 != (undefined *)0x0);
    }
  }
  func_0x006dedc8(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)();
    return param_1;
  }
  return param_1;
}



/* Entry: 006de8d8; end: 006de8e3;  */

void FUN_006de8d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)();
    return;
  }
  return;
}



/* Entry: 006de8e4; end: 006de97b;  */

void FUN_006de8e4(uint *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined2 param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    *(undefined8 *)puVar3 = param_4;
    *(undefined2 *)(puVar3 + 5) = param_5;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006de97c; end: 006dea67;  */

void FUN_006de97c(int param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = 0x51;
  FUN_00701e90();
  if (lVar3 != 0) {
    uVar7 = 0x50;
    uVar1 = 0;
    plVar2 = (long *)register0x00000008;
    for (; param_1 != 0; param_1 = param_1 + -1) {
      lVar6 = *plVar2;
      uVar8 = uVar1;
      if (lVar6 != 0) {
        lVar4 = lVar6;
        _strlen();
        uVar8 = lVar4 + uVar1;
        lVar5 = lVar3;
        if (uVar7 < uVar8) {
          if ((0xffffffffffffffea < uVar7) || (FUN_00701f14(lVar3,uVar8 + 0x15), lVar5 == 0)) {
            func_0x00701ed0(lVar3);
            return;
          }
          uVar7 = uVar8 + 0x14;
        }
        lVar3 = lVar5;
        if (lVar4 != 0) {
          _memcpy(lVar5 + uVar1,lVar6,lVar4);
        }
      }
      uVar1 = uVar8;
      plVar2 = plVar2 + 1;
    }
    *(undefined1 *)(lVar3 + uVar1) = 0;
    func_0x006deac0(lVar3);
  }
  return;
}



/* Entry: 006dea68; end: 006deb13;  */

void FUN_006dea68(void)

{
  long lVar1;
  
  lVar1 = 0x101;
  FUN_00701e90();
  if (lVar1 != 0) {
    FUN_007020b8();
    *(undefined1 *)(lVar1 + 0x100) = 0;
    func_0x006deac0(lVar1);
  }
  return;
}



/* Entry: 006deb14; end: 006deb6f;  */

/* WARNING: Possible PIC construction at 0x006deb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006deb58) */

void FUN_006deb14(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar3 = 0;
  uVar4 = 0;
  while( true ) {
    lVar1 = *param_1;
    if ((ulong)param_1[1] <= uVar4) break;
    func_0x006de65c(lVar1 + lVar3);
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 0x18;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    FUN_00701f08(plVar2,*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar2);
    return;
  }
  return;
}



/* Entry: 006deb70; end: 006dec57;  */

dword * FUN_006deb70(long param_1)

{
  uint uVar1;
  uint uVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_006de604();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x184))) {
    pdVar3 = &MACH_HEADER.ncmds;
    FUN_00701e90();
    if (pdVar3 == (dword *)0x0) {
      return (dword *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x180);
    uVar1 = uVar2 + 0x10;
    if (*(uint *)(param_1 + 0x184) <= uVar2) {
      uVar1 = uVar2;
    }
    uVar5 = (ulong)(uVar1 - *(uint *)(param_1 + 0x184));
    lVar4 = uVar5 * 0x18;
    FUN_00701e90();
    *(long *)pdVar3 = lVar4;
    if (lVar4 != 0) {
      FUN_006de8d8();
      *(ulong *)(pdVar3 + 2) = uVar5;
      for (lVar6 = 1; lVar6 - uVar5 != 1; lVar6 = lVar6 + 1) {
        FUN_006dec58(lVar4,param_1 + ((ulong)(uint)((int)lVar6 + *(int *)(param_1 + 0x184)) & 0xf) *
                                     0x18);
        lVar4 = lVar4 + 0x18;
      }
      return pdVar3;
    }
    func_0x00701ed0(pdVar3);
  }
  return (dword *)0x0;
}



/* Entry: 006dec58; end: 006dec9b;  */

void FUN_006dec58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x006de65c();
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 != 0) {
    FUN_00701fd0();
    param_1[1] = lVar1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  return;
}



/* Entry: 006dec9c; end: 006ded2f;  */

void FUN_006dec9c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    plVar1 = param_1;
    FUN_006de604();
    if (plVar1 != (long *)0x0) {
      lVar3 = 0;
      plVar2 = plVar1;
      for (uVar4 = 0; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
        FUN_006dec58(plVar2,*param_1 + lVar3);
        plVar2 = plVar2 + 3;
        lVar3 = lVar3 + 0x18;
      }
      *(int *)(plVar1 + 0x30) = (int)param_1[1] + -1;
      *(undefined4 *)((long)plVar1 + 0x184) = 0xf;
    }
    return;
  }
  FUN_006de604();
  if (param_1 != (long *)0x0) {
    lVar3 = 0x10;
    plVar1 = param_1;
    do {
      func_0x006de65c(plVar1);
      plVar1 = plVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x006dedc0();
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  return;
}



/* Entry: 006ded30; end: 006ded77;  */

void FUN_006ded30(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  for (lVar2 = 0; lVar2 != 0x180; lVar2 = lVar2 + 0x18) {
    func_0x006de65c(param_1 + lVar2);
  }
  func_0x006dedc0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 006ded78; end: 006dede3;  */

uint FUN_006ded78(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 >> 0xf < *param_1 >> 0xf);
  if (*param_1 >> 0xf < *param_2 >> 0xf) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 006dede4; end: 006deedb;  */

void FUN_006dede4(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x006dfa24(param_5,param_4);
    *(long *)(param_1 + 0x10) = param_5;
    lVar3 = param_5;
    if (param_5 == 0) {
      return;
    }
  }
  iVar1 = (int)lVar3;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00a11d80;
  if (param_6 == 0) {
    func_0x006dfcd0();
  }
  else {
    func_0x006dfd60();
  }
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_006df544(uVar2,param_3);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  lVar3 = 0x28;
  if (param_6 != 0) {
    lVar3 = 0x38;
  }
  if (*(long *)(**(long **)(param_1 + 0x10) + lVar3) != 0) {
    if (param_3 == 0) {
      FUN_006de8e4(6,0,0x77,0,0);
      return;
    }
    lVar3 = param_1;
    FUN_006ea94c(param_1,param_3,param_4);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



/* Entry: 006deedc; end: 006deee3;  */

/* WARNING: Removing unreachable block (ram,0x006dee44) */

void FUN_006deedc(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x006dfa24(param_5,param_4);
    *(long *)(param_1 + 0x10) = param_5;
    lVar3 = param_5;
    if (param_5 == 0) {
      return;
    }
  }
  iVar1 = (int)lVar3;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00a11d80;
  func_0x006dfd60();
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_006df544(uVar2,param_3);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  if (*(long *)(**(long **)(param_1 + 0x10) + 0x38) != 0) {
    if (param_3 == 0) {
      FUN_006de8e4(6,0,0x77,0,0);
      return;
    }
    lVar3 = param_1;
    FUN_006ea94c(param_1,param_3,param_4);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



/* Entry: 006deee4; end: 006def4b;  */

bool FUN_006deee4(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(**(long **)(param_1 + 0x10) + 0x28) == 0;
  if (bVar1) {
    func_0x006df18c();
  }
  else {
    func_0x006df20c();
  }
  return !bVar1;
}



/* Entry: 006def4c; end: 006df18b;  */

/* WARNING: Possible PIC construction at 0x006defa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006defa8) */

long * FUN_006def4c(long *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                   ulong param_5)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 unaff_x19;
  long *plVar8;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined1 *puVar9;
  undefined8 unaff_x30;
  undefined8 uVar10;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar3 = param_1;
    func_0x006df230();
    plVar3 = (long *)plVar3[2];
    if (*(long *)(*plVar3 + 0x28) == 0) {
      func_0x006df18c();
      puVar4 = param_2;
LAB_006defcc:
      func_0x006df1a4();
      uVar6 = param_3;
      puVar5 = param_4;
      uVar7 = param_5;
      param_3 = 0;
      param_2 = unaff_x20;
      if ((bool)in_ZR) {
        return (long *)0x0;
      }
    }
    else {
      puVar4 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        func_0x006df1bc();
        iVar2 = (int)plVar3;
        if ((iVar2 != 0) && (func_0x006df1ec(), iVar2 != 0)) {
          plVar3 = (long *)param_1[2];
          func_0x006df1d0();
          uVar10 = 0x6defa8;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
          goto SUB_006dfd10;
        }
        plVar3 = (long *)((long)register0x00000008 + -0xa0);
        FUN_006ea7fc();
        unaff_x20 = param_2;
        goto LAB_006defcc;
      }
      uVar7 = (ulong)*(uint *)(*param_1 + 4);
      uVar6 = param_3;
      func_0x006df1a4();
      puVar5 = param_4;
      if ((bool)in_ZR) {
        puVar9 = *(undefined1 **)((long)register0x00000008 + -0x10);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
SUB_006dfd10:
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
        if (((plVar3 == (long *)0x0) || (*plVar3 == 0)) ||
           (UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x28),
           UNRECOVERED_JUMPTABLE_00 == (code *)0x0)) {
          func_0x006dfdfc();
        }
        else {
          if ((int)plVar3[4] == 8) {
                    /* WARNING: Could not recover jumptable at 0x006dfd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return plVar3;
          }
          func_0x006dfe0c();
        }
        func_0x006dfdf0();
        return (long *)0x0;
      }
    }
    in_ZR = 0;
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0xd8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = param_2;
    *(ulong *)((long)register0x00000008 + -200) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x6df014;
    func_0x006df230();
    if (*(long *)(*(long *)plVar3[2] + 0x38) == 0) {
      func_0x006df18c();
      plVar8 = (long *)0x0;
    }
    else {
      func_0x006df1fc();
      iVar2 = (int)plVar3;
      func_0x006df1bc();
      if ((iVar2 == 0) || (func_0x006df1ec(), iVar2 == 0)) {
        plVar8 = (long *)0x0;
      }
      else {
        iVar2 = (int)param_1[2];
        uVar7 = (ulong)*(uint *)((long)register0x00000008 + -0x154);
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x128);
        func_0x006df1d0();
        func_0x006dfda0();
        in_ZR = iVar2 == 0;
        plVar8 = (long *)(ulong)!(bool)in_ZR;
      }
      plVar3 = (long *)((long)register0x00000008 + -0x150);
      FUN_006ea7fc();
    }
    func_0x006df1a4();
    if ((bool)in_ZR) {
      return plVar8;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -400) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x188) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x180) = param_2;
    *(long **)((long)register0x00000008 + -0x178) = plVar8;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0x168) = 0x6df0a0;
    func_0x006df1fc();
    plVar3 = (long *)plVar3[2];
    if (*(long *)(*plVar3 + 0x28) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x30);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        func_0x006df18c();
        return (long *)0x0;
      }
      func_0x006df1d0();
                    /* WARNING: Could not recover jumptable at 0x006df22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return plVar3;
    }
    bVar1 = param_2 != (undefined1 *)0x0;
    param_2 = puVar4;
    param_3 = uVar6;
    param_4 = puVar5;
    param_5 = uVar7;
    if ((bVar1) &&
       (plVar3 = param_1, FUN_006deee4(), param_2 = puVar5, param_3 = uVar7, (int)plVar3 == 0)) {
      return (long *)0x0;
    }
    func_0x006df1d0();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x170);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x168);
    unaff_x20 = *(undefined1 **)((long)register0x00000008 + -0x180);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x178);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -400);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x188);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
  } while( true );
}



/* Entry: 006df18c; end: 006df243;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006df18c(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 6;
  FUN_006de604(6,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0x600007d;
  }
  return;
}



/* Entry: 006df244; end: 006df30b;  */

dword * FUN_006df244(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    func_0x006df580();
    func_0x006df55c();
  }
  else {
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)pdVar1 = 1;
  }
  return pdVar1;
}



/* Entry: 006df30c; end: 006df323;  */

long FUN_006df30c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006df31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Entry: 006df324; end: 006df39f;  */

void FUN_006df324(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    if (*(code **)(lVar2 + 0x80) != (code *)0x0) {
      lVar1 = param_1;
      (**(code **)(lVar2 + 0x80))(param_1,param_2);
      if ((int)lVar1 < 1) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x10);
    }
    if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006df388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x20))(param_1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 006df3a0; end: 006df41b;  */

long FUN_006df3a0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006df3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Entry: 006df41c; end: 006df44b;  */

void FUN_006df41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_006df4c4();
  if ((int)lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 006df44c; end: 006df47b;  */

undefined8 FUN_006df44c(long param_1)

{
  if (*(int *)(param_1 + 4) == 6) {
    return *(undefined8 *)(param_1 + 8);
  }
  func_0x006df580();
  func_0x006df55c();
  return 0;
}



/* Entry: 006df47c; end: 006df493;  */

void FUN_006df47c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_006df4c4(param_1,0x74);
  if ((int)lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}



/* Entry: 006df494; end: 006df4c3;  */

undefined8 FUN_006df494(long param_1)

{
  if (*(int *)(param_1 + 4) == 0x198) {
    return *(undefined8 *)(param_1 + 8);
  }
  func_0x006df580();
  func_0x006df55c();
  return 0;
}



/* Entry: 006df4c4; end: 006df543;  */

undefined8 FUN_006df4c4(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    func_0x006df2d4(param_1);
  }
  func_0x006df3bc();
  if (param_2 == (undefined4 *)0x0) {
    func_0x006df580();
    func_0x006df55c();
    FUN_006dea68(&UNK_0091674a);
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      *(undefined4 **)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 4) = *param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006df544; end: 006df593;  */

/* WARNING: Removing unreachable block (ram,0x006dfc68) */
/* WARNING: Removing unreachable block (ram,0x006dfcb0) */

long * FUN_006df544(long *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x006dfe0c();
  }
  else if (*(uint *)(param_1 + 4) == 0) {
    func_0x006dfe0c();
  }
  else {
    if ((*(uint *)(param_1 + 4) & 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006dfc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,1,0,param_2);
      return param_1;
    }
    func_0x006dfe0c();
  }
  func_0x006dfdf0();
  return (long *)0x0;
}



/* Entry: 006df594; end: 006df677;  */

undefined1 * FUN_006df594(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_54;
  char *pcStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x006df9e0(param_1,auStack_30);
  if ((int)param_1 != 0) {
    puVar4 = auStack_30;
    func_0x006df9e0(puVar4,auStack_40);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_30;
      FUN_006d4564(puVar4,&pcStack_50,3);
      if (((int)puVar4 != 0) && (lStack_28 == 0)) {
        puVar4 = auStack_40;
        FUN_006df678(puVar4,&uStack_54);
        if ((int)puVar4 == 0) {
          func_0x006df9ec();
          goto LAB_006df614;
        }
        if (lStack_48 != 0) {
          pcVar1 = pcStack_50 + 1;
          lStack_48 = lStack_48 + -1;
          cVar2 = *pcStack_50;
          pcStack_50 = pcVar1;
          if (cVar2 == '\0') {
            FUN_006df244();
            if (puVar4 != (undefined1 *)0x0) {
              puVar5 = puVar4;
              FUN_006df4c4(puVar4,uStack_54);
              iVar3 = (int)puVar5;
              if (iVar3 != 0) {
                if (*(long *)(*(long *)(puVar4 + 0x10) + 0x10) == 0) {
                  func_0x006df9bc();
                }
                else {
                  func_0x006dfa00();
                  if (iVar3 != 0) {
                    return puVar4;
                  }
                }
              }
            }
            func_0x006df9f8();
            return (undefined1 *)0x0;
          }
        }
      }
    }
  }
  func_0x006df9ec();
LAB_006df614:
  func_0x006df9d4();
  return (undefined1 *)0x0;
}



/* Entry: 006df678; end: 006df717;  */

void FUN_006df678(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uStack_50;
  ulong uStack_48;
  
  FUN_006d4564(param_1,&uStack_50,6);
  if ((int)param_1 != 0) {
    for (lVar2 = 0; lVar2 != 0x28; lVar2 = lVar2 + 8) {
      puVar3 = *(undefined4 **)((long)&PTR_DAT_00a11d90 + lVar2);
      if ((uStack_48 == *(byte *)((long)puVar3 + 0xd)) &&
         ((*(byte *)((long)puVar3 + 0xd) == 0 ||
          (uVar1 = uStack_50, _memcmp(uStack_50,puVar3 + 1,uStack_48), (int)uVar1 == 0)))) {
        *param_2 = *puVar3;
        return;
      }
    }
  }
  return;
}



/* Entry: 006df718; end: 006df743;  */

undefined8 FUN_006df718(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006df728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  FUN_006df9bc();
  return 0;
}



/* Entry: 006df744; end: 006df817;  */

undefined1 * FUN_006df744(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uStack_5c;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x006df9e0(param_1,auStack_30);
  if ((int)param_1 != 0) {
    puVar2 = auStack_30;
    func_0x006d46c4(puVar2,&lStack_58);
    if (((int)puVar2 != 0) && (lStack_58 == 0)) {
      puVar2 = auStack_30;
      func_0x006df9e0(puVar2,auStack_40);
      if ((int)puVar2 != 0) {
        puVar2 = auStack_30;
        FUN_006d4564(puVar2,auStack_50,4);
        if ((int)puVar2 != 0) {
          puVar2 = auStack_40;
          FUN_006df678(puVar2,&uStack_5c);
          if ((int)puVar2 != 0) {
            FUN_006df244();
            if (puVar2 != (undefined1 *)0x0) {
              puVar3 = puVar2;
              FUN_006df4c4(puVar2,uStack_5c);
              iVar1 = (int)puVar3;
              if (iVar1 != 0) {
                if (*(long *)(*(long *)(puVar2 + 0x10) + 0x28) == 0) {
                  func_0x006df9bc();
                }
                else {
                  func_0x006dfa00();
                  if (iVar1 != 0) {
                    return puVar2;
                  }
                }
              }
            }
            func_0x006df9f8();
            return (undefined1 *)0x0;
          }
          func_0x006df9ec();
          goto LAB_006df7e8;
        }
      }
    }
  }
  func_0x006df9ec();
LAB_006df7e8:
  func_0x006df9d4();
  return (undefined1 *)0x0;
}



/* Entry: 006df818; end: 006df843;  */

undefined8 FUN_006df818(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006df828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  FUN_006df9bc();
  return 0;
}



/* Entry: 006df844; end: 006df9bb;  */

undefined1 * FUN_006df844(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = &uStack_50;
  puVar2 = &uStack_50;
  puVar3 = &uStack_50;
  puVar5 = &uStack_50;
  if (param_4 < 0) {
    func_0x006df9ec();
    func_0x006df9d4();
LAB_006df99c:
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_50 = *param_3;
    puVar6 = param_1;
    lStack_48 = param_4;
    FUN_006df244();
    iVar7 = (int)param_1;
    if (puVar6 == (undefined1 *)0x0) {
LAB_006df948:
      FUN_006de5b0();
      uStack_50 = *param_3;
      lStack_48 = param_4;
      FUN_006df744();
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined1 *)0x0;
      }
      puVar6 = (undefined1 *)puVar5;
      if (*(int *)((long)puVar5 + 4) != iVar7) {
        func_0x006df9ec();
        func_0x006df9d4();
        func_0x006df294(puVar5);
        goto LAB_006df99c;
      }
    }
    else {
      if (iVar7 != 6) {
        if (iVar7 == 0x74) {
          func_0x006dd3a8();
          if ((puVar2 != (undefined8 *)0x0) &&
             (puVar4 = puVar6, func_0x006df47c(puVar6,puVar2), (int)puVar4 != 0)) goto LAB_006df970;
          func_0x006dd058(puVar2);
        }
        else if (iVar7 == 0x198) {
          FUN_006dd4f0(&uStack_50,0);
          if ((puVar1 != (undefined8 *)0x0) &&
             (puVar4 = puVar6, func_0x006df488(puVar6,puVar1), (int)puVar4 != 0)) goto LAB_006df970;
          func_0x006eca8c(puVar1);
        }
        else {
          func_0x006df9ec();
          func_0x006df9d4();
        }
LAB_006df940:
        func_0x006df294(puVar6);
        goto LAB_006df948;
      }
      FUN_00705c4c();
      if ((puVar3 == (undefined8 *)0x0) ||
         (puVar4 = puVar6, func_0x006df410(puVar6,puVar3), (int)puVar4 == 0)) {
        FUN_006f2614(puVar3);
        goto LAB_006df940;
      }
    }
LAB_006df970:
    if (param_2 != (undefined8 *)0x0) {
      func_0x006df294(*param_2);
      *param_2 = puVar6;
    }
    func_0x006dfa10();
  }
  return puVar6;
}



/* Entry: 006df9bc; end: 006dfa2b;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006df9bc(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 6;
  FUN_006de604(6,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0x6000080;
  }
  return;
}



/* Entry: 006dfa2c; end: 006dfb3b;  */

char * FUN_006dfa2c(qword param_1,qword param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int *piVar4;
  
  if (param_3 == -1) {
    if (param_1 == 0) {
      return (char *)0x0;
    }
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      return (char *)0x0;
    }
    param_3 = **(int **)(param_1 + 0x10);
  }
  lVar3 = 0;
  do {
    if (lVar3 == 0x20) {
      func_0x006dfe0c();
      func_0x006dfdf0();
      FUN_006dea68(&UNK_00916757);
      return (char *)0x0;
    }
    piVar4 = *(int **)((long)&PTR_DAT_00a11db8 + lVar3);
    lVar3 = lVar3 + 8;
  } while (*piVar4 != param_3);
  pcVar1 = segment_command_00000020.segname + 8;
  FUN_00701e90();
  if (pcVar1 != (char *)0x0) {
    *(qword *)(pcVar1 + 0x18) = 0;
    *(qword *)(pcVar1 + 0x10) = 0;
    *(undefined8 *)(pcVar1 + 0x28) = 0;
    *(qword *)(pcVar1 + 0x20) = 0;
    *(qword *)(pcVar1 + 8) = 0;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(int **)pcVar1 = piVar4;
    *(qword *)(pcVar1 + 8) = param_2;
    *(undefined4 *)(pcVar1 + 0x20) = 0;
    if (param_1 != 0) {
      FUN_00705a60(param_1);
      *(qword *)(pcVar1 + 0x10) = param_1;
    }
    if (*(code **)(piVar4 + 2) != (code *)0x0) {
      pcVar2 = pcVar1;
      (**(code **)(piVar4 + 2))();
      if ((int)pcVar2 < 1) {
        func_0x006df294(*(qword *)(pcVar1 + 0x10));
        func_0x00701ed0(pcVar1);
        return (char *)0x0;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  func_0x006dfe0c();
  func_0x006dfdf0();
  return (char *)0x0;
}



/* Entry: 006dfb3c; end: 006dfc43;  */

void FUN_006dfb3c(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  func_0x006df294(param_1[2]);
  func_0x006df294(param_1[3]);
  if (param_1 != (long *)0x0) {
    param_1 = param_1 + -1;
    FUN_00701f08(param_1,*param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 006dfc44; end: 006dfdef;  */

undefined8 *
FUN_006dfc44(undefined8 *param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int *piVar1;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x1c) == (code *)0x0)) {
    func_0x006dfe0c();
  }
  else if ((param_2 == -1) || (*piVar1 == param_2)) {
    if (*(uint *)(param_1 + 4) == 0) {
      func_0x006dfe0c();
    }
    else {
      if ((*(uint *)(param_1 + 4) & param_3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006dfc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar1 + 0x1c))(param_1,param_4,param_5,param_6);
        return param_1;
      }
      func_0x006dfe0c();
    }
  }
  else {
    func_0x006dfdfc();
  }
  func_0x006dfdf0();
  return (undefined8 *)0x0;
}



/* Entry: 006dfdf0; end: 006dfe23;  */

void FUN_006dfdf0(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006dfe24; end: 006dffa7;  */

void FUN_006dfe24(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    func_0x006dcff0();
    if (param_1 == 0) {
      return;
    }
LAB_006dfe70:
    lVar1 = param_1;
    FUN_006e3c80();
    *(long *)(param_1 + 0x20) = lVar1;
    if (lVar1 == 0) goto LAB_006dfea0;
    lVar2 = param_3;
    FUN_006d2cdc(param_3,lVar1);
    if (((int)lVar2 != 0) && (*(long *)(param_3 + 8) == 0)) {
      func_0x006e0318();
      return;
    }
  }
  else {
    param_1 = param_2;
    FUN_006dd29c();
    if ((param_1 != 0) && (*(long *)(param_2 + 8) == 0)) goto LAB_006dfe70;
  }
  func_0x006e0304();
  func_0x006e02d4();
LAB_006dfea0:
  func_0x006dd058(param_1);
  return;
}



/* Entry: 006dffa8; end: 006dffd7;  */

bool FUN_006dffa8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x20);
  FUN_006e4264(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
  return (int)uVar1 == 0;
}



/* Entry: 006dffd8; end: 006e00b7;  */

undefined8 FUN_006dffd8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2;
  FUN_006dd29c();
  if ((lVar1 != 0) && (*(long *)(param_2 + 8) == 0)) {
    lVar2 = lVar1;
    FUN_006e3c80();
    *(long *)(lVar1 + 0x28) = lVar2;
    FUN_006e3c80();
    lVar4 = 0;
    *(long *)(lVar1 + 0x20) = lVar2;
    if ((*(long *)(lVar1 + 0x28) == 0) || (lVar2 == 0)) goto LAB_006e001c;
    lVar2 = param_3;
    FUN_006d2cdc();
    if (((int)lVar2 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar4 = *(long *)(lVar1 + 0x28);
      FUN_006e4264(lVar4,*(undefined8 *)(lVar1 + 0x10));
      if ((int)lVar4 < 0) {
        func_0x006e4450();
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
          FUN_006e5d10(uVar3,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x28),
                       *(undefined8 *)(lVar1 + 8),lVar4,0);
          if ((int)uVar3 != 0) {
            func_0x006e4490(lVar4);
            func_0x006e0318();
            return 1;
          }
        }
        goto LAB_006e001c;
      }
    }
  }
  func_0x006e0304();
  func_0x006e02d4();
  lVar4 = 0;
LAB_006e001c:
  func_0x006e4490(lVar4);
  func_0x006dd058(lVar1);
  return 0;
}



/* Entry: 006e00b8; end: 006e0183;  */

undefined8 FUN_006e00b8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_a0;
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) {
    func_0x006e0304();
  }
  else {
    uVar3 = param_1;
    FUN_006e02c8(param_1,auStack_40);
    if ((int)uVar3 != 0) {
      puVar4 = auStack_40;
      FUN_006d3e0c(puVar4,0);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_40;
        FUN_006e02c8(puVar4,auStack_60);
        iVar2 = (int)puVar4;
        if ((((iVar2 != 0) && (func_0x006e02f4(), iVar2 != 0)) && (func_0x006e02e0(), iVar2 != 0))
           && (func_0x006e0330(), iVar2 != 0)) {
          puVar4 = auStack_40;
          FUN_006d39c0(puVar4,auStack_a0,4);
          if ((((int)puVar4 != 0) &&
              (func_0x006d2d54(auStack_a0,*(undefined8 *)(lVar5 + 0x28)), iVar1 != 0)) &&
             (FUN_006d3748(), (int)param_1 != 0)) {
            return 1;
          }
        }
      }
    }
    func_0x006e0304();
  }
  func_0x006e02d4();
  return 0;
}



/* Entry: 006e0184; end: 006e01c3;  */

undefined4 FUN_006e0184(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
  FUN_006e3eb8();
  lVar3 = (uVar2 & 0xffffffff) + 1;
  FUN_006dd148();
  uVar4 = 0;
  lVar1 = lVar3 + 2U + (uVar2 & 0xffffffff);
  if ((!CARRY8(lVar3 + 2U,uVar2 & 0xffffffff)) && (-1 < lVar1)) {
    lVar3 = lVar1 * 2;
    FUN_006dd148();
    uVar2 = lVar3 + lVar1 * 2 + 1;
    uVar4 = 0;
    if ((ulong)(lVar1 * 2) <= uVar2) {
      uVar4 = (undefined4)uVar2;
    }
  }
  return uVar4;
}



/* Entry: 006e01c4; end: 006e0287;  */

void FUN_006e01c4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + 8;
  FUN_006e0290(lVar2,*(undefined8 *)(*(long *)(param_2 + 8) + 8));
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8) + 0x10;
    FUN_006e0290(lVar2,*(undefined8 *)(*(long *)(param_2 + 8) + 0x10));
    if ((int)lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x18);
      plVar1 = (long *)(*(long *)(param_1 + 8) + 0x18);
      func_0x006e3d14();
      if (lVar2 != 0) {
        func_0x006e3cd0(*plVar1);
        *plVar1 = lVar2;
      }
    }
  }
  return;
}



/* Entry: 006e0288; end: 006e028f;  */

void FUN_006e0288(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = (int)lVar2 + 0x110;
    func_0x00705a98();
    if (iVar1 != 0) {
      FUN_006e29e4(0xb29900,lVar2,lVar2 + 0x118);
      FUN_006e3cd0(*(undefined8 *)(lVar2 + 8));
      FUN_006e3cd0(*(undefined8 *)(lVar2 + 0x10));
      FUN_006e3cd0(*(undefined8 *)(lVar2 + 0x18));
      FUN_006e3cd0(*(undefined8 *)(lVar2 + 0x20));
      FUN_006e3cd0(*(undefined8 *)(lVar2 + 0x28));
      FUN_006e5880(*(undefined8 *)(lVar2 + 0x100));
      FUN_006e5880(*(undefined8 *)(lVar2 + 0x108));
      _pthread_rwlock_destroy(lVar2 + 0x38);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + -8);
        FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006e0290; end: 006e02c7;  */

void FUN_006e0290(long *param_1,long param_2)

{
  func_0x006e3d14();
  if (param_2 != 0) {
    func_0x006e3cd0(*param_1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 006e02c8; end: 006e033b;  */

/* WARNING: Removing unreachable block (ram,0x006d39f4) */
/* WARNING: Removing unreachable block (ram,0x006d3a00) */
/* WARNING: Removing unreachable block (ram,0x006d3a10) */

void FUN_006e02c8(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  FUN_006d3748();
  iVar1 = (int)plVar2;
  if ((iVar1 != 0) && (func_0x006d4114(), iVar1 != 0)) {
    lVar3 = *(long *)(*param_1 + 8);
    plVar2 = param_1;
    FUN_006d3a70(param_1,0);
    if ((int)plVar2 != 0) {
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      *(undefined1 *)((long)param_2 + 0x1a) = 1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar3;
      *(undefined2 *)(param_2 + 3) = 0x101;
    }
  }
  return;
}



/* Entry: 006e033c; end: 006e03e7;  */

bool FUN_006e033c(long param_1)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  FUN_00701e90();
  if (pdVar1 != (dword *)0x0) {
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(dword **)(param_1 + 0x28) = pdVar1;
  }
  return pdVar1 != (dword *)0x0;
}



/* Entry: 006e03e8; end: 006e046f;  */

undefined8 FUN_006e03e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x006e06f8();
      func_0x006e06ec();
      return 0;
    }
    lVar2 = **(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  FUN_006ec99c();
  if (((param_1 != 0) && (lVar1 = param_1, func_0x006ecaf8(param_1,lVar2), (int)lVar1 != 0)) &&
     (lVar2 = param_1, FUN_006ecde8(), (int)lVar2 != 0)) {
    func_0x006e070c();
    return 1;
  }
  func_0x006eca8c(param_1);
  return 0;
}



/* Entry: 006e0470; end: 006e051f;  */

void FUN_006e0470(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uStack_44;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
  if (param_2 == 0) {
    FUN_006de0c4();
    *param_3 = uVar3;
  }
  else {
    uVar4 = *param_3;
    uVar2 = uVar3;
    FUN_006de0c4();
    if (uVar4 < uVar2) {
      func_0x006e06f8();
      func_0x006e06ec();
    }
    else {
      iVar1 = 0;
      FUN_006ddfc4(0,param_4,param_5,param_2,&uStack_44,uVar3);
      if (iVar1 != 0) {
        *param_3 = (ulong)uStack_44;
      }
    }
  }
  return;
}



/* Entry: 006e0520; end: 006e0547;  */

undefined8
FUN_006e0520(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  uStack_48 = 0;
  lVar1 = param_2;
  FUN_006de260(param_2,param_3);
  if (lVar1 != 0) {
    puVar2 = &uStack_48;
    FUN_006de2ac(puVar2,&lStack_50,lVar1);
    if ((((int)puVar2 != 0) && (lStack_50 == param_3)) &&
       ((param_3 == 0 || (_memcmp(param_2,uStack_48,param_3), (int)param_2 == 0)))) {
      FUN_006eb114(param_4,param_5,lVar1,uVar3);
      goto LAB_006de21c;
    }
    func_0x006de44c();
    func_0x006de440();
  }
  param_4 = 0;
LAB_006de21c:
  func_0x00701ed0(uStack_48);
  func_0x006de458();
  return param_4;
}



/* Entry: 006e0548; end: 006e05cf;  */

undefined8 FUN_006e0548(long param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    func_0x006e06f8();
    func_0x006e06ec();
LAB_006e05a4:
    uVar2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
    if (param_2 == 0) {
      iVar1 = (int)*puVar3 + 0x38;
      FUN_006e3e84();
      param_2 = (ulong)(iVar1 + 7U >> 3);
    }
    else {
      FUN_006dde4c(param_2,*param_3,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8),
                   puVar3,0);
      if ((int)param_2 < 0) goto LAB_006e05a4;
      param_2 = param_2 & 0xffffffff;
    }
    *param_3 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}


