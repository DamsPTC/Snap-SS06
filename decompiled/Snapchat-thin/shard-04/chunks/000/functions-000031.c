/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fa3dbc; end: 102fa3e53;  */

int FUN_102fa3dbc(int *param_1,int param_2)

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



/* Entry: 102fa3e54; end: 102fa3ef3;  */

undefined8 * FUN_102fa3e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 102fa3ef4; end: 102fa3f3b;  */

undefined8 * FUN_102fa3ef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa3f3c; end: 102fa3fef;  */

int FUN_102fa3f3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fa3ff0; end: 102fa402b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa3ff0(void)

{
  ulong in_x6;
  ulong in_x7;
  uint uVar1;
  
  if (0xe < in_x7 >> 0x3c) {
    return;
  }
  FUN_102f55208();
  uVar1 = (uint)(in_x7 >> 0x3e);
  if (uVar1 == 1) {
    in_x6 = in_x7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x6);
  return;
}



/* Entry: 102fa402c; end: 102fa40bf;  */

void FUN_102fa402c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_8 != 1) {
    func_0x00010006c090();
    func_0x000100d2ebd8(param_3,param_4,param_5,param_6);
    func_0x000102f91a84(param_7,param_8,param_9,param_10,param_11,param_12);
  }
  return;
}



/* Entry: 102fa40c0; end: 102fa507f;  */

void FUN_102fa40c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2c4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6eb2c;
  func_0x000107c61520(&DAT_10db6eb2c,&UNK_1105f5180);
  puRam0000000112f2c4a8 = puVar1;
  return;
}



/* Entry: 102fa5080; end: 102fa50df;  */

undefined8 FUN_102fa5080(undefined8 param_1,undefined8 param_2)

{
  FUN_102fa08dc(param_2,param_1,&UNK_1105f4498);
  return param_2;
}



/* Entry: 102fa50e0; end: 102fa50f3;  */

/* WARNING: Possible PIC construction at 0x000102f90bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f90bdc) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_102fa50e0(undefined8 param_1,undefined8 param_2)

{
  ulong in_x5;
  
  if (((in_x5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102fa50f4; end: 102fa5163;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa50f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 102fa5164; end: 102fa5173;  */

