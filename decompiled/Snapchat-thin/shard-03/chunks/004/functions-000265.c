/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10281328c; end: 102813e2f;  */

uint FUN_10281328c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d0 [32];
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar17 = param_1[5];
  lVar15 = param_1[4];
  uVar4 = param_1[6];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar18 = param_2[5];
  lVar16 = param_2[4];
  uVar8 = param_2[6];
  uStack_110 = uVar10;
  uStack_108 = uVar12;
  lStack_100 = lVar16;
  uStack_f8 = uVar18;
  uStack_f0 = uVar8;
  uStack_e0 = uVar9;
  uStack_d8 = uVar11;
  lStack_d0 = lVar15;
  uStack_c8 = uVar17;
  uStack_c0 = uVar4;
  if (lVar15 == 0) {
    if (lVar16 != 0) goto LAB_102813390;
    FUN_1028131b4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_1028131b4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar9,uVar11,0,uVar17,uVar4);
LAB_102813458:
    uVar13 = param_1[8];
    uVar4 = param_1[7];
    uVar5 = param_1[9];
    uVar14 = param_2[8];
    uVar8 = param_2[7];
    uVar7 = param_2[9];
    uStack_150 = uVar8;
    uStack_148 = uVar14;
    uStack_140 = uVar7;
    uStack_130 = uVar4;
    uStack_128 = uVar13;
    uStack_120 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_102813658;
      if ((int)uVar4 == (int)uVar8) {
        FUN_1028131b4(&uStack_130,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        FUN_1028131b4(&uStack_150,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        uVar3 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar7);
        func_0x0001015dc5d0(uVar8,uVar14,uVar7);
        if ((uVar3 & 1) != 0) goto LAB_1028134d8;
      }
      else {
        FUN_1028131b4(&uStack_130,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        puVar2 = &uStack_150;
LAB_1028137cc:
        FUN_1028131b4(puVar2,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        func_0x0001015dc5d0(uVar8,uVar14,uVar7);
      }
    }
    else {
      if (0xe < uVar7 >> 0x3c) {
        FUN_1028131b4(&uStack_130,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        FUN_1028131b4(&uStack_150,&uStack_200,0x112db80f8,&UNK_10d9671e0);
LAB_1028134d8:
        func_0x0001015dc5d0(uVar4,uVar13,uVar5);
        uVar13 = param_1[0xb];
        uVar4 = param_1[10];
        uVar5 = param_1[0xc];
        uVar14 = param_2[0xb];
        uVar8 = param_2[10];
        uVar7 = param_2[0xc];
        uStack_190 = uVar8;
        uStack_188 = uVar14;
        uStack_180 = uVar7;
        uStack_170 = uVar4;
        uStack_168 = uVar13;
        uStack_160 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar7 >> 0x3c) goto LAB_102813700;
          if ((int)uVar4 != (int)uVar8) {
            FUN_1028131b4(&uStack_170,&uStack_200,0x112db80f8,&UNK_10d9671e0);
            puVar2 = &uStack_190;
            goto LAB_1028137cc;
          }
          FUN_1028131b4(&uStack_170,&uStack_200,0x112db80f8,&UNK_10d9671e0);
          FUN_1028131b4(&uStack_190,&uStack_200,0x112db80f8,&UNK_10d9671e0);
          uVar3 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar7);
          func_0x0001015dc5d0(uVar8,uVar14,uVar7);
          if ((uVar3 & 1) == 0) goto LAB_1028137f8;
        }
        else {
          if (uVar7 >> 0x3c < 0xf) {
LAB_102813700:
            FUN_1028131b4(&uStack_170,&uStack_200,0x112db80f8,&UNK_10d9671e0);
            puVar2 = &uStack_190;
            uVar3 = uVar5;
            uVar6 = uVar13;
            uVar9 = uVar4;
            uVar5 = uVar7;
            uVar13 = uVar14;
            uVar4 = uVar8;
            goto LAB_102813720;
          }
          FUN_1028131b4(&uStack_170,&uStack_200,0x112db80f8,&UNK_10d9671e0);
          FUN_1028131b4(&uStack_190,&uStack_200,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(uVar4,uVar13,uVar5);
        lVar15 = param_1[0xe];
        uVar5 = param_1[0xd];
        uVar4 = param_1[0x10];
        uVar13 = param_1[0xf];
        lVar16 = param_2[0xe];
        uVar7 = param_2[0xd];
        uVar8 = param_2[0x10];
        uVar14 = param_2[0xf];
        uStack_200 = uVar5;
        lStack_1f8 = lVar15;
        uStack_1f0 = uVar13;
        uStack_1e8 = uVar4;
        uStack_1b0 = uVar7;
        lStack_1a8 = lVar16;
        uStack_1a0 = uVar14;
        uStack_198 = uVar8;
        if (lVar15 == 0) {
          if (lVar16 == 0) {
            FUN_1028131b4(&uStack_200,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
            FUN_1028131b4(&uStack_1b0,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
LAB_1028138d4:
            func_0x000101597ae4(uVar5,lVar15,uVar13,uVar4);
            uVar4 = *param_1;
            func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
            uVar1 = (uint)uVar4;
            goto LAB_102813800;
          }
LAB_102813828:
          FUN_1028131b4(&uStack_200,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
          FUN_1028131b4(&uStack_1b0,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar5,lVar15,uVar13,uVar4);
          uVar5 = uVar7;
          lVar15 = lVar16;
          uVar13 = uVar14;
          uVar4 = uVar8;
        }
        else {
          if (lVar16 == 0) goto LAB_102813828;
          if (((uVar5 == uVar7) && (lVar15 == lVar16)) ||
             (uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar15,uVar7,lVar16,0), (uVar3 & 1) != 0)) {
            FUN_1028131b4(&uStack_200,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
            FUN_1028131b4(&uStack_1b0,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
            uVar3 = uVar13;
            func_0x000100e25fcc(uVar13,uVar4,uVar14,uVar8);
            func_0x000101597ae4(uVar7,lVar16,uVar14,uVar8);
            if ((uVar3 & 1) != 0) goto LAB_1028138d4;
          }
          else {
            FUN_1028131b4(&uStack_200,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
            FUN_1028131b4(&uStack_1b0,auStack_1d0,0x112db6f40,&UNK_10d9681d0);
            func_0x000101597ae4(uVar7,lVar16,uVar14,uVar8);
          }
        }
        func_0x000101597ae4(uVar5,lVar15,uVar13,uVar4);
        goto LAB_1028137fc;
      }
LAB_102813658:
      FUN_1028131b4(&uStack_130,&uStack_200,0x112db80f8,&UNK_10d9671e0);
      puVar2 = &uStack_150;
      uVar3 = uVar5;
      uVar6 = uVar13;
      uVar9 = uVar4;
      uVar5 = uVar7;
      uVar13 = uVar14;
      uVar4 = uVar8;
LAB_102813720:
      FUN_1028131b4(puVar2,&uStack_200,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar9,uVar6,uVar3);
    }
LAB_1028137f8:
    func_0x0001015dc5d0(uVar4,uVar13,uVar5);
  }
  else if (lVar16 == 0) {
LAB_102813390:
    FUN_1028131b4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_1028131b4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar9,uVar11,lVar15,uVar17,uVar4);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar8);
  }
  else {
    uStack_88 = (undefined1)uVar12;
    uStack_b0 = (undefined1)uVar11;
    uStack_b8 = uVar9;
    lStack_a8 = lVar15;
    uStack_a0 = uVar17;
    uStack_98 = uVar4;
    uStack_90 = uVar10;
    lStack_80 = lVar16;
    uStack_78 = uVar18;
    uStack_70 = uVar8;
    FUN_1028131b4(&uStack_e0,&uStack_200,0x112db8098,&UNK_10d966ff0);
    FUN_1028131b4(&uStack_110,&uStack_200,0x112db8098,&UNK_10d966ff0);
    puVar2 = &uStack_b8;
    func_0x00010368c758(puVar2,&uStack_90);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar8);
    func_0x000101553bdc(uVar9,uVar11,lVar15,uVar17,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_102813458;
  }
LAB_1028137fc:
  uVar1 = 0;
LAB_102813800:
  return uVar1 & 1;
}



/* Entry: 102813e30; end: 102813eaf;  */

void FUN_102813e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec31f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2f38;
  func_0x000107c61520(&UNK_10dae2f38,&UNK_110552ca8);
  puRam0000000112ec31f0 = puVar1;
  return;
}



/* Entry: 102813eb0; end: 102814503;  */

uint FUN_102813eb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
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
  undefined8 uStack_770;
  undefined8 uStack_768;
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
  undefined8 uStack_4b0;
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
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
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
  undefined8 uVar3;
  
  puVar5 = (undefined8 *)0x0;
  uStack_2a8 = param_1[0xb];
  uStack_2b0 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_298 = param_1[0xd];
  uStack_2a0 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_2e8 = param_1[3];
  uStack_2f0 = param_1[2];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_2d8 = param_1[5];
  uStack_2e0 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_2c8 = param_1[7];
  uStack_2d0 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_2b8 = param_1[9];
  uStack_2c0 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_2f8 = param_1[1];
  uStack_300 = *param_1;
  uStack_220 = param_2[0xb];
  uStack_228 = param_2[10];
  uStack_188 = param_2[0xd];
  uStack_190 = param_2[0xc];
  uStack_210 = param_2[0xd];
  uStack_218 = param_2[0xc];
  uStack_178 = param_2[0xf];
  uStack_180 = param_2[0xe];
  uStack_260 = param_2[3];
  uStack_268 = param_2[2];
  uStack_1c8 = param_2[5];
  uStack_1d0 = param_2[4];
  uStack_250 = param_2[5];
  uStack_258 = param_2[4];
  uStack_1b8 = param_2[7];
  uStack_1c0 = param_2[6];
  uStack_240 = param_2[7];
  uStack_248 = param_2[6];
  uStack_1a8 = param_2[9];
  uStack_1b0 = param_2[8];
  uStack_230 = param_2[9];
  uStack_238 = param_2[8];
  uStack_198 = param_2[0xb];
  uStack_1a0 = param_2[10];
  uStack_1e8 = param_2[1];
  uStack_1f0 = *param_2;
  uStack_1d8 = param_2[3];
  uStack_1e0 = param_2[2];
  uStack_270 = param_2[1];
  uStack_278 = *param_2;
  uStack_288 = param_1[0xf];
  uStack_290 = param_1[0xe];
  uStack_200 = param_2[0xf];
  uStack_208 = param_2[0xe];
  uStack_e0 = param_1[0x10];
  uStack_170 = param_2[0x10];
  uStack_280 = param_1[0x10];
  uStack_1f8 = param_2[0x10];
  iVar1 = (int)&uStack_300;
  func_0x0001027f8928();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_278;
    func_0x0001027f8928();
    if (iVar1 == 1) {
      uStack_3a8 = uStack_298;
      uStack_3b0 = uStack_2a0;
      uStack_398 = uStack_288;
      uStack_3a0 = uStack_290;
      uStack_390 = uStack_280;
      uStack_3e8 = uStack_2d8;
      uStack_3f0 = uStack_2e0;
      uStack_3d8 = uStack_2c8;
      uStack_3e0 = uStack_2d0;
      uStack_3b8 = uStack_2a8;
      uStack_3c0 = uStack_2b0;
      uStack_3c8 = uStack_2b8;
      uStack_3d0 = uStack_2c0;
      uStack_408 = uStack_2f8;
      uStack_410 = uStack_300;
      uStack_3f8 = uStack_2e8;
      uStack_400 = uStack_2f0;
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_102816338(&uStack_410,0x112ec2710,&UNK_10dae0a80);
LAB_102814068:
      if (((*(byte *)(param_1 + 0x11) ^ *(byte *)(param_2 + 0x11)) & 1) == 0) {
        uVar3 = param_1[0x12];
        func_0x000100e25fcc(uVar3,param_1[0x13],param_2[0x12],param_2[0x13]);
        uVar2 = (uint)uVar3;
        goto LAB_102814134;
      }
    }
    else {
LAB_1028140d0:
      func_0x000107c610b4(&uStack_410,&uStack_300,0x110);
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      uVar3 = 0x112ec3288;
      puVar6 = &UNK_10dae3220;
      puVar5 = &uStack_410;
LAB_10281412c:
      FUN_102816338(puVar5,uVar3,puVar6);
    }
  }
  else {
    uStack_438 = uStack_298;
    uStack_440 = uStack_2a0;
    uStack_428 = uStack_288;
    uStack_430 = uStack_290;
    uStack_420 = uStack_280;
    uStack_478 = uStack_2d8;
    uStack_480 = uStack_2e0;
    uStack_468 = uStack_2c8;
    uStack_470 = uStack_2d0;
    uStack_458 = uStack_2b8;
    uStack_460 = uStack_2c0;
    uStack_448 = uStack_2a8;
    uStack_450 = uStack_2b0;
    uStack_498 = uStack_2f8;
    uStack_4a0 = uStack_300;
    uStack_488 = uStack_2e8;
    uStack_490 = uStack_2f0;
    iVar1 = (int)&uStack_278;
    func_0x0001027f8928();
    if (iVar1 == 1) goto LAB_1028140d0;
    uStack_678 = uStack_210;
    uStack_680 = uStack_218;
    uStack_668 = uStack_200;
    uStack_670 = uStack_208;
    uStack_6b8 = uStack_250;
    uStack_6c0 = uStack_258;
    uStack_6a8 = uStack_240;
    uStack_6b0 = uStack_248;
    uStack_698 = uStack_230;
    uStack_6a0 = uStack_238;
    uStack_688 = uStack_220;
    uStack_690 = uStack_228;
    uStack_6d8 = uStack_270;
    uStack_6e0 = uStack_278;
    uStack_6c8 = uStack_260;
    uStack_6d0 = uStack_268;
    uStack_5e8 = uStack_210;
    uStack_5f0 = uStack_218;
    uStack_5d8 = uStack_200;
    uStack_5e0 = uStack_208;
    uStack_628 = uStack_250;
    uStack_630 = uStack_258;
    uStack_618 = uStack_240;
    uStack_620 = uStack_248;
    uStack_608 = uStack_230;
    uStack_610 = uStack_238;
    uStack_5f8 = uStack_220;
    uStack_600 = uStack_228;
    uStack_648 = uStack_270;
    uStack_650 = uStack_278;
    uStack_638 = uStack_260;
    uStack_640 = uStack_268;
    uStack_558 = uStack_438;
    uStack_560 = uStack_440;
    uStack_548 = uStack_428;
    uStack_550 = uStack_430;
    uStack_598 = uStack_478;
    uStack_5a0 = uStack_480;
    uStack_588 = uStack_468;
    uStack_590 = uStack_470;
    uStack_578 = uStack_458;
    uStack_580 = uStack_460;
    uStack_568 = uStack_448;
    uStack_570 = uStack_450;
    uStack_5b8 = uStack_498;
    uStack_5c0 = uStack_4a0;
    uStack_5a8 = uStack_488;
    uStack_5b0 = uStack_490;
    uStack_4c8 = uStack_438;
    uStack_4d0 = uStack_440;
    uStack_4b8 = uStack_428;
    uStack_4c0 = uStack_430;
    uStack_508 = uStack_478;
    uStack_510 = uStack_480;
    uStack_4f8 = uStack_468;
    uStack_500 = uStack_470;
    uStack_4e8 = uStack_458;
    uStack_4f0 = uStack_460;
    uStack_4d8 = uStack_448;
    uStack_4e0 = uStack_450;
    uStack_660 = uStack_1f8;
    uStack_5d0 = uStack_1f8;
    uStack_540 = uStack_420;
    uStack_4b0 = uStack_420;
    uStack_528 = uStack_498;
    uStack_530 = uStack_4a0;
    uStack_518 = uStack_488;
    uStack_520 = uStack_490;
    iVar1 = (int)&uStack_5c0;
    FUN_1027f8a2c();
    if (iVar1 == 1) {
      puVar4 = &uStack_530;
      func_0x000100d08550();
      uStack_7c8 = puVar4[7];
      uStack_7d0 = puVar4[6];
      uStack_7b8 = puVar4[9];
      uStack_7c0 = puVar4[8];
      uStack_7a8 = puVar4[0xb];
      uStack_7b0 = puVar4[10];
      uStack_7a0 = puVar4[0xc];
      uStack_7f8 = puVar4[1];
      uStack_800 = *puVar4;
      uStack_7e8 = puVar4[3];
      uStack_7f0 = puVar4[2];
      uStack_7d8 = puVar4[5];
      uStack_7e0 = puVar4[4];
      uStack_3d8 = uStack_618;
      uStack_3e0 = uStack_620;
      uStack_3e8 = uStack_628;
      uStack_3f0 = uStack_630;
      uStack_408 = uStack_648;
      uStack_410 = uStack_650;
      uStack_3f8 = uStack_638;
      uStack_400 = uStack_640;
      uStack_390 = uStack_5d0;
      uStack_398 = uStack_5d8;
      uStack_3a0 = uStack_5e0;
      uStack_3a8 = uStack_5e8;
      uStack_3b0 = uStack_5f0;
      uStack_3c8 = uStack_608;
      uStack_3d0 = uStack_610;
      uStack_3b8 = uStack_5f8;
      uStack_3c0 = uStack_600;
      iVar1 = (int)&uStack_650;
      FUN_1027f8a2c();
      if (iVar1 != 1) {
        FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
        puVar5 = &uStack_d0;
LAB_102814410:
        FUN_1028131b4(&uStack_1f0,puVar5,0x112ec2710,&UNK_10dae0a80);
        FUN_102816338(&uStack_6e0,0x112ec2710,&UNK_10dae0a80);
        uVar3 = 0x112ec2710;
        puVar6 = &UNK_10dae0a80;
        puVar5 = &uStack_300;
        goto LAB_10281412c;
      }
      puVar4 = &uStack_410;
      func_0x000100d08550();
      uStack_738 = puVar4[7];
      uStack_740 = puVar4[6];
      uStack_728 = puVar4[9];
      uStack_730 = puVar4[8];
      uStack_718 = puVar4[0xb];
      uStack_720 = puVar4[10];
      uStack_710 = puVar4[0xc];
      uStack_768 = puVar4[1];
      uStack_770 = *puVar4;
      uStack_758 = puVar4[3];
      uStack_760 = puVar4[2];
      uStack_748 = puVar4[5];
      uStack_750 = puVar4[4];
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      func_0x00010281395c(&uStack_800,&uStack_770);
    }
    else {
      puVar5 = &uStack_530;
      func_0x000100d08550();
      uStack_78 = puVar5[0xb];
      uStack_80 = puVar5[10];
      uStack_68 = puVar5[0xd];
      uStack_70 = puVar5[0xc];
      uStack_58 = puVar5[0xf];
      uStack_60 = puVar5[0xe];
      uStack_50 = puVar5[0x10];
      uStack_b8 = puVar5[3];
      uStack_c0 = puVar5[2];
      uStack_a8 = puVar5[5];
      uStack_b0 = puVar5[4];
      uStack_98 = puVar5[7];
      uStack_a0 = puVar5[6];
      uStack_88 = puVar5[9];
      uStack_90 = puVar5[8];
      uStack_c8 = puVar5[1];
      uStack_d0 = *puVar5;
      uStack_6f0 = uStack_5d0;
      uStack_708 = uStack_5e8;
      uStack_710 = uStack_5f0;
      uStack_6f8 = uStack_5d8;
      uStack_700 = uStack_5e0;
      uStack_728 = uStack_608;
      uStack_730 = uStack_610;
      uStack_718 = uStack_5f8;
      uStack_720 = uStack_600;
      uStack_748 = uStack_628;
      uStack_750 = uStack_630;
      uStack_738 = uStack_618;
      uStack_740 = uStack_620;
      uStack_768 = uStack_648;
      uStack_770 = uStack_650;
      uStack_758 = uStack_638;
      uStack_760 = uStack_640;
      iVar1 = (int)&uStack_650;
      FUN_1027f8a2c();
      if (iVar1 == 1) {
        FUN_1028131b4(&uStack_160,&uStack_410,0x112ec2710,&UNK_10dae0a80);
        puVar5 = &uStack_410;
        goto LAB_102814410;
      }
      puVar5 = &uStack_770;
      func_0x000100d08550();
      uStack_3b8 = puVar5[0xb];
      uStack_3c0 = puVar5[10];
      uStack_3a8 = puVar5[0xd];
      uStack_3b0 = puVar5[0xc];
      uStack_398 = puVar5[0xf];
      uStack_3a0 = puVar5[0xe];
      uStack_390 = puVar5[0x10];
      uStack_3f8 = puVar5[3];
      uStack_400 = puVar5[2];
      uStack_3e8 = puVar5[5];
      uStack_3f0 = puVar5[4];
      uStack_3d8 = puVar5[7];
      uStack_3e0 = puVar5[6];
      uStack_3c8 = puVar5[9];
      uStack_3d0 = puVar5[8];
      uStack_408 = puVar5[1];
      uStack_410 = *puVar5;
      FUN_1028131b4(&uStack_160,&uStack_800,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_800,0x112ec2710,&UNK_10dae0a80);
      puVar5 = &uStack_d0;
      func_0x00010281328c(puVar5,&uStack_410);
    }
    FUN_102816338(&uStack_6e0,0x112ec2710,&UNK_10dae0a80);
    FUN_102816338(&uStack_300,0x112ec2710,&UNK_10dae0a80);
    if (((ulong)puVar5 & 1) != 0) goto LAB_102814068;
  }
  uVar2 = 0;
LAB_102814134:
  return uVar2 & 1;
}



