/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10321db00; end: 10321db27;  */

void FUN_10321db00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010442f38c();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10321db28; end: 10321dbab;  */

long FUN_10321db28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 10321dbac; end: 10321dc03;  */

long FUN_10321dbac(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  FUN_10321dc04();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  return lVar1;
}



/* Entry: 10321dc04; end: 10321dc23;  */

void FUN_10321dc04(void)

{
  func_0x000107c61168(&PTR_PTR_112f4d398);
  return;
}



/* Entry: 10321dc24; end: 10321e303;  */

uint FUN_10321dc24(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined1 auStack_410 [64];
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
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
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  long lStack_2b8;
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
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lVar8;
  
  uStack_258 = param_1[5];
  uStack_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_240 = param_1[8];
  lVar7 = param_1[9];
  uStack_278 = param_1[1];
  uStack_280 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  lVar8 = param_1[10];
  uVar2 = param_1[0xb];
  uStack_308 = param_2[1];
  uStack_310 = *param_2;
  uStack_2f8 = param_2[3];
  uStack_300 = param_2[2];
  uStack_2e8 = param_2[5];
  uStack_2f0 = param_2[4];
  uStack_2d8 = param_2[7];
  uStack_2e0 = param_2[6];
  uStack_2d0 = param_2[8];
  lVar9 = param_2[9];
  lVar1 = param_2[10];
  uVar3 = param_2[0xb];
  puVar6 = &UNK_10db9f3e8;
  func_0x000107c614e0(&UNK_10db9f3e8);
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    puStack_428 = (undefined8 *)0x0;
  }
  else {
    lStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_f0 = uStack_130;
    lStack_e8 = lStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    uStack_c0 = uStack_100;
    uStack_b8 = uStack_f8;
    FUN_10321fdb4(&uStack_130,&uStack_170);
    puStack_428 = &uStack_f0;
    func_0x000103226434(puStack_428,&uStack_280,puVar6);
    FUN_10321fe28(&uStack_b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puStack_428 == (undefined8 *)0x0) {
      puStack_428 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c615e8(puStack_428);
    }
  }
  puVar6 = &UNK_10db9f3e8;
  func_0x000107c614e0(&UNK_10db9f3e8);
  lStack_388 = param_2[1];
  uStack_390 = *param_2;
  uStack_378 = param_2[3];
  uStack_380 = param_2[2];
  uStack_368 = param_2[5];
  uStack_370 = param_2[4];
  uStack_358 = param_2[7];
  uStack_360 = param_2[6];
  if (lStack_388 == 0) {
    func_0x000107c61574();
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lStack_168 = param_2[1];
    uStack_170 = *param_2;
    uStack_158 = param_2[3];
    uStack_160 = param_2[2];
    uStack_148 = param_2[5];
    uStack_150 = param_2[4];
    uStack_138 = param_2[7];
    uStack_140 = param_2[6];
    uStack_130 = uStack_170;
    lStack_128 = lStack_168;
    uStack_120 = uStack_160;
    uStack_118 = uStack_158;
    uStack_110 = uStack_150;
    uStack_108 = uStack_148;
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    FUN_10321fdb4(&uStack_170,&uStack_1b0);
    puVar12 = &uStack_130;
    func_0x000103226434(puVar12,&uStack_310,puVar6);
    FUN_10321fe28(&uStack_390,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puVar12 != (undefined8 *)0x0) {
      func_0x000107c615e8(puVar12);
    }
  }
  puVar6 = &UNK_10db9f408;
  func_0x000107c614e0(&UNK_10db9f408);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
LAB_10321de60:
    puStack_430 = (undefined8 *)0x0;
  }
  else {
    lStack_1a8 = lStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    lStack_168 = lStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    FUN_10321fdb4(&uStack_1b0,&uStack_1f0);
    puVar14 = &uStack_170;
    func_0x000103226410(puVar14,&uStack_280,puVar6);
    FUN_10321fe28(&uStack_b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puVar14 == (undefined8 *)0x0) goto LAB_10321de60;
    puStack_430 = puVar14;
    func_0x000107c49820();
    func_0x000107c61170(puVar14);
  }
  puVar6 = &UNK_10db9f408;
  func_0x000107c614e0(&UNK_10db9f408);
  if (lStack_388 == 0) {
    func_0x000107c61574();
LAB_10321def4:
    puStack_438 = (undefined8 *)0x0;
  }
  else {
    lStack_1e8 = lStack_388;
    uStack_1f0 = uStack_390;
    uStack_1d8 = uStack_378;
    uStack_1e0 = uStack_380;
    uStack_1c8 = uStack_368;
    uStack_1d0 = uStack_370;
    uStack_1b8 = uStack_358;
    uStack_1c0 = uStack_360;
    lStack_1a8 = lStack_388;
    uStack_1b0 = uStack_390;
    uStack_198 = uStack_378;
    uStack_1a0 = uStack_380;
    uStack_188 = uStack_368;
    uStack_190 = uStack_370;
    uStack_178 = uStack_358;
    uStack_180 = uStack_360;
    FUN_10321fdb4(&uStack_1f0,&uStack_230);
    puVar14 = &uStack_1b0;
    func_0x000103226410(puVar14,&uStack_310,puVar6);
    FUN_10321fe28(&uStack_390,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puVar14 == (undefined8 *)0x0) goto LAB_10321def4;
    puStack_438 = puVar14;
    func_0x000107c49820();
    func_0x000107c61170(puVar14);
  }
  puVar6 = &UNK_10db9f390;
  func_0x000107c614e0(&UNK_10db9f390);
  if (lVar8 == 0) {
    func_0x000107c61574();
LAB_10321df5c:
    uVar4 = 1;
  }
  else {
    func_0x000107c61434(lVar8);
    FUN_10322696c(lVar7,lVar8,uVar2,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(lVar8);
    if (lVar7 == 0) goto LAB_10321df5c;
    lVar8 = lVar7;
    func_0x000107c3ebcc(lVar7);
    uVar4 = (uint)lVar8;
    func_0x000107c61170(lVar7);
  }
  puVar6 = &UNK_10db9f390;
  func_0x000107c614e0(&UNK_10db9f390);
  if (lVar1 == 0) {
    func_0x000107c61574();
LAB_10321dfc4:
    uVar5 = 1;
  }
  else {
    func_0x000107c61434(lVar1);
    FUN_10322696c(lVar9,lVar1,uVar3,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(lVar1);
    if (lVar9 == 0) goto LAB_10321dfc4;
    lVar8 = lVar9;
    func_0x000107c3ebcc(lVar9);
    uVar5 = (uint)lVar8;
    func_0x000107c61170(lVar9);
  }
  puVar6 = &UNK_10db9f370;
  func_0x000107c614e0(&UNK_10db9f370);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    puVar14 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    lStack_228 = lStack_a8;
    uStack_230 = uStack_b0;
    uStack_218 = uStack_98;
    uStack_220 = uStack_a0;
    uStack_208 = uStack_88;
    uStack_210 = uStack_90;
    uStack_1f8 = uStack_78;
    uStack_200 = uStack_80;
    lStack_1e8 = lStack_a8;
    uStack_1f0 = uStack_b0;
    uStack_1d8 = uStack_98;
    uStack_1e0 = uStack_a0;
    uStack_1c8 = uStack_88;
    uStack_1d0 = uStack_90;
    uStack_1b8 = uStack_78;
    uStack_1c0 = uStack_80;
    FUN_10321fdb4(&uStack_230,&uStack_2c0);
    puVar14 = &uStack_1f0;
    puVar13 = &uStack_280;
    FUN_1032262f8(puVar14,puVar13,puVar6);
    FUN_10321fe28(&uStack_b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
  }
  puVar6 = &UNK_10db9f370;
  func_0x000107c614e0(&UNK_10db9f370);
  if (lStack_388 == 0) {
    func_0x000107c61574();
    puVar11 = puVar13;
joined_r0x00010321e0f0:
    puVar13 = puVar11;
    if (puVar13 != (undefined8 *)0x0) goto LAB_10321e264;
  }
  else {
    lStack_2b8 = lStack_388;
    uStack_2c0 = uStack_390;
    uStack_2a8 = uStack_378;
    uStack_2b0 = uStack_380;
    uStack_298 = uStack_368;
    uStack_2a0 = uStack_370;
    uStack_288 = uStack_358;
    uStack_290 = uStack_360;
    lStack_228 = lStack_388;
    uStack_230 = uStack_390;
    uStack_218 = uStack_378;
    uStack_220 = uStack_380;
    uStack_208 = uStack_368;
    uStack_210 = uStack_370;
    uStack_1f8 = uStack_358;
    uStack_200 = uStack_360;
    FUN_10321fdb4(&uStack_2c0,&uStack_350);
    puVar10 = &uStack_230;
    puVar11 = &uStack_310;
    FUN_1032262f8(puVar10,puVar11,puVar6);
    FUN_10321fe28(&uStack_390,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puVar13 == (undefined8 *)0x0) goto joined_r0x00010321e0f0;
    if (puVar11 == (undefined8 *)0x0) goto LAB_10321e264;
    if ((puVar14 == puVar10) && (puVar13 == puVar11)) {
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar11);
    }
    else {
      func_0x000107c605b8(puVar14,puVar13,puVar10,puVar11,0);
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar11);
      if (((ulong)puVar14 & 1) == 0) {
        return 0;
      }
    }
  }
  puVar6 = &UNK_10db9f3c8;
  func_0x000107c614e0(&UNK_10db9f3c8);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    puVar14 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    lStack_348 = lStack_a8;
    uStack_350 = uStack_b0;
    uStack_338 = uStack_98;
    uStack_340 = uStack_a0;
    uStack_328 = uStack_88;
    uStack_330 = uStack_90;
    uStack_318 = uStack_78;
    uStack_320 = uStack_80;
    lStack_2b8 = lStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    FUN_10321fdb4(&uStack_350,&uStack_3d0);
    puVar14 = &uStack_2c0;
    puVar13 = &uStack_280;
    FUN_1032262f8(puVar14,puVar13,puVar6);
    FUN_10321fe28(&uStack_b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
  }
  puVar6 = &UNK_10db9f3c8;
  func_0x000107c614e0(&UNK_10db9f3c8);
  if (lStack_388 == 0) {
    func_0x000107c61574();
    puVar11 = puVar13;
  }
  else {
    lStack_3c8 = lStack_388;
    uStack_3d0 = uStack_390;
    uStack_3b8 = uStack_378;
    uStack_3c0 = uStack_380;
    uStack_3a8 = uStack_368;
    uStack_3b0 = uStack_370;
    uStack_398 = uStack_358;
    uStack_3a0 = uStack_360;
    lStack_348 = lStack_388;
    uStack_350 = uStack_390;
    uStack_338 = uStack_378;
    uStack_340 = uStack_380;
    uStack_328 = uStack_368;
    uStack_330 = uStack_370;
    uStack_318 = uStack_358;
    uStack_320 = uStack_360;
    FUN_10321fdb4(&uStack_3d0,auStack_410);
    puVar10 = &uStack_350;
    puVar11 = &uStack_310;
    FUN_1032262f8(puVar10,puVar11,puVar6);
    FUN_10321fe28(&uStack_390,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar6);
    if (puVar13 != (undefined8 *)0x0) {
      if (puVar11 != (undefined8 *)0x0) {
        if ((puVar14 == puVar10) && (puVar13 == puVar11)) {
          func_0x000107c6142c(puVar13);
          func_0x000107c6142c(puVar11);
        }
        else {
          func_0x000107c605b8(puVar14,puVar13,puVar10,puVar11,0);
          func_0x000107c6142c(puVar13);
          func_0x000107c6142c(puVar11);
          if (((ulong)puVar14 & 1) == 0) {
            return 0;
          }
        }
        goto LAB_10321e2c8;
      }
      goto LAB_10321e264;
    }
  }
  puVar13 = puVar11;
  if (puVar13 == (undefined8 *)0x0) {
LAB_10321e2c8:
    if (puStack_428 == (undefined8 *)0x0) {
      if (puVar12 != (undefined8 *)0x0) {
        return 0;
      }
    }
    else {
      if (puVar12 == (undefined8 *)0x0) {
        return 0;
      }
      if (puStack_428 != puVar12) {
        return 0;
      }
    }
    if (puStack_430 == puStack_438) {
      return uVar4 ^ uVar5 ^ 1;
    }
    return 0;
  }
