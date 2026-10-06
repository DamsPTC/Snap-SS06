/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000663d8; end: 1000664b7;  */

undefined8 * FUN_1000663d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar7 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar7;
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar6 = param_2[10];
  param_1[10] = uVar6;
  lVar5 = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar6);
  if (lVar5 == 1) {
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    param_1[0xd] = param_2[0xd];
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar5;
    param_1[0xd] = param_2[0xd];
    _swift_bridgeObjectRetain(lVar5);
  }
  return param_1;
}



/* Entry: 1000664b8; end: 10006663f;  */

undefined8 * FUN_1000664b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _objc_retain();
  _objc_release(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _objc_retain();
  _objc_release(uVar1);
  lVar2 = param_1[0xc];
  if (lVar2 == 1) {
    if (param_2[0xc] == 1) {
      uVar3 = param_2[0xc];
      uVar1 = param_2[0xb];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar1;
    }
    else {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0xc] == 1) {
    FUN_10005dab0(param_1 + 0xb);
    uVar1 = param_2[0xd];
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = uVar1;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 100066640; end: 10006671b;  */

undefined8 * FUN_100066640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar2);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _objc_release(uVar2);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _objc_release(uVar2);
  if (param_1[0xc] != 1) {
    lVar3 = param_2[0xc];
    if (lVar3 != 1) {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[0xd] = param_2[0xd];
      return param_1;
    }
    FUN_10005dab0(param_1 + 0xb);
  }
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 10006671c; end: 1000667df;  */

int FUN_10006671c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000667e0; end: 100066d07;  */

void FUN_1000667e0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auStack_528 [152];
  undefined7 uStack_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  undefined1 uStack_479;
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  undefined1 uStack_469;
  undefined7 uStack_468;
  undefined1 uStack_461;
  undefined7 uStack_460;
  undefined1 uStack_459;
  undefined7 uStack_458;
  undefined1 uStack_451;
  undefined7 uStack_450;
  undefined1 uStack_449;
  undefined7 uStack_448;
  undefined1 uStack_441;
  undefined7 uStack_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  undefined1 uStack_431;
  undefined7 uStack_430;
  undefined1 uStack_429;
  undefined7 uStack_428;
  undefined1 uStack_421;
  undefined7 uStack_420;
  undefined1 uStack_419;
  undefined7 uStack_418;
  undefined1 uStack_411;
  undefined7 uStack_410;
  undefined1 uStack_409;
  undefined7 uStack_408;
  undefined1 uStack_401;
  undefined7 uStack_400;
  undefined8 uStack_3f9;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
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
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
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
  undefined8 uStack_2e0;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
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
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
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
  undefined *puStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
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
  
  puStack_1a0 = *(undefined **)(param_2 + 0x30);
  lStack_198 = *(undefined8 *)(param_2 + 0x50);
  lVar4 = param_2;
  FUN_100067284();
  puVar5 = &UNK_1000b5aa8;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12hideIfTintedQryF(&puStack_100);
  lVar2 = lStack_f8;
  puVar1 = puStack_100;
  uVar3 = (undefined1)uStack_f0;
  uVar6 = uStack_f0 & 0xff;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  func_0x000100066af4(&puStack_100,param_2);
  uStack_388 = uStack_98;
  uStack_390 = uStack_a0;
  uStack_378 = uStack_88;
  uStack_380 = uStack_90;
  uStack_3c8 = uStack_d8;
  uStack_3d0 = uStack_e0;
  uStack_3b8 = uStack_c8;
  uStack_3c0 = uStack_d0;
  uStack_3a8 = uStack_b8;
  uStack_3b0 = uStack_c0;
  uStack_398 = uStack_a8;
  uStack_3a0 = uStack_b0;
  uStack_3e8 = lStack_f8;
  uStack_3f0 = puStack_100;
  uStack_3d8 = uStack_e8;
  uStack_3e0 = uStack_f0;
  uStack_2f8 = uStack_98;
  uStack_300 = uStack_a0;
  uStack_2e8 = uStack_88;
  uStack_2f0 = uStack_90;
  uStack_338 = uStack_d8;
  uStack_340 = uStack_e0;
  uStack_328 = uStack_c8;
  uStack_330 = uStack_d0;
  uStack_318 = uStack_b8;
  uStack_320 = uStack_c0;
  uStack_308 = uStack_a8;
  uStack_310 = uStack_b0;
  uStack_370 = uStack_80;
  uStack_2e0 = uStack_80;
  uStack_358 = lStack_f8;
  uStack_360 = puStack_100;
  uStack_348 = uStack_e8;
  uStack_350 = uStack_f0;
  func_0x000100069180(&uStack_3f0,&puStack_1a0,0x1000c7360,&UNK_10008d310);
  func_0x0001000691c8(&uStack_360,0x1000c7360,&UNK_10008d310);
  uStack_1c0 = uStack_388;
  uStack_1c8 = uStack_390;
  uStack_1b0 = uStack_378;
  uStack_1b8 = uStack_380;
  uStack_200 = uStack_3c8;
  uStack_208 = uStack_3d0;
  uStack_1f0 = uStack_3b8;
  uStack_1f8 = uStack_3c0;
  uStack_1d0 = uStack_398;
  uStack_1d8 = uStack_3a0;
  uStack_1e0 = uStack_3a8;
  uStack_1e8 = uStack_3b0;
  uStack_210 = uStack_3d8;
  uStack_218 = uStack_3e0;
  uStack_220 = uStack_3e8;
  uStack_228 = uStack_3f0;
  uStack_258 = uStack_388;
  uStack_260 = uStack_390;
  uStack_248 = uStack_378;
  uStack_250 = uStack_380;
  uStack_298 = uStack_3c8;
  uStack_2a0 = uStack_3d0;
  uStack_288 = uStack_3b8;
  uStack_290 = uStack_3c0;
  uStack_278 = uStack_3a8;
  uStack_280 = uStack_3b0;
  uStack_268 = uStack_398;
  uStack_270 = uStack_3a0;
  uStack_1a8 = uStack_370;
  uStack_240 = uStack_370;
  uStack_2b8 = uStack_3e8;
  uStack_2c0 = uStack_3f0;
  uStack_2a8 = uStack_3d8;
  uStack_2b0 = uStack_3e0;
  puStack_2d0 = puVar5;
  lStack_2c8 = lVar4;
  puStack_238 = puVar5;
  lStack_230 = lVar4;
  func_0x000100069180(&puStack_2d0,&puStack_100,0x1000c7368,&UNK_10008d318);
  func_0x0001000691c8(&puStack_238,0x1000c7368,&UNK_10008d318);
  uStack_98 = uStack_268;
  uStack_a0 = uStack_270;
  uStack_88 = uStack_258;
  uStack_90 = uStack_260;
  uStack_78 = uStack_248;
  uStack_80 = uStack_250;
  uStack_d8 = uStack_2a8;
  uStack_e0 = uStack_2b0;
  uStack_c8 = uStack_298;
  uStack_d0 = uStack_2a0;
  uStack_b8 = uStack_288;
  uStack_c0 = uStack_290;
  uStack_a8 = uStack_278;
  uStack_b0 = uStack_280;
  lStack_f8 = lStack_2c8;
  puStack_100 = puStack_2d0;
  uStack_e8 = uStack_2b8;
  uStack_f0 = (ulong)uStack_2c0;
  uStack_138 = uStack_268;
  uStack_140 = uStack_270;
  uStack_128 = uStack_258;
  uStack_130 = uStack_260;
  uStack_118 = uStack_248;
  uStack_120 = uStack_250;
  uStack_178 = uStack_2a8;
  uStack_180 = uStack_2b0;
  uStack_168 = uStack_298;
  uStack_170 = uStack_2a0;
  uStack_158 = uStack_288;
  uStack_160 = uStack_290;
  uStack_148 = uStack_278;
  uStack_150 = uStack_280;
  lStack_198 = lStack_2c8;
  puStack_1a0 = puStack_2d0;
  uStack_188 = uStack_2b8;
  uStack_190 = uStack_2c0;
  uStack_411 = (undefined1)uStack_258;
  uStack_410 = (undefined7)((ulong)uStack_258 >> 8);
  uStack_419 = (undefined1)uStack_260;
  uStack_418 = (undefined7)((ulong)uStack_260 >> 8);
  uStack_421 = (undefined1)uStack_268;
  uStack_420 = (undefined7)((ulong)uStack_268 >> 8);
  uStack_429 = (undefined1)uStack_270;
  uStack_428 = (undefined7)((ulong)uStack_270 >> 8);
  uStack_451 = (undefined1)uStack_298;
  uStack_450 = (undefined7)((ulong)uStack_298 >> 8);
  uStack_459 = (undefined1)uStack_2a0;
  uStack_458 = (undefined7)((ulong)uStack_2a0 >> 8);
  uStack_461 = (undefined1)uStack_2a8;
  uStack_460 = (undefined7)((ulong)uStack_2a8 >> 8);
  uStack_469 = (undefined1)uStack_2b0;
  uStack_468 = (undefined7)(uStack_2b0 >> 8);
  uStack_401 = (undefined1)uStack_248;
  uStack_400 = (undefined7)((ulong)uStack_248 >> 8);
  uStack_409 = (undefined1)uStack_250;
  uStack_408 = (undefined7)((ulong)uStack_250 >> 8);
  uStack_441 = (undefined1)uStack_288;
  uStack_440 = (undefined7)((ulong)uStack_288 >> 8);
  uStack_449 = (undefined1)uStack_290;
  uStack_448 = (undefined7)((ulong)uStack_290 >> 8);
  uStack_431 = (undefined1)uStack_278;
  uStack_430 = (undefined7)((ulong)uStack_278 >> 8);
  uStack_439 = (undefined1)uStack_280;
  uStack_438 = (undefined7)((ulong)uStack_280 >> 8);
  uStack_3f9 = uStack_240;
  uStack_481 = (undefined1)lStack_2c8;
  uStack_480 = (undefined7)((ulong)lStack_2c8 >> 8);
  uStack_489 = SUB81(puStack_2d0,0);
  uStack_488 = (undefined7)((ulong)puStack_2d0 >> 8);
  uStack_471 = (undefined1)uStack_2b8;
  uStack_470 = (undefined7)((ulong)uStack_2b8 >> 8);
  uStack_479 = SUB81(uStack_2c0,0);
  uStack_478 = (undefined7)((ulong)uStack_2c0 >> 8);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_421,uStack_428);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_429,uStack_430);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_411,uStack_418);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_419,uStack_420);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_401,uStack_408);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_409,uStack_410);
  param_1[0x15] = uStack_240;
  param_1[0x14] = uStack_248;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_461,uStack_468);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_469,uStack_470);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_451,uStack_458);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_459,uStack_460);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_441,uStack_448);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_449,uStack_450);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_431,uStack_438);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_439,uStack_440);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_481,uStack_488);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_489,uStack_490);
  uStack_70 = uStack_240;
  uStack_110 = uStack_240;
  *param_1 = puVar1;
  param_1[1] = lVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_471,uStack_478);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_479,uStack_480);
  FUN_1000672c4(puVar1,lVar2,uVar6);
  func_0x000100069180(&puStack_1a0,auStack_528,0x1000c7368,&UNK_10008d318);
  func_0x0001000691c8(&puStack_100,0x1000c7368,&UNK_10008d318);
  func_0x0001000672fc(puVar1,lVar2,uVar6);
  return;
}



/* Entry: 100066d08; end: 100066e3f;  */

void FUN_100066d08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_1b8 [72];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  uStack_170 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x28);
  uStack_150 = *(undefined8 *)(param_2 + 0x40);
  uStack_148 = *(undefined8 *)(param_2 + 0x48);
  if (lVar2 == 0) {
    uStack_160 = 0;
    lStack_158 = -0x2000000000000000;
  }
  else {
    uStack_160 = *(undefined8 *)(param_2 + 0x20);
    lStack_158 = lVar2;
  }
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0x100;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e7 = 1;
  uStack_168 = uVar1;
  uStack_128 = uStack_170;
  uStack_120 = uVar1;
  uStack_118 = uStack_160;
  lStack_110 = lStack_158;
  uStack_108 = uStack_150;
  uStack_100 = uStack_148;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(lVar2);
  func_0x000100069180(&uStack_170,&uStack_90,0x1000c7328,&UNK_10008d260);
  func_0x0001000691c8(&uStack_128,0x1000c7328,&UNK_10008d260);
  uStack_68 = uStack_148;
  uStack_70 = uStack_150;
  uStack_58 = uStack_138;
  uStack_60 = uStack_140;
  uStack_50 = uStack_130;
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  lStack_78 = lStack_158;
  uStack_80 = uStack_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_a0 = uStack_130;
  uStack_d8 = uStack_168;
  uStack_e0 = uStack_170;
  lStack_c8 = lStack_158;
  uStack_d0 = uStack_160;
  param_1[5] = uStack_148;
  param_1[4] = uStack_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[1] = uStack_168;
  *param_1 = uStack_170;
  param_1[3] = lStack_158;
  param_1[2] = uStack_160;
  *(undefined2 *)(param_1 + 8) = uStack_130;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  func_0x000100069180(&uStack_e0,auStack_1b8,0x1000c7328,&UNK_10008d260);
  func_0x0001000691c8(&uStack_90,0x1000c7328,&UNK_10008d260);
  return;
}



/* Entry: 100066e40; end: 100067283;  */

