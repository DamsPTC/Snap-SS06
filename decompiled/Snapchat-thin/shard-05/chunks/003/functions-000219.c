/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cded78; end: 103cdee9b;  */

void FUN_103cded78(void)

{
  return;
}



/* Entry: 103cdee9c; end: 103cdef4f;  */

undefined8 FUN_103cdee9c(undefined8 param_1)

{
  FUN_103d19394();
  return param_1;
}



/* Entry: 103cdef50; end: 103cdef73;  */

int FUN_103cdef50(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 1);
  iVar1 = 0;
  if (0x80000000 < uVar2) {
    iVar1 = -uVar2;
  }
  return iVar1;
}



/* Entry: 103cdef74; end: 103cdefa7;  */

undefined8 FUN_103cdef74(undefined8 param_1,undefined8 param_2)

{
  FUN_103ce35fc(param_2,param_1,&UNK_1106fae98);
  return param_2;
}



/* Entry: 103cdefa8; end: 103cdf003;  */

void FUN_103cdefa8(long param_1)

{
  *(ulong *)(param_1 + 0x28) = *(ulong *)(param_1 + 0x28) & 1;
  *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) & 0xcfffffffffffffff;
  return;
}



/* Entry: 103cdf004; end: 103cdf037;  */

undefined8 FUN_103cdf004(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ba48(param_2,param_1,&UNK_1106faf10);
  return param_2;
}



/* Entry: 103cdf038; end: 103cdf057;  */

void FUN_103cdf038(long param_1)

