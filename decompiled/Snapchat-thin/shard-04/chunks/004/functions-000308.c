/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103507dd4; end: 103507e53;  */

void FUN_103507dd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd18a0;
  func_0x000107c61520(&DAT_10dbd18a0,&UNK_11065e4f0);
  puRam0000000112f75060 = puVar1;
  return;
}



/* Entry: 103507e54; end: 10350885b;  */

uint FUN_103507e54(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3d8 [56];
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar3 = param_1[9];
  uVar5 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  uVar6 = param_2[10];
  uStack_100 = uVar7;
  uStack_f8 = uVar8;
  uStack_f0 = uVar6;
  uStack_e0 = uVar5;
  uStack_d8 = uVar3;
  uStack_d0 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_103507f00;
    if ((float)uVar5 == (float)uVar7) {
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_100,&uStack_300,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar3;
      func_0x000100e25fcc(uVar3,uVar4,uVar8,uVar6);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
      if ((uVar9 & 1) != 0) goto LAB_103507fa0;
    }
    else {
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_100;
LAB_10350832c:
      FUN_103507d8c(puVar2,&uStack_300,0x112db6358,&UNK_10d961e20);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
    }
LAB_103508358:
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_103507f00:
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_100;
      uVar9 = uVar4;
      uVar10 = uVar3;
      uVar11 = uVar5;
      uVar4 = uVar6;
      uVar3 = uVar8;
      uVar5 = uVar7;
LAB_103508064:
      FUN_103507d8c(puVar2,&uStack_300,0x112db6358,&UNK_10d961e20);
      func_0x000100d54e0c(uVar11,uVar10,uVar9);
      goto LAB_103508358;
    }
    FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
    FUN_103507d8c(&uStack_100,&uStack_300,0x112db6358,&UNK_10d961e20);
LAB_103507fa0:
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
    uVar3 = param_1[0xc];
    uVar5 = param_1[0xb];
    uVar4 = param_1[0xd];
    uVar8 = param_2[0xc];
    uVar7 = param_2[0xb];
    uVar6 = param_2[0xd];
    uStack_140 = uVar7;
    uStack_138 = uVar8;
    uStack_130 = uVar6;
    uStack_120 = uVar5;
    uStack_118 = uVar3;
    uStack_110 = uVar4;
    if (uVar4 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10350803c;
      if ((float)uVar5 != (float)uVar7) {
        FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_140;
        goto LAB_10350832c;
      }
      FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_140,&uStack_300,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar3;
      func_0x000100e25fcc(uVar3,uVar4,uVar8,uVar6);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
      if ((uVar9 & 1) == 0) goto LAB_103508358;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10350803c:
        FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_140;
        uVar9 = uVar4;
        uVar10 = uVar3;
        uVar11 = uVar5;
        uVar4 = uVar6;
        uVar3 = uVar8;
        uVar5 = uVar7;
        goto LAB_103508064;
      }
      FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_140,&uStack_300,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
    uVar4 = *param_1;
    func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    if ((uVar4 & 1) == 0) goto LAB_10350835c;
    uVar3 = param_1[0xf];
    uVar4 = param_1[0xe];
    uVar5 = param_1[0x10];
    uVar7 = param_2[0xf];
    uVar8 = param_2[0xe];
    uVar6 = param_2[0x10];
    uStack_180 = uVar8;
    uStack_178 = uVar7;
    uStack_170 = uVar6;
    uStack_160 = uVar4;
    uStack_158 = uVar3;
    uStack_150 = uVar5;
    if ((uVar4 & 0xff) == 2) {
      if ((uVar8 & 0xff) != 2) {
LAB_10350838c:
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar4,uVar3,uVar5);
        uVar4 = uVar8;
        uVar3 = uVar7;
        uVar5 = uVar6;
        goto LAB_1035084a8;
      }
      FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
      FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