undefined1  [16] FUN_100066e40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0x20;
  uStack_68 = 0xe100000000000000;
  FUN_100010174();
  puVar3 = &uStack_70;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (puVar3,PTR___sSSN_1000b1180,PTR___sSSN_1000b1180,param_1,param_1);
  puVar10 = PTR___swiftEmptyArrayStorage_1000b14d0;
  lVar11 = puVar3[2];
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    puVar10 = PTR___swiftEmptyArrayStorage_1000b14d0;
  }
  else {
    func_0x00010005ae78(0,lVar11,0);
    puVar13 = puVar3 + 5;
    do {
      uVar1 = puVar13[-1];
      uVar2 = *puVar13;
      uVar4 = uVar1;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      uVar9 = (uint)(uVar1 >> 0x3b) & 1;
      if ((uVar2 & 0x1000000000000000) == 0) {
        uVar9 = 1;
      }
      uVar12 = 7;
      if (uVar9 == 0) {
        uVar12 = 0xb;
      }
      uVar12 = uVar12 | uVar4 << 0x10;
      _swift_bridgeObjectRetain(uVar2);
      uVar4 = 0xf;
      uVar9 = 1;
      __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,1,uVar12,uVar1,uVar2);
      if ((uVar9 & 0xff) != 1) {
        uVar12 = uVar4;
      }
      uVar5 = 0xf;
      uVar4 = uVar2;
      __sSSySsSnySS5IndexVGcig(0xf,uVar12,uVar1,uVar2);
      __sSS14_fromSubstringySSSshFZ();
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar4) {
        func_0x00010005ae78(1 < *(ulong *)(puVar10 + 0x18),uVar4 + 1,1);
      }
      puVar13 = puVar13 + 2;
      *(ulong *)(puVar10 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar10 + uVar4 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar10 + uVar4 * 0x10 + 0x28) = uVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(puVar3);
  }
  uVar5 = 0x1000c7380;
  func_0x0001000100d0(0x1000c7380,&UNK_10008d330);
  uVar6 = 0x1000c7388;
  FUN_10006913c(0x1000c7388,0x1000c7380,&UNK_10008d330,PTR___ss10ArraySliceVyxGSKsMc_1000b1248);
  uVar7 = 0;
  uVar8 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,uVar5,uVar6);
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar7;
  return auVar14;
}



/* Entry: 100067284; end: 1000672c3;  */

void FUN_100067284(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008d3cc;
  _swift_getWitnessTable(&UNK_10008d3cc,&UNK_1000b5aa8);
  puRam00000001000c7358 = puVar1;
  return;
}



/* Entry: 1000672c4; end: 10006732f;  */

void FUN_1000672c4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)();
  return;
}



/* Entry: 100067330; end: 10006799f;  */