{
  *(ulong *)(param_1 + 0x28) = *(ulong *)(param_1 + 0x28) & 1;
  *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 103cdf058; end: 103cdf107;  */

undefined8 FUN_103cdf058(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ba48(param_2,param_1,&UNK_1106fafa0);
  return param_2;
}



/* Entry: 103cdf108; end: 103cdf843;  */

uint FUN_103cdf108(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
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
  undefined1 auStack_a60 [240];
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
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
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
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
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
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
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
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
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  
  uVar9 = param_1[5];
  uVar5 = param_1[4];
  uVar15 = param_1[7];
  uVar13 = param_1[6];
  uVar10 = param_1[9];
  uVar6 = param_1[8];
  uVar11 = param_2[5];
  uVar7 = param_2[4];
  uVar16 = param_2[7];
  uVar14 = param_2[6];
  uVar12 = param_2[9];
  uVar8 = param_2[8];
  uStack_1f0 = uVar7;
  uStack_1e8 = uVar11;
  uStack_1e0 = uVar14;
  uStack_1d8 = uVar16;
  uStack_1d0 = uVar8;
  uStack_1c8 = uVar12;
  uStack_1c0 = uVar5;
  uStack_1b8 = uVar9;
  uStack_1b0 = uVar13;
  uStack_1a8 = uVar15;
  uStack_1a0 = uVar6;
  uStack_198 = uVar10;
  if (uVar9 >> 0x3c < 0xf) {
    if (0xe < uVar11 >> 0x3c) goto LAB_103cdf450;
    func_0x000103cdf08c(&uStack_1c0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
    func_0x000103cdf08c(&uStack_1f0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
    uVar3 = uVar5;
    func_0x000100e25fcc(uVar5,uVar9,uVar7,uVar11);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = uVar13, func_0x000100e25fcc(uVar13,uVar15,uVar14,uVar16), (uVar3 & 1) == 0)) {
      FUN_103cde108(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,&SUB_10006c090);
    }
    else {
      uVar3 = uVar6;
      func_0x000100e25fcc(uVar6,uVar10,uVar8,uVar12);
      FUN_103cde108(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,&SUB_10006c090);
      if ((uVar3 & 1) != 0) goto LAB_103cdf1ec;
    }
LAB_103cdf5c0:
    FUN_103cde108(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,&SUB_10006c090);
  }
  else {
    if (uVar11 >> 0x3c < 0xf) {
LAB_103cdf450:
      func_0x000103cdf08c(&uStack_1c0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
      func_0x000103cdf08c(&uStack_1f0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
      FUN_103cde108(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,&SUB_10006c090);
      uVar5 = uVar7;
      uVar9 = uVar11;
      uVar13 = uVar14;
      uVar15 = uVar16;
      uVar6 = uVar8;
      uVar10 = uVar12;
      goto LAB_103cdf5c0;
    }
    func_0x000103cdf08c(&uStack_1c0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
    func_0x000103cdf08c(&uStack_1f0,&uStack_5b0,0x113000720,&UNK_10dc76ef0);
LAB_103cdf1ec:
    FUN_103cde108(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,&SUB_10006c090);
    uStack_4f8 = param_1[0x21];
    uStack_500 = param_1[0x20];
    uStack_218 = param_1[0x23];
    uStack_220 = param_1[0x22];
    uStack_4e8 = param_1[0x23];
    uStack_4f0 = param_1[0x22];
    uStack_208 = param_1[0x25];
    uStack_210 = param_1[0x24];
    uStack_4d8 = param_1[0x25];
    uStack_4e0 = param_1[0x24];
    uStack_1f8 = param_1[0x27];
    uStack_200 = param_1[0x26];
    uStack_538 = param_1[0x19];
    uStack_540 = param_1[0x18];
    uStack_258 = param_1[0x1b];
    uStack_260 = param_1[0x1a];
    uStack_528 = param_1[0x1b];
    uStack_530 = param_1[0x1a];
    uStack_248 = param_1[0x1d];
    uStack_250 = param_1[0x1c];
    uStack_518 = param_1[0x1d];
    uStack_520 = param_1[0x1c];
    uStack_238 = param_1[0x1f];
    uStack_240 = param_1[0x1e];
    uStack_508 = param_1[0x1f];
    uStack_510 = param_1[0x1e];
    uStack_228 = param_1[0x21];
    uStack_230 = param_1[0x20];
    uStack_578 = param_1[0x11];
    uStack_580 = param_1[0x10];
    uStack_298 = param_1[0x13];
    uStack_2a0 = param_1[0x12];
    uStack_568 = param_1[0x13];
    uStack_570 = param_1[0x12];
    uStack_288 = param_1[0x15];
    uStack_290 = param_1[0x14];
    uStack_558 = param_1[0x15];
    uStack_560 = param_1[0x14];
    uStack_278 = param_1[0x17];
    uStack_280 = param_1[0x16];
    uStack_548 = param_1[0x17];
    uStack_550 = param_1[0x16];
    uStack_268 = param_1[0x19];
    uStack_270 = param_1[0x18];
    uStack_2d8 = param_1[0xb];
    uStack_2e0 = param_1[10];
    uStack_2c8 = param_1[0xd];
    uStack_2d0 = param_1[0xc];
    uStack_2b8 = param_1[0xf];
    uStack_2c0 = param_1[0xe];
    uStack_2a8 = param_1[0x11];
    uStack_2b0 = param_1[0x10];
    uStack_5a8 = param_1[0xb];
    uStack_5b0 = param_1[10];
    uStack_598 = param_1[0xd];
    uStack_5a0 = param_1[0xc];
    uStack_588 = param_1[0xf];
    uStack_590 = param_1[0xe];
    uStack_408 = param_2[0x21];
    uStack_410 = param_2[0x20];
    uStack_308 = param_2[0x23];
    uStack_310 = param_2[0x22];
    uStack_3f8 = param_2[0x23];
    uStack_400 = param_2[0x22];
    uStack_2f8 = param_2[0x25];
    uStack_300 = param_2[0x24];
    uStack_3e8 = param_2[0x25];
    uStack_3f0 = param_2[0x24];
    uStack_2e8 = param_2[0x27];
    uStack_2f0 = param_2[0x26];
    uStack_448 = param_2[0x19];
    uStack_450 = param_2[0x18];
    uStack_348 = param_2[0x1b];
    uStack_350 = param_2[0x1a];
    uStack_438 = param_2[0x1b];
    uStack_440 = param_2[0x1a];
    uStack_338 = param_2[0x1d];
    uStack_340 = param_2[0x1c];
    uStack_428 = param_2[0x1d];
    uStack_430 = param_2[0x1c];
    uStack_328 = param_2[0x1f];
    uStack_330 = param_2[0x1e];
    uStack_418 = param_2[0x1f];
    uStack_420 = param_2[0x1e];
    uStack_318 = param_2[0x21];
    uStack_320 = param_2[0x20];
    uStack_488 = param_2[0x11];
    uStack_490 = param_2[0x10];
    uStack_388 = param_2[0x13];
    uStack_390 = param_2[0x12];
    uStack_478 = param_2[0x13];
    uStack_480 = param_2[0x12];
    uStack_380 = param_2[0x14];
    uStack_378 = param_2[0x15];
    uStack_470 = param_2[0x14];
    uStack_468 = param_2[0x15];
    uStack_368 = param_2[0x17];
    uStack_370 = param_2[0x16];
    uStack_458 = param_2[0x17];
    uStack_460 = param_2[0x16];
    uStack_358 = param_2[0x19];
    uStack_360 = param_2[0x18];
    uStack_3c8 = param_2[0xb];
    uStack_3d0 = param_2[10];
    uStack_3b8 = param_2[0xd];
    uStack_3c0 = param_2[0xc];
    uStack_3a8 = param_2[0xf];
    uStack_3b0 = param_2[0xe];
    uStack_398 = param_2[0x11];
    uStack_3a0 = param_2[0x10];
    uStack_4b8 = param_2[0xb];
    uStack_4c0 = param_2[10];
    uStack_4a8 = param_2[0xd];
    uStack_4b0 = param_2[0xc];
    uStack_498 = param_2[0xf];
    uStack_4a0 = param_2[0xe];
    uStack_3d8 = param_2[0x27];
    uStack_3e0 = param_2[0x26];
    uStack_4c8 = param_1[0x27];
    uStack_4d0 = param_1[0x26];
    iVar1 = (int)&uStack_5b0;
    FUN_103cde178();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_4c0;
      FUN_103cde178();
      if (iVar1 == 1) {
        uStack_6c8 = uStack_4e8;
        uStack_6d0 = uStack_4f0;
        uStack_6b8 = uStack_4d8;
        uStack_6c0 = uStack_4e0;
        uStack_6a8 = uStack_4c8;
        uStack_6b0 = uStack_4d0;
        uStack_708 = uStack_528;
        uStack_710 = uStack_530;
        uStack_6f8 = uStack_518;
        uStack_700 = uStack_520;
        uStack_6e8 = uStack_508;
        uStack_6f0 = uStack_510;
        uStack_6d8 = uStack_4f8;
        uStack_6e0 = uStack_500;
        uStack_748 = uStack_568;
        uStack_750 = uStack_570;
        uStack_738 = uStack_558;
        uStack_740 = uStack_560;
        uStack_728 = uStack_548;
        uStack_730 = uStack_550;
        uStack_718 = uStack_538;
        uStack_720 = uStack_540;
        uStack_788 = uStack_5a8;
        uStack_790 = uStack_5b0;
        uStack_778 = uStack_598;
        uStack_780 = uStack_5a0;
        uStack_768 = uStack_588;
        uStack_770 = uStack_590;
        uStack_758 = uStack_578;
        uStack_760 = uStack_580;
        func_0x000103cdf08c(&uStack_2e0,&uStack_190,0x113000cf8,&UNK_10dc76ef8);
        func_0x000103cdf08c(&uStack_3d0,&uStack_190,0x113000cf8,&UNK_10dc76ef8);
        FUN_103ce438c(&uStack_790,0x113000cf8,&UNK_10dc76ef8);
LAB_103cdf810:
        uVar5 = *param_1;
        if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
           (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
          uVar5 = param_1[2];
          func_0x000100e25fcc(uVar5,param_1[3],param_2[2],param_2[3]);
          uVar2 = (uint)uVar5;
          goto LAB_103cdf5c8;
        }
      }
      else {
LAB_103cdf664:
        func_0x000107c610b4(&uStack_790,&uStack_5b0,0x1e0);
        func_0x000103cdf08c(&uStack_2e0,&uStack_190,0x113000cf8,&UNK_10dc76ef8);
        func_0x000103cdf08c(&uStack_3d0,&uStack_190,0x113000cf8,&UNK_10dc76ef8);
        FUN_103ce438c(&uStack_790,0x113000d00,&UNK_10dc76f00);
      }
    }
    else {
      uStack_7b8 = uStack_4e8;
      uStack_7c0 = uStack_4f0;
      uStack_7a8 = uStack_4d8;
      uStack_7b0 = uStack_4e0;
      uStack_798 = uStack_4c8;
      uStack_7a0 = uStack_4d0;
      uStack_7f8 = uStack_528;
      uStack_800 = uStack_530;
      uStack_7e8 = uStack_518;
      uStack_7f0 = uStack_520;
      uStack_7d8 = uStack_508;
      uStack_7e0 = uStack_510;
      uStack_7c8 = uStack_4f8;
      uStack_7d0 = uStack_500;
      uStack_838 = uStack_568;
      uStack_840 = uStack_570;
      uStack_828 = uStack_558;
      uStack_830 = uStack_560;
      uStack_818 = uStack_548;
      uStack_820 = uStack_550;
      uStack_808 = uStack_538;
      uStack_810 = uStack_540;
      uStack_878 = uStack_5a8;
      uStack_880 = uStack_5b0;
      uStack_868 = uStack_598;
      uStack_870 = uStack_5a0;
      uStack_858 = uStack_588;
      uStack_860 = uStack_590;
      uStack_848 = uStack_578;
      uStack_850 = uStack_580;
      iVar1 = (int)&uStack_4c0;
      FUN_103cde178();
      if (iVar1 == 1) goto LAB_103cdf664;
      uStack_8a8 = uStack_3f8;
      uStack_8b0 = uStack_400;
      uStack_898 = uStack_3e8;
      uStack_8a0 = uStack_3f0;
      uStack_888 = uStack_3d8;
      uStack_890 = uStack_3e0;
      uStack_8e8 = uStack_438;
      uStack_8f0 = uStack_440;
      uStack_8d8 = uStack_428;
      uStack_8e0 = uStack_430;
      uStack_8c8 = uStack_418;
      uStack_8d0 = uStack_420;
      uStack_8b8 = uStack_408;
      uStack_8c0 = uStack_410;
      uStack_928 = uStack_478;
      uStack_930 = uStack_480;
      uStack_918 = uStack_468;
      uStack_920 = uStack_470;
      uStack_908 = uStack_458;
      uStack_910 = uStack_460;
      uStack_8f8 = uStack_448;
      uStack_900 = uStack_450;
      uStack_968 = uStack_4b8;
      uStack_970 = uStack_4c0;
      uStack_958 = uStack_4a8;
      uStack_960 = uStack_4b0;
      uStack_948 = uStack_498;
      uStack_950 = uStack_4a0;
      uStack_938 = uStack_488;
      uStack_940 = uStack_490;
      uStack_6c8 = uStack_3f8;
      uStack_6d0 = uStack_400;
      uStack_6b8 = uStack_3e8;
      uStack_6c0 = uStack_3f0;
      uStack_6a8 = uStack_3d8;
      uStack_6b0 = uStack_3e0;
      uStack_708 = uStack_438;
      uStack_710 = uStack_440;
      uStack_6f8 = uStack_428;
      uStack_700 = uStack_430;
      uStack_6e8 = uStack_418;
      uStack_6f0 = uStack_420;
      uStack_6d8 = uStack_408;
      uStack_6e0 = uStack_410;
      uStack_748 = uStack_478;
      uStack_750 = uStack_480;
      uStack_738 = uStack_468;
      uStack_740 = uStack_470;
      uStack_728 = uStack_458;
      uStack_730 = uStack_460;
      uStack_718 = uStack_448;
      uStack_720 = uStack_450;
      uStack_788 = uStack_4b8;
      uStack_790 = uStack_4c0;
      uStack_778 = uStack_4a8;
      uStack_780 = uStack_4b0;
      uStack_768 = uStack_498;
      uStack_770 = uStack_4a0;
      uStack_758 = uStack_488;
      uStack_760 = uStack_490;
      uStack_c8 = uStack_7b8;
      uStack_d0 = uStack_7c0;
      uStack_b8 = uStack_7a8;
      uStack_c0 = uStack_7b0;
      uStack_a8 = uStack_798;
      uStack_b0 = uStack_7a0;
      uStack_108 = uStack_7f8;
      uStack_110 = uStack_800;
      uStack_f8 = uStack_7e8;
      uStack_100 = uStack_7f0;
      uStack_d8 = uStack_7c8;
      uStack_e0 = uStack_7d0;
      uStack_e8 = uStack_7d8;
      uStack_f0 = uStack_7e0;
      uStack_148 = uStack_838;
      uStack_150 = uStack_840;
      uStack_138 = uStack_828;
      uStack_140 = uStack_830;
      uStack_118 = uStack_808;
      uStack_120 = uStack_810;
      uStack_128 = uStack_818;
      uStack_130 = uStack_820;
      uStack_188 = uStack_878;
      uStack_190 = uStack_880;
      uStack_178 = uStack_868;
      uStack_180 = uStack_870;
      uStack_158 = uStack_848;
      uStack_160 = uStack_850;
      uStack_168 = uStack_858;
      uStack_170 = uStack_860;
      func_0x000103cdf08c(&uStack_2e0,auStack_a60,0x113000cf8,&UNK_10dc76ef8);
      func_0x000103cdf08c(&uStack_3d0,auStack_a60,0x113000cf8,&UNK_10dc76ef8);
      puVar4 = &uStack_190;
      FUN_103cde888(puVar4,&uStack_790);
      FUN_103ce438c(&uStack_970,0x113000cf8,&UNK_10dc76ef8);
      FUN_103ce438c(&uStack_5b0,0x113000cf8,&UNK_10dc76ef8);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103cdf810;
    }
  }
  uVar2 = 0;
LAB_103cdf5c8:
  return uVar2 & 1;
}



/* Entry: 103cdf844; end: 103cdf943;  */

void FUN_103cdf844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77500;
  func_0x000107c61520(&UNK_10dc77500,&UNK_1106faa00);
  puRam0000000113000f78 = puVar1;
  return;
}



/* Entry: 103cdf944; end: 103cdfa7f;  */

/* WARNING: Possible PIC construction at 0x000103cdf974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cdf978) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cdf944(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
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
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar22 = param_2[4];
  if (*(char *)(param_2 + 5) == '\x01') {
    if (lVar22 < 3) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 1) {
        if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 3) {
      if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 4) {
      if (lVar19 != 4) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 5) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  uVar13 = param_1[6];
  func_0x000103cd8b34(uVar13,*(undefined1 *)(param_1 + 7),param_2[6],*(undefined1 *)(param_2 + 7));
  if ((uVar13 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[8];
  pbVar26 = (byte *)param_1[9];
  lVar19 = param_2[8];
  uVar13 = param_2[9];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar19 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar19 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 != (byte *)0x0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar19);
            func_0x000107c61174();
            pbVar12 = pbVar25;
            func_0x000107c60118();
            func_0x000107c61170(pbVar25);
            func_0x000107c61170(lVar19);
            pbVar25 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar19 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar25 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar14 + 0x20);
        lVar19 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar19;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar22;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
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
      lVar22 = *(long *)(pbVar14 + 0x20);
      lVar19 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar19;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar22;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar22 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cdfa80; end: 103cdfc3f;  */

void FUN_103cdfa80(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc775d8;
  func_0x000107c61520(&UNK_10dc775d8,&UNK_1106faa88);
  puRam0000000113000fa0 = puVar1;
  return;
}



/* Entry: 103cdfc40; end: 103ce010f;  */

uint FUN_103cdfc40(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_450 [96];
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  ulong uStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  ulong uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
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
  long lStack_f8;
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
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar5 = param_1[1];
  lVar6 = param_2[1];
  if ((char)param_2[2] == '\x01') {
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar6 == 2) {
      if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar6 == 3) {
      if (lVar5 != 3) {
        return 0;
      }
    }
    else if (lVar5 != 4) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lVar7 = param_1[3];
  lVar6 = param_2[3];
  lVar5 = *(long *)(lVar7 + 0x10);
  if (lVar5 == *(long *)(lVar6 + 0x10)) {
    if (lVar5 != 0 && lVar7 != lVar6) {
      puVar8 = (undefined8 *)(lVar7 + 0x20);
      puVar9 = (undefined8 *)(lVar6 + 0x20);
      do {
        uStack_e8 = puVar8[1];
        uStack_f0 = *puVar8;
        uStack_d8 = puVar8[3];
        uStack_e0 = puVar8[2];
        uStack_c8 = puVar8[5];
        uStack_d0 = puVar8[4];
        uStack_b8 = puVar8[7];
        uStack_c0 = puVar8[6];
        uStack_a8 = puVar8[9];
        uStack_b0 = puVar8[8];
        uStack_68 = puVar9[7];
        uStack_70 = puVar9[6];
        uStack_58 = puVar9[9];
        uStack_60 = puVar9[8];
        uStack_88 = puVar9[3];
        uStack_90 = puVar9[2];
        uStack_78 = puVar9[5];
        uStack_80 = puVar9[4];
        uStack_98 = puVar9[1];
        uStack_a0 = *puVar9;
        FUN_103ce43d0(&uStack_f0,&lStack_2d0);
        FUN_103ce43d0(&uStack_a0,&lStack_2d0);
        puVar2 = &uStack_f0;
        FUN_103cfc084(puVar2,&uStack_a0);
        func_0x000103ce440c(&uStack_a0);
        func_0x000103ce440c(&uStack_f0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103ce00ec;
        puVar8 = puVar8 + 10;
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 10;
      } while (lVar5 != 0);
    }
    lVar6 = param_1[4];
    lVar7 = param_2[4];
    lVar5 = param_2[5];
    func_0x000103d1d830(lVar6,(char)param_1[5]);
    func_0x000103d1d830(lVar7,(char)lVar5);
    if (lVar6 == lVar7) {
      lStack_2a8 = param_1[0x17];
      lStack_2b0 = param_1[0x16];
      lStack_178 = param_1[0x19];
      lStack_180 = param_1[0x18];
      uStack_2b8 = param_1[0x15];
      lStack_2c0 = param_1[0x14];
      lStack_188 = param_1[0x17];
      lStack_190 = param_1[0x16];
      lStack_298 = param_1[0x19];
      lStack_2a0 = param_1[0x18];
      lStack_168 = param_1[0x1b];
      lStack_170 = param_1[0x1a];
      lStack_288 = param_1[0x1b];
      lStack_290 = param_1[0x1a];
      lStack_158 = param_1[0x1d];
      lStack_160 = param_1[0x1c];
      lStack_1a8 = param_1[0x13];
      lStack_1b0 = param_1[0x12];
      lStack_198 = param_1[0x15];
      lStack_1a0 = param_1[0x14];
      lStack_2c8 = param_1[0x13];
      lStack_2d0 = param_1[0x12];
      lStack_308 = param_2[0x17];
      lStack_310 = param_2[0x16];
      lStack_1d8 = param_2[0x19];
      lStack_1e0 = param_2[0x18];
      uStack_318 = param_2[0x15];
      lStack_320 = param_2[0x14];
      lStack_1e8 = param_2[0x17];
      lStack_1f0 = param_2[0x16];
      lStack_2f8 = param_2[0x19];
      lStack_300 = param_2[0x18];
      lStack_1c8 = param_2[0x1b];
      lStack_1d0 = param_2[0x1a];
      lStack_2e8 = param_2[0x1b];
      lStack_2f0 = param_2[0x1a];
      lStack_1b8 = param_2[0x1d];
      lStack_1c0 = param_2[0x1c];
      lStack_208 = param_2[0x13];
      lStack_210 = param_2[0x12];
      lStack_1f8 = param_2[0x15];
      lStack_200 = param_2[0x14];
      lStack_328 = param_2[0x13];
      lStack_330 = param_2[0x12];
      lStack_278 = param_1[0x1d];
      lStack_280 = param_1[0x1c];
      lStack_2d8 = param_2[0x1d];
      lStack_2e0 = param_2[0x1c];
      lStack_270 = lStack_330;
      lStack_268 = lStack_328;
      lStack_260 = lStack_320;
      uStack_258 = uStack_318;
      lStack_250 = lStack_310;
      lStack_248 = lStack_308;
      lStack_240 = lStack_300;
      lStack_238 = lStack_2f8;
      lStack_230 = lStack_2f0;
      lStack_228 = lStack_2e8;
      lStack_220 = lStack_2e0;
      lStack_218 = lStack_2d8;
      if (uStack_2b8 >> 0x3c < 0xf) {
        if (0xe < uStack_318 >> 0x3c) goto LAB_103cdfeb4;
        lStack_3c8 = param_2[0x17];
        lStack_3d0 = param_2[0x16];
        lStack_3b8 = param_2[0x19];
        lStack_3c0 = param_2[0x18];
        lStack_3a8 = param_2[0x1b];
        lStack_3b0 = param_2[0x1a];
        lStack_398 = param_2[0x1d];
        lStack_3a0 = param_2[0x1c];
        lStack_3e8 = param_2[0x13];
        lStack_3f0 = param_2[0x12];
        lStack_3d8 = param_2[0x15];
        lStack_3e0 = param_2[0x14];
        lStack_128 = param_1[0x17];
        lStack_130 = param_1[0x16];
        lStack_118 = param_1[0x19];
        lStack_120 = param_1[0x18];
        lStack_108 = param_1[0x1b];
        lStack_110 = param_1[0x1a];
        lStack_f8 = param_1[0x1d];
        lStack_100 = param_1[0x1c];
        lStack_148 = param_1[0x13];
        lStack_150 = param_1[0x12];
        lStack_138 = param_1[0x15];
        lStack_140 = param_1[0x14];
        lStack_390 = lStack_3f0;
        lStack_388 = lStack_3e8;
        lStack_380 = lStack_3e0;
        uStack_378 = lStack_3d8;
        lStack_370 = lStack_3d0;
        lStack_368 = lStack_3c8;
        lStack_360 = lStack_3c0;
        lStack_358 = lStack_3b8;
        lStack_350 = lStack_3b0;
        lStack_348 = lStack_3a8;
        lStack_340 = lStack_3a0;
        lStack_338 = lStack_398;
        func_0x000103cdf08c(&lStack_1b0,auStack_450,0x113000f38,&UNK_10dc76f20);
        func_0x000103cdf08c(&lStack_210,auStack_450,0x113000f38,&UNK_10dc76f20);
        plVar3 = &lStack_150;
        FUN_103d03920(plVar3,&lStack_390);
        FUN_103ce438c(&lStack_3f0,0x113000f38,&UNK_10dc76f20);
        FUN_103ce438c(&lStack_2d0,0x113000f38,&UNK_10dc76f20);
        if (((ulong)plVar3 & 1) != 0) goto LAB_103cdffe0;
      }
      else if (uStack_318 >> 0x3c < 0xf) {
LAB_103cdfeb4:
        lStack_390 = lStack_2d0;
        lStack_388 = lStack_2c8;
        lStack_380 = lStack_2c0;
        uStack_378 = uStack_2b8;
        lStack_370 = lStack_2b0;
        lStack_368 = lStack_2a8;
        lStack_360 = lStack_2a0;
        lStack_358 = lStack_298;
        lStack_350 = lStack_290;
        lStack_348 = lStack_288;
        lStack_340 = lStack_280;
        lStack_338 = lStack_278;
        func_0x000103cdf08c(&lStack_1b0,&lStack_150,0x113000f38,&UNK_10dc76f20);
        func_0x000103cdf08c(&lStack_210,&lStack_150,0x113000f38,&UNK_10dc76f20);
        FUN_103ce438c(&lStack_390,0x113000f40,&UNK_10dc7ad80);
      }
      else {
        lStack_368 = param_1[0x17];
        lStack_370 = param_1[0x16];
        lStack_358 = param_1[0x19];
        lStack_360 = param_1[0x18];
        lStack_348 = param_1[0x1b];
        lStack_350 = param_1[0x1a];
        lStack_338 = param_1[0x1d];
        lStack_340 = param_1[0x1c];
        lStack_388 = param_1[0x13];
        lStack_390 = param_1[0x12];
        uStack_378 = param_1[0x15];
        lStack_380 = param_1[0x14];
        func_0x000103cdf08c(&lStack_1b0,&lStack_150,0x113000f38,&UNK_10dc76f20);
        func_0x000103cdf08c(&lStack_210,&lStack_150,0x113000f38,&UNK_10dc76f20);
        FUN_103ce438c(&lStack_390,0x113000f38,&UNK_10dc76f20);
LAB_103cdffe0:
        uVar4 = param_1[6];
        FUN_103cddff8(uVar4,param_2[6]);
        if ((uVar4 & 1) != 0) {
          uVar4 = (ulong)(param_1[7] != 0);
          if ((char)param_1[8] != '\x01') {
            uVar4 = param_1[7];
          }
          if ((char)param_2[8] == '\x01') {
            if (param_2[7] == 0) {
              if (uVar4 == 0) goto LAB_103ce0040;
            }
            else if (uVar4 == 1) {
LAB_103ce0040:
              uVar4 = param_1[9];
              func_0x000101058cd4(uVar4,param_2[9]);
              if ((uVar4 & 1) != 0) {
                uVar4 = param_1[10];
                if (((uVar4 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                   (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
                  uVar4 = param_1[0xc];
                  if (((uVar4 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
                     (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
                    uVar4 = param_1[0xe];
                    if (((uVar4 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
                       (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
                      lVar5 = param_1[0x10];
                      func_0x000100e25fcc(lVar5,param_1[0x11],param_2[0x10],param_2[0x11]);
                      uVar1 = (uint)lVar5;
                      goto LAB_103ce00f0;
                    }
                  }
                }
              }
            }
          }
          else if (uVar4 == param_2[7]) goto LAB_103ce0040;
        }
      }
    }
  }
LAB_103ce00ec:
  uVar1 = 0;
LAB_103ce00f0:
  return uVar1 & 1;
}



/* Entry: 103ce0110; end: 103ce028f;  */

void FUN_103ce0110(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc777b8;
  func_0x000107c61520(&UNK_10dc777b8,&UNK_1106fad50);
  puRam0000000113001000 = puVar1;
  return;
}



/* Entry: 103ce0290; end: 103ce02a3;  */

void FUN_103ce0290(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce02a4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ce02e4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce02a4; end: 103ce034f;  */

void FUN_103ce02a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc76fe0;
  func_0x000107c61520(&UNK_10dc76fe0,&UNK_1106fa8f8);
  puRam0000000113001048 = puVar1;
  return;
}



/* Entry: 103ce0350; end: 103ce0353;  */

void FUN_103ce0350(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77020;
  func_0x000107c61520(&UNK_10dc77020,&UNK_1106fa8f8);
  puRam0000000113001068 = puVar1;
  return;
}



/* Entry: 103ce0354; end: 103ce0393;  */

void FUN_103ce0354(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77020;
  func_0x000107c61520(&UNK_10dc77020,&UNK_1106fa8f8);
  puRam0000000113001068 = puVar1;
  return;
}



/* Entry: 103ce0394; end: 103ce03a7;  */

void FUN_103ce0394(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce03a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ce03e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce03a8; end: 103ce0453;  */

void FUN_103ce03a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc770e0;
  func_0x000107c61520(&UNK_10dc770e0,&UNK_1106fa988);
  puRam0000000113001070 = puVar1;
  return;
}



/* Entry: 103ce0454; end: 103ce0457;  */

void FUN_103ce0454(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77120;
  func_0x000107c61520(&UNK_10dc77120,&UNK_1106fa988);
  puRam0000000113001090 = puVar1;
  return;
}



/* Entry: 103ce0458; end: 103ce0497;  */

void FUN_103ce0458(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77120;
  func_0x000107c61520(&UNK_10dc77120,&UNK_1106fa988);
  puRam0000000113001090 = puVar1;
  return;
}



/* Entry: 103ce0498; end: 103ce04ab;  */

void FUN_103ce0498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce04ac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ce04ec)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce04ac; end: 103ce0557;  */

void FUN_103ce04ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc771e0;
  func_0x000107c61520(&UNK_10dc771e0,&UNK_1106fab30);
  puRam0000000113001098 = puVar1;
  return;
}



/* Entry: 103ce0558; end: 103ce055b;  */

void FUN_103ce0558(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77220;
  func_0x000107c61520(&UNK_10dc77220,&UNK_1106fab30);
  puRam00000001130010b8 = puVar1;
  return;
}



/* Entry: 103ce055c; end: 103ce059b;  */

void FUN_103ce055c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77220;
  func_0x000107c61520(&UNK_10dc77220,&UNK_1106fab30);
  puRam00000001130010b8 = puVar1;
  return;
}



/* Entry: 103ce059c; end: 103ce05af;  */

void FUN_103ce059c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce05b0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ce05f0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce05b0; end: 103ce065b;  */

void FUN_103ce05b0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc772e0;
  func_0x000107c61520(&UNK_10dc772e0,&UNK_1106fabc0);
  puRam00000001130010c0 = puVar1;
  return;
}



/* Entry: 103ce065c; end: 103ce065f;  */

void FUN_103ce065c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77320;
  func_0x000107c61520(&UNK_10dc77320,&UNK_1106fabc0);
  puRam00000001130010e0 = puVar1;
  return;
}



/* Entry: 103ce0660; end: 103ce069f;  */

void FUN_103ce0660(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77320;
  func_0x000107c61520(&UNK_10dc77320,&UNK_1106fabc0);
  puRam00000001130010e0 = puVar1;
  return;
}



/* Entry: 103ce06a0; end: 103ce06b3;  */

void FUN_103ce06a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce06b4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ce06f4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce06b4; end: 103ce075f;  */

void FUN_103ce06b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130010e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc773e0;
  func_0x000107c61520(&UNK_10dc773e0,&UNK_1106fac50);
  puRam00000001130010e8 = puVar1;
  return;
}



/* Entry: 103ce0760; end: 103ce07a3;  */

void FUN_103ce0760(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103ce07a4; end: 103ce07a7;  */

void FUN_103ce07a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77420;
  func_0x000107c61520(&UNK_10dc77420,&UNK_1106fac50);
  puRam0000000113001108 = puVar1;
  return;
}



/* Entry: 103ce07a8; end: 103ce07e7;  */

void FUN_103ce07a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77420;
  func_0x000107c61520(&UNK_10dc77420,&UNK_1106fac50);
  puRam0000000113001108 = puVar1;
  return;
}



/* Entry: 103ce07e8; end: 103ce080b;  */

void FUN_103ce07e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce080c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce080c; end: 103ce084b;  */

void FUN_103ce080c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc774d8;
  func_0x000107c61520(&UNK_10dc774d8,&UNK_1106faa00);
  puRam0000000113001110 = puVar1;
  return;
}



/* Entry: 103ce084c; end: 103ce085f;  */

void FUN_103ce084c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cdf844();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce0860();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0860; end: 103ce089f;  */

void FUN_103ce0860(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc77490;
  func_0x000107c61520(&DAT_10dc77490,&UNK_1106faa00);
  puRam0000000113001118 = puVar1;
  return;
}



/* Entry: 103ce08a0; end: 103ce08a3;  */

void FUN_103ce08a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77540;
  func_0x000107c61520(&UNK_10dc77540,&UNK_1106faa00);
  puRam0000000113001120 = puVar1;
  return;
}



/* Entry: 103ce08a4; end: 103ce08e3;  */

void FUN_103ce08a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77540;
  func_0x000107c61520(&UNK_10dc77540,&UNK_1106faa00);
  puRam0000000113001120 = puVar1;
  return;
}



/* Entry: 103ce08e4; end: 103ce0907;  */

void FUN_103ce08e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0908();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0908; end: 103ce0947;  */

void FUN_103ce0908(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc775b0;
  func_0x000107c61520(&UNK_10dc775b0,&UNK_1106faa88);
  puRam0000000113001128 = puVar1;
  return;
}



/* Entry: 103ce0948; end: 103ce095b;  */

void FUN_103ce0948(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cdfa80();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce095c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce095c; end: 103ce099b;  */

void FUN_103ce095c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc77568;
  func_0x000107c61520(&DAT_10dc77568,&UNK_1106faa88);
  puRam0000000113001130 = puVar1;
  return;
}



/* Entry: 103ce099c; end: 103ce099f;  */

void FUN_103ce099c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77618;
  func_0x000107c61520(&UNK_10dc77618,&UNK_1106faa88);
  puRam0000000113001138 = puVar1;
  return;
}



/* Entry: 103ce09a0; end: 103ce09df;  */

void FUN_103ce09a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77618;
  func_0x000107c61520(&UNK_10dc77618,&UNK_1106faa88);
  puRam0000000113001138 = puVar1;
  return;
}