/* Entry: 102814504; end: 102814543;  */

void FUN_102814504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae30e8;
  func_0x000107c61520(&UNK_10dae30e8,&UNK_110552dc0);
  puRam0000000112ec3210 = puVar1;
  return;
}



/* Entry: 102814544; end: 102814567;  */

void FUN_102814544(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102814568();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102814568; end: 1028145a7;  */

void FUN_102814568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2f10;
  func_0x000107c61520(&UNK_10dae2f10,&UNK_110552ca8);
  puRam0000000112ec3218 = puVar1;
  return;
}



/* Entry: 1028145a8; end: 1028145bb;  */

void FUN_1028145a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102813e30();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1028145bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028145bc; end: 1028145fb;  */

void FUN_1028145bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2ec8;
  func_0x000107c61520(&DAT_10dae2ec8,&UNK_110552ca8);
  puRam0000000112ec3220 = puVar1;
  return;
}



/* Entry: 1028145fc; end: 1028145ff;  */

void FUN_1028145fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2f78;
  func_0x000107c61520(&UNK_10dae2f78,&UNK_110552ca8);
  puRam0000000112ec3228 = puVar1;
  return;
}



/* Entry: 102814600; end: 10281463f;  */

void FUN_102814600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2f78;
  func_0x000107c61520(&UNK_10dae2f78,&UNK_110552ca8);
  puRam0000000112ec3228 = puVar1;
  return;
}



