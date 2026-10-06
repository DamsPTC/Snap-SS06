/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10420e0a0; end: 10420e0b3;  */

undefined1  [16] FUN_10420e0a0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10420e0b4; end: 10420e0f3;  */

void FUN_10420e0b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3560;
  _swift_getWitnessTable(&UNK_10dce3560,&UNK_110752238);
  puRam00000001130697b8 = puVar1;
  return;
}



/* Entry: 10420e0f4; end: 10420e117;  */

undefined1  [16] FUN_10420e0f4(void)

{
  return ZEXT816(0x110752238);
}



/* Entry: 10420e118; end: 10420e143;  */

void FUN_10420e118(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10420e1fc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10420e144; end: 10420e14f;  */

void FUN_10420e144(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420e150; end: 10420e1fb;  */

void FUN_10420e150(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420e1fc; end: 10420e20f;  */

undefined1  [16] FUN_10420e1fc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10420e210; end: 10420e24f;  */

void FUN_10420e210(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3630;
  _swift_getWitnessTable(&UNK_10dce3630,&UNK_1107522b0);
  puRam00000001130697c0 = puVar1;
  return;
}



/* Entry: 10420e250; end: 10420e25f;  */

undefined1  [16] FUN_10420e250(void)

{
  return ZEXT816(0x1107522b0);
}



/* Entry: 10420e260; end: 10420e2ff;  */

undefined8 FUN_10420e260(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcde38;
  func_0x0001000285a8(0x112dcde38,&UNK_10dce36f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10420e300; end: 10420e47f;  */

void FUN_10420e300(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined1 auStack_360 [192];
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined6 uStack_29e;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined7 uStack_28f;
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
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
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
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
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
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_238 = 1;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_2a0 = param_3;
  uStack_29f = param_4;
  uStack_298 = param_2;
  uStack_290 = param_5;
  uStack_288 = param_6;
  uStack_280 = param_7;
  func_0x00010420e2b0(param_8,&uStack_278);
  uStack_200 = param_11;
  uStack_1f8 = param_12;
  uStack_1f0 = (undefined1)param_14;
  uStack_1ef = (undefined7)((ulong)param_14 >> 8);
  uStack_1e8 = param_15;
  uStack_198 = uStack_258;
  uStack_1a0 = uStack_260;
  uStack_188 = uStack_248;
  uStack_190 = uStack_250;
  uStack_178 = uStack_238;
  uStack_180 = uStack_240;
  uStack_168 = uStack_228;
  uStack_170 = uStack_230;
  uStack_1e0 = CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0));
  uStack_1d0 = CONCAT71(uStack_28f,uStack_290);
  uStack_120 = CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0));
  uStack_110 = CONCAT71(uStack_28f,uStack_290);
  uStack_1d8 = uStack_298;
  uStack_1c8 = uStack_288;
  uStack_1b8 = uStack_278;
  uStack_1c0 = uStack_280;
  uStack_1a8 = uStack_268;
  uStack_1b0 = uStack_270;
  uStack_158 = CONCAT71(uStack_217,uStack_218);
  uStack_148 = CONCAT71(uStack_207,param_10);
  uStack_98 = CONCAT71(uStack_217,uStack_218);
  uStack_88 = CONCAT71(uStack_207,param_10);
  uStack_160 = uStack_220;
  uStack_138 = param_12;
  uStack_140 = param_11;
  uStack_12f = CONCAT17(param_15,uStack_1ef);
  uStack_137 = uStack_1f7;
  uStack_130 = uStack_1f0;
  uStack_a0 = uStack_220;
  uStack_78 = param_12;
  uStack_80 = param_11;
  uStack_6f = CONCAT17(param_15,uStack_1ef);
  uStack_70 = uStack_1f0;
  uStack_d8 = uStack_258;
  uStack_e0 = uStack_260;
  uStack_c8 = uStack_248;
  uStack_d0 = uStack_250;
  uStack_b8 = uStack_238;
  uStack_c0 = uStack_240;
  uStack_a8 = uStack_228;
  uStack_b0 = uStack_230;
  uStack_118 = uStack_298;
  uStack_108 = uStack_288;
  uStack_f8 = uStack_278;
  uStack_100 = uStack_280;
  uStack_e8 = uStack_268;
  uStack_f0 = uStack_270;
  uStack_210 = param_9;
  uStack_208 = param_10;
  uStack_150 = param_9;
  uStack_90 = param_9;
  func_0x00010178e29c(&uStack_1e0,auStack_360);
  func_0x00010178e2d8(&uStack_120);
  param_1[0x11] = uStack_158;
  param_1[0x10] = uStack_160;
  param_1[0x13] = uStack_148;
  param_1[0x12] = uStack_150;
  param_1[0x15] = CONCAT71(uStack_137,uStack_138);
  param_1[0x14] = uStack_140;
  *(undefined8 *)((long)param_1 + 0xb1) = uStack_12f;
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_130,uStack_137);
  param_1[9] = uStack_198;
  param_1[8] = uStack_1a0;
  param_1[0xb] = uStack_188;
  param_1[10] = uStack_190;
  param_1[0xd] = uStack_178;
  param_1[0xc] = uStack_180;
  param_1[0xf] = uStack_168;
  param_1[0xe] = uStack_170;
  param_1[1] = uStack_1d8;
  *param_1 = uStack_1e0;
  param_1[3] = uStack_1c8;
  param_1[2] = uStack_1d0;
  param_1[5] = uStack_1b8;
  param_1[4] = uStack_1c0;
  param_1[7] = uStack_1a8;
  param_1[6] = uStack_1b0;
  return;
}



/* Entry: 10420e480; end: 10420e483;  */