/* Entry: 103ce09e0; end: 103ce0a03;  */

void FUN_103ce09e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0a04();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0a04; end: 103ce0a43;  */

void FUN_103ce0a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc776b8;
  func_0x000107c61520(&UNK_10dc776b8,&UNK_1106facc8);
  puRam0000000113001140 = puVar1;
  return;
}



/* Entry: 103ce0a44; end: 103ce0a5b;  */

void FUN_103ce0a44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103cdfac0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ccc7cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0a5c; end: 103ce0a9b;  */

void FUN_103ce0a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77720;
  func_0x000107c61520(&UNK_10dc77720,&UNK_1106facc8);
  puRam0000000113001148 = puVar1;
  return;
}



/* Entry: 103ce0a9c; end: 103ce0abf;  */

void FUN_103ce0a9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0ac0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0ac0; end: 103ce0aff;  */

void FUN_103ce0ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77790;
  func_0x000107c61520(&UNK_10dc77790,&UNK_1106fad50);
  puRam0000000113001150 = puVar1;
  return;
}



/* Entry: 103ce0b00; end: 103ce0b13;  */

void FUN_103ce0b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0110();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce0b14();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0b14; end: 103ce0b53;  */

void FUN_103ce0b14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc77748;
  func_0x000107c61520(&DAT_10dc77748,&UNK_1106fad50);
  puRam0000000113001158 = puVar1;
  return;
}