LAB_1035081d4:
      func_0x000101556278(uVar4,uVar3,uVar5);
      uVar4 = param_1[2];
      FUN_1035066d0(uVar4,(char)param_1[3],param_2[2],*(undefined1 *)(param_2 + 3));
      if ((uVar4 & 1) != 0) {
        uStack_1b8 = param_1[0x14];
        uStack_1c0 = param_1[0x13];
        uStack_1a8 = param_1[0x16];
        uStack_1b0 = param_1[0x15];
        uStack_198 = param_1[0x18];
        uStack_1a0 = param_1[0x17];
        uStack_188 = param_1[0x1a];
        uStack_190 = param_1[0x19];
        uStack_1c8 = param_1[0x12];
        uStack_1d0 = param_1[0x11];
        uStack_208 = param_2[0x14];
        uStack_210 = param_2[0x13];
        uStack_1f8 = param_2[0x16];
        uStack_200 = param_2[0x15];
        uStack_1e8 = param_2[0x18];
        uStack_1f0 = param_2[0x17];
        uStack_1d8 = param_2[0x1a];
        uStack_1e0 = param_2[0x19];
        uStack_218 = param_2[0x12];
        uStack_220 = param_2[0x11];
        uStack_2e8 = param_1[0x14];
        uStack_2f0 = param_1[0x13];
        uStack_2d8 = param_1[0x16];
        uStack_2e0 = param_1[0x15];
        uStack_2c8 = param_1[0x18];
        uStack_2d0 = param_1[0x17];
        uStack_2b8 = param_1[0x1a];
        uStack_2c0 = param_1[0x19];
        uStack_2f8 = param_1[0x12];
        uStack_300 = param_1[0x11];
        uStack_338 = param_2[0x14];
        uStack_340 = param_2[0x13];
        uStack_328 = param_2[0x16];
        uStack_330 = param_2[0x15];
        uStack_318 = param_2[0x18];
        uStack_320 = param_2[0x17];
        uStack_348 = param_2[0x12];
        uStack_350 = param_2[0x11];
        uStack_308 = param_2[0x1a];
        uStack_310 = param_2[0x19];
        uStack_2b0 = uStack_350;
        uStack_2a8 = uStack_348;
        uStack_2a0 = uStack_340;
        uStack_298 = uStack_338;
        uStack_290 = uStack_330;
        uStack_288 = uStack_328;
        uStack_280 = uStack_320;
        uStack_278 = uStack_318;
        uStack_270 = uStack_310;
        uStack_268 = uStack_308;
        if (uStack_2f8 >> 0x3c < 0xf) {
          if (0xe < uStack_348 >> 0x3c) goto LAB_1035084b8;
          uStack_418 = param_2[0x14];
          uStack_420 = param_2[0x13];
          uStack_408 = param_2[0x16];
          uStack_410 = param_2[0x15];
          uStack_3f8 = param_2[0x18];
          uStack_400 = param_2[0x17];
          uStack_3e8 = param_2[0x1a];
          uStack_3f0 = param_2[0x19];
          uStack_428 = param_2[0x12];
          uStack_430 = param_2[0x11];
          uStack_b8 = param_1[0x12];
          uStack_c0 = param_1[0x11];
          uStack_a8 = param_1[0x14];
          uStack_b0 = param_1[0x13];
          uStack_98 = param_1[0x16];
          uStack_a0 = param_1[0x15];
          uStack_88 = param_1[0x18];
          uStack_90 = param_1[0x17];
          uStack_78 = param_1[0x1a];
          uStack_80 = param_1[0x19];
          uStack_3a0 = uStack_430;
          uStack_398 = uStack_428;
          uStack_390 = uStack_420;
          uStack_388 = uStack_418;
          uStack_380 = uStack_410;
          uStack_378 = uStack_408;
          uStack_370 = uStack_400;
          uStack_368 = uStack_3f8;
          uStack_360 = uStack_3f0;
          uStack_358 = uStack_3e8;
          FUN_103507d8c(&uStack_1d0,&uStack_480,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_480,0x112f730a8,&UNK_10dbd1870);
          puVar2 = &uStack_c0;
          FUN_1035c4a34(puVar2,&uStack_3a0);
          func_0x000103507b00(&uStack_430,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_300,0x112f730a8,&UNK_10dbd1870);
          if (((ulong)puVar2 & 1) != 0) goto LAB_1035085ec;
        }
        else if (uStack_348 >> 0x3c < 0xf) {
LAB_1035084b8:
          uStack_3a0 = uStack_300;
          uStack_398 = uStack_2f8;
          uStack_390 = uStack_2f0;
          uStack_388 = uStack_2e8;
          uStack_380 = uStack_2e0;
          uStack_378 = uStack_2d8;
          uStack_370 = uStack_2d0;
          uStack_368 = uStack_2c8;
          uStack_360 = uStack_2c0;
          uStack_358 = uStack_2b8;
          FUN_103507d8c(&uStack_1d0,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_3a0,0x112f74f28,&UNK_10dbdb200);
        }
        else {
          uStack_388 = param_1[0x14];
          uStack_390 = param_1[0x13];
          uStack_378 = param_1[0x16];
          uStack_380 = param_1[0x15];
          uStack_368 = param_1[0x18];
          uStack_370 = param_1[0x17];
          uStack_358 = param_1[0x1a];
          uStack_360 = param_1[0x19];
          uStack_398 = param_1[0x12];
          uStack_3a0 = param_1[0x11];
          FUN_103507d8c(&uStack_1d0,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_3a0,0x112f730a8,&UNK_10dbd1870);
LAB_1035085ec:
          uVar4 = param_1[4];
          uVar3 = param_2[4];
          if (*(char *)(param_2 + 5) == '\x01') {
            if (uVar3 == 0) {
              if (uVar4 == 0) goto LAB_103508634;
            }
            else if (uVar3 == 1) {
              if (uVar4 == 1) {
LAB_103508634:
                uVar9 = param_1[0x1c];
                uVar5 = param_1[0x1b];
                uVar15 = param_1[0x1e];
                uVar13 = param_1[0x1d];
                uVar10 = param_1[0x20];
                uVar6 = param_1[0x1f];
                uVar4 = param_1[0x21];
                uVar11 = param_2[0x1c];
                uVar8 = param_2[0x1b];
                uVar16 = param_2[0x1e];
                uVar14 = param_2[0x1d];
                uVar12 = param_2[0x20];
                uVar7 = param_2[0x1f];
                uVar3 = param_2[0x21];
                uStack_480 = uVar5;
                uStack_478 = uVar9;
                uStack_470 = uVar13;
                uStack_468 = uVar15;
                uStack_460 = uVar6;
                uStack_458 = uVar10;
                uStack_450 = uVar4;
                uStack_260 = uVar8;
                uStack_258 = uVar11;
                uStack_250 = uVar14;
                uStack_248 = uVar16;
                uStack_240 = uVar7;
                uStack_238 = uVar12;
                uStack_230 = uVar3;
                if (uVar9 == 0) {
                  if (uVar11 == 0) {
                    FUN_103507d8c(&uStack_480,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                    FUN_103507d8c(&uStack_260,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                    func_0x000103501774(uVar5,0,uVar13,uVar15,uVar6,uVar10,uVar4);
LAB_10350884c:
                    uVar4 = param_1[6];
                    func_0x000100e25fcc(uVar4,param_1[7],param_2[6],param_2[7]);
                    uVar1 = (uint)uVar4;
                    goto LAB_103508360;
                  }
                }
                else if (uVar11 != 0) {
                  uStack_430 = uVar5;
                  uStack_428 = uVar9;
                  uStack_420 = uVar13;
                  uStack_418 = uVar15;
                  uStack_410 = uVar6;
                  uStack_408 = uVar10;
                  uStack_400 = uVar4;
                  uStack_300 = uVar8;
                  uStack_2f8 = uVar11;
                  uStack_2f0 = uVar14;
                  uStack_2e8 = uVar16;
                  uStack_2e0 = uVar7;
                  uStack_2d8 = uVar12;
                  uStack_2d0 = uVar3;
                  FUN_103507d8c(&uStack_480,auStack_3d8,0x112f74f30,&UNK_10dbd1880);
                  FUN_103507d8c(&uStack_260,auStack_3d8,0x112f74f30,&UNK_10dbd1880);
                  puVar2 = &uStack_430;
                  FUN_103507b40(puVar2,&uStack_300);
                  func_0x000103501774(uVar8,uVar11,uVar14,uVar16,uVar7,uVar12,uVar3);
                  func_0x000103501774(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
                  if (((ulong)puVar2 & 1) != 0) goto LAB_10350884c;
                  goto LAB_10350835c;
                }
                FUN_103507d8c(&uStack_480,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                FUN_103507d8c(&uStack_260,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                func_0x000103501774(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
                func_0x000103501774(uVar8,uVar11,uVar14,uVar16,uVar7,uVar12,uVar3);
              }
            }
            else if (uVar4 == 2) goto LAB_103508634;
          }
          else if (uVar4 == uVar3) goto LAB_103508634;
        }
      }
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10350838c;
      if ((((uint)uVar8 ^ (uint)uVar4) & 1) == 0) {
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        uVar9 = uVar3;
        func_0x000100e25fcc(uVar3,uVar5,uVar7,uVar6);
        func_0x000101556278(uVar8,uVar7,uVar6);
        if ((uVar9 & 1) != 0) goto LAB_1035081d4;
      }
      else {
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar7,uVar6);
      }
LAB_1035084a8:
      func_0x000101556278(uVar4,uVar3,uVar5);
    }
  }
LAB_10350835c:
  uVar1 = 0;
LAB_103508360:
  return uVar1 & 1;
}



/* Entry: 10350885c; end: 1035088db;  */

void FUN_10350885c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1b10;
  func_0x000107c61520(&UNK_10dbd1b10,&UNK_11065e438);
  puRam0000000112f75070 = puVar1;
  return;
}



/* Entry: 1035088dc; end: 1035088ef;  */

void FUN_1035088dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035088f0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103508930)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035088f0; end: 10350899b;  */

void FUN_1035088f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1938;
  func_0x000107c61520(&UNK_10dbd1938,&UNK_11065e4f0);
  puRam0000000112f75098 = puVar1;
  return;
}



/* Entry: 10350899c; end: 10350899f;  */

void FUN_10350899c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1978;
  func_0x000107c61520(&UNK_10dbd1978,&UNK_11065e4f0);
  puRam0000000112f750b8 = puVar1;
  return;
}



/* Entry: 1035089a0; end: 1035089df;  */

void FUN_1035089a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1978;
  func_0x000107c61520(&UNK_10dbd1978,&UNK_11065e4f0);
  puRam0000000112f750b8 = puVar1;
  return;
}



/* Entry: 1035089e0; end: 1035089f3;  */

void FUN_1035089e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035089f4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103508a34)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035089f4; end: 103508a9f;  */

void FUN_1035089f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1a38;
  func_0x000107c61520(&UNK_10dbd1a38,&UNK_11065e580);
  puRam0000000112f750c0 = puVar1;
  return;
}



/* Entry: 103508aa0; end: 103508ae3;  */

void FUN_103508aa0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103508ae4; end: 103508ae7;  */

void FUN_103508ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1a78;
  func_0x000107c61520(&UNK_10dbd1a78,&UNK_11065e580);
  puRam0000000112f750e0 = puVar1;
  return;
}



/* Entry: 103508ae8; end: 103508b27;  */

void FUN_103508ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1a78;
  func_0x000107c61520(&UNK_10dbd1a78,&UNK_11065e580);
  puRam0000000112f750e0 = puVar1;
  return;
}



/* Entry: 103508b28; end: 103508b4b;  */

void FUN_103508b28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103508b4c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103508b4c; end: 103508b8b;  */

void FUN_103508b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1ae8;
  func_0x000107c61520(&UNK_10dbd1ae8,&UNK_11065e438);
  puRam0000000112f750e8 = puVar1;
  return;
}



/* Entry: 103508b8c; end: 103508ba3;  */

void FUN_103508b8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10350885c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502b14)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103508ba4; end: 103508be3;  */

void FUN_103508ba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1b50;
  func_0x000107c61520(&UNK_10dbd1b50,&UNK_11065e438);
  puRam0000000112f750f0 = puVar1;
  return;
}



/* Entry: 103508be4; end: 103508c07;  */

void FUN_103508be4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103508c08();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103508c08; end: 103508c47;  */

void FUN_103508c08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f750f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1be0;
  func_0x000107c61520(&UNK_10dbd1be0,&UNK_11065e5f8);
  puRam0000000112f750f8 = puVar1;
  return;
}



/* Entry: 103508c48; end: 103508c5b;  */

void FUN_103508c48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10350889c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103508c8c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103508c5c; end: 103508c8b;  */

void FUN_103508c5c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103508c8c; end: 103508ccb;  */

void FUN_103508c8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd1b98;
  func_0x000107c61520(&DAT_10dbd1b98,&UNK_11065e5f8);
  puRam0000000112f75100 = puVar1;
  return;
}



/* Entry: 103508ccc; end: 103508ccf;  */