undefined8 FUN_10420e480(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_408 [104];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  byte bStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
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
  long lStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  byte bStack_198;
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
  byte bStack_130;
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
  byte bStack_c0;
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
  byte bStack_50;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (((param_1[1] ^ param_2[1]) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  if (((param_1[0x10] ^ param_2[0x10]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(param_2 + 0x20);
  if (uVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    FUN_10422988c(uVar3,lVar2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  bStack_c0 = param_1[0x88];
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  uStack_120 = *(undefined8 *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_188 = *(undefined8 *)(param_2 + 0x30);
  uStack_190 = *(undefined8 *)(param_2 + 0x28);
  uStack_178 = *(undefined8 *)(param_2 + 0x40);
  uStack_180 = *(undefined8 *)(param_2 + 0x38);
  uStack_168 = *(undefined8 *)(param_2 + 0x50);
  uStack_170 = *(undefined8 *)(param_2 + 0x48);
  uStack_158 = *(undefined8 *)(param_2 + 0x60);
  uStack_160 = *(undefined8 *)(param_2 + 0x58);
  uStack_148 = *(undefined8 *)(param_2 + 0x70);
  uStack_150 = *(undefined8 *)(param_2 + 0x68);
  uStack_138 = *(undefined8 *)(param_2 + 0x80);
  uStack_140 = *(undefined8 *)(param_2 + 0x78);
  bStack_130 = param_2[0x88];
  uStack_228 = *(undefined8 *)(param_1 + 0x60);
  uStack_230 = *(undefined8 *)(param_1 + 0x58);
  uStack_218 = *(undefined8 *)(param_1 + 0x70);
  lStack_220 = *(long *)(param_1 + 0x68);
  uStack_208 = *(undefined8 *)(param_1 + 0x80);
  uStack_210 = *(undefined8 *)(param_1 + 0x78);
  bStack_200 = param_1[0x88];
  uStack_258 = *(undefined8 *)(param_1 + 0x30);
  uStack_260 = *(undefined8 *)(param_1 + 0x28);
  uStack_248 = *(undefined8 *)(param_1 + 0x40);
  uStack_250 = *(undefined8 *)(param_1 + 0x38);
  uStack_238 = *(undefined8 *)(param_1 + 0x50);
  uStack_240 = *(undefined8 *)(param_1 + 0x48);
  uStack_2c0 = *(undefined8 *)(param_2 + 0x30);
  uStack_2c8 = *(undefined8 *)(param_2 + 0x28);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x40);
  uStack_2b8 = *(undefined8 *)(param_2 + 0x38);
  uStack_2a0 = *(undefined8 *)(param_2 + 0x50);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x48);
  uStack_290 = *(undefined8 *)(param_2 + 0x60);
  uStack_298 = *(undefined8 *)(param_2 + 0x58);
  uStack_280 = *(undefined8 *)(param_2 + 0x70);
  lStack_288 = *(long *)(param_2 + 0x68);
  bStack_198 = param_2[0x88];
  uStack_1a0 = (undefined1)*(undefined8 *)(param_2 + 0x80);
  uStack_19f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x80) >> 8);
  uStack_1a8 = (undefined1)*(undefined8 *)(param_2 + 0x78);
  uStack_1a7 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x78) >> 8);
  uStack_1f8 = uStack_2c8;
  uStack_1f0 = uStack_2c0;
  uStack_1e8 = uStack_2b8;
  uStack_1e0 = uStack_2b0;
  uStack_1d8 = uStack_2a8;
  uStack_1d0 = uStack_2a0;
  uStack_1c8 = uStack_298;
  uStack_1c0 = uStack_290;
  lStack_1b8 = lStack_288;
  uStack_1b0 = uStack_280;
  if (lStack_220 == 1) {
    if (lStack_288 != 1) {
LAB_10420e71c:
      uStack_26f = CONCAT17(bStack_198,uStack_19f);
      uStack_277 = uStack_1a7;
      uStack_270 = uStack_1a0;
      uStack_2d0 = CONCAT71(uStack_1ff,bStack_200);
      uStack_330 = uStack_260;
      uStack_328 = uStack_258;
      uStack_320 = uStack_250;
      uStack_318 = uStack_248;
      uStack_310 = uStack_240;
      uStack_308 = uStack_238;
      uStack_300 = uStack_230;
      uStack_2f8 = uStack_228;
      lStack_2f0 = lStack_220;
      uStack_2e8 = uStack_218;
      uStack_2e0 = uStack_210;
      uStack_2d8 = uStack_208;
      uStack_278 = uStack_1a8;
      FUN_10420e260(&uStack_120,&uStack_b0);
      FUN_10420e260(&uStack_190,&uStack_b0);
      FUN_10420eefc(&uStack_330,0x1130697c8,&UNK_10dce3738);
      return 0;
    }
    uStack_2f8 = *(undefined8 *)(param_1 + 0x60);
    uStack_300 = *(undefined8 *)(param_1 + 0x58);
    uStack_2e8 = *(undefined8 *)(param_1 + 0x70);
    lStack_2f0 = *(long *)(param_1 + 0x68);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x80);
    uStack_2e0 = *(undefined8 *)(param_1 + 0x78);
    uStack_2d0 = CONCAT71(uStack_2d0._1_7_,param_1[0x88]);
    uStack_328 = *(undefined8 *)(param_1 + 0x30);
    uStack_330 = *(undefined8 *)(param_1 + 0x28);
    uStack_318 = *(undefined8 *)(param_1 + 0x40);
    uStack_320 = *(undefined8 *)(param_1 + 0x38);
    uStack_308 = *(undefined8 *)(param_1 + 0x50);
    uStack_310 = *(undefined8 *)(param_1 + 0x48);
    FUN_10420e260(&uStack_120,&uStack_b0);
    FUN_10420e260(&uStack_190,&uStack_b0);
    FUN_10420eefc(&uStack_330,0x112dcde38,&UNK_10dce36f0);
  }
  else {
    if (lStack_288 == 1) goto LAB_10420e71c;
    uStack_368 = *(undefined8 *)(param_2 + 0x60);
    uStack_370 = *(undefined8 *)(param_2 + 0x58);
    uStack_358 = *(undefined8 *)(param_2 + 0x70);
    uStack_360 = *(undefined8 *)(param_2 + 0x68);
    uStack_348 = *(undefined8 *)(param_2 + 0x80);
    uStack_350 = *(undefined8 *)(param_2 + 0x78);
    bStack_340 = param_2[0x88];
    uStack_398 = *(undefined8 *)(param_2 + 0x30);
    uStack_3a0 = *(undefined8 *)(param_2 + 0x28);
    uStack_388 = *(undefined8 *)(param_2 + 0x40);
    uStack_390 = *(undefined8 *)(param_2 + 0x38);
    uStack_378 = *(undefined8 *)(param_2 + 0x50);
    uStack_380 = *(undefined8 *)(param_2 + 0x48);
    uStack_2d0 = CONCAT71(uStack_2d0._1_7_,bStack_340);
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    bStack_50 = param_1[0x88];
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_88 = *(undefined8 *)(param_1 + 0x50);
    uStack_90 = *(undefined8 *)(param_1 + 0x48);
    uStack_330 = uStack_3a0;
    uStack_328 = uStack_398;
    uStack_320 = uStack_390;
    uStack_318 = uStack_388;
    uStack_310 = uStack_380;
    uStack_308 = uStack_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    lStack_2f0 = uStack_360;
    uStack_2e8 = uStack_358;
    uStack_2e0 = uStack_350;
    uStack_2d8 = uStack_348;
    FUN_10420e260(&uStack_120,auStack_408);
    FUN_10420e260(&uStack_190,auStack_408);
    puVar1 = &uStack_b0;
    FUN_1042187fc(puVar1,&uStack_330);
    FUN_10420eefc(&uStack_3a0,0x112dcde38,&UNK_10dce36f0);
    FUN_10420eefc(&uStack_260,0x112dcde38,&UNK_10dce36f0);
    if (((ulong)puVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x98] == 1) {
    if (param_2[0x98] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x98] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x90) != *(double *)(param_2 + 0x90)) {
      return 0;
    }
  }
  if (param_1[0xa8] == 1) {
    if (param_2[0xa8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0xa8] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0xa0) != *(double *)(param_2 + 0xa0)) {
      return 0;
    }
  }
  if (param_1[0xb8] == 1) {
    if (param_2[0xb8] == 1) {
      return 1;
    }
  }
  else if ((param_2[0xb8] != 1) && (*(double *)(param_1 + 0xb0) == *(double *)(param_2 + 0xb0))) {
    return 1;
  }
  return 0;
}