/* Entry: 103ce0b54; end: 103ce0b57;  */

void FUN_103ce0b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc777f8;
  func_0x000107c61520(&UNK_10dc777f8,&UNK_1106fad50);
  puRam0000000113001160 = puVar1;
  return;
}



/* Entry: 103ce0b58; end: 103ce0b97;  */

void FUN_103ce0b58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc777f8;
  func_0x000107c61520(&UNK_10dc777f8,&UNK_1106fad50);
  puRam0000000113001160 = puVar1;
  return;
}



/* Entry: 103ce0b98; end: 103ce0bbb;  */

void FUN_103ce0b98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0bbc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0bbc; end: 103ce0bfb;  */

void FUN_103ce0bbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77868;
  func_0x000107c61520(&UNK_10dc77868,&UNK_1106fadf8);
  puRam0000000113001168 = puVar1;
  return;
}



/* Entry: 103ce0bfc; end: 103ce0c0f;  */

void FUN_103ce0bfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103ce0190)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce0c10();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0c10; end: 103ce0c4f;  */

void FUN_103ce0c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc77820;
  func_0x000107c61520(&DAT_10dc77820,&UNK_1106fadf8);
  puRam0000000113001170 = puVar1;
  return;
}



/* Entry: 103ce0c50; end: 103ce0c53;  */