LAB_10321e264:
  func_0x000107c6142c(puVar13);
  return 0;
}



/* Entry: 10321e304; end: 10321e4d7;  */

void FUN_10321e304(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [96];
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
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar1 = &UNK_110627e18;
  func_0x000107c613fc(&UNK_110627e18,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  puVar2 = &UNK_110627e40;
  func_0x000107c613fc(&UNK_110627e40,0x78,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar3;
  *(undefined8 *)(puVar2 + 0x50) = uVar5;
  *(undefined8 *)(puVar2 + 0x48) = uVar4;
  uVar3 = param_1[8];
  uVar5 = param_1[0xb];
  uVar4 = param_1[10];
  *(undefined8 *)(puVar2 + 0x60) = param_1[9];
  *(undefined8 *)(puVar2 + 0x58) = uVar3;
  *(undefined8 *)(puVar2 + 0x70) = uVar5;
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  func_0x0001000285a8(0x112f4d400,&UNK_10db9f360);
  func_0x000107c613fc();
  FUN_10321f978(&uStack_90,auStack_f0,0x112f4d408,&UNK_10db9f368);
  func_0x0001000b64ac(0x10321f96c,puVar2);
  return;
}



/* Entry: 10321e4d8; end: 10321ec8f;  */

void FUN_10321e4d8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 auStack_368 [37];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428(param_2 + 0x10,auStack_118,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    FUN_10321f9c0(&uStack_240);
    func_0x000107c610b4(auStack_368,&uStack_240,0x128);
    func_0x000100087f6c(auStack_368);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
  uStack_d8 = param_3[5];
  uStack_e0 = param_3[4];
  uStack_c8 = param_3[7];
  uStack_d0 = param_3[6];
  uStack_c0 = param_3[8];
  uStack_f8 = param_3[1];
  uStack_100 = *param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  puVar2 = &UNK_10db9f370;
  func_0x000107c614e0(&UNK_10db9f370);
  lStack_3a8 = param_3[1];
  uStack_3b0 = *param_3;
  uStack_398 = param_3[3];
  uStack_3a0 = param_3[2];
  uStack_388 = param_3[5];
  uStack_390 = param_3[4];
  uStack_378 = param_3[7];
  uStack_380 = param_3[6];
  if (lStack_3a8 == 0) {
    func_0x000107c61574();
    puVar14 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)0x0;
    puStack_3d0 = (undefined8 *)0x0;
    puStack_3c8 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uStack_238 = param_3[1];
    uStack_240 = *param_3;
    uStack_228 = param_3[3];
    uStack_230 = param_3[2];
    uStack_218 = param_3[5];
    uStack_220 = param_3[4];
    uStack_208 = param_3[7];
    uStack_210 = param_3[6];
    uStack_b0 = uStack_240;
    uStack_a8 = uStack_238;
    uStack_a0 = uStack_230;
    uStack_98 = uStack_228;
    uStack_90 = uStack_220;
    uStack_88 = uStack_218;
    uStack_80 = uStack_210;
    uStack_78 = uStack_208;
    FUN_10321fdb4(&uStack_240,auStack_368);
    puStack_3c8 = &uStack_b0;
    puVar13 = &uStack_100;
    FUN_1032262f8(puStack_3c8,puVar13,puVar2);
    FUN_10321fe28(&uStack_3b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_10db9f3c8;
    func_0x000107c614e0(&UNK_10db9f3c8);
    FUN_10321fdb4(&uStack_240,auStack_368);
    puStack_3d0 = &uStack_b0;
    puVar15 = &uStack_100;
    FUN_1032262f8(puStack_3d0,puVar15,puVar2);
    FUN_10321fe28(&uStack_3b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_10db9f3e8;
    func_0x000107c614e0(&UNK_10db9f3e8);
    FUN_10321fdb4(&uStack_240,auStack_368);
    puVar16 = &uStack_b0;
    func_0x000103226434(puVar16,&uStack_100,puVar2);
    FUN_10321fe28(&uStack_3b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_10db9f408;
    func_0x000107c614e0(&UNK_10db9f408);
    FUN_10321fdb4(&uStack_240,auStack_368);
    puVar3 = &uStack_b0;
    func_0x000103226410(puVar3,&uStack_100,puVar2);
    FUN_10321fe28(&uStack_3b0,0x112f4d410,&UNK_10db9f3c0);
    func_0x000107c61574(puVar2);
    if (puVar3 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = puVar3;
      func_0x000107c49820();
      func_0x000107c61170(puVar3);
    }
  }
  lVar10 = param_3[9];
  lVar4 = param_3[10];
  uVar9 = param_3[0xb];
  puVar2 = &UNK_10db9f390;
  func_0x000107c614e0(&UNK_10db9f390);
  puVar3 = puVar15;
  if (lVar4 == 0) {
    func_0x000107c61574();
LAB_10321e7c0:
    if (0 < (long)puVar14) {
LAB_10321e7c8:
      if (puVar13 == (undefined8 *)0x0) goto LAB_10321e8b8;
      uVar1 = (ulong)puStack_3c8 & 0xffffffffffff;
      if (((ulong)puVar13 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar13 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) goto LAB_10321e8a8;
      puVar3 = puVar13;
      if (puVar15 == (undefined8 *)0x0) goto LAB_10321e8b8;
      func_0x000107c6142c(puVar15);
      uVar1 = (ulong)puStack_3d0 & 0xffffffffffff;
      if (((ulong)puVar15 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar15 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) || (puVar16 == (undefined8 *)0x0)) goto LAB_10321e8b8;
      puVar15 = puStack_3c8;
      FUN_10321ec90(puStack_3c8,puVar13,param_1);
      puVar3 = puVar16;
      func_0x000107c614f0(puVar16);
      puVar5 = puStack_3c8;
      puVar8 = puVar13;
      func_0x000103fd810c(puStack_3c8,puVar13,puVar3);
      if (((uint)puVar8 & 0xff) == 1) {
        func_0x000107c4b940(*(undefined8 *)(param_2 + 0x10));
        func_0x000107c61428(param_2 + 0x18,&uStack_240,0x20,0);
        lVar10 = *(long *)(param_2 + 0x18);
        if (*(long *)(lVar10 + 0x10) == 0) {
LAB_10321ea78:
          bVar11 = 2;
        }
        else {
          func_0x000107c61434(lVar10);
          puVar3 = puStack_3c8;
          puVar5 = puVar13;
          func_0x000100029284();
          if (((ulong)puVar5 & 1) == 0) {
            func_0x000107c6142c(lVar10);
            goto LAB_10321ea78;
          }
          bVar11 = *(byte *)(*(long *)(lVar10 + 0x38) + (long)puVar3);
          func_0x000107c6142c(lVar10);
        }
        func_0x000107c614a8(&uStack_240);
        func_0x000107c5d278(*(undefined8 *)(param_2 + 0x10));
        if (bVar11 == 2) {
          FUN_10321f9c0(&uStack_240);
          func_0x000107c610b4(auStack_368,&uStack_240,0x128);
          func_0x000100087f6c(auStack_368);
          puVar2 = &UNK_110627e18;
          func_0x000107c613fc(&UNK_110627e18,0x18,7);
          func_0x000107c61644(puVar2 + 0x10,param_2);
          puVar6 = &UNK_110627e68;
          func_0x000107c613fc(&UNK_110627e68,0x40,7);
          *(undefined **)(puVar6 + 0x10) = puVar2;
          *(undefined8 **)(puVar6 + 0x18) = puVar16;
          *(undefined8 **)(puVar6 + 0x20) = puStack_3c8;
          *(undefined8 **)(puVar6 + 0x28) = puVar13;
          *(undefined8 *)(puVar6 + 0x30) = param_1;
          *(undefined8 **)(puVar6 + 0x38) = puVar14;
          func_0x000107c615f0(puVar16);
          func_0x000107c6157c(param_1);
          uVar9 = 1;
          func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10db9f3b8,puVar6,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(puVar6);
          puVar2 = &UNK_110627e90;
          func_0x000107c613fc(&UNK_110627e90,0x20,7);
          *(undefined8 *)(puVar2 + 0x10) = uVar9;
          *(undefined8 **)(puVar2 + 0x18) = puVar15;
          func_0x0001000b6d30(0);
          func_0x000107c613fc();
          func_0x000107c6157c(uVar9);
          func_0x0001000b6d50(FUN_10321fab8,puVar2);
          func_0x000107c615e8(puVar16);
          func_0x000107c61574(uVar9);
          goto LAB_10321ec84;
        }
        func_0x000107c6142c(puVar13);
        if ((bVar11 & 1) == 0) {
          FUN_10321f9c0(&uStack_240);
        }
        else {
          FUN_10321fad8(auStack_368,puVar14);
          FUN_10321fdb0(auStack_368);
          func_0x000107c610b4(&uStack_240,auStack_368,0x128);
        }
        func_0x000107c610b4(auStack_368,&uStack_240,0x128);
        func_0x000100087f6c(auStack_368);
        FUN_10321fe28(auStack_368,0x112f4d2e8,&UNK_10db9f250);
        puVar2 = &UNK_110627eb8;
        func_0x000107c613fc(&UNK_110627eb8,0x18,7);
        *(undefined8 **)(puVar2 + 0x10) = puVar15;
        uVar9 = 0;
        func_0x0001000b6d30(0);
        func_0x000107c613fc();
        pcVar7 = FUN_10321fac0;
      }
      else {
        uVar12 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107c4b940(uVar12);
        func_0x000107c61428(param_2 + 0x18,&uStack_240,0x21,0);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        func_0x000107c61558(uVar9);
        auStack_368[0] = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
        func_0x000101752900(((ulong)puVar5 & 0xffffffff) == 0,puStack_3c8,puVar13,uVar9);
        *(undefined8 *)(param_2 + 0x18) = auStack_368[0];
        func_0x000107c614a8(&uStack_240);
        func_0x000107c5d278(uVar12);
        func_0x000107c6142c(puVar13);
        if (((ulong)puVar5 & 0xffffffff) == 0) {
          FUN_10321fad8(auStack_368,puVar14);
          FUN_10321fdb0(auStack_368);
          func_0x000107c610b4(&uStack_240,auStack_368,0x128);
        }
        else {
          FUN_10321f9c0(&uStack_240);
        }
        func_0x000107c610b4(auStack_368,&uStack_240,0x128);
        func_0x000100087f6c(auStack_368);
        FUN_10321fe28(auStack_368,0x112f4d2e8,&UNK_10db9f250);
        puVar2 = &UNK_110627ee0;
        func_0x000107c613fc(&UNK_110627ee0,0x18,7);
        *(undefined8 **)(puVar2 + 0x10) = puVar15;
        uVar9 = 0;
        func_0x0001000b6d30(0);
        func_0x000107c613fc();
        pcVar7 = FUN_10321fe68;
      }
      func_0x0001000b6d50(pcVar7,puVar2,uVar9);
      func_0x000107c615e8(puVar16);
LAB_10321ec84:
      func_0x000107c61574(param_2);
      return;
    }
  }
  else {
    func_0x000107c61434(lVar4);
    FUN_10322696c(lVar10,lVar4,uVar9,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar4);
    if (lVar10 == 0) goto LAB_10321e7c0;
    lVar4 = lVar10;
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar10);
    if (0 < (long)puVar14) {
      if ((int)lVar4 == 0) {
        func_0x000107c6142c(puVar15);
        puVar3 = puVar13;
        goto LAB_10321e8b8;
      }
      goto LAB_10321e7c8;
    }
  }
LAB_10321e8a8:
  func_0x000107c6142c(puVar13);
LAB_10321e8b8:
  func_0x000107c6142c(puVar3);
  FUN_10321f9c0(&uStack_240);
  func_0x000107c610b4(auStack_368,&uStack_240,0x128);
  func_0x000100087f6c(auStack_368);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(puVar16);
  return;
}



/* Entry: 10321ec90; end: 10321ee1f;  */

undefined * FUN_10321ec90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  if (lRam0000000112f4d448 != -1) {
    func_0x000107c61568(0x112f4d448,FUN_10321d8a8);
  }
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c4c188();
  func_0x000107c61180();
  puVar3 = &UNK_110627e18;
  func_0x000107c613fc(&UNK_110627e18,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110627f30;
  func_0x000107c613fc(&UNK_110627f30,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  uStack_60 = 0x10321fe00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ef35e4;
  puStack_68 = &UNK_110627f48;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  puVar3 = puVar1;
  func_0x000107c3d7c4(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10321ee20; end: 10321ee63;  */

void FUN_10321ee20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10321ee64; end: 10321eee7;  */

void FUN_10321ee64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2d8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10321eee8,uVar1,uVar2);
  return;
}



/* Entry: 10321eee8; end: 10321eff3;  */

void FUN_10321eee8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x2b8);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x2a0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x300) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x2c0);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x2d0));
    *(undefined8 *)(unaff_x22 + 0x308) = uVar1;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x178;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10321eff4;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar1 = 0x112ecdf38;
    func_0x0001000285a8(0x112ecdf38,&UNK_10db9f430);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10293521c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110627ef8;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c49ccc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2e8));
                    /* WARNING: Could not recover jumptable at 0x00010321eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10321eff4; end: 10321f033;  */

