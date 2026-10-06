/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003c7a38; end: 1003c7a6b;  */

void FUN_1003c7a38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003c7a6c; end: 1003c7a73;  */

void FUN_1003c7a6c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7170;
  func_0x000107c610f8();
  func_0x000107c46214();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003c7a74; end: 1003c7ac7;  */

void FUN_1003c7a74(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7170;
  func_0x000107c610f8();
  func_0x000107c46214();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003c7ac8; end: 1003c7b3b; -[SCUserIPInferredLocationServices initWithCountryCodeProvider:] */

undefined1 * FUN_1003c7ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270c170;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c7b3c; end: 1003c7b43;  */

void FUN_1003c7b3c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003c7b44; end: 1003c8dff; -[SCLensContentEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c7b44(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  long lVar48;
  undefined8 uVar49;
  long lVar50;
  undefined1 auStack_4c0 [8];
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar46 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1055cc9f4;
  puStack_90 = &UNK_11089c730;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = param_1;
  FUN_1003c8e00();
  func_0x000107c61180();
  lVar2 = lVar50;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  lVar50 = param_1;
  FUN_1003c8e2c();
  func_0x000107c61180();
  lVar3 = lVar50;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_1127264c0;
    func_0x000107c61148();
  }
  lVar4 = lVar50;
  func_0x000107c4ae34();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  lVar50 = param_1;
  FUN_1003c8e58();
  func_0x000107c61180();
  lVar5 = lVar50;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  puVar6 = PTR_PTR_1126ae720;
  puStack_f0 = puVar46;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_1055cca34;
  puStack_d8 = &UNK_11089c760;
  puStack_d0 = puVar1;
  func_0x000107c61174(lVar3);
  lStack_c8 = lVar3;
  func_0x000107c61174(lVar4);
  lStack_c0 = lVar4;
  func_0x000107c61174(lVar2);
  lStack_b8 = lVar2;
  func_0x000107c61174(lVar5);
  lStack_b0 = lVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126bb998;
  func_0x000107c61160();
  puVar8 = PTR_PTR_1126bb9a0;
  func_0x000107c610f4();
  func_0x000107c471b4();
  if (param_1 == 0) {
    uVar49 = 0;
  }
  else {
    uVar49 = *(undefined8 *)(param_1 + _DAT_112726504);
  }
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  lVar48 = (long)_DAT_112726494;
  lVar50 = param_1 + lVar48;
  func_0x000107c61148();
  lVar9 = lVar50;
  func_0x000107c4b32c();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  puVar10 = PTR_PTR_1126ae720;
  puStack_120 = puVar46;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_100ba4054;
  puStack_108 = &UNK_11089c790;
  func_0x000107c6111c(auStack_f8,auStack_80);
  lStack_100 = lVar9;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_150 = puVar46;
  uStack_148 = 0xc2000000;
  puStack_140 = &UNK_1055ccaf0;
  puStack_138 = &UNK_11089c7c0;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c61174(puVar7);
  puStack_130 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_180 = puVar46;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_1055ccb38;
  puStack_168 = &UNK_11089c7f0;
  func_0x000107c6111c(auStack_158,auStack_80);
  puStack_160 = puVar11;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_1a8 = puVar46;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_100ba11e8;
  puStack_190 = &UNK_11089c820;
  func_0x000107c6111c(auStack_188,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = (long)_DAT_112726498;
  func_0x000107c61174();
  uVar49 = *(undefined8 *)(param_1 + lVar50);
  *(undefined **)(param_1 + lVar50) = puVar13;
  func_0x000107c61170(uVar49);
  puVar14 = PTR_PTR_1126ae720;
  puStack_1d0 = puVar46;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_10074c758;
  puStack_1b8 = &UNK_11089c850;
  func_0x000107c6111c(auStack_1b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = param_1 + _DAT_1127264d8;
  func_0x000107c61148();
  lVar15 = lVar50;
  func_0x000107c4b3b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  puVar16 = PTR_PTR_1126ae720;
  puStack_208 = puVar46;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_100b7aefc;
  puStack_1f0 = &UNK_11089c880;
  puStack_1e8 = puVar14;
  lStack_1e0 = lVar15;
  func_0x000107c61174(lVar5);
  lStack_1d8 = lVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  puStack_230 = puVar46;
  uStack_228 = 0xc2000000;
  puStack_220 = &UNK_1055ccba8;
  puStack_218 = &UNK_11089c8b0;
  func_0x000107c6111c(auStack_210,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126ae720;
  puStack_260 = puVar46;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_1055ccbe8;
  puStack_248 = &UNK_11089c900;
  puStack_240 = puVar6;
  func_0x000107c61174(lVar2);
  lStack_238 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = param_1 + _DAT_1127264c8;
  func_0x000107c61148();
  lVar20 = lVar50;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  puVar21 = PTR_PTR_1126ae720;
  puStack_290 = puVar46;
  uStack_288 = 0xc2000000;
  puStack_280 = &UNK_1055ccc18;
  puStack_278 = &UNK_11089c930;
  func_0x000107c61174(lVar2);
  lStack_270 = lVar2;
  func_0x000107c61174(lVar20);
  lStack_268 = lVar20;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = param_1 + _DAT_1127264f4;
  func_0x000107c61148();
  lVar22 = lVar50;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  lVar50 = param_1 + _DAT_1127264f4;
  func_0x000107c61148();
  lVar23 = lVar50;
  func_0x000107c44f60();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  lVar50 = param_1 + _DAT_1127264f8;
  func_0x000107c61148();
  lVar24 = lVar50;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  lVar50 = param_1 + _DAT_1127264ec;
  func_0x000107c61148();
  lVar25 = lVar50;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar50);
  puVar26 = PTR_PTR_1126ae720;
  puStack_2d8 = puVar46;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_100ba1574;
  puStack_2c0 = &UNK_11089c960;
  func_0x000107c61174(lVar22);
  lStack_2b8 = lVar22;
  func_0x000107c61174(lVar23);
  lStack_2b0 = lVar23;
  func_0x000107c61174(lVar24);
  lStack_2a8 = lVar24;
  func_0x000107c61174(lVar25);
  lStack_2a0 = lVar25;
  func_0x000107c61174(lVar2);
  lStack_298 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar27 = PTR_PTR_1126ae720;
  puStack_350 = puVar46;
  uStack_348 = 0xc2000000;
  uStack_340 = 0x100ba0cb0;
  puStack_338 = &UNK_11089c990;
  func_0x000107c6111c(auStack_2e0,auStack_80);
  puStack_330 = puVar13;
  func_0x000107c61174(puVar18);
  puStack_328 = puVar18;
  puStack_320 = puVar11;
  puStack_318 = puVar12;
  lStack_310 = lVar9;
  puStack_308 = puVar14;
  puStack_300 = puVar16;
  func_0x000107c61174(puVar19);
  puStack_2f8 = puVar19;
  func_0x000107c61174(puVar21);
  puStack_2f0 = puVar21;
  func_0x000107c61174(puVar26);
  puStack_2e8 = puVar26;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar28 = PTR_PTR_1126ae720;
  puStack_3b8 = puVar46;
  uStack_3b0 = 0xc2000000;
  pcStack_3a8 = FUN_100ba0bc8;
  puStack_3a0 = &UNK_11089c9c0;
  func_0x000107c6111c(auStack_358,auStack_80);
  func_0x000107c61174(puVar27);
  puStack_398 = puVar27;
  puStack_390 = puVar11;
  puStack_388 = puVar10;
  puStack_380 = puVar12;
  lStack_378 = lVar9;
  func_0x000107c61174(puVar17);
  puStack_370 = puVar17;
  func_0x000107c61174(puVar19);
  puStack_368 = puVar19;
  func_0x000107c61174(lVar2);
  lStack_360 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar50 = (long)_DAT_11272649c;
  func_0x000107c61174();
  uVar49 = *(undefined8 *)(param_1 + lVar50);
  *(undefined **)(param_1 + lVar50) = puVar28;
  func_0x000107c61170(uVar49);
  puVar29 = PTR_PTR_1126bb9e8;
  func_0x000107c610f4();
  func_0x000107c472b8();
  uVar49 = *(undefined8 *)(param_1 + _DAT_11272651c);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar30 = PTR_PTR_1126bb9f0;
  func_0x000107c610f4();
  func_0x000107c472bc();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726520);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar31 = PTR_PTR_1126ae720;
  puStack_3e0 = puVar46;
  uStack_3d8 = 0xc2000000;
  pcStack_3d0 = FUN_100ba0b80;
  puStack_3c8 = &UNK_11089c9f0;
  func_0x000107c61174(puVar28);
  puStack_3c0 = puVar28;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar32 = PTR_PTR_1126ae720;
  puStack_418 = puVar46;
  uStack_410 = 0xc2000000;
  puStack_408 = &UNK_1055cccbc;
  puStack_400 = &UNK_11089ca20;
  func_0x000107c6111c(auStack_3e8,auStack_80);
  puStack_3f8 = puVar31;
  func_0x000107c61174(lVar2);
  lStack_3f0 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puStack_440 = puVar46;
  uStack_438 = 0xc2000000;
  puStack_430 = &UNK_1055ccd4c;
  puStack_428 = &UNK_11089ca50;
  puVar33 = PTR_PTR_1126ae720;
  puStack_420 = puVar31;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar34 = PTR_PTR_1126bba00;
  func_0x000107c610f4();
  func_0x000107c47288();
  uVar49 = *(undefined8 *)(param_1 + _DAT_11272650c);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726518);
  func_0x000107c61174(uVar49);
  puStack_468 = puVar46;
  uStack_460 = 0xc2000000;
  puStack_458 = &UNK_100c0879c;
  puStack_450 = &UNK_110846660;
  func_0x000107c61174(puVar18);
  puStack_448 = puVar18;
  func_0x000107c42c14(uVar49);
  func_0x000107c61170(uVar49);
  puVar35 = PTR_PTR_1126bba10;
  func_0x000107c610f4();
  func_0x000107c47254();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726510);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puStack_490 = puVar46;
  uStack_488 = 0xc2000000;
  puStack_480 = &UNK_1055ccda8;
  puStack_478 = &UNK_11089caa0;
  puVar36 = PTR_PTR_1126ae720;
  puStack_470 = puVar31;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar37 = PTR_PTR_1126bba20;
  func_0x000107c610f4();
  func_0x000107c47244();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726514);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar38 = PTR_PTR_1126bba28;
  func_0x000107c610f4();
  func_0x000107c466c4();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726508);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar39 = PTR_PTR_1126bba30;
  func_0x000107c610f4();
  func_0x000107c47218();
  uVar49 = *(undefined8 *)(param_1 + _DAT_1127264fc);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puStack_4b8 = puVar46;
  uStack_4b0 = 0xc2000000;
  pcStack_4a8 = FUN_100b619cc;
  puStack_4a0 = &UNK_11089cad0;
  puVar40 = PTR_PTR_1126ae720;
  puStack_498 = puVar12;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar41 = PTR_PTR_1126bba40;
  func_0x000107c610f4();
  lVar48 = param_1 + lVar48;
  func_0x000107c61148(lVar48);
  lVar50 = lVar48;
  func_0x000107c4afd8();
  func_0x000107c61180();
  func_0x000107c472cc();
  func_0x000107c61170(lVar50);
  func_0x000107c61170(lVar48);
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726500);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar42 = PTR_PTR_1126bba48;
  func_0x000107c610f4();
  func_0x000107c4653c();
  uVar49 = *(undefined8 *)(param_1 + _DAT_11272652c);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar43 = PTR_PTR_1126bba50;
  func_0x000107c610f4();
  func_0x000107c46540();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726530);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar44 = PTR_PTR_1126bba58;
  func_0x000107c61160();
  puVar45 = PTR_PTR_1126bba60;
  func_0x000107c610f4();
  func_0x000107c4728c();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726524);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  puVar46 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_4c0,auStack_80);
  func_0x000107c61174(puVar27);
  func_0x000107c61174(lVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar47 = PTR_PTR_1126bba68;
  func_0x000107c610f4();
  func_0x000107c471a8();
  uVar49 = *(undefined8 *)(param_1 + _DAT_112726528);
  func_0x000107c61174(uVar49);
  func_0x000107c42c20(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(puVar47);
  func_0x000107c61170(puVar46);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar27);
  func_0x000107c61120(auStack_4c0);
  func_0x000107c61170(puVar45);
  func_0x000107c61170(puVar44);
  func_0x000107c61170(puVar43);
  func_0x000107c61170(puVar42);
  func_0x000107c61170(puVar41);
  func_0x000107c61170(puVar40);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puStack_448);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(lStack_3f0);
  func_0x000107c61120(auStack_3e8);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(puStack_3c0);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(lStack_360);
  func_0x000107c61170(puStack_368);
  func_0x000107c61170(puStack_370);
  func_0x000107c61170(puStack_398);
  func_0x000107c61120(auStack_358);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puStack_2e8);
  func_0x000107c61170(puStack_2f0);
  func_0x000107c61170(puStack_2f8);
  func_0x000107c61170(puStack_328);
  func_0x000107c61120(auStack_2e0);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(lStack_298);
  func_0x000107c61170(lStack_2a0);
  func_0x000107c61170(lStack_2a8);
  func_0x000107c61170(lStack_2b0);
  func_0x000107c61170(lStack_2b8);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(lStack_268);
  func_0x000107c61170(lStack_270);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(lStack_238);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61120(auStack_210);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lStack_1d8);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61170(puVar13);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_158);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_130);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1003c8e00; end: 1003c8e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c8e00(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003c8e24; end: 1003c8e2b; -[SCLensDataConfigServices lensDataConfigProvider] */

undefined8 FUN_1003c8e24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8e2c; end: 1003c8e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c8e2c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003c8e50; end: 1003c8e57; -[SCLensPlatformLoggersServices lensCacheTrackingLogger] */

undefined8 FUN_1003c8e50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8e58; end: 1003c8e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c8e58(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003c8e7c; end: 1003c8e83; -[SCLensPerformerServices lensPerformerProvider] */

undefined8 FUN_1003c8e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8e84; end: 1003c8eeb; -[SCLensContentResultsCache init] */

undefined1 * FUN_1003c8e84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705920;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003c8eec; end: 1003c8f8f; -[SCLensCacheServices initWithLensCacheMetadataServices:lensContentResultManager:] */

undefined1 *
FUN_1003c8eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705b30;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c8f90; end: 1003c8f97; -[SCLensPreferencesStorageServices lensPreferences] */

undefined8 FUN_1003c8f90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8f98; end: 1003c8f9f; -[SCLensAssetsDeliveryServices lensRemoteAssetLogger] */

undefined8 FUN_1003c8f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1003c8fa0; end: 1003c8fa7; -[SCUserNetworkServices httpMetadataService] */

undefined8 FUN_1003c8fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8fa8; end: 1003c8faf; -[SCUserNetworkServices httpRequestModifier] */

undefined8 FUN_1003c8fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1003c8fb0; end: 1003c8fb7; -[SCUserIPInferredLocationServices countryCodeProvider] */

undefined8 FUN_1003c8fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003c8fb8; end: 1003c9097;  */

void FUN_1003c8fb8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x50));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x58));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x60));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 1003c9098; end: 1003c910b; -[SCLensFetchTypeProvidingServices initWithLensFetchTypeProvider:] */