void FUN_100067330(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  long lStack_840;
  undefined8 uStack_838;
  undefined1 uStack_830;
  undefined7 uStack_82f;
  undefined1 uStack_828;
  undefined7 uStack_827;
  undefined1 uStack_820;
  undefined7 uStack_81f;
  undefined1 uStack_818;
  undefined7 uStack_817;
  undefined1 uStack_810;
  undefined7 uStack_80f;
  undefined1 uStack_808;
  undefined7 uStack_807;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined1 uStack_7f8;
  undefined7 uStack_7f7;
  undefined1 uStack_7f0;
  undefined7 uStack_7ef;
  undefined1 uStack_7e8;
  undefined7 uStack_7e7;
  undefined1 uStack_7e0;
  undefined7 uStack_7df;
  undefined1 uStack_7d8;
  undefined7 uStack_7d7;
  undefined1 uStack_7d0;
  undefined7 uStack_7cf;
  undefined1 uStack_7c8;
  undefined7 uStack_7c7;
  undefined1 uStack_7c0;
  undefined7 uStack_7bf;
  undefined1 uStack_7b8;
  undefined7 uStack_7b7;
  undefined1 uStack_7b0;
  undefined7 uStack_7af;
  undefined1 uStack_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined7 uStack_79f;
  undefined1 uStack_798;
  undefined7 uStack_797;
  undefined1 uStack_790;
  undefined7 uStack_78f;
  undefined1 uStack_788;
  undefined7 uStack_787;
  undefined1 uStack_780;
  undefined7 uStack_77f;
  undefined1 uStack_778;
  undefined7 uStack_777;
  undefined1 uStack_770;
  undefined7 uStack_76f;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined1 uStack_760;
  undefined7 uStack_75f;
  undefined1 uStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined7 uStack_74f;
  undefined8 uStack_748;
  long alStack_740 [2];
  undefined1 uStack_730;
  undefined8 uStack_72f;
  undefined8 uStack_727;
  undefined8 uStack_71f;
  undefined8 uStack_717;
  undefined8 uStack_70f;
  undefined8 uStack_707;
  undefined8 uStack_6ff;
  undefined8 uStack_6f7;
  undefined8 uStack_6ef;
  undefined8 uStack_6e7;
  undefined8 uStack_6df;
  undefined8 uStack_6d7;
  undefined8 uStack_6cf;
  undefined8 uStack_6c7;
  undefined8 uStack_6bf;
  undefined8 uStack_6b7;
  undefined8 uStack_6af;
  undefined8 uStack_6a7;
  undefined8 uStack_69f;
  undefined8 uStack_697;
  undefined8 uStack_68f;
  undefined8 uStack_687;
  undefined8 uStack_67f;
  undefined8 uStack_677;
  undefined8 uStack_66f;
  undefined8 uStack_667;
  undefined8 uStack_65f;
  undefined7 uStack_657;
  undefined1 uStack_650;
  undefined7 uStack_64f;
  undefined8 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
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
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 uStack_518;
  long lStack_510;
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
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  undefined7 uStack_3d8;
  undefined1 uStack_3d1;
  undefined7 uStack_3d0;
  undefined1 uStack_3c9;
  undefined7 uStack_3c8;
  undefined1 uStack_3c1;
  undefined7 uStack_3c0;
  undefined1 uStack_3b9;
  undefined7 uStack_3b8;
  undefined1 uStack_3b1;
  undefined7 uStack_3b0;
  undefined1 uStack_3a9;
  undefined7 uStack_3a8;
  undefined1 uStack_3a1;
  undefined7 uStack_3a0;
  undefined1 uStack_399;
  undefined7 uStack_398;
  undefined1 uStack_391;
  undefined7 uStack_390;
  undefined1 uStack_389;
  undefined7 uStack_388;
  undefined1 uStack_381;
  undefined7 uStack_380;
  undefined1 uStack_379;
  undefined7 uStack_378;
  undefined1 uStack_371;
  undefined7 uStack_370;
  undefined1 uStack_369;
  undefined7 uStack_368;
  undefined1 uStack_361;
  undefined7 uStack_360;
  undefined1 uStack_359;
  undefined7 uStack_358;
  undefined1 uStack_351;
  undefined7 uStack_350;
  undefined1 uStack_349;
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined7 uStack_340;
  undefined1 uStack_339;
  undefined7 uStack_338;
  undefined1 uStack_331;
  undefined7 uStack_330;
  undefined1 uStack_329;
  undefined7 uStack_328;
  undefined1 uStack_321;
  undefined7 uStack_320;
  undefined1 uStack_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  undefined1 uStack_309;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  undefined8 uStack_2f9;
  long lStack_2b0;
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
  undefined8 uStack_218;
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
  undefined8 uStack_1b8;
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
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      func_0x000100069014(&uStack_180);
      goto LAB_100067968;
    }
    __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
    func_0x000100067cf0(&uStack_180,param_3,param_4);
    uStack_958 = uStack_b8;
    uStack_960 = uStack_c0;
    uStack_948 = uStack_a8;
    uStack_950 = uStack_b0;
    uStack_998 = uStack_f8;
    uStack_9a0 = uStack_100;
    uStack_988 = uStack_e8;
    uStack_990 = uStack_f0;
    uStack_978 = uStack_d8;
    uStack_980 = uStack_e0;
    uStack_968 = uStack_c8;
    uStack_970 = uStack_d0;
    uStack_9d8 = uStack_138;
    uStack_9e0 = uStack_140;
    uStack_9c8 = uStack_128;
    uStack_9d0 = uStack_130;
    uStack_9b8 = uStack_118;
    uStack_9c0 = uStack_120;
    uStack_9a8 = uStack_108;
    uStack_9b0 = uStack_110;
    uStack_a18 = uStack_178;
    uStack_a20 = uStack_180;
    uStack_a08 = uStack_168;
    uStack_a10 = uStack_170;
    uStack_9f8 = uStack_158;
    uStack_a00 = uStack_160;
    uStack_9e8 = uStack_148;
    uStack_9f0 = uStack_150;
    uStack_868 = uStack_b8;
    uStack_870 = uStack_c0;
    uStack_858 = uStack_a8;
    uStack_860 = uStack_b0;
    uStack_8a8 = uStack_f8;
    uStack_8b0 = uStack_100;
    uStack_898 = uStack_e8;
    uStack_8a0 = uStack_f0;
    uStack_888 = uStack_d8;
    uStack_890 = uStack_e0;
    uStack_878 = uStack_c8;
    uStack_880 = uStack_d0;
    uStack_8e8 = uStack_138;
    uStack_8f0 = uStack_140;
    uStack_8d8 = uStack_128;
    uStack_8e0 = uStack_130;
    uStack_8c8 = uStack_118;
    uStack_8d0 = uStack_120;
    uStack_8b8 = uStack_108;
    uStack_8c0 = uStack_110;
    uStack_928 = uStack_178;
    uStack_930 = uStack_180;
    uStack_918 = uStack_168;
    uStack_920 = uStack_170;
    uStack_940 = uStack_a0;
    uStack_850 = uStack_a0;
    uStack_908 = uStack_158;
    uStack_910 = uStack_160;
    uStack_8f8 = uStack_148;
    uStack_900 = uStack_150;
    func_0x000100069180(&uStack_a20,&lStack_2b0,0x1000c73d0,&UNK_10008d448);
    puVar3 = &uStack_930;
    func_0x0001000691c8(puVar3,0x1000c73d0,&UNK_10008d448);
    uVar1 = SUB81(puVar3,0);
    uStack_321 = (undefined1)uStack_968;
    uStack_320 = (undefined7)((ulong)uStack_968 >> 8);
    uStack_329 = (undefined1)uStack_970;
    uStack_328 = (undefined7)((ulong)uStack_970 >> 8);
    uStack_311 = (undefined1)uStack_958;
    uStack_310 = (undefined7)((ulong)uStack_958 >> 8);
    uStack_319 = (undefined1)uStack_960;
    uStack_318 = (undefined7)((ulong)uStack_960 >> 8);
    uStack_301 = (undefined1)uStack_948;
    uStack_300 = (undefined7)((ulong)uStack_948 >> 8);
    uStack_309 = (undefined1)uStack_950;
    uStack_308 = (undefined7)((ulong)uStack_950 >> 8);
    uStack_2f9 = uStack_940;
    uStack_361 = (undefined1)uStack_9a8;
    uStack_360 = (undefined7)((ulong)uStack_9a8 >> 8);
    uStack_369 = (undefined1)uStack_9b0;
    uStack_368 = (undefined7)((ulong)uStack_9b0 >> 8);
    uStack_351 = (undefined1)uStack_998;
    uStack_350 = (undefined7)((ulong)uStack_998 >> 8);
    uStack_359 = (undefined1)uStack_9a0;
    uStack_358 = (undefined7)((ulong)uStack_9a0 >> 8);
    uStack_341 = (undefined1)uStack_988;
    uStack_340 = (undefined7)((ulong)uStack_988 >> 8);
    uStack_349 = (undefined1)uStack_990;
    uStack_348 = (undefined7)((ulong)uStack_990 >> 8);
    uStack_331 = (undefined1)uStack_978;
    uStack_330 = (undefined7)((ulong)uStack_978 >> 8);
    uStack_339 = (undefined1)uStack_980;
    uStack_338 = (undefined7)((ulong)uStack_980 >> 8);
    uStack_3a1 = (undefined1)uStack_9e8;
    uStack_3a0 = (undefined7)((ulong)uStack_9e8 >> 8);
    uStack_3a9 = (undefined1)uStack_9f0;
    uStack_3a8 = (undefined7)((ulong)uStack_9f0 >> 8);
    uStack_391 = (undefined1)uStack_9d8;
    uStack_390 = (undefined7)((ulong)uStack_9d8 >> 8);
    uStack_399 = (undefined1)uStack_9e0;
    uStack_398 = (undefined7)((ulong)uStack_9e0 >> 8);
    uStack_381 = (undefined1)uStack_9c8;
    uStack_380 = (undefined7)((ulong)uStack_9c8 >> 8);
    uStack_389 = (undefined1)uStack_9d0;
    uStack_388 = (undefined7)((ulong)uStack_9d0 >> 8);
    uStack_371 = (undefined1)uStack_9b8;
    uStack_370 = (undefined7)((ulong)uStack_9b8 >> 8);
    uStack_379 = (undefined1)uStack_9c0;
    uStack_378 = (undefined7)((ulong)uStack_9c0 >> 8);
    uStack_3d1 = (undefined1)uStack_a18;
    uStack_3d0 = (undefined7)((ulong)uStack_a18 >> 8);
    uStack_3d9 = (undefined1)uStack_a20;
    uStack_3d8 = (undefined7)((ulong)uStack_a20 >> 8);
    uStack_3c1 = (undefined1)uStack_a08;
    uStack_3c0 = (undefined7)((ulong)uStack_a08 >> 8);
    uStack_3c9 = (undefined1)uStack_a10;
    uStack_3c8 = (undefined7)((ulong)uStack_a10 >> 8);
    uStack_3b1 = (undefined1)uStack_9f8;
    uStack_3b0 = (undefined7)((ulong)uStack_9f8 >> 8);
    uStack_3b9 = (undefined1)uStack_a00;
    uStack_3b8 = (undefined7)((ulong)uStack_a00 >> 8);
    uStack_777 = uStack_328;
    uStack_770 = uStack_321;
    uStack_77f = uStack_330;
    uStack_778 = uStack_329;
    uStack_767 = uStack_318;
    uStack_760 = uStack_311;
    uStack_76f = uStack_320;
    uStack_768 = uStack_319;
    uStack_757 = uStack_308;
    uStack_75f = uStack_310;
    uStack_758 = uStack_309;
    uStack_748 = uStack_940;
    uStack_7b7 = uStack_368;
    uStack_7b0 = uStack_361;
    uStack_7bf = uStack_370;
    uStack_7b8 = uStack_369;
    uStack_7a7 = uStack_358;
    uStack_7a0 = uStack_351;
    uStack_7af = uStack_360;
    uStack_7a8 = uStack_359;
    uStack_797 = uStack_348;
    uStack_790 = uStack_341;
    uStack_79f = uStack_350;
    uStack_798 = uStack_349;
    uStack_787 = uStack_338;
    uStack_780 = uStack_331;
    uStack_78f = uStack_340;
    uStack_788 = uStack_339;
    uStack_7f7 = uStack_3a8;
    uStack_7f0 = uStack_3a1;
    uStack_7ff = uStack_3b0;
    uStack_7f8 = uStack_3a9;
    uStack_7e7 = uStack_398;
    uStack_7e0 = uStack_391;
    uStack_7ef = uStack_3a0;
    uStack_7e8 = uStack_399;
    uStack_7d7 = uStack_388;
    uStack_7d0 = uStack_381;
    uStack_7df = uStack_390;
    uStack_7d8 = uStack_389;
    uStack_7c7 = uStack_378;
    uStack_7c0 = uStack_371;
    uStack_7cf = uStack_380;
    uStack_7c8 = uStack_379;
    uStack_827 = uStack_3d8;
    uStack_820 = uStack_3d1;
    uStack_82f = uStack_3e0;
    uStack_828 = uStack_3d9;
    uStack_817 = uStack_3c8;
    uStack_810 = uStack_3c1;
    uStack_81f = uStack_3d0;
    uStack_818 = uStack_3c9;
    uStack_838 = 0;
    uStack_830 = 1;
    uStack_807 = uStack_3b8;
    uStack_800 = uStack_3b1;
    uStack_80f = uStack_3c0;
    uStack_808 = uStack_3b9;
    lStack_840 = param_2;
    uStack_750 = uStack_301;
    uStack_74f = uStack_300;
    __s7SwiftUI4EdgeO3SetV3allAEvgZ();
    uStack_1e8 = CONCAT71(uStack_777,uStack_778);
    uStack_1f0 = CONCAT71(uStack_77f,uStack_780);
    uStack_1d8 = CONCAT71(uStack_767,uStack_768);
    uStack_1e0 = CONCAT71(uStack_76f,uStack_770);
    uStack_1c8 = CONCAT71(uStack_757,uStack_758);
    uStack_1d0 = CONCAT71(uStack_75f,uStack_760);
    uStack_1c0 = CONCAT71(uStack_74f,uStack_750);
    uStack_1b8 = uStack_748;
    uStack_228 = CONCAT71(uStack_7b7,uStack_7b8);
    uStack_230 = CONCAT71(uStack_7bf,uStack_7c0);
    uStack_218 = CONCAT71(uStack_7a7,uStack_7a8);
    uStack_220 = CONCAT71(uStack_7af,uStack_7b0);
    uStack_208 = CONCAT71(uStack_797,uStack_798);
    uStack_210 = CONCAT71(uStack_79f,uStack_7a0);
    uStack_1f8 = CONCAT71(uStack_787,uStack_788);
    uStack_200 = CONCAT71(uStack_78f,uStack_790);
    uStack_268 = CONCAT71(uStack_7f7,uStack_7f8);
    uStack_270 = CONCAT71(uStack_7ff,uStack_800);
    uStack_258 = CONCAT71(uStack_7e7,uStack_7e8);
    uStack_260 = CONCAT71(uStack_7ef,uStack_7f0);
    uStack_248 = CONCAT71(uStack_7d7,uStack_7d8);
    uStack_250 = CONCAT71(uStack_7df,uStack_7e0);
    uStack_238 = CONCAT71(uStack_7c7,uStack_7c8);
    uStack_240 = CONCAT71(uStack_7cf,uStack_7d0);
    uStack_298 = CONCAT71(uStack_827,uStack_828);
    uStack_2a0 = CONCAT71(uStack_82f,uStack_830);
    uStack_2a8 = uStack_838;
    lStack_2b0 = lStack_840;
    uStack_288 = CONCAT71(uStack_817,uStack_818);
    uStack_290 = CONCAT71(uStack_81f,uStack_820);
    uStack_278 = CONCAT71(uStack_807,uStack_808);
    uStack_280 = CONCAT71(uStack_80f,uStack_810);
    uStack_677 = CONCAT17(uStack_321,uStack_328);
    uStack_67f = CONCAT17(uStack_329,uStack_330);
    uStack_687 = CONCAT17(uStack_331,uStack_338);
    uStack_68f = CONCAT17(uStack_339,uStack_340);
    uStack_667 = CONCAT17(uStack_311,uStack_318);
    uStack_66f = CONCAT17(uStack_319,uStack_320);
    uStack_65f = CONCAT17(uStack_309,uStack_310);
    uStack_657 = uStack_308;
    uStack_648 = uStack_2f9;
    uStack_650 = uStack_301;
    uStack_64f = uStack_300;
    uStack_6b7 = CONCAT17(uStack_361,uStack_368);
    uStack_6bf = CONCAT17(uStack_369,uStack_370);
    uStack_6c7 = CONCAT17(uStack_371,uStack_378);
    uStack_6cf = CONCAT17(uStack_379,uStack_380);
    uStack_6a7 = CONCAT17(uStack_351,uStack_358);
    uStack_6af = CONCAT17(uStack_359,uStack_360);
    uStack_697 = CONCAT17(uStack_341,uStack_348);
    uStack_69f = CONCAT17(uStack_349,uStack_350);
    uStack_6f7 = CONCAT17(uStack_3a1,uStack_3a8);
    uStack_6ff = CONCAT17(uStack_3a9,uStack_3b0);
    uStack_707 = CONCAT17(uStack_3b1,uStack_3b8);
    uStack_70f = CONCAT17(uStack_3b9,uStack_3c0);
    uStack_6e7 = CONCAT17(uStack_391,uStack_398);
    uStack_6ef = CONCAT17(uStack_399,uStack_3a0);
    uStack_6d7 = CONCAT17(uStack_381,uStack_388);
    uStack_6df = CONCAT17(uStack_389,uStack_390);
    uStack_727 = CONCAT17(uStack_3d1,uStack_3d8);
    uStack_72f = CONCAT17(uStack_3d9,uStack_3e0);
    uStack_717 = CONCAT17(uStack_3c1,uStack_3c8);
    uStack_71f = CONCAT17(uStack_3c9,uStack_3d0);
    alStack_740[1] = 0;
    uStack_730 = 1;
    alStack_740[0] = param_2;
    func_0x000100069180(&lStack_840,&uStack_180,0x1000c73d8,&UNK_10008d450);
    func_0x0001000691c8(alStack_740,0x1000c73d8,&UNK_10008d450);
    uStack_578 = uStack_1e8;
    uStack_580 = uStack_1f0;
    uStack_568 = uStack_1d8;
    uStack_570 = uStack_1e0;
    uStack_558 = uStack_1c8;
    uStack_560 = uStack_1d0;
    uStack_548 = uStack_1b8;
    uStack_550 = uStack_1c0;
    uStack_5b8 = uStack_228;
    uStack_5c0 = uStack_230;
    uStack_5a8 = uStack_218;
    uStack_5b0 = uStack_220;
    uStack_598 = uStack_208;
    uStack_5a0 = uStack_210;
    uStack_588 = uStack_1f8;
    uStack_590 = uStack_200;
    uStack_5f8 = uStack_268;
    uStack_600 = uStack_270;
    uStack_5e8 = uStack_258;
    uStack_5f0 = uStack_260;
    uStack_5d8 = uStack_248;
    uStack_5e0 = uStack_250;
    uStack_5c8 = uStack_238;
    uStack_5d0 = uStack_240;
    uStack_638 = uStack_2a8;
    lStack_640 = lStack_2b0;
    uStack_628 = uStack_298;
    uStack_630 = uStack_2a0;
    uStack_618 = uStack_288;
    uStack_620 = uStack_290;
    uStack_608 = uStack_278;
    uStack_610 = uStack_280;
    uStack_448 = uStack_1e8;
    uStack_450 = uStack_1f0;
    uStack_438 = uStack_1d8;
    uStack_440 = uStack_1e0;
    uStack_428 = uStack_1c8;
    uStack_430 = uStack_1d0;
    uStack_418 = uStack_1b8;
    uStack_420 = uStack_1c0;
    uStack_488 = uStack_228;
    uStack_490 = uStack_230;
    uStack_478 = uStack_218;
    uStack_480 = uStack_220;
    uStack_468 = uStack_208;
    uStack_470 = uStack_210;
    uStack_458 = uStack_1f8;
    uStack_460 = uStack_200;
    uStack_4c8 = uStack_268;
    uStack_4d0 = uStack_270;
    uStack_4b8 = uStack_258;
    uStack_4c0 = uStack_260;
    uStack_4a8 = uStack_248;
    uStack_4b0 = uStack_250;
    uStack_498 = uStack_238;
    uStack_4a0 = uStack_240;
    uStack_508 = uStack_2a8;
    lStack_510 = lStack_2b0;
    uStack_4f8 = uStack_298;
    uStack_500 = uStack_2a0;
    uStack_530 = 0;
    uStack_538 = 0;
    uStack_528 = 0x4028000000000000;
    uStack_520 = 0x4028000000000000;
    uStack_518 = 0;
    uStack_4e8 = uStack_288;
    uStack_4f0 = uStack_290;
    uStack_4d8 = uStack_278;
    uStack_4e0 = uStack_280;
    uStack_400 = 0;
    uStack_408 = 0;
    uStack_3f8 = 0x4028000000000000;
    uStack_3f0 = 0x4028000000000000;
    uStack_3e8 = 0;
    uVar5 = 0x1000c73e0;
    uStack_540 = uVar1;
    uStack_410 = uVar1;
    func_0x000100069180(&lStack_640,&uStack_180,0x1000c73e0,&UNK_10008d458);
    func_0x0001000691c8(&lStack_510,0x1000c73e0,&UNK_10008d458);
    _memcpy(&uStack_3e0,&lStack_640,0x129);
    func_0x00010006904c(&uStack_3e0);
    _memcpy(&lStack_2b0,&uStack_3e0,0x12a);
    uVar4 = 0x1000c73e8;
    func_0x0001000100d0(0x1000c73e8,&UNK_10008d460);
    func_0x0001000100d0(0x1000c73e0,&UNK_10008d458);
    uVar6 = 0x1000c73f0;
    FUN_10006913c(0x1000c73f0,0x1000c73e8,&UNK_10008d460,
                  PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    uVar7 = uVar6;
    FUN_100069058();
  }
  else {
    puVar2 = &UNK_1000b5ad0;
    _swift_allocObject(&UNK_1000b5ad0,0x30,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = param_4;
    *(long *)(puVar2 + 0x28) = param_2;
    uStack_3e0 = 0x100069128;
    uStack_3d9 = 0;
    uStack_3d8 = SUB87(puVar2,0);
    uStack_3d1 = (undefined1)((ulong)puVar2 >> 0x38);
    func_0x000100069134(&uStack_3e0);
    _memcpy(&lStack_2b0,&uStack_3e0,0x12a);
    _swift_bridgeObjectRetain(param_4);
    _objc_retain(param_2);
    _objc_retain();
    uVar4 = 0x1000c73e8;
    func_0x0001000100d0(0x1000c73e8,&UNK_10008d460);
    uVar5 = 0x1000c73e0;
    func_0x0001000100d0(0x1000c73e0,&UNK_10008d458);
    uVar6 = 0x1000c73f0;
    FUN_10006913c(0x1000c73f0,0x1000c73e8,&UNK_10008d460,
                  PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    uVar7 = uVar6;
    FUN_100069058();
  }
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&uStack_180,&lStack_2b0,uVar4,uVar5,uVar6,uVar7);
  _memcpy(&lStack_2b0,&uStack_180,0x12a);
  FUN_1000690f0(&lStack_2b0);
  _memcpy(&uStack_180,&lStack_2b0,0x12a);
LAB_100067968:
  _memcpy(param_1,&uStack_180,0x12a);
  return;
}



/* Entry: 1000679a0; end: 10006867b;  */

