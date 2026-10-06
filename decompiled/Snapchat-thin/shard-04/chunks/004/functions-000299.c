/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034b20e8; end: 1034b2193;  */

void FUN_1034b20e8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034b2194; end: 1034b21bf;  */

void FUN_1034b2194(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1034b21c0; end: 1034b255b;  */

void FUN_1034b21c0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  int iVar10;
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
  double dStack_70;
  double dStack_68;
  undefined1 uStack_60;
  
  iVar10 = (int)&dStack_e0;
  dStack_78 = param_1[0xd];
  dStack_80 = param_1[0xc];
  dStack_68 = param_1[0xf];
  dStack_70 = param_1[0xe];
  uStack_60 = *(undefined1 *)(param_1 + 0x10);
  dStack_b8 = param_1[5];
  dStack_c0 = param_1[4];
  dStack_a8 = param_1[7];
  dStack_b0 = param_1[6];
  dStack_98 = param_1[9];
  dStack_a0 = param_1[8];
  dStack_88 = param_1[0xb];
  dStack_90 = param_1[10];
  dStack_d8 = param_1[1];
  dStack_e0 = *param_1;
  dStack_c8 = param_1[3];
  dStack_d0 = param_1[2];
  func_0x00010187bbec();
  dVar8 = dStack_68;
  dVar7 = dStack_a8;
  dVar6 = dStack_b0;
  dVar5 = dStack_b8;
  dVar4 = dStack_c0;
  dVar3 = dStack_c8;
  dVar2 = dStack_d0;
  dVar1 = dStack_d8;
  if (iVar10 != 1) {
    if (0.0 < dStack_e0) {
      if (0x7fe < (ulong)dStack_e0 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b24f4);
        (*pcVar9)();
      }
      if (dStack_e0 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b24f8);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dStack_e0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2500);
        (*pcVar9)();
      }
      FUN_1035cc208((long)dStack_e0,0,0xc000000000000000);
    }
    if (0.0 < dVar1) {
      if (0x7fe < (ulong)dVar1 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b24fc);
        (*pcVar9)();
      }
      if (dVar1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2504);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b250c);
        (*pcVar9)();
      }
      func_0x0001035cc2b4((long)dVar1,0,0xc000000000000000);
    }
    if (0.0 < dVar2) {
      if (0x7fe < (ulong)dVar2 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2508);
        (*pcVar9)();
      }
      if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2510);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2518);
        (*pcVar9)();
      }
      FUN_1035cc3d4((long)dVar2,0,0xc000000000000000);
    }
    if (0.0 < dVar3) {
      if (0x7fe < (ulong)dVar3 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2514);
        (*pcVar9)();
      }
      if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b251c);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2524);
        (*pcVar9)();
      }
      FUN_1035cc510((long)dVar3,0,0xc000000000000000);
    }
    if (0.0 < dVar4) {
      if (0x7fe < (ulong)dVar4 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2520);
        (*pcVar9)();
      }
      if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2528);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2530);
        (*pcVar9)();
      }
      FUN_1035cc630((long)dVar4,0,0xc000000000000000);
    }
    if (0.0 < dVar5) {
      if (0x7fe < (ulong)dVar5 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b252c);
        (*pcVar9)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2534);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b253c);
        (*pcVar9)();
      }
      FUN_1035cc7e0((long)dVar5,0,0xc000000000000000);
    }
    if (0.0 < dVar6) {
      if (0x7fe < (ulong)dVar6 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2538);
        (*pcVar9)();
      }
      if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2540);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2548);
        (*pcVar9)();
      }
      FUN_1035cc990((long)dVar6,0,0xc000000000000000);
    }
    if (0.0 < dVar7) {
      if (0x7fe < (ulong)dVar7 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2544);
        (*pcVar9)();
      }
      if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b254c);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2554);
        (*pcVar9)();
      }
      FUN_1035ccb40((long)dVar7,0,0xc000000000000000);
    }
    if (0.0 < dVar8) {
      if (0x7fe < (ulong)dVar8 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2550);
        (*pcVar9)();
      }
      if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b2558);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1034b255c);
        (*pcVar9)();
      }
      FUN_1035ccc7c((long)dVar8,0,0xc000000000000000);
    }
  }
  return;
}



/* Entry: 1034b255c; end: 1034b27e3;  */

void FUN_1034b255c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  long lStack_9f0;
  undefined8 uStack_9e8;
  undefined2 uStack_9e0;
  undefined1 auStack_4a0 [120];
  undefined1 auStack_428 [312];
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [336];
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
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
  long lStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  
  FUN_1034b27e4(param_1,param_4,param_5);
  FUN_1034b2d4c(param_1);
  func_0x0001034b35d8(param_1);
  lVar2 = *(long *)(param_1 + 0x318);
  if (lVar2 != 1) {
    uStack_48 = *(undefined8 *)(param_1 + 0x328);
    uStack_60 = *(undefined8 *)(param_1 + 0x310);
    uStack_68 = *(undefined8 *)(param_1 + 0x308);
    abStack_70[0] = *(byte *)(param_1 + 0x300) & 1;
    bStack_50 = *(byte *)(param_1 + 800) & 1;
    lStack_58 = lVar2;
    func_0x000107c61434();
    func_0x000107c61434(lVar2);
    func_0x0001034c9e34(auStack_4a0,abStack_70);
    func_0x0001035cd4d0(auStack_4a0);
  }
  lVar2 = *(long *)(param_1 + 0x4b0);
  if (lVar2 != 1) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x478);
    uStack_d0 = *(undefined8 *)(param_1 + 0x470);
    uStack_b8 = *(undefined8 *)(param_1 + 0x488);
    uStack_c0 = *(undefined8 *)(param_1 + 0x480);
    uStack_a8 = *(undefined8 *)(param_1 + 0x498);
    uStack_b0 = *(undefined8 *)(param_1 + 0x490);
    uStack_98 = *(undefined8 *)(param_1 + 0x4a8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x4a0);
    uStack_e8 = *(undefined8 *)(param_1 + 0x458);
    uStack_f0 = *(undefined8 *)(param_1 + 0x450);
    uStack_d8 = *(undefined8 *)(param_1 + 0x468);
    uStack_e0 = *(undefined8 *)(param_1 + 0x460);
    uStack_88 = *(undefined8 *)(param_1 + 0x4b8);
    uStack_80 = *(undefined2 *)(param_1 + 0x4c0);
    uStack_a38 = *(undefined8 *)(param_1 + 0x468);
    uStack_a40 = *(undefined8 *)(param_1 + 0x460);
    uStack_a48 = *(undefined8 *)(param_1 + 0x458);
    uStack_a50 = *(undefined8 *)(param_1 + 0x450);
    uStack_9f8 = *(undefined8 *)(param_1 + 0x4a8);
    uStack_a00 = *(undefined8 *)(param_1 + 0x4a0);
    uStack_a08 = *(undefined8 *)(param_1 + 0x498);
    uStack_a10 = *(undefined8 *)(param_1 + 0x490);
    uStack_a18 = *(undefined8 *)(param_1 + 0x488);
    uStack_a20 = *(undefined8 *)(param_1 + 0x480);
    uStack_a28 = *(undefined8 *)(param_1 + 0x478);
    uStack_a30 = *(undefined8 *)(param_1 + 0x470);
    uStack_9e0 = *(undefined2 *)(param_1 + 0x4c0);
    uStack_9e8 = *(undefined8 *)(param_1 + 0x4b8);
    lStack_9f0 = lVar2;
    lStack_90 = lVar2;
    func_0x0001034bbb04(&uStack_a50,auStack_290);
    FUN_1034ca4d8(auStack_428,&uStack_f0);
    FUN_1035cde3c(auStack_428);
  }
  uStack_120 = *(undefined8 *)(param_1 + 0x538);
  lStack_138 = *(long *)(param_1 + 0x520);
  uStack_140 = *(undefined8 *)(param_1 + 0x518);
  uStack_128 = *(undefined8 *)(param_1 + 0x530);
  uStack_130 = *(undefined8 *)(param_1 + 0x528);
  if (lStack_138 != 0) {
    uStack_f8 = *(undefined8 *)(param_1 + 0x538);
    uStack_100 = *(undefined8 *)(param_1 + 0x530);
    uStack_108 = *(undefined8 *)(param_1 + 0x528);
    uStack_118 = uStack_140;
    lStack_110 = lStack_138;
    func_0x0001034bbabc(&uStack_140,&uStack_a50,0x112f73218,&UNK_10dbce600);
    FUN_1034cb7d8(auStack_2f0,&uStack_118);
    FUN_1035ce650(auStack_2f0);
  }
  if ((*(ulong *)(param_1 + 0x110) & 0xff0000000000) != 0x30000000000) {
    FUN_1034cb978(auStack_290,*(ulong *)(param_1 + 0x110) & 0xffffffffffff,
                  *(undefined8 *)(param_1 + 0x118),
                  (ulong)*(byte *)(param_1 + 0x120) | (ulong)*(uint *)(param_1 + 0x124) << 0x20,
                  *(undefined4 *)(param_1 + 0x128));
    FUN_1035cc134(auStack_290);
  }
  FUN_1034b21c0(param_1 + 0x138);
  dVar3 = *(double *)(param_1 + 0x18);
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b27dc);
    (*pcVar1)();
  }
  if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b27e0);
    (*pcVar1)();
  }
  if (dVar3 < 9.223372036854776e+18) {
    FUN_1035cb810((long)dVar3,0,0xc000000000000000);
    func_0x00010178e37c(param_1,&uStack_a50);
    func_0x000107c61434(param_3);
    FUN_1034c8640(&uStack_a50,param_1,param_2,param_3);
    FUN_1035cd34c(&uStack_a50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b27e4);
  (*pcVar1)();
}



/* Entry: 1034b27e4; end: 1034b2d4b;  */

void FUN_1034b27e4(long param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  double dVar10;
  ulong uVar11;
  undefined *puVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *apuStack_540 [32];
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  double dStack_3b0;
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
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
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
  ulong uStack_258;
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
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
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
  undefined1 uStack_120;
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
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined7 uStack_9e;
  undefined1 uStack_97;
  
  lVar8 = *(long *)(param_1 + 0x348);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((lVar8 != 0) && (lVar14 = *(long *)(lVar8 + 0x10), lVar14 != 0)) {
    puStack_340 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0;
    lVar6 = lVar14;
    func_0x0001034d90cc(0);
    puVar9 = (undefined8 *)(lVar8 + 0x20);
    do {
      puVar12 = puStack_340;
      uStack_138 = puVar9[0x11];
      uStack_140 = puVar9[0x10];
      uStack_128 = puVar9[0x13];
      uStack_130 = puVar9[0x12];
      uStack_120 = *(undefined1 *)(puVar9 + 0x14);
      uStack_178 = puVar9[9];
      uStack_180 = puVar9[8];
      uStack_168 = puVar9[0xb];
      uStack_170 = puVar9[10];
      uStack_158 = puVar9[0xd];
      uStack_160 = puVar9[0xc];
      uStack_148 = puVar9[0xf];
      uStack_150 = puVar9[0xe];
      uStack_1b8 = puVar9[1];
      uStack_1c0 = *puVar9;
      uStack_1a8 = puVar9[3];
      uStack_1b0 = puVar9[2];
      uStack_198 = puVar9[5];
      uStack_1a0 = puVar9[4];
      uStack_188 = puVar9[7];
      uStack_190 = puVar9[6];
      puVar5 = &uStack_1c0;
      FUN_1034c8f6c();
      uVar1 = *(ulong *)(puVar12 + 0x10);
      puStack_340 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        func_0x0001034d90cc(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_340 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_340 + uVar1 * 0x18 + 0x20) = puVar5;
      *(long *)(puStack_340 + uVar1 * 0x18 + 0x28) = lVar6;
      *(undefined8 *)(puStack_340 + uVar1 * 0x18 + 0x30) = uVar7;
      puVar9 = puVar9 + 0x15;
      lVar14 = lVar14 + -1;
      puVar12 = puStack_340;
    } while (lVar14 != 0);
  }
  FUN_1035cd7fc(puVar12);
  lVar8 = *(long *)(param_1 + 0x350);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((lVar8 != 0) && (lVar14 = *(long *)(lVar8 + 0x10), lVar14 != 0)) {
    apuStack_540[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001034d90b0(0,lVar14,0);
    dVar10 = *(double *)(lVar8 + 0x20);
    puVar12 = *(undefined **)(lVar8 + 0x28);
    dVar21 = *(double *)(lVar8 + 0x30);
    dVar20 = *(double *)(lVar8 + 0x38);
    dVar19 = *(double *)(lVar8 + 0x40);
    dVar18 = *(double *)(lVar8 + 0x48);
    if (-1 < (long)dVar10) {
      pdVar13 = (double *)(lVar8 + 0x78);
      do {
        puVar2 = apuStack_540[0];
        uStack_318 = 0xf000000000000000;
        uStack_320 = 0;
        uStack_328 = 0xc000000000000000;
        uStack_330 = 0;
        uStack_2a0 = 0xf000000000000000;
        uStack_2a8 = 0;
        dStack_2b0 = 0.0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        func_0x000100d54950(0,0,0xf000000000000000);
        uStack_2a0 = 0xc000000000000000;
        uStack_2a8 = 0;
        dStack_2b0 = dVar10;
        if (puVar12 == (undefined *)0x0) {
          puStack_340 = (undefined *)0x1;
        }
        else {
          if (puVar12 != (undefined *)0x1) {
            puStack_440 = puVar12;
            func_0x000107c60614(&UNK_110798ed8,&puStack_440,&UNK_110798ed8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b2d4c);
            (*pcVar3)();
          }
          puStack_340 = (undefined *)0x2;
        }
        uStack_338 = CONCAT71(uStack_338._1_7_,1);
        uVar11 = (ulong)(uint)(float)dVar21;
        func_0x000100d54950(0,0,0xf000000000000000);
        uVar16 = (ulong)(uint)(float)dVar20;
        func_0x000100d54950(0,0,0xf000000000000000);
        uVar17 = (ulong)(uint)(float)dVar19;
        func_0x000100d54950(0,0,0xf000000000000000);
        uVar15 = (ulong)(uint)(float)dVar18;
        func_0x000100d54950(0,0,0xf000000000000000);
        func_0x0001034bbc24(&uStack_320,0x112f73200,&UNK_10dbe5440);
        uStack_318 = 0xc000000000000000;
        uStack_320 = 0;
        uStack_300 = 0xc000000000000000;
        uStack_308 = 0;
        uStack_2e8 = 0xc000000000000000;
        uStack_2f0 = 0;
        uStack_2d0 = 0xc000000000000000;
        uStack_2d8 = 0;
        uStack_2b8 = 0xc000000000000000;
        uStack_2c0 = 0;
        uStack_400 = 0xc000000000000000;
        uStack_3e8 = 0xc000000000000000;
        uStack_3f0 = 0;
        uStack_428 = uStack_328;
        uStack_430 = uStack_330;
        uStack_418 = 0xc000000000000000;
        uStack_420 = 0;
        uStack_408 = 0;
        uStack_3b8 = 0xc000000000000000;
        uStack_3c0 = 0;
        uStack_3a8 = uStack_2a8;
        dStack_3b0 = dStack_2b0;
        uStack_3d8 = 0;
        uStack_3d0 = 0xc000000000000000;
        uStack_3a0 = uStack_2a0;
        uVar1 = *(ulong *)(puVar2 + 0x10);
        uStack_438 = uStack_338;
        puStack_440 = puStack_340;
        apuStack_540[0] = puVar2;
        uStack_410 = uVar11;
        uStack_3f8 = uVar16;
        uStack_3e0 = uVar17;
        uStack_3c8 = uVar15;
        uStack_310 = uVar11;
        uStack_2f8 = uVar16;
        uStack_2e0 = uVar17;
        uStack_2c8 = uVar15;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x0001034d90b0(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_540[0] + 0x10) = uVar1 + 1;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x38) = uStack_428;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x30) = uStack_430;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x48) = uStack_418;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x40) = uStack_420;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x28) = uStack_438;
        *(undefined **)(apuStack_540[0] + uVar1 * 0xa8 + 0x20) = puStack_440;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x78) = uStack_3e8;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x70) = uStack_3f0;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x88) = uStack_3d8;
        *(ulong *)(apuStack_540[0] + uVar1 * 0xa8 + 0x80) = uStack_3e0;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x58) = uStack_408;
        *(ulong *)(apuStack_540[0] + uVar1 * 0xa8 + 0x50) = uStack_410;
        *(ulong *)(apuStack_540[0] + uVar1 * 0xa8 + 0x68) = uStack_3f8;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x60) = uStack_400;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0xc0) = uStack_3a0;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0xa8) = uStack_3b8;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0xa0) = uStack_3c0;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0xb8) = uStack_3a8;
        *(double *)(apuStack_540[0] + uVar1 * 0xa8 + 0xb0) = dStack_3b0;
        *(ulong *)(apuStack_540[0] + uVar1 * 0xa8 + 0x98) = uStack_3c8;
        *(undefined8 *)(apuStack_540[0] + uVar1 * 0xa8 + 0x90) = uStack_3d0;
        lVar14 = lVar14 + -1;
        puVar12 = apuStack_540[0];
        if (lVar14 == 0) goto LAB_1034b2bac;
        dVar10 = pdVar13[-5];
        puVar12 = (undefined *)pdVar13[-4];
        dVar21 = pdVar13[-3];
        dVar20 = pdVar13[-2];
        dVar19 = pdVar13[-1];
        dVar18 = *pdVar13;
        pdVar13 = pdVar13 + 6;
      } while (-1 < (long)dVar10);
    }
    uStack_318 = 0xf000000000000000;
    uStack_320 = 0;
    uStack_328 = 0xc000000000000000;
    uStack_330 = 0;
    uStack_2a0 = 0xf000000000000000;
    uStack_2a8 = 0;
    dStack_2b0 = 0.0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b2d20);
    (*pcVar3)();
  }
LAB_1034b2bac:
  FUN_1035ce5c4(puVar12);
  lVar8 = *(long *)(param_1 + 0x358);
  func_0x000107c61434();
  func_0x0001034c9698();
  if (lVar8 != 0) {
    FUN_1035cdf98();
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x288);
  uStack_d0 = *(undefined8 *)(param_1 + 0x280);
  uStack_b8 = *(undefined8 *)(param_1 + 0x298);
  uStack_c0 = *(undefined8 *)(param_1 + 0x290);
  uStack_b0 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_a8 = (undefined1)*(undefined8 *)(param_1 + 0x2a8);
  uStack_a7 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2a8) >> 8);
  uStack_108 = *(undefined8 *)(param_1 + 0x248);
  uStack_110 = *(undefined8 *)(param_1 + 0x240);
  uStack_f8 = *(undefined8 *)(param_1 + 600);
  uStack_100 = *(undefined8 *)(param_1 + 0x250);
  uStack_e8 = *(undefined8 *)(param_1 + 0x268);
  uStack_f0 = *(undefined8 *)(param_1 + 0x260);
  uStack_d8 = *(undefined8 *)(param_1 + 0x278);
  uStack_e0 = *(undefined8 *)(param_1 + 0x270);
  uVar7 = *(undefined8 *)(param_1 + 0x2aa);
  uStack_9e = (undefined7)*(undefined8 *)(param_1 + 0x2b2);
  uStack_97 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2b2) >> 0x38);
  uStack_a6 = (undefined6)uVar7;
  uStack_a0 = (undefined1)((ulong)uVar7 >> 0x30);
  uStack_9f = (undefined1)((ulong)uVar7 >> 0x38);
  iVar4 = (int)&uStack_110;
  FUN_1034bbc64();
  if (iVar4 != 1) {
    uStack_1f8 = uStack_c8;
    uStack_200 = uStack_d0;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1cf = CONCAT71(uStack_9e,uStack_9f);
    uStack_1d7 = CONCAT61(uStack_a6,uStack_a7);
    uStack_1d0 = uStack_a0;
    uStack_238 = uStack_108;
    uStack_240 = uStack_110;
    uStack_228 = uStack_f8;
    uStack_230 = uStack_100;
    uStack_218 = uStack_e8;
    uStack_220 = uStack_f0;
    uStack_208 = uStack_d8;
    uStack_210 = uStack_e0;
    FUN_1034cb200(&puStack_440,&uStack_240);
    if (param_3 != '\x01') {
      if ((long)param_2 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b2d24);
        (*pcVar3)();
      }
      if (0x7fffffff < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b2d28);
        (*pcVar3)();
      }
      func_0x000100d54950(uStack_358,uStack_350,uStack_348);
      uStack_348 = 0xc000000000000000;
      uStack_350 = 0;
      uStack_358 = param_2 & 0xffffffff;
    }
    uStack_278 = uStack_378;
    uStack_280 = uStack_380;
    uStack_268 = uStack_368;
    uStack_270 = uStack_370;
    uStack_258 = uStack_358;
    uStack_260 = uStack_360;
    uStack_248 = uStack_348;
    uStack_250 = uStack_350;
    uStack_2b8 = uStack_3b8;
    uStack_2c0 = uStack_3c0;
    uStack_2a8 = uStack_3a8;
    dStack_2b0 = dStack_3b0;
    uStack_298 = uStack_398;
    uStack_2a0 = uStack_3a0;
    uStack_288 = uStack_388;
    uStack_290 = uStack_390;
    uStack_2f8 = uStack_3f8;
    uStack_300 = uStack_400;
    uStack_2e8 = uStack_3e8;
    uStack_2f0 = uStack_3f0;
    uStack_2d8 = uStack_3d8;
    uStack_2e0 = uStack_3e0;
    uStack_2c8 = uStack_3c8;
    uStack_2d0 = uStack_3d0;
    uStack_338 = uStack_438;
    puStack_340 = puStack_440;
    uStack_328 = uStack_428;
    uStack_330 = uStack_430;
    uStack_318 = uStack_418;
    uStack_320 = uStack_420;
    uStack_308 = uStack_408;
    uStack_310 = uStack_410;
    FUN_1034bbc80(&puStack_340,apuStack_540);
    FUN_1035cd044(&puStack_340);
    func_0x0001034bbcbc(&puStack_440);
  }
  return;
}



/* Entry: 1034b2d4c; end: 1034b3be7;  */

void FUN_1034b2d4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  double dVar28;
  double dVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong *unaff_x20;
  long lVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined *puVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  undefined *puStack_710;
  undefined *puStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined *puStack_640;
  ulong uStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_500 [112];
  undefined *puStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [392];
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  puVar38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar31 = *(long *)(param_1 + 0x2c0);
  puStack_710 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((lVar31 != 0) && (lVar24 = *(long *)(lVar31 + 0x10), lVar24 != 0)) {
    puStack_2c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001034d9108(0,lVar24,0);
    puStack_710 = puStack_2c0;
    FUN_1034bb5ec(auStack_218);
    lVar33 = 0;
    do {
      plVar26 = (long *)(lVar31 + 0x20 + lVar33 * 0x18);
      lVar32 = *plVar26;
      dVar3 = (double)plVar26[1];
      lVar5 = plVar26[2];
      func_0x000107c610b4(&uStack_400,auStack_218,0x140);
      func_0x000107c61434(lVar32);
      func_0x00010363b174(&uStack_2b8);
      uVar36 = uStack_290;
      uVar40 = uStack_298;
      lVar12 = lStack_2a0;
      uVar11 = uStack_2a8;
      uVar10 = uStack_2b0;
      auStack_70[0] = uStack_2b8;
      uVar25 = *(ulong *)(lVar32 + 0x10);
      if (uVar25 == 0) {
        func_0x0001034bbc24(auStack_70,0x112f73230,&UNK_10dbce618);
        func_0x000107c6142c(lVar32);
        puStack_688 = puVar38;
      }
      else {
        puStack_408 = puVar38;
        func_0x0001034d912c(0,uVar25,0);
        if (*(long *)(lVar32 + 0x10) == 0) {
LAB_1034b3564:
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3568);
          (*pcVar21)();
        }
        uVar23 = 1;
        uVar22 = 0;
        puVar34 = puVar38;
        while( true ) {
          uVar27 = uVar23;
          puVar9 = puStack_408;
          plVar26 = (long *)(lVar32 + 0x20 + uVar22 * 0x48);
          lVar1 = *plVar26;
          dVar4 = (double)plVar26[1];
          lVar6 = plVar26[2];
          dVar28 = (double)plVar26[3];
          lVar7 = plVar26[4];
          dVar29 = (double)plVar26[5];
          lVar8 = plVar26[6];
          uVar23 = plVar26[7];
          uVar22 = plVar26[8];
          func_0x000107c61434(uVar22);
          func_0x000107c61434(lVar1);
          func_0x00010363b138(&uStack_288);
          uVar20 = uStack_220;
          uVar19 = uStack_228;
          lVar18 = lStack_230;
          uVar17 = uStack_238;
          uVar16 = uStack_240;
          lVar15 = lStack_248;
          uVar14 = uStack_250;
          uVar35 = uStack_258;
          lVar13 = lStack_260;
          uVar37 = uStack_278;
          uVar30 = uStack_280;
          uStack_78 = uStack_288;
          uStack_418 = uStack_268;
          uStack_420 = uStack_270;
          lStack_650 = lStack_260;
          uStack_648 = uStack_250;
          uStack_658 = uStack_240;
          lStack_668 = lStack_248;
          uStack_660 = uStack_238;
          uStack_670 = uStack_228;
          lStack_680 = lStack_230;
          uStack_678 = uStack_220;
          lVar39 = *(long *)(lVar1 + 0x10);
          if (lVar39 == 0) {
            func_0x0001034bbc24(&uStack_78,0x112f73228,&UNK_10dbce610);
            puVar38 = puVar34;
          }
          else {
            puStack_640 = puVar34;
            func_0x0001018fbb6c(0,lVar39,0);
            plVar26 = (long *)(lVar1 + 0x20);
            do {
              lVar41 = *plVar26;
              if (lVar41 < -0x80000000) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3554);
                (*pcVar21)();
              }
              if (0x7fffffff < lVar41) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3558);
                (*pcVar21)();
              }
              uVar2 = *(ulong *)(puStack_640 + 0x10);
              if (*(ulong *)(puStack_640 + 0x18) >> 1 <= uVar2) {
                func_0x0001018fbb6c(1 < *(ulong *)(puStack_640 + 0x18),uVar2 + 1,1);
              }
              puVar34 = puStack_640;
              *(ulong *)(puStack_640 + 0x10) = uVar2 + 1;
              *(int *)(puStack_640 + uVar2 * 4 + 0x20) = (int)lVar41;
              lVar39 = lVar39 + -1;
              plVar26 = plVar26 + 1;
            } while (lVar39 != 0);
            func_0x0001034bbc24(&uStack_78,0x112f73228,&UNK_10dbce610);
            puVar38 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          if ((char)lVar6 != '\x01') {
            if ((((ulong)dVar4 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b356c);
              (*pcVar21)();
            }
            if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3570);
              (*pcVar21)();
            }
            if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3578);
              (*pcVar21)();
            }
            lStack_650 = (long)dVar4;
            func_0x000100d54950(lVar13,uVar35,uVar14);
            uVar35 = 0;
            uStack_648 = 0xc000000000000000;
          }
          if ((char)lVar7 != '\x01') {
            if ((((ulong)dVar28 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3574);
              (*pcVar21)();
            }
            if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b357c);
              (*pcVar21)();
            }
            if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3584);
              (*pcVar21)();
            }
            lStack_668 = (long)dVar28;
            func_0x000100d54950(lVar15,uVar16,uVar17);
            uStack_660 = 0xc000000000000000;
            uStack_658 = 0;
          }
          if ((char)lVar8 != '\x01') {
            if ((((ulong)dVar29 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3580);
              (*pcVar21)();
            }
            if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3588);
              (*pcVar21)();
            }
            if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b358c);
              (*pcVar21)();
            }
            lStack_680 = (long)dVar29;
            func_0x000100d54950(lVar18,uVar19,uVar20);
            uStack_678 = 0xc000000000000000;
            uStack_670 = 0;
          }
          func_0x000107c6142c(lVar1);
          if (uVar22 != 0) {
            uVar2 = uVar23 & 0xffffffffffff;
            if ((uVar22 & 0x2000000000000000) != 0) {
              uVar2 = uVar22 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
              func_0x000107c6142c(uVar22);
            }
            else {
              uStack_88 = uStack_278;
              uStack_90 = uStack_280;
              func_0x000100bcb1dc(&uStack_90);
              uVar30 = uVar23;
              uVar37 = uVar22;
            }
          }
          uStack_470 = uStack_418;
          uStack_478 = uStack_420;
          lStack_468 = lStack_650;
          uStack_458 = uStack_648;
          lStack_450 = lStack_668;
          uStack_448 = uStack_658;
          uStack_440 = uStack_660;
          lStack_438 = lStack_680;
          uStack_430 = uStack_670;
          uStack_428 = uStack_678;
          uStack_620 = uStack_418;
          uStack_628 = uStack_420;
          lStack_618 = lStack_650;
          uStack_608 = uStack_648;
          lStack_600 = lStack_668;
          uStack_5f8 = uStack_658;
          uStack_5f0 = uStack_660;
          lStack_5e8 = lStack_680;
          uStack_5e0 = uStack_670;
          uStack_5d8 = uStack_678;
          puStack_640 = puVar34;
          uStack_638 = uVar30;
          uStack_630 = uVar37;
          uStack_610 = uVar35;
          puStack_490 = puVar34;
          uStack_488 = uVar30;
          uStack_480 = uVar37;
          uStack_460 = uVar35;
          func_0x0001034bbbb4(&puStack_490,auStack_500);
          func_0x0001034bbbf0(&puStack_640);
          uVar23 = *(ulong *)(puVar9 + 0x10);
          puStack_408 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar23) {
            func_0x0001034d912c(1 < *(ulong *)(puVar9 + 0x18),uVar23 + 1,1);
          }
          puStack_688 = puStack_408;
          *(ulong *)(puStack_408 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x38) = uStack_478;
          *(ulong *)(puStack_408 + uVar23 * 0x70 + 0x30) = uStack_480;
          *(long *)(puStack_408 + uVar23 * 0x70 + 0x48) = lStack_468;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x40) = uStack_470;
          *(ulong *)(puStack_408 + uVar23 * 0x70 + 0x28) = uStack_488;
          *(undefined **)(puStack_408 + uVar23 * 0x70 + 0x20) = puStack_490;
          *(long *)(puStack_408 + uVar23 * 0x70 + 0x78) = lStack_438;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x70) = uStack_440;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x88) = uStack_428;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x80) = uStack_430;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x58) = uStack_458;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x50) = uStack_460;
          *(undefined8 *)(puStack_408 + uVar23 * 0x70 + 0x68) = uStack_448;
          *(long *)(puStack_408 + uVar23 * 0x70 + 0x60) = lStack_450;
          if (uVar27 == uVar25) break;
          uVar23 = uVar27 + 1;
          uVar22 = uVar27;
          puVar34 = puVar38;
          if (*(ulong *)(lVar32 + 0x10) <= uVar27) goto LAB_1034b3564;
        }
        func_0x0001034bbc24(auStack_70,0x112f73230,&UNK_10dbce618);
        func_0x000107c6142c(lVar32);
      }
      lVar32 = lVar12;
      if ((char)lVar5 != '\x01') {
        if ((((ulong)dVar3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3590);
          (*pcVar21)();
        }
        if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3594);
          (*pcVar21)();
        }
        if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1034b3598);
          (*pcVar21)();
        }
        lVar32 = (long)dVar3;
        func_0x000100d54950(lVar12,uVar40,uVar36);
        uVar40 = 0;
        uVar36 = 0xc000000000000000;
      }
      func_0x000107c61434(puStack_688);
      func_0x00010006c00c(uVar10,uVar11);
      func_0x00010159fa60(lVar32,uVar40,uVar36);
      func_0x000107c6142c(puStack_688);
      func_0x00010006c090(uVar10,uVar11);
      func_0x000100d54950(lVar32,uVar40,uVar36);
      func_0x0001034bb624(0,0,0,0,0,0,0xff);
      func_0x000107c610b4(&puStack_640,&uStack_400,0x140);
      puStack_2c0 = puStack_710;
      uVar25 = *(ulong *)(puStack_710 + 0x10);
      if (*(ulong *)(puStack_710 + 0x18) >> 1 <= uVar25) {
        func_0x0001034d9108(1 < *(ulong *)(puStack_710 + 0x18),uVar25 + 1,1);
      }
      puStack_710 = puStack_2c0;
      lVar33 = lVar33 + 1;
      *(ulong *)(puStack_2c0 + 0x10) = uVar25 + 1;
      *(undefined **)(puStack_2c0 + uVar25 * 0x188 + 0x20) = puStack_688;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x28) = uVar10;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x30) = uVar11;
      *(long *)(puStack_2c0 + uVar25 * 0x188 + 0x38) = lVar32;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x40) = uVar40;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x48) = uVar36;
      puStack_2c0[uVar25 * 0x188 + 0x50] = 0;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x60) = 0xc000000000000000;
      *(undefined8 *)(puStack_2c0 + uVar25 * 0x188 + 0x58) = 0;
      func_0x000107c610b4(puStack_2c0 + uVar25 * 0x188 + 0x68,&puStack_640,0x140);
    } while (lVar33 != lVar24);
  }
  FUN_1035cd234(puStack_710);
  uStack_3e8 = *(ulong *)(param_1 + 0x3b8);
  if ((uStack_3e8 & 0xff) != 2) {
    uStack_3f8 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_400 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_3f0 = *(undefined8 *)(param_1 + 0x3b0);
    uStack_3d8 = *(undefined8 *)(param_1 + 0x3c8);
    uStack_3e0 = *(undefined8 *)(param_1 + 0x3c0);
    uStack_3c8 = *(undefined8 *)(param_1 + 0x3d8);
    uStack_3d0 = *(undefined8 *)(param_1 + 0x3d0);
    uStack_3b8 = *(undefined8 *)(param_1 + 1000);
    uStack_3c0 = *(undefined8 *)(param_1 + 0x3e0);
    uStack_3a8 = *(undefined8 *)(param_1 + 0x3f8);
    uStack_3b0 = *(undefined8 *)(param_1 + 0x3f0);
    FUN_1034cb660(auStack_218,&uStack_400);
    uVar25 = *unaff_x20;
    FUN_1035cd1f4(uVar25,unaff_x20[1],unaff_x20[2]);
    uVar23 = uVar25;
    func_0x000107c61558();
    uVar22 = uVar25;
    if ((uVar23 & 1) == 0) {
      uVar22 = 0;
      FUN_1034d874c(0,*(long *)(uVar25 + 0x10) + 1,1,uVar25);
    }
    uVar25 = *(ulong *)(uVar22 + 0x10);
    uVar23 = uVar22;
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar25) {
      uVar23 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      FUN_1034d874c(uVar23,uVar25 + 1,1,uVar22);
    }
    *(ulong *)(uVar23 + 0x10) = uVar25 + 1;
    func_0x000107c610b4(uVar23 + uVar25 * 0x188 + 0x20,auStack_218,0x188);
    FUN_1035cd234(uVar23);
  }
  return;
}



/* Entry: 1034b3be8; end: 1034b3dab;  */

void FUN_1034b3be8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 unaff_x20;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int aiStack_2a0 [2];
  undefined8 auStack_298 [19];
  long alStack_200 [50];
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1[1] != 0) {
    func_0x000107c5eea8(puVar9,*param_1);
    puVar5 = puVar9;
    (**(code **)(lVar13 + 0x30))(puVar9,1,lVar4);
    if ((int)puVar5 == 1) {
      func_0x0001034bbc24(puVar9,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      lVar6 = lVar12;
      (**(code **)(lVar13 + 0x20))(lVar12,puVar9,lVar4);
      func_0x000107c5eec0();
      lStack_68 = lVar6;
      puStack_60 = puVar9;
      func_0x000107c5eec0();
      func_0x000100e37074(&lStack_68,&lStack_58);
      func_0x0001035cba58();
      (**(code **)(lVar13 + 8))(lVar12,lVar4);
    }
  }
  FUN_1035cc084(*(byte *)(param_1 + 0x21) & 1,0,0xc000000000000000);
  lVar6 = 0;
  func_0x000100b91d00();
  lVar6 = param_2 + *(int *)(lVar6 + 100);
  uVar1 = 0;
  if (*(long *)(lVar6 + 8) != 1) {
    uVar1 = (uint)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 8) & 1;
  }
  uVar7 = (ulong)uVar1;
  lVar6 = 0;
  uVar10 = 0;
  FUN_1035cbea8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar12 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar12 + -0x58) = unaff_x27;
  *(undefined8 *)(lVar12 + -0x50) = unaff_x26;
  *(long *)(lVar12 + -0x48) = lVar13;
  *(long *)(lVar12 + -0x40) = lVar12;
  *(long *)(lVar12 + -0x38) = lVar4;
  *(undefined8 **)(lVar12 + -0x30) = param_1;
  *(long *)(lVar12 + -0x28) = param_2;
  *(undefined8 *)(lVar12 + -0x20) = unaff_x20;
  *(undefined8 *)(lVar12 + -0x18) = unaff_x20;
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_1034b3dac;
  iVar2 = (int)lVar12 + -0x230;
  lVar4 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (lVar12 + -0x230) - extraout_x8_01;
  lVar4 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar14 - extraout_x8_02;
  lVar4 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  piVar11 = (int *)(lVar13 - extraout_x8_03);
  FUN_1035cb33c((float)*(long *)(uVar7 + 0x20) / 1000.0,0,0xc000000000000000);
  if ((uVar10 & 1) != 0) {
    lVar4 = 0;
    func_0x000100b91d00();
    if (*(int *)(lVar6 + *(int *)(lVar4 + 0x48)) != 0) {
      func_0x0001035cb538((float)(*(double *)(uVar7 + 0x60) / 1000.0),0,0xc000000000000000);
    }
  }
  if ((*(byte *)(uVar7 + 0x78) & 1) != 0) {
    uVar16 = *(undefined8 *)(uVar7 + 0xe0);
    uVar18 = *(undefined8 *)(uVar7 + 0xf8);
    uVar17 = *(undefined8 *)(uVar7 + 0xf0);
    *(undefined8 *)(lVar12 + -0x88) = *(undefined8 *)(uVar7 + 0xe8);
    *(undefined8 *)(lVar12 + -0x90) = uVar16;
    *(undefined8 *)(lVar12 + -0x78) = uVar18;
    *(undefined8 *)(lVar12 + -0x80) = uVar17;
    *(undefined8 *)(lVar12 + -0x70) = *(undefined8 *)(uVar7 + 0x100);
    uVar16 = *(undefined8 *)(uVar7 + 0xa0);
    uVar18 = *(undefined8 *)(uVar7 + 0xb8);
    uVar17 = *(undefined8 *)(uVar7 + 0xb0);
    *(undefined8 *)(lVar12 + -200) = *(undefined8 *)(uVar7 + 0xa8);
    *(undefined8 *)(lVar12 + -0xd0) = uVar16;
    *(undefined8 *)(lVar12 + -0xb8) = uVar18;
    *(undefined8 *)(lVar12 + -0xc0) = uVar17;
    uVar18 = *(undefined8 *)(uVar7 + 0xc0);
    uVar17 = *(undefined8 *)(uVar7 + 0xd8);
    uVar16 = *(undefined8 *)(uVar7 + 0xd0);
    *(undefined8 *)(lVar12 + -0xa8) = *(undefined8 *)(uVar7 + 200);
    *(undefined8 *)(lVar12 + -0xb0) = uVar18;
    *(undefined8 *)(lVar12 + -0x98) = uVar17;
    *(undefined8 *)(lVar12 + -0xa0) = uVar16;
    uVar18 = *(undefined8 *)(uVar7 + 0x80);
    uVar17 = *(undefined8 *)(uVar7 + 0x98);
    uVar16 = *(undefined8 *)(uVar7 + 0x90);
    *(undefined8 *)(lVar12 + -0xe8) = *(undefined8 *)(uVar7 + 0x88);
    *(undefined8 *)(lVar12 + -0xf0) = uVar18;
    *(undefined8 *)(lVar12 + -0xd8) = uVar17;
    *(undefined8 *)(lVar12 + -0xe0) = uVar16;
    iVar3 = (int)lVar12 + -0xf0;
    FUN_1034bba7c();
    fVar15 = 0.0;
    if (iVar3 != 1) {
      fVar15 = (float)*(long *)(lVar12 + -0x80) / 1000.0;
    }
    FUN_1035cbae8(fVar15,0,0xc000000000000000);
    FUN_1035cbccc((float)(*(double *)(uVar7 + 0x40) / 1000.0),0,0xc000000000000000);
    func_0x000103bfc9d0(lVar14,*(undefined8 *)(uVar7 + 0x10));
    lVar6 = 0;
    func_0x0001046d90b0();
    lVar4 = lVar14;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar14,1,lVar6);
    if ((int)lVar4 == 1) {
      func_0x0001034bbc24(lVar14,0x112dcbcf8,&UNK_10d98e3f0);
    }
    else {
      FUN_1034bbabc(lVar14 + *(int *)(lVar6 + 0x28),lVar13,0x112db3a00,&UNK_10d95dff0);
      func_0x0001034bb9d0(lVar14,&SUB_1046d90b0);
      lVar6 = 0;
      func_0x00010477ea9c();
      lVar4 = lVar13;
      (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar13,1,lVar6);
      if ((int)lVar4 == 1) {
        func_0x0001034bbc24(lVar13,0x112db3a00,&UNK_10d95dff0);
      }
      else {
        FUN_1034bbabc(lVar13,piVar11,0x112db3ee8,&UNK_10d95e470);
        func_0x0001034bb9d0(lVar13,&SUB_10477ea9c);
        lVar4 = 0;
        func_0x00010474425c();
        piVar8 = piVar11;
        (**(code **)(*(long *)(lVar4 + -8) + 0x30))(piVar11,1,lVar4);
        if ((int)piVar8 == 1) {
          func_0x0001034bbc24(piVar11,0x112db3ee8,&UNK_10d95e470);
        }
        else {
          iVar3 = *piVar11;
          func_0x0001034bb9d0(piVar11,&SUB_10474425c);
          if (iVar3 == 2) {
            func_0x0001035cbd74((float)(*(double *)(uVar7 + 0x48) / 1000.0),0,0xc000000000000000);
            func_0x000107c61434(*(undefined8 *)(uVar7 + 0x50));
            FUN_1034cbb44(lVar12 + -0x230);
            func_0x0001034bba94();
            if (iVar2 != 1) {
              *(undefined8 *)(lVar12 + -0x128) = *(undefined8 *)(lVar12 + -0x1c8);
              *(undefined8 *)(lVar12 + -0x130) = *(undefined8 *)(lVar12 + -0x1d0);
              *(undefined8 *)(lVar12 + -0x118) = *(undefined8 *)(lVar12 + -0x1b8);
              *(undefined8 *)(lVar12 + -0x120) = *(undefined8 *)(lVar12 + -0x1c0);
              *(undefined8 *)(lVar12 + -0x108) = *(undefined8 *)(lVar12 + -0x1a8);
              *(undefined8 *)(lVar12 + -0x110) = *(undefined8 *)(lVar12 + -0x1b0);
              *(undefined8 *)(lVar12 + -0xf8) = *(undefined8 *)(lVar12 + -0x198);
              *(undefined8 *)(lVar12 + -0x100) = *(undefined8 *)(lVar12 + -0x1a0);
              *(undefined8 *)(lVar12 + -0x168) = *(undefined8 *)(lVar12 + -0x208);
              *(undefined8 *)(lVar12 + -0x170) = *(undefined8 *)(lVar12 + -0x210);
              *(undefined8 *)(lVar12 + -0x158) = *(undefined8 *)(lVar12 + -0x1f8);
              *(undefined8 *)(lVar12 + -0x160) = *(undefined8 *)(lVar12 + -0x200);
              *(undefined8 *)(lVar12 + -0x148) = *(undefined8 *)(lVar12 + -0x1e8);
              *(undefined8 *)(lVar12 + -0x150) = *(undefined8 *)(lVar12 + -0x1f0);
              *(undefined8 *)(lVar12 + -0x138) = *(undefined8 *)(lVar12 + -0x1d8);
              *(undefined8 *)(lVar12 + -0x140) = *(undefined8 *)(lVar12 + -0x1e0);
              *(undefined8 *)(lVar12 + -0x188) = *(undefined8 *)(lVar12 + -0x228);
              *(undefined8 *)(lVar12 + -400) = *(undefined8 *)(lVar12 + -0x230);
              *(undefined8 *)(lVar12 + -0x178) = *(undefined8 *)(lVar12 + -0x218);
              *(undefined8 *)(lVar12 + -0x180) = *(undefined8 *)(lVar12 + -0x220);
              FUN_1035cbb90(lVar12 + -400);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1034b3dac; end: 1034b4173;  */

void FUN_1034b3dac(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int *piVar7;
  long lVar8;
  float fVar9;
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
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iVar1 = (int)&uStack_230;
  lVar3 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_230 - extraout_x8;
  lVar3 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar5 - extraout_x8_00;
  lVar3 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  piVar7 = (int *)(lVar8 - extraout_x8_01);
  FUN_1035cb33c((float)*(long *)(param_1 + 0x20) / 1000.0,0,0xc000000000000000);
  if ((param_3 & 1) != 0) {
    lVar3 = 0;
    func_0x000100b91d00();
    if (*(int *)(param_2 + *(int *)(lVar3 + 0x48)) != 0) {
      func_0x0001035cb538((float)(*(double *)(param_1 + 0x60) / 1000.0),0,0xc000000000000000);
    }
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0xe8);
    uStack_90 = *(undefined8 *)(param_1 + 0xe0);
    uStack_78 = *(undefined8 *)(param_1 + 0xf8);
    lStack_80 = *(long *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0x100);
    uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
    uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
    uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
    uStack_a8 = *(undefined8 *)(param_1 + 200);
    uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
    uStack_98 = *(undefined8 *)(param_1 + 0xd8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
    uStack_e8 = *(undefined8 *)(param_1 + 0x88);
    uStack_f0 = *(undefined8 *)(param_1 + 0x80);
    uStack_d8 = *(undefined8 *)(param_1 + 0x98);
    uStack_e0 = *(undefined8 *)(param_1 + 0x90);
    iVar2 = (int)&uStack_f0;
    FUN_1034bba7c();
    fVar9 = 0.0;
    if (iVar2 != 1) {
      fVar9 = (float)lStack_80 / 1000.0;
    }
    FUN_1035cbae8(fVar9,0,0xc000000000000000);
    FUN_1035cbccc((float)(*(double *)(param_1 + 0x40) / 1000.0),0,0xc000000000000000);
    func_0x000103bfc9d0(lVar5,*(undefined8 *)(param_1 + 0x10));
    lVar4 = 0;
    func_0x0001046d90b0();
    lVar3 = lVar5;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar5,1,lVar4);
    if ((int)lVar3 == 1) {
      func_0x0001034bbc24(lVar5,0x112dcbcf8,&UNK_10d98e3f0);
    }
    else {
      FUN_1034bbabc(lVar5 + *(int *)(lVar4 + 0x28),lVar8,0x112db3a00,&UNK_10d95dff0);
      func_0x0001034bb9d0(lVar5,&SUB_1046d90b0);
      lVar5 = 0;
      func_0x00010477ea9c();
      lVar3 = lVar8;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar8,1,lVar5);
      if ((int)lVar3 == 1) {
        func_0x0001034bbc24(lVar8,0x112db3a00,&UNK_10d95dff0);
      }
      else {
        FUN_1034bbabc(lVar8,piVar7,0x112db3ee8,&UNK_10d95e470);
        func_0x0001034bb9d0(lVar8,&SUB_10477ea9c);
        lVar3 = 0;
        func_0x00010474425c();
        piVar6 = piVar7;
        (**(code **)(*(long *)(lVar3 + -8) + 0x30))(piVar7,1,lVar3);
        if ((int)piVar6 == 1) {
          func_0x0001034bbc24(piVar7,0x112db3ee8,&UNK_10d95e470);
        }
        else {
          iVar2 = *piVar7;
          func_0x0001034bb9d0(piVar7,&SUB_10474425c);
          if (iVar2 == 2) {
            func_0x0001035cbd74((float)(*(double *)(param_1 + 0x48) / 1000.0),0,0xc000000000000000);
            func_0x000107c61434(*(undefined8 *)(param_1 + 0x50));
            FUN_1034cbb44(&uStack_230);
            func_0x0001034bba94();
            if (iVar1 != 1) {
              uStack_128 = uStack_1c8;
              uStack_130 = uStack_1d0;
              uStack_118 = uStack_1b8;
              uStack_120 = uStack_1c0;
              uStack_108 = uStack_1a8;
              uStack_110 = uStack_1b0;
              uStack_f8 = uStack_198;
              uStack_100 = uStack_1a0;
              uStack_168 = uStack_208;
              uStack_170 = uStack_210;
              uStack_158 = uStack_1f8;
              uStack_160 = uStack_200;
              uStack_148 = uStack_1e8;
              uStack_150 = uStack_1f0;
              uStack_138 = uStack_1d8;
              uStack_140 = uStack_1e0;
              uStack_188 = uStack_228;
              uStack_190 = uStack_230;
              uStack_178 = uStack_218;
              uStack_180 = uStack_220;
              FUN_1035cbb90(&uStack_190);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1034b4174; end: 1034b446b;  */

void FUN_1034b4174(long param_1)

{
  double dVar1;
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
  int iVar14;
  undefined8 uVar15;
  undefined1 auStack_660 [344];
  undefined8 uStack_508;
  undefined1 uStack_500;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [344];
  undefined1 auStack_258 [344];
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  
  dStack_b8 = *(double *)(param_1 + 0x208);
  dStack_c0 = *(double *)(param_1 + 0x200);
  dStack_a8 = *(double *)(param_1 + 0x218);
  dStack_b0 = *(double *)(param_1 + 0x210);
  dStack_a0 = *(double *)(param_1 + 0x220);
  uStack_98 = (undefined1)*(undefined8 *)(param_1 + 0x228);
  uStack_8f = (undefined7)*(undefined8 *)(param_1 + 0x231);
  uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x231) >> 0x38);
  uStack_97 = (undefined7)*(undefined8 *)(param_1 + 0x229);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x229) >> 0x38);
  dStack_f8 = *(double *)(param_1 + 0x1c8);
  dStack_100 = *(double *)(param_1 + 0x1c0);
  dStack_e8 = *(double *)(param_1 + 0x1d8);
  dStack_f0 = *(double *)(param_1 + 0x1d0);
  dStack_d8 = *(double *)(param_1 + 0x1e8);
  dStack_e0 = *(double *)(param_1 + 0x1e0);
  dStack_c8 = *(double *)(param_1 + 0x1f8);
  dStack_d0 = *(double *)(param_1 + 0x1f0);
  iVar14 = (int)&dStack_100;
  func_0x0001018793b8();
  dVar13 = dStack_a0;
  dVar12 = dStack_a8;
  dVar11 = dStack_b0;
  dVar10 = dStack_b8;
  dVar9 = dStack_c0;
  dVar8 = dStack_c8;
  dVar7 = dStack_d0;
  dVar6 = dStack_d8;
  dVar5 = dStack_e0;
  dVar4 = dStack_e8;
  dVar3 = dStack_f0;
  dVar2 = dStack_f8;
  dVar1 = dStack_100;
  if (iVar14 != 1) {
    uVar15 = CONCAT71(uStack_8f,uStack_90);
    func_0x00010363d518(auStack_3b0);
    func_0x000107c610b4(&uStack_508,auStack_3b0,0x158);
    func_0x000100d54950(uStack_4d0,uStack_4c8,uStack_4c0);
    uStack_4c0 = 0xc000000000000000;
    uStack_4c8 = 0;
    uStack_4d0 = (ulong)(uint)(float)dVar1;
    func_0x000100d54950(uStack_4a0,uStack_498,uStack_490);
    uStack_490 = 0xc000000000000000;
    uStack_498 = 0;
    uStack_4a0 = (ulong)(uint)(float)dVar2;
    func_0x000100d54950(uStack_4e8,uStack_4e0,uStack_4d8);
    uStack_4d8 = 0xc000000000000000;
    uStack_4e0 = 0;
    uStack_4e8 = (ulong)(uint)(float)dVar3;
    func_0x000100d54950(uStack_4b8,uStack_4b0,uStack_4a8);
    uStack_4a8 = 0xc000000000000000;
    uStack_4b0 = 0;
    uStack_4b8 = (ulong)(uint)(float)dVar4;
    func_0x000100d54950(uStack_470,uStack_468,uStack_460);
    uStack_460 = 0xc000000000000000;
    uStack_468 = 0;
    uStack_470 = (ulong)(uint)(float)dVar9;
    func_0x000100d54950(uStack_440,uStack_438,uStack_430);
    uStack_430 = 0xc000000000000000;
    uStack_438 = 0;
    uStack_440 = (ulong)(uint)(float)dVar10;
    func_0x000100d54950(uStack_488,uStack_480,uStack_478);
    uStack_478 = 0xc000000000000000;
    uStack_480 = 0;
    uStack_488 = (ulong)(uint)(float)dVar11;
    func_0x000100d54950(uStack_458,uStack_450,uStack_448);
    uStack_448 = 0xc000000000000000;
    uStack_450 = 0;
    uStack_458 = (ulong)(uint)(float)dVar12;
    func_0x000100d54950(uStack_428,uStack_420,uStack_418);
    uStack_418 = 0xc000000000000000;
    uStack_420 = 0;
    uStack_428 = (ulong)(uint)(float)dVar13;
    func_0x000100d54950(uStack_3f8,uStack_3f0,uStack_3e8);
    uStack_3e8 = 0xc000000000000000;
    uStack_3f0 = 0;
    uStack_3f8 = (ulong)(uint)(float)dVar5;
    func_0x000100d54950(uStack_3c8,uStack_3c0,uStack_3b8);
    uStack_3b8 = 0xc000000000000000;
    uStack_3c0 = 0;
    uStack_3c8 = (ulong)(uint)(float)dVar6;
    func_0x000100d54950(uStack_410,uStack_408,uStack_400);
    uStack_400 = 0xc000000000000000;
    uStack_408 = 0;
    uStack_410 = (ulong)(uint)(float)dVar7;
    func_0x000100d54950(uStack_3e0,uStack_3d8,uStack_3d0);
    uStack_500 = (undefined1)uStack_3d8;
    uStack_3d0 = 0xc000000000000000;
    uStack_3d8 = 0;
    uStack_3e0 = (ulong)(uint)(float)dVar8;
    FUN_1034cbe20();
    uStack_508 = uVar15;
    func_0x000107c610b4(auStack_258,&uStack_508,0x158);
    func_0x0001034bba0c(auStack_258,auStack_660);
    FUN_1035ccf70(auStack_258);
    func_0x0001034bba48(&uStack_508);
  }
  return;
}



/* Entry: 1034b446c; end: 1034b544b;  */

/* WARNING: Removing unreachable block (ram,0x0001034b50e4) */

void FUN_1034b446c(double param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,double param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined *puVar14;
  long extraout_x8;
  long *plVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  ulong *unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  code *pcVar25;
  ulong uVar26;
  long lStack_7e0;
  long *plStack_7d8;
  long alStack_7d0 [4];
  long lStack_7b0;
  long lStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  double dStack_790;
  undefined8 uStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  undefined8 uStack_750;
  long lStack_748;
  long lStack_740;
  code *pcStack_738;
  undefined1 auStack_700 [392];
  long lStack_578;
  long lStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_530 [320];
  undefined1 auStack_3f0 [320];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  double dStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  double dStack_280;
  undefined8 uStack_278;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar4 = 0;
  uStack_7a0 = param_5;
  uStack_798 = param_8;
  dStack_790 = param_7;
  lStack_758 = param_6;
  uStack_750 = param_2;
  func_0x00010474425c();
  lStack_780 = *(long *)(lVar4 + -8);
  lStack_778 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_780 + 0x40));
  plVar15 = (long *)((long)&lStack_7e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3ee8;
  plStack_7d8 = plVar15;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = (long)plVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_7d0[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar4 = 0x112db3a00;
  lStack_7a8 = lVar16;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_7d0[1] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  alStack_7d0[3] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_01;
  lVar4 = 0x112dcbf08;
  lStack_7b0 = lVar16;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_02;
  lVar4 = 0x112db3cd0;
  alStack_7d0[0] = lVar16;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_03;
  lVar5 = 0;
  lStack_748 = lVar16;
  func_0x0001046d90b0();
  lVar23 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar16 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_770 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar26 = lVar16 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = uVar26 - extraout_x12_03;
  lVar4 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar17 = lVar22 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_768 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar17 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar21 - extraout_x12_06;
  func_0x000103bfc9d0(lVar16,*(undefined8 *)(param_3 + 0x10));
  uVar18 = *(undefined8 *)(param_4 + 0x20);
  lStack_760 = param_4;
  FUN_1034bbabc(lVar16,lVar21,0x112dcbcf8,&UNK_10d98e3f0);
  pcStack_738 = *(code **)(lVar23 + 0x30);
  lVar4 = lVar21;
  lStack_740 = lVar5;
  (*pcStack_738)(lVar21,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x0001034bbc24(lVar21,0x112dcbcf8,&UNK_10d98e3f0);
    uVar26 = 1;
    lVar4 = lStack_758;
  }
  else {
    func_0x0001034bb98c(lVar21,lVar22,&SUB_1046d90b0);
    func_0x0001034bb948(lVar22,uVar26,&SUB_1046d90b0);
    func_0x0001047c6864(0);
    func_0x000107c610f8();
    func_0x0001047c2b40();
    uVar19 = *(undefined8 *)(lVar22 + 0x10);
    uVar6 = 0;
    func_0x000103bffd54(0);
    lVar4 = lStack_758;
    uVar12 = uVar26;
    func_0x000103bfe42c(uVar6,uVar26,uVar19,uVar18,uStack_7a0,lStack_758,uStack_798,dStack_790,0);
    func_0x000107c61170(uVar26);
    func_0x0001034bb9d0(lVar22,&SUB_1046d90b0);
    uVar26 = uVar12 & 0xffffffff;
    if (4 < (int)uVar12 - 2U) {
      uVar26 = 1;
    }
  }
  func_0x0001035cd2c0(uVar26,1);
  func_0x0001034b85e4(lStack_760,lVar16);
  FUN_1034cbe4c();
  FUN_1035ccd68();
  FUN_1034b8d20();
  if (lVar4 != 0) {
    uVar18 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f154210);
    func_0x000107c4dfc0();
    func_0x000107c61170(uVar18);
  }
  lVar4 = lStack_740;
  FUN_1034cbe4c();
  FUN_1035cce34();
  FUN_1034bbabc(lVar16,lVar17,0x112dcbcf8,&UNK_10d98e3f0);
  lVar5 = lVar17;
  (*pcStack_738)(lVar17,1,lVar4);
  if ((int)lVar5 == 1) {
    func_0x0001034bbc24(lVar17,0x112dcbcf8,&UNK_10d98e3f0);
  }
  else {
    iVar2 = *(int *)(lVar17 + *(int *)(lVar4 + 0x70) + 0x80);
    func_0x0001034bb9d0(lVar17,&SUB_1046d90b0);
    if ((0xfffffffd < iVar2 - 3U) && (*(char *)(param_3 + 0x550) != '\x01')) {
      uVar26 = *(ulong *)(param_3 + 0x540);
      uVar12 = *(ulong *)(param_3 + 0x548);
      uStack_788 = 0xc000000000000000;
      dStack_790 = 0.0;
      uStack_2a8 = 0xc000000000000000;
      uStack_2b0 = 0;
      dStack_298 = 0.0;
      uStack_2a0 = 0;
      uStack_290 = 0xf000000000000000;
      uStack_288 = 0;
      dStack_280 = 0.0;
      uStack_278 = 0xf000000000000000;
      if ((long)uVar26 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5434);
        (*pcVar25)();
      }
      if (0x7fffffff < (long)uVar26) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5438);
        (*pcVar25)();
      }
      uVar26 = uVar26 & 0xffffffff;
      func_0x000100d54950(0,0,0xf000000000000000);
      uStack_290 = uStack_788;
      dStack_298 = dStack_790;
      uStack_2a0 = uVar26;
      if ((long)uVar12 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b543c);
        (*pcVar25)();
      }
      if (0x7fffffff < (long)uVar12) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5440);
        (*pcVar25)();
      }
      func_0x000100d54950(uStack_288,dStack_280,uStack_278);
      uStack_278 = uStack_788;
      dStack_280 = dStack_790;
      uStack_b8 = uStack_2a8;
      uStack_c0 = uStack_2b0;
      dStack_a8 = dStack_298;
      uStack_b0 = uStack_2a0;
      uStack_a0 = uStack_290;
      uStack_88 = uStack_788;
      dStack_90 = dStack_790;
      param_1 = dStack_790;
      uStack_288 = uVar12 & 0xffffffff;
      uStack_98 = uVar12 & 0xffffffff;
      func_0x0001034bb76c(&uStack_c0,&lStack_578);
      func_0x0001035ce808(&uStack_c0);
      func_0x0001034bb7a8(&uStack_2b0);
    }
  }
  lVar5 = *(long *)(param_3 + 0x558);
  if (lVar5 != 0) {
    dVar24 = *(double *)(param_3 + 0x560);
    cVar3 = *(char *)(param_3 + 0x568);
    FUN_10362dae8(&uStack_128);
    uStack_f8 = uStack_128;
    func_0x000107c61434(lVar5);
    func_0x0001034bbc24(&uStack_f8,0x112d38270,&UNK_10d905a20);
    lVar4 = lStack_110;
    if (cVar3 != '\x01') {
      if ((((ulong)dVar24 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b53e8);
        (*pcVar25)();
      }
      if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b53ec);
        (*pcVar25)();
      }
      if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5430);
        (*pcVar25)();
      }
      lVar4 = (long)dVar24;
      func_0x000100d54950(lStack_110,uStack_108,uStack_100);
      uStack_108 = 0;
      uStack_100 = 0xc000000000000000;
      param_1 = dVar24;
    }
    uStack_e8 = uStack_120;
    uStack_e0 = uStack_118;
    lStack_f0 = lVar5;
    lStack_d8 = lVar4;
    uStack_d0 = uStack_108;
    uStack_c8 = uStack_100;
    func_0x0001034bb730(&lStack_f0,&uStack_2b0);
    FUN_1035ce744(&lStack_f0);
    func_0x000107c6142c(lVar5);
    func_0x00010006c090(uStack_120,uStack_118);
    func_0x000100d54950(lVar4,uStack_108,uStack_100);
    lVar4 = lStack_740;
  }
  lVar21 = lStack_748;
  lVar17 = lStack_768;
  FUN_1034bbabc(lVar16,lStack_768,0x112dcbcf8,&UNK_10d98e3f0);
  lVar22 = lVar17;
  (*pcStack_738)(lVar17,1,lVar4);
  lVar5 = lStack_770;
  if ((int)lVar22 == 1) {
    func_0x0001034bbc24(lVar16,0x112dcbcf8,&UNK_10d98e3f0);
    lVar16 = lVar17;
    goto LAB_1034b5348;
  }
  func_0x0001034bb98c(lVar17,lStack_770,&SUB_1046d90b0);
  lVar22 = lStack_7b0;
  lVar20 = (long)*(int *)(lVar4 + 0x28);
  FUN_1034bbabc(lVar5 + lVar20,lStack_7b0,0x112db3a00,&UNK_10d95dff0);
  lVar7 = 0;
  func_0x00010477ea9c();
  pcVar25 = *(code **)(*(long *)(lVar7 + -8) + 0x30);
  lVar23 = lVar22;
  (*pcVar25)(lVar22,1,lVar7);
  lVar17 = alStack_7d0[0];
  if ((int)lVar23 == 1) {
    uVar13 = 0x12db3a00;
    func_0x0001034bbc24(lVar22,0x112db3a00,&UNK_10d95dff0);
    lVar22 = lStack_7a8;
  }
  else {
    FUN_1034bbabc(lVar22 + *(int *)(lVar7 + 0x14),alStack_7d0[0],0x112dcbf08,&UNK_10d98e580);
    func_0x0001034bb9d0(lVar22,&SUB_10477ea9c);
    lVar8 = 0;
    func_0x000104760f24();
    lVar23 = lVar17;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar17,1,lVar8);
    lVar22 = lStack_7a8;
    if ((int)lVar23 == 1) {
      uVar18 = 0x112dcbf08;
      puVar14 = &UNK_10d98e580;
      lVar21 = lVar17;
    }
    else {
      FUN_1034bbabc(lVar17 + *(int *)(lVar8 + 0x20),lVar21,0x112db3cd0,&UNK_10d95e230);
      func_0x0001034bb9d0(lVar17,&SUB_104760f24);
      lVar23 = 0;
      func_0x00010471853c();
      lVar17 = lVar21;
      (**(code **)(*(long *)(lVar23 + -8) + 0x30))(lVar21,1,lVar23);
      if ((int)lVar17 != 1) {
        plVar15 = (long *)(lVar21 + *(int *)(lVar23 + 0x1c));
        lVar23 = *plVar15;
        lVar17 = plVar15[1];
        uVar13 = 0x471853c;
        func_0x0001034bb9d0(lVar21);
        if ((char)lVar17 != '\x01') {
          if (lVar23 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5444);
            (*pcVar25)();
          }
          if (0x7fffffff < lVar23) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b5448);
            (*pcVar25)();
          }
          uVar13 = 0;
          FUN_1035ce158(lVar23,0,0xc000000000000000);
        }
        goto LAB_1034b4d74;
      }
      uVar18 = 0x112db3cd0;
      puVar14 = &UNK_10d95e230;
    }
    func_0x0001034bbc24(lVar21,uVar18,puVar14);
    uVar13 = (uint)uVar18;
  }
LAB_1034b4d74:
  lVar17 = lStack_760;
  FUN_1034b8ecc(lStack_760);
  FUN_1035cdbf0((uint)lVar17 & 1);
  lVar17 = lVar5;
  func_0x0001034ba208(lVar5);
  FUN_1035ce044((uint)lVar17 & 1);
  lVar4 = lVar5 + *(int *)(lVar4 + 0x70);
  uVar18 = *(undefined8 *)(lVar4 + 0x18);
  FUN_10360de4c(uVar18);
  if ((uVar13 & 0xff00) == 0x100) {
    uVar13 = 1;
    uVar18 = 0;
  }
  func_0x0001035ce0cc(uVar18);
  uVar18 = *(undefined8 *)(lVar4 + 0x20);
  FUN_10360e2b4(uVar18);
  if ((uVar13 & 0xff00) == 0x100) {
    uVar13 = 1;
    uVar18 = 0;
  }
  FUN_1035ce208(uVar18,uVar13);
  uVar13 = (uint)(*(ulong *)(lVar4 + 0x50) < 3);
  FUN_1035cecc8();
  uVar18 = *(undefined8 *)(lVar4 + 0x48);
  FUN_10360deec(uVar18);
  if ((uVar13 & 0xff00) == 0x100) {
    uVar13 = 1;
    uVar18 = 0;
  }
  func_0x0001035ce8d4(uVar18,uVar13);
  lVar4 = alStack_7d0[3];
  FUN_1034bbabc(lVar5 + lVar20,alStack_7d0[3],0x112db3a00,&UNK_10d95dff0);
  lVar17 = lVar4;
  (*pcVar25)(lVar4,1,lVar7);
  if ((int)lVar17 == 1) {
    func_0x0001034bbc24(lVar4,0x112db3a00,&UNK_10d95dff0);
    lVar17 = lStack_778;
    lVar4 = lStack_780;
  }
  else {
    FUN_1034bbabc(lVar4,lVar22,0x112db3ee8,&UNK_10d95e470);
    func_0x0001034bb9d0(lVar4,&SUB_10477ea9c);
    lVar17 = lStack_778;
    lVar4 = lStack_780;
    lVar21 = lVar22;
    (**(code **)(lStack_780 + 0x30))(lVar22,1,lStack_778);
    if ((int)lVar21 == 1) {
      func_0x0001034bbc24(lVar22,0x112db3ee8,&UNK_10d95e470);
    }
    else {
      puVar1 = (ulong *)(lVar22 + *(int *)(lVar17 + 0x34));
      uVar26 = *puVar1;
      uVar12 = puVar1[1];
      func_0x000100de78a0(uVar26,uVar12);
      func_0x0001034bb9d0(lVar22,&SUB_10474425c);
      if (uVar12 >> 0x3c < 0xf) {
        func_0x000107c610f8(PTR_PTR_1126bdd18);
        func_0x000100de78a0(uVar26,uVar12);
        uVar11 = uVar26;
        FUN_1034baf6c(uVar26,uVar12);
        func_0x0001000b44c0(uVar26,uVar12);
        if (uVar11 != 0) {
          uVar9 = uVar11;
          func_0x000107c4ddd8();
          func_0x000107c61180();
          if (uVar9 != 0) {
            func_0x000107c4ddcc();
            func_0x0001035cdc78();
            uVar10 = uVar9;
            func_0x000107c449dc();
            if ((uVar10 & 1) != 0) {
              uVar10 = uVar9;
              func_0x000107c4ddd0();
              func_0x000107c61180();
              if (uVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1034b544c);
                (*pcVar25)();
              }
              func_0x000107c5dc0c();
              func_0x000107c61170(uVar10);
              FUN_1035cdd00(param_1,0,0xc000000000000000);
            }
            func_0x0001000b44c0(uVar26,uVar12);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar11);
            lVar17 = lStack_778;
            lVar4 = lStack_780;
            lVar5 = lStack_770;
            goto LAB_1034b4f1c;
          }
          func_0x000107c61170(uVar11);
        }
        func_0x0001000b44c0(uVar26,uVar12);
        lVar17 = lStack_778;
        lVar4 = lStack_780;
        lVar5 = lStack_770;
      }
    }
  }
LAB_1034b4f1c:
  lVar21 = alStack_7d0[1];
  FUN_1034bbabc(lVar5 + lVar20,alStack_7d0[1],0x112db3a00,&UNK_10d95dff0);
  lVar23 = lVar21;
  (*pcVar25)(lVar21,1,lVar7);
  lVar22 = alStack_7d0[2];
  if ((int)lVar23 == 1) {
    func_0x0001034bbc24(lVar21,0x112db3a00,&UNK_10d95dff0);
    lVar22 = alStack_7d0[2];
    (**(code **)(lVar4 + 0x38))(alStack_7d0[2],1,1,lVar17);
LAB_1034b4fe8:
    lVar4 = lStack_758;
    func_0x0001034bbc24(lVar22,0x112db3ee8,&UNK_10d95e470);
  }
  else {
    FUN_1034bbabc(lVar21,alStack_7d0[2],0x112db3ee8,&UNK_10d95e470);
    func_0x0001034bb9d0(lVar21,&SUB_10477ea9c);
    lVar21 = lVar22;
    (**(code **)(lVar4 + 0x30))(lVar22,1,lVar17);
    lVar4 = lStack_758;
    plVar15 = plStack_7d8;
    if ((int)lVar21 == 1) goto LAB_1034b4fe8;
    func_0x0001034bb98c(lVar22,plStack_7d8,&SUB_10474425c);
    lVar17 = *plVar15;
    if (lVar17 < 2) {
      if (lVar17 == 0) {
        uVar18 = 0;
      }
      else {
        if (lVar17 != 1) {
LAB_1034b5384:
          FUN_1035cbe1c(0,1);
          if ((int)lVar17 == 2) goto LAB_1034b5398;
          goto LAB_1034b51e8;
        }
        uVar18 = 1;
      }
LAB_1034b51e0:
      FUN_1035cbe1c(uVar18,1);
    }
    else {
      if (lVar17 != 2) {
        if (lVar17 == 3) {
          uVar18 = 3;
        }
        else {
          if (lVar17 != 4) goto LAB_1034b5384;
          uVar18 = 4;
        }
        goto LAB_1034b51e0;
      }
      FUN_1035cbe1c(2,1);
LAB_1034b5398:
      uVar26 = *(ulong *)(param_3 + 0x28);
      if ((long)*(ulong *)(param_3 + 0x28) < 1) {
        uVar26 = plVar15[1];
      }
      if (0 < (long)uVar26) {
        FUN_1035cb490((float)uVar26 / 1000.0,0,0xc000000000000000);
      }
    }
LAB_1034b51e8:
    func_0x0001034bb9d0(plVar15,&SUB_10474425c);
  }
  lVar17 = lVar5;
  FUN_1034bb02c();
  if (lVar4 != 0) {
    uStack_538 = 0xc000000000000000;
    uStack_540 = 0;
    FUN_1034bb5ec(auStack_3f0);
    func_0x000107c610b4(auStack_530,auStack_3f0,0x140);
    func_0x000107c61434(lVar4);
    func_0x00010006c00c(0,0xc000000000000000);
    func_0x0001034bb624(0,0,0,0,0,0,0xff);
    uStack_560 = 0xc000000000000000;
    uStack_568 = 0;
    uStack_550 = 0;
    uStack_558 = 0;
    uStack_548 = 1;
    lStack_578 = lVar17;
    lStack_570 = lVar4;
    func_0x000107c610b4(&uStack_2b0,&lStack_578,0x188);
    uVar26 = *unaff_x20;
    FUN_1035cd1f4(uVar26,unaff_x20[1],unaff_x20[2]);
    func_0x0001034bb6c0(&uStack_2b0,auStack_700);
    uVar12 = uVar26;
    func_0x000107c61558();
    uVar11 = uVar26;
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
      FUN_1034d874c(0,*(long *)(uVar26 + 0x10) + 1,1,uVar26);
    }
    uVar26 = *(ulong *)(uVar11 + 0x10);
    uVar12 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar26) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1034d874c(uVar12,uVar26 + 1,1,uVar11);
    }
    *(ulong *)(uVar12 + 0x10) = uVar26 + 1;
    func_0x000107c610b4(uVar12 + uVar26 * 0x188 + 0x20,&uStack_2b0,0x188);
    func_0x0001035cd234(uVar12);
    func_0x0001034bb6fc(&lStack_578);
    func_0x000107c6142c(lVar4);
    func_0x00010006c090(0,0xc000000000000000);
  }
  FUN_1034b62b0(param_3,lVar5);
  FUN_1034b6460(uStack_750,lVar5);
  func_0x0001034bb9d0(lVar5,&SUB_1046d90b0);
LAB_1034b5348:
  func_0x0001034bbc24(lVar16,0x112dcbcf8,&UNK_10d98e3f0);
  return;
}



/* Entry: 1034b544c; end: 1034b54b7;  */

void FUN_1034b544c(long param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  if (param_2 == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x58);
  FUN_1035cb6dc(0 < (long)uVar6,0,0xc000000000000000);
  if (-0x80000001 < (long)uVar6) {
    if ((long)uVar6 < 0x80000000) {
      uVar3 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000107c61558();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        FUN_1035cb3e4(0);
        func_0x000107c613fc();
        FUN_1035cf368(lVar7,uVar4);
        *(long *)(unaff_x20 + 0x10) = lVar7;
      }
      func_0x000107c61428(lVar7 + 0x88,auStack_58,1,0);
      uVar4 = *(undefined8 *)(lVar7 + 0x88);
      uVar1 = *(undefined8 *)(lVar7 + 0x90);
      uVar5 = *(undefined8 *)(lVar7 + 0x98);
      *(ulong *)(lVar7 + 0x88) = uVar6 & 0xffffffff;
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined8 *)(lVar7 + 0x98) = 0xc000000000000000;
      func_0x000100d5628c(uVar4,uVar1,uVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034b54b8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034b54b4);
  (*pcVar2)();
}



/* Entry: 1034b54b8; end: 1034b54ff;  */

void FUN_1034b54b8(double param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [40];
  
  lVar5 = 0;
  if (*(ulong *)(param_2 + 0x130) < 3) {
    lVar5 = *(ulong *)(param_2 + 0x130) + 1;
  }
  FUN_1035cbff8(lVar5,1);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x1c0,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x1c0);
  uVar1 = *(undefined8 *)(lVar5 + 0x1c8);
  uVar4 = *(undefined8 *)(lVar5 + 0x1d0);
  *(ulong *)(lVar5 + 0x1c0) = (ulong)(uint)((float)param_1 / 1000.0);
  *(undefined8 *)(lVar5 + 0x1c8) = 0;
  *(undefined8 *)(lVar5 + 0x1d0) = 0xc000000000000000;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034b5500; end: 1034b624b;  */

void FUN_1034b5500(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_1f80 [8];
  ulong uStack_1f78;
  long lStack_1f70;
  undefined8 uStack_1f68;
  undefined1 *puStack_1f60;
  ulong uStack_1f58;
  ulong uStack_1f50;
  ulong uStack_1f48;
  ulong uStack_1f40;
  ulong uStack_1f38;
  undefined8 uStack_1f30;
  undefined8 uStack_1f28;
  long lStack_1f20;
  undefined8 uStack_1f18;
  undefined8 uStack_1f10;
  undefined8 uStack_1f08;
  undefined8 uStack_1f00;
  undefined8 uStack_1ef8;
  undefined8 uStack_1ef0;
  undefined8 uStack_1ee8;
  undefined8 uStack_1ee0;
  undefined8 uStack_1ed8;
  undefined8 uStack_1ed0;
  undefined8 uStack_1ec8;
  undefined8 uStack_1ec0;
  undefined8 uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined8 uStack_1ea8;
  undefined8 uStack_1ea0;
  undefined8 uStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined8 uStack_1e40;
  undefined8 uStack_1e38;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined8 uStack_1e20;
  undefined8 uStack_1e18;
  undefined8 uStack_1e10;
  undefined8 uStack_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  undefined8 uStack_1dd0;
  undefined8 uStack_1dc8;
  undefined8 uStack_1dc0;
  undefined8 uStack_1db8;
  undefined8 uStack_1db0;
  undefined8 uStack_1da8;
  undefined8 uStack_1da0;
  undefined8 uStack_1d98;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  undefined8 uStack_1d80;
  undefined8 uStack_1d78;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  undefined1 auStack_1d48 [8];
  undefined1 auStack_1d40 [272];
  undefined8 uStack_1c30;
  undefined8 uStack_1c28;
  undefined8 uStack_1c20;
  undefined8 uStack_1c18;
  undefined8 uStack_1c10;
  undefined8 uStack_1c08;
  undefined8 uStack_1c00;
  undefined8 uStack_1bf8;
  undefined8 uStack_1bf0;
  undefined8 uStack_1be8;
  undefined8 uStack_1be0;
  undefined8 uStack_1bd8;
  undefined8 uStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined8 uStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 uStack_1b40;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined8 uStack_1b20;
  undefined8 auStack_1b18 [2];
  undefined1 auStack_1b07 [263];
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19df;
  undefined8 uStack_19d7;
  undefined8 uStack_19cf;
  undefined8 uStack_19c7;
  undefined8 uStack_19bf;
  undefined8 uStack_19b7;
  undefined8 uStack_19af;
  undefined8 uStack_19a7;
  undefined8 uStack_199f;
  undefined8 uStack_1997;
  undefined8 uStack_198f;
  undefined8 uStack_1987;
  undefined8 uStack_197f;
  undefined8 uStack_1977;
  undefined8 uStack_196f;
  undefined8 uStack_1967;
  undefined8 uStack_195f;
  undefined8 uStack_1957;
  undefined8 uStack_194f;
  undefined8 uStack_1947;
  undefined8 uStack_193f;
  undefined8 uStack_1937;
  undefined8 uStack_192f;
  undefined8 uStack_1927;
  undefined8 uStack_191f;
  undefined8 uStack_1917;
  undefined8 uStack_190f;
  undefined8 uStack_1907;
  undefined8 uStack_18ff;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18b7;
  undefined8 uStack_18af;
  undefined8 uStack_18a7;
  undefined8 uStack_189f;
  undefined8 uStack_1897;
  undefined8 uStack_188f;
  undefined8 uStack_1887;
  undefined8 uStack_187f;
  undefined8 uStack_1877;
  undefined8 uStack_186f;
  undefined8 uStack_1867;
  undefined8 uStack_185f;
  undefined8 uStack_1857;
  undefined8 uStack_184f;
  undefined8 uStack_1847;
  undefined8 uStack_183f;
  undefined8 uStack_1837;
  undefined8 uStack_182f;
  undefined8 uStack_1827;
  undefined8 uStack_181f;
  undefined8 uStack_1817;
  undefined8 uStack_180f;
  undefined8 uStack_1807;
  undefined8 uStack_17ff;
  undefined8 uStack_17f7;
  undefined8 uStack_17ef;
  undefined8 uStack_17e7;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  ulong uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
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
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
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
  undefined8 uStack_938;
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
  ulong uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
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
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
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
  undefined8 uStack_780;
  undefined8 uStack_778;
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
  ulong uStack_718;
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
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined1 uStack_630;
  undefined8 uStack_62f;
  undefined8 uStack_627;
  undefined8 uStack_61f;
  undefined8 uStack_617;
  undefined8 uStack_60f;
  undefined8 uStack_607;
  undefined8 uStack_5ff;
  undefined8 uStack_5f7;
  undefined8 uStack_5ef;
  undefined8 uStack_5e7;
  undefined8 uStack_5df;
  undefined8 uStack_5d7;
  undefined8 uStack_5cf;
  undefined8 uStack_5c7;
  undefined8 uStack_5bf;
  undefined8 uStack_5b7;
  undefined8 uStack_5af;
  undefined8 uStack_5a7;
  undefined8 uStack_59f;
  undefined8 uStack_597;
  undefined8 uStack_58f;
  undefined8 uStack_587;
  undefined8 uStack_57f;
  undefined8 uStack_577;
  undefined8 uStack_56f;
  undefined8 uStack_567;
  undefined8 uStack_55f;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  ulong uStack_528;
  undefined1 uStack_520;
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
  undefined8 uStack_4a7;
  undefined8 uStack_49f;
  undefined8 uStack_497;
  undefined8 uStack_48f;
  undefined8 uStack_487;
  undefined8 uStack_47f;
  undefined8 uStack_477;
  undefined8 uStack_46f;
  undefined8 uStack_467;
  undefined8 uStack_45f;
  undefined8 uStack_457;
  undefined8 uStack_44f;
  undefined8 uStack_447;
  undefined8 uStack_43f;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined1 auStack_417 [263];
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [272];
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = *(ulong *)(param_1 + 0x408);
  lVar9 = *(long *)(param_1 + 0x400);
  uVar14 = *(undefined8 *)(param_1 + 0x418);
  uStack_d0 = *(undefined8 *)(param_1 + 0x410);
  uStack_b8 = *(ulong *)(param_1 + 0x428);
  uStack_c0 = *(ulong *)(param_1 + 0x420);
  uStack_a8 = *(ulong *)(param_1 + 0x438);
  uStack_b0 = *(ulong *)(param_1 + 0x430);
  lStack_98 = *(long *)(param_1 + 0x448);
  uStack_a0 = *(ulong *)(param_1 + 0x440);
  lStack_1f20 = param_1;
  lStack_e0 = lVar9;
  uStack_c8 = uVar14;
  if (lStack_98 != 0) {
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b622c);
      (*pcVar7)();
    }
    uStack_1f30 = CONCAT44(uStack_1f30._4_4_,(uint)(byte)uStack_d0);
    uVar15 = *unaff_x20;
    uVar16 = unaff_x20[1];
    uVar13 = unaff_x20[2];
    uStack_1f78 = uStack_d8;
    lStack_1f70 = lStack_98;
    uStack_1f68 = param_2;
    puStack_1f60 = auStack_1f80 + -extraout_x8;
    uStack_1f58 = uStack_a0;
    uStack_1f50 = uStack_a8;
    uStack_1f48 = uStack_c0;
    uStack_1f40 = uStack_b8;
    uStack_1f38 = uStack_b0;
    func_0x000107c61434();
    FUN_1035cd914(auStack_1d48,uVar15,uVar16,uVar13);
    puVar12 = auStack_1d40;
    func_0x000107c610b4(auStack_1f0,puVar12,0x110);
    uVar11 = (uint)puVar12;
    lStack_1f8 = lVar9;
    FUN_1035cdb1c(&lStack_1f8);
    uVar6 = uStack_1f78;
    if ((int)uStack_1f30 != 1) {
      if ((long)uStack_1f78 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6248);
        (*pcVar7)();
      }
      if (0x7fffffff < (long)uStack_1f78) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b624c);
        (*pcVar7)();
      }
      FUN_1035cd914(&uStack_1c30,*unaff_x20,unaff_x20[1],unaff_x20[2]);
      uStack_2e8 = uStack_1c08;
      uStack_2f0 = uStack_1c10;
      uStack_2d8 = uStack_1bf8;
      uStack_2e0 = uStack_1c00;
      uStack_2c8 = uStack_1be8;
      uStack_2d0 = uStack_1bf0;
      uStack_308 = uStack_1c28;
      uStack_310 = uStack_1c30;
      uStack_2f8 = uStack_1c18;
      uStack_300 = uStack_1c20;
      uStack_200 = uStack_1b20;
      uStack_208 = uStack_1b28;
      uStack_210 = uStack_1b30;
      uStack_218 = uStack_1b38;
      uStack_220 = uStack_1b40;
      uStack_228 = uStack_1b48;
      uStack_230 = uStack_1b50;
      uStack_238 = uStack_1b58;
      uStack_240 = uStack_1b60;
      uStack_248 = uStack_1b68;
      uStack_250 = uStack_1b70;
      uStack_258 = uStack_1b78;
      uStack_260 = uStack_1b80;
      uStack_268 = uStack_1b88;
      uStack_270 = uStack_1b90;
      uStack_278 = uStack_1b98;
      uStack_2a0 = uStack_1bc0;
      uStack_2a8 = uStack_1bc8;
      uStack_290 = uStack_1bb0;
      uStack_298 = uStack_1bb8;
      uStack_280 = uStack_1ba0;
      uStack_288 = uStack_1ba8;
      func_0x000100d54950(uStack_1be0,uStack_1bd8,uStack_1bd0);
      uVar11 = (uint)uStack_1bd8;
      uStack_2b0 = 0xc000000000000000;
      uStack_2b8 = 0;
      uStack_2c0 = uVar6 & 0xffffffff;
      FUN_1035cdb1c(&uStack_310);
    }
    func_0x000103605378();
    if ((uVar11 & 0xff00) == 0x100) {
      uVar11 = 1;
      uVar14 = 0;
    }
    FUN_1035cd914(auStack_1b18,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_428 = auStack_1b18[0];
    uStack_418 = (undefined1)uVar11;
    uStack_420 = uVar14;
    func_0x000107c610b4(auStack_417,auStack_1b07,0x107);
    FUN_1035cdb1c(&uStack_428);
    uVar6 = uStack_1f48;
    bVar8 = uStack_1f48 < 2;
    FUN_1035cd914(&uStack_1a00,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_538 = uStack_19f8;
    uStack_540 = uStack_1a00;
    uStack_530 = uStack_19f0;
    uStack_528 = uVar6;
    uStack_43f = uStack_18ff;
    uStack_457 = uStack_1917;
    uStack_45f = uStack_191f;
    uStack_447 = uStack_1907;
    uStack_44f = uStack_190f;
    uStack_497 = uStack_1957;
    uStack_49f = uStack_195f;
    uStack_487 = uStack_1947;
    uStack_48f = uStack_194f;
    uStack_477 = uStack_1937;
    uStack_47f = uStack_193f;
    uStack_467 = uStack_1927;
    uStack_46f = uStack_192f;
    uStack_4d7 = uStack_1997;
    uStack_4df = uStack_199f;
    uStack_4c7 = uStack_1987;
    uStack_4cf = uStack_198f;
    uStack_4b7 = uStack_1977;
    uStack_4bf = uStack_197f;
    uStack_4a7 = uStack_1967;
    uStack_4af = uStack_196f;
    uStack_517 = uStack_19d7;
    uStack_51f = uStack_19df;
    uStack_507 = uStack_19c7;
    uStack_50f = uStack_19cf;
    uStack_4f7 = uStack_19b7;
    uStack_4ff = uStack_19bf;
    uStack_4e7 = uStack_19a7;
    uStack_4ef = uStack_19af;
    uStack_520 = bVar8;
    FUN_1035cdb1c(&uStack_540);
    uVar6 = uStack_1f40;
    bVar8 = uStack_1f40 < 3;
    FUN_1035cd914(&uStack_18e8,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_658 = uStack_18e0;
    uStack_660 = uStack_18e8;
    uStack_648 = uStack_18d0;
    uStack_650 = uStack_18d8;
    uStack_640 = uStack_18c8;
    uStack_638 = uVar6;
    uStack_55f = uStack_17e7;
    uStack_577 = uStack_17ff;
    uStack_57f = uStack_1807;
    uStack_567 = uStack_17ef;
    uStack_56f = uStack_17f7;
    uStack_5b7 = uStack_183f;
    uStack_5bf = uStack_1847;
    uStack_5a7 = uStack_182f;
    uStack_5af = uStack_1837;
    uStack_597 = uStack_181f;
    uStack_59f = uStack_1827;
    uStack_587 = uStack_180f;
    uStack_58f = uStack_1817;
    uStack_5f7 = uStack_187f;
    uStack_5ff = uStack_1887;
    uStack_5e7 = uStack_186f;
    uStack_5ef = uStack_1877;
    uStack_5d7 = uStack_185f;
    uStack_5df = uStack_1867;
    uStack_5c7 = uStack_184f;
    uStack_5cf = uStack_1857;
    uStack_627 = uStack_18af;
    uStack_62f = uStack_18b7;
    uStack_617 = uStack_189f;
    uStack_61f = uStack_18a7;
    uStack_607 = uStack_188f;
    uStack_60f = uStack_1897;
    uStack_630 = bVar8;
    FUN_1035cdb1c(&uStack_660);
    uVar6 = uStack_1f38;
    if ((long)uStack_1f38 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6230);
      (*pcVar7)();
    }
    if (0x7fffffff < (long)uStack_1f38) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6234);
      (*pcVar7)();
    }
    FUN_1035cd914(&uStack_17d0,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_738 = uStack_1788;
    uStack_740 = uStack_1790;
    uStack_728 = uStack_1778;
    uStack_730 = uStack_1780;
    uStack_778 = uStack_17c8;
    uStack_780 = uStack_17d0;
    uStack_768 = uStack_17b8;
    uStack_770 = uStack_17c0;
    uStack_758 = uStack_17a8;
    uStack_760 = uStack_17b0;
    uStack_748 = uStack_1798;
    uStack_750 = uStack_17a0;
    uStack_720 = uStack_1770;
    uStack_670 = uStack_16c0;
    uStack_688 = uStack_16d8;
    uStack_690 = uStack_16e0;
    uStack_678 = uStack_16c8;
    uStack_680 = uStack_16d0;
    uStack_6a8 = uStack_16f8;
    uStack_6b0 = uStack_1700;
    uStack_698 = uStack_16e8;
    uStack_6a0 = uStack_16f0;
    uStack_6c8 = uStack_1718;
    uStack_6d0 = uStack_1720;
    uStack_6b8 = uStack_1708;
    uStack_6c0 = uStack_1710;
    uStack_6e8 = uStack_1738;
    uStack_6f0 = uStack_1740;
    uStack_6d8 = uStack_1728;
    uStack_6e0 = uStack_1730;
    uStack_6f8 = uStack_1748;
    uStack_700 = uStack_1750;
    func_0x000100d54950(uStack_1768,uStack_1760,uStack_1758);
    uStack_1f28 = 0xc000000000000000;
    uStack_1f30 = 0;
    uStack_708 = 0xc000000000000000;
    uStack_710 = 0;
    uStack_718 = uVar6 & 0xffffffff;
    FUN_1035cdb1c(&uStack_780);
    uVar6 = uStack_1f50;
    if ((long)uStack_1f50 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6238);
      (*pcVar7)();
    }
    if (0x7fffffff < (long)uStack_1f50) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b623c);
      (*pcVar7)();
    }
    FUN_1035cd914(&uStack_16b8,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_858 = uStack_1670;
    uStack_860 = uStack_1678;
    uStack_848 = uStack_1660;
    uStack_850 = uStack_1668;
    uStack_838 = uStack_1650;
    uStack_840 = uStack_1658;
    uStack_828 = uStack_1640;
    uStack_830 = uStack_1648;
    uStack_898 = uStack_16b0;
    uStack_8a0 = uStack_16b8;
    uStack_888 = uStack_16a0;
    uStack_890 = uStack_16a8;
    uStack_878 = uStack_1690;
    uStack_880 = uStack_1698;
    uStack_868 = uStack_1680;
    uStack_870 = uStack_1688;
    uStack_790 = uStack_15a8;
    uStack_798 = uStack_15b0;
    uStack_7d0 = uStack_15e8;
    uStack_7d8 = uStack_15f0;
    uStack_7e0 = uStack_15f8;
    uStack_7e8 = uStack_1600;
    uStack_7f0 = uStack_1608;
    uStack_7f8 = uStack_1610;
    uStack_800 = uStack_1618;
    uStack_808 = uStack_1620;
    uStack_7a0 = uStack_15b8;
    uStack_7a8 = uStack_15c0;
    uStack_7b0 = uStack_15c8;
    uStack_7b8 = uStack_15d0;
    uStack_7c0 = uStack_15d8;
    uStack_7c8 = uStack_15e0;
    func_0x000100d54950(uStack_1638,uStack_1630,uStack_1628);
    uStack_810 = uStack_1f28;
    uStack_818 = uStack_1f30;
    uStack_820 = uVar6 & 0xffffffff;
    FUN_1035cdb1c(&uStack_8a0);
    uVar6 = uStack_1f58;
    if ((long)uStack_1f58 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6240);
      (*pcVar7)();
    }
    if (0x7fffffff < (long)uStack_1f58) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034b6244);
      (*pcVar7)();
    }
    FUN_1035cd914(&uStack_15a0,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    uStack_908 = uStack_14e8;
    uStack_910 = uStack_14f0;
    uStack_8f8 = uStack_14d8;
    uStack_900 = uStack_14e0;
    uStack_8e8 = uStack_14c8;
    uStack_8f0 = uStack_14d0;
    uStack_958 = uStack_1538;
    uStack_960 = uStack_1540;
    uStack_948 = uStack_1528;
    uStack_950 = uStack_1530;
    uStack_938 = uStack_1518;
    uStack_940 = uStack_1520;
    uStack_928 = uStack_1508;
    uStack_930 = uStack_1510;
    uStack_918 = uStack_14f8;
    uStack_920 = uStack_1500;
    uStack_998 = uStack_1578;
    uStack_9a0 = uStack_1580;
    uStack_988 = uStack_1568;
    uStack_990 = uStack_1570;
    uStack_978 = uStack_1558;
    uStack_980 = uStack_1560;
    uStack_968 = uStack_1548;
    uStack_970 = uStack_1550;
    uStack_9b8 = uStack_1598;
    uStack_9c0 = uStack_15a0;
    uStack_9a8 = uStack_1588;
    uStack_9b0 = uStack_1590;
    uStack_8b0 = uStack_1490;
    uStack_8b8 = uStack_1498;
    uStack_8c0 = uStack_14a0;
    uStack_8c8 = uStack_14a8;
    func_0x000100d54950(uStack_14c0,uStack_14b8,uStack_14b0);
    uStack_8d0 = uStack_1f28;
    uStack_8d8 = uStack_1f30;
    uStack_8e0 = uVar6 & 0xffffffff;
    FUN_1035cdb1c(&uStack_9c0);
    lVar9 = lStack_1f70;
    if (*(long *)(lStack_1f70 + 0x10) == 0) {
      func_0x0001034bbc24(&lStack_e0,0x112dcd428,&UNK_10dbce5c0);
    }
    else {
      FUN_1035cd914(&uStack_1488,*unaff_x20,unaff_x20[1],unaff_x20[2]);
      uStack_1028 = uStack_1450;
      func_0x0001034bbc24(&uStack_1028,0x112d38270,&UNK_10d905a20);
      uStack_ad8 = uStack_1480;
      uStack_ae0 = uStack_1488;
      uStack_ac8 = uStack_1470;
      uStack_ad0 = uStack_1478;
      uStack_ab8 = uStack_1460;
      uStack_ac0 = uStack_1468;
      uStack_9d0 = uStack_1378;
      uStack_9f8 = uStack_13a0;
      uStack_a00 = uStack_13a8;
      uStack_9e8 = uStack_1390;
      uStack_9f0 = uStack_1398;
      uStack_9d8 = uStack_1380;
      uStack_9e0 = uStack_1388;
      uStack_a38 = uStack_13e0;
      uStack_a40 = uStack_13e8;
      uStack_a28 = uStack_13d0;
      uStack_a30 = uStack_13d8;
      uStack_a18 = uStack_13c0;
      uStack_a20 = uStack_13c8;
      uStack_a08 = uStack_13b0;
      uStack_a10 = uStack_13b8;
      uStack_a78 = uStack_1420;
      uStack_a80 = uStack_1428;
      uStack_a68 = uStack_1410;
      uStack_a70 = uStack_1418;
      uStack_a58 = uStack_1400;
      uStack_a60 = uStack_1408;
      uStack_a48 = uStack_13f0;
      uStack_a50 = uStack_13f8;
      uStack_a98 = uStack_1440;
      uStack_aa0 = uStack_1448;
      uStack_a88 = uStack_1430;
      uStack_a90 = uStack_1438;
      uStack_ab0 = uStack_1458;
      lStack_aa8 = lVar9;
      FUN_1035cdb1c(&uStack_ae0);
    }
    puVar12 = puStack_1f60;
    func_0x000103bfc9d0(puStack_1f60,*(undefined8 *)(lStack_1f20 + 0x10));
    lVar9 = 0;
    func_0x0001046d90b0();
    puVar10 = puVar12;
    (**(code **)(*(long *)(lVar9 + -8) + 0x30))(puVar12,1,lVar9);
    if ((int)puVar10 == 1) {
      func_0x0001034bbc24(puVar12,0x112dcbcf8,&UNK_10d98e3f0);
    }
    else {
      iVar5 = *(int *)(lVar9 + 0x68);
      uVar14 = *(undefined8 *)(puVar12 + (long)iVar5 + 0x20);
      cVar4 = puVar12[(long)iVar5 + 0x28];
      uStack_1f38 = *(ulong *)(puVar12 + (long)iVar5 + 0x30);
      cVar1 = puVar12[(long)iVar5 + 0x38];
      uVar15 = *(undefined8 *)(puVar12 + (long)iVar5 + 0x40);
      cVar2 = puVar12[(long)iVar5 + 0x48];
      cVar3 = puVar12[(long)iVar5 + 0x49];
      func_0x0001034bb9d0(puVar12,&SUB_1046d90b0);
      if (cVar3 != '\x01') {
        if (cVar4 != '\x01') {
          FUN_1035cd914(&uStack_1370,*unaff_x20,unaff_x20[1],unaff_x20[2]);
          uStack_b98 = uStack_1308;
          uStack_ba0 = uStack_1310;
          uStack_b88 = uStack_12f8;
          uStack_b90 = uStack_1300;
          uStack_b78 = uStack_12e8;
          uStack_b80 = uStack_12f0;
          uStack_bd8 = uStack_1348;
          uStack_be0 = uStack_1350;
          uStack_bc8 = uStack_1338;
          uStack_bd0 = uStack_1340;
          uStack_bb8 = uStack_1328;
          uStack_bc0 = uStack_1330;
          uStack_ba8 = uStack_1318;
          uStack_bb0 = uStack_1320;
          uStack_bf8 = uStack_1368;
          uStack_c00 = uStack_1370;
          uStack_be8 = uStack_1358;
          uStack_bf0 = uStack_1360;
          uStack_b08 = uStack_1278;
          uStack_b10 = uStack_1280;
          uStack_af8 = uStack_1268;
          uStack_b00 = uStack_1270;
          uStack_b70 = uStack_12e0;
          uStack_af0 = uStack_1260;
          uStack_b48 = uStack_12b8;
          uStack_b50 = uStack_12c0;
          uStack_b38 = uStack_12a8;
          uStack_b40 = uStack_12b0;
          uStack_b28 = uStack_1298;
          uStack_b30 = uStack_12a0;
          uStack_b18 = uStack_1288;
          uStack_b20 = uStack_1290;
          func_0x000100d54950(uStack_12d8,uStack_12d0,uStack_12c8);
          uStack_b58 = uStack_1f28;
          uStack_b60 = uStack_1f30;
          uStack_b68 = uVar14;
          FUN_1035cdb1c(&uStack_c00);
        }
        if (cVar2 != '\x01') {
          FUN_1035cd914(&uStack_1258,*unaff_x20,unaff_x20[1],unaff_x20[2]);
          uStack_ca8 = uStack_11e0;
          uStack_cb0 = uStack_11e8;
          uStack_c98 = uStack_11d0;
          uStack_ca0 = uStack_11d8;
          uStack_c88 = uStack_11c0;
          uStack_c90 = uStack_11c8;
          uStack_c78 = uStack_11b0;
          uStack_c80 = uStack_11b8;
          uStack_ce8 = uStack_1220;
          uStack_cf0 = uStack_1228;
          uStack_cd8 = uStack_1210;
          uStack_ce0 = uStack_1218;
          uStack_cc8 = uStack_1200;
          uStack_cd0 = uStack_1208;
          uStack_cb8 = uStack_11f0;
          uStack_cc0 = uStack_11f8;
          uStack_d18 = uStack_1250;
          uStack_d20 = uStack_1258;
          uStack_d08 = uStack_1240;
          uStack_d10 = uStack_1248;
          uStack_cf8 = uStack_1230;
          uStack_d00 = uStack_1238;
          uStack_c10 = uStack_1148;
          uStack_c18 = uStack_1150;
          uStack_c40 = uStack_1178;
          uStack_c48 = uStack_1180;
          uStack_c30 = uStack_1168;
          uStack_c38 = uStack_1170;
          uStack_c20 = uStack_1158;
          uStack_c28 = uStack_1160;
          uStack_c50 = uStack_1188;
          uStack_c58 = uStack_1190;
          func_0x000100d54950(uStack_11a8,uStack_11a0,uStack_1198);
          uStack_c60 = uStack_1f28;
          uStack_c68 = uStack_1f30;
          uStack_c70 = uVar15;
          FUN_1035cdb1c(&uStack_d20);
        }
        if (cVar1 != '\x01') {
          FUN_1035cd914(&uStack_1140,*unaff_x20,unaff_x20[1],unaff_x20[2]);
          uStack_d98 = uStack_1098;
          uStack_da0 = uStack_10a0;
          uStack_d88 = uStack_1088;
          uStack_d90 = uStack_1090;
          uStack_dd8 = uStack_10d8;
          uStack_de0 = uStack_10e0;
          uStack_dc8 = uStack_10c8;
          uStack_dd0 = uStack_10d0;
          uStack_db8 = uStack_10b8;
          uStack_dc0 = uStack_10c0;
          uStack_da8 = uStack_10a8;
          uStack_db0 = uStack_10b0;
          uStack_e18 = uStack_1118;
          uStack_e20 = uStack_1120;
          uStack_e08 = uStack_1108;
          uStack_e10 = uStack_1110;
          uStack_df8 = uStack_10f8;
          uStack_e00 = uStack_1100;
          uStack_de8 = uStack_10e8;
          uStack_df0 = uStack_10f0;
          uStack_e38 = uStack_1138;
          uStack_e40 = uStack_1140;
          uStack_e28 = uStack_1128;
          uStack_e30 = uStack_1130;
          uStack_d58 = uStack_1058;
          uStack_d60 = uStack_1060;
          uStack_d48 = uStack_1048;
          uStack_d50 = uStack_1050;
          uStack_d38 = uStack_1038;
          uStack_d40 = uStack_1040;
          uStack_d80 = uStack_1080;
          uStack_d30 = uStack_1030;
          func_0x000100d54950(uStack_1078,uStack_1070,uStack_1068);
          uStack_d78 = uStack_1f38;
          uStack_d68 = uStack_1f28;
          uStack_d70 = uStack_1f30;
          FUN_1035cdb1c(&uStack_e40);
        }
      }
    }
  }
  if (*(char *)(lStack_1f20 + 0x511) != '\x01') {
    uVar14 = *(undefined8 *)(lStack_1f20 + 0x4f0);
    uVar15 = *(undefined8 *)(lStack_1f20 + 0x4f8);
    uVar16 = *(undefined8 *)(lStack_1f20 + 0x500);
    uVar13 = *(undefined8 *)(lStack_1f20 + 0x508);
    cVar4 = *(char *)(lStack_1f20 + 0x510);
    FUN_1034cc31c(&uStack_1db8,*(undefined8 *)(lStack_1f20 + 0x4d0),
                  *(undefined8 *)(lStack_1f20 + 0x4d8),*(undefined8 *)(lStack_1f20 + 0x4e0),
                  *(undefined8 *)(lStack_1f20 + 0x4e8));
    func_0x0001035ce294(&uStack_1020,*unaff_x20,unaff_x20[1],unaff_x20[2]);
    func_0x0001034bbc24(&uStack_1010,0x112f73200,&UNK_10dbe5440);
    uStack_1008 = uStack_1db0;
    uStack_1010 = uStack_1db8;
    uStack_ff8 = uStack_1da0;
    uStack_1000 = uStack_1da8;
    uStack_fe8 = uStack_1d90;
    uStack_ff0 = uStack_1d98;
    uStack_fd8 = uStack_1d80;
    uStack_fe0 = uStack_1d88;
    uStack_fc8 = uStack_1d70;
    uStack_fd0 = uStack_1d78;
    uStack_fb8 = uStack_1d60;
    uStack_fc0 = uStack_1d68;
    uStack_fa8 = uStack_1d50;
    uStack_fb0 = uStack_1d58;
    uStack_f28 = uStack_1018;
    uStack_f30 = uStack_1020;
    uStack_f18 = uStack_1db0;
    uStack_f20 = uStack_1db8;
    uStack_f08 = uStack_1da0;
    uStack_f10 = uStack_1da8;
    uStack_ef8 = uStack_1d90;
    uStack_f00 = uStack_1d98;
    uStack_ee8 = uStack_1d80;
    uStack_ef0 = uStack_1d88;
    uStack_ed8 = uStack_1d70;
    uStack_ee0 = uStack_1d78;
    uStack_ea8 = uStack_f98;
    uStack_eb0 = uStack_fa0;
    uStack_e98 = uStack_f88;
    uStack_ea0 = uStack_f90;
    uStack_ec8 = uStack_1d60;
    uStack_ed0 = uStack_1d68;
    uStack_eb8 = uStack_1d50;
    uStack_ec0 = uStack_1d58;
    uStack_e58 = uStack_f48;
    uStack_e60 = uStack_f50;
    uStack_e48 = uStack_f38;
    uStack_e50 = uStack_f40;
    uStack_e78 = uStack_f68;
    uStack_e80 = uStack_f70;
    uStack_e68 = uStack_f58;
    uStack_e70 = uStack_f60;
    uStack_e88 = uStack_f78;
    uStack_e90 = uStack_f80;
    FUN_1035ce424(&uStack_f30);
    if (cVar4 != '\x01') {
      FUN_1034cc31c(&uStack_1e28,uVar14,uVar15,uVar16,uVar13);
      func_0x0001035ce294(&uStack_1f18,*unaff_x20,unaff_x20[1],unaff_x20[2]);
      func_0x0001034bbc24(&uStack_1e98,0x112f73208,&UNK_10dbce5b0);
      uStack_1e80 = uStack_1e10;
      uStack_1e88 = uStack_1e18;
      uStack_1e90 = uStack_1e20;
      uStack_1e98 = uStack_1e28;
      uStack_1e40 = uStack_1dd0;
      uStack_1e48 = uStack_1dd8;
      uStack_1e50 = uStack_1de0;
      uStack_1e58 = uStack_1de8;
      uStack_1e70 = uStack_1e00;
      uStack_1e78 = uStack_1e08;
      uStack_1e60 = uStack_1df0;
      uStack_1e68 = uStack_1df8;
      uStack_1e30 = uStack_1dc0;
      uStack_1e38 = uStack_1dc8;
      uStack_f98 = uStack_1e20;
      uStack_fa0 = uStack_1e28;
      uStack_f88 = uStack_1e10;
      uStack_f90 = uStack_1e18;
      uStack_f48 = uStack_1dd0;
      uStack_f50 = uStack_1dd8;
      uStack_f38 = uStack_1dc0;
      uStack_f40 = uStack_1dc8;
      uStack_f68 = uStack_1df0;
      uStack_f70 = uStack_1df8;
      uStack_f58 = uStack_1de0;
      uStack_f60 = uStack_1de8;
      uStack_f78 = uStack_1e00;
      uStack_f80 = uStack_1e08;
      uStack_1018 = uStack_1f10;
      uStack_1020 = uStack_1f18;
      uStack_1008 = uStack_1f00;
      uStack_1010 = uStack_1f08;
      uStack_fb8 = uStack_1eb0;
      uStack_fc0 = uStack_1eb8;
      uStack_fa8 = uStack_1ea0;
      uStack_fb0 = uStack_1ea8;
      uStack_fd8 = uStack_1ed0;
      uStack_fe0 = uStack_1ed8;
      uStack_fc8 = uStack_1ec0;
      uStack_fd0 = uStack_1ec8;
      uStack_ff8 = uStack_1ef0;
      uStack_1000 = uStack_1ef8;
      uStack_fe8 = uStack_1ee0;
      uStack_ff0 = uStack_1ee8;
      FUN_1035ce424(&uStack_1020);
    }
  }
  return;
}



/* Entry: 1034b624c; end: 1034b62af;  */

void FUN_1034b624c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(param_1 + 0x2d8);
  if (uVar2 != 0) {
    if (uVar2 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b62ac);
      (*pcVar1)();
    }
    FUN_1035cd420(uVar2,0,0xc000000000000000);
  }
  uVar2 = *(ulong *)(param_1 + 0x2e0);
  if (uVar2 != 0) {
    if (uVar2 >> 0x1f == 0) {
      uVar3 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000107c61558();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        FUN_1035cb3e4(0);
        func_0x000107c613fc();
        FUN_1035cf368(lVar7,uVar4);
        *(long *)(unaff_x20 + 0x10) = lVar7;
      }
      func_0x000107c61428(lVar7 + 0x980,auStack_58,1,0);
      uVar4 = *(undefined8 *)(lVar7 + 0x980);
      uVar5 = *(undefined8 *)(lVar7 + 0x988);
      uVar6 = *(undefined8 *)(lVar7 + 0x990);
      *(ulong *)(lVar7 + 0x980) = uVar2 & 0xffffffff;
      *(undefined8 *)(lVar7 + 0x988) = 0;
      *(undefined8 *)(lVar7 + 0x990) = 0xc000000000000000;
      func_0x000100d5628c(uVar4,uVar5,uVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b62b0);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1034b62b0; end: 1034b645f;  */

void FUN_1034b62b0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_2c0 [80];
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
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
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
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
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
  
  lVar4 = 0;
  func_0x0001046d90b0();
  iVar1 = *(int *)(param_2 + *(int *)(lVar4 + 0x70) + 0xa0);
  if (iVar1 - 3U < 2) {
    FUN_1035eeba4(&lStack_d8);
    uStack_118 = uStack_d0;
    lStack_120 = lStack_d8;
    uStack_108 = uStack_c0;
    uStack_110 = uStack_c8;
    uStack_f8 = uStack_b0;
    uStack_100 = uStack_b8;
    uStack_e8 = uStack_a0;
    uStack_f0 = uStack_a8;
    lVar4 = *(long *)(param_1 + 0x570);
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x578);
      cVar2 = *(char *)(param_1 + 0x580);
      lStack_98 = lStack_d8;
      func_0x000107c61434(lVar4);
      func_0x0001034bbc24(&lStack_98,0x112d38270,&UNK_10d905a20);
      lStack_120 = lVar4;
      if (cVar2 != '\x01') {
        if ((long)uVar5 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b645c);
          (*pcVar3)();
        }
        if (0x7fffffff < (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1034b6460);
          (*pcVar3)();
        }
        func_0x000100d54950(uStack_f8,uStack_f0,uStack_e8);
        uStack_e8 = 0xc000000000000000;
        uStack_f0 = 0;
        uStack_f8 = uVar5 & 0xffffffff;
      }
    }
    uStack_218 = 1;
    if (iVar1 != 3) {
      uStack_218 = 2;
    }
    uStack_110 = CONCAT71(uStack_110._1_7_,1);
    uStack_228 = 0xc000000000000000;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    uStack_1e8 = uStack_e8;
    uStack_1f0 = uStack_f0;
    lStack_220 = lStack_120;
    uStack_208 = uStack_108;
    uStack_210 = uStack_110;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    lStack_1e0 = lStack_120;
    uStack_1c8 = uStack_108;
    uStack_1d0 = uStack_110;
    uStack_1d8 = uStack_218;
    uStack_118 = uStack_218;
    func_0x0001034bb7dc(&lStack_1e0,&uStack_1a0);
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    func_0x0001034bb818(&lStack_220,&uStack_90);
    func_0x0001034bbc24(&uStack_160,0x112f73210,&UNK_10dbce5d0);
    uStack_230 = 0;
    uStack_268 = uStack_198;
    uStack_270 = uStack_1a0;
    uStack_258 = uStack_188;
    uStack_260 = uStack_190;
    uStack_248 = uStack_178;
    uStack_250 = uStack_180;
    uStack_238 = uStack_168;
    uStack_240 = uStack_170;
    uStack_68 = uStack_178;
    uStack_70 = uStack_180;
    uStack_58 = uStack_168;
    uStack_60 = uStack_170;
    uStack_88 = uStack_198;
    uStack_90 = uStack_1a0;
    uStack_78 = uStack_188;
    uStack_80 = uStack_190;
    uStack_48 = uStack_228;
    uStack_50 = 0;
    func_0x0001034bb854(&uStack_90,auStack_2c0);
    func_0x0001035ce960(&uStack_90);
    func_0x0001034bb890(&uStack_270);
    func_0x0001034bb8c4(&lStack_120);
  }
  return;
}



/* Entry: 1034b6460; end: 1034b70b3;  */

/* WARNING: Possible PIC construction at 0x0001034b6500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034b6f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034a6844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034b6f5c) */
/* WARNING: Removing unreachable block (ram,0x0001034b6504) */
/* WARNING: Removing unreachable block (ram,0x0001034b6890) */
/* WARNING: Removing unreachable block (ram,0x0001034b6544) */
/* WARNING: Removing unreachable block (ram,0x0001034b6b04) */
/* WARNING: Removing unreachable block (ram,0x0001034b6d7c) */
/* WARNING: Removing unreachable block (ram,0x0001034b6e08) */
/* WARNING: Removing unreachable block (ram,0x0001034b6e90) */
/* WARNING: Removing unreachable block (ram,0x0001034b6eb0) */
/* WARNING: Removing unreachable block (ram,0x0001034b6f34) */
/* WARNING: Removing unreachable block (ram,0x0001034b6fec) */
/* WARNING: Removing unreachable block (ram,0x0001034b6ff4) */
/* WARNING: Removing unreachable block (ram,0x0001034b7084) */
/* WARNING: Removing unreachable block (ram,0x0001034b6f3c) */
/* WARNING: Removing unreachable block (ram,0x0001034a6848) */

long FUN_1034b6460(void)

{
  long lStack_ba0;
  long lStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000103bfccb4(&lStack_ba0);
  if (lStack_b98 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (lStack_b98,lStack_b98,uStack_b90,uStack_b88,uStack_b80,uStack_b78,uStack_b70);
    return lStack_b98;
  }
  return lStack_ba0;
}



/* Entry: 1034b70b4; end: 1034b712f;  */

undefined1  [16] FUN_1034b70b4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001046b4ddc(*param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f1541e0;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 1034b7130; end: 1034b718b;  */

void FUN_1034b7130(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034b718c; end: 1034b71b7;  */

long FUN_1034b718c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1034b71b8; end: 1034b725b;  */

int FUN_1034b71b8(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x21] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1034b725c; end: 1034b8bab;  */

undefined8 FUN_1034b725c(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar9;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_5e0 [8];
  undefined1 *puStack_5d8;
  ulong uStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  ulong uStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  ulong uStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [24];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  int iStack_290;
  
  lVar3 = 0;
  func_0x00010475cf44();
  lStack_5b8 = *(long *)(lVar3 + -8);
  lStack_5b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_5b8 + 0x40));
  lVar3 = 0x112db3ca0;
  puStack_5d8 = auStack_5e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_5c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_5e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0x112db3cc8;
  lStack_5a8 = lVar8;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar11 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_5d0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar11 - extraout_x12;
  lVar3 = 0;
  lStack_538 = lVar8;
  func_0x000104739264();
  lStack_588 = *(long *)(lVar3 + -8);
  lStack_540 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_588 + 0x40));
  lVar8 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3cb8;
  lStack_5c8 = lVar8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  lStack_590 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_03;
  lVar3 = 0x112db3ce0;
  lStack_580 = lVar8;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar11 = lVar8 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  uStack_5a0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar11 - extraout_x12_00;
  uVar11 = 0;
  lStack_548 = lVar9;
  func_0x00010470fbcc();
  lStack_568 = *(long *)(uVar11 - 8);
  uStack_558 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_568 + 0x40));
  lVar9 = lVar9 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3cb0;
  lStack_598 = lVar9;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_570 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_06;
  lVar3 = 0x112db3cd8;
  lStack_550 = lVar9;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  lStack_578 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_01;
  lVar3 = 0x112db3a00;
  lStack_560 = lVar9;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_08;
  lVar3 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar9 - extraout_x8_09;
  lVar3 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar17 - extraout_x8_10;
  lVar3 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar15 - extraout_x8_11;
  lVar8 = 0;
  func_0x00010472f4dc();
  lVar13 = *(long *)(lVar8 + -8);
  lStack_530 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar3 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  func_0x0001046d90b0();
  FUN_1034bbabc(param_1 + *(int *)(lVar8 + 0x28),lVar9,0x112db3a00,&UNK_10d95dff0);
  lVar4 = 0;
  func_0x00010477ea9c();
  lVar8 = lVar9;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar9,1,lVar4);
  if ((int)lVar8 == 1) {
    uVar6 = 0x112db3a00;
    puVar7 = &UNK_10d95dff0;
    lVar15 = lVar9;
LAB_1034b77b4:
    func_0x0001034bbc24(lVar15,uVar6,puVar7);
    (**(code **)(lVar13 + 0x38))(lVar3,1,1,lStack_530);
  }
  else {
    FUN_1034bbabc(lVar9 + *(int *)(lVar4 + 0x14),lVar17,0x112dcbf08,&UNK_10d98e580);
    func_0x0001034bb9d0(lVar9,&SUB_10477ea9c);
    lVar4 = 0;
    func_0x000104760f24();
    lVar8 = lVar17;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar17,1,lVar4);
    if ((int)lVar8 == 1) {
      uVar6 = 0x112dcbf08;
      puVar7 = &UNK_10d98e580;
      lVar15 = lVar17;
      goto LAB_1034b77b4;
    }
    FUN_1034bbabc(lVar17 + *(int *)(lVar4 + 0x20),lVar15,0x112db3cd0,&UNK_10d95e230);
    func_0x0001034bb9d0(lVar17,&SUB_104760f24);
    lVar4 = 0;
    func_0x00010471853c();
    lVar8 = lVar15;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar15,1,lVar4);
    if ((int)lVar8 == 1) {
      uVar6 = 0x112db3cd0;
      puVar7 = &UNK_10d95e230;
      goto LAB_1034b77b4;
    }
    FUN_1034bbabc(lVar15 + *(int *)(lVar4 + 0x14),lVar3,0x112db3e90,&UNK_10d95e3e0);
    func_0x0001034bb9d0(lVar15,&SUB_10471853c);
    lVar8 = lStack_530;
    lVar15 = lVar3;
    (**(code **)(lVar13 + 0x30))(lVar3,1,lStack_530);
    if ((int)lVar15 != 1) {
      func_0x0001034bb98c(lVar3,lVar10,&SUB_10472f4dc);
      func_0x000107c610b4(auStack_2c8,lVar10 + *(int *)(lVar8 + 0x14),0x260);
      iVar2 = (int)auStack_2c8;
      func_0x0001015538ec();
      uVar11 = uStack_558;
      lVar15 = lStack_560;
      lVar3 = lStack_568;
      if (iVar2 != 1) {
        func_0x000101553910(uStack_2b0,uStack_2a8,uStack_2a0);
        if (uStack_2a0 >> 0x3c != 0xb) {
          func_0x00010155392c(uStack_2b0,uStack_2a8,uStack_2a0);
          func_0x00010155392c(0,0,0xb000000000000000);
          func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
          return 0xe;
        }
        FUN_1034bbabc(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010155392c(uStack_2b0,uStack_2a8,uStack_2a0);
        func_0x0001034bbc24(auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
        if (iStack_290 != 3) {
          return 3;
        }
        return 9;
      }
      iVar2 = *(int *)(lVar8 + 0x18);
      (**(code **)(lStack_568 + 0x38))(lStack_560,1,1,uStack_558);
      lVar4 = lStack_550;
      lVar8 = (long)*(int *)(lStack_570 + 0x30);
      FUN_1034bbabc(lVar10 + iVar2,lStack_550,0x112db3cd8,&UNK_10dd317d0);
      FUN_1034bbabc(lVar15,lVar4 + lVar8,0x112db3cd8,&UNK_10dd317d0);
      pcVar12 = *(code **)(lVar3 + 0x30);
      lVar9 = lVar4;
      (*pcVar12)(lVar4,1,uVar11);
      lVar3 = lStack_578;
      if ((int)lVar9 == 1) {
        func_0x0001034bbc24(lVar15,0x112db3cd8,&UNK_10dd317d0);
        lVar8 = lVar4 + lVar8;
        (*pcVar12)(lVar8,1,uVar11);
        lVar16 = lStack_538;
        lVar14 = lStack_540;
        lVar17 = lStack_548;
        if ((int)lVar8 != 1) {
LAB_1034b7a6c:
          func_0x0001034bbc24(lVar4,0x112db3cb0,&UNK_10d95e210);
LAB_1034b7a84:
          func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
          return 4;
        }
        func_0x0001034bbc24(lVar4,0x112db3cd8,&UNK_10dd317d0);
      }
      else {
        FUN_1034bbabc(lVar4,lStack_578,0x112db3cd8,&UNK_10dd317d0);
        lVar9 = lVar4 + lVar8;
        (*pcVar12)(lVar9,1,uVar11);
        lVar16 = lStack_538;
        lVar14 = lStack_540;
        lVar17 = lStack_548;
        lVar13 = lStack_598;
        if ((int)lVar9 == 1) {
          func_0x0001034bbc24(lVar15,0x112db3cd8,&UNK_10dd317d0);
          func_0x0001034bb9d0(lVar3,&SUB_10470fbcc);
          goto LAB_1034b7a6c;
        }
        func_0x0001034bb98c(lVar4 + lVar8,lStack_598,&SUB_10470fbcc);
        lVar8 = lVar3;
        func_0x00010470fc4c(lVar3,lVar13);
        uStack_558 = CONCAT44(uStack_558._4_4_,(int)lVar8);
        func_0x0001034bb9d0(lVar13,&SUB_10470fbcc);
        func_0x0001034bbc24(lVar15,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001034bb9d0(lVar3,&SUB_10470fbcc);
        func_0x0001034bbc24(lVar4,0x112db3cd8,&UNK_10dd317d0);
        if ((uStack_558 & 1) == 0) goto LAB_1034b7a84;
      }
      lVar8 = lStack_588;
      (**(code **)(lStack_588 + 0x38))(lVar17,1,1,lVar14);
      lVar15 = lStack_580;
      lVar3 = (long)*(int *)(lStack_590 + 0x30);
      FUN_1034bbabc(lVar10,lStack_580,0x112db3ce0,&UNK_10d95e240);
      FUN_1034bbabc(lVar17,lVar15 + lVar3,0x112db3ce0,&UNK_10d95e240);
      pcVar12 = *(code **)(lVar8 + 0x30);
      lVar8 = lVar15;
      (*pcVar12)(lVar15,1,lVar14);
      uVar11 = uStack_5a0;
      if ((int)lVar8 == 1) {
        func_0x0001034bbc24(lVar17,0x112db3ce0,&UNK_10d95e240);
        lVar3 = lVar15 + lVar3;
        (*pcVar12)(lVar3,1,lVar14);
        if ((int)lVar3 != 1) {
LAB_1034b7c7c:
          func_0x0001034bbc24(lVar15,0x112db3cb8,&UNK_10dd33f20);
LAB_1034b7c94:
          func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
          return 5;
        }
        func_0x0001034bbc24(lVar15,0x112db3ce0,&UNK_10d95e240);
      }
      else {
        FUN_1034bbabc(lVar15,uStack_5a0,0x112db3ce0,&UNK_10d95e240);
        lVar8 = lVar15 + lVar3;
        (*pcVar12)(lVar8,1,lVar14);
        lVar4 = lStack_5c8;
        if ((int)lVar8 == 1) {
          func_0x0001034bbc24(lVar17,0x112db3ce0,&UNK_10d95e240);
          func_0x0001034bb9d0(uVar11,&SUB_104739264);
          goto LAB_1034b7c7c;
        }
        func_0x0001034bb98c(lVar15 + lVar3,lStack_5c8,&SUB_104739264);
        uVar5 = uVar11;
        func_0x0001047392e4(uVar11,lVar4);
        func_0x0001034bb9d0(lVar4,&SUB_104739264);
        func_0x0001034bbc24(lVar17,0x112db3ce0,&UNK_10d95e240);
        func_0x0001034bb9d0(uVar11,&SUB_104739264);
        func_0x0001034bbc24(lVar15,0x112db3ce0,&UNK_10d95e240);
        if ((uVar5 & 1) == 0) goto LAB_1034b7c94;
      }
      lVar4 = lStack_5b0;
      lVar15 = lStack_5b8;
      iVar2 = *(int *)(lStack_530 + 0x1c);
      (**(code **)(lStack_5b8 + 0x38))(lVar16,1,1,lStack_5b0);
      lVar3 = lStack_5a8;
      lVar8 = (long)*(int *)(lStack_5c0 + 0x30);
      FUN_1034bbabc(lVar10 + iVar2,lStack_5a8,0x112db3cc8,&UNK_10d98e570);
      FUN_1034bbabc(lVar16,lVar3 + lVar8,0x112db3cc8,&UNK_10d98e570);
      pcVar12 = *(code **)(lVar15 + 0x30);
      lVar15 = lVar3;
      (*pcVar12)(lVar3,1,lVar4);
      uVar11 = uStack_5d0;
      if ((int)lVar15 != 1) {
        FUN_1034bbabc(lVar3,uStack_5d0,0x112db3cc8,&UNK_10d98e570);
        lVar15 = lVar3 + lVar8;
        (*pcVar12)(lVar15,1,lVar4);
        puVar1 = puStack_5d8;
        if ((int)lVar15 != 1) {
          func_0x0001034bb98c(lVar3 + lVar8,puStack_5d8,&SUB_10475cf44);
          uVar5 = uVar11;
          func_0x00010475cfc4(uVar11,puVar1);
          func_0x0001034bb9d0(puVar1,&SUB_10475cf44);
          func_0x0001034bbc24(lVar16,0x112db3cc8,&UNK_10d98e570);
          func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
          func_0x0001034bb9d0(uVar11,&SUB_10475cf44);
          func_0x0001034bbc24(lVar3,0x112db3cc8,&UNK_10d98e570);
          if ((uVar5 & 1) != 0) {
            return 0;
          }
          return 0xc;
        }
        func_0x0001034bbc24(lVar16,0x112db3cc8,&UNK_10d98e570);
        func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
        func_0x0001034bb9d0(uVar11,&SUB_10475cf44);
LAB_1034b7e74:
        func_0x0001034bbc24(lVar3,0x112db3ca0,&UNK_10d95e200);
        return 0xc;
      }
      func_0x0001034bbc24(lVar16,0x112db3cc8,&UNK_10d98e570);
      func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
      lVar8 = lVar3 + lVar8;
      (*pcVar12)(lVar8,1,lVar4);
      if ((int)lVar8 != 1) goto LAB_1034b7e74;
      uVar6 = 0x112db3cc8;
      puVar7 = &UNK_10d98e570;
      goto LAB_1034b77e0;
    }
  }
  uVar6 = 0x112db3e90;
  puVar7 = &UNK_10d95e3e0;
LAB_1034b77e0:
  func_0x0001034bbc24(lVar3,uVar6,puVar7);
  return 0;
}



/* Entry: 1034b8bac; end: 1034b8d1f;  */

undefined8 FUN_1034b8bac(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_6c8 [840];
  ulong uStack_380;
  ulong auStack_378 [3];
  undefined1 auStack_360 [408];
  int iStack_1c8;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  
  uVar3 = *(ulong *)(param_1 + 0x928);
  if ((uVar3 < 2) || (*(long *)(uVar3 + 0x10) == 0)) {
    return 0;
  }
  func_0x000107c610b4(auStack_378,uVar3 + 0x20,0x348);
  if ((long)auStack_378[0] < 5) {
    if (auStack_378[0] < 3) {
      return 0;
    }
    if (auStack_378[0] == 3) {
      iVar2 = (int)auStack_360;
      func_0x00010178e1e4();
      func_0x00010178e544(auStack_378,auStack_6c8);
      func_0x00010178e510(auStack_378);
      if (iStack_1c8 != 3 || iVar2 == 1) {
        return 3;
      }
      return 9;
    }
    if (auStack_378[0] != 4) {
LAB_1034b8cf0:
      uStack_380 = auStack_378[0];
      func_0x00010178e544(auStack_378,auStack_6c8);
      func_0x000107c60614(&UNK_110796f88,&uStack_380,&UNK_110796f88,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b8d20);
      (*pcVar1)();
    }
  }
  else {
    if (auStack_378[0] < 0x10) {
      if ((1L << (auStack_378[0] & 0x3f) & 0xafc0U) != 0) {
        return 0;
      }
      if (auStack_378[0] == 0xc) {
        return 0xc;
      }
      if (auStack_378[0] == 0xe) {
        return 3;
      }
    }
    if (auStack_378[0] != 5) goto LAB_1034b8cf0;
    if (cStack_5e != '\x01') {
      if (cStack_5f == '\x01') {
        return 3;
      }
      if (cStack_5c != '\x01') {
        if (cStack_5d == '\0') {
          return 0;
        }
        return 5;
      }
      return 9;
    }
  }
  return 4;
}



/* Entry: 1034b8d20; end: 1034b8ecb;  */

void FUN_1034b8d20(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 auStack_8d0 [97];
  undefined1 auStack_5c8 [88];
  long lStack_570;
  
  func_0x000107c610b4(auStack_5c8,param_1 + 1,0x5a8);
  iVar2 = (int)auStack_5c8;
  func_0x00010189c838();
  if ((ulong)param_1[0x125] < 2) {
    if (iVar2 != 1 && 0 < lStack_570) goto LAB_1034b8d80;
LAB_1034b8da8:
  }
  else {
    if (*(long *)(param_1[0x125] + 0x10) == 0 && (iVar2 == 1 || lStack_570 < 1)) goto LAB_1034b8da8;
LAB_1034b8d80:
    auStack_8d0[0] = *param_1;
    switch(auStack_8d0[0]) {
    case 0:
    case 0x14:
      break;
    case 2:
      break;
    case 3:
    case 0x15:
      func_0x000107c610b4(auStack_8d0,param_1 + 0xc4,0x301);
      func_0x00010178e1e4();
      break;
    case 4:
    case 5:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
    case 0x12:
    case 0x16:
    case 0x17:
      goto LAB_1034b8da8;
    case 6:
      if (param_1[0xba] == 1) goto LAB_1034b8da8;
      if ((long)param_1[0xb7] < 1) {
        return;
      }
    case 1:
      break;
    case 9:
      break;
    case 10:
      FUN_1034b8bac(param_1);
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x13:
      break;
    default:
      func_0x000107c60614(&UNK_110798820,auStack_8d0,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b8ecc);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 1034b8ecc; end: 1034baf6b;  */

undefined8 FUN_1034b8ecc(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar10;
  long extraout_x8_07;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lStack_860;
  code *pcStack_858;
  long lStack_850;
  code *pcStack_848;
  long lStack_840;
  long lStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  undefined8 *puStack_7f8;
  long lStack_7f0;
  code *pcStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  ulong uStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  undefined8 *puStack_798;
  undefined1 auStack_790 [608];
  undefined1 auStack_530 [608];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint5 uStack_108;
  
  lVar3 = 0;
  func_0x000104723a94();
  lStack_828 = *(long *)(lVar3 + -8);
  lStack_830 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_828 + 0x40));
  lVar9 = (long)&lStack_860 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_7b0 = lVar9;
  func_0x00010472f4dc();
  pcStack_7e8 = *(code **)(lVar3 + -8);
  lStack_7a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcStack_7e8 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3e88;
  lStack_820 = lVar9;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  lStack_7f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar3 = 0x112db3e90;
  lStack_7c0 = lVar9;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_7e0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_818 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  lStack_808 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar9 - extraout_x12_01;
  uStack_7d0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar11 - extraout_x12_02;
  lVar3 = 0x112db3cd0;
  lStack_7c8 = lVar9;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puStack_7f8 = puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12_03;
  lStack_800 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar13 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0x112db3a00;
  lStack_7d8 = lVar19 - extraout_x12_06;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (lVar19 - extraout_x12_06) - extraout_x8_04;
  lVar3 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar16 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_810 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = 0;
  lStack_7a0 = lVar14 - extraout_x12_08;
  func_0x0001046d90b0();
  lVar17 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar10 = (lVar14 - extraout_x12_08) - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcbcf8;
  lStack_7b8 = lVar10;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar10 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_798 = (undefined8 *)((long)puVar12 - extraout_x12_09);
  lVar3 = 0;
  func_0x000100b91d00();
  puVar5 = puStack_798;
  lVar10 = *(long *)(param_1 + *(int *)(lVar3 + 0x48));
  if (0x16 < (uint)lVar10) {
    return 0;
  }
  if ((1 << (ulong)((uint)lVar10 & 0x1f) & 0x400408U) == 0) {
    return 0;
  }
  if (lVar10 == 3) {
LAB_1034b92d8:
    lVar3 = *(long *)(param_1 + *(int *)(lVar3 + 0x4c));
    if (lVar3 == 0) goto LAB_1034b934c;
    if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1034b9358:
      uVar6 = 1;
    }
    else {
      uVar11 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
LAB_1034b9330:
      func_0x0001034bb948(lVar3 + uVar11,puStack_798,&SUB_1046d90b0);
      uVar6 = 0;
    }
  }
  else {
    if (lVar10 == 0x16) {
      lVar3 = *(long *)(param_1 + *(int *)(lVar3 + 0x4c));
      if (lVar3 != 0) {
        if (*(ulong *)(lVar3 + 0x10) < 2) goto LAB_1034b9358;
        uVar11 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
        lVar3 = lVar3 + *(long *)(lVar17 + 0x48);
        goto LAB_1034b9330;
      }
    }
    else if (lVar10 == 10) goto LAB_1034b92d8;
LAB_1034b934c:
    uVar6 = 1;
  }
  (**(code **)(lVar17 + 0x38))(puVar5,uVar6,1,lVar9);
  FUN_1034bbabc(puVar5,puVar12,0x112dcbcf8,&UNK_10d98e3f0);
  puVar4 = puVar12;
  (**(code **)(lVar17 + 0x30))(puVar12,1,lVar9);
  lVar3 = lStack_7b8;
  if ((int)puVar4 == 1) {
    uVar6 = 0x112dcbcf8;
    puVar7 = &UNK_10d98e3f0;
    func_0x0001034bbc24(puVar5,0x112dcbcf8,&UNK_10d98e3f0);
LAB_1034b93d4:
    func_0x0001034bbc24(puVar12,uVar6,puVar7);
    uVar6 = 0;
  }
  else {
    func_0x0001034bb98c(puVar12,lStack_7b8,&SUB_1046d90b0);
    FUN_1034bbabc(lVar3 + *(int *)(lVar9 + 0x28),lVar16,0x112db3a00,&UNK_10d95dff0);
    lVar10 = 0;
    func_0x00010477ea9c();
    lVar9 = lVar16;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar16,1,lVar10);
    lVar3 = lStack_7a0;
    if ((int)lVar9 == 1) {
      func_0x0001034bbc24(lVar16,0x112db3a00,&UNK_10d95dff0);
      lVar9 = 0;
      func_0x000104760f24();
      lVar3 = lStack_7a0;
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lStack_7a0,1,1,lVar9);
    }
    else {
      FUN_1034bbabc(lVar16 + *(int *)(lVar10 + 0x14),lStack_7a0,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lVar16,&SUB_10477ea9c);
    }
    lVar9 = lStack_7d8;
    FUN_1034bbabc(lVar3,lVar14,0x112dcbf08,&UNK_10d98e580);
    lVar16 = 0;
    func_0x000104760f24();
    pcStack_858 = *(code **)(*(long *)(lVar16 + -8) + 0x30);
    lVar10 = lVar14;
    (*pcStack_858)(lVar14,1,lVar16);
    lVar3 = lStack_7c8;
    if ((int)lVar10 == 1) {
      func_0x0001034bbc24(lVar14,0x112dcbf08,&UNK_10d98e580);
      lVar10 = 0;
      func_0x00010471853c();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar9,1,1,lVar10);
    }
    else {
      FUN_1034bbabc(lVar14 + *(int *)(lVar16 + 0x20),lVar9,0x112db3cd0,&UNK_10d95e230);
      func_0x0001034bb9d0(lVar14,&SUB_104760f24);
    }
    FUN_1034bbabc(lVar9,lVar19,0x112db3cd0,&UNK_10d95e230);
    lVar14 = 0;
    func_0x00010471853c();
    pcVar18 = *(code **)(*(long *)(lVar14 + -8) + 0x30);
    lVar10 = lVar19;
    (*pcVar18)(lVar19,1,lVar14);
    if ((int)lVar10 == 1) {
      func_0x0001034bbc24(lVar19,0x112db3cd0,&UNK_10d95e230);
      lStack_840 = 0;
    }
    else {
      lVar10 = *(long *)(lVar19 + *(int *)(lVar14 + 0x18));
      func_0x000107c61434(lVar10);
      func_0x0001034bb9d0(lVar19,&SUB_10471853c);
      lStack_840 = *(long *)(lVar10 + 0x10);
      func_0x000107c6142c(lVar10);
    }
    pcVar1 = pcStack_7e8;
    FUN_1034bbabc(lVar9,lVar13,0x112db3cd0,&UNK_10d95e230);
    lVar10 = lVar13;
    pcStack_848 = pcVar18;
    (*pcVar18)(lVar13,1,lVar14);
    lStack_850 = lVar16;
    lStack_838 = lVar14;
    if ((int)lVar10 == 1) {
      func_0x0001034bbc24(lVar13,0x112db3cd0,&UNK_10d95e230);
      lVar10 = lStack_7a8;
      pcVar18 = *(code **)(pcVar1 + 0x38);
      (*pcVar18)(lVar3,1,1,lStack_7a8);
    }
    else {
      FUN_1034bbabc(lVar13 + *(int *)(lVar14 + 0x14),lVar3,0x112db3e90,&UNK_10d95e3e0);
      func_0x0001034bb9d0(lVar13,&SUB_10471853c);
      pcVar18 = *(code **)(pcVar1 + 0x38);
      lVar10 = lStack_7a8;
    }
    uVar11 = uStack_7d0;
    (*pcVar18)(uStack_7d0,1,1,lVar10);
    lVar16 = lStack_7c0;
    lVar13 = (long)*(int *)(lStack_7f0 + 0x30);
    FUN_1034bbabc(lVar3,lStack_7c0,0x112db3e90,&UNK_10d95e3e0);
    FUN_1034bbabc(uVar11,lVar16 + lVar13,0x112db3e90,&UNK_10d95e3e0);
    pcVar18 = *(code **)(pcVar1 + 0x30);
    lVar17 = lVar16;
    (*pcVar18)(lVar16,1,lVar10);
    lVar14 = lStack_808;
    pcStack_7e8 = pcVar18;
    if ((int)lVar17 == 1) {
      func_0x0001034bbc24(uVar11,0x112db3e90,&UNK_10d95e3e0);
      lVar16 = lStack_7c0;
      func_0x0001034bbc24(lVar3,0x112db3e90,&UNK_10d95e3e0);
      lVar13 = lVar16 + lVar13;
      (*pcVar18)(lVar13,1,lVar10);
      lVar3 = lStack_838;
      if ((int)lVar13 == 1) {
        func_0x0001034bbc24(lVar16,0x112db3e90,&UNK_10d95e3e0);
        uVar8 = 0;
      }
      else {
LAB_1034b9834:
        lVar3 = lStack_838;
        func_0x0001034bbc24(lVar16,0x112db3e88,&UNK_10dbce5e0);
        uVar8 = 1;
      }
    }
    else {
      FUN_1034bbabc(lVar16,lStack_808,0x112db3e90,&UNK_10d95e3e0);
      lVar3 = lVar16 + lVar13;
      (*pcVar18)(lVar3,1,lVar10);
      lVar17 = lStack_820;
      if ((int)lVar3 == 1) {
        func_0x0001034bbc24(uStack_7d0,0x112db3e90,&UNK_10d95e3e0);
        lVar16 = lStack_7c0;
        func_0x0001034bbc24(lStack_7c8,0x112db3e90,&UNK_10d95e3e0);
        func_0x0001034bb9d0(lVar14,&SUB_10472f4dc);
        goto LAB_1034b9834;
      }
      func_0x0001034bb98c(lVar16 + lVar13,lStack_820,&SUB_10472f4dc);
      lVar3 = lVar14;
      func_0x00010472f55c(lVar14,lVar17);
      func_0x0001034bb9d0(lVar17,&SUB_10472f4dc);
      func_0x0001034bbc24(uStack_7d0,0x112db3e90,&UNK_10d95e3e0);
      func_0x0001034bbc24(lStack_7c8,0x112db3e90,&UNK_10d95e3e0);
      func_0x0001034bb9d0(lVar14,&SUB_10472f4dc);
      lVar10 = lStack_7a8;
      lVar9 = lStack_7d8;
      func_0x0001034bbc24(lVar16,0x112db3e90,&UNK_10d95e3e0);
      uVar8 = ~(uint)lVar3 & 1;
      lVar3 = lStack_838;
    }
    lVar14 = lStack_800;
    lVar13 = lStack_810;
    if (uVar8 == 0 && lStack_840 == 0) {
      FUN_1034bbabc(lStack_7a0,lStack_810,0x112dcbf08,&UNK_10d98e580);
      lVar3 = lStack_850;
      lVar10 = lVar13;
      (*pcStack_858)(lVar13,1,lStack_850);
      if ((int)lVar10 == 1) {
        func_0x0001034bbc24(lVar13,0x112dcbf08,&UNK_10d98e580);
LAB_1034b9a8c:
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_120 = 0x3000000000000000;
        uVar11 = 0x6fefefefe;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
      }
      else {
        func_0x000107c610b4(auStack_530,lVar13 + *(int *)(lVar3 + 0x1c),0x260);
        FUN_1034bbabc(auStack_530,auStack_790,0x112db3ce8,&UNK_10d98ff60);
        func_0x0001034bb9d0(lVar13,&SUB_104760f24);
        func_0x000107c610b4(&uStack_2d0,auStack_530,0x260);
        iVar2 = (int)auStack_530;
        func_0x0001015538ec();
        if (iVar2 == 1) goto LAB_1034b9a8c;
        FUN_1034bbabc(&uStack_140,auStack_790,0x112db3e10,&UNK_10dbce5f0);
        func_0x0001034bbc24(auStack_530,0x112db3ce8,&UNK_10d98ff60);
        uVar11 = (ulong)uStack_108;
      }
      puVar12 = puStack_798;
      uStack_298 = (undefined4)uVar11;
      uStack_294 = (undefined1)(uVar11 >> 0x20);
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_260 = 0;
      uStack_270 = 0x3000000000000000;
      uStack_268 = 0;
      uStack_258 = 0xfefefefe;
      uStack_254 = 6;
      uStack_2d0 = uStack_140;
      uStack_2c8 = uStack_138;
      uStack_2c0 = uStack_130;
      uStack_2b8 = uStack_128;
      uStack_2b0 = uStack_120;
      uStack_2a8 = uStack_118;
      uStack_2a0 = uStack_110;
      func_0x0001034bbc24(lVar9,0x112db3cd0,&UNK_10d95e230);
      func_0x0001034bbc24(lStack_7a0,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lStack_7b8,&SUB_1046d90b0);
      func_0x0001034bbc24(puVar12,0x112dcbcf8,&UNK_10d98e3f0);
      if ((((((uStack_120 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           ((uVar11 & 0xfefefefefe) == 0x6fefefefe)) &&
          (((uStack_270 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)) &&
         (((ulong)CONCAT14(uStack_254,uStack_258) & 0xfefefefefe) == 0x6fefefefe)) {
        uVar6 = 0x112db3e10;
        puVar7 = &UNK_10dbce5f0;
        puVar12 = &uStack_2d0;
        goto LAB_1034b93d4;
      }
      uVar6 = 0x112db3e18;
      puVar7 = &UNK_10d95e370;
      puVar12 = &uStack_2d0;
    }
    else {
      FUN_1034bbabc(lVar9,lStack_800,0x112db3cd0,&UNK_10d95e230);
      lVar16 = lVar14;
      (*pcStack_848)(lVar14,1,lVar3);
      lVar13 = lStack_818;
      if ((int)lVar16 == 1) {
        func_0x0001034bbc24(lVar14,0x112db3cd0,&UNK_10d95e230);
LAB_1034b9b0c:
        uVar11 = 0x6fefefefe;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_2b0 = 0x3000000000000000;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
      }
      else {
        FUN_1034bbabc(lVar14 + *(int *)(lVar3 + 0x14),lStack_818,0x112db3e90,&UNK_10d95e3e0);
        func_0x0001034bb9d0(lVar14,&SUB_10471853c);
        lVar14 = lVar13;
        (*pcStack_7e8)(lVar13,1,lVar10);
        if ((int)lVar14 == 1) {
          func_0x0001034bbc24(lVar13,0x112db3e90,&UNK_10d95e3e0);
          goto LAB_1034b9b0c;
        }
        func_0x000107c610b4(auStack_530,lVar13 + *(int *)(lVar10 + 0x14),0x260);
        FUN_1034bbabc(auStack_530,auStack_790,0x112db3ce8,&UNK_10d98ff60);
        func_0x0001034bb9d0(lVar13,&SUB_10472f4dc);
        func_0x000107c610b4(&uStack_2d0,auStack_530,0x260);
        iVar2 = (int)auStack_530;
        func_0x0001015538ec();
        if (iVar2 == 1) goto LAB_1034b9b0c;
        FUN_1034bbabc(&uStack_140,auStack_790,0x112db3e10,&UNK_10dbce5f0);
        func_0x0001034bbc24(auStack_530,0x112db3ce8,&UNK_10d98ff60);
        uVar11 = (ulong)uStack_108;
        uStack_2b0 = uStack_120;
        uStack_2d0 = uStack_140;
        uStack_2c8 = uStack_138;
        uStack_2c0 = uStack_130;
        uStack_2b8 = uStack_128;
      }
      puVar12 = puStack_7f8;
      uStack_298 = (undefined4)uVar11;
      uStack_294 = (undefined1)(uVar11 >> 0x20);
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_260 = 0;
      uStack_270 = 0x3000000000000000;
      uStack_268 = 0;
      uStack_258 = 0xfefefefe;
      lStack_7c0 = 6;
      uStack_254 = 6;
      uStack_2a8 = uStack_118;
      uStack_2a0 = uStack_110;
      if ((((uStack_2b0 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         ((uVar11 & 0xfefefefefe) == 0x6fefefefe)) {
        func_0x0001034bbc24(&uStack_2d0,0x112db3e10,&UNK_10dbce5f0);
        FUN_1034bbabc(lVar9,puVar12,0x112db3cd0,&UNK_10d95e230);
        puVar5 = puVar12;
        (*pcStack_848)(puVar12,1,lVar3);
        if ((int)puVar5 != 1) {
          lVar3 = *(long *)((long)puVar12 + (long)*(int *)(lVar3 + 0x18));
          func_0x000107c61434(lVar3);
          func_0x0001034bb9d0(puVar12,&SUB_10471853c);
          if (*(long *)(lVar3 + 0x10) == 0) {
            func_0x000107c6142c(lVar3);
            uVar6 = 0;
LAB_1034ba188:
            puVar12 = puStack_798;
            lVar3 = lStack_7a0;
            func_0x0001034bbc24(lVar9,0x112db3cd0,&UNK_10d95e230);
            func_0x0001034bbc24(lVar3,0x112dcbf08,&UNK_10d98e580);
            func_0x0001034bb9d0(lStack_7b8,&SUB_1046d90b0);
            func_0x0001034bbc24(puVar12,0x112dcbcf8,&UNK_10d98e3f0);
            return uVar6;
          }
          uVar11 = 0;
          lStack_7c8 = (long)*(int *)(lStack_830 + 0x14);
          lVar9 = lVar3 + ((ulong)*(byte *)(lStack_828 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lStack_828 + 0x50) ^ 0xffffffffffffffff));
          lStack_7f0 = *(long *)(lStack_828 + 0x48);
          uStack_7d0 = *(long *)(lVar3 + 0x10) - 1;
          puStack_7f8 = &uStack_118;
          do {
            lVar13 = lStack_7b0;
            func_0x0001034bb948(lVar9,lStack_7b0,&SUB_104723a94);
            lVar10 = lStack_7e0;
            FUN_1034bbabc(lVar13 + lStack_7c8,lStack_7e0,0x112db3e90,&UNK_10d95e3e0);
            lVar13 = lStack_7a8;
            lVar14 = lVar10;
            (*pcStack_7e8)(lVar10,1,lStack_7a8);
            if ((int)lVar14 == 1) {
              func_0x0001034bbc24(lVar10,0x112db3e90,&UNK_10d95e3e0);
LAB_1034b9e0c:
              uVar15 = 0x6fefefefe;
              uStack_2a8 = 0;
              uStack_2a0 = 0;
              uStack_2b0 = 0x3000000000000000;
              uStack_2d0 = 0;
              uStack_2c8 = 0;
              uStack_2c0 = 0;
              uStack_2b8 = 0;
            }
            else {
              func_0x000107c610b4(auStack_530,lVar10 + *(int *)(lVar13 + 0x14),0x260);
              FUN_1034bbabc(auStack_530,auStack_790,0x112db3ce8,&UNK_10d98ff60);
              func_0x0001034bb9d0(lVar10,&SUB_10472f4dc);
              func_0x000107c610b4(&uStack_2d0,auStack_530,0x260);
              iVar2 = (int)auStack_530;
              func_0x0001015538ec();
              if (iVar2 == 1) goto LAB_1034b9e0c;
              FUN_1034bbabc(&uStack_140,auStack_790,0x112db3e10,&UNK_10dbce5f0);
              func_0x0001034bbc24(auStack_530,0x112db3ce8,&UNK_10d98ff60);
              uStack_2a0 = puStack_7f8[1];
              uStack_2a8 = *puStack_7f8;
              uVar15 = (ulong)*(uint5 *)(puStack_7f8 + 2);
              uStack_2b0 = uStack_120;
              uStack_2d0 = uStack_140;
              uStack_2c8 = uStack_138;
              uStack_2c0 = uStack_130;
              uStack_2b8 = uStack_128;
            }
            uStack_298 = (undefined4)uVar15;
            uStack_294 = (undefined1)(uVar15 >> 0x20);
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_270 = 0x3000000000000000;
            uStack_268 = 0;
            uStack_260 = 0;
            uStack_258 = 0xfefefefe;
            uStack_254 = (undefined1)lStack_7c0;
            if ((((uStack_2b0 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
               ((uVar15 & 0xfefefefefe) != 0x6fefefefe)) {
              func_0x000107c6142c(lVar3);
              func_0x0001034bb9d0(lStack_7b0,&SUB_104723a94);
LAB_1034ba158:
              func_0x0001034bbc24(&uStack_2d0,0x112db3e18,&UNK_10d95e370);
              uVar6 = 1;
              lVar9 = lStack_7d8;
              goto LAB_1034ba188;
            }
            func_0x0001034bb9d0(lStack_7b0,&SUB_104723a94);
            if ((((uStack_270 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
               (((ulong)CONCAT14(uStack_254,uStack_258) & 0xfefefefefe) != 0x6fefefefe)) {
              func_0x000107c6142c(lVar3);
              goto LAB_1034ba158;
            }
            func_0x0001034bbc24(&uStack_2d0,0x112db3e10,&UNK_10dbce5f0);
            if (uStack_7d0 == uVar11) {
              func_0x000107c6142c(lVar3);
              uVar6 = 0;
              lVar9 = lStack_7d8;
              goto LAB_1034ba188;
            }
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + lStack_7f0;
            if (*(ulong *)(lVar3 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1034b9f58);
              (*pcVar18)();
            }
          } while( true );
        }
        uVar6 = 0x112db3cd0;
        puVar7 = &UNK_10d95e230;
        func_0x0001034bbc24(lVar9,0x112db3cd0,&UNK_10d95e230);
        func_0x0001034bbc24(lStack_7a0,0x112dcbf08,&UNK_10d98e580);
        func_0x0001034bb9d0(lStack_7b8,&SUB_1046d90b0);
        func_0x0001034bbc24(puStack_798,0x112dcbcf8,&UNK_10d98e3f0);
        goto LAB_1034b93d4;
      }
      func_0x0001034bbc24(&uStack_2d0,0x112db3e18,&UNK_10d95e370);
      func_0x0001034bbc24(lVar9,0x112db3cd0,&UNK_10d95e230);
      func_0x0001034bbc24(lStack_7a0,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lStack_7b8,&SUB_1046d90b0);
      uVar6 = 0x112dcbcf8;
      puVar7 = &UNK_10d98e3f0;
      puVar12 = puStack_798;
    }
    func_0x0001034bbc24(puVar12,uVar6,puVar7);
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 1034baf6c; end: 1034bb02b;  */

undefined1  [16] FUN_1034baf6c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = unaff_x20;
    return auVar13;
  }
  func_0x000107c60e78();
  lVar8 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar5 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0x112dcbf08;
  lStack_a8 = lVar5 - extraout_x12;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar10 = (lVar5 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_00;
  lVar8 = 0x112db3cd8;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12_01;
  lVar3 = 0;
  func_0x00010470ee30();
  lStack_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puVar9 = (undefined8 *)(lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_b8 = puVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined8 *)((long)puVar9 - extraout_x12_02);
  lVar3 = 0;
  func_0x0001046d90b0();
  if (*(int *)(lVar2 + *(int *)(lVar3 + 0x70) + 0x48) != 3) goto LAB_1034bb5c4;
  if (param_2 == 0) {
LAB_1034bb294:
    FUN_1034bbabc(lVar2 + *(int *)(lVar3 + 0x28),lVar5,0x112db3a00,&UNK_10d95dff0);
    lVar3 = 0;
    func_0x00010477ea9c();
    lVar2 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar2 == 1) {
      func_0x0001034bbc24(lVar5,0x112db3a00,&UNK_10d95dff0);
    }
    else {
      FUN_1034bbabc(lVar5 + *(int *)(lVar3 + 0x14),lVar10,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lVar5,&SUB_10477ea9c);
      lVar5 = 0;
      func_0x000104760f24();
      lVar2 = lVar10;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar10,1,lVar5);
      if ((int)lVar2 == 1) {
        func_0x0001034bbc24(lVar10,0x112dcbf08,&UNK_10d98e580);
      }
      else {
        FUN_1034bbabc(lVar10 + *(int *)(lVar5 + 0x18),lVar8,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001034bb9d0(lVar10,&SUB_104760f24);
        lVar5 = 0;
        func_0x00010470fbcc();
        lVar2 = lVar8;
        (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar8,1,lVar5);
        if ((int)lVar2 == 1) {
          uVar4 = 0x112db3cd8;
          puVar7 = &UNK_10dd317d0;
          goto LAB_1034bb3dc;
        }
        lVar2 = *(long *)(lVar8 + 0xb0);
        func_0x000107c61434(lVar2);
        func_0x0001034bb9d0(lVar8,&SUB_10470fbcc);
        puVar9 = puStack_b8;
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x10) != 0) {
            func_0x0001034bb948(lVar2 + ((ulong)*(byte *)(lStack_b0 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lStack_b0 + 0x50) ^ 0xffffffffffffffff)),
                                puStack_b8,&SUB_10470ee30);
            func_0x000107c6142c(lVar2);
            uVar4 = *puVar9;
            uVar6 = puVar9[1];
            func_0x000107c61434(uVar6);
            goto LAB_1034bb5a8;
          }
LAB_1034bb5bc:
          func_0x000107c6142c(lVar2);
        }
      }
    }
  }
  else {
    uVar4 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f154240);
    lStack_c0 = lVar5;
    func_0x000107c3ebdc();
    lVar5 = lStack_c0;
    func_0x000107c61170(uVar4);
    lVar1 = lStack_a8;
    if ((int)param_2 == 0) goto LAB_1034bb294;
    FUN_1034bbabc(lVar2 + *(int *)(lVar3 + 0x28),lStack_a8,0x112db3a00,&UNK_10d95dff0);
    lVar8 = 0;
    func_0x00010477ea9c();
    lVar2 = lVar1;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar1,1,lVar8);
    if ((int)lVar2 == 1) {
      uVar4 = 0x112db3a00;
      puVar7 = &UNK_10d95dff0;
      lVar8 = lVar1;
LAB_1034bb3dc:
      func_0x0001034bbc24(lVar8,uVar4,puVar7);
    }
    else {
      FUN_1034bbabc(lVar1 + *(int *)(lVar8 + 0x14),lVar12,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lVar1,&SUB_10477ea9c);
      lVar8 = 0;
      func_0x000104760f24();
      lVar2 = lVar12;
      (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar12,1,lVar8);
      if ((int)lVar2 != 1) {
        FUN_1034bbabc(lVar12 + *(int *)(lVar8 + 0x18),lVar11,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001034bb9d0(lVar12,&SUB_104760f24);
        lVar8 = 0;
        func_0x00010470fbcc();
        lVar2 = lVar11;
        (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar11,1,lVar8);
        if ((int)lVar2 == 1) {
          func_0x0001034bbc24(lVar11,0x112db3cd8,&UNK_10dd317d0);
          goto LAB_1034bb5c4;
        }
        lVar2 = *(long *)(lVar11 + 0xb8);
        func_0x000107c61434(lVar2);
        func_0x0001034bb9d0(lVar11,&SUB_10470fbcc);
        if (lVar2 == 0) goto LAB_1034bb5c4;
        if (*(long *)(lVar2 + 0x10) == 0) goto LAB_1034bb5bc;
        func_0x0001034bb948(lVar2 + ((ulong)*(byte *)(lStack_b0 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lStack_b0 + 0x50) ^ 0xffffffffffffffff)),
                            puVar9,&SUB_10470ee30);
        func_0x000107c6142c(lVar2);
        uVar4 = *puVar9;
        uVar6 = puVar9[1];
        func_0x000107c61434(uVar6);
LAB_1034bb5a8:
        func_0x0001034bb9d0(puVar9,&SUB_10470ee30);
        goto LAB_1034bb5cc;
      }
      func_0x0001034bbc24(lVar12,0x112dcbf08,&UNK_10d98e580);
    }
  }
LAB_1034bb5c4:
  uVar4 = 0;
  uVar6 = 0;
LAB_1034bb5cc:
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = uVar4;
  return auVar14;
}



/* Entry: 1034bb02c; end: 1034bb5eb;  */

undefined1  [16] FUN_1034bb02c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar8 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar4 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0x112dcbf08;
  lStack_68 = lVar4 - extraout_x12;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar9 = (lVar4 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12_00;
  lVar8 = 0x112db3cd8;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12_01;
  lVar2 = 0;
  func_0x00010470ee30();
  lStack_70 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  puVar7 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_78 = puVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined8 *)((long)puVar7 - extraout_x12_02);
  lVar2 = 0;
  func_0x0001046d90b0();
  if (*(int *)(param_1 + *(int *)(lVar2 + 0x70) + 0x48) != 3) goto LAB_1034bb5c4;
  if (param_2 == 0) {
LAB_1034bb294:
    FUN_1034bbabc(param_1 + *(int *)(lVar2 + 0x28),lVar4,0x112db3a00,&UNK_10d95dff0);
    lVar10 = 0;
    func_0x00010477ea9c();
    lVar2 = lVar4;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar4,1,lVar10);
    if ((int)lVar2 == 1) {
      func_0x0001034bbc24(lVar4,0x112db3a00,&UNK_10d95dff0);
    }
    else {
      FUN_1034bbabc(lVar4 + *(int *)(lVar10 + 0x14),lVar9,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lVar4,&SUB_10477ea9c);
      lVar2 = 0;
      func_0x000104760f24();
      lVar4 = lVar9;
      (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar9,1,lVar2);
      if ((int)lVar4 == 1) {
        func_0x0001034bbc24(lVar9,0x112dcbf08,&UNK_10d98e580);
      }
      else {
        FUN_1034bbabc(lVar9 + *(int *)(lVar2 + 0x18),lVar8,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001034bb9d0(lVar9,&SUB_104760f24);
        lVar2 = 0;
        func_0x00010470fbcc();
        lVar4 = lVar8;
        (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar8,1,lVar2);
        if ((int)lVar4 == 1) {
          uVar3 = 0x112db3cd8;
          puVar6 = &UNK_10dd317d0;
          goto LAB_1034bb3dc;
        }
        lVar4 = *(long *)(lVar8 + 0xb0);
        func_0x000107c61434(lVar4);
        func_0x0001034bb9d0(lVar8,&SUB_10470fbcc);
        puVar7 = puStack_78;
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            func_0x0001034bb948(lVar4 + ((ulong)*(byte *)(lStack_70 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lStack_70 + 0x50) ^ 0xffffffffffffffff)),
                                puStack_78,&SUB_10470ee30);
            func_0x000107c6142c(lVar4);
            uVar3 = *puVar7;
            uVar5 = puVar7[1];
            func_0x000107c61434(uVar5);
            goto LAB_1034bb5a8;
          }
LAB_1034bb5bc:
          func_0x000107c6142c(lVar4);
        }
      }
    }
  }
  else {
    uVar3 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f154240);
    lStack_80 = lVar4;
    func_0x000107c3ebdc();
    lVar4 = lStack_80;
    func_0x000107c61170(uVar3);
    lVar1 = lStack_68;
    if ((int)param_2 == 0) goto LAB_1034bb294;
    FUN_1034bbabc(param_1 + *(int *)(lVar2 + 0x28),lStack_68,0x112db3a00,&UNK_10d95dff0);
    lVar4 = 0;
    func_0x00010477ea9c();
    lVar8 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar8 == 1) {
      uVar3 = 0x112db3a00;
      puVar6 = &UNK_10d95dff0;
      lVar8 = lVar1;
LAB_1034bb3dc:
      func_0x0001034bbc24(lVar8,uVar3,puVar6);
    }
    else {
      FUN_1034bbabc(lVar1 + *(int *)(lVar4 + 0x14),lVar11,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034bb9d0(lVar1,&SUB_10477ea9c);
      lVar4 = 0;
      func_0x000104760f24();
      lVar8 = lVar11;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar11,1,lVar4);
      if ((int)lVar8 != 1) {
        FUN_1034bbabc(lVar11 + *(int *)(lVar4 + 0x18),lVar10,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001034bb9d0(lVar11,&SUB_104760f24);
        lVar4 = 0;
        func_0x00010470fbcc();
        lVar8 = lVar10;
        (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar10,1,lVar4);
        if ((int)lVar8 == 1) {
          func_0x0001034bbc24(lVar10,0x112db3cd8,&UNK_10dd317d0);
          goto LAB_1034bb5c4;
        }
        lVar4 = *(long *)(lVar10 + 0xb8);
        func_0x000107c61434(lVar4);
        func_0x0001034bb9d0(lVar10,&SUB_10470fbcc);
        if (lVar4 == 0) goto LAB_1034bb5c4;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_1034bb5bc;
        func_0x0001034bb948(lVar4 + ((ulong)*(byte *)(lStack_70 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lStack_70 + 0x50) ^ 0xffffffffffffffff)),
                            puVar7,&SUB_10470ee30);
        func_0x000107c6142c(lVar4);
        uVar3 = *puVar7;
        uVar5 = puVar7[1];
        func_0x000107c61434(uVar5);
LAB_1034bb5a8:
        func_0x0001034bb9d0(puVar7,&SUB_10470ee30);
        goto LAB_1034bb5cc;
      }
      func_0x0001034bbc24(lVar11,0x112dcbf08,&UNK_10d98e580);
    }
  }
LAB_1034bb5c4:
  uVar3 = 0;
  uVar5 = 0;
LAB_1034bb5cc:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = uVar3;
  return auVar12;
}



/* Entry: 1034bb5ec; end: 1034bb637;  */

void FUN_1034bb5ec(undefined8 *param_1)

{
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
  param_1[0xc] = 0;
  param_1[0xd] = 3;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  return;
}



/* Entry: 1034bb638; end: 1034bb6bf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034bb69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001034bb6a0) */
/* WARNING: Removing unreachable block (ram,0x000100d54950) */
/* WARNING: Removing unreachable block (ram,0x000100d54960) */
/* WARNING: Removing unreachable block (ram,0x000100d5495c) */

void FUN_1034bb638(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,char param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffc0;
  puVar3 = &stack0xfffffffffffffff0;
  if (param_7 == '\x01') {
    func_0x000107c6142c(param_2);
    puVar1 = (undefined1 *)register0x00000008;
    param_2 = param_3;
    param_3 = param_4;
    param_4 = unaff_x19;
    param_6 = unaff_x20;
    puVar3 = unaff_x29;
  }
  else {
    func_0x000107c6142c();
    unaff_x30 = 0x1034bb6a0;
  }
  uVar2 = (uint)(param_3 >> 0x3e);
  if (uVar2 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    *(undefined8 *)(puVar1 + -0x20) = param_6;
    *(ulong *)(puVar1 + -0x18) = param_4;
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 1034bb6c0; end: 1034bba7b;  */

undefined8 FUN_1034bb6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_103634b70(param_2,param_1);
  return param_2;
}



/* Entry: 1034bba7c; end: 1034bbabb;  */

int FUN_1034bba7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1034bbabc; end: 1034bbb3f;  */

undefined8 FUN_1034bbabc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034bbb40; end: 1034bbb7f;  */

void FUN_1034bbb40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7020;
  func_0x000107c61520(&DAT_10dbe7020,&UNK_11066d350);
  puRam0000000112f73220 = puVar1;
  return;
}



/* Entry: 1034bbb80; end: 1034bbc63;  */

undefined8 FUN_1034bbb80(undefined8 param_1)

{
  FUN_1036046b0();
  return param_1;
}



/* Entry: 1034bbc64; end: 1034bbc7f;  */

int FUN_1034bbc64(int *param_1)

{
  if (*(char *)((long)param_1 + 0x79) != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1034bbc80; end: 1034bbcef;  */

undefined8 FUN_1034bbc80(undefined8 param_1,undefined8 param_2)

{
  FUN_10360b0d8(param_2,param_1);
  return param_2;
}



/* Entry: 1034bbcf0; end: 1034bbe57;  */

int FUN_1034bbcf0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1034bbd6c;
        goto LAB_1034bbd50;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1034bbd50:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1034bbd6c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1034bbe58; end: 1034bbe97;  */

void FUN_1034bbe58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbce6b0;
  func_0x000107c61520(&UNK_10dbce6b0,&UNK_11065c600);
  puRam0000000112f73238 = puVar1;
  return;
}



/* Entry: 1034bbe98; end: 1034bdf67;  */

long **** FUN_1034bbe98(long ****param_1,ulong *param_2,double *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long ***ppplVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined *puVar9;
  code *pcVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  undefined8 uVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  uint uVar17;
  ulong *puVar18;
  long ***ppplVar19;
  long ****pppplVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  long ****pppplVar24;
  ulong uVar25;
  double dVar26;
  long ****pppplStack_1d8;
  long ***ppplStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long ***ppplStack_198;
  ulong *puStack_190;
  double *pdStack_188;
  long ***ppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  
  dVar26 = param_3[2];
  cVar7 = *(char *)(param_3 + 3);
  dVar23 = param_3[4];
  cVar8 = *(char *)(param_3 + 5);
  pppplVar11 = param_1;
  puVar18 = param_2;
  pdVar21 = param_3;
  FUN_1034e4ed0();
  ppplStack_198 = (long ***)pppplVar11;
  puStack_190 = puVar18;
  pdStack_188 = pdVar21;
  func_0x000103bf895c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bbfa4:
    ppppplVar13 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    ppplVar12 = *pppplVar11;
    ppplVar4 = pppplVar11[1];
    func_0x000107c61434(ppplVar4);
    func_0x000107c61434(param_1);
    ppplVar19 = ppplVar4;
    func_0x000100029284(ppplVar12);
    if (((ulong)ppplVar19 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
      func_0x000107c6142c(ppplVar4);
      goto LAB_1034bbfa4;
    }
    func_0x0001000bb420(param_1[7] + (long)ppplVar12 * 4,&ppplStack_180);
    func_0x000107c6142c(ppplVar4);
    func_0x000107c6142c(param_1);
    if (lStack_168 == 0) goto LAB_1034bbfa4;
    ppppplVar13 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar13,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppppplVar13 & 1) != 0) {
      ppppplVar13 = (long *****)pppplStack_e0;
      FUN_1034cc324(pppplStack_e0,pppplStack_d8);
      FUN_1034e604c();
    }
  }
  func_0x000103bf8d94();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc090:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar13;
    pppplVar24 = ppppplVar13[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc090;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    pppplVar11 = &ppplStack_180;
    func_0x000107c6147c(ppppplVar16,pppplVar11,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    uVar17 = (uint)pppplVar11;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49820(pppplStack_e0);
      func_0x0001018aad68();
      if ((uVar17 & 0xff) != 1) {
        FUN_1034cc8ac();
        FUN_1034e610c();
      }
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf89fc();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc154:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc154;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppppplVar16 & 1) != 0) {
      ppppplVar16 = (long *****)pppplStack_e0;
      FUN_1034cca48(pppplStack_e0,pppplStack_d8);
      FUN_1034e6240();
    }
  }
  func_0x000103bf8a34();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc218:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc218;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppppplVar16 & 1) != 0) {
      ppppplVar16 = (long *****)pppplStack_e0;
      FUN_1034cca48(pppplStack_e0,pppplStack_d8);
      func_0x0001034e62cc();
    }
  }
  func_0x000103bf89c0();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc2f4:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc2f4;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      FUN_1034e6198();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8a6c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc3d0:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc3d0;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      FUN_1034e6358();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8aa8();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc4ac:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc4ac;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      FUN_1034e7a64();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8ae8();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc588:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc588;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      func_0x0001034e6400();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8b20();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc664:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc664;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      func_0x0001034e64a8();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8b58();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc770:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc770;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e6550(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8b90();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc87c:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc87c;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e65f8(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8bcc();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bc988:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bc988;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e7544(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8c0c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bca94:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bca94;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e66a0(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8c44();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bcba0:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bcba0;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e6dcc(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8c7c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bcc7c:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bcc7c;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c436dc(pppplStack_e0);
      FUN_1034e6748(0,0xc000000000000000);
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8cb4();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bcd58:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bcd58;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      FUN_1034e67f0();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8cec();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bce34:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bce34;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49804(pppplStack_e0);
      func_0x0001034e6898();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8d24();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bcf20:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bcf20;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      ppppplVar16 = (long *****)pppplStack_e0;
      func_0x000107c49820();
      if (ppppplVar16 < (long *****)0x5) {
        FUN_1034e6980(*(undefined8 *)(&UNK_10dbce6e0 + (long)ppppplVar16 * 8),1);
      }
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8d5c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd00c:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd00c;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      ppppplVar16 = (long *****)pppplStack_e0;
      func_0x000107c5d388();
      if (ppppplVar16 < (long *****)0x3) {
        func_0x0001034e6a0c(*(undefined8 *)(&UNK_10dbce708 + (long)ppppplVar16 * 8),1);
      }
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8dcc();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd0e8:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd0e8;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c3ebcc(pppplStack_e0);
      FUN_1034e6a98();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8e04();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd1c0:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd1c0;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c49820(pppplStack_e0);
      FUN_1034cc8f8();
      FUN_1034e6c90();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8e3c();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd29c:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd29c;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c3ebcc(pppplStack_e0);
      func_0x0001034e6d1c();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8e74();
  if (param_1[2] == (long ***)0x0) {
LAB_1034bd3e8:
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd3f0:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    puVar9 = PTR___sypN_11034f1a8;
    if (lStack_168 == 0) goto LAB_1034bd3f0;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar24 = pppplStack_d8;
    pppplVar11 = pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar24);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e6e84(pppplVar11,pppplVar24,0,0xc000000000000000);
        if (param_1[2] == (long ***)0x0) goto LAB_1034bd3e8;
        pppplVar11 = *ppppplVar13;
        pppplVar24 = ppppplVar13[1];
        func_0x000107c61434(param_1);
        func_0x000107c61434(pppplVar24);
        pppplVar20 = pppplVar24;
        func_0x000100029284(pppplVar11);
        if (((ulong)pppplVar20 & 1) == 0) {
          func_0x000107c6142c(param_1);
          uStack_178 = 0;
          ppplStack_180 = (long ***)0x0;
          lStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
          func_0x000107c6142c(pppplVar24);
          pppplVar24 = param_1;
        }
        func_0x000107c6142c(pppplVar24);
        if (lStack_168 == 0) goto LAB_1034bd3f0;
        uVar14 = 0;
        func_0x0001002ed07c(0);
        ppppplVar16 = &pppplStack_e0;
        pppplVar11 = &ppplStack_180;
        func_0x000107c6147c(ppppplVar16,pppplVar11,puVar9 + 8,uVar14,6);
        ppppplVar15 = (long *****)pppplStack_e0;
        uVar17 = (uint)pppplVar11;
        if (((ulong)ppppplVar16 & 1) != 0) {
          ppppplVar16 = (long *****)pppplStack_e0;
          func_0x000107c49820();
          func_0x0001018aad68();
          if ((uVar17 & 0xff) != 1) {
            uVar1 = 2;
            if (ppppplVar16 != (long *****)0x7) {
              uVar1 = ppppplVar16 != (long *****)0x0;
            }
            FUN_1034e6f3c(uVar1,1);
          }
          func_0x000107c61170();
          ppppplVar16 = ppppplVar15;
        }
      }
    }
  }
  func_0x000103bf8eac();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd4cc:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd4cc;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      func_0x000107c3ebcc(pppplStack_e0);
      func_0x0001034e727c();
      func_0x000107c61170();
      ppppplVar16 = ppppplVar15;
    }
  }
  func_0x000103bf8ee4();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd5d8:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd5d8;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar11 = pppplStack_d8;
    ppppplVar15 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e71c4(ppppplVar15,pppplVar11,0,0xc000000000000000);
        ppppplVar16 = ppppplVar15;
      }
    }
  }
  func_0x000103bf8f1c();
  if (param_1[2] == (long ***)0x0) {
LAB_1034bd724:
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd72c:
    ppppplVar16 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    puVar9 = PTR___sypN_11034f1a8;
    if (lStack_168 == 0) goto LAB_1034bd72c;
    ppppplVar16 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar16,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppplVar24 = pppplStack_d8;
    pppplVar11 = pppplStack_e0;
    if (((ulong)ppppplVar16 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        ppppplVar16 = (long *****)pppplStack_d8;
        func_0x000107c6142c();
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplVar24);
        func_0x00010006c090(0,0xc000000000000000);
        FUN_1034e6fc8(pppplVar11,pppplVar24,0,0xc000000000000000);
        if (param_1[2] == (long ***)0x0) goto LAB_1034bd724;
        pppplVar11 = *ppppplVar13;
        pppplVar24 = ppppplVar13[1];
        func_0x000107c61434(param_1);
        func_0x000107c61434(pppplVar24);
        pppplVar20 = pppplVar24;
        func_0x000100029284(pppplVar11);
        if (((ulong)pppplVar20 & 1) == 0) {
          func_0x000107c6142c(param_1);
          uStack_178 = 0;
          ppplStack_180 = (long ***)0x0;
          lStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
          func_0x000107c6142c(pppplVar24);
          pppplVar24 = param_1;
        }
        func_0x000107c6142c(pppplVar24);
        if (lStack_168 == 0) goto LAB_1034bd72c;
        uVar14 = 0;
        func_0x0001002ed07c(0);
        ppppplVar16 = &pppplStack_e0;
        pppplVar11 = &ppplStack_180;
        func_0x000107c6147c(ppppplVar16,pppplVar11,puVar9 + 8,uVar14,6);
        ppppplVar13 = (long *****)pppplStack_e0;
        uVar17 = (uint)pppplVar11;
        if (((ulong)ppppplVar16 & 1) != 0) {
          ppppplVar16 = (long *****)pppplStack_e0;
          func_0x000107c49820();
          func_0x0001018aad68();
          if ((uVar17 & 0xff) != 1) {
            FUN_1034e7080(ppppplVar16 != (long *****)0x7 && ppppplVar16 != (long *****)0x0,1);
          }
          func_0x000107c61170();
          ppppplVar16 = ppppplVar13;
        }
      }
    }
  }
  func_0x000103bf8f54();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd838:
    ppppplVar13 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar16;
    pppplVar24 = ppppplVar16[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd838;
    ppppplVar13 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar13,&ppplStack_180,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    ppppplVar16 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar13 & 1) != 0) {
      uVar25 = (ulong)pppplStack_e0 & 0xffffffffffff;
      if (((ulong)pppplStack_d8 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pppplStack_d8 >> 0x38 & 0xf;
      }
      if (uVar25 == 0) {
        func_0x000107c6142c();
        ppppplVar13 = (long *****)pppplStack_d8;
      }
      else {
        func_0x000107c61434(pppplStack_d8);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppplStack_d8);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e710c(ppppplVar16,pppplStack_d8,0,0xc000000000000000);
        ppppplVar13 = ppppplVar16;
      }
    }
  }
  func_0x000103bf8f90();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bd914:
    ppppplVar13 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar13;
    pppplVar24 = ppppplVar13[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bd914;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar13 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar13,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar16 = (long *****)pppplStack_e0;
    if (((ulong)ppppplVar13 & 1) != 0) {
      func_0x000107c3ebcc(pppplStack_e0);
      func_0x0001034e775c();
      func_0x000107c61170();
      ppppplVar13 = ppppplVar16;
    }
  }
  func_0x000103bf8fc8();
  if (param_1[2] == (long ***)0x0) {
    uStack_178 = 0;
    ppplStack_180 = (long ***)0x0;
    lStack_168 = 0;
    uStack_170 = 0;
LAB_1034bda00:
    ppppplVar13 = (long *****)&ppplStack_180;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar13;
    pppplVar24 = ppppplVar13[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_178 = 0;
      ppplStack_180 = (long ***)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_180);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_168 == 0) goto LAB_1034bda00;
    uVar14 = 0;
    func_0x00010482c9f4(0);
    ppppplVar13 = &pppplStack_e0;
    func_0x000107c6147c(ppppplVar13,&ppplStack_180,PTR___sypN_11034f1a8 + 8,uVar14,6);
    if (((ulong)ppppplVar13 & 1) != 0) {
      ppppplVar13 = (long *****)pppplStack_e0;
      func_0x000107c61174();
      func_0x00010482b6e4(&ppplStack_180);
      FUN_1034cc920(&pppplStack_e0,&ppplStack_180);
      func_0x0001034e780c(&pppplStack_e0);
      func_0x000107c61170();
    }
  }
  func_0x000103bf9000();
  if (param_1[2] == (long ***)0x0) {
    uStack_1c8 = 0;
    ppplStack_1d0 = (long ***)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_1034bdadc:
    ppppplVar13 = (long *****)&ppplStack_1d0;
    func_0x00010006e7f4();
  }
  else {
    pppplVar11 = *ppppplVar13;
    pppplVar24 = ppppplVar13[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_1c8 = 0;
      ppplStack_1d0 = (long ***)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_1d0);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_1b8 == 0) goto LAB_1034bdadc;
    uVar14 = 0;
    func_0x0001002ed07c(0);
    ppppplVar13 = &pppplStack_1d8;
    func_0x000107c6147c(ppppplVar13,&ppplStack_1d0,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppppplVar16 = (long *****)pppplStack_1d8;
    if (((ulong)ppppplVar13 & 1) != 0) {
      func_0x000107c49804(pppplStack_1d8);
      func_0x0001034e7928();
      func_0x000107c61170();
      ppppplVar13 = ppppplVar16;
    }
  }
  func_0x000103bf9038();
  if (param_1[2] == (long ***)0x0) {
    uStack_1c8 = 0;
    ppplStack_1d0 = (long ***)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    pppplVar11 = *ppppplVar13;
    pppplVar24 = ppppplVar13[1];
    func_0x000107c61434(param_1);
    func_0x000107c61434(pppplVar24);
    pppplVar20 = pppplVar24;
    func_0x000100029284(pppplVar11);
    if (((ulong)pppplVar20 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_1c8 = 0;
      ppplStack_1d0 = (long ***)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x0001000bb420(param_1[7] + (long)pppplVar11 * 4,&ppplStack_1d0);
      func_0x000107c6142c(pppplVar24);
      pppplVar24 = param_1;
    }
    func_0x000107c6142c(pppplVar24);
    if (lStack_1b8 != 0) {
      uVar14 = 0;
      func_0x0001002ed07c(0);
      ppppplVar13 = &pppplStack_1d8;
      func_0x000107c6147c(ppppplVar13,&ppplStack_1d0,PTR___sypN_11034f1a8 + 8,uVar14,6);
      if (((ulong)ppppplVar13 & 1) != 0) {
        func_0x000107c49820(pppplStack_1d8);
        func_0x0001034cc90c();
        FUN_1034e79d8();
        func_0x000107c61170(pppplStack_1d8);
      }
      uVar25 = param_2[3];
      goto joined_r0x0001034bdbc8;
    }
  }
  func_0x00010006e7f4(&ppplStack_1d0);
  uVar25 = param_2[3];
joined_r0x0001034bdbc8:
  if (uVar25 != 0) {
    if (*param_2 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf3c);
      (*pcVar10)();
    }
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    uVar3 = param_2[4];
    uVar6 = param_2[5];
    func_0x0001034e6b40(*param_2,0,0xc000000000000000);
    if (uVar2 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf40);
      (*pcVar10)();
    }
    func_0x0001034e6be8(uVar2,0,0xc000000000000000);
    uVar2 = uVar5 & 0xffffffffffff;
    if ((uVar25 & 0x2000000000000000) != 0) {
      uVar2 = uVar25 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      FUN_1034bdf68(param_2,&ppplStack_1d0);
      func_0x000107c61434(uVar25);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar25);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x0001034e732c(uVar5,uVar25,0,0xc000000000000000);
    }
    if (uVar3 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf44);
      (*pcVar10)();
    }
    func_0x0001034e73e4(uVar3,0,0xc000000000000000);
    if (uVar6 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf48);
      (*pcVar10)();
    }
    func_0x0001034e7494(uVar6,0,0xc000000000000000);
  }
  if (param_3[6] != 4.94065645841247e-324) {
    if (*(char *)(param_3 + 1) != '\x01') {
      dVar22 = *param_3;
      if ((((ulong)dVar22 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf4c);
        (*pcVar10)();
      }
      if (dVar22 <= -2147483649.0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf50);
        (*pcVar10)();
      }
      if (2147483648.0 <= dVar22) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf58);
        (*pcVar10)();
      }
      func_0x0001034e75fc((int)dVar22,0,0xc000000000000000);
    }
    if (cVar7 != '\x01') {
      if ((((ulong)dVar26 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf54);
        (*pcVar10)();
      }
      if (dVar26 <= -2147483649.0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf5c);
        (*pcVar10)();
      }
      if (2147483648.0 <= dVar26) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf64);
        (*pcVar10)();
      }
      func_0x0001034e76ac((int)dVar26,0,0xc000000000000000);
    }
    if (cVar8 != '\x01') {
      if ((long)dVar23 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf60);
        (*pcVar10)();
      }
      if (0x7fffffff < (long)dVar23) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034bdf68);
        (*pcVar10)();
      }
      func_0x0001034e7b14(dVar23,0,0xc000000000000000);
    }
  }
  return (long ****)ppplStack_198;
}



/* Entry: 1034bdf68; end: 1034bdfb7;  */

undefined8 FUN_1034bdf68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f73240;
  func_0x0001000285a8(0x112f73240,&UNK_10dbce6d8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1034bdfb8; end: 1034be0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034bdfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f73248) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f73250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f73258) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f73260) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034be0d0; end: 1034be0e7;  */

void FUN_1034be0d0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034be0e8,0,0);
  return;
}



/* Entry: 1034be0e8; end: 1034be147;  */

/* WARNING: Removing unreachable block (ram,0x0001034be110) */

void FUN_1034be0e8(void)

{
  long unaff_x22;
  
  FUN_1034be148(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001034be144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1034be148; end: 1034beb23;  */

/* WARNING: Removing unreachable block (ram,0x0001034be8a8) */
/* WARNING: Removing unreachable block (ram,0x0001034be7e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034be148(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  long extraout_x8;
  long unaff_x21;
  undefined *puVar22;
  code *pcVar23;
  long lVar24;
  ulong *puVar25;
  ulong *apuStack_2830 [2];
  undefined1 auStack_2810 [24];
  long alStack_27f8 [10];
  long lStack_27a8;
  undefined8 uStack_27a0;
  undefined8 uStack_2798;
  undefined8 uStack_2790;
  undefined8 uStack_2788;
  undefined8 uStack_2780;
  undefined8 uStack_2778;
  long lStack_2770;
  undefined8 uStack_2768;
  undefined8 uStack_2760;
  undefined8 uStack_2758;
  undefined8 uStack_2750;
  undefined8 uStack_2748;
  undefined8 uStack_2740;
  undefined8 uStack_2738;
  undefined8 uStack_2730;
  undefined8 uStack_2728;
  undefined8 uStack_2720;
  long lStack_2710;
  undefined8 uStack_2708;
  undefined8 uStack_2700;
  undefined8 uStack_26f8;
  undefined8 uStack_26f0;
  undefined8 uStack_26e8;
  undefined8 uStack_26e0;
  long lStack_26d8;
  undefined8 uStack_26d0;
  undefined8 uStack_26c8;
  undefined8 uStack_26c0;
  undefined8 uStack_26b8;
  undefined8 uStack_26b0;
  long lStack_26a8;
  undefined *puStack_26a0;
  long *plStack_2698;
  undefined1 auStack_2690 [88];
  undefined1 auStack_2638 [56];
  undefined1 auStack_2600 [248];
  undefined1 auStack_2508 [88];
  undefined1 auStack_24b0 [16];
  byte bStack_24a0;
  long lStack_2498;
  undefined1 auStack_2490 [5680];
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  long lStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  byte bStack_e38;
  undefined8 uStack_e30;
  long lStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  long lStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  byte bStack_da0;
  byte bStack_d9f;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  byte bStack_d28;
  ulong uStack_d20;
  ulong uStack_d18;
  long lStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  long lStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  long lStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  long lStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  long lStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined *puStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  undefined1 auStack_b30 [2720];
  ulong *puStack_90;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined *)((long)apuStack_2830 + lVar3);
  plVar19 = (long *)0x17d0;
  func_0x000107c610b4(auStack_24b0,param_1 + _DAT_112f73b08);
  lVar24 = param_1 + _DAT_113807328;
  puVar15 = puVar22;
  func_0x000101681be8();
  FUN_1034e5fa0();
  lStack_26a8 = lVar24;
  puStack_26a0 = puVar15;
  plStack_2698 = plVar19;
  FUN_1034c8314(*(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x48)));
  func_0x0001034e3f78();
  func_0x000103c029d8(uStack_dc0);
  func_0x0001034e528c();
  func_0x000103c029d8(uStack_dc8);
  func_0x0001034e5338();
  func_0x000103c029d8(uStack_db0);
  func_0x0001034e51e0();
  func_0x000103c029d8(uStack_db8);
  func_0x0001034e5134();
  func_0x0001034e53e4(bStack_24a0 & 1,0,0xc000000000000000);
  func_0x000103c02a14(1,*(undefined8 *)(param_1 + _DAT_113807330));
  FUN_1034e5494();
  func_0x000103c02a14(1,*(undefined8 *)(param_1 + _DAT_113807338));
  func_0x0001034e5520();
  func_0x000103c02a14(1,*(undefined8 *)(param_1 + _DAT_113807340));
  FUN_1034e565c();
  if (lStack_2498 != 0) {
    lStack_2710 = 0;
    param_4 = PTR___sypN_11034f1a8 + 8;
    param_5 = PTR___sSSSHsWP_11034da90;
    func_0x000107c5f9e4(lStack_2498,&lStack_2710,PTR___sSSN_11034da80);
    lVar24 = lStack_2710;
    if (lStack_2710 != 0) {
      uStack_bf8 = uStack_d90;
      uStack_c00 = uStack_d98;
      uStack_be8 = uStack_d80;
      uStack_bf0 = uStack_d88;
      uStack_bd8 = uStack_d70;
      uStack_be0 = uStack_d78;
      uStack_bc8 = uStack_d58;
      uStack_bd0 = uStack_d60;
      uStack_bb8 = uStack_d48;
      uStack_bc0 = uStack_d50;
      uStack_ba8 = uStack_d38;
      uStack_bb0 = uStack_d40;
      uStack_ba0 = uStack_d30;
      puVar16 = &uStack_c00;
      puVar20 = &uStack_bd0;
      lVar10 = lStack_2710;
      FUN_1034bbe98(lStack_2710,puVar16,puVar20);
      func_0x000107c6142c(lVar24);
      FUN_1034e4eec(lVar10,puVar16,puVar20);
    }
  }
  FUN_1034e56e8(bStack_da0 & 1,0,0xc000000000000000);
  func_0x0001034e59e4(bStack_d9f & 1,0,0xc000000000000000);
  func_0x0001034e5a94(bStack_d28 & 1,0,0xc000000000000000);
  uStack_b38 = uStack_d18;
  uStack_b40 = uStack_d20;
  if (uStack_d18 != 0) {
    uVar2 = uStack_d20 & 0xffffffffffff;
    if ((uStack_d18 & 0x2000000000000000) != 0) {
      uVar2 = uStack_d18 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      FUN_1034c7528(&uStack_b40,&lStack_2710,0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c61434(uStack_d18);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uStack_d18);
      func_0x00010006c090(0,0xc000000000000000);
      param_4 = (undefined *)0xc000000000000000;
      func_0x0001034e5cc8(uStack_d20,uStack_d18,0);
    }
  }
  FUN_1034c6d18(puVar22 + *(int *)(lVar9 + 0x84),&lStack_26a8);
  plVar19 = &lStack_26a8;
  FUN_1034bef30(puVar22,auStack_24b0);
  plVar5 = plStack_2698;
  if (unaff_x21 != 0) {
    func_0x00010006c090(lStack_26a8,puStack_26a0);
    func_0x000107c61574(plVar5);
    puVar15 = &SUB_100b91d00;
    func_0x0001034c75f4(puVar22);
    goto LAB_1034bead0;
  }
  puVar17 = auStack_2490;
  func_0x000107c610b4(auStack_b30,puVar17,0xab2);
  iVar8 = (int)auStack_b30;
  func_0x00010178e478();
  if ((iVar8 != 1) && (puStack_90 != (ulong *)0x0)) {
    pcVar23 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_90) + 0x68);
    puVar11 = puStack_90;
    func_0x000107c61174();
    puVar12 = puVar11;
    (*pcVar23)();
    puVar13 = puVar12;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar13 == (ulong *)0x0) {
      func_0x000107c61170(puVar11);
    }
    else {
      puVar12 = puVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar13);
      uStack_2720 = 0;
      uStack_2738 = 0;
      uStack_2740 = 0;
      uStack_2728 = 0;
      uStack_2730 = 0;
      puVar13 = puVar12;
      func_0x00010006c00c(puVar12,puVar17);
      FUN_10353a2d0(&lStack_27a8);
      uVar4 = (uint)((ulong)puVar17 >> 0x20);
      uVar21 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar21 == 0) {
          auStack_2810[0] = SUB81(puVar12,0);
          auStack_2810[1] = (undefined1)((ulong)puVar12 >> 8);
          auStack_2810[2] = (undefined1)((ulong)puVar12 >> 0x10);
          auStack_2810[3] = (undefined1)((ulong)puVar12 >> 0x18);
          auStack_2810[4] = (undefined1)((ulong)puVar12 >> 0x20);
          auStack_2810[5] = (undefined1)((ulong)puVar12 >> 0x28);
          auStack_2810[6] = (undefined1)((ulong)puVar12 >> 0x30);
          auStack_2810[7] = (undefined1)((ulong)puVar12 >> 0x38);
          auStack_2810[8] = SUB81(puVar17,0);
          auStack_2810[9] = (undefined1)((ulong)puVar17 >> 8);
          auStack_2810[10] = (undefined1)((ulong)puVar17 >> 0x10);
          auStack_2810[0xb] = (undefined1)((ulong)puVar17 >> 0x18);
          auStack_2810[0xc] = (undefined1)((ulong)puVar17 >> 0x20);
          auStack_2810[0xd] = (undefined1)((ulong)puVar17 >> 0x28);
          puVar18 = auStack_2810 + ((ulong)puVar17 >> 0x30 & 0xff);
          FUN_1034c7298();
          goto LAB_1034be74c;
        }
        lVar24 = (long)(int)puVar12;
        apuStack_2830[1] = (ulong *)(((long)puVar12 >> 0x20) - lVar24);
        if ((long)puVar12 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1034beb14);
          (*pcVar23)();
        }
        func_0x000107c5ec30();
        if (puVar13 == (ulong *)0x0) {
          func_0x000107c5ec38();
          puVar25 = (ulong *)0x0;
          lVar24 = 0;
        }
        else {
          puVar14 = puVar13;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar24,(long)puVar14)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1034beb20);
            (*pcVar23)();
          }
          puVar25 = (ulong *)((lVar24 - (long)puVar14) + (long)puVar13);
          func_0x000107c5ec38();
          puVar13 = puVar14;
          if (puVar25 == (ulong *)0x0) {
            lVar24 = 0;
          }
          else {
            if ((long)apuStack_2830[1] <= (long)puVar14) {
              puVar14 = apuStack_2830[1];
            }
            lVar24 = (long)puVar14 + (long)puVar25;
          }
        }
        FUN_1034c7298();
        puVar14 = puVar13;
LAB_1034be7d0:
        param_4 = (undefined *)0x0;
        param_5 = (undefined *)0x64;
        func_0x00010006ae80(puVar25,lVar24,&uStack_2740,0,100,0,&UNK_110663558,puVar14);
        func_0x00010006c090(puVar12,puVar17);
      }
      else {
        if (uVar21 == 2) {
          uVar2 = puVar12[2];
          apuStack_2830[1] = (ulong *)puVar12[3];
          func_0x000107c5ec30();
          puVar14 = puVar13;
          puVar25 = puVar13;
          if (puVar13 != (ulong *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(uVar2,(long)puVar14)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1034beb1c);
              (*pcVar23)();
            }
            puVar25 = (ulong *)((uVar2 - (long)puVar14) + (long)puVar13);
          }
          puVar13 = (ulong *)((long)apuStack_2830[1] - uVar2);
          if (SBORROW8((long)apuStack_2830[1],uVar2)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1034beb18);
            (*pcVar23)();
          }
          func_0x000107c5ec38();
          if (puVar25 == (ulong *)0x0) {
            lVar24 = 0;
          }
          else {
            puVar1 = puVar14;
            if ((long)puVar13 <= (long)puVar14) {
              puVar1 = puVar13;
            }
            lVar24 = (long)puVar1 + (long)puVar25;
          }
          FUN_1034c7298();
          goto LAB_1034be7d0;
        }
        FUN_1034c7298();
        auStack_2810[0] = 0;
        auStack_2810[1] = 0;
        auStack_2810[2] = 0;
        auStack_2810[3] = 0;
        auStack_2810[4] = 0;
        auStack_2810[5] = 0;
        auStack_2810[6] = 0;
        auStack_2810[7] = 0;
        auStack_2810[8] = 0;
        auStack_2810[9] = 0;
        auStack_2810[10] = 0;
        auStack_2810[0xb] = 0;
        auStack_2810[0xc] = 0;
        auStack_2810[0xd] = 0;
        puVar18 = auStack_2810;
LAB_1034be74c:
        param_4 = (undefined *)0x0;
        param_5 = (undefined *)0x64;
        func_0x00010006ae80(auStack_2810,puVar18,&uStack_2740,0,100,0,&UNK_110663558,puVar13);
        func_0x00010006c090(puVar12,puVar17);
      }
      func_0x0001034c7570(&uStack_2740,0x112d49548,&UNK_10d90fde0);
      uStack_26c8 = uStack_2760;
      uStack_26d0 = uStack_2768;
      uStack_26b8 = uStack_2750;
      uStack_26c0 = uStack_2758;
      uStack_26b0 = uStack_2748;
      uStack_2708 = uStack_27a0;
      lStack_2710 = lStack_27a8;
      uStack_26f8 = uStack_2790;
      uStack_2700 = uStack_2798;
      uStack_26e8 = uStack_2780;
      uStack_26f0 = uStack_2788;
      lStack_26d8 = lStack_2770;
      uStack_26e0 = uStack_2778;
      FUN_1034c4ec0(auStack_24b0,puVar22,&lStack_2710);
      uStack_c28 = uStack_26c8;
      uStack_c30 = uStack_26d0;
      uStack_c18 = uStack_26b8;
      uStack_c20 = uStack_26c0;
      uStack_c10 = uStack_26b0;
      uStack_c68 = uStack_2708;
      lStack_c70 = lStack_2710;
      uStack_c58 = uStack_26f8;
      uStack_c60 = uStack_2700;
      lStack_c38 = lStack_26d8;
      uStack_c40 = uStack_26e0;
      uStack_c48 = uStack_26e8;
      uStack_c50 = uStack_26f0;
      func_0x0001034c730c(&lStack_c70,auStack_2810);
      FUN_1034e4d18(&lStack_c70);
      func_0x000107c61170(puVar11);
      func_0x00010006c090(puVar12,puVar17);
      func_0x0001034c72d8(&lStack_2710);
    }
  }
  uStack_b78 = uStack_e48;
  lStack_b80 = lStack_e50;
  uStack_b88 = uStack_e58;
  uStack_b90 = uStack_e60;
  uStack_b70 = uStack_e40;
  if (lStack_e50 != 1) {
    uStack_c98 = uStack_e58;
    uStack_ca0 = uStack_e60;
    uStack_c80 = uStack_e40;
    uStack_c88 = uStack_e48;
    lStack_c90 = lStack_e50;
    param_4 = &UNK_10dbce780;
    FUN_1034c7528(&uStack_b90,&lStack_2710,0x112f73290);
    FUN_1034c7d88(auStack_2690,&uStack_ca0);
    func_0x0001034e5030(auStack_2690);
  }
  if (bStack_e38 != 2) {
    FUN_1034c7eb0(auStack_2638,bStack_e38 & 1,uStack_e30);
    func_0x0001034e5798(auStack_2638);
  }
  if (lStack_df0 != 1) {
    uStack_cd8 = uStack_e20;
    lStack_ce0 = lStack_e28;
    uStack_cc8 = uStack_e10;
    uStack_cd0 = uStack_e18;
    uStack_cb8 = uStack_e00;
    uStack_cc0 = uStack_e08;
    uStack_cb0 = uStack_df8;
    lStack_ca8 = lStack_df0;
    uStack_2708 = uStack_e20;
    lStack_2710 = lStack_e28;
    uStack_26f8 = uStack_e10;
    uStack_2700 = uStack_e18;
    uStack_26e8 = uStack_e00;
    uStack_26f0 = uStack_e08;
    uStack_26e0 = uStack_df8;
    lStack_26d8 = lStack_df0;
    func_0x00010189a634(&lStack_2710,&lStack_27a8);
    FUN_1034c8068(auStack_2600,&lStack_ce0);
    func_0x0001034e5b44(auStack_2600);
  }
  puStack_b48 = puStack_dd0;
  uStack_b50 = uStack_dd8;
  uStack_b58 = uStack_de0;
  uStack_b60 = uStack_de8;
  uVar7 = uStack_b60;
  if (puStack_dd0 != (undefined *)0x1) {
    uStack_b60._0_1_ = (byte)uStack_de8;
    bVar6 = (byte)uStack_b60;
    uStack_b60 = uVar7;
    FUN_1034c7528(&uStack_b60,&lStack_2710,0x112e540d8,&UNK_10da55570);
    FUN_1034c7f44(auStack_2508,bVar6 & 1,uStack_de0,uStack_dd8);
    func_0x0001034e5d80(auStack_2508);
    param_4 = puStack_dd0;
  }
  func_0x0001034c71c0(auStack_24b0,&lStack_26a8);
  func_0x0001034c75f4(puVar22,&SUB_100b91d00);
  puVar15 = puStack_26a0;
  plVar19 = plStack_2698;
LAB_1034bead0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  *(undefined **)((long)alStack_27f8 + lVar3 + 0x10) = param_4;
  *(undefined **)((long)alStack_27f8 + lVar3 + 0x18) = param_5;
  *(undefined **)((long)alStack_27f8 + lVar3) = puVar15;
  *(long **)((long)alStack_27f8 + lVar3 + 8) = plVar19;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034beb40,0,0);
  return;
}



/* Entry: 1034beb24; end: 1034beb3f;  */

void FUN_1034beb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034beb40,0,0);
  return;
}



/* Entry: 1034beb40; end: 1034bec73;  */

/* WARNING: Removing unreachable block (ram,0x0001034bebbc) */
/* WARNING: Removing unreachable block (ram,0x0001034bebd0) */

void FUN_1034beb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1034be148();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  uVar4 = uVar3;
  func_0x0001018dde30();
  func_0x000100075890(unaff_x22 + 0x28,0,0,&UNK_11065d640,PTR___s10Foundation4DataVN_110350ae0,uVar4
                      ,&PTR_DAT_110789f58);
  pcVar1 = *(code **)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x00010006c00c(uVar4,uVar2);
  (*pcVar1)(uVar4,uVar2,0);
  func_0x00010006c090(uVar4,uVar2);
  func_0x00010006c090(uVar4,uVar2);
  func_0x00010006c090(uVar3,param_2);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001034bec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1034bec74; end: 1034bed8b; -[_TtC35AdProtoImpressionDataImplementation28AdProtoImpressionDataBuilder buildWithParams:completion:] */

/* WARNING: Possible PIC construction at 0x0001034bed64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034bed68) */

void FUN_1034bec74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11065c688;
  func_0x000107c613fc(&UNK_11065c688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_11065c6b0;
  func_0x000107c613fc(&UNK_11065c6b0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(code **)(puVar2 + 0x20) = FUN_1034c64d0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar1);
  uVar3 = 3;
  func_0x0001001ca524(3,0,8,4,0,0,&UNK_10dbce770,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1034bed8c; end: 1034beddf;  */

void FUN_1034bed8c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034bede0; end: 1034bef2f; -[_TtC35AdProtoImpressionDataImplementation28AdProtoImpressionDataBuilder buildDataSynchronouslyWithParams:error:] */

/* WARNING: Removing unreachable block (ram,0x0001034bee30) */
/* WARNING: Removing unreachable block (ram,0x0001034beeb4) */
/* WARNING: Removing unreachable block (ram,0x0001034beee0) */
/* WARNING: Removing unreachable block (ram,0x0001034beeb8) */

void FUN_1034bede0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar3 = param_3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1034be148();
  uVar2 = uVar1;
  uStack_70 = uVar1;
  uStack_68 = param_2;
  uStack_60 = uVar3;
  func_0x0001018dde30();
  func_0x000100075890(&uStack_80,0,0,&UNK_11065d640,PTR___s10Foundation4DataVN_110350ae0,uVar2,
                      &PTR_DAT_110789f58);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x00010006c090(uVar1,param_2);
  func_0x000107c61574(uVar3);
  uVar1 = uStack_80;
  func_0x000107c5ee20(uStack_80,uStack_78);
  func_0x00010006c090(uStack_80,uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034bef30; end: 1034c4ebf;  */

/* WARNING: Removing unreachable block (ram,0x0001034c4cc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034bef30(undefined1 **param_1,long param_2)

{
  byte bVar1;
  long lVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  long lVar15;
  long lVar16;
  undefined1 **ppuVar17;
  ulong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined8 uVar21;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_1aa00;
  undefined8 uStack_1a9f8;
  long lStack_1a9f0;
  undefined8 uStack_1a9e8;
  undefined8 uStack_1a9e0;
  undefined8 uStack_1a9d8;
  undefined8 uStack_1a9d0;
  undefined8 uStack_1a9c8;
  undefined8 uStack_1a9c0;
  undefined8 uStack_1a9b8;
  long lStack_1a9b0;
  undefined8 uStack_1a9a8;
  long lStack_1a9a0;
  undefined8 uStack_1a998;
  long lStack_1a990;
  undefined8 uStack_1a988;
  undefined8 uStack_1a980;
  undefined8 uStack_1a978;
  undefined8 uStack_1a970;
  undefined8 uStack_1a968;
  undefined8 uStack_1a930;
  undefined8 uStack_1a928;
  undefined1 auStack_1a918 [16];
  undefined8 uStack_1a908;
  long lStack_1a900;
  ulong uStack_1a8f8;
  undefined8 uStack_1a8f0;
  undefined1 *puStack_1a8a0;
  undefined1 **ppuStack_1a898;
  undefined1 *puStack_1a890;
  undefined1 **ppuStack_1a888;
  undefined8 uStack_1a880;
  ulong uStack_1a878;
  undefined8 uStack_1a870;
  undefined8 uStack_1a868;
  undefined8 uStack_1a860;
  undefined8 uStack_1a858;
  long lStack_1a850;
  ulong uStack_1a848;
  undefined8 uStack_1a840;
  undefined8 uStack_1a838;
  undefined1 *puStack_1a830;
  undefined1 **ppuStack_1a828;
  undefined8 uStack_1a820;
  undefined1 **ppuStack_1a818;
  undefined1 **ppuStack_1a810;
  undefined8 uStack_1a808;
  long lStack_1a800;
  ulong uStack_1a7f8;
  undefined8 uStack_1a7f0;
  undefined8 uStack_1a7e0;
  undefined8 uStack_1a7d8;
  undefined8 uStack_1a7d0;
  undefined8 uStack_1a7c8;
  undefined8 uStack_1a7c0;
  undefined8 uStack_1a7b8;
  undefined8 uStack_1a7b0;
  undefined8 uStack_1a7a8;
  undefined8 uStack_1a7a0;
  undefined8 uStack_1a798;
  undefined8 uStack_1a790;
  undefined8 uStack_1a77f;
  undefined1 auStack_1a768 [776];
  undefined1 *puStack_1a460;
  undefined1 **ppuStack_1a458;
  undefined1 *puStack_1a450;
  undefined1 **ppuStack_1a448;
  undefined8 uStack_1a440;
  ulong uStack_1a438;
  undefined8 uStack_1a430;
  undefined8 uStack_1a428;
  undefined8 uStack_1a420;
  undefined8 uStack_1a418;
  long lStack_1a410;
  ulong uStack_1a408;
  undefined8 uStack_1a400;
  undefined8 uStack_1a3f8;
  undefined8 uStack_1a3f0;
  undefined8 uStack_1a3e8;
  undefined8 uStack_1a3e0;
  undefined8 uStack_1a3d8;
  undefined8 uStack_1a3d0;
  undefined8 uStack_1a3c8;
  undefined8 uStack_1a3c0;
  undefined8 uStack_1a3b8;
  undefined8 uStack_1a3b0;
  undefined8 uStack_1a3a8;
  undefined8 uStack_1a3a0;
  undefined8 uStack_1a398;
  undefined8 uStack_1a390;
  undefined8 uStack_1a388;
  undefined8 uStack_1a380;
  undefined8 uStack_1a378;
  undefined8 uStack_1a370;
  undefined8 uStack_1a368;
  undefined8 uStack_1a360;
  undefined8 uStack_1a34f;
  undefined1 *puStack_1a340;
  undefined1 **ppuStack_1a338;
  undefined1 *puStack_1a330;
  undefined1 **ppuStack_1a328;
  undefined8 uStack_1a320;
  ulong uStack_1a318;
  undefined8 uStack_1a310;
  undefined8 uStack_1a308;
  undefined8 uStack_1a300;
  undefined8 uStack_1a2f8;
  long lStack_1a2f0;
  ulong uStack_1a2e8;
  undefined1 auStack_197c0 [8];
  undefined1 auStack_197b8 [8];
  undefined1 **ppuStack_197b0;
  undefined *puStack_197a8;
  undefined **ppuStack_197a0;
  byte bStack_19758;
  undefined1 auStack_19750 [1344];
  undefined8 uStack_19210;
  undefined8 uStack_19208;
  undefined8 uStack_19200;
  undefined8 uStack_191f8;
  undefined8 uStack_191f0;
  undefined8 uStack_191e8;
  undefined8 uStack_191e0;
  undefined8 uStack_191d8;
  undefined8 uStack_191d0;
  undefined8 uStack_191c8;
  undefined8 uStack_191c0;
  undefined8 uStack_191af;
  undefined1 auStack_191a0 [776];
  undefined8 uStack_18e98;
  undefined8 uStack_18e90;
  undefined8 uStack_18e88;
  long lStack_18e80;
  undefined1 *puStack_18e70;
  undefined1 **ppuStack_18e68;
  undefined1 *puStack_18e60;
  undefined1 **ppuStack_18e58;
  undefined8 uStack_18e50;
  ulong uStack_18e48;
  undefined8 uStack_18e40;
  undefined8 uStack_18e38;
  undefined8 uStack_18e30;
  undefined8 uStack_18e28;
  long lStack_18e20;
  ulong uStack_18e18;
  undefined8 uStack_18e10;
  undefined8 uStack_18e08;
  undefined8 uStack_18e00;
  undefined8 uStack_18df8;
  undefined8 uStack_18df0;
  undefined8 uStack_18de8;
  undefined8 uStack_18de0;
  undefined8 uStack_18dd8;
  undefined8 uStack_18dd0;
  undefined8 uStack_18dc8;
  undefined8 uStack_18dc0;
  undefined8 uStack_18db8;
  undefined8 uStack_18db0;
  undefined8 uStack_18da8;
  undefined8 uStack_18da0;
  undefined8 uStack_18d98;
  undefined8 uStack_18d90;
  undefined8 uStack_18d88;
  undefined8 uStack_18d80;
  undefined8 uStack_18d78;
  undefined8 uStack_18d70;
  undefined8 uStack_18d5f;
  long lStack_18d50;
  undefined8 uStack_18d48;
  undefined8 uStack_18d38;
  undefined8 uStack_18d30;
  undefined8 uStack_18d28;
  undefined8 uStack_18d20;
  undefined8 uStack_18d18;
  undefined8 uStack_18c98;
  undefined8 uStack_18c88;
  byte bStack_18c80;
  byte bStack_18c7f;
  byte bStack_18c7e;
  undefined8 uStack_18c78;
  undefined8 uStack_18c70;
  undefined8 uStack_18c68;
  undefined8 uStack_18c60;
  undefined8 uStack_18c58;
  undefined8 uStack_18c50;
  undefined1 auStack_18c48 [2744];
  undefined1 auStack_18190 [8];
  undefined1 auStack_18188 [8];
  undefined1 **ppuStack_18180;
  undefined *puStack_18178;
  undefined **ppuStack_18170;
  byte bStack_18128;
  undefined1 auStack_18120 [1344];
  undefined8 uStack_17be0;
  undefined8 uStack_17bd8;
  undefined8 uStack_17bd0;
  undefined8 uStack_17bc8;
  undefined8 uStack_17bc0;
  undefined8 uStack_17bb8;
  undefined8 uStack_17bb0;
  undefined8 uStack_17ba8;
  undefined8 uStack_17ba0;
  undefined8 uStack_17b98;
  undefined8 uStack_17b90;
  undefined8 uStack_17b7f;
  undefined1 auStack_17b70 [776];
  undefined8 uStack_17868;
  undefined8 uStack_17860;
  undefined8 uStack_17858;
  long lStack_17850;
  byte bStack_17848;
  byte bStack_17847;
  undefined1 *puStack_17840;
  undefined1 **ppuStack_17838;
  undefined1 *puStack_17830;
  undefined1 **ppuStack_17828;
  undefined8 uStack_17820;
  ulong uStack_17818;
  undefined8 uStack_17810;
  undefined8 uStack_17808;
  undefined8 uStack_17800;
  undefined8 uStack_177f8;
  long lStack_177f0;
  ulong uStack_177e8;
  undefined8 uStack_177e0;
  undefined8 uStack_177d8;
  undefined8 uStack_177d0;
  undefined8 uStack_177c8;
  undefined8 uStack_177c0;
  undefined8 uStack_177b8;
  undefined8 uStack_177b0;
  undefined8 uStack_177a8;
  undefined8 uStack_177a0;
  undefined8 uStack_17798;
  undefined8 uStack_17790;
  undefined8 uStack_17788;
  undefined8 uStack_17780;
  undefined8 uStack_17778;
  undefined8 uStack_17770;
  undefined8 uStack_17768;
  undefined8 uStack_17760;
  undefined8 uStack_17758;
  undefined8 uStack_17750;
  undefined8 uStack_17748;
  undefined8 uStack_17740;
  undefined8 uStack_1772f;
  long lStack_17720;
  undefined8 uStack_17718;
  undefined8 uStack_17708;
  undefined8 uStack_17700;
  undefined8 uStack_176f8;
  undefined8 uStack_176f0;
  undefined8 uStack_176e8;
  undefined8 uStack_17668;
  undefined8 uStack_17658;
  byte bStack_17650;
  byte bStack_1764f;
  byte bStack_1764e;
  undefined8 uStack_17648;
  undefined8 uStack_17640;
  undefined8 uStack_17638;
  undefined8 uStack_17630;
  undefined8 uStack_17628;
  undefined8 uStack_17620;
  undefined1 auStack_17618 [8];
  undefined1 auStack_17610 [1448];
  undefined8 uStack_17068;
  undefined8 uStack_17060;
  undefined8 uStack_17058;
  undefined8 uStack_17050;
  undefined8 uStack_17048;
  undefined8 uStack_17040;
  undefined8 uStack_17038;
  undefined8 uStack_17030;
  undefined8 uStack_17028;
  undefined8 uStack_17020;
  undefined8 uStack_17018;
  undefined8 uStack_17007;
  undefined1 auStack_16ff8 [776];
  undefined8 uStack_16cf0;
  undefined8 uStack_16ce8;
  undefined8 uStack_16ce0;
  long lStack_16cd8;
  undefined1 *puStack_16cc8;
  undefined1 **ppuStack_16cc0;
  undefined1 *puStack_16cb8;
  undefined1 **ppuStack_16cb0;
  undefined8 uStack_16ca8;
  ulong uStack_16ca0;
  undefined8 uStack_16c98;
  undefined8 uStack_16c90;
  undefined8 uStack_16c88;
  undefined8 uStack_16c80;
  long lStack_16c78;
  ulong uStack_16c70;
  undefined8 uStack_16c68;
  undefined8 uStack_16c60;
  undefined8 uStack_16c58;
  undefined8 uStack_16c50;
  undefined8 uStack_16c48;
  undefined8 uStack_16c40;
  undefined8 uStack_16c38;
  undefined8 uStack_16c30;
  undefined8 uStack_16c28;
  undefined8 uStack_16c20;
  undefined8 uStack_16c18;
  undefined8 uStack_16c10;
  undefined8 uStack_16c08;
  undefined8 uStack_16c00;
  undefined8 uStack_16bf8;
  undefined8 uStack_16bf0;
  undefined8 uStack_16be8;
  undefined8 uStack_16be0;
  undefined8 uStack_16bd8;
  undefined8 uStack_16bd0;
  undefined8 uStack_16bc8;
  undefined8 uStack_16bb7;
  long lStack_16ba8;
  undefined8 uStack_16ba0;
  undefined8 uStack_16b90;
  undefined8 uStack_16b88;
  undefined8 uStack_16b80;
  undefined8 uStack_16b78;
  undefined8 uStack_16b70;
  ulong uStack_16b60;
  undefined8 uStack_16b58;
  undefined8 uStack_16b50;
  undefined8 uStack_16b48;
  undefined8 uStack_16b40;
  long lStack_16b38;
  undefined1 auStack_16b30 [8];
  undefined1 auStack_16b28 [1448];
  undefined8 uStack_16580;
  undefined8 uStack_16578;
  undefined8 uStack_16570;
  undefined8 uStack_16568;
  undefined8 uStack_16560;
  undefined8 uStack_16558;
  undefined8 uStack_16550;
  undefined8 uStack_16548;
  undefined8 uStack_16540;
  undefined8 uStack_16538;
  undefined8 uStack_16530;
  undefined8 uStack_1651f;
  undefined1 auStack_16510 [776];
  undefined8 uStack_16208;
  undefined8 uStack_16200;
  undefined8 uStack_161f8;
  long lStack_161f0;
  undefined1 *puStack_161e0;
  undefined1 **ppuStack_161d8;
  undefined1 *puStack_161d0;
  undefined1 **ppuStack_161c8;
  undefined8 uStack_161c0;
  ulong uStack_161b8;
  undefined8 uStack_161b0;
  undefined8 uStack_161a8;
  undefined8 uStack_161a0;
  undefined8 uStack_16198;
  long lStack_16190;
  ulong uStack_16188;
  undefined8 uStack_16180;
  undefined8 uStack_16178;
  undefined8 uStack_16170;
  undefined8 uStack_16168;
  undefined8 uStack_16160;
  undefined8 uStack_16158;
  undefined8 uStack_16150;
  undefined8 uStack_16148;
  undefined8 uStack_16140;
  undefined8 uStack_16138;
  undefined8 uStack_16130;
  undefined8 uStack_16128;
  undefined8 uStack_16120;
  undefined8 uStack_16118;
  undefined8 uStack_16110;
  undefined8 uStack_16108;
  undefined8 uStack_16100;
  undefined8 uStack_160f8;
  undefined8 uStack_160f0;
  undefined8 uStack_160e8;
  undefined8 uStack_160e0;
  undefined8 uStack_160cf;
  long lStack_160c0;
  undefined8 uStack_160b8;
  undefined8 uStack_160a8;
  undefined8 uStack_160a0;
  undefined8 uStack_16098;
  undefined8 uStack_16090;
  undefined8 uStack_16088;
  undefined1 auStack_16078 [96];
  undefined1 auStack_16018 [8];
  undefined1 auStack_16010 [1448];
  undefined8 uStack_15a68;
  undefined8 uStack_15a60;
  undefined8 uStack_15a58;
  undefined8 uStack_15a50;
  undefined8 uStack_15a48;
  undefined8 uStack_15a40;
  undefined8 uStack_15a38;
  undefined8 uStack_15a30;
  undefined8 uStack_15a28;
  undefined8 uStack_15a20;
  undefined8 uStack_15a18;
  undefined8 uStack_15a07;
  undefined1 auStack_159f8 [776];
  undefined8 uStack_156f0;
  undefined8 uStack_156e8;
  undefined8 uStack_156e0;
  long lStack_156d8;
  undefined1 *puStack_156c8;
  undefined1 **ppuStack_156c0;
  undefined1 *puStack_156b8;
  undefined1 **ppuStack_156b0;
  undefined8 uStack_156a8;
  ulong uStack_156a0;
  undefined8 uStack_15698;
  undefined8 uStack_15690;
  undefined8 uStack_15688;
  undefined8 uStack_15680;
  long lStack_15678;
  ulong uStack_15670;
  undefined8 uStack_15668;
  undefined8 uStack_15660;
  undefined8 uStack_15658;
  undefined8 uStack_15650;
  undefined8 uStack_15648;
  undefined8 uStack_15640;
  undefined8 uStack_15638;
  undefined8 uStack_15630;
  undefined8 uStack_15628;
  undefined8 uStack_15620;
  undefined8 uStack_15618;
  undefined8 uStack_15610;
  undefined8 uStack_15608;
  undefined8 uStack_15600;
  undefined8 uStack_155f8;
  undefined8 uStack_155f0;
  undefined8 uStack_155e8;
  undefined8 uStack_155e0;
  undefined8 uStack_155d8;
  undefined8 uStack_155d0;
  undefined8 uStack_155c8;
  undefined8 uStack_155b7;
  long lStack_155a8;
  undefined8 uStack_155a0;
  undefined8 uStack_15590;
  undefined8 uStack_15588;
  undefined8 uStack_15580;
  undefined8 uStack_15578;
  undefined8 uStack_15570;
  undefined1 auStack_15560 [8];
  undefined1 auStack_15558 [1448];
  undefined8 uStack_14fb0;
  undefined8 uStack_14fa8;
  undefined8 uStack_14fa0;
  undefined8 uStack_14f98;
  undefined8 uStack_14f90;
  undefined8 uStack_14f88;
  undefined8 uStack_14f80;
  undefined8 uStack_14f78;
  undefined8 uStack_14f70;
  undefined8 uStack_14f68;
  undefined8 uStack_14f60;
  undefined8 uStack_14f4f;
  undefined1 auStack_14f40 [776];
  undefined8 uStack_14c38;
  undefined8 uStack_14c30;
  undefined8 uStack_14c28;
  long lStack_14c20;
  undefined1 *puStack_14c10;
  undefined1 **ppuStack_14c08;
  undefined1 *puStack_14c00;
  undefined1 **ppuStack_14bf8;
  undefined8 uStack_14bf0;
  ulong uStack_14be8;
  undefined8 uStack_14be0;
  undefined8 uStack_14bd8;
  undefined8 uStack_14bd0;
  undefined8 uStack_14bc8;
  long lStack_14bc0;
  ulong uStack_14bb8;
  undefined8 uStack_14bb0;
  undefined8 uStack_14ba8;
  undefined8 uStack_14ba0;
  undefined8 uStack_14b98;
  undefined8 uStack_14b90;
  undefined8 uStack_14b88;
  undefined8 uStack_14b80;
  undefined8 uStack_14b78;
  undefined8 uStack_14b70;
  undefined8 uStack_14b68;
  undefined8 uStack_14b60;
  undefined8 uStack_14b58;
  undefined8 uStack_14b50;
  undefined8 uStack_14b48;
  undefined8 uStack_14b40;
  undefined8 uStack_14b38;
  undefined8 uStack_14b30;
  undefined8 uStack_14b28;
  undefined8 uStack_14b20;
  undefined8 uStack_14b18;
  undefined8 uStack_14b10;
  undefined8 uStack_14aff;
  long lStack_14af0;
  undefined8 uStack_14ae8;
  undefined8 uStack_14ad8;
  undefined8 uStack_14ad0;
  undefined8 uStack_14ac8;
  undefined8 uStack_14ac0;
  undefined8 uStack_14ab8;
  undefined1 auStack_14aa8 [192];
  undefined1 auStack_149e8 [8];
  undefined1 auStack_149e0 [1448];
  undefined8 uStack_14438;
  undefined8 uStack_14430;
  undefined8 uStack_14428;
  undefined8 uStack_14420;
  undefined8 uStack_14418;
  undefined8 uStack_14410;
  undefined8 uStack_14408;
  undefined8 uStack_14400;
  undefined8 uStack_143f8;
  undefined8 uStack_143f0;
  undefined8 uStack_143e8;
  undefined8 uStack_143d7;
  undefined1 auStack_143c8 [776];
  undefined8 uStack_140c0;
  undefined8 uStack_140b8;
  undefined8 uStack_140b0;
  long lStack_140a8;
  undefined1 *puStack_14098;
  undefined1 **ppuStack_14090;
  undefined1 *puStack_14088;
  undefined1 **ppuStack_14080;
  undefined8 uStack_14078;
  ulong uStack_14070;
  undefined8 uStack_14068;
  undefined8 uStack_14060;
  undefined8 uStack_14058;
  undefined8 uStack_14050;
  long lStack_14048;
  ulong uStack_14040;
  undefined8 uStack_14038;
  undefined8 uStack_14030;
  undefined8 uStack_14028;
  undefined8 uStack_14020;
  undefined8 uStack_14018;
  undefined8 uStack_14010;
  undefined8 uStack_14008;
  undefined8 uStack_14000;
  undefined8 uStack_13ff8;
  undefined8 uStack_13ff0;
  undefined8 uStack_13fe8;
  undefined8 uStack_13fe0;
  undefined8 uStack_13fd8;
  undefined8 uStack_13fd0;
  undefined8 uStack_13fc8;
  undefined8 uStack_13fc0;
  undefined8 uStack_13fb8;
  undefined8 uStack_13fb0;
  undefined8 uStack_13fa8;
  undefined8 uStack_13fa0;
  undefined8 uStack_13f98;
  undefined8 uStack_13f87;
  long lStack_13f78;
  undefined8 uStack_13f70;
  undefined8 uStack_13f60;
  undefined8 uStack_13f58;
  undefined8 uStack_13f50;
  undefined8 uStack_13f48;
  undefined8 uStack_13f40;
  undefined1 auStack_13f30 [192];
  undefined1 auStack_13e70 [8];
  undefined1 auStack_13e68 [1448];
  undefined8 uStack_138c0;
  undefined8 uStack_138b8;
  undefined8 uStack_138b0;
  undefined8 uStack_138a8;
  undefined8 uStack_138a0;
  undefined8 uStack_13898;
  undefined8 uStack_13890;
  undefined8 uStack_13888;
  undefined8 uStack_13880;
  undefined8 uStack_13878;
  undefined8 uStack_13870;
  undefined8 uStack_1385f;
  undefined1 auStack_13850 [776];
  undefined8 uStack_13548;
  undefined8 uStack_13540;
  undefined8 uStack_13538;
  long lStack_13530;
  undefined1 *puStack_13520;
  undefined1 **ppuStack_13518;
  undefined1 *puStack_13510;
  undefined1 **ppuStack_13508;
  undefined8 uStack_13500;
  ulong uStack_134f8;
  undefined8 uStack_134f0;
  undefined8 uStack_134e8;
  undefined8 uStack_134e0;
  undefined8 uStack_134d8;
  long lStack_134d0;
  ulong uStack_134c8;
  undefined8 uStack_134c0;
  undefined8 uStack_134b8;
  undefined8 uStack_134b0;
  undefined8 uStack_134a8;
  undefined8 uStack_134a0;
  undefined8 uStack_13498;
  undefined8 uStack_13490;
  undefined8 uStack_13488;
  undefined8 uStack_13480;
  undefined8 uStack_13478;
  undefined8 uStack_13470;
  undefined8 uStack_13468;
  undefined8 uStack_13460;
  undefined8 uStack_13458;
  undefined8 uStack_13450;
  undefined8 uStack_13448;
  undefined8 uStack_13440;
  undefined8 uStack_13438;
  undefined8 uStack_13430;
  undefined8 uStack_13428;
  undefined8 uStack_13420;
  undefined8 uStack_1340f;
  long lStack_13400;
  undefined8 uStack_133f8;
  undefined8 uStack_133e8;
  undefined8 uStack_133e0;
  undefined8 uStack_133d8;
  undefined8 uStack_133d0;
  undefined8 uStack_133c8;
  undefined1 auStack_133b8 [96];
  undefined1 auStack_13358 [8];
  undefined1 auStack_13350 [1448];
  undefined8 uStack_12da8;
  undefined8 uStack_12da0;
  undefined8 uStack_12d98;
  undefined8 uStack_12d90;
  undefined8 uStack_12d88;
  undefined8 uStack_12d80;
  undefined8 uStack_12d78;
  undefined8 uStack_12d70;
  undefined8 uStack_12d68;
  undefined8 uStack_12d60;
  undefined8 uStack_12d58;
  undefined8 uStack_12d47;
  undefined1 auStack_12d38 [776];
  undefined8 uStack_12a30;
  undefined8 uStack_12a28;
  undefined8 uStack_12a20;
  long lStack_12a18;
  undefined1 *puStack_12a08;
  undefined1 **ppuStack_12a00;
  undefined1 *puStack_129f8;
  undefined1 **ppuStack_129f0;
  undefined8 uStack_129e8;
  ulong uStack_129e0;
  undefined8 uStack_129d8;
  undefined8 uStack_129d0;
  undefined8 uStack_129c8;
  undefined8 uStack_129c0;
  long lStack_129b8;
  ulong uStack_129b0;
  undefined8 uStack_129a8;
  undefined8 uStack_129a0;
  undefined8 uStack_12998;
  undefined8 uStack_12990;
  undefined8 uStack_12988;
  undefined8 uStack_12980;
  undefined8 uStack_12978;
  undefined8 uStack_12970;
  undefined8 uStack_12968;
  undefined8 uStack_12960;
  undefined8 uStack_12958;
  undefined8 uStack_12950;
  undefined8 uStack_12948;
  undefined8 uStack_12940;
  undefined8 uStack_12938;
  undefined8 uStack_12930;
  undefined8 uStack_12928;
  undefined8 uStack_12920;
  undefined8 uStack_12918;
  undefined8 uStack_12910;
  undefined8 uStack_12908;
  undefined8 uStack_128f7;
  long lStack_128e8;
  undefined8 uStack_128e0;
  undefined8 uStack_128d0;
  undefined8 uStack_128c8;
  undefined8 uStack_128c0;
  undefined8 uStack_128b8;
  undefined8 uStack_128b0;
  undefined1 auStack_128a0 [16];
  undefined1 **ppuStack_12890;
  undefined1 uStack_12888;
  byte bStack_12838;
  undefined1 auStack_12830 [2744];
  undefined8 uStack_11d78;
  undefined8 uStack_11d68;
  byte bStack_11d60;
  byte bStack_11d5f;
  byte bStack_11d5e;
  undefined8 uStack_11d58;
  undefined8 uStack_11d50;
  undefined8 uStack_11d48;
  undefined8 uStack_11d40;
  undefined8 uStack_11d38;
  undefined8 uStack_11d30;
  undefined1 auStack_11d20 [8];
  undefined1 auStack_11d18 [1448];
  undefined8 uStack_11770;
  undefined8 uStack_11768;
  undefined8 uStack_11760;
  undefined8 uStack_11758;
  undefined8 uStack_11750;
  undefined8 uStack_11748;
  undefined8 uStack_11740;
  undefined8 uStack_11738;
  undefined8 uStack_11730;
  undefined8 uStack_11728;
  undefined8 uStack_11720;
  undefined8 uStack_1170f;
  undefined1 auStack_11700 [776];
  undefined8 uStack_113f8;
  undefined8 uStack_113f0;
  undefined8 uStack_113e8;
  long lStack_113e0;
  undefined1 *puStack_113d0;
  undefined1 **ppuStack_113c8;
  undefined1 *puStack_113c0;
  undefined1 **ppuStack_113b8;
  undefined8 uStack_113b0;
  ulong uStack_113a8;
  undefined8 uStack_113a0;
  undefined8 uStack_11398;
  undefined8 uStack_11390;
  undefined8 uStack_11388;
  long lStack_11380;
  ulong uStack_11378;
  undefined8 uStack_11370;
  undefined8 uStack_11368;
  undefined8 uStack_11360;
  undefined8 uStack_11358;
  undefined8 uStack_11350;
  undefined8 uStack_11348;
  undefined8 uStack_11340;
  undefined8 uStack_11338;
  undefined8 uStack_11330;
  undefined8 uStack_11328;
  undefined8 uStack_11320;
  undefined8 uStack_11318;
  undefined8 uStack_11310;
  undefined8 uStack_11308;
  undefined8 uStack_11300;
  undefined8 uStack_112f8;
  undefined8 uStack_112f0;
  undefined8 uStack_112e8;
  undefined8 uStack_112e0;
  undefined8 uStack_112d8;
  undefined8 uStack_112d0;
  undefined8 uStack_112bf;
  long lStack_112b0;
  undefined8 uStack_112a8;
  undefined8 uStack_11298;
  undefined8 uStack_11290;
  undefined8 uStack_11288;
  undefined8 uStack_11280;
  undefined8 uStack_11278;
  undefined1 auStack_11268 [8];
  undefined1 auStack_11260 [1448];
  undefined8 uStack_10cb8;
  undefined8 uStack_10cb0;
  undefined8 uStack_10ca8;
  undefined8 uStack_10ca0;
  undefined8 uStack_10c98;
  undefined8 uStack_10c90;
  undefined8 uStack_10c88;
  undefined8 uStack_10c80;
  undefined8 uStack_10c78;
  undefined8 uStack_10c70;
  undefined8 uStack_10c68;
  undefined8 uStack_10c57;
  undefined1 auStack_10c48 [776];
  undefined8 uStack_10940;
  undefined8 uStack_10938;
  undefined8 uStack_10930;
  long lStack_10928;
  undefined1 *puStack_10918;
  undefined1 **ppuStack_10910;
  undefined1 *puStack_10908;
  undefined1 **ppuStack_10900;
  undefined8 uStack_108f8;
  ulong uStack_108f0;
  undefined8 uStack_108e8;
  undefined8 uStack_108e0;
  undefined8 uStack_108d8;
  undefined8 uStack_108d0;
  long lStack_108c8;
  ulong uStack_108c0;
  undefined8 uStack_108b8;
  undefined8 uStack_108b0;
  undefined8 uStack_108a8;
  undefined8 uStack_108a0;
  undefined8 uStack_10898;
  undefined8 uStack_10890;
  undefined8 uStack_10888;
  undefined8 uStack_10880;
  undefined8 uStack_10878;
  undefined8 uStack_10870;
  undefined8 uStack_10868;
  undefined8 uStack_10860;
  undefined8 uStack_10858;
  undefined8 uStack_10850;
  undefined8 uStack_10848;
  undefined8 uStack_10840;
  undefined8 uStack_10838;
  undefined8 uStack_10830;
  undefined8 uStack_10828;
  undefined8 uStack_10820;
  undefined8 uStack_10818;
  undefined8 uStack_10807;
  long lStack_107f8;
  undefined8 uStack_107f0;
  undefined8 uStack_107e0;
  undefined8 uStack_107d8;
  undefined8 uStack_107d0;
  undefined8 uStack_107c8;
  undefined8 uStack_107c0;
  undefined1 auStack_107b0 [8];
  undefined1 auStack_107a8 [1448];
  undefined8 uStack_10200;
  undefined8 uStack_101f8;
  undefined8 uStack_101f0;
  undefined8 uStack_101e8;
  undefined8 uStack_101e0;
  undefined8 uStack_101d8;
  undefined8 uStack_101d0;
  undefined8 uStack_101c8;
  undefined8 uStack_101c0;
  undefined8 uStack_101b8;
  undefined8 uStack_101b0;
  undefined8 uStack_1019f;
  undefined1 auStack_10190 [776];
  undefined8 uStack_fe88;
  undefined8 uStack_fe80;
  undefined8 uStack_fe78;
  long lStack_fe70;
  byte bStack_fe68;
  undefined1 *puStack_fe60;
  undefined1 **ppuStack_fe58;
  undefined1 *puStack_fe50;
  undefined1 **ppuStack_fe48;
  undefined8 uStack_fe40;
  ulong uStack_fe38;
  undefined8 uStack_fe30;
  undefined8 uStack_fe28;
  undefined8 uStack_fe20;
  undefined8 uStack_fe18;
  long lStack_fe10;
  ulong uStack_fe08;
  undefined8 uStack_fe00;
  undefined8 uStack_fdf8;
  undefined8 uStack_fdf0;
  undefined8 uStack_fde8;
  undefined8 uStack_fde0;
  undefined8 uStack_fdd8;
  undefined8 uStack_fdd0;
  undefined8 uStack_fdc8;
  undefined8 uStack_fdc0;
  undefined8 uStack_fdb8;
  undefined8 uStack_fdb0;
  undefined8 uStack_fda8;
  undefined8 uStack_fda0;
  undefined8 uStack_fd98;
  undefined8 uStack_fd90;
  undefined8 uStack_fd88;
  undefined8 uStack_fd80;
  undefined8 uStack_fd78;
  undefined8 uStack_fd70;
  undefined8 uStack_fd68;
  undefined8 uStack_fd60;
  undefined8 uStack_fd4f;
  long lStack_fd40;
  undefined8 uStack_fd38;
  undefined8 uStack_fd28;
  undefined8 uStack_fd20;
  undefined8 uStack_fd18;
  undefined8 uStack_fd10;
  undefined8 uStack_fd08;
  undefined1 auStack_fcf8 [8];
  undefined1 auStack_fcf0 [1448];
  undefined8 uStack_f748;
  undefined8 uStack_f740;
  undefined8 uStack_f738;
  undefined8 uStack_f730;
  undefined8 uStack_f728;
  undefined8 uStack_f720;
  undefined8 uStack_f718;
  undefined8 uStack_f710;
  undefined8 uStack_f708;
  undefined8 uStack_f700;
  undefined8 uStack_f6f8;
  undefined8 uStack_f6e7;
  undefined1 auStack_f6d8 [776];
  undefined8 uStack_f3d0;
  undefined8 uStack_f3c8;
  undefined8 uStack_f3c0;
  long lStack_f3b8;
  byte bStack_f3af;
  undefined1 *puStack_f3a8;
  undefined1 **ppuStack_f3a0;
  undefined1 *puStack_f398;
  undefined1 **ppuStack_f390;
  undefined8 uStack_f388;
  ulong uStack_f380;
  undefined8 uStack_f378;
  undefined8 uStack_f370;
  undefined8 uStack_f368;
  undefined8 uStack_f360;
  long lStack_f358;
  ulong uStack_f350;
  undefined8 uStack_f348;
  undefined8 uStack_f340;
  undefined8 uStack_f338;
  undefined8 uStack_f330;
  undefined8 uStack_f328;
  undefined8 uStack_f320;
  undefined8 uStack_f318;
  undefined8 uStack_f310;
  undefined8 uStack_f308;
  undefined8 uStack_f300;
  undefined8 uStack_f2f8;
  undefined8 uStack_f2f0;
  undefined8 uStack_f2e8;
  undefined8 uStack_f2e0;
  undefined8 uStack_f2d8;
  undefined8 uStack_f2d0;
  undefined8 uStack_f2c8;
  undefined8 uStack_f2c0;
  undefined8 uStack_f2b8;
  undefined8 uStack_f2b0;
  undefined8 uStack_f2a8;
  undefined8 uStack_f297;
  long lStack_f288;
  undefined8 uStack_f280;
  undefined8 uStack_f270;
  undefined8 uStack_f268;
  undefined8 uStack_f260;
  undefined8 uStack_f258;
  undefined8 uStack_f250;
  undefined1 auStack_f240 [8];
  undefined1 auStack_f238 [1448];
  undefined8 uStack_ec90;
  undefined8 uStack_ec88;
  undefined8 uStack_ec80;
  undefined8 uStack_ec78;
  undefined8 uStack_ec70;
  undefined8 uStack_ec68;
  undefined8 uStack_ec60;
  undefined8 uStack_ec58;
  undefined8 uStack_ec50;
  undefined8 uStack_ec48;
  undefined8 uStack_ec40;
  undefined8 uStack_ec2f;
  undefined1 auStack_ec20 [776];
  undefined8 uStack_e918;
  undefined8 uStack_e910;
  undefined8 uStack_e908;
  long lStack_e900;
  undefined1 *puStack_e8f0;
  undefined1 **ppuStack_e8e8;
  undefined1 *puStack_e8e0;
  undefined1 **ppuStack_e8d8;
  undefined8 uStack_e8d0;
  ulong uStack_e8c8;
  undefined8 uStack_e8c0;
  undefined8 uStack_e8b8;
  undefined8 uStack_e8b0;
  undefined8 uStack_e8a8;
  long lStack_e8a0;
  ulong uStack_e898;
  undefined8 uStack_e890;
  undefined8 uStack_e888;
  undefined8 uStack_e880;
  undefined8 uStack_e878;
  undefined8 uStack_e870;
  undefined8 uStack_e868;
  undefined8 uStack_e860;
  undefined8 uStack_e858;
  undefined8 uStack_e850;
  undefined8 uStack_e848;
  undefined8 uStack_e840;
  undefined8 uStack_e838;
  undefined8 uStack_e830;
  undefined8 uStack_e828;
  undefined8 uStack_e820;
  undefined8 uStack_e818;
  undefined8 uStack_e810;
  undefined8 uStack_e808;
  undefined8 uStack_e800;
  undefined8 uStack_e7f8;
  undefined8 uStack_e7f0;
  undefined8 uStack_e7df;
  long lStack_e7d0;
  undefined8 uStack_e7c8;
  undefined8 uStack_e7b8;
  undefined8 uStack_e7b0;
  undefined8 uStack_e7a8;
  undefined8 uStack_e7a0;
  undefined8 uStack_e798;
  undefined1 auStack_e788 [72];
  undefined1 auStack_e740 [8];
  undefined1 auStack_e738 [1448];
  undefined8 uStack_e190;
  undefined8 uStack_e188;
  undefined8 uStack_e180;
  undefined8 uStack_e178;
  undefined8 uStack_e170;
  undefined8 uStack_e168;
  undefined8 uStack_e160;
  undefined8 uStack_e158;
  undefined8 uStack_e150;
  undefined8 uStack_e148;
  undefined8 uStack_e140;
  undefined8 uStack_e12f;
  undefined1 auStack_e120 [776];
  undefined8 uStack_de18;
  undefined8 uStack_de10;
  undefined8 uStack_de08;
  long lStack_de00;
  undefined1 *puStack_ddf0;
  undefined1 **ppuStack_dde8;
  undefined1 *puStack_dde0;
  undefined1 **ppuStack_ddd8;
  undefined8 uStack_ddd0;
  ulong uStack_ddc8;
  undefined8 uStack_ddc0;
  undefined8 uStack_ddb8;
  undefined8 uStack_ddb0;
  undefined8 uStack_dda8;
  long lStack_dda0;
  ulong uStack_dd98;
  undefined8 uStack_dd90;
  undefined8 uStack_dd88;
  undefined8 uStack_dd80;
  undefined8 uStack_dd78;
  undefined8 uStack_dd70;
  undefined8 uStack_dd68;
  undefined8 uStack_dd60;
  undefined8 uStack_dd58;
  undefined8 uStack_dd50;
  undefined8 uStack_dd48;
  undefined8 uStack_dd40;
  undefined8 uStack_dd38;
  undefined8 uStack_dd30;
  undefined8 uStack_dd28;
  undefined8 uStack_dd20;
  undefined8 uStack_dd18;
  undefined8 uStack_dd10;
  undefined8 uStack_dd08;
  undefined8 uStack_dd00;
  undefined8 uStack_dcf8;
  undefined8 uStack_dcf0;
  undefined8 uStack_dcdf;
  long lStack_dcd0;
  undefined8 uStack_dcc8;
  undefined8 uStack_dcb8;
  undefined8 uStack_dcb0;
  undefined8 uStack_dca8;
  undefined8 uStack_dca0;
  undefined8 uStack_dc98;
  undefined8 uStack_dc88;
  undefined8 uStack_dc80;
  undefined8 uStack_dc78;
  undefined8 uStack_dc70;
  undefined8 uStack_dc68;
  undefined8 uStack_dc60;
  undefined1 auStack_dc58 [8];
  undefined1 auStack_dc50 [1448];
  undefined8 uStack_d6a8;
  undefined8 uStack_d6a0;
  undefined8 uStack_d698;
  undefined8 uStack_d690;
  undefined8 uStack_d688;
  undefined8 uStack_d680;
  undefined8 uStack_d678;
  undefined8 uStack_d670;
  undefined8 uStack_d668;
  undefined8 uStack_d660;
  undefined8 uStack_d658;
  undefined8 uStack_d647;
  undefined1 auStack_d638 [776];
  undefined8 uStack_d330;
  undefined8 uStack_d328;
  undefined8 uStack_d320;
  long lStack_d318;
  undefined1 *puStack_d308;
  undefined1 **ppuStack_d300;
  undefined1 *puStack_d2f8;
  undefined1 **ppuStack_d2f0;
  undefined8 uStack_d2e8;
  ulong uStack_d2e0;
  undefined8 uStack_d2d8;
  undefined8 uStack_d2d0;
  undefined8 uStack_d2c8;
  undefined8 uStack_d2c0;
  long lStack_d2b8;
  ulong uStack_d2b0;
  undefined8 uStack_d2a8;
  undefined8 uStack_d2a0;
  undefined8 uStack_d298;
  undefined8 uStack_d290;
  undefined8 uStack_d288;
  undefined8 uStack_d280;
  undefined8 uStack_d278;
  undefined8 uStack_d270;
  undefined8 uStack_d268;
  undefined8 uStack_d260;
  undefined8 uStack_d258;
  undefined8 uStack_d250;
  undefined8 uStack_d248;
  undefined8 uStack_d240;
  undefined8 uStack_d238;
  undefined8 uStack_d230;
  undefined8 uStack_d228;
  undefined8 uStack_d220;
  undefined8 uStack_d218;
  undefined8 uStack_d210;
  undefined8 uStack_d208;
  undefined8 uStack_d1f7;
  long lStack_d1e8;
  undefined8 uStack_d1e0;
  undefined8 uStack_d1d0;
  undefined8 uStack_d1c8;
  undefined8 uStack_d1c0;
  undefined8 uStack_d1b8;
  undefined8 uStack_d1b0;
  undefined1 auStack_d1a0 [16];
  undefined1 **ppuStack_d190;
  undefined1 uStack_d188;
  byte bStack_d138;
  undefined1 auStack_d130 [2744];
  undefined8 uStack_c678;
  undefined8 uStack_c668;
  byte bStack_c660;
  byte bStack_c65f;
  byte bStack_c65e;
  undefined8 uStack_c658;
  undefined8 uStack_c650;
  undefined8 uStack_c648;
  undefined8 uStack_c640;
  undefined8 uStack_c638;
  undefined8 uStack_c630;
  undefined1 auStack_c620 [208];
  undefined8 uStack_c550;
  undefined8 uStack_c548;
  undefined1 *puStack_c540;
  undefined1 **ppuStack_c538;
  undefined8 uStack_c530;
  undefined1 auStack_c528 [2744];
  undefined1 *puStack_ba70;
  undefined1 **ppuStack_ba68;
  undefined1 *puStack_ba60;
  undefined1 **ppuStack_ba58;
  undefined8 uStack_ba50;
  ulong uStack_ba48;
  undefined8 uStack_ba40;
  undefined8 uStack_ba38;
  undefined8 uStack_ba30;
  undefined8 uStack_ba28;
  long lStack_ba20;
  undefined1 auStack_ba18 [2744];
  undefined1 auStack_af60 [2744];
  undefined1 uStack_a4a8;
  undefined7 uStack_a4a7;
  long lStack_a4a0;
  undefined1 uStack_a498;
  undefined7 uStack_a497;
  undefined8 uStack_a490;
  undefined1 uStack_a488;
  undefined1 auStack_a480 [2744];
  undefined1 auStack_99c8 [2744];
  undefined1 auStack_8f10 [2744];
  undefined1 auStack_8458 [2744];
  undefined1 auStack_79a0 [2936];
  undefined1 auStack_6e28 [2744];
  undefined8 uStack_6370;
  undefined8 uStack_6368;
  undefined8 uStack_6360;
  undefined8 uStack_6358;
  undefined8 uStack_6350;
  undefined1 auStack_6340 [2744];
  undefined1 auStack_5888 [2744];
  undefined1 *puStack_4dd0;
  undefined1 **ppuStack_4dc8;
  undefined1 *puStack_4dc0;
  undefined1 **ppuStack_4db8;
  undefined8 uStack_4db0;
  ulong uStack_4da8;
  undefined8 uStack_4da0;
  undefined8 uStack_4d98;
  undefined1 auStack_4d88 [2744];
  undefined1 *puStack_42d0;
  undefined1 **ppuStack_42c8;
  undefined1 *puStack_42c0;
  undefined1 **ppuStack_42b8;
  undefined8 uStack_42b0;
  ulong uStack_42a8;
  undefined8 uStack_42a0;
  undefined8 uStack_4298;
  undefined1 auStack_4288 [2744];
  undefined1 auStack_37d0 [2744];
  undefined1 *puStack_2d18;
  undefined8 uStack_2d10;
  undefined8 uStack_2d08;
  undefined1 *puStack_2d00;
  undefined1 **ppuStack_2cf8;
  undefined8 uStack_2cf0;
  undefined1 auStack_2ce8 [2744];
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined1 *puStack_2220;
  undefined1 **ppuStack_2218;
  undefined8 uStack_2210;
  undefined1 **ppuStack_2208;
  undefined1 **ppuStack_2200;
  undefined8 uStack_21f8;
  long lStack_21f0;
  ulong uStack_21e8;
  undefined8 uStack_21e0;
  undefined1 *puStack_21d8;
  undefined1 **ppuStack_21d0;
  undefined1 *puStack_21c8;
  undefined1 **ppuStack_21c0;
  undefined8 uStack_21b8;
  ulong uStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined8 uStack_2190;
  undefined1 auStack_2188 [2744];
  undefined1 auStack_16d0 [2936];
  undefined1 auStack_b58 [2744];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uVar2;
  byte bVar3;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  FUN_1034c7044();
  if (*(long *)(param_2 + 0x1780) == 1) {
    uStack_a490 = 0;
    uStack_a488 = 1;
  }
  else {
    uStack_a488 = *(undefined1 *)(param_2 + 0x1778);
    uStack_a490 = *(undefined8 *)(param_2 + 6000);
  }
  uStack_a4a8 = 0;
  uStack_a498 = 1;
  lVar10 = 0;
  lStack_a4a0 = lVar11;
  func_0x000100b91d00();
  switch(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x48))) {
  case 0:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_17618,param_1,FUN_1034c65c0,0);
      uStack_1a980 = uStack_16b90;
      uStack_1a9b8 = uStack_16b80;
      uStack_1a9c0 = uStack_16b88;
      uStack_1a998 = uStack_16ba0;
      lStack_1a9a0 = lStack_16ba8;
      uStack_1a988 = uStack_16b70;
      lStack_1a990 = uStack_16b78;
      uStack_1a378 = uStack_16be0;
      uStack_1a380 = uStack_16be8;
      uStack_1a368 = uStack_16bd0;
      uStack_1a370 = uStack_16bd8;
      uStack_1a360 = uStack_16bc8;
      uStack_1a34f = uStack_16bb7;
      uStack_1a3b8 = uStack_16c20;
      uStack_1a3c0 = uStack_16c28;
      uStack_1a3a8 = uStack_16c10;
      uStack_1a3b0 = uStack_16c18;
      uStack_1a398 = uStack_16c00;
      uStack_1a3a0 = uStack_16c08;
      uStack_1a388 = uStack_16bf0;
      uStack_1a390 = uStack_16bf8;
      uStack_1a3f8 = uStack_16c60;
      uStack_1a400 = uStack_16c68;
      uStack_1a3e8 = uStack_16c50;
      uStack_1a3f0 = uStack_16c58;
      uStack_1a3d8 = uStack_16c40;
      uStack_1a3e0 = uStack_16c48;
      uStack_1a3c8 = uStack_16c30;
      uStack_1a3d0 = uStack_16c38;
      uStack_1a438 = uStack_16ca0;
      uStack_1a440 = uStack_16ca8;
      uStack_1a428 = uStack_16c90;
      uStack_1a430 = uStack_16c98;
      uStack_1a418 = uStack_16c80;
      uStack_1a420 = uStack_16c88;
      uStack_1a408 = uStack_16c70;
      lStack_1a410 = lStack_16c78;
      ppuStack_1a458 = ppuStack_16cc0;
      puStack_1a460 = puStack_16cc8;
      ppuStack_1a448 = ppuStack_16cb0;
      puStack_1a450 = puStack_16cb8;
      lStack_1a9f0 = uStack_16cf0;
      uStack_1a9f8 = uStack_16ce0;
      uStack_1aa00 = uStack_16ce8;
      func_0x000107c610b4(auStack_1a768,auStack_16ff8,0x301);
      uStack_1a798 = uStack_17020;
      uStack_1a7a0 = uStack_17028;
      uStack_1a790 = uStack_17018;
      uStack_1a77f = uStack_17007;
      uStack_1a7d8 = uStack_17060;
      uStack_1a7e0 = uStack_17068;
      uStack_1a7c8 = uStack_17050;
      uStack_1a7d0 = uStack_17058;
      uStack_1a7b8 = uStack_17040;
      uStack_1a7c0 = uStack_17048;
      uStack_1a7a8 = uStack_17030;
      uStack_1a7b0 = uStack_17038;
      func_0x000107c610b4(auStack_18c48,auStack_17610,0x5a8);
      lVar11 = lStack_16cd8;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      lStack_1a9f0 = uStack_17868;
      uStack_1a9f8 = uStack_17858;
      uStack_1aa00 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9f8;
    uStack_18e90 = uStack_1aa00;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e98 = lStack_1a9f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_c528,auStack_197c0,0xab2);
    uVar27 = *(undefined8 *)(param_2 + 0x1708);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar29;
    *(undefined8 *)(lVar11 + 0x50) = uVar30;
    *(undefined8 *)(lVar11 + 0x58) = uVar26;
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar30);
    func_0x000107c6157c(uVar26);
    puVar23 = auStack_c528;
    FUN_1034b0fc0(uVar27);
    if (unaff_x21 == 0) {
      func_0x000107c61574(uVar30);
      func_0x000107c61574(uVar29);
      func_0x000107c6142c(uVar22);
      func_0x000107c61588(lVar11);
      func_0x000107c61574(uVar26);
      func_0x000107c6145c(lVar11,0x60,7);
      func_0x0001034c73c4(0,0,0);
      uStack_c548 = 0xc000000000000000;
      uStack_c550 = 0;
      puStack_c540 = puVar23;
      ppuStack_c538 = param_1;
      uStack_c530 = uVar21;
      FUN_1034e3fb0(&uStack_c550);
      goto code_r0x0001034c4a40;
    }
    func_0x000107c61574(uVar30);
    func_0x000107c61574(uVar29);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
    func_0x000107c61574(uVar26);
    func_0x000107c6145c(lVar11,0x60,7);
    func_0x00010179528c(auStack_197c0);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x0001034c73c4(0,0,0);
    break;
  case 1:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_11d20,param_1,0x1034c66a0,1);
      uStack_1a9a8 = uStack_11288;
      lStack_1a9b0 = uStack_11290;
      uStack_1a988 = uStack_112a8;
      lStack_1a990 = lStack_112b0;
      uStack_1a978 = uStack_11278;
      uStack_1a980 = uStack_11280;
      uStack_1a378 = uStack_112e8;
      uStack_1a380 = uStack_112f0;
      uStack_1a368 = uStack_112d8;
      uStack_1a370 = uStack_112e0;
      uStack_1a360 = uStack_112d0;
      uStack_1a34f = uStack_112bf;
      uStack_1a3b8 = uStack_11328;
      uStack_1a3c0 = uStack_11330;
      uStack_1a3a8 = uStack_11318;
      uStack_1a3b0 = uStack_11320;
      uStack_1a398 = uStack_11308;
      uStack_1a3a0 = uStack_11310;
      uStack_1a388 = uStack_112f8;
      uStack_1a390 = uStack_11300;
      uStack_1a3f8 = uStack_11368;
      uStack_1a400 = uStack_11370;
      uStack_1a3e8 = uStack_11358;
      uStack_1a3f0 = uStack_11360;
      uStack_1a3d8 = uStack_11348;
      uStack_1a3e0 = uStack_11350;
      uStack_1a3c8 = uStack_11338;
      uStack_1a3d0 = uStack_11340;
      uStack_1a438 = uStack_113a8;
      uStack_1a440 = uStack_113b0;
      uStack_1a428 = uStack_11398;
      uStack_1a430 = uStack_113a0;
      uStack_1a418 = uStack_11388;
      uStack_1a420 = uStack_11390;
      uStack_1a408 = uStack_11378;
      lStack_1a410 = lStack_11380;
      ppuStack_1a458 = ppuStack_113c8;
      puStack_1a460 = puStack_113d0;
      ppuStack_1a448 = ppuStack_113b8;
      puStack_1a450 = puStack_113c0;
      uStack_1a9d8 = uStack_113e8;
      uStack_1a9e0 = uStack_113f0;
      func_0x000107c610b4(auStack_1a768,auStack_11700,0x301);
      uStack_1a798 = uStack_11728;
      uStack_1a7a0 = uStack_11730;
      uStack_1a790 = uStack_11720;
      uStack_1a77f = uStack_1170f;
      uStack_1a7d8 = uStack_11768;
      uStack_1a7e0 = uStack_11770;
      uStack_1a7c8 = uStack_11758;
      uStack_1a7d0 = uStack_11760;
      uStack_1a7b8 = uStack_11748;
      uStack_1a7c0 = uStack_11750;
      uStack_1a7a8 = uStack_11738;
      uStack_1a7b0 = uStack_11740;
      func_0x000107c610b4(auStack_18c48,auStack_11d18,0x5a8);
      lVar11 = lStack_113e0;
      uVar21 = uStack_11298;
      uVar22 = uStack_113f8;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9d8 = uStack_17858;
      uStack_1a9e0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a9a8 = uStack_176f8;
      lStack_1a9b0 = uStack_17700;
      uStack_1a988 = uStack_17718;
      lStack_1a990 = lStack_17720;
      uStack_1a978 = uStack_176e8;
      uStack_1a980 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
      uVar21 = uStack_17708;
      uVar22 = uStack_17868;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9d8;
    uStack_18e90 = uStack_1a9e0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a988;
    lStack_18d50 = lStack_1a990;
    uStack_18d28 = uStack_1a9a8;
    uStack_18d30 = lStack_1a9b0;
    uStack_18d18 = uStack_1a978;
    uStack_18d20 = uStack_1a980;
    uStack_18e98 = uVar22;
    lStack_18e80 = lVar11;
    uStack_18d38 = uVar21;
    func_0x000107c610b4(auStack_6340,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined8 *)(lVar11 + 0x58) = uVar26;
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar26);
    FUN_1034a378c(uVar21,auStack_6340,param_1,lVar11);
    if (unaff_x21 == 0) {
      FUN_1034e414c();
      goto code_r0x0001034c4968;
    }
code_r0x0001034c4828:
    func_0x00010179528c(auStack_197c0);
    func_0x000107c61588(lVar11);
    func_0x000107c6142c(*(undefined8 *)(lVar11 + 0x18));
    func_0x000107c61574(*(undefined8 *)(lVar11 + 0x48));
    func_0x000107c61574(*(undefined8 *)(lVar11 + 0x50));
    func_0x000107c61574(*(undefined8 *)(lVar11 + 0x58));
    func_0x000107c6145c(lVar11,0x60,7);
    goto code_r0x0001034c4e6c;
  case 2:
  case 4:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
    break;
  case 3:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_15560,param_1,0x1034c6614,3);
      uStack_1a980 = uStack_14ad8;
      uStack_1a9b8 = uStack_14ac8;
      uStack_1a9c0 = uStack_14ad0;
      uStack_1a998 = uStack_14ae8;
      lStack_1a9a0 = lStack_14af0;
      uStack_1a988 = uStack_14ab8;
      lStack_1a990 = uStack_14ac0;
      uStack_1a378 = uStack_14b28;
      uStack_1a380 = uStack_14b30;
      uStack_1a368 = uStack_14b18;
      uStack_1a370 = uStack_14b20;
      uStack_1a360 = uStack_14b10;
      uStack_1a34f = uStack_14aff;
      uStack_1a3b8 = uStack_14b68;
      uStack_1a3c0 = uStack_14b70;
      uStack_1a3a8 = uStack_14b58;
      uStack_1a3b0 = uStack_14b60;
      uStack_1a398 = uStack_14b48;
      uStack_1a3a0 = uStack_14b50;
      uStack_1a388 = uStack_14b38;
      uStack_1a390 = uStack_14b40;
      uStack_1a3f8 = uStack_14ba8;
      uStack_1a400 = uStack_14bb0;
      uStack_1a3e8 = uStack_14b98;
      uStack_1a3f0 = uStack_14ba0;
      uStack_1a3d8 = uStack_14b88;
      uStack_1a3e0 = uStack_14b90;
      uStack_1a3c8 = uStack_14b78;
      uStack_1a3d0 = uStack_14b80;
      uStack_1a438 = uStack_14be8;
      uStack_1a440 = uStack_14bf0;
      uStack_1a428 = uStack_14bd8;
      uStack_1a430 = uStack_14be0;
      uStack_1a418 = uStack_14bc8;
      uStack_1a420 = uStack_14bd0;
      uStack_1a408 = uStack_14bb8;
      lStack_1a410 = lStack_14bc0;
      ppuStack_1a458 = ppuStack_14c08;
      puStack_1a460 = puStack_14c10;
      ppuStack_1a448 = ppuStack_14bf8;
      puStack_1a450 = puStack_14c00;
      uStack_1a9d8 = uStack_14c28;
      uStack_1a9e0 = uStack_14c30;
      func_0x000107c610b4(auStack_1a768,auStack_14f40,0x301);
      uStack_1a798 = uStack_14f68;
      uStack_1a7a0 = uStack_14f70;
      uStack_1a790 = uStack_14f60;
      uStack_1a77f = uStack_14f4f;
      uStack_1a7d8 = uStack_14fa8;
      uStack_1a7e0 = uStack_14fb0;
      uStack_1a7c8 = uStack_14f98;
      uStack_1a7d0 = uStack_14fa0;
      uStack_1a7b8 = uStack_14f88;
      uStack_1a7c0 = uStack_14f90;
      uStack_1a7a8 = uStack_14f78;
      uStack_1a7b0 = uStack_14f80;
      func_0x000107c610b4(auStack_18c48,auStack_15558,0x5a8);
      uVar21 = uStack_14c38;
      lVar11 = lStack_14c20;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9d8 = uStack_17858;
      uStack_1a9e0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9d8;
    uStack_18e90 = uStack_1a9e0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_a480,auStack_197c0,0xab2);
    if (lVar11 != 0) {
      uVar21 = *(undefined8 *)(param_2 + 0x1708);
      FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
      FUN_1034ae80c(auStack_14aa8,uVar21,auStack_a480,param_1,&uStack_a4a8);
      if (unaff_x21 != 0) goto code_r0x0001034c253c;
      puVar23 = auStack_14aa8;
      goto code_r0x0001034c227c;
    }
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined8 *)(lVar11 + 0x58) = uVar26;
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar26);
    FUN_1034ad694(uVar21,auStack_a480,param_1,lVar11);
    if (unaff_x21 != 0) goto code_r0x0001034c4828;
    FUN_1034e4214();
    goto code_r0x0001034c4968;
  case 5:
    func_0x000107c610b4(auStack_18190,param_2 + 0xad8,0xb78);
    iVar9 = (int)auStack_18190;
    func_0x000100d549f0();
    if (iVar9 == 1) {
      puStack_197a8 = &UNK_11065d188;
      ppuStack_197a0 = &PTR_DAT_11065d0f0;
      auStack_197c0[0] = 9;
      func_0x0001034e2644(auStack_197c0,0x1034c6684,0,param_1[7],param_1[8],0);
      func_0x0001000834e4(auStack_197c0);
      func_0x000101895c44(auStack_197c0);
      func_0x000107c610b4(auStack_6e28,auStack_197c0,0xab2);
      uStack_6368 = 0;
      uStack_6370 = 0;
      uStack_6358 = 0;
      uStack_6360 = 0;
      uStack_6350 = 0;
      func_0x0001042687a4(auStack_128a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      uStack_1a928 = uStack_11d48;
      uStack_1a930 = uStack_11d50;
      uStack_1a968 = uStack_11d38;
      uStack_1a970 = uStack_11d40;
      uStack_1a980 = uStack_11d30;
      lStack_1a990 = uStack_11d58;
      uStack_1a9c0 = uStack_11d68;
      lStack_1a9b0 = uStack_11d78;
      func_0x000107c610b4(auStack_18c48,auStack_12830,0xab2);
      bVar1 = bStack_11d60;
      uVar2 = uStack_12888;
      bVar3 = bStack_11d5f;
      bVar6 = bStack_11d5e;
    }
    else {
      lStack_1a9b0 = uStack_17668;
      uStack_1a9c0 = uStack_17658;
      lStack_1a990 = uStack_17648;
      uStack_1a928 = uStack_17638;
      uStack_1a930 = uStack_17640;
      uStack_1a968 = uStack_17628;
      uStack_1a970 = uStack_17630;
      uStack_1a980 = uStack_17620;
      uVar2 = puStack_18178._0_1_;
      func_0x000107c610b4(auStack_18c48,auStack_18120,0xab2);
      ppuStack_12890 = ppuStack_18180;
      bVar1 = bStack_17650;
      bStack_12838 = bStack_18128;
      bVar3 = bStack_1764f;
      bVar6 = bStack_1764e;
    }
    puStack_197a8 = (undefined *)(CONCAT71(puStack_197a8._1_7_,uVar2) & 0xffffffffffffff01);
    bStack_19758 = bStack_12838 & 1;
    ppuStack_197b0 = ppuStack_12890;
    func_0x000107c610b4(auStack_19750,auStack_18c48,0xab2);
    uStack_18c98 = lStack_1a9b0;
    uStack_18c88 = uStack_1a9c0;
    bStack_18c80 = bVar1 & 1;
    bStack_18c7f = bVar3 & 1;
    bStack_18c7e = bVar6 & 1;
    uStack_18c78 = lStack_1a990;
    uStack_18c68 = uStack_1a928;
    uStack_18c70 = uStack_1a930;
    uStack_18c58 = uStack_1a968;
    uStack_18c60 = uStack_1a970;
    uStack_18c50 = uStack_1a980;
    func_0x000107c610b4(auStack_79a0,auStack_197c0,0xb78);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc78,&UNK_10d98e350);
    FUN_1034aefd4(auStack_79a0,param_1,&uStack_a4a8);
    if (unaff_x21 == 0) {
      FUN_1034e4304();
      goto code_r0x0001034c45d0;
    }
code_r0x0001034c3774:
    func_0x00010178e444(auStack_197c0);
    goto code_r0x0001034c4e6c;
  case 6:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_11268,param_1,0x1034c66bc,6);
      uStack_1a980 = uStack_107e0;
      uStack_1a9b8 = uStack_107d0;
      uStack_1a9c0 = uStack_107d8;
      uStack_1a998 = uStack_107f0;
      lStack_1a9a0 = lStack_107f8;
      uStack_1a988 = uStack_107c0;
      lStack_1a990 = uStack_107c8;
      uStack_1a378 = uStack_10830;
      uStack_1a380 = uStack_10838;
      uStack_1a368 = uStack_10820;
      uStack_1a370 = uStack_10828;
      uStack_1a360 = uStack_10818;
      uStack_1a34f = uStack_10807;
      uStack_1a3b8 = uStack_10870;
      uStack_1a3c0 = uStack_10878;
      uStack_1a3a8 = uStack_10860;
      uStack_1a3b0 = uStack_10868;
      uStack_1a398 = uStack_10850;
      uStack_1a3a0 = uStack_10858;
      uStack_1a388 = uStack_10840;
      uStack_1a390 = uStack_10848;
      uStack_1a3f8 = uStack_108b0;
      uStack_1a400 = uStack_108b8;
      uStack_1a3e8 = uStack_108a0;
      uStack_1a3f0 = uStack_108a8;
      uStack_1a3d8 = uStack_10890;
      uStack_1a3e0 = uStack_10898;
      uStack_1a3c8 = uStack_10880;
      uStack_1a3d0 = uStack_10888;
      uStack_1a438 = uStack_108f0;
      uStack_1a440 = uStack_108f8;
      uStack_1a428 = uStack_108e0;
      uStack_1a430 = uStack_108e8;
      uStack_1a418 = uStack_108d0;
      uStack_1a420 = uStack_108d8;
      uStack_1a408 = uStack_108c0;
      lStack_1a410 = lStack_108c8;
      ppuStack_1a458 = ppuStack_10910;
      puStack_1a460 = puStack_10918;
      ppuStack_1a448 = ppuStack_10900;
      puStack_1a450 = puStack_10908;
      uStack_1a9d8 = uStack_10930;
      uStack_1a9e0 = uStack_10938;
      func_0x000107c610b4(auStack_1a768,auStack_10c48,0x301);
      uStack_1a798 = uStack_10c70;
      uStack_1a7a0 = uStack_10c78;
      uStack_1a790 = uStack_10c68;
      uStack_1a77f = uStack_10c57;
      uStack_1a7d8 = uStack_10cb0;
      uStack_1a7e0 = uStack_10cb8;
      uStack_1a7c8 = uStack_10ca0;
      uStack_1a7d0 = uStack_10ca8;
      uStack_1a7b8 = uStack_10c90;
      uStack_1a7c0 = uStack_10c98;
      uStack_1a7a8 = uStack_10c80;
      uStack_1a7b0 = uStack_10c88;
      func_0x000107c610b4(auStack_18c48,auStack_11260,0x5a8);
      lVar11 = lStack_10928;
      uVar21 = uStack_10940;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9d8 = uStack_17858;
      uStack_1a9e0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
      uVar21 = uStack_17868;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9d8;
    uStack_18e90 = uStack_1a9e0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_5888,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined8 *)(lVar11 + 0x58) = uVar26;
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar26);
    FUN_1034a81d0(uVar21,auStack_5888,param_1,lVar11);
    if (unaff_x21 != 0) goto code_r0x0001034c4828;
    FUN_1034e457c();
    goto code_r0x0001034c4968;
  case 9:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_e740,param_1,0x1034c672c,9);
      uStack_1a980 = uStack_dcb8;
      uStack_1a9b8 = uStack_dca8;
      uStack_1a9c0 = uStack_dcb0;
      uStack_1a998 = uStack_dcc8;
      lStack_1a9a0 = lStack_dcd0;
      uStack_1a988 = uStack_dc98;
      lStack_1a990 = uStack_dca0;
      uStack_1a378 = uStack_dd08;
      uStack_1a380 = uStack_dd10;
      uStack_1a368 = uStack_dcf8;
      uStack_1a370 = uStack_dd00;
      uStack_1a360 = uStack_dcf0;
      uStack_1a34f = uStack_dcdf;
      uStack_1a3b8 = uStack_dd48;
      uStack_1a3c0 = uStack_dd50;
      uStack_1a3a8 = uStack_dd38;
      uStack_1a3b0 = uStack_dd40;
      uStack_1a398 = uStack_dd28;
      uStack_1a3a0 = uStack_dd30;
      uStack_1a388 = uStack_dd18;
      uStack_1a390 = uStack_dd20;
      uStack_1a3f8 = uStack_dd88;
      uStack_1a400 = uStack_dd90;
      uStack_1a3e8 = uStack_dd78;
      uStack_1a3f0 = uStack_dd80;
      uStack_1a3d8 = uStack_dd68;
      uStack_1a3e0 = uStack_dd70;
      uStack_1a3c8 = uStack_dd58;
      uStack_1a3d0 = uStack_dd60;
      uStack_1a438 = uStack_ddc8;
      uStack_1a440 = uStack_ddd0;
      uStack_1a428 = uStack_ddb8;
      uStack_1a430 = uStack_ddc0;
      uStack_1a418 = uStack_dda8;
      uStack_1a420 = uStack_ddb0;
      uStack_1a408 = uStack_dd98;
      lStack_1a410 = lStack_dda0;
      ppuStack_1a458 = ppuStack_dde8;
      puStack_1a460 = puStack_ddf0;
      ppuStack_1a448 = ppuStack_ddd8;
      puStack_1a450 = puStack_dde0;
      uStack_1a9e8 = uStack_de08;
      lStack_1a9f0 = uStack_de10;
      func_0x000107c610b4(auStack_1a768,auStack_e120,0x301);
      uStack_1a798 = uStack_e148;
      uStack_1a7a0 = uStack_e150;
      uStack_1a790 = uStack_e140;
      uStack_1a77f = uStack_e12f;
      uStack_1a7d8 = uStack_e188;
      uStack_1a7e0 = uStack_e190;
      uStack_1a7c8 = uStack_e178;
      uStack_1a7d0 = uStack_e180;
      uStack_1a7b8 = uStack_e168;
      uStack_1a7c0 = uStack_e170;
      uStack_1a7a8 = uStack_e158;
      uStack_1a7b0 = uStack_e160;
      func_0x000107c610b4(auStack_18c48,auStack_e738,0x5a8);
      lVar11 = lStack_de00;
      uVar21 = uStack_de18;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
      uVar21 = uStack_17868;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_2ce8,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    puVar25 = *(undefined1 **)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined1 **)(lVar11 + 0x58) = puVar25;
    uVar26 = *(undefined8 *)(param_2 + 0x1708);
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(puVar25);
    FUN_10355b720(&uStack_dc88);
    puVar23 = auStack_2ce8;
    FUN_1034b0fc0(uVar26);
    if (unaff_x21 != 0) {
      func_0x00010179528c(auStack_197c0);
      func_0x000107c61574(uVar29);
      func_0x000107c61574(uVar27);
      func_0x000107c6142c(uVar22);
      func_0x000107c61588(lVar11);
      func_0x000107c61574(puVar25);
      func_0x000107c6145c(lVar11,0x60,7);
      func_0x000107c6142c(uStack_dc88);
      func_0x00010006c090(uStack_dc80,uStack_dc78);
      func_0x0001034c73c4(uStack_dc70,uStack_dc68,uStack_dc60);
      break;
    }
    uStack_1a908 = uStack_dc88;
    func_0x0001034c73c4(uStack_dc70,uStack_dc68,uStack_dc60);
    puVar13 = auStack_2ce8;
    FUN_1034a1a20();
    func_0x0001034c7570(&uStack_1a908,0x112f73138,&UNK_10dbce790);
    uStack_2d10 = uStack_dc80;
    uStack_2d08 = uStack_dc78;
    puStack_2d18 = puVar13;
    puStack_2d00 = puVar23;
    ppuStack_2cf8 = param_1;
    uStack_2cf0 = uVar21;
    func_0x0001034c73f0(&puStack_2d18,&puStack_1a340);
    func_0x000107c6142c(puVar13);
    func_0x00010006c090(uStack_dc80,uStack_dc78);
    func_0x0001034c73c4(puVar23,param_1,uVar21);
    func_0x0001034e4670(&puStack_2d18);
    func_0x00010179528c(auStack_197c0);
    func_0x000107c61574(uVar29);
    func_0x000107c61574(uVar27);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
code_r0x0001034c4694:
    func_0x000107c61574(puVar25);
    goto code_r0x0001034c4e5c;
  case 10:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_13358,param_1,0x1034c6668,10);
      uStack_1a980 = uStack_128d0;
      uStack_1a9b8 = uStack_128c0;
      uStack_1a9c0 = uStack_128c8;
      uStack_1a998 = uStack_128e0;
      lStack_1a9a0 = lStack_128e8;
      uStack_1a988 = uStack_128b0;
      lStack_1a990 = uStack_128b8;
      uStack_1a378 = uStack_12920;
      uStack_1a380 = uStack_12928;
      uStack_1a368 = uStack_12910;
      uStack_1a370 = uStack_12918;
      uStack_1a360 = uStack_12908;
      uStack_1a34f = uStack_128f7;
      uStack_1a3b8 = uStack_12960;
      uStack_1a3c0 = uStack_12968;
      uStack_1a3a8 = uStack_12950;
      uStack_1a3b0 = uStack_12958;
      uStack_1a398 = uStack_12940;
      uStack_1a3a0 = uStack_12948;
      uStack_1a388 = uStack_12930;
      uStack_1a390 = uStack_12938;
      uStack_1a3f8 = uStack_129a0;
      uStack_1a400 = uStack_129a8;
      uStack_1a3e8 = uStack_12990;
      uStack_1a3f0 = uStack_12998;
      uStack_1a3d8 = uStack_12980;
      uStack_1a3e0 = uStack_12988;
      uStack_1a3c8 = uStack_12970;
      uStack_1a3d0 = uStack_12978;
      uStack_1a438 = uStack_129e0;
      uStack_1a440 = uStack_129e8;
      uStack_1a428 = uStack_129d0;
      uStack_1a430 = uStack_129d8;
      uStack_1a418 = uStack_129c0;
      uStack_1a420 = uStack_129c8;
      uStack_1a408 = uStack_129b0;
      lStack_1a410 = lStack_129b8;
      ppuStack_1a458 = ppuStack_12a00;
      puStack_1a460 = puStack_12a08;
      ppuStack_1a448 = ppuStack_129f0;
      puStack_1a450 = puStack_129f8;
      uStack_1a9c8 = uStack_12a20;
      uStack_1a9d0 = uStack_12a28;
      func_0x000107c610b4(auStack_1a768,auStack_12d38,0x301);
      uStack_1a798 = uStack_12d60;
      uStack_1a7a0 = uStack_12d68;
      uStack_1a790 = uStack_12d58;
      uStack_1a77f = uStack_12d47;
      uStack_1a7d8 = uStack_12da0;
      uStack_1a7e0 = uStack_12da8;
      uStack_1a7c8 = uStack_12d90;
      uStack_1a7d0 = uStack_12d98;
      uStack_1a7b8 = uStack_12d80;
      uStack_1a7c0 = uStack_12d88;
      uStack_1a7a8 = uStack_12d70;
      uStack_1a7b0 = uStack_12d78;
      func_0x000107c610b4(auStack_18c48,auStack_13350,0x5a8);
      uVar21 = uStack_12a30;
      lVar11 = lStack_12a18;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9c8 = uStack_17858;
      uStack_1a9d0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9c8;
    uStack_18e90 = uStack_1a9d0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_8458,auStack_197c0,0xab2);
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    FUN_1034a3dfc(auStack_133b8,uVar21,auStack_8458,param_1,&uStack_a4a8);
    if (unaff_x21 == 0) {
      func_0x0001034e4758(auStack_133b8);
      goto code_r0x0001034c4a40;
    }
code_r0x0001034c253c:
    func_0x00010179528c(auStack_197c0);
    goto code_r0x0001034c4e6c;
  case 0xd:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_107b0,param_1,0x1034c66d8,0xd);
      lStack_1a990 = uStack_fd28;
      uStack_1a9c8 = uStack_fd18;
      uStack_1a9d0 = uStack_fd20;
      uStack_1a9a8 = uStack_fd38;
      lStack_1a9b0 = lStack_fd40;
      uStack_1a998 = uStack_fd08;
      lStack_1a9a0 = uStack_fd10;
      uStack_1a378 = uStack_fd78;
      uStack_1a380 = uStack_fd80;
      uStack_1a368 = uStack_fd68;
      uStack_1a370 = uStack_fd70;
      uStack_1a360 = uStack_fd60;
      uStack_1a34f = uStack_fd4f;
      uStack_1a3b8 = uStack_fdb8;
      uStack_1a3c0 = uStack_fdc0;
      uStack_1a3a8 = uStack_fda8;
      uStack_1a3b0 = uStack_fdb0;
      uStack_1a398 = uStack_fd98;
      uStack_1a3a0 = uStack_fda0;
      uStack_1a388 = uStack_fd88;
      uStack_1a390 = uStack_fd90;
      uStack_1a3f8 = uStack_fdf8;
      uStack_1a400 = uStack_fe00;
      uStack_1a3e8 = uStack_fde8;
      uStack_1a3f0 = uStack_fdf0;
      uStack_1a3d8 = uStack_fdd8;
      uStack_1a3e0 = uStack_fde0;
      uStack_1a3c8 = uStack_fdc8;
      uStack_1a3d0 = uStack_fdd0;
      uStack_1a438 = uStack_fe38;
      uStack_1a440 = uStack_fe40;
      uStack_1a428 = uStack_fe28;
      uStack_1a430 = uStack_fe30;
      uStack_1a418 = uStack_fe18;
      uStack_1a420 = uStack_fe20;
      uStack_1a408 = uStack_fe08;
      lStack_1a410 = lStack_fe10;
      ppuStack_1a458 = ppuStack_fe58;
      puStack_1a460 = puStack_fe60;
      ppuStack_1a448 = ppuStack_fe48;
      puStack_1a450 = puStack_fe50;
      uStack_1a9e8 = uStack_fe78;
      lStack_1a9f0 = uStack_fe80;
      func_0x000107c610b4(auStack_1a768,auStack_10190,0x301);
      uStack_1a798 = uStack_101b8;
      uStack_1a7a0 = uStack_101c0;
      uStack_1a790 = uStack_101b0;
      uStack_1a77f = uStack_1019f;
      uStack_1a7d8 = uStack_101f8;
      uStack_1a7e0 = uStack_10200;
      uStack_1a7c8 = uStack_101e8;
      uStack_1a7d0 = uStack_101f0;
      uStack_1a7b8 = uStack_101d8;
      uStack_1a7c0 = uStack_101e0;
      uStack_1a7a8 = uStack_101c8;
      uStack_1a7b0 = uStack_101d0;
      func_0x000107c610b4(auStack_18c48,auStack_107a8,0x5a8);
      uVar21 = uStack_fe88;
      lVar11 = lStack_fe70;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      lStack_1a990 = uStack_17708;
      uStack_1a9c8 = uStack_176f8;
      uStack_1a9d0 = uStack_17700;
      uStack_1a9a8 = uStack_17718;
      lStack_1a9b0 = lStack_17720;
      uStack_1a998 = uStack_176e8;
      lStack_1a9a0 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
      bStack_fe68 = bStack_17848;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a9a8;
    lStack_18d50 = lStack_1a9b0;
    uStack_18d38 = lStack_1a990;
    uStack_18d28 = uStack_1a9c8;
    uStack_18d30 = uStack_1a9d0;
    uStack_18d18 = uStack_1a998;
    uStack_18d20 = lStack_1a9a0;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_4d88,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    puVar25 = *(undefined1 **)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined1 **)(lVar11 + 0x58) = puVar25;
    uVar26 = *(undefined8 *)(param_2 + 0x1708);
    ppuStack_1a898 = (undefined1 **)0xc000000000000000;
    puStack_1a8a0 = (undefined1 *)0x0;
    puStack_1a890 = (undefined1 *)0x0;
    ppuStack_1a888 = (undefined1 **)0x0;
    uStack_1a880 = 0;
    uStack_1a878 = 2;
    uStack_1a868 = 0;
    uStack_1a870 = 0;
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(puVar25);
    puVar23 = auStack_4d88;
    FUN_1034b0fc0(uVar26);
    if (unaff_x21 == 0) {
      func_0x0001034c73c4(0,0,0);
      puStack_1a890 = puVar23;
      ppuStack_1a888 = param_1;
      uStack_1a880 = uVar21;
      func_0x000101556278(2,0,0);
      uStack_1a868 = 0xc000000000000000;
      uStack_1a870 = 0;
      ppuStack_4dc8 = ppuStack_1a898;
      puStack_4dd0 = puStack_1a8a0;
      ppuStack_4db8 = ppuStack_1a888;
      puStack_4dc0 = puStack_1a890;
      uStack_4db0 = uStack_1a880;
      uStack_4d98 = 0xc000000000000000;
      uStack_4da0 = 0;
      uStack_1a878 = (ulong)bStack_fe68 & 1;
      uStack_4da8 = (ulong)bStack_fe68 & 1;
      func_0x0001034e4764(&puStack_4dd0);
code_r0x0001034c4664:
      func_0x00010179528c(auStack_197c0);
      func_0x000107c61574(uVar29);
      func_0x000107c61574(uVar27);
      func_0x000107c6142c(uVar22);
      func_0x000107c61588(lVar11);
      goto code_r0x0001034c4694;
    }
    func_0x000107c61574(uVar29);
    func_0x000107c61574(uVar27);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
    func_0x000107c61574(puVar25);
    func_0x000107c6145c(lVar11,0x60,7);
    func_0x00010179528c(auStack_197c0);
    func_0x0001034c7460(&puStack_1a8a0);
    goto code_r0x0001034c4e6c;
  case 0xe:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_fcf8,param_1,0x1034c66f4,0xe);
      lStack_1a990 = uStack_f270;
      uStack_1a9c8 = uStack_f260;
      uStack_1a9d0 = uStack_f268;
      uStack_1a9a8 = uStack_f280;
      lStack_1a9b0 = lStack_f288;
      uStack_1a998 = uStack_f250;
      lStack_1a9a0 = uStack_f258;
      uStack_1a378 = uStack_f2c0;
      uStack_1a380 = uStack_f2c8;
      uStack_1a368 = uStack_f2b0;
      uStack_1a370 = uStack_f2b8;
      uStack_1a360 = uStack_f2a8;
      uStack_1a34f = uStack_f297;
      uStack_1a3b8 = uStack_f300;
      uStack_1a3c0 = uStack_f308;
      uStack_1a3a8 = uStack_f2f0;
      uStack_1a3b0 = uStack_f2f8;
      uStack_1a398 = uStack_f2e0;
      uStack_1a3a0 = uStack_f2e8;
      uStack_1a388 = uStack_f2d0;
      uStack_1a390 = uStack_f2d8;
      uStack_1a3f8 = uStack_f340;
      uStack_1a400 = uStack_f348;
      uStack_1a3e8 = uStack_f330;
      uStack_1a3f0 = uStack_f338;
      uStack_1a3d8 = uStack_f320;
      uStack_1a3e0 = uStack_f328;
      uStack_1a3c8 = uStack_f310;
      uStack_1a3d0 = uStack_f318;
      uStack_1a438 = uStack_f380;
      uStack_1a440 = uStack_f388;
      uStack_1a428 = uStack_f370;
      uStack_1a430 = uStack_f378;
      uStack_1a418 = uStack_f360;
      uStack_1a420 = uStack_f368;
      uStack_1a408 = uStack_f350;
      lStack_1a410 = lStack_f358;
      ppuStack_1a458 = ppuStack_f3a0;
      puStack_1a460 = puStack_f3a8;
      ppuStack_1a448 = ppuStack_f390;
      puStack_1a450 = puStack_f398;
      uStack_1a9e8 = uStack_f3c0;
      lStack_1a9f0 = uStack_f3c8;
      func_0x000107c610b4(auStack_1a768,auStack_f6d8,0x301);
      uStack_1a798 = uStack_f700;
      uStack_1a7a0 = uStack_f708;
      uStack_1a790 = uStack_f6f8;
      uStack_1a77f = uStack_f6e7;
      uStack_1a7d8 = uStack_f740;
      uStack_1a7e0 = uStack_f748;
      uStack_1a7c8 = uStack_f730;
      uStack_1a7d0 = uStack_f738;
      uStack_1a7b8 = uStack_f720;
      uStack_1a7c0 = uStack_f728;
      uStack_1a7a8 = uStack_f710;
      uStack_1a7b0 = uStack_f718;
      func_0x000107c610b4(auStack_18c48,auStack_fcf0,0x5a8);
      uVar21 = uStack_f3d0;
      lVar11 = lStack_f3b8;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      lStack_1a990 = uStack_17708;
      uStack_1a9c8 = uStack_176f8;
      uStack_1a9d0 = uStack_17700;
      uStack_1a9a8 = uStack_17718;
      lStack_1a9b0 = lStack_17720;
      uStack_1a998 = uStack_176e8;
      lStack_1a9a0 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
      bStack_f3af = bStack_17847;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a9a8;
    lStack_18d50 = lStack_1a9b0;
    uStack_18d38 = lStack_1a990;
    uStack_18d28 = uStack_1a9c8;
    uStack_18d30 = uStack_1a9d0;
    uStack_18d18 = uStack_1a998;
    uStack_18d20 = lStack_1a9a0;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_4288,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    puVar25 = *(undefined1 **)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined1 **)(lVar11 + 0x58) = puVar25;
    uVar26 = *(undefined8 *)(param_2 + 0x1708);
    ppuStack_1a898 = (undefined1 **)0xc000000000000000;
    puStack_1a8a0 = (undefined1 *)0x0;
    puStack_1a890 = (undefined1 *)0x0;
    ppuStack_1a888 = (undefined1 **)0x0;
    uStack_1a880 = 0;
    uStack_1a878 = 2;
    uStack_1a868 = 0;
    uStack_1a870 = 0;
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(puVar25);
    puVar23 = auStack_4288;
    FUN_1034b0fc0(uVar26);
    if (unaff_x21 == 0) {
      func_0x0001034c73c4(0,0,0);
      puStack_1a890 = puVar23;
      ppuStack_1a888 = param_1;
      uStack_1a880 = uVar21;
      func_0x000101556278(2,0,0);
      uStack_1a868 = 0xc000000000000000;
      uStack_1a870 = 0;
      ppuStack_42c8 = ppuStack_1a898;
      puStack_42d0 = puStack_1a8a0;
      ppuStack_42b8 = ppuStack_1a888;
      puStack_42c0 = puStack_1a890;
      uStack_42b0 = uStack_1a880;
      uStack_4298 = 0xc000000000000000;
      uStack_42a0 = 0;
      uStack_1a878 = (ulong)bStack_f3af & 1;
      uStack_42a8 = (ulong)bStack_f3af & 1;
      func_0x0001034e4770(&puStack_42d0);
      goto code_r0x0001034c4664;
    }
    func_0x000107c61574(uVar29);
    func_0x000107c61574(uVar27);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
    func_0x000107c61574(puVar25);
    func_0x000107c6145c(lVar11,0x60,7);
    func_0x00010179528c(auStack_197c0);
    func_0x0001034c742c(&puStack_1a8a0);
    goto code_r0x0001034c4e6c;
  case 0xf:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_f240,param_1,0x1034c6710,0xf);
      uStack_1a980 = uStack_e7b8;
      uStack_1a9b8 = uStack_e7a8;
      uStack_1a9c0 = uStack_e7b0;
      uStack_1a998 = uStack_e7c8;
      lStack_1a9a0 = lStack_e7d0;
      uStack_1a988 = uStack_e798;
      lStack_1a990 = uStack_e7a0;
      uStack_1a378 = uStack_e808;
      uStack_1a380 = uStack_e810;
      uStack_1a368 = uStack_e7f8;
      uStack_1a370 = uStack_e800;
      uStack_1a360 = uStack_e7f0;
      uStack_1a34f = uStack_e7df;
      uStack_1a3b8 = uStack_e848;
      uStack_1a3c0 = uStack_e850;
      uStack_1a3a8 = uStack_e838;
      uStack_1a3b0 = uStack_e840;
      uStack_1a398 = uStack_e828;
      uStack_1a3a0 = uStack_e830;
      uStack_1a388 = uStack_e818;
      uStack_1a390 = uStack_e820;
      uStack_1a3f8 = uStack_e888;
      uStack_1a400 = uStack_e890;
      uStack_1a3e8 = uStack_e878;
      uStack_1a3f0 = uStack_e880;
      uStack_1a3d8 = uStack_e868;
      uStack_1a3e0 = uStack_e870;
      uStack_1a3c8 = uStack_e858;
      uStack_1a3d0 = uStack_e860;
      uStack_1a438 = uStack_e8c8;
      uStack_1a440 = uStack_e8d0;
      uStack_1a428 = uStack_e8b8;
      uStack_1a430 = uStack_e8c0;
      uStack_1a418 = uStack_e8a8;
      uStack_1a420 = uStack_e8b0;
      uStack_1a408 = uStack_e898;
      lStack_1a410 = lStack_e8a0;
      ppuStack_1a458 = ppuStack_e8e8;
      puStack_1a460 = puStack_e8f0;
      ppuStack_1a448 = ppuStack_e8d8;
      puStack_1a450 = puStack_e8e0;
      uStack_1a9e8 = uStack_e908;
      lStack_1a9f0 = uStack_e910;
      func_0x000107c610b4(auStack_1a768,auStack_ec20,0x301);
      uStack_1a798 = uStack_ec48;
      uStack_1a7a0 = uStack_ec50;
      uStack_1a790 = uStack_ec40;
      uStack_1a77f = uStack_ec2f;
      uStack_1a7d8 = uStack_ec88;
      uStack_1a7e0 = uStack_ec90;
      uStack_1a7c8 = uStack_ec78;
      uStack_1a7d0 = uStack_ec80;
      uStack_1a7b8 = uStack_ec68;
      uStack_1a7c0 = uStack_ec70;
      uStack_1a7a8 = uStack_ec58;
      uStack_1a7b0 = uStack_ec60;
      func_0x000107c610b4(auStack_18c48,auStack_f238,0x5a8);
      uVar21 = uStack_e918;
      lVar11 = lStack_e900;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_37d0,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar29;
    *(undefined8 *)(lVar11 + 0x50) = uVar26;
    *(undefined8 *)(lVar11 + 0x58) = uVar27;
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar26);
    func_0x000107c6157c(uVar27);
    FUN_10349f07c(auStack_e788,uVar21,auStack_37d0,param_1,lVar11);
    if (unaff_x21 != 0) goto code_r0x0001034c4828;
    func_0x0001034e4874(auStack_e788);
code_r0x0001034c4968:
    func_0x00010179528c(auStack_197c0);
    func_0x000107c61588(lVar11);
    func_0x000107c6142c(*(undefined8 *)(lVar11 + 0x18));
    func_0x000107c61574(*(undefined8 *)(lVar11 + 0x48));
    func_0x000107c61574(*(undefined8 *)(lVar11 + 0x50));
    uVar27 = *(undefined8 *)(lVar11 + 0x58);
code_r0x0001034c4e54:
    func_0x000107c61574(uVar27);
code_r0x0001034c4e5c:
    func_0x000107c6145c(lVar11,0x60,7);
    break;
  case 0x10:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_dc58,param_1,FUN_1034c6c58,0x10);
      uStack_1a980 = uStack_d1d0;
      uStack_1a9b8 = uStack_d1c0;
      uStack_1a9c0 = uStack_d1c8;
      uStack_1a998 = uStack_d1e0;
      lStack_1a9a0 = lStack_d1e8;
      uStack_1a988 = uStack_d1b0;
      lStack_1a990 = uStack_d1b8;
      uStack_1a378 = uStack_d220;
      uStack_1a380 = uStack_d228;
      uStack_1a368 = uStack_d210;
      uStack_1a370 = uStack_d218;
      uStack_1a360 = uStack_d208;
      uStack_1a34f = uStack_d1f7;
      uStack_1a3b8 = uStack_d260;
      uStack_1a3c0 = uStack_d268;
      uStack_1a3a8 = uStack_d250;
      uStack_1a3b0 = uStack_d258;
      uStack_1a398 = uStack_d240;
      uStack_1a3a0 = uStack_d248;
      uStack_1a388 = uStack_d230;
      uStack_1a390 = uStack_d238;
      uStack_1a3f8 = uStack_d2a0;
      uStack_1a400 = uStack_d2a8;
      uStack_1a3e8 = uStack_d290;
      uStack_1a3f0 = uStack_d298;
      uStack_1a3d8 = uStack_d280;
      uStack_1a3e0 = uStack_d288;
      uStack_1a3c8 = uStack_d270;
      uStack_1a3d0 = uStack_d278;
      uStack_1a438 = uStack_d2e0;
      uStack_1a440 = uStack_d2e8;
      uStack_1a428 = uStack_d2d0;
      uStack_1a430 = uStack_d2d8;
      uStack_1a418 = uStack_d2c0;
      uStack_1a420 = uStack_d2c8;
      uStack_1a408 = uStack_d2b0;
      lStack_1a410 = lStack_d2b8;
      ppuStack_1a458 = ppuStack_d300;
      puStack_1a460 = puStack_d308;
      ppuStack_1a448 = ppuStack_d2f0;
      puStack_1a450 = puStack_d2f8;
      uStack_1a9e8 = uStack_d320;
      lStack_1a9f0 = uStack_d328;
      func_0x000107c610b4(auStack_1a768,auStack_d638,0x301);
      uStack_1a798 = uStack_d660;
      uStack_1a7a0 = uStack_d668;
      uStack_1a790 = uStack_d658;
      uStack_1a77f = uStack_d647;
      uStack_1a7d8 = uStack_d6a0;
      uStack_1a7e0 = uStack_d6a8;
      uStack_1a7c8 = uStack_d690;
      uStack_1a7d0 = uStack_d698;
      uStack_1a7b8 = uStack_d680;
      uStack_1a7c0 = uStack_d688;
      uStack_1a7a8 = uStack_d670;
      uStack_1a7b0 = uStack_d678;
      func_0x000107c610b4(auStack_18c48,auStack_dc50,0x5a8);
      lVar11 = lStack_d318;
      uVar21 = uStack_d330;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
      uVar21 = uStack_17868;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_2188,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar29;
    *(undefined8 *)(lVar11 + 0x50) = uVar26;
    *(undefined8 *)(lVar11 + 0x58) = uVar27;
    uVar30 = *(undefined8 *)(param_2 + 0x1708);
    uStack_1a838 = 0xc000000000000000;
    uStack_1a840 = 0;
    ppuStack_1a828 = (undefined1 **)0x0;
    puStack_1a830 = (undefined1 *)0x0;
    ppuStack_1a818 = (undefined1 **)0x0;
    uStack_1a820 = 0;
    uStack_1a808 = 0;
    ppuStack_1a810 = (undefined1 **)0x0;
    uStack_1a7f8 = 0;
    lStack_1a800 = 0;
    uStack_1a7f0 = 0;
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar26);
    func_0x000107c6157c(uVar27);
    puVar23 = auStack_2188;
    FUN_1034b0fc0(uVar30);
    if (unaff_x21 != 0) {
      func_0x000107c61574(uVar26);
      func_0x000107c61574(uVar29);
      func_0x000107c6142c(uVar22);
      func_0x000107c61588(lVar11);
      func_0x000107c61574(uVar27);
      func_0x000107c6145c(lVar11,0x60,7);
      func_0x00010179528c(auStack_197c0);
      FUN_1034c7350(&uStack_1a840);
      break;
    }
    uVar30 = 0;
    func_0x0001034c73c4(0,0);
    uStack_1a318 = uStack_1a438;
    uStack_1a320 = uStack_1a440;
    uStack_1a308 = uStack_1a428;
    uStack_1a310 = uStack_1a430;
    uStack_1a2f8 = uStack_1a418;
    uStack_1a300 = uStack_1a420;
    uStack_1a2e8 = uStack_1a408;
    lStack_1a2f0 = lStack_1a410;
    ppuStack_1a338 = ppuStack_1a458;
    puStack_1a340 = puStack_1a460;
    ppuStack_1a328 = ppuStack_1a448;
    puStack_1a330 = puStack_1a450;
    puStack_1a830 = puVar23;
    ppuStack_1a828 = param_1;
    uStack_1a820 = uVar21;
    if (puStack_1a460 != (undefined1 *)0x1) {
      if (puStack_1a460 == (undefined1 *)0x0) {
code_r0x0001034c4a88:
        uStack_1a848 = uStack_1a408;
        lStack_1a850 = lStack_1a410;
        uStack_1a858 = uStack_1a418;
        uStack_1a860 = uStack_1a420;
        uStack_1a868 = uStack_1a428;
        uStack_1a870 = uStack_1a430;
        ppuStack_1a898 = ppuStack_1a458;
        puStack_1a8a0 = puStack_1a460;
        ppuStack_1a888 = ppuStack_1a448;
        puStack_1a890 = puStack_1a450;
        uStack_1a878 = uStack_1a438;
        uStack_1a880 = uStack_1a440;
        func_0x00010178e15c(&puStack_1a8a0,&lStack_1a900);
      }
      else {
        puStack_21d8 = puStack_1a460;
        uStack_21b8 = uStack_1a440;
        ppuStack_21c0 = ppuStack_1a448;
        uStack_21a8 = uStack_1a430;
        uStack_21b0 = uStack_1a438;
        uStack_2198 = uStack_1a420;
        uStack_21a0 = uStack_1a428;
        uStack_2190 = uStack_1a418;
        puStack_21c8 = puStack_1a450;
        ppuStack_21d0 = ppuStack_1a458;
        if (*(long *)(puStack_1a460 + 0x10) == 0) goto code_r0x0001034c4a88;
        FUN_1034c7528(&puStack_1a460,&puStack_1a8a0,0x112dcbc38,&UNK_10d98e290);
        uVar21 = 0x112dcc710;
        ppuVar17 = &puStack_1a8a0;
        FUN_1034c7528(&puStack_1a340,ppuVar17,0x112dcc710,&UNK_10d98f0e0);
        ppuVar14 = &puStack_21d8;
        FUN_1034aa7ac();
        func_0x0001034c7570(&puStack_1a340,0x112dcc710,&UNK_10d98f0e0);
        uVar30 = 0;
        func_0x0001034c73c4(0,0);
        ppuStack_1a818 = ppuVar14;
        ppuStack_1a810 = ppuVar17;
        uStack_1a808 = uVar21;
      }
      uVar7 = uStack_1a2e8;
      lVar10 = lStack_1a2f0;
      if (uStack_1a2e8 >> 0x3c < 0xf) {
        uStack_1a880 = 0;
        ppuStack_1a888 = (undefined1 **)0x0;
        puStack_1a890 = (undefined1 *)0x0;
        ppuStack_1a898 = (undefined1 **)0x0;
        puStack_1a8a0 = (undefined1 *)0x0;
        lVar15 = lStack_1a2f0;
        uVar18 = uStack_1a2e8;
        func_0x00010006c00c();
        func_0x000103526418();
        uVar5 = (uint)(uVar7 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        lStack_1a900 = lVar15;
        uStack_1a8f8 = uVar18;
        uStack_1a8f0 = uVar30;
        if (uVar5 >> 0x1e < 2) {
          if (uVar20 == 0) {
            auStack_1a918[0] = (undefined1)lVar10;
            auStack_1a918[1] = (undefined1)((ulong)lVar10 >> 8);
            auStack_1a918[2] = (undefined1)((ulong)lVar10 >> 0x10);
            auStack_1a918[3] = (undefined1)((ulong)lVar10 >> 0x18);
            auStack_1a918[4] = (undefined1)((ulong)lVar10 >> 0x20);
            auStack_1a918[5] = (undefined1)((ulong)lVar10 >> 0x28);
            auStack_1a918[6] = (undefined1)((ulong)lVar10 >> 0x30);
            auStack_1a918[7] = (undefined1)((ulong)lVar10 >> 0x38);
            auStack_1a918[8] = (undefined1)uVar7;
            auStack_1a918[9] = (undefined1)(uVar7 >> 8);
            auStack_1a918[10] = (undefined1)(uVar7 >> 0x10);
            auStack_1a918[0xb] = (undefined1)(uVar7 >> 0x18);
            auStack_1a918[0xc] = (undefined1)(uVar7 >> 0x20);
            auStack_1a918[0xd] = (undefined1)(uVar7 >> 0x28);
            puVar23 = auStack_1a918 + (uVar7 >> 0x30 & 0xff);
            FUN_1034c7384();
            puVar13 = auStack_1a918;
          }
          else {
            lVar28 = (long)(int)lVar10;
            lVar24 = (lVar10 >> 0x20) - lVar28;
            if (lVar10 >> 0x20 < lVar28) goto code_r0x0001034c4eb0;
            func_0x000107c5ec30();
            if (lVar15 == 0) {
              func_0x000107c5ec38();
              puVar13 = (undefined1 *)0x0;
code_r0x0001034c4c88:
              puVar23 = (undefined1 *)0x0;
            }
            else {
              lVar16 = lVar15;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar28,lVar16)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1034c4ec0);
                (*pcVar8)();
              }
              puVar13 = (undefined1 *)((lVar28 - lVar16) + lVar15);
              func_0x000107c5ec38();
              lVar15 = lVar16;
              if (puVar13 == (undefined1 *)0x0) goto code_r0x0001034c4c88;
              if (lVar24 <= lVar16) {
                lVar16 = lVar24;
              }
              puVar23 = puVar13 + lVar16;
            }
            FUN_1034c7384();
          }
code_r0x0001034c4cac:
          func_0x00010006ae80(puVar13,puVar23,&puStack_1a8a0,0,100,0,&UNK_1106613a0,lVar15);
        }
        else {
          if (uVar20 != 2) {
            FUN_1034c7384();
            auStack_1a918[0] = 0;
            auStack_1a918[1] = 0;
            auStack_1a918[2] = 0;
            auStack_1a918[3] = 0;
            auStack_1a918[4] = 0;
            auStack_1a918[5] = 0;
            auStack_1a918[6] = 0;
            auStack_1a918[7] = 0;
            auStack_1a918[8] = 0;
            auStack_1a918[9] = 0;
            auStack_1a918[10] = 0;
            auStack_1a918[0xb] = 0;
            auStack_1a918[0xc] = 0;
            auStack_1a918[0xd] = 0;
            puVar13 = auStack_1a918;
            puVar23 = auStack_1a918;
            goto code_r0x0001034c4cac;
          }
          lVar24 = *(long *)(lVar10 + 0x10);
          lVar28 = *(long *)(lVar10 + 0x18);
          func_0x000107c5ec30();
          lVar16 = lVar15;
          if (lVar15 != 0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,lVar16)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1034c4ebc);
              (*pcVar8)();
            }
            lVar15 = (lVar24 - lVar16) + lVar15;
          }
          lVar4 = lVar28 - lVar24;
          if (SBORROW8(lVar28,lVar24)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1034c4eb8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          if (lVar15 == 0) {
            lVar24 = 0;
          }
          else {
            lVar24 = lVar16;
            if (lVar4 <= lVar16) {
              lVar24 = lVar4;
            }
            lVar24 = lVar24 + lVar15;
          }
          FUN_1034c7384();
          func_0x00010006ae80(lVar15,lVar24,&puStack_1a8a0,0,100,0,&UNK_1106613a0,lVar16);
        }
        func_0x0001034c7570(&puStack_1a460,0x112dcbc38,&UNK_10d98e290);
        func_0x0001000b44c0(lVar10,uVar7);
        func_0x0001034c7570(&puStack_1a8a0,0x112d49548,&UNK_10d90fde0);
        uVar21 = uStack_1a8f0;
        uVar7 = uStack_1a8f8;
        lVar10 = lStack_1a900;
        func_0x0001034c73c4(0,0,0);
        uStack_1a7f0 = uVar21;
        uStack_1a7f8 = uVar7;
        lStack_1a800 = lVar10;
      }
      else {
        func_0x0001034c7570(&puStack_1a460,0x112dcbc38,&UNK_10d98e290);
      }
    }
    ppuStack_2208 = ppuStack_1a818;
    uStack_2210 = uStack_1a820;
    uStack_21f8 = uStack_1a808;
    ppuStack_2200 = ppuStack_1a810;
    uStack_21e8 = uStack_1a7f8;
    lStack_21f0 = lStack_1a800;
    uStack_21e0 = uStack_1a7f0;
    uStack_2228 = uStack_1a838;
    uStack_2230 = uStack_1a840;
    ppuStack_2218 = ppuStack_1a828;
    puStack_2220 = puStack_1a830;
    FUN_1034e4954(&uStack_2230);
    func_0x00010179528c(auStack_197c0);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar29);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
    goto code_r0x0001034c4e54;
  case 0x11:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_13e70,param_1,0x1034c664c,0x11);
      uStack_1a980 = uStack_133e8;
      uStack_1a9b8 = uStack_133d8;
      uStack_1a9c0 = uStack_133e0;
      uStack_1a998 = uStack_133f8;
      lStack_1a9a0 = lStack_13400;
      uStack_1a988 = uStack_133c8;
      lStack_1a990 = uStack_133d0;
      uStack_1a378 = uStack_13438;
      uStack_1a380 = uStack_13440;
      uStack_1a368 = uStack_13428;
      uStack_1a370 = uStack_13430;
      uStack_1a360 = uStack_13420;
      uStack_1a34f = uStack_1340f;
      uStack_1a3b8 = uStack_13478;
      uStack_1a3c0 = uStack_13480;
      uStack_1a3a8 = uStack_13468;
      uStack_1a3b0 = uStack_13470;
      uStack_1a398 = uStack_13458;
      uStack_1a3a0 = uStack_13460;
      uStack_1a388 = uStack_13448;
      uStack_1a390 = uStack_13450;
      uStack_1a3f8 = uStack_134b8;
      uStack_1a400 = uStack_134c0;
      uStack_1a3e8 = uStack_134a8;
      uStack_1a3f0 = uStack_134b0;
      uStack_1a3d8 = uStack_13498;
      uStack_1a3e0 = uStack_134a0;
      uStack_1a3c8 = uStack_13488;
      uStack_1a3d0 = uStack_13490;
      uStack_1a438 = uStack_134f8;
      uStack_1a440 = uStack_13500;
      uStack_1a428 = uStack_134e8;
      uStack_1a430 = uStack_134f0;
      uStack_1a418 = uStack_134d8;
      uStack_1a420 = uStack_134e0;
      uStack_1a408 = uStack_134c8;
      lStack_1a410 = lStack_134d0;
      ppuStack_1a458 = ppuStack_13518;
      puStack_1a460 = puStack_13520;
      ppuStack_1a448 = ppuStack_13508;
      puStack_1a450 = puStack_13510;
      uStack_1a9c8 = uStack_13538;
      uStack_1a9d0 = uStack_13540;
      func_0x000107c610b4(auStack_1a768,auStack_13850,0x301);
      uStack_1a798 = uStack_13878;
      uStack_1a7a0 = uStack_13880;
      uStack_1a790 = uStack_13870;
      uStack_1a77f = uStack_1385f;
      uStack_1a7d8 = uStack_138b8;
      uStack_1a7e0 = uStack_138c0;
      uStack_1a7c8 = uStack_138a8;
      uStack_1a7d0 = uStack_138b0;
      uStack_1a7b8 = uStack_13898;
      uStack_1a7c0 = uStack_138a0;
      uStack_1a7a8 = uStack_13888;
      uStack_1a7b0 = uStack_13890;
      func_0x000107c610b4(auStack_18c48,auStack_13e68,0x5a8);
      uVar21 = uStack_13548;
      lVar11 = lStack_13530;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9c8 = uStack_17858;
      uStack_1a9d0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9c8;
    uStack_18e90 = uStack_1a9d0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_8f10,auStack_197c0,0xab2);
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    FUN_1034ae80c(auStack_13f30,uVar21,auStack_8f10,param_1,&uStack_a4a8);
    if (unaff_x21 != 0) goto code_r0x0001034c253c;
    puVar23 = auStack_13f30;
code_r0x0001034c227c:
    FUN_1034e477c(puVar23);
    goto code_r0x0001034c4a40;
  case 0x12:
    FUN_1034e4960(0,0xc000000000000000);
    break;
  case 0x13:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_16b30,param_1,0x1034c65dc,0x13);
      lStack_1a990 = uStack_160a8;
      uStack_1a9a8 = uStack_16098;
      lStack_1a9b0 = uStack_160a0;
      uStack_1a998 = uStack_16088;
      lStack_1a9a0 = uStack_16090;
      uStack_1a378 = uStack_160f8;
      uStack_1a380 = uStack_16100;
      uStack_1a368 = uStack_160e8;
      uStack_1a370 = uStack_160f0;
      uStack_1a360 = uStack_160e0;
      uStack_1a34f = uStack_160cf;
      uStack_1a3b8 = uStack_16138;
      uStack_1a3c0 = uStack_16140;
      uStack_1a3a8 = uStack_16128;
      uStack_1a3b0 = uStack_16130;
      uStack_1a398 = uStack_16118;
      uStack_1a3a0 = uStack_16120;
      uStack_1a388 = uStack_16108;
      uStack_1a390 = uStack_16110;
      uStack_1a3f8 = uStack_16178;
      uStack_1a400 = uStack_16180;
      uStack_1a3e8 = uStack_16168;
      uStack_1a3f0 = uStack_16170;
      uStack_1a3d8 = uStack_16158;
      uStack_1a3e0 = uStack_16160;
      uStack_1a3c8 = uStack_16148;
      uStack_1a3d0 = uStack_16150;
      uStack_1a438 = uStack_161b8;
      uStack_1a440 = uStack_161c0;
      uStack_1a428 = uStack_161a8;
      uStack_1a430 = uStack_161b0;
      uStack_1a418 = uStack_16198;
      uStack_1a420 = uStack_161a0;
      uStack_1a408 = uStack_16188;
      lStack_1a410 = lStack_16190;
      ppuStack_1a458 = ppuStack_161d8;
      puStack_1a460 = puStack_161e0;
      ppuStack_1a448 = ppuStack_161c8;
      puStack_1a450 = puStack_161d0;
      lStack_1a9f0 = lStack_161f0;
      uStack_1a9e0 = uStack_16208;
      uStack_1a9f8 = uStack_161f8;
      uStack_1aa00 = uStack_16200;
      func_0x000107c610b4(auStack_1a768,auStack_16510,0x301);
      uStack_1a798 = uStack_16538;
      uStack_1a7a0 = uStack_16540;
      uStack_1a790 = uStack_16530;
      uStack_1a77f = uStack_1651f;
      uStack_1a7d8 = uStack_16578;
      uStack_1a7e0 = uStack_16580;
      uStack_1a7c8 = uStack_16568;
      uStack_1a7d0 = uStack_16570;
      uStack_1a7b8 = uStack_16558;
      uStack_1a7c0 = uStack_16560;
      uStack_1a7a8 = uStack_16548;
      uStack_1a7b0 = uStack_16550;
      func_0x000107c610b4(auStack_18c48,auStack_16b28,0x5a8);
      uVar21 = uStack_160b8;
      lVar11 = lStack_160c0;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e0 = uStack_17868;
      uStack_1a9f8 = uStack_17858;
      uStack_1aa00 = uStack_17860;
      lStack_1a9f0 = lStack_17850;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      lStack_1a990 = uStack_17708;
      uStack_1a9a8 = uStack_176f8;
      lStack_1a9b0 = uStack_17700;
      uStack_1a998 = uStack_176e8;
      lStack_1a9a0 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17718;
      lVar11 = lStack_17720;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9f8;
    uStack_18e90 = uStack_1aa00;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e98 = uStack_1a9e0;
    lStack_18e80 = lStack_1a9f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d38 = lStack_1a990;
    uStack_18d28 = uStack_1a9a8;
    uStack_18d30 = lStack_1a9b0;
    uStack_18d18 = uStack_1a998;
    uStack_18d20 = lStack_1a9a0;
    lStack_18d50 = lVar11;
    uStack_18d48 = uVar21;
    func_0x000107c610b4(auStack_ba18,auStack_197c0,0xab2);
    uVar27 = *(undefined8 *)(param_2 + 0x1708);
    lVar10 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar10 + 0x90);
    uVar22 = *(undefined8 *)(lVar10 + 0x98);
    func_0x000101682c20();
    if ((int)lVar10 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    lVar10 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x10) = uVar21;
    *(undefined8 *)(lVar10 + 0x18) = uVar22;
    *(long *)(lVar10 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar10 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar10 + 0x38) = uStack_a490;
    *(ulong *)(lVar10 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar10 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar10 + 0x48) = uVar26;
    *(undefined8 *)(lVar10 + 0x50) = uVar30;
    *(undefined8 *)(lVar10 + 0x58) = uVar29;
    ppuStack_1a898 = (undefined1 **)0xc000000000000000;
    puStack_1a8a0 = (undefined1 *)0x0;
    ppuStack_1a888 = (undefined1 **)0x0;
    puStack_1a890 = (undefined1 *)0x0;
    uStack_1a878 = 0;
    uStack_1a880 = 0;
    uStack_1a868 = 0;
    uStack_1a870 = 0;
    uStack_1a858 = 0;
    uStack_1a860 = 0;
    lStack_1a850 = 0;
    uVar21 = 0x112dcbc88;
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar26);
    func_0x000107c6157c(uVar30);
    func_0x000107c6157c(uVar29);
    puVar23 = auStack_ba18;
    FUN_1034b0fc0(uVar27);
    if (unaff_x21 == 0) {
      func_0x0001034c73c4(0,0,0);
      puStack_1a890 = puVar23;
      ppuStack_1a888 = param_1;
      uStack_1a880 = uVar21;
      if ((lVar11 == 0) || (lVar11 == 1)) {
        func_0x000107c61574(lVar10);
      }
      else {
        func_0x000107c61434();
        FUN_1034c8360(&uStack_16b60);
        func_0x000107c61574(lVar10);
        FUN_1034c74c8(0,0,0,0,0,0);
        uStack_1a868 = uStack_16b50;
        uStack_1a870 = uStack_16b58;
        uStack_1a858 = uStack_16b40;
        uStack_1a860 = uStack_16b48;
        uStack_1a878 = uStack_16b60;
        lStack_1a850 = lStack_16b38;
      }
      uStack_ba48 = uStack_1a878;
      uStack_ba50 = uStack_1a880;
      uStack_ba38 = uStack_1a868;
      uStack_ba40 = uStack_1a870;
      uStack_ba28 = uStack_1a858;
      uStack_ba30 = uStack_1a860;
      lStack_ba20 = lStack_1a850;
      ppuStack_ba68 = ppuStack_1a898;
      puStack_ba70 = puStack_1a8a0;
      ppuStack_ba58 = ppuStack_1a888;
      puStack_ba60 = puStack_1a890;
      FUN_1034e4b20(&puStack_ba70);
      goto code_r0x0001034c4a40;
    }
    func_0x000107c61574(uVar30);
    func_0x000107c61574(uVar26);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar10);
    func_0x000107c61574(uVar29);
    func_0x000107c6145c(lVar10,0x60,7);
    func_0x00010179528c(auStack_197c0);
    func_0x0001034c7494(&puStack_1a8a0);
    break;
  case 0x14:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_16018,param_1,0x1034c65f8,0x14);
      uStack_1a980 = uStack_15590;
      uStack_1a9b8 = uStack_15580;
      uStack_1a9c0 = uStack_15588;
      uStack_1a998 = uStack_155a0;
      lStack_1a9a0 = lStack_155a8;
      uStack_1a988 = uStack_15570;
      lStack_1a990 = uStack_15578;
      uStack_1a378 = uStack_155e0;
      uStack_1a380 = uStack_155e8;
      uStack_1a368 = uStack_155d0;
      uStack_1a370 = uStack_155d8;
      uStack_1a360 = uStack_155c8;
      uStack_1a34f = uStack_155b7;
      uStack_1a3b8 = uStack_15620;
      uStack_1a3c0 = uStack_15628;
      uStack_1a3a8 = uStack_15610;
      uStack_1a3b0 = uStack_15618;
      uStack_1a398 = uStack_15600;
      uStack_1a3a0 = uStack_15608;
      uStack_1a388 = uStack_155f0;
      uStack_1a390 = uStack_155f8;
      uStack_1a3f8 = uStack_15660;
      uStack_1a400 = uStack_15668;
      uStack_1a3e8 = uStack_15650;
      uStack_1a3f0 = uStack_15658;
      uStack_1a3d8 = uStack_15640;
      uStack_1a3e0 = uStack_15648;
      uStack_1a3c8 = uStack_15630;
      uStack_1a3d0 = uStack_15638;
      uStack_1a438 = uStack_156a0;
      uStack_1a440 = uStack_156a8;
      uStack_1a428 = uStack_15690;
      uStack_1a430 = uStack_15698;
      uStack_1a418 = uStack_15680;
      uStack_1a420 = uStack_15688;
      uStack_1a408 = uStack_15670;
      lStack_1a410 = lStack_15678;
      ppuStack_1a458 = ppuStack_156c0;
      puStack_1a460 = puStack_156c8;
      ppuStack_1a448 = ppuStack_156b0;
      puStack_1a450 = puStack_156b8;
      uStack_1a9d8 = uStack_156e0;
      uStack_1a9e0 = uStack_156e8;
      func_0x000107c610b4(auStack_1a768,auStack_159f8,0x301);
      uStack_1a798 = uStack_15a20;
      uStack_1a7a0 = uStack_15a28;
      uStack_1a790 = uStack_15a18;
      uStack_1a77f = uStack_15a07;
      uStack_1a7d8 = uStack_15a60;
      uStack_1a7e0 = uStack_15a68;
      uStack_1a7c8 = uStack_15a50;
      uStack_1a7d0 = uStack_15a58;
      uStack_1a7b8 = uStack_15a40;
      uStack_1a7c0 = uStack_15a48;
      uStack_1a7a8 = uStack_15a30;
      uStack_1a7b0 = uStack_15a38;
      func_0x000107c610b4(auStack_18c48,auStack_16010,0x5a8);
      uVar21 = uStack_156f0;
      lVar11 = lStack_156d8;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9d8 = uStack_17858;
      uStack_1a9e0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      uStack_1a980 = uStack_17708;
      uStack_1a9b8 = uStack_176f8;
      uStack_1a9c0 = uStack_17700;
      uStack_1a998 = uStack_17718;
      lStack_1a9a0 = lStack_17720;
      uStack_1a988 = uStack_176e8;
      lStack_1a990 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      uVar21 = uStack_17868;
      lVar11 = lStack_17850;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9d8;
    uStack_18e90 = uStack_1a9e0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a998;
    lStack_18d50 = lStack_1a9a0;
    uStack_18d38 = uStack_1a980;
    uStack_18d28 = uStack_1a9b8;
    uStack_18d30 = uStack_1a9c0;
    uStack_18d18 = uStack_1a988;
    uStack_18d20 = lStack_1a990;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_af60,auStack_197c0,0xab2);
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc88,&UNK_10d98e360);
    FUN_1034ab17c(auStack_16078,uVar21,auStack_af60,param_1,&uStack_a4a8);
    if (unaff_x21 != 0) goto code_r0x0001034c253c;
    FUN_1034e4a30(auStack_16078);
code_r0x0001034c4a40:
    func_0x00010179528c(auStack_197c0);
    break;
  case 0x15:
    func_0x000107c610b4(auStack_18190,param_2 + 0x20,0xab2);
    iVar9 = (int)auStack_18190;
    func_0x00010178e478();
    if (iVar9 == 1) {
      FUN_1034c6748(auStack_149e8,param_1,0x1034c6630,0x15);
      lStack_1a990 = uStack_13f60;
      uStack_1a9c8 = uStack_13f50;
      uStack_1a9d0 = uStack_13f58;
      uStack_1a9a8 = uStack_13f70;
      lStack_1a9b0 = lStack_13f78;
      uStack_1a998 = uStack_13f40;
      lStack_1a9a0 = uStack_13f48;
      uStack_1a378 = uStack_13fb0;
      uStack_1a380 = uStack_13fb8;
      uStack_1a368 = uStack_13fa0;
      uStack_1a370 = uStack_13fa8;
      uStack_1a360 = uStack_13f98;
      uStack_1a34f = uStack_13f87;
      uStack_1a3b8 = uStack_13ff0;
      uStack_1a3c0 = uStack_13ff8;
      uStack_1a3a8 = uStack_13fe0;
      uStack_1a3b0 = uStack_13fe8;
      uStack_1a398 = uStack_13fd0;
      uStack_1a3a0 = uStack_13fd8;
      uStack_1a388 = uStack_13fc0;
      uStack_1a390 = uStack_13fc8;
      uStack_1a3f8 = uStack_14030;
      uStack_1a400 = uStack_14038;
      uStack_1a3e8 = uStack_14020;
      uStack_1a3f0 = uStack_14028;
      uStack_1a3d8 = uStack_14010;
      uStack_1a3e0 = uStack_14018;
      uStack_1a3c8 = uStack_14000;
      uStack_1a3d0 = uStack_14008;
      uStack_1a438 = uStack_14070;
      uStack_1a440 = uStack_14078;
      uStack_1a428 = uStack_14060;
      uStack_1a430 = uStack_14068;
      uStack_1a418 = uStack_14050;
      uStack_1a420 = uStack_14058;
      uStack_1a408 = uStack_14040;
      lStack_1a410 = lStack_14048;
      ppuStack_1a458 = ppuStack_14090;
      puStack_1a460 = puStack_14098;
      ppuStack_1a448 = ppuStack_14080;
      puStack_1a450 = puStack_14088;
      uStack_1a9e8 = uStack_140b0;
      lStack_1a9f0 = uStack_140b8;
      func_0x000107c610b4(auStack_1a768,auStack_143c8,0x301);
      uStack_1a798 = uStack_143f0;
      uStack_1a7a0 = uStack_143f8;
      uStack_1a790 = uStack_143e8;
      uStack_1a77f = uStack_143d7;
      uStack_1a7d8 = uStack_14430;
      uStack_1a7e0 = uStack_14438;
      uStack_1a7c8 = uStack_14420;
      uStack_1a7d0 = uStack_14428;
      uStack_1a7b8 = uStack_14410;
      uStack_1a7c0 = uStack_14418;
      uStack_1a7a8 = uStack_14400;
      uStack_1a7b0 = uStack_14408;
      func_0x000107c610b4(auStack_18c48,auStack_149e0,0x5a8);
      lVar11 = lStack_140a8;
      uVar21 = uStack_140c0;
    }
    else {
      func_0x000107c610b4(auStack_18c48,auStack_18188,0x5a8);
      uStack_1a798 = uStack_17b98;
      uStack_1a7a0 = uStack_17ba0;
      uStack_1a790 = uStack_17b90;
      uStack_1a77f = uStack_17b7f;
      uStack_1a7d8 = uStack_17bd8;
      uStack_1a7e0 = uStack_17be0;
      uStack_1a7c8 = uStack_17bc8;
      uStack_1a7d0 = uStack_17bd0;
      uStack_1a7b8 = uStack_17bb8;
      uStack_1a7c0 = uStack_17bc0;
      uStack_1a7a8 = uStack_17ba8;
      uStack_1a7b0 = uStack_17bb0;
      uStack_1a9e8 = uStack_17858;
      lStack_1a9f0 = uStack_17860;
      uStack_1a3d8 = uStack_177b8;
      uStack_1a3e0 = uStack_177c0;
      uStack_1a3c8 = uStack_177a8;
      uStack_1a3d0 = uStack_177b0;
      uStack_1a3f8 = uStack_177d8;
      uStack_1a400 = uStack_177e0;
      uStack_1a3e8 = uStack_177c8;
      uStack_1a3f0 = uStack_177d0;
      uStack_1a398 = uStack_17778;
      uStack_1a3a0 = uStack_17780;
      uStack_1a388 = uStack_17768;
      uStack_1a390 = uStack_17770;
      uStack_1a3b8 = uStack_17798;
      uStack_1a3c0 = uStack_177a0;
      uStack_1a3a8 = uStack_17788;
      uStack_1a3b0 = uStack_17790;
      uStack_1a34f = uStack_1772f;
      uStack_1a368 = uStack_17748;
      uStack_1a370 = uStack_17750;
      uStack_1a360 = uStack_17740;
      uStack_1a378 = uStack_17758;
      uStack_1a380 = uStack_17760;
      lStack_1a990 = uStack_17708;
      uStack_1a9c8 = uStack_176f8;
      uStack_1a9d0 = uStack_17700;
      uStack_1a9a8 = uStack_17718;
      lStack_1a9b0 = lStack_17720;
      uStack_1a998 = uStack_176e8;
      lStack_1a9a0 = uStack_176f0;
      func_0x000107c610b4(auStack_1a768,auStack_17b70,0x301);
      uStack_1a438 = uStack_17818;
      uStack_1a440 = uStack_17820;
      uStack_1a428 = uStack_17808;
      uStack_1a430 = uStack_17810;
      uStack_1a418 = uStack_177f8;
      uStack_1a420 = uStack_17800;
      uStack_1a408 = uStack_177e8;
      lStack_1a410 = lStack_177f0;
      ppuStack_1a458 = ppuStack_17838;
      puStack_1a460 = puStack_17840;
      ppuStack_1a448 = ppuStack_17828;
      puStack_1a450 = puStack_17830;
      lVar11 = lStack_17850;
      uVar21 = uStack_17868;
    }
    func_0x000107c610b4(auStack_197b8,auStack_18c48,0x5a8);
    uStack_191af = uStack_1a77f;
    uStack_191d8 = uStack_1a7a8;
    uStack_191e0 = uStack_1a7b0;
    uStack_191c8 = uStack_1a798;
    uStack_191d0 = uStack_1a7a0;
    uStack_191c0 = uStack_1a790;
    uStack_19208 = uStack_1a7d8;
    uStack_19210 = uStack_1a7e0;
    uStack_191f8 = uStack_1a7c8;
    uStack_19200 = uStack_1a7d0;
    uStack_191e8 = uStack_1a7b8;
    uStack_191f0 = uStack_1a7c0;
    func_0x000107c610b4(auStack_191a0,auStack_1a768,0x301);
    uStack_18e88 = uStack_1a9e8;
    uStack_18e90 = lStack_1a9f0;
    uStack_18e48 = uStack_1a438;
    uStack_18e50 = uStack_1a440;
    uStack_18e38 = uStack_1a428;
    uStack_18e40 = uStack_1a430;
    uStack_18e28 = uStack_1a418;
    uStack_18e30 = uStack_1a420;
    uStack_18e18 = uStack_1a408;
    lStack_18e20 = lStack_1a410;
    ppuStack_18e68 = ppuStack_1a458;
    puStack_18e70 = puStack_1a460;
    ppuStack_18e58 = ppuStack_1a448;
    puStack_18e60 = puStack_1a450;
    uStack_18d5f = uStack_1a34f;
    uStack_18d70 = uStack_1a360;
    uStack_18d78 = uStack_1a368;
    uStack_18d80 = uStack_1a370;
    uStack_18d88 = uStack_1a378;
    uStack_18d90 = uStack_1a380;
    uStack_18d98 = uStack_1a388;
    uStack_18da0 = uStack_1a390;
    uStack_18da8 = uStack_1a398;
    uStack_18db0 = uStack_1a3a0;
    uStack_18db8 = uStack_1a3a8;
    uStack_18dc0 = uStack_1a3b0;
    uStack_18dc8 = uStack_1a3b8;
    uStack_18dd0 = uStack_1a3c0;
    uStack_18dd8 = uStack_1a3c8;
    uStack_18de0 = uStack_1a3d0;
    uStack_18de8 = uStack_1a3d8;
    uStack_18df0 = uStack_1a3e0;
    uStack_18df8 = uStack_1a3e8;
    uStack_18e00 = uStack_1a3f0;
    uStack_18e08 = uStack_1a3f8;
    uStack_18e10 = uStack_1a400;
    uStack_18d48 = uStack_1a9a8;
    lStack_18d50 = lStack_1a9b0;
    uStack_18d38 = lStack_1a990;
    uStack_18d28 = uStack_1a9c8;
    uStack_18d30 = uStack_1a9d0;
    uStack_18d18 = uStack_1a998;
    uStack_18d20 = lStack_1a9a0;
    uStack_18e98 = uVar21;
    lStack_18e80 = lVar11;
    func_0x000107c610b4(auStack_99c8,auStack_197c0,0xab2);
    lVar11 = (long)param_1 + (long)*(int *)(lVar10 + 0x88);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar22 = *(undefined8 *)(lVar11 + 0x98);
    func_0x000101682c20();
    if ((int)lVar11 == 1) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      func_0x000107c61434(uVar22);
    }
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    puVar25 = *(undefined1 **)(unaff_x20 + _DAT_112f73260);
    lVar11 = 0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar21;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *(long *)(lVar11 + 0x28) = lStack_a4a0;
    *(ulong *)(lVar11 + 0x20) = CONCAT71(uStack_a4a7,uStack_a4a8);
    *(undefined8 *)(lVar11 + 0x38) = uStack_a490;
    *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_a497,uStack_a498);
    *(undefined1 *)(lVar11 + 0x40) = uStack_a488;
    *(undefined8 *)(lVar11 + 0x48) = uVar27;
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined1 **)(lVar11 + 0x58) = puVar25;
    uVar21 = *(undefined8 *)(param_2 + 0x1708);
    puVar23 = (undefined1 *)0x112dcbc88;
    ppuVar17 = &puStack_1a340;
    FUN_1034c7528(auStack_18190,ppuVar17,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c6157c(uVar27);
    func_0x000107c6157c(uVar29);
    puVar12 = puVar25;
    func_0x000107c6157c();
    FUN_1035c72ac();
    puVar13 = auStack_99c8;
    puVar19 = puVar23;
    puStack_1a8a0 = puVar12;
    ppuStack_1a898 = ppuVar17;
    puStack_1a890 = puVar23;
    FUN_1034b0fc0(uVar21);
    if (unaff_x21 == 0) {
      puStack_1a340 = puVar13;
      ppuStack_1a338 = param_1;
      puStack_1a330 = puVar19;
      FUN_1034a6958(&puStack_1a340,auStack_99c8);
      puVar13 = puStack_1a330;
      ppuVar17 = ppuStack_1a338;
      puVar23 = puStack_1a340;
      func_0x00010006c00c(puStack_1a340,ppuStack_1a338);
      func_0x000107c6157c(puVar13);
      func_0x0001035c6970(puVar23,ppuVar17,puVar13);
      func_0x00010006c090(puVar23,ppuVar17);
      func_0x000107c61574(puVar13);
      FUN_1034e4214(puStack_1a8a0,ppuStack_1a898,puStack_1a890);
      goto code_r0x0001034c4664;
    }
    func_0x00010179528c(auStack_197c0);
    func_0x000107c61574(uVar29);
    func_0x000107c61574(uVar27);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar11);
    func_0x000107c61574(puVar25);
    func_0x000107c6145c(lVar11,0x60,7);
    func_0x00010006c090(puVar12,ppuVar17);
    func_0x000107c61574(puVar23);
    break;
  case 0x16:
    func_0x000107c610b4(auStack_18190,param_2 + 0xad8,0xb78);
    iVar9 = (int)auStack_18190;
    func_0x000100d549f0();
    if (iVar9 == 1) {
      puStack_197a8 = &UNK_11065d188;
      ppuStack_197a0 = &PTR_DAT_11065d0f0;
      auStack_197c0[0] = 9;
      func_0x0001034e2644(auStack_197c0,0x1034c6c74,0,param_1[7],param_1[8],0);
      func_0x0001000834e4(auStack_197c0);
      func_0x000101895c44(auStack_197c0);
      func_0x000107c610b4(auStack_b58,auStack_197c0,0xab2);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
      func_0x0001042687a4(auStack_d1a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      uStack_1a928 = uStack_c648;
      uStack_1a930 = uStack_c650;
      uStack_1a968 = uStack_c638;
      uStack_1a970 = uStack_c640;
      uStack_1a980 = uStack_c630;
      lStack_1a990 = uStack_c658;
      uStack_1a9c0 = uStack_c668;
      lStack_1a9b0 = uStack_c678;
      func_0x000107c610b4(auStack_18c48,auStack_d130,0xab2);
      uVar2 = uStack_d188;
      bVar1 = bStack_c65f;
      bVar3 = bStack_c660;
      bVar6 = bStack_c65e;
    }
    else {
      lStack_1a9b0 = uStack_17668;
      uStack_1a9c0 = uStack_17658;
      lStack_1a990 = uStack_17648;
      uStack_1a928 = uStack_17638;
      uStack_1a930 = uStack_17640;
      uStack_1a968 = uStack_17628;
      uStack_1a970 = uStack_17630;
      uStack_1a980 = uStack_17620;
      uVar2 = puStack_18178._0_1_;
      func_0x000107c610b4(auStack_18c48,auStack_18120,0xab2);
      ppuStack_d190 = ppuStack_18180;
      bStack_d138 = bStack_18128;
      bVar1 = bStack_1764f;
      bVar3 = bStack_17650;
      bVar6 = bStack_1764e;
    }
    puStack_197a8 = (undefined *)(CONCAT71(puStack_197a8._1_7_,uVar2) & 0xffffffffffffff01);
    bStack_19758 = bStack_d138 & 1;
    ppuStack_197b0 = ppuStack_d190;
    func_0x000107c610b4(auStack_19750,auStack_18c48,0xab2);
    uStack_18c98 = lStack_1a9b0;
    uStack_18c88 = uStack_1a9c0;
    bStack_18c80 = bVar3 & 1;
    bStack_18c7f = bVar1 & 1;
    bStack_18c7e = bVar6 & 1;
    uStack_18c78 = lStack_1a990;
    uStack_18c68 = uStack_1a928;
    uStack_18c70 = uStack_1a930;
    uStack_18c58 = uStack_1a968;
    uStack_18c60 = uStack_1a970;
    uStack_18c50 = uStack_1a980;
    func_0x000107c610b4(auStack_16d0,auStack_197c0,0xb78);
    FUN_1034c7528(auStack_18190,&puStack_1a340,0x112dcbc78,&UNK_10d98e350);
    FUN_1034a915c(auStack_c620,auStack_16d0,param_1,&uStack_a4a8);
    if (unaff_x21 != 0) goto code_r0x0001034c3774;
    FUN_1034e4c18(auStack_c620);
code_r0x0001034c45d0:
    func_0x00010178e444(auStack_197c0);
    break;
  default:
    puStack_18178 = &UNK_11065d188;
    ppuStack_18170 = &PTR_DAT_11065d0f0;
    auStack_18190[0] = 10;
    ppuStack_197b0 = param_1;
    func_0x0001034e2644(auStack_18190,FUN_1034c7348,auStack_197c0,param_1[7],param_1[8],0);
    func_0x0001000834e4(auStack_18190);
  }
code_r0x0001034c4e6c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
code_r0x0001034c4eb0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1034c4eb4);
  (*pcVar8)();
}



/* Entry: 1034c4ec0; end: 1034c639b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034c4ec0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 *in_stack_ffffffffffff8d88;
  ulong in_stack_ffffffffffff8d98;
  ulong in_stack_ffffffffffff8da8;
  ulong in_stack_ffffffffffff8dd8;
  undefined4 uStack_70a0;
  byte bStack_709c;
  byte bStack_7098;
  byte bStack_7094;
  undefined8 uStack_7088;
  undefined8 uStack_7080;
  undefined8 uStack_7078;
  undefined1 uStack_7048;
  undefined7 uStack_7047;
  undefined8 uStack_7040;
  undefined8 uStack_7038;
  undefined8 uStack_7030;
  undefined8 uStack_7028;
  undefined8 uStack_7020;
  undefined8 uStack_7018;
  undefined8 uStack_7010;
  undefined8 uStack_7008;
  undefined8 uStack_7000;
  undefined8 uStack_6ff8;
  undefined8 uStack_6ff0;
  undefined8 uStack_6fe8;
  undefined1 uStack_6fc8;
  undefined8 uStack_6aa0;
  undefined8 uStack_6a98;
  undefined8 uStack_6a90;
  undefined8 uStack_6a88;
  undefined8 uStack_6a80;
  undefined8 uStack_6a78;
  undefined8 uStack_6a70;
  undefined8 uStack_6a68;
  undefined8 uStack_6a60;
  undefined8 uStack_6a58;
  undefined8 uStack_6a50;
  undefined8 uStack_6a48;
  undefined8 uStack_6a40;
  undefined8 uStack_6a38;
  undefined8 uStack_6a30;
  undefined8 uStack_6a20;
  undefined8 uStack_6a18;
  undefined8 uStack_6a10;
  undefined8 uStack_6a08;
  undefined8 uStack_6a00;
  undefined8 uStack_69f8;
  undefined8 uStack_69f0;
  undefined8 uStack_69e8;
  undefined8 uStack_69e0;
  undefined8 uStack_69d8;
  undefined8 uStack_69d0;
  undefined8 uStack_69c8;
  undefined8 uStack_69c0;
  undefined8 uStack_69b8;
  undefined8 uStack_69b0;
  undefined8 uStack_69a8;
  undefined8 uStack_69a0;
  undefined4 uStack_6978;
  undefined8 uStack_6968;
  undefined8 uStack_6960;
  undefined8 uStack_6958;
  undefined8 uStack_6950;
  undefined8 uStack_6948;
  undefined8 uStack_6940;
  undefined8 uStack_6938;
  undefined8 uStack_6930;
  undefined8 uStack_6928;
  undefined8 uStack_6920;
  undefined8 uStack_6918;
  undefined8 uStack_6910;
  undefined8 uStack_6908;
  undefined8 uStack_6900;
  undefined8 uStack_68f8;
  undefined8 uStack_68f0;
  undefined1 uStack_68e8;
  undefined8 uStack_68e0;
  undefined8 uStack_68d8;
  undefined8 uStack_68d0;
  undefined8 uStack_68c8;
  undefined8 uStack_68c0;
  undefined8 uStack_68b8;
  undefined8 uStack_68b0;
  undefined8 uStack_68a8;
  undefined8 uStack_68a0;
  undefined8 uStack_6898;
  undefined8 uStack_6890;
  undefined8 uStack_6888;
  undefined8 uStack_6880;
  undefined8 uStack_686f;
  undefined8 uStack_6860;
  undefined8 uStack_6858;
  undefined8 uStack_6850;
  undefined8 uStack_6848;
  undefined8 uStack_6840;
  undefined8 uStack_6838;
  undefined8 uStack_6830;
  undefined8 uStack_6828;
  undefined8 uStack_6820;
  undefined8 uStack_6818;
  undefined8 uStack_6810;
  undefined8 uStack_6808;
  undefined8 uStack_6800;
  undefined8 uStack_67ee;
  undefined8 uStack_67c0;
  undefined8 uStack_67b0;
  byte bStack_67a8;
  byte bStack_67a7;
  byte bStack_6770;
  undefined8 uStack_6768;
  undefined8 uStack_6700;
  undefined8 uStack_66f8;
  undefined8 uStack_66f0;
  undefined8 uStack_66e8;
  undefined8 uStack_66e0;
  undefined8 uStack_66d8;
  undefined8 uStack_66d0;
  undefined8 uStack_66c8;
  undefined8 uStack_66c0;
  undefined8 uStack_66b8;
  undefined8 uStack_66b0;
  undefined8 uStack_66a8;
  undefined8 uStack_66a0;
  undefined8 uStack_6698;
  undefined8 uStack_6690;
  undefined8 uStack_6688;
  undefined8 uStack_6680;
  undefined8 uStack_6678;
  undefined8 uStack_6670;
  undefined8 uStack_6668;
  undefined8 uStack_6660;
  undefined8 uStack_6658;
  undefined8 uStack_6650;
  undefined8 uStack_6648;
  undefined8 uStack_6640;
  undefined8 uStack_6638;
  undefined8 uStack_6630;
  undefined8 uStack_6628;
  undefined8 uStack_6620;
  undefined8 uStack_6618;
  undefined8 uStack_6610;
  undefined8 uStack_6608;
  undefined8 uStack_6600;
  undefined8 uStack_65f8;
  undefined8 uStack_65f0;
  undefined8 uStack_65e8;
  undefined2 uStack_65e0;
  byte bStack_65de;
  undefined8 uStack_65d0;
  undefined8 uStack_65c8;
  undefined8 uStack_65c0;
  undefined8 uStack_65b8;
  undefined8 uStack_65b0;
  undefined8 uStack_65a8;
  undefined8 uStack_65a0;
  undefined8 uStack_6598;
  undefined2 uStack_6590;
  undefined8 uStack_64f0;
  undefined8 uStack_64e8;
  undefined8 uStack_64e0;
  undefined8 uStack_64d8;
  undefined8 uStack_64d0;
  undefined8 uStack_64c8;
  undefined8 uStack_64c0;
  undefined8 uStack_64b8;
  undefined8 uStack_64b0;
  undefined8 uStack_64a8;
  undefined8 uStack_64a0;
  undefined8 uStack_6498;
  undefined8 uStack_6490;
  undefined8 uStack_647f;
  undefined8 uStack_6470;
  undefined8 uStack_6468;
  undefined8 uStack_6460;
  undefined8 uStack_6458;
  undefined8 uStack_6450;
  undefined8 uStack_6448;
  undefined8 uStack_6440;
  undefined8 uStack_6438;
  undefined8 uStack_6430;
  undefined8 uStack_6428;
  undefined8 uStack_6420;
  undefined8 uStack_6418;
  undefined8 uStack_6410;
  undefined8 uStack_63fe;
  undefined8 uStack_63f0;
  undefined8 uStack_63e8;
  undefined8 uStack_63e0;
  undefined8 uStack_63d8;
  undefined8 uStack_63d0;
  undefined8 uStack_63c8;
  undefined8 uStack_63c0;
  undefined8 uStack_63b8;
  undefined8 uStack_63b0;
  undefined8 uStack_63a8;
  undefined8 uStack_63a0;
  undefined8 uStack_6398;
  undefined8 uStack_6390;
  undefined8 uStack_6388;
  undefined8 uStack_6380;
  undefined8 uStack_6378;
  undefined8 uStack_6370;
  undefined8 uStack_6360;
  undefined8 uStack_6358;
  undefined8 uStack_6350;
  undefined8 uStack_6348;
  undefined8 uStack_6340;
  undefined8 uStack_6338;
  undefined8 uStack_6330;
  undefined8 uStack_6328;
  undefined8 uStack_6320;
  undefined8 uStack_6318;
  undefined8 uStack_6310;
  undefined8 uStack_6308;
  undefined8 uStack_6300;
  undefined8 uStack_62f8;
  undefined8 uStack_62f0;
  undefined8 uStack_62e8;
  undefined1 uStack_62e0;
  undefined8 uStack_62d0;
  undefined8 uStack_62c8;
  undefined8 uStack_62c0;
  undefined8 uStack_62b8;
  undefined8 uStack_62b0;
  undefined8 uStack_62a8;
  undefined8 uStack_62a0;
  undefined8 uStack_6298;
  undefined8 uStack_6290;
  undefined8 uStack_6288;
  undefined8 uStack_6280;
  undefined8 uStack_6278;
  undefined8 uStack_6270;
  undefined8 uStack_625f;
  undefined8 uStack_6250;
  undefined8 uStack_6248;
  undefined8 uStack_6240;
  undefined8 uStack_6238;
  undefined8 uStack_6230;
  undefined8 uStack_6228;
  undefined8 uStack_6220;
  undefined8 uStack_6218;
  undefined8 uStack_6210;
  undefined8 uStack_6208;
  undefined8 uStack_6200;
  undefined8 uStack_61f8;
  undefined8 uStack_61f0;
  undefined8 uStack_61de;
  undefined8 uStack_61d0;
  undefined8 uStack_61c8;
  undefined8 uStack_61c0;
  undefined8 uStack_61b8;
  undefined8 uStack_61b0;
  undefined8 uStack_61a8;
  undefined8 uStack_61a0;
  undefined8 uStack_6198;
  undefined8 uStack_6190;
  undefined8 uStack_6188;
  undefined8 uStack_6180;
  undefined8 uStack_6178;
  undefined8 uStack_6170;
  undefined8 uStack_6168;
  undefined8 uStack_6160;
  undefined8 uStack_6158;
  undefined8 uStack_6150;
  undefined8 uStack_6148;
  undefined8 uStack_6140;
  undefined8 uStack_6138;
  undefined8 uStack_6130;
  undefined8 uStack_6128;
  undefined8 uStack_6120;
  undefined8 uStack_6118;
  undefined8 uStack_6110;
  undefined8 uStack_6108;
  undefined8 uStack_6100;
  undefined8 uStack_60f8;
  undefined8 uStack_60f0;
  undefined8 uStack_60e8;
  undefined8 uStack_60e0;
  undefined8 uStack_60d8;
  undefined8 uStack_60d0;
  undefined8 uStack_60c8;
  undefined8 uStack_60c0;
  undefined8 uStack_60b8;
  undefined2 uStack_60b0;
  undefined8 uStack_60a0;
  undefined8 uStack_6098;
  undefined8 uStack_6090;
  undefined8 uStack_6088;
  undefined8 uStack_6080;
  undefined8 uStack_6078;
  undefined8 uStack_6070;
  undefined8 uStack_6068;
  undefined2 uStack_6060;
  undefined1 *puStack_6050;
  long lStack_6048;
  undefined8 uStack_6040;
  undefined8 uStack_6038;
  undefined8 uStack_6030;
  undefined8 uStack_6028;
  undefined8 uStack_6020;
  undefined8 uStack_6018;
  undefined8 uStack_6010;
  undefined8 uStack_6008;
  undefined8 uStack_6000;
  undefined8 uStack_5ff8;
  undefined8 uStack_5ff0;
  undefined8 uStack_5fe8;
  undefined8 uStack_5fe0;
  undefined8 uStack_5fd8;
  undefined8 uStack_5fd0;
  undefined8 uStack_5fc8;
  undefined8 uStack_5fc0;
  undefined8 uStack_5fb8;
  undefined8 uStack_5fb0;
  undefined8 uStack_5fa8;
  undefined8 uStack_5fa0;
  undefined8 uStack_5f98;
  undefined8 uStack_5f87;
  undefined8 uStack_5580;
  undefined8 uStack_5578;
  undefined8 uStack_5570;
  undefined8 uStack_5568;
  undefined8 uStack_5560;
  undefined8 uStack_5558;
  undefined8 uStack_5550;
  undefined8 uStack_5548;
  undefined8 uStack_5540;
  undefined8 uStack_5538;
  undefined8 uStack_5530;
  long lStack_5528;
  double dStack_5520;
  undefined8 uStack_5518;
  undefined8 uStack_5510;
  undefined8 uStack_5500;
  undefined8 uStack_54f8;
  undefined8 uStack_54f0;
  undefined8 uStack_54e8;
  undefined8 uStack_54e0;
  undefined8 uStack_54d8;
  undefined8 uStack_54d0;
  undefined8 uStack_54c8;
  undefined8 uStack_54c0;
  undefined8 uStack_54b8;
  undefined8 uStack_54b0;
  undefined8 uStack_54a8;
  undefined8 uStack_54a0;
  undefined8 uStack_5498;
  undefined8 uStack_5490;
  undefined8 uStack_5488;
  undefined8 uStack_5480;
  undefined1 uStack_5478;
  undefined4 uStack_5458;
  undefined8 uStack_5448;
  undefined8 uStack_5440;
  undefined8 uStack_5438;
  undefined8 uStack_5430;
  undefined8 uStack_5428;
  undefined8 uStack_5420;
  undefined8 uStack_5418;
  undefined8 uStack_5410;
  undefined8 uStack_5408;
  undefined8 uStack_5400;
  undefined8 uStack_53f8;
  undefined8 uStack_53f0;
  undefined8 uStack_53e8;
  undefined8 uStack_53e0;
  undefined8 uStack_53d8;
  undefined8 uStack_53d0;
  undefined1 uStack_53c8;
  undefined8 uStack_53c0;
  undefined8 uStack_53b8;
  undefined8 uStack_53b0;
  undefined8 uStack_53a8;
  undefined8 uStack_53a0;
  undefined8 uStack_5398;
  undefined8 uStack_5390;
  undefined8 uStack_5388;
  undefined8 uStack_5380;
  undefined8 uStack_5378;
  undefined8 uStack_5370;
  undefined8 uStack_5368;
  undefined8 uStack_5360;
  undefined8 uStack_534f;
  undefined8 uStack_5340;
  undefined8 uStack_5338;
  undefined8 uStack_5330;
  undefined8 uStack_5328;
  undefined8 uStack_5320;
  undefined8 uStack_5318;
  undefined8 uStack_5310;
  undefined8 uStack_5308;
  undefined8 uStack_5300;
  undefined8 uStack_52f8;
  undefined8 uStack_52f0;
  undefined8 uStack_52e8;
  undefined8 uStack_52e0;
  undefined8 uStack_52ce;
  undefined1 uStack_52b0;
  undefined1 uStack_52af;
  undefined8 uStack_52a0;
  undefined1 uStack_5298;
  undefined8 uStack_5290;
  byte bStack_5288;
  byte bStack_5287;
  byte bStack_5250;
  undefined8 uStack_5248;
  undefined8 uStack_51e0;
  undefined8 uStack_51d8;
  undefined8 uStack_51d0;
  undefined8 uStack_51c8;
  undefined8 uStack_51c0;
  undefined8 uStack_51b8;
  undefined8 uStack_51b0;
  undefined8 uStack_51a8;
  undefined8 uStack_51a0;
  undefined8 uStack_5198;
  undefined8 uStack_5190;
  undefined8 uStack_5188;
  undefined8 uStack_5180;
  undefined8 uStack_5178;
  undefined8 uStack_5170;
  undefined8 uStack_5168;
  undefined8 uStack_5160;
  undefined8 uStack_5158;
  undefined8 uStack_5150;
  undefined8 uStack_5148;
  undefined8 uStack_5140;
  undefined8 uStack_5138;
  undefined8 uStack_5130;
  undefined8 uStack_5128;
  undefined8 uStack_5120;
  undefined8 uStack_5118;
  undefined8 uStack_5110;
  undefined8 uStack_5108;
  undefined8 uStack_5100;
  undefined8 uStack_50f8;
  undefined8 uStack_50f0;
  undefined8 uStack_50e8;
  undefined8 uStack_50e0;
  undefined8 uStack_50d8;
  undefined8 uStack_50d0;
  undefined8 uStack_50c8;
  undefined2 uStack_50c0;
  byte bStack_50be;
  undefined8 uStack_50b0;
  undefined8 uStack_50a8;
  undefined8 uStack_50a0;
  undefined8 uStack_5098;
  undefined8 uStack_5090;
  undefined8 uStack_5088;
  undefined8 uStack_5080;
  undefined8 uStack_5078;
  undefined2 uStack_5070;
  undefined1 auStack_4a30 [1448];
  undefined1 auStack_4488 [1448];
  undefined1 auStack_3ee0 [1448];
  undefined1 auStack_3938 [1448];
  undefined8 uStack_3390;
  undefined1 auStack_3388 [2736];
  undefined1 auStack_28d8 [2744];
  undefined1 auStack_1e20 [88];
  long lStack_1dc8;
  double dStack_1dc0;
  undefined8 uStack_1da0;
  undefined8 uStack_1d98;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  undefined8 uStack_1d80;
  undefined8 uStack_1d78;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  undefined8 uStack_1d48;
  undefined8 uStack_1d40;
  undefined8 uStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined4 uStack_1cf8;
  undefined8 uStack_1ce8;
  undefined8 uStack_1ce0;
  undefined8 uStack_1cd8;
  undefined8 uStack_1cd0;
  undefined8 uStack_1cc8;
  undefined8 uStack_1cc0;
  undefined8 uStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined8 uStack_1c90;
  undefined8 uStack_1c88;
  undefined8 uStack_1c80;
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  undefined1 uStack_1c68;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  undefined8 uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1c38;
  undefined8 uStack_1c30;
  undefined8 uStack_1c28;
  undefined8 uStack_1c20;
  undefined8 uStack_1c18;
  undefined8 uStack_1c10;
  undefined8 uStack_1c08;
  undefined8 uStack_1c00;
  undefined8 uStack_1bef;
  undefined8 uStack_1be0;
  undefined8 uStack_1bd8;
  undefined8 uStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined8 uStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b6e;
  undefined8 uStack_1b40;
  undefined8 uStack_1b30;
  byte bStack_1b28;
  byte bStack_1b27;
  byte bStack_1af0;
  undefined8 uStack_1ae8;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined2 uStack_1960;
  byte bStack_195e;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined2 uStack_1910;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined1 uStack_1808;
  undefined7 uStack_1807;
  undefined1 uStack_1800;
  undefined7 uStack_17ff;
  undefined8 uStack_17f0;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined1 uStack_1760;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16df;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_165e;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined2 uStack_1500;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined2 uStack_14b0;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  long lStack_1418;
  double dStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f0;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined1 uStack_1360;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined2 uStack_1100;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined2 uStack_10b0;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1070 [1448];
  undefined1 auStack_ac8 [1448];
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
  undefined1 uStack_4b8;
  undefined1 auStack_4a8 [776];
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
  undefined8 uStack_8f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = param_1;
  FUN_1034c7044();
  if (*(long *)(param_1 + 0x1780) == 1) {
    uStack_7088 = 0;
    uVar8 = 1;
  }
  else {
    uVar8 = *(undefined1 *)(param_1 + 0x1778);
    uStack_7088 = *(undefined8 *)(param_1 + 6000);
  }
  func_0x000107c610b4(auStack_28d8,param_1 + 0x20,0xab2);
  iVar3 = (int)auStack_28d8;
  func_0x00010178e478();
  if (iVar3 == 1) {
    lVar5 = 0;
    func_0x000100b91d00();
    uVar9 = *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x48));
    func_0x00010178ed8c(auStack_4a30);
    func_0x000107c610b4(auStack_ac8,auStack_4a30,0x5a8);
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_500 = 1;
    uStack_4f0 = 0;
    uStack_4f8 = 0;
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    uStack_4d0 = 0;
    uStack_4d8 = 0;
    uStack_4c0 = 0;
    uStack_4c8 = 0;
    uStack_4b8 = 0;
    func_0x00010178e4b4(&uStack_5580);
    func_0x000107c610b4(auStack_4a8,&uStack_5580,0x301);
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_1a0 = 1;
    uStack_148 = 0;
    func_0x00010178e4d4(&uStack_6038);
    uStack_b8 = uStack_5fb0;
    uStack_c0 = uStack_5fb8;
    uStack_a8 = uStack_5fa0;
    uStack_b0 = uStack_5fa8;
    uStack_a0 = uStack_5f98;
    uStack_8f = uStack_5f87;
    uStack_f8 = uStack_5ff0;
    uStack_100 = uStack_5ff8;
    uStack_e8 = uStack_5fe0;
    uStack_f0 = uStack_5fe8;
    uStack_d8 = uStack_5fd0;
    uStack_e0 = uStack_5fd8;
    uStack_c8 = uStack_5fc0;
    uStack_d0 = uStack_5fc8;
    uStack_138 = uStack_6030;
    uStack_140 = uStack_6038;
    uStack_128 = uStack_6020;
    uStack_130 = uStack_6028;
    uStack_118 = uStack_6010;
    uStack_120 = uStack_6018;
    uStack_108 = uStack_6000;
    uStack_110 = uStack_6008;
    in_stack_ffffffffffff8d88 = &uStack_1a0;
    in_stack_ffffffffffff8d98 = 0;
    func_0x000104220e6c(&uStack_3390,uVar9,auStack_ac8,&uStack_520,auStack_4a8,1,0,1,0,0x202,
                        in_stack_ffffffffffff8d88,&uStack_140,1,0,
                        in_stack_ffffffffffff8da8 & 0xffffffffffffff00,0,0,1,0,3,
                        in_stack_ffffffffffff8dd8 & 0xffffffffffff0000);
  }
  else {
    func_0x000107c610b4(&uStack_3390,auStack_28d8,0xab2);
  }
  lVar5 = 0;
  func_0x000100b91d00();
  uStack_3390 = *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x48));
  func_0x00010178ed8c(auStack_3ee0);
  func_0x000107c610b4(auStack_3938,auStack_3388,0x5a8);
  func_0x000107c610b4(auStack_4a30,auStack_3388,0x5a8);
  func_0x000107c610b4(auStack_4488,auStack_3ee0,0x5a8);
  iVar3 = (int)auStack_4a30;
  func_0x000100d549f0();
  if (iVar3 == 1) {
    iVar3 = (int)auStack_4488;
    func_0x000100d549f0();
    if (iVar3 != 1) {
LAB_1034c52c8:
      func_0x000107c610b4(&uStack_5580,auStack_4a30,0xb50);
      FUN_1034c7528(auStack_28d8,&uStack_6038,0x112dcbc88,&UNK_10d98e360);
      FUN_1034c7528(auStack_3938,&uStack_6038,0x112dcbd00,&UNK_10d98e550);
      func_0x0001034c7570(&uStack_5580,0x112dcbd08,&UNK_10d98e400);
      goto LAB_1034c5714;
    }
    func_0x000107c610b4(&uStack_6038,auStack_4a30,0x5a8);
    FUN_1034c7528(auStack_28d8,&uStack_5580,0x112dcbc88,&UNK_10d98e360);
    FUN_1034c7528(auStack_3938,&uStack_5580,0x112dcbd00,&UNK_10d98e550);
    func_0x0001034c7570(&uStack_6038,0x112dcbd00,&UNK_10d98e550);
  }
  else {
    func_0x000107c610b4(&uStack_6aa0,auStack_4a30,0x5a8);
    iVar3 = (int)auStack_4488;
    func_0x000100d549f0();
    if (iVar3 == 1) goto LAB_1034c52c8;
    func_0x000107c610b4(&uStack_7048,auStack_4488,0x5a8);
    func_0x000107c610b4(&uStack_6038,auStack_4488,0x5a8);
    func_0x000107c610b4(auStack_1070,&uStack_6aa0,0x5a8);
    FUN_1034c7528(auStack_28d8,&uStack_5580,0x112dcbc88,&UNK_10d98e360);
    FUN_1034c7528(auStack_3938,&uStack_5580,0x112dcbd00,&UNK_10d98e550);
    puVar6 = auStack_1070;
    func_0x00010421948c(puVar6,&uStack_6038);
    func_0x0001034c7570(&uStack_7048,0x112dcbd00,&UNK_10d98e550);
    func_0x0001034c7570(auStack_4a30,0x112dcbd00,&UNK_10d98e550);
    if (((ulong)puVar6 & 1) == 0) goto LAB_1034c5714;
  }
  func_0x000101895cec(&uStack_5580);
  uStack_1408 = uStack_5518;
  dStack_1410 = dStack_5520;
  uStack_1400 = uStack_5510;
  uStack_13f0 = uStack_5500;
  uStack_1448 = uStack_5558;
  uStack_1450 = uStack_5560;
  uStack_1438 = uStack_5548;
  uStack_1440 = uStack_5550;
  uStack_1428 = uStack_5538;
  uStack_1430 = uStack_5540;
  lStack_1418 = lStack_5528;
  uStack_1420 = uStack_5530;
  uStack_1468 = uStack_5578;
  uStack_1470 = uStack_5580;
  uStack_1458 = uStack_5568;
  uStack_1460 = uStack_5570;
  func_0x000101895d08(&uStack_6aa0);
  uStack_1378 = uStack_6a38;
  uStack_1380 = uStack_6a40;
  uStack_1370 = uStack_6a30;
  uStack_1360 = (undefined1)uStack_6a20;
  uStack_13b8 = uStack_6a78;
  uStack_13c0 = uStack_6a80;
  uStack_13a8 = uStack_6a68;
  uStack_13b0 = uStack_6a70;
  uStack_1398 = uStack_6a58;
  uStack_13a0 = uStack_6a60;
  uStack_1388 = uStack_6a48;
  uStack_1390 = uStack_6a50;
  uStack_13d8 = uStack_6a98;
  uStack_13e0 = uStack_6aa0;
  uStack_13c8 = uStack_6a88;
  uStack_13d0 = uStack_6a90;
  func_0x0001018797b4(&uStack_1870);
  uStack_1308 = uStack_1828;
  uStack_1310 = uStack_1830;
  uStack_12f8 = uStack_1818;
  uStack_1300 = uStack_1820;
  uStack_12f0 = uStack_1810;
  uStack_1348 = uStack_1868;
  uStack_1350 = uStack_1870;
  uStack_1338 = uStack_1858;
  uStack_1340 = uStack_1860;
  uStack_1328 = uStack_1848;
  uStack_1330 = uStack_1850;
  uStack_1318 = uStack_1838;
  uStack_1320 = uStack_1840;
  func_0x000101895d28(&uStack_7048);
  uStack_1288 = uStack_7000;
  uStack_1290 = uStack_7008;
  uStack_1278 = uStack_6ff0;
  uStack_1280 = uStack_6ff8;
  uStack_1270 = uStack_6fe8;
  uStack_12c8 = uStack_7040;
  uStack_12b8 = uStack_7030;
  uStack_12c0 = uStack_7038;
  uStack_12a8 = uStack_7020;
  uStack_12b0 = uStack_7028;
  uStack_1298 = uStack_7010;
  uStack_12a0 = uStack_7018;
  uStack_1240 = 0;
  uStack_1248 = 0;
  uStack_1250 = 0;
  uStack_1238 = 1;
  uStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  uStack_1210 = 0;
  uStack_1208 = 2;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  uStack_11e8 = 0;
  uStack_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1168 = 0;
  uStack_1170 = 0;
  uStack_1158 = 0;
  uStack_1160 = 0;
  uStack_1148 = 0;
  uStack_1150 = 0;
  uStack_1138 = 0;
  uStack_1140 = 0;
  uStack_1128 = 0;
  uStack_1130 = 0;
  uStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  uStack_1110 = 1;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  uStack_10c8 = 0;
  uStack_10d0 = 0;
  uStack_10b8 = 0;
  uStack_10c0 = 0;
  uStack_10b0 = 0x100;
  uStack_1098 = 0;
  uStack_10a0 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1080 = 0;
  in_stack_ffffffffffff8d98 = in_stack_ffffffffffff8d98 & 0xffffffffffffff00;
  in_stack_ffffffffffff8d88 = (undefined8 *)((ulong)in_stack_ffffffffffff8d88 & 0xffffffffffffff00);
  func_0x000104218d60(auStack_4a30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,in_stack_ffffffffffff8d88,
                      &uStack_1470,in_stack_ffffffffffff8d98,0x30000000000,0,0,0);
  func_0x00010178e49c(auStack_4a30);
  func_0x0001034c7570(auStack_3388,0x112dcbd00,&UNK_10d98e550);
  func_0x000107c610b4(auStack_3388,auStack_4a30,0x5a8);
LAB_1034c5714:
  lVar7 = param_2 + *(int *)(lVar5 + 0x88);
  uVar9 = *(undefined8 *)(lVar7 + 0x90);
  uVar12 = *(undefined8 *)(lVar7 + 0x98);
  func_0x000101682c20();
  if ((int)lVar7 == 1) {
    uVar9 = 0;
    uVar12 = 0;
  }
  else {
    func_0x000107c61434(uVar12);
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
  lVar7 = 0;
  func_0x0001034b716c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar9;
  *(undefined8 *)(lVar7 + 0x18) = uVar12;
  *(undefined1 *)(lVar7 + 0x20) = 0;
  *(long *)(lVar7 + 0x28) = lVar4;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  *(undefined8 *)(lVar7 + 0x38) = uStack_7088;
  *(undefined1 *)(lVar7 + 0x40) = uVar8;
  *(undefined8 *)(lVar7 + 0x48) = uVar13;
  *(undefined8 *)(lVar7 + 0x50) = uVar10;
  *(undefined8 *)(lVar7 + 0x58) = uVar11;
  uVar9 = 0xab2;
  func_0x000107c610b4(auStack_4a30,&uStack_3390);
  uVar14 = *(undefined8 *)(param_1 + 0x1708);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  puVar6 = auStack_4a30;
  lVar4 = param_2;
  FUN_1034b0fc0(uVar14);
  if (unaff_x21 == 0) {
    puStack_6050 = puVar6;
    lStack_6048 = lVar4;
    uStack_6040 = uVar9;
    func_0x000107c610b4(&uStack_5580,auStack_3388,0x5a8);
    iVar3 = (int)&uStack_5580;
    func_0x000100d549f0();
    if (iVar3 == 1) {
      func_0x000101895cec(&uStack_6aa0);
      uStack_1808 = (undefined1)uStack_6a38;
      uStack_1807 = (undefined7)((ulong)uStack_6a38 >> 8);
      uStack_1810 = uStack_6a40;
      uStack_1800 = (undefined1)uStack_6a30;
      uStack_17ff = (undefined7)((ulong)uStack_6a30 >> 8);
      uStack_17f0 = uStack_6a20;
      uStack_1848 = uStack_6a78;
      uStack_1850 = uStack_6a80;
      uStack_1838 = uStack_6a68;
      uStack_1840 = uStack_6a70;
      uStack_1828 = uStack_6a58;
      uStack_1830 = uStack_6a60;
      uStack_1818 = uStack_6a48;
      uStack_1820 = uStack_6a50;
      uStack_1868 = uStack_6a98;
      uStack_1870 = uStack_6aa0;
      uStack_1858 = uStack_6a88;
      uStack_1860 = uStack_6a90;
      func_0x000101895d08(&uStack_7048);
      uStack_1780 = uStack_6fe8;
      uStack_1760 = uStack_6fc8;
      uStack_17b8 = uStack_7020;
      uStack_17c0 = uStack_7028;
      uStack_17a8 = uStack_7010;
      uStack_17b0 = uStack_7018;
      uStack_1798 = uStack_7000;
      uStack_17a0 = uStack_7008;
      uStack_1788 = uStack_6ff0;
      uStack_1790 = uStack_6ff8;
      uStack_17e0 = CONCAT71(uStack_7047,uStack_7048);
      uStack_17d8 = uStack_7040;
      uStack_17c8 = uStack_7030;
      uStack_17d0 = uStack_7038;
      func_0x0001018797b4(&uStack_64f0);
      uStack_1708 = uStack_64a8;
      uStack_1710 = uStack_64b0;
      uStack_16f8 = uStack_6498;
      uStack_1700 = uStack_64a0;
      uStack_16f0 = uStack_6490;
      uStack_16df = uStack_647f;
      uStack_1748 = uStack_64e8;
      uStack_1750 = uStack_64f0;
      uStack_1738 = uStack_64d8;
      uStack_1740 = uStack_64e0;
      uStack_1728 = uStack_64c8;
      uStack_1730 = uStack_64d0;
      uStack_1718 = uStack_64b8;
      uStack_1720 = uStack_64c0;
      func_0x000101895d28(&uStack_6470);
      uStack_1688 = uStack_6428;
      uStack_1690 = uStack_6430;
      uStack_1678 = uStack_6418;
      uStack_1680 = uStack_6420;
      uStack_1670 = uStack_6410;
      uStack_165e = uStack_63fe;
      uStack_16c8 = uStack_6468;
      uStack_16d0 = uStack_6470;
      uStack_16b8 = uStack_6458;
      uStack_16c0 = uStack_6460;
      uStack_16a8 = uStack_6448;
      uStack_16b0 = uStack_6450;
      uStack_1698 = uStack_6438;
      uStack_16a0 = uStack_6440;
      uStack_1640 = 0;
      uStack_1648 = 0;
      uStack_1650 = 0;
      uStack_1638 = 1;
      uStack_1628 = 0;
      uStack_1630 = 0;
      uStack_1618 = 0;
      uStack_1620 = 0;
      uStack_1610 = 0;
      uStack_1608 = 2;
      uStack_15f8 = 0;
      uStack_1600 = 0;
      uStack_15e8 = 0;
      uStack_15f0 = 0;
      uStack_15d8 = 0;
      uStack_15e0 = 0;
      uStack_15c8 = 0;
      uStack_15d0 = 0;
      uStack_15b8 = 0;
      uStack_15c0 = 0;
      uStack_15a8 = 0;
      uStack_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      uStack_1588 = 0;
      uStack_1590 = 0;
      uStack_1578 = 0;
      uStack_1580 = 0;
      uStack_1568 = 0;
      uStack_1570 = 0;
      uStack_1558 = 0;
      uStack_1560 = 0;
      uStack_1548 = 0;
      uStack_1550 = 0;
      uStack_1538 = 0;
      uStack_1540 = 0;
      uStack_1528 = 0;
      uStack_1530 = 0;
      uStack_1518 = 0;
      uStack_1520 = 0;
      uStack_1508 = 0;
      uStack_1510 = 1;
      uStack_1500 = 0;
      uStack_14e8 = 0;
      uStack_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      uStack_14c8 = 0;
      uStack_14d0 = 0;
      uStack_14b8 = 0;
      uStack_14c0 = 0;
      uStack_14b0 = 0x100;
      uStack_1498 = 0;
      uStack_14a0 = 0;
      uStack_1488 = 0;
      uStack_1490 = 0;
      uStack_1480 = 0;
      func_0x000104218d60(auStack_1e20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                          (ulong)in_stack_ffffffffffff8d88 & 0xffffffffffffff00,&uStack_1870,
                          in_stack_ffffffffffff8d98 & 0xffffffffffffff00,0x30000000000,0,0,0);
      uStack_6078 = uStack_1928;
      uStack_6080 = uStack_1930;
      uStack_6068 = uStack_1918;
      uStack_6070 = uStack_1920;
      uStack_6060 = uStack_1910;
      uStack_6098 = uStack_1948;
      uStack_60a0 = uStack_1950;
      uStack_6088 = uStack_1938;
      uStack_6090 = uStack_1940;
      uStack_60c8 = uStack_1978;
      uStack_60d0 = uStack_1980;
      uStack_60b8 = uStack_1968;
      uStack_60c0 = uStack_1970;
      uStack_60b0 = uStack_1960;
      uStack_6108 = uStack_19b8;
      uStack_6110 = uStack_19c0;
      uStack_60f8 = uStack_19a8;
      uStack_6100 = uStack_19b0;
      uStack_60e8 = uStack_1998;
      uStack_60f0 = uStack_19a0;
      uStack_60d8 = uStack_1988;
      uStack_60e0 = uStack_1990;
      uStack_6128 = uStack_19d8;
      uStack_6130 = uStack_19e0;
      uStack_6118 = uStack_19c8;
      uStack_6120 = uStack_19d0;
      uStack_6148 = uStack_19f8;
      uStack_6150 = uStack_1a00;
      uStack_6138 = uStack_19e8;
      uStack_6140 = uStack_19f0;
      uStack_6168 = uStack_1a18;
      uStack_6170 = uStack_1a20;
      uStack_6158 = uStack_1a08;
      uStack_6160 = uStack_1a10;
      uStack_61c8 = uStack_1a78;
      uStack_61d0 = uStack_1a80;
      uStack_61b8 = uStack_1a68;
      uStack_61c0 = uStack_1a70;
      uStack_6188 = uStack_1a38;
      uStack_6190 = uStack_1a40;
      uStack_6178 = uStack_1a28;
      uStack_6180 = uStack_1a30;
      uStack_61a8 = uStack_1a58;
      uStack_61b0 = uStack_1a60;
      uStack_6198 = uStack_1a48;
      uStack_61a0 = uStack_1a50;
      uStack_7078 = uStack_1ae8;
      bStack_7094 = bStack_1af0;
      bStack_7098 = bStack_1b27;
      bStack_709c = bStack_1b28;
      uStack_7088 = uStack_1b40;
      uStack_7080 = uStack_1b30;
      uStack_6208 = uStack_1b98;
      uStack_6210 = uStack_1ba0;
      uStack_61f8 = uStack_1b88;
      uStack_6200 = uStack_1b90;
      uStack_61f0 = uStack_1b80;
      uStack_61de = uStack_1b6e;
      uStack_6248 = uStack_1bd8;
      uStack_6250 = uStack_1be0;
      uStack_6238 = uStack_1bc8;
      uStack_6240 = uStack_1bd0;
      uStack_6228 = uStack_1bb8;
      uStack_6230 = uStack_1bc0;
      uStack_6218 = uStack_1ba8;
      uStack_6220 = uStack_1bb0;
      uStack_62a8 = uStack_1c38;
      uStack_62b0 = uStack_1c40;
      uStack_6298 = uStack_1c28;
      uStack_62a0 = uStack_1c30;
      uStack_62c8 = uStack_1c58;
      uStack_62d0 = uStack_1c60;
      uStack_62b8 = uStack_1c48;
      uStack_62c0 = uStack_1c50;
      uStack_625f = uStack_1bef;
      uStack_6278 = uStack_1c08;
      uStack_6280 = uStack_1c10;
      uStack_6270 = uStack_1c00;
      uStack_6288 = uStack_1c18;
      uStack_6290 = uStack_1c20;
      uStack_6338 = uStack_1cc0;
      uStack_6340 = uStack_1cc8;
      uStack_6328 = uStack_1cb0;
      uStack_6330 = uStack_1cb8;
      uStack_6358 = uStack_1ce0;
      uStack_6360 = uStack_1ce8;
      uStack_6348 = uStack_1cd0;
      uStack_6350 = uStack_1cd8;
      uStack_62e0 = uStack_1c68;
      uStack_62f8 = uStack_1c80;
      uStack_6300 = uStack_1c88;
      uStack_62e8 = uStack_1c70;
      uStack_62f0 = uStack_1c78;
      uStack_6318 = uStack_1ca0;
      uStack_6320 = uStack_1ca8;
      uStack_6308 = uStack_1c90;
      uStack_6310 = uStack_1c98;
      uStack_70a0 = uStack_1cf8;
      uStack_6370 = uStack_1d20;
      uStack_6388 = uStack_1d38;
      uStack_6390 = uStack_1d40;
      uStack_6378 = uStack_1d28;
      uStack_6380 = uStack_1d30;
      uStack_63c8 = uStack_1d78;
      uStack_63d0 = uStack_1d80;
      uStack_63b8 = uStack_1d68;
      uStack_63c0 = uStack_1d70;
      uStack_63a8 = uStack_1d58;
      uStack_63b0 = uStack_1d60;
      uStack_6398 = uStack_1d48;
      uStack_63a0 = uStack_1d50;
      uStack_63e8 = uStack_1d98;
      uStack_63f0 = uStack_1da0;
      uStack_63d8 = uStack_1d88;
      uStack_63e0 = uStack_1d90;
      lStack_5528 = lStack_1dc8;
      dVar15 = dStack_1dc0;
    }
    else {
      uStack_7048 = uStack_5478;
      uStack_70a0 = uStack_5458;
      uStack_6338 = uStack_5420;
      uStack_6340 = uStack_5428;
      uStack_6328 = uStack_5410;
      uStack_6330 = uStack_5418;
      uStack_6358 = uStack_5440;
      uStack_6360 = uStack_5448;
      uStack_6348 = uStack_5430;
      uStack_6350 = uStack_5438;
      uStack_62e0 = uStack_53c8;
      uStack_62f8 = uStack_53e0;
      uStack_6300 = uStack_53e8;
      uStack_62e8 = uStack_53d0;
      uStack_62f0 = uStack_53d8;
      uStack_6318 = uStack_5400;
      uStack_6320 = uStack_5408;
      uStack_6308 = uStack_53f0;
      uStack_6310 = uStack_53f8;
      uStack_1870 = CONCAT71(uStack_1870._1_7_,uStack_52b0);
      uStack_17e0 = CONCAT71(uStack_17e0._1_7_,uStack_52af);
      uStack_16d0 = CONCAT71(uStack_16d0._1_7_,uStack_5298);
      uStack_7088 = uStack_52a0;
      uStack_7080 = uStack_5290;
      uStack_7078 = uStack_5248;
      bStack_7094 = bStack_5250;
      bStack_7098 = bStack_5287;
      bStack_709c = bStack_5288;
      uStack_61a8 = uStack_51b8;
      uStack_61b0 = uStack_51c0;
      uStack_6198 = uStack_51a8;
      uStack_61a0 = uStack_51b0;
      uStack_6188 = uStack_5198;
      uStack_6190 = uStack_51a0;
      uStack_6178 = uStack_5188;
      uStack_6180 = uStack_5190;
      uStack_61c8 = uStack_51d8;
      uStack_61d0 = uStack_51e0;
      uStack_61b8 = uStack_51c8;
      uStack_61c0 = uStack_51d0;
      uStack_6148 = uStack_5158;
      uStack_6150 = uStack_5160;
      uStack_6138 = uStack_5148;
      uStack_6140 = uStack_5150;
      uStack_6168 = uStack_5178;
      uStack_6170 = uStack_5180;
      uStack_6158 = uStack_5168;
      uStack_6160 = uStack_5170;
      uStack_60c8 = uStack_50d8;
      uStack_60d0 = uStack_50e0;
      uStack_60b8 = uStack_50c8;
      uStack_60c0 = uStack_50d0;
      uStack_60b0 = uStack_50c0;
      uStack_6128 = uStack_5138;
      uStack_6130 = uStack_5140;
      uStack_6118 = uStack_5128;
      uStack_6120 = uStack_5130;
      uStack_6108 = uStack_5118;
      uStack_6110 = uStack_5120;
      uStack_60f8 = uStack_5108;
      uStack_6100 = uStack_5110;
      uStack_60e8 = uStack_50f8;
      uStack_60f0 = uStack_5100;
      uStack_60d8 = uStack_50e8;
      uStack_60e0 = uStack_50f0;
      uStack_6060 = uStack_5070;
      uStack_6078 = uStack_5088;
      uStack_6080 = uStack_5090;
      uStack_6068 = uStack_5078;
      uStack_6070 = uStack_5080;
      uStack_6098 = uStack_50a8;
      uStack_60a0 = uStack_50b0;
      uStack_6088 = uStack_5098;
      uStack_6090 = uStack_50a0;
      uStack_6370 = uStack_5480;
      uStack_6388 = uStack_5498;
      uStack_6390 = uStack_54a0;
      uStack_6380 = uStack_5490;
      uStack_6378 = uStack_5488;
      uStack_63c8 = uStack_54d8;
      uStack_63d0 = uStack_54e0;
      uStack_63c0 = uStack_54d0;
      uStack_63b8 = uStack_54c8;
      uStack_63b0 = uStack_54c0;
      uStack_63a8 = uStack_54b8;
      uStack_6398 = uStack_54a8;
      uStack_63a0 = uStack_54b0;
      uStack_63f0 = uStack_5500;
      uStack_63e8 = uStack_54f8;
      uStack_63d8 = uStack_54e8;
      uStack_63e0 = uStack_54f0;
      uStack_6288 = uStack_5378;
      uStack_6290 = uStack_5380;
      uStack_6280 = uStack_5370;
      uStack_6278 = uStack_5368;
      uStack_6270 = uStack_5360;
      uStack_625f = uStack_534f;
      uStack_62c8 = uStack_53b8;
      uStack_62d0 = uStack_53c0;
      uStack_62b8 = uStack_53a8;
      uStack_62c0 = uStack_53b0;
      uStack_62a8 = uStack_5398;
      uStack_62b0 = uStack_53a0;
      uStack_6298 = uStack_5388;
      uStack_62a0 = uStack_5390;
      uStack_6230 = uStack_5320;
      uStack_6228 = uStack_5318;
      uStack_6218 = uStack_5308;
      uStack_6220 = uStack_5310;
      uStack_6248 = uStack_5338;
      uStack_6250 = uStack_5340;
      uStack_6238 = uStack_5328;
      uStack_6240 = uStack_5330;
      uStack_61de = uStack_52ce;
      uStack_61f8 = uStack_52e8;
      uStack_6200 = uStack_52f0;
      uStack_61f0 = uStack_52e0;
      uStack_6208 = uStack_52f8;
      uStack_6210 = uStack_5300;
      dVar15 = dStack_5520;
      bStack_195e = bStack_50be;
    }
    uStack_69a0 = uStack_6370;
    uStack_69b8 = uStack_6388;
    uStack_69c0 = uStack_6390;
    uStack_69a8 = uStack_6378;
    uStack_69b0 = uStack_6380;
    uStack_69f8 = uStack_63c8;
    uStack_6a00 = uStack_63d0;
    uStack_69e8 = uStack_63b8;
    uStack_69f0 = uStack_63c0;
    uStack_69d8 = uStack_63a8;
    uStack_69e0 = uStack_63b0;
    uStack_69c8 = uStack_6398;
    uStack_69d0 = uStack_63a0;
    uStack_6a18 = uStack_63e8;
    uStack_6a20 = uStack_63f0;
    uStack_6a08 = uStack_63d8;
    uStack_6a10 = uStack_63e0;
    uStack_6978 = uStack_70a0;
    uStack_6900 = uStack_62f8;
    uStack_6908 = uStack_6300;
    uStack_68f0 = uStack_62e8;
    uStack_68f8 = uStack_62f0;
    uStack_6940 = uStack_6338;
    uStack_6948 = uStack_6340;
    uStack_6930 = uStack_6328;
    uStack_6938 = uStack_6330;
    uStack_6920 = uStack_6318;
    uStack_6928 = uStack_6320;
    uStack_6910 = uStack_6308;
    uStack_6918 = uStack_6310;
    uStack_6960 = uStack_6358;
    uStack_6968 = uStack_6360;
    uStack_6950 = uStack_6348;
    uStack_6958 = uStack_6350;
    uStack_68e8 = uStack_62e0;
    uStack_686f = uStack_625f;
    uStack_6898 = uStack_6288;
    uStack_68a0 = uStack_6290;
    uStack_6888 = uStack_6278;
    uStack_6890 = uStack_6280;
    uStack_6880 = uStack_6270;
    uStack_68d8 = uStack_62c8;
    uStack_68e0 = uStack_62d0;
    uStack_68c8 = uStack_62b8;
    uStack_68d0 = uStack_62c0;
    uStack_68b8 = uStack_62a8;
    uStack_68c0 = uStack_62b0;
    uStack_68a8 = uStack_6298;
    uStack_68b0 = uStack_62a0;
    uStack_67ee = uStack_61de;
    uStack_6838 = uStack_6228;
    uStack_6840 = uStack_6230;
    uStack_6828 = uStack_6218;
    uStack_6830 = uStack_6220;
    uStack_6858 = uStack_6248;
    uStack_6860 = uStack_6250;
    uStack_6848 = uStack_6238;
    uStack_6850 = uStack_6240;
    uStack_6808 = uStack_61f8;
    uStack_6810 = uStack_6200;
    uStack_6800 = uStack_61f0;
    uStack_6818 = uStack_6208;
    uStack_6820 = uStack_6210;
    uStack_67c0 = uStack_7088;
    uStack_67b0 = uStack_7080;
    bStack_67a8 = bStack_709c & 1;
    bStack_67a7 = bStack_7098 & 1;
    bStack_6770 = bStack_7094 & 1;
    uStack_6768 = uStack_7078;
    uStack_66c8 = uStack_6198;
    uStack_66d0 = uStack_61a0;
    uStack_66b8 = uStack_6188;
    uStack_66c0 = uStack_6190;
    uStack_66f8 = uStack_61c8;
    uStack_6700 = uStack_61d0;
    uStack_66e8 = uStack_61b8;
    uStack_66f0 = uStack_61c0;
    uStack_66d8 = uStack_61a8;
    uStack_66e0 = uStack_61b0;
    uStack_6658 = uStack_6128;
    uStack_6660 = uStack_6130;
    uStack_6668 = uStack_6138;
    uStack_6670 = uStack_6140;
    uStack_6678 = uStack_6148;
    uStack_6680 = uStack_6150;
    uStack_6688 = uStack_6158;
    uStack_6690 = uStack_6160;
    uStack_66a8 = uStack_6178;
    uStack_66b0 = uStack_6180;
    uStack_6698 = uStack_6168;
    uStack_66a0 = uStack_6170;
    uStack_6618 = uStack_60e8;
    uStack_6620 = uStack_60f0;
    uStack_6628 = uStack_60f8;
    uStack_6630 = uStack_6100;
    uStack_6638 = uStack_6108;
    uStack_6640 = uStack_6110;
    uStack_6648 = uStack_6118;
    uStack_6650 = uStack_6120;
    uStack_65e0 = uStack_60b0;
    uStack_65e8 = uStack_60b8;
    uStack_65f0 = uStack_60c0;
    uStack_65f8 = uStack_60c8;
    uStack_6600 = uStack_60d0;
    uStack_6608 = uStack_60d8;
    uStack_6610 = uStack_60e0;
    bStack_65de = bStack_195e & 1;
    uStack_65c8 = uStack_6098;
    uStack_65d0 = uStack_60a0;
    uStack_6590 = uStack_6060;
    uStack_6598 = uStack_6068;
    uStack_65a0 = uStack_6070;
    uStack_65a8 = uStack_6078;
    uStack_65b0 = uStack_6080;
    uStack_65b8 = uStack_6088;
    uStack_65c0 = uStack_6090;
    FUN_1034c7528(&uStack_5580,&uStack_7048,0x112dcbd00,&UNK_10d98e550);
    FUN_1035cb6dc(0 < lStack_5528,0,0xc000000000000000);
    if (lStack_5528 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c6398);
      (*pcVar2)();
    }
    if (0x7fffffff < lStack_5528) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c639c);
      (*pcVar2)();
    }
    FUN_1035cb924(lStack_5528,0,0xc000000000000000);
    func_0x0001035cb538((float)(dVar15 / 1000.0),0,0xc000000000000000);
    param_2 = param_2 + *(int *)(lVar5 + 100);
    uVar1 = 0;
    if (*(long *)(param_2 + 8) != 1) {
      uVar1 = (uint)((ulong)*(undefined8 *)(param_2 + 0x18) >> 8) & 1;
    }
    FUN_1035cbea8(uVar1,0,0xc000000000000000);
    FUN_1035cce34(0,1);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar13);
    func_0x000107c6142c(uVar12);
    func_0x000107c61588(lVar7);
    func_0x000107c61574(uVar11);
    func_0x000107c6145c(lVar7,0x60,7);
    func_0x00010178e3b8(&uStack_6aa0);
    uVar9 = uStack_6040;
    lVar4 = lStack_6048;
    puVar6 = puStack_6050;
    FUN_1034c73c4(*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),
                  *(undefined8 *)(param_3 + 0x60));
    *(long *)(param_3 + 0x58) = lVar4;
    *(undefined1 **)(param_3 + 0x50) = puVar6;
    *(undefined8 *)(param_3 + 0x60) = uVar9;
    func_0x00010179528c(&uStack_3390);
  }
  else {
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar13);
    func_0x000107c6142c(uVar12);
    func_0x000107c61588(lVar7);
    func_0x000107c61574(uVar11);
    func_0x000107c6145c(lVar7,0x60,7);
    func_0x00010179528c(&uStack_3390);
  }
  return;
}



/* Entry: 1034c639c; end: 1034c63fb; -[_TtC35AdProtoImpressionDataImplementation28AdProtoImpressionDataBuilder init] */

void FUN_1034c639c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.AdProtoImpressionDataBuilder",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034c63c8);
  (*pcVar1)();
}



/* Entry: 1034c63fc; end: 1034c6453; -[_TtC35AdProtoImpressionDataImplementation28AdProtoImpressionDataBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034c6418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034c6438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034c641c) */
/* WARNING: Removing unreachable block (ram,0x0001034c643c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034c63fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f73248));
  return;
}



/* Entry: 1034c6454; end: 1034c646f;  */

void FUN_1034c6454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034c6470,0,0);
  return;
}



/* Entry: 1034c6470; end: 1034c64cf;  */

/* WARNING: Removing unreachable block (ram,0x0001034c6498) */

void FUN_1034c6470(void)

{
  long unaff_x22;
  
  FUN_1034be148(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001034c64cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1034c64d0; end: 1034c64d7;  */

void FUN_1034c64d0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034c64d8; end: 1034c650b;  */

void FUN_1034c64d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034c650c; end: 1034c6583;  */

void FUN_1034c650c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1034c6584;
  plVar5[9] = lVar2;
  plVar5[10] = lVar4;
  plVar5[7] = lVar1;
  plVar5[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034beb40,0,0);
  return;
}



/* Entry: 1034c6584; end: 1034c65bf;  */

void FUN_1034c6584(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001034c65bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1034c65c0; end: 1034c6747;  */

undefined1  [16] FUN_1034c65c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1542c0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 1034c6748; end: 1034c6c57;  */

void FUN_1034c6748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  ulong in_stack_ffffffffffffd978;
  ulong in_stack_ffffffffffffd988;
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_24d0 [24];
  undefined *puStack_24b8;
  undefined **ppuStack_24b0;
  undefined1 auStack_1a18 [1448];
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined1 uStack_1408;
  undefined1 auStack_13f8 [776];
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fdf;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined1 uStack_ec0;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e3f;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dbe;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
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
  undefined2 uStack_c60;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined2 uStack_c10;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined1 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a4f;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9ce;
  undefined1 auStack_9c0 [1448];
  undefined1 auStack_418 [776];
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
  undefined8 uStack_5f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_24b8 = &UNK_11065d188;
  ppuStack_24b0 = &PTR_DAT_11065d0f0;
  auStack_24d0[0] = 9;
  func_0x0001034e2644(auStack_24d0);
  func_0x0001000834e4(auStack_24d0);
  func_0x000101895cec(&uStack_bd0);
  uStack_f68 = uStack_b68;
  uStack_f70 = uStack_b70;
  uStack_f58 = uStack_b58;
  uStack_f60 = uStack_b60;
  uStack_f50 = uStack_b50;
  uStack_fa8 = uStack_ba8;
  uStack_fb0 = uStack_bb0;
  uStack_f98 = uStack_b98;
  uStack_fa0 = uStack_ba0;
  uStack_f78 = uStack_b78;
  uStack_f80 = uStack_b80;
  uStack_f88 = uStack_b88;
  uStack_f90 = uStack_b90;
  uStack_fb8 = uStack_bb8;
  uStack_fc0 = uStack_bc0;
  uStack_fc8 = uStack_bc8;
  uStack_fd0 = uStack_bd0;
  func_0x000101895d08(&uStack_b48);
  uStack_ed8 = uStack_ae0;
  uStack_ee0 = uStack_ae8;
  uStack_ec8 = uStack_ad0;
  uStack_ed0 = uStack_ad8;
  uStack_ec0 = uStack_ac8;
  uStack_f18 = uStack_b20;
  uStack_f20 = uStack_b28;
  uStack_f08 = uStack_b10;
  uStack_f10 = uStack_b18;
  uStack_ee8 = uStack_af0;
  uStack_ef0 = uStack_af8;
  uStack_ef8 = uStack_b00;
  uStack_f00 = uStack_b08;
  uStack_f28 = uStack_b30;
  uStack_f30 = uStack_b38;
  uStack_f38 = uStack_b40;
  uStack_f40 = uStack_b48;
  func_0x0001018797b4(&uStack_ac0);
  uStack_e68 = uStack_a78;
  uStack_e70 = uStack_a80;
  uStack_e58 = uStack_a68;
  uStack_e60 = uStack_a70;
  uStack_e50 = uStack_a60;
  uStack_e3f = uStack_a4f;
  uStack_ea8 = uStack_ab8;
  uStack_eb0 = uStack_ac0;
  uStack_e98 = uStack_aa8;
  uStack_ea0 = uStack_ab0;
  uStack_e88 = uStack_a98;
  uStack_e90 = uStack_aa0;
  uStack_e78 = uStack_a88;
  uStack_e80 = uStack_a90;
  func_0x000101895d28(&uStack_a40);
  uStack_de8 = uStack_9f8;
  uStack_df0 = uStack_a00;
  uStack_dd8 = uStack_9e8;
  uStack_de0 = uStack_9f0;
  uStack_dd0 = uStack_9e0;
  uStack_dbe = uStack_9ce;
  uStack_e28 = uStack_a38;
  uStack_e30 = uStack_a40;
  uStack_e18 = uStack_a28;
  uStack_e20 = uStack_a30;
  uStack_e08 = uStack_a18;
  uStack_e10 = uStack_a20;
  uStack_df8 = uStack_a08;
  uStack_e00 = uStack_a10;
  uStack_db0 = 0;
  uStack_da0 = 0;
  uStack_da8 = 0;
  uStack_d98 = 1;
  uStack_d88 = 0;
  uStack_d90 = 0;
  uStack_d78 = 0;
  uStack_d80 = 0;
  uStack_d70 = 0;
  uStack_d68 = 2;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  uStack_d50 = 0;
  uStack_d38 = 0;
  uStack_d40 = 0;
  uStack_d28 = 0;
  uStack_d30 = 0;
  uStack_d18 = 0;
  uStack_d20 = 0;
  uStack_d08 = 0;
  uStack_d10 = 0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c80 = 0;
  uStack_c68 = 0;
  uStack_c70 = 1;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c40 = 0;
  uStack_c28 = 0;
  uStack_c30 = 0;
  uStack_c18 = 0;
  uStack_c20 = 0;
  uStack_c10 = 0x100;
  uStack_bf8 = 0;
  uStack_c00 = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  uStack_be0 = 0;
  puVar2 = &uStack_e30;
  uVar1 = 0;
  func_0x000104218d60(auStack_9c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                      in_stack_ffffffffffffd978 & 0xffffffffffffff00,&uStack_fd0,
                      in_stack_ffffffffffffd988 & 0xffffffffffffff00,0x30000000000,0,0,0);
  func_0x00010178e49c(auStack_9c0);
  func_0x000107c610b4(auStack_1a18,auStack_9c0,0x5a8);
  uStack_1468 = 0;
  uStack_1470 = 0;
  uStack_1458 = 0;
  uStack_1460 = 0;
  uStack_1450 = 1;
  uStack_1440 = 0;
  uStack_1448 = 0;
  uStack_1430 = 0;
  uStack_1438 = 0;
  uStack_1420 = 0;
  uStack_1428 = 0;
  uStack_1410 = 0;
  uStack_1418 = 0;
  uStack_1408 = 0;
  func_0x00010178e4b4(auStack_418);
  func_0x000107c610b4(auStack_13f8,auStack_418,0x301);
  uStack_10e0 = 0;
  uStack_10e8 = 0;
  uStack_10d0 = 0;
  uStack_10d8 = 0;
  uStack_10c0 = 0;
  uStack_10c8 = 0;
  uStack_10b0 = 0;
  uStack_10b8 = 0;
  uStack_10a0 = 0;
  uStack_10a8 = 0;
  uStack_10f0 = 1;
  uStack_1098 = 0;
  func_0x00010178e4d4(&uStack_110);
  uStack_1008 = uStack_88;
  uStack_1010 = uStack_90;
  uStack_ff8 = uStack_78;
  uStack_1000 = uStack_80;
  uStack_ff0 = uStack_70;
  uStack_fdf = uStack_5f;
  uStack_1048 = uStack_c8;
  uStack_1050 = uStack_d0;
  uStack_1038 = uStack_b8;
  uStack_1040 = uStack_c0;
  uStack_1028 = uStack_a8;
  uStack_1030 = uStack_b0;
  uStack_1018 = uStack_98;
  uStack_1020 = uStack_a0;
  uStack_1088 = uStack_108;
  uStack_1090 = uStack_110;
  uStack_1078 = uStack_f8;
  uStack_1080 = uStack_100;
  uStack_1068 = uStack_e8;
  uStack_1070 = uStack_f0;
  uStack_1058 = uStack_d8;
  uStack_1060 = uStack_e0;
  func_0x000104220e6c(auStack_24d0,param_3,auStack_1a18,&uStack_1470,auStack_13f8,1,0,1,0,0x202,
                      &uStack_10f0,&uStack_1090,1,0,uVar1 & 0xffffffffffffff00,0,0,1,0,3,
                      (ulong)puVar2 & 0xffffffffffff0000);
  func_0x000107c610b4(extraout_x8,auStack_24d0,0xab2);
  return;
}



/* Entry: 1034c6c58; end: 1034c6c8f;  */

undefined1  [16] FUN_1034c6c58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f154610;
  auVar1._0_8_ = 0xd000000000000036;
  return auVar1;
}



/* Entry: 1034c6c90; end: 1034c6d17;  */

undefined1  [16] FUN_1034c6c90(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  lVar2 = 0;
  func_0x000100b91d00();
  func_0x0001046b4ddc(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x48)));
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f154690;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 1034c6d18; end: 1034c6ffb;  */

void FUN_1034c6d18(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_90 [3];
  byte bStack_71;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)auStack_90 - extraout_x8;
  lVar3 = 0;
  func_0x000100b91fbc();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1034c7528(param_1,lVar5,0x112db39a8,&UNK_10d95dd90);
  lVar2 = lVar5;
  (**(code **)(lVar9 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x0001034c7570(lVar5,0x112db39a8,&UNK_10d95dd90);
    return;
  }
  func_0x0001034c75b0(lVar5,lVar4);
  uVar7 = *(ulong *)(lVar4 + 0x40);
  if (uVar7 == 0) goto LAB_1034c6ef8;
  uVar8 = *(ulong *)(lVar4 + 0x38);
  uVar1 = uVar8 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar1 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) goto LAB_1034c6ef8;
  uStack_58._4_4_ = 0;
  lStack_60 = (long)&uStack_58 + 4;
  if ((uVar7 >> 0x3c & 1) == 0) {
    if ((uVar7 >> 0x3d & 1) == 0) {
      if ((uVar8 >> 0x3c & 1) == 0) goto LAB_1034c6fc0;
      puVar6 = (ulong *)(uVar7 + 0x20);
      if (*(byte *)puVar6 < 0x21 && (1L << ((ulong)*(byte *)puVar6 & 0x3f) & 0x100003e01U) != 0)
      goto LAB_1034c6eb4;
      func_0x000107c61434(uVar7);
    }
    else {
      auStack_90[1] = uVar7 & 0xffffffffffffff;
      auStack_90[0] = uVar8;
      if (((uint)uVar8 & 0xff) < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003e01U) != 0) {
LAB_1034c6eb4:
        func_0x000107c61434(uVar7);
        goto LAB_1034c6ebc;
      }
      func_0x000107c61434(uVar7);
      puVar6 = auStack_90;
    }
    func_0x000107c60eb8(puVar6,(long)&uStack_58 + 4);
    if ((puVar6 != (ulong *)0x0) && ((byte)*puVar6 == 0)) {
LAB_1034c6fac:
      FUN_1034e55ac(uStack_58._4_4_,0,0xc000000000000000);
    }
  }
  else {
LAB_1034c6fc0:
    func_0x000107c61434(uVar7);
    func_0x000107c602f0(&bStack_71,FUN_1034c7630,auStack_70,uVar8,uVar7,PTR___sSbN_11034dd40);
    if ((bStack_71 & 1) != 0) goto LAB_1034c6fac;
  }
LAB_1034c6ebc:
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(0,0xc000000000000000);
  func_0x000107c6142c(uVar7);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001034e5874(uVar8,uVar7,0,0xc000000000000000);
LAB_1034c6ef8:
  puVar6 = (ulong *)(lVar4 + *(int *)(lVar3 + 0x30));
  uVar7 = puVar6[1];
  if (uVar7 != 0) {
    uVar8 = *puVar6;
    uVar1 = uVar8 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61438(uVar7,2);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar7);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x0001034e592c(uVar8,uVar7,0,0xc000000000000000);
    }
  }
  func_0x0001034c75f4(lVar4,&SUB_100b91fbc);
  return;
}



/* Entry: 1034c6ffc; end: 1034c7043;  */

undefined8 FUN_1034c6ffc(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 0x23) {
    return *(undefined8 *)(&UNK_10dbce798 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034c7044);
  (*pcVar1)();
}



/* Entry: 1034c7044; end: 1034c7297;  */

undefined8 * FUN_1034c7044(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0xffffffffffffffff;
  }
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000103bf8d94();
  uStack_70 = *puVar2;
  uVar4 = puVar2[1];
  uStack_68 = uVar4;
  func_0x000107c61438(uVar4,2);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  puVar3 = puVar1;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x000107c6142c(uVar4);
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c6142c(uVar4);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x000107c61170(puVar1);
    func_0x0001034c7570(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0;
    func_0x0001002ed07c(0);
    ppuVar5 = &puStack_78;
    puVar2 = &uStack_50;
    func_0x000107c6147c(ppuVar5,puVar2,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar6 = (uint)puVar2;
    if (((ulong)ppuVar5 & 1) != 0) {
      puVar2 = puStack_78;
      func_0x000107c49820(puStack_78);
      func_0x0001018aad68();
      if ((uVar6 & 0xff) != 1) {
        FUN_1034c6ffc();
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puStack_78);
        return puVar2;
      }
      func_0x000107c61170(puVar1);
      puVar1 = puStack_78;
    }
    func_0x000107c61170(puVar1);
  }
  return (undefined8 *)0xffffffffffffffff;
}



/* Entry: 1034c7298; end: 1034c72d7;  */

void FUN_1034c7298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd8750;
  func_0x000107c61520(&DAT_10dbd8750,&UNK_110663558);
  puRam0000000112f73298 = puVar1;
  return;
}



/* Entry: 1034c72d8; end: 1034c7347;  */

undefined8 FUN_1034c72d8(undefined8 param_1)

{
  FUN_103544308();
  return param_1;
}



/* Entry: 1034c7348; end: 1034c734f;  */

undefined1  [16] FUN_1034c7348(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  lVar2 = 0;
  func_0x000100b91d00();
  func_0x0001046b4ddc(*(undefined8 *)(lVar3 + *(int *)(lVar2 + 0x48)));
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f154690;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 1034c7350; end: 1034c7383;  */

undefined8 FUN_1034c7350(undefined8 param_1)

{
  (*(code *)(undefined *)0x103525c00)();
  return param_1;
}



/* Entry: 1034c7384; end: 1034c73c3;  */

void FUN_1034c7384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f732a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd5168;
  func_0x000107c61520(&DAT_10dbd5168,&UNK_1106613a0);
  puRam0000000112f732a0 = puVar1;
  return;
}



/* Entry: 1034c73c4; end: 1034c74c7;  */

void FUN_1034c73c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 1034c74c8; end: 1034c7527;  */

/* WARNING: Possible PIC construction at 0x0001034c7500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034c7504) */
/* WARNING: Removing unreachable block (ram,0x00010159fa64) */
/* WARNING: Removing unreachable block (ram,0x000100cb5b9c) */
/* WARNING: Removing unreachable block (ram,0x000100cb5bac) */
/* WARNING: Removing unreachable block (ram,0x000100cb5ba8) */

void FUN_1034c74c8(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1034c7528; end: 1034c762f;  */

undefined8 FUN_1034c7528(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034c7630; end: 1034c76a7;  */

void FUN_1034c7630(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb8(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1034c76a8; end: 1034c7d87;  */

undefined1  [16] FUN_1034c76a8(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_2 == 0) {
    return ZEXT816(1) << 0x40;
  }
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
    goto LAB_1034c77a4;
  }
  uVar4 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  if ((param_1 != 0xd000000000000016) || (uVar4 != 0x800000010f1546b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010f1546b0,param_1,uVar4,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000011;
      if (((param_1 == 0xd000000000000011) && (uVar4 == 0x800000010f1546d0)) ||
         (func_0x000107c605b8(0xd000000000000011,0x800000010f1546d0,param_1,uVar4,0),
         (uVar2 & 1) != 0)) {
        func_0x000107c6142c(uVar4);
        uVar1 = 2;
        goto LAB_1034c77a4;
      }
      if ((param_1 != 0xd000000000000010) || (uVar4 != 0x800000010f1546f0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010f1546f0,param_1,uVar4,0);
        if ((uVar2 & 1) == 0) {
          if ((param_1 != 0xd000000000000011) || (uVar4 != 0x800000010f154710)) {
            uVar2 = 0xd000000000000011;
            func_0x000107c605b8(0xd000000000000011,0x800000010f154710,param_1,uVar4,0);
            if ((uVar2 & 1) == 0) {
              if ((param_1 != 0xd000000000000010) || (uVar4 != 0x800000010f154730)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000010,0x800000010f154730,param_1,uVar4,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0xd000000000000013;
                  if (((param_1 == 0xd000000000000013) && (uVar4 == 0x800000010f154750)) ||
                     (func_0x000107c605b8(0xd000000000000013,0x800000010f154750,param_1,uVar4,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(uVar4);
                    uVar1 = 6;
                  }
                  else {
                    uVar2 = 0x5649534e4546464f;
                    if (((param_1 == 0x5649534e4546464f) && (uVar4 == 0xef524548544f5f45)) ||
                       (func_0x000107c605b8(0x5649534e4546464f,0xef524548544f5f45,param_1,uVar4,0),
                       (uVar2 & 1) != 0)) {
                      func_0x000107c6142c(uVar4);
                      uVar1 = 7;
                    }
                    else {
                      uVar2 = 0x4156454c45525249;
                      if (((param_1 == 0x4156454c45525249) && (uVar4 == 0xef4f4d45445f544e)) ||
                         (func_0x000107c605b8(0x4156454c45525249,0xef4f4d45445f544e,param_1,uVar4,0)
                         , (uVar2 & 1) != 0)) {
                        func_0x000107c6142c(uVar4);
                        uVar1 = 8;
                      }
                      else {
                        uVar2 = 0;
                        if (((param_1 == 0xd000000000000012) && (uVar4 == 0x800000010f154770)) ||
                           (func_0x000107c605b8(0xd000000000000012,0x800000010f154770,param_1,uVar4,
                                                0), (uVar2 & 1) != 0)) {
                          func_0x000107c6142c(uVar4);
                          uVar1 = 9;
                        }
                        else {
                          if ((param_1 != 0xd000000000000013) || (uVar4 != 0x800000010f154790)) {
                            uVar2 = 0xd000000000000013;
                            func_0x000107c605b8(0xd000000000000013,0x800000010f154790,param_1,uVar4,
                                                0);
                            if ((uVar2 & 1) == 0) {
                              if ((param_1 != 0xd000000000000012) || (uVar4 != 0x800000010f1547b0))
                              {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd000000000000012,0x800000010f1547b0,param_1,
                                                    uVar4,0);
                                if ((uVar2 & 1) == 0) {
                                  if ((param_1 != 0xd000000000000010) ||
                                     (uVar4 != 0x800000010f1547d0)) {
                                    uVar2 = 0;
                                    func_0x000107c605b8(0xd000000000000010,0x800000010f1547d0,
                                                        param_1,uVar4,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0;
                                      if (((param_1 == 0x43535f4455415246) &&
                                          (uVar4 == 0xea00000000004d41)) ||
                                         (func_0x000107c605b8(0x43535f4455415246,0xea00000000004d41,
                                                              param_1,uVar4,0), (uVar2 & 1) != 0)) {
                                        func_0x000107c6142c(uVar4);
                                        uVar1 = 0xd;
                                      }
                                      else {
                                        uVar2 = 0x5259504f435f5049;
                                        if (((param_1 == 0x5259504f435f5049) &&
                                            (uVar4 == 0xec00000054484749)) ||
                                           (func_0x000107c605b8(0x5259504f435f5049,
                                                                0xec00000054484749,param_1,uVar4,0),
                                           (uVar2 & 1) != 0)) {
                                          func_0x000107c6142c(uVar4);
                                          uVar1 = 0xe;
                                        }
                                        else {
                                          uVar2 = 0x45444152545f5049;
                                          if (((param_1 == 0x45444152545f5049) &&
                                              (uVar4 == 0xec0000004b52414d)) ||
                                             (func_0x000107c605b8(0x45444152545f5049,
                                                                  0xec0000004b52414d,param_1,uVar4,0
                                                                 ), (uVar2 & 1) != 0)) {
                                            func_0x000107c6142c(uVar4);
                                            uVar1 = 0xf;
                                          }
                                          else {
                                            uVar2 = 0x494c4255505f5049;
                                            if (((param_1 == 0x494c4255505f5049) &&
                                                (uVar4 == 0xec00000059544943)) ||
                                               (func_0x000107c605b8(0x494c4255505f5049,
                                                                    0xec00000059544943,param_1,uVar4
                                                                    ,0), (uVar2 & 1) != 0)) {
                                              func_0x000107c6142c(uVar4);
                                              uVar1 = 0x10;
                                            }
                                            else {
                                              uVar2 = 0;
                                              if (((param_1 == 0x544e4156454c4552) &&
                                                  (uVar4 == 0xec0000005754465f)) ||
                                                 (((uVar3 = uVar2,
                                                   func_0x000107c605b8(0x544e4156454c4552,
                                                                       0xec0000005754465f,param_1,
                                                                       uVar4,0), (uVar3 & 1) != 0 ||
                                                   ((uVar3 = 0, param_1 == 0xd000000000000014 &&
                                                    (uVar4 == 0x800000010f1547f0)))) ||
                                                  (func_0x000107c605b8(0xd000000000000014,
                                                                       0x800000010f1547f0,param_1,
                                                                       uVar4,0), (uVar3 & 1) != 0)))
                                                 ) {
                                                func_0x000107c6142c(uVar4);
                                                uVar1 = 0x11;
                                              }
                                              else {
                                                if ((param_1 != 0xd000000000000010) ||
                                                   (uVar4 != 0x800000010f154810)) {
                                                  uVar3 = 0;
                                                  func_0x000107c605b8(0xd000000000000010,
                                                                      0x800000010f154810,param_1,
                                                                      uVar4,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    if (((param_1 == 0x544e4156454c4552) &&
                                                        (uVar4 == 0xee00524548544f5f)) ||
                                                       (func_0x000107c605b8(0x544e4156454c4552,
                                                                            0xee00524548544f5f,
                                                                            param_1,uVar4,0),
                                                       (uVar2 & 1) != 0)) {
                                                      func_0x000107c6142c(uVar4);
                                                      uVar1 = 0x13;
                                                    }
                                                    else {
                                                      uVar2 = 0x5f4c4147454c4c49;
                                                      if ((param_1 == 0x5f4c4147454c4c49) &&
                                                         (uVar4 == 0xef544e45544e4f43)) {
                                                        func_0x000107c6142c(0xef544e45544e4f43);
                                                        uVar1 = 0x14;
                                                      }
                                                      else {
                                                        func_0x000107c605b8(0x5f4c4147454c4c49,
                                                                            0xef544e45544e4f43,
                                                                            param_1,uVar4,0);
                                                        func_0x000107c6142c(uVar4);
                                                        uVar1 = 0x14;
                                                        if ((uVar2 & 1) == 0) {
                                                          uVar1 = 0;
                                                        }
                                                      }
                                                    }
                                                    goto LAB_1034c77a4;
                                                  }
                                                }
                                                func_0x000107c6142c(uVar4);
                                                uVar1 = 0x12;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_1034c77a4;
                                    }
                                  }
                                  func_0x000107c6142c(uVar4);
                                  uVar1 = 0xc;
                                  goto LAB_1034c77a4;
                                }
                              }
                              func_0x000107c6142c(uVar4);
                              uVar1 = 0xb;
                              goto LAB_1034c77a4;
                            }
                          }
                          func_0x000107c6142c(uVar4);
                          uVar1 = 10;
                        }
                      }
                    }
                  }
                  goto LAB_1034c77a4;
                }
              }
              func_0x000107c6142c(uVar4);
              uVar1 = 5;
              goto LAB_1034c77a4;
            }
          }
          func_0x000107c6142c(uVar4);
          uVar1 = 4;
          goto LAB_1034c77a4;
        }
      }
      func_0x000107c6142c(uVar4);
      uVar1 = 3;
      goto LAB_1034c77a4;
    }
  }
  func_0x000107c6142c(uVar4);
  uVar1 = 1;
LAB_1034c77a4:
  auVar5._8_8_ = 1;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 1034c7d88; end: 1034c7eaf;  */

void FUN_1034c7d88(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  
  bVar2 = *param_2;
  func_0x000101556278(2,0,0);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434(uVar6);
  uVar4 = uVar6;
  FUN_1034c76a8();
  uVar5 = *(ulong *)(param_2 + 0x20);
  uVar7 = *(ulong *)(param_2 + 0x18);
  uStack_60 = uVar7;
  uStack_58 = uVar5;
  func_0x000107c6142c(uVar6);
  if (uVar5 != 0) {
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(uVar5);
      uVar6 = 0xc000000000000000;
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar5);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000101597ae4(0,0,0,0);
      goto LAB_1034c7e6c;
    }
    func_0x000101994d34(&uStack_60);
    uVar5 = 0;
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_1034c7e6c:
  *param_1 = uVar3;
  *(char *)(param_1 + 1) = (char)uVar4;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = (ulong)bVar2 & 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[7] = uVar7;
  param_1[8] = uVar5;
  param_1[9] = 0;
  param_1[10] = uVar6;
  return;
}



/* Entry: 1034c7eb0; end: 1034c7f43;  */

void FUN_1034c7eb0(ulong *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uStack_38;
  
  func_0x000101556278(2,0,0);
  if (param_3 < 6) {
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = 0xc000000000000000;
    param_1[2] = 0;
    param_1[4] = param_2 & 1;
    param_1[6] = 0xc000000000000000;
    param_1[5] = 0;
    return;
  }
  uStack_38 = param_3;
  func_0x000107c60614(&UNK_11079aa50,&uStack_38,&UNK_11079aa50,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034c7f44);
  (*pcVar1)();
}



/* Entry: 1034c7f44; end: 1034c8067;  */

void FUN_1034c7f44(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_48;
  
  func_0x000101556278(2,0,0);
  if (3 < param_3) {
    uStack_48 = param_3;
    func_0x000107c60614(&UNK_110799178,&uStack_48,&UNK_110799178,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034c8068);
    (*pcVar1)();
  }
  if (param_5 != 0) {
    uVar2 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar2 = param_5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c61434(param_5);
      uVar2 = 0xc000000000000000;
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(param_5);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000101597ae4(0,0,0,0);
      goto LAB_1034c8000;
    }
    func_0x000107c6142c(param_5);
    param_5 = 0;
  }
  param_4 = 0;
  uVar2 = 0;
LAB_1034c8000:
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = param_2 & 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = 0;
  param_1[10] = uVar2;
  return;
}



/* Entry: 1034c8068; end: 1034c8313;  */

void FUN_1034c8068(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [9];
  undefined8 uStack_157;
  undefined8 uStack_14f;
  undefined8 uStack_147;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  FUN_103512864(auStack_160);
  uStack_180 = uStack_a0;
  uStack_178 = uStack_e8;
  uStack_170 = uStack_90;
  bVar2 = *param_2;
  func_0x000101556278(uStack_130,uStack_128,uStack_120);
  uVar7 = *(ulong *)(param_2 + 8);
  if (6 < uVar7) {
    uStack_168 = uVar7;
    func_0x000107c60614(&UNK_110799200,&uStack_168,&UNK_110799200,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c8314);
    (*pcVar5)();
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 >> 0x1f == 0) {
    func_0x000100d54a18(uStack_118,uStack_110,uStack_108);
    uVar9 = *(ulong *)(param_2 + 0x18);
    if (uVar9 >> 0x1f == 0) {
      func_0x000100d54a18(uStack_100,uStack_f8,uStack_f0);
      bVar3 = param_2[0x29];
      func_0x000101556278(uStack_d0,uStack_c8,uStack_c0);
      bVar4 = param_2[0x2a];
      func_0x000101556278(uStack_b8,uStack_b0,uStack_a8);
      uVar11 = uStack_e0;
      uVar12 = uStack_d8;
      if (param_2[0x28] != 1) {
        uStack_178 = (ulong)(uint)(float)*(double *)(param_2 + 0x20);
        func_0x000100d54a18(uStack_e8,uStack_e0,uStack_d8);
        uVar11 = 0;
        uVar12 = 0xc000000000000000;
      }
      uVar13 = uStack_98;
      if (param_2[0x2b] != 2) {
        uStack_180 = (ulong)param_2[0x2b] & 1;
        func_0x000101556278(uStack_a0,uStack_98,uStack_90);
        uVar13 = 0;
        uStack_170 = 0xc000000000000000;
      }
      uVar8 = *(ulong *)(param_2 + 0x38);
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(param_2 + 0x30);
        uVar1 = uVar10 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar1 = uVar8 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x00010189a670(param_2);
        }
        else {
          func_0x000107c61434(uVar8);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(uVar8);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000101597ae4(uStack_88,uStack_80,uStack_78,uStack_70);
          uStack_78 = 0;
          uStack_70 = 0xc000000000000000;
          uStack_80 = uVar8;
          uStack_88 = uVar10;
        }
      }
      *param_1 = uVar7;
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined8 *)((long)param_1 + 0x11) = uStack_14f;
      *(undefined8 *)((long)param_1 + 9) = uStack_157;
      *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_138,uStack_13f);
      *(undefined8 *)((long)param_1 + 0x19) = uStack_147;
      param_1[5] = CONCAT71(uStack_137,uStack_138);
      param_1[6] = (ulong)bVar2 & 1;
      param_1[8] = 0xc000000000000000;
      param_1[7] = 0;
      param_1[9] = uVar6;
      param_1[0xb] = 0xc000000000000000;
      param_1[10] = 0;
      param_1[0xc] = uVar9;
      param_1[0xe] = 0xc000000000000000;
      param_1[0xd] = 0;
      param_1[0xf] = uStack_178;
      param_1[0x10] = uVar11;
      param_1[0x11] = uVar12;
      param_1[0x12] = (ulong)bVar3 & 1;
      param_1[0x14] = 0xc000000000000000;
      param_1[0x13] = 0;
      param_1[0x15] = (ulong)bVar4 & 1;
      param_1[0x17] = 0xc000000000000000;
      param_1[0x16] = 0;
      param_1[0x18] = uStack_180;
      param_1[0x19] = uVar13;
      param_1[0x1a] = uStack_170;
      param_1[0x1b] = uStack_88;
      param_1[0x1c] = uStack_80;
      param_1[0x1d] = uStack_78;
      param_1[0x1e] = uStack_70;
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c82f0);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c82ec);
  (*pcVar5)();
}



/* Entry: 1034c8314; end: 1034c835f;  */

undefined1  [16] FUN_1034c8314(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  if (param_1 < 0x18) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dbce8b0 + param_1 * 8);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_110798820,&uStack_18,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034c8360);
  (*pcVar1)();
}



/* Entry: 1034c8360; end: 1034c863f;  */

void FUN_1034c8360(undefined8 *param_1,long param_2,double param_3,char param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_190 [16];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
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
  
  func_0x00010363b174(&uStack_178);
  uStack_d8 = uStack_178;
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    func_0x0001034cc1fc(&uStack_d8,0x112f73230,&UNK_10dbce618);
    func_0x000107c6142c(param_2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(param_2);
    func_0x0001034d912c(0,lVar5,0);
    puVar3 = (undefined8 *)(param_2 + 0x58);
    do {
      puVar4 = puStack_180;
      uStack_c8 = puVar3[-6];
      uStack_d0 = puVar3[-7];
      uStack_b8 = puVar3[-4];
      uStack_c0 = puVar3[-5];
      uStack_a8 = puVar3[-2];
      uStack_b0 = puVar3[-3];
      uStack_98 = *puVar3;
      uStack_a0 = puVar3[-1];
      uStack_90 = puVar3[1];
      uStack_78 = puVar3[1];
      uStack_80 = *puVar3;
      uStack_88 = uStack_d0;
      FUN_1034cc1b4(&uStack_88,auStack_190,0x112d4b170,&UNK_10d911a80);
      FUN_1034cc1b4(&uStack_80,auStack_190,0x112d35ff8,&UNK_10d900cd0);
      func_0x0001034caa38(&uStack_148,&uStack_d0);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puStack_180 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        func_0x0001034d912c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = puStack_180;
      *(ulong *)(puStack_180 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x38) = uStack_130;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x30) = uStack_138;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x48) = uStack_120;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x40) = uStack_128;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x28) = uStack_140;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x20) = uStack_148;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x78) = uStack_f0;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x70) = uStack_f8;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x88) = uStack_e0;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x80) = uStack_e8;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x58) = uStack_110;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x50) = uStack_118;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x68) = uStack_100;
      *(undefined8 *)(puStack_180 + uVar1 * 0x70 + 0x60) = uStack_108;
      puVar3 = puVar3 + 9;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(param_2);
    func_0x0001034cc1fc(&uStack_d8,0x112f73230,&UNK_10dbce618);
    func_0x000107c6142c(param_2);
  }
  lVar5 = lStack_160;
  if (param_4 != '\x01') {
    if ((((ulong)param_3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c8638);
      (*pcVar2)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c863c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c8640);
      (*pcVar2)();
    }
    lVar5 = (long)param_3;
    func_0x000100d54a38(lStack_160,uStack_158,uStack_150);
    uStack_158 = 0;
    uStack_150 = 0xc000000000000000;
  }
  func_0x000107c61434(puVar4);
  func_0x00010006c00c(uStack_170,uStack_168);
  func_0x000100d54a54(lVar5,uStack_158,uStack_150);
  func_0x000107c6142c(puVar4);
  func_0x00010006c090(uStack_170,uStack_168);
  func_0x000100d54a38(lVar5,uStack_158,uStack_150);
  *param_1 = puVar4;
  param_1[1] = uStack_170;
  param_1[2] = uStack_168;
  param_1[3] = lVar5;
  param_1[4] = uStack_158;
  param_1[5] = uStack_150;
  return;
}



/* Entry: 1034c8640; end: 1034c8f6b;  */

void FUN_1034c8640(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  double dVar22;
  ulong uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
  undefined1 auStack_5f8 [328];
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  ulong uStack_4a0;
  undefined1 uStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  undefined1 uStack_350;
  undefined4 uStack_34f;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1c7;
  undefined *puStack_1c0;
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
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *apuStack_88 [3];
  
  func_0x0001035e608c(&puStack_1e0);
  puVar13 = puStack_1c0;
  puVar17 = puStack_1d8;
  puVar19 = puStack_1e0;
  uStack_1e8 = uStack_1c7;
  uStack_1f8 = uStack_1b0;
  uStack_200 = uStack_1b8;
  uStack_640 = uStack_e0;
  uStack_638 = uStack_d8;
  uStack_218 = uStack_a8;
  uStack_220 = uStack_b0;
  uStack_210 = uStack_a0;
  uStack_658 = uStack_c8;
  uStack_650 = uStack_d0;
  uStack_648 = uStack_b8;
  bVar1 = *(byte *)(param_2 + 0x2d0);
  func_0x000101556278(uStack_1a8,uStack_1a0,uStack_198);
  bVar2 = *(byte *)(param_2 + 0x2d1);
  func_0x000101556278(uStack_190,uStack_188,uStack_180);
  bVar3 = *(byte *)(param_2 + 0x2e8);
  func_0x000101556278(uStack_178,uStack_170,uStack_168);
  bVar4 = *(byte *)(param_2 + 0x2f9);
  func_0x000101556278(uStack_160,uStack_158,uStack_150);
  bVar5 = *(byte *)(param_2 + 0x2f8);
  func_0x000101556278(uStack_148,uStack_140,uStack_138);
  bVar6 = *(byte *)(param_2 + 0x330);
  func_0x000101556278(uStack_110,uStack_108,uStack_100);
  uVar8 = *(ulong *)(param_2 + 0x588);
  uVar12 = uStack_f0;
  uVar14 = uStack_e8;
  uVar15 = uStack_f8;
  if (uVar8 != 0) {
    func_0x000107c3ebcc();
    func_0x000101556278(uStack_f8,uStack_f0,uStack_e8);
    uVar12 = 0;
    uVar14 = 0xc000000000000000;
    uVar15 = uVar8 & 0xffffffff;
  }
  uVar8 = *(ulong *)(param_2 + 0x590);
  uVar20 = uStack_c0;
  if (uVar8 != 0) {
    func_0x000107c3ebcc();
    uStack_658 = uVar8 & 0xffffffff;
    func_0x000101556278(uStack_c8,uStack_c0,uStack_b8);
    uVar20 = 0;
    uStack_648 = 0xc000000000000000;
  }
  uVar8 = *(ulong *)(param_2 + 0x598);
  if (uVar8 != 0) {
    func_0x000107c3ebcc();
    uStack_640 = uVar8 & 0xffffffff;
    func_0x000101556278(uStack_e0,uStack_d8,uStack_d0);
    uStack_638 = 0;
    uStack_650 = 0xc000000000000000;
  }
  uVar8 = *(ulong *)(param_2 + 0x5a0);
  if (uVar8 == 0) goto LAB_1034c89dc;
  if (uVar8 >> 0x3e == 0) {
    uVar21 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    if (uVar21 == 0) goto LAB_1034c89dc;
    apuStack_88[0] = puStack_1c0;
  }
  else {
    uVar21 = uVar8;
    if (-1 < (long)uVar8) {
      uVar21 = uVar8 & 0xffffffffffffff8;
    }
    uVar10 = uVar21;
    func_0x000107c60480();
    if (uVar10 == 0) goto LAB_1034c89dc;
    func_0x000107c60480();
    apuStack_88[0] = puStack_1c0;
    if (uVar21 == 0) {
      func_0x0001034cc1fc(apuStack_88,0x112f732c0,&UNK_10dbce9a0);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1034c89dc;
    }
  }
  puStack_368 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61434(uVar8);
  func_0x0001034d9180(0,uVar21 & ((long)uVar21 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f6c);
    (*pcVar7)();
  }
  uVar10 = 0;
  do {
    puVar13 = puStack_368;
    dVar22 = 0.0;
    if ((uVar8 & 0xc000000000000001) == 0) {
      uVar9 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
      func_0x000107c61174(uVar9);
    }
    else {
      uVar9 = uVar10;
      func_0x0001002ec9a0(uVar10,uVar8);
    }
    func_0x000107c4223c();
    func_0x000107c61170(uVar9);
    if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8ef8);
      (*pcVar7)();
    }
    if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8efc);
      (*pcVar7)();
    }
    if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f00);
      (*pcVar7)();
    }
    uVar9 = *(ulong *)(puVar13 + 0x10);
    puStack_368 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
      func_0x0001034d9180(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
    }
    puVar13 = puStack_368;
    uVar10 = uVar10 + 1;
    *(ulong *)(puStack_368 + 0x10) = uVar9 + 1;
    *(long *)(puStack_368 + uVar9 * 0x18 + 0x20) = (long)dVar22;
    *(undefined8 *)(puStack_368 + uVar9 * 0x18 + 0x30) = 0xc000000000000000;
    *(undefined8 *)(puStack_368 + uVar9 * 0x18 + 0x28) = 0;
  } while (uVar21 != uVar10);
  func_0x000107c6142c(uVar8);
  func_0x0001034cc1fc(apuStack_88,0x112f732c0,&UNK_10dbce9a0);
LAB_1034c89dc:
  lVar18 = *(long *)(param_2 + 0x2f0);
  if (lVar18 != 0) {
    puStack_90 = puStack_1e0;
    lVar11 = *(long *)(lVar18 + 0x10);
    if (lVar11 == 0) {
      func_0x0001034cc1fc(&puStack_90,0x112f732c0,&UNK_10dbce9a0);
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_368 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(lVar18);
      func_0x0001034d9180(0,lVar11,0);
      lVar16 = 0x20;
      do {
        dVar22 = *(double *)(lVar18 + lVar16);
        if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f04);
          (*pcVar7)();
        }
        if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f08);
          (*pcVar7)();
        }
        if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f0c);
          (*pcVar7)();
        }
        uVar8 = *(ulong *)(puStack_368 + 0x10);
        if (*(ulong *)(puStack_368 + 0x18) >> 1 <= uVar8) {
          func_0x0001034d9180(1 < *(ulong *)(puStack_368 + 0x18),uVar8 + 1,1);
        }
        puVar19 = puStack_368;
        *(ulong *)(puStack_368 + 0x10) = uVar8 + 1;
        *(long *)(puStack_368 + uVar8 * 0x18 + 0x20) = (long)dVar22;
        *(undefined8 *)(puStack_368 + uVar8 * 0x18 + 0x30) = 0xc000000000000000;
        *(undefined8 *)(puStack_368 + uVar8 * 0x18 + 0x28) = 0;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      func_0x000107c6142c(lVar18);
      func_0x0001034cc1fc(&puStack_90,0x112f732c0,&UNK_10dbce9a0);
    }
  }
  lVar18 = *(long *)(param_2 + 0x338);
  if (lVar18 == 0) {
    func_0x00010178e3b8(param_2);
  }
  else {
    puStack_98 = puStack_1d8;
    lVar11 = *(long *)(lVar18 + 0x10);
    if (lVar11 == 0) {
      func_0x0001034cc1fc(&puStack_98,0x112f732c0,&UNK_10dbce9a0);
      func_0x00010178e3b8(param_2);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_368 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(lVar18);
      func_0x0001034d9180(0,lVar11,0);
      lVar16 = 0x20;
      do {
        dVar22 = *(double *)(lVar18 + lVar16);
        if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f10);
          (*pcVar7)();
        }
        if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f14);
          (*pcVar7)();
        }
        if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034c8f18);
          (*pcVar7)();
        }
        uVar8 = *(ulong *)(puStack_368 + 0x10);
        if (*(ulong *)(puStack_368 + 0x18) >> 1 <= uVar8) {
          func_0x0001034d9180(1 < *(ulong *)(puStack_368 + 0x18),uVar8 + 1,1);
        }
        puVar17 = puStack_368;
        *(ulong *)(puStack_368 + 0x10) = uVar8 + 1;
        *(long *)(puStack_368 + uVar8 * 0x18 + 0x20) = (long)dVar22;
        *(undefined8 *)(puStack_368 + uVar8 * 0x18 + 0x30) = 0xc000000000000000;
        *(undefined8 *)(puStack_368 + uVar8 * 0x18 + 0x28) = 0;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      func_0x000107c6142c(lVar18);
      func_0x0001034cc1fc(&puStack_98,0x112f732c0,&UNK_10dbce9a0);
      func_0x00010178e3b8(param_2);
    }
  }
  uVar8 = *(ulong *)(param_2 + 0x340);
  uStack_3f8 = uStack_128;
  uStack_400 = uStack_130;
  if (param_4 != 0) {
    uVar21 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar21 = param_4 >> 0x38 & 0xf;
    }
    if (uVar21 == 0) {
      func_0x000107c6142c(param_4);
    }
    else {
      func_0x000107c61434(param_4);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(param_4);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000101597ae4(uStack_130,uStack_128,uStack_120,uStack_118);
      uStack_120 = 0;
      uStack_118 = 0xc000000000000000;
      uStack_3f8 = param_4;
      uStack_400 = param_3;
    }
  }
  uStack_498 = uVar8 < 3;
  uStack_370 = uStack_210;
  uStack_3e0 = (ulong)bVar6 & 1;
  uStack_418 = (ulong)bVar5 & 1;
  uStack_430 = (ulong)bVar4 & 1;
  uStack_448 = (ulong)bVar3 & 1;
  uStack_460 = (ulong)bVar2 & 1;
  uStack_478 = (ulong)bVar1 & 1;
  uStack_480 = uStack_1f8;
  uStack_488 = uStack_200;
  uStack_468 = 0xc000000000000000;
  uStack_470 = 0;
  uStack_450 = 0xc000000000000000;
  uStack_458 = 0;
  uStack_438 = 0xc000000000000000;
  uStack_440 = 0;
  uStack_420 = 0xc000000000000000;
  uStack_428 = 0;
  uStack_408 = 0xc000000000000000;
  uStack_410 = 0;
  uStack_3d0 = 0xc000000000000000;
  uStack_3d8 = 0;
  uStack_3b0 = uStack_640;
  uStack_3a8 = uStack_638;
  uStack_3a0 = uStack_650;
  uStack_398 = uStack_658;
  uStack_388 = uStack_648;
  uStack_378 = uStack_218;
  uStack_380 = uStack_220;
  uStack_34f = uStack_1e8;
  uStack_338 = uStack_1f8;
  uStack_340 = uStack_200;
  uStack_320 = 0xc000000000000000;
  uStack_328 = 0;
  uStack_308 = 0xc000000000000000;
  uStack_310 = 0;
  uStack_2f0 = 0xc000000000000000;
  uStack_2f8 = 0;
  uStack_2d8 = 0xc000000000000000;
  uStack_2e0 = 0;
  uStack_2c0 = 0xc000000000000000;
  uStack_2c8 = 0;
  uStack_288 = 0xc000000000000000;
  uStack_290 = 0;
  uStack_268 = uStack_640;
  uStack_260 = uStack_638;
  uStack_258 = uStack_650;
  uStack_250 = uStack_658;
  uStack_240 = uStack_648;
  uStack_230 = uStack_218;
  uStack_238 = uStack_220;
  uStack_228 = uStack_210;
  puStack_4b0 = puVar19;
  puStack_4a8 = puVar17;
  uStack_4a0 = uVar8;
  puStack_490 = puVar13;
  uStack_3f0 = uStack_120;
  uStack_3e8 = uStack_118;
  uStack_3c8 = uVar15;
  uStack_3c0 = uVar12;
  uStack_3b8 = uVar14;
  uStack_390 = uVar20;
  puStack_368 = puVar19;
  puStack_360 = puVar17;
  uStack_358 = uVar8;
  uStack_350 = uStack_498;
  puStack_348 = puVar13;
  uStack_330 = uStack_478;
  uStack_318 = uStack_460;
  uStack_300 = uStack_448;
  uStack_2e8 = uStack_430;
  uStack_2d0 = uStack_418;
  uStack_2b8 = uStack_400;
  uStack_2b0 = uStack_3f8;
  uStack_2a8 = uStack_120;
  uStack_2a0 = uStack_118;
  uStack_298 = uStack_3e0;
  uStack_280 = uVar15;
  uStack_278 = uVar12;
  uStack_270 = uVar14;
  uStack_248 = uVar20;
  FUN_1034cc140(&puStack_4b0,auStack_5f8);
  func_0x0001034cc17c(&puStack_368);
  func_0x000107c610b4(param_1,&puStack_4b0,0x148);
  return;
}



/* Entry: 1034c8f6c; end: 1034c99fb;  */

ulong * FUN_1034c8f6c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  double dVar2;
  ulong uVar3;
  double dVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_5c8 [368];
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
  long lStack_3f8;
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
  ulong uStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  ulong uStack_368;
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
  long lStack_2e8;
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
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
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
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  
  puVar6 = param_1;
  FUN_1035f15b0();
  puStack_208 = puVar6;
  uStack_200 = param_2;
  uStack_1f8 = param_3;
  if ((char)param_1[0x10] != '\x01') {
    dVar9 = (double)param_1[0xf];
    if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c962c);
      (*pcVar5)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9630);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9638);
      (*pcVar5)();
    }
    FUN_1035f1224((long)dVar9,0,0xc000000000000000);
  }
  if ((char)param_1[0x12] != '\x01') {
    dVar9 = (double)param_1[0x11];
    if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9634);
      (*pcVar5)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c963c);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9640);
      (*pcVar5)();
    }
    func_0x0001035f12c8((long)dVar9,0,0xc000000000000000);
  }
  uVar1 = *param_1;
  uVar3 = param_1[1];
  dVar9 = (double)param_1[4];
  uVar7 = param_1[5];
  uVar13 = param_1[0xd];
  if (-1 < (long)uVar13) {
    uStack_360 = 0xc000000000000000;
    uStack_368 = 0;
    uStack_350 = 0xf000000000000000;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_330 = 0;
    uStack_338 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e0 = 0;
    lStack_2e8 = 0;
    uStack_2d8 = 0xf000000000000000;
    FUN_1034cbe98(&uStack_3e8,uVar1,uVar3,param_1[2],param_1[3]);
    func_0x0001034cc1fc(&uStack_358,0x112f73200,&UNK_10dbe5440);
    uStack_310 = uStack_3a0;
    uStack_318 = uStack_3a8;
    uStack_300 = uStack_390;
    uStack_308 = uStack_398;
    uStack_2f0 = uStack_380;
    uStack_2f8 = uStack_388;
    uStack_350 = uStack_3e0;
    uStack_358 = uStack_3e8;
    uStack_340 = uStack_3d0;
    uStack_348 = uStack_3d8;
    uStack_320 = uStack_3b0;
    uStack_328 = uStack_3b8;
    uStack_330 = uStack_3c0;
    uStack_338 = uStack_3c8;
    if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9620);
      (*pcVar5)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9624);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9628);
      (*pcVar5)();
    }
    func_0x000100d54a38(lStack_2e8,uStack_2e0,uStack_2d8);
    uStack_370 = (undefined1)uStack_2e0;
    uStack_2d8 = 0xc000000000000000;
    uStack_2e0 = 0;
    lStack_2e8 = (long)dVar9;
    FUN_1034cb1b4();
    uStack_168 = uStack_2f0;
    uStack_170 = uStack_2f8;
    uStack_158 = uStack_2e0;
    lStack_160 = lStack_2e8;
    uStack_150 = uStack_2d8;
    uStack_1a8 = uStack_330;
    uStack_1b0 = uStack_338;
    uStack_198 = uStack_320;
    uStack_1a0 = uStack_328;
    uStack_188 = uStack_310;
    uStack_190 = uStack_318;
    uStack_178 = uStack_300;
    uStack_180 = uStack_308;
    uStack_1c8 = uStack_350;
    uStack_1d0 = uStack_358;
    uStack_1b8 = uStack_340;
    uStack_1c0 = uStack_348;
    uStack_1e8 = CONCAT71(uStack_36f,uStack_370);
    uStack_1d8 = uStack_360;
    uStack_1e0 = uStack_368;
    uStack_378 = uVar7;
    uStack_1f0 = uVar7;
    func_0x0001034cc2ac(&uStack_1f0,auStack_5c8);
    FUN_1035f1054(&uStack_1f0);
    func_0x0001034cc2e8(&uStack_378);
LAB_1034c95c8:
    if ((char)param_1[0x14] != '\x01') {
      func_0x0001035f136c(param_1[0x13],0,0xc000000000000000);
    }
    return puStack_208;
  }
  dVar2 = (double)param_1[10];
  dVar4 = (double)param_1[0xb];
  dVar12 = (double)param_1[0xc];
  uVar11 = param_1[0xe];
  uVar15 = param_1[8];
  uVar14 = param_1[9];
  uVar17 = param_1[6];
  uVar16 = param_1[7];
  uStack_350 = 0xc000000000000000;
  uStack_358 = 0;
  uStack_340 = 0xf000000000000000;
  uStack_348 = 0;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_310 = 0;
  uStack_318 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_2e0 = 0;
  lStack_2e8 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0xf000000000000000;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_260 = 0;
  lStack_268 = 0;
  uStack_258 = 0xf000000000000000;
  lStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0xf000000000000000;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_228 = 0xf000000000000000;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 0xf000000000000000;
  if (uVar1 < 3) {
    uStack_370 = 1;
    uStack_378 = uVar1;
    if (uVar3 < 4) {
      uStack_360 = CONCAT71(uStack_360._1_7_,1);
      uStack_368 = uVar3;
      FUN_1034cbe98(&uStack_458,param_1[2],param_1[3],dVar9,uVar7);
      func_0x0001034cc1fc(&uStack_348,0x112f73200,&UNK_10dbe5440);
      uStack_300 = uStack_410;
      uStack_308 = uStack_418;
      uStack_2f0 = uStack_400;
      uStack_2f8 = uStack_408;
      uStack_2e0 = uStack_3f0;
      lStack_2e8 = lStack_3f8;
      uStack_340 = uStack_450;
      uStack_348 = uStack_458;
      uStack_330 = uStack_440;
      uStack_338 = uStack_448;
      uStack_320 = uStack_430;
      uStack_328 = uStack_438;
      uStack_310 = uStack_420;
      uStack_318 = uStack_428;
      FUN_1034cbe98(&uStack_3e8,uVar17,uVar16,uVar15,uVar14);
      func_0x0001034cc1fc(&uStack_2d8,0x112f73200,&UNK_10dbe5440);
      uStack_290 = uStack_3a0;
      uStack_298 = uStack_3a8;
      uStack_280 = uStack_390;
      uStack_288 = uStack_398;
      uStack_270 = uStack_380;
      uStack_278 = uStack_388;
      uStack_2d0 = uStack_3e0;
      uStack_2d8 = uStack_3e8;
      uStack_2c0 = uStack_3d0;
      uStack_2c8 = uStack_3d8;
      uStack_2b0 = uStack_3c0;
      uStack_2b8 = uStack_3c8;
      uStack_2a0 = uStack_3b0;
      uStack_2a8 = uStack_3b8;
      if ((((ulong)dVar2 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9644);
        (*pcVar5)();
      }
      if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9648);
        (*pcVar5)();
      }
      if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c964c);
        (*pcVar5)();
      }
      lVar10 = (long)dVar2;
      func_0x000100d54a38(lStack_268,uStack_260,uStack_258);
      uStack_258 = 0xc000000000000000;
      uStack_260 = 0;
      lStack_268 = lVar10;
      if ((((ulong)dVar4 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9650);
        (*pcVar5)();
      }
      if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9654);
        (*pcVar5)();
      }
      if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9658);
        (*pcVar5)();
      }
      lVar10 = (long)dVar4;
      func_0x000100d54a38(lStack_250,uStack_248,uStack_240);
      uStack_240 = 0xc000000000000000;
      uStack_248 = 0;
      lStack_250 = lVar10;
      if ((uVar13 & 0xff) != 1) {
        if ((((ulong)dVar12 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c965c);
          (*pcVar5)();
        }
        if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9660);
          (*pcVar5)();
        }
        if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9664);
          (*pcVar5)();
        }
        func_0x000100d54a38(lStack_220,uStack_218,uStack_210);
        uStack_210 = 0xc000000000000000;
        uStack_218 = 0;
        lStack_220 = (long)dVar12;
      }
      func_0x000100d54a38(uStack_238,uStack_230,uStack_228);
      uStack_228 = 0xc000000000000000;
      uStack_230 = 0;
      uStack_238 = uVar11;
      func_0x000107c610b4(&uStack_1f0,&uStack_378,0x170);
      func_0x0001034cc23c(&uStack_1f0,auStack_5c8);
      func_0x0001035f114c(&uStack_1f0);
      func_0x0001034cc278(&uStack_378);
      goto LAB_1034c95c8;
    }
    puVar8 = &UNK_110797250;
    uStack_1f0 = uVar3;
  }
  else {
    puVar8 = &UNK_1107972f8;
    uStack_1f0 = uVar1;
  }
  func_0x000107c60614(puVar8,&uStack_1f0,puVar8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1034c9698);
  (*pcVar5)();
}



/* Entry: 1034c99fc; end: 1034ca4d7;  */

void FUN_1034c99fc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
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
  undefined1 auStack_1b8 [10];
  undefined8 uStack_1ae;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x0001036478d4(auStack_1b8);
  uStack_1e8 = uStack_160;
  uStack_1e0 = uStack_170;
  uStack_240 = uStack_150;
  uStack_238 = uStack_168;
  uStack_1f8 = uStack_148;
  uStack_1f0 = uStack_158;
  uStack_208 = uStack_130;
  uStack_200 = uStack_140;
  uStack_218 = uStack_118;
  uStack_210 = uStack_128;
  uStack_228 = uStack_f0;
  uStack_220 = uStack_110;
  uStack_1c8 = uStack_e0;
  uStack_1c0 = uStack_e8;
  uStack_230 = uStack_d8;
  uStack_1d8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_250 = uStack_b0;
  uStack_248 = uStack_b8;
  uStack_260 = uStack_98;
  uStack_258 = uStack_a0;
  uVar3 = *param_2;
  FUN_1034cb78c();
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar5 = uStack_190;
  uVar8 = uStack_188;
  uVar11 = uStack_198;
  if (*(char *)(param_2 + 3) != '\x01') {
    uVar11 = param_2[2];
    func_0x000100d54a38(uStack_198,uStack_190,uStack_188);
    uVar5 = 0;
    uVar8 = 0xc000000000000000;
  }
  uVar9 = uStack_178;
  uVar13 = uStack_180;
  if ((*(char *)(param_2 + 5) != '\x01') && (uVar12 = param_2[4], -1 < (long)uVar12)) {
    if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c9e30);
      (*pcVar2)();
    }
    func_0x000100d54a38(uStack_180,uStack_178,uStack_170);
    uStack_1e0 = 0xc000000000000000;
    uVar9 = 0;
    uVar13 = uVar12;
  }
  uVar12 = uStack_c0;
  if ((*(char *)(param_2 + 7) != '\x01') && (uVar10 = param_2[6], -1 < (long)uVar10)) {
    if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c9e34);
      (*pcVar2)();
    }
    func_0x000100d54a38(uStack_c0,uStack_b8,uStack_b0);
    uStack_250 = 0xc000000000000000;
    uStack_248 = 0;
    uVar12 = uVar10;
  }
  if (*(char *)(param_2 + 9) != '\x01') {
    uStack_238 = (ulong)(uint)(float)(double)param_2[8];
    func_0x000100d54a38(uStack_168,uStack_160,uStack_158);
    uStack_1f0 = 0xc000000000000000;
    uStack_1e8 = 0;
  }
  if (*(char *)(param_2 + 0xb) != '\x01') {
    uStack_240 = (ulong)(uint)(float)(double)param_2[10];
    func_0x000100d54a38(uStack_150,uStack_148,uStack_140);
    uStack_200 = 0xc000000000000000;
    uStack_1f8 = 0;
  }
  uVar10 = uStack_138;
  if (*(char *)(param_2 + 0xd) != '\x01') {
    uVar10 = (ulong)(uint)(float)(double)param_2[0xc];
    func_0x000100d54a38(uStack_138,uStack_130,uStack_128);
    uStack_210 = 0xc000000000000000;
    uStack_208 = 0;
  }
  uVar6 = uStack_120;
  if (*(char *)(param_2 + 0xf) != '\x01') {
    uVar6 = (ulong)(uint)(float)(double)param_2[0xe];
    func_0x000100d54a38(uStack_120,uStack_118,uStack_110);
    uStack_220 = 0xc000000000000000;
    uStack_218 = 0;
  }
  if (*(char *)(param_2 + 0x11) != '\x01') {
    uStack_228 = (ulong)(uint)(float)(double)param_2[0x10];
    func_0x000100d54a38(uStack_f0,uStack_e8,uStack_e0);
    uStack_1c8 = 0xc000000000000000;
    uStack_1c0 = 0;
  }
  if (*(char *)(param_2 + 0x13) != '\x01') {
    uStack_230 = (ulong)(uint)(float)(double)param_2[0x12];
    func_0x000100d54a38(uStack_d8,uStack_d0,uStack_c8);
    uStack_1d8 = 0xc000000000000000;
    uStack_1d0 = 0;
  }
  dVar15 = (double)param_2[0x14];
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c9e24);
    (*pcVar2)();
  }
  if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c9e28);
    (*pcVar2)();
  }
  if (dVar15 < 9.223372036854776e+18) {
    func_0x000100d54a38(uStack_108,uStack_100,uStack_f8);
    uVar7 = uStack_a8;
    if (*(char *)(param_2 + 0x16) != '\x01') {
      dVar14 = (double)param_2[0x15];
      func_0x000100d54a38(uStack_a8,uStack_a0,uStack_98);
      uStack_260 = 0xc000000000000000;
      uStack_258 = 0;
      uVar7 = (ulong)(uint)(float)dVar14;
    }
    uVar4 = uStack_90;
    if (*(char *)(param_2 + 0x18) != '\x01') {
      uVar4 = (ulong)(uint)(float)(double)param_2[0x17];
      func_0x000100d54a38();
      uStack_88 = 0;
      uStack_80 = 0xc000000000000000;
    }
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 1) = param_3;
    *(undefined1 *)((long)param_1 + 9) = uVar1;
    param_1[5] = uVar5;
    param_1[6] = uVar8;
    param_1[7] = uVar13;
    param_1[8] = uVar9;
    *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_1a0,uStack_1a6);
    *(undefined8 *)((long)param_1 + 10) = uStack_1ae;
    param_1[3] = CONCAT62(uStack_19e,uStack_1a0);
    param_1[4] = uVar11;
    param_1[9] = uStack_1e0;
    param_1[10] = uStack_238;
    param_1[0xb] = uStack_1e8;
    param_1[0xc] = uStack_1f0;
    param_1[0xd] = uStack_240;
    param_1[0xe] = uStack_1f8;
    param_1[0xf] = uStack_200;
    param_1[0x10] = uVar10;
    param_1[0x11] = uStack_208;
    param_1[0x12] = uStack_210;
    param_1[0x13] = uVar6;
    param_1[0x14] = uStack_218;
    param_1[0x15] = uStack_220;
    param_1[0x16] = (long)dVar15;
    param_1[0x18] = 0xc000000000000000;
    param_1[0x17] = 0;
    param_1[0x19] = uStack_228;
    param_1[0x1a] = uStack_1c0;
    param_1[0x1b] = uStack_1c8;
    param_1[0x1c] = uStack_230;
    param_1[0x1d] = uStack_1d0;
    param_1[0x1e] = uStack_1d8;
    param_1[0x1f] = uVar12;
    param_1[0x20] = uStack_248;
    param_1[0x21] = uStack_250;
    param_1[0x22] = uVar7;
    param_1[0x23] = uStack_258;
    param_1[0x24] = uStack_260;
    param_1[0x25] = uVar4;
    param_1[0x26] = uStack_88;
    param_1[0x27] = uStack_80;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034c9e2c);
  (*pcVar2)();
}



/* Entry: 1034ca4d8; end: 1034cadf3;  */

void FUN_1034ca4d8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uStack_630;
  undefined8 uStack_628;
  long lStack_608;
  long lStack_600;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
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
  undefined1 auStack_558 [312];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
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
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001035e182c(&uStack_1a8);
  uStack_588 = uStack_170;
  uStack_580 = uStack_160;
  uStack_568 = uStack_150;
  uStack_578 = uStack_168;
  uStack_570 = uStack_148;
  uStack_598 = uStack_130;
  uStack_590 = uStack_138;
  uStack_5a8 = uStack_118;
  uStack_5a0 = uStack_120;
  uStack_5b8 = uStack_100;
  uStack_5b0 = uStack_108;
  uStack_5c0 = uStack_f0;
  uStack_5d0 = uStack_f8;
  uStack_5c8 = uStack_e8;
  uStack_560 = uStack_b0;
  uStack_5d8 = uStack_98;
  bVar1 = *param_2;
  func_0x000101556278(uStack_188,uStack_180,uStack_178);
  if (param_2[0x10] == 1) {
    lStack_600 = lStack_158;
  }
  else {
    lStack_600 = *(long *)(param_2 + 8);
    if (lStack_600 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa20);
      (*pcVar3)();
    }
    func_0x000100d54a38(lStack_158,uStack_150,uStack_148);
    uStack_570 = 0xc000000000000000;
    uStack_568 = 0;
  }
  lVar7 = lStack_140;
  if (param_2[0x20] != 1) {
    lVar7 = *(long *)(param_2 + 0x18);
    func_0x000101556278(uStack_170,uStack_168,uStack_160);
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa24);
      (*pcVar3)();
    }
    func_0x000100d54a38(lStack_140,uStack_138,uStack_130);
    uStack_580 = 0xc000000000000000;
    uStack_578 = 0;
    uStack_590 = 0;
    uStack_588 = 1;
    uStack_598 = 0xc000000000000000;
  }
  lVar6 = lStack_128;
  if (param_2[0x30] != 1) {
    lVar6 = *(long *)(param_2 + 0x28);
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa28);
      (*pcVar3)();
    }
    func_0x000100d54a38(lStack_128,uStack_120,uStack_118);
    uStack_5a8 = 0xc000000000000000;
    uStack_5a0 = 0;
  }
  if (param_2[0x40] == 1) {
    lStack_608 = lStack_110;
  }
  else {
    lStack_608 = *(long *)(param_2 + 0x38);
    if (lStack_608 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa2c);
      (*pcVar3)();
    }
    func_0x000100d54a38(lStack_110,uStack_108,uStack_100);
    uStack_5b8 = 0xc000000000000000;
    uStack_5b0 = 0;
  }
  if (param_2[0x50] != 1) {
    uStack_5d0 = *(ulong *)(param_2 + 0x48);
    if (uStack_5d0 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa30);
      (*pcVar3)();
    }
    func_0x000100d54a38(uStack_f8,uStack_f0,uStack_e8);
    uStack_5c8 = 0xc000000000000000;
    uStack_5c0 = 0;
  }
  lVar5 = *(long *)(param_2 + 0x60);
  if (lVar5 == 0) {
    func_0x000101865840(param_2);
    lVar5 = lStack_b8;
    uVar8 = uStack_c0;
    uStack_628 = uStack_a8;
    uVar4 = uStack_c8;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    if (lStack_b8 == 0) {
      uStack_560 = 0;
      uStack_630 = 0;
      uStack_628 = 0xc000000000000000;
      lVar9 = -0x2000000000000000;
    }
    else {
      uStack_630 = uStack_c8 & 0xffffffff;
      uStack_628 = uStack_a8;
      lVar9 = lStack_b8;
    }
    func_0x0001034bbb04(param_2,&uStack_2e0);
    func_0x0001034cc074(uStack_c8,uStack_c0,lStack_b8,uStack_b0,uStack_a8);
    func_0x000107c6142c(lVar9);
    func_0x0001034cc0ac(uStack_c8,uStack_c0,lStack_b8,uStack_b0,uStack_a8);
    if (param_2[0x70] == 1) {
      func_0x000101865840(param_2);
      uVar4 = uStack_630;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 0x68);
      if ((long)uVar4 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa34);
        (*pcVar3)();
      }
      if (0x7fffffff < (long)uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034caa38);
        (*pcVar3)();
      }
      uVar4 = uVar4 & 0xffffffff;
      func_0x0001034cc074(uStack_630,uVar8,lVar5,uStack_560,uStack_628);
      func_0x0001034cc0ac(uStack_630,uVar8,lVar5,uStack_560,uStack_628);
      func_0x000101865840(param_2);
    }
  }
  bVar2 = param_2[0x71];
  if (bVar2 != 2) {
    func_0x000101556278(uStack_a0,uStack_98);
    uStack_5d8 = 0;
    uStack_90 = 0xc000000000000000;
    uStack_a0 = (ulong)bVar2 & 1;
  }
  uStack_2f0 = uStack_78;
  uStack_418 = uStack_1a0;
  uStack_420 = uStack_1a8;
  uStack_408 = uStack_190;
  uStack_410 = uStack_198;
  uStack_350 = uStack_d8;
  uStack_358 = uStack_e0;
  uStack_2f8 = uStack_80;
  uStack_300 = uStack_88;
  uStack_3f0 = 0xc000000000000000;
  uStack_3f8 = 0;
  uStack_2d8 = uStack_1a0;
  uStack_2e0 = uStack_1a8;
  uStack_2c8 = uStack_190;
  uStack_2d0 = uStack_198;
  uStack_348 = uStack_d0;
  uStack_360 = uStack_5c8;
  uStack_400 = (ulong)bVar1 & 1;
  uStack_3e8 = uStack_588;
  uStack_3e0 = uStack_578;
  uStack_3d8 = uStack_580;
  lStack_3d0 = lStack_600;
  uStack_3c8 = uStack_568;
  uStack_3c0 = uStack_570;
  uStack_3b0 = uStack_590;
  uStack_3a8 = uStack_598;
  uStack_398 = uStack_5a0;
  uStack_390 = uStack_5a8;
  lStack_388 = lStack_608;
  uStack_380 = uStack_5b0;
  uStack_378 = uStack_5b8;
  uStack_370 = uStack_5d0;
  uStack_368 = uStack_5c0;
  uStack_328 = uStack_560;
  uStack_310 = uStack_5d8;
  uStack_2b0 = 0xc000000000000000;
  uStack_2b8 = 0;
  uStack_2a8 = uStack_588;
  uStack_2a0 = uStack_578;
  uStack_298 = uStack_580;
  lStack_290 = lStack_600;
  uStack_288 = uStack_568;
  uStack_280 = uStack_570;
  uStack_270 = uStack_590;
  uStack_268 = uStack_598;
  uStack_258 = uStack_5a0;
  uStack_250 = uStack_5a8;
  lStack_248 = lStack_608;
  uStack_240 = uStack_5b0;
  uStack_238 = uStack_5b8;
  uStack_230 = uStack_5d0;
  uStack_228 = uStack_5c0;
  uStack_220 = uStack_5c8;
  uStack_208 = uStack_d0;
  uStack_210 = uStack_d8;
  uStack_218 = uStack_e0;
  uStack_1e8 = uStack_560;
  uStack_1d0 = uStack_5d8;
  uStack_1b0 = uStack_78;
  uStack_1b8 = uStack_80;
  uStack_1c0 = uStack_88;
  lStack_3b8 = lVar7;
  lStack_3a0 = lVar6;
  uStack_340 = uVar4;
  uStack_338 = uVar8;
  lStack_330 = lVar5;
  uStack_320 = uStack_628;
  uStack_318 = uStack_a0;
  uStack_308 = uStack_90;
  uStack_2c0 = uStack_400;
  lStack_278 = lVar7;
  lStack_260 = lVar6;
  uStack_200 = uVar4;
  uStack_1f8 = uVar8;
  lStack_1f0 = lVar5;
  uStack_1e0 = uStack_628;
  uStack_1d8 = uStack_a0;
  uStack_1c8 = uStack_90;
  func_0x0001034cc004(&uStack_420,auStack_558);
  func_0x0001034cc040(&uStack_2e0);
  func_0x000107c610b4(param_1,&uStack_420,0x138);
  return;
}



/* Entry: 1034cadf4; end: 1034cb0a3;  */

void FUN_1034cadf4(undefined4 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  switch(param_1) {
  case 1:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    goto code_r0x0001034cafd0;
  case 2:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x1000000000000000;
    break;
  case 3:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x2000000000000000;
    break;
  case 4:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x3000000000000000;
    break;
  case 5:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    uVar1 = 1;
    goto code_r0x0001034cb098;
  case 6:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x1000000000000000;
    goto code_r0x0001034cb030;
  case 7:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x2000000000000000;
    goto code_r0x0001034cb030;
  case 8:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x3000000000000000;
code_r0x0001034cb030:
    *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
    uVar1 = 1;
code_r0x0001034cb098:
    *(undefined1 *)(unaff_x20 + 0x50) = uVar1;
LAB_1034cb09c:
    return;
  case 9:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    goto code_r0x0001034cb094;
  case 10:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0xd000000000000000;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    goto code_r0x0001034cb094;
  case 0xb:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x2000000000000000;
    goto code_r0x0001034cb064;
  case 0xc:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    uVar2 = 0x3000000000000000;
code_r0x0001034cb064:
    *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
code_r0x0001034cb094:
    uVar1 = 2;
    goto code_r0x0001034cb098;
  case 0xd:
    func_0x0001034cc1fc(unaff_x20 + 0x10,0x112f732b8,&UNK_10dbe6730);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    uVar1 = 3;
    goto code_r0x0001034cb098;
  default:
    goto LAB_1034cb09c;
  }
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
code_r0x0001034cafd0:
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 1034cb0a4; end: 1034cb1b3;  */

void FUN_1034cb0a4(int param_1)

{
  long unaff_x20;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 1) {
    uStack_118 = 0xc000000000000000;
    uStack_120 = 0;
    func_0x0001034cc11c(&uStack_120);
  }
  else if (param_1 == 3) {
    uStack_118 = 0xc000000000000000;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0xf000000000000000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf000000000000000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf000000000000000;
    func_0x0001034cc104(&uStack_120);
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uStack_118 = 0xc000000000000000;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x0001034cc130(&uStack_120);
  }
  uStack_58 = uStack_d8;
  uStack_60 = uStack_e0;
  uStack_48 = uStack_c8;
  uStack_50 = uStack_d0;
  uStack_38 = uStack_b8;
  uStack_40 = uStack_c0;
  uStack_28 = uStack_a8;
  uStack_30 = uStack_b0;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  uStack_88 = uStack_108;
  uStack_90 = uStack_110;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  func_0x0001034cc118(&uStack_a0);
  func_0x0001034cc1fc(unaff_x20 + 0x58,0x112f732b0,&UNK_10dbce998);
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_28;
  *(undefined8 *)(unaff_x20 + 200) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_70;
  return;
}



/* Entry: 1034cb1b4; end: 1034cb1ff;  */

undefined1  [16] FUN_1034cb1b4(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  if (param_1 < 0x16) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dbce9b0 + param_1 * 8);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_1107973a0,&uStack_18,&UNK_1107973a0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cb200);
  (*pcVar1)();
}



/* Entry: 1034cb200; end: 1034cb5db;  */

void FUN_1034cb200(undefined8 *param_1,double *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uStack_98;
  ulong uStack_88;
  ulong uStack_78;
  ulong uStack_68;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uStack_68 = 0;
    uVar1 = 0xf000000000000000;
  }
  else {
    uStack_68 = (ulong)(uint)(float)*param_2;
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar1 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    uStack_78 = 0;
    uVar2 = 0xf000000000000000;
  }
  else {
    uStack_78 = (ulong)(uint)(float)param_2[2];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar2 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    uStack_88 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    uStack_88 = (ulong)(uint)(float)param_2[4];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar3 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 7) == '\x01') {
    uStack_98 = 0;
    uVar12 = 0xf000000000000000;
  }
  else {
    uStack_98 = (ulong)(uint)(float)param_2[6];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar12 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar6 = 0;
    uVar7 = 0xf000000000000000;
  }
  else {
    uVar6 = (ulong)(uint)(float)param_2[8];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar7 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar8 = 0;
    uVar9 = 0xf000000000000000;
  }
  else {
    uVar8 = (ulong)(uint)(float)param_2[10];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar9 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar10 = 0;
    uVar11 = 0xf000000000000000;
  }
  else {
    uVar10 = (ulong)(uint)(float)param_2[0xc];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar11 = 0xc000000000000000;
  }
  if (*(char *)(param_2 + 0xf) == '\x01') {
    uVar5 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar5 = (ulong)(uint)(float)param_2[0xe];
    func_0x000100d54a38(0,0,0xf000000000000000);
    uVar4 = 0xc000000000000000;
  }
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uStack_68;
  param_1[3] = 0;
  param_1[4] = uVar1;
  param_1[5] = uStack_78;
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[8] = uStack_88;
  param_1[9] = 0;
  param_1[10] = uVar3;
  param_1[0xb] = uStack_98;
  param_1[0xc] = 0;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar6;
  param_1[0xf] = 0;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar8;
  param_1[0x12] = 0;
  param_1[0x13] = uVar9;
  param_1[0x14] = uVar10;
  param_1[0x15] = 0;
  param_1[0x16] = uVar11;
  param_1[0x17] = uVar5;
  param_1[0x18] = 0;
  param_1[0x19] = uVar4;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xf000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf000000000000000;
  return;
}



/* Entry: 1034cb5dc; end: 1034cb65f;  */

void FUN_1034cb5dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x000101556278(2,0,0);
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = param_4 & 1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = param_2;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[8] = param_3;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  return;
}



/* Entry: 1034cb660; end: 1034cb78b;  */

void FUN_1034cb660(undefined8 param_1,byte *param_2)

{
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
  undefined1 auStack_450 [16];
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
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [328];
  undefined1 auStack_180 [320];
  
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2e0 = 0xff;
  uStack_2d0 = 0xc000000000000000;
  uStack_2d8 = 0;
  FUN_1034bb5ec(auStack_180);
  func_0x000107c610b4(auStack_2c8,auStack_180,0x140);
  func_0x0001034cb480(auStack_450,param_2);
  if (*param_2 != 2) {
    FUN_1034cb5dc(&uStack_590,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                  *param_2 & 1);
    func_0x0001034cc1fc(&uStack_440,0x112db3fd8,&UNK_10d96aef0);
    uStack_418 = uStack_568;
    uStack_420 = uStack_570;
    uStack_408 = uStack_558;
    uStack_410 = uStack_560;
    uStack_3f8 = uStack_548;
    uStack_400 = uStack_550;
    uStack_3f0 = uStack_540;
    uStack_438 = uStack_588;
    uStack_440 = uStack_590;
    uStack_428 = uStack_578;
    uStack_430 = uStack_580;
  }
  func_0x000107c610b4(&uStack_590,auStack_450,0x140);
  FUN_1034cc1b0(&uStack_590);
  func_0x0001034cc1fc(auStack_2c8,0x112f732c8,&UNK_10dbce9a8);
  func_0x000107c610b4(auStack_2c8,&uStack_590,0x140);
  func_0x000107c610b4(param_1,&uStack_310,0x188);
  return;
}



/* Entry: 1034cb78c; end: 1034cb7d7;  */

undefined1  [16] FUN_1034cb78c(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  if (param_1 < 0xc) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dbcea60 + param_1 * 8);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_110751e90,&uStack_18,&UNK_110751e90,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cb7d8);
  (*pcVar1)();
}



/* Entry: 1034cb7d8; end: 1034cb977;  */

void FUN_1034cb7d8(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong auStack_80 [2];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = param_2[1];
  uVar4 = *param_2;
  uVar5 = uVar4 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar5 = uVar2 >> 0x38 & 0xf;
  }
  uStack_60 = uVar4;
  uStack_58 = uVar2;
  if (uVar5 == 0) {
    uVar4 = 0;
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    func_0x000100402194(&uStack_60,&uStack_70);
    func_0x000107c61434(uVar2);
    uVar5 = 0xc000000000000000;
    func_0x00010006c00c(0,0xc000000000000000);
    func_0x000107c6142c(uVar2);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000101597ae4(0,0,0,0);
  }
  uVar3 = param_2[3];
  uVar6 = param_2[2];
  uVar7 = uVar6 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar7 = uVar3 >> 0x38 & 0xf;
  }
  uStack_70 = uVar6;
  uStack_68 = uVar3;
  if (uVar7 == 0) {
    uVar6 = 0;
    uVar3 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000100402194(&uStack_70,auStack_80);
    func_0x000107c61434(uVar3);
    uVar7 = 0xc000000000000000;
    func_0x00010006c00c(0,0xc000000000000000);
    func_0x000107c6142c(uVar3);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000101597ae4(0,0,0,0);
  }
  auStack_80[0] = param_2[4];
  if (auStack_80[0] < 4) {
    func_0x000100bcb1dc(&uStack_60);
    func_0x000100bcb1dc(&uStack_70);
    *param_1 = auStack_80[0];
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = 0xc000000000000000;
    param_1[2] = 0;
    param_1[4] = uVar4;
    param_1[5] = uVar2;
    param_1[6] = 0;
    param_1[7] = uVar5;
    param_1[8] = uVar6;
    param_1[9] = uVar3;
    param_1[10] = 0;
    param_1[0xb] = uVar7;
    return;
  }
  func_0x000107c60614(&UNK_110796e58,auStack_80,&UNK_110796e58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cb978);
  (*pcVar1)();
}



/* Entry: 1034cb978; end: 1034cbb43;  */

void FUN_1034cb978(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
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
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
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
  
  uStack_220 = 0;
  uStack_218 = 1;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0x3000000000000000;
  uStack_1d0 = 0xff;
  FUN_1034cc0e4(&uStack_d0);
  uStack_180 = uStack_88;
  uStack_188 = uStack_90;
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_160 = uStack_68;
  uStack_168 = uStack_70;
  uStack_150 = uStack_58;
  uStack_158 = uStack_60;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = uStack_98;
  uStack_198 = uStack_a0;
  uStack_140 = 0xc000000000000000;
  uStack_148 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_100 = 2;
  uStack_108 = 0xf000000000000000;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0xf000000000000000;
  if ((param_2 & 0xff00000000) != 0x100000000) {
    func_0x000100d54a38(0,0,0xf000000000000000);
    uStack_108 = 0xc000000000000000;
    uStack_118 = param_2 & 0xffffffff;
  }
  uStack_110 = 0;
  if ((param_2 & 0xff0000000000) != 0x20000000000) {
    func_0x000101556278(2,0,0);
    uStack_f8 = 0;
    uStack_f0 = 0xc000000000000000;
    uStack_100 = param_2 >> 0x28 & 1;
  }
  if ((param_4 & 0xff) != 1) {
    if ((long)param_3 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbb40);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbb44);
      (*pcVar1)();
    }
    func_0x000100d54a38(0,0,0xf000000000000000);
    uStack_d8 = 0xc000000000000000;
    uStack_e0 = 0;
    uStack_e8 = param_3 & 0xffffffff;
  }
  FUN_1034cadf4(param_4 >> 0x20);
  FUN_1034cb0a4(param_5);
  func_0x000107c610b4(param_1,&uStack_220,0x150);
  return;
}



/* Entry: 1034cbb44; end: 1034cbe1f;  */

void FUN_1034cbb44(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  double dVar12;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (5 < uVar2) {
      dVar12 = *(double *)(param_2 + 0x20);
      if (dVar12 == -1.0) {
        uVar5 = 0;
        uVar6 = 0xf000000000000000;
      }
      else {
        func_0x000100d54a38(0,0,0xf000000000000000);
        uVar2 = *(ulong *)(param_2 + 0x10);
        if (uVar2 < 2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbe20);
          (*pcVar1)();
        }
        uVar5 = (ulong)(uint)(float)dVar12;
        uVar6 = 0xc000000000000000;
      }
      if (*(double *)(param_2 + 0x28) == -1.0) {
        uVar7 = 0;
        uVar8 = 0xf000000000000000;
      }
      else {
        uVar7 = (ulong)(uint)(float)*(double *)(param_2 + 0x28);
        func_0x000100d54a38(0,0,0xf000000000000000);
        uVar2 = *(ulong *)(param_2 + 0x10);
        uVar8 = 0xc000000000000000;
      }
      if (uVar2 < 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbcbc);
        (*pcVar1)();
      }
      if (*(double *)(param_2 + 0x30) == -1.0) {
        uVar9 = 0;
        uVar10 = 0xf000000000000000;
      }
      else {
        uVar9 = (ulong)(uint)(float)*(double *)(param_2 + 0x30);
        func_0x000100d54a38(0,0,0xf000000000000000);
        uVar2 = *(ulong *)(param_2 + 0x10);
        uVar10 = 0xc000000000000000;
      }
      if (uVar2 < 4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbcec);
        (*pcVar1)();
      }
      if (*(double *)(param_2 + 0x38) == -1.0) {
        uVar11 = 0;
        uVar4 = 0xf000000000000000;
      }
      else {
        uVar11 = (ulong)(uint)(float)*(double *)(param_2 + 0x38);
        func_0x000100d54a38(0,0,0xf000000000000000);
        uVar2 = *(ulong *)(param_2 + 0x10);
        uVar4 = 0xc000000000000000;
      }
      if (uVar2 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbd1c);
        (*pcVar1)();
      }
      if (*(double *)(param_2 + 0x40) == -1.0) {
        uStack_1c8 = 0;
        uVar3 = 0xf000000000000000;
      }
      else {
        uStack_1c8 = (ulong)(uint)(float)*(double *)(param_2 + 0x40);
        func_0x000100d54a38(0,0,0xf000000000000000);
        uVar2 = *(ulong *)(param_2 + 0x10);
        uVar3 = 0xc000000000000000;
      }
      if (uVar2 < 6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbd50);
        (*pcVar1)();
      }
      dVar12 = *(double *)(param_2 + 0x48);
      func_0x000107c6142c();
      if (dVar12 == -1.0) {
        uVar2 = 0;
        uStack_128 = 0xf000000000000000;
      }
      else {
        uVar2 = (ulong)(uint)(float)dVar12;
        func_0x000100d54a38(0,0,0xf000000000000000);
        uStack_128 = 0xc000000000000000;
      }
      uStack_1b8 = 0xc000000000000000;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_1b0 = uVar5;
      uStack_1a0 = uVar6;
      uStack_198 = uVar7;
      uStack_188 = uVar8;
      uStack_180 = uVar9;
      uStack_170 = uVar10;
      uStack_168 = uVar11;
      uStack_158 = uVar4;
      uStack_150 = uStack_1c8;
      uStack_140 = uVar3;
      uStack_138 = uVar2;
      func_0x0001034cbf90(&uStack_1c0);
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      uStack_88 = uStack_128;
      uStack_90 = uStack_130;
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_118 = uStack_1b8;
      uStack_120 = uStack_1c0;
      uStack_108 = uStack_1a8;
      uStack_110 = uStack_1b0;
      goto LAB_1034cbdd0;
    }
    func_0x000107c6142c();
  }
  func_0x0001034cbf6c(&uStack_120);
LAB_1034cbdd0:
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[0x11] = uStack_98;
  param_1[0x10] = uStack_a0;
  param_1[0x13] = uStack_88;
  param_1[0x12] = uStack_90;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  return;
}



/* Entry: 1034cbe20; end: 1034cbe4b;  */

undefined1  [16] FUN_1034cbe20(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 - 1U < 0x24) {
    auVar1._0_8_ = *(undefined8 *)(&UNK_10dbceac0 + (param_1 - 1U) * 8);
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 1034cbe4c; end: 1034cbe97;  */

undefined1  [16] FUN_1034cbe4c(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  if (param_1 < 0x10) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dbcebe0 + param_1 * 8);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_110796f88,&uStack_18,&UNK_110796f88,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cbe98);
  (*pcVar1)();
}



/* Entry: 1034cbe98; end: 1034cbf6b;  */

void FUN_1034cbe98(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5)

{
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = (ulong)(uint)(float)param_2;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = (ulong)(uint)(float)param_3;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[8] = (ulong)(uint)(float)param_4;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[0xb] = (ulong)(uint)(float)param_5;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 1034cbf6c; end: 1034cbf93;  */

void FUN_1034cbf6c(undefined8 *param_1)

{
  param_1[1] = 0xf000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}



/* Entry: 1034cbf94; end: 1034cc0e3;  */

undefined8 FUN_1034cbf94(undefined8 param_1,undefined8 param_2)

{
  FUN_1035ec434(param_2,param_1);
  return param_2;
}