/* Entry: 10420e484; end: 10420e527;  */

uint FUN_10420e484(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_100 = param_1[0x14];
  uStack_f8 = (undefined1)param_1[0x15];
  uStack_ef = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_40 = param_2[0x14];
  uStack_38 = (undefined1)param_2[0x15];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xb1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0xa9);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_10420e528(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10420e528; end: 10420e91b;  */

undefined8 FUN_10420e528(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_408 [104];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  byte bStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
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
  long lStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  byte bStack_198;
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
  byte bStack_130;
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
  byte bStack_c0;
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
  byte bStack_50;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (((param_1[1] ^ param_2[1]) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  if (((param_1[0x10] ^ param_2[0x10]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(param_2 + 0x20);
  if (uVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    FUN_10422988c(uVar3,lVar2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  bStack_c0 = param_1[0x88];
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  uStack_120 = *(undefined8 *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_188 = *(undefined8 *)(param_2 + 0x30);
  uStack_190 = *(undefined8 *)(param_2 + 0x28);
  uStack_178 = *(undefined8 *)(param_2 + 0x40);
  uStack_180 = *(undefined8 *)(param_2 + 0x38);
  uStack_168 = *(undefined8 *)(param_2 + 0x50);
  uStack_170 = *(undefined8 *)(param_2 + 0x48);
  uStack_158 = *(undefined8 *)(param_2 + 0x60);
  uStack_160 = *(undefined8 *)(param_2 + 0x58);
  uStack_148 = *(undefined8 *)(param_2 + 0x70);
  uStack_150 = *(undefined8 *)(param_2 + 0x68);
  uStack_138 = *(undefined8 *)(param_2 + 0x80);
  uStack_140 = *(undefined8 *)(param_2 + 0x78);
  bStack_130 = param_2[0x88];
  uStack_228 = *(undefined8 *)(param_1 + 0x60);
  uStack_230 = *(undefined8 *)(param_1 + 0x58);
  uStack_218 = *(undefined8 *)(param_1 + 0x70);
  lStack_220 = *(long *)(param_1 + 0x68);
  uStack_208 = *(undefined8 *)(param_1 + 0x80);
  uStack_210 = *(undefined8 *)(param_1 + 0x78);
  bStack_200 = param_1[0x88];
  uStack_258 = *(undefined8 *)(param_1 + 0x30);
  uStack_260 = *(undefined8 *)(param_1 + 0x28);
  uStack_248 = *(undefined8 *)(param_1 + 0x40);
  uStack_250 = *(undefined8 *)(param_1 + 0x38);
  uStack_238 = *(undefined8 *)(param_1 + 0x50);
  uStack_240 = *(undefined8 *)(param_1 + 0x48);
  uStack_2c0 = *(undefined8 *)(param_2 + 0x30);
  uStack_2c8 = *(undefined8 *)(param_2 + 0x28);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x40);
  uStack_2b8 = *(undefined8 *)(param_2 + 0x38);
  uStack_2a0 = *(undefined8 *)(param_2 + 0x50);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x48);
  uStack_290 = *(undefined8 *)(param_2 + 0x60);
  uStack_298 = *(undefined8 *)(param_2 + 0x58);
  uStack_280 = *(undefined8 *)(param_2 + 0x70);
  lStack_288 = *(long *)(param_2 + 0x68);
  bStack_198 = param_2[0x88];
  uStack_1a0 = (undefined1)*(undefined8 *)(param_2 + 0x80);
  uStack_19f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x80) >> 8);
  uStack_1a8 = (undefined1)*(undefined8 *)(param_2 + 0x78);
  uStack_1a7 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x78) >> 8);
  uStack_1f8 = uStack_2c8;
  uStack_1f0 = uStack_2c0;
  uStack_1e8 = uStack_2b8;
  uStack_1e0 = uStack_2b0;
  uStack_1d8 = uStack_2a8;
  uStack_1d0 = uStack_2a0;
  uStack_1c8 = uStack_298;
  uStack_1c0 = uStack_290;
  lStack_1b8 = lStack_288;
  uStack_1b0 = uStack_280;
  if (lStack_220 == 1) {
    if (lStack_288 != 1) {
LAB_10420e71c:
      uStack_26f = CONCAT17(bStack_198,uStack_19f);
      uStack_277 = uStack_1a7;
      uStack_270 = uStack_1a0;
      uStack_2d0 = CONCAT71(uStack_1ff,bStack_200);
      uStack_330 = uStack_260;
      uStack_328 = uStack_258;
      uStack_320 = uStack_250;
      uStack_318 = uStack_248;
      uStack_310 = uStack_240;
      uStack_308 = uStack_238;
      uStack_300 = uStack_230;
      uStack_2f8 = uStack_228;
      lStack_2f0 = lStack_220;
      uStack_2e8 = uStack_218;
      uStack_2e0 = uStack_210;
      uStack_2d8 = uStack_208;
      uStack_278 = uStack_1a8;
      FUN_10420e260(&uStack_120,&uStack_b0);
      FUN_10420e260(&uStack_190,&uStack_b0);
      FUN_10420eefc(&uStack_330,0x1130697c8,&UNK_10dce3738);
      return 0;
    }
    uStack_2f8 = *(undefined8 *)(param_1 + 0x60);
    uStack_300 = *(undefined8 *)(param_1 + 0x58);
    uStack_2e8 = *(undefined8 *)(param_1 + 0x70);
    lStack_2f0 = *(long *)(param_1 + 0x68);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x80);
    uStack_2e0 = *(undefined8 *)(param_1 + 0x78);
    uStack_2d0 = CONCAT71(uStack_2d0._1_7_,param_1[0x88]);
    uStack_328 = *(undefined8 *)(param_1 + 0x30);
    uStack_330 = *(undefined8 *)(param_1 + 0x28);
    uStack_318 = *(undefined8 *)(param_1 + 0x40);
    uStack_320 = *(undefined8 *)(param_1 + 0x38);
    uStack_308 = *(undefined8 *)(param_1 + 0x50);
    uStack_310 = *(undefined8 *)(param_1 + 0x48);
    FUN_10420e260(&uStack_120,&uStack_b0);
    FUN_10420e260(&uStack_190,&uStack_b0);
    FUN_10420eefc(&uStack_330,0x112dcde38,&UNK_10dce36f0);
  }
  else {
    if (lStack_288 == 1) goto LAB_10420e71c;
    uStack_368 = *(undefined8 *)(param_2 + 0x60);
    uStack_370 = *(undefined8 *)(param_2 + 0x58);
    uStack_358 = *(undefined8 *)(param_2 + 0x70);
    uStack_360 = *(undefined8 *)(param_2 + 0x68);
    uStack_348 = *(undefined8 *)(param_2 + 0x80);
    uStack_350 = *(undefined8 *)(param_2 + 0x78);
    bStack_340 = param_2[0x88];
    uStack_398 = *(undefined8 *)(param_2 + 0x30);
    uStack_3a0 = *(undefined8 *)(param_2 + 0x28);
    uStack_388 = *(undefined8 *)(param_2 + 0x40);
    uStack_390 = *(undefined8 *)(param_2 + 0x38);
    uStack_378 = *(undefined8 *)(param_2 + 0x50);
    uStack_380 = *(undefined8 *)(param_2 + 0x48);
    uStack_2d0 = CONCAT71(uStack_2d0._1_7_,bStack_340);
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    bStack_50 = param_1[0x88];
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_88 = *(undefined8 *)(param_1 + 0x50);
    uStack_90 = *(undefined8 *)(param_1 + 0x48);
    uStack_330 = uStack_3a0;
    uStack_328 = uStack_398;
    uStack_320 = uStack_390;
    uStack_318 = uStack_388;
    uStack_310 = uStack_380;
    uStack_308 = uStack_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    lStack_2f0 = uStack_360;
    uStack_2e8 = uStack_358;
    uStack_2e0 = uStack_350;
    uStack_2d8 = uStack_348;
    FUN_10420e260(&uStack_120,auStack_408);
    FUN_10420e260(&uStack_190,auStack_408);
    puVar1 = &uStack_b0;
    FUN_1042187fc(puVar1,&uStack_330);
    FUN_10420eefc(&uStack_3a0,0x112dcde38,&UNK_10dce36f0);
    FUN_10420eefc(&uStack_260,0x112dcde38,&UNK_10dce36f0);
    if (((ulong)puVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x98] == 1) {
    if (param_2[0x98] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x98] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x90) != *(double *)(param_2 + 0x90)) {
      return 0;
    }
  }
  if (param_1[0xa8] == 1) {
    if (param_2[0xa8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0xa8] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0xa0) != *(double *)(param_2 + 0xa0)) {
      return 0;
    }
  }
  if (param_1[0xb8] == 1) {
    if (param_2[0xb8] == 1) {
      return 1;
    }
  }
  else if ((param_2[0xb8] != 1) && (*(double *)(param_1 + 0xb0) == *(double *)(param_2 + 0xb0))) {
    return 1;
  }
  return 0;
}