undefined8 * FUN_102fa5164(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 102fa5174; end: 102fa51fb;  */

undefined8 FUN_102fa5174(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102fa51fc; end: 102fa529f;  */

void FUN_102fa51fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf000000000000000;
  return;
}



/* Entry: 102fa52a0; end: 102fa5353;  */

void FUN_102fa52a0(void)

{
  func_0x000100d2e208();
  return;
}



/* Entry: 102fa5354; end: 102fa59db;  */

void FUN_102fa5354(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 102fa59dc; end: 102fa5aa3;  */

void FUN_102fa59dc(void)

{
  func_0x000100d2e4a8();
  return;
}



/* Entry: 102fa5aa4; end: 102fa5e4f;  */

void FUN_102fa5aa4(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102fa5e50; end: 102fa6223;  */

void FUN_102fa5e50(void)

{
  func_0x000100d2e05c();
  return;
}



/* Entry: 102fa6224; end: 102fa6293;  */

uint FUN_102fa6224(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_7b0 [192];
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
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
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
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_102f91ad0(&uStack_f0);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_338 = *(undefined8 *)(unaff_x20 + 200);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_3a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_388 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_380 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_3e8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_2a8 = uStack_68;
  uStack_2b0 = uStack_70;
  uStack_298 = uStack_58;
  uStack_2a0 = uStack_60;
  uStack_288 = uStack_48;
  uStack_290 = uStack_50;
  uStack_278 = uStack_38;
  uStack_280 = uStack_40;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_2c8 = uStack_88;
  uStack_2d0 = uStack_90;
  uStack_2b8 = uStack_78;
  uStack_2c0 = uStack_80;
  uStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  iVar1 = (int)&uStack_3f0;
  FUN_102f54fec();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 == 1) {
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_528 = uStack_3a8;
      uStack_530 = uStack_3b0;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_568 = uStack_3e8;
      uStack_570 = uStack_3f0;
      uStack_558 = uStack_3d8;
      uStack_560 = uStack_3e0;
      uStack_548 = uStack_3c8;
      uStack_550 = uStack_3d0;
      uStack_538 = uStack_3b8;
      uStack_540 = uStack_3c0;
      FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_570,0x112f2a130,&UNK_10db663d0);
      uVar3 = 0;
      goto LAB_102f7ad54;
    }
  }
  else {
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_588 = uStack_348;
    uStack_590 = uStack_350;
    uStack_578 = uStack_338;
    uStack_580 = uStack_340;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 != 1) {
      uStack_668 = uStack_2a8;
      uStack_670 = uStack_2b0;
      uStack_658 = uStack_298;
      uStack_660 = uStack_2a0;
      uStack_648 = uStack_288;
      uStack_650 = uStack_290;
      uStack_638 = uStack_278;
      uStack_640 = uStack_280;
      uStack_6a8 = uStack_2e8;
      uStack_6b0 = uStack_2f0;
      uStack_698 = uStack_2d8;
      uStack_6a0 = uStack_2e0;
      uStack_688 = uStack_2c8;
      uStack_690 = uStack_2d0;
      uStack_678 = uStack_2b8;
      uStack_680 = uStack_2c0;
      uStack_6e8 = uStack_328;
      uStack_6f0 = uStack_330;
      uStack_6d8 = uStack_318;
      uStack_6e0 = uStack_320;
      uStack_6c8 = uStack_308;
      uStack_6d0 = uStack_310;
      uStack_6b8 = uStack_2f8;
      uStack_6c0 = uStack_300;
      uStack_4e8 = uStack_2a8;
      uStack_4f0 = uStack_2b0;
      uStack_4d8 = uStack_298;
      uStack_4e0 = uStack_2a0;
      uStack_4c8 = uStack_288;
      uStack_4d0 = uStack_290;
      uStack_4b8 = uStack_278;
      uStack_4c0 = uStack_280;
      uStack_528 = uStack_2e8;
      uStack_530 = uStack_2f0;
      uStack_518 = uStack_2d8;
      uStack_520 = uStack_2e0;
      uStack_508 = uStack_2c8;
      uStack_510 = uStack_2d0;
      uStack_4f8 = uStack_2b8;
      uStack_500 = uStack_2c0;
      uStack_568 = uStack_328;
      uStack_570 = uStack_330;
      uStack_558 = uStack_318;
      uStack_560 = uStack_320;
      uStack_548 = uStack_308;
      uStack_550 = uStack_310;
      uStack_538 = uStack_2f8;
      uStack_540 = uStack_300;
      uStack_128 = uStack_5a8;
      uStack_130 = uStack_5b0;
      uStack_118 = uStack_598;
      uStack_120 = uStack_5a0;
      uStack_108 = uStack_588;
      uStack_110 = uStack_590;
      uStack_f8 = uStack_578;
      uStack_100 = uStack_580;
      uStack_168 = uStack_5e8;
      uStack_170 = uStack_5f0;
      uStack_158 = uStack_5d8;
      uStack_160 = uStack_5e0;
      uStack_148 = uStack_5c8;
      uStack_150 = uStack_5d0;
      uStack_138 = uStack_5b8;
      uStack_140 = uStack_5c0;
      uStack_1a8 = uStack_628;
      uStack_1b0 = uStack_630;
      uStack_198 = uStack_618;
      uStack_1a0 = uStack_620;
      uStack_188 = uStack_608;
      uStack_190 = uStack_610;
      uStack_178 = uStack_5f8;
      uStack_180 = uStack_600;
      FUN_102fa5174(&uStack_270,auStack_7b0,0x112f2a130,&UNK_10db663d0);
      puVar2 = &uStack_1b0;
      FUN_102f91af0(puVar2,&uStack_570);
      func_0x000102fa51bc(&uStack_6f0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_3f0,0x112f2a130,&UNK_10db663d0);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_102f7ad54;
    }
  }
  func_0x000107c610b4(&uStack_570,&uStack_3f0,0x180);
  FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
  func_0x000102fa51bc(&uStack_570,0x112f2b6b0,&UNK_10db6af78);
  uVar3 = 1;