void FUN_1000679a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 ***param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 ***pppuStack_330;
  undefined8 *puStack_328;
  undefined1 auStack_320 [104];
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  double dStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar2 = 0;
  puStack_328 = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&pppuStack_330 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain();
  pppuVar3 = param_6;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  _objc_retain(param_6);
  pppuVar4 = param_6;
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar2);
  dVar10 = 0.0;
  uVar14 = 0;
  uVar15 = 0;
  lVar5 = lVar8;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,lVar8,pppuVar4);
  _swift_release(pppuVar4);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  lVar2 = lVar5;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release(lVar5);
  uStack_c8 = 0;
  uStack_c0 = CONCAT62(uStack_c0._2_6_,1);
  pppuStack_e0 = pppuVar3;
  uStack_d8 = param_3;
  lStack_d0 = lVar2;
  _swift_retain(lVar2);
  uVar13 = 0x1000c7078;
  func_0x0001000100d0(0x1000c7078,&UNK_10008cfc0);
  uVar6 = 0x1000c7080;
  FUN_10006913c(0x1000c7080,0x1000c7078,&UNK_10008cfc0,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
  ppppuVar7 = &pppuStack_e0;
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppuVar7,uVar13,uVar6);
  pppuStack_330 = ppppuVar7;
  _swift_release(lVar2);
  _objc_release(param_6);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  dVar12 = 1.6;
  dVar10 = dVar10 * 1.6;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  dVar11 = dVar12 * 1.4;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_250,dVar10,0,dVar12 * 1.4,0,param_6,uVar13);
  uVar1 = SUB81(dVar10,0);
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  uVar13 = 0xc024000000000000;
  dVar11 = dVar11 / -10.0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  pppuStack_220 = pppuStack_330;
  uStack_218 = uStack_250;
  uStack_210 = uStack_248;
  uStack_208 = uStack_240;
  uStack_200 = uStack_238;
  uStack_1f8 = uStack_230;
  uStack_1f0 = uStack_228;
  uStack_1c0 = 0;
  pppuStack_1b8 = pppuStack_330;
  uStack_1b0 = uStack_250;
  uStack_1a8 = uStack_248;
  uStack_1a0 = uStack_240;
  uStack_198 = uStack_238;
  uStack_190 = uStack_230;
  uStack_188 = uStack_228;
  uStack_158 = 0;
  uStack_1e8 = uVar1;
  dStack_1e0 = dVar11;
  uStack_1d8 = uVar13;
  uStack_1d0 = uVar14;
  uStack_1c8 = uVar15;
  uStack_180 = uVar1;
  dStack_178 = dVar11;
  uStack_170 = uVar13;
  uStack_168 = uVar14;
  uStack_160 = uVar15;
  func_0x000100069180(&pppuStack_220,&pppuStack_e0,0x1000c7408,&UNK_10008d470);
  func_0x0001000691c8(&pppuStack_1b8,0x1000c7408,&UNK_10008d470);
  uStack_98 = uStack_1d8;
  dStack_a0 = dStack_1e0;
  uStack_88 = uStack_1c8;
  uStack_90 = uStack_1d0;
  uStack_80 = uStack_1c0;
  uStack_140 = CONCAT71(uStack_20f,uStack_210);
  uStack_d8 = uStack_218;
  pppuStack_e0 = pppuStack_220;
  uStack_c8 = uStack_208;
  uStack_130 = CONCAT71(uStack_1ff,uStack_200);
  uStack_118 = CONCAT71(uStack_1e7,uStack_1e8);
  uStack_b8 = uStack_1f8;
  uStack_b0 = uStack_1f0;
  uStack_148 = uStack_218;
  pppuStack_150 = pppuStack_220;
  uStack_138 = uStack_208;
  uStack_f0 = uStack_1c0;
  uStack_128 = uStack_1f8;
  uStack_120 = uStack_1f0;
  uStack_108 = uStack_1d8;
  dStack_110 = dStack_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_2a9 = (undefined1)uStack_218;
  uStack_2a8 = (undefined7)((ulong)uStack_218 >> 8);
  uStack_2b1 = SUB81(pppuStack_220,0);
  uStack_2b0 = (undefined7)((ulong)pppuStack_220 >> 8);
  uStack_299 = (undefined1)uStack_208;
  uStack_298 = (undefined7)((ulong)uStack_208 >> 8);
  uStack_2a1 = uStack_210;
  uStack_251 = uStack_1c0;
  uStack_259 = (undefined1)uStack_1c8;
  uStack_258 = (undefined7)((ulong)uStack_1c8 >> 8);
  uStack_261 = (undefined1)uStack_1d0;
  uStack_260 = (undefined7)((ulong)uStack_1d0 >> 8);
  uStack_269 = (undefined1)uStack_1d8;
  uStack_268 = (undefined7)((ulong)uStack_1d8 >> 8);
  uStack_271 = SUB81(dStack_1e0,0);
  uStack_270 = (undefined7)((ulong)dStack_1e0 >> 8);
  uStack_279 = uStack_1e8;
  uStack_281 = (undefined1)uStack_1f0;
  uStack_280 = (undefined7)((ulong)uStack_1f0 >> 8);
  uStack_289 = (undefined1)uStack_1f8;
  uStack_288 = (undefined7)((ulong)uStack_1f8 >> 8);
  uStack_291 = uStack_200;
  *puStack_328 = 0;
  *(undefined1 *)(puStack_328 + 1) = 1;
  *(ulong *)((long)puStack_328 + 0x41) = CONCAT17(uStack_1e8,uStack_280);
  *(ulong *)((long)puStack_328 + 0x39) = CONCAT17(uStack_281,uStack_288);
  *(ulong *)((long)puStack_328 + 0x51) = CONCAT17(uStack_269,uStack_270);
  *(ulong *)((long)puStack_328 + 0x49) = CONCAT17(uStack_271,uStack_1e7);
  *(ulong *)((long)puStack_328 + 0x61) = CONCAT17(uStack_259,uStack_260);
  *(ulong *)((long)puStack_328 + 0x59) = CONCAT17(uStack_261,uStack_268);
  *(ulong *)((long)puStack_328 + 0x69) = CONCAT17(uStack_1c0,uStack_258);
  *(ulong *)((long)puStack_328 + 0x11) = CONCAT17(uStack_2a9,uStack_2b0);
  *(ulong *)((long)puStack_328 + 9) = CONCAT17(uStack_2b1,uStack_2b8);
  *(ulong *)((long)puStack_328 + 0x21) = CONCAT17(uStack_299,uStack_20f);
  *(ulong *)((long)puStack_328 + 0x19) = CONCAT17(uStack_210,uStack_2a8);
  *(ulong *)((long)puStack_328 + 0x31) = CONCAT17(uStack_289,uStack_1ff);
  *(ulong *)((long)puStack_328 + 0x29) = CONCAT17(uStack_200,uStack_298);
  lStack_d0 = uStack_140;
  uStack_c0 = uStack_130;
  uStack_a8 = uStack_118;
  func_0x000100069180(&pppuStack_150,auStack_320,0x1000c7408,&UNK_10008d470);
  func_0x0001000691c8(&pppuStack_e0,0x1000c7408,&UNK_10008d470);
  return;
}



/* Entry: 10006867c; end: 100068693;  */

void FUN_10006867c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100068694; end: 100068a1f;  */

void FUN_100068694(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ushort uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    lVar1 = 0x1000c49a8;
    func_0x0001000100d0(0x1000c49a8,&UNK_10008d190);
    _swift_allocObject();
    uVar10 = 2;
    *(undefined8 *)(lVar1 + 0x18) = 4;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    puVar4 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    puVar5 = puVar4;
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    *(undefined **)(lVar1 + 0x20) = puVar5;
    puVar5 = param_5;
    if (param_5 == (undefined *)0x0) {
      func_0x0001000875e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
    }
    _objc_retain(param_5);
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    *(undefined **)(lVar1 + 0x28) = puVar5;
    __s7SwiftUI9UnitPointV3topACvgZ();
    uVar6 = uVar10;
    uVar7 = param_3;
    __s7SwiftUI9UnitPointV6bottomACvgZ();
    __s7SwiftUI8GradientV6colorsACSayAA5ColorVG_tcfC(lVar1);
    __s7SwiftUI14LinearGradientV8gradient10startPoint03endG0AcA0D0V_AA04UnitG0VAJtcfC
              (&lStack_110,uVar10,param_3,uVar6,uVar7);
    lStack_e0 = lStack_110;
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    uStack_d8 = uStack_108;
    uStack_c0 = uStack_f0;
    uStack_c8 = uStack_f8;
    uStack_b8 = 0x100;
    uVar10 = 0x1000c7390;
    func_0x0001000100d0(0x1000c7390,&UNK_10008d428);
    uVar6 = uVar10;
    FUN_100068e44();
    uVar7 = uVar6;
    FUN_100064648();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_b0,&lStack_e0,uVar10,PTR___s7SwiftUI14LinearGradientVN_1000b0390,uVar6,uVar7)
    ;
  }
  else {
    _objc_retain();
    _objc_retain();
    lVar2 = param_4;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    (**(code **)(lVar9 + 0x68))
              (lVar8,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
               lVar1);
    lVar3 = lVar8;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar8,lVar2);
    _swift_release(lVar2);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    uStack_138 = 0;
    uStack_130 = 0x101;
    uStack_120 = 0x4000000000000000;
    uStack_128 = 0xbff0000000000000;
    bStack_118 = 0;
    uStack_108 = 0;
    uStack_f0 = 0x4000000000000000;
    uStack_f8 = 0xbff0000000000000;
    uStack_e8 = 0;
    uVar10 = 0x1000c7390;
    lStack_140 = lVar3;
    lStack_110 = lVar3;
    uStack_100 = uStack_130;
    func_0x000100069180(&lStack_140,&uStack_b0,0x1000c7390,&UNK_10008d428);
    func_0x0001000691c8(&lStack_110,0x1000c7390,&UNK_10008d428);
    uStack_d0 = CONCAT44(uStack_12c,uStack_130);
    uStack_d8 = uStack_138;
    lStack_e0 = lStack_140;
    uStack_c8 = uStack_128;
    uStack_c0 = uStack_120;
    uStack_b8 = (ushort)bStack_118;
    func_0x0001000100d0(0x1000c7390,&UNK_10008d428);
    uVar6 = uVar10;
    FUN_100068e44();
    uVar7 = uVar6;
    FUN_100064648();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_b0,&lStack_e0,uVar10,PTR___s7SwiftUI14LinearGradientVN_1000b0390,uVar6,uVar7)
    ;
    _objc_release(param_4);
  }
  *param_1 = uStack_b0;
  param_1[1] = uStack_a8;
  param_1[2] = uStack_a0;
  param_1[3] = uStack_98;
  param_1[4] = uStack_90;
  *(undefined1 *)(param_1 + 5) = uStack_88;
  *(undefined1 *)((long)param_1 + 0x29) = uStack_87;
  FUN_100068fec(uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_87);
  func_0x000100069000(uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_87);
  return;
}



/* Entry: 100068a20; end: 100068a2b;  */

void FUN_100068a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ushort uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  
  lVar3 = *unaff_x20;
  puVar1 = (undefined *)unaff_x20[1];
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lVar3 == 0) {
    lVar3 = 0x1000c49a8;
    func_0x0001000100d0(0x1000c49a8,&UNK_10008d190);
    _swift_allocObject();
    uVar12 = 2;
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    puVar6 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    puVar7 = puVar6;
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    *(undefined **)(lVar3 + 0x20) = puVar7;
    puVar7 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      func_0x0001000875e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
    }
    _objc_retain(puVar1);
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    *(undefined **)(lVar3 + 0x28) = puVar7;
    __s7SwiftUI9UnitPointV3topACvgZ();
    uVar8 = uVar12;
    uVar9 = param_3;
    __s7SwiftUI9UnitPointV6bottomACvgZ();
    __s7SwiftUI8GradientV6colorsACSayAA5ColorVG_tcfC(lVar3);
    __s7SwiftUI14LinearGradientV8gradient10startPoint03endG0AcA0D0V_AA04UnitG0VAJtcfC
              (&lStack_110,uVar12,param_3,uVar8,uVar9);
    lStack_e0 = lStack_110;
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    uStack_d8 = uStack_108;
    uStack_c0 = uStack_f0;
    uStack_c8 = uStack_f8;
    uStack_b8 = 0x100;
    uVar12 = 0x1000c7390;
    func_0x0001000100d0(0x1000c7390,&UNK_10008d428);
    uVar8 = uVar12;
    FUN_100068e44();
    uVar9 = uVar8;
    FUN_100064648();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_b0,&lStack_e0,uVar12,PTR___s7SwiftUI14LinearGradientVN_1000b0390,uVar8,uVar9)
    ;
  }
  else {
    _objc_retain();
    _objc_retain();
    lVar4 = lVar3;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    (**(code **)(lVar11 + 0x68))
              (lVar10,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8
               ,lVar2);
    lVar5 = lVar10;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar10,lVar4);
    _swift_release(lVar4);
    (**(code **)(lVar11 + 8))(lVar10,lVar2);
    uStack_138 = 0;
    uStack_130 = 0x101;
    uStack_120 = 0x4000000000000000;
    uStack_128 = 0xbff0000000000000;
    bStack_118 = 0;
    uStack_108 = 0;
    uStack_f0 = 0x4000000000000000;
    uStack_f8 = 0xbff0000000000000;
    uStack_e8 = 0;
    uVar12 = 0x1000c7390;
    lStack_140 = lVar5;
    lStack_110 = lVar5;
    uStack_100 = uStack_130;
    func_0x000100069180(&lStack_140,&uStack_b0,0x1000c7390,&UNK_10008d428);
    func_0x0001000691c8(&lStack_110,0x1000c7390,&UNK_10008d428);
    uStack_d0 = CONCAT44(uStack_12c,uStack_130);
    uStack_d8 = uStack_138;
    lStack_e0 = lStack_140;
    uStack_c8 = uStack_128;
    uStack_c0 = uStack_120;
    uStack_b8 = (ushort)bStack_118;
    func_0x0001000100d0(0x1000c7390,&UNK_10008d428);
    uVar8 = uVar12;
    FUN_100068e44();
    uVar9 = uVar8;
    FUN_100064648();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_b0,&lStack_e0,uVar12,PTR___s7SwiftUI14LinearGradientVN_1000b0390,uVar8,uVar9)
    ;
    _objc_release(lVar3);
  }
  *param_1 = uStack_b0;
  param_1[1] = uStack_a8;
  param_1[2] = uStack_a0;
  param_1[3] = uStack_98;
  param_1[4] = uStack_90;
  *(undefined1 *)(param_1 + 5) = uStack_88;
  *(undefined1 *)((long)param_1 + 0x29) = uStack_87;
  FUN_100068fec(uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_87);
  func_0x000100069000(uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_87);
  return;
}