/* Entry: 10420e91c; end: 10420e983;  */

long FUN_10420e91c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10420e984; end: 10420ecd3;  */

undefined2 * FUN_10420e984(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar2 = *(long *)(param_2 + 0x34);
  _swift_bridgeObjectRetain();
  if (lVar2 == 1) {
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x3c) = uVar1;
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x24) = uVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_1 + 0x34) = lVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(lVar2);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  return param_1;
}



/* Entry: 10420ecd4; end: 10420ee1b;  */

undefined1 * FUN_10420ecd4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  if (*(long *)(param_1 + 0x68) != 1) {
    lVar2 = *(long *)(param_2 + 0x68);
    if (lVar2 != 1) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      param_1[0x30] = param_2[0x30];
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      param_1[0x40] = param_2[0x40];
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      param_1[0x50] = param_2[0x50];
      param_1[0x60] = param_2[0x60];
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(long *)(param_1 + 0x68) = lVar2;
      _objc_release();
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
      param_1[0x78] = param_2[0x78];
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      param_1[0x88] = param_2[0x88];
      goto LAB_10420eddc;
    }
    func_0x00010180cee4(param_1 + 0x28);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  param_1[0x88] = param_2[0x88];
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
LAB_10420eddc:
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  param_1[0x98] = param_2[0x98];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  param_1[0xa8] = param_2[0xa8];
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  param_1[0xb8] = param_2[0xb8];
  return param_1;
}



/* Entry: 10420ee1c; end: 10420eefb;  */

int FUN_10420ee1c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xb9) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420eefc; end: 10420ef3b;  */

undefined8 FUN_10420eefc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10420ef3c; end: 10420ef7f;  */