LAB_102f7ad54:
  return uVar3 & 1;
}



/* Entry: 102fa6294; end: 102fa62d3;  */

long FUN_102fa6294(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 102fa62d4; end: 102fa62ef;  */

void FUN_102fa62d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 102fa62f0; end: 102fa6313;  */

void FUN_102fa62f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x230) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x228) = param_3;
  *(undefined8 *)(unaff_x22 + 0x220) = param_2;
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa6314,0,0);
  return;
}



/* Entry: 102fa6314; end: 102fa6473;  */

/* WARNING: Removing unreachable block (ram,0x000102fa63a8) */

void FUN_102fa6314(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x220);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x230) + 0x10,unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar3 = *(long *)(unaff_x22 + 0x200);
  lVar4 = unaff_x22 + 0x1e0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x1b8) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
  FUN_102f99518();
  func_0x000100075890(unaff_x22 + 0x208,0,0,&UNK_1105f3d40,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x238) = uVar9;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x248) = plVar5;
  plVar6 = plVar5;
  FUN_102f99614();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa6474;
                    /* WARNING: Could not recover jumptable at 0x000102fa6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000043,0x800000010f116d70,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x228),&UNK_1105f3dc8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa6474; end: 102fa64e7;  */

void FUN_102fa6474(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x250) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x238),*(undefined8 *)(lVar2 + 0x240));
    pcVar1 = FUN_102fa64e8;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x238),*(undefined8 *)(lVar2 + 0x240));
    pcVar1 = (code *)0x102fa6590;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fa64e8; end: 102fa65c3;  */

void FUN_102fa64e8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102fa658c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa65c4; end: 102fa65e7;  */

void FUN_102fa65c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x238) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x230) = param_3;
  *(undefined8 *)(unaff_x22 + 0x228) = param_2;
  *(undefined8 *)(unaff_x22 + 0x220) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa65e8,0,0);
  return;
}



/* Entry: 102fa65e8; end: 102fa6753;  */

/* WARNING: Removing unreachable block (ram,0x000102fa6688) */

void FUN_102fa65e8(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x228);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x238) + 0x10,unaff_x22 + 0x1e8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  lVar10 = *(long *)(unaff_x22 + 0x208);
  lVar2 = unaff_x22 + 0x1e8;
  func_0x0001000a8868(lVar2,uVar9);
  uVar12 = puVar6[3];
  uVar11 = puVar6[2];
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar14 = puVar6[1];
  uVar13 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1e0) = puVar6[6];
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
  FUN_102f99710();
  func_0x000100075890(unaff_x22 + 0x210,0,0,&UNK_1105f3e48,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x248) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x250) = plVar3;
  plVar4 = plVar3;
  FUN_102f9980c();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102fa6754;
                    /* WARNING: Could not recover jumptable at 0x000102fa6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000039,0x800000010f116dc0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x230),&UNK_1105f3ed0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102fa6754; end: 102fa67c7;  */

void FUN_102fa6754(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 600) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x250));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x240),*(undefined8 *)(lVar2 + 0x248));
    pcVar1 = FUN_102fa67c8;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x240),*(undefined8 *)(lVar2 + 0x248));
    pcVar1 = (code *)0x102fa6870;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fa67c8; end: 102fa68a3;  */

void FUN_102fa67c8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102fa686c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa68a4; end: 102fa68bf;  */

void FUN_102fa68a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa68c0,0,0);
  return;
}