void FUN_103ce0c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc778d0;
  func_0x000107c61520(&UNK_10dc778d0,&UNK_1106fadf8);
  puRam0000000113001178 = puVar1;
  return;
}



/* Entry: 103ce0c54; end: 103ce0c93;  */

void FUN_103ce0c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc778d0;
  func_0x000107c61520(&UNK_10dc778d0,&UNK_1106fadf8);
  puRam0000000113001178 = puVar1;
  return;
}



/* Entry: 103ce0c94; end: 103ce0cb7;  */

void FUN_103ce0c94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0cb8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0cb8; end: 103ce0cf7;  */

void FUN_103ce0cb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77940;
  func_0x000107c61520(&UNK_10dc77940,&UNK_1106faf10);
  puRam0000000113001180 = puVar1;
  return;
}



/* Entry: 103ce0cf8; end: 103ce0d0b;  */

void FUN_103ce0cf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103ce0210)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce0d0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0d0c; end: 103ce0d4b;  */

void FUN_103ce0d0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc778f8;
  func_0x000107c61520(&DAT_10dc778f8,&UNK_1106faf10);
  puRam0000000113001188 = puVar1;
  return;
}



/* Entry: 103ce0d4c; end: 103ce0d4f;  */

void FUN_103ce0d4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc779a8;
  func_0x000107c61520(&UNK_10dc779a8,&UNK_1106faf10);
  puRam0000000113001190 = puVar1;
  return;
}