void FUN_103508ccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1c48;
  func_0x000107c61520(&UNK_10dbd1c48,&UNK_11065e5f8);
  puRam0000000112f75108 = puVar1;
  return;
}



/* Entry: 103508cd0; end: 103508d0f;  */

void FUN_103508cd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1c48;
  func_0x000107c61520(&UNK_10dbd1c48,&UNK_11065e5f8);
  puRam0000000112f75108 = puVar1;
  return;
}



/* Entry: 103508d10; end: 103508e17;  */

/* WARNING: Possible PIC construction at 0x000103508d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103508d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103508d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103508da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103508dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103508de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103508da8) */
/* WARNING: Removing unreachable block (ram,0x000103508db8) */
/* WARNING: Removing unreachable block (ram,0x000103508dc0) */
/* WARNING: Removing unreachable block (ram,0x000103508dd0) */
/* WARNING: Removing unreachable block (ram,0x000103508d2c) */
/* WARNING: Removing unreachable block (ram,0x000103508d4c) */
/* WARNING: Removing unreachable block (ram,0x000103508d5c) */
/* WARNING: Removing unreachable block (ram,0x000103508d64) */
/* WARNING: Removing unreachable block (ram,0x000103508d78) */
/* WARNING: Removing unreachable block (ram,0x000103508d88) */
/* WARNING: Removing unreachable block (ram,0x000103508dd8) */
/* WARNING: Removing unreachable block (ram,0x000103508de0) */
/* WARNING: Removing unreachable block (ram,0x000103508da0) */
/* WARNING: Removing unreachable block (ram,0x000103508d70) */
/* WARNING: Removing unreachable block (ram,0x000103508d44) */
/* WARNING: Removing unreachable block (ram,0x000103508dec) */
/* WARNING: Removing unreachable block (ram,0x000103508e08) */
/* WARNING: Removing unreachable block (ram,0x000103508dfc) */

void FUN_103508d10(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103508e18; end: 103509753;  */

undefined8 * FUN_103508e18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar4 = param_2[6];
  uVar1 = param_2[7];
  func_0x00010006c00c(uVar4,uVar1);
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  uVar5 = param_2[10];
  if (uVar5 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar4 = param_2[9];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[9] = uVar4;
    param_1[10] = uVar5;
  }
  else {
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  uVar5 = param_2[0xd];
  if (uVar5 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar4 = param_2[0xc];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar5;
  }
  else {
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    param_1[0xd] = param_2[0xd];
  }
  cVar2 = *(char *)(param_2 + 0xe);
  if (cVar2 == '\x02') {
    uVar4 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0x10] = param_2[0x10];
  }
  else {
    *(char *)(param_1 + 0xe) = cVar2;
    uVar4 = param_2[0xf];
    uVar1 = param_2[0x10];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar1;
  }
  uVar5 = param_2[0x12];
  if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[0x11];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar5;
    uVar5 = param_2[0x14];
    if (uVar5 >> 0x3c < 0xf) {
      uVar4 = param_2[0x13];
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x13] = uVar4;
      param_1[0x14] = uVar5;
      uVar5 = param_2[0x17];
      if (uVar5 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
        uVar4 = param_2[0x16];
        func_0x00010006c00c(uVar4,uVar5);
        param_1[0x16] = uVar4;
        param_1[0x17] = uVar5;
      }
      else {
        uVar4 = param_2[0x15];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = uVar4;
        param_1[0x17] = param_2[0x17];
      }
      uVar5 = param_2[0x1a];
      if (uVar5 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        uVar4 = param_2[0x19];
        func_0x00010006c00c(uVar4,uVar5);
        param_1[0x19] = uVar4;
        param_1[0x1a] = uVar5;
        lVar3 = param_2[0x1c];
      }
      else {
        uVar4 = param_2[0x18];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar4;
        param_1[0x1a] = param_2[0x1a];
        lVar3 = param_2[0x1c];
      }
    }
    else {
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      uVar4 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      uVar4 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar4;
      lVar3 = param_2[0x1c];
    }
  }
  else {
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    uVar4 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar4;
    uVar4 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar4;
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    lVar3 = param_2[0x1c];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar4;
    uVar4 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar4;
  }
  else {
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = lVar3;
    uVar4 = param_2[0x1d];
    uVar1 = param_2[0x1e];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0x1d] = uVar4;
    param_1[0x1e] = uVar1;
    uVar5 = param_2[0x21];
    if (uVar5 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
      uVar4 = param_2[0x20];
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x20] = uVar4;
      param_1[0x21] = uVar5;
      return param_1;
    }
  }
  uVar4 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar4;
  param_1[0x21] = param_2[0x21];
  return param_1;
}



/* Entry: 103509754; end: 10350977f;  */

undefined8 FUN_103509754(undefined8 param_1)

{
  FUN_103509c18(param_1,&UNK_11065e5f8);
  return param_1;
}



/* Entry: 103509780; end: 103509aeb;  */

undefined8 * FUN_103509780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 8);
      goto LAB_103509804;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    param_1[10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103509804:
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[10] = param_2[10];
  }
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xb);
      goto LAB_103509858;
    }
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar1 = param_1[0xc];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103509858:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
  }
  pcVar5 = (char *)(param_1 + 0xe);
  if (*pcVar5 == '\x02') {
LAB_1035098a8:
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined8 *)pcVar5 = uVar1;
    param_1[0x10] = param_2[0x10];
  }
  else {
    if (*(byte *)(param_2 + 0xe) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035098a8;
    }
    *(byte *)(param_1 + 0xe) = *(byte *)(param_2 + 0xe) & 1;
    uVar1 = param_1[0xf];
    uVar2 = param_1[0x10];
    uVar6 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
    func_0x00010006c090(uVar1,uVar2);
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      FUN_103507acc(param_1 + 0x11);
      goto LAB_1035098fc;
    }
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar1);
    if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
      uVar3 = param_2[0x14];
      if (0xe < uVar3 >> 0x3c) {
        func_0x0001034a2460(param_1 + 0x13);
        goto LAB_1035099b4;
      }
      uVar1 = param_1[0x13];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar1);
      if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
        uVar3 = param_2[0x17];
        if (0xe < uVar3 >> 0x3c) {
          func_0x0001015d4290(param_1 + 0x15);
          goto LAB_103509a68;
        }
        *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
        uVar1 = param_1[0x16];
        param_1[0x16] = param_2[0x16];
        param_1[0x17] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_103509a68:
        uVar1 = param_2[0x15];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = uVar1;
        param_1[0x17] = param_2[0x17];
      }
      if ((ulong)param_1[0x1a] >> 0x3c < 0xf) {
        uVar3 = param_2[0x1a];
        if (0xe < uVar3 >> 0x3c) {
          func_0x0001015d4290(param_1 + 0x18);
          goto LAB_103509abc;
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        uVar1 = param_1[0x19];
        param_1[0x19] = param_2[0x19];
        param_1[0x1a] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_103509abc:
        uVar1 = param_2[0x18];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar1;
        param_1[0x1a] = param_2[0x1a];
      }
    }
    else {
LAB_1035099b4:
      uVar1 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar1;
      uVar1 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar1;
      uVar1 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar1;
      uVar1 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar1;
    }
  }
  else {
LAB_1035098fc:
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
  }
  if (param_1[0x1c] != 0) {
    lVar4 = param_2[0x1c];
    if (lVar4 != 0) {
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[0x1d];
      uVar2 = param_1[0x1e];
      uVar6 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      if ((ulong)param_1[0x21] >> 0x3c < 0xf) {
        uVar3 = param_2[0x21];
        if (uVar3 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
          uVar1 = param_1[0x20];
          param_1[0x20] = param_2[0x20];
          param_1[0x21] = uVar3;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        func_0x0001015d4290(param_1 + 0x1f);
      }
      goto LAB_1035099f0;
    }
    FUN_103509754(param_1 + 0x1b);
  }
  uVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
LAB_1035099f0:
  uVar1 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar1;
  param_1[0x21] = param_2[0x21];
  return param_1;
}



/* Entry: 103509aec; end: 103509c17;  */

int FUN_103509aec(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x44] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x38);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103509c18; end: 103509c63;  */

/* WARNING: Possible PIC construction at 0x000103509c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103509c38) */
/* WARNING: Removing unreachable block (ram,0x000103509c54) */
/* WARNING: Removing unreachable block (ram,0x000103509c48) */

void FUN_103509c18(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103509c64; end: 103509df3;  */

undefined8 * FUN_103509c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
  }
  return param_1;
}