/* Entry: 102fa68c0; end: 102fa6a1b;  */

/* WARNING: Removing unreachable block (ram,0x000102fa6958) */

void FUN_102fa68c0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 200) + 0x10,unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x98);
  lVar4 = unaff_x22 + 0x78;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x50) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  FUN_102f99908();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_1105f3f50,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar5;
  plVar6 = plVar5;
  FUN_102f99a04();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa6a1c;
                    /* WARNING: Could not recover jumptable at 0x000102fa6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000042,0x800000010f116e00,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_1105f3fd0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa6a1c; end: 102fa6a8f;  */

void FUN_102fa6a1c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  uVar4 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa6a90;
  }
  else {
    pcVar2 = FUN_102fa6af8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa6a90; end: 102fa6af7;  */

void FUN_102fa6a90(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000834e4(unaff_x22 + 0x78);
  puVar2[3] = uVar5;
  puVar2[2] = uVar3;
  puVar2[5] = uVar6;
  puVar2[4] = uVar4;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[6] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa6af8; end: 102fa6b2b;  */

void FUN_102fa6af8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000102fa6b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa6b2c; end: 102fa6b47;  */

void FUN_102fa6b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa6b48,0,0);
  return;
}



/* Entry: 102fa6b48; end: 102fa6c9f;  */

/* WARNING: Removing unreachable block (ram,0x000102fa6bdc) */

void FUN_102fa6b48(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1c0) + 0x10,unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar3 = *(long *)(unaff_x22 + 0x168);
  func_0x0001000a8868(unaff_x22 + 0x148,uVar2);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c610b4(lVar5,uVar9,0x138);
  FUN_102f99b00();
  func_0x000100075890(unaff_x22 + 0x198,0,0,&UNK_1105f4058,PTR___s10Foundation4DataVN_110350ae0,
                      lVar5,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar4;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d8) = plVar6;
  plVar7 = plVar6;
  FUN_102f99bfc();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102fa6ca0;
                    /* WARNING: Could not recover jumptable at 0x000102fa6c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x170,0xd000000000000039,0x800000010f116e50,uVar9,uVar4,
             *(undefined8 *)(unaff_x22 + 0x1b8),&UNK_1105f40f8,plVar7,uVar2,lVar3);
  return;
}



/* Entry: 102fa6ca0; end: 102fa6d13;  */

void FUN_102fa6ca0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1d0);
  uVar4 = *(undefined8 *)(lVar3 + 0x1c8);
  *(long *)(lVar3 + 0x1e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1d8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa6d14;
  }
  else {
    pcVar2 = FUN_102fa6d6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa6d14; end: 102fa6d6b;  */

void FUN_102fa6d14(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x0001000834e4(unaff_x22 + 0x148);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa6d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa6d6c; end: 102fa6d9f;  */

void FUN_102fa6d6c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x000102fa6d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa6da0; end: 102fa6dbb;  */

void FUN_102fa6da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa6dbc,0,0);
  return;
}



/* Entry: 102fa6dbc; end: 102fa6f13;  */

/* WARNING: Removing unreachable block (ram,0x000102fa6e50) */

void FUN_102fa6dbc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0xa0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x68) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
  FUN_102f99cf8();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_1105f4178,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar5;
  plVar6 = plVar5;
  FUN_102f99df4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa6f14;
                    /* WARNING: Could not recover jumptable at 0x000102fa6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x38,0xd000000000000036,0x800000010f116e90,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_1105f4200,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa6f14; end: 102fa6f87;  */

void FUN_102fa6f14(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa6f88;
  }
  else {
    pcVar2 = FUN_102fa8e10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa6f88; end: 102fa6fe3;  */

void FUN_102fa6f88(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa6fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa6fe4; end: 102fa7003;  */

void FUN_102fa6fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7004,0,0);
  return;
}



/* Entry: 102fa7004; end: 102fa716f;  */