/* Entry: 100068a2c; end: 100068a8f;  */

void FUN_100068a2c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(param_1[2]);
  return;
}



/* Entry: 100068a90; end: 100068af3;  */

undefined8 * FUN_100068a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100068af4; end: 100068b37;  */

undefined8 * FUN_100068af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100068b38; end: 100068bf7;  */

int FUN_100068b38(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
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



/* Entry: 100068bf8; end: 100068c53;  */

undefined8 * FUN_100068bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _objc_retain();
  _objc_retain(uVar1);
  return param_1;
}



/* Entry: 100068c54; end: 100068caf;  */

undefined8 * FUN_100068c54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100068cb0; end: 100068ceb;  */

undefined8 * FUN_100068cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100068cec; end: 100068da7;  */

int FUN_100068cec(ulong *param_1,uint param_2)

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



/* Entry: 100068da8; end: 100068e23;  */

void FUN_100068da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x1000c7348;
  func_0x000100010120(0x1000c7348,&UNK_10008d308);
  uVar2 = 0x1000c7350;
  FUN_10006913c(0x1000c7350,0x1000c7348,&UNK_10008d308,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _swift_getOpaqueTypeConformance
            (&uStack_40,
             PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
  return;
}



/* Entry: 100068e24; end: 100068e43;  */

void FUN_100068e24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_100090e5c,1);
  return;
}



/* Entry: 100068e44; end: 100068feb;  */

void FUN_100068e44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7398 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7390;
  func_0x000100010120(0x1000c7390,&UNK_10008d428);
  uVar2 = uVar1;
  func_0x000100068ebc();
  puStack_28 = PTR___s7SwiftUI11_BlurEffectVAA12ViewModifierAAWP_1000b02c0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7398 = puVar3;
  return;
}



/* Entry: 100068fec; end: 100069057;  */

void FUN_100068fec(void)

{
  char in_w6;
  
  if (in_w6 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)();
  return;
}



/* Entry: 100069058; end: 1000690ef;  */

void FUN_100069058(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c73f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c73e0;
  func_0x000100010120(0x1000c73e0,&UNK_10008d458);
  uVar2 = 0x1000c7400;
  FUN_10006913c(0x1000c7400,0x1000c73d8,&UNK_10008d450,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c73f8 = puVar3;
  return;
}



/* Entry: 1000690f0; end: 1000690f3;  */

void FUN_1000690f0(void)

{
  return;
}



/* Entry: 1000690f4; end: 100069127;  */

void FUN_1000690f4(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100069128; end: 10006913b;  */

void FUN_100069128(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ***pppuStack_330;
  undefined8 *puStack_328;
  undefined1 auStack_320 [104];
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  double dStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  pppuVar3 = *(undefined8 ****)(unaff_x20 + 0x28);
  lVar2 = 0;
  puStack_328 = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa
            (0,uVar14,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&pppuStack_330 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain();
  pppuVar4 = pppuVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  _objc_retain(pppuVar3);
  pppuVar5 = pppuVar3;
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar10 + 0x68))
            (lVar9,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar2);
  dVar11 = 0.0;
  uVar15 = 0;
  uVar16 = 0;
  lVar6 = lVar9;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,lVar9,pppuVar5);
  _swift_release(pppuVar5);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  lVar2 = lVar6;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release(lVar6);
  uStack_c8 = 0;
  uStack_c0 = CONCAT62(uStack_c0._2_6_,1);
  pppuStack_e0 = pppuVar4;
  uStack_d8 = uVar14;
  lStack_d0 = lVar2;
  _swift_retain(lVar2);
  uVar14 = 0x1000c7078;
  func_0x0001000100d0(0x1000c7078,&UNK_10008cfc0);
  uVar7 = 0x1000c7080;
  FUN_10006913c(0x1000c7080,0x1000c7078,&UNK_10008cfc0,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
  ppppuVar8 = &pppuStack_e0;
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppuVar8,uVar14,uVar7);
  pppuStack_330 = ppppuVar8;
  _swift_release(lVar2);
  _objc_release(pppuVar3);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  dVar13 = 1.6;
  dVar11 = dVar11 * 1.6;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  dVar12 = dVar13 * 1.4;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_250,dVar11,0,dVar13 * 1.4,0,pppuVar3,uVar14);
  uVar1 = SUB81(dVar11,0);
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  uVar14 = 0xc024000000000000;
  dVar12 = dVar12 / -10.0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  pppuStack_220 = pppuStack_330;
  uStack_218 = uStack_250;
  uStack_210 = uStack_248;
  uStack_208 = uStack_240;
  uStack_200 = uStack_238;
  uStack_1f8 = uStack_230;
  uStack_1f0 = uStack_228;
  uStack_1c0 = 0;
  pppuStack_1b8 = pppuStack_330;
  uStack_1b0 = uStack_250;
  uStack_1a8 = uStack_248;
  uStack_1a0 = uStack_240;
  uStack_198 = uStack_238;
  uStack_190 = uStack_230;
  uStack_188 = uStack_228;
  uStack_158 = 0;
  uStack_1e8 = uVar1;
  dStack_1e0 = dVar12;
  uStack_1d8 = uVar14;
  uStack_1d0 = uVar15;
  uStack_1c8 = uVar16;
  uStack_180 = uVar1;
  dStack_178 = dVar12;
  uStack_170 = uVar14;
  uStack_168 = uVar15;
  uStack_160 = uVar16;
  func_0x000100069180(&pppuStack_220,&pppuStack_e0,0x1000c7408,&UNK_10008d470);
  func_0x0001000691c8(&pppuStack_1b8,0x1000c7408,&UNK_10008d470);
  uStack_98 = uStack_1d8;
  dStack_a0 = dStack_1e0;
  uStack_88 = uStack_1c8;
  uStack_90 = uStack_1d0;
  uStack_80 = uStack_1c0;
  uStack_140 = CONCAT71(uStack_20f,uStack_210);
  uStack_d8 = uStack_218;
  pppuStack_e0 = pppuStack_220;
  uStack_c8 = uStack_208;
  uStack_130 = CONCAT71(uStack_1ff,uStack_200);
  uStack_118 = CONCAT71(uStack_1e7,uStack_1e8);
  uStack_b8 = uStack_1f8;
  uStack_b0 = uStack_1f0;
  uStack_148 = uStack_218;
  pppuStack_150 = pppuStack_220;
  uStack_138 = uStack_208;
  uStack_f0 = uStack_1c0;
  uStack_128 = uStack_1f8;
  uStack_120 = uStack_1f0;
  uStack_108 = uStack_1d8;
  dStack_110 = dStack_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_2a9 = (undefined1)uStack_218;
  uStack_2a8 = (undefined7)((ulong)uStack_218 >> 8);
  uStack_2b1 = SUB81(pppuStack_220,0);
  uStack_2b0 = (undefined7)((ulong)pppuStack_220 >> 8);
  uStack_299 = (undefined1)uStack_208;
  uStack_298 = (undefined7)((ulong)uStack_208 >> 8);
  uStack_2a1 = uStack_210;
  uStack_251 = uStack_1c0;
  uStack_259 = (undefined1)uStack_1c8;
  uStack_258 = (undefined7)((ulong)uStack_1c8 >> 8);
  uStack_261 = (undefined1)uStack_1d0;
  uStack_260 = (undefined7)((ulong)uStack_1d0 >> 8);
  uStack_269 = (undefined1)uStack_1d8;
  uStack_268 = (undefined7)((ulong)uStack_1d8 >> 8);
  uStack_271 = SUB81(dStack_1e0,0);
  uStack_270 = (undefined7)((ulong)dStack_1e0 >> 8);
  uStack_279 = uStack_1e8;
  uStack_281 = (undefined1)uStack_1f0;
  uStack_280 = (undefined7)((ulong)uStack_1f0 >> 8);
  uStack_289 = (undefined1)uStack_1f8;
  uStack_288 = (undefined7)((ulong)uStack_1f8 >> 8);
  uStack_291 = uStack_200;
  *puStack_328 = 0;
  *(undefined1 *)(puStack_328 + 1) = 1;
  *(ulong *)((long)puStack_328 + 0x41) = CONCAT17(uStack_1e8,uStack_280);
  *(ulong *)((long)puStack_328 + 0x39) = CONCAT17(uStack_281,uStack_288);
  *(ulong *)((long)puStack_328 + 0x51) = CONCAT17(uStack_269,uStack_270);
  *(ulong *)((long)puStack_328 + 0x49) = CONCAT17(uStack_271,uStack_1e7);
  *(ulong *)((long)puStack_328 + 0x61) = CONCAT17(uStack_259,uStack_260);
  *(ulong *)((long)puStack_328 + 0x59) = CONCAT17(uStack_261,uStack_268);
  *(ulong *)((long)puStack_328 + 0x69) = CONCAT17(uStack_1c0,uStack_258);
  *(ulong *)((long)puStack_328 + 0x11) = CONCAT17(uStack_2a9,uStack_2b0);
  *(ulong *)((long)puStack_328 + 9) = CONCAT17(uStack_2b1,uStack_2b8);
  *(ulong *)((long)puStack_328 + 0x21) = CONCAT17(uStack_299,uStack_20f);
  *(ulong *)((long)puStack_328 + 0x19) = CONCAT17(uStack_210,uStack_2a8);
  *(ulong *)((long)puStack_328 + 0x31) = CONCAT17(uStack_289,uStack_1ff);
  *(ulong *)((long)puStack_328 + 0x29) = CONCAT17(uStack_200,uStack_298);
  lStack_d0 = uStack_140;
  uStack_c0 = uStack_130;
  uStack_a8 = uStack_118;
  func_0x000100069180(&pppuStack_150,auStack_320,0x1000c7408,&UNK_10008d470);
  func_0x0001000691c8(&pppuStack_e0,0x1000c7408,&UNK_10008d470);
  return;
}



/* Entry: 10006913c; end: 100069207;  */

void FUN_10006913c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100069208; end: 10006920b;  */

void FUN_100069208(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c7440 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7448;
  func_0x000100010120(0x1000c7448,&UNK_10008d4a8);
  uVar2 = uVar1;
  FUN_100068e44();
  uVar3 = uVar2;
  FUN_100064648();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c7440 = puVar4;
  return;
}



/* Entry: 10006920c; end: 100069283;  */

void FUN_10006920c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c7440 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7448;
  func_0x000100010120(0x1000c7448,&UNK_10008d4a8);
  uVar2 = uVar1;
  FUN_100068e44();
  uVar3 = uVar2;
  FUN_100064648();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c7440 = puVar4;
  return;
}



/* Entry: 100069284; end: 100069287;  */

void FUN_100069284(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam00000001000c7450 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7458;
  func_0x000100010120(0x1000c7458,&UNK_10008d4b0);
  uVar2 = uVar1;
  func_0x0001000692f8();
  puVar3 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960,uVar1,&uStack_28);
  puRam00000001000c7450 = puVar3;
  return;
}



/* Entry: 100069288; end: 10006938f;  */

void FUN_100069288(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam00000001000c7450 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7458;
  func_0x000100010120(0x1000c7458,&UNK_10008d4b0);
  uVar2 = uVar1;
  func_0x0001000692f8();
  puVar3 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960,uVar1,&uStack_28);
  puRam00000001000c7450 = puVar3;
  return;
}



/* Entry: 100069390; end: 1000693c3;  */

undefined8 * FUN_100069390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _objc_retain();
  _objc_retain(uVar1);
  return param_1;
}



/* Entry: 1000693c4; end: 10006941f;  */

long FUN_1000693c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100069420; end: 1000694e7;  */

undefined8 * FUN_100069420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar2);
  return param_1;
}



/* Entry: 1000694e8; end: 10006953b;  */

undefined8 * FUN_1000694e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10006953c; end: 1000695e3;  */

int FUN_10006953c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000695e4; end: 100069ed3;  */