/* Entry: 103509df4; end: 103509e8b;  */

undefined8 * FUN_103509df4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 4);
  }
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 103509e8c; end: 103509f2f;  */

int FUN_103509e8c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103509f30; end: 103509fef;  */

void FUN_103509f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd1bb4;
  func_0x000107c61520(&DAT_10dbd1bb4,&UNK_11065e5f8);
  puRam0000000112f75118 = puVar1;
  return;
}



/* Entry: 103509ff0; end: 10350a04f;  */

void FUN_103509ff0(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10350a050; end: 10350a103;  */

bool FUN_10350a050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = uVar4 >> 0x3c;
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  if (uVar5 < 0xf) {
    FUN_10350b518(&uStack_60,auStack_80,0x112f75138,&UNK_10dbd1ef0);
    func_0x000101571440(uVar1,uVar2,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    FUN_10350b518(&uStack_60,auStack_80,0x112f75138,&UNK_10dbd1ef0);
  }
  func_0x000101571440(uVar1,uVar2,uVar3,uVar4);
  return uVar5 < 0xf;
}



/* Entry: 10350a104; end: 10350a1e3;  */

bool FUN_10350a104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(ulong *)(unaff_x20 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = uVar6 >> 0x3c;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  uStack_68 = uVar4;
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  if (uVar7 < 0xf) {
    FUN_10350b518(&uStack_80,auStack_b0,0x112f75140,&UNK_10dbd1ef8);
    func_0x00010157145c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    FUN_10350b518(&uStack_80,auStack_b0,0x112f75140,&UNK_10dbd1ef8);
  }
  func_0x00010157145c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return uVar7 < 0xf;
}



/* Entry: 10350a1e4; end: 10350a22b;  */

void FUN_10350a1e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd2290,0x62,2);
  uRam0000000113807658 = uStack_38;
  uRam0000000113807650 = uStack_40;
  uRam0000000113807668 = uStack_28;
  uRam0000000113807660 = uStack_30;
  uRam0000000113807678 = uStack_18;
  uRam0000000113807670 = uStack_20;
  return;
}



/* Entry: 10350a22c; end: 10350a363;  */

/* WARNING: Removing unreachable block (ram,0x00010350a360) */

void FUN_10350a22c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 2) goto LAB_10350a2b4;
          pcVar4 = *(code **)(param_3 + 0x30);
        }
LAB_10350a2a4:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10350bd98();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_11065ea30;
        }
        else {
          if (lVar1 != 4) {
            if (lVar1 != 5) goto LAB_10350a2b4;
            pcVar4 = *(code **)(param_3 + 0x30);
            goto LAB_10350a2a4;
          }
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10350bc6c();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_11065e9a0;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10350a2b4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10350a364; end: 10350a443;  */

void FUN_10350a364(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x10))(1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 0x10))(2,param_2,param_3), unaff_x21 == 0))))
     && (FUN_10350a444(), unaff_x21 == 0)) {
    FUN_10350a4d0();
    if (unaff_x20[2] != 0) {
      (**(code **)(param_3 + 0x10))(5,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10350a444; end: 10350a4cf;  */

void FUN_10350a444(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x40);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10350bd98();
    (*pcVar1)(&uStack_60,3,&UNK_11065ea30,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10350a4d0; end: 10350a55f;  */

void FUN_10350a4d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x70);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10350bc6c();
    (*pcVar1)(&uStack_70,4,&UNK_11065e9a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10350a560; end: 10350a5b3;  */

uint FUN_10350a560(double *param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auStack_140 [48];
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
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
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  dVar7 = param_1[6];
  dVar3 = param_1[5];
  dVar13 = param_1[8];
  dVar11 = param_1[7];
  dVar8 = param_2[6];
  dVar4 = param_2[5];
  dVar6 = param_2[8];
  dVar5 = param_2[7];
  dStack_b0 = dVar4;
  dStack_a8 = dVar8;
  dStack_a0 = dVar5;
  dStack_98 = dVar6;
  dStack_90 = dVar3;
  dStack_88 = dVar7;
  dStack_80 = dVar11;
  dStack_78 = dVar13;
  if ((ulong)dVar13 >> 0x3c < 0xf) {
    if (0xe < (ulong)dVar6 >> 0x3c) goto LAB_10350b740;
    if ((dVar3 == dVar4) && (dVar7 == dVar8)) {
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      dVar9 = dVar11;
      func_0x000100e25fcc(dVar11,dVar13,dVar5,dVar6);
      func_0x000101571440(dVar4,dVar8,dVar5,dVar6);
      if (((ulong)dVar9 & 1) != 0) goto LAB_10350b620;
    }
    else {
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      func_0x000101571440(dVar4,dVar8,dVar5,dVar6);
    }
LAB_10350b894:
    func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
  }
  else {
    if ((ulong)dVar6 >> 0x3c < 0xf) {
LAB_10350b740:
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
      dVar3 = dVar4;
      dVar7 = dVar8;
      dVar11 = dVar5;
      dVar13 = dVar6;
      goto LAB_10350b894;
    }
    FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
    FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
LAB_10350b620:
    func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
    dVar7 = param_1[10];
    dVar3 = param_1[9];
    dVar13 = param_1[0xc];
    dVar11 = param_1[0xb];
    dVar8 = param_1[0xe];
    dVar4 = param_1[0xd];
    dVar9 = param_2[10];
    dVar5 = param_2[9];
    dVar14 = param_2[0xc];
    dVar12 = param_2[0xb];
    dVar10 = param_2[0xe];
    dVar6 = param_2[0xd];
    dStack_110 = dVar5;
    dStack_108 = dVar9;
    dStack_100 = dVar12;
    dStack_f8 = dVar14;
    dStack_f0 = dVar6;
    dStack_e8 = dVar10;
    dStack_e0 = dVar3;
    dStack_d8 = dVar7;
    dStack_d0 = dVar11;
    dStack_c8 = dVar13;
    dStack_c0 = dVar4;
    dStack_b8 = dVar8;
    if ((ulong)dVar8 >> 0x3c < 0xf) {
      if (0xe < (ulong)dVar10 >> 0x3c) goto LAB_10350b8a8;
      if ((((dVar3 == dVar5) && (dVar7 == dVar9)) && (dVar11 == dVar12)) && (dVar13 == dVar14)) {
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        dVar2 = dVar4;
        func_0x000100e25fcc(dVar4,dVar8,dVar6,dVar10);
        func_0x00010157145c(dVar5,dVar9,dVar12,dVar14,dVar6,dVar10);
        if (((ulong)dVar2 & 1) != 0) goto LAB_10350b6ec;
      }
      else {
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        func_0x00010157145c(dVar5,dVar9,dVar12,dVar14,dVar6,dVar10);
      }
LAB_10350ba4c:
      func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
    }
    else {
      if ((ulong)dVar10 >> 0x3c < 0xf) {
LAB_10350b8a8:
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
        dVar3 = dVar5;
        dVar7 = dVar9;
        dVar11 = dVar12;
        dVar13 = dVar14;
        dVar4 = dVar6;
        dVar8 = dVar10;
        goto LAB_10350ba4c;
      }
      FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
      FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
LAB_10350b6ec:
      func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
      if (param_1[2] == param_2[2]) {
        dVar3 = param_1[3];
        func_0x000100e25fcc(dVar3,param_1[4],param_2[3],param_2[4]);
        uVar1 = SUB84(dVar3,0);
        goto LAB_10350ba54;
      }
    }
  }
  uVar1 = 0;
LAB_10350ba54:
  return uVar1 & 1;
}



/* Entry: 10350a5b4; end: 10350a5e3;  */

undefined1  [16] FUN_10350a5b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10350a5e4; end: 10350a617;  */

void FUN_10350a5e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10350a618; end: 10350a62b;  */

undefined1  [16] FUN_10350a618(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10350a628;
  return auVar1;
}



/* Entry: 10350a62c; end: 10350a63f;  */

void FUN_10350a62c(void)

{
  FUN_10350a22c();
  return;
}



/* Entry: 10350a640; end: 10350a68f;  */

void FUN_10350a640(void)

{
  FUN_10350a364();
  return;
}



/* Entry: 10350a690; end: 10350a693;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10350a690(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10350a694; end: 10350a6cb;  */

uint FUN_10350a694(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010350c730();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10350a6cc; end: 10350a74b;  */

uint FUN_10350a6cc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_10350b560(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10350a74c; end: 10350a7eb;  */

/* WARNING: Possible PIC construction at 0x00010350a798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010350a7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010350a79c) */
/* WARNING: Removing unreachable block (ram,0x00010350a7ac) */

void FUN_10350a74c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75148 != -1) {
    func_0x000107c61568(0x112f75148,FUN_10350a1e4);
  }
  uVar5 = uRam0000000113807678;
  uVar4 = uRam0000000113807670;
  uVar3 = uRam0000000113807668;
  uVar2 = uRam0000000113807660;
  uVar1 = uRam0000000113807658;
  *param_1 = uRam0000000113807650;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10350a7ec; end: 10350a827;  */

void FUN_10350a7ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f751e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f751e8,&UNK_10dbd2218);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10350a828; end: 10350a963;  */

void FUN_10350a828(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10350a964; end: 10350a9e3;  */

uint FUN_10350a964(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_10350b560(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10350a9e4; end: 10350aa07;  */

void FUN_10350a9e4(void)

{
  func_0x000107c5fb78(0x737465736e492e,0xe700000000000000);
  uRam0000000113807680 = 0xd00000000000002f;
  uRam0000000113807688 = 0x800000010f154db0;
  return;
}



/* Entry: 10350aa08; end: 10350aa4f;  */

void FUN_10350aa08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd2250,0x33,2);
  uRam0000000113807698 = uStack_38;
  uRam0000000113807690 = uStack_40;
  uRam00000001138076a8 = uStack_28;
  uRam00000001138076a0 = uStack_30;
  uRam00000001138076b8 = uStack_18;
  uRam00000001138076b0 = uStack_20;
  return;
}



/* Entry: 10350aa50; end: 10350ab1b;  */

void FUN_10350aa50(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x30);
          goto LAB_10350aae8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x30);
          goto LAB_10350aae8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 4) goto LAB_10350aaf8;
          pcVar3 = *(code **)(param_3 + 0x30);
        }
LAB_10350aae8:
        (*pcVar3)();
      }
LAB_10350aaf8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10350ab1c; end: 10350abef;  */

void FUN_10350ab1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x10))(1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 0x10))(2,param_2,param_3), unaff_x21 == 0))))
      && ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0)))
      ) && ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 0x10))(4,param_2,param_3), unaff_x21 == 0)
            ))) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 10350abf0; end: 10350ac2b;  */