/* Entry: 103ce0d50; end: 103ce0d8f;  */

void FUN_103ce0d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc779a8;
  func_0x000107c61520(&UNK_10dc779a8,&UNK_1106faf10);
  puRam0000000113001190 = puVar1;
  return;
}



/* Entry: 103ce0d90; end: 103ce0db3;  */

void FUN_103ce0d90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ce0db4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103ce0db4; end: 103ce0df3;  */

void FUN_103ce0db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77a18;
  func_0x000107c61520(&UNK_10dc77a18,&UNK_1106fafa0);
  puRam0000000113001198 = puVar1;
  return;
}



/* Entry: 103ce0df4; end: 103ce0e07;  */

void FUN_103ce0df4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103ce0250)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ce0e38();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0e08; end: 103ce0e37;  */

void FUN_103ce0e08(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ce0e38; end: 103ce0e77;  */

void FUN_103ce0e38(void)

{
  undefined *puVar1;
  
  if (puRam00000001130011a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc779d0;
  func_0x000107c61520(&DAT_10dc779d0,&UNK_1106fafa0);
  puRam00000001130011a0 = puVar1;
  return;
}



/* Entry: 103ce0e78; end: 103ce0e7b;  */

void FUN_103ce0e78(void)

{
  undefined *puVar1;
  
  if (puRam00000001130011a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77a80;
  func_0x000107c61520(&UNK_10dc77a80,&UNK_1106fafa0);
  puRam00000001130011a8 = puVar1;
  return;
}



/* Entry: 103ce0e7c; end: 103ce0ebb;  */

void FUN_103ce0e7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130011a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc77a80;
  func_0x000107c61520(&UNK_10dc77a80,&UNK_1106fafa0);
  puRam00000001130011a8 = puVar1;
  return;
}



/* Entry: 103ce0ebc; end: 103ce0ee3;  */

void FUN_103ce0ebc(void)

{
  return;
}



/* Entry: 103ce0ee4; end: 103ce10db;  */

/* WARNING: Possible PIC construction at 0x000103ce0f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce0fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce10a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce10b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ce10a4) */
/* WARNING: Removing unreachable block (ram,0x000103ce1094) */
/* WARNING: Removing unreachable block (ram,0x000103ce1084) */
/* WARNING: Removing unreachable block (ram,0x000103ce0fa4) */
/* WARNING: Removing unreachable block (ram,0x000103ce1034) */
/* WARNING: Removing unreachable block (ram,0x000103ce10d8) */
/* WARNING: Removing unreachable block (ram,0x000103ce1038) */
/* WARNING: Removing unreachable block (ram,0x000103ce0f90) */
/* WARNING: Removing unreachable block (ram,0x000103ce10b4) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_103ce0ee4(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x7;
  uint uVar1;
  
  uVar1 = (uint)((ulong)in_x7 >> 0x3c) & 3;
  if ((1 < uVar1) && (uVar1 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103ce10dc; end: 103ce11b7;  */

/* WARNING: Possible PIC construction at 0x000103ce10fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce111c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ce1120) */
/* WARNING: Removing unreachable block (ram,0x000103ce1100) */
/* WARNING: Removing unreachable block (ram,0x000103ce1128) */
/* WARNING: Removing unreachable block (ram,0x000103ce1140) */
/* WARNING: Removing unreachable block (ram,0x000103ce1144) */
/* WARNING: Removing unreachable block (ram,0x000103ce11a8) */
/* WARNING: Removing unreachable block (ram,0x000103ce1148) */
/* WARNING: Removing unreachable block (ram,0x000103ce1150) */
/* WARNING: Removing unreachable block (ram,0x000103ce1154) */
/* WARNING: Removing unreachable block (ram,0x000103ce1158) */
/* WARNING: Removing unreachable block (ram,0x000103ce1194) */
/* WARNING: Removing unreachable block (ram,0x000103ce1110) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ce10dc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103ce11b8; end: 103ce1cff;  */

/* WARNING: Possible PIC construction at 0x000103ce1260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce1384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ce1378) */
/* WARNING: Removing unreachable block (ram,0x000103ce1368) */
/* WARNING: Removing unreachable block (ram,0x000103ce1358) */
/* WARNING: Removing unreachable block (ram,0x000103ce1278) */
/* WARNING: Removing unreachable block (ram,0x000103ce1308) */
/* WARNING: Removing unreachable block (ram,0x000103ce13ac) */
/* WARNING: Removing unreachable block (ram,0x000103ce130c) */
/* WARNING: Removing unreachable block (ram,0x000103ce1264) */
/* WARNING: Removing unreachable block (ram,0x000103ce1388) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_103ce11b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x7;
  uint uVar1;
  
  uVar1 = (uint)((ulong)in_x7 >> 0x3c) & 3;
  if ((1 < uVar1) && (uVar1 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103ce1d00; end: 103ce1f93;  */

undefined8 FUN_103ce1d00(undefined8 param_1)

{
  FUN_103ce2314(param_1,&UNK_1106facc8);
  return param_1;
}



/* Entry: 103ce1f94; end: 103ce207f;  */

int FUN_103ce1f94(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x50] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ce2080; end: 103ce20a7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ce2080(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x48) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x48) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103ce20a8; end: 103ce21b7;  */

undefined8 * FUN_103ce20a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  return param_1;
}



/* Entry: 103ce21b8; end: 103ce222b;  */

undefined8 * FUN_103ce21b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103ce222c; end: 103ce2313;  */

int FUN_103ce222c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ce2314; end: 103ce2347;  */

/* WARNING: Possible PIC construction at 0x000103ce232c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ce2330) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ce2314(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103ce2348; end: 103ce242f;  */

undefined8 * FUN_103ce2348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 103ce2430; end: 103ce2487;  */

undefined8 * FUN_103ce2430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103ce2488; end: 103ce2547;  */