void FUN_1000695e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_948 [264];
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 uStack_778;
  undefined1 uStack_770;
  undefined8 uStack_76f;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_68f;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined7 uStack_66f;
  undefined1 uStack_668;
  undefined7 uStack_667;
  undefined1 uStack_660;
  undefined7 uStack_65f;
  undefined1 uStack_658;
  undefined7 uStack_657;
  undefined1 uStack_650;
  undefined7 uStack_64f;
  undefined1 uStack_648;
  undefined7 uStack_647;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined7 uStack_62f;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  undefined1 uStack_618;
  undefined7 uStack_617;
  undefined1 uStack_610;
  undefined7 uStack_60f;
  undefined1 uStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined1 uStack_5c0;
  undefined7 uStack_5bf;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined8 uStack_577;
  undefined8 uStack_56f;
  undefined8 uStack_567;
  undefined8 uStack_55f;
  undefined8 uStack_557;
  undefined8 uStack_54f;
  undefined8 uStack_547;
  undefined8 uStack_53f;
  undefined8 uStack_537;
  undefined8 uStack_52f;
  undefined8 uStack_527;
  undefined8 uStack_51f;
  undefined8 uStack_517;
  undefined8 uStack_50f;
  undefined8 uStack_507;
  undefined8 uStack_4ff;
  undefined8 uStack_4f7;
  undefined8 uStack_4ef;
  undefined8 uStack_4e7;
  undefined8 uStack_4df;
  undefined8 uStack_4d7;
  undefined8 uStack_4cf;
  undefined8 uStack_4c7;
  undefined8 uStack_4bf;
  undefined8 uStack_4b7;
  undefined8 uStack_4af;
  undefined8 uStack_49f;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
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
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_398;
  undefined1 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
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
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined8 uStack_1a8;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  
  uVar4 = 0;
  uVar1 = param_2;
  func_0x000100057660(param_2,0,0);
  uVar2 = uVar1;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar3 = uVar2;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  func_0x000100069ac8(&uStack_178,param_2,param_3,param_4,param_5);
  uStack_798 = uStack_d0;
  uStack_7a0 = uStack_d8;
  uStack_788 = uStack_c0;
  uStack_790 = uStack_c8;
  uStack_778 = uStack_b0;
  uStack_780 = uStack_b8;
  uStack_76f = uStack_a7;
  uStack_770 = uStack_a8;
  uStack_7d8 = uStack_110;
  uStack_7e0 = uStack_118;
  uStack_7c8 = uStack_100;
  uStack_7d0 = uStack_108;
  uStack_7b8 = uStack_f0;
  uStack_7c0 = uStack_f8;
  uStack_7a8 = uStack_e0;
  uStack_7b0 = uStack_e8;
  uStack_818 = uStack_150;
  uStack_820 = uStack_158;
  uStack_808 = uStack_140;
  uStack_810 = uStack_148;
  uStack_7f8 = uStack_130;
  uStack_800 = uStack_138;
  uStack_7e8 = uStack_120;
  uStack_7f0 = uStack_128;
  uStack_838 = uStack_170;
  uStack_840 = uStack_178;
  uStack_828 = uStack_160;
  uStack_830 = uStack_168;
  uStack_6b8 = uStack_d0;
  uStack_6c0 = uStack_d8;
  uStack_6a8 = uStack_c0;
  uStack_6b0 = uStack_c8;
  uStack_6a0 = uStack_b8;
  uStack_68f = uStack_a7;
  uStack_6f8 = uStack_110;
  uStack_700 = uStack_118;
  uStack_6e8 = uStack_100;
  uStack_6f0 = uStack_108;
  uStack_6d8 = uStack_f0;
  uStack_6e0 = uStack_f8;
  uStack_6c8 = uStack_e0;
  uStack_6d0 = uStack_e8;
  uStack_738 = uStack_150;
  uStack_740 = uStack_158;
  uStack_728 = uStack_140;
  uStack_730 = uStack_148;
  uStack_718 = uStack_130;
  uStack_720 = uStack_138;
  uStack_708 = uStack_120;
  uStack_710 = uStack_128;
  uStack_758 = uStack_170;
  uStack_760 = uStack_178;
  uStack_748 = uStack_160;
  uStack_750 = uStack_168;
  func_0x00010006a470(&uStack_840,&uStack_280,0x1000c7480,&UNK_10008d538);
  func_0x00010006a4b8(&uStack_760,0x1000c7480,&UNK_10008d538);
  uStack_1d1 = (undefined1)uStack_798;
  uStack_1d0 = (undefined7)((ulong)uStack_798 >> 8);
  uStack_1d9 = (undefined1)uStack_7a0;
  uStack_1d8 = (undefined7)((ulong)uStack_7a0 >> 8);
  uStack_1c1 = (undefined1)uStack_788;
  uStack_1c0 = (undefined7)((ulong)uStack_788 >> 8);
  uStack_1c9 = (undefined1)uStack_790;
  uStack_1c8 = (undefined7)((ulong)uStack_790 >> 8);
  uStack_1b9 = (undefined1)uStack_780;
  uStack_1b8 = (undefined7)((ulong)uStack_780 >> 8);
  uStack_1a8 = uStack_76f;
  uStack_211 = (undefined1)uStack_7d8;
  uStack_210 = (undefined7)((ulong)uStack_7d8 >> 8);
  uStack_219 = (undefined1)uStack_7e0;
  uStack_218 = (undefined7)((ulong)uStack_7e0 >> 8);
  uStack_201 = (undefined1)uStack_7c8;
  uStack_200 = (undefined7)((ulong)uStack_7c8 >> 8);
  uStack_209 = (undefined1)uStack_7d0;
  uStack_208 = (undefined7)((ulong)uStack_7d0 >> 8);
  uStack_1f1 = (undefined1)uStack_7b8;
  uStack_1f0 = (undefined7)((ulong)uStack_7b8 >> 8);
  uStack_1f9 = (undefined1)uStack_7c0;
  uStack_1f8 = (undefined7)((ulong)uStack_7c0 >> 8);
  uStack_1e1 = (undefined1)uStack_7a8;
  uStack_1e0 = (undefined7)((ulong)uStack_7a8 >> 8);
  uStack_1e9 = (undefined1)uStack_7b0;
  uStack_1e8 = (undefined7)((ulong)uStack_7b0 >> 8);
  uStack_251 = (undefined1)uStack_818;
  uStack_250 = (undefined7)((ulong)uStack_818 >> 8);
  uStack_259 = (undefined1)uStack_820;
  uStack_258 = (undefined7)((ulong)uStack_820 >> 8);
  uStack_241 = (undefined1)uStack_808;
  uStack_240 = (undefined7)((ulong)uStack_808 >> 8);
  uStack_249 = (undefined1)uStack_810;
  uStack_248 = (undefined7)((ulong)uStack_810 >> 8);
  uStack_231 = (undefined1)uStack_7f8;
  uStack_230 = (undefined7)((ulong)uStack_7f8 >> 8);
  uStack_239 = (undefined1)uStack_800;
  uStack_238 = (undefined7)((ulong)uStack_800 >> 8);
  uStack_221 = (undefined1)uStack_7e8;
  uStack_220 = (undefined7)((ulong)uStack_7e8 >> 8);
  uStack_229 = (undefined1)uStack_7f0;
  uStack_228 = (undefined7)((ulong)uStack_7f0 >> 8);
  uStack_271 = (undefined1)uStack_838;
  uStack_270 = (undefined7)((ulong)uStack_838 >> 8);
  uStack_279 = (undefined1)uStack_840;
  uStack_278 = (undefined7)((ulong)uStack_840 >> 8);
  uStack_261 = (undefined1)uStack_828;
  uStack_260 = (undefined7)((ulong)uStack_828 >> 8);
  uStack_269 = (undefined1)uStack_830;
  uStack_268 = (undefined7)((ulong)uStack_830 >> 8);
  uStack_4df = CONCAT17(uStack_1e1,uStack_1e8);
  uStack_4e7 = CONCAT17(uStack_1e9,uStack_1f0);
  uStack_5c7 = uStack_1d8;
  uStack_5c0 = uStack_1d1;
  uStack_5cf = uStack_1e0;
  uStack_5c8 = uStack_1d9;
  uStack_4cf = CONCAT17(uStack_1d1,uStack_1d8);
  uStack_4d7 = CONCAT17(uStack_1d9,uStack_1e0);
  uStack_5b7 = uStack_1c8;
  uStack_5b0 = uStack_1c1;
  uStack_5bf = uStack_1d0;
  uStack_5b8 = uStack_1c9;
  uStack_4bf = CONCAT17(uStack_1c1,uStack_1c8);
  uStack_4c7 = CONCAT17(uStack_1c9,uStack_1d0);
  uStack_5a7 = uStack_1b8;
  uStack_5af = uStack_1c0;
  uStack_5a8 = uStack_1b9;
  uStack_4af = CONCAT17(uStack_778,uStack_1b8);
  uStack_4b7 = CONCAT17(uStack_1b9,uStack_1c0);
  uStack_597 = (undefined7)uStack_76f;
  uStack_590 = (undefined1)((ulong)uStack_76f >> 0x38);
  uStack_598 = uStack_770;
  uStack_51f = CONCAT17(uStack_221,uStack_228);
  uStack_527 = CONCAT17(uStack_229,uStack_230);
  uStack_607 = uStack_218;
  uStack_600 = uStack_211;
  uStack_60f = uStack_220;
  uStack_608 = uStack_219;
  uStack_50f = CONCAT17(uStack_211,uStack_218);
  uStack_517 = CONCAT17(uStack_219,uStack_220);
  uStack_5f7 = uStack_208;
  uStack_5f0 = uStack_201;
  uStack_5ff = uStack_210;
  uStack_5f8 = uStack_209;
  uStack_4ff = CONCAT17(uStack_201,uStack_208);
  uStack_507 = CONCAT17(uStack_209,uStack_210);
  uStack_5e7 = uStack_1f8;
  uStack_5e0 = uStack_1f1;
  uStack_5ef = uStack_200;
  uStack_5e8 = uStack_1f9;
  uStack_4ef = CONCAT17(uStack_1f1,uStack_1f8);
  uStack_4f7 = CONCAT17(uStack_1f9,uStack_200);
  uStack_5d7 = uStack_1e8;
  uStack_5d0 = uStack_1e1;
  uStack_5df = uStack_1f0;
  uStack_5d8 = uStack_1e9;
  uStack_55f = CONCAT17(uStack_261,uStack_268);
  uStack_567 = CONCAT17(uStack_269,uStack_270);
  uStack_647 = uStack_258;
  uStack_640 = uStack_251;
  uStack_64f = uStack_260;
  uStack_648 = uStack_259;
  uStack_54f = CONCAT17(uStack_251,uStack_258);
  uStack_557 = CONCAT17(uStack_259,uStack_260);
  uStack_637 = uStack_248;
  uStack_630 = uStack_241;
  uStack_63f = uStack_250;
  uStack_638 = uStack_249;
  uStack_53f = CONCAT17(uStack_241,uStack_248);
  uStack_547 = CONCAT17(uStack_249,uStack_250);
  uStack_627 = uStack_238;
  uStack_620 = uStack_231;
  uStack_62f = uStack_240;
  uStack_628 = uStack_239;
  uStack_52f = CONCAT17(uStack_231,uStack_238);
  uStack_537 = CONCAT17(uStack_239,uStack_240);
  uStack_617 = uStack_228;
  uStack_610 = uStack_221;
  uStack_61f = uStack_230;
  uStack_618 = uStack_229;
  uStack_667 = uStack_278;
  uStack_660 = uStack_271;
  uStack_66f = uStack_280;
  uStack_668 = uStack_279;
  uStack_56f = CONCAT17(uStack_271,uStack_278);
  uStack_577 = CONCAT17(uStack_279,uStack_280);
  uStack_657 = uStack_268;
  uStack_650 = uStack_261;
  uStack_65f = uStack_270;
  uStack_658 = uStack_269;
  uStack_49f = uStack_76f;
  uStack_678 = 0;
  uStack_670 = 1;
  uStack_580 = 0;
  uStack_578 = 1;
  uStack_680 = uVar3;
  uStack_588 = uVar3;
  func_0x00010006a470(&uStack_680,&uStack_178,0x1000c7488,&UNK_10008d540);
  func_0x00010006a4b8(&uStack_588,0x1000c7488,&UNK_10008d540);
  uStack_3b8 = CONCAT71(uStack_5b7,uStack_5b8);
  uStack_3c0 = CONCAT71(uStack_5bf,uStack_5c0);
  uStack_2a0 = CONCAT71(uStack_5a7,uStack_5a8);
  uStack_2a8 = CONCAT71(uStack_5af,uStack_5b0);
  uStack_3c8 = CONCAT71(uStack_5c7,uStack_5c8);
  uStack_3d0 = CONCAT71(uStack_5cf,uStack_5d0);
  uStack_2b0 = CONCAT71(uStack_5b7,uStack_5b8);
  uStack_2b8 = CONCAT71(uStack_5bf,uStack_5c0);
  uStack_3a8 = CONCAT71(uStack_5a7,uStack_5a8);
  uStack_3b0 = CONCAT71(uStack_5af,uStack_5b0);
  uStack_290 = CONCAT71(uStack_597,uStack_598);
  uStack_3f8 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_400 = CONCAT71(uStack_5ff,uStack_600);
  uStack_2e0 = CONCAT71(uStack_5e7,uStack_5e8);
  uStack_2e8 = CONCAT71(uStack_5ef,uStack_5f0);
  uStack_408 = CONCAT71(uStack_607,uStack_608);
  uStack_410 = CONCAT71(uStack_60f,uStack_610);
  uStack_2f0 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_2f8 = CONCAT71(uStack_5ff,uStack_600);
  uStack_3e8 = CONCAT71(uStack_5e7,uStack_5e8);
  uStack_3f0 = CONCAT71(uStack_5ef,uStack_5f0);
  uStack_2d0 = CONCAT71(uStack_5d7,uStack_5d8);
  uStack_2d8 = CONCAT71(uStack_5df,uStack_5e0);
  uStack_3d8 = CONCAT71(uStack_5d7,uStack_5d8);
  uStack_3e0 = CONCAT71(uStack_5df,uStack_5e0);
  uStack_2c0 = CONCAT71(uStack_5c7,uStack_5c8);
  uStack_2c8 = CONCAT71(uStack_5cf,uStack_5d0);
  uStack_438 = CONCAT71(uStack_637,uStack_638);
  uStack_440 = CONCAT71(uStack_63f,uStack_640);
  uStack_320 = CONCAT71(uStack_627,uStack_628);
  uStack_328 = CONCAT71(uStack_62f,uStack_630);
  uStack_448 = CONCAT71(uStack_647,uStack_648);
  uStack_450 = CONCAT71(uStack_64f,uStack_650);
  uStack_330 = CONCAT71(uStack_637,uStack_638);
  uStack_338 = CONCAT71(uStack_63f,uStack_640);
  uStack_428 = CONCAT71(uStack_627,uStack_628);
  uStack_430 = CONCAT71(uStack_62f,uStack_630);
  uStack_310 = CONCAT71(uStack_617,uStack_618);
  uStack_318 = CONCAT71(uStack_61f,uStack_620);
  uStack_418 = CONCAT71(uStack_617,uStack_618);
  uStack_420 = CONCAT71(uStack_61f,uStack_620);
  uStack_300 = CONCAT71(uStack_607,uStack_608);
  uStack_308 = CONCAT71(uStack_60f,uStack_610);
  uStack_360 = CONCAT71(uStack_667,uStack_668);
  uStack_368 = CONCAT71(uStack_66f,uStack_670);
  uStack_370 = uStack_678;
  uStack_378 = uStack_680;
  uStack_350 = CONCAT71(uStack_657,uStack_658);
  uStack_358 = CONCAT71(uStack_65f,uStack_660);
  uStack_340 = CONCAT71(uStack_647,uStack_648);
  uStack_348 = CONCAT71(uStack_64f,uStack_650);
  uStack_468 = CONCAT71(uStack_667,uStack_668);
  uStack_470 = CONCAT71(uStack_66f,uStack_670);
  uStack_458 = CONCAT71(uStack_657,uStack_658);
  uStack_460 = CONCAT71(uStack_65f,uStack_660);
  uStack_398 = CONCAT71(uStack_597,uStack_598);
  uStack_478 = uStack_678;
  uStack_480 = uStack_680;
  uStack_288 = uStack_590;
  uStack_390 = uStack_590;
  uStack_490 = uVar2;
  uStack_488 = uVar4;
  uStack_388 = uVar2;
  uStack_380 = uVar4;
  func_0x00010006a470(&uStack_490,&uStack_178,0x1000c7490,&UNK_10008d548);
  func_0x00010006a4b8(&uStack_388,0x1000c7490,&UNK_10008d548);
  _memcpy(&uStack_178,&uStack_490,0x101);
  _memcpy(&uStack_280,&uStack_490,0x101);
  *param_1 = uVar1;
  _memcpy(param_1 + 1,&uStack_490,0x101);
  _swift_retain(uVar1);
  func_0x00010006a470(&uStack_280,auStack_948,0x1000c7490,&UNK_10008d548);
  func_0x00010006a4b8(&uStack_178,0x1000c7490,&UNK_10008d548);
  _swift_release(uVar1);
  return;
}