/* WARNING: Removing unreachable block (ram,0x000102fa70a0) */

void FUN_102fa7004(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  FUN_102f99ef0();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_1105f4280,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar5;
  plVar6 = plVar5;
  FUN_102f9a0a8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa7170;
                    /* WARNING: Could not recover jumptable at 0x000102fa716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x38,0xd00000000000003c,0x800000010f116ed0,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_1105f4388,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa7170; end: 102fa71e3;  */

void FUN_102fa7170(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa71e4;
  }
  else {
    pcVar2 = FUN_102fa7240;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa71e4; end: 102fa723f;  */

void FUN_102fa71e4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7240; end: 102fa7273;  */

void FUN_102fa7240(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102fa7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7274; end: 102fa728f;  */

void FUN_102fa7274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_3;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7290,0,0);
  return;
}



/* Entry: 102fa7290; end: 102fa73f7;  */

/* WARNING: Removing unreachable block (ram,0x000102fa7334) */

void FUN_102fa7290(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xf8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x108) + 0x10,unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  lVar4 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  uVar9 = puVar8[0xc];
  uVar11 = puVar8[0xf];
  uVar10 = puVar8[0xe];
  uVar15 = puVar8[9];
  uVar14 = puVar8[8];
  uVar13 = puVar8[0xb];
  uVar12 = puVar8[10];
  *(undefined8 *)(unaff_x22 + 0x78) = puVar8[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  FUN_102f9a31c();
  func_0x000100075890(unaff_x22 + 0xe0,0,0,&UNK_1105f4528,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar5;
  plVar6 = plVar5;
  FUN_102f9a418();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa73f8;
                    /* WARNING: Could not recover jumptable at 0x000102fa73f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xb8,0xd000000000000038,0x800000010f116f10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x100),&UNK_1105f45c0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa73f8; end: 102fa746b;  */

void FUN_102fa73f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x118);
  uVar4 = *(undefined8 *)(lVar3 + 0x110);
  *(long *)(lVar3 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x120));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa746c;
  }
  else {
    pcVar2 = FUN_102fa74c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa746c; end: 102fa74c7;  */

void FUN_102fa746c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x0001000834e4(unaff_x22 + 0x90);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa74c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa74c8; end: 102fa74fb;  */

void FUN_102fa74c8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000102fa74f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa74fc; end: 102fa7517;  */

void FUN_102fa74fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_3;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7518,0,0);
  return;
}



/* Entry: 102fa7518; end: 102fa7687;  */

/* WARNING: Removing unreachable block (ram,0x000102fa75c4) */

void FUN_102fa7518(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x108);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x118) + 0x10,unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  lVar4 = unaff_x22 + 0xa0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  uVar9 = puVar8[6];
  uVar11 = puVar8[9];
  uVar10 = puVar8[8];
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  uVar13 = puVar8[5];
  uVar12 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  uVar9 = puVar8[0xe];
  uVar11 = puVar8[0x11];
  uVar10 = puVar8[0x10];
  uVar15 = puVar8[0xb];
  uVar14 = puVar8[10];
  uVar13 = puVar8[0xd];
  uVar12 = puVar8[0xc];
  *(undefined8 *)(unaff_x22 + 0x88) = puVar8[0xf];
  *(undefined8 *)(unaff_x22 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  FUN_102f9a514();
  func_0x000100075890(unaff_x22 + 0xf0,0,0,&UNK_1105f4648,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar5;
  plVar6 = plVar5;
  FUN_102f9a610();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa7688;
                    /* WARNING: Could not recover jumptable at 0x000102fa7684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 200,0xd00000000000004b,0x800000010f116f50,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x110),&UNK_1105f46e0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa7688; end: 102fa76fb;  */

void FUN_102fa7688(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x128);
  uVar4 = *(undefined8 *)(lVar3 + 0x120);
  *(long *)(lVar3 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x130));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa76fc;
  }
  else {
    pcVar2 = FUN_102fa7758;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa76fc; end: 102fa7757;  */

void FUN_102fa76fc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x0001000834e4(unaff_x22 + 0xa0);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa7754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7758; end: 102fa778b;  */

void FUN_102fa7758(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x000102fa7788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa778c; end: 102fa77a7;  */

void FUN_102fa778c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa77a8,0,0);
  return;
}