int FUN_103ce2488(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ce2548; end: 103ce25eb;  */

/* WARNING: Possible PIC construction at 0x000103ce258c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ce25bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ce2590) */
/* WARNING: Removing unreachable block (ram,0x000103ce25a0) */
/* WARNING: Removing unreachable block (ram,0x000103ce25c0) */
/* WARNING: Removing unreachable block (ram,0x000103ce25dc) */
/* WARNING: Removing unreachable block (ram,0x000103ce25d0) */
/* WARNING: Removing unreachable block (ram,0x000103ce25b8) */

void FUN_103ce2548(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(ulong *)(param_1 + 0x88);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103ce25ec; end: 103ce278f;  */

undefined8 * FUN_103ce25ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar5 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar5;
  param_1[7] = uVar7;
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  uVar8 = param_2[0xb];
  uVar1 = param_2[0xc];
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  uVar2 = param_2[0xf];
  uVar3 = param_2[0x10];
  param_1[0xf] = uVar2;
  uVar6 = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar3,uVar6);
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar6;
  uVar4 = param_2[0x15];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    uVar5 = param_2[0x14];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar4;
    uVar4 = param_2[0x19];
    if (uVar4 >> 0x3c < 0xf) {
      param_1[0x16] = param_2[0x16];
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar5 = param_2[0x18];
      func_0x00010006c00c(uVar5,uVar4);
      param_1[0x18] = uVar5;
      param_1[0x19] = uVar4;
    }
    else {
      uVar5 = param_2[0x16];
      uVar8 = param_2[0x19];
      uVar7 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar5;
      param_1[0x19] = uVar8;
      param_1[0x18] = uVar7;
    }
    uVar4 = param_2[0x1d];
    if (uVar4 >> 0x3c < 0xf) {
      param_1[0x1a] = param_2[0x1a];
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar5 = param_2[0x1c];
      func_0x00010006c00c(uVar5,uVar4);
      param_1[0x1c] = uVar5;
      param_1[0x1d] = uVar4;
    }
    else {
      uVar5 = param_2[0x1a];
      uVar8 = param_2[0x1d];
      uVar7 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar5;
      param_1[0x1d] = uVar8;
      param_1[0x1c] = uVar7;
    }
  }
  else {
    uVar5 = param_2[0x16];
    uVar8 = param_2[0x19];
    uVar7 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar7;
    uVar5 = param_2[0x1a];
    uVar8 = param_2[0x1d];
    uVar7 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1d] = uVar8;
    param_1[0x1c] = uVar7;
    uVar5 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar7;
  }
  return param_1;
}



/* Entry: 103ce2790; end: 103ce2af3;  */

undefined8 * FUN_103ce2790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x11];
  func_0x00010006c00c(uVar1,uVar4);
  uVar3 = param_1[0x10];
  uVar5 = param_1[0x11];
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar4;
  func_0x00010006c090(uVar3,uVar5);
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    if (0xe < (ulong)param_2[0x15] >> 0x3c) {
      FUN_103cdee9c(param_1 + 0x12);
      uVar4 = param_2[0x12];
      uVar3 = param_2[0x15];
      uVar1 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      param_1[0x15] = uVar3;
      param_1[0x14] = uVar1;
      uVar1 = param_2[0x1a];
      uVar4 = param_2[0x1d];
      uVar3 = param_2[0x1c];
      uVar8 = param_2[0x17];
      uVar7 = param_2[0x16];
      uVar6 = param_2[0x19];
      uVar5 = param_2[0x18];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar1;
      param_1[0x1d] = uVar4;
      param_1[0x1c] = uVar3;
      param_1[0x17] = uVar8;
      param_1[0x16] = uVar7;
      param_1[0x19] = uVar6;
      param_1[0x18] = uVar5;
      return param_1;
    }
    uVar1 = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x12] = uVar1;
    uVar1 = param_2[0x14];
    uVar4 = param_2[0x15];
    func_0x00010006c00c(uVar1,uVar4);
    uVar3 = param_1[0x14];
    uVar5 = param_1[0x15];
    param_1[0x14] = uVar1;
    param_1[0x15] = uVar4;
    func_0x00010006c090(uVar3,uVar5);
    if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
        param_1[0x16] = param_2[0x16];
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar1 = param_2[0x18];
        uVar4 = param_2[0x19];
        func_0x00010006c00c(uVar1,uVar4);
        uVar3 = param_1[0x18];
        uVar5 = param_1[0x19];
        param_1[0x18] = uVar1;
        param_1[0x19] = uVar4;
        func_0x00010006c090(uVar3,uVar5);
      }
      else {
        func_0x0001015ef434(param_1 + 0x16);
        uVar4 = param_2[0x16];
        uVar3 = param_2[0x19];
        uVar1 = param_2[0x18];
        param_1[0x17] = param_2[0x17];
        param_1[0x16] = uVar4;
        param_1[0x19] = uVar3;
        param_1[0x18] = uVar1;
      }
    }
    else if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
      param_1[0x16] = param_2[0x16];
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_2[0x18];
      uVar3 = param_2[0x19];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0x18] = uVar1;
      param_1[0x19] = uVar3;
    }
    else {
      uVar1 = param_2[0x16];
      uVar4 = param_2[0x19];
      uVar3 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar1;
      param_1[0x19] = uVar4;
      param_1[0x18] = uVar3;
    }
    uVar2 = (ulong)param_2[0x1d] >> 0x3c;
    if ((ulong)param_1[0x1d] >> 0x3c < 0xf) {
      if (0xe < uVar2) {
        func_0x0001015ef434(param_1 + 0x1a);
        uVar4 = param_2[0x1a];
        uVar3 = param_2[0x1d];
        uVar1 = param_2[0x1c];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = uVar4;
        param_1[0x1d] = uVar3;
        param_1[0x1c] = uVar1;
        return param_1;
      }
      param_1[0x1a] = param_2[0x1a];
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar1 = param_2[0x1c];
      uVar4 = param_2[0x1d];
      func_0x00010006c00c(uVar1,uVar4);
      uVar3 = param_1[0x1c];
      uVar5 = param_1[0x1d];
      param_1[0x1c] = uVar1;
      param_1[0x1d] = uVar4;
      func_0x00010006c090(uVar3,uVar5);
      return param_1;
    }
  }
  else {
    if (0xe < (ulong)param_2[0x15] >> 0x3c) {
      uVar1 = param_2[0x12];
      uVar4 = param_2[0x15];
      uVar3 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar1;
      param_1[0x15] = uVar4;
      param_1[0x14] = uVar3;
      uVar3 = param_2[0x17];
      uVar1 = param_2[0x16];
      uVar5 = param_2[0x19];
      uVar4 = param_2[0x18];
      uVar6 = param_2[0x1a];
      uVar8 = param_2[0x1d];
      uVar7 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar6;
      param_1[0x1d] = uVar8;
      param_1[0x1c] = uVar7;
      param_1[0x17] = uVar3;
      param_1[0x16] = uVar1;
      param_1[0x19] = uVar5;
      param_1[0x18] = uVar4;
      return param_1;
    }
    uVar1 = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x12] = uVar1;
    uVar1 = param_2[0x14];
    uVar3 = param_2[0x15];
    func_0x00010006c00c(uVar1,uVar3);
    param_1[0x14] = uVar1;
    param_1[0x15] = uVar3;
    if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
      param_1[0x16] = param_2[0x16];
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_2[0x18];
      uVar3 = param_2[0x19];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0x18] = uVar1;
      param_1[0x19] = uVar3;
    }
    else {
      uVar1 = param_2[0x16];
      uVar4 = param_2[0x19];
      uVar3 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar1;
      param_1[0x19] = uVar4;
      param_1[0x18] = uVar3;
    }
    uVar2 = (ulong)param_2[0x1d] >> 0x3c;
  }
  if (uVar2 < 0xf) {
    param_1[0x1a] = param_2[0x1a];
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
    uVar1 = param_2[0x1c];
    uVar3 = param_2[0x1d];
    func_0x00010006c00c(uVar1,uVar3);
    param_1[0x1c] = uVar1;
    param_1[0x1d] = uVar3;
  }
  else {
    uVar1 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar3 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar1;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar3;
  }
  return param_1;
}



/* Entry: 103ce2af4; end: 103ce2cc3;  */

undefined8 * FUN_103ce2af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (0xe < (ulong)param_1[0x15] >> 0x3c) {
LAB_103ce2bd0:
    uVar1 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar2;
    uVar1 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar2 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar1;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar2;
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar2;
    return param_1;
  }
  uVar3 = param_2[0x15];
  if (0xe < uVar3 >> 0x3c) {
    FUN_103cdee9c(param_1 + 0x12);
    goto LAB_103ce2bd0;
  }
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
    uVar3 = param_2[0x19];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x16] = param_2[0x16];
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_1[0x18];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103ce2c6c;
    }
    func_0x0001015ef434(param_1 + 0x16);
  }
  uVar1 = param_2[0x16];
  uVar4 = param_2[0x19];
  uVar2 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar2;
LAB_103ce2c6c:
  if ((ulong)param_1[0x1d] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1d];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x1a] = param_2[0x1a];
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar1 = param_1[0x1c];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1d] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 0x1a);
  }
  uVar1 = param_2[0x1a];
  uVar4 = param_2[0x1d];
  uVar2 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_1[0x1d] = uVar4;
  param_1[0x1c] = uVar2;
  return param_1;
}