/* Entry: 100069ed4; end: 10006a2d7;  */

void FUN_100069ed4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_520 [160];
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined8 uStack_3ef;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  long lStack_318;
  long lStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  if (param_9 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain();
    _objc_retain();
    lVar5 = param_9;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    lVar4 = lVar5;
    __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
    _swift_release(lVar5);
    _objc_release(param_9);
    _swift_retain(lVar4);
  }
  lVar5 = param_8;
  _swift_bridgeObjectRetain();
  uVar1 = (undefined1)lVar5;
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  lVar5 = 0x4028000000000000;
  uVar2 = uVar1;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_f0 = CONCAT71(lStack_f0._1_7_,uVar1);
  uStack_d8 = (undefined1)param_4;
  uStack_d7 = (undefined7)((ulong)param_4 >> 8);
  uStack_d0 = (undefined1)param_5;
  uStack_cf = (undefined7)((ulong)param_5 >> 8);
  uStack_c8 = 0;
  lStack_110 = 0x402c000000000000;
  lStack_108 = 0x7b;
  lStack_100 = CONCAT71(lStack_100._1_7_,1);
  lStack_f8 = 0x3fe0000000000000;
  lStack_120 = param_7;
  lStack_118 = param_8;
  lStack_e8 = lVar5;
  lStack_e0 = param_3;
  __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
  lStack_3b8 = lStack_f8;
  lStack_3c0 = lStack_100;
  lStack_3a8 = lStack_e8;
  lStack_3b0 = lStack_f0;
  uStack_398 = uStack_d8;
  lStack_3a0 = lStack_e0;
  uStack_38f = uStack_cf;
  uStack_388 = uStack_c8;
  uStack_397 = uStack_d7;
  uStack_390 = uStack_d0;
  lStack_3d8 = lStack_118;
  lStack_3e0 = lStack_120;
  lStack_3c8 = lStack_108;
  lStack_3d0 = lStack_110;
  lVar5 = lStack_110;
  func_0x00010006a470(&lStack_3e0,&lStack_1c0,0x1000c74a8,&UNK_10008d560);
  lVar6 = 0x4028000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_198 = lStack_3b8;
  lStack_1a0 = lStack_3c0;
  lStack_188 = lStack_3a8;
  lStack_190 = lStack_3b0;
  uStack_178 = uStack_398;
  lStack_180 = lStack_3a0;
  uStack_16f = uStack_38f;
  uStack_168 = uStack_388;
  uStack_177 = uStack_397;
  uStack_170 = uStack_390;
  lStack_1b8 = lStack_3d8;
  lStack_1c0 = lStack_3e0;
  lStack_1a8 = lStack_3c8;
  lStack_1b0 = lStack_3d0;
  func_0x00010006a4b8(&lStack_120,0x1000c74a8,&UNK_10008d560);
  lStack_358 = lStack_198;
  lStack_360 = lStack_1a0;
  lStack_348 = lStack_188;
  lStack_350 = lStack_190;
  uStack_338 = CONCAT71(uStack_177,uStack_178);
  uStack_328 = CONCAT71(uStack_167,uStack_168);
  uStack_330 = CONCAT71(uStack_16f,uStack_170);
  lStack_340 = lStack_180;
  lStack_378 = lStack_1b8;
  lStack_380 = lStack_1c0;
  lStack_368 = lStack_1a8;
  lStack_370 = lStack_1b0;
  uStack_308 = (undefined1)param_4;
  uStack_307 = (undefined7)((ulong)param_4 >> 8);
  uStack_300 = (undefined1)param_5;
  uStack_2ff = (undefined7)((ulong)param_5 >> 8);
  uStack_2f8 = 0;
  puVar3 = &UNK_10008d568;
  uStack_320 = uVar2;
  lStack_318 = lVar6;
  lStack_310 = lVar5;
  _swift_getKeyPath();
  lStack_420 = CONCAT71(uStack_31f,uStack_320);
  lStack_418 = lStack_318;
  uStack_408 = uStack_308;
  lStack_410 = lStack_310;
  uStack_3ff = uStack_2ff;
  uStack_3f8 = uStack_2f8;
  uStack_407 = uStack_307;
  uStack_400 = uStack_300;
  lStack_458 = lStack_358;
  lStack_460 = lStack_360;
  lStack_448 = lStack_348;
  lStack_450 = lStack_350;
  uStack_438 = uStack_338;
  lStack_440 = lStack_340;
  uStack_428 = uStack_328;
  uStack_430 = uStack_330;
  lStack_478 = lStack_378;
  lStack_480 = lStack_380;
  lStack_468 = lStack_368;
  lStack_470 = lStack_370;
  lStack_2c8 = lStack_198;
  lStack_2d0 = lStack_1a0;
  lStack_2b8 = lStack_188;
  lStack_2c0 = lStack_190;
  uStack_2a8 = CONCAT71(uStack_177,uStack_178);
  uStack_298 = CONCAT71(uStack_167,uStack_168);
  uStack_2a0 = CONCAT71(uStack_16f,uStack_170);
  lStack_2b0 = lStack_180;
  lStack_2e8 = lStack_1b8;
  lStack_2f0 = lStack_1c0;
  lStack_2d8 = lStack_1a8;
  lStack_2e0 = lStack_1b0;
  uStack_268 = 0;
  uStack_290 = uVar2;
  lStack_288 = lVar6;
  lStack_280 = lVar5;
  uStack_278 = param_4;
  uStack_270 = param_5;
  func_0x00010006a470(&lStack_380,&lStack_120,0x1000c74b0,&UNK_10008d598);
  func_0x00010006a4b8(&lStack_2f0,0x1000c74b0,&UNK_10008d598);
  lStack_1e8 = CONCAT71(uStack_407,uStack_408);
  uStack_148 = CONCAT71(uStack_407,uStack_408);
  lStack_1f8 = lStack_418;
  lStack_200 = lStack_420;
  lStack_1f0 = lStack_410;
  lStack_1e0 = CONCAT71(uStack_3ff,uStack_400);
  uStack_138 = CONCAT71(uStack_3f7,uStack_3f8);
  uStack_140 = CONCAT71(uStack_3ff,uStack_400);
  uStack_1d8 = uStack_3f8;
  uStack_1d7 = uStack_3f7;
  lStack_238 = lStack_458;
  lStack_240 = lStack_460;
  lStack_228 = lStack_448;
  lStack_230 = lStack_450;
  uStack_218 = uStack_438;
  lStack_220 = lStack_440;
  uStack_208 = uStack_428;
  uStack_210 = uStack_430;
  lStack_258 = lStack_478;
  lStack_260 = lStack_480;
  lStack_248 = lStack_468;
  lStack_250 = lStack_470;
  lStack_158 = lStack_418;
  lStack_160 = lStack_420;
  lStack_150 = lStack_410;
  lStack_198 = lStack_458;
  lStack_1a0 = lStack_460;
  lStack_188 = lStack_448;
  lStack_190 = lStack_450;
  uStack_178 = (undefined1)uStack_438;
  uStack_177 = (undefined7)((ulong)uStack_438 >> 8);
  lStack_180 = lStack_440;
  uStack_168 = (undefined1)uStack_428;
  uStack_167 = (undefined7)((ulong)uStack_428 >> 8);
  uStack_170 = (undefined1)uStack_430;
  uStack_16f = (undefined7)((ulong)uStack_430 >> 8);
  uStack_1d0 = SUB81(puVar3,0);
  uStack_1cf = (undefined7)((ulong)puVar3 >> 8);
  uStack_1c8 = 1;
  lStack_1b8 = lStack_478;
  lStack_1c0 = lStack_480;
  lStack_1a8 = lStack_468;
  lStack_1b0 = lStack_470;
  uStack_128 = 1;
  puStack_130 = puVar3;
  func_0x00010006a470(&lStack_260,&lStack_120,0x1000c74b8,&UNK_10008d5a0);
  func_0x00010006a4b8(&lStack_1c0,0x1000c74b8,&UNK_10008d5a0);
  lStack_418 = lStack_1f8;
  lStack_420 = lStack_200;
  uStack_408 = (undefined1)lStack_1e8;
  uStack_407 = (undefined7)((ulong)lStack_1e8 >> 8);
  lStack_410 = lStack_1f0;
  uStack_3f8 = uStack_1d8;
  uStack_400 = (undefined1)lStack_1e0;
  uStack_3ff = (undefined7)((ulong)lStack_1e0 >> 8);
  uStack_3ef = CONCAT17(uStack_1c8,uStack_1cf);
  uStack_3f0 = uStack_1d0;
  lStack_458 = lStack_238;
  lStack_460 = lStack_240;
  lStack_448 = lStack_228;
  lStack_450 = lStack_230;
  uStack_438 = uStack_218;
  lStack_440 = lStack_220;
  uStack_428 = uStack_208;
  uStack_430 = uStack_210;
  lStack_478 = lStack_258;
  lStack_480 = lStack_260;
  lStack_468 = lStack_248;
  lStack_470 = lStack_250;
  lStack_b8 = lStack_1f8;
  lStack_c0 = lStack_200;
  lStack_a8 = lStack_1e8;
  lStack_b0 = lStack_1f0;
  uStack_98 = uStack_1d8;
  lStack_a0 = lStack_1e0;
  uStack_8f = CONCAT17(uStack_1c8,uStack_1cf);
  uStack_97 = uStack_1d7;
  uStack_90 = uStack_1d0;
  lStack_f8 = lStack_238;
  lStack_100 = lStack_240;
  lStack_e8 = lStack_228;
  lStack_f0 = lStack_230;
  uStack_d8 = (undefined1)uStack_218;
  uStack_d7 = (undefined7)((ulong)uStack_218 >> 8);
  lStack_e0 = lStack_220;
  uStack_c8 = (undefined1)uStack_208;
  uStack_c7 = (undefined7)((ulong)uStack_208 >> 8);
  uStack_d0 = (undefined1)uStack_210;
  uStack_cf = (undefined7)((ulong)uStack_210 >> 8);
  lStack_118 = lStack_258;
  lStack_120 = lStack_260;
  lStack_108 = lStack_248;
  lStack_110 = lStack_250;
  _swift_retain(lVar4);
  func_0x00010006a470(&lStack_120,auStack_520,0x1000c74b8,&UNK_10008d5a0);
  _swift_release(lVar4);
  param_1[0xe] = lStack_b8;
  param_1[0xd] = lStack_c0;
  param_1[0x10] = lStack_a8;
  param_1[0xf] = lStack_b0;
  param_1[0x12] = CONCAT71(uStack_97,uStack_98);
  param_1[0x11] = lStack_a0;
  *(undefined8 *)((long)param_1 + 0x99) = uStack_8f;
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_90,uStack_97);
  param_1[6] = lStack_f8;
  param_1[5] = lStack_100;
  param_1[8] = lStack_e8;
  param_1[7] = lStack_f0;
  param_1[10] = CONCAT71(uStack_d7,uStack_d8);
  param_1[9] = lStack_e0;
  param_1[0xc] = CONCAT71(uStack_c7,uStack_c8);
  param_1[0xb] = CONCAT71(uStack_cf,uStack_d0);
  param_1[2] = lStack_118;
  param_1[1] = lStack_120;
  *param_1 = lVar4;
  param_1[4] = lStack_108;
  param_1[3] = lStack_110;
  func_0x00010006a4b8(&lStack_480,0x1000c74b8,&UNK_10008d5a0);
  _swift_release(lVar4);
  return;
}