/* Entry: 102fa77a8; end: 102fa7927;  */

/* WARNING: Removing unreachable block (ram,0x000102fa7864) */

void FUN_102fa77a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x158);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x168) + 0x10,unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  lVar4 = unaff_x22 + 0xf0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar9 = puVar8[8];
  uVar11 = puVar8[0xb];
  uVar10 = puVar8[10];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar13 = puVar8[7];
  uVar12 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x58) = puVar8[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  uVar9 = puVar8[0x10];
  uVar11 = puVar8[0x13];
  uVar10 = puVar8[0x12];
  uVar15 = puVar8[0xd];
  uVar14 = puVar8[0xc];
  uVar13 = puVar8[0xf];
  uVar12 = puVar8[0xe];
  *(undefined8 *)(unaff_x22 + 0x98) = puVar8[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  uVar9 = puVar8[0x18];
  uVar11 = puVar8[0x1b];
  uVar10 = puVar8[0x1a];
  uVar15 = puVar8[0x15];
  uVar14 = puVar8[0x14];
  uVar13 = puVar8[0x17];
  uVar12 = puVar8[0x16];
  *(undefined8 *)(unaff_x22 + 0xd8) = puVar8[0x19];
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar14;
  *(undefined8 *)(unaff_x22 + 200) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
  FUN_102f9a70c();
  func_0x000100075890(unaff_x22 + 0x140,0,0,&UNK_1105f4768,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x170) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x178) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar5;
  plVar6 = plVar5;
  FUN_102f9a904();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa7928;
                    /* WARNING: Could not recover jumptable at 0x000102fa7924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x118,0xd000000000000039,0x800000010f116fa0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x160),&UNK_1105f4918,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa7928; end: 102fa799b;  */

void FUN_102fa7928(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x178);
  uVar4 = *(undefined8 *)(lVar3 + 0x170);
  *(long *)(lVar3 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x180));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa799c;
  }
  else {
    pcVar2 = FUN_102fa79f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa799c; end: 102fa79f7;  */

void FUN_102fa799c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x0001000834e4(unaff_x22 + 0xf0);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa79f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa79f8; end: 102fa7a2b;  */

void FUN_102fa79f8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x000102fa7a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7a2c; end: 102fa7a47;  */

void FUN_102fa7a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7a48,0,0);
  return;
}



/* Entry: 102fa7a48; end: 102fa7ba7;  */

/* WARNING: Removing unreachable block (ram,0x000102fa7ae4) */

void FUN_102fa7a48(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xc0) + 0x10,unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  lVar4 = unaff_x22 + 0x48;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar14 = puVar8[1];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  FUN_102f9aa00();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1105f4998,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  plVar6 = plVar5;
  FUN_102f9aafc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa7ba8;
                    /* WARNING: Could not recover jumptable at 0x000102fa7ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x70,0xd000000000000039,0x800000010f116fe0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb8),&UNK_1105f4a20,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa7ba8; end: 102fa7c1b;  */

void FUN_102fa7ba8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  uVar4 = *(undefined8 *)(lVar3 + 200);
  *(long *)(lVar3 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa7c1c;
  }
  else {
    pcVar2 = FUN_102fa7c74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa7c1c; end: 102fa7c73;  */

void FUN_102fa7c1c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x48);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7c74; end: 102fa7ca7;  */

void FUN_102fa7c74(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000102fa7ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7ca8; end: 102fa7cc3;  */

void FUN_102fa7ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7cc4,0,0);
  return;
}



/* Entry: 102fa7cc4; end: 102fa7e33;  */