void FUN_10321eff4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10321f034,*(undefined8 *)(*unaff_x22 + 0x2f0),*(undefined8 *)(*unaff_x22 + 0x2f8));
  return;
}



/* Entry: 10321f034; end: 10321f18f;  */

void FUN_10321f034(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x308);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2e8));
  iVar1 = *(int *)(unaff_x22 + 0x178);
  func_0x000107c61170();
  func_0x000107c5fd5c();
  lVar4 = *(long *)(unaff_x22 + 0x300);
  if ((uVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c4b940(uVar8);
    func_0x000107c61428(lVar4 + 0x18,unaff_x22 + 0x178,0x21,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x18) = 0x8000000000000000;
    func_0x000101752900(iVar1 == 0,uVar7,uVar6,uVar2);
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    func_0x000107c614a8(unaff_x22 + 0x178);
    func_0x000107c5d278(uVar8);
    if (iVar1 == 0) {
      FUN_10321fad8(unaff_x22 + 0x178,*(undefined8 *)(unaff_x22 + 0x2e0));
      FUN_10321fdb0(unaff_x22 + 0x178);
      func_0x000107c610b4(unaff_x22 + 0x50,unaff_x22 + 0x178,0x128);
    }
    else {
      FUN_10321f9c0(unaff_x22 + 0x50);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x300);
    func_0x000107c610b4(unaff_x22 + 0x178,unaff_x22 + 0x50,0x128);
    func_0x000100087f6c(unaff_x22 + 0x178);
    func_0x000107c61574(uVar2);
    FUN_10321fe28(unaff_x22 + 0x178,0x112f4d2e8,&UNK_10db9f250);
  }
  else {
    func_0x000107c61574(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010321f18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10321f190; end: 10321f1f3;  */

void FUN_10321f190(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c5fd50(param_1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10321f1f4; end: 10321f42f;  */

void FUN_10321f1f4(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  ulong uStack_1a0;
  long lStack_198;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  lVar1 = param_2;
  func_0x000107c5eba8();
  if (lVar1 == 0) {
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
  }
  else {
    uStack_78 = 0xd000000000000025;
    uStack_70 = 0x800000010f0a3770;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_1a0,&uStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_10321f2d8:
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      puVar2 = &uStack_1a0;
      func_0x000100df95d0(puVar2);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(lVar1);
        goto LAB_10321f2d8;
      }
      func_0x0001000bb420(*(long *)(lVar1 + 0x38) + (long)puVar2 * 0x20,&uStack_2d0);
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c6142c(lVar1);
    func_0x0001007bbff0(&uStack_1a0);
    if (lStack_2b8 != 0) {
      puVar2 = &uStack_1a0;
      func_0x000107c6147c(puVar2,&uStack_2d0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar2 & 1) != 0) {
        if ((uStack_1a0 == param_3) && (lStack_198 == param_4)) {
          func_0x000107c6142c(lStack_198);
        }
        else {
          uVar3 = uStack_1a0;
          func_0x000107c605b8(uStack_1a0,lStack_198,param_3,param_4,0);
          func_0x000107c6142c(lStack_198);
          if ((uVar3 & 1) == 0) goto LAB_10321f358;
        }
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107c4b940(uVar6);
        func_0x000107c61428(param_2 + 0x18,&uStack_1a0,0x21,0);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        func_0x000107c61558(uVar4);
        uStack_2d0 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
        func_0x000101752900(0,param_3,param_4,uVar4);
        *(undefined8 *)(param_2 + 0x18) = uStack_2d0;
        func_0x000107c614a8(&uStack_1a0);
        func_0x000107c5d278(uVar6);
        FUN_10321f9c0(&uStack_1a0);
        func_0x000107c610b4(&uStack_2d0,&uStack_1a0,0x128);
        func_0x000100087f6c(&uStack_2d0);
      }
      goto LAB_10321f358;
    }
  }
  FUN_10321fe28(&uStack_2d0,0x112d387f8,&UNK_10d902650);
LAB_10321f358:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 10321f430; end: 10321f45b;  */

void FUN_10321f430(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10321f45c; end: 10321f463;  */

void FUN_10321f45c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [96];
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
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar1 = &UNK_110627e18;
  func_0x000107c613fc(&UNK_110627e18,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110627e40;
  func_0x000107c613fc(&UNK_110627e40,0x78,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar3;
  *(undefined8 *)(puVar2 + 0x50) = uVar5;
  *(undefined8 *)(puVar2 + 0x48) = uVar4;
  uVar3 = param_1[8];
  uVar5 = param_1[0xb];
  uVar4 = param_1[10];
  *(undefined8 *)(puVar2 + 0x60) = param_1[9];
  *(undefined8 *)(puVar2 + 0x58) = uVar3;
  *(undefined8 *)(puVar2 + 0x70) = uVar5;
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  func_0x0001000285a8(0x112f4d400,&UNK_10db9f360);
  func_0x000107c613fc();
  FUN_10321f978(&uStack_90,auStack_f0,0x112f4d408,&UNK_10db9f368);
  func_0x0001000b64ac(0x10321f96c,puVar2);
  return;
}



/* Entry: 10321f464; end: 10321f507;  */

void FUN_10321f464(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4d2f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d2e8;
  func_0x00010002969c(0x112f4d2e8,&UNK_10db9f250);
  uVar2 = 0x112f4d2f8;
  FUN_10321f56c(0x112f4d2f8,&UNK_10dcf9fe4);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4d2f0 = puVar3;
  return;
}



/* Entry: 10321f508; end: 10321f56b;  */

void FUN_10321f508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f29c;
  func_0x000107c61520(&DAT_10db9f29c,&UNK_110627ce8);
  puRam0000000112f4d308 = puVar1;
  return;
}



/* Entry: 10321f56c; end: 10321f5b7;  */

void FUN_10321f56c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0x112f4d300;
    func_0x00010002969c(0x112f4d300,&UNK_10db9f258);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10321f5b8; end: 10321f5df;  */

undefined ** FUN_10321f5b8(void)

{
  return &PTR_DAT_110627c90;
}



/* Entry: 10321f5e0; end: 10321f643;  */

long FUN_10321f5e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10321f644; end: 10321f753;  */

undefined8 * FUN_10321f644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10321f754; end: 10321f7b7;  */

undefined8 * FUN_10321f754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10321f7b8; end: 10321f867;  */

int FUN_10321f7b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321f868; end: 10321f8d7;  */

undefined8 * FUN_10321f868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10321f8d8; end: 10321f977;  */

int FUN_10321f8d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321f978; end: 10321f9bf;  */

undefined8 FUN_10321f978(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10321f9c0; end: 10321f9ef;  */

void FUN_10321f9c0(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10321f9f0; end: 10321fa7b;  */

void FUN_10321f9f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x310;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10321fa7c;
  plVar7[0x5c] = lVar4;
  plVar7[0x5b] = lVar1;
  plVar7[0x5a] = lVar3;
  plVar7[0x59] = lVar5;
  plVar7[0x58] = lVar2;
  plVar7[0x57] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0x5d] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[0x5e] = lVar5;
  plVar7[0x5f] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10321eee8,lVar5,lVar6);
  return;
}



/* Entry: 10321fa7c; end: 10321fab7;  */

void FUN_10321fa7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010321fab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10321fab8; end: 10321fabf;  */

void FUN_10321fab8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c5fd50(*(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10321fac0; end: 10321fad7;  */

void FUN_10321fac0(void)

{
  long unaff_x20;
  
  FUN_10321ee20(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10321fad8; end: 10321fdaf;  */

void FUN_10321fad8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_280;
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
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  undefined *puStack_1d0;
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
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined *puStack_120;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  if ((param_2 | 2) == 3) {
    if (lRam0000000112f4d430 != -1) {
      func_0x000107c61568(0x112f4d430,0x10321d8dc);
    }
    puVar10 = (undefined8 *)0x112f4d438;
  }
  else {
    if (lRam0000000112f4d418 != -1) {
      func_0x000107c61568(0x112f4d418,0x10321d908);
    }
    puVar10 = (undefined8 *)0x112f4d420;
  }
  lVar11 = 0x6269726373627553;
  uVar1 = *puVar10;
  uVar2 = puVar10[1];
  func_0x000107c61434(uVar2);
  lVar3 = 0x6269726373627573;
  func_0x000107c5fadc(0x6269726373627573,0xe900000000000065);
  uVar9 = 0;
  lVar4 = lVar3;
  func_0x0001000f6108();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar12 = 0xe900000000000065;
  if (lVar4 != 0) {
    lVar11 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    uVar12 = uVar9;
  }
  uVar9 = 0x737361702d6e6166;
  func_0x000107c5fadc(0x737361702d6e6166,0xee0065676461622d);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c45154();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 != (undefined *)0x0) {
      puStack_280 = puVar6;
      func_0x0001031e60f0(&puStack_280);
      uStack_148 = uStack_1f8;
      uStack_150 = uStack_200;
      uStack_138 = uStack_1e8;
      uStack_140 = uStack_1f0;
      uStack_12f = uStack_1df;
      uStack_137 = uStack_1e7;
      uStack_130 = uStack_1e0;
      uStack_188 = uStack_238;
      uStack_190 = uStack_240;
      uStack_178 = uStack_228;
      uStack_180 = uStack_230;
      uStack_168 = uStack_218;
      uStack_170 = uStack_220;
      uStack_158 = uStack_208;
      uStack_160 = uStack_210;
      uStack_1c8 = uStack_278;
      puStack_1d0 = puStack_280;
      uStack_1b8 = uStack_268;
      uStack_1c0 = uStack_270;
      uStack_1a8 = uStack_258;
      uStack_1b0 = uStack_260;
      uStack_198 = uStack_248;
      uStack_1a0 = uStack_250;
      ppuVar7 = &puStack_1d0;
      func_0x0001031e6100();
      uStack_98 = uStack_148;
      uStack_a0 = uStack_150;
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      uStack_7f = uStack_12f;
      uStack_87 = uStack_137;
      uStack_80 = uStack_130;
      uStack_d8 = uStack_188;
      uStack_e0 = uStack_190;
      uStack_c8 = uStack_178;
      uStack_d0 = uStack_180;
      uStack_b8 = uStack_168;
      uStack_c0 = uStack_170;
      uStack_a8 = uStack_158;
      uStack_b0 = uStack_160;
      uStack_118 = uStack_1c8;
      puStack_120 = puStack_1d0;
      uStack_108 = uStack_1b8;
      uStack_110 = uStack_1c0;
      uStack_f8 = uStack_1a8;
      uStack_100 = uStack_1b0;
      uStack_e8 = uStack_198;
      uStack_f0 = uStack_1a0;
      goto LAB_10321fcb0;
    }
  }
  ppuVar7 = &puStack_120;
  func_0x0001031e60c4();
LAB_10321fcb0:
  func_0x000103bb4b7c();
  puVar5 = *ppuVar7;
  puVar6 = ppuVar7[1];
  func_0x000101c68d90(0);
  func_0x000107c61434(puVar6);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  param_1[0x16] = uStack_a8;
  param_1[0x15] = uStack_b0;
  param_1[0x18] = uStack_98;
  param_1[0x17] = uStack_a0;
  param_1[0x1a] = CONCAT71(uStack_87,uStack_88);
  param_1[0x19] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xd9) = uStack_7f;
  *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_80,uStack_87);
  param_1[0xe] = uStack_e8;
  param_1[0xd] = uStack_f0;
  param_1[0x10] = uStack_d8;
  param_1[0xf] = uStack_e0;
  param_1[0x12] = uStack_c8;
  param_1[0x11] = uStack_d0;
  param_1[0x14] = uStack_b8;
  param_1[0x13] = uStack_c0;
  param_1[8] = uStack_118;
  param_1[7] = puStack_120;
  param_1[10] = uStack_108;
  param_1[9] = uStack_110;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0xd000000000000012;
  param_1[3] = 0x800000010f131510;
  param_1[4] = lVar11;
  param_1[5] = uVar12;
  param_1[6] = 0;
  param_1[0xc] = uStack_f8;
  param_1[0xb] = uStack_100;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar5;
  param_1[0x20] = puVar6;
  param_1[0x21] = puVar8;
  *(undefined2 *)(param_1 + 0x22) = 0x102;
  param_1[0x23] = 0;
  param_1[0x24] = 1;
  return;
}



/* Entry: 10321fdb0; end: 10321fdb3;  */

void FUN_10321fdb0(void)

{
  return;
}



/* Entry: 10321fdb4; end: 10321fde7;  */

undefined8 FUN_10321fdb4(undefined8 param_1,undefined8 param_2)

{
  FUN_10321f644(param_2,param_1,&UNK_110627d68);
  return param_2;
}



/* Entry: 10321fde8; end: 10321fe27;  */

long FUN_10321fde8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10321fe28; end: 10321fe67;  */

undefined8 FUN_10321fe28(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10321fe68; end: 10321fe77;  */

void FUN_10321fe68(void)

{
  long unaff_x20;
  
  FUN_10321ee20(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10321fe78; end: 10321ff3f;  */

undefined * FUN_10321fe78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f131570);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10321ff40; end: 10322011b;  */

void FUN_10321ff40(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_190 [64];
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
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_90 = param_2[8];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  puVar1 = &UNK_10db9f4d0;
  func_0x000107c614e0(&UNK_10db9f4d0);
  lStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_110 = uStack_150;
    uStack_108 = uStack_148;
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    FUN_1032208c8(&uStack_150,auStack_190);
    puVar3 = &uStack_110;
    func_0x000103226e08(puVar3,&uStack_d0,puVar1);
    func_0x000103220904(&uStack_80);
    func_0x000107c61574(puVar1);
    if ((((uint)puVar3 & 0xff) != 2) && (((ulong)puVar3 & 1) != 0)) {
      puVar1 = &UNK_10db9f4f8;
      func_0x000107c614e0(&UNK_10db9f4f8);
      FUN_1032208c8(&uStack_150,auStack_190);
      puVar3 = &uStack_110;
      func_0x000103226e08(puVar3,&uStack_d0,puVar1);
      func_0x000103220904(&uStack_80);
      func_0x000107c61574(puVar1);
      if (((uint)puVar3 & 0xff) == 2) {
        puVar1 = &UNK_10db9f518;
        func_0x000107c614e0(&UNK_10db9f518);
        FUN_1032208c8(&uStack_150,auStack_190);
        puVar3 = &uStack_110;
        FUN_1032259f0(puVar3,&uStack_d0,puVar1);
        func_0x000103220904(&uStack_80);
        func_0x000107c61574(puVar1);
        if (puVar3 != (undefined8 *)0x0) {
          uVar2 = 1;
          goto LAB_1032200a4;
        }
        puVar1 = &UNK_10db9f538;
        func_0x000107c614e0(&UNK_10db9f538);
        FUN_1032208c8(&uStack_150,auStack_190);
        puVar3 = &uStack_110;
        func_0x000103226e08(puVar3,&uStack_d0,puVar1);
        func_0x000103220904(&uStack_80);
        func_0x000107c61574(puVar1);
        if (((uint)puVar3 & 0xff) == 2) goto LAB_10322009c;
      }
      uVar2 = 0;
      puVar3 = (undefined8 *)((ulong)puVar3 & 1);
      goto LAB_1032200a4;
    }
  }
LAB_10322009c:
  puVar3 = (undefined8 *)0x0;
  uVar2 = 2;
LAB_1032200a4:
  *param_1 = puVar3;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 10322011c; end: 1032201cf;  */

void FUN_10322011c(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bStack_22;
  byte bStack_21;
  
  uVar2 = *param_1;
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x0001000285a8(0x112f4d4c8,&UNK_10db9f4c8);
    bStack_21 = (byte)uVar2 & 1;
    pbVar1 = &bStack_21;
  }
  else {
    if (*(char *)(param_1 + 1) == '\x01') {
      func_0x000107c614f0(uVar2);
      FUN_103226e24();
      func_0x00010061b458(1);
      func_0x000107c61574(uVar2);
      return;
    }
    func_0x0001000285a8(0x112f4d4c8,&UNK_10db9f4c8);
    bStack_22 = 2;
    pbVar1 = &bStack_22;
  }
  func_0x000100854cb0(pbVar1);
  return;
}



/* Entry: 1032201d0; end: 10322029b;  */

void FUN_1032201d0(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_280 [296];
  undefined1 auStack_158 [296];
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    func_0x0001000285a8(0x112f4d4c0,&UNK_10db9f4b8);
    func_0x00010322084c(auStack_158);
    func_0x000107c610b4(auStack_280,auStack_158,0x128);
    func_0x000100854cb0(auStack_280);
  }
  else {
    puVar2 = &UNK_110627ff8;
    func_0x000107c613fc(&UNK_110627ff8,0x11,7);
    puVar2[0x10] = bVar1 & 1;
    uVar3 = 0x112f4d4b8;
    func_0x0001000285a8(0x112f4d4b8,&UNK_10db9f4b0);
    func_0x0001000bfde0(0x10322087c,puVar2,uVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 10322029c; end: 103220543;  */

void FUN_10322029c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
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
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_25f;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
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
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_120;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  
  puVar10 = (undefined8 *)*param_2;
  uVar7 = param_3;
  if ((param_3 & 1) == 0) {
    func_0x0001032272ec();
  }
  else {
    FUN_103227220();
  }
  uVar8 = uVar7;
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0001031e60c4(&puStack_120);
  }
  else {
    puStack_300 = puVar10;
    func_0x0001031e60f0(&puStack_300);
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = (undefined7)uStack_25f;
    uStack_1a8 = (undefined1)((ulong)uStack_25f >> 0x38);
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_248 = uStack_2f8;
    puStack_250 = puStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    puStack_230 = (undefined8 *)uStack_2e0;
    puStack_218 = (undefined8 *)uStack_2c8;
    uStack_220 = uStack_2d0;
    func_0x0001031e6100(&puStack_250);
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_90 = uStack_1c0;
    uStack_7f = CONCAT17(uStack_1a8,uStack_1af);
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    uStack_c8 = uStack_1f8;
    uStack_d0 = uStack_200;
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_118 = uStack_248;
    puStack_120 = puStack_250;
    uStack_108 = uStack_238;
    uStack_110 = uStack_240;
    uStack_f8 = uStack_228;
    uStack_100 = puStack_230;
    uStack_e8 = puStack_218;
    uStack_f0 = uStack_220;
  }
  uStack_1a0 = uStack_a8;
  uStack_1a8 = (undefined1)uStack_b0;
  uStack_1a7 = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_190 = uStack_98;
  uStack_198 = uStack_a0;
  uStack_188 = uStack_90;
  uStack_177 = uStack_7f;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = (undefined1)uStack_b8;
  uStack_1af = (undefined7)((ulong)uStack_b8 >> 8);
  uStack_1b8 = (undefined1)uStack_c0;
  uStack_1b7 = (undefined7)((ulong)uStack_c0 >> 8);
  uStack_210 = uStack_118;
  puStack_218 = puStack_120;
  uStack_200 = uStack_108;
  uStack_208 = uStack_110;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e50dd8;
  func_0x000107c5faec();
  lVar2 = 0x112d9f930;
  func_0x0001000285a8(0x112d9f930,&UNK_10db9f4c0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  func_0x000103bb4c28();
  puVar6 = PTR___sSSN_11034da80;
  uVar9 = *puVar10;
  uVar4 = puVar10[1];
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x20) = uVar9;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar4);
  func_0x000107c45a48();
  uVar9 = 0x112d38c88;
  uVar4 = 0;
  FUN_103220884(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  *(undefined **)(lVar2 + 0x40) = puVar3;
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea2c58;
  func_0x000107c5faec();
  *(undefined **)(lVar2 + 0x78) = puVar6;
  *(undefined ***)(lVar2 + 0x60) = ppuVar5;
  *(undefined8 *)(lVar2 + 0x68) = uVar9;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined8 *)(lVar2 + 0x98) = uVar4;
  *(undefined **)(lVar2 + 0x80) = puVar6;
  FUN_103220884(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c5ff4c();
  uStack_130 = 1;
  if ((param_3 & 1) != 0) {
    uStack_130 = 2;
  }
  puStack_250 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_240 = 0x6163696669746f6e;
  uStack_238 = 0xed0000736e6f6974;
  uStack_160 = 1;
  uStack_168 = 0;
  uStack_220 = 0;
  uStack_140 = 0x102;
  uStack_138 = 0;
  puStack_230 = param_2;
  uStack_228 = uVar7;
  ppuStack_158 = ppuVar1;
  uStack_150 = uVar8;
  lStack_148 = lVar2;
  FUN_1032208c4(&puStack_250);
  func_0x000107c610b4(param_1,&puStack_250,0x128);
  return;
}



/* Entry: 103220544; end: 103220547;  */

code * FUN_103220544(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  
  puVar1 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_10321fe78;
  FUN_10326d7dc(FUN_10321fe78,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  uVar2 = 0x10321fedc;
  FUN_10326d7dc(0x10321fedc,0,uVar4);
  func_0x000107c61170(uVar4);
  pcVar5 = FUN_10321ff40;
  func_0x0001000bfde0(FUN_10321ff40,0,&UNK_110627690);
  pcVar6 = pcVar5;
  FUN_103220804();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  uVar4 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar5 = FUN_10322011c;
  func_0x00010068b194(FUN_10322011c,0,uVar4);
  func_0x000107c61574(pcVar6);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar7 = &UNK_110627fd0;
  func_0x000107c613fc(&UNK_110627fd0,0x20,7);
  *(code **)(puVar7 + 0x10) = pcVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar2);
  uVar4 = 0x112f4d4b8;
  func_0x0001000285a8(0x112f4d4b8,&UNK_10db9f4b0);
  pcVar5 = FUN_103220844;
  func_0x00010068b194(FUN_103220844,puVar7,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  return pcVar5;
}



/* Entry: 103220548; end: 10322057f;  */

undefined * FUN_103220548(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000103217370();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103220580; end: 103220723;  */

code * FUN_103220580(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  
  puVar1 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_10321fe78;
  FUN_10326d7dc(FUN_10321fe78,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  uVar2 = 0x10321fedc;
  FUN_10326d7dc(0x10321fedc,0,uVar4);
  func_0x000107c61170(uVar4);
  pcVar5 = FUN_10321ff40;
  func_0x0001000bfde0(FUN_10321ff40,0,&UNK_110627690);
  pcVar6 = pcVar5;
  FUN_103220804();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  uVar4 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar5 = FUN_10322011c;
  func_0x00010068b194(FUN_10322011c,0,uVar4);
  func_0x000107c61574(pcVar6);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar7 = &UNK_110627fd0;
  func_0x000107c613fc(&UNK_110627fd0,0x20,7);
  *(code **)(puVar7 + 0x10) = pcVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar2);
  uVar4 = 0x112f4d4b8;
  func_0x0001000285a8(0x112f4d4b8,&UNK_10db9f4b0);
  pcVar5 = FUN_103220844;
  func_0x00010068b194(FUN_103220844,puVar7,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  return pcVar5;
}



/* Entry: 103220724; end: 103220747;  */

void FUN_103220724(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103220748();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103220748; end: 103220787;  */

void FUN_103220748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f468;
  func_0x000107c61520(&DAT_10db9f468,&UNK_110627fb0);
  puRam0000000112f4d458 = puVar1;
  return;
}



/* Entry: 103220788; end: 10322078b;  */

void FUN_103220788(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d460 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d468;
  func_0x00010002969c(0x112f4d468,&UNK_10db9f460);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d460 = puVar2;
  return;
}



/* Entry: 10322078c; end: 1032207db;  */

void FUN_10322078c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d460 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d468;
  func_0x00010002969c(0x112f4d468,&UNK_10db9f460);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d460 = puVar2;
  return;
}



/* Entry: 1032207dc; end: 103220803;  */

undefined ** FUN_1032207dc(void)

{
  return &PTR_DAT_110627570;
}



/* Entry: 103220804; end: 103220843;  */

void FUN_103220804(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ecbc;
  func_0x000107c61520(&UNK_10db9ecbc,&UNK_110627690);
  puRam0000000112f4d4b0 = puVar1;
  return;
}



/* Entry: 103220844; end: 103220883;  */

void FUN_103220844(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_280 [296];
  undefined1 auStack_158 [296];
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    func_0x0001000285a8(0x112f4d4c0,&UNK_10db9f4b8,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010322084c(auStack_158);
    func_0x000107c610b4(auStack_280,auStack_158,0x128);
    func_0x000100854cb0(auStack_280);
  }
  else {
    puVar2 = &UNK_110627ff8;
    func_0x000107c613fc(&UNK_110627ff8,0x11,7);
    puVar2[0x10] = bVar1 & 1;
    uVar3 = 0x112f4d4b8;
    func_0x0001000285a8(0x112f4d4b8,&UNK_10db9f4b0);
    func_0x0001000bfde0(0x10322087c,puVar2,uVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103220884; end: 1032208c3;  */

void FUN_103220884(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1032208c4; end: 1032208c7;  */

void FUN_1032208c4(void)

{
  return;
}



/* Entry: 1032208c8; end: 10322094b;  */

undefined8 FUN_1032208c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1032183b0(param_2,param_1);
  return param_2;
}



/* Entry: 10322094c; end: 10322099f;  */

void FUN_10322094c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0dbf8;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0dbd8;
  uVar3 = param_3;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  param_1[2] = ppuVar2;
  param_1[3] = uVar3;
  return;
}



/* Entry: 1032209a0; end: 103220a3f;  */

long FUN_1032209a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  uVar6 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined ***)(lVar5 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x48) = uVar2;
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 103220a40; end: 103220b6b;  */

void FUN_103220a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  lVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar8 = param_2[4];
  puVar4 = &UNK_10db9f618;
  func_0x000107c614e0(&UNK_10db9f618);
  if (lVar2 == 0) {
    func_0x000107c61574();
    uVar6 = 0;
    lVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar3);
    uVar5 = uVar6;
    lVar7 = lVar2;
    FUN_103226a8c(uVar6,lVar2,uVar1,uVar3,uVar8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(lVar2);
    *param_1 = uVar5;
    param_1[1] = lVar7;
    puVar4 = &UNK_10db9f638;
    func_0x000107c614e0(&UNK_10db9f638);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar3);
    lVar7 = lVar2;
    FUN_103226a8c(uVar6,lVar2,uVar1,uVar3,uVar8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(lVar2);
  }
  param_1[2] = uVar6;
  param_1[3] = lVar7;
  return;
}



/* Entry: 103220b6c; end: 103220c1f;  */

/* WARNING: Possible PIC construction at 0x000103220bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103220bb4) */

ulong FUN_103220b6c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1[1];
  uVar5 = param_1[3];
  uVar4 = param_2[1];
  uVar6 = param_2[3];
  if (uVar1 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    uVar3 = *param_2;
    if (*param_1 != *param_2 || uVar1 != uVar4) goto code_r0x000107c605b8;
  }
  uVar1 = (ulong)(uVar5 == 0 && uVar6 == 0);
  if (uVar5 != 0 && uVar6 != 0) {
    uVar2 = param_1[2];
    uVar1 = uVar5;
    uVar3 = param_2[2];
    uVar4 = uVar6;
    if (param_1[2] != param_2[2] || uVar5 != uVar6) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar2,uVar1,uVar3,uVar4,0);
      return uVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103220c20; end: 103220e17;  */

void FUN_103220c20(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined *)*param_1;
  uVar2 = param_1[1];
  uVar11 = param_1[2];
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar4 = param_2;
      func_0x000107c614f0();
      puVar5 = PTR_PTR_1126aebd8;
      func_0x000107c61168(PTR_PTR_1126aebd8);
      uVar6 = uVar11;
      func_0x000107c5fadc(uVar11,lVar3);
      func_0x000107c51834(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      puStack_88 = &UNK_1106280b8;
      uVar6 = 0x112f4d550;
      func_0x0001000285a8(0x112f4d550,&UNK_10db9f610);
      ppuVar7 = &puStack_88;
      func_0x000107c5fb18(ppuVar7,uVar6);
      uVar8 = 0;
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      func_0x0001048b0b48(ppuVar7,uVar6,0xe,uVar8);
      func_0x0001000d224c(&puStack_88);
      puVar10 = puStack_88;
      puVar9 = puVar5;
      FUN_10326df5c(puVar5,ppuVar7,puStack_88,lVar4);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(ppuVar7);
      func_0x000107c615e8(puVar10);
      puVar10 = &UNK_110628188;
      func_0x000107c613fc(&UNK_110628188,0x30,7);
      *(undefined **)(puVar10 + 0x10) = puVar1;
      *(undefined8 *)(puVar10 + 0x18) = uVar2;
      *(undefined8 *)(puVar10 + 0x20) = uVar11;
      *(long *)(puVar10 + 0x28) = lVar3;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(lVar3);
      uVar11 = 0x112f4d4e0;
      func_0x0001000285a8(0x112f4d4e0,&UNK_10db9f568);
      func_0x0001000bfde0(0x103221670,puVar10,uVar11);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar10);
      return;
    }
  }
  func_0x0001000285a8(0x112f4d548,&UNK_10db9f608);
  uStack_68 = 0;
  puStack_88 = puVar1;
  uStack_80 = uVar2;
  uStack_78 = uVar11;
  lStack_70 = lVar3;
  func_0x000100854cb0(&puStack_88);
  return;
}



/* Entry: 103220e18; end: 103220e1f;  */

void FUN_103220e18(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined *)*param_1;
  uVar2 = param_1[1];
  uVar12 = param_1[2];
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    func_0x000107c5c734(lVar4,lVar4,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c614f0();
      puVar6 = PTR_PTR_1126aebd8;
      func_0x000107c61168(PTR_PTR_1126aebd8);
      uVar7 = uVar12;
      func_0x000107c5fadc(uVar12,lVar3);
      func_0x000107c51834(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      puStack_88 = &UNK_1106280b8;
      uVar7 = 0x112f4d550;
      func_0x0001000285a8(0x112f4d550,&UNK_10db9f610);
      ppuVar8 = &puStack_88;
      func_0x000107c5fb18(ppuVar8,uVar7);
      uVar9 = 0;
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      func_0x0001048b0b48(ppuVar8,uVar7,0xe,uVar9);
      func_0x0001000d224c(&puStack_88);
      puVar11 = puStack_88;
      puVar10 = puVar6;
      FUN_10326df5c(puVar6,ppuVar8,puStack_88,lVar5);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(ppuVar8);
      func_0x000107c615e8(puVar11);
      puVar11 = &UNK_110628188;
      func_0x000107c613fc(&UNK_110628188,0x30,7);
      *(undefined **)(puVar11 + 0x10) = puVar1;
      *(undefined8 *)(puVar11 + 0x18) = uVar2;
      *(undefined8 *)(puVar11 + 0x20) = uVar12;
      *(long *)(puVar11 + 0x28) = lVar3;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(lVar3);
      uVar12 = 0x112f4d4e0;
      func_0x0001000285a8(0x112f4d4e0,&UNK_10db9f568);
      func_0x0001000bfde0(0x103221670,puVar11,uVar12);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar11);
      return;
    }
  }
  func_0x0001000285a8(0x112f4d548,&UNK_10db9f608);
  uStack_68 = 0;
  puStack_88 = puVar1;
  uStack_80 = uVar2;
  uStack_78 = uVar12;
  lStack_70 = lVar3;
  func_0x000100854cb0(&puStack_88);
  return;
}



/* Entry: 103220e20; end: 103220ea7;  */

/* WARNING: Possible PIC construction at 0x000103220e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103220e50) */

void FUN_103220e20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = uVar1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 103220ea8; end: 103220fc7;  */

undefined8 FUN_103220ea8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar1 = 0x112f4d4d8;
  func_0x0001000285a8(0x112f4d4d8,&UNK_10db9f560);
  pcVar2 = FUN_103220a40;
  func_0x0001000bfde0(FUN_103220a40,0,uVar1);
  pcVar3 = FUN_103220b6c;
  func_0x00010487de38(FUN_103220b6c,0);
  func_0x000107c61574(pcVar2);
  puVar4 = &UNK_110628160;
  func_0x000107c613fc(&UNK_110628160,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar6);
  uVar1 = 0x112f4d4e0;
  func_0x0001000285a8(0x112f4d4e0,&UNK_10db9f568);
  uVar5 = 0x103221684;
  func_0x00010068b194(0x103221684,puVar4,uVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  uVar1 = 0x112f4d4e8;
  func_0x0001000285a8(0x112f4d4e8,&UNK_10db9f570);
  uVar6 = 0x103220e60;
  func_0x0001000bfde0(0x103220e60,0,uVar1);
  func_0x000107c61574(uVar5);
  return uVar6;
}



/* Entry: 103220fc8; end: 103220feb;  */

void FUN_103220fc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103220fec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103220fec; end: 10322102b;  */

void FUN_103220fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f5b0;
  func_0x000107c61520(&DAT_10db9f5b0,&UNK_1106280b8);
  puRam0000000112f4d4f0 = puVar1;
  return;
}