/* Entry: 103ce2cc4; end: 103ce2d97;  */

int FUN_103ce2cc4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x3c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ce2d98; end: 103ce2e17;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ce2d98(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((ulong)param_1[5] >> 1 != 0xffffffff || (param_1[7] & 0x3000000000000000) != 0) {
    FUN_103ce11b8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                  param_1[0x13],param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],
                  param_1[0x18],param_1[0x19]);
  }
  uVar1 = param_1[0x1c];
  uVar2 = (uint)((ulong)param_1[0x1d] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x1d] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103ce2e18; end: 103ce333b;  */

undefined8 * FUN_103ce2e18(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar23 = param_2[5];
  uVar22 = param_2[7];
  if (uVar23 >> 1 == 0xffffffff && (uVar22 & 0x3000000000000000) == 0) {
    uVar24 = param_2[0x14];
    uVar26 = param_2[0x17];
    uVar25 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar24;
    param_1[0x17] = uVar26;
    param_1[0x16] = uVar25;
    uVar24 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar24;
    uVar24 = param_2[0xc];
    uVar26 = param_2[0xf];
    uVar25 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar24;
    param_1[0xf] = uVar26;
    param_1[0xe] = uVar25;
    uVar26 = param_2[0x10];
    uVar25 = param_2[0x13];
    uVar24 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar26;
    param_1[0x13] = uVar25;
    param_1[0x12] = uVar24;
    uVar24 = param_2[4];
    uVar26 = param_2[7];
    uVar25 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar24;
    param_1[7] = uVar26;
    param_1[6] = uVar25;
    uVar26 = param_2[8];
    uVar25 = param_2[0xb];
    uVar24 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar26;
    param_1[0xb] = uVar25;
    param_1[10] = uVar24;
    uVar26 = *param_2;
    uVar25 = param_2[3];
    uVar24 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar26;
    param_1[3] = uVar25;
    param_1[2] = uVar24;
  }
  else {
    uVar24 = *param_2;
    uVar9 = param_2[1];
    uVar25 = param_2[2];
    uVar10 = param_2[3];
    uVar20 = param_2[4];
    uVar21 = param_2[6];
    uVar26 = param_2[8];
    uVar11 = param_2[9];
    uVar1 = param_2[10];
    uVar12 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar3 = param_2[0xe];
    uVar14 = param_2[0xf];
    uVar4 = param_2[0x10];
    uVar15 = param_2[0x11];
    uVar5 = param_2[0x12];
    uVar16 = param_2[0x13];
    uVar6 = param_2[0x14];
    uVar17 = param_2[0x15];
    uVar7 = param_2[0x16];
    uVar18 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar19 = param_2[0x19];
    FUN_103ce0ee4();
    *param_1 = uVar24;
    param_1[1] = uVar9;
    param_1[2] = uVar25;
    param_1[3] = uVar10;
    param_1[4] = uVar20;
    param_1[5] = uVar23;
    param_1[6] = uVar21;
    param_1[7] = uVar22;
    param_1[8] = uVar26;
    param_1[9] = uVar11;
    param_1[10] = uVar1;
    param_1[0xb] = uVar12;
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar14;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar15;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar16;
    param_1[0x14] = uVar6;
    param_1[0x15] = uVar17;
    param_1[0x16] = uVar7;
    param_1[0x17] = uVar18;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar19;
  }
  param_1[0x1a] = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  uVar24 = param_2[0x1c];
  uVar25 = param_2[0x1d];
  func_0x00010006c00c(uVar24,uVar25);
  param_1[0x1c] = uVar24;
  param_1[0x1d] = uVar25;
  return param_1;
}



/* Entry: 103ce333c; end: 103ce347f;  */

undefined8 * FUN_103ce333c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  uVar5 = param_1[5];
  uVar7 = param_1[7];
  if (uVar5 >> 1 != 0xffffffff || (uVar7 & 0x3000000000000000) != 0) {
    uVar9 = param_2[5];
    uVar8 = param_2[7];
    if (uVar9 >> 1 != 0xffffffff || (uVar8 & 0x3000000000000000) != 0) {
      uVar10 = param_2[4];
      uVar11 = param_2[6];
      uVar13 = *param_1;
      uVar1 = param_1[1];
      uVar16 = param_1[2];
      uVar2 = param_1[3];
      uVar4 = param_1[4];
      uVar6 = param_1[6];
      uVar15 = param_1[9];
      uVar12 = param_1[8];
      uVar18 = param_1[0xb];
      uVar17 = param_1[10];
      uVar20 = param_1[0xd];
      uVar19 = param_1[0xc];
      uVar22 = param_1[0xf];
      uVar21 = param_1[0xe];
      uVar24 = param_1[0x11];
      uVar23 = param_1[0x10];
      uVar26 = param_1[0x13];
      uVar25 = param_1[0x12];
      uVar28 = param_1[0x15];
      uVar27 = param_1[0x14];
      uVar30 = param_1[0x17];
      uVar29 = param_1[0x16];
      uVar14 = param_1[0x18];
      uVar3 = param_1[0x19];
      uVar31 = *param_2;
      uVar33 = param_2[3];
      uVar32 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar31;
      param_1[3] = uVar33;
      param_1[2] = uVar32;
      param_1[4] = uVar10;
      param_1[5] = uVar9;
      param_1[6] = uVar11;
      param_1[7] = uVar8;
      uVar10 = param_2[8];
      uVar31 = param_2[0xb];
      uVar11 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar10;
      param_1[0xb] = uVar31;
      param_1[10] = uVar11;
      uVar10 = param_2[0xc];
      uVar31 = param_2[0xf];
      uVar11 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar10;
      param_1[0xf] = uVar31;
      param_1[0xe] = uVar11;
      uVar10 = param_2[0x10];
      uVar31 = param_2[0x13];
      uVar11 = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar10;
      param_1[0x13] = uVar31;
      param_1[0x12] = uVar11;
      uVar10 = param_2[0x14];
      uVar31 = param_2[0x17];
      uVar11 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar10;
      param_1[0x17] = uVar31;
      param_1[0x16] = uVar11;
      uVar10 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar10;
      FUN_103ce11b8(uVar13,uVar1,uVar16,uVar2,uVar4,uVar5,uVar6,uVar7,uVar12,uVar15,uVar17,uVar18,
                    uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,
                    uVar30,uVar14,uVar3);
      goto LAB_103ce344c;
    }
    func_0x000103ce1d2c(param_1);
  }
  uVar13 = param_2[0x14];
  uVar14 = param_2[0x17];
  uVar16 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar13;
  param_1[0x17] = uVar14;
  param_1[0x16] = uVar16;
  uVar13 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar13;
  uVar13 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar16 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar13;
  param_1[0xf] = uVar14;
  param_1[0xe] = uVar16;
  uVar14 = param_2[0x10];
  uVar16 = param_2[0x13];
  uVar13 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar14;
  param_1[0x13] = uVar16;
  param_1[0x12] = uVar13;
  uVar13 = param_2[4];
  uVar14 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar14;
  param_1[6] = uVar16;
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar13 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar14;
  param_1[0xb] = uVar16;
  param_1[10] = uVar13;
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[3] = uVar16;
  param_1[2] = uVar13;
LAB_103ce344c:
  param_1[0x1a] = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  uVar13 = param_1[0x1c];
  uVar16 = param_1[0x1d];
  uVar14 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar14;
  func_0x00010006c090(uVar13,uVar16);
  return param_1;
}



/* Entry: 103ce3480; end: 103ce35a3;  */

int FUN_103ce3480(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = (uint)(*(ulong *)(param_1 + 10) >> 1);
  uVar1 = -uVar2 - 2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 < 0x80000001) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ce35a4; end: 103ce35fb;  */

void FUN_103ce35a4(undefined8 *param_1)

{
  FUN_103ce11b8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19])
  ;
  return;
}