undefined1 * FUN_1003c9098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a278;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c910c; end: 1003c917f; -[SCLensFetchTypeUpdatingServices initWithLensFetchTypeUpdater:] */

undefined1 * FUN_1003c910c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127010d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c9180; end: 1003c91f7; -[_TtC26LensDownloadLoggerServices28SCLensDownloadLoggerServices initWithLensDownloadLogger:lensResourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c9180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_11307d868) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307d870) = param_4;
  lVar2 = param_1;
  FUN_100231b44();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1003c91f8; end: 1003c9207; -[SCPlugInScopeExposerProxy exposePlugInScope:onPlugInsRegistered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c91f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce8),
             PTR_s_exposePlugInScope_onPlugInsRegis_1125c4f18);
  return;
}



/* Entry: 1003c9208; end: 1003c92bb;  */

/* WARNING: Possible PIC construction at 0x0001003c92a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003c92a8) */

void FUN_1003c9208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1107a3ba8;
  func_0x000107c613fc(&UNK_1107a3ba8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1107a3bd0;
  func_0x000107c613fc(&UNK_1107a3bd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_1003c92bc(FUN_100a47edc,puVar1,FUN_100ba5374,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1003c92bc; end: 1003c945b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c92bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  FUN_10006c804();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  lVar7 = *(long *)(unaff_x20 + _DAT_113092548);
  if (lVar7 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092550);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c6157c(param_2);
    FUN_1003c945c(uVar2,uVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092558);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000107c6157c(param_4);
    FUN_1003c945c(uVar2,uVar3);
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100a47e58;
    puStack_88 = &UNK_1107a3a18;
    uStack_80 = param_1;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c61174(lVar7);
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100ba5314;
    puStack_88 = &UNK_1107a3a40;
    uStack_80 = param_3;
    uStack_78 = param_4;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar2);
    func_0x000107c42c14(lVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar7);
  }
  FUN_100070bfc();
  return;
}