/* Entry: 10322102c; end: 10322102f;  */

void FUN_10322102c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d4f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d500;
  func_0x00010002969c(0x112f4d500,&UNK_10db9f5a8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d4f8 = puVar2;
  return;
}



/* Entry: 103221030; end: 10322107f;  */

void FUN_103221030(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d4f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d500;
  func_0x00010002969c(0x112f4d500,&UNK_10db9f5a8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d4f8 = puVar2;
  return;
}



/* Entry: 103221080; end: 103221097;  */

undefined ** FUN_103221080(void)

{
  return &PTR_DAT_110628020;
}



/* Entry: 103221098; end: 1032210cf;  */

undefined * FUN_103221098(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001032172b0();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1032210d0; end: 1032210f7;  */

void FUN_1032210d0(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1032210f8; end: 103221153;  */

undefined8 * FUN_1032210f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103221154; end: 10322118f;  */

undefined8 * FUN_103221154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103221190; end: 103221223;  */

int FUN_103221190(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103221224; end: 1032212b3;  */

long FUN_103221224(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032212b4; end: 10322131f;  */

undefined8 * FUN_1032212b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103221320; end: 103221363;  */

undefined8 * FUN_103221320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103221364; end: 1032213fb;  */

int FUN_103221364(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032213fc; end: 103221427;  */

void FUN_1032213fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103221428; end: 10322163b;  */

void FUN_103221428(undefined8 param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_28f;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined2 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_19f;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_ef;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  uVar2 = 0xe000000000000000;
  if (param_3 != 0) {
    uVar2 = param_3;
  }
  if (param_4 == (undefined8 *)0x0) {
    uVar3 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar2);
      FUN_10322163c(&puStack_190);
      goto LAB_1032215f0;
    }
    func_0x0001031e60c4(&puStack_240);
    uVar7 = 3;
  }
  else {
    puStack_368 = param_4;
    func_0x0001031e60f0(&puStack_368);
    uStack_118 = uStack_2f0;
    puStack_120 = puStack_2f8;
    uStack_108 = uStack_2e0;
    uStack_110 = uStack_2e8;
    uStack_100 = uStack_2d8;
    uStack_ef = CONCAT17(uStack_2c0,uStack_2c7);
    uStack_148 = uStack_320;
    uStack_150 = uStack_328;
    uStack_138 = uStack_310;
    uStack_140 = uStack_318;
    uStack_128 = uStack_300;
    uStack_130 = uStack_308;
    uStack_188 = uStack_360;
    puStack_190 = puStack_368;
    uStack_178 = uStack_350;
    uStack_180 = uStack_358;
    uStack_168 = uStack_340;
    uStack_170 = uStack_348;
    puStack_158 = puStack_330;
    uStack_160 = uStack_338;
    func_0x0001031e6100(&puStack_190);
    uVar7 = 0;
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    uStack_1b0 = uStack_100;
    uStack_19f = uStack_ef;
    uStack_1f8 = uStack_148;
    uStack_200 = uStack_150;
    uStack_1e8 = uStack_138;
    uStack_1f0 = uStack_140;
    uStack_1d8 = uStack_128;
    uStack_1e0 = uStack_130;
    uStack_1c8 = uStack_118;
    puStack_1d0 = puStack_120;
    uStack_238 = uStack_188;
    puStack_240 = puStack_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    uStack_218 = uStack_168;
    uStack_220 = uStack_170;
    puStack_208 = puStack_158;
    uStack_210 = uStack_160;
  }
  uStack_2b8 = uStack_1c8;
  uStack_2c0 = SUB81(puStack_1d0,0);
  uStack_2bf = (undefined7)((ulong)puStack_1d0 >> 8);
  uStack_2a8 = uStack_1b8;
  uStack_2b0 = uStack_1c0;
  uStack_2a0 = uStack_1b0;
  uStack_28f = uStack_19f;
  puStack_2f8 = puStack_208;
  uStack_300 = uStack_210;
  uStack_2e8 = uStack_1f8;
  uStack_2f0 = uStack_200;
  uStack_2d8 = uStack_1e8;
  uStack_2e0 = uStack_1f0;
  uStack_2c8 = (undefined1)uStack_1d8;
  uStack_2c7 = (undefined7)((ulong)uStack_1d8 >> 8);
  uStack_2d0 = (undefined1)uStack_1e0;
  uStack_2cf = (undefined7)(uStack_1e0 >> 8);
  uStack_328 = uStack_238;
  puStack_330 = puStack_240;
  uStack_318 = uStack_228;
  uStack_320 = uStack_230;
  uStack_308 = uStack_218;
  uStack_310 = uStack_220;
  func_0x000107c61434(param_3);
  func_0x000107c61174();
  func_0x000103bad4fc();
  uVar4 = *param_4;
  uVar5 = param_4[1];
  func_0x000101c68d90(0);
  func_0x000107c61434(uVar5);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  puStack_368 = (undefined8 *)0x0;
  uStack_360 = 0;
  uStack_358 = 0x676e69746172;
  uStack_350 = 0xe600000000000000;
  uStack_338 = 0;
  uStack_280 = 0;
  uStack_258 = 0x102;
  uStack_250 = 0;
  uStack_248 = 1;
  uStack_348 = uVar1;
  uStack_340 = uVar2;
  uStack_278 = uVar7;
  uStack_270 = uVar4;
  uStack_268 = uVar5;
  puStack_260 = puVar6;
  FUN_10322163c(&puStack_368);
  func_0x000107c610b4(&puStack_190,&puStack_368,0x128);
LAB_1032215f0:
  func_0x000107c610b4(param_1,&puStack_190,0x128);
  return;
}



/* Entry: 10322163c; end: 103221687;  */

void FUN_10322163c(void)

{
  return;
}



/* Entry: 103221688; end: 103221853;  */

code * FUN_103221688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar1 = FUN_103221854;
  func_0x0001000c0ebc(FUN_103221854,0);
  puVar2 = &UNK_1106281c8;
  func_0x000107c613fc(&UNK_1106281c8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  uVar3 = 0x112f4d558;
  func_0x0001000285a8(0x112f4d558,&UNK_10db9f660);
  pcVar4 = FUN_103221f34;
  func_0x0001000bfde0(FUN_103221f34,puVar2,uVar3);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106281f0;
  func_0x000107c613fc(&UNK_1106281f0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  pcVar1 = FUN_10322202c;
  func_0x00010487de38(FUN_10322202c,puVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110628218;
  func_0x000107c613fc(&UNK_110628218,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar3 = 0x112f4d560;
  func_0x0001000285a8(0x112f4d560,&UNK_10db9f668);
  pcVar4 = FUN_103222338;
  func_0x00010068b194(FUN_103222338,puVar2,uVar3);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  return pcVar4;
}



/* Entry: 103221854; end: 103221947;  */

uint FUN_103221854(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [64];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  puVar1 = &UNK_10db9f720;
  func_0x000107c614e0(&UNK_10db9f720);
  lStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  if (lStack_68 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_138 = param_1[1];
    uStack_140 = *param_1;
    uStack_128 = param_1[3];
    uStack_130 = param_1[2];
    uStack_118 = param_1[5];
    uStack_120 = param_1[4];
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    FUN_1031e7474(&uStack_140,auStack_180);
    puVar2 = &uStack_100;
    FUN_1031e7358(puVar2,&uStack_c0,puVar1);
    FUN_1032239f4(&uStack_70,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x000108437a30(puVar2);
      func_0x000107c61170(puVar2);
      return (uint)puVar3 ^ 1;
    }
  }
  return 0;
}



/* Entry: 103221948; end: 103221f33;  */

void FUN_103221948(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  ulong in_x4;
  long extraout_x8;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_270;
  long lStack_268;
  ulong *puStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 auStack_240 [32];
  long lStack_220;
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [24];
  long lStack_1d8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lVar17 = *(long *)(lVar5 + -8);
  lStack_248 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lStack_250 = (long)&lStack_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_c0 = param_2[8];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  lStack_168 = param_2[10];
  lStack_170 = param_2[9];
  uStack_158 = param_2[0xc];
  uStack_160 = param_2[0xb];
  uStack_150 = param_2[0xd];
  puVar14 = &UNK_10db9f720;
  func_0x000107c614e0(&UNK_10db9f720);
  lStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1a8 = param_2[1];
    uStack_1b0 = *param_2;
    uStack_198 = param_2[3];
    uStack_1a0 = param_2[2];
    uStack_188 = param_2[5];
    uStack_190 = param_2[4];
    uStack_178 = param_2[7];
    uStack_180 = param_2[6];
    uStack_140 = uStack_1b0;
    uStack_138 = uStack_1a8;
    uStack_130 = uStack_1a0;
    uStack_128 = uStack_198;
    uStack_120 = uStack_190;
    uStack_118 = uStack_188;
    uStack_110 = uStack_180;
    uStack_108 = uStack_178;
    FUN_1031e7474(&uStack_1b0,auStack_1f0);
    puVar6 = &uStack_140;
    FUN_1031e7358(puVar6,&uStack_100,puVar14);
    FUN_1032239f4(&uStack_b0,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar14);
    if (puVar6 != (undefined8 *)0x0) {
      func_0x000107c4ab80(puVar6);
      func_0x000107c5def0(puVar6);
      func_0x000107c5ad70();
      if ((in_x4 & 1) != 0) {
        lStack_268 = 0;
        lStack_270 = lVar17;
        FUN_103218a38();
        puStack_260 = param_1;
        puStack_258 = puVar6;
        if (in_x4 != 0) {
          uVar16 = in_x4 & 0xffffffffffffff8;
          if (in_x4 >> 0x3e == 0) {
            uVar18 = *(ulong *)(uVar16 + 0x10);
          }
          else {
            uVar18 = in_x4;
            if (-1 < (long)in_x4) {
              uVar18 = uVar16;
            }
            func_0x000107c60480();
          }
          if (uVar18 != 0) {
            uVar19 = 0;
            do {
              if ((in_x4 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar16 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ba4);
                  (*pcVar4)();
                }
                uVar7 = *(ulong *)(in_x4 + uVar19 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar7 = uVar19;
                FUN_1032229d4(uVar19,in_x4,&PTR_PTR_1126acdc0,0x112f4d150);
              }
              uVar1 = uVar19 + 1;
              if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ba0);
                (*pcVar4)();
              }
              uVar8 = uVar7;
              func_0x000107c446c8();
              if ((int)uVar8 != 0) {
                uVar8 = uVar7;
                func_0x000107c3cf80();
                func_0x000107c61180();
                if (uVar8 != 0) {
                  uVar9 = uVar8;
                  func_0x000107c3cfdc();
                  func_0x000107c61170(uVar8);
                  if ((int)uVar9 == 0x1c) {
                    func_0x000107c61170(puStack_258);
                    func_0x000107c6142c(in_x4);
                    *puStack_260 = uVar7;
                    *(undefined1 *)(puStack_260 + 1) = 0;
                    return;
                  }
                }
              }
              func_0x000107c61170(uVar7);
              uVar19 = uVar19 + 1;
            } while (uVar1 != uVar18);
          }
          func_0x000107c6142c(in_x4);
        }
        puVar6 = puStack_258;
        param_1 = puStack_260;
        puVar14 = &UNK_10db9f748;
        func_0x000107c614e0(&UNK_10db9f748);
        uVar3 = uStack_150;
        uVar2 = uStack_158;
        uVar12 = uStack_160;
        lVar17 = lStack_168;
        lVar5 = lStack_170;
        if (lStack_168 == 0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61574(puVar14);
          goto LAB_103221f00;
        }
        func_0x000107c61434(lStack_168);
        func_0x000107c61434(uVar2);
        func_0x00010322681c(lVar5,lVar17,uVar12,uVar2,uVar3,puVar14);
        func_0x000107c61574(puVar14);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(lVar17);
        puVar6 = puStack_258;
        if (lVar5 != 0) {
          lVar17 = lVar5;
          func_0x000107c5b8b4();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103221f34);
            (*pcVar4)();
          }
          lStack_268 = lVar17;
          func_0x000107c600f4(lStack_250);
          func_0x000100e15a08();
          func_0x000107c601c0(auStack_1f0,lStack_248,lVar5);
          puVar15 = PTR___sypN_11034f1a8;
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          while (lStack_1d8 != 0) {
            func_0x000100102924(auStack_1f0,auStack_218);
            func_0x000100102924(auStack_218,auStack_240);
            uVar12 = 0;
            func_0x000103223a34(0,0x112efdb78,&PTR_PTR_1126cab90);
            plVar13 = &lStack_220;
            func_0x000107c6147c(plVar13,auStack_240,puVar15 + 8,uVar12,6);
            lVar17 = lStack_220;
            if ((((ulong)plVar13 & 1) != 0) && (lStack_220 != 0)) {
              puVar11 = puVar14;
              func_0x000107c61550();
              if (((int)puVar11 == 0) ||
                 (((long)puVar14 < 0 || (puVar11 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar14 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar14) {
                    puVar10 = puVar14;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar11 = (undefined *)0x0;
                func_0x000103222d74(0,puVar10 + 1,1,puVar14);
              }
              uVar18 = (ulong)puVar11 & 0xffffffffffffff8;
              uVar16 = *(ulong *)(uVar18 + 0x10);
              puVar14 = puVar11;
              if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar16) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
                func_0x000103222d74(puVar14,uVar16 + 1,1,puVar11);
                uVar18 = (ulong)puVar14 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar18 + 0x10) = uVar16 + 1;
              *(long *)(uVar18 + uVar16 * 8 + 0x20) = lVar17;
            }
            func_0x000107c601c0(auStack_1f0,lStack_248,lVar5);
          }
          func_0x000107c61170(lStack_268);
          (**(code **)(lStack_270 + 8))(lStack_250,lStack_248);
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar15 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar15 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar15 = puVar14;
            }
            func_0x000107c60480();
          }
          if (puVar15 != (undefined *)0x0) {
            uVar16 = 0;
            do {
              if (((ulong)puVar14 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ed4);
                  (*pcVar4)();
                }
                uVar18 = *(ulong *)(puVar14 + uVar16 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar18 = uVar16;
                FUN_1032229d4(uVar16,puVar14,&PTR_PTR_1126cab90,0x112efdb78);
              }
              puVar11 = (undefined *)(uVar16 + 1);
              if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ed0);
                (*pcVar4)();
              }
              uVar19 = uVar18;
              func_0x000107c446c8();
              if ((int)uVar19 != 0) {
                uVar19 = uVar18;
                func_0x000107c3cf80();
                func_0x000107c61180();
                if (uVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221f30);
                  (*pcVar4)();
                }
                uVar7 = uVar19;
                func_0x000107c3cfdc();
                func_0x000107c61170(uVar19);
                if ((int)uVar7 == 0x1c) {
                  func_0x000107c6142c(puVar14);
                  func_0x000107c61170(puStack_258);
                  *puStack_260 = uVar18;
                  *(undefined1 *)(puStack_260 + 1) = 1;
                  return;
                }
              }
              func_0x000107c61170(uVar18);
              uVar16 = uVar16 + 1;
            } while (puVar11 != puVar15);
          }
          func_0x000107c6142c(puVar14);
          func_0x000107c61170(puStack_258);
          param_1 = puStack_260;
          goto LAB_103221f00;
        }
      }
      func_0x000107c61170(puVar6);
    }
  }