/* Entry: 102814640; end: 102814663;  */

void FUN_102814640(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102814664();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102814664; end: 1028146a3;  */

void FUN_102814664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2fe8;
  func_0x000107c61520(&UNK_10dae2fe8,&UNK_110552d38);
  puRam0000000112ec3230 = puVar1;
  return;
}



/* Entry: 1028146a4; end: 1028146b7;  */

void FUN_1028146a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102813e70)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1028146b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028146b8; end: 1028146f7;  */

void FUN_1028146b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2fa0;
  func_0x000107c61520(&DAT_10dae2fa0,&UNK_110552d38);
  puRam0000000112ec3238 = puVar1;
  return;
}



/* Entry: 1028146f8; end: 1028146fb;  */

void FUN_1028146f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3050;
  func_0x000107c61520(&UNK_10dae3050,&UNK_110552d38);
  puRam0000000112ec3240 = puVar1;
  return;
}



/* Entry: 1028146fc; end: 10281473b;  */

void FUN_1028146fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3050;
  func_0x000107c61520(&UNK_10dae3050,&UNK_110552d38);
  puRam0000000112ec3240 = puVar1;
  return;
}



/* Entry: 10281473c; end: 10281475f;  */

void FUN_10281473c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102814760();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102814760; end: 10281479f;  */