/* Entry: 1003c945c; end: 1003c946b;  */

void FUN_1003c945c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1003c946c; end: 1003c9537; -[SCLegacyLensDataFetcherServices initWithLensDataFetcher:lensDataPrefetcher:lensDataFetcherFactory:] */

undefined1 *
FUN_1003c946c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112701ec0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c9538; end: 1003c95ab; -[SCLensDataFetcherServices initWithLensDataFetcher:] */

undefined1 * FUN_1003c9538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705c08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c95ac; end: 1003c961f; -[SCLensDownloadTrackingServices initWithDownloadTracker:] */

undefined1 * FUN_1003c95ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705b38;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c9620; end: 1003c9693; -[SCLensContentDataFetcherService initWithLensContentDataFetcher:] */

undefined1 * FUN_1003c9620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ec8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c9694; end: 1003c969b; -[SCLensPreferencesStorageServices lensContentInfoProvider] */

undefined8 FUN_1003c9694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003c969c; end: 1003c97bf; -[SCLensContentServices initWithLensIconRepository:lensAssetsDataFetcher:lensDownloadStatusProvider:lensContentInfoProvider:lensContentCacheProvider:] */

undefined1 *
FUN_1003c969c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_11270a928;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003c97c0; end: 1003c9817; -[_TtC41LensDeviceDependentAssetAnalyticsServices41LensDeviceDependentAssetAnalyticsServices initWithDeviceDependentAssetAnalyticsReporter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c97c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112de7340) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003c9818; end: 1003c986f; -[_TtC40LensDeviceDependentAssetEndpointServices40LensDeviceDependentAssetEndpointServices initWithDeviceDependentAssetURLResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c9818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307db08) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003c9870; end: 1003c98e7; -[_TtC28LensDownloadMetadataServices28LensDownloadMetadataServices initWithLensDownloadMetadataProvider:lensDownloadMetadataUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c9870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307d1c0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307d1c8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1003c98e8; end: 1003c993f; -[_TtC30LensBitmojiIconFetcherServices32SCLensBitmojiIconFetcherServices initWithLensBitmojiFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c98e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11307d190) = param_3;
  lVar2 = param_1;
  FUN_100232ef8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003c9940; end: 1003c9a1b;  */

void FUN_1003c9940(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003c9a1c; end: 1003c9a23;  */

void FUN_1003c9a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003c9a24; end: 1003c9a77;  */

void FUN_1003c9a24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003c9a78; end: 1003ca26b;  */

void FUN_1003c9a78(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100218be8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8440;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar15 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc82e0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc8300);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8320);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  lVar17 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc8340);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar16);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    *(long *)(param_2 + 0x78) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ca26c);
  (*pcVar1)();
}