LAB_103221f00:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0xff;
  return;
}



/* Entry: 103221f34; end: 103221f3f;  */

void FUN_103221f34(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined *puVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_270;
  long lStack_268;
  ulong *puStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 auStack_240 [32];
  long lStack_220;
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [24];
  long lStack_1d8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar18 = *(ulong *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000107c5ed50(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  lVar17 = *(long *)(lVar5 + -8);
  lStack_248 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lStack_250 = (long)&lStack_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_c0 = param_2[8];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  lStack_168 = param_2[10];
  lStack_170 = param_2[9];
  uStack_158 = param_2[0xc];
  uStack_160 = param_2[0xb];
  uStack_150 = param_2[0xd];
  puVar14 = &UNK_10db9f720;
  func_0x000107c614e0(&UNK_10db9f720);
  lStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1a8 = param_2[1];
    uStack_1b0 = *param_2;
    uStack_198 = param_2[3];
    uStack_1a0 = param_2[2];
    uStack_188 = param_2[5];
    uStack_190 = param_2[4];
    uStack_178 = param_2[7];
    uStack_180 = param_2[6];
    uStack_140 = uStack_1b0;
    uStack_138 = uStack_1a8;
    uStack_130 = uStack_1a0;
    uStack_128 = uStack_198;
    uStack_120 = uStack_190;
    uStack_118 = uStack_188;
    uStack_110 = uStack_180;
    uStack_108 = uStack_178;
    FUN_1031e7474(&uStack_1b0,auStack_1f0);
    puVar6 = &uStack_140;
    FUN_1031e7358(puVar6,&uStack_100,puVar14);
    FUN_1032239f4(&uStack_b0,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar14);
    if (puVar6 != (undefined8 *)0x0) {
      func_0x000107c4ab80(puVar6);
      func_0x000107c5def0(puVar6);
      func_0x000107c5ad70();
      if ((uVar18 & 1) != 0) {
        lStack_268 = 0;
        lStack_270 = lVar17;
        FUN_103218a38();
        puStack_260 = param_1;
        puStack_258 = puVar6;
        if (uVar18 != 0) {
          uVar16 = uVar18 & 0xffffffffffffff8;
          if (uVar18 >> 0x3e == 0) {
            uVar19 = *(ulong *)(uVar16 + 0x10);
          }
          else {
            uVar19 = uVar18;
            if (-1 < (long)uVar18) {
              uVar19 = uVar16;
            }
            func_0x000107c60480();
          }
          if (uVar19 != 0) {
            uVar20 = 0;
            do {
              if ((uVar18 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ba4);
                  (*pcVar4)();
                }
                uVar7 = *(ulong *)(uVar18 + uVar20 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar7 = uVar20;
                FUN_1032229d4(uVar20,uVar18,&PTR_PTR_1126acdc0,0x112f4d150);
              }
              uVar1 = uVar20 + 1;
              if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ba0);
                (*pcVar4)();
              }
              uVar8 = uVar7;
              func_0x000107c446c8();
              if ((int)uVar8 != 0) {
                uVar8 = uVar7;
                func_0x000107c3cf80();
                func_0x000107c61180();
                if (uVar8 != 0) {
                  uVar9 = uVar8;
                  func_0x000107c3cfdc();
                  func_0x000107c61170(uVar8);
                  if ((int)uVar9 == 0x1c) {
                    func_0x000107c61170(puStack_258);
                    func_0x000107c6142c(uVar18);
                    *puStack_260 = uVar7;
                    *(undefined1 *)(puStack_260 + 1) = 0;
                    return;
                  }
                }
              }
              func_0x000107c61170(uVar7);
              uVar20 = uVar20 + 1;
            } while (uVar1 != uVar19);
          }
          func_0x000107c6142c(uVar18);
        }
        puVar6 = puStack_258;
        param_1 = puStack_260;
        puVar14 = &UNK_10db9f748;
        func_0x000107c614e0(&UNK_10db9f748);
        uVar3 = uStack_150;
        uVar2 = uStack_158;
        uVar12 = uStack_160;
        lVar17 = lStack_168;
        lVar5 = lStack_170;
        if (lStack_168 == 0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61574(puVar14);
          goto LAB_103221f00;
        }
        func_0x000107c61434(lStack_168);
        func_0x000107c61434(uVar2);
        func_0x00010322681c(lVar5,lVar17,uVar12,uVar2,uVar3,puVar14);
        func_0x000107c61574(puVar14);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(lVar17);
        puVar6 = puStack_258;
        if (lVar5 != 0) {
          lVar17 = lVar5;
          func_0x000107c5b8b4();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103221f34);
            (*pcVar4)();
          }
          lStack_268 = lVar17;
          func_0x000107c600f4(lStack_250);
          func_0x000100e15a08();
          func_0x000107c601c0(auStack_1f0,lStack_248,lVar5);
          puVar15 = PTR___sypN_11034f1a8;
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          while (lStack_1d8 != 0) {
            func_0x000100102924(auStack_1f0,auStack_218);
            func_0x000100102924(auStack_218,auStack_240);
            uVar12 = 0;
            func_0x000103223a34(0,0x112efdb78,&PTR_PTR_1126cab90);
            plVar13 = &lStack_220;
            func_0x000107c6147c(plVar13,auStack_240,puVar15 + 8,uVar12,6);
            lVar17 = lStack_220;
            if ((((ulong)plVar13 & 1) != 0) && (lStack_220 != 0)) {
              puVar11 = puVar14;
              func_0x000107c61550();
              if (((int)puVar11 == 0) ||
                 (((long)puVar14 < 0 || (puVar11 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar14 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar14) {
                    puVar10 = puVar14;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar11 = (undefined *)0x0;
                func_0x000103222d74(0,puVar10 + 1,1,puVar14);
              }
              uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
              uVar18 = *(ulong *)(uVar16 + 0x10);
              puVar14 = puVar11;
              if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar18) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
                func_0x000103222d74(puVar14,uVar18 + 1,1,puVar11);
                uVar16 = (ulong)puVar14 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar16 + 0x10) = uVar18 + 1;
              *(long *)(uVar16 + uVar18 * 8 + 0x20) = lVar17;
            }
            func_0x000107c601c0(auStack_1f0,lStack_248,lVar5);
          }
          func_0x000107c61170(lStack_268);
          (**(code **)(lStack_270 + 8))(lStack_250,lStack_248);
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar15 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar15 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar15 = puVar14;
            }
            func_0x000107c60480();
          }
          if (puVar15 != (undefined *)0x0) {
            uVar18 = 0;
            do {
              if (((ulong)puVar14 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ed4);
                  (*pcVar4)();
                }
                uVar16 = *(ulong *)(puVar14 + uVar18 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar16 = uVar18;
                FUN_1032229d4(uVar18,puVar14,&PTR_PTR_1126cab90,0x112efdb78);
              }
              puVar11 = (undefined *)(uVar18 + 1);
              if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103221ed0);
                (*pcVar4)();
              }
              uVar19 = uVar16;
              func_0x000107c446c8();
              if ((int)uVar19 != 0) {
                uVar19 = uVar16;
                func_0x000107c3cf80();
                func_0x000107c61180();
                if (uVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103221f30);
                  (*pcVar4)();
                }
                uVar20 = uVar19;
                func_0x000107c3cfdc();
                func_0x000107c61170(uVar19);
                if ((int)uVar20 == 0x1c) {
                  func_0x000107c6142c(puVar14);
                  func_0x000107c61170(puStack_258);
                  *puStack_260 = uVar16;
                  *(undefined1 *)(puStack_260 + 1) = 1;
                  return;
                }
              }
              func_0x000107c61170(uVar16);
              uVar18 = uVar18 + 1;
            } while (puVar11 != puVar15);
          }
          func_0x000107c6142c(puVar14);
          func_0x000107c61170(puStack_258);
          param_1 = puStack_260;
          goto LAB_103221f00;
        }
      }
      func_0x000107c61170(puVar6);
    }
  }