/* Entry: 10006a2d8; end: 10006a2e3;  */

void FUN_10006a2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10006a2e4; end: 10006a423;  */

void FUN_10006a2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_5e0 [288];
  undefined1 auStack_4c0 [272];
  undefined1 auStack_3b0 [272];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [272];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000695e4(&uStack_180,uVar1,uVar3,uVar2,uVar4);
  _memcpy(auStack_4c0,&uStack_180,0x109);
  _memcpy(auStack_3b0,&uStack_180,0x109);
  func_0x00010006a470(auStack_4c0,&uStack_2a0,0x1000c7470,&UNK_10008d528);
  func_0x00010006a4b8(auStack_3b0,0x1000c7470,&UNK_10008d528);
  _memcpy(auStack_170,auStack_4c0,0x109);
  uStack_2a0 = param_2;
  uStack_298 = param_3;
  _memcpy(auStack_290,auStack_4c0,0x109);
  uStack_180 = param_2;
  uStack_178 = param_3;
  func_0x00010006a470(&uStack_2a0,auStack_5e0,0x1000c7478,&UNK_10008d530);
  func_0x00010006a4b8(&uStack_180,0x1000c7478,&UNK_10008d530);
  _memcpy(param_1,&uStack_2a0,0x119);
  return;
}



/* Entry: 10006a424; end: 10006a4f7;  */

void FUN_10006a424(undefined1 *param_1,undefined1 param_2)

{
  __s7SwiftUI17EnvironmentValuesV22multilineTextAlignmentAA0fG0Ovg();
  *param_1 = param_2;
  return;
}



/* Entry: 10006a4f8; end: 10006a4fb;  */

void FUN_10006a4f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c74c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7478;
  func_0x000100010120(0x1000c7478,&UNK_10008d530);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c74c0 = puVar2;
  return;
}



/* Entry: 10006a4fc; end: 10006a54b;  */

void FUN_10006a4fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c74c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7478;
  func_0x000100010120(0x1000c7478,&UNK_10008d530);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c74c0 = puVar2;
  return;
}



/* Entry: 10006a54c; end: 10006a577;  */

long FUN_10006a54c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10006a578; end: 10006a57f;  */

void FUN_10006a578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10006a580; end: 10006a5bb;  */

undefined8 * FUN_10006a580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10006a5bc; end: 10006a61f;  */

undefined8 * FUN_10006a5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10006a620; end: 10006a66b;  */

undefined8 * FUN_10006a620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10006a66c; end: 10006a717;  */

int FUN_10006a66c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10006a718; end: 10006a8bb;  */

void FUN_10006a718(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  
  puStack_80 = (undefined *)*unaff_x20;
  uVar10 = unaff_x20[1];
  puStack_78 = (undefined *)uVar10;
  FUN_100010174();
  _swift_bridgeObjectRetain(uVar10);
  ppuVar2 = &puStack_80;
  puVar5 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC(ppuVar2,PTR___sSSN_1000b1180,param_2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1000c20f0;
  _objc_opt_self();
  func_0x0001000867e0(unaff_x20[2]);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    puVar4 = puVar3;
    ppuVar7 = ppuVar2;
    puVar9 = puVar5;
    uVar10 = param_2;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(puVar3);
    func_0x000100022a4c(ppuVar2,puVar5,param_2);
    _swift_bridgeObjectRelease(param_5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    puVar5 = puVar3;
    puVar8 = puVar4;
    ppuVar2 = ppuVar7;
    puVar11 = puVar9;
    __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
    _swift_release(puVar3);
    func_0x000100022a4c(puVar4,ppuVar7,puVar9);
    _swift_bridgeObjectRelease(uVar10);
    uStack_70 = SUB81(ppuVar2,0);
    uVar6 = (ulong)*(byte *)(unaff_x20 + 4);
    puStack_80 = puVar5;
    puStack_78 = puVar8;
    puStack_68 = puVar11;
    __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12toAccentableyAA03AnyC0VSbF
              (uVar6,PTR___s7SwiftUI4TextVN_1000b06e0,PTR___s7SwiftUI4TextVAA4ViewAAWP_1000b06d0);
    func_0x000100022a4c(puVar5,puVar8,ppuVar2);
    _swift_bridgeObjectRelease(puVar11);
    *param_1 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006a8bc);
  (*pcVar1)();
}



/* Entry: 10006a8bc; end: 10006a8cb;  */

void FUN_10006a8bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10006a8cc; end: 10006a92b;  */

void FUN_10006a8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10006a92c; end: 10006a933; +[FLFriend supportsSecureCoding] */

undefined8 FUN_10006a92c(void)

{
  return 1;
}



/* Entry: 10006a934; end: 10006aa1b;  */

undefined1 *
FUN_10006a934(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease();
  }
  FUN_10006aa1c();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_1000c1c50,
                      param_1,param_3,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10006aa1c; end: 10006aa3b;  */

void FUN_10006aa1c(void)

{
  _objc_opt_self(&PTR_PTR_1000c2700);
  return;
}



/* Entry: 10006aa3c; end: 10006aad3; -[FLFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_10006aa3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_10006a934(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



/* Entry: 10006aad4; end: 10006aaeb; -[FLFriend initWithCoder:] */

undefined1 * FUN_10006aad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_10006aa1c();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10006aaec; end: 10006ab3b;  */

void FUN_10006aaec(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  _swift_getObjCClassFromMetadata();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_1000c7608;
  _objc_msgSendSuper2(auStack_30,PTR_s_successWithResolvedObject__1000c1880,param_1);
                    /* WARNING: Could not recover jumptable at 0x000100085f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_1000b10d0)();
  return;
}



/* Entry: 10006ab3c; end: 10006ab7f; +[FLFriendResolutionResult successWithResolvedFLFriend:] */

void FUN_10006ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10006aaec();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(uVar1);
  return;
}



/* Entry: 10006ab80; end: 10006ac77;  */

undefined1 * FUN_10006ab80(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(param_1);
    __ss28__ContiguousArrayStorageBaseC17staticElementTypeypXpvgTj();
    uVar1 = 0;
    FUN_10006ac78(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_10006ac78(0);
    _swift_bridgeObjectRetain(param_1);
    __ss17_bridgeCocoaArrayySayxGyXllF(uVar4,uVar1);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_getObjCClassFromMetadata();
  FUN_10006ac78(0);
  uVar2 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_1000c7608;
  _objc_msgSendSuper2(auStack_40,PTR_s_disambiguationWithObjectsToDisam_1000c1888,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  return puVar3;
}



/* Entry: 10006ac78; end: 10006acbb;  */

void FUN_10006ac78(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7630 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___INObject_1000c21b0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000c7630 = puVar1;
  return;
}



/* Entry: 10006acbc; end: 10006ad63; +[FLFriendResolutionResult disambiguationWithFLFriendsToDisambiguate:] */

void FUN_10006acbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10006aa1c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_3;
  FUN_10006ab80(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(uVar1);
  return;
}



/* Entry: 10006ad64; end: 10006adb3; +[FLFriendResolutionResult confirmationRequiredWithFLFriendToConfirm:] */

void FUN_10006ad64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010006ad14(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(param_3);
  return;
}



/* Entry: 10006adb4; end: 10006adfb; +[FLFriendResolutionResult successWithResolvedObject:] */

void FUN_10006adb4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006adfc);
  (*pcVar1)();
}



/* Entry: 10006adfc; end: 10006ae43; +[FLFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_10006adfc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006ae44);
  (*pcVar1)();
}



/* Entry: 10006ae44; end: 10006ae8b; +[FLFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_10006ae44(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006ae8c);
  (*pcVar1)();
}



/* Entry: 10006ae8c; end: 10006ae97;  */

void FUN_10006ae8c(void)

{
  FUN_10006ae98();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 10006ae98; end: 10006aed7;  */

void FUN_10006ae98(void)

{
  _objc_opt_self(&PTR_PTR_1000c27b0);
  return;
}



/* Entry: 10006aed8; end: 10006af13; -[FriendLocationIntent init] */

void FUN_10006aed8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010006aeb8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  return;
}



/* Entry: 10006af14; end: 10006af1f; -[FriendLocationIntent initWithCoder:] */

undefined1 * FUN_10006af14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x10006aeb8)();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10006af20; end: 10006af9f;  */

undefined1 * FUN_10006af20(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10006afa0; end: 10006afbf;  */

void FUN_10006afa0(void)

{
  (*(code *)0x10006aeb8)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 10006afc0; end: 10006b097;  */

void FUN_10006afc0(void)

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



/* Entry: 10006b098; end: 10006b0a3;  */

void FUN_10006b098(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10006b0a4; end: 10006b127; -[FriendLocationIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10006b0a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1000c7638;
  _swift_beginAccess(param_1 + _DAT_1000c7638,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10006b128; end: 10006b177; -[FriendLocationIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1000c7638;
  _swift_beginAccess(param_1 + _DAT_1000c7638,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10006b178; end: 10006b207; -[FriendLocationIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10006b178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  func_0x000100086bc0();
  lVar1 = _DAT_1000c7638;
  _swift_beginAccess(param_1 + _DAT_1000c7638,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  func_0x0001000874c0();
  _objc_release(param_1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10006b208; end: 10006b24f; -[FriendLocationIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b208(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_1000c7638) = 0;
  lVar1 = param_1;
  FUN_10006b328();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1000c1bf0);
  return;
}



/* Entry: 10006b250; end: 10006b2db; -[FriendLocationIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10006b250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_1000c7638) = 0;
  lVar2 = param_1;
  FUN_10006b328();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (plVar3 != (long *)0x0) {
    _objc_release(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10006b2dc; end: 10006b2e7;  */

void FUN_10006b2dc(void)

{
  FUN_10006b328();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 10006b2e8; end: 10006b317;  */

void FUN_10006b2e8(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 10006b318; end: 10006b327;  */

undefined1  [16] FUN_10006b318(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10006b328; end: 10006b347;  */

void FUN_10006b328(void)

{
  _objc_opt_self(&PTR_PTR_1000c2928);
  return;
}



/* Entry: 10006b348; end: 10006b34b;  */

void FUN_10006b348(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008d670;
  _swift_getWitnessTable(&UNK_10008d670,&UNK_1000b5d28);
  puRam00000001000c7640 = puVar1;
  return;
}



/* Entry: 10006b34c; end: 10006b38b;  */

void FUN_10006b34c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008d670;
  _swift_getWitnessTable(&UNK_10008d670,&UNK_1000b5d28);
  puRam00000001000c7640 = puVar1;
  return;
}



/* Entry: 10006b38c; end: 10006b39b;  */

undefined1  [16] FUN_10006b38c(void)

{
  return ZEXT816(0x1000b5d28);
}



/* Entry: 10006b39c; end: 10006b433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b39c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1000c76c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1000c1bf0);
  return;
}



/* Entry: 10006b434; end: 10006b48b; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration init] */

void FUN_10006b434(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001f,0x800000010009eb50,
             "FriendLocationWidgetBridge/FriendLocationWidgetConfiguration.swift",0x42,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006b48c);
  (*pcVar1)();
}



/* Entry: 10006b48c; end: 10006b533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10006b48c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010009eb70);
  uVar2 = param_1;
  func_0x000100086760();
  _objc_release(uVar1);
  *(char *)(unaff_x20 + _DAT_1000c76c0) = (char)uVar2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1000c1bf0);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 10006b534; end: 10006b5e7; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10006b534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  _swift_getObjectType();
  _objc_retain();
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010009eb70);
  uVar3 = param_3;
  func_0x000100086760();
  _objc_release(uVar2);
  *(char *)(param_1 + _DAT_1000c76c0) = (char)uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1000c1bf0);
  _objc_release(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 10006b5e8; end: 10006b673; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010009eb70);
  func_0x0001000868a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_1);
  return;
}



/* Entry: 10006b674; end: 10006b6c7;  */

void FUN_10006b674(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 10006b6c8; end: 10006b6f7;  */

void FUN_10006b6c8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10006b6f8; end: 10006b703;  */

void FUN_10006b6f8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10006b704; end: 10006b8f3;  */

/* WARNING: Removing unreachable block (ram,0x00010006b800) */

undefined8 FUN_10006b704(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010009eb90);
  func_0x0001000870e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_1000b14c8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 != 0) {
    plVar3 = &lStack_90;
    _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_1000b14c8 + 8,
                       PTR___s10Foundation4DataVN_1000b1930,6);
    if (((ulong)plVar3 & 1) == 0) {
      return 0;
    }
    _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
    func_0x00010001c120(lStack_90,uStack_88);
    lVar6 = lStack_90;
    FUN_10001ccd4(lStack_90,uStack_88);
    func_0x000100018c5c(lStack_90,uStack_88);
    if (lVar6 == 0) {
      func_0x000100018c5c(lStack_90,uStack_88);
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x000100087440(lVar6);
      lVar4 = lVar6;
      func_0x0001000867a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x000100018c5c(lStack_90,uStack_88);
        _objc_release(lVar6);
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80);
        func_0x000100018c5c(lStack_90,uStack_88);
        _swift_unknownObjectRelease(lVar4);
        _objc_release(lVar6);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 != 0) {
        uVar2 = 0;
        func_0x00010006b6a8(0);
        puVar5 = &uStack_80;
        _swift_dynamicCast(puVar5,&uStack_60,puVar1 + 8,uVar2,6);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
        return uStack_80;
      }
    }
  }
  FUN_10001d070(&uStack_60);
  return 0;
}



/* Entry: 10006b8f4; end: 10006b937;  */

void FUN_10006b8f4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}