/* WARNING: Removing unreachable block (ram,0x000102fa7d70) */

void FUN_102fa7cc4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1b8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1c8) + 0x10,unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  lVar3 = *(long *)(unaff_x22 + 0x198);
  lVar4 = unaff_x22 + 0x178;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar9;
  uVar12 = puVar8[9];
  uVar11 = puVar8[8];
  uVar10 = puVar8[0xb];
  uVar9 = puVar8[10];
  uVar14 = puVar8[7];
  uVar13 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x170) = puVar8[0xc];
  *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar13;
  FUN_102f9abf8();
  func_0x000100075890(unaff_x22 + 0x1a0,0,0,&UNK_1105f4aa0,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar5;
  plVar6 = plVar5;
  FUN_102f9acf4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa7e34;
                    /* WARNING: Could not recover jumptable at 0x000102fa7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000046,0x800000010f117020,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1c0),&UNK_1105f4b30,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa7e34; end: 102fa7e9f;  */

void FUN_102fa7e34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1d0),*(undefined8 *)(lVar2 + 0x1d8));
    pcVar1 = FUN_102fa7ea0;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1d0),*(undefined8 *)(lVar2 + 0x1d8));
    pcVar1 = (code *)0x102fa7f18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fa7ea0; end: 102fa7f4b;  */

void FUN_102fa7ea0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[0xd] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[9] = uVar3;
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102fa7f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa7f4c; end: 102fa7f67;  */

void FUN_102fa7f4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa7f68,0,0);
  return;
}



/* Entry: 102fa7f68; end: 102fa80bf;  */

/* WARNING: Removing unreachable block (ram,0x000102fa7ffc) */

void FUN_102fa7f68(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  lVar4 = unaff_x22 + 0x50;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  FUN_102f9adf0();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1105f4bb0,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_102f9aeec();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa80c0;
                    /* WARNING: Could not recover jumptable at 0x000102fa80bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000040,0x800000010f117070,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1105f4c40,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa80c0; end: 102fa8133;  */

void FUN_102fa80c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa8134;
  }
  else {
    pcVar2 = FUN_102fa8188;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa8134; end: 102fa8187;  */

void FUN_102fa8134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102fa8184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102fa8188; end: 102fa81bb;  */

void FUN_102fa8188(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102fa81b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa81bc; end: 102fa81d7;  */

void FUN_102fa81bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa81d8,0,0);
  return;
}



/* Entry: 102fa81d8; end: 102fa832f;  */

/* WARNING: Removing unreachable block (ram,0x000102fa826c) */

void FUN_102fa81d8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_102f9afe8();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_1105f4cc8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_102f9b0e4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa8330;
                    /* WARNING: Could not recover jumptable at 0x000102fa832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000003e,0x800000010f1170c0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1105f4d50,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa8330; end: 102fa83a3;  */

void FUN_102fa8330(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa83a4;
  }
  else {
    pcVar2 = FUN_102fa8400;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa83a4; end: 102fa83ff;  */

void FUN_102fa83a4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x40);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102fa83fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa8400; end: 102fa8433;  */

void FUN_102fa8400(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000102fa8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa8434; end: 102fa844f;  */

void FUN_102fa8434(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa8450,0,0);
  return;
}



/* Entry: 102fa8450; end: 102fa85a7;  */

/* WARNING: Removing unreachable block (ram,0x000102fa84e4) */

void FUN_102fa8450(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  lVar4 = unaff_x22 + 0x50;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  FUN_102f9b1e0();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1105f4dd8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_102f9b2dc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa85a8;
                    /* WARNING: Could not recover jumptable at 0x000102fa85a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000042,0x800000010f117100,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1105f4e68,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa85a8; end: 102fa861b;  */

void FUN_102fa85a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 200);
  uVar3 = *(undefined8 *)(lVar2 + 0xc0);
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x102fa8e18;
  }
  else {
    uVar1 = 0x102fa8e14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102fa861c; end: 102fa8637;  */

void FUN_102fa861c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1a8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa8638,0,0);
  return;
}