LAB_103221f00:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0xff;
  return;
}



/* Entry: 103221f40; end: 10322202b;  */

uint FUN_103221f40(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = *param_1;
  lVar5 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\x01') {
    FUN_10322337c();
LAB_103221f9c:
    plVar3 = param_2;
    if (cVar1 == '\x01') goto LAB_103221f84;
LAB_103221fac:
    if (cVar1 != -1) {
      FUN_10322317c();
      goto LAB_103221fd0;
    }
    lVar5 = 0;
    param_2 = (long *)0xe000000000000000;
    if (lVar2 == 0) goto LAB_103221fe0;
  }
  else {
    if ((char)param_1[1] != -1) {
      FUN_10322317c();
      goto LAB_103221f9c;
    }
    lVar2 = 0;
    plVar3 = (long *)0xe000000000000000;
    if (cVar1 != '\x01') goto LAB_103221fac;
LAB_103221f84:
    FUN_10322337c();
LAB_103221fd0:
    if (lVar2 == lVar5) {
LAB_103221fe0:
      if (plVar3 == param_2) {
        uVar4 = 1;
        goto LAB_103222008;
      }
    }
  }
  func_0x000107c605b8(lVar2,plVar3,lVar5,param_2,0);
  uVar4 = (uint)lVar2;