/* Entry: 1003ca26c; end: 1003ca2a7;  */

void FUN_1003ca26c(void)

{
  long unaff_x20;
  
  FUN_1003c9a78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1003ca2a8; end: 1003ca2af;  */

void FUN_1003ca2a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ca2b0; end: 1003ca303;  */

void FUN_1003ca2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ca304; end: 1003ca313;  */

void FUN_1003ca304(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(auStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1001c87bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1003ca4b0(auStack_90,lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x50) = uStack_98;
  FUN_1003ca4b0(auStack_90,auStack_c0);
  FUN_1003ca500(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003ca588();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003ca5fc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar6);
  FUN_10010c498(auStack_90);
  *(undefined8 *)(lVar1 + 0x58) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003ca314; end: 1003ca4af;  */

void FUN_1003ca314(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(auStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1001c87bc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1003ca4b0(auStack_90,param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  FUN_1003ca4b0(auStack_90,auStack_c0);
  FUN_1003ca500(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1003ca588();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_1003ca5fc();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  FUN_10010c498(auStack_90);
  *(undefined8 *)(param_2 + 0x58) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1003ca4b0; end: 1003ca4ff;  */

undefined8 FUN_1003ca4b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112da22b8;
  FUN_1000285a8(0x112da22b8,&UNK_10d946d00);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1003ca500; end: 1003ca587;  */

void FUN_1003ca500(undefined8 param_1)

{
  if (lRam0000000112de9110 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66610c);
  return;
}



/* Entry: 1003ca588; end: 1003ca5db;  */

void FUN_1003ca588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_4[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4[4];
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  return;
}



/* Entry: 1003ca5dc; end: 1003ca5fb;  */

void FUN_1003ca5dc(void)

{
  func_0x000107c61168(&PTR_PTR_112de8da0);
  return;
}



/* Entry: 1003ca5fc; end: 1003ca7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003ca5fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  ppuVar3 = &puStack_c0;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_113092298);
  FUN_1003ca5dc(0);
  func_0x000107c613fc();
  func_0x000107c615f0();
  FUN_1003ca838();
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113080ad0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    FUN_1003ca4b0(unaff_x20 + 0x20,&puStack_c0);
    if (puStack_a8 != (undefined *)0x0) {
      func_0x00010148d3d4(&puStack_c0,auStack_68);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar2 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      func_0x00010148d2bc(auStack_68,auStack_90);
      puVar4 = &UNK_11042a970;
      func_0x000107c613fc(&UNK_11042a970,0x50,7);
      func_0x00010148d3d4(auStack_90,puVar4 + 0x10);
      *(long *)(puVar4 + 0x38) = lVar1;
      *(undefined8 *)(puVar4 + 0x40) = uVar6;
      *(undefined8 *)(puVar4 + 0x48) = uVar5;
      puStack_a0 = &UNK_1019f34d4;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1019f34e4;
      puStack_a8 = &UNK_11042a988;
      puStack_98 = puVar4;
      func_0x000107c60bc4(&puStack_c0);
      puVar4 = puStack_98;
      func_0x000107c615f0(lVar1);
      func_0x000107c61174(uVar6);
      func_0x000107c6157c(uVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c3e4fc(puVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      uVar6 = 0;
      FUN_1001c8d24(0);
      func_0x000107c610f8();
      FUN_1003ca8c0(puVar2,uVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(uVar5);
      func_0x0001000834e4(auStack_68);
      return puVar2;
    }
    func_0x000107c615e8(lVar1);
    FUN_10010c498(&puStack_c0);
  }
  FUN_1001c8d24(0);
  func_0x000107c610f8();
  puVar4 = (undefined *)0x0;
  FUN_1003ca8c0(0);
  func_0x000107c61574(uVar5);
  return puVar4;
}



/* Entry: 1003ca7fc; end: 1003ca837;  */

void FUN_1003ca7fc(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ca838; end: 1003ca8bf;  */

void FUN_1003ca838(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined1 *)(unaff_x20 + 0x20) = 2;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined1 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 1003ca8c0; end: 1003ca90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ca8c0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113039db8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003ca90c; end: 1003ca97b;  */

void FUN_1003ca90c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1003ca97c; end: 1003ca983;  */

void FUN_1003ca97c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000ad7c4();
  FUN_100217e34(0);
  func_0x000107c610f8();
  FUN_1003cae38(uStack_38,uVar1);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1003ca984; end: 1003ca9ef;  */

void FUN_1003ca984(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001000ad7c4();
  FUN_100217e34(0);
  func_0x000107c610f8();
  FUN_1003cae38(uStack_38,param_2);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1003ca9f0; end: 1003ca9fb;  */

void FUN_1003ca9f0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_58;
  func_0x000107c3e944();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  FUN_100083b20(&uStack_60);
  uVar3 = uStack_60;
  func_0x000107c4fd08();
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_80);
  lVar4 = 0;
  func_0x0001003cadd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  *(undefined8 *)(lVar4 + 0x20) = uStack_68;
  *(undefined8 *)(lVar4 + 0x30) = uStack_78;
  *(undefined8 *)(lVar4 + 0x28) = uStack_80;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  *param_1 = lVar4;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 1003ca9fc; end: 1003caae7;  */

void FUN_1003ca9fc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c3e944();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  FUN_100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c4fd08();
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_80);
  lVar3 = 0;
  func_0x0001003cadd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uStack_68;
  *(undefined8 *)(lVar3 + 0x30) = uStack_78;
  *(undefined8 *)(lVar3 + 0x28) = uStack_80;
  *(undefined8 *)(lVar3 + 0x38) = in_x3;
  *param_1 = lVar3;
  func_0x000107c6157c(in_x3);
  return;
}



/* Entry: 1003caae8; end: 1003caafb; -[SCUserInfoServices birthdayProvider] */

undefined8 FUN_1003caae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003caafc; end: 1003cabdf;  */

void FUN_1003caafc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1000285a8(0x112dc5bc0,&UNK_10d9857a0);
  puVar1 = &UNK_110401b10;
  func_0x000107c613fc(&UNK_110401b10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  puVar2 = &UNK_101742564;
  FUN_1000823a8(&UNK_101742564,puVar1);
  lVar3 = 0;
  FUN_1003cad84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uStack_58;
  *(undefined8 *)(lVar3 + 0x18) = uStack_60;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110401490;
  return;
}



/* Entry: 1003cabe0; end: 1003cac0b;  */

void FUN_1003cabe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cac0c; end: 1003cad0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cac0c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar3 = 0;
  FUN_1001b7b00();
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126a7a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  lVar1 = _DAT_112dc5848;
  uStack_51 = 0;
  FUN_1000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar5 = &uStack_51;
  FUN_10006c248();
  *(undefined1 **)(lVar3 + lVar1) = puVar5;
  func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar6 + 0x20))
            (lVar3 + _DAT_112dc5850,auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *param_1 = lVar3;
  return;
}



/* Entry: 1003cad10; end: 1003cad83; -[SCGrapheneComplianceEngineMetric2 init] */

undefined1 * FUN_1003cad10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8100;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003cad84; end: 1003cadf7;  */

void FUN_1003cad84(void)

{
  func_0x000107c61168(&PTR_PTR_112dc53a8);
  return;
}



/* Entry: 1003cadf8; end: 1003cadfb;  */

void FUN_1003cadf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cadfc; end: 1003cae37;  */

void FUN_1003cadfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cae38; end: 1003cae9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cae38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113039d80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113039d88) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003cae9c; end: 1003caec7;  */

void FUN_1003cae9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003caec8; end: 1003cb3ab; -[SCUserLocationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003caec8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = param_1 + _DAT_112726b64;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3e480();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(lVar1);
  }
  else {
    lVar3 = param_1 + _DAT_112726b68;
    func_0x000107c61148();
    lVar4 = lVar3;
    func_0x000107c4b8e0();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      func_0x000107c61144(auStack_78,param_1);
      puVar5 = PTR_PTR_1126ae720;
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      puStack_90 = &UNK_1056034f8;
      puStack_88 = &UNK_11084e7a0;
      func_0x000107c6111c(auStack_80,auStack_78);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126ae720;
      puStack_d0 = puVar7;
      uStack_c8 = 0xc2000000;
      puStack_c0 = &UNK_105603538;
      puStack_b8 = &UNK_11089f330;
      func_0x000107c6111c(auStack_a8,auStack_78);
      func_0x000107c61174(puVar5);
      puStack_b0 = puVar5;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar8 = PTR_PTR_1126ae720;
      puStack_f8 = puVar7;
      uStack_f0 = 0xc2000000;
      puStack_e8 = &UNK_105603580;
      puStack_e0 = &UNK_11089f360;
      func_0x000107c61174();
      puStack_d8 = puVar6;
      func_0x000107c3e4fc(puVar8);
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126bc3b0;
      func_0x000107c610f4(PTR_PTR_1126bc3b0);
      func_0x000107c474dc();
      uVar11 = 0;
      if (param_1 != 0) {
        uVar11 = *(undefined8 *)(param_1 + _DAT_112726b94);
      }
      func_0x000107c61174(uVar11);
      func_0x000107c42c20(uVar11);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puStack_d8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puStack_b0);
      func_0x000107c61120(auStack_a8);
      func_0x000107c61170(puVar5);
      puVar10 = auStack_80;
      goto LAB_1003cb304;
    }
  }
  func_0x000107c61144(auStack_78,param_1);
  puVar5 = PTR_PTR_1126ae720;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_100506610;
  puStack_108 = &UNK_11089f390;
  func_0x000107c6111c(auStack_100,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_150 = puVar7;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1005065a0;
  puStack_138 = &UNK_110867030;
  func_0x000107c6111c(auStack_128,auStack_78);
  func_0x000107c61174(puVar5);
  puStack_130 = puVar5;
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c61144(auStack_158,puVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_168,auStack_78);
  func_0x000107c6111c(auStack_160,auStack_158);
  func_0x000107c61174(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126bc3b0;
  func_0x000107c610f4(PTR_PTR_1126bc3b0);
  func_0x000107c474dc();
  uVar11 = 0;
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112726b94);
  }
  func_0x000107c61174(uVar11);
  func_0x000107c42c20(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_160);
  func_0x000107c61120(auStack_168);
  func_0x000107c61120(auStack_158);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_130);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar5);
  puVar10 = auStack_100;