void FUN_102814760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae30c0;
  func_0x000107c61520(&UNK_10dae30c0,&UNK_110552dc0);
  puRam0000000112ec3248 = puVar1;
  return;
}



/* Entry: 1028147a0; end: 1028147b3;  */

void FUN_1028147a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102814504();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1027feaa0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028147b4; end: 1028147e3;  */

void FUN_1028147b4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028147e4; end: 1028147e7;  */

void FUN_1028147e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3128;
  func_0x000107c61520(&UNK_10dae3128,&UNK_110552dc0);
  puRam0000000112ec3250 = puVar1;
  return;
}



/* Entry: 1028147e8; end: 102814827;  */

void FUN_1028147e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3128;
  func_0x000107c61520(&UNK_10dae3128,&UNK_110552dc0);
  puRam0000000112ec3250 = puVar1;
  return;
}



/* Entry: 102814828; end: 1028148af;  */

/* WARNING: Possible PIC construction at 0x000102814840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102814854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102814884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102814844) */
/* WARNING: Removing unreachable block (ram,0x000102814858) */
/* WARNING: Removing unreachable block (ram,0x000102814868) */
/* WARNING: Removing unreachable block (ram,0x000102814870) */
/* WARNING: Removing unreachable block (ram,0x000102814888) */
/* WARNING: Removing unreachable block (ram,0x0001028148a4) */
/* WARNING: Removing unreachable block (ram,0x000102814890) */
/* WARNING: Removing unreachable block (ram,0x000102814880) */
/* WARNING: Removing unreachable block (ram,0x00010281484c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102814828(ulong *param_1)

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



/* Entry: 1028148b0; end: 102814e67;  */

undefined8 * FUN_1028148b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[6] = param_2[6];
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = lVar1;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[5] = uVar3;
    param_1[6] = uVar4;
  }
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[8] = uVar3;
    param_1[9] = uVar2;
  }
  else {
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[9] = param_2[9];
  }
  uVar2 = param_2[0xc];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar2;
    lVar1 = param_2[0xe];
  }
  else {
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xc] = param_2[0xc];
    lVar1 = param_2[0xe];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar1;
    uVar3 = param_2[0xf];
    uVar4 = param_2[0x10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
  }
  return param_1;
}



/* Entry: 102814e68; end: 102814f47;  */

int FUN_102814e68(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x22] != '\0')) {
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



/* Entry: 102814f48; end: 102814fbb;  */

/* WARNING: Possible PIC construction at 0x000102814f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102814f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102814f64) */
/* WARNING: Removing unreachable block (ram,0x000102814f78) */
/* WARNING: Removing unreachable block (ram,0x000102814f88) */
/* WARNING: Removing unreachable block (ram,0x000102814f90) */
/* WARNING: Removing unreachable block (ram,0x000102814fac) */
/* WARNING: Removing unreachable block (ram,0x000102814fa0) */
/* WARNING: Removing unreachable block (ram,0x000102814f6c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102814f48(ulong *param_1)

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



/* Entry: 102814fbc; end: 10281543b;  */

undefined8 * FUN_102814fbc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar2,uVar4);
  *param_1 = uVar2;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[6] = param_2[6];
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = lVar1;
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar4);
    param_1[5] = uVar2;
    param_1[6] = uVar4;
  }
  uVar3 = param_2[9];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  return param_1;
}



/* Entry: 10281543c; end: 102815513;  */