LAB_103222008:
  func_0x000107c6142c(plVar3);
  func_0x000107c6142c(param_2);
  return uVar4 & 1;
}



/* Entry: 10322202c; end: 103222037;  */

uint FUN_10322202c(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar2 = *param_1;
  lVar5 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\x01') {
    FUN_10322337c(lVar2,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
LAB_103221f9c:
    plVar3 = param_2;
    if (cVar1 == '\x01') goto LAB_103221f84;
LAB_103221fac:
    if (cVar1 != -1) {
      FUN_10322317c();
      goto LAB_103221fd0;
    }
    lVar5 = 0;
    param_2 = (long *)0xe000000000000000;
    if (lVar2 == 0) goto LAB_103221fe0;
  }
  else {
    if ((char)param_1[1] != -1) {
      FUN_10322317c();
      goto LAB_103221f9c;
    }
    lVar2 = 0;
    plVar3 = (long *)0xe000000000000000;
    if (cVar1 != '\x01') goto LAB_103221fac;
LAB_103221f84:
    FUN_10322337c();
LAB_103221fd0:
    if (lVar2 == lVar5) {
LAB_103221fe0:
      if (plVar3 == param_2) {
        uVar4 = 1;
        goto LAB_103222008;
      }
    }
  }
  func_0x000107c605b8(lVar2,plVar3,lVar5,param_2,0);
  uVar4 = (uint)lVar2;
LAB_103222008:
  func_0x000107c6142c(plVar3);
  func_0x000107c6142c(param_2);
  return uVar4 & 1;
}



/* Entry: 103222038; end: 1032222fb;  */