LAB_1003cb304:
  func_0x000107c61120(puVar10);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1003cb3ac; end: 1003cb3bb; -[NextGenLocationSystemServices authorizationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cb3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130595b8));
  return;
}



/* Entry: 1003cb3bc; end: 1003cb487; -[SCUserLocationServices initWithLocationProvider:userLocationPermissionsManager:userLocationHelpers:] */

undefined1 *
FUN_1003cb3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112709e28;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003cb488; end: 1003cb503;  */

void FUN_1003cb488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cb504; end: 1003cb50b;  */

void FUN_1003cb504(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cb50c; end: 1003cb55f;  */

void FUN_1003cb50c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cb560; end: 1003cb56f;  */

void FUN_1003cb560(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022fd8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a82c0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c615f0(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb7910);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6c50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c615f0(uStack_90);
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uStack_90);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_90);
  *(undefined **)(lVar1 + 0x40) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003cb570; end: 1003cb92f;  */

void FUN_1003cb570(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022fd8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a82c0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c615f0(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb7910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6c50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c615f0(uStack_90);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uStack_90);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uStack_90);
  *(undefined **)(param_2 + 0x40) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003cb930; end: 1003cb937;  */

void FUN_1003cb930(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cb938; end: 1003cb98b;  */

void FUN_1003cb938(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cb98c; end: 1003cbfbf;  */

void FUN_1003cb98c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_10022fb2c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  puVar1 = PTR_PTR_1126a86b0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0x7265536f72746572;
  func_0x000107c5fadc(0x7265536f72746572,0xed00007365636976);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3e940);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(param_2 + 0x60) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 1003cbfc0; end: 1003cbff3;  */

void FUN_1003cbfc0(void)

{
  long unaff_x20;
  
  FUN_1003cb98c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1003cbff4; end: 1003cbffb;  */

void FUN_1003cbff4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cbffc; end: 1003cc04f;  */

void FUN_1003cbffc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cc050; end: 1003cc05f;  */

void FUN_1003cc050(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10021aa54();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_1003cc3e0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1003cc464();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_1003cc478();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003cc060; end: 1003cc23f;  */

void FUN_1003cc060(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10021aa54();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1003cc3e0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003cc464();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1003cc478();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003cc240; end: 1003cc247;  */

void FUN_1003cc240(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000cad14(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_1001c9870(0);
  func_0x000107c610f8();
  func_0x0001003cc2a8(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cc248; end: 1003cc30b;  */

void FUN_1003cc248(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000cad14();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  FUN_1001c9870(0);
  func_0x000107c610f8();
  func_0x0001003cc2a8(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003cc30c; end: 1003cc337;  */

void FUN_1003cc30c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cc338; end: 1003cc33f;  */

void FUN_1003cc338(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_1001ddf70(0);
  func_0x000107c610f8();
  func_0x0001003cc388(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003cc340; end: 1003cc3df;  */

void FUN_1003cc340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_1001ddf70(0);
  func_0x000107c610f8();
  func_0x0001003cc388(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003cc3e0; end: 1003cc463;  */

void FUN_1003cc3e0(undefined8 param_1)

{
  if (lRam000000011347a240 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e655c60);
  return;
}



/* Entry: 1003cc464; end: 1003cc477;  */

void FUN_1003cc464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1003cc478; end: 1003cc6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1003cc478(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11040b998;
    func_0x000107c613fc(&UNK_11040b998,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    FUN_1000285a8(0x112dce8c0,&UNK_10d990890);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar2);
    puVar4 = &UNK_1018be8f0;
    FUN_1000bdd8c(&UNK_1018be8f0,puVar3);
    puVar5 = puVar4;
    FUN_1003a5b88();
    func_0x000107c61574(puVar4);
    puVar3 = &UNK_11040b9c0;
    func_0x000107c613fc(&UNK_11040b9c0,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    FUN_1000285a8(0x112dce8c8,&UNK_10d990898);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar2);
    puVar4 = &UNK_1018be930;
    FUN_1000bdd8c(&UNK_1018be930,puVar3);
    puVar6 = puVar4;
    FUN_1003a5b88();
    func_0x000107c61574(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c5c360();
    func_0x000107c61180();
    uVar8 = uVar7;
    FUN_1003cc718();
    uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11304a480);
    puVar3 = &UNK_11040b9e8;
    func_0x000107c613fc(&UNK_11040b9e8,0x40,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined **)(puVar3 + 0x18) = puVar6;
    *(long *)(puVar3 + 0x20) = lVar2;
    *(undefined8 *)(puVar3 + 0x28) = uVar7;
    *(undefined8 *)(puVar3 + 0x30) = uVar8;
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    FUN_1000285a8(0x112dce8d0,&UNK_10d9908a0);
    func_0x000107c613fc();
    func_0x000107c61174(uVar10);
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(uVar10);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    pcVar1 = FUN_1003d1d5c;
    FUN_1000bdd8c(FUN_1003d1d5c,puVar3);
    uVar9 = 0;
    FUN_10021db98(0);
    func_0x000107c610f8();
    FUN_1003cc78c(pcVar1,uVar9);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar10);
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cc6e8);
  (*pcVar1)();
}



/* Entry: 1003cc6e8; end: 1003cc70b;  */

void FUN_1003cc6e8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cc70c; end: 1003cc70f;  */

void FUN_1003cc70c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cc710; end: 1003cc717; -[SCPlusServices subscriptionInfoProvider] */

undefined8 FUN_1003cc710(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003cc718; end: 1003cc78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1003cc718(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11308d050;
  lVar2 = *(long *)(unaff_x20 + _DAT_11308d050);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_11308d048));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1003cc78c; end: 1003cc7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cc78c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113043d38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113043d30) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003cc7e4; end: 1003cc82f;  */

void FUN_1003cc7e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cc830; end: 1003cc837;  */

void FUN_1003cc830(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