/* Entry: 102fa8638; end: 102fa879f;  */

/* WARNING: Removing unreachable block (ram,0x000102fa86dc) */

void FUN_102fa8638(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x198);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1a8) + 0x10,unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar3 = *(long *)(unaff_x22 + 0x178);
  lVar4 = unaff_x22 + 0x158;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
  uVar12 = puVar8[5];
  uVar11 = puVar8[4];
  uVar10 = puVar8[7];
  uVar9 = puVar8[6];
  uVar14 = puVar8[3];
  uVar13 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar13;
  FUN_102f9b3d8();
  func_0x000100075890(unaff_x22 + 0x180,0,0,&UNK_1105f4ef0,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c0) = plVar5;
  plVar6 = plVar5;
  FUN_102f9b4d4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fa87a0;
                    /* WARNING: Could not recover jumptable at 0x000102fa879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000032,0x800000010f117150,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1a0),&UNK_1105f4f80,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102fa87a0; end: 102fa880b;  */

void FUN_102fa87a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1c0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1b0),*(undefined8 *)(lVar2 + 0x1b8));
    pcVar1 = FUN_102fa880c;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1b0),*(undefined8 *)(lVar2 + 0x1b8));
    pcVar1 = (code *)0x102fa8884;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fa880c; end: 102fa88b7;  */

void FUN_102fa880c(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[0xd] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[9] = uVar3;
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102fa8880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa88b8; end: 102fa88db;  */

void FUN_102fa88b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa88dc,0,0);
  return;
}



/* Entry: 102fa88dc; end: 102fa8a47;  */

/* WARNING: Removing unreachable block (ram,0x000102fa8978) */

void FUN_102fa88dc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x118) + 0x10,unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar6 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  FUN_102f9b5d0();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_1105f5000,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar7;
  plVar8 = plVar7;
  FUN_102f9b6cc();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102fa8a48;
                    /* WARNING: Could not recover jumptable at 0x000102fa8a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd00000000000003b,0x800000010f117190,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x110),&UNK_1105f5080,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 102fa8a48; end: 102fa8ab3;  */

void FUN_102fa8a48(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    pcVar1 = FUN_102fa8ab4;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    pcVar1 = (code *)0x102fa8b0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fa8ab4; end: 102fa8b3f;  */

void FUN_102fa8ab4(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102fa8b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa8b40; end: 102fa8b5f;  */

void FUN_102fa8b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fa8b60,0,0);
  return;
}



/* Entry: 102fa8b60; end: 102fa8ccb;  */

/* WARNING: Removing unreachable block (ram,0x000102fa8bfc) */

void FUN_102fa8b60(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  FUN_102f9b7c8();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_1105f5100,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  plVar8 = plVar7;
  FUN_102f9b8f4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102fa8ccc;
                    /* WARNING: Could not recover jumptable at 0x000102fa8cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000043,0x800000010f1171d0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_1105f5180,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 102fa8ccc; end: 102fa8d3f;  */

void FUN_102fa8ccc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102fa8d40;
  }
  else {
    pcVar2 = FUN_102fa8d98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102fa8d40; end: 102fa8d97;  */

void FUN_102fa8d40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102fa8d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 102fa8d98; end: 102fa8e0f;  */

void FUN_102fa8d98(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102fa8dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa8e10; end: 102fa8e1b;  */

void FUN_102fa8e10(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102fa7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fa8e1c; end: 102fa9e2f;  */

void FUN_102fa8e1c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x00010037163c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  func_0x0001000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar12 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  uVar12 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x20) = puVar10;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar12 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x28) = puVar10;
  puVar10 = PTR_PTR_1126ac8a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f052170);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar10);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1e070);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e30);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(param_2 + 0x78) = uVar12;
  *param_1 = param_2;
  return;
}