void FUN_10350abf0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 10350ac2c; end: 10350ac5b;  */

undefined1  [16] FUN_10350ac2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 10350ac5c; end: 10350ac8f;  */

void FUN_10350ac5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10350ac90; end: 10350aca3;  */

undefined1  [16] FUN_10350ac90(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10350aca0;
  return auVar1;
}



/* Entry: 10350aca4; end: 10350accb;  */

void FUN_10350aca4(void)

{
  FUN_10350aa50();
  return;
}



/* Entry: 10350accc; end: 10350accf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10350accc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10350acd0; end: 10350ad07;  */

uint FUN_10350acd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010350c6f0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10350ad08; end: 10350ad43;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10350ad08(double *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  double dVar16;
  byte *pbVar17;
  double dVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  double *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  double unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar4 = NEON_uminv(CONCAT17((char)(-(ulong)(unaff_x20[3] == param_1[3]) >> 8),
                              CONCAT16((char)-(ulong)(unaff_x20[3] == param_1[3]),
                                       CONCAT15((char)(-(ulong)(unaff_x20[2] == param_1[2]) >> 8),
                                                CONCAT14((char)-(ulong)(unaff_x20[2] == param_1[2]),
                                                         CONCAT13((char)(-(ulong)(unaff_x20[1] ==
                                                                                 param_1[1]) >> 8),
                                                                  CONCAT12((char)-(ulong)(unaff_x20[
                                                  1] == param_1[1]),
                                                  -(ushort)(*unaff_x20 == *param_1))))))),2);
  if ((uVar4 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar11 = (byte *)unaff_x20[4];
  pbVar27 = (byte *)unaff_x20[5];
  dVar16 = param_1[4];
  dVar18 = param_1[5];
  puVar8 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
    *(byte **)(puVar8 + -0x48) = unaff_x25;
    *(byte **)(puVar8 + -0x40) = unaff_x24;
    *(byte **)(puVar8 + -0x38) = unaff_x23;
    *(double *)(puVar8 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
    *(double **)(puVar8 + -0x20) = unaff_x20;
    *(byte **)(puVar8 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar8 + -8) = unaff_x30;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar27 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    uVar6 = (uint)((ulong)dVar18 >> 0x20);
    uVar23 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          ((ulong)dVar18 >> 0x3e < 3)) || ((uVar22 = 0, dVar16 != 0.0 || (dVar18 != -2.0))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar22 = (ulong)(iVar21 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = (ulong)dVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)dVar16 >> 0x20);
      if (SBORROW4(iVar21,SUB84(dVar16,0))) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar22 == (long)(iVar21 - SUB84(dVar16,0))) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar20 == 2) {
        uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar22 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)((long)dVar16 + 0x18) - *(long *)((long)dVar16 + 0x10);
        if (SBORROW8(*(long *)((long)dVar16 + 0x18),*(long *)((long)dVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar22 < 1) goto code_r0x000100e26128;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar27;
            puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar20 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar14 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (double *)((ulong)pbVar27 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar14,dVar16,dVar18);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        unaff_x22 = dVar18;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = unaff_x24;
    *(byte **)(puVar8 + -0xb8) = unaff_x23;
    *(double *)(puVar8 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
    *(double **)(puVar8 + -0xa0) = unaff_x20;
    *(byte **)(puVar8 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar25 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar26 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar19 = *(byte **)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        lVar26 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar26 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar26);
          func_0x000107c61174();
          pbVar11 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar26);
          pbVar25 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar17,pbVar19,0);
      return pbVar13;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
           (pbVar13 = pbVar27, pbVar15 = pbVar25, pbVar17 = *(byte **)(pbVar14 + 0x10),
           pbVar19 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar19 = *(byte **)(pbVar14 + 0x10);
      lVar26 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar28,*(byte **)(pbVar14 + 0x18),lVar26,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar26 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar26 = *(long *)(pbVar14 + 0x18);
        bVar29 = pbVar14[8] | (byte)lVar26;
        bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
        bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar37 = pbVar14[0x10] | (byte)lVar28;
        bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar3[1] = bVar30;
        auVar3[0] = bVar29;
        auVar3[2] = bVar31;
        auVar3[3] = bVar32;
        auVar3[4] = bVar33;
        auVar3[5] = bVar34;
        auVar3[6] = bVar35;
        auVar3[7] = bVar36;
        auVar3[8] = bVar37;
        auVar3[9] = bVar38;
        auVar3[10] = bVar39;
        auVar3[0xb] = bVar40;
        auVar3[0xc] = bVar41;
        auVar3[0xd] = bVar42;
        auVar3[0xe] = bVar43;
        auVar3[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar3,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar26 = *(long *)(pbVar14 + 0x18);
      bVar29 = pbVar14[8] | (byte)lVar26;
      bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
      bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar37 = pbVar14[0x10] | (byte)lVar28;
      bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar1[1] = bVar30;
      auVar1[0] = bVar29;
      auVar1[2] = bVar31;
      auVar1[3] = bVar32;
      auVar1[4] = bVar33;
      auVar1[5] = bVar34;
      auVar1[6] = bVar35;
      auVar1[7] = bVar36;
      auVar1[8] = bVar37;
      auVar1[9] = bVar38;
      auVar1[10] = bVar39;
      auVar1[0xb] = bVar40;
      auVar1[0xc] = bVar41;
      auVar1[0xd] = bVar42;
      auVar1[0xe] = bVar43;
      auVar1[0xf] = bVar44;
      auVar2[1] = bVar30;
      auVar2[0] = bVar29;
      auVar2[2] = bVar31;
      auVar2[3] = bVar32;
      auVar2[4] = bVar33;
      auVar2[5] = bVar34;
      auVar2[6] = bVar35;
      auVar2[7] = bVar36;
      auVar2[8] = bVar37;
      auVar2[9] = bVar38;
      auVar2[10] = bVar39;
      auVar2[0xb] = bVar40;
      auVar2[0xc] = bVar41;
      auVar2[0xd] = bVar42;
      auVar2[0xe] = bVar43;
      auVar2[0xf] = bVar44;
      auVar45 = NEON_ext(auVar1,auVar2,8,1);
      lVar26 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    dVar16 = *(double *)(pbVar14 + 8);
    dVar18 = *(double *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar26,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
    unaff_x20 = *(double **)(puVar8 + -0xa0);
    unaff_x19 = *(byte **)(puVar8 + -0x98);
    unaff_x22 = *(double *)(puVar8 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
    unaff_x24 = *(byte **)(puVar8 + -0xc0);
    unaff_x23 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 10350ad44; end: 10350ade3;  */

/* WARNING: Possible PIC construction at 0x00010350ad90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010350ada0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010350ad94) */
/* WARNING: Removing unreachable block (ram,0x00010350ada4) */

void FUN_10350ad44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75160 != -1) {
    func_0x000107c61568(0x112f75160,FUN_10350aa08);
  }
  uVar5 = uRam00000001138076b8;
  uVar4 = uRam00000001138076b0;
  uVar3 = uRam00000001138076a8;
  uVar2 = uRam00000001138076a0;
  uVar1 = uRam0000000113807698;
  *param_1 = uRam0000000113807690;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10350ade4; end: 10350ae1f;  */

void FUN_10350ade4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f751d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f751d8,&UNK_10dbd2210);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10350ae20; end: 10350af23;  */

void FUN_10350ae20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10350af24; end: 10350af87;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10350af24(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  double dVar16;
  byte *pbVar17;
  double dVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  double unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar4 = NEON_uminv(CONCAT17((char)(-(ulong)(param_1[3] == param_2[3]) >> 8),
                              CONCAT16((char)-(ulong)(param_1[3] == param_2[3]),
                                       CONCAT15((char)(-(ulong)(param_1[2] == param_2[2]) >> 8),
                                                CONCAT14((char)-(ulong)(param_1[2] == param_2[2]),
                                                         CONCAT13((char)(-(ulong)(param_1[1] ==
                                                                                 param_2[1]) >> 8),
                                                                  CONCAT12((char)-(ulong)(param_1[1]
                                                                                         == param_2[
                                                  1]),-(ushort)(*param_1 == *param_2))))))),2);
  if ((uVar4 & 1) == 0) {
    return (byte *)0x0;
  }
  dVar16 = param_2[4];
  dVar18 = param_2[5];
  pbVar11 = (byte *)param_1[4];
  pbVar27 = (byte *)param_1[5];
  puVar8 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
    *(byte **)(puVar8 + -0x48) = unaff_x25;
    *(byte **)(puVar8 + -0x40) = unaff_x24;
    *(byte **)(puVar8 + -0x38) = unaff_x23;
    *(double *)(puVar8 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
    *(ulong *)(puVar8 + -0x20) = unaff_x20;
    *(byte **)(puVar8 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar8 + -8) = unaff_x30;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar27 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    uVar6 = (uint)((ulong)dVar18 >> 0x20);
    uVar23 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          ((ulong)dVar18 >> 0x3e < 3)) || ((uVar22 = 0, dVar16 != 0.0 || (dVar18 != -2.0))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar22 = (ulong)(iVar21 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = (ulong)dVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)dVar16 >> 0x20);
      if (SBORROW4(iVar21,SUB84(dVar16,0))) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar22 == (long)(iVar21 - SUB84(dVar16,0))) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar20 == 2) {
        uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar22 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)((long)dVar16 + 0x18) - *(long *)((long)dVar16 + 0x10);
        if (SBORROW8(*(long *)((long)dVar16 + 0x18),*(long *)((long)dVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar22 < 1) goto code_r0x000100e26128;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar27;
            puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar20 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar14 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar14,dVar16,dVar18);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        unaff_x22 = dVar18;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = unaff_x24;
    *(byte **)(puVar8 + -0xb8) = unaff_x23;
    *(double *)(puVar8 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
    *(ulong *)(puVar8 + -0xa0) = unaff_x20;
    *(byte **)(puVar8 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar25 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar26 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar19 = *(byte **)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        lVar26 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar26 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar26);
          func_0x000107c61174();
          pbVar11 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar26);
          pbVar25 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar17,pbVar19,0);
      return pbVar13;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
           (pbVar13 = pbVar27, pbVar15 = pbVar25, pbVar17 = *(byte **)(pbVar14 + 0x10),
           pbVar19 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar19 = *(byte **)(pbVar14 + 0x10);
      lVar26 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar28,*(byte **)(pbVar14 + 0x18),lVar26,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar26 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar26 = *(long *)(pbVar14 + 0x18);
        bVar29 = pbVar14[8] | (byte)lVar26;
        bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
        bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar37 = pbVar14[0x10] | (byte)lVar28;
        bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar3[1] = bVar30;
        auVar3[0] = bVar29;
        auVar3[2] = bVar31;
        auVar3[3] = bVar32;
        auVar3[4] = bVar33;
        auVar3[5] = bVar34;
        auVar3[6] = bVar35;
        auVar3[7] = bVar36;
        auVar3[8] = bVar37;
        auVar3[9] = bVar38;
        auVar3[10] = bVar39;
        auVar3[0xb] = bVar40;
        auVar3[0xc] = bVar41;
        auVar3[0xd] = bVar42;
        auVar3[0xe] = bVar43;
        auVar3[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar3,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar26 = *(long *)(pbVar14 + 0x18);
      bVar29 = pbVar14[8] | (byte)lVar26;
      bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
      bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar37 = pbVar14[0x10] | (byte)lVar28;
      bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar1[1] = bVar30;
      auVar1[0] = bVar29;
      auVar1[2] = bVar31;
      auVar1[3] = bVar32;
      auVar1[4] = bVar33;
      auVar1[5] = bVar34;
      auVar1[6] = bVar35;
      auVar1[7] = bVar36;
      auVar1[8] = bVar37;
      auVar1[9] = bVar38;
      auVar1[10] = bVar39;
      auVar1[0xb] = bVar40;
      auVar1[0xc] = bVar41;
      auVar1[0xd] = bVar42;
      auVar1[0xe] = bVar43;
      auVar1[0xf] = bVar44;
      auVar2[1] = bVar30;
      auVar2[0] = bVar29;
      auVar2[2] = bVar31;
      auVar2[3] = bVar32;
      auVar2[4] = bVar33;
      auVar2[5] = bVar34;
      auVar2[6] = bVar35;
      auVar2[7] = bVar36;
      auVar2[8] = bVar37;
      auVar2[9] = bVar38;
      auVar2[10] = bVar39;
      auVar2[0xb] = bVar40;
      auVar2[0xc] = bVar41;
      auVar2[0xd] = bVar42;
      auVar2[0xe] = bVar43;
      auVar2[0xf] = bVar44;
      auVar45 = NEON_ext(auVar1,auVar2,8,1);
      lVar26 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    dVar16 = *(double *)(pbVar14 + 8);
    dVar18 = *(double *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar26,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
    unaff_x20 = *(ulong *)(puVar8 + -0xa0);
    unaff_x19 = *(byte **)(puVar8 + -0x98);
    unaff_x22 = *(double *)(puVar8 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
    unaff_x24 = *(byte **)(puVar8 + -0xc0);
    unaff_x23 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 10350af88; end: 10350afef;  */

void FUN_10350af88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002f;
  *param_5 = 0x800000010f154db0;
  return;
}



/* Entry: 10350aff0; end: 10350b037;  */

void FUN_10350aff0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd2220,0x22,2);
  uRam00000001138076d8 = uStack_38;
  uRam00000001138076d0 = uStack_40;
  uRam00000001138076e8 = uStack_28;
  uRam00000001138076e0 = uStack_30;
  uRam00000001138076f8 = uStack_18;
  uRam00000001138076f0 = uStack_20;
  return;
}



/* Entry: 10350b038; end: 10350b0cf;  */

void FUN_10350b038(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10350b08c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010350b0a8;
  pcVar3 = *(code **)(param_3 + 0x30);
  goto LAB_10350b074;
code_r0x00010350b0a8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x30);
LAB_10350b074:
    (*pcVar3)();
  }
  goto LAB_10350b08c;
}



/* Entry: 10350b0d0; end: 10350b173;  */

void FUN_10350b0d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_1 == 0) || ((**(code **)(param_7 + 0x10))(1,param_6,param_7), unaff_x21 == 0)) &&
     ((param_2 == 0 || ((**(code **)(param_7 + 0x10))(param_2,2,param_6,param_7), unaff_x21 == 0))))
  {
    func_0x000100076224(param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10350b174; end: 10350b1a3;  */

void FUN_10350b174(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 10350b1a4; end: 10350b1ff;  */

undefined1  [16]
FUN_10350b1a4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10350b200; end: 10350b207;  */

undefined8 FUN_10350b200(void)

{
  return 1;
}



/* Entry: 10350b208; end: 10350b237;  */

undefined1  [16] FUN_10350b208(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10350b238; end: 10350b26b;  */

void FUN_10350b238(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10350b26c; end: 10350b27f;  */

undefined1  [16] FUN_10350b26c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10350b27c;
  return auVar1;
}



/* Entry: 10350b280; end: 10350b2b7;  */

void FUN_10350b280(void)

{
  FUN_10350b038();
  return;
}



/* Entry: 10350b2b8; end: 10350b2bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10350b2b8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10350b2bc; end: 10350b2f3;  */

uint FUN_10350b2bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10350c6b0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10350b2f4; end: 10350b31f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10350b2f4(double *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  double dVar16;
  byte *pbVar17;
  double dVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  double *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  double unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  bVar8 = false;
  if ((*unaff_x20 == *param_1) && (bVar8 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar8 = unaff_x20[1] == param_1[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  pbVar11 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  dVar16 = param_1[2];
  dVar18 = param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(double *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(double **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar20 = uVar4 >> 0x1e;
    uVar5 = (uint)((ulong)dVar18 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          ((ulong)dVar18 >> 0x3e < 3)) || ((uVar22 = 0, dVar16 != 0.0 || (dVar18 != -2.0))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar22 = (ulong)(iVar21 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = (ulong)dVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)dVar16 >> 0x20);
      if (SBORROW4(iVar21,SUB84(dVar16,0))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar22 == (long)(iVar21 - SUB84(dVar16,0))) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar20 == 2) {
        uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar22 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)((long)dVar16 + 0x18) - *(long *)((long)dVar16 + 0x10);
        if (SBORROW8(*(long *)((long)dVar16 + 0x18),*(long *)((long)dVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar22 < 1) goto code_r0x000100e26128;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar27;
            puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar20 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (double *)((ulong)pbVar27 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,dVar16,dVar18);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = dVar18;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(double *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(double **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar25 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar26 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar19 = *(byte **)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        lVar26 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar26 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar26);
          func_0x000107c61174();
          pbVar11 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar26);
          pbVar25 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar17,pbVar19,0);
      return pbVar13;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
           (pbVar13 = pbVar27, pbVar15 = pbVar25, pbVar17 = *(byte **)(pbVar14 + 0x10),
           pbVar19 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar19 = *(byte **)(pbVar14 + 0x10);
      lVar26 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar28,*(byte **)(pbVar14 + 0x18),lVar26,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar26 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar26 = *(long *)(pbVar14 + 0x18);
        bVar29 = pbVar14[8] | (byte)lVar26;
        bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
        bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar37 = pbVar14[0x10] | (byte)lVar28;
        bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar3[1] = bVar30;
        auVar3[0] = bVar29;
        auVar3[2] = bVar31;
        auVar3[3] = bVar32;
        auVar3[4] = bVar33;
        auVar3[5] = bVar34;
        auVar3[6] = bVar35;
        auVar3[7] = bVar36;
        auVar3[8] = bVar37;
        auVar3[9] = bVar38;
        auVar3[10] = bVar39;
        auVar3[0xb] = bVar40;
        auVar3[0xc] = bVar41;
        auVar3[0xd] = bVar42;
        auVar3[0xe] = bVar43;
        auVar3[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar3,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar26 = *(long *)(pbVar14 + 0x18);
      bVar29 = pbVar14[8] | (byte)lVar26;
      bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
      bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar37 = pbVar14[0x10] | (byte)lVar28;
      bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar1[1] = bVar30;
      auVar1[0] = bVar29;
      auVar1[2] = bVar31;
      auVar1[3] = bVar32;
      auVar1[4] = bVar33;
      auVar1[5] = bVar34;
      auVar1[6] = bVar35;
      auVar1[7] = bVar36;
      auVar1[8] = bVar37;
      auVar1[9] = bVar38;
      auVar1[10] = bVar39;
      auVar1[0xb] = bVar40;
      auVar1[0xc] = bVar41;
      auVar1[0xd] = bVar42;
      auVar1[0xe] = bVar43;
      auVar1[0xf] = bVar44;
      auVar2[1] = bVar30;
      auVar2[0] = bVar29;
      auVar2[2] = bVar31;
      auVar2[3] = bVar32;
      auVar2[4] = bVar33;
      auVar2[5] = bVar34;
      auVar2[6] = bVar35;
      auVar2[7] = bVar36;
      auVar2[8] = bVar37;
      auVar2[9] = bVar38;
      auVar2[10] = bVar39;
      auVar2[0xb] = bVar40;
      auVar2[0xc] = bVar41;
      auVar2[0xd] = bVar42;
      auVar2[0xe] = bVar43;
      auVar2[0xf] = bVar44;
      auVar45 = NEON_ext(auVar1,auVar2,8,1);
      lVar26 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    dVar16 = *(double *)(pbVar14 + 8);
    dVar18 = *(double *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar26,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(double **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(double *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10350b320; end: 10350b3bf;  */

/* WARNING: Possible PIC construction at 0x00010350b36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010350b37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010350b370) */
/* WARNING: Removing unreachable block (ram,0x00010350b380) */

void FUN_10350b320(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75178 != -1) {
    func_0x000107c61568(0x112f75178,FUN_10350aff0);
  }
  uVar5 = uRam00000001138076f8;
  uVar4 = uRam00000001138076f0;
  uVar3 = uRam00000001138076e8;
  uVar2 = uRam00000001138076e0;
  uVar1 = uRam00000001138076d8;
  *param_1 = uRam00000001138076d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10350b3c0; end: 10350b3fb;  */

void FUN_10350b3c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f751c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f751c8,&UNK_10dbd2208);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10350b3fc; end: 10350b4ef;  */

void FUN_10350b3fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10350b4f0; end: 10350b517;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10350b4f0(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  double dVar16;
  byte *pbVar17;
  double dVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  double unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  bVar8 = false;
  if ((*param_1 == *param_2) && (bVar8 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar8 = param_1[1] == param_2[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  dVar16 = param_2[2];
  dVar18 = param_2[3];
  pbVar11 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(double *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar20 = uVar4 >> 0x1e;
    uVar5 = (uint)((ulong)dVar18 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          ((ulong)dVar18 >> 0x3e < 3)) || ((uVar22 = 0, dVar16 != 0.0 || (dVar18 != -2.0))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar22 = (ulong)(iVar21 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = (ulong)dVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)dVar16 >> 0x20);
      if (SBORROW4(iVar21,SUB84(dVar16,0))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar22 == (long)(iVar21 - SUB84(dVar16,0))) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar20 == 2) {
        uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar22 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)((long)dVar16 + 0x18) - *(long *)((long)dVar16 + 0x10);
        if (SBORROW8(*(long *)((long)dVar16 + 0x18),*(long *)((long)dVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar22 < 1) goto code_r0x000100e26128;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar27;
            puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar20 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,dVar16,dVar18);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = dVar18;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(double *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar25 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar26 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar19 = *(byte **)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        lVar26 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar26 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar26);
          func_0x000107c61174();
          pbVar11 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar26);
          pbVar25 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar17,pbVar19,0);
      return pbVar13;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar14;
        pbVar19 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
           (pbVar13 = pbVar27, pbVar15 = pbVar25, pbVar17 = *(byte **)(pbVar14 + 0x10),
           pbVar19 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar19 = *(byte **)(pbVar14 + 0x10);
      lVar26 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar28,*(byte **)(pbVar14 + 0x18),lVar26,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar26 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar26 = *(long *)(pbVar14 + 0x18);
        bVar29 = pbVar14[8] | (byte)lVar26;
        bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
        bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar37 = pbVar14[0x10] | (byte)lVar28;
        bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar3[1] = bVar30;
        auVar3[0] = bVar29;
        auVar3[2] = bVar31;
        auVar3[3] = bVar32;
        auVar3[4] = bVar33;
        auVar3[5] = bVar34;
        auVar3[6] = bVar35;
        auVar3[7] = bVar36;
        auVar3[8] = bVar37;
        auVar3[9] = bVar38;
        auVar3[10] = bVar39;
        auVar3[0xb] = bVar40;
        auVar3[0xc] = bVar41;
        auVar3[0xd] = bVar42;
        auVar3[0xe] = bVar43;
        auVar3[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar3,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar26 = *(long *)(pbVar14 + 0x18);
      bVar29 = pbVar14[8] | (byte)lVar26;
      bVar30 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
      bVar31 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar32 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar33 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar34 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar35 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar36 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar37 = pbVar14[0x10] | (byte)lVar28;
      bVar38 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar39 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar40 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar41 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar42 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar43 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar44 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar1[1] = bVar30;
      auVar1[0] = bVar29;
      auVar1[2] = bVar31;
      auVar1[3] = bVar32;
      auVar1[4] = bVar33;
      auVar1[5] = bVar34;
      auVar1[6] = bVar35;
      auVar1[7] = bVar36;
      auVar1[8] = bVar37;
      auVar1[9] = bVar38;
      auVar1[10] = bVar39;
      auVar1[0xb] = bVar40;
      auVar1[0xc] = bVar41;
      auVar1[0xd] = bVar42;
      auVar1[0xe] = bVar43;
      auVar1[0xf] = bVar44;
      auVar2[1] = bVar30;
      auVar2[0] = bVar29;
      auVar2[2] = bVar31;
      auVar2[3] = bVar32;
      auVar2[4] = bVar33;
      auVar2[5] = bVar34;
      auVar2[6] = bVar35;
      auVar2[7] = bVar36;
      auVar2[8] = bVar37;
      auVar2[9] = bVar38;
      auVar2[10] = bVar39;
      auVar2[0xb] = bVar40;
      auVar2[0xc] = bVar41;
      auVar2[0xd] = bVar42;
      auVar2[0xe] = bVar43;
      auVar2[0xf] = bVar44;
      auVar45 = NEON_ext(auVar1,auVar2,8,1);
      lVar26 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    dVar16 = *(double *)(pbVar14 + 8);
    dVar18 = *(double *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar26,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(double *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10350b518; end: 10350b55f;  */

undefined8 FUN_10350b518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10350b560; end: 10350ba77;  */

uint FUN_10350b560(double *param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auStack_140 [48];
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
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
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  dVar7 = param_1[6];
  dVar3 = param_1[5];
  dVar13 = param_1[8];
  dVar11 = param_1[7];
  dVar8 = param_2[6];
  dVar4 = param_2[5];
  dVar6 = param_2[8];
  dVar5 = param_2[7];
  dStack_b0 = dVar4;
  dStack_a8 = dVar8;
  dStack_a0 = dVar5;
  dStack_98 = dVar6;
  dStack_90 = dVar3;
  dStack_88 = dVar7;
  dStack_80 = dVar11;
  dStack_78 = dVar13;
  if ((ulong)dVar13 >> 0x3c < 0xf) {
    if (0xe < (ulong)dVar6 >> 0x3c) goto LAB_10350b740;
    if ((dVar3 == dVar4) && (dVar7 == dVar8)) {
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      dVar9 = dVar11;
      func_0x000100e25fcc(dVar11,dVar13,dVar5,dVar6);
      func_0x000101571440(dVar4,dVar8,dVar5,dVar6);
      if (((ulong)dVar9 & 1) != 0) goto LAB_10350b620;
    }
    else {
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      func_0x000101571440(dVar4,dVar8,dVar5,dVar6);
    }
LAB_10350b894:
    func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
  }
  else {
    if ((ulong)dVar6 >> 0x3c < 0xf) {
LAB_10350b740:
      FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
      func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
      dVar3 = dVar4;
      dVar7 = dVar8;
      dVar11 = dVar5;
      dVar13 = dVar6;
      goto LAB_10350b894;
    }
    FUN_10350b518(&dStack_90,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
    FUN_10350b518(&dStack_b0,&dStack_e0,0x112f75138,&UNK_10dbd1ef0);
LAB_10350b620:
    func_0x000101571440(dVar3,dVar7,dVar11,dVar13);
    dVar7 = param_1[10];
    dVar3 = param_1[9];
    dVar13 = param_1[0xc];
    dVar11 = param_1[0xb];
    dVar8 = param_1[0xe];
    dVar4 = param_1[0xd];
    dVar9 = param_2[10];
    dVar5 = param_2[9];
    dVar14 = param_2[0xc];
    dVar12 = param_2[0xb];
    dVar10 = param_2[0xe];
    dVar6 = param_2[0xd];
    dStack_110 = dVar5;
    dStack_108 = dVar9;
    dStack_100 = dVar12;
    dStack_f8 = dVar14;
    dStack_f0 = dVar6;
    dStack_e8 = dVar10;
    dStack_e0 = dVar3;
    dStack_d8 = dVar7;
    dStack_d0 = dVar11;
    dStack_c8 = dVar13;
    dStack_c0 = dVar4;
    dStack_b8 = dVar8;
    if ((ulong)dVar8 >> 0x3c < 0xf) {
      if (0xe < (ulong)dVar10 >> 0x3c) goto LAB_10350b8a8;
      if ((((dVar3 == dVar5) && (dVar7 == dVar9)) && (dVar11 == dVar12)) && (dVar13 == dVar14)) {
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        dVar2 = dVar4;
        func_0x000100e25fcc(dVar4,dVar8,dVar6,dVar10);
        func_0x00010157145c(dVar5,dVar9,dVar12,dVar14,dVar6,dVar10);
        if (((ulong)dVar2 & 1) != 0) goto LAB_10350b6ec;
      }
      else {
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        func_0x00010157145c(dVar5,dVar9,dVar12,dVar14,dVar6,dVar10);
      }
LAB_10350ba4c:
      func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
    }
    else {
      if ((ulong)dVar10 >> 0x3c < 0xf) {
LAB_10350b8a8:
        FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
        func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
        dVar3 = dVar5;
        dVar7 = dVar9;
        dVar11 = dVar12;
        dVar13 = dVar14;
        dVar4 = dVar6;
        dVar8 = dVar10;
        goto LAB_10350ba4c;
      }
      FUN_10350b518(&dStack_e0,auStack_140,0x112f75140,&UNK_10dbd1ef8);
      FUN_10350b518(&dStack_110,auStack_140,0x112f75140,&UNK_10dbd1ef8);
LAB_10350b6ec:
      func_0x00010157145c(dVar3,dVar7,dVar11,dVar13,dVar4,dVar8);
      if (param_1[2] == param_2[2]) {
        dVar3 = param_1[3];
        func_0x000100e25fcc(dVar3,param_1[4],param_2[3],param_2[4]);
        uVar1 = SUB84(dVar3,0);
        goto LAB_10350ba54;
      }
    }
  }
  uVar1 = 0;
LAB_10350ba54:
  return uVar1 & 1;
}



/* Entry: 10350ba78; end: 10350bb37;  */

void FUN_10350ba78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1f70;
  func_0x000107c61520(&UNK_10dbd1f70,&UNK_11065e910);
  puRam0000000112f75150 = puVar1;
  return;
}



/* Entry: 10350bb38; end: 10350bb5b;  */

void FUN_10350bb38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10350bb5c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10350bb5c; end: 10350bb9b;  */

void FUN_10350bb5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1f48;
  func_0x000107c61520(&UNK_10dbd1f48,&UNK_11065e910);
  puRam0000000112f75188 = puVar1;
  return;
}



/* Entry: 10350bb9c; end: 10350bbb3;  */

void FUN_10350bb9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10350ba78();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_1015719bc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10350bbb4; end: 10350bbf3;  */

void FUN_10350bbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1fb0;
  func_0x000107c61520(&UNK_10dbd1fb0,&UNK_11065e910);
  puRam0000000112f75190 = puVar1;
  return;
}



/* Entry: 10350bbf4; end: 10350bc17;  */

void FUN_10350bbf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10350bc18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10350bc18; end: 10350bc57;  */

void FUN_10350bc18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd2020;
  func_0x000107c61520(&UNK_10dbd2020,&UNK_11065e9a0);
  puRam0000000112f75198 = puVar1;
  return;
}



/* Entry: 10350bc58; end: 10350bc6b;  */

void FUN_10350bc58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10350bab8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10350bc6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10350bc6c; end: 10350bcab;  */

void FUN_10350bc6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f751a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd1fd8;
  func_0x000107c61520(&DAT_10dbd1fd8,&UNK_11065e9a0);
  puRam0000000112f751a0 = puVar1;
  return;
}



/* Entry: 10350bcac; end: 10350bcaf;  */

void FUN_10350bcac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f751a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd2088;
  func_0x000107c61520(&UNK_10dbd2088,&UNK_11065e9a0);
  puRam0000000112f751a8 = puVar1;
  return;
}