void FUN_103222038(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_410 [296];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
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
  undefined8 uStack_20f;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
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
  undefined8 uStack_11f;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  uVar7 = *param_1;
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    uVar6 = uVar7;
    FUN_10322337c();
    uVar3 = uVar6 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      func_0x0001031e60c4(&uStack_1c0);
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      uStack_80 = uStack_130;
      uStack_6f = uStack_11f;
      uStack_c8 = uStack_178;
      uStack_d0 = uStack_180;
      uStack_b8 = uStack_168;
      uStack_c0 = uStack_170;
      uStack_a8 = uStack_158;
      uStack_b0 = uStack_160;
      uStack_98 = uStack_148;
      uStack_a0 = uStack_150;
      uStack_108 = uStack_1b8;
      uStack_110 = uStack_1c0;
      uStack_f8 = uStack_1a8;
      uStack_100 = uStack_1b0;
      uStack_e8 = uStack_198;
      uStack_f0 = uStack_1a0;
      uStack_d8 = uStack_188;
      uStack_e0 = uStack_190;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar7 != 0) {
        func_0x0001000285a8(0x112f4d5c0,&UNK_10db9f6f8);
        uStack_238 = uStack_98;
        uStack_240 = uStack_a0;
        uStack_228 = uStack_88;
        uStack_230 = uStack_90;
        uStack_220 = uStack_80;
        uStack_20f = uStack_6f;
        uStack_278 = uStack_d8;
        uStack_280 = uStack_e0;
        uStack_268 = uStack_c8;
        uStack_270 = uStack_d0;
        uStack_258 = uStack_b8;
        uStack_260 = uStack_c0;
        uStack_248 = uStack_a8;
        uStack_250 = uStack_b0;
        uStack_2a8 = uStack_108;
        uStack_2b0 = uStack_110;
        uStack_298 = uStack_f8;
        uStack_2a0 = uStack_100;
        uStack_288 = uStack_e8;
        uStack_290 = uStack_f0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0xd000000000000014;
        uStack_2d0 = 0x800000010f131590;
        uStack_2b8 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1e0 = 0;
        uStack_1e8 = 0;
        uStack_1d8 = 0x100;
        uStack_1d0 = 0;
        uStack_1c8 = 1;
        uStack_2c8 = uVar6;
        uStack_2c0 = param_2;
        uStack_1f0 = uVar7;
        FUN_103223694(&uStack_2e8);
        func_0x000107c610b4(auStack_410,&uStack_2e8,0x128);
        func_0x000100854cb0(auStack_410);
        FUN_1032239f4(auStack_410,0x112f4d560,&UNK_10db9f668);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032222fc);
      (*pcVar2)();
    }
    func_0x000107c6142c(param_2);
  }
  else if (cVar1 != -1) {
    uVar3 = uVar7;
    FUN_1032236c8(uVar7);
    puVar4 = &UNK_110628368;
    func_0x000107c613fc(&UNK_110628368,0x38,7);
    *(ulong *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    *(undefined8 *)(puVar4 + 0x28) = param_5;
    *(ulong *)(puVar4 + 0x30) = uVar7;
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c615f0(param_5);
    func_0x00010322397c(uVar7,cVar1);
    uVar5 = 0x112f4d560;
    func_0x0001000285a8(0x112f4d560,&UNK_10db9f668);
    func_0x0001000bfde0(0x10322396c,puVar4,uVar5);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar4);
    return;
  }
  func_0x0001000285a8(0x112f4d5c0,&UNK_10db9f6f8);
  FUN_103223694(&uStack_2e8);
  func_0x000107c610b4(auStack_410,&uStack_2e8,0x128);
  func_0x000100854cb0(auStack_410);
  return;
}



/* Entry: 1032222fc; end: 103222337;  */

void FUN_1032222fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103222338; end: 103222343;  */

void FUN_103222338(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auStack_410 [296];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
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
  undefined8 uStack_20f;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
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
  undefined8 uStack_11f;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  uVar9 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_1;
  cVar3 = (char)param_1[1];
  if (cVar3 == '\x01') {
    uVar8 = uVar10;
    FUN_10322337c();
    uVar5 = uVar8 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar5 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      func_0x0001031e60c4(&uStack_1c0);
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      uStack_80 = uStack_130;
      uStack_6f = uStack_11f;
      uStack_c8 = uStack_178;
      uStack_d0 = uStack_180;
      uStack_b8 = uStack_168;
      uStack_c0 = uStack_170;
      uStack_a8 = uStack_158;
      uStack_b0 = uStack_160;
      uStack_98 = uStack_148;
      uStack_a0 = uStack_150;
      uStack_108 = uStack_1b8;
      uStack_110 = uStack_1c0;
      uStack_f8 = uStack_1a8;
      uStack_100 = uStack_1b0;
      uStack_e8 = uStack_198;
      uStack_f0 = uStack_1a0;
      uStack_d8 = uStack_188;
      uStack_e0 = uStack_190;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar10 != 0) {
        func_0x0001000285a8(0x112f4d5c0,&UNK_10db9f6f8);
        uStack_238 = uStack_98;
        uStack_240 = uStack_a0;
        uStack_228 = uStack_88;
        uStack_230 = uStack_90;
        uStack_220 = uStack_80;
        uStack_20f = uStack_6f;
        uStack_278 = uStack_d8;
        uStack_280 = uStack_e0;
        uStack_268 = uStack_c8;
        uStack_270 = uStack_d0;
        uStack_258 = uStack_b8;
        uStack_260 = uStack_c0;
        uStack_248 = uStack_a8;
        uStack_250 = uStack_b0;
        uStack_2a8 = uStack_108;
        uStack_2b0 = uStack_110;
        uStack_298 = uStack_f8;
        uStack_2a0 = uStack_100;
        uStack_288 = uStack_e8;
        uStack_290 = uStack_f0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0xd000000000000014;
        uStack_2d0 = 0x800000010f131590;
        uStack_2b8 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1e0 = 0;
        uStack_1e8 = 0;
        uStack_1d8 = 0x100;
        uStack_1d0 = 0;
        uStack_1c8 = 1;
        uStack_2c8 = uVar8;
        uStack_2c0 = uVar9;
        uStack_1f0 = uVar10;
        FUN_103223694(&uStack_2e8);
        func_0x000107c610b4(auStack_410,&uStack_2e8,0x128);
        func_0x000100854cb0(auStack_410);
        FUN_1032239f4(auStack_410,0x112f4d560,&UNK_10db9f668);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1032222fc);
      (*pcVar4)();
    }
    func_0x000107c6142c(uVar9);
  }
  else if (cVar3 != -1) {
    uVar5 = uVar10;
    FUN_1032236c8(uVar10);
    puVar6 = &UNK_110628368;
    func_0x000107c613fc(&UNK_110628368,0x38,7);
    *(ulong *)(puVar6 + 0x10) = uVar9;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    *(undefined8 *)(puVar6 + 0x28) = uVar2;
    *(ulong *)(puVar6 + 0x30) = uVar10;
    func_0x000107c6157c(uVar9);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(uVar2);
    func_0x00010322397c(uVar10,cVar3);
    uVar7 = 0x112f4d560;
    func_0x0001000285a8(0x112f4d560,&UNK_10db9f668);
    func_0x0001000bfde0(0x10322396c,puVar6,uVar7);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar6);
    return;
  }
  func_0x0001000285a8(0x112f4d5c0,&UNK_10db9f6f8);
  FUN_103223694(&uStack_2e8);
  func_0x000107c610b4(auStack_410,&uStack_2e8,0x128);
  func_0x000100854cb0(auStack_410);
  return;
}



/* Entry: 103222344; end: 103222483;  */

void FUN_103222344(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long in_x5;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_60 = param_2[0x12];
  uStack_58 = (undefined1)param_2[0x13];
  uStack_4f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  lVar2 = in_x5;
  FUN_10322317c();
  FUN_103223990(&uStack_f0,&uStack_218);
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (in_x5 != 0) {
    uStack_178 = param_2[0xd];
    uStack_180 = param_2[0xc];
    uStack_168 = param_2[0xf];
    uStack_170 = param_2[0xe];
    uStack_158 = param_2[0x11];
    uStack_160 = param_2[0x10];
    uStack_150 = param_2[0x12];
    uStack_148 = (undefined1)param_2[0x13];
    uStack_13f = *(undefined8 *)((long)param_2 + 0xa1);
    uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
    uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
    uStack_1b8 = param_2[5];
    uStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    uStack_1d8 = param_2[1];
    uStack_1e0 = *param_2;
    uStack_1c8 = param_2[3];
    uStack_1d0 = param_2[2];
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0xd000000000000014;
    uStack_200 = 0x800000010f131590;
    uStack_1e8 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0x100;
    uStack_100 = 0;
    uStack_f8 = 1;
    lStack_1f8 = lVar2;
    uStack_1f0 = param_3;
    lStack_120 = in_x5;
    FUN_103223694(&uStack_218);
    func_0x000107c610b4(param_1,&uStack_218,0x128);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103222484);
  (*pcVar1)();
}



/* Entry: 103222484; end: 10322254b;  */

void FUN_103222484(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  long lStack_e0;
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
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    func_0x0001031e60c4(&lStack_e0);
    uVar2 = CONCAT17(uStack_40,uStack_47);
    param_1[0x11] = lStack_58;
    param_1[0x10] = lStack_60;
    param_1[0x13] = CONCAT71(uStack_47,uStack_48);
    param_1[0x12] = lStack_50;
  }
  else {
    lStack_190 = lVar1;
    func_0x0001031e60f0(&lStack_190);
    lStack_58 = lStack_108;
    lStack_60 = lStack_110;
    uStack_48 = uStack_f8;
    lStack_50 = lStack_100;
    uStack_3f = uStack_ef;
    uStack_47 = uStack_f7;
    uStack_40 = uStack_f0;
    lStack_98 = lStack_148;
    lStack_a0 = lStack_150;
    lStack_88 = lStack_138;
    lStack_90 = lStack_140;
    lStack_78 = lStack_128;
    lStack_80 = lStack_130;
    lStack_68 = lStack_118;
    lStack_70 = lStack_120;
    lStack_d8 = lStack_188;
    lStack_e0 = lStack_190;
    lStack_c8 = lStack_178;
    lStack_d0 = lStack_180;
    lStack_b8 = lStack_168;
    lStack_c0 = lStack_170;
    lStack_a8 = lStack_158;
    lStack_b0 = lStack_160;
    func_0x0001031e6100(&lStack_e0);
    param_1[0x11] = lStack_58;
    param_1[0x10] = lStack_60;
    param_1[0x13] = CONCAT71(uStack_47,uStack_48);
    param_1[0x12] = lStack_50;
    uVar2 = CONCAT17(uStack_40,uStack_47);
  }
  *(undefined8 *)((long)param_1 + 0xa1) = uStack_3f;
  *(undefined8 *)((long)param_1 + 0x99) = uVar2;
  param_1[9] = lStack_98;
  param_1[8] = lStack_a0;
  param_1[0xb] = lStack_88;
  param_1[10] = lStack_90;
  param_1[0xd] = lStack_78;
  param_1[0xc] = lStack_80;
  param_1[0xf] = lStack_68;
  param_1[0xe] = lStack_70;
  param_1[1] = lStack_d8;
  *param_1 = lStack_e0;
  param_1[3] = lStack_c8;
  param_1[2] = lStack_d0;
  param_1[5] = lStack_b8;
  param_1[4] = lStack_c0;
  param_1[7] = lStack_a8;
  param_1[6] = lStack_b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(lVar1);
  return;
}



/* Entry: 10322254c; end: 103222557;  */

code * FUN_10322254c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  pcVar3 = FUN_103221854;
  func_0x0001000c0ebc(FUN_103221854,0);
  puVar4 = &UNK_1106281c8;
  func_0x000107c613fc(&UNK_1106281c8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar2);
  uVar7 = 0x112f4d558;
  func_0x0001000285a8(0x112f4d558,&UNK_10db9f660);
  pcVar8 = FUN_103221f34;
  func_0x0001000bfde0(FUN_103221f34,puVar4,uVar7);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1106281f0;
  func_0x000107c613fc(&UNK_1106281f0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar2);
  pcVar3 = FUN_10322202c;
  func_0x00010487de38(FUN_10322202c,puVar4);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110628218;
  func_0x000107c613fc(&UNK_110628218,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar2);
  uVar7 = 0x112f4d560;
  func_0x0001000285a8(0x112f4d560,&UNK_10db9f668);
  pcVar8 = FUN_103222338;
  func_0x00010068b194(FUN_103222338,puVar4,uVar7);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  return pcVar8;
}



/* Entry: 103222558; end: 10322257b;  */

void FUN_103222558(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10322257c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10322257c; end: 1032225bb;  */

void FUN_10322257c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f698;
  func_0x000107c61520(&DAT_10db9f698,&UNK_1106282b0);
  puRam0000000112f4d568 = puVar1;
  return;
}



/* Entry: 1032225bc; end: 1032225bf;  */

void FUN_1032225bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d570 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d578;
  func_0x00010002969c(0x112f4d578,&UNK_10db9f690);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d570 = puVar2;
  return;
}



/* Entry: 1032225c0; end: 10322260f;  */

void FUN_1032225c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d570 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d578;
  func_0x00010002969c(0x112f4d578,&UNK_10db9f690);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d570 = puVar2;
  return;
}



/* Entry: 103222610; end: 103222627;  */

undefined ** FUN_103222610(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 103222628; end: 10322265f;  */

undefined * FUN_103222628(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_103217230();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}