int FUN_10281543c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1a] != '\0')) {
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



/* Entry: 102815514; end: 10281559f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102815514(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_1028155a0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],&SUB_10006c090,&SUB_101553bdc
                  ,&SUB_1015dc5d0,&SUB_101597ae4);
  }
  uVar1 = param_1[0x12];
  uVar2 = (uint)((ulong)param_1[0x13] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x13] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1028155a0; end: 102815b5f;  */

void FUN_1028155a0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,code *param_18,code *param_19,code *UNRECOVERED_JUMPTABLE,
                  code *UNRECOVERED_JUMPTABLE_00)

{
  if ((param_2 >> 0x3d & 1) == 0) {
    (*param_18)();
    (*param_19)(param_3,param_4,param_5,param_6,param_7);
    (*UNRECOVERED_JUMPTABLE)(param_8,param_9,param_10);
    (*UNRECOVERED_JUMPTABLE)(param_11,param_12,param_13);
                    /* WARNING: Could not recover jumptable at 0x000102815688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_14,param_15,param_16,param_17);
    return;
  }
  (*param_18)(param_1,param_2 & 0xdfffffffffffffff);
  (*param_19)(param_3,param_4,param_5,param_6,param_7);
  (*UNRECOVERED_JUMPTABLE)(param_8,param_9,param_10);
                    /* WARNING: Could not recover jumptable at 0x0001028156e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_11,param_12,param_13);
  return;
}



/* Entry: 102815b60; end: 102815ca3;  */

undefined8 FUN_102815b60(undefined8 param_1)

{
  FUN_102815d74(param_1,&UNK_110552e60);
  return param_1;
}



/* Entry: 102815ca4; end: 102815d73;  */

int FUN_102815ca4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0x22)) {
    uVar1 = *(byte *)(param_1 + 0x22) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102815d74; end: 102815de3;  */

void FUN_102815d74(undefined8 *param_1)

{
  FUN_1028155a0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],&SUB_10006c090,&SUB_101553bdc,&SUB_1015dc5d0
                ,&SUB_101597ae4);
  return;
}



/* Entry: 102815de4; end: 10281605b;  */

undefined8 * FUN_102815de4(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar5 = param_2[8];
  uVar13 = param_2[9];
  uVar6 = param_2[10];
  uVar14 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar15 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar16 = param_2[0xf];
  uVar17 = param_2[0x10];
  FUN_1028155a0(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,
                uVar15,uVar8,uVar16,uVar17,&SUB_10006c00c,&UNK_101541428,&UNK_1015dc5b4,
                &SUB_101597350);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  param_1[8] = uVar5;
  param_1[9] = uVar13;
  param_1[10] = uVar6;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar15;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar16;
  param_1[0x10] = uVar17;
  return param_1;
}



/* Entry: 10281605c; end: 102816107;  */

undefined8 * FUN_10281605c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar9 = param_2[0x10];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar10 = param_1[0x10];
  uVar19 = *param_2;
  uVar21 = param_2[3];
  uVar20 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar19;
  param_1[3] = uVar21;
  param_1[2] = uVar20;
  uVar19 = param_2[4];
  uVar21 = param_2[7];
  uVar20 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar19;
  param_1[7] = uVar21;
  param_1[6] = uVar20;
  uVar19 = param_2[8];
  uVar21 = param_2[0xb];
  uVar20 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar19;
  param_1[0xb] = uVar21;
  param_1[10] = uVar20;
  uVar19 = param_2[0xc];
  uVar21 = param_2[0xf];
  uVar20 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar19;
  param_1[0xf] = uVar21;
  param_1[0xe] = uVar20;
  param_1[0x10] = uVar9;
  FUN_1028155a0(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar10,&SUB_10006c090,&SUB_101553bdc,&SUB_1015dc5d0,
                &SUB_101597ae4);
  return param_1;
}



/* Entry: 102816108; end: 102816223;  */

int FUN_102816108(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102816224; end: 1028162e3;  */

void FUN_102816224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae3094;
  func_0x000107c61520(&DAT_10dae3094,&UNK_110552dc0);
  puRam0000000112ec3260 = puVar1;
  return;
}



/* Entry: 1028162e4; end: 102816337;  */

void FUN_1028162e4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return;
}



/* Entry: 102816338; end: 102816377;  */