uint FUN_10420ef3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10420ef80(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10420ef80; end: 10420f0f3;  */

undefined8 FUN_10420ef80(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (((uVar3 != *(ulong *)(param_2 + 0x10)) || (lVar2 != lVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 0x10),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (((param_1[0x20] ^ param_2[0x20]) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (uVar3 == 0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        return 1;
      }
    }
    else if ((*(long *)(param_2 + 0x28) != 0) && (func_0x00010142cfc4(), (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10420f0f4; end: 10420f16f;  */

undefined1 * FUN_10420f0f4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x20] = param_2[0x20];
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10420f170; end: 10420f1cb;  */

undefined1 * FUN_10420f170(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x20] = param_2[0x20];
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10420f1cc; end: 10420f2bb;  */

int FUN_10420f1cc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420f2bc; end: 10420f337;  */

undefined8
FUN_10420f2bc(uint param_1,int param_2,ulong param_3,long param_4,uint param_5,int param_6,
             ulong param_7,long param_8)

{
  if ((((param_1 ^ param_5) & 1) == 0) && (param_2 == param_6)) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      if ((param_3 == param_7) && (param_4 == param_8)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_3,param_4,param_7,param_8,0);
      if ((param_3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10420f338; end: 10420f363;  */

long FUN_10420f338(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10420f364; end: 10420f36b;  */

void FUN_10420f364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10420f36c; end: 10420f437;  */

undefined1 * FUN_10420f36c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10420f438; end: 10420f4f7;  */

int FUN_10420f438(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420f4f8; end: 10420f68f;  */

uint FUN_10420f4f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x00010420f540(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10420f690; end: 10420f6bb;  */

long FUN_10420f690(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10420f6bc; end: 10420f6c3;  */

void FUN_10420f6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10420f6c4; end: 10420f7ff;  */

undefined1 * FUN_10420f6c4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10420f800; end: 10420f8e3;  */

int FUN_10420f800(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420f8e4; end: 10420f9f7;  */

bool FUN_10420f8e4(long param_1,int param_2,long param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a28 [840];
  undefined1 auStack_6e0 [840];
  undefined1 auStack_398 [840];
  
  if (param_1 == 0) {
    if (param_3 == 0) goto LAB_10420f9c8;
  }
  else if ((param_3 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 == *(long *)(param_3 + 0x10))
          ) {
    if ((lVar2 != 0) && (param_1 != param_3)) {
      _swift_bridgeObjectRetain(param_3);
      lVar3 = 0x20;
      do {
        _memcpy(auStack_6e0,param_1 + lVar3,0x348);
        _memcpy(auStack_398,param_3 + lVar3,0x348);
        func_0x00010178e544(auStack_6e0,auStack_a28);
        func_0x00010178e544(auStack_398,auStack_a28);
        puVar1 = auStack_6e0;
        FUN_10421ea94(puVar1,auStack_398);
        func_0x00010178e510(auStack_398);
        func_0x00010178e510(auStack_6e0);
        if (((ulong)puVar1 & 1) == 0) {
          _swift_bridgeObjectRelease(param_3);
          return false;
        }
        lVar3 = lVar3 + 0x348;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      _swift_bridgeObjectRelease(param_3);
    }
LAB_10420f9c8:
    return param_2 == param_4;
  }
  return false;
}



/* Entry: 10420f9f8; end: 10420f9ff;  */

void FUN_10420f9f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10420fa00; end: 10420fa4b;  */

undefined8 * FUN_10420fa00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 10420fa4c; end: 10420fa87;  */

undefined8 * FUN_10420fa4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 10420fa88; end: 10420fc53;  */

int FUN_10420fa88(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420fc54; end: 10420fc7f;  */

long FUN_10420fc54(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10420fc80; end: 10420fe13;  */

int FUN_10420fc80(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[7] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)((long)param_1 + 5)) {
    uVar1 = (*(byte *)((long)param_1 + 5) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420fe14; end: 10420feef;  */

void FUN_10420fe14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined1 auStack_170 [112];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_c8 = param_10;
  uStack_c0 = param_12;
  uStack_b8 = param_13;
  uStack_b0 = param_15;
  uStack_a8 = param_16;
  uStack_a0 = (undefined1)param_18;
  uStack_9f = (undefined7)((ulong)param_18 >> 8);
  uStack_98 = param_19;
  uStack_58 = param_10;
  uStack_50 = param_12;
  uStack_48 = param_13;
  uStack_40 = param_15;
  uStack_38 = param_16;
  uStack_30 = param_18;
  uStack_28 = param_19;
  uStack_100 = param_2;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uStack_ef = param_5;
  uStack_e8 = param_6;
  uStack_e0 = param_7;
  uStack_d8 = param_8;
  uStack_d0 = param_9;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_7f = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_60 = param_9;
  func_0x00010178e30c(&uStack_100,auStack_170);
  func_0x00010178e348(&uStack_90);
  param_1[9] = CONCAT71(uStack_b7,uStack_b8);
  param_1[8] = uStack_c0;
  param_1[0xb] = CONCAT71(uStack_a7,uStack_a8);
  param_1[10] = uStack_b0;
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_98,uStack_9f);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_a0,uStack_a7);
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = CONCAT62(uStack_ee,CONCAT11(uStack_ef,uStack_f0));
  param_1[5] = CONCAT71(uStack_d7,uStack_d8);
  param_1[4] = uStack_e0;
  param_1[7] = CONCAT71(uStack_c7,uStack_c8);
  param_1[6] = uStack_d0;
  return;
}



/* Entry: 10420fef0; end: 10420ff57;  */

uint FUN_10420fef0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined1)param_1[0xb];
  uStack_8f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined1)param_2[0xb];
  uStack_27 = (undefined7)((ulong)param_2[0xb] >> 8);
  FUN_10420ff58(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10420ff58; end: 10421014b;  */

undefined1 FUN_10420ff58(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_90 [112];
  
  if (*param_1 != *param_2) {
    return 0;
  }
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  if (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0) {
    lVar2 = param_1[4];
    lVar1 = param_2[4];
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        return 0;
      }
      func_0x00010178e30c(param_2,auStack_90);
    }
    else {
      if (lVar1 == 0) {
        func_0x00010178e30c(param_2,auStack_90);
        return 0;
      }
      uVar3 = param_1[3];
      if (((uVar3 != param_2[3]) || (lVar2 != lVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,lVar2,param_2[3],lVar1,0), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if (((((*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1) == 0) &&
        ((int)param_1[6] == (int)param_2[6])) &&
       (((*(byte *)(param_1 + 7) ^ *(byte *)(param_2 + 7)) & 1) == 0)) {
      if ((char)param_1[9] == '\x01') {
        if ((char)param_2[9] != '\x01') {
          return 0;
        }
      }
      else {
        if ((char)param_2[9] == '\x01') {
          return 0;
        }
        if ((double)param_1[8] != (double)param_2[8]) {
          return 0;
        }
      }
      if ((char)param_1[0xb] == '\x01') {
        if ((char)param_2[0xb] != '\x01') {
          return 0;
        }
      }
      else {
        if ((char)param_2[0xb] == '\x01') {
          return 0;
        }
        if ((double)param_1[10] != (double)param_2[10]) {
          return 0;
        }
      }
      if ((char)param_1[0xd] == '\x01') {
        if ((char)param_2[0xd] == '\x01') {
          return 1;
        }
      }
      else if (((char)param_2[0xd] != '\x01') && ((double)param_1[0xc] == (double)param_2[0xc])) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 10421014c; end: 104210153;  */

void FUN_10421014c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104210154; end: 1042101d7;  */

undefined8 * FUN_104210154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = param_2[8];
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042101d8; end: 10421028b;  */

undefined8 * FUN_1042101d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 10421028c; end: 10421031f;  */

undefined8 * FUN_10421028c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 104210320; end: 1042103eb;  */

int FUN_104210320(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042103ec; end: 104210557;  */

void FUN_1042103ec(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_2 < 4) {
    uVar6 = 0xeb00000000657079;
    uVar4 = 0x5464726143646e65;
    if (param_2 != 2) {
      uVar6 = 0x800000010f1efc70;
      uVar4 = 0xd000000000000016;
    }
    uVar1 = 0x800000010f1efc30;
    uVar5 = 0xd00000000000001b;
    if (param_2 != 0) {
      uVar1 = 0xeb00000000786564;
      uVar5 = 0x6e49646570706174;
    }
    if (param_2 < 2) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  else {
    uVar5 = 0xd000000000000017;
    pcVar2 = "screenshotSwipeCount";
    if (param_2 != 7) {
      uVar5 = 0xd000000000000012;
      pcVar2 = "renderedScreenshotCount";
    }
    pcVar3 = "servedScreenshotCount";
    uVar4 = 0xd000000000000014;
    if (param_2 != 6) {
      pcVar3 = pcVar2;
      uVar4 = uVar5;
    }
    pcVar2 = "screenshotEndCardStyle";
    uVar5 = 0xd000000000000012;
    if (param_2 != 4) {
      pcVar2 = "reviewEndCardStyle";
      uVar5 = 0xd000000000000015;
    }
    if (param_2 < 6) {
      pcVar3 = pcVar2;
      uVar4 = uVar5;
    }
    uVar6 = (ulong)pcVar3 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 104210558; end: 1042106b7;  */

undefined1  [16] FUN_104210558(byte param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    uVar6 = 0xeb00000000657079;
    uVar4 = 0x5464726143646e65;
    if (param_1 != 2) {
      uVar6 = 0x800000010f1efc70;
      uVar4 = 0xd000000000000016;
    }
    uVar1 = 0x800000010f1efc30;
    uVar5 = 0xd00000000000001b;
    if (param_1 != 0) {
      uVar1 = 0xeb00000000786564;
      uVar5 = 0x6e49646570706174;
    }
    if (param_1 < 2) {
      uVar6 = uVar1;
      uVar4 = uVar5;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar4;
    return auVar8;
  }
  uVar6 = 0xd000000000000017;
  pcVar2 = "screenshotSwipeCount";
  if (param_1 != 7) {
    uVar6 = 0xd000000000000012;
    pcVar2 = "renderedScreenshotCount";
  }
  pcVar3 = "servedScreenshotCount";
  uVar4 = 0xd000000000000014;
  if (param_1 != 6) {
    pcVar3 = pcVar2;
    uVar4 = uVar6;
  }
  pcVar2 = "screenshotEndCardStyle";
  uVar6 = 0xd000000000000012;
  if (param_1 != 4) {
    pcVar2 = "reviewEndCardStyle";
    uVar6 = 0xd000000000000015;
  }
  if (param_1 < 6) {
    pcVar3 = pcVar2;
    uVar4 = uVar6;
  }
  auVar7._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 1042106b8; end: 1042106fb;  */

void FUN_1042106b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1042103ec(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042106fc; end: 104210703;  */

void FUN_1042106fc(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 4) {
    uVar7 = 0xeb00000000657079;
    uVar5 = 0x5464726143646e65;
    if (bVar2 != 2) {
      uVar7 = 0x800000010f1efc70;
      uVar5 = 0xd000000000000016;
    }
    uVar1 = 0x800000010f1efc30;
    uVar6 = 0xd00000000000001b;
    if (bVar2 != 0) {
      uVar1 = 0xeb00000000786564;
      uVar6 = 0x6e49646570706174;
    }
    if (bVar2 < 2) {
      uVar5 = uVar6;
      uVar7 = uVar1;
    }
  }
  else {
    uVar6 = 0xd000000000000017;
    pcVar3 = "screenshotSwipeCount";
    if (bVar2 != 7) {
      uVar6 = 0xd000000000000012;
      pcVar3 = "renderedScreenshotCount";
    }
    pcVar4 = "servedScreenshotCount";
    uVar5 = 0xd000000000000014;
    if (bVar2 != 6) {
      pcVar4 = pcVar3;
      uVar5 = uVar6;
    }
    pcVar3 = "screenshotEndCardStyle";
    uVar6 = 0xd000000000000012;
    if (bVar2 != 4) {
      pcVar3 = "reviewEndCardStyle";
      uVar6 = 0xd000000000000015;
    }
    if (bVar2 < 6) {
      pcVar4 = pcVar3;
      uVar5 = uVar6;
    }
    uVar7 = (ulong)pcVar4 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 104210704; end: 104210797;  */

void FUN_104210704(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1042103ec(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104210798; end: 1042107af;  */

void FUN_104210798(void)

{
  undefined1 *unaff_x20;
  
  FUN_104210558(*unaff_x20);
  return;
}



/* Entry: 1042107b0; end: 1042107d3;  */

void FUN_1042107b0(undefined1 *param_1,undefined1 param_2)

{
  FUN_104210c20();
  *param_1 = param_2;
  return;
}



/* Entry: 1042107d4; end: 1042107eb;  */

undefined1  [16] FUN_1042107d4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1042107ec; end: 10421083b;  */

void FUN_1042107ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104210f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10421083c; end: 104210ab7;  */

void FUN_10421083c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 uStack_59;
  ulong uStack_58;
  
  lVar1 = 0x1130697d0;
  func_0x0001000285a8(0x1130697d0,&UNK_10dce3980);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_104210f90();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110752948,&UNK_110752948,param_1,uVar2,uVar3);
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(*unaff_x20,&uStack_58,lVar1);
  if (unaff_x21 == 0) {
    uStack_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[1],*(undefined1 *)(unaff_x20 + 2),&uStack_58,lVar1);
    uStack_58._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[3],&uStack_58,lVar1);
    uStack_58._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[4],&uStack_58,lVar1);
    uStack_58._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[5],&uStack_58,lVar1);
    uStack_58._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[6],&uStack_58,lVar1);
    uStack_58._0_1_ = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[7],&uStack_58,lVar1);
    uStack_58 = CONCAT71(uStack_58._1_7_,7);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[8],&uStack_58,lVar1);
    if (*(long *)(unaff_x20[9] + 0x10) == 0) {
      (**(code **)(lVar5 + 8))(puVar4,lVar1);
    }
    else {
      uStack_59 = 8;
      uVar2 = 0x112d38270;
      uStack_58 = unaff_x20[9];
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar3 = 0x112d5ad80;
      FUN_10421140c(0x112d5ad80,PTR___sSSSEsWP_11034da88,PTR___sSayxGSEsSERzlMc_11034dce0);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&uStack_58,&uStack_59,lVar1,uVar2,uVar3);
      (**(code **)(lVar5 + 8))(puVar4,lVar1);
    }
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 104210ab8; end: 104210b0f;  */

uint FUN_104210ab8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_104210b6c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104210b10; end: 104210b57;  */

void FUN_104210b10(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_104210c84(&uStack_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
    param_1[7] = uStack_38;
    param_1[6] = uStack_40;
    param_1[9] = uStack_28;
    param_1[8] = uStack_30;
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Entry: 104210b58; end: 104210b6b;  */

void FUN_104210b58(void)

{
  FUN_10421083c();
  return;
}



/* Entry: 104210b6c; end: 104210c1f;  */

undefined8 FUN_104210b6c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (*param_1 == *param_2) {
    if ((char)param_1[2] == '\x01') {
      if ((char)param_2[2] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[2] == '\x01' || param_1[1] != param_2[1]) {
      return 0;
    }
    if (((((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5]))
        && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))) && (param_1[8] == param_2[8])
       ) {
      lVar3 = param_1[9];
      lVar4 = param_2[9];
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 == *(long *)(lVar4 + 0x10)) {
        if ((lVar5 != 0) && (lVar3 != lVar4)) {
          plVar6 = (long *)(lVar4 + 0x28);
          plVar7 = (long *)(lVar3 + 0x28);
          do {
            uVar1 = plVar7[-1];
            if ((uVar1 != plVar6[-1] || *plVar7 != *plVar6) &&
               (func_0x000107c605b8(), (uVar1 & 1) == 0)) goto code_r0x00010142d02c;
            plVar6 = plVar6 + 2;
            plVar7 = plVar7 + 2;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        uVar2 = 1;
      }
      else {
code_r0x00010142d02c:
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 104210c20; end: 104210c83;  */

ulong FUN_104210c20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 104210c84; end: 104210f8f;  */

/* WARNING: Removing unreachable block (ram,0x000104210e40) */
/* WARNING: Removing unreachable block (ram,0x000104210e44) */

void FUN_104210c84(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  lVar2 = 0x1130698f8;
  func_0x0001000285a8(0x1130698f8,&UNK_10dce3b80);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar8);
  FUN_104210f90();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_a0 + -extraout_x8,&UNK_110752948,&UNK_110752948,lVar3,uVar8,uVar9);
  if (unaff_x21 == 0) {
    uStack_58 = 0;
    puVar4 = &uStack_58;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar4,lVar2);
    uStack_58 = 1;
    puVar5 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_68 = (undefined4)lVar3;
    uStack_58 = 2;
    puVar6 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    puStack_70 = (undefined1 *)0x0;
    if (((uint)lVar3 & 0xff) != 1) {
      puStack_70 = puVar6;
    }
    uStack_58 = 3;
    puVar6 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    puStack_78 = (undefined1 *)0x0;
    if (((uint)lVar3 & 0xff) != 1) {
      puStack_78 = puVar6;
    }
    uStack_58 = 4;
    puVar7 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    puVar6 = (undefined1 *)0x0;
    if (((uint)lVar3 & 0xff) != 1) {
      puVar6 = puVar7;
    }
    uStack_58 = 5;
    puVar7 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    puStack_80 = (undefined1 *)0x0;
    if (((uint)lVar3 & 0xff) != 1) {
      puStack_80 = puVar7;
    }
    uStack_58 = 6;
    puVar7 = &uStack_58;
    lVar3 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    puStack_90 = (undefined1 *)0x0;
    if (((uint)lVar3 & 0xff) != 1) {
      puStack_90 = puVar7;
    }
    uStack_58 = 7;
    puVar7 = &uStack_58;
    lVar3 = lVar2;
    puStack_88 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_9c = (uint)lVar3;
    uVar8 = 0x112d38270;
    puStack_98 = puVar7;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_61 = 8;
    uVar9 = 0x112d5ad70;
    FUN_10421140c(0x112d5ad70,PTR___sSSSesWP_11034daa8,PTR___sSayxGSesSeRzlMc_11034dd10);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_58,uVar8,&uStack_61,lVar2,uVar8,uVar9);
    puVar6 = (undefined1 *)0x0;
    if ((uStack_9c & 0xff) != 1) {
      puVar6 = puStack_98;
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)CONCAT71(uStack_57,uStack_58) != (undefined *)0x0) {
      puVar1 = (undefined *)CONCAT71(uStack_57,uStack_58);
    }
    puStack_98 = puVar6;
    (**(code **)(lVar10 + 8))(auStack_a0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_2);
    *param_1 = puVar4;
    param_1[1] = puVar5;
    *(char *)(param_1 + 2) = (char)uStack_68;
    param_1[3] = puStack_70;
    param_1[4] = puStack_78;
    param_1[5] = puStack_88;
    param_1[6] = puStack_80;
    param_1[7] = puStack_90;
    param_1[8] = puStack_98;
    param_1[9] = puVar1;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 104210f90; end: 104210fcf;  */

void FUN_104210f90(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3b24;
  _swift_getWitnessTable(&UNK_10dce3b24,&UNK_110752948);
  puRam00000001130697d8 = puVar1;
  return;
}



/* Entry: 104210fd0; end: 104210ffb;  */

long FUN_104210fd0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104210ffc; end: 104211003;  */

void FUN_104210ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 104211004; end: 10421112f;  */

undefined8 * FUN_104211004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104211130; end: 104211343;  */

int FUN_104211130(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104211344; end: 104211383;  */

void FUN_104211344(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3afc;
  _swift_getWitnessTable(&UNK_10dce3afc,&UNK_110752948);
  puRam00000001130697e0 = puVar1;
  return;
}



/* Entry: 104211384; end: 104211387;  */

void FUN_104211384(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3a5c;
  _swift_getWitnessTable(&UNK_10dce3a5c,&UNK_110752948);
  puRam00000001130697e8 = puVar1;
  return;
}



/* Entry: 104211388; end: 1042113c7;  */

void FUN_104211388(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3a5c;
  _swift_getWitnessTable(&UNK_10dce3a5c,&UNK_110752948);
  puRam00000001130697e8 = puVar1;
  return;
}



/* Entry: 1042113c8; end: 1042113cb;  */

void FUN_1042113c8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3a34;
  _swift_getWitnessTable(&UNK_10dce3a34,&UNK_110752948);
  puRam00000001130697f0 = puVar1;
  return;
}



/* Entry: 1042113cc; end: 10421140b;  */

void FUN_1042113cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3a34;
  _swift_getWitnessTable(&UNK_10dce3a34,&UNK_110752948);
  puRam00000001130697f0 = puVar1;
  return;
}



/* Entry: 10421140c; end: 104211473;  */

void FUN_10421140c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d38270;
    func_0x00010002969c(0x112d38270,&UNK_10d905a20);
    uStack_38 = param_2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104211474; end: 104211487;  */

bool FUN_104211474(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104211488; end: 104211533;  */

void FUN_104211488(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104211534; end: 104211607;  */

undefined1  [16] FUN_104211534(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar6 = *unaff_x20;
  uVar1 = 0xd000000000000025;
  pcVar5 = "exitCoordEndSwipeTapPositionX";
  uVar2 = uVar1;
  if (bVar6 != 6) {
    uVar2 = 0xd00000000000001d;
    pcVar5 = "eTapPositionYRelative";
  }
  pcVar4 = "exitCoordStartSwipeTapPositionY";
  if (bVar6 != 4) {
    uVar1 = 0xd00000000000001d;
    pcVar4 = "eTapPositionXRelative";
  }
  if (bVar6 < 6) {
    pcVar5 = pcVar4;
    uVar2 = uVar1;
  }
  pcVar4 = "exitCoordStartSwipeTapPositionX";
  uVar1 = 0xd000000000000027;
  if (bVar6 != 2) {
    pcVar4 = "ipeTapPositionYRelative";
    uVar1 = 0xd00000000000001f;
  }
  pcVar3 = "displayedReviewIds";
  uVar7 = 0xd000000000000027;
  if (bVar6 != 0) {
    pcVar3 = "ipeTapPositionXRelative";
    uVar7 = 0xd00000000000001f;
  }
  if (bVar6 < 2) {
    pcVar4 = pcVar3;
    uVar1 = uVar7;
  }
  if (bVar6 < 4) {
    pcVar5 = pcVar4;
    uVar2 = uVar1;
  }
  auVar8._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 104211608; end: 10421162b;  */

void FUN_104211608(undefined1 *param_1,undefined1 param_2)

{
  FUN_104211b8c();
  *param_1 = param_2;
  return;
}



/* Entry: 10421162c; end: 104211643;  */

undefined1  [16] FUN_10421162c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104211644; end: 104211693;  */

void FUN_104211644(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104211b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104211694; end: 10421189f;  */

void FUN_104211694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113069900;
  func_0x0001000285a8(0x113069900,&UNK_10dce3b90);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104211b4c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110752b40,&UNK_110752b40,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
            (*unaff_x20,*(undefined1 *)(unaff_x20 + 1),&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&uStack_52,lVar3);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[4],*(undefined1 *)(unaff_x20 + 5),&uStack_53,lVar3);
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[6],*(undefined1 *)(unaff_x20 + 7),&uStack_54,lVar3);
    uStack_55 = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[8],*(undefined1 *)(unaff_x20 + 9),&uStack_55,lVar3);
    uStack_56 = 5;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[10],*(undefined1 *)(unaff_x20 + 0xb),&uStack_56,lVar3);
    uStack_57 = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[0xc],*(undefined1 *)(unaff_x20 + 0xd),&uStack_57,lVar3);
    uStack_58 = 7;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[0xe],*(undefined1 *)(unaff_x20 + 0xf),&uStack_58,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1042118a0; end: 10421191f;  */

uint FUN_1042118a0(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
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
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  uStack_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_10421198c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104211920; end: 104211977;  */

void FUN_104211920(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_104211e28(&uStack_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = uStack_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = CONCAT71(uStack_37,uStack_38);
    param_1[0xc] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Entry: 104211978; end: 10421198b;  */

void FUN_104211978(void)

{
  FUN_104211694();
  return;
}



/* Entry: 10421198c; end: 104211b4b;  */

undefined1 FUN_10421198c(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) != '\x01') && (bVar1 = false, !NAN(*param_1) && !NAN(*param_2))) {
      bVar1 = *param_1 == *param_2;
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 3) != '\x01') && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2])))
    {
      bVar1 = param_1[2] == param_2[2];
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_2 + 5) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 5) == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    if (*(char *)(param_2 + 7) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 7) == '\x01') {
      return 0;
    }
    if (param_1[6] != param_2[6]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    if (*(char *)(param_2 + 9) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 9) == '\x01') {
      return 0;
    }
    if (param_1[8] != param_2[8]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if (*(char *)(param_2 + 0xb) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      return 0;
    }
    if (param_1[10] != param_2[10]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(param_2 + 0xd) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xd) == '\x01') {
      return 0;
    }
    if (param_1[0xc] != param_2[0xc]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_2 + 0xf) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 0xf) != '\x01') && (param_1[0xe] == param_2[0xe])) {
    return 1;
  }
  return 0;
}



/* Entry: 104211b4c; end: 104211b8b;  */

void FUN_104211b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3ce8;
  _swift_getWitnessTable(&UNK_10dce3ce8,&UNK_110752b40);
  puRam0000000113069908 = puVar1;
  return;
}



/* Entry: 104211b8c; end: 104211e27;  */

undefined4 FUN_104211b8c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0xd000000000000027;
  if ((param_1 == -0x2fffffffffffffd9 && param_2 == -0x7ffffffef0e102d0) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1efd30,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xd00000000000001f;
    if (((param_1 == -0x2fffffffffffffe1) && (param_2 == -0x7ffffffef0e102a0)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001f,0x800000010f1efd60,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != -0x2fffffffffffffd9) || (param_2 != -0x7ffffffef0e10280)) {
        uVar2 = 0xd000000000000027;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000027,0x800000010f1efd80,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          if ((param_1 != -0x2fffffffffffffe1) || (param_2 != -0x7ffffffef0e10250)) {
            uVar2 = 0xd00000000000001f;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001f,0x800000010f1efdb0,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000025;
              if (((param_1 != -0x2fffffffffffffdb) || (param_2 != -0x7ffffffef0e10230)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000025,0x800000010f1efdd0,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                if ((param_1 != -0x2fffffffffffffe3) || (param_2 != -0x7ffffffef0e10200)) {
                  uVar2 = 0xd00000000000001d;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd00000000000001d,0x800000010f1efe00,param_1,param_2,0);
                  if ((uVar2 & 1) == 0) {
                    if ((param_1 != -0x2fffffffffffffdb) || (param_2 != -0x7ffffffef0e101e0)) {
                      uVar2 = 0xd000000000000025;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000025,0x800000010f1efe20,param_1,param_2,0);
                      if ((uVar2 & 1) == 0) {
                        if ((param_1 == -0x2fffffffffffffe3) && (param_2 == -0x7ffffffef0e101b0)) {
                          _swift_bridgeObjectRelease(0x800000010f1efe50);
                          return 7;
                        }
                        uVar2 = 0xd00000000000001d;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd00000000000001d,0x800000010f1efe50,param_1,param_2,0);
                        _swift_bridgeObjectRelease(param_2);
                        if ((uVar2 & 1) != 0) {
                          return 7;
                        }
                        return 8;
                      }
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 6;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                return 5;
              }
              _swift_bridgeObjectRelease(param_2);
              return 4;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 3;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 104211e28; end: 1042120c3;  */

/* WARNING: Removing unreachable block (ram,0x000104211fcc) */
/* WARNING: Removing unreachable block (ram,0x000104211fd0) */

void FUN_104211e28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 *puStack_b0;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113069928;
  func_0x0001000285a8(0x113069928,&UNK_10dce3d38);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104211b4c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&puStack_b0 - extraout_x8,&UNK_110752b40,&UNK_110752b40,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar9 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_64 = (undefined4)lVar9;
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar9 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_68 = (undefined4)lVar9;
    uStack_54 = 3;
    puVar8 = &uStack_54;
    lVar9 = lVar3;
    puStack_70 = puVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_74 = (undefined4)lVar9;
    uStack_55 = 4;
    puVar7 = &uStack_55;
    lVar9 = lVar3;
    puStack_80 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_84 = (undefined4)lVar9;
    uStack_56 = 5;
    puVar8 = &uStack_56;
    lVar9 = lVar3;
    puStack_90 = puVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_94 = (undefined4)lVar9;
    uStack_57 = 6;
    puVar7 = &uStack_57;
    lVar9 = lVar3;
    puStack_a0 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_a4 = (undefined4)lVar9;
    uStack_58 = 7;
    puVar8 = &uStack_58;
    lVar9 = lVar3;
    puStack_b0 = puVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    (**(code **)(lVar10 + 8))((long)&puStack_b0 - extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    *(char *)(param_1 + 1) = (char)lVar4;
    param_1[2] = puVar6;
    *(char *)(param_1 + 3) = (char)uStack_64;
    param_1[4] = puStack_70;
    *(char *)(param_1 + 5) = (char)uStack_68;
    param_1[6] = puStack_80;
    *(char *)(param_1 + 7) = (char)uStack_74;
    param_1[8] = puStack_90;
    *(char *)(param_1 + 9) = (char)uStack_84;
    param_1[10] = puStack_a0;
    *(char *)(param_1 + 0xb) = (char)uStack_94;
    param_1[0xc] = puStack_b0;
    *(char *)(param_1 + 0xd) = (char)uStack_a4;
    param_1[0xe] = puVar8;
    *(char *)(param_1 + 0xf) = (char)lVar9;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1042120c4; end: 1042120ef;  */

long FUN_1042120c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042120f0; end: 1042122d3;  */

int FUN_1042120f0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1042122d4; end: 104212313;  */

void FUN_1042122d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3cc0;
  _swift_getWitnessTable(&UNK_10dce3cc0,&UNK_110752b40);
  puRam0000000113069910 = puVar1;
  return;
}



/* Entry: 104212314; end: 104212317;  */

void FUN_104212314(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3c58;
  _swift_getWitnessTable(&UNK_10dce3c58,&UNK_110752b40);
  puRam0000000113069918 = puVar1;
  return;
}



/* Entry: 104212318; end: 104212357;  */

void FUN_104212318(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3c58;
  _swift_getWitnessTable(&UNK_10dce3c58,&UNK_110752b40);
  puRam0000000113069918 = puVar1;
  return;
}



/* Entry: 104212358; end: 10421235b;  */

void FUN_104212358(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3c30;
  _swift_getWitnessTable(&UNK_10dce3c30,&UNK_110752b40);
  puRam0000000113069920 = puVar1;
  return;
}



/* Entry: 10421235c; end: 10421239b;  */

void FUN_10421235c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3c30;
  _swift_getWitnessTable(&UNK_10dce3c30,&UNK_110752b40);
  puRam0000000113069920 = puVar1;
  return;
}



/* Entry: 10421239c; end: 1042123c7;  */

bool FUN_10421239c(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}



/* Entry: 1042123c8; end: 1042124b7;  */

void FUN_1042123c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042124b8; end: 1042124bb;  */

void FUN_1042124b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3d40;
  _swift_getWitnessTable(&UNK_10dce3d40,&UNK_110752c68);
  puRam0000000113069930 = puVar1;
  return;
}