undefined8 FUN_102816338(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102816378; end: 102816387;  */

long FUN_102816378(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102816388; end: 1028163cf;  */

void FUN_102816388(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae3400,0x1c,2);
  uRam0000000113804c30 = uStack_38;
  uRam0000000113804c28 = uStack_40;
  uRam0000000113804c40 = uStack_28;
  uRam0000000113804c38 = uStack_30;
  uRam0000000113804c50 = uStack_18;
  uRam0000000113804c48 = uStack_20;
  return;
}



/* Entry: 1028163d0; end: 1028164b3;  */

void FUN_1028163d0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110790980;
LAB_102816458:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790a00;
        goto LAB_102816458;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1028164b4; end: 102816527;  */

void FUN_1028164b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102816528();
  if (unaff_x21 == 0) {
    FUN_1028165b0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102816528; end: 1028165af;  */

void FUN_102816528(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1028165b0; end: 102816637;  */

void FUN_1028165b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102816638; end: 10281667f;  */

uint FUN_102816638(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uVar3;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_a0 = lVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar10;
  lStack_80 = lVar11;
  uStack_78 = uVar13;
  uStack_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_102816ae8;
    if ((float)lVar11 == (float)lVar12) {
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_1028169f0(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d0858c(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_102816b8c;
    }
    else {
      uVar3 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      plVar4 = &lStack_a0;
      plVar5 = &lStack_c0;
LAB_102816d64:
      FUN_1028169f0(plVar4,plVar5,uVar3,puVar6);
      func_0x000100d0858c(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_1028169f0(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
LAB_102816b8c:
      func_0x000100d0858c(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_e0 = lVar12;
      uStack_d8 = uVar14;
      uStack_d0 = uVar10;
      lStack_c0 = lVar11;
      uStack_b8 = uVar13;
      uStack_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_102816c40;
        if (lVar11 != lVar12) {
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          goto LAB_102816d64;
        }
        FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1028169f0(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d0858c(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_102816d8c;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_102816c40:
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_102816c6c;
        }
        FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1028169f0(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d0858c(lVar11,uVar13,uVar7);
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_102816d94;
    }
LAB_102816ae8:
    uVar3 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
    plVar4 = &lStack_a0;
    plVar5 = &lStack_c0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_102816c6c:
    FUN_1028169f0(plVar4,plVar5,uVar3,puVar6);
    func_0x000100d0858c(lVar9,uVar8,uVar2);
  }
LAB_102816d8c:
  func_0x000100d0858c(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_102816d94:
  return uVar1 & 1;
}



/* Entry: 102816680; end: 1028166af;  */

undefined1  [16] FUN_102816680(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1028166b0; end: 1028166e3;  */

void FUN_1028166b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1028166e4; end: 1028166f7;  */

undefined8 FUN_1028166e4(void)

{
  return 0x1028166f4;
}



/* Entry: 1028166f8; end: 10281670b;  */

void FUN_1028166f8(void)

{
  FUN_1028163d0();
  return;
}



/* Entry: 10281670c; end: 102816743;  */

void FUN_10281670c(void)

{
  FUN_1028164b4();
  return;
}



/* Entry: 102816744; end: 102816747;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102816744(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102816748; end: 10281677f;  */

uint FUN_102816748(long param_1,long param_2)

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
  FUN_102817340();
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



/* Entry: 102816780; end: 1028167c7;  */

uint FUN_102816780(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_102816a38(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1028167c8; end: 102816867;  */

/* WARNING: Possible PIC construction at 0x000102816814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102816824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102816818) */
/* WARNING: Removing unreachable block (ram,0x000102816828) */

void FUN_1028167c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec32a0 != -1) {
    func_0x000107c61568(0x112ec32a0,FUN_102816388);
  }
  uVar5 = uRam0000000113804c50;
  uVar4 = uRam0000000113804c48;
  uVar3 = uRam0000000113804c40;
  uVar2 = uRam0000000113804c38;
  uVar1 = uRam0000000113804c30;
  *param_1 = uRam0000000113804c28;
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



/* Entry: 102816868; end: 1028168a3;  */

void FUN_102816868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec32c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec32c0,&UNK_10dae33f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1028168a4; end: 1028169a7;  */

void FUN_1028168a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1028169a8; end: 1028169ef;  */

uint FUN_1028169a8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102816a38(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1028169f0; end: 102816a37;  */

undefined8 FUN_1028169f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102816a38; end: 102816db7;  */

uint FUN_102816a38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uVar3;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_a0 = lVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar10;
  lStack_80 = lVar11;
  uStack_78 = uVar13;
  uStack_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_102816ae8;
    if ((float)lVar11 == (float)lVar12) {
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_1028169f0(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d0858c(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_102816b8c;
    }
    else {
      uVar3 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      plVar4 = &lStack_a0;
      plVar5 = &lStack_c0;
LAB_102816d64:
      FUN_1028169f0(plVar4,plVar5,uVar3,puVar6);
      func_0x000100d0858c(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_1028169f0(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
LAB_102816b8c:
      func_0x000100d0858c(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_e0 = lVar12;
      uStack_d8 = uVar14;
      uStack_d0 = uVar10;
      lStack_c0 = lVar11;
      uStack_b8 = uVar13;
      uStack_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_102816c40;
        if (lVar11 != lVar12) {
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          goto LAB_102816d64;
        }
        FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1028169f0(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d0858c(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_102816d8c;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_102816c40:
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_102816c6c;
        }
        FUN_1028169f0(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1028169f0(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d0858c(lVar11,uVar13,uVar7);
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_102816d94;
    }
LAB_102816ae8:
    uVar3 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_1028169f0(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
    plVar4 = &lStack_a0;
    plVar5 = &lStack_c0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_102816c6c:
    FUN_1028169f0(plVar4,plVar5,uVar3,puVar6);
    func_0x000100d0858c(lVar9,uVar8,uVar2);
  }
LAB_102816d8c:
  func_0x000100d0858c(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_102816d94:
  return uVar1 & 1;
}



/* Entry: 102816db8; end: 102816df7;  */

void FUN_102816db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec32a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3330;
  func_0x000107c61520(&UNK_10dae3330,&UNK_110553000);
  puRam0000000112ec32a8 = puVar1;
  return;
}



/* Entry: 102816df8; end: 102816e1b;  */

void FUN_102816df8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102816e1c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102816e1c; end: 102816e5b;  */

void FUN_102816e1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec32b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3308;
  func_0x000107c61520(&UNK_10dae3308,&UNK_110553000);
  puRam0000000112ec32b0 = puVar1;
  return;
}



/* Entry: 102816e5c; end: 102816e87;  */

void FUN_102816e5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102816db8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102802ee8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102816e88; end: 102816e8b;  */

void FUN_102816e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec32b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3370;
  func_0x000107c61520(&UNK_10dae3370,&UNK_110553000);
  puRam0000000112ec32b8 = puVar1;
  return;
}



/* Entry: 102816e8c; end: 102816ecb;  */

void FUN_102816e8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec32b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae3370;
  func_0x000107c61520(&UNK_10dae3370,&UNK_110553000);
  puRam0000000112ec32b8 = puVar1;
  return;
}



/* Entry: 102816ecc; end: 102816f57;  */

long FUN_102816ecc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102816f58; end: 10281727b;  */

undefined8 * FUN_102816f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 10281727c; end: 10281733f;  */

int FUN_10281727c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102817340; end: 10281737f;  */

void FUN_102817340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec32c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae32dc;
  func_0x000107c61520(&DAT_10dae32dc,&UNK_110553000);
  puRam0000000112ec32c8 = puVar1;
  return;
}



/* Entry: 102817380; end: 1028173e7;  */

void FUN_102817380(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3588;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0c2370);
  func_0x000107c47794();
  func_0x000107c61170(uVar2);
  puRam0000000112ec3320 = puVar1;
  return;
}



/* Entry: 1028173e8; end: 102817457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1028173e8(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec32e8;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112ec32e8);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueue";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 102817458; end: 1028174b7; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardActionHandler init] */

void FUN_102817458(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredWelcomeCardMessagePlugin.SponsoredWelcomeCardActionHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102817484);
  (*pcVar1)();
}



/* Entry: 1028174b8; end: 10281750f; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028174b8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec32d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec32d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec32e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec32e8));
  return;
}



/* Entry: 102817510; end: 10281752f;  */

void FUN_102817510(void)

{
  func_0x000107c61168(&PTR_PTR_112864788);
  return;
}



/* Entry: 102817530; end: 1028178f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817530(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  lVar8 = param_2;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    if (lRam0000000112ec3318 != -1) {
      func_0x000107c61568(0x112ec3318,FUN_102817380);
    }
    (*param_3)(uRam0000000112ec3320);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 == 0) {
    if (lRam0000000112ec3318 != -1) {
      func_0x000107c61568(0x112ec3318,FUN_102817380);
    }
    (*param_3)(uRam0000000112ec3320);
  }
  else {
    puVar2 = PTR_PTR_1126b1a40;
    uStack_98 = param_7;
    func_0x000107c610f8();
    func_0x000107c61174();
    lStack_a0 = param_1;
    func_0x000107c453e4();
    puVar3 = puVar2;
    func_0x00010011df08();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar8);
    }
    puVar4 = puVar2;
    func_0x000107c5e870(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5eea0(lVar9);
    func_0x000107c5ee70();
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
    puVar3 = puVar2;
    func_0x000107c5e5b0(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    lVar8 = lStack_a0;
    uVar10 = *(undefined8 *)(lStack_a0 + _DAT_11307fc80);
    func_0x0001044c309c(0);
    uVar5 = uVar10;
    func_0x000107c61434(uVar10);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar10);
    uVar10 = uVar5;
    func_0x0001086063d8(uVar5,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar3 = puVar2;
    func_0x000107c5e500(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c48af4(puVar4);
    func_0x000107c61170(param_5);
    uVar10 = *(undefined8 *)(lVar8 + _DAT_11307fc78);
    uVar5 = uVar10;
    func_0x000107c61434(uVar10);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar10);
    puVar6 = puVar2;
    func_0x000107c3ecc8(puVar2);
    func_0x000107c61180();
    puVar3 = &UNK_1105531b0;
    func_0x000107c613fc(&UNK_1105531b0,0x20,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    pcStack_70 = FUN_102817d3c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f5c588;
    puStack_78 = &UNK_1105531c8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c51db4(uStack_98);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1028178f4; end: 10281797b; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardActionHandler sendMessageWithMessage:callback:] */

void FUN_1028178f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_10281797c(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10281797c; end: 102817cff;  */

/* WARNING: Possible PIC construction at 0x000102817af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102817ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102817bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102817bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102817be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102817ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102817be8) */
/* WARNING: Removing unreachable block (ram,0x000102817bd8) */
/* WARNING: Removing unreachable block (ram,0x000102817bc8) */
/* WARNING: Removing unreachable block (ram,0x000102817ba4) */
/* WARNING: Removing unreachable block (ram,0x000102817af4) */
/* WARNING: Removing unreachable block (ram,0x000102817cac) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281797c(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  
  puVar2 = &UNK_110553138;
  uVar7 = 0x18;
  func_0x000107c613fc(&UNK_110553138,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c60bc4(param_4);
    pcVar8 = *(code **)(param_4 + 0x10);
    uVar7 = 0;
  }
  else {
    lVar9 = *(long *)(param_3 + _DAT_112ec32d0);
    func_0x000107c60bc4(param_4);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar3 = lVar9;
      func_0x000107c5faec();
      func_0x000107c61170(lVar9);
      lVar9 = *(long *)(*(long *)(param_3 + _DAT_112ec32d8) + _DAT_11307fc48);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        puVar4 = *(undefined **)(param_3 + _DAT_112ec32e0);
        func_0x000107c5c894();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c6142c(uVar7);
          if (lRam0000000112ec3318 != -1) {
            func_0x000107c61568(0x112ec3318,FUN_102817380);
          }
          (**(code **)(param_4 + 0x10))(param_4,uRam0000000112ec3320);
        }
        else {
          func_0x0001011d1d1c();
          func_0x000107c613fc();
          *(undefined8 *)(puVar4 + 0x18) = 3;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          uVar6 = 0;
          func_0x000104522c9c(0);
          func_0x00010452281c(lVar3,uVar7);
          func_0x000107c6142c(uVar7);
          *(long *)(puVar4 + 0x20) = lVar3;
          func_0x000107c5fc48(puVar4,uVar6);
          puVar2 = puVar4;
        }
        goto code_r0x000107c61574;
      }
      func_0x000107c6142c(uVar7);
    }
    if (lRam0000000112ec3318 != -1) {
      func_0x000107c61568(0x112ec3318,FUN_102817380);
    }
    pcVar8 = *(code **)(param_4 + 0x10);
    uVar7 = uRam0000000112ec3320;
  }
  (*pcVar8)(param_4,uVar7);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102817d00; end: 102817d3b;  */

void FUN_102817d00(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102817d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102817d3c; end: 102817d8f;  */

void FUN_102817d3c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = 0;
  if ((param_1 != 0) && (uVar2 = uRam0000000112ec3320, lRam0000000112ec3318 != -1)) {
    func_0x000107c61568(0x112ec3318,FUN_102817380);
    uVar2 = uRam0000000112ec3320;
  }
  (*pcVar1)(uVar2);
  return;
}



/* Entry: 102817d90; end: 102817d97;  */

void FUN_102817d90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102817d98; end: 102817da7; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3380));
  return;
}



/* Entry: 102817da8; end: 102817ddb; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3380);
  *(undefined8 *)(param_1 + _DAT_112ec3380) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102817ddc; end: 102817deb; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3388));
  return;
}



/* Entry: 102817dec; end: 102817e1f; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3388);
  *(undefined8 *)(param_1 + _DAT_112ec3388) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102817e20; end: 102817e2f; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3390));
  return;
}



/* Entry: 102817e30; end: 102817e63; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3390);
  *(undefined8 *)(param_1 + _DAT_112ec3390) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102817e64; end: 102817e83; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817e64(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec3398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102817e84; end: 102817e97; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817e84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec3398,param_3);
  return;
}



/* Entry: 102817e98; end: 102817eb7; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817e98(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec33a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102817eb8; end: 102817ecb; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102817eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec33a0,param_3);
  return;
}



/* Entry: 102817ecc; end: 102817f2b; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin init] */

void FUN_102817ecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredWelcomeCardMessagePlugin.SponsoredWelcomeCardMessagePlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102817ef8);
  (*pcVar1)();
}



/* Entry: 102817f2c; end: 102818047; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010281802c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102818030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102817f2c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3328 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3330));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3338));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3340));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3348));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3350));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3358));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3360));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3368));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3370));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec3378));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3380));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3388));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3390));
  param_1 = param_1 + _DAT_112ec3398;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102818048; end: 102818067;  */

void FUN_102818048(void)

{
  func_0x000107c61168(&PTR_PTR_112864860);
  return;
}



/* Entry: 102818068; end: 102818657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102818068(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec3378);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar16 = lVar3;
    func_0x000107c5bd28();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102818658);
      (*pcVar1)();
    }
    lVar5 = lVar16;
    func_0x000107c5bd30();
    func_0x000107c61170(lVar16);
    if ((int)lVar5 == 0x1f) {
      uVar4 = param_2;
      func_0x0001070b1c70();
      if ((uVar4 & 1) == 0) {
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ec3328);
        func_0x000107c5fadc(uVar17,((undefined8 *)(unaff_x20 + _DAT_112ec3328))[1]);
        func_0x0001070b1d3c(param_2,uVar17);
        func_0x000107c61180();
        func_0x000107c61170(uVar17);
        if (param_2 != 0) {
          uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ec3340);
          uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ec3348);
          lVar5 = 0;
          FUN_102817510();
          lVar16 = lVar5;
          func_0x000107c610f8();
          *(undefined8 *)(lVar16 + _DAT_112ec32e8) = 0;
          *(ulong *)(lVar16 + _DAT_112ec32d0) = param_2;
          *(undefined8 *)(lVar16 + _DAT_112ec32d8) = uVar17;
          *(undefined8 *)(lVar16 + _DAT_112ec32e0) = uVar18;
          puVar7 = PTR_s_init_1125d9248;
          lStack_70 = lVar16;
          lStack_68 = lVar5;
          func_0x000107c61174(uVar17);
          func_0x000107c61174(uVar18);
          func_0x000107c61174();
          plVar6 = &lStack_70;
          func_0x000107c61154(plVar6,puVar7);
          puVar7 = PTR_PTR_1126ab0f8;
          func_0x000107c610f8();
          func_0x000107c454d0();
          lVar5 = *(long *)(unaff_x20 + _DAT_112ec3330);
          func_0x000107c4d814();
          func_0x000107c61180();
          lVar16 = lVar5;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          if (lVar16 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = lVar16;
            func_0x000107c4c1dc(lVar16);
            func_0x000107c61180();
            func_0x000107c615e8(lVar16);
          }
          func_0x000107c56b20(puVar7);
          func_0x000107c615e8(lVar5);
          puVar8 = &UNK_110553200;
          func_0x000107c613fc(&UNK_110553200,0x18,7);
          uVar4 = unaff_x20;
          func_0x000107c61614(puVar8 + 0x10);
          pcStack_80 = FUN_102819020;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_100f11714;
          puStack_88 = &UNK_110553218;
          ppuVar9 = &puStack_a0;
          puStack_78 = puVar8;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_78);
          ppuVar10 = ppuVar9;
          func_0x000106c73368(ppuVar9);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar9);
          puVar8 = PTR_PTR_1126b34e8;
          func_0x000107c610f8(PTR_PTR_1126b34e8);
          func_0x000107c486ec();
          func_0x000107c615e8(ppuVar10);
          func_0x000107c55310(puVar7);
          func_0x000107c61170(puVar8);
          FUN_1028186c8(param_1);
          func_0x000107c59698(puVar7);
          func_0x000107c61170(param_1);
          lVar16 = lVar2;
          func_0x000107c40258();
          func_0x000107c61180();
          lVar5 = lVar16;
          func_0x000107c5faec();
          uVar15 = uVar4;
          func_0x000107c61170(lVar16);
          lVar16 = *(long *)(unaff_x20 + _DAT_112ec3390);
          if (lVar16 == 0) {
            func_0x000107c6142c(uVar4);
            pcVar1 = (code *)0x0;
          }
          else {
            func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
            func_0x000107c61174(lVar16);
            lVar11 = lVar16;
            func_0x0001000b637c();
            puVar8 = &UNK_110553250;
            func_0x000107c613fc(&UNK_110553250,0x20,7);
            *(long *)(puVar8 + 0x10) = lVar5;
            *(ulong *)(puVar8 + 0x18) = uVar4;
            func_0x000107c61434(uVar4);
            pcVar1 = FUN_102819164;
            func_0x0001000c0ebc(FUN_102819164,puVar8);
            func_0x000107c61574(lVar11);
            func_0x000107c61574(puVar8);
            uVar17 = 0;
            FUN_10281917c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            pcVar12 = FUN_102818a30;
            uVar15 = 0;
            func_0x0001000bfde0(FUN_102818a30,0,uVar17);
            func_0x000107c61574(pcVar1);
            func_0x00010109e534();
            func_0x0001000c2068();
            func_0x000107c61574(pcVar12);
            func_0x0001004575f0();
            func_0x000107c6142c(uVar4);
            func_0x000107c61170(lVar16);
            func_0x000107c61574(pcVar1);
            pcVar1 = pcVar12;
            func_0x000107c5cb24(pcVar12);
            func_0x000107c61180();
            func_0x000107c61170(pcVar12);
          }
          func_0x000107c56660(puVar7);
          func_0x000107c61170(pcVar1);
          puVar8 = PTR_PTR_1126ab100;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar16 = lVar3;
          FUN_102819044(lVar3);
          if (uVar15 >> 0x3c < 0xf) {
            lVar5 = lVar16;
            func_0x000107c5ee20();
            func_0x0001000b44c0(lVar16,uVar15);
          }
          else {
            lVar5 = 0;
          }
          func_0x000107c576d4(puVar8);
          func_0x000107c61170(lVar5);
          uVar17 = 0x112ec33d0;
          uVar13 = 0;
          FUN_10281917c(0,0x112ec33d0,&PTR_PTR_1126ab108);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar18 = uVar13;
          func_0x000107c5faec();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          FUN_10281917c(0,0x112ec33d8,&PTR_PTR_1126ab100);
          uVar14 = 0;
          puStack_a0 = puVar8;
          puStack_88 = (undefined *)uVar13;
          FUN_10281917c(0,0x112ec33e0,&PTR_PTR_1126ab0f8);
          apuStack_c0[0] = puVar7;
          uStack_a8 = uVar14;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(puVar7);
          FUN_1027efbc4(uVar18,uVar17,&puStack_a0,apuStack_c0);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(plVar6);
          func_0x000107c61170(param_2);
          return uVar18;
        }
      }
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      return 0;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 102818658; end: 1028186c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102818658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112ec33a0;
    func_0x000107c61618(lVar1);
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 1028186c8; end: 10281894f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028186c8(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  char cStack_51;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec3388);
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_78);
    lVar5 = lStack_70;
    uVar3 = uStack_78;
    uVar4 = uStack_78;
    func_0x000107c614f0(uStack_78);
    uStack_68 = 0xd00000000000003e;
    uStack_60 = 0x800000010f0c23e0;
    uStack_58 = 0;
    (**(code **)(lVar5 + 8))(&cStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar4,lVar5);
    cVar1 = cStack_51;
    func_0x000107c615e8(uVar3);
    if (cVar1 == '\x01') {
      func_0x0001000d224c(&uStack_78);
      uVar3 = uStack_78;
      func_0x000107c614f0(uStack_78);
      uStack_68 = 0xd000000000000027;
      uStack_60 = 0x800000010efbd1b0;
      uStack_58 = 0;
      puVar8 = &UNK_1107383c8;
      (**(code **)(lStack_70 + 8))
                (&cStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_70);
      func_0x000107c615e8(uStack_78);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec3378);
      func_0x000107c4ce08();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar5 = lVar2;
      func_0x0001000b637c(lVar2);
      puVar6 = &UNK_110553200;
      func_0x000107c613fc(&UNK_110553200,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110553278;
      func_0x000107c613fc(&UNK_110553278,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar4;
      *(undefined **)(puVar7 + 0x18) = puVar8;
      puVar7[0x20] = cStack_51;
      *(undefined **)(puVar7 + 0x28) = puVar6;
      uVar4 = 0;
      FUN_10281917c(0,0x112ec33e8,&PTR_PTR_1126ab110);
      uVar3 = 0x10281916c;
      func_0x0001000bfde0(0x10281916c,puVar7,uVar4);
      func_0x000107c61574(lVar5);
      func_0x000107c61574(puVar7);
      func_0x0001004575f0();
      func_0x000107c61574(uVar3);
      puVar8 = puVar7;
      func_0x000107c5cb24(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170(lVar2);
      puVar8 = (undefined *)0x0;
    }
  }
  return puVar8;
}



/* Entry: 102818950; end: 1028189c7; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102818950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102818068(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028189c8; end: 1028189df; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028189dc) */

void FUN_1028189c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028189e0; end: 1028189e7; -[_TtC33SponsoredWelcomeCardMessagePlugin33SponsoredWelcomeCardMessagePlugin pluginType] */

undefined8 FUN_1028189e0(void)

{
  return 1;
}


