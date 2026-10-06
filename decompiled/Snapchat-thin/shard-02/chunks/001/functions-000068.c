/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018a0848; end: 1018a08fb;  */

void FUN_1018a0848(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018a08fc; end: 1018a09cf;  */

undefined8 * FUN_1018a08fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000100083374(param_1 + 5,param_2 + 5);
  func_0x000100083374(param_1 + 10,param_2 + 10);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1018a09d0; end: 1018a0a83;  */

undefined8 * FUN_1018a09d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(param_1 + 5);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  func_0x0001000834e4(param_1 + 10);
  uVar1 = param_2[10];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c615e8(uVar2);
  return param_1;
}



/* Entry: 1018a0a84; end: 1018a0b3b;  */

int FUN_1018a0a84(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018a0b3c; end: 1018a0b7b; -[_TtC25AdTrackParserServicesImpl22AdTrackSKOverlayParser adEventSymbols] */

void FUN_1018a0b3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a0b7c; end: 1018a0bb3; -[_TtC25AdTrackParserServicesImpl22AdTrackSKOverlayParser setAdEventSymbols:] */

void FUN_1018a0b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1018a0bb4; end: 1018a10bb;  */

/* WARNING: Possible PIC construction at 0x0001018a0cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a0e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018a0cbc) */
/* WARNING: Removing unreachable block (ram,0x0001018a0e88) */
/* WARNING: Removing unreachable block (ram,0x0001018a0cec) */
/* WARNING: Removing unreachable block (ram,0x0001018a0d78) */
/* WARNING: Removing unreachable block (ram,0x0001018a0dbc) */
/* WARNING: Removing unreachable block (ram,0x0001018a0dcc) */
/* WARNING: Removing unreachable block (ram,0x0001018a0fe0) */
/* WARNING: Removing unreachable block (ram,0x0001018a1008) */
/* WARNING: Removing unreachable block (ram,0x0001018a1018) */
/* WARNING: Removing unreachable block (ram,0x0001018a0e08) */
/* WARNING: Removing unreachable block (ram,0x0001018a0ea0) */
/* WARNING: Removing unreachable block (ram,0x0001018a0f5c) */
/* WARNING: Removing unreachable block (ram,0x0001018a0e44) */
/* WARNING: Removing unreachable block (ram,0x0001018a0f6c) */
/* WARNING: Removing unreachable block (ram,0x0001018a0e98) */
/* WARNING: Removing unreachable block (ram,0x0001018a0fb4) */

void FUN_1018a0bb4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_1840;
  undefined8 uStack_1838;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&lStack_1840);
  lVar1 = lStack_1840;
  func_0x000107c614f0(lStack_1840);
  uVar2 = 0;
  func_0x00010403c628(0xd000000000000014,0x800000010efbc590,lVar1,uStack_1838);
  func_0x000107c615e8(lStack_1840);
  if ((uVar2 & 1) != 0) {
    func_0x0001000d224c(&lStack_1840);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1018a10bc; end: 1018a1c23;  */

void FUN_1018a10bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_3880;
  undefined8 uStack_3878;
  undefined8 uStack_3860;
  undefined8 uStack_3858;
  undefined8 uStack_3850;
  undefined8 uStack_3848;
  undefined8 uStack_3838;
  undefined8 uStack_3830;
  undefined8 uStack_3828;
  undefined8 uStack_3810;
  undefined8 uStack_3808;
  undefined8 uStack_3800;
  undefined8 uStack_37f8;
  undefined8 uStack_37f0;
  undefined8 uStack_37e8;
  undefined8 uStack_37e0;
  undefined8 uStack_37d8;
  undefined8 uStack_37d0;
  undefined8 uStack_37c8;
  undefined8 uStack_37c0;
  undefined8 uStack_37b8;
  undefined1 auStack_2d58 [2480];
  undefined8 uStack_23a8;
  undefined8 uStack_23a0;
  undefined8 uStack_2398;
  undefined8 uStack_2390;
  undefined8 uStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined8 uStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined8 uStack_2350;
  undefined8 uStack_2348;
  undefined8 uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  undefined8 uStack_2320;
  undefined8 uStack_2318;
  undefined8 uStack_2310;
  undefined8 uStack_2308;
  undefined1 uStack_2300;
  undefined1 uStack_22f8;
  undefined8 uStack_22f7;
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  undefined8 uStack_2270;
  undefined8 uStack_2268;
  undefined8 uStack_2260;
  undefined8 uStack_2258;
  undefined8 uStack_2250;
  undefined8 uStack_2248;
  undefined1 uStack_2240;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined8 uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  undefined8 uStack_21d8;
  undefined8 uStack_21d0;
  undefined8 uStack_21c8;
  undefined8 uStack_21c0;
  undefined8 uStack_21b8;
  undefined8 uStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined8 uStack_2190;
  undefined1 uStack_2188;
  undefined1 uStack_2180;
  undefined8 uStack_217f;
  undefined8 uStack_2170;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  undefined8 uStack_2158;
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  undefined8 uStack_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 uStack_20e0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined1 uStack_20c8;
  undefined1 uStack_20c0;
  undefined8 uStack_20bf;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 uStack_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 uStack_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  undefined8 uStack_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  undefined8 uStack_1fff;
  undefined6 uStack_1ff0;
  undefined2 uStack_1fea;
  undefined6 uStack_1fe8;
  undefined2 uStack_1fe2;
  undefined6 uStack_1fe0;
  undefined2 uStack_1fda;
  undefined6 uStack_1fd8;
  undefined2 uStack_1fd2;
  undefined6 uStack_1fd0;
  undefined2 uStack_1fca;
  undefined6 uStack_1fc8;
  undefined2 uStack_1fc2;
  undefined6 uStack_1fc0;
  undefined2 uStack_1fba;
  undefined6 uStack_1fb8;
  undefined2 uStack_1fb2;
  undefined6 uStack_1fb0;
  undefined2 uStack_1faa;
  undefined6 uStack_1fa8;
  undefined2 uStack_1fa2;
  undefined6 uStack_1fa0;
  undefined2 uStack_1f9a;
  undefined6 uStack_1f98;
  undefined2 uStack_1f92;
  undefined1 uStack_1f90;
  undefined5 uStack_1f8f;
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
  undefined1 uStack_19e8;
  undefined7 uStack_19e7;
  undefined1 uStack_19e0;
  undefined8 uStack_19df;
  undefined1 auStack_19d0 [776];
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined1 uStack_16a8;
  undefined1 uStack_16a7;
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
  undefined1 uStack_1598;
  undefined7 uStack_1597;
  undefined1 uStack_1590;
  undefined8 uStack_158f;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined1 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined2 uStack_1540;
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
  undefined1 uStack_1488;
  undefined7 uStack_1487;
  undefined1 uStack_1480;
  undefined7 uStack_147f;
  undefined1 uStack_1478;
  byte bStack_a70;
  byte bStack_a6f;
  undefined6 uStack_a6e;
  undefined8 uStack_a68;
  byte bStack_a60;
  undefined7 uStack_a5f;
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
  undefined1 uStack_9e8;
  undefined7 uStack_9e7;
  undefined8 uStack_9e0;
  undefined1 uStack_9d8;
  undefined7 uStack_9d7;
  undefined8 uStack_9d0;
  undefined1 uStack_9c8;
  undefined1 uStack_9c0;
  undefined7 uStack_9bf;
  undefined1 uStack_9b8;
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
  undefined1 uStack_950;
  undefined1 auStack_948 [1448];
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
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
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
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
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
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
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
  undefined1 uStack_150;
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
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&uStack_1530);
  uVar12 = uStack_1528;
  uVar13 = uStack_1530;
  uVar14 = uStack_1530;
  func_0x000107c614f0(uStack_1530);
  uVar8 = 0xd000000000000023;
  func_0x00010403c628(0xd000000000000023,0x800000010efbca10,uVar14,uVar12);
  func_0x000107c615e8(uVar13);
  if ((uVar8 & 1) == 0) {
    func_0x00010178e4d4(&uStack_140);
  }
  else {
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_170 = 1;
    uStack_168 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_150 = 0;
    func_0x00010420e300(&uStack_1530,0,0,0,0,0,0,&uStack_1b0,0,1,0,1);
    func_0x00010178e4ac(&uStack_1530);
    uStack_b8 = uStack_14a8;
    uStack_c0 = uStack_14b0;
    uStack_a8 = uStack_1498;
    uStack_b0 = uStack_14a0;
    uStack_98 = uStack_1488;
    uStack_a0 = uStack_1490;
    uStack_8f = uStack_147f;
    uStack_88 = uStack_1478;
    uStack_90 = uStack_1480;
    uStack_f8 = uStack_14e8;
    uStack_100 = uStack_14f0;
    uStack_e8 = uStack_14d8;
    uStack_f0 = uStack_14e0;
    uStack_d8 = uStack_14c8;
    uStack_e0 = uStack_14d0;
    uStack_c8 = uStack_14b8;
    uStack_d0 = uStack_14c0;
    uStack_138 = uStack_1528;
    uStack_140 = uStack_1530;
    uStack_128 = uStack_1518;
    uStack_130 = uStack_1520;
    uStack_118 = uStack_1508;
    uStack_120 = uStack_1510;
    uStack_108 = uStack_14f8;
    uStack_110 = uStack_1500;
  }
  uStack_1e8 = param_1[0x147];
  uStack_1f0 = param_1[0x146];
  uStack_1d8 = param_1[0x149];
  uStack_1e0 = param_1[0x148];
  uStack_1d0 = param_1[0x14a];
  uStack_1c8 = (undefined1)param_1[0x14b];
  uStack_1bf = *(undefined8 *)((long)param_1 + 0xa61);
  uStack_1c7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa59);
  uStack_1c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa59) >> 0x38);
  uStack_228 = param_1[0x13f];
  uStack_230 = param_1[0x13e];
  uStack_218 = param_1[0x141];
  uStack_220 = param_1[0x140];
  uStack_208 = param_1[0x143];
  uStack_210 = param_1[0x142];
  uStack_1f8 = param_1[0x145];
  uStack_200 = param_1[0x144];
  uStack_268 = param_1[0x137];
  uStack_270 = param_1[0x136];
  uStack_258 = param_1[0x139];
  uStack_260 = param_1[0x138];
  uStack_248 = param_1[0x13b];
  uStack_250 = param_1[0x13a];
  uStack_238 = param_1[0x13d];
  uStack_240 = param_1[0x13c];
  iVar7 = (int)&uStack_270;
  FUN_10178e278();
  uVar6 = uStack_a0;
  uVar5 = uStack_b0;
  uVar14 = uStack_120;
  uVar12 = uStack_128;
  uVar13 = uStack_138;
  if (iVar7 == 1) {
    bVar11 = (byte)uStack_140;
    bVar10 = uStack_140._1_1_;
    bVar9 = (byte)uStack_130;
    uStack_1fa8 = (undefined6)uStack_d0;
    uStack_1fa2 = (undefined2)((ulong)uStack_d0 >> 0x30);
    uStack_1fb0 = (undefined6)uStack_d8;
    uStack_1faa = (undefined2)((ulong)uStack_d8 >> 0x30);
    uStack_1f98 = (undefined6)uStack_c0;
    uStack_1f92 = (undefined2)((ulong)uStack_c0 >> 0x30);
    uStack_1fa0 = (undefined6)uStack_c8;
    uStack_1f9a = (undefined2)((ulong)uStack_c8 >> 0x30);
    uStack_1f90 = (undefined1)uStack_b8;
    uStack_1fe8 = (undefined6)uStack_110;
    uStack_1fe2 = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_1ff0 = (undefined6)uStack_118;
    uStack_1fea = (undefined2)((ulong)uStack_118 >> 0x30);
    uStack_1fd8 = (undefined6)uStack_100;
    uStack_1fd2 = (undefined2)((ulong)uStack_100 >> 0x30);
    uStack_1fe0 = (undefined6)uStack_108;
    uStack_1fda = (undefined2)((ulong)uStack_108 >> 0x30);
    uStack_1fb8 = (undefined6)uStack_e0;
    uStack_1fb2 = (undefined2)((ulong)uStack_e0 >> 0x30);
    uStack_1fc0 = (undefined6)uStack_e8;
    uStack_1fba = (undefined2)((ulong)uStack_e8 >> 0x30);
    uStack_1fc8 = (undefined6)uStack_f0;
    uStack_1fc2 = (undefined2)((ulong)uStack_f0 >> 0x30);
    uStack_1fd0 = (undefined6)uStack_f8;
    uStack_1fca = (undefined2)((ulong)uStack_f8 >> 0x30);
    uVar1 = (undefined1)uStack_a8;
    iVar7 = (int)&uStack_140;
    FUN_10178e278();
    if (iVar7 == 1) {
      uVar4 = *(undefined2 *)(param_1 + 0x156);
      uStack_3828 = param_1[0x155];
      uStack_3830 = param_1[0x154];
      uStack_3838 = param_1[0x151];
      uStack_3848 = param_1[0x153];
      uStack_3850 = param_1[0x152];
      uStack_3858 = param_1[0x14f];
      uStack_3860 = param_1[0x14e];
      uVar1 = *(undefined1 *)(param_1 + 0x150);
      uStack_37e8 = param_1[0x12f];
      uStack_37f0 = param_1[0x12e];
      uStack_37d8 = param_1[0x131];
      uStack_37e0 = param_1[0x130];
      uStack_37c8 = param_1[0x133];
      uStack_37d0 = param_1[0x132];
      uStack_37b8 = param_1[0x135];
      uStack_37c0 = param_1[0x134];
      uStack_3808 = param_1[299];
      uStack_3810 = param_1[0x12a];
      uStack_37f8 = param_1[0x12d];
      uStack_3800 = param_1[300];
      uVar2 = *(undefined1 *)((long)param_1 + 0x949);
      uVar3 = *(undefined1 *)(param_1 + 0x129);
      uVar14 = param_1[0x128];
      uVar12 = param_1[0x125];
      uStack_3878 = param_1[0x127];
      uStack_3880 = param_1[0x126];
      func_0x000107c610b4(auStack_2d58,param_1 + 0xc4,0x301);
      uStack_368 = param_1[0xbd];
      uStack_370 = param_1[0xbc];
      uStack_358 = param_1[0xbf];
      uStack_360 = param_1[0xbe];
      uStack_350 = param_1[0xc0];
      uStack_348 = (undefined1)param_1[0xc1];
      uStack_33f = *(undefined8 *)((long)param_1 + 0x611);
      uStack_347 = (undefined7)*(undefined8 *)((long)param_1 + 0x609);
      uStack_340 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x609) >> 0x38);
      uStack_398 = param_1[0xb7];
      uStack_3a0 = param_1[0xb6];
      uStack_388 = param_1[0xb9];
      uStack_390 = param_1[0xb8];
      uStack_378 = param_1[0xbb];
      uStack_380 = param_1[0xba];
      func_0x000107c610b4(auStack_948,param_1 + 1,0x5a8);
      uVar13 = *param_1;
      FUN_101795250(param_1,&uStack_1530);
      uStack_2a8 = uStack_1e8;
      uStack_2b0 = uStack_1f0;
      uStack_298 = uStack_1d8;
      uStack_2a0 = uStack_1e0;
      uStack_288 = uStack_1c8;
      uStack_290 = uStack_1d0;
      uStack_27f = uStack_1bf;
      uStack_287 = uStack_1c7;
      uStack_280 = uStack_1c0;
      uStack_2e8 = uStack_228;
      uStack_2f0 = uStack_230;
      uStack_2d8 = uStack_218;
      uStack_2e0 = uStack_220;
      uStack_2c8 = uStack_208;
      uStack_2d0 = uStack_210;
      uStack_2b8 = uStack_1f8;
      uStack_2c0 = uStack_200;
      uStack_328 = uStack_268;
      uStack_330 = uStack_270;
      uStack_318 = uStack_258;
      uStack_320 = uStack_260;
      uStack_308 = uStack_248;
      uStack_310 = uStack_250;
      uStack_2f8 = uStack_238;
      uStack_300 = uStack_240;
      goto LAB_1018a1a78;
    }
    uStack_968 = CONCAT26(uStack_1fa2,uStack_1fa8);
    uStack_970 = CONCAT26(uStack_1faa,uStack_1fb0);
    uStack_958 = CONCAT26(uStack_1f92,uStack_1f98);
    uStack_960 = CONCAT26(uStack_1f9a,uStack_1fa0);
    uStack_950 = uStack_1f90;
    uStack_9a8 = CONCAT26(uStack_1fe2,uStack_1fe8);
    uStack_9b0 = CONCAT26(uStack_1fea,uStack_1ff0);
    uStack_998 = CONCAT26(uStack_1fd2,uStack_1fd8);
    uStack_9a0 = CONCAT26(uStack_1fda,uStack_1fe0);
    uStack_978 = CONCAT26(uStack_1fb2,uStack_1fb8);
    uStack_980 = CONCAT26(uStack_1fba,uStack_1fc0);
    uStack_988 = CONCAT26(uStack_1fc2,uStack_1fc8);
    uStack_990 = CONCAT26(uStack_1fca,uStack_1fd0);
    uStack_9d0 = uVar6;
    uStack_9e0 = uVar5;
    uStack_a58 = uVar12;
    uStack_a50 = uVar14;
    uStack_a68 = uVar13;
    uStack_9d8 = uVar1;
    uStack_9c0 = uStack_90;
    uStack_9bf = uStack_8f;
  }
  else {
    uStack_14a8 = uStack_1e8;
    uStack_14b0 = uStack_1f0;
    uStack_1498 = uStack_1d8;
    uStack_14a0 = uStack_1e0;
    uStack_1488 = uStack_1c8;
    uStack_1490 = uStack_1d0;
    uStack_147f = (undefined7)uStack_1bf;
    uStack_1478 = (undefined1)((ulong)uStack_1bf >> 0x38);
    uStack_1487 = uStack_1c7;
    uStack_1480 = uStack_1c0;
    uStack_14e8 = uStack_228;
    uStack_14f0 = uStack_230;
    uStack_14d8 = uStack_218;
    uStack_14e0 = uStack_220;
    uStack_14c8 = uStack_208;
    uStack_14d0 = uStack_210;
    uStack_14b8 = uStack_1f8;
    uStack_14c0 = uStack_200;
    uStack_1528 = uStack_268;
    uStack_1530 = uStack_270;
    uStack_1518 = uStack_258;
    uStack_1520 = uStack_260;
    uStack_1508 = uStack_248;
    uStack_1510 = uStack_250;
    uStack_14f8 = uStack_238;
    uStack_1500 = uStack_240;
    FUN_10178e29c(&uStack_1530,&uStack_1ff0);
    func_0x0001018a338c(&uStack_140,0x112dcbc58,&UNK_10d98e2f0);
    uStack_968 = uStack_14c0;
    uStack_970 = uStack_14c8;
    uStack_958 = uStack_14b0;
    uStack_960 = uStack_14b8;
    uStack_950 = (undefined1)uStack_14a8;
    uStack_9a8 = uStack_1500;
    uStack_9b0 = uStack_1508;
    uStack_998 = uStack_14f0;
    uStack_9a0 = uStack_14f8;
    uStack_978 = uStack_14d0;
    uStack_980 = uStack_14d8;
    uStack_988 = uStack_14e0;
    uStack_990 = uStack_14e8;
    uStack_9d0 = uStack_1490;
    uStack_9e0 = uStack_14a0;
    uStack_a58 = uStack_1518;
    uStack_a50 = uStack_1510;
    uStack_a68 = uStack_1528;
    bVar11 = (byte)uStack_1530;
    uStack_88 = uStack_1478;
    uStack_9d8 = (undefined1)uStack_1498;
    uStack_98 = uStack_1488;
    bVar10 = uStack_1530._1_1_;
    bVar9 = (byte)uStack_1520;
    uStack_9c0 = uStack_1480;
    uStack_9bf = uStack_147f;
  }
  bStack_a70 = bVar11 & 1;
  bStack_a6f = bVar10 & 1;
  bStack_a60 = bVar9 & 1;
  uStack_a40 = param_2[1];
  uStack_a48 = *param_2;
  uStack_a30 = param_2[3];
  uStack_a38 = param_2[2];
  uStack_a20 = param_2[5];
  uStack_a28 = param_2[4];
  uStack_a10 = param_2[7];
  uStack_a18 = param_2[6];
  uStack_a00 = param_2[9];
  uStack_a08 = param_2[8];
  uStack_9f0 = param_2[0xb];
  uStack_9f8 = param_2[10];
  uStack_9e8 = *(undefined1 *)(param_2 + 0xc);
  uStack_2288 = uStack_998;
  uStack_2290 = uStack_9a0;
  uStack_2298 = uStack_9a8;
  uStack_22a0 = uStack_9b0;
  uStack_2240 = uStack_950;
  uStack_2248 = uStack_958;
  uStack_2250 = uStack_960;
  uStack_2258 = uStack_968;
  uStack_2260 = uStack_970;
  uStack_2278 = uStack_988;
  uStack_2280 = uStack_990;
  uStack_2268 = uStack_978;
  uStack_2270 = uStack_980;
  uStack_9c8 = uStack_98;
  uStack_9b8 = uStack_88;
  func_0x0001018a3350(param_2,&uStack_1530);
  func_0x0001018a338c(&uStack_22a0,0x112dcde38,&UNK_10dce36f0);
  func_0x000107c610b4(auStack_2d58,param_1,0xab2);
  uStack_21a8 = CONCAT71(uStack_9e7,uStack_9e8);
  uStack_20e8 = CONCAT71(uStack_9e7,uStack_9e8);
  uStack_2198 = CONCAT71(uStack_9d7,uStack_9d8);
  uStack_20d8 = CONCAT71(uStack_9d7,uStack_9d8);
  uStack_21b0 = uStack_9f0;
  uStack_21a0 = uStack_9e0;
  uStack_2188 = uStack_9c8;
  uStack_2190 = uStack_9d0;
  uStack_217f = CONCAT17(uStack_9b8,uStack_9bf);
  uStack_2180 = uStack_9c0;
  uStack_21e8 = uStack_a28;
  uStack_21f0 = uStack_a30;
  uStack_21d8 = uStack_a18;
  uStack_21e0 = uStack_a20;
  uStack_21c8 = uStack_a08;
  uStack_21d0 = uStack_a10;
  uStack_21b8 = uStack_9f8;
  uStack_21c0 = uStack_a00;
  uStack_2230 = CONCAT62(uStack_a6e,CONCAT11(bStack_a6f,bStack_a70));
  uStack_2170 = CONCAT62(uStack_a6e,CONCAT11(bStack_a6f,bStack_a70));
  uStack_2220 = CONCAT71(uStack_a5f,bStack_a60);
  uStack_2160 = CONCAT71(uStack_a5f,bStack_a60);
  uStack_2228 = uStack_a68;
  uStack_2218 = uStack_a58;
  uStack_2208 = uStack_a48;
  uStack_2210 = uStack_a50;
  uStack_21f8 = uStack_a38;
  uStack_2200 = uStack_a40;
  uStack_20f0 = uStack_9f0;
  uStack_20e0 = uStack_9e0;
  uStack_20c8 = uStack_9c8;
  uStack_20d0 = uStack_9d0;
  uStack_20bf = CONCAT17(uStack_9b8,uStack_9bf);
  uStack_20c0 = uStack_9c0;
  uStack_2128 = uStack_a28;
  uStack_2130 = uStack_a30;
  uStack_2118 = uStack_a18;
  uStack_2120 = uStack_a20;
  uStack_2108 = uStack_a08;
  uStack_2110 = uStack_a10;
  uStack_20f8 = uStack_9f8;
  uStack_2100 = uStack_a00;
  uStack_2168 = uStack_a68;
  uStack_2158 = uStack_a58;
  uStack_2148 = uStack_a48;
  uStack_2150 = uStack_a50;
  uStack_2138 = uStack_a38;
  uStack_2140 = uStack_a40;
  func_0x00010178e4ac(&uStack_2170);
  uStack_2028 = uStack_2320;
  uStack_2030 = uStack_2328;
  uStack_2018 = uStack_2310;
  uStack_2020 = uStack_2318;
  uStack_2010 = uStack_2308;
  uStack_1fff = uStack_22f7;
  uStack_2068 = uStack_2360;
  uStack_2070 = uStack_2368;
  uStack_2058 = uStack_2350;
  uStack_2060 = uStack_2358;
  uStack_2048 = uStack_2340;
  uStack_2050 = uStack_2348;
  uStack_2038 = uStack_2330;
  uStack_2040 = uStack_2338;
  uStack_20a8 = uStack_23a0;
  uStack_20b0 = uStack_23a8;
  uStack_2098 = uStack_2390;
  uStack_20a0 = uStack_2398;
  uStack_2088 = uStack_2380;
  uStack_2090 = uStack_2388;
  uStack_2078 = uStack_2370;
  uStack_2080 = uStack_2378;
  FUN_101795250(param_1,&uStack_1530);
  FUN_10178e29c(&uStack_2230,&uStack_1530);
  func_0x0001018a338c(&uStack_20b0,0x112dcbc58,&UNK_10d98e2f0);
  uStack_22f7 = uStack_20bf;
  uStack_22f8 = uStack_20c0;
  uStack_2320 = uStack_20e8;
  uStack_2328 = uStack_20f0;
  uStack_2310 = uStack_20d8;
  uStack_2318 = uStack_20e0;
  uStack_2300 = uStack_20c8;
  uStack_2308 = uStack_20d0;
  uStack_2360 = uStack_2128;
  uStack_2368 = uStack_2130;
  uStack_2350 = uStack_2118;
  uStack_2358 = uStack_2120;
  uStack_2340 = uStack_2108;
  uStack_2348 = uStack_2110;
  uStack_2330 = uStack_20f8;
  uStack_2338 = uStack_2100;
  uStack_23a0 = uStack_2168;
  uStack_23a8 = uStack_2170;
  uStack_2390 = uStack_2158;
  uStack_2398 = uStack_2160;
  uStack_2380 = uStack_2148;
  uStack_2388 = uStack_2150;
  uStack_2370 = uStack_2138;
  uStack_2378 = uStack_2140;
  func_0x000107c610b4(&uStack_1ff0,auStack_2d58,0xab2);
  func_0x000107c610b4(&uStack_1530,auStack_2d58,0xab2);
  FUN_101795250(&uStack_1ff0,&uStack_3810);
  func_0x00010179528c(&uStack_1530);
  func_0x00010178e2d8(&bStack_a70);
  uStack_3828 = uStack_1548;
  uStack_3830 = uStack_1550;
  uStack_3838 = uStack_1568;
  uStack_3858 = uStack_1578;
  uStack_3860 = uStack_1580;
  uStack_3848 = uStack_1558;
  uStack_3850 = uStack_1560;
  uStack_3878 = uStack_16b8;
  uStack_3880 = uStack_16c0;
  uVar13 = CONCAT26(uStack_1fea,uStack_1ff0);
  func_0x000107c610b4(auStack_948,&uStack_1fe8,0x5a8);
  uStack_358 = uStack_19f8;
  uStack_360 = uStack_1a00;
  uStack_348 = uStack_19e8;
  uStack_350 = uStack_19f0;
  uStack_33f = uStack_19df;
  uStack_347 = uStack_19e7;
  uStack_340 = uStack_19e0;
  uStack_398 = uStack_1a38;
  uStack_3a0 = uStack_1a40;
  uStack_388 = uStack_1a28;
  uStack_390 = uStack_1a30;
  uStack_368 = uStack_1a08;
  uStack_370 = uStack_1a10;
  uStack_378 = uStack_1a18;
  uStack_380 = uStack_1a20;
  func_0x000107c610b4(auStack_2d58,auStack_19d0,0x301);
  uStack_37e8 = uStack_1678;
  uStack_37f0 = uStack_1680;
  uStack_37d8 = uStack_1668;
  uStack_37e0 = uStack_1670;
  uStack_37c8 = uStack_1658;
  uStack_37d0 = uStack_1660;
  uStack_37b8 = uStack_1648;
  uStack_37c0 = uStack_1650;
  uStack_3808 = uStack_1698;
  uStack_3810 = uStack_16a0;
  uStack_37f8 = uStack_1688;
  uStack_3800 = uStack_1690;
  uStack_2e8 = uStack_15f8;
  uStack_2f0 = uStack_1600;
  uStack_2d8 = uStack_15e8;
  uStack_2e0 = uStack_15f0;
  uStack_2c8 = uStack_15d8;
  uStack_2d0 = uStack_15e0;
  uStack_2b8 = uStack_15c8;
  uStack_2c0 = uStack_15d0;
  uStack_328 = uStack_1638;
  uStack_330 = uStack_1640;
  uStack_318 = uStack_1628;
  uStack_320 = uStack_1630;
  uStack_308 = uStack_1618;
  uStack_310 = uStack_1620;
  uStack_2f8 = uStack_1608;
  uStack_300 = uStack_1610;
  uStack_27f = uStack_158f;
  uStack_280 = uStack_1590;
  uStack_288 = uStack_1598;
  uStack_287 = uStack_1597;
  uStack_290 = uStack_15a0;
  uStack_298 = uStack_15a8;
  uStack_2a0 = uStack_15b0;
  uStack_2a8 = uStack_15b8;
  uStack_2b0 = uStack_15c0;
  uVar12 = uStack_16c8;
  uVar14 = uStack_16b0;
  uVar3 = uStack_16a8;
  uVar2 = uStack_16a7;
  uVar4 = uStack_1540;
  uVar1 = uStack_1570;
LAB_1018a1a78:
  func_0x000107c610b4((ulong)&uStack_1530 | 7,auStack_2d58,0x301);
  uStack_1fc2 = (undefined2)uStack_37e8;
  uStack_1fc0 = (undefined6)((ulong)uStack_37e8 >> 0x10);
  uStack_1fca = (undefined2)uStack_37f0;
  uStack_1fc8 = (undefined6)((ulong)uStack_37f0 >> 0x10);
  uStack_1fb2 = (undefined2)uStack_37d8;
  uStack_1fb0 = (undefined6)((ulong)uStack_37d8 >> 0x10);
  uStack_1fba = (undefined2)uStack_37e0;
  uStack_1fb8 = (undefined6)((ulong)uStack_37e0 >> 0x10);
  uStack_1fa2 = (undefined2)uStack_37c8;
  uStack_1fa0 = (undefined6)((ulong)uStack_37c8 >> 0x10);
  uStack_1faa = (undefined2)uStack_37d0;
  uStack_1fa8 = (undefined6)((ulong)uStack_37d0 >> 0x10);
  uStack_1f92 = (undefined2)uStack_37b8;
  uStack_1f90 = (undefined1)((ulong)uStack_37b8 >> 0x10);
  uStack_1f8f = (undefined5)((ulong)uStack_37b8 >> 0x18);
  uStack_1f9a = (undefined2)uStack_37c0;
  uStack_1f98 = (undefined6)((ulong)uStack_37c0 >> 0x10);
  uStack_1fe2 = (undefined2)uStack_3808;
  uStack_1fe0 = (undefined6)((ulong)uStack_3808 >> 0x10);
  uStack_1fea = (undefined2)uStack_3810;
  uStack_1fe8 = (undefined6)((ulong)uStack_3810 >> 0x10);
  uStack_1fd2 = (undefined2)uStack_37f8;
  uStack_1fd0 = (undefined6)((ulong)uStack_37f8 >> 0x10);
  uStack_1fda = (undefined2)uStack_3800;
  uStack_1fd8 = (undefined6)((ulong)uStack_3800 >> 0x10);
  *extraout_x8 = uVar13;
  func_0x000107c610b4(extraout_x8 + 1,auStack_948,0x5a8);
  extraout_x8[0xbd] = uStack_368;
  extraout_x8[0xbc] = uStack_370;
  extraout_x8[0xbf] = uStack_358;
  extraout_x8[0xbe] = uStack_360;
  extraout_x8[0xc1] = CONCAT71(uStack_347,uStack_348);
  extraout_x8[0xc0] = uStack_350;
  *(undefined8 *)((long)extraout_x8 + 0x611) = uStack_33f;
  *(ulong *)((long)extraout_x8 + 0x609) = CONCAT17(uStack_340,uStack_347);
  extraout_x8[0xb7] = uStack_398;
  extraout_x8[0xb6] = uStack_3a0;
  extraout_x8[0xb9] = uStack_388;
  extraout_x8[0xb8] = uStack_390;
  extraout_x8[0xbb] = uStack_378;
  extraout_x8[0xba] = uStack_380;
  func_0x000107c610b4((long)extraout_x8 + 0x619,&uStack_1530,0x308);
  *(ulong *)((long)extraout_x8 + 0x992) = CONCAT26(uStack_1fa2,uStack_1fa8);
  *(ulong *)((long)extraout_x8 + 0x98a) = CONCAT26(uStack_1faa,uStack_1fb0);
  *(ulong *)((long)extraout_x8 + 0x9a2) = CONCAT26(uStack_1f92,uStack_1f98);
  *(ulong *)((long)extraout_x8 + 0x99a) = CONCAT26(uStack_1f9a,uStack_1fa0);
  *(ulong *)((long)extraout_x8 + 0x952) = CONCAT26(uStack_1fe2,uStack_1fe8);
  *(ulong *)((long)extraout_x8 + 0x94a) = CONCAT26(uStack_1fea,uStack_1ff0);
  *(ulong *)((long)extraout_x8 + 0x962) = CONCAT26(uStack_1fd2,uStack_1fd8);
  *(ulong *)((long)extraout_x8 + 0x95a) = CONCAT26(uStack_1fda,uStack_1fe0);
  *(ulong *)((long)extraout_x8 + 0x972) = CONCAT26(uStack_1fc2,uStack_1fc8);
  *(ulong *)((long)extraout_x8 + 0x96a) = CONCAT26(uStack_1fca,uStack_1fd0);
  *(ulong *)((long)extraout_x8 + 0x982) = CONCAT26(uStack_1fb2,uStack_1fb8);
  *(ulong *)((long)extraout_x8 + 0x97a) = CONCAT26(uStack_1fba,uStack_1fc0);
  extraout_x8[0x127] = uStack_3878;
  extraout_x8[0x126] = uStack_3880;
  *(undefined8 *)((long)extraout_x8 + 0xa61) = uStack_27f;
  *(ulong *)((long)extraout_x8 + 0xa59) = CONCAT17(uStack_280,uStack_287);
  extraout_x8[0x14b] = CONCAT71(uStack_287,uStack_288);
  extraout_x8[0x14a] = uStack_290;
  extraout_x8[0x149] = uStack_298;
  extraout_x8[0x148] = uStack_2a0;
  extraout_x8[0x147] = uStack_2a8;
  extraout_x8[0x146] = uStack_2b0;
  extraout_x8[0x145] = uStack_2b8;
  extraout_x8[0x144] = uStack_2c0;
  extraout_x8[0x143] = uStack_2c8;
  extraout_x8[0x142] = uStack_2d0;
  extraout_x8[0x141] = uStack_2d8;
  extraout_x8[0x140] = uStack_2e0;
  extraout_x8[0x13f] = uStack_2e8;
  extraout_x8[0x13e] = uStack_2f0;
  extraout_x8[0x13d] = uStack_2f8;
  extraout_x8[0x13c] = uStack_300;
  extraout_x8[0x13b] = uStack_308;
  extraout_x8[0x13a] = uStack_310;
  extraout_x8[0x139] = uStack_318;
  extraout_x8[0x138] = uStack_320;
  extraout_x8[0x125] = uVar12;
  extraout_x8[0x128] = uVar14;
  *(undefined1 *)(extraout_x8 + 0x129) = uVar3;
  *(undefined1 *)((long)extraout_x8 + 0x949) = uVar2;
  extraout_x8[0x135] = CONCAT53(uStack_1f8f,CONCAT12(uStack_1f90,uStack_1f92));
  extraout_x8[0x137] = uStack_328;
  extraout_x8[0x136] = uStack_330;
  extraout_x8[0x14f] = uStack_3858;
  extraout_x8[0x14e] = uStack_3860;
  *(undefined1 *)(extraout_x8 + 0x150) = uVar1;
  extraout_x8[0x151] = uStack_3838;
  extraout_x8[0x153] = uStack_3848;
  extraout_x8[0x152] = uStack_3850;
  extraout_x8[0x155] = uStack_3828;
  extraout_x8[0x154] = uStack_3830;
  *(undefined2 *)(extraout_x8 + 0x156) = uVar4;
  return;
}



/* Entry: 1018a1c24; end: 1018a1c83; -[_TtC25AdTrackParserServicesImpl22AdTrackSKOverlayParser parseWithTrackRequest:viewSeqNum:] */

void FUN_1018a1c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1018a0bb4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a1c84; end: 1018a1ccf;  */

void FUN_1018a1c84(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018a1cd0; end: 1018a1f63;  */

bool FUN_1018a1cd0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_6c30 [2744];
  undefined1 auStack_6178 [2744];
  undefined1 auStack_56c0 [2744];
  undefined1 auStack_4c08 [2744];
  undefined1 auStack_4150 [2744];
  undefined1 auStack_3698 [2744];
  undefined1 auStack_2be0 [2744];
  undefined1 auStack_2128 [2744];
  undefined1 auStack_1670 [112];
  undefined1 auStack_1600 [2824];
  undefined1 auStack_af8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_1670,param_1 + 0xad8,0xb78);
  iVar2 = (int)auStack_1670;
  func_0x000100cbd8d4();
  if (iVar2 == 1) {
    func_0x000101895c44(auStack_af8);
  }
  else {
    func_0x000107c610b4(auStack_4c08,auStack_1600,0xab2);
    func_0x0001018a33cc(auStack_4c08,auStack_af8,0x112dcbc80,&UNK_10d98ff10);
    func_0x000107c610b4(auStack_af8,auStack_4c08,0xab2);
  }
  func_0x000101895c44(auStack_3698);
  func_0x000107c610b4(auStack_4c08,auStack_af8,0xab2);
  func_0x000107c610b4(auStack_4150,auStack_3698,0xab2);
  iVar2 = (int)auStack_4c08;
  FUN_10178e3ec();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_4150;
    FUN_10178e3ec();
    if (iVar2 != 1) {
LAB_1018a1e3c:
      func_0x0001018a338c(auStack_4c08,0x112dcde40,&UNK_10d9902d0);
      return true;
    }
    func_0x0001018a338c(auStack_4c08,0x112dcbc80,&UNK_10d98ff10);
  }
  else {
    func_0x000107c610b4(auStack_56c0,auStack_4c08,0xab2);
    iVar2 = (int)auStack_4150;
    FUN_10178e3ec();
    if (iVar2 == 1) goto LAB_1018a1e3c;
    func_0x000107c610b4(auStack_6178,auStack_4150,0xab2);
    func_0x000107c610b4(auStack_2128,auStack_4150,0xab2);
    func_0x000107c610b4(auStack_2be0,auStack_56c0,0xab2);
    func_0x0001018a33cc(auStack_af8,auStack_6c30,0x112dcbc80,&UNK_10d98ff10);
    puVar3 = auStack_2be0;
    func_0x0001042622d8(puVar3,auStack_2128);
    func_0x0001018a338c(auStack_af8,0x112dcbc80,&UNK_10d98ff10);
    func_0x0001018a338c(auStack_6178,0x112dcbc80,&UNK_10d98ff10);
    func_0x0001018a338c(auStack_4c08,0x112dcbc80,&UNK_10d98ff10);
    if (((ulong)puVar3 & 1) == 0) {
      return true;
    }
  }
  if ((*(long *)(param_1 + 0x16c0) == 1) || ((*(uint *)(param_1 + 0x1688) & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x1690) == 6;
  }
  return bVar1;
}



/* Entry: 1018a1f64; end: 1018a224b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a1f64(undefined8 *param_1,double param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  
  if (param_3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    if (uVar8 == 0) {
LAB_1018a2174:
      dVar16 = 0.0;
      dVar15 = 0.0;
      dVar13 = 0.0;
      puVar10 = (undefined *)0x1;
      uVar7 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      uVar11 = 0;
      dVar14 = 0.0;
      goto LAB_1018a2178;
    }
  }
  else {
    uVar8 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar8 = param_3;
    }
    uVar9 = uVar8;
    func_0x000107c60480();
    dVar13 = 0.0;
    if ((long)uVar9 < 1) goto LAB_1018a2174;
    func_0x000107c60480();
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
      uVar11 = 1;
      dVar15 = 0.0;
      dVar16 = 0.0;
      dVar14 = 0.0;
      uStack_a8 = 1;
      uStack_98 = 1;
      uVar7 = 1;
      goto LAB_1018a2178;
    }
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a2208);
      (*pcVar2)();
    }
  }
  puVar10 = (undefined *)0x0;
  uVar9 = 0;
  uVar11 = 1;
  dVar14 = 0.0;
  dVar16 = 0.0;
  dVar15 = 0.0;
  uStack_a8 = 1;
  dVar13 = 0.0;
  uStack_98 = 1;
  do {
    if ((param_3 & 0xc000000000000001) == 0) {
      uVar3 = *(ulong *)(param_3 + uVar9 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar9;
      func_0x00010188850c(uVar9,param_3);
    }
    lVar1 = _DAT_11308c490;
    lVar4 = *(long *)(uVar3 + _DAT_11308c490);
    func_0x000107c30d68();
    if (lVar4 == 4) {
      lVar4 = *(long *)(uVar3 + lVar1);
      func_0x000107c30d6c();
      func_0x000107c61180();
      func_0x000107c30b10(*(undefined8 *)(uVar3 + _DAT_11308c488));
      dVar12 = param_2;
      if (lVar4 == 0) {
        uStack_a8 = 0;
        dVar15 = param_2;
      }
      else {
        lVar5 = *(long *)(uVar3 + lVar1);
        func_0x000107c30d70();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c49820();
          func_0x000107c61170(lVar5);
        }
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8();
        func_0x000107c466bc();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar10);
        uVar11 = 0;
        puVar10 = puVar6;
        dVar16 = param_2;
      }
    }
    else {
      dVar12 = param_2;
      if (lVar4 == 2) {
        func_0x000107c30b10(*(undefined8 *)(uVar3 + _DAT_11308c488));
        uStack_98 = 0;
        dVar12 = param_2;
        dVar13 = param_2;
      }
    }
    uVar9 = uVar9 + 1;
    func_0x000107c30d74(*(undefined8 *)(uVar3 + lVar1));
    param_2 = dVar12;
    func_0x000107c61170(uVar3);
    if (dVar14 < dVar12) {
      dVar14 = dVar12;
    }
  } while (uVar8 != uVar9);
  uVar7 = 1;
LAB_1018a2178:
  *param_1 = 0;
  param_1[1] = uVar7;
  param_1[2] = 0;
  param_1[3] = uVar7;
  param_1[4] = dVar13;
  param_1[5] = uStack_98;
  param_1[6] = dVar15;
  param_1[7] = uStack_a8;
  param_1[8] = puVar10;
  param_1[9] = dVar16;
  param_1[10] = uVar11;
  param_1[0xb] = dVar14;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 1018a224c; end: 1018a28e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018a224c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c3d32c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar6 = 0;
  func_0x00010468506c(0);
  uVar7 = param_2;
  func_0x000107c5fc54(param_2,uVar6);
  func_0x000107c61170(param_2);
  uVar16 = uVar7 & 0xffffffffffffff8;
  if (uVar7 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar16 + 0x10);
  }
  else {
    uVar14 = uVar16;
    if (0x7fffffffffffffff < uVar7) {
      uVar14 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018a24e4);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar7 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar11;
          FUN_101887b4c(uVar11,uVar7);
        }
        lVar3 = _DAT_11308c0c8;
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018a24e0);
          (*pcVar4)();
        }
        iVar5 = (int)*(undefined8 *)(uVar8 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar5 == 10) break;
LAB_1018a2308:
        func_0x000107c61170(uVar8);
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar14) goto LAB_1018a23f4;
      }
      uVar9 = *(ulong *)(uVar8 + lVar3);
      func_0x000107c30b28();
      if ((uVar9 & 1) == 0) goto LAB_1018a2308;
      puVar13 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar13 & 1) == 0) {
        func_0x0001018ad018(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
        func_0x0001018ad018(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
      *(ulong *)(puVar2 + uVar11 * 8 + 0x20) = uVar8;
      uVar11 = uVar1;
    } while (uVar1 != uVar14);
  }
LAB_1018a23f4:
  func_0x000107c6142c(uVar7);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar13 = puVar2;
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = *(undefined **)(puVar2 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c61574(puVar2);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x00010134166c(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018a2544);
      (*pcVar4)();
    }
    puVar15 = (undefined *)0x0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        puVar10 = *(undefined **)(puVar2 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
        uVar6 = param_1;
      }
      else {
        puVar10 = puVar15;
        FUN_101887b4c(puVar15,puVar2);
        uVar6 = param_1;
      }
      func_0x000107c30b10(*(undefined8 *)(puVar10 + _DAT_11308c0c0));
      param_1 = uVar6;
      func_0x000107c61170(puVar10);
      uVar7 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar7) {
        func_0x00010134166c(1 < *(ulong *)(puVar12 + 0x18),uVar7 + 1,1);
      }
      puVar15 = puVar15 + 1;
      *(ulong *)(puVar12 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar12 + uVar7 * 8 + 0x20) = uVar6;
    } while (puVar13 != puVar15);
    func_0x000107c61574(puVar2);
  }
  return puVar12;
}



/* Entry: 1018a28e4; end: 1018a331b;  */

/* WARNING: Removing unreachable block (ram,0x0001018a3310) */

void FUN_1018a28e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_3c68;
  undefined8 uStack_3c58;
  undefined8 uStack_3c28;
  undefined8 uStack_3c20;
  undefined8 uStack_3c18;
  undefined8 uStack_3c10;
  undefined8 uStack_3c08;
  undefined8 uStack_3bf0;
  undefined8 uStack_3be8;
  undefined8 uStack_3be0;
  undefined8 uStack_3bd8;
  undefined1 auStack_3bc8 [16];
  undefined8 uStack_3bb8;
  undefined1 auStack_3110 [192];
  undefined6 uStack_3050;
  undefined2 uStack_304a;
  undefined6 uStack_3048;
  undefined2 uStack_3042;
  undefined6 uStack_3040;
  undefined2 uStack_303a;
  undefined6 uStack_3038;
  undefined2 uStack_3032;
  undefined6 uStack_3030;
  undefined2 uStack_302a;
  undefined6 uStack_3028;
  undefined2 uStack_3022;
  undefined6 uStack_3020;
  undefined2 uStack_301a;
  undefined6 uStack_3018;
  undefined2 uStack_3012;
  undefined6 uStack_3010;
  undefined2 uStack_300a;
  undefined6 uStack_3008;
  undefined2 uStack_3002;
  undefined6 uStack_3000;
  undefined2 uStack_2ffa;
  undefined6 uStack_2ff8;
  undefined2 uStack_2ff2;
  undefined6 uStack_2ff0;
  undefined2 uStack_2fea;
  undefined8 uStack_2fe8;
  undefined8 uStack_2fe0;
  undefined8 uStack_2fd8;
  undefined8 uStack_2fd0;
  undefined8 uStack_2fc8;
  undefined8 uStack_2fc0;
  undefined8 uStack_2fb8;
  undefined8 uStack_2fb0;
  undefined8 uStack_2f9f;
  long lStack_2f90;
  undefined8 uStack_2f88;
  undefined8 uStack_2f80;
  undefined8 uStack_2f78;
  undefined8 uStack_2f70;
  undefined8 uStack_2f68;
  undefined8 uStack_2f60;
  undefined8 uStack_2f58;
  undefined8 uStack_2f50;
  undefined8 uStack_2f48;
  undefined8 uStack_2f40;
  undefined1 uStack_2f38;
  undefined7 uStack_2f37;
  undefined1 uStack_2f30;
  undefined7 uStack_2f2f;
  undefined1 uStack_2f28;
  undefined7 uStack_2f27;
  undefined8 uStack_2f20;
  undefined8 uStack_2f18;
  undefined8 uStack_2f10;
  undefined8 uStack_2f08;
  undefined8 uStack_2f00;
  undefined8 uStack_2ef8;
  undefined8 uStack_2ef0;
  undefined8 uStack_2edf;
  long lStack_2ec0;
  undefined8 uStack_2eb8;
  undefined8 uStack_2eb0;
  undefined8 uStack_2ea8;
  undefined8 uStack_2ea0;
  undefined8 uStack_2e98;
  undefined8 uStack_2e90;
  undefined8 uStack_2e88;
  undefined8 uStack_2e80;
  undefined8 uStack_2e78;
  undefined8 uStack_2e70;
  undefined8 uStack_2e68;
  undefined8 uStack_2e60;
  undefined8 uStack_2e58;
  undefined8 uStack_2e50;
  undefined8 uStack_2e48;
  undefined8 uStack_2e40;
  undefined8 uStack_2e38;
  undefined8 uStack_2e30;
  undefined8 uStack_2e28;
  undefined8 uStack_2e20;
  undefined8 uStack_2e0f;
  long lStack_2e00;
  undefined8 uStack_2df8;
  undefined8 uStack_2df0;
  undefined8 uStack_2de8;
  undefined8 uStack_2de0;
  undefined8 uStack_2dd8;
  undefined8 uStack_2dd0;
  undefined8 uStack_2dc8;
  undefined8 uStack_2dc0;
  undefined8 uStack_2db8;
  undefined8 uStack_2db0;
  undefined8 uStack_2da8;
  undefined8 uStack_2da0;
  undefined8 uStack_2d98;
  undefined8 uStack_2d90;
  undefined8 uStack_2d88;
  undefined8 uStack_2d80;
  undefined8 uStack_2d78;
  undefined8 uStack_2d70;
  undefined8 uStack_2d68;
  undefined8 uStack_2d60;
  undefined8 uStack_2d4f;
  long lStack_2910;
  undefined8 uStack_2908;
  undefined8 uStack_2900;
  undefined8 uStack_28f8;
  undefined8 uStack_28f0;
  undefined8 uStack_28e8;
  undefined8 uStack_28e0;
  undefined8 uStack_28d8;
  undefined8 uStack_28d0;
  undefined8 uStack_28c8;
  undefined8 uStack_28c0;
  undefined8 uStack_28af;
  undefined1 auStack_28a0 [776];
  undefined8 uStack_2598;
  undefined8 uStack_2590;
  undefined8 uStack_2588;
  undefined8 uStack_2580;
  undefined8 uStack_2570;
  undefined8 uStack_2568;
  undefined8 uStack_2560;
  undefined8 uStack_2558;
  undefined8 uStack_2550;
  undefined8 uStack_2548;
  undefined8 uStack_2540;
  undefined8 uStack_2538;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  undefined8 uStack_2518;
  long lStack_2510;
  undefined8 uStack_2508;
  undefined8 uStack_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  undefined8 uStack_24e8;
  undefined8 uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined8 uStack_24b0;
  undefined8 uStack_24a8;
  undefined8 uStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined8 uStack_2478;
  undefined8 uStack_2470;
  undefined8 uStack_245f;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined8 uStack_2428;
  undefined8 uStack_2420;
  undefined8 uStack_2418;
  long lStack_2400;
  undefined8 uStack_23f8;
  undefined8 uStack_23f0;
  undefined8 uStack_23e8;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined8 uStack_23d0;
  undefined8 uStack_23c8;
  undefined8 uStack_23c0;
  undefined8 uStack_23b8;
  undefined8 uStack_23b0;
  undefined8 uStack_23a8;
  undefined8 uStack_23a0;
  undefined8 uStack_2398;
  undefined8 uStack_2390;
  undefined8 uStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined8 uStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_234f;
  undefined8 uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  undefined8 uStack_2320;
  undefined8 uStack_2318;
  undefined8 uStack_2310;
  undefined8 uStack_2308;
  undefined8 uStack_2300;
  undefined8 uStack_22f8;
  undefined8 uStack_22f0;
  undefined8 uStack_22e8;
  undefined8 uStack_22e0;
  undefined8 uStack_22d8;
  undefined8 uStack_22d0;
  undefined8 uStack_22c8;
  undefined8 uStack_22c0;
  undefined8 uStack_22b8;
  undefined8 uStack_22b0;
  undefined8 uStack_22a8;
  undefined8 uStack_22a0;
  undefined8 uStack_228f;
  long lStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  undefined8 uStack_2008;
  undefined8 uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f7f;
  undefined1 auStack_1a80 [8];
  undefined1 auStack_1a78 [1448];
  long lStack_14d0;
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
  undefined8 uStack_146f;
  undefined1 auStack_1460 [776];
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
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
  long lStack_10d0;
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
  undefined8 uStack_101f;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined1 auStack_fc8 [8];
  undefined1 auStack_fc0 [1448];
  long lStack_a18;
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
  undefined1 uStack_9c0;
  undefined7 uStack_9bf;
  undefined1 uStack_9b8;
  undefined8 uStack_9b7;
  undefined1 auStack_9af [783];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_67e;
  undefined8 uStack_676;
  undefined8 uStack_66e;
  undefined8 uStack_666;
  undefined8 uStack_65e;
  undefined8 uStack_656;
  undefined8 uStack_64e;
  undefined8 uStack_646;
  undefined8 uStack_63e;
  undefined8 uStack_636;
  undefined8 uStack_62e;
  undefined6 uStack_626;
  undefined2 uStack_620;
  undefined6 uStack_61e;
  long lStack_618;
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
  undefined8 uStack_567;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
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
  undefined8 uStack_4af;
  undefined1 auStack_498 [776];
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
  long lStack_130;
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
  undefined8 uStack_7f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  iVar3 = (int)param_1;
  iVar1 = iVar3 + 0xaf0;
  func_0x000100cbd8d4();
  if (iVar1 == 1) {
LAB_1018a2994:
    func_0x000107c610b4(auStack_fc8,param_1 + 0x38,0xab2);
    func_0x000107c610b4(&lStack_2030,auStack_fc0,0x5a8);
    uStack_2f58 = uStack_9e0;
    uStack_2f60 = uStack_9e8;
    uStack_2f48 = uStack_9d0;
    uStack_2f50 = uStack_9d8;
    uStack_2f38 = uStack_9c0;
    uStack_2f40 = uStack_9c8;
    uStack_2f2f = (undefined7)uStack_9b7;
    uStack_2f28 = (undefined1)((ulong)uStack_9b7 >> 0x38);
    uStack_2f37 = uStack_9bf;
    uStack_2f30 = uStack_9b8;
    uStack_2f88 = uStack_a10;
    lStack_2f90 = lStack_a18;
    uStack_2f78 = uStack_a00;
    uStack_2f80 = uStack_a08;
    uStack_2f68 = uStack_9f0;
    uStack_2f70 = uStack_9f8;
    func_0x000107c610b4(&uStack_2340,auStack_9af,0x308);
    uStack_3c18 = uStack_698;
    uStack_3c20 = uStack_6a0;
    uStack_3c08 = uStack_688;
    uStack_3c10 = uStack_690;
    uStack_3008 = (undefined6)uStack_636;
    uStack_3002 = (undefined2)((ulong)uStack_636 >> 0x30);
    uStack_3010 = (undefined6)uStack_63e;
    uStack_300a = (undefined2)((ulong)uStack_63e >> 0x30);
    uStack_2ff8 = uStack_626;
    uStack_3000 = (undefined6)uStack_62e;
    uStack_2ffa = (undefined2)((ulong)uStack_62e >> 0x30);
    uStack_2ff2 = uStack_620;
    uStack_2ff0 = uStack_61e;
    uStack_3048 = (undefined6)uStack_676;
    uStack_3042 = (undefined2)((ulong)uStack_676 >> 0x30);
    uStack_3050 = (undefined6)uStack_67e;
    uStack_304a = (undefined2)((ulong)uStack_67e >> 0x30);
    uStack_3038 = (undefined6)uStack_666;
    uStack_3032 = (undefined2)((ulong)uStack_666 >> 0x30);
    uStack_3040 = (undefined6)uStack_66e;
    uStack_303a = (undefined2)((ulong)uStack_66e >> 0x30);
    uStack_3028 = (undefined6)uStack_656;
    uStack_3022 = (undefined2)((ulong)uStack_656 >> 0x30);
    uStack_3030 = (undefined6)uStack_65e;
    uStack_302a = (undefined2)((ulong)uStack_65e >> 0x30);
    uStack_3018 = (undefined6)uStack_646;
    uStack_3012 = (undefined2)((ulong)uStack_646 >> 0x30);
    uStack_3020 = (undefined6)uStack_64e;
    uStack_301a = (undefined2)((ulong)uStack_64e >> 0x30);
    uStack_2378 = uStack_590;
    uStack_2380 = uStack_598;
    uStack_2368 = uStack_580;
    uStack_2370 = uStack_588;
    uStack_2360 = uStack_578;
    uStack_234f = uStack_567;
    uStack_23b8 = uStack_5d0;
    uStack_23c0 = uStack_5d8;
    uStack_23a8 = uStack_5c0;
    uStack_23b0 = uStack_5c8;
    uStack_2398 = uStack_5b0;
    uStack_23a0 = uStack_5b8;
    uStack_2388 = uStack_5a0;
    uStack_2390 = uStack_5a8;
    uStack_23f8 = uStack_610;
    lStack_2400 = lStack_618;
    uStack_23e8 = uStack_600;
    uStack_23f0 = uStack_608;
    uStack_23d8 = uStack_5f0;
    uStack_23e0 = uStack_5f8;
    uStack_23c8 = uStack_5e0;
    uStack_23d0 = uStack_5e8;
    uStack_3c28 = uStack_558;
    uStack_3be8 = uStack_538;
    uStack_3bf0 = uStack_540;
    uStack_3bd8 = uStack_528;
    uStack_3be0 = uStack_530;
    iVar1 = (int)auStack_fc8;
    FUN_10178e478();
    if (iVar1 == 1) {
      return;
    }
    uStack_3c68 = uStack_550;
    uStack_3c58 = uStack_520;
    func_0x000107c610b4(auStack_1a80,auStack_fc8,0xab2);
    FUN_101795250(auStack_1a80,&lStack_2ec0);
    func_0x000107c610b4(auStack_3bc8,&lStack_2030,0x5a8);
    uStack_4c8 = uStack_2f48;
    uStack_4d0 = uStack_2f50;
    uStack_4c0 = uStack_2f40;
    uStack_4af = CONCAT17(uStack_2f28,uStack_2f2f);
    uStack_508 = uStack_2f88;
    lStack_510 = lStack_2f90;
    uStack_4f8 = uStack_2f78;
    uStack_500 = uStack_2f80;
    uStack_4e8 = uStack_2f68;
    uStack_4f0 = uStack_2f70;
    uStack_4d8 = uStack_2f58;
    uStack_4e0 = uStack_2f60;
    func_0x000107c610b4(auStack_498,(long)&uStack_2340 + 7,0x301);
    uStack_168 = CONCAT62(uStack_3020,uStack_3022);
    uStack_170 = CONCAT62(uStack_3028,uStack_302a);
    uStack_158 = CONCAT62(uStack_3010,uStack_3012);
    uStack_160 = CONCAT62(uStack_3018,uStack_301a);
    uStack_148 = CONCAT62(uStack_3000,uStack_3002);
    uStack_150 = CONCAT62(uStack_3008,uStack_300a);
    uStack_138 = CONCAT62(uStack_2ff0,uStack_2ff2);
    uStack_140 = CONCAT62(uStack_2ff8,uStack_2ffa);
    uStack_188 = CONCAT62(uStack_3040,uStack_3042);
    uStack_190 = CONCAT62(uStack_3048,uStack_304a);
    uStack_178 = CONCAT62(uStack_3030,uStack_3032);
    uStack_180 = CONCAT62(uStack_3038,uStack_303a);
    uStack_7f = uStack_234f;
    uStack_98 = uStack_2368;
    uStack_a0 = uStack_2370;
    uStack_90 = uStack_2360;
    uStack_b8 = uStack_2388;
    uStack_c0 = uStack_2390;
    uStack_a8 = uStack_2378;
    uStack_b0 = uStack_2380;
    uStack_d8 = uStack_23a8;
    uStack_e0 = uStack_23b0;
    uStack_c8 = uStack_2398;
    uStack_d0 = uStack_23a0;
    uStack_f8 = uStack_23c8;
    uStack_100 = uStack_23d0;
    uStack_e8 = uStack_23b8;
    uStack_f0 = uStack_23c0;
    uStack_118 = uStack_23e8;
    uStack_120 = uStack_23f0;
    uStack_108 = uStack_23d8;
    uStack_110 = uStack_23e0;
    uStack_128 = uStack_23f8;
    lStack_130 = lStack_2400;
  }
  else {
    iVar1 = iVar3 + 0xb60;
    FUN_10178e3ec();
    if (iVar1 == 1) goto LAB_1018a2994;
    func_0x000107c610b4(auStack_1a80,param_1 + 0xb60,0xab2);
    iVar1 = (int)auStack_1a80;
    FUN_10178e478();
    if (iVar1 == 1) goto LAB_1018a2994;
    func_0x000107c610b4(&lStack_2ec0,auStack_1a80,0xab2);
    uStack_3c58 = uStack_2418;
    uStack_3be8 = uStack_2430;
    uStack_3bf0 = uStack_2438;
    uStack_3bd8 = uStack_2420;
    uStack_3be0 = uStack_2428;
    uStack_3c68 = uStack_2448;
    uStack_3c18 = uStack_2590;
    uStack_3c20 = uStack_2598;
    uStack_3c08 = uStack_2580;
    uStack_3c10 = uStack_2588;
    uStack_3c28 = uStack_2450;
    FUN_101795250(&lStack_2ec0,auStack_3bc8);
    func_0x000107c610b4(auStack_3bc8,&uStack_2eb8,0x5a8);
    uStack_4c8 = uStack_28c8;
    uStack_4d0 = uStack_28d0;
    uStack_4c0 = uStack_28c0;
    uStack_4af = uStack_28af;
    uStack_508 = uStack_2908;
    lStack_510 = lStack_2910;
    uStack_4f8 = uStack_28f8;
    uStack_500 = uStack_2900;
    uStack_4e8 = uStack_28e8;
    uStack_4f0 = uStack_28f0;
    uStack_4d8 = uStack_28d8;
    uStack_4e0 = uStack_28e0;
    func_0x000107c610b4(auStack_498,auStack_28a0,0x301);
    uStack_168 = uStack_2548;
    uStack_170 = uStack_2550;
    uStack_158 = uStack_2538;
    uStack_160 = uStack_2540;
    uStack_148 = uStack_2528;
    uStack_150 = uStack_2530;
    uStack_138 = uStack_2518;
    uStack_140 = uStack_2520;
    uStack_188 = uStack_2568;
    uStack_190 = uStack_2570;
    uStack_178 = uStack_2558;
    uStack_180 = uStack_2560;
    uStack_e8 = uStack_24c8;
    uStack_f0 = uStack_24d0;
    uStack_d8 = uStack_24b8;
    uStack_e0 = uStack_24c0;
    uStack_c8 = uStack_24a8;
    uStack_d0 = uStack_24b0;
    uStack_b8 = uStack_2498;
    uStack_c0 = uStack_24a0;
    uStack_128 = uStack_2508;
    lStack_130 = lStack_2510;
    uStack_118 = uStack_24f8;
    uStack_120 = uStack_2500;
    uStack_108 = uStack_24e8;
    uStack_110 = uStack_24f0;
    uStack_f8 = uStack_24d8;
    uStack_100 = uStack_24e0;
    uStack_7f = uStack_245f;
    uStack_98 = uStack_2478;
    uStack_a0 = uStack_2480;
    uStack_90 = uStack_2470;
    uStack_a8 = uStack_2488;
    uStack_b0 = uStack_2490;
  }
  func_0x000107c610b4(auStack_1a78,auStack_3bc8,0x5a8);
  uStack_146f = uStack_4af;
  uStack_1498 = uStack_4d8;
  uStack_14a0 = uStack_4e0;
  uStack_1488 = uStack_4c8;
  uStack_1490 = uStack_4d0;
  uStack_1480 = uStack_4c0;
  uStack_14c8 = uStack_508;
  lStack_14d0 = lStack_510;
  uStack_14b8 = uStack_4f8;
  uStack_14c0 = uStack_500;
  uStack_14a8 = uStack_4e8;
  uStack_14b0 = uStack_4f0;
  func_0x000107c610b4(auStack_1460,auStack_498,0x301);
  uStack_1150 = uStack_3c18;
  uStack_1158 = uStack_3c20;
  uStack_1140 = uStack_3c08;
  uStack_1148 = uStack_3c10;
  uStack_1108 = uStack_168;
  uStack_1110 = uStack_170;
  uStack_10f8 = uStack_158;
  uStack_1100 = uStack_160;
  uStack_10e8 = uStack_148;
  uStack_10f0 = uStack_150;
  uStack_10d8 = uStack_138;
  uStack_10e0 = uStack_140;
  uStack_1128 = uStack_188;
  uStack_1130 = uStack_190;
  uStack_1118 = uStack_178;
  uStack_1120 = uStack_180;
  uStack_101f = uStack_7f;
  uStack_1048 = uStack_a8;
  uStack_1050 = uStack_b0;
  uStack_1038 = uStack_98;
  uStack_1040 = uStack_a0;
  uStack_1030 = uStack_90;
  uStack_1088 = uStack_e8;
  uStack_1090 = uStack_f0;
  uStack_1078 = uStack_d8;
  uStack_1080 = uStack_e0;
  uStack_1068 = uStack_c8;
  uStack_1070 = uStack_d0;
  uStack_1058 = uStack_b8;
  uStack_1060 = uStack_c0;
  uStack_10c8 = uStack_128;
  lStack_10d0 = lStack_130;
  uStack_10b8 = uStack_118;
  uStack_10c0 = uStack_120;
  uStack_10a8 = uStack_108;
  uStack_10b0 = uStack_110;
  uStack_1098 = uStack_f8;
  uStack_10a0 = uStack_100;
  uStack_1010 = uStack_3c28;
  uStack_1008 = uStack_3c68;
  uStack_ff0 = uStack_3be8;
  uStack_ff8 = uStack_3bf0;
  uStack_fe0 = uStack_3bd8;
  uStack_fe8 = uStack_3be0;
  uStack_fd8 = uStack_3c58;
  func_0x00010178e4d4(&lStack_2400);
  iVar1 = (int)&lStack_2e00;
  uStack_2e38 = uStack_a8;
  uStack_2e40 = uStack_b0;
  uStack_2e28 = uStack_98;
  uStack_2e30 = uStack_a0;
  uStack_2e20 = uStack_90;
  uStack_2e0f = uStack_7f;
  uStack_2e78 = uStack_e8;
  uStack_2e80 = uStack_f0;
  uStack_2e68 = uStack_d8;
  uStack_2e70 = uStack_e0;
  uStack_2e58 = uStack_c8;
  uStack_2e60 = uStack_d0;
  uStack_2e48 = uStack_b8;
  uStack_2e50 = uStack_c0;
  uStack_2eb8 = uStack_128;
  lStack_2ec0 = lStack_130;
  uStack_2ea8 = uStack_118;
  uStack_2eb0 = uStack_120;
  uStack_2e98 = uStack_108;
  uStack_2ea0 = uStack_110;
  uStack_2e88 = uStack_f8;
  uStack_2e90 = uStack_100;
  uStack_2d4f = uStack_234f;
  uStack_2d78 = uStack_2378;
  uStack_2d80 = uStack_2380;
  uStack_2d68 = uStack_2368;
  uStack_2d70 = uStack_2370;
  uStack_2d60 = uStack_2360;
  uStack_2db8 = uStack_23b8;
  uStack_2dc0 = uStack_23c0;
  uStack_2da8 = uStack_23a8;
  uStack_2db0 = uStack_23b0;
  uStack_2d98 = uStack_2398;
  uStack_2da0 = uStack_23a0;
  uStack_2d88 = uStack_2388;
  uStack_2d90 = uStack_2390;
  uStack_2df8 = uStack_23f8;
  lStack_2e00 = lStack_2400;
  uStack_2de8 = uStack_23e8;
  uStack_2df0 = uStack_23f0;
  uStack_2dd8 = uStack_23d8;
  uStack_2de0 = uStack_23e0;
  uStack_2dc8 = uStack_23c8;
  uStack_2dd0 = uStack_23d0;
  iVar2 = (int)&lStack_2ec0;
  FUN_10178e278();
  if (iVar2 == 1) {
    FUN_10178e278();
    if (iVar1 == 1) {
      func_0x0001018a33cc(&lStack_130,&lStack_2030,0x112dcbc58,&UNK_10d98e2f0);
      func_0x00010179528c(auStack_1a80);
      func_0x0001018a338c(&lStack_2ec0,0x112dcbc58,&UNK_10d98e2f0);
      return;
    }
LAB_1018a2ffc:
    func_0x000107c610b4(&lStack_2030,&lStack_2ec0,0x179);
    func_0x0001018a33cc(&lStack_130,&uStack_2340,0x112dcbc58,&UNK_10d98e2f0);
    func_0x0001018a338c(&lStack_2030,0x112dcbca0,&UNK_10d9902c0);
  }
  else {
    uStack_2f08 = uStack_2e38;
    uStack_2f10 = uStack_2e40;
    uStack_2ef8 = uStack_2e28;
    uStack_2f00 = uStack_2e30;
    uStack_2ef0 = uStack_2e20;
    uStack_2edf = uStack_2e0f;
    uStack_2f48 = uStack_2e78;
    uStack_2f50 = uStack_2e80;
    uStack_2f38 = (undefined1)uStack_2e68;
    uStack_2f37 = (undefined7)((ulong)uStack_2e68 >> 8);
    uStack_2f40 = uStack_2e70;
    uStack_2f28 = (undefined1)uStack_2e58;
    uStack_2f27 = (undefined7)((ulong)uStack_2e58 >> 8);
    uStack_2f30 = (undefined1)uStack_2e60;
    uStack_2f2f = (undefined7)((ulong)uStack_2e60 >> 8);
    uStack_2f18 = uStack_2e48;
    uStack_2f20 = uStack_2e50;
    uStack_2f88 = uStack_2eb8;
    lStack_2f90 = lStack_2ec0;
    uStack_2f78 = uStack_2ea8;
    uStack_2f80 = uStack_2eb0;
    uStack_2f68 = uStack_2e98;
    uStack_2f70 = uStack_2ea0;
    uStack_2f58 = uStack_2e88;
    uStack_2f60 = uStack_2e90;
    FUN_10178e278();
    if (iVar1 == 1) goto LAB_1018a2ffc;
    uStack_2fc8 = uStack_2d78;
    uStack_2fd0 = uStack_2d80;
    uStack_2fb8 = uStack_2d68;
    uStack_2fc0 = uStack_2d70;
    uStack_2fb0 = uStack_2d60;
    uStack_2f9f = uStack_2d4f;
    uStack_3008 = (undefined6)uStack_2db8;
    uStack_3002 = (undefined2)((ulong)uStack_2db8 >> 0x30);
    uStack_3010 = (undefined6)uStack_2dc0;
    uStack_300a = (undefined2)((ulong)uStack_2dc0 >> 0x30);
    uStack_2ff8 = (undefined6)uStack_2da8;
    uStack_2ff2 = (undefined2)((ulong)uStack_2da8 >> 0x30);
    uStack_3000 = (undefined6)uStack_2db0;
    uStack_2ffa = (undefined2)((ulong)uStack_2db0 >> 0x30);
    uStack_2fe8 = uStack_2d98;
    uStack_2ff0 = (undefined6)uStack_2da0;
    uStack_2fea = (undefined2)((ulong)uStack_2da0 >> 0x30);
    uStack_2fd8 = uStack_2d88;
    uStack_2fe0 = uStack_2d90;
    uStack_3048 = (undefined6)uStack_2df8;
    uStack_3042 = (undefined2)((ulong)uStack_2df8 >> 0x30);
    uStack_3050 = (undefined6)lStack_2e00;
    uStack_304a = (undefined2)((ulong)lStack_2e00 >> 0x30);
    uStack_3038 = (undefined6)uStack_2de8;
    uStack_3032 = (undefined2)((ulong)uStack_2de8 >> 0x30);
    uStack_3040 = (undefined6)uStack_2df0;
    uStack_303a = (undefined2)((ulong)uStack_2df0 >> 0x30);
    uStack_3028 = (undefined6)uStack_2dd8;
    uStack_3022 = (undefined2)((ulong)uStack_2dd8 >> 0x30);
    uStack_3030 = (undefined6)uStack_2de0;
    uStack_302a = (undefined2)((ulong)uStack_2de0 >> 0x30);
    uStack_3018 = (undefined6)uStack_2dc8;
    uStack_3012 = (undefined2)((ulong)uStack_2dc8 >> 0x30);
    uStack_3020 = (undefined6)uStack_2dd0;
    uStack_301a = (undefined2)((ulong)uStack_2dd0 >> 0x30);
    uStack_1fa8 = uStack_2d78;
    uStack_1fb0 = uStack_2d80;
    uStack_1f98 = uStack_2d68;
    uStack_1fa0 = uStack_2d70;
    uStack_1f90 = uStack_2d60;
    uStack_1f7f = uStack_2d4f;
    uStack_1fe8 = uStack_2db8;
    uStack_1ff0 = uStack_2dc0;
    uStack_1fd8 = uStack_2da8;
    uStack_1fe0 = uStack_2db0;
    uStack_1fc8 = uStack_2d98;
    uStack_1fd0 = uStack_2da0;
    uStack_1fb8 = uStack_2d88;
    uStack_1fc0 = uStack_2d90;
    uStack_2028 = uStack_2df8;
    lStack_2030 = lStack_2e00;
    uStack_2018 = uStack_2de8;
    uStack_2020 = uStack_2df0;
    uStack_2008 = uStack_2dd8;
    uStack_2010 = uStack_2de0;
    uStack_1ff8 = uStack_2dc8;
    uStack_2000 = uStack_2dd0;
    uStack_22b8 = uStack_2f08;
    uStack_22c0 = uStack_2f10;
    uStack_22a8 = uStack_2ef8;
    uStack_22b0 = uStack_2f00;
    uStack_22a0 = uStack_2ef0;
    uStack_228f = uStack_2edf;
    uStack_22e8 = CONCAT71(uStack_2f37,uStack_2f38);
    uStack_22f8 = uStack_2f48;
    uStack_2300 = uStack_2f50;
    uStack_22f0 = uStack_2f40;
    uStack_22d8 = CONCAT71(uStack_2f27,uStack_2f28);
    uStack_22e0 = CONCAT71(uStack_2f2f,uStack_2f30);
    uStack_22c8 = uStack_2f18;
    uStack_22d0 = uStack_2f20;
    uStack_2338 = uStack_2f88;
    uStack_2340 = lStack_2f90;
    uStack_2328 = uStack_2f78;
    uStack_2330 = uStack_2f80;
    uStack_2318 = uStack_2f68;
    uStack_2320 = uStack_2f70;
    uStack_2308 = uStack_2f58;
    uStack_2310 = uStack_2f60;
    func_0x0001018a33cc(&lStack_130,auStack_3110,0x112dcbc58,&UNK_10d98e2f0);
    func_0x0001018a33cc(&lStack_130,auStack_3110,0x112dcbc58,&UNK_10d98e2f0);
    puVar5 = &uStack_2340;
    func_0x00010420e480(puVar5,&lStack_2030);
    func_0x0001018a338c(&lStack_130,0x112dcbc58,&UNK_10d98e2f0);
    func_0x0001018a338c(&uStack_3050,0x112dcbc58,&UNK_10d98e2f0);
    func_0x0001018a338c(&lStack_2ec0,0x112dcbc58,&UNK_10d98e2f0);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010179528c(auStack_1a80);
      return;
    }
  }
  iVar1 = (int)auStack_3bc8;
  func_0x000100cbd8d4();
  uVar6 = 0;
  if (iVar1 != 1) {
    uVar6 = uStack_3bb8;
  }
  lVar4 = param_2;
  FUN_1018a224c(param_2,param_3,param_4,uVar6,param_5);
  func_0x0001018a2544(param_2,param_3,param_4,uVar6,param_5);
  lStack_2ec0 = lVar4;
  func_0x0001018a6be4();
  lVar4 = lStack_2ec0;
  func_0x000107c61434(lStack_2ec0);
  FUN_10167dc30(&lStack_2ec0);
  func_0x000107c6142c(lVar4);
  lVar4 = lStack_2ec0;
  lVar7 = *(long *)(lStack_2ec0 + 0x10);
  func_0x00010179528c(auStack_1a80);
  if (lVar7 != 0) {
    iVar1 = iVar3 + 0xaf0;
    func_0x000100cbd8d4();
    if (iVar1 != 1) {
      iVar1 = iVar3 + 0xb60;
      FUN_10178e3ec();
      if (iVar1 != 1) {
        iVar1 = iVar3 + 0xaf0;
        func_0x000100cbd8d4();
        if (iVar1 != 1) {
          iVar1 = iVar3 + 0xb60;
          FUN_10178e3ec();
          if (iVar1 != 1) {
            iVar1 = iVar3 + 0xb60;
            FUN_10178e478();
            if (iVar1 != 1) {
              iVar3 = iVar3 + 0x1510;
              FUN_10178e278();
              if (iVar3 != 1) {
                uVar6 = *(undefined8 *)(param_1 + 0x1530);
                *(long *)(param_1 + 0x1530) = lVar4;
                func_0x000107c6142c(uVar6);
                return;
              }
            }
          }
        }
        goto LAB_1018a32d4;
      }
    }
    iVar1 = iVar3 + 0x38;
    FUN_10178e478();
    if (iVar1 != 1) {
      iVar3 = iVar3 + 0x9e8;
      FUN_10178e278();
      if (iVar3 != 1) {
        func_0x000107c6142c(*(undefined8 *)(param_1 + 0xa08));
        *(long *)(param_1 + 0xa08) = lVar4;
        return;
      }
    }
  }
LAB_1018a32d4:
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 1018a331c; end: 1018a3413;  */

undefined8 FUN_1018a331c(undefined8 param_1)

{
  (*(code *)&DAT_104262bb0)();
  return param_1;
}



/* Entry: 1018a3414; end: 1018a3453; -[_TtC25AdTrackParserServicesImpl28AdTrackSkanViewThroughParser adEventSymbols] */

void FUN_1018a3414(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a3454; end: 1018a348b; -[_TtC25AdTrackParserServicesImpl28AdTrackSkanViewThroughParser setAdEventSymbols:] */

void FUN_1018a3454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1018a348c; end: 1018a34a7;  */

void FUN_1018a348c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018a34a8,0,0);
  return;
}



/* Entry: 1018a34a8; end: 1018a35bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a34a8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x100);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0xe0,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x108);
    func_0x000100400294(lVar4 + 0x10,unaff_x22 + 0x10);
    func_0x000107c61574(lVar4);
    func_0x0001003ffe10(unaff_x22 + 0x38,unaff_x22 + 0x90);
    func_0x000100400450(unaff_x22 + 0x10);
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(long *)(unaff_x22 + 0x120) = lVar4;
    puVar2 = (undefined8 *)(unaff_x22 + 0x90);
    func_0x0001000a8868();
    *(undefined8 **)(unaff_x22 + 0x128) = puVar2;
    puVar1 = (undefined8 *)(lVar3 + _DAT_11306b4e8);
    *(undefined8 *)(unaff_x22 + 0x130) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x138) = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar4 + 0x38);
    func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1018a35c0,*puVar2,0);
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,1,0);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined1 *)(lVar4 + 0x30) = 1;
  func_0x000107c60060();
                    /* WARNING: Could not recover jumptable at 0x0001018a35bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018a35c0; end: 1018a361f;  */

void FUN_1018a35c0(void)

{
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x140))
            (unaff_x22 + 0xb8,*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x120));
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined1 *)(unaff_x22 + 0xd9) = *(undefined1 *)(unaff_x22 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018a3620,0,0);
  return;
}



/* Entry: 1018a3620; end: 1018a3693;  */

void FUN_1018a3620(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xd9);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,1,0);
  *(undefined8 *)(lVar2 + 0x18) = uVar6;
  *(undefined8 *)(lVar2 + 0x10) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 *)(lVar2 + 0x30) = uVar1;
  func_0x000107c60060();
                    /* WARNING: Could not recover jumptable at 0x0001018a3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018a3694; end: 1018a36eb; -[_TtC25AdTrackParserServicesImpl28AdTrackSkanViewThroughParser parseWithTrackRequest:viewSeqNum:] */

void FUN_1018a3694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1018a4084(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a36ec; end: 1018a3737;  */

void FUN_1018a36ec(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018a3738; end: 1018a4083;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1018a3738(double param_1,undefined8 param_2,long param_3,double param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined7 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined1 auStack_2f70 [2744];
  undefined1 auStack_24b8 [2480];
  undefined8 uStack_1b08;
  undefined8 uStack_1b00;
  undefined8 uStack_1af8;
  undefined8 uStack_1af0;
  undefined8 uStack_1ae8;
  undefined8 uStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  undefined8 uStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  double dStack_1a78;
  undefined8 uStack_1a70;
  double dStack_1a68;
  undefined1 uStack_1a60;
  undefined7 uStack_1a5f;
  undefined1 uStack_1a58;
  undefined8 uStack_1a57;
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
  double dStack_1970;
  int iStack_1968;
  undefined4 uStack_1964;
  double dStack_1960;
  undefined4 uStack_1958;
  undefined4 uStack_1954;
  undefined1 uStack_1950;
  undefined7 uStack_194f;
  undefined1 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined1 uStack_1898;
  undefined7 uStack_1897;
  undefined1 uStack_1890;
  undefined8 uStack_188f;
  undefined1 auStack_1880 [2744];
  undefined1 auStack_dc8 [2744];
  undefined3 uStack_310;
  undefined1 uStack_30d;
  undefined3 uStack_30c;
  uint3 uStack_308;
  undefined1 uStack_305;
  undefined3 uStack_304;
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
  undefined8 auStack_270 [19];
  undefined4 auStack_1d7 [3];
  undefined1 auStack_1c8 [24];
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
  undefined1 uStack_150;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_b8 = *(undefined8 *)(param_3 + 0xa38);
  uStack_c0 = *(undefined8 *)(param_3 + 0xa30);
  uStack_a8 = *(undefined8 *)(param_3 + 0xa48);
  uStack_b0 = *(undefined8 *)(param_3 + 0xa40);
  uStack_a0 = *(undefined8 *)(param_3 + 0xa50);
  uStack_98 = (undefined1)*(undefined8 *)(param_3 + 0xa58);
  uStack_8f = *(undefined8 *)(param_3 + 0xa61);
  uStack_97 = (undefined7)*(undefined8 *)(param_3 + 0xa59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xa59) >> 0x38);
  uStack_f8 = *(undefined8 *)(param_3 + 0x9f8);
  uStack_100 = *(undefined8 *)(param_3 + 0x9f0);
  uStack_e8 = *(undefined8 *)(param_3 + 0xa08);
  uStack_f0 = *(undefined8 *)(param_3 + 0xa00);
  uStack_d8 = *(undefined8 *)(param_3 + 0xa18);
  uStack_e0 = *(undefined8 *)(param_3 + 0xa10);
  uStack_c8 = *(undefined8 *)(param_3 + 0xa28);
  uStack_d0 = *(undefined8 *)(param_3 + 0xa20);
  uStack_138 = *(undefined8 *)(param_3 + 0x9b8);
  uStack_140 = *(undefined8 *)(param_3 + 0x9b0);
  uStack_128 = *(undefined8 *)(param_3 + 0x9c8);
  uStack_130 = *(undefined8 *)(param_3 + 0x9c0);
  uStack_118 = *(undefined8 *)(param_3 + 0x9d8);
  uStack_120 = *(undefined8 *)(param_3 + 0x9d0);
  uStack_108 = *(undefined8 *)(param_3 + 0x9e8);
  uStack_110 = *(undefined8 *)(param_3 + 0x9e0);
  puVar3 = &uStack_140;
  iVar2 = (int)&uStack_140;
  FUN_10178e278();
  if (iVar2 == 1) {
    puVar3 = auStack_270;
    puVar4 = (undefined7 *)((long)auStack_1c8 + 1);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    puVar6 = auStack_1d7;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_170 = 1;
    uStack_168 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_150 = 0;
    func_0x00010420e300(auStack_270,0,0,0,0,0,0,&uStack_1b0,0,1,0,1);
  }
  else {
    puVar4 = &uStack_97;
    puVar6 = (undefined4 *)((long)&uStack_a8 + 1);
  }
  uStack_298 = puVar3[0xd];
  uStack_2a0 = puVar3[0xc];
  uStack_288 = puVar3[0xf];
  uStack_290 = puVar3[0xe];
  uStack_278 = puVar3[0x11];
  uStack_280 = puVar3[0x10];
  uStack_2d8 = puVar3[5];
  uStack_2e0 = puVar3[4];
  uStack_2c8 = puVar3[7];
  uStack_2d0 = puVar3[6];
  uStack_2b8 = puVar3[9];
  uStack_2c0 = puVar3[8];
  uStack_2a8 = puVar3[0xb];
  uStack_2b0 = puVar3[10];
  uStack_2f8 = puVar3[1];
  uStack_300 = *puVar3;
  uStack_2e8 = puVar3[3];
  uStack_2f0 = puVar3[2];
  uStack_308 = (uint3)*puVar6;
  uStack_305 = (undefined1)*(undefined4 *)((long)puVar6 + 3);
  uStack_304 = (undefined3)((uint)*(undefined4 *)((long)puVar6 + 3) >> 8);
  dVar7 = (double)puVar3[0x14];
  uVar5 = *(undefined1 *)(puVar3 + 0x15);
  uStack_310 = (undefined3)*(undefined4 *)puVar4;
  uStack_30d = (undefined1)*(undefined4 *)((long)puVar4 + 3);
  uStack_30c = (undefined3)((uint)*(undefined4 *)((long)puVar4 + 3) >> 8);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3bec);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3bf0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3bf4);
    (*pcVar1)();
  }
  if ((param_5 & 0xff) != 1) {
    param_4 = param_4 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3bf8);
      (*pcVar1)();
    }
    if (param_4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3bfc);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a3c00);
      (*pcVar1)();
    }
    uVar5 = 0;
    dVar7 = (double)(long)param_4;
  }
  func_0x000107c610b4(auStack_24b8,param_3,0xab2);
  uStack_1998 = uStack_298;
  uStack_19a0 = uStack_2a0;
  uStack_1988 = uStack_288;
  uStack_1990 = uStack_290;
  uStack_1978 = uStack_278;
  uStack_1980 = uStack_280;
  uStack_19d8 = uStack_2d8;
  uStack_19e0 = uStack_2e0;
  uStack_19c8 = uStack_2c8;
  uStack_19d0 = uStack_2d0;
  uStack_19a8 = uStack_2a8;
  uStack_19b0 = uStack_2b0;
  uStack_19b8 = uStack_2b8;
  uStack_19c0 = uStack_2c0;
  uStack_19e8 = uStack_2e8;
  uStack_19f0 = uStack_2f0;
  uStack_19f8 = uStack_2f8;
  uStack_1a00 = uStack_300;
  iStack_1968 = (uint)uStack_308 << 8;
  uStack_1964 = CONCAT31(uStack_304,uStack_305);
  uStack_1958 = CONCAT31(uStack_310,uVar5);
  uStack_1954 = CONCAT31(uStack_30c,uStack_30d);
  uStack_1950 = (undefined1)param_2;
  uStack_194f = (undefined7)((ulong)param_2 >> 8);
  uStack_1948 = 0;
  dStack_1970 = (double)(long)param_1;
  dStack_1960 = dVar7;
  func_0x00010178e4ac(&uStack_1a00);
  uStack_18b8 = *(undefined8 *)(param_3 + 0xa38);
  uStack_18c0 = *(undefined8 *)(param_3 + 0xa30);
  uStack_18a8 = *(undefined8 *)(param_3 + 0xa48);
  uStack_18b0 = *(undefined8 *)(param_3 + 0xa40);
  uStack_18a0 = *(undefined8 *)(param_3 + 0xa50);
  uStack_1898 = (undefined1)*(undefined8 *)(param_3 + 0xa58);
  uStack_188f = *(undefined8 *)(param_3 + 0xa61);
  uStack_1897 = (undefined7)*(undefined8 *)(param_3 + 0xa59);
  uStack_1890 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xa59) >> 0x38);
  uStack_18f8 = *(undefined8 *)(param_3 + 0x9f8);
  uStack_1900 = *(undefined8 *)(param_3 + 0x9f0);
  uStack_18e8 = *(undefined8 *)(param_3 + 0xa08);
  uStack_18f0 = *(undefined8 *)(param_3 + 0xa00);
  uStack_18d8 = *(undefined8 *)(param_3 + 0xa18);
  uStack_18e0 = *(undefined8 *)(param_3 + 0xa10);
  uStack_18c8 = *(undefined8 *)(param_3 + 0xa28);
  uStack_18d0 = *(undefined8 *)(param_3 + 0xa20);
  uStack_1938 = *(undefined8 *)(param_3 + 0x9b8);
  uStack_1940 = *(undefined8 *)(param_3 + 0x9b0);
  uStack_1928 = *(undefined8 *)(param_3 + 0x9c8);
  uStack_1930 = *(undefined8 *)(param_3 + 0x9c0);
  uStack_1918 = *(undefined8 *)(param_3 + 0x9d8);
  uStack_1920 = *(undefined8 *)(param_3 + 0x9d0);
  uStack_1908 = *(undefined8 *)(param_3 + 0x9e8);
  uStack_1910 = *(undefined8 *)(param_3 + 0x9e0);
  FUN_1018a5638(&uStack_140,auStack_dc8,0x112dcbc58,&UNK_10d98e2f0);
  FUN_101795250(param_3,auStack_dc8);
  func_0x0001018a5680(&uStack_1940,0x112dcbc58,&UNK_10d98e2f0);
  uStack_1a57 = CONCAT17(uStack_1948,uStack_194f);
  uStack_1a58 = uStack_1950;
  uStack_1a70 = CONCAT44(uStack_1964,iStack_1968);
  uStack_1a80 = uStack_1978;
  uStack_1a88 = uStack_1980;
  dStack_1a78 = dStack_1970;
  uStack_1a60 = (undefined1)uStack_1958;
  uStack_1a5f = (undefined7)(CONCAT44(uStack_1954,uStack_1958) >> 8);
  dStack_1a68 = dStack_1960;
  uStack_1ac0 = uStack_19b8;
  uStack_1ac8 = uStack_19c0;
  uStack_1ab0 = uStack_19a8;
  uStack_1ab8 = uStack_19b0;
  uStack_1aa0 = uStack_1998;
  uStack_1aa8 = uStack_19a0;
  uStack_1a90 = uStack_1988;
  uStack_1a98 = uStack_1990;
  uStack_1b00 = uStack_19f8;
  uStack_1b08 = uStack_1a00;
  uStack_1af0 = uStack_19e8;
  uStack_1af8 = uStack_19f0;
  uStack_1ae0 = uStack_19d8;
  uStack_1ae8 = uStack_19e0;
  uStack_1ad0 = uStack_19c8;
  uStack_1ad8 = uStack_19d0;
  func_0x000107c610b4(auStack_1880,auStack_24b8,0xab2);
  func_0x000107c610b4(auStack_dc8,auStack_24b8,0xab2);
  FUN_101795250(auStack_1880,auStack_2f70);
  func_0x00010179528c(auStack_dc8);
  func_0x000107c610b4(extraout_x8,auStack_1880,0xab2);
  return;
}



/* Entry: 1018a4084; end: 1018a555f;  */

/* WARNING: Possible PIC construction at 0x0001018a42c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a43dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a443c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018a43e0) */
/* WARNING: Removing unreachable block (ram,0x0001018a42cc) */
/* WARNING: Removing unreachable block (ram,0x0001018a4420) */
/* WARNING: Removing unreachable block (ram,0x0001018a43d8) */
/* WARNING: Removing unreachable block (ram,0x0001018a4440) */
/* WARNING: Removing unreachable block (ram,0x0001018a5398) */
/* WARNING: Removing unreachable block (ram,0x0001018a53d4) */
/* WARNING: Removing unreachable block (ram,0x0001018a4468) */
/* WARNING: Removing unreachable block (ram,0x0001018a4510) */
/* WARNING: Removing unreachable block (ram,0x0001018a4520) */
/* WARNING: Removing unreachable block (ram,0x0001018a547c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4528) */
/* WARNING: Removing unreachable block (ram,0x0001018a5490) */
/* WARNING: Removing unreachable block (ram,0x0001018a4538) */
/* WARNING: Removing unreachable block (ram,0x0001018a4650) */
/* WARNING: Removing unreachable block (ram,0x0001018a47cc) */
/* WARNING: Removing unreachable block (ram,0x0001018a4d50) */
/* WARNING: Removing unreachable block (ram,0x0001018a47d8) */
/* WARNING: Removing unreachable block (ram,0x0001018a4dac) */
/* WARNING: Removing unreachable block (ram,0x0001018a5534) */
/* WARNING: Removing unreachable block (ram,0x0001018a4dc0) */
/* WARNING: Removing unreachable block (ram,0x0001018a4dcc) */
/* WARNING: Removing unreachable block (ram,0x0001018a4dd0) */
/* WARNING: Removing unreachable block (ram,0x0001018a5538) */
/* WARNING: Removing unreachable block (ram,0x0001018a4dd4) */
/* WARNING: Removing unreachable block (ram,0x0001018a4ddc) */
/* WARNING: Removing unreachable block (ram,0x0001018a4de0) */
/* WARNING: Removing unreachable block (ram,0x0001018a5544) */
/* WARNING: Removing unreachable block (ram,0x0001018a4de4) */
/* WARNING: Removing unreachable block (ram,0x0001018a4df8) */
/* WARNING: Removing unreachable block (ram,0x0001018a5548) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e08) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e14) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e18) */
/* WARNING: Removing unreachable block (ram,0x0001018a5554) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e1c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e24) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e28) */
/* WARNING: Removing unreachable block (ram,0x0001018a555c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e2c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4e34) */
/* WARNING: Removing unreachable block (ram,0x0001018a4674) */
/* WARNING: Removing unreachable block (ram,0x0001018a48ac) */
/* WARNING: Removing unreachable block (ram,0x0001018a467c) */
/* WARNING: Removing unreachable block (ram,0x0001018a49b8) */
/* WARNING: Removing unreachable block (ram,0x0001018a4690) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a20) */
/* WARNING: Removing unreachable block (ram,0x0001018a5530) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a34) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a40) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a44) */
/* WARNING: Removing unreachable block (ram,0x0001018a553c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a48) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a50) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a54) */
/* WARNING: Removing unreachable block (ram,0x0001018a5540) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a58) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a68) */
/* WARNING: Removing unreachable block (ram,0x0001018a554c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a78) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a84) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a88) */
/* WARNING: Removing unreachable block (ram,0x0001018a5550) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a94) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a98) */
/* WARNING: Removing unreachable block (ram,0x0001018a5558) */
/* WARNING: Removing unreachable block (ram,0x0001018a4a9c) */
/* WARNING: Removing unreachable block (ram,0x0001018a4aa4) */
/* WARNING: Removing unreachable block (ram,0x0001018a513c) */
/* WARNING: Removing unreachable block (ram,0x0001018a5370) */
/* WARNING: Removing unreachable block (ram,0x0001018a5150) */
/* WARNING: Removing unreachable block (ram,0x0001018a536c) */
/* WARNING: Removing unreachable block (ram,0x0001018a5484) */
/* WARNING: Removing unreachable block (ram,0x0001018a5494) */
/* WARNING: Removing unreachable block (ram,0x0001018a54b0) */
/* WARNING: Removing unreachable block (ram,0x0001018a54a4) */
/* WARNING: Removing unreachable block (ram,0x0001018a4470) */
/* WARNING: Removing unreachable block (ram,0x0001018a4478) */
/* WARNING: Removing unreachable block (ram,0x0001018a44b4) */
/* WARNING: Removing unreachable block (ram,0x0001018a542c) */
/* WARNING: Removing unreachable block (ram,0x0001018a54bc) */
/* WARNING: Removing unreachable block (ram,0x0001018a54f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a4084(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_4100 [256];
  long lStack_4000;
  long lStack_3ff0;
  undefined8 *puStack_3fd0;
  undefined1 *puStack_3fc8;
  long lStack_3fc0;
  long lStack_3fb8;
  long lStack_3fb0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puStack_3fc8 = auStack_4100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_3fc0 = (long)(auStack_4100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  func_0x000107c5f7f0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = 0;
  func_0x000107c5f83c();
  lStack_3fb8 = *(long *)(lVar3 + -8);
  lStack_3fb0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_3fb8 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&uStack_bc8);
  uVar5 = uStack_bc8;
  func_0x000107c614f0(uStack_bc8);
  uVar4 = 0;
  func_0x00010403c628(0xd00000000000001c,0x800000010efbca40,uVar5,uStack_bc0);
  func_0x000107c615e8(uStack_bc8);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11306b528);
    iVar1 = (int)*(undefined8 *)(lVar3 + _DAT_113815278);
    func_0x0001084c1950();
    if (iVar1 != 0) {
      uVar5 = 0;
      lStack_4000 = lVar3;
      func_0x000107c60f6c();
      puVar6 = &UNK_11040b518;
      func_0x000107c613fc(&UNK_11040b518,0x38,7);
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      puStack_3fd0 = (undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *puStack_3fd0 = 0;
      puVar6[0x30] = 1;
      puVar7 = &UNK_11040b540;
      lStack_3ff0 = lVar2;
      func_0x000107c613fc(&UNK_11040b540,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      puVar8 = &UNK_11040b568;
      func_0x000107c613fc(&UNK_11040b568,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      *(long *)(puVar8 + 0x20) = param_1;
      *(undefined8 *)(puVar8 + 0x28) = uVar5;
      func_0x000107c6157c(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1018a5560; end: 1018a55d7;  */

void FUN_1018a5560(void)

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
  plVar5 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018a55d8;
  plVar5[0x21] = lVar2;
  plVar5[0x22] = lVar4;
  plVar5[0x1f] = lVar1;
  plVar5[0x20] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018a34a8,0,0);
  return;
}



/* Entry: 1018a55d8; end: 1018a5613;  */

void FUN_1018a55d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018a5610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018a5614; end: 1018a5637;  */

int FUN_1018a5614(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
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



/* Entry: 1018a5638; end: 1018a56bf;  */

undefined8 FUN_1018a5638(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018a56c0; end: 1018a5b63;  */

void FUN_1018a56c0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_4690 [24];
  undefined1 auStack_4678 [24];
  undefined1 auStack_4660 [2744];
  undefined1 auStack_3ba8 [2744];
  undefined1 auStack_30f0 [8];
  undefined1 auStack_30e8 [312];
  undefined1 auStack_2fb0 [32];
  undefined8 uStack_2f90;
  undefined1 auStack_2638 [8];
  undefined1 auStack_2630 [2736];
  undefined1 auStack_1b80 [88];
  long lStack_1b28;
  undefined1 auStack_15d8 [24];
  long lStack_15c0;
  long lStack_15b8;
  undefined1 auStack_b20 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_b20,param_1,0xab2);
  lVar3 = *param_2;
  FUN_1018a603c();
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar3 + 0x10);
    if (lVar9 != 0) {
      func_0x000107c61428(unaff_x20 + 0x98,auStack_4678,1,0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined **)(unaff_x20 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6142c(uVar4);
      lVar12 = lVar3 + 0x20;
      FUN_1018a6ea8(param_1,auStack_15d8);
      func_0x000107c610b4(auStack_3ba8,auStack_b20,0xab2);
      do {
        lVar9 = lVar9 + -1;
        func_0x000107c610b4(auStack_2638,auStack_3ba8,0xab2);
        func_0x0001018a6ef8(lVar12,auStack_1b80);
        FUN_1018a6f3c(auStack_1b80,auStack_15d8);
        lVar11 = lStack_15b8;
        lVar5 = lStack_15c0;
        func_0x0001000a8868(auStack_15d8,lStack_15c0);
        (**(code **)(lVar11 + 0x10))(auStack_30f0,auStack_2638,param_2,param_3,lVar5,lVar11);
        func_0x000107c610b4(auStack_4660,auStack_30f0,0xab2);
        FUN_1018a6f54(auStack_3ba8,0x112dcbc88,&UNK_10d98e360);
        lVar11 = lStack_15b8;
        lVar5 = lStack_15c0;
        func_0x0001000a8868(auStack_15d8,lStack_15c0);
        (**(code **)(lVar11 + 8))(lVar5,lVar11);
        func_0x000107c61428(unaff_x20 + 0x98,auStack_4690,0x21,0);
        uVar10 = *(ulong *)(lVar5 + 0x10);
        lVar11 = *(long *)(unaff_x20 + 0x98);
        lVar13 = *(long *)(lVar11 + 0x10);
        if (SCARRY8(lVar13,uVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a5b58);
          (*pcVar1)();
        }
        lVar6 = lVar11;
        func_0x000107c61558();
        *(long *)(unaff_x20 + 0x98) = lVar11;
        if (((int)lVar6 == 0) ||
           (uVar8 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar8 < (long)(lVar13 + uVar10))) {
          func_0x0001000d182c();
          *(long *)(unaff_x20 + 0x98) = lVar6;
          uVar8 = *(ulong *)(lVar6 + 0x18) >> 1;
          if (*(long *)(lVar5 + 0x10) == 0) goto LAB_1018a5930;
LAB_1018a58b8:
          if (uVar8 - *(long *)(lVar6 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a5b60);
            (*pcVar1)();
          }
          func_0x000107c6140c(lVar6 + *(long *)(lVar6 + 0x10) * 0x10 + 0x20,lVar5 + 0x20,uVar10,
                              PTR___sSSN_11034da80);
          func_0x000107c6142c(lVar5);
          if (uVar10 != 0) {
            if (SCARRY8(*(long *)(lVar6 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a5b64);
              (*pcVar1)();
            }
            *(ulong *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + uVar10;
          }
        }
        else {
          lVar6 = lVar11;
          if (*(long *)(lVar5 + 0x10) != 0) goto LAB_1018a58b8;
LAB_1018a5930:
          func_0x000107c6142c(lVar5);
          if (uVar10 != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a5b5c);
            (*pcVar1)();
          }
        }
        *(long *)(unaff_x20 + 0x98) = lVar6;
        func_0x000107c614a8(auStack_4690);
        func_0x0001000834e4(auStack_15d8);
        if (lVar9 == 0) {
          func_0x000107c6142c(lVar3);
          FUN_1018a6cd4(auStack_15d8,auStack_30f0,param_2);
          FUN_1018a6f54(auStack_30f0,0x112dcbc88,&UNK_10d98e360);
          goto LAB_1018a5b1c;
        }
        func_0x000107c610b4(auStack_3ba8,auStack_4660,0xab2);
        lVar12 = lVar12 + 0x28;
      } while( true );
    }
    func_0x000107c6142c();
  }
  if ((int)param_2[6] == 0x16) {
    func_0x000107c610b4(auStack_2638,param_1,0xab2);
    iVar2 = (int)auStack_2638;
    FUN_10178e478();
    if (iVar2 != 1) {
      func_0x000107c610b4(auStack_1b80,auStack_2630,0x5a8);
      iVar2 = (int)auStack_1b80;
      FUN_10189c838();
      if ((iVar2 != 1) && (lStack_1b28 != 0)) goto LAB_1018a5af4;
    }
    func_0x000107c610b4(auStack_30f0,param_1,0xab2);
    iVar2 = (int)auStack_30f0;
    FUN_10178e478();
    if (iVar2 != 1) {
      iVar2 = (int)auStack_30e8;
      FUN_10189c838();
      if (iVar2 != 1) {
        iVar2 = (int)auStack_2fb0;
        FUN_10187bbec();
        if (iVar2 != 1) {
          uStack_2f90 = 0;
        }
      }
    }
    func_0x000107c610b4(auStack_4660,auStack_30f0,0xab2);
    func_0x000107c610b4(auStack_3ba8,auStack_30f0,0xab2);
    FUN_1018a6ea8(param_1,auStack_15d8);
    FUN_1018a6ea8(auStack_4660,auStack_15d8);
    FUN_1018a6f54(auStack_3ba8,0x112dcbc88,&UNK_10d98e360);
    puVar7 = auStack_4660;
  }
  else {
LAB_1018a5af4:
    FUN_1018a6ea8(param_1,auStack_15d8);
    puVar7 = auStack_b20;
  }
  func_0x000107c610b4(auStack_15d8,puVar7,0xab2);
LAB_1018a5b1c:
  func_0x000107c610b4(extraout_x8,auStack_15d8,0xab2);
  return;
}



/* Entry: 1018a5b64; end: 1018a5bc3; -[_TtC25AdTrackParserServicesImpl17AdTrackSnapParser adEventSymbols] */

void FUN_1018a5b64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x98,auStack_38,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a5bc4; end: 1018a5c1b; -[_TtC25AdTrackParserServicesImpl17AdTrackSnapParser setAdEventSymbols:] */

void FUN_1018a5bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61428(param_1 + 0x98,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1018a5c1c; end: 1018a5fdb;  */

/* WARNING: Possible PIC construction at 0x0001018a5d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a5e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018a5d40) */
/* WARNING: Removing unreachable block (ram,0x0001018a5e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a5c1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_8d40;
  undefined1 auStack_7558 [32];
  undefined1 auStack_7538 [6064];
  undefined1 auStack_5d88 [12192];
  undefined1 auStack_2de8 [8840];
  undefined1 auStack_b60 [2744];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)
           ((long)&uStack_8d40 +
           ((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - extraout_x8) - extraout_x12));
  lVar10 = *(long *)(param_1 + _DAT_11306b528);
  uVar9 = *(ulong *)(lVar10 + _DAT_113815208);
  if (uVar9 != 0) {
    uVar11 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar5 = uVar9;
      if (-1 < (long)uVar9) {
        uVar5 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a5fdc);
          (*pcVar3)();
        }
        param_1 = *(long *)(uVar9 + 0x20);
      }
      else {
        func_0x000107c61434(uVar9);
        lVar7 = 0;
        func_0x000100e471e4(0,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000107c61174(param_1);
        func_0x0001042b0824(puVar8);
        func_0x000107c610b4(auStack_5d88,puVar8 + 3,0x17d0);
        func_0x000107c610b4(auStack_7558,puVar8 + 3,0x17d0);
        FUN_101897da8(auStack_5d88,auStack_2de8);
        func_0x0001084c6f7c(lVar10,lVar7);
        iVar2 = *(int *)(lVar4 + 0x30);
        lVar6 = 0;
        func_0x000100b91d00();
        uStack_a8 = *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar6 + 0x48) + (long)iVar2);
        uStack_a0 = *puVar8;
        uVar1 = puVar8[1];
        uStack_78 = *(undefined8 *)((long)puVar8 + (long)iVar2 + 0x20);
        uStack_70 = *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x34));
        uStack_88 = 0;
        uStack_98 = uVar1;
        uStack_90 = param_2;
        lStack_80 = lVar10;
        func_0x000107c610b4(auStack_b60,auStack_7538,0xab2);
        func_0x000107c61434(uVar1);
        FUN_1018a6ea8(auStack_b60,auStack_2de8);
        param_1 = lVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1018a5fdc; end: 1018a603b; -[_TtC25AdTrackParserServicesImpl17AdTrackSnapParser parseWithTrackRequest:viewSeqNum:] */

void FUN_1018a5fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1018a5c1c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a603c; end: 1018a61c7;  */

undefined * FUN_1018a603c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [40];
  
  if (param_1 < 6) {
    if ((param_1 != 1) && (param_1 != 3)) {
      return (undefined *)0x0;
    }
  }
  else if (((param_1 != 0x10) && (param_1 != 10)) && (param_1 != 6)) {
    return (undefined *)0x0;
  }
  lVar2 = 0x112dcdfd0;
  func_0x0001000285a8(0x112dcdfd0,&UNK_10d990368);
  func_0x000107c61538();
  lVar6 = *(long *)(lVar2 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar2);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar7 = 0x20;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      FUN_10189d0a4(auStack_78,*(undefined1 *)(lVar2 + lVar7));
      puVar3 = puVar5;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_1018a6324(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_1018a6324(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      FUN_1018a6f3c(auStack_78,puVar5 + uVar1 * 0x28 + 0x20);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar2);
  }
  return puVar5;
}



/* Entry: 1018a61c8; end: 1018a621b;  */

void FUN_1018a61c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100400450(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018a621c; end: 1018a625b;  */

void FUN_1018a621c(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x98,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 1018a625c; end: 1018a62a3;  */

void FUN_1018a625c(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  FUN_1018a56c0(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018a62a4; end: 1018a6323;  */

undefined * FUN_1018a62a4(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1018a6324; end: 1018a6467;  */

undefined * FUN_1018a6324(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a6468);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112dce098;
    func_0x0001000285a8(0x112dce098,&UNK_10d990370);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dce0a0;
    func_0x0001000285a8(0x112dce0a0,&UNK_10d990378);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018a6468; end: 1018a64e7;  */

ulong FUN_1018a6468(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1018a62a4(uVar2,uVar4,FUN_1018acc68);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f0);
      (*pcVar1)();
    }
    FUN_1018a69f4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1018a64e8; end: 1018a662b;  */

undefined * FUN_1018a64e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a662c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112dce0c0;
    func_0x0001000285a8(0x112dce0c0,&UNK_10d9903a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dce0c8;
    func_0x0001000285a8(0x112dce0c8,&UNK_10d990600);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018a662c; end: 1018a664f;  */

undefined * FUN_1018a662c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar2 = (undefined *)0x112dce0b0;
  uVar4 = 0x112dce0b8;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a6780);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(0x112dce0b0,&UNK_10d990390);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar7 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar7 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar7 >> 3) << 1;
    puVar7 = puVar2;
  }
  puVar2 = puVar7 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(0x112dce0b8,&UNK_10d990398);
    func_0x000107c6140c(puVar2,puVar3,uVar6,uVar4);
  }
  else {
    if (puVar7 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar7;
}



/* Entry: 1018a6650; end: 1018a677f;  */

undefined *
FUN_1018a6650(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a6780);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 3) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 8 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 1018a6780; end: 1018a68a3;  */

undefined * FUN_1018a6780(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a68a4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dce0a8;
    func_0x0001000285a8(0x112dce0a8,&UNK_10d990388);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11040b640);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018a68a4; end: 1018a68b7;  */

ulong FUN_1018a68a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1018a62a4(uVar2,uVar4,0x1018acc84);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f0);
      (*pcVar1)();
    }
    (*(code *)0x1018a6aec)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1018a68b8; end: 1018a69f3;  */

ulong FUN_1018a68b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1018a62a4(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a69f0);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1018a69f4; end: 1018a6cd3;  */

long FUN_1018a69f4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a6ae8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a6aec);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010468506c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010468506c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a6ae4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1018a6cd4; end: 1018a6ea7;  */

void FUN_1018a6cd4(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_4628 [2744];
  undefined1 auStack_3b70 [2744];
  undefined1 auStack_30b8 [8];
  undefined1 auStack_30b0 [312];
  undefined1 auStack_2f78 [32];
  undefined8 uStack_2f58;
  undefined1 auStack_2600 [8];
  undefined1 auStack_25f8 [2736];
  undefined1 auStack_1b48 [88];
  long lStack_1af0;
  undefined1 auStack_15a0 [2744];
  undefined1 auStack_ae8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_ae8,param_1,0xab2);
  if (*(int *)(param_2 + 0x30) == 0x16) {
    func_0x000107c610b4(auStack_2600,param_1,0xab2);
    iVar1 = (int)auStack_2600;
    FUN_10178e478();
    if (iVar1 != 1) {
      func_0x000107c610b4(auStack_1b48,auStack_25f8,0x5a8);
      iVar1 = (int)auStack_1b48;
      FUN_10189c838();
      if ((iVar1 != 1) && (lStack_1af0 != 0)) goto LAB_1018a6e54;
    }
    func_0x000107c610b4(auStack_30b8,param_1,0xab2);
    iVar1 = (int)auStack_30b8;
    FUN_10178e478();
    if (iVar1 != 1) {
      iVar1 = (int)auStack_30b0;
      FUN_10189c838();
      if (iVar1 != 1) {
        iVar1 = (int)auStack_2f78;
        FUN_10187bbec();
        if (iVar1 != 1) {
          uStack_2f58 = 0;
        }
      }
    }
    func_0x000107c610b4(auStack_4628,auStack_30b8,0xab2);
    func_0x000107c610b4(auStack_3b70,auStack_30b8,0xab2);
    FUN_1018a6ea8(param_1,auStack_15a0);
    FUN_1018a6ea8(auStack_4628,auStack_15a0);
    FUN_1018a6f54(auStack_3b70,0x112dcbc88,&UNK_10d98e360);
    puVar2 = auStack_4628;
  }
  else {
LAB_1018a6e54:
    FUN_1018a6ea8(param_1,auStack_15a0);
    puVar2 = auStack_ae8;
  }
  func_0x000107c610b4(auStack_15a0,puVar2,0xab2);
  func_0x000107c610b4(extraout_x8,auStack_15a0,0xab2);
  return;
}



/* Entry: 1018a6ea8; end: 1018a6f3b;  */

undefined8 FUN_1018a6ea8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbc88;
  func_0x0001000285a8(0x112dcbc88,&UNK_10d98e360);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018a6f3c; end: 1018a6f53;  */

undefined8 * FUN_1018a6f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1018a6f54; end: 1018a6fe3;  */

undefined8 FUN_1018a6f54(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1018a6fe4; end: 1018a7183;  */

ulong FUN_1018a6fe4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_2b30 [2744];
  undefined1 auStack_2078 [2744];
  undefined1 auStack_15c0 [2744];
  undefined1 auStack_b08 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (1 < uVar2) {
    uVar3 = 0;
    uVar4 = uVar2 >> 1;
    lVar5 = uVar2 * 0xab8 + -0xa98;
    lVar6 = 0x20;
    do {
      uVar2 = uVar2 - 1;
      if (uVar3 != uVar2) {
        uVar7 = *(ulong *)(param_1 + 0x10);
        if (uVar7 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a7178);
          (*pcVar1)();
        }
        func_0x000107c610b4(auStack_15c0,param_1 + lVar6,0xab2);
        if (uVar7 <= uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a717c);
          (*pcVar1)();
        }
        func_0x000107c610b4(auStack_b08,param_1 + lVar5,0xab2);
        FUN_101795250(auStack_15c0,auStack_2078);
        FUN_101795250(auStack_b08,auStack_2078);
        uVar7 = param_1;
        func_0x000107c61558();
        if ((uVar7 & 1) == 0) {
          func_0x00010178dd88();
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a7180);
          (*pcVar1)();
        }
        func_0x000107c610b4(auStack_2b30,param_1 + lVar6,0xab2);
        func_0x000107c610b4(param_1 + lVar6,auStack_b08,0xab2);
        func_0x00010179528c(auStack_2b30);
        if (*(ulong *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018a7184);
          (*pcVar1)();
        }
        func_0x000107c610b4(auStack_2078,param_1 + lVar5,0xab2);
        func_0x000107c610b4(param_1 + lVar5,auStack_15c0,0xab2);
        func_0x00010179528c(auStack_2078);
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -0xab8;
      lVar6 = lVar6 + 0xab8;
    } while (uVar4 != uVar3);
  }
  return param_1;
}



/* Entry: 1018a7184; end: 1018a71c3; -[_TtC25AdTrackParserServicesImpl18AdTrackStoryParser adEventSymbols] */

void FUN_1018a7184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a71c4; end: 1018a71fb; -[_TtC25AdTrackParserServicesImpl18AdTrackStoryParser setAdEventSymbols:] */

void FUN_1018a71c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1018a71fc; end: 1018a7c47;  */

/* WARNING: Possible PIC construction at 0x0001018a7394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a73a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a7438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a7540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018a73ac) */
/* WARNING: Removing unreachable block (ram,0x0001018a7468) */
/* WARNING: Removing unreachable block (ram,0x0001018a73f8) */
/* WARNING: Removing unreachable block (ram,0x0001018a7480) */
/* WARNING: Removing unreachable block (ram,0x0001018a7484) */
/* WARNING: Removing unreachable block (ram,0x0001018a7404) */
/* WARNING: Removing unreachable block (ram,0x0001018a7490) */
/* WARNING: Removing unreachable block (ram,0x0001018a740c) */
/* WARNING: Removing unreachable block (ram,0x0001018a76e0) */
/* WARNING: Removing unreachable block (ram,0x0001018a743c) */
/* WARNING: Removing unreachable block (ram,0x0001018a74a8) */
/* WARNING: Removing unreachable block (ram,0x0001018a7578) */
/* WARNING: Removing unreachable block (ram,0x0001018a7534) */
/* WARNING: Removing unreachable block (ram,0x0001018a7414) */
/* WARNING: Removing unreachable block (ram,0x0001018a7704) */
/* WARNING: Removing unreachable block (ram,0x0001018a741c) */
/* WARNING: Removing unreachable block (ram,0x0001018a7398) */
/* WARNING: Removing unreachable block (ram,0x0001018a7544) */
/* WARNING: Removing unreachable block (ram,0x0001018a758c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a71fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  undefined1 auStack_9a40 [16];
  undefined8 uStack_9a30;
  undefined1 *puStack_9a28;
  undefined8 uStack_2f68;
  undefined8 uStack_2f60;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  uStack_9a30 = param_2;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puStack_9a28 = auStack_9a40 +
                 ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
                 (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar4 = *(long *)(param_1 + _DAT_11306b528);
  lVar1 = *(long *)(lVar4 + _DAT_11308f128);
  if (lVar1 != 0x16) {
    if (lVar1 != 4) goto code_r0x000107c61174;
    func_0x0001000d224c(&uStack_2f68);
    uVar2 = uStack_2f68;
    func_0x000107c614f0(uStack_2f68);
    uVar3 = 0;
    func_0x00010403c628(0xd00000000000002e,0x800000010efbca60,uVar2,uStack_2f60);
    func_0x000107c615e8(uStack_2f68);
    if ((((uVar3 & 1) == 0) ||
        (lVar1 = *(long *)(*(long *)(param_1 + _DAT_11306b4f8) + _DAT_11306b3f0), lVar1 == 0)) ||
       (*(long *)(lVar1 + _DAT_11306beb8) == 0)) goto code_r0x000107c61174;
  }
  param_1 = lVar4;
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1018a7c48; end: 1018a7ca7; -[_TtC25AdTrackParserServicesImpl18AdTrackStoryParser parseWithTrackRequest:viewSeqNum:] */

void FUN_1018a7c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1018a71fc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a7ca8; end: 1018a90d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018a7ca8(undefined *param_1,long param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined **ppuVar22;
  long lVar23;
  byte *pbVar24;
  undefined *puStack_6c50;
  long lStack_6c48;
  long lStack_6c40;
  long lStack_6c38;
  long lStack_6c30;
  undefined *puStack_6c28;
  undefined1 auStack_6bf0 [24];
  undefined1 auStack_6bd8 [2744];
  undefined1 auStack_6120 [24];
  long lStack_6108;
  long lStack_6100;
  undefined1 auStack_5668 [2744];
  long lStack_4bb0;
  undefined1 auStack_4ba8 [16];
  long lStack_4b98;
  undefined **ppuStack_4b90;
  undefined1 auStack_4a70 [32];
  undefined8 uStack_4a50;
  undefined1 auStack_40f8 [2744];
  undefined1 auStack_3640 [2744];
  long lStack_2b88;
  undefined1 auStack_2b80 [16];
  ulong uStack_2b70;
  long lStack_2b28;
  undefined1 auStack_20d0 [2744];
  undefined1 auStack_1618 [2744];
  long lStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  ulong uStack_b40;
  long lStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined1 auStack_b20 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&puStack_6c50 - extraout_x8;
  lVar4 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(int *)(param_3 + 0x20) == 0x16) || (lVar20 = *(long *)(param_2 + 0x18), lVar20 < 0)) {
    func_0x000107c61434(param_1);
  }
  else {
    func_0x0001018a9168(param_3,lVar4,&SUB_100b91d00);
    func_0x0001047c0984(0);
    func_0x000107c610f8();
    func_0x0001047b952c();
    if (param_1 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x10);
      if (lVar21 != 0) {
        puStack_6c28 = param_1 + 0x20;
        lStack_6c30 = _DAT_113815208;
        puStack_6c50 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar18 = lVar21;
        lStack_6c48 = lVar21;
        lStack_6c40 = lVar4;
        lStack_6c38 = param_2;
LAB_1018a7ec0:
        lVar21 = lVar21 + -1;
        if (lVar18 <= lVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88d8);
          (*pcVar2)();
        }
        puVar13 = puStack_6c28 + lVar21 * 0xab8;
        func_0x000107c610b4(&lStack_2b88,puVar13,0xab2);
        func_0x000107c610b8(auStack_20d0,puVar13,0xab2);
        func_0x00010178e4a0(auStack_20d0);
        uVar17 = uStack_2b70;
        iVar3 = (int)auStack_2b80;
        func_0x000100cbd968();
        if (iVar3 == 1) {
          FUN_101795250(&lStack_2b88,auStack_40f8);
LAB_1018a8750:
          puVar11 = auStack_20d0;
          goto LAB_1018a87a8;
        }
        if (-1 < lVar20) {
          uVar14 = *(ulong *)(lVar4 + lStack_6c30);
          if (uVar14 == 0) {
            FUN_101795250(&lStack_2b88,auStack_40f8);
            func_0x0001018a9294(auStack_2b80,auStack_40f8,0x112dcbd00,&UNK_10d98e550);
            uVar15 = 0;
          }
          else if ((uVar14 & 0xc000000000000001) == 0) {
            if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88dc);
              (*pcVar2)();
            }
            if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88e0);
              (*pcVar2)();
            }
            uVar15 = *(ulong *)(uVar14 + uVar17 * 8 + 0x20);
            FUN_101795250(&lStack_2b88,auStack_40f8);
            func_0x0001018a9294(auStack_2b80,auStack_40f8,0x112dcbd00,&UNK_10d98e550);
            func_0x000107c61174(uVar15);
          }
          else {
            FUN_101795250(&lStack_2b88,auStack_40f8);
            func_0x0001018a9294(auStack_2b80,auStack_40f8,0x112dcbd00,&UNK_10d98e550);
            uVar15 = uVar17;
            func_0x000100e471e4(uVar17,uVar14);
          }
          lVar23 = lVar4;
          func_0x0001084c6f7c(lVar4,uVar15);
          func_0x000107c61170(uVar15);
          uStack_b50 = *(undefined8 *)(param_2 + 0x10);
          uStack_b58 = *(undefined8 *)(param_2 + 8);
          lStack_b60 = lStack_2b88;
          uStack_b40 = uVar17;
          uStack_b28 = *(undefined8 *)(param_2 + 0x38);
          uStack_b30 = *(undefined8 *)(param_2 + 0x30);
          lVar16 = *(long *)(unaff_x20 + 0x10);
          lVar5 = 0;
          lStack_b48 = lVar20;
          lStack_b38 = lVar23;
          func_0x0001018a61fc();
          func_0x000107c613fc();
          puVar12 = (undefined8 *)(lVar5 + 0x98);
          *puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
          *(long *)(lVar5 + 0x10) = lVar16;
          func_0x000100400294(unaff_x20 + 0x18,lVar5 + 0x18);
          func_0x000107c6157c(lVar16);
          func_0x00010189b554(param_2,auStack_40f8);
          lVar23 = lVar4;
          func_0x000107c3d4b4();
          func_0x000107c61180();
          if (lVar23 != 0) {
            func_0x0001047c15e8(lVar19);
          }
          lVar20 = lVar20 + -1;
          lVar6 = 0;
          func_0x0001046d90b0();
          (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar19,lVar23 == 0,1,lVar6);
          if (lStack_b60 < 6) {
            if ((lStack_b60 == 1) || (lStack_b60 == 3)) goto LAB_1018a8134;
          }
          else if ((lStack_b60 == 0x10) || ((lStack_b60 == 10 || (lStack_b60 == 6)))) {
LAB_1018a8134:
            lVar4 = 0x112dcdfd0;
            func_0x0001000285a8(0x112dcdfd0,&UNK_10d990368);
            func_0x000107c61538();
            puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
            lVar18 = *(long *)(lVar4 + 0x10);
            puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar18 != 0) {
              pbVar24 = (byte *)(lVar4 + 0x20);
              do {
                bVar1 = *pbVar24;
                if (bVar1 < 3) {
                  if (bVar1 == 0) {
                    lVar7 = 0;
                    func_0x0001018b7178();
                    lVar6 = lVar7;
                    func_0x000107c613fc();
                    *(undefined8 *)(lVar6 + 0x90) = 0;
                    *(undefined8 *)(lVar6 + 0x98) = 0;
                    *(undefined8 *)(lVar6 + 0xa0) = 0;
                    *(undefined **)(lVar6 + 0xa8) = puVar13;
                    lVar23 = lVar6 + 0x10;
                    ppuVar22 = &PTR_DAT_11040b688;
                    *(undefined **)(lVar6 + 0xb0) = puVar13;
                  }
                  else if (bVar1 == 1) {
                    lVar7 = 0;
                    func_0x0001018bab54();
                    lVar6 = lVar7;
                    func_0x000107c613fc();
                    *(undefined **)(lVar6 + 0x90) = puVar13;
                    lVar23 = lVar6 + 0x10;
                    *(undefined8 *)(lVar6 + 0xa0) = 0;
                    *(undefined8 *)(lVar6 + 0x98) = 0;
                    *(undefined8 *)(lVar6 + 0xb0) = 0;
                    *(undefined8 *)(lVar6 + 0xa8) = 0;
                    *(undefined8 *)(lVar6 + 0xb8) = 0;
                    ppuVar22 = &PTR_DAT_11040b7d0;
                  }
                  else {
                    lVar23 = 0;
                    func_0x00010189d2d8();
                    func_0x000107c613fc();
                    func_0x000100400294(lVar16 + 0x10,lVar23 + 0x10);
                    lVar7 = 0;
                    func_0x0001018b8d60();
                    lVar6 = lVar7;
                    func_0x000107c613fc();
                    *(undefined **)(lVar6 + 0x98) = puVar13;
                    *(undefined **)(lVar6 + 0xa0) = puVar13;
                    *(long *)(lVar6 + 0x10) = lVar23;
                    lVar23 = lVar6 + 0x18;
                    ppuVar22 = &PTR_DAT_11040b6d0;
                  }
                }
                else if (bVar1 == 3) {
                  lVar7 = 0;
                  func_0x0001018abab8();
                  lVar6 = lVar7;
                  func_0x000107c613fc();
                  *(undefined **)(lVar6 + 0x90) = puVar13;
                  *(undefined **)(lVar6 + 0x98) = puVar13;
                  lVar23 = lVar6 + 0x10;
                  ppuVar22 = &PTR_DAT_11040b5b8;
                }
                else if (bVar1 == 4) {
                  lVar23 = 0;
                  func_0x00010189d2d8();
                  func_0x000107c613fc();
                  func_0x000100400294(lVar16 + 0x10,lVar23 + 0x10);
                  lVar7 = 0;
                  func_0x0001018b0b40();
                  lVar6 = lVar7;
                  func_0x000107c613fc();
                  *(undefined **)(lVar6 + 0x98) = puVar13;
                  *(undefined **)(lVar6 + 0xa0) = puVar13;
                  *(long *)(lVar6 + 0x10) = lVar23;
                  lVar23 = lVar6 + 0x18;
                  ppuVar22 = &PTR_DAT_11040b668;
                }
                else {
                  lVar7 = 0;
                  func_0x0001018b9bcc();
                  lVar6 = lVar7;
                  func_0x000107c613fc();
                  *(undefined **)(lVar6 + 0x90) = puVar13;
                  *(undefined **)(lVar6 + 0x98) = puVar13;
                  lVar23 = lVar6 + 0x10;
                  ppuVar22 = &PTR_DAT_11040b6f0;
                }
                func_0x000100400294(lVar16 + 0x10,lVar23);
                puVar8 = puVar10;
                lStack_4bb0 = lVar6;
                lStack_4b98 = lVar7;
                ppuStack_4b90 = ppuVar22;
                func_0x000107c61558();
                puVar9 = puVar10;
                if (((ulong)puVar8 & 1) == 0) {
                  puVar9 = (undefined *)0x0;
                  FUN_1018a6324(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
                }
                uVar17 = *(ulong *)(puVar9 + 0x10);
                puVar10 = puVar9;
                if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar17) {
                  puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                  FUN_1018a6324(puVar10,uVar17 + 1,1,puVar9);
                }
                *(ulong *)(puVar10 + 0x10) = uVar17 + 1;
                FUN_1018a6f3c(&lStack_4bb0,puVar10 + uVar17 * 0x28 + 0x20);
                lVar18 = lVar18 + -1;
                pbVar24 = pbVar24 + 1;
              } while (lVar18 != 0);
            }
            func_0x000107c6142c(lVar4);
            lVar4 = *(long *)(puVar10 + 0x10);
            if (lVar4 != 0) {
              func_0x000107c61428(puVar12,auStack_6bf0,0x21,0);
              puVar8 = puVar10 + 0x20;
              FUN_101795250(&lStack_2b88,&lStack_4bb0);
              func_0x000107c610b4(&lStack_4bb0,auStack_20d0,0xab2);
              do {
                lVar4 = lVar4 + -1;
                func_0x000107c610b4(auStack_b20,&lStack_4bb0,0xab2);
                func_0x0001018a6ef8(puVar8,auStack_6bd8);
                FUN_1018a6f3c(auStack_6bd8,auStack_6120);
                lVar23 = lStack_6100;
                lVar18 = lStack_6108;
                func_0x0001000a8868(auStack_6120,lStack_6108);
                (**(code **)(lVar23 + 0x10))
                          (auStack_1618,auStack_b20,&lStack_b60,lVar19,lVar18,lVar23);
                func_0x000107c610b4(auStack_5668,auStack_1618,0xab2);
                func_0x0001018a92dc(&lStack_4bb0,0x112dcbc88,&UNK_10d98e360);
                lVar23 = lStack_6100;
                lVar18 = lStack_6108;
                func_0x0001000a8868(auStack_6120,lStack_6108);
                (**(code **)(lVar23 + 8))(lVar18,lVar23);
                uVar17 = *(ulong *)(lVar18 + 0x10);
                lVar23 = *(long *)(puVar13 + 0x10);
                if (SCARRY8(lVar23,uVar17)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88c8);
                  (*pcVar2)();
                }
                puVar9 = puVar13;
                func_0x000107c61558();
                if (((int)puVar9 == 0) ||
                   (uVar14 = *(ulong *)(puVar13 + 0x18) >> 1, (long)uVar14 < (long)(lVar23 + uVar17)
                   )) {
                  func_0x0001000d182c();
                  uVar14 = *(ulong *)(puVar9 + 0x18) >> 1;
                  if (*(long *)(lVar18 + 0x10) == 0) goto LAB_1018a859c;
LAB_1018a8528:
                  if (uVar14 - *(long *)(puVar9 + 0x10) < uVar17) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88d0);
                    (*pcVar2)();
                  }
                  func_0x000107c6140c(puVar9 + *(long *)(puVar9 + 0x10) * 0x10 + 0x20,lVar18 + 0x20,
                                      uVar17,PTR___sSSN_11034da80);
                  func_0x000107c6142c(lVar18);
                  if (uVar17 != 0) {
                    if (SCARRY8(*(long *)(puVar9 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88d4);
                      (*pcVar2)();
                    }
                    *(ulong *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + uVar17;
                  }
                }
                else {
                  puVar9 = puVar13;
                  if (*(long *)(lVar18 + 0x10) != 0) goto LAB_1018a8528;
LAB_1018a859c:
                  func_0x000107c6142c(lVar18);
                  if (uVar17 != 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a88cc);
                    (*pcVar2)();
                  }
                }
                *puVar12 = puVar9;
                func_0x0001000834e4(auStack_6120);
                if (lVar4 == 0) goto LAB_1018a7de4;
                func_0x000107c610b4(&lStack_4bb0,auStack_5668,0xab2);
                puVar8 = puVar8 + 0x28;
                puVar13 = puVar9;
              } while( true );
            }
            func_0x000107c6142c(puVar10);
            param_2 = lStack_6c38;
            lVar4 = lStack_6c40;
            lVar18 = lStack_6c48;
          }
          iVar3 = (int)uStack_b30;
          func_0x000107c61574(lVar5);
          func_0x00010189b44c(&lStack_b60);
          func_0x0001018a92dc(auStack_2b80,0x112dcbd00,&UNK_10d98e550);
          func_0x0001018a92dc(lVar19,0x112dcbcf8,&UNK_10d98e3f0);
          if ((iVar3 != 0x16) || (lStack_2b28 != 0)) goto LAB_1018a8750;
          func_0x000107c610b4(&lStack_4bb0,auStack_20d0,0xab2);
          iVar3 = (int)&lStack_4bb0;
          func_0x00010178e478();
          if (iVar3 != 1) {
            iVar3 = (int)auStack_4ba8;
            func_0x000100cbd968();
            if (iVar3 != 1) {
              iVar3 = (int)auStack_4a70;
              FUN_10187bbec();
              if (iVar3 != 1) {
                uStack_4a50 = 0;
              }
            }
          }
          func_0x000107c610b4(auStack_6120,&lStack_4bb0,0xab2);
          func_0x000107c610b4(auStack_5668,&lStack_4bb0,0xab2);
          func_0x0001018a9294(auStack_6120,auStack_6bd8,0x112dcbc88,&UNK_10d98e360);
          func_0x0001018a92dc(auStack_5668,0x112dcbc88,&UNK_10d98e360);
          func_0x000107c610b4(auStack_40f8,auStack_6120,0xab2);
          goto LAB_1018a7ea4;
        }
        FUN_101795250(&lStack_2b88,auStack_40f8);
        func_0x000107c610b4(auStack_3640,auStack_20d0,0xab2);
        lVar20 = -1;
        goto LAB_1018a87b0;
      }
      puStack_6c50 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1018a88e4:
      param_1 = puStack_6c50;
      FUN_1018a6fe4(puStack_6c50);
    }
    func_0x000107c61170(lVar4);
  }
  return param_1;
LAB_1018a7de4:
  func_0x000107c614a8(auStack_6bf0);
  func_0x000107c6142c(puVar10);
  FUN_1018a6cd4(auStack_6120,auStack_1618,&lStack_b60);
  func_0x0001018a92dc(auStack_1618,0x112dcbc88,&UNK_10d98e360);
  func_0x000107c61574(lVar5);
  func_0x00010189b44c(&lStack_b60);
  func_0x0001018a92dc(auStack_2b80,0x112dcbd00,&UNK_10d98e550);
  func_0x0001018a92dc(lVar19,0x112dcbcf8,&UNK_10d98e3f0);
  func_0x00010179528c(&lStack_2b88);
  func_0x000107c610b4(auStack_40f8,auStack_6120,0xab2);
  param_2 = lStack_6c38;
  lVar4 = lStack_6c40;
  lVar18 = lStack_6c48;
LAB_1018a7ea4:
  iVar3 = (int)auStack_40f8;
  func_0x00010178e478();
  if (iVar3 != 1) {
    puVar11 = auStack_40f8;
LAB_1018a87a8:
    func_0x000107c610b4(auStack_3640,puVar11,0xab2);
LAB_1018a87b0:
    puVar13 = puStack_6c50;
    func_0x000107c61558();
    if (((ulong)puVar13 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_101790350(0,*(long *)(puStack_6c50 + 0x10) + 1,1);
      puStack_6c50 = puVar13;
    }
    uVar17 = *(ulong *)(puStack_6c50 + 0x10);
    if (*(ulong *)(puStack_6c50 + 0x18) >> 1 <= uVar17) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6c50 + 0x18));
      FUN_101790350(puVar13,uVar17 + 1,1,puStack_6c50);
      puStack_6c50 = puVar13;
    }
    func_0x000107c610b4(auStack_40f8,auStack_3640,0xab2);
    *(ulong *)(puStack_6c50 + 0x10) = uVar17 + 1;
    func_0x000107c610b4(puStack_6c50 + uVar17 * 0xab8 + 0x20,auStack_40f8,0xab2);
  }
  if (lVar21 == 0) goto LAB_1018a88e4;
  goto LAB_1018a7ec0;
}



/* Entry: 1018a90d8; end: 1018a912b;  */

void FUN_1018a90d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100400450(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018a912c; end: 1018a931b;  */

undefined8 FUN_1018a912c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104262e58)(param_2,param_1);
  return param_2;
}



/* Entry: 1018a931c; end: 1018a933f;  */

undefined1 FUN_1018a931c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  uStack_58 = 0xd000000000000037;
  uStack_50 = 0x800000010efbcab0;
  uStack_48 = 1;
  pcVar1 = *(code **)(param_2 + 8);
  _swift_bridgeObjectRetain(0x800000010efbcab0);
  (*pcVar1)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  _swift_bridgeObjectRelease(0x800000010efbcab0);
  return uStack_41;
}



/* Entry: 1018a9340; end: 1018a937f; -[_TtC25AdTrackParserServicesImpl24AdTrackViewContextParser adEventSymbols] */

void FUN_1018a9340(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a9380; end: 1018a93b7; -[_TtC25AdTrackParserServicesImpl24AdTrackViewContextParser setAdEventSymbols:] */

void FUN_1018a9380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1018a93b8; end: 1018a9a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1018a93b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_8f90 [8];
  undefined1 auStack_8f88 [16];
  undefined1 auStack_8f78 [6080];
  undefined1 auStack_77b8 [6096];
  undefined1 auStack_5fe8 [6096];
  undefined1 auStack_4818 [24];
  undefined *puStack_4800;
  undefined *apuStack_3048 [3];
  undefined8 uStack_3030;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined1 auStack_1830 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = auStack_8f90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar8 - extraout_x12;
  func_0x000107c61174();
  func_0x0001042b0824(lVar3);
  func_0x000107c610b4(auStack_1830,lVar3 + 0x18,0x17d0);
  func_0x000107c610b4(auStack_4818,lVar3 + 0x18,0x17d0);
  lVar9 = *(long *)(param_1 + _DAT_11306b528);
  uVar10 = *(ulong *)(lVar9 + _DAT_113815208);
  if (uVar10 == 0) {
LAB_1018a9504:
    FUN_101897da8(auStack_1830,apuStack_3048);
    uVar11 = 0;
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar4 = uVar10;
      if (-1 < (long)uVar10) {
        uVar4 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) goto LAB_1018a9504;
    if ((uVar10 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a97b0);
        (*pcVar2)();
      }
      uVar11 = *(undefined8 *)(uVar10 + 0x20);
      FUN_101897da8(auStack_1830,apuStack_3048);
      func_0x000107c61174(uVar11);
    }
    else {
      FUN_101897da8(auStack_1830,apuStack_3048);
      func_0x000107c61434(uVar10);
      uVar11 = 0;
      func_0x000100e471e4(0,uVar10);
      func_0x000107c6142c(uVar10);
    }
  }
  lVar5 = lVar9;
  func_0x0001084c6f7c(lVar9,uVar11);
  func_0x000107c61170(uVar11);
  puVar1 = PTR___syXlN_11034f1a0;
  uStack_1878 = *(undefined8 *)(lVar9 + _DAT_113815200);
  uStack_1870 = *(undefined8 *)(param_1 + _DAT_11306b4e8);
  uStack_1868 = ((undefined8 *)(param_1 + _DAT_11306b4e8))[1];
  uStack_1848 = *(undefined8 *)(lVar9 + _DAT_11308f128);
  uStack_1840 = *(undefined8 *)(param_1 + _DAT_11306b530);
  uStack_1858 = 0;
  lVar9 = *(long *)(*(long *)(param_1 + _DAT_11306b4f8) + _DAT_11306b3e0);
  uStack_1860 = param_2;
  lStack_1850 = lVar5;
  if (lVar9 == 0) {
    func_0x000107c61434();
  }
  else {
    apuStack_3048[0] = (undefined *)0x0;
    func_0x000107c61434();
    func_0x000107c61174(lVar9);
    func_0x000107c5f9e4();
    func_0x000107c61170(lVar9);
    puVar6 = apuStack_3048[0];
    if (apuStack_3048[0] != (undefined *)0x0) goto LAB_1018a9620;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10178ddc4();
LAB_1018a9620:
  func_0x000107c610b4(apuStack_3048,auStack_4818,0x17d0);
  uStack_1838 = uStack_3030;
  puVar7 = puVar6;
  func_0x0001018a97b0(puVar6,apuStack_3048,&uStack_1878);
  func_0x000107c6142c(puVar6);
  FUN_10189b44c(&uStack_1878);
  puVar6 = puVar7;
  func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar7);
  func_0x0001018aadf0(&uStack_1838,0x112dce260,&UNK_10d990480);
  puStack_4800 = puVar6;
  func_0x000107c610b4(auStack_77b8,auStack_4818,0x17d0);
  func_0x000107c610b4(auStack_5fe8,lVar3 + 0x18,0x17d0);
  FUN_101897da8(auStack_77b8,auStack_8f88);
  func_0x000101897de4(auStack_5fe8);
  func_0x000107c610b4(lVar3 + 0x18,auStack_77b8,0x17d0);
  func_0x00010188dcdc(lVar3,puVar8);
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  func_0x0001042b0f38(puVar8);
  func_0x000101897de4(auStack_4818);
  func_0x00010188dc5c(lVar3);
  return puVar8;
}



/* Entry: 1018a9a1c; end: 1018a9a7b; -[_TtC25AdTrackParserServicesImpl24AdTrackViewContextParser parseWithTrackRequest:viewSeqNum:] */

void FUN_1018a9a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1018a93b8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018a9a7c; end: 1018aa7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018a9a7c(int *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_5c68 [2744];
  undefined1 auStack_51b0 [8];
  undefined1 auStack_51a8 [16];
  long lStack_5198;
  undefined8 uStack_46f8;
  undefined1 auStack_46f0 [2768];
  undefined1 auStack_3c20 [3320];
  undefined *puStack_2f28;
  undefined8 uStack_2f20;
  undefined1 auStack_2f08 [2744];
  undefined1 auStack_2450 [3320];
  undefined1 auStack_1758 [96];
  long lStack_16f8;
  undefined1 auStack_be0 [48];
  long lStack_bb0;
  long lStack_b88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&uStack_46f8);
  func_0x0001000d224c(&puStack_2f28);
  puVar13 = puStack_2f28;
  piVar5 = param_1;
  FUN_10189d320(param_1,uStack_46f8,puStack_2f28,uStack_2f20);
  func_0x000107c615e8(uStack_46f8);
  func_0x000107c615e8(puVar13);
  iVar3 = *param_1;
  if (iVar3 == 5) {
    func_0x0001000d224c(&puStack_2f28);
    puVar13 = puStack_2f28;
    puVar6 = puStack_2f28;
    func_0x000107c614f0(puStack_2f28);
    uVar4 = 0x37;
    func_0x00010403c628(0xd000000000000037,0x800000010efbcab0,puVar6,uStack_2f20);
    func_0x000107c615e8(puVar13);
LAB_1018a9b80:
    if (((iVar3 == 1 | uVar4 | (uint)piVar5) & 1) != 0) goto LAB_1018a9b94;
  }
  else {
    if ((iVar3 != 3) && (iVar3 != 6)) {
      uVar4 = 0;
      goto LAB_1018a9b80;
    }
LAB_1018a9b94:
    func_0x0001000d224c(&puStack_2f28);
    if (puStack_2f28 != (undefined *)0x0) {
      if (iVar3 == 5) {
        func_0x000107c610b4(&puStack_2f28,param_2,0x17d0);
        iVar3 = (int)&puStack_2f28;
        func_0x0001018aad7c();
        if (iVar3 == 1) goto LAB_1018a9d50;
        func_0x000107c610b4(auStack_be0,auStack_2450,0xb78);
        iVar3 = (int)auStack_be0;
        func_0x000100cbd98c();
        if ((iVar3 == 1) || (lStack_bb0 < 1)) goto LAB_1018a9d50;
        func_0x000107c610b4(&uStack_46f8,param_2,0x17d0);
        iVar3 = (int)&uStack_46f8;
        func_0x0001018aad7c();
        if (iVar3 == 1) {
LAB_1018aa064:
          uVar7 = *(undefined8 *)(param_1 + 2);
          func_0x000107c5fadc(uVar7,*(undefined8 *)(param_1 + 4));
LAB_1018aa080:
          puVar13 = puStack_2f28;
          func_0x000107c3d32c();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          uVar7 = 0;
          func_0x00010468506c(0);
          puVar6 = puVar13;
          func_0x000107c5fc54(puVar13,uVar7);
          func_0x000107c61170(puVar13);
LAB_1018aa0b4:
          if ((ulong)puVar6 >> 0x3e == 0) goto LAB_1018aa0bc;
LAB_1018aa1c4:
          puVar13 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar13 = puVar6;
          }
          func_0x000107c60480();
        }
        else {
          func_0x000107c610b4(auStack_1758,auStack_3c20,0xb78);
          iVar3 = (int)auStack_1758;
          func_0x000100cbd98c();
          if ((iVar3 == 1) || (lStack_16f8 == 0)) goto LAB_1018aa064;
          lVar12 = *(long *)(lStack_16f8 + 0x10);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (lVar12 != 0) {
            lVar14 = 0;
            do {
              func_0x000107c610b4(auStack_51b0,lStack_16f8 + 0x20 + lVar14 * 0xab8,0xab2);
              lVar1 = lStack_5198;
              iVar3 = (int)auStack_51a8;
              func_0x000100cbd98c();
              puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((iVar3 != 1) && (-1 < lVar1)) {
                uVar7 = *(undefined8 *)(param_1 + 2);
                uVar10 = *(undefined8 *)(param_1 + 4);
                FUN_101795250(auStack_51b0,auStack_5c68);
                FUN_1018aada0(auStack_51a8,auStack_5c68);
                func_0x000107c5fadc(uVar7,uVar10);
                puVar16 = puStack_2f28;
                func_0x000107c3d32c();
                func_0x000107c61180();
                func_0x000107c61170(uVar7);
                uVar7 = 0;
                func_0x00010468506c(0);
                puVar13 = puVar16;
                func_0x000107c5fc54(puVar16,uVar7);
                func_0x00010179528c(auStack_51b0);
                func_0x0001018aadf0(auStack_51a8,0x112dcbd00,&UNK_10d98e550);
                func_0x000107c61170(puVar16);
              }
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar16 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar16 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if (((ulong)puVar13 & 0x8000000000000000) != 0) {
                  puVar16 = puVar13;
                }
                func_0x000107c60480();
              }
              uVar20 = (ulong)puVar6 >> 0x3e;
              if (uVar20 == 0) {
                puVar8 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                if (((ulong)puVar6 & 0x8000000000000000) != 0) {
                  puVar8 = puVar6;
                }
                func_0x000107c60480();
              }
              puVar19 = puVar8 + (long)puVar16;
              if (SCARRY8((long)puVar8,(long)puVar16)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1e8);
                (*pcVar2)();
              }
              puVar8 = puVar6;
              func_0x000107c61550();
              uVar4 = 0;
              if (uVar20 == 0) {
                uVar4 = (uint)puVar8;
              }
              puVar8 = (undefined *)(ulong)uVar4;
              if ((uVar4 != 1) ||
                 (uVar15 = (ulong)puVar6 & 0xffffffffffffff8,
                 (long)(*(ulong *)(uVar15 + 0x18) >> 1) < (long)puVar19)) {
                if (uVar20 == 0) {
                  puVar11 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10)
                  ;
                }
                else {
                  puVar11 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                  if (((ulong)puVar6 & 0x8000000000000000) != 0) {
                    puVar11 = puVar6;
                  }
                  func_0x000107c60480();
                }
                if ((long)puVar11 <= (long)puVar19) {
                  puVar11 = puVar19;
                }
                FUN_1018a6468(puVar8,puVar11,1,puVar6);
                uVar15 = (ulong)puVar8 & 0xffffffffffffff8;
                puVar6 = puVar8;
              }
              lVar1 = *(long *)(uVar15 + 0x10);
              puVar8 = (undefined *)((*(ulong *)(uVar15 + 0x18) >> 1) - lVar1);
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar19 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
                if (puVar19 == (undefined *)0x0) goto LAB_1018a9d84;
                if (puVar8 < puVar19) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1f8);
                  (*pcVar2)();
                }
                uVar7 = 0;
                func_0x00010468506c(0);
                func_0x000107c6140c(uVar15 + lVar1 * 8 + 0x20,
                                    ((ulong)puVar13 & 0xffffffffffffff8) + 0x20,puVar19,uVar7);
LAB_1018a9ff0:
                func_0x000107c6142c(puVar13);
                if ((long)puVar19 < (long)puVar16) goto LAB_1018aa1e8;
                if (0 < (long)puVar19) {
                  if (SCARRY8(*(long *)(uVar15 + 0x10),(long)puVar19)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1f0);
                    (*pcVar2)();
                  }
                  *(undefined **)(uVar15 + 0x10) = puVar19 + *(long *)(uVar15 + 0x10);
                }
              }
              else {
                puVar19 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if (((ulong)puVar13 & 0x8000000000000000) != 0) {
                  puVar19 = puVar13;
                }
                puVar11 = puVar19;
                func_0x000107c60480();
                if (puVar11 != (undefined *)0x0) {
                  func_0x000107c60480();
                  if ((long)puVar8 < (long)puVar19) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1f4);
                    (*pcVar2)();
                  }
                  if ((long)puVar11 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1fc);
                    (*pcVar2)();
                  }
                  lVar1 = uVar15 + lVar1 * 8;
                  puVar17 = (undefined8 *)(lVar1 + 0x20);
                  if (((ulong)puVar13 & 0xc000000000000001) == 0) {
                    uVar7 = *(undefined8 *)(puVar13 + 0x20);
                    *puVar17 = uVar7;
                    puVar11 = puVar11 + -1;
                    if (puVar11 != (undefined *)0x0) {
                      uVar10 = uVar7;
                      puVar17 = (undefined8 *)(lVar1 + 0x28);
                      puVar18 = (undefined8 *)(puVar13 + 0x28);
                      do {
                        uVar7 = *puVar18;
                        *puVar17 = uVar7;
                        func_0x000107c61174(uVar10);
                        puVar11 = puVar11 + -1;
                        uVar10 = uVar7;
                        puVar17 = puVar17 + 1;
                        puVar18 = puVar18 + 1;
                      } while (puVar11 != (undefined *)0x0);
                    }
                    func_0x000107c61174(uVar7);
                  }
                  else {
                    puVar8 = (undefined *)0x0;
                    do {
                      puVar9 = puVar8;
                      FUN_101887b4c(puVar8,puVar13);
                      puVar17[(long)puVar8] = puVar9;
                      puVar8 = puVar8 + 1;
                    } while (puVar11 != puVar8);
                  }
                  goto LAB_1018a9ff0;
                }
LAB_1018a9d84:
                func_0x000107c6142c(puVar13);
                if (0 < (long)puVar16) {
LAB_1018aa1e8:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1ec);
                  (*pcVar2)();
                }
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 != lVar12);
            goto LAB_1018aa0b4;
          }
          if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1018aa1c4;
LAB_1018aa0bc:
          puVar13 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        func_0x000107c61434(puVar6);
        if (puVar13 != (undefined *)0x0) {
          uVar20 = 0;
          do {
            if (((ulong)puVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1e4);
                (*pcVar2)();
              }
              uVar15 = *(ulong *)(puVar6 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar15 = uVar20;
              FUN_101887b4c(uVar20,puVar6);
            }
            lVar12 = _DAT_11308c0c8;
            puVar16 = (undefined *)(uVar20 + 1);
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa1e0);
              (*pcVar2)();
            }
            iVar3 = (int)*(undefined8 *)(uVar15 + _DAT_11308c0c8);
            func_0x000107c30b1c();
            if (iVar3 == 4) {
LAB_1018aa170:
              func_0x000107c6142c(puVar6);
              uVar10 = *(undefined8 *)(uVar15 + lVar12);
              func_0x000107c61174(uVar10);
              uVar7 = uVar10;
              func_0x000107c30b38();
              func_0x000107c61170(uVar10);
              func_0x000107c615e8(puStack_2f28);
              func_0x000107c61170(uVar15);
              func_0x000107c6142c(puVar6);
              goto LAB_1018a9d5c;
            }
            iVar3 = (int)*(undefined8 *)(uVar15 + lVar12);
            func_0x000107c30b1c();
            if (iVar3 == 3) goto LAB_1018aa170;
            func_0x000107c61170(uVar15);
            uVar20 = uVar20 + 1;
          } while (puVar16 != puVar13);
        }
        func_0x000107c615e8(puStack_2f28);
        func_0x000107c61430(puVar6,2);
      }
      else {
        func_0x000107c610b4(&puStack_2f28,param_2,0x17d0);
        iVar3 = (int)&puStack_2f28;
        func_0x0001018aad7c();
        if (iVar3 != 1) {
          func_0x000107c610b4(&uStack_46f8,auStack_2f08,0xab2);
          iVar3 = (int)&uStack_46f8;
          FUN_10178e478();
          if (iVar3 != 1) {
            func_0x000107c610b4(auStack_be0,auStack_46f0,0x5a8);
            iVar3 = (int)auStack_be0;
            func_0x000100cbd98c();
            if ((iVar3 != 1) && (0 < lStack_b88)) {
              uVar7 = *(undefined8 *)(param_1 + 2);
              func_0x000107c5fadc(uVar7,*(undefined8 *)(param_1 + 4));
              if (*(long *)(param_1 + 8) < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa200);
                (*pcVar2)();
              }
              goto LAB_1018aa080;
            }
          }
        }
LAB_1018a9d50:
        func_0x000107c615e8(puStack_2f28);
      }
      uVar7 = 0;
LAB_1018a9d5c:
      uVar10 = 0;
      goto LAB_1018a9d60;
    }
  }
  uVar7 = 0;
  uVar10 = 1;
LAB_1018a9d60:
  auVar21._8_8_ = uVar10;
  auVar21._0_8_ = uVar7;
  return auVar21;
}



/* Entry: 1018aa7ac; end: 1018aa7ff;  */

void FUN_1018aa7ac(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018aa800; end: 1018aa80b;  */

void FUN_1018aa800(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x98));
  return;
}



/* Entry: 1018aa80c; end: 1018aaacb;  */

void FUN_1018aa80c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa8e4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1018aaacc(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa8ac);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001018aa95c();
    lVar6 = *unaff_x20;
    goto joined_r0x0001018aa8f8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001018aa8f8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018aa95c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1018aaacc; end: 1018aad67;  */

void FUN_1018aaacc(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dcbc30;
  func_0x0001000285a8(0x112dcbc30,&UNK_10d98e268);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1018aad34:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018aad64);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1018aad34;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018aad68);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1018aad68; end: 1018aad9f;  */

undefined1  [16] FUN_1018aad68(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x23) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x22 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1018aada0; end: 1018aae2f;  */

undefined8 FUN_1018aada0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbd00;
  func_0x0001000285a8(0x112dcbd00,&UNK_10d98e550);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018aae30; end: 1018ab5eb;  */

/* WARNING: Possible PIC construction at 0x0001018aafe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018aafe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018aae30(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_70;
  undefined *puStack_68;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x98);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    uVar5 = *(ulong *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar5);
    func_0x000100403514(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ab02c);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      puVar1 = puStack_68;
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_101888370(uVar7,uVar5);
      }
      lVar8 = *(long *)(uVar3 + _DAT_11308bcb8);
      func_0x000107c61174();
      func_0x000107c30b5c();
      if (lVar8 < 3) {
        if (lVar8 == 0) {
          uVar4 = 0xe200000000000000;
          uVar9 = 0x414e;
        }
        else if (lVar8 == 1) {
          uVar9 = 0x4f5653;
LAB_1018aaf2c:
          uVar4 = 0xe300000000000000;
        }
        else {
          if (lVar8 != 2) {
LAB_1018ab02c:
            lStack_70 = lVar8;
            func_0x000107c60614(&UNK_110799d18,&lStack_70,&UNK_110799d18,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ab050);
            (*pcVar2)();
          }
          uVar4 = 0xe400000000000000;
          uVar9 = 0x43575653;
        }
      }
      else if (lVar8 == 3) {
        uVar4 = 0xe300000000000000;
        uVar9 = 0x435653;
      }
      else {
        if (lVar8 == 5) {
          uVar9 = 0x4c5653;
          goto LAB_1018aaf2c;
        }
        if (lVar8 != 4) goto LAB_1018ab02c;
        uVar4 = 0xe400000000000000;
        uVar9 = 0x4f575653;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      puStack_68 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_68 + uVar3 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puStack_68 + uVar3 * 0x10 + 0x28) = uVar4;
    } while (uVar6 != uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1018ab5ec; end: 1018aba83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ab5ec(byte *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bStack_570;
  byte bStack_56f;
  undefined4 uStack_56e;
  undefined2 uStack_56a;
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
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 uStack_4c0;
  undefined8 uStack_4bf;
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
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
  undefined4 uStack_3f8;
  undefined2 uStack_3f4;
  byte bStack_3f0;
  byte bStack_3ef;
  undefined4 uStack_3ee;
  undefined2 uStack_3ea;
  undefined8 uStack_3e8;
  undefined8 auStack_3e0 [22];
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
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
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
  undefined1 uStack_210;
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
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined4 uStack_148;
  undefined2 uStack_144;
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
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined4 uStack_88;
  undefined2 uStack_84;
  
  bVar2 = *param_2;
  bVar3 = param_2[1];
  uStack_88 = *(undefined4 *)(param_2 + 2);
  uStack_84 = *(undefined2 *)(param_2 + 6);
  uVar17 = *(undefined8 *)(param_2 + 8);
  uStack_b8 = *(undefined8 *)(param_2 + 0x98);
  uStack_c0 = *(undefined8 *)(param_2 + 0x90);
  uStack_b0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_a8 = (undefined1)*(undefined8 *)(param_2 + 0xa8);
  uStack_9f = *(undefined8 *)(param_2 + 0xb1);
  uStack_a7 = (undefined7)*(undefined8 *)(param_2 + 0xa9);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa9) >> 0x38);
  uStack_f8 = *(undefined8 *)(param_2 + 0x58);
  uStack_100 = *(undefined8 *)(param_2 + 0x50);
  uStack_e8 = *(undefined8 *)(param_2 + 0x68);
  uStack_f0 = *(undefined8 *)(param_2 + 0x60);
  uStack_d8 = *(undefined8 *)(param_2 + 0x78);
  uStack_e0 = *(undefined8 *)(param_2 + 0x70);
  uStack_c8 = *(undefined8 *)(param_2 + 0x88);
  uStack_d0 = *(undefined8 *)(param_2 + 0x80);
  uStack_138 = *(undefined8 *)(param_2 + 0x18);
  uStack_140 = *(undefined8 *)(param_2 + 0x10);
  uStack_128 = *(undefined8 *)(param_2 + 0x28);
  uStack_130 = *(undefined8 *)(param_2 + 0x20);
  uStack_118 = *(undefined8 *)(param_2 + 0x38);
  uStack_120 = *(undefined8 *)(param_2 + 0x30);
  uStack_108 = *(undefined8 *)(param_2 + 0x48);
  uStack_110 = *(undefined8 *)(param_2 + 0x40);
  if (param_3 != 0) {
    uVar9 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar12 = param_3;
      if (-1 < (long)param_3) {
        uVar12 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar14 = *(undefined8 *)(unaff_x20 + 0x98);
      *(ulong *)(unaff_x20 + 0x98) = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar14);
      FUN_1018aae30();
      uStack_2a8 = *(undefined8 *)(param_2 + 0x88);
      uStack_2b0 = *(undefined8 *)(param_2 + 0x80);
      uStack_298 = *(undefined8 *)(param_2 + 0x98);
      uStack_2a0 = *(undefined8 *)(param_2 + 0x90);
      uStack_290 = *(undefined8 *)(param_2 + 0xa0);
      uStack_288 = (undefined1)*(undefined8 *)(param_2 + 0xa8);
      uStack_27f = *(undefined8 *)(param_2 + 0xb1);
      uStack_287 = (undefined7)*(undefined8 *)(param_2 + 0xa9);
      uStack_280 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa9) >> 0x38);
      uStack_2e8 = *(undefined8 *)(param_2 + 0x48);
      uStack_2f0 = *(undefined8 *)(param_2 + 0x40);
      uStack_2d8 = *(undefined8 *)(param_2 + 0x58);
      uStack_2e0 = *(undefined8 *)(param_2 + 0x50);
      uStack_2c8 = *(undefined8 *)(param_2 + 0x68);
      uStack_2d0 = *(undefined8 *)(param_2 + 0x60);
      uStack_2b8 = *(undefined8 *)(param_2 + 0x78);
      uStack_2c0 = *(undefined8 *)(param_2 + 0x70);
      uStack_328 = *(undefined8 *)(param_2 + 8);
      uStack_330 = *(undefined8 *)param_2;
      uStack_318 = *(undefined8 *)(param_2 + 0x18);
      uStack_320 = *(undefined8 *)(param_2 + 0x10);
      uStack_308 = *(undefined8 *)(param_2 + 0x28);
      uStack_310 = *(undefined8 *)(param_2 + 0x20);
      uStack_2f8 = *(undefined8 *)(param_2 + 0x38);
      uStack_300 = *(undefined8 *)(param_2 + 0x30);
      iVar6 = (int)&uStack_330;
      FUN_10178e278();
      if (iVar6 == 1) {
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_230 = 1;
        uStack_228 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_210 = 0;
        func_0x00010420e300(&bStack_3f0,0,0,0,0,0,0,&uStack_270,0,1,0,1);
        uStack_3f8 = uStack_3ee;
        uStack_3f4 = uStack_3ea;
        puVar8 = auStack_3e0;
        uVar17 = uStack_3e8;
        bVar2 = bStack_3f0;
        bVar3 = bStack_3ef;
      }
      else {
        uStack_3f8 = uStack_88;
        uStack_3f4 = uStack_84;
        puVar8 = &uStack_140;
      }
      uVar10 = (ulong)bVar3;
      uVar11 = (ulong)bVar2;
      uStack_428 = puVar8[0x11];
      uStack_430 = puVar8[0x10];
      uStack_420 = puVar8[0x12];
      uStack_418 = (undefined1)puVar8[0x13];
      uStack_40f = *(undefined8 *)((long)puVar8 + 0xa1);
      uStack_417 = (undefined7)*(undefined8 *)((long)puVar8 + 0x99);
      uStack_410 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x99) >> 0x38);
      uStack_468 = puVar8[9];
      uStack_470 = puVar8[8];
      uStack_458 = puVar8[0xb];
      uStack_460 = puVar8[10];
      uStack_448 = puVar8[0xd];
      uStack_450 = puVar8[0xc];
      uStack_438 = puVar8[0xf];
      uStack_440 = puVar8[0xe];
      uStack_4a8 = puVar8[1];
      uStack_4b0 = *puVar8;
      uStack_498 = puVar8[3];
      uStack_4a0 = puVar8[2];
      uStack_488 = puVar8[5];
      uStack_490 = puVar8[4];
      uStack_478 = puVar8[7];
      uVar14 = puVar8[6];
      uStack_480 = uVar14;
      func_0x0001018abc00(param_2,&bStack_570,0x112dcbc58,&UNK_10d98e2f0);
      lVar15 = 4;
      do {
        uVar13 = lVar15 - 4;
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1018ab980);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(param_3 + lVar15 * 8);
          func_0x000107c61174();
          uVar16 = uVar14;
        }
        else {
          uVar7 = uVar13;
          FUN_101888370(uVar13,param_3);
          uVar16 = uVar14;
        }
        lVar4 = _DAT_11308bcb8;
        uVar1 = lVar15 - 3;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018ab97c);
          (*pcVar5)();
        }
        iVar6 = (int)*(undefined8 *)(uVar7 + _DAT_11308bcb8);
        func_0x000107c30b5c();
        uVar13 = uVar7;
        uVar14 = uVar16;
        if (iVar6 == 3) {
          uVar11 = *(ulong *)(uVar7 + lVar4);
          func_0x000107c30b64();
          uVar10 = *(ulong *)(uVar7 + lVar4);
          func_0x000107c30b68();
          uVar13 = *(ulong *)(uVar7 + lVar4);
          func_0x000107c30b60();
          func_0x000107c61180();
          if (uVar13 == 0) {
            uVar13 = uVar7;
            uVar14 = uVar16;
            uVar17 = 0;
          }
          else {
            func_0x000107c4223c();
            uVar14 = uVar16;
            func_0x000107c61170(uVar7);
            uVar17 = uVar16;
          }
        }
        func_0x000107c61170(uVar13);
        lVar15 = lVar15 + 1;
      } while (uVar1 != uVar12);
      bStack_570 = (byte)uVar11;
      bStack_56f = (byte)uVar10;
      uStack_56e = uStack_3f8;
      uStack_56a = uStack_3f4;
      uStack_4d8 = uStack_428;
      uStack_4e0 = uStack_430;
      uStack_4c8 = uStack_418;
      uStack_4d0 = uStack_420;
      uStack_4bf = uStack_40f;
      uStack_4c7 = uStack_417;
      uStack_4c0 = uStack_410;
      uStack_518 = uStack_468;
      uStack_520 = uStack_470;
      uStack_508 = uStack_458;
      uStack_510 = uStack_460;
      uStack_4f8 = uStack_448;
      uStack_500 = uStack_450;
      uStack_4e8 = uStack_438;
      uStack_4f0 = uStack_440;
      uStack_558 = uStack_4a8;
      uStack_560 = uStack_4b0;
      uStack_548 = uStack_498;
      uStack_550 = uStack_4a0;
      uStack_538 = uStack_488;
      uStack_540 = uStack_490;
      uStack_528 = uStack_478;
      uStack_530 = uStack_480;
      uStack_568 = uVar17;
      func_0x00010178e4ac(&bStack_570);
      uStack_148 = uStack_56e;
      uStack_144 = uStack_56a;
      uStack_178 = uStack_4d8;
      uStack_180 = uStack_4e0;
      uStack_168 = uStack_4c8;
      uStack_170 = uStack_4d0;
      uStack_15f = uStack_4bf;
      uStack_167 = uStack_4c7;
      uStack_160 = uStack_4c0;
      uStack_1b8 = uStack_518;
      uStack_1c0 = uStack_520;
      uStack_1a8 = uStack_508;
      uStack_1b0 = uStack_510;
      uStack_188 = uStack_4e8;
      uStack_190 = uStack_4f0;
      uStack_198 = uStack_4f8;
      uStack_1a0 = uStack_500;
      uStack_1f8 = uStack_558;
      uStack_200 = uStack_560;
      uStack_1e8 = uStack_548;
      uStack_1f0 = uStack_550;
      uStack_1d8 = uStack_538;
      uStack_1e0 = uStack_540;
      uStack_1c8 = uStack_528;
      uStack_1d0 = uStack_530;
      uVar17 = uStack_568;
      bVar2 = bStack_570;
      bVar3 = bStack_56f;
      goto LAB_1018aba0c;
    }
  }
  func_0x0001018abc00(param_2,&uStack_330,0x112dcbc58,&UNK_10d98e2f0);
  uStack_148 = uStack_88;
  uStack_144 = uStack_84;
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_168 = uStack_a8;
  uStack_170 = uStack_b0;
  uStack_15f = uStack_9f;
  uStack_167 = uStack_a7;
  uStack_160 = uStack_a0;
  uStack_1b8 = uStack_f8;
  uStack_1c0 = uStack_100;
  uStack_1a8 = uStack_e8;
  uStack_1b0 = uStack_f0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_1f8 = uStack_138;
  uStack_200 = uStack_140;
  uStack_1e8 = uStack_128;
  uStack_1f0 = uStack_130;
  uStack_1d8 = uStack_118;
  uStack_1e0 = uStack_120;
  uStack_1c8 = uStack_108;
  uStack_1d0 = uStack_110;
LAB_1018aba0c:
  *param_1 = bVar2;
  param_1[1] = bVar3;
  *(undefined4 *)(param_1 + 2) = uStack_148;
  *(undefined2 *)(param_1 + 6) = uStack_144;
  *(undefined8 *)(param_1 + 8) = uVar17;
  *(undefined8 *)(param_1 + 0x98) = uStack_178;
  *(undefined8 *)(param_1 + 0x90) = uStack_180;
  *(ulong *)(param_1 + 0xa8) = CONCAT71(uStack_167,uStack_168);
  *(undefined8 *)(param_1 + 0xa0) = uStack_170;
  *(undefined8 *)(param_1 + 0xb1) = uStack_15f;
  *(ulong *)(param_1 + 0xa9) = CONCAT17(uStack_160,uStack_167);
  *(undefined8 *)(param_1 + 0x58) = uStack_1b8;
  *(undefined8 *)(param_1 + 0x50) = uStack_1c0;
  *(undefined8 *)(param_1 + 0x68) = uStack_1a8;
  *(undefined8 *)(param_1 + 0x60) = uStack_1b0;
  *(undefined8 *)(param_1 + 0x78) = uStack_198;
  *(undefined8 *)(param_1 + 0x70) = uStack_1a0;
  *(undefined8 *)(param_1 + 0x88) = uStack_188;
  *(undefined8 *)(param_1 + 0x80) = uStack_190;
  *(undefined8 *)(param_1 + 0x18) = uStack_1f8;
  *(undefined8 *)(param_1 + 0x10) = uStack_200;
  *(undefined8 *)(param_1 + 0x28) = uStack_1e8;
  *(undefined8 *)(param_1 + 0x20) = uStack_1f0;
  *(undefined8 *)(param_1 + 0x38) = uStack_1d8;
  *(undefined8 *)(param_1 + 0x30) = uStack_1e0;
  *(undefined8 *)(param_1 + 0x48) = uStack_1c8;
  *(undefined8 *)(param_1 + 0x40) = uStack_1d0;
  return;
}



/* Entry: 1018aba84; end: 1018abad7;  */

void FUN_1018aba84(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018abad8; end: 1018abae3;  */

void FUN_1018abad8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x90));
  return;
}



/* Entry: 1018abae4; end: 1018abb2b;  */

void FUN_1018abae4(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  func_0x0001018ab050(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018abb2c; end: 1018acc67;  */

undefined8 FUN_1018abb2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbc58;
  func_0x0001000285a8(0x112dcbc58,&UNK_10d98e2f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018acc68; end: 1018acc9f;  */

void FUN_1018acc68(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112dce318;
  plVar5 = (long *)&UNK_10d9904d8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_10468506c)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1018acca0; end: 1018acd0b;  */

void FUN_1018acca0(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1018acd0c; end: 1018acd1f;  */

void FUN_1018acd0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dce368 == (undefined *)0x0 || ((ulong)puRam0000000112dce368 & 1) != 0) {
    puVar1 = &UNK_10e87d9b2;
    func_0x000107c61518(&UNK_10e87d9b2,0x1f,0,0);
    puRam0000000112dce368 = puVar1;
  }
  return;
}



/* Entry: 1018acd20; end: 1018ad09b;  */

void FUN_1018acd20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1018ad09c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1018ad09c; end: 1018ad2db;  */

undefined * FUN_1018ad09c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ad1bc);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112dcbeb0;
    func_0x0001000285a8(0x112dcbeb0,&UNK_10d98e500);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0xab8) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110753e08);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0xab8 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 1018ad2dc; end: 1018ad3e3;  */

undefined *
FUN_1018ad2dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ad3e4);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 1018ad3e4; end: 1018ad4eb;  */

undefined * FUN_1018ad3e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ad4ec);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dce378;
    func_0x0001000285a8(0x112dce378,&UNK_10d990540);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1107955c0);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1018ad4ec; end: 1018ad627;  */

code * FUN_1018ad4ec(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ad628);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_1018acca0(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1018ad628; end: 1018ad757;  */

undefined * FUN_1018ad628(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ad758);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1018acd0c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112dcbb58;
    func_0x0001000285a8(0x112dcbb58,&UNK_10d98e190);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1018ad758; end: 1018ad78f;  */

undefined1 FUN_1018ad758(int param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  if ((param_1 == 10) && (param_2 == 9)) {
    uStack_58 = 0xd00000000000002a;
    uStack_50 = 0x800000010efbc050;
    uStack_48 = 1;
    pcVar1 = *(code **)(param_4 + 8);
    _swift_bridgeObjectRetain(0x800000010efbc050);
    (*pcVar1)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_3,param_4);
    _swift_bridgeObjectRelease(0x800000010efbc050);
    return uStack_41;
  }
  return 0;
}



/* Entry: 1018ad790; end: 1018ae1bf;  */

void FUN_1018ad790(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_6100 [2744];
  undefined8 uStack_5648;
  undefined8 uStack_5640;
  undefined8 uStack_5638;
  undefined8 uStack_5630;
  undefined8 uStack_5628;
  undefined8 uStack_5620;
  undefined8 uStack_5618;
  undefined8 uStack_5610;
  undefined8 uStack_5608;
  undefined8 uStack_5600;
  undefined8 uStack_55f8;
  undefined8 uStack_55f0;
  undefined8 uStack_55e8;
  undefined8 uStack_55e0;
  undefined8 uStack_55d8;
  undefined8 uStack_55d0;
  undefined8 uStack_55c8;
  undefined8 uStack_55c0;
  undefined8 uStack_55b8;
  undefined8 uStack_55b0;
  undefined8 uStack_55a8;
  undefined8 uStack_5597;
  undefined1 auStack_4b90 [2744];
  undefined1 auStack_40d8 [2744];
  undefined1 auStack_3620 [8];
  undefined1 auStack_3618 [2336];
  undefined8 uStack_2cf8;
  undefined8 uStack_2cf0;
  undefined1 auStack_2ce8 [384];
  undefined1 auStack_2b68 [2344];
  undefined8 uStack_2240;
  undefined8 uStack_2238;
  undefined1 auStack_20b0 [1448];
  undefined1 auStack_1b08 [2744];
  undefined1 auStack_1050 [1448];
  undefined1 auStack_aa8 [1448];
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
  undefined1 uStack_498;
  undefined1 auStack_488 [776];
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
  undefined8 uStack_6f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = *(undefined8 *)(param_1 + 0x928);
  uVar7 = *(undefined8 *)(param_1 + 0x930);
  func_0x000107c610b4(auStack_1b08,param_1,0xab2);
  iVar1 = (int)auStack_1b08;
  FUN_10178e478();
  if (iVar1 == 1) {
    FUN_10178ed8c(auStack_40d8);
    func_0x000107c610b4(auStack_aa8,auStack_40d8,0x5a8);
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4e0 = 1;
    uStack_4d0 = 0;
    uStack_4d8 = 0;
    uStack_4c0 = 0;
    uStack_4c8 = 0;
    uStack_4b0 = 0;
    uStack_4b8 = 0;
    uStack_4a0 = 0;
    uStack_4a8 = 0;
    uStack_498 = 0;
    func_0x00010178e4b4(auStack_4b90);
    func_0x000107c610b4(auStack_488,auStack_4b90,0x301);
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_180 = 1;
    uStack_128 = 0;
    func_0x00010178e4d4(&uStack_5648);
    uStack_98 = uStack_55c0;
    uStack_a0 = uStack_55c8;
    uStack_88 = uStack_55b0;
    uStack_90 = uStack_55b8;
    uStack_80 = uStack_55a8;
    uStack_6f = uStack_5597;
    uStack_d8 = uStack_5600;
    uStack_e0 = uStack_5608;
    uStack_c8 = uStack_55f0;
    uStack_d0 = uStack_55f8;
    uStack_b8 = uStack_55e0;
    uStack_c0 = uStack_55e8;
    uStack_a8 = uStack_55d0;
    uStack_b0 = uStack_55d8;
    uStack_118 = uStack_5640;
    uStack_120 = uStack_5648;
    uStack_108 = uStack_5630;
    uStack_110 = uStack_5638;
    uStack_f8 = uStack_5620;
    uStack_100 = uStack_5628;
    uStack_e8 = uStack_5610;
    uStack_f0 = uStack_5618;
    func_0x000104220e6c(auStack_2b68,0x17,auStack_aa8,&uStack_500,auStack_488,1,0,1,0,0x202);
    puVar2 = auStack_3620;
    puVar3 = auStack_2b68;
    uVar5 = 0xab2;
    uVar6 = uStack_2240;
    uVar7 = uStack_2238;
  }
  else {
    func_0x000107c610b4(auStack_3620,param_1,0x928);
    puVar2 = auStack_2ce8;
    puVar3 = (undefined1 *)(param_1 + 0x938);
    uVar5 = 0x17a;
  }
  func_0x000107c610b4(puVar2,puVar3,uVar5);
  func_0x000101794aec(uVar6,uVar7);
  FUN_1018b34c0(param_1,auStack_40d8,0x112dcbc88,&UNK_10d98e360);
  uVar5 = uVar6;
  uVar4 = uVar7;
  func_0x0001018adb20(uVar6,uVar7,param_2,param_3);
  FUN_1018b10a4(uVar6,uVar7);
  func_0x000107c610b4(auStack_1050,auStack_3618,0x5a8);
  FUN_1018ae1c0(auStack_20b0,auStack_1050,uVar5,uVar4,param_2,param_3);
  FUN_1018b10a4(uVar6,uVar7);
  uStack_2cf8 = uVar5;
  uStack_2cf0 = uVar4;
  func_0x0001018b3508(auStack_20b0,auStack_3618,0x112dcbd00,&UNK_10d98e550);
  func_0x000107c610b4(&uStack_5648,auStack_3620,0xab2);
  func_0x000107c610b4(auStack_4b90,auStack_3620,0xab2);
  func_0x00010178e4a0(auStack_4b90);
  func_0x000107c610b4(auStack_40d8,auStack_3620,0xab2);
  FUN_101795250(&uStack_5648,auStack_6100);
  func_0x00010179528c(auStack_40d8);
  func_0x000107c610b4(extraout_x8,auStack_4b90,0xab2);
  return;
}



/* Entry: 1018ae1c0; end: 1018af237;  */

void FUN_1018ae1c0(undefined8 *param_1,ulong param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar11;
  long extraout_x12;
  long unaff_x20;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_40f0;
  undefined1 auStack_40e8 [8];
  long lStack_40e0;
  undefined1 auStack_40d8 [8];
  undefined8 auStack_40d0 [3];
  undefined4 auStack_40b8 [2];
  long alStack_40b0 [6];
  undefined2 auStack_4080 [4];
  undefined8 auStack_4078 [2];
  undefined1 auStack_4068 [8];
  undefined8 uStack_4060;
  undefined2 auStack_4058 [4];
  long lStack_4050;
  undefined1 auStack_4048 [8];
  undefined8 auStack_4040 [6];
  undefined1 auStack_4010 [8];
  undefined8 uStack_4008;
  undefined1 auStack_4000 [8];
  undefined8 uStack_3ff8;
  undefined1 auStack_3ff0 [8];
  long alStack_3fe8 [5];
  undefined1 auStack_3fc0 [8];
  long alStack_3fb8 [5];
  undefined1 auStack_3f90 [8];
  undefined8 auStack_3f88 [2];
  undefined1 auStack_3f78 [8];
  undefined8 auStack_3f70 [2];
  undefined1 auStack_3f60 [8];
  undefined8 auStack_3f58 [5];
  undefined8 uStack_3f30;
  long lStack_3f28;
  undefined8 uStack_3f20;
  undefined8 uStack_3f18;
  long lStack_3f10;
  undefined8 uStack_3f08;
  long lStack_3f00;
  undefined8 uStack_3ef8;
  long lStack_3ee8;
  long lStack_3ee0;
  ulong uStack_3ed8;
  ulong uStack_3ed0;
  undefined8 uStack_3ec0;
  undefined8 uStack_3eb0;
  undefined8 uStack_3ea8;
  undefined8 uStack_3e98;
  undefined8 uStack_3e90;
  undefined8 uStack_3e88;
  undefined8 uStack_3e80;
  undefined8 uStack_3e78;
  undefined8 uStack_3e70;
  undefined8 uStack_3e68;
  undefined8 uStack_3e60;
  undefined8 uStack_3e58;
  undefined8 uStack_3e50;
  undefined8 uStack_3e48;
  undefined8 uStack_3e40;
  undefined8 uStack_3e38;
  undefined8 uStack_3e27;
  undefined8 uStack_38f0;
  undefined8 uStack_38e8;
  undefined8 uStack_38e0;
  undefined8 uStack_38d8;
  undefined8 uStack_38d0;
  undefined8 uStack_38c8;
  undefined8 uStack_38c0;
  undefined8 uStack_38b8;
  undefined8 uStack_38b0;
  undefined8 uStack_38a8;
  undefined8 uStack_38a0;
  long lStack_3898;
  undefined8 uStack_3890;
  undefined2 uStack_3888;
  undefined6 uStack_3886;
  undefined2 uStack_3880;
  undefined6 uStack_387e;
  undefined1 auStack_3878 [1328];
  undefined8 uStack_3348;
  undefined8 uStack_3340;
  undefined8 uStack_3338;
  undefined8 uStack_3330;
  undefined8 uStack_3328;
  undefined8 uStack_3320;
  undefined8 uStack_3318;
  undefined8 uStack_3310;
  undefined8 uStack_3308;
  undefined8 uStack_3300;
  undefined8 uStack_32f8;
  ulong uStack_32f0;
  undefined8 uStack_32e8;
  undefined8 uStack_32e0;
  undefined8 uStack_32d8;
  undefined8 uStack_32d0;
  undefined1 uStack_32c8;
  undefined8 uStack_2da0;
  undefined8 uStack_2d98;
  undefined8 uStack_2d90;
  undefined8 uStack_2d88;
  undefined8 uStack_2d80;
  undefined8 uStack_2d78;
  undefined8 uStack_2d70;
  undefined8 uStack_2d68;
  undefined8 uStack_2d60;
  undefined8 uStack_2d58;
  undefined8 uStack_2d50;
  long lStack_2d48;
  undefined8 uStack_2d40;
  undefined8 uStack_2d38;
  undefined8 uStack_2d30;
  undefined8 uStack_2d28;
  undefined8 uStack_2d20;
  undefined1 auStack_27f0 [192];
  undefined8 uStack_2730;
  long lStack_2728;
  undefined8 uStack_2720;
  undefined8 uStack_2718;
  long lStack_2710;
  undefined8 uStack_2708;
  undefined8 uStack_2700;
  long lStack_26f8;
  undefined8 uStack_26f0;
  undefined8 uStack_26e8;
  undefined8 uStack_26e0;
  undefined8 uStack_26d8;
  undefined8 uStack_26d0;
  long lStack_26c8;
  long lStack_26c0;
  undefined8 uStack_26b8;
  undefined1 uStack_26b0;
  undefined8 uStack_22c0;
  undefined8 uStack_22b8;
  undefined8 uStack_22b0;
  undefined8 uStack_22a8;
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  undefined8 uStack_2270;
  undefined8 uStack_2260;
  long lStack_2258;
  undefined8 uStack_2250;
  undefined8 uStack_2248;
  long lStack_2240;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  long lStack_2228;
  undefined8 uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  long lStack_21f8;
  long lStack_21f0;
  undefined8 uStack_21e8;
  undefined1 uStack_21e0;
  undefined8 uStack_21d0;
  long lStack_21c8;
  undefined8 uStack_21c0;
  undefined8 uStack_21b8;
  long lStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  long lStack_2198;
  undefined8 uStack_2190;
  undefined8 uStack_2188;
  undefined8 uStack_2180;
  undefined8 uStack_2178;
  undefined8 uStack_2170;
  long lStack_2168;
  long lStack_2160;
  undefined8 uStack_2158;
  undefined1 uStack_2150;
  undefined8 uStack_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined1 auStack_20c8 [1328];
  byte abStack_1b98 [1448];
  undefined8 uStack_15f0;
  long lStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  long lStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  long lStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  long lStack_1588;
  long lStack_1580;
  undefined8 uStack_1578;
  undefined1 uStack_1570;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1038;
  undefined8 uStack_f10;
  long lStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  long lStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  long lStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  long lStack_ea8;
  long lStack_ea0;
  undefined8 uStack_e98;
  undefined1 uStack_e90;
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
  long lStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
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
  ulong uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined1 uStack_990;
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
  undefined8 uStack_90f;
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
  long lStack_8a8;
  undefined8 uStack_8a0;
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
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined2 uStack_730;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined2 uStack_6e0;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
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
  undefined1 auStack_640 [1328];
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_c0 = param_1[10];
  uStack_3ed0 = param_1[0xb];
  uVar21 = param_1[0xc];
  uStack_3eb0 = param_1[0xd];
  uStack_3ea8 = param_1[0xe];
  uStack_3ed8 = param_2;
  func_0x000107c610b4(auStack_640,param_1 + 0xf,0x530);
  lVar12 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&uStack_3f30 - extraout_x8_00;
  lVar4 = 0;
  func_0x0001046d90b0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar18 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar18 - extraout_x12;
  FUN_1018b34c0(param_5,lVar15,0x112dcbcf8,&UNK_10d98e3f0);
  lVar12 = lVar15;
  (**(code **)(lVar13 + 0x30))(lVar15,1,lVar4);
  if ((int)lVar12 == 1) {
    FUN_1018b35cc(lVar15,0x112dcbcf8,&UNK_10d98e3f0);
    FUN_1018b34c0(param_1,&uStack_1048,0x112dcbd00,&UNK_10d98e550);
    uStack_678 = uStack_e8;
    uStack_680 = uStack_f0;
    uStack_668 = uStack_d8;
    uStack_670 = uStack_e0;
    uStack_658 = uStack_c8;
    uStack_660 = uStack_d0;
    uStack_650 = uStack_c0;
    uStack_698 = uStack_108;
    uStack_6a0 = uStack_110;
    uStack_688 = uStack_f8;
    uStack_690 = uStack_100;
    func_0x000107c610b4(&uStack_3e98,auStack_640,0x530);
    uStack_32f0 = uStack_3ed0;
    goto LAB_1018af1a8;
  }
  func_0x0001018a91ac(lVar15,lVar20);
  func_0x000101541068(lVar20,uVar18);
  func_0x0001047c6864(0);
  func_0x000107c610f8();
  func_0x0001047c2b40();
  uVar7 = uVar18;
  func_0x000107c49f38();
  if ((uVar7 & 1) == 0) {
    func_0x0001000d224c(&uStack_15f0);
    uVar16 = uStack_15f0;
    func_0x0001000d224c(&uStack_1048);
    uVar22 = uStack_1048;
    piVar5 = param_4;
    FUN_10189d320(param_4,uVar16,uStack_1048,uStack_1040);
    func_0x000107c615e8(uVar16);
    func_0x000107c615e8(uVar22);
    if (((ulong)piVar5 & 1) == 0) {
      func_0x0001018abbc4(lVar20);
      FUN_1018b34c0(param_1,&uStack_1048,0x112dcbd00,&UNK_10d98e550);
      func_0x000107c61170(uVar18);
      uStack_678 = uStack_e8;
      uStack_680 = uStack_f0;
      uStack_668 = uStack_d8;
      uStack_670 = uStack_e0;
      uStack_658 = uStack_c8;
      uStack_660 = uStack_d0;
      uStack_650 = uStack_c0;
      uStack_698 = uStack_108;
      uStack_6a0 = uStack_110;
      uStack_688 = uStack_f8;
      uStack_690 = uStack_100;
      func_0x000107c610b4(&uStack_3e98,auStack_640,0x530);
      uStack_32f0 = uStack_3ed0;
      goto LAB_1018af1a8;
    }
  }
  func_0x0001000d224c(&uStack_15f0);
  lVar12 = lStack_15e8;
  uVar21 = uStack_15f0;
  uVar16 = uStack_15f0;
  func_0x000107c614f0(uStack_15f0);
  uStack_1048 = 0xd000000000000027;
  uStack_1040 = 0x800000010efbc520;
  uStack_1038 = 0;
  (**(code **)(lVar12 + 8))
            (abStack_1b98,&uStack_1048,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar16,lVar12);
  func_0x000107c615e8(uVar21);
  if (((abStack_1b98[0] & 1) == 0) && (uVar7 = uVar18, func_0x000107c49f38(), (uVar7 & 1) == 0)) {
    bVar2 = param_4[0xc] == 0x16;
  }
  else {
    bVar2 = true;
  }
  puVar9 = param_1;
  func_0x000107c610b4(&uStack_1048,param_1,0x5a8);
  iVar3 = (int)&uStack_1048;
  FUN_10189c838();
  if (iVar3 == 1) {
    func_0x000101895d08(&uStack_15f0);
    lStack_2168 = lStack_1588;
    uStack_2170 = uStack_1590;
    uStack_2158 = uStack_1578;
    lStack_2160 = lStack_1580;
    uStack_2150 = uStack_1570;
    uStack_21a8 = uStack_15c8;
    lStack_21b0 = lStack_15d0;
    lStack_2198 = lStack_15b8;
    uStack_21a0 = uStack_15c0;
    uStack_2188 = uStack_15a8;
    uStack_2190 = uStack_15b0;
    uStack_2178 = uStack_1598;
    uStack_2180 = uStack_15a0;
    lStack_21c8 = lStack_15e8;
    uStack_21d0 = uStack_15f0;
    uStack_21b8 = uStack_15d8;
    uStack_21c0 = uStack_15e0;
  }
  else {
    uStack_2178 = uStack_eb8;
    uStack_2180 = uStack_ec0;
    lStack_2168 = lStack_ea8;
    uStack_2170 = uStack_eb0;
    uStack_2158 = uStack_e98;
    lStack_2160 = lStack_ea0;
    uStack_21b8 = uStack_ef8;
    uStack_21c0 = uStack_f00;
    uStack_21a8 = uStack_ee8;
    lStack_21b0 = lStack_ef0;
    lStack_2198 = lStack_ed8;
    uStack_21a0 = uStack_ee0;
    uStack_2188 = uStack_ec8;
    uStack_2190 = uStack_ed0;
    uStack_2150 = uStack_e90;
    lStack_21c8 = lStack_f08;
    uStack_21d0 = uStack_f10;
  }
  lVar12 = *(long *)(unaff_x20 + 0xa0);
  uStack_3ed0 = uVar18;
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar16 = 0;
    puVar19 = (undefined8 *)0x0;
    uVar21 = 0;
    puVar6 = puVar19;
    puVar17 = (undefined8 *)0x0;
    if (*param_4 != 0xd) goto LAB_1018ae924;
LAB_1018ae71c:
    puVar6 = puVar17;
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(uVar21);
    func_0x000107c6142c(puVar19);
LAB_1018ae938:
    func_0x000107c6142c(puVar6);
    uStack_2208 = uStack_2178;
    uStack_2210 = uStack_2180;
    lStack_21f8 = lStack_2168;
    uStack_2200 = uStack_2170;
    uStack_21e8 = uStack_2158;
    lStack_21f0 = lStack_2160;
    uStack_21e0 = uStack_2150;
    uStack_2248 = uStack_21b8;
    uStack_2250 = uStack_21c0;
    uStack_2238 = uStack_21a8;
    lStack_2240 = lStack_21b0;
    lStack_2228 = lStack_2198;
    uStack_2230 = uStack_21a0;
    uStack_2218 = uStack_2188;
    uStack_2220 = uStack_2190;
    lStack_2258 = lStack_21c8;
    uStack_2260 = uStack_21d0;
  }
  else {
    puVar17 = *(undefined8 **)(lVar12 + 0x20);
    puVar19 = *(undefined8 **)(lVar12 + 0x28);
    lVar4 = *(long *)(lVar12 + 0x38);
    func_0x000107c61434(puVar17);
    func_0x000107c61434(puVar19);
    if (lVar4 == 0) {
      uVar21 = 0;
LAB_1018ae6f0:
      uVar16 = *(undefined8 *)(lVar12 + 0x60);
      func_0x000107c61434(uVar16);
    }
    else {
      uVar16 = *(undefined8 *)(lVar12 + 0x50);
      uVar22 = *(undefined8 *)(lVar12 + 0x58);
      puVar6 = *(undefined8 **)(lVar12 + 0x40);
      uVar21 = *(undefined8 *)(lVar12 + 0x48);
      puVar9 = puVar6;
      FUN_1018b33cc(lVar4,puVar6,uVar21,uVar16,uVar22);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(lVar4);
      lVar12 = *(long *)(unaff_x20 + 0xa0);
      if (*(long *)(lVar12 + 0x10) != 0) goto LAB_1018ae6f0;
      uVar16 = 0;
    }
    if (*param_4 == 0xd) goto LAB_1018ae71c;
    puVar6 = puVar19;
    if (puVar17 == (undefined8 *)0x0) {
LAB_1018ae924:
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(uVar21);
      goto LAB_1018ae938;
    }
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar11 = (undefined8 *)((undefined8 *)((ulong)puVar17 & 0xffffffffffffff8))[2];
    }
    else {
      puVar11 = puVar17;
      if (-1 < (long)puVar17) {
        puVar11 = (undefined8 *)((ulong)puVar17 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    if (puVar11 == (undefined8 *)0x0) {
      func_0x000107c6142c(puVar17);
      goto LAB_1018ae924;
    }
    iVar3 = (int)&uStack_21d0;
    FUN_10187bbec();
    if (iVar3 == 1) {
      uStack_3f18 = 0;
      uStack_3f20 = 0;
      uStack_3ec0 = 0;
      lStack_3ee8 = 0;
      uStack_3ef8 = 0;
      lStack_3f00 = 0;
      lVar12 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      lVar4 = 0;
    }
    else {
      uStack_3ef8 = uStack_2190;
      lStack_3f00 = lStack_2198;
      uStack_3f18 = uStack_21a0;
      uStack_3f20 = uStack_21a8;
      lStack_3ee8 = lStack_2168;
      uStack_3ec0 = uStack_2158;
      lVar12 = lStack_21c8;
      uVar22 = uStack_21d0;
      uVar23 = uStack_2170;
      uVar24 = uStack_2178;
      uVar25 = uStack_2180;
      uVar26 = uStack_2188;
      uVar27 = uStack_21b8;
      lVar4 = lStack_2160;
    }
    puVar9 = puVar19;
    func_0x00010189e3d4(&uStack_15f0,puVar17,puVar19,uVar21,uVar16);
    lStack_3f28 = lStack_15d0;
    uStack_3f30 = uStack_15d8;
    uStack_3f08 = uStack_15e0;
    lStack_3f10 = lStack_15e8;
    func_0x000107c6142c(puVar17);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(uVar21);
    func_0x000107c6142c(puVar19);
    if (bVar2) {
      uStack_15c8 = uStack_3f08;
      lStack_15b8 = lStack_3f28;
      uStack_15c0 = uStack_3f30;
    }
    else {
      uStack_15c0 = uStack_3f18;
      uStack_15c8 = uStack_3f20;
      lStack_15b8 = lStack_3f00;
    }
    uStack_15b0 = uStack_3ef8;
    lStack_15d0 = lStack_3f10;
    uStack_15e0 = uStack_15f0;
    lStack_1588 = lStack_3ee8;
    uStack_1578 = uStack_3ec0;
    uStack_15f0 = uVar22;
    lStack_15e8 = lVar12;
    uStack_15d8 = uVar27;
    uStack_15a8 = uVar26;
    uStack_15a0 = uVar25;
    uStack_1598 = uVar24;
    uStack_1590 = uVar23;
    lStack_1580 = lVar4;
    func_0x00010187bc08(&uStack_15f0);
    uStack_2208 = uStack_1598;
    uStack_2210 = uStack_15a0;
    lStack_21f8 = lStack_1588;
    uStack_2200 = uStack_1590;
    uStack_21e8 = uStack_1578;
    lStack_21f0 = lStack_1580;
    uStack_2248 = uStack_15d8;
    uStack_2250 = uStack_15e0;
    uStack_2238 = uStack_15c8;
    lStack_2240 = lStack_15d0;
    lStack_2228 = lStack_15b8;
    uStack_2230 = uStack_15c0;
    uStack_2218 = uStack_15a8;
    uStack_2220 = uStack_15b0;
    uStack_21e0 = uStack_1570;
    lStack_2258 = lStack_15e8;
    uStack_2260 = uStack_15f0;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0xa0) + 0x10);
  lVar12 = lVar20;
  if (lVar4 == 0) {
LAB_1018aeb3c:
    uVar14 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)(unaff_x20 + 0xa0) + lVar4 * 0x48 + -0x28);
    lStack_3ee0 = lVar20;
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar19 = *(undefined8 **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined8 *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar17) {
        puVar19 = puVar17;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(puVar17);
    if (puVar19 != (undefined8 *)0x0) {
      uVar18 = 0;
      do {
        if (((ulong)puVar17 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018af220);
            (*pcVar1)();
          }
          uVar7 = puVar17[uVar18 + 4];
          func_0x000107c61174();
          puVar6 = puVar9;
        }
        else {
          uVar7 = uVar18;
          puVar6 = puVar17;
          FUN_101887b4c();
        }
        puVar11 = (undefined8 *)(uVar18 + 1);
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018af21c);
          (*pcVar1)();
        }
        uVar8 = uVar7;
        FUN_1018b360c();
        if ((uVar8 == 0x414742) && (puVar6 == (undefined8 *)0xe300000000000000)) {
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(puVar17);
          puVar17 = (undefined8 *)0xe300000000000000;
LAB_1018aeab0:
          func_0x000107c6142c(puVar17);
          func_0x000107c610b4(&uStack_15f0,param_1,0x5a8);
          iVar3 = (int)&uStack_15f0;
          FUN_10189c838();
          lVar13 = lStack_1580;
          lVar4 = lStack_1588;
          lVar12 = lStack_3ee0;
          if ((iVar3 == 1) || (lStack_1580 == 0)) {
            lVar4 = 0;
            lVar13 = -0x2000000000000000;
          }
          else {
            func_0x000107c61434(lStack_1580);
            if ((lVar13 == -0x15ffffffffffbbb2) && (lVar4 == 0x554f52474b434142)) {
              func_0x000107c6142c(0xea0000000000444e);
              goto LAB_1018aeb3c;
            }
          }
          func_0x000107c605b8(lVar4,lVar13,0x554f52474b434142,0xea0000000000444e,0);
          func_0x000107c6142c(lVar13);
          uVar14 = (uint)lVar4 ^ 1;
          goto LAB_1018aeb74;
        }
        puVar9 = puVar6;
        func_0x000107c605b8();
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(uVar7);
        if ((uVar8 & 1) != 0) goto LAB_1018aeab0;
        uVar18 = uVar18 + 1;
      } while (puVar11 != puVar19);
    }
    func_0x000107c6142c(puVar17);
    uVar14 = 0;
    lVar12 = lStack_3ee0;
  }
LAB_1018aeb74:
  func_0x000107c610b4(abStack_1b98,param_1,0x5a8);
  iVar3 = (int)abStack_1b98;
  FUN_10189c838();
  if (iVar3 == 1) {
    func_0x000101895cec(&uStack_2da0);
    lStack_a48 = lStack_2d48;
    uStack_a50 = uStack_2d50;
    uStack_a38 = uStack_2d38;
    uStack_a40 = uStack_2d40;
    uStack_a28 = uStack_2d28;
    uStack_a30 = uStack_2d30;
    uStack_a20 = uStack_2d20;
    uStack_a88 = uStack_2d88;
    uStack_a90 = uStack_2d90;
    uStack_a78 = uStack_2d78;
    uStack_a80 = uStack_2d80;
    uStack_a68 = uStack_2d68;
    uStack_a70 = uStack_2d70;
    uStack_a58 = uStack_2d58;
    uStack_a60 = uStack_2d60;
    uStack_a98 = uStack_2d98;
    uStack_aa0 = uStack_2da0;
    func_0x000101895d08(&uStack_3348);
    uStack_9b8 = uStack_32f0;
    uStack_9c0 = uStack_32f8;
    uStack_9a8 = uStack_32e0;
    uStack_9b0 = uStack_32e8;
    uStack_998 = uStack_32d0;
    uStack_9a0 = uStack_32d8;
    uStack_9f8 = uStack_3330;
    uStack_a00 = uStack_3338;
    uStack_9e8 = uStack_3320;
    uStack_9f0 = uStack_3328;
    uStack_9d8 = uStack_3310;
    uStack_9e0 = uStack_3318;
    uStack_9c8 = uStack_3300;
    uStack_9d0 = uStack_3308;
    uStack_990 = uStack_32c8;
    uStack_a08 = uStack_3340;
    uStack_a10 = uStack_3348;
    func_0x0001018797b4(&uStack_3e98);
    uStack_938 = uStack_3e50;
    uStack_940 = uStack_3e58;
    uStack_928 = uStack_3e40;
    uStack_930 = uStack_3e48;
    uStack_920 = uStack_3e38;
    uStack_90f = uStack_3e27;
    uStack_978 = uStack_3e90;
    uStack_980 = uStack_3e98;
    uStack_968 = uStack_3e80;
    uStack_970 = uStack_3e88;
    uStack_958 = uStack_3e70;
    uStack_960 = uStack_3e78;
    uStack_948 = uStack_3e60;
    uStack_950 = uStack_3e68;
    func_0x000101895d28(&uStack_38f0);
    uStack_8b8 = uStack_38a8;
    uStack_8c0 = uStack_38b0;
    lStack_8a8 = lStack_3898;
    uStack_8b0 = uStack_38a0;
    uStack_8a0 = uStack_3890;
    uStack_8f8 = uStack_38e8;
    uStack_900 = uStack_38f0;
    uStack_8e8 = uStack_38d8;
    uStack_8f0 = uStack_38e0;
    uStack_8d8 = uStack_38c8;
    uStack_8e0 = uStack_38d0;
    uStack_8c8 = uStack_38b8;
    uStack_8d0 = uStack_38c0;
    uStack_870 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_868 = 1;
    uStack_858 = 0;
    uStack_860 = 0;
    uStack_848 = 0;
    uStack_850 = 0;
    uStack_840 = 0;
    uStack_838 = 2;
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    uStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    uStack_7c8 = 0;
    uStack_7d0 = 0;
    uStack_7b8 = 0;
    uStack_7c0 = 0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    uStack_750 = 0;
    uStack_738 = 0;
    uStack_740 = 1;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6e0 = 0x100;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6b0 = 0;
    *(undefined1 *)(lVar20 + -0x30) = 0;
    *(undefined8 *)(lVar20 + -0x38) = 0;
    *(undefined8 *)(lVar20 + -0x40) = 0;
    *(undefined1 *)(lVar20 + -0x48) = 0;
    *(undefined1 *)(lVar20 + -0x60) = 1;
    *(undefined8 *)(lVar20 + -0x68) = 0;
    *(undefined8 *)(lVar20 + -0x70) = 0;
    *(undefined8 **)(lVar20 + -0x78) = &uStack_6d0;
    *(undefined8 *)(lVar20 + -0x88) = 0;
    *(undefined8 **)(lVar20 + -0x80) = &uStack_720;
    *(undefined1 *)(lVar20 + -0x90) = 0;
    *(undefined8 **)(lVar20 + -0x98) = &uStack_7a0;
    *(undefined8 **)(lVar20 + -0xa8) = &uStack_850;
    *(undefined8 **)(lVar20 + -0xa0) = &uStack_7f0;
    *(undefined1 *)(lVar20 + -0xc0) = 1;
    *(undefined8 *)(lVar20 + -200) = 0;
    *(undefined1 *)(lVar20 + -0xd0) = 1;
    *(undefined8 *)(lVar20 + -0xd8) = 0;
    *(undefined1 *)(lVar20 + -0xe0) = 1;
    *(undefined8 *)(lVar20 + -0xf8) = 0;
    *(undefined8 *)(lVar20 + -0x100) = 0;
    *(undefined8 *)(lVar20 + -0xe8) = 0;
    *(undefined8 *)(lVar20 + -0xf0) = 0;
    *(undefined8 *)(lVar20 + -0x108) = 0;
    *(undefined8 *)(lVar20 + -0x110) = 0;
    *(undefined1 *)(lVar20 + -0x118) = 0;
    *(undefined8 **)(lVar20 + -0x120) = &uStack_880;
    *(undefined2 *)(lVar20 + -0x128) = 0;
    *(undefined8 *)(lVar20 + -0x130) = 0;
    *(undefined1 *)(lVar20 + -0x138) = 0;
    *(undefined8 *)(lVar20 + -0x140) = 0;
    *(undefined8 *)(lVar20 + -0x148) = 0;
    *(undefined2 *)(lVar20 + -0x150) = 0;
    *(undefined8 *)(lVar20 + -0x158) = 0;
    *(undefined8 *)(lVar20 + -0x160) = 0;
    *(undefined8 **)(lVar20 + -0x170) = &uStack_980;
    *(undefined8 **)(lVar20 + -0x168) = &uStack_900;
    *(undefined8 *)(lVar20 + -0x180) = 3;
    *(undefined8 **)(lVar20 + -0x178) = &uStack_a10;
    *(undefined4 *)(lVar20 + -0x188) = 0;
    *(undefined8 *)(lVar20 + -400) = 0;
    *(undefined8 *)(lVar20 + -0x198) = 0;
    *(undefined8 *)(lVar20 + -0x1a0) = 0x30000000000;
    *(undefined1 *)(lVar20 + -0x1a8) = 0;
    *(undefined8 **)(lVar20 + -0x1b0) = &uStack_aa0;
    *(undefined1 *)(lVar20 + -0x1b8) = 0;
    *(undefined8 *)(lVar20 + -0x1c0) = 0;
    *(undefined8 *)(lVar20 + -0x10) = 0;
    *(undefined8 *)(lVar20 + -0x18) = 0;
    *(undefined8 *)(lVar20 + -0x20) = 0;
    *(undefined8 *)(lVar20 + -0x28) = 0;
    *(undefined8 *)(lVar20 + -0x50) = 0;
    *(undefined8 *)(lVar20 + -0x58) = 0;
    *(undefined8 *)(lVar20 + -0xb0) = 0;
    *(undefined8 *)(lVar20 + -0xb8) = 0;
    func_0x000104218d60(&uStack_2140,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    uStack_3ea8 = uStack_20d0;
    uStack_2298 = uStack_2118;
    uStack_22a0 = uStack_2120;
    uStack_2288 = uStack_2108;
    uStack_2290 = uStack_2110;
    uStack_2278 = uStack_20f8;
    uStack_2280 = uStack_2100;
    uStack_3eb0 = uStack_20d8;
    uStack_2270 = uStack_20f0;
    uStack_22b8 = uStack_2138;
    uStack_22c0 = uStack_2140;
    uStack_22a8 = uStack_2128;
    uStack_22b0 = uStack_2130;
    puVar10 = auStack_20c8;
  }
  else {
    uStack_2298 = uStack_e8;
    uStack_22a0 = uStack_f0;
    uStack_2288 = uStack_d8;
    uStack_2290 = uStack_e0;
    uStack_2278 = uStack_c8;
    uStack_2280 = uStack_d0;
    uStack_2270 = uStack_c0;
    uStack_22b8 = uStack_108;
    uStack_22c0 = uStack_110;
    uStack_22a8 = uStack_f8;
    uStack_22b0 = uStack_100;
    puVar10 = auStack_640;
  }
  func_0x000107c610b4(auStack_27f0,puVar10,0x530);
  uVar21 = 0;
  if (uStack_3ed8 < 2) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(uStack_3ed8 + 0x10);
    if (lVar4 != 0) {
      uVar21 = *(undefined8 *)(uStack_3ed8 + 0x30);
    }
  }
  FUN_1018b34c0(param_1,&uStack_2da0,0x112dcbd00,&UNK_10d98e550);
  uVar18 = uStack_3ed0;
  uVar7 = uStack_3ed0;
  func_0x000107c49f38();
  if ((int)uVar7 == 0) {
    func_0x0001018abbc4(lVar12);
    func_0x000107c61170(uVar18);
  }
  else if ((uVar14 & 1) == 0) {
    func_0x0001018abbc4(lVar12);
    func_0x000107c61170(uStack_3ed0);
  }
  else {
    func_0x000107c61170(uStack_3ed0);
    func_0x0001018abbc4(lVar12);
    func_0x000107c6142c(uStack_3ea8);
    uStack_3eb0 = 0x554f52474b434142;
    uStack_3ea8 = 0xea0000000000444e;
  }
  iVar3 = (int)&uStack_2260;
  FUN_10187bbec();
  if (iVar3 != 1) {
    uStack_26d8 = uStack_2208;
    uStack_26e0 = uStack_2210;
    lStack_26c8 = lStack_21f8;
    uStack_26d0 = uStack_2200;
    uStack_26b8 = uStack_21e8;
    lStack_26c0 = lStack_21f0;
    uStack_26b0 = uStack_21e0;
    uStack_2708 = uStack_2238;
    lStack_2710 = lStack_2240;
    lStack_26f8 = lStack_2228;
    uStack_2700 = uStack_2230;
    uStack_26e8 = uStack_2218;
    uStack_26f0 = uStack_2220;
    lStack_2728 = lStack_2258;
    uStack_2730 = uStack_2260;
    uStack_2718 = uStack_2248;
    uStack_2720 = uStack_2250;
  }
  uStack_38c8 = uStack_2298;
  uStack_38d0 = uStack_22a0;
  uStack_38b8 = uStack_2288;
  uStack_38c0 = uStack_2290;
  uStack_38a8 = uStack_2278;
  uStack_38b0 = uStack_2280;
  uStack_38e8 = uStack_22b8;
  uStack_38f0 = uStack_22c0;
  uStack_38d8 = uStack_22a8;
  uStack_38e0 = uStack_22b0;
  uStack_38a0 = uStack_2270;
  uStack_3888 = (undefined2)uStack_3eb0;
  uStack_3886 = (undefined6)((ulong)uStack_3eb0 >> 0x10);
  uStack_3880 = (undefined2)uStack_3ea8;
  uStack_387e = (undefined6)((ulong)uStack_3ea8 >> 0x10);
  lStack_3898 = lVar4;
  uStack_3890 = uVar21;
  func_0x000107c610b4(auStack_3878,auStack_27f0,0x530);
  func_0x000107c610b4(&uStack_3348,&uStack_38f0,0x5a8);
  func_0x00010178e49c(&uStack_3348);
  uStack_2d78 = uStack_2298;
  uStack_2d80 = uStack_22a0;
  uStack_2d68 = uStack_2288;
  uStack_2d70 = uStack_2290;
  uStack_2d58 = uStack_2278;
  uStack_2d60 = uStack_2280;
  uStack_2d98 = uStack_22b8;
  uStack_2da0 = uStack_22c0;
  uStack_2d88 = uStack_22a8;
  uStack_2d90 = uStack_22b0;
  uStack_2d50 = uStack_2270;
  lStack_2d48 = lVar4;
  uStack_2d40 = uVar21;
  uStack_2d38 = uStack_3eb0;
  uStack_2d30 = uStack_3ea8;
  func_0x000107c610b4(&uStack_2d28,auStack_27f0,0x530);
  func_0x00010178e37c(&uStack_38f0,&uStack_3e98);
  func_0x00010178e3b8(&uStack_2da0);
  uStack_678 = uStack_3320;
  uStack_680 = uStack_3328;
  uStack_668 = uStack_3310;
  uStack_670 = uStack_3318;
  uStack_658 = uStack_3300;
  uStack_660 = uStack_3308;
  uStack_650 = uStack_32f8;
  uStack_698 = uStack_3340;
  uStack_6a0 = uStack_3348;
  uStack_688 = uStack_3330;
  uStack_690 = uStack_3338;
  func_0x000107c610b4(&uStack_3e98,&uStack_32d0,0x530);
  uStack_3ea8 = uStack_32d8;
  uStack_3eb0 = uStack_32e0;
  uVar21 = uStack_32e8;
LAB_1018af1a8:
  extraout_x8[5] = uStack_678;
  extraout_x8[4] = uStack_680;
  extraout_x8[7] = uStack_668;
  extraout_x8[6] = uStack_670;
  extraout_x8[9] = uStack_658;
  extraout_x8[8] = uStack_660;
  extraout_x8[1] = uStack_698;
  *extraout_x8 = uStack_6a0;
  extraout_x8[3] = uStack_688;
  extraout_x8[2] = uStack_690;
  extraout_x8[10] = uStack_650;
  extraout_x8[0xb] = uStack_32f0;
  extraout_x8[0xc] = uVar21;
  extraout_x8[0xd] = uStack_3eb0;
  extraout_x8[0xe] = uStack_3ea8;
  func_0x000107c610b4(extraout_x8 + 0xf,&uStack_3e98,0x530);
  return;
}



/* Entry: 1018af238; end: 1018afaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018af238(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  ulong auStack_90 [6];
  
  lVar4 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar7 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(auStack_90);
  if (auStack_90[0] == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uStack_120 = auStack_90[0];
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = uVar6;
  func_0x000107c5fadc(uVar6,uVar16);
  if (*(long *)(param_1 + 0x20) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018af610);
    (*pcVar2)();
  }
  uVar18 = uStack_120;
  uStack_a8 = param_2;
  func_0x000107c3d32c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  func_0x00010468506c(0);
  uVar13 = uVar18;
  func_0x000107c5fc54(uVar18,uVar5);
  func_0x000107c61170(uVar18);
  uVar18 = uStack_120;
  uStack_b8 = uVar6;
  if (*(int *)(param_1 + 0x28) == 4) {
    func_0x000107c5fadc(uVar6,uVar16);
    uVar18 = uStack_120;
    uVar15 = uStack_120;
    func_0x000107c3d208();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    uVar6 = 0;
    func_0x00010467de68(0);
    uVar14 = uVar15;
    func_0x000107c5fc54(uVar15,uVar6);
    uStack_a0 = uVar14;
    func_0x000107c61170(uVar15);
    uStack_b0 = 0;
  }
  else {
    uStack_b0 = 0;
    uStack_a0 = 0;
    if (*(int *)(param_1 + 0x28) == 5) {
      func_0x000107c5fadc(uVar6,uVar16);
      uVar15 = uVar18;
      func_0x000107c3d2bc();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      uVar6 = 0;
      func_0x000104681c70(0);
      uStack_b0 = uVar15;
      func_0x000107c5fc54(uVar15,uVar6);
      func_0x000107c61170(uVar15);
      uStack_a0 = 0;
    }
  }
  FUN_10189d3f0(auStack_90,uVar18,param_1);
  func_0x000101541068(uStack_a8,puVar7);
  func_0x0001047c6864(0);
  func_0x000107c610f8();
  func_0x0001047c2b40();
  puVar8 = puVar7;
  func_0x000107c49f38();
  func_0x000107c61170(puVar7);
  if ((int)puVar8 != 0) {
    func_0x0001000d224c(&puStack_98);
    puVar11 = puStack_98;
    puVar12 = puStack_98;
    func_0x000107c4260c();
    func_0x000107c615e8(puVar11);
    if ((int)puVar12 != 0) {
      uVar18 = uStack_b8;
      func_0x000107c5fadc(uStack_b8,uVar16);
      uVar15 = uStack_120;
      func_0x000107c497e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      uVar6 = 0;
      func_0x00010468314c(0);
      uVar18 = uVar15;
      func_0x000107c5fc54(uVar15,uVar6);
      func_0x000107c61170(uVar15);
      goto LAB_1018af4ec;
    }
  }
  uVar18 = 0;
LAB_1018af4ec:
  uVar15 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar15 + 0x10);
  }
  else {
    uVar14 = uVar15;
    if (0x7fffffffffffffff < uVar13) {
      uVar14 = uVar13;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar19 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018af60c);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(uVar13 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = uVar19;
          FUN_101887b4c(uVar19,uVar13);
        }
        uVar1 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018af608);
          (*pcVar2)();
        }
        iVar3 = (int)*(undefined8 *)(uVar9 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar3 == 3) break;
        func_0x000107c61170(uVar9);
        uVar19 = uVar19 + 1;
        if (uVar1 == uVar14) goto LAB_1018af62c;
      }
      puVar12 = puVar11;
      func_0x000107c61558();
      uStack_a8 = uVar18;
      puStack_98 = puVar11;
      if (((ulong)puVar12 & 1) == 0) {
        func_0x0001018ad018(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar18 = *(ulong *)(puStack_98 + 0x10);
      if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar18) {
        func_0x0001018ad018(1 < *(ulong *)(puStack_98 + 0x18),uVar18 + 1,1);
      }
      *(ulong *)(puStack_98 + 0x10) = uVar18 + 1;
      *(ulong *)(puStack_98 + uVar18 * 8 + 0x20) = uVar9;
      uVar19 = uVar1;
      uVar18 = uStack_a8;
      puVar11 = puStack_98;
    } while (uVar1 != uVar14);
  }
LAB_1018af62c:
  if (((long)puVar11 < 0) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
    puVar12 = puVar11;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar11 + 0x10);
  }
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61574(puVar11);
    func_0x000107c6142c(uVar18);
    FUN_1018b35cc(auStack_90,0x112dce0c8,&UNK_10d990600);
    func_0x000107c615e8(uStack_120);
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(uStack_a0);
    func_0x000107c6142c(uStack_b0);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar13;
    func_0x0001018b1200();
    func_0x000107c6142c(uVar13);
    uVar13 = uStack_b0;
    uVar14 = uStack_b0;
    func_0x0001018b2c7c(uStack_b0,puVar11,0x101887ce8,&DAT_11308bea0,0x1018a64a0,0x1018aceac);
    func_0x000107c6142c(uVar13);
    uVar13 = uStack_a0;
    uVar19 = uStack_a0;
    func_0x0001018b2c7c(uStack_a0,puVar11,FUN_101888370,&DAT_11308bcb0,0x1018a64c4,0x1018acee0);
    func_0x000107c6142c(uVar13);
    puVar10 = auStack_90;
    func_0x0001018b18e4(puVar10,puVar11);
    FUN_1018b35cc(auStack_90,0x112dce0c8,&UNK_10d990600);
    uVar13 = uVar18;
    func_0x0001018b2c7c(uVar18,puVar11,0x101888020,&DAT_11308bf78,FUN_1018a662c,0x1018acf48);
    func_0x000107c61574(puVar11);
    func_0x000107c6142c(uVar18);
    uStack_b8 = *(ulong *)(uVar15 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_128 = uVar15;
    uStack_110 = uVar13;
    puStack_108 = puVar10;
    uStack_100 = uVar19;
    uStack_f8 = uVar14;
    if (uStack_b8 != 0) {
      uVar18 = 0;
      uStack_c0 = *(ulong *)(uVar14 + 0x10);
      uStack_c8 = *(ulong *)(uVar19 + 0x10);
      lStack_e0 = uVar15 + 0x20;
      lStack_e8 = uVar14 + 0x20;
      uStack_d0 = puVar10[2];
      lStack_f0 = uVar19 + 0x20;
      lStack_118 = uVar13 + 0x20;
      uStack_d8 = *(ulong *)(uVar13 + 0x10);
      puVar10 = puVar10 + 8;
      do {
        if (uVar18 < uStack_c0) {
          if (*(ulong *)(uStack_f8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018afa14);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(lStack_e8 + uVar18 * 8);
          if (uVar13 >> 0x3e == 0) {
            uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar15 = uVar13 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar13) {
              uVar15 = uVar13;
            }
            func_0x000107c60480();
          }
          if (uVar15 == 0) goto LAB_1018af7fc;
          uVar6 = *(undefined8 *)(lStack_e8 + uVar18 * 8);
          func_0x000107c61434(uVar6);
        }
        else {
LAB_1018af7fc:
          uVar6 = 0;
        }
        if (uVar18 < uStack_c8) {
          if (*(ulong *)(uStack_100 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018afa18);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(lStack_f0 + uVar18 * 8);
          if (uVar13 >> 0x3e == 0) {
            uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar15 = uVar13 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar13) {
              uVar15 = uVar13;
            }
            func_0x000107c60480();
          }
          if (uVar15 == 0) goto LAB_1018af860;
          uVar16 = *(undefined8 *)(lStack_f0 + uVar18 * 8);
          func_0x000107c61434(uVar16);
        }
        else {
LAB_1018af860:
          uVar16 = 0;
        }
        if (uVar18 < uStack_d0) {
          if (puStack_108[2] <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018afa1c);
            (*pcVar2)();
          }
          uVar13 = puVar10[-4];
          uVar14 = puVar10[-3];
          uVar15 = puVar10[-2];
          uVar19 = puVar10[-1];
          uVar9 = *puVar10;
          FUN_1018b33cc(uVar13,uVar14,uVar15,uVar19,uVar9);
        }
        else {
          uVar13 = 0;
          uVar14 = 0;
          uVar15 = 0;
          uVar19 = 0;
          uVar9 = 0;
        }
        uStack_b0 = uVar9;
        uStack_a8 = uVar19;
        uStack_a0 = uVar15;
        if (uVar18 < uStack_d8) {
          if (*(ulong *)(uStack_110 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018afa20);
            (*pcVar2)();
          }
          uVar5 = *(undefined8 *)(lStack_118 + uVar18 * 8);
          func_0x000107c61434(uVar5);
        }
        else {
          uVar5 = 0;
        }
        uVar17 = *(undefined8 *)(lStack_e0 + uVar18 * 8);
        func_0x000107c61434(uVar17);
        puVar12 = puVar11;
        func_0x000107c61558();
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1018a6780(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          puVar11 = puVar12;
        }
        uVar15 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar15) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1018a6780(puVar11,uVar15 + 1,1);
        }
        uVar18 = uVar18 + 1;
        *(ulong *)(puVar11 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar11 + uVar15 * 0x48 + 0x20) = uVar17;
        *(undefined8 *)(puVar11 + uVar15 * 0x48 + 0x28) = uVar6;
        *(undefined8 *)(puVar11 + uVar15 * 0x48 + 0x30) = uVar16;
        *(ulong *)(puVar11 + uVar15 * 0x48 + 0x38) = uVar13;
        *(ulong *)(puVar11 + uVar15 * 0x48 + 0x40) = uVar14;
        *(ulong *)(puVar11 + uVar15 * 0x48 + 0x48) = uStack_a0;
        *(ulong *)(puVar11 + uVar15 * 0x48 + 0x50) = uStack_a8;
        *(ulong *)(puVar11 + uVar15 * 0x48 + 0x58) = uStack_b0;
        *(undefined8 *)(puVar11 + uVar15 * 0x48 + 0x60) = uVar5;
        puVar10 = puVar10 + 5;
      } while (uStack_b8 != uVar18);
    }
    func_0x000107c6142c(puStack_108);
    func_0x000107c6142c(uStack_110);
    func_0x000107c615e8(uStack_120);
    func_0x000107c6142c(uStack_128);
    func_0x000107c6142c(uStack_f8);
    func_0x000107c6142c(uStack_100);
  }
  return puVar11;
}



/* Entry: 1018afaa4; end: 1018b09a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018afaa4(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar19;
  undefined1 uVar20;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long alStack_25f0 [2];
  undefined1 auStack_25e0 [16];
  undefined8 uStack_25d0;
  undefined8 uStack_25c8;
  undefined8 uStack_25c0;
  undefined8 uStack_25b8;
  ulong uStack_25b0;
  ulong uStack_25a8;
  undefined8 uStack_25a0;
  undefined **ppuStack_2598;
  undefined8 uStack_2590;
  long lStack_2588;
  long lStack_2580;
  ulong uStack_2578;
  long lStack_2570;
  undefined8 uStack_2568;
  undefined *puStack_2550;
  undefined8 uStack_2548;
  undefined8 uStack_2540;
  undefined *puStack_2538;
  long lStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  undefined8 uStack_2518;
  undefined8 uStack_2510;
  undefined8 uStack_2508;
  undefined8 uStack_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  undefined8 uStack_24e8;
  undefined8 uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined8 uStack_24b0;
  undefined8 uStack_249f;
  undefined8 uStack_2240;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined8 uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  undefined8 uStack_21d8;
  undefined8 uStack_21d0;
  undefined8 uStack_21c8;
  undefined8 uStack_21c0;
  undefined8 uStack_21b8;
  undefined8 uStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_218f;
  undefined1 auStack_1f30 [192];
  undefined *puStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined *puStack_1e58;
  long lStack_1e50;
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
  undefined8 uStack_1dbf;
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
  undefined8 uStack_1d48;
  undefined8 uStack_1d40;
  undefined8 uStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1cf7;
  undefined8 uStack_1ce8;
  undefined *puStack_1ce0;
  undefined1 auStack_1cd8 [24];
  long lStack_1cc0;
  long lStack_1cb0;
  long lStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  long lStack_1c90;
  undefined8 uStack_1c88;
  undefined8 uStack_1c80;
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined1 uStack_1c58;
  undefined7 uStack_1c57;
  undefined1 uStack_1c50;
  undefined8 uStack_1c4f;
  undefined1 auStack_1c40 [776];
  undefined *apuStack_1938 [97];
  long lStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  long lStack_1618;
  undefined **ppuStack_1610;
  long lStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  long lStack_15e8;
  undefined **ppuStack_15e0;
  long lStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  long lStack_15b8;
  undefined **ppuStack_15b0;
  undefined1 auStack_15a8 [776];
  undefined1 auStack_12a0 [776];
  undefined1 auStack_f98 [776];
  undefined1 auStack_c90 [112];
  undefined *puStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined *puStack_c08;
  long lStack_c00;
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
  undefined8 uStack_b6f;
  undefined *puStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined *puStack_b48;
  long lStack_b40;
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
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_aaf;
  undefined *puStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined *puStack_7f8;
  long lStack_7f0;
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
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_75f;
  undefined1 auStack_748 [24];
  undefined *apuStack_730 [102];
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
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined1 auStack_388 [792];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = 0;
  uStack_25a0 = param_4;
  uStack_2590 = extraout_x8;
  uStack_2568 = param_2;
  func_0x0001046d90b0();
  lVar29 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar29 + 0x40));
  lVar25 = (long)&uStack_25d0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar25 - extraout_x12;
  lVar27 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar22 - extraout_x8_01;
  FUN_1018b34c0(param_5,lVar24,0x112dcbcf8,&UNK_10d98e3f0);
  uVar16 = 1;
  lVar27 = lVar24;
  (**(code **)(lVar29 + 0x30))(lVar24,1,lVar7);
  if ((int)lVar27 == 1) {
    lStack_2570 = 0;
    lStack_2580 = 0;
    lVar25 = lVar27;
  }
  else {
    func_0x0001018a91ac(lVar24,lVar22);
    func_0x000101541068(lVar22,lVar25);
    uVar16 = 0;
    func_0x0001047c6864();
    func_0x000107c610f8();
    func_0x0001047c2b40();
    func_0x0001018abbc4(lVar22);
    lStack_2580 = lVar25;
    func_0x000107c3fd70();
    func_0x000107c61180();
    if (lVar25 == 0) {
      lStack_2570 = 0;
    }
    else {
      lVar27 = lVar25;
      func_0x000107c49820();
      lStack_2570 = lVar27;
      func_0x000107c61170();
    }
  }
  iVar26 = (int)uStack_2568;
  if ((iVar26 == 9) || (iVar26 == 3)) {
    lVar25 = *(long *)(unaff_x20 + 0x10);
    lVar7 = 0;
    func_0x0001018bab54();
    lVar27 = lVar7;
    func_0x000107c613fc();
    *(undefined **)(lVar27 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(lVar27 + 0xa0) = 0;
    *(undefined8 *)(lVar27 + 0x98) = 0;
    *(undefined8 *)(lVar27 + 0xb0) = 0;
    *(undefined8 *)(lVar27 + 0xa8) = 0;
    *(undefined8 *)(lVar27 + 0xb8) = 0;
    lVar25 = lVar25 + 0x10;
    uVar16 = (int)lVar27 + 0x10;
    func_0x000100400294();
    ppuStack_15b0 = &PTR_DAT_11040b7d0;
    lStack_15d0 = lVar27;
    lStack_15b8 = lVar7;
    if (iVar26 != 5) goto LAB_1018afd50;
LAB_1018afcbc:
    lVar25 = *(long *)(unaff_x20 + 0x10);
    lVar7 = 0;
    func_0x00010189d2d8();
    func_0x000107c613fc();
    func_0x000100400294(lVar25 + 0x10,lVar7 + 0x10);
    lVar22 = 0;
    func_0x0001018b8d60();
    lVar27 = lVar22;
    func_0x000107c613fc();
    puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + 0xa0) = puVar30;
    *(long *)(lVar27 + 0x10) = lVar7;
    lVar25 = lVar25 + 0x10;
    uVar16 = (int)lVar27 + 0x18;
    func_0x000100400294();
    ppuStack_15e0 = &PTR_DAT_11040b6d0;
    lStack_1600 = lVar27;
    lStack_15e8 = lVar22;
LAB_1018afdbc:
    ppuStack_1610 = (undefined **)0x0;
    uVar31 = 0;
    lStack_1618 = 0;
    uStack_1620 = 0;
    uStack_1628 = 0;
    lStack_1630 = 0;
  }
  else {
    ppuStack_15b0 = (undefined **)0x0;
    lStack_15b8 = 0;
    uStack_15c0 = 0;
    uStack_15c8 = 0;
    lStack_15d0 = 0;
    if (iVar26 == 5) goto LAB_1018afcbc;
LAB_1018afd50:
    ppuStack_15e0 = (undefined **)0x0;
    uVar31 = 0;
    lStack_15e8 = 0;
    uStack_15f0 = 0;
    uStack_15f8 = 0;
    lStack_1600 = 0;
    if (iVar26 != 4) goto LAB_1018afdbc;
    lVar25 = *(long *)(unaff_x20 + 0x10);
    lVar7 = 0;
    func_0x0001018abab8();
    lVar27 = lVar7;
    func_0x000107c613fc();
    puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + 0x98) = puVar30;
    lVar25 = lVar25 + 0x10;
    uVar16 = (int)lVar27 + 0x10;
    func_0x000100400294();
    ppuStack_1610 = &PTR_DAT_11040b5b8;
    lStack_1630 = lVar27;
    lStack_1618 = lVar7;
  }
  FUN_1018b09a4();
  lStack_2588 = lStack_2570;
  if ((uVar16 & 0xff) != 1) {
    lStack_2588 = lVar25;
  }
  uVar2 = param_3[3];
  uVar19 = param_3[4];
  uVar28 = param_3[5];
  uVar17 = param_3[6];
  uVar23 = 0;
  if (uVar2 != 0) {
    uVar23 = uVar28;
  }
  uStack_2578 = *param_3;
  ppuStack_2598 = (undefined **)param_3[1];
  uVar11 = param_3[7];
  FUN_10189d730(uStack_2578,ppuStack_2598,uVar23,param_3[8]);
  func_0x00010178e4b4(apuStack_1938);
  FUN_1018b34c0(&lStack_15d0,&puStack_810,0x112dce470,&UNK_10d9905f8);
  if (puStack_7f8 == (undefined *)0x0) {
    FUN_1018b35cc(&puStack_810,0x112dce470,&UNK_10d9905f8);
LAB_1018aff5c:
    ppuVar9 = apuStack_1938;
  }
  else {
    uVar21 = 0x112dce0a0;
    func_0x0001000285a8(0x112dce0a0,&UNK_10d990378);
    uVar8 = 0;
    func_0x0001018bab54(0);
    ppuVar9 = &puStack_c20;
    func_0x000107c6147c(ppuVar9,&puStack_810,uVar21,uVar8,6);
    puVar30 = puStack_c20;
    if ((int)ppuVar9 == 0) goto LAB_1018aff5c;
    uStack_25b0 = uVar17;
    uStack_25a8 = uVar19;
    func_0x000107c610b4(auStack_748,param_1,0x348);
    iVar26 = (int)auStack_748;
    FUN_1018b3550();
    ppuVar9 = apuStack_1938;
    if (iVar26 != 1) {
      ppuVar9 = apuStack_730;
    }
    func_0x000107c610b4(&puStack_b60,ppuVar9,0x301);
    func_0x000107c610b4(auStack_388,&puStack_b60,0x301);
    if (lStack_2580 == 0) {
      lVar27 = 0;
    }
    else {
      lVar25 = lStack_2580;
      func_0x000107c61174();
      lVar7 = lStack_2588;
      func_0x000107c5fe40(lStack_2588);
      lVar27 = lVar25;
      func_0x000107c5e228();
      func_0x000107c61180();
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar7);
    }
    FUN_1018bafa0(auStack_15a8,auStack_388,lVar27);
    func_0x000107c610b4(&uStack_2240,auStack_15a8,0x301);
    uVar19 = uStack_25a8;
    uVar23 = uStack_25b0;
    if (uVar2 == 0) {
      func_0x000107c61574(puVar30);
      func_0x000107c61170(lVar27);
      func_0x000107c610b4(&puStack_2550,&uStack_2240,0x301);
    }
    else {
      uStack_25b8 = *(undefined8 *)(puVar30 + 0x98);
      uStack_25c0 = *(undefined8 *)(puVar30 + 0xa0);
      uStack_25c8 = *(undefined8 *)(puVar30 + 0xa8);
      uVar21 = *(undefined8 *)(puVar30 + 0xb0);
      uStack_25d0 = *(undefined8 *)(puVar30 + 0xb8);
      *(ulong *)(puVar30 + 0x98) = uVar2;
      *(ulong *)(puVar30 + 0xa0) = uStack_25a8;
      *(ulong *)(puVar30 + 0xa8) = uVar28;
      *(ulong *)(puVar30 + 0xb0) = uStack_25b0;
      *(ulong *)(puVar30 + 0xb8) = uVar11;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar19);
      func_0x000107c61434(uVar28);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar11);
      FUN_1018b3574(uStack_25b8,uStack_25c0,uStack_25c8,uVar21,uStack_25d0);
      FUN_1018b9e1c();
      func_0x0001018bb7ac(auStack_12a0,auStack_15a8,uVar2);
      FUN_1018b35cc(auStack_15a8,0x112dcbc48,&UNK_10d98e2c0);
      FUN_1018bc034(auStack_f98,auStack_12a0,uVar19,uVar28,uVar23,uStack_25a0);
      FUN_1018b35cc(auStack_12a0,0x112dcbc48,&UNK_10d98e2c0);
      FUN_1018bdd30(&puStack_2550,auStack_f98,uVar11);
      func_0x000107c61574(puVar30);
      func_0x000107c61170(lVar27);
      FUN_1018b35cc(auStack_f98,0x112dcbc48,&UNK_10d98e2c0);
    }
    ppuVar9 = &puStack_2550;
  }
  func_0x000107c610b4(auStack_1c40,ppuVar9,0x301);
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3e0 = 1;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_398 = 0;
  uStack_1c68 = 0;
  uStack_1c70 = 0;
  uStack_1c58 = 0;
  uStack_1c60 = 0;
  uStack_1c4f = 0;
  uStack_1c57 = 0;
  uStack_1c50 = 0;
  lStack_1ca8 = 0;
  lStack_1cb0 = 0;
  uStack_1c98 = 0;
  uStack_1ca0 = 0;
  uStack_1c78 = 0;
  uStack_1c80 = 0;
  uStack_1c88 = 0;
  lStack_1c90 = 1;
  FUN_1018b34c0(&lStack_1600,&puStack_b60,0x112dce470,&UNK_10d9905f8);
  if (puStack_b48 == (undefined *)0x0) {
    FUN_1018b35cc(&puStack_b60,0x112dce470,&UNK_10d9905f8);
  }
  else {
    uVar21 = 0x112dce0a0;
    func_0x0001000285a8(0x112dce0a0,&UNK_10d990378);
    uVar8 = 0;
    func_0x0001018b8d60(0);
    puVar10 = &uStack_2240;
    func_0x000107c6147c(puVar10,&puStack_b60,uVar21,uVar8,6);
    uVar21 = uStack_2240;
    if (((ulong)puVar10 & 1) != 0) {
      FUN_1018b7478(auStack_c90,&uStack_400,ppuStack_2598);
      func_0x000107c61574(uVar21);
      func_0x0001018b3508(auStack_c90,&lStack_1cb0,0x112dcbca8,&UNK_10d98e380);
    }
  }
  FUN_1018b34c0(&lStack_1630,auStack_1cd8,0x112dce470,&UNK_10d9905f8);
  if (lStack_1cc0 == 0) {
    FUN_1018b35cc(auStack_1cd8,0x112dce470,&UNK_10d9905f8);
  }
  else {
    uVar21 = 0x112dce0a0;
    func_0x0001000285a8(0x112dce0a0,&UNK_10d990378);
    uVar8 = 0;
    func_0x0001018abab8(0);
    puVar10 = &uStack_1ce8;
    func_0x000107c6147c(puVar10,auStack_1cd8,uVar21,uVar8,6);
    if (((ulong)puVar10 & 1) != 0) {
      func_0x00010178e4d4(&uStack_1da8);
      uStack_21b8 = uStack_1d20;
      uStack_21c0 = uStack_1d28;
      uStack_21a8 = uStack_1d10;
      uStack_21b0 = uStack_1d18;
      uStack_21a0 = uStack_1d08;
      uStack_218f = uStack_1cf7;
      uStack_21f8 = uStack_1d60;
      uStack_2200 = uStack_1d68;
      uStack_21e8 = uStack_1d50;
      uStack_21f0 = uStack_1d58;
      uStack_21d8 = uStack_1d40;
      uStack_21e0 = uStack_1d48;
      uStack_21c8 = uStack_1d30;
      uStack_21d0 = uStack_1d38;
      uStack_2238 = uStack_1da0;
      uStack_2240 = uStack_1da8;
      uStack_2228 = uStack_1d90;
      uStack_2230 = uStack_1d98;
      uStack_2218 = uStack_1d80;
      uStack_2220 = uStack_1d88;
      uStack_2208 = uStack_1d70;
      uStack_2210 = uStack_1d78;
      FUN_1018ab5ec(&puStack_c20,&uStack_2240,param_3[2]);
      uStack_ad8 = uStack_b98;
      uStack_ae0 = uStack_ba0;
      uStack_ac8 = uStack_b88;
      uStack_ad0 = uStack_b90;
      uStack_ac0 = uStack_b80;
      uStack_aaf = uStack_b6f;
      uStack_b18 = uStack_bd8;
      uStack_b20 = uStack_be0;
      uStack_b08 = uStack_bc8;
      uStack_b10 = uStack_bd0;
      uStack_af8 = uStack_bb8;
      uStack_b00 = uStack_bc0;
      uStack_ae8 = uStack_ba8;
      uStack_af0 = uStack_bb0;
      uStack_b58 = uStack_c18;
      puStack_b60 = puStack_c20;
      puStack_b48 = puStack_c08;
      uStack_b50 = uStack_c10;
      uStack_b38 = uStack_bf8;
      lStack_b40 = lStack_c00;
      uStack_b28 = uStack_be8;
      uStack_b30 = uStack_bf0;
      uStack_788 = uStack_b98;
      uStack_790 = uStack_ba0;
      uStack_778 = uStack_b88;
      uStack_780 = uStack_b90;
      uStack_770 = uStack_b80;
      uStack_75f = uStack_b6f;
      uStack_7c8 = uStack_bd8;
      uStack_7d0 = uStack_be0;
      uStack_7b8 = uStack_bc8;
      uStack_7c0 = uStack_bd0;
      uStack_7a8 = uStack_bb8;
      uStack_7b0 = uStack_bc0;
      uStack_798 = uStack_ba8;
      uStack_7a0 = uStack_bb0;
      uStack_808 = uStack_c18;
      puStack_810 = puStack_c20;
      puStack_7f8 = puStack_c08;
      uStack_800 = uStack_c10;
      uStack_7e8 = uStack_bf8;
      lStack_7f0 = lStack_c00;
      uStack_7d8 = uStack_be8;
      uStack_7e0 = uStack_bf0;
      iVar26 = (int)&puStack_810;
      FUN_10178e278();
      if (iVar26 != 1) {
        uStack_24c8 = uStack_ad8;
        uStack_24d0 = uStack_ae0;
        uStack_24b8 = uStack_ac8;
        uStack_24c0 = uStack_ad0;
        uStack_24b0 = uStack_ac0;
        uStack_249f = uStack_aaf;
        uStack_2508 = uStack_b18;
        uStack_2510 = uStack_b20;
        uStack_24f8 = uStack_b08;
        uStack_2500 = uStack_b10;
        uStack_24e8 = uStack_af8;
        uStack_24f0 = uStack_b00;
        uStack_24d8 = uStack_ae8;
        uStack_24e0 = uStack_af0;
        uStack_2548 = uStack_b58;
        puStack_2550 = puStack_b60;
        puStack_2538 = puStack_b48;
        uStack_2540 = uStack_b50;
        uStack_2528 = uStack_b38;
        lStack_2530 = lStack_b40;
        uStack_2518 = uStack_b28;
        uStack_2520 = uStack_b30;
        func_0x00010427bf14(0);
        func_0x000107c610f8();
        uStack_1de8 = uStack_ad8;
        uStack_1df0 = uStack_ae0;
        uStack_1dd8 = uStack_ac8;
        uStack_1de0 = uStack_ad0;
        uStack_1dd0 = uStack_ac0;
        uStack_1dbf = uStack_aaf;
        uStack_1e28 = uStack_b18;
        uStack_1e30 = uStack_b20;
        uStack_1e18 = uStack_b08;
        uStack_1e20 = uStack_b10;
        uStack_1e08 = uStack_af8;
        uStack_1e10 = uStack_b00;
        uStack_1df8 = uStack_ae8;
        uStack_1e00 = uStack_af0;
        uStack_1e68 = uStack_b58;
        puStack_1e70 = puStack_b60;
        puStack_1e58 = puStack_b48;
        uStack_1e60 = uStack_b50;
        uStack_1e48 = uStack_b38;
        lStack_1e50 = lStack_b40;
        uStack_1e38 = uStack_b28;
        uStack_1e40 = uStack_b30;
        FUN_10178e29c(&puStack_1e70,auStack_1f30);
        ppuVar9 = &puStack_2550;
        func_0x00010427a814();
        ppuStack_2598 = ppuVar9;
        func_0x000107c61574(uStack_1ce8);
        FUN_1018b35cc(&puStack_c20,0x112dcbc58,&UNK_10d98e2f0);
        goto LAB_1018b03ec;
      }
      func_0x000107c61574(uStack_1ce8);
    }
  }
  ppuStack_2598 = (undefined **)0x0;
LAB_1018b03ec:
  if (uStack_2578 >> 0x3e == 0) {
    uVar23 = *(ulong *)((uStack_2578 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = uStack_2578 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_2578) {
      uVar23 = uStack_2578;
    }
    func_0x000107c60480();
  }
  puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar23 != 0) {
    puStack_b60 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
    uVar2 = uStack_2578;
    if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018b09a4);
      (*pcVar5)();
    }
    uVar28 = 0;
    uVar19 = uStack_2578 & 0xc000000000000001;
    do {
      puVar30 = puStack_b60;
      uVar17 = uVar2;
      if (uVar19 == 0) {
        uVar11 = *(ulong *)(uVar2 + uVar28 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar28;
        FUN_101887b4c();
      }
      func_0x000107c61174();
      uVar12 = uVar11;
      FUN_1018b360c();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar11);
      uVar11 = *(ulong *)(puVar30 + 0x10);
      puStack_b60 = puVar30;
      if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar11) {
        func_0x000100403514(1 < *(ulong *)(puVar30 + 0x18),uVar11 + 1,1);
      }
      uVar28 = uVar28 + 1;
      *(ulong *)(puStack_b60 + 0x10) = uVar11 + 1;
      *(ulong *)(puStack_b60 + uVar11 * 0x10 + 0x20) = uVar12;
      *(ulong *)(puStack_b60 + uVar11 * 0x10 + 0x28) = uVar17;
      puVar30 = puStack_b60;
    } while (uVar23 != uVar28);
  }
  ppuVar9 = ppuStack_2598;
  FUN_1018b34c0(&lStack_15d0,&puStack_b60,0x112dce470,&UNK_10d9905f8);
  lVar27 = lStack_b40;
  puVar13 = puStack_b48;
  if (puStack_b48 == (undefined *)0x0) {
    FUN_1018b35cc(&puStack_b60,0x112dce470,&UNK_10d9905f8);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001000a8868(&puStack_b60,puStack_b48);
    (**(code **)(lVar27 + 8))(puVar13,lVar27);
    func_0x0001000834e4(&puStack_b60);
  }
  FUN_1018b34c0(&lStack_1600,&puStack_b60,0x112dce470,&UNK_10d9905f8);
  lVar27 = lStack_b40;
  puVar14 = puStack_b48;
  if (puStack_b48 == (undefined *)0x0) {
    FUN_1018b35cc(&puStack_b60,0x112dce470,&UNK_10d9905f8);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001000a8868(&puStack_b60,puStack_b48);
    (**(code **)(lVar27 + 8))(puVar14,lVar27);
    func_0x0001000834e4(&puStack_b60);
  }
  FUN_1018b34c0(&lStack_1630,&puStack_b60,0x112dce470,&UNK_10d9905f8);
  lVar27 = lStack_b40;
  puVar15 = puStack_b48;
  if (puStack_b48 == (undefined *)0x0) {
    FUN_1018b35cc(&puStack_b60,0x112dce470,&UNK_10d9905f8);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001000a8868(&puStack_b60,puStack_b48);
    (**(code **)(lVar27 + 8))(puVar15,lVar27);
    func_0x0001000834e4(&puStack_b60);
  }
  puStack_1ce0 = puVar30;
  func_0x00010109a32c(puVar13);
  func_0x00010109a32c(puVar14);
  func_0x00010109a32c(puVar15);
  puVar30 = puStack_1ce0;
  func_0x000107c61428(unaff_x20 + 0x98,&puStack_b60,0x21,0);
  func_0x00010109a32c(puVar30);
  func_0x000107c614a8(&puStack_b60);
  uVar21 = uStack_1c98;
  lVar25 = lStack_1ca8;
  lVar27 = lStack_1cb0;
  lVar7 = lStack_2588;
  if (0 < lStack_2570) {
    if (lStack_2588 == lStack_2570) {
      lVar7 = 0;
    }
    else {
      lVar7 = lStack_2570;
      if (lStack_2588 != 0) {
        lVar7 = lStack_2588;
      }
    }
  }
  bVar3 = (byte)uStack_1ca0;
  bVar4 = uStack_1ca0._1_1_;
  if (lStack_1c90 == 1) {
    uVar21 = 0;
    lVar22 = 0;
    lVar29 = lStack_1c90;
  }
  else {
    lVar22 = lStack_1c90;
    func_0x000107c61434();
    lVar29 = lVar22;
  }
  if (ppuVar9 == (undefined **)0x0) {
    uVar20 = 0;
    uVar18 = 0;
    uVar8 = 0;
  }
  else {
    uVar18 = *(undefined1 *)((long)ppuVar9 + _DAT_11306a3f8);
    uVar20 = *(undefined1 *)((long)ppuVar9 + _DAT_11306a400);
    uVar8 = *(undefined8 *)((long)ppuVar9 + _DAT_11306a408);
  }
  bVar6 = lVar29 != 1;
  uVar1 = 3;
  if ((int)uStack_2568 != 9 && (int)uStack_2568 != 3) {
    uVar1 = uStack_2568;
  }
  *(undefined1 *)(lVar24 + -0xf) = uVar20;
  *(undefined1 *)(lVar24 + -0x10) = uVar18;
  *(long *)(lVar24 + -0x20) = lVar22;
  *(undefined8 *)(lVar24 + -0x18) = 0;
  func_0x00010421e908(&puStack_b60,uVar31,uVar8,uVar1,lVar7,auStack_1c40,bVar6 & bVar3,
                      0 < lVar25 && bVar6,0 < lVar27 && bVar6,bVar6 & bVar4,uVar21);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(lStack_2580);
  FUN_1018b35cc(&lStack_1630,0x112dce470,&UNK_10d9905f8);
  FUN_1018b35cc(&lStack_1600,0x112dce470,&UNK_10d9905f8);
  FUN_1018b35cc(&lStack_15d0,0x112dce470,&UNK_10d9905f8);
  FUN_1018b35cc(&lStack_1cb0,0x112dcbca8,&UNK_10d98e380);
  func_0x000107c610b4(uStack_2590,&puStack_b60,0x348);
  return;
}



/* Entry: 1018b09a4; end: 1018b0b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018b09a4(void)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar8 = *unaff_x20;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b0ac8);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar10;
        FUN_101887b4c(uVar10,uVar8);
      }
      lVar5 = _DAT_11308c0c8;
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b0ac4);
        (*pcVar2)();
      }
      iVar3 = (int)*(undefined8 *)(uVar4 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      if (iVar3 == 3) {
LAB_1018b0a60:
        lVar6 = *(long *)(uVar4 + _DAT_11308c0c0);
        func_0x000107c61174();
        func_0x000107c61170(uVar4);
        lVar5 = lVar6;
        func_0x000107c30af8();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x000107c49820(lVar5);
          func_0x000107c61170(lVar5);
          uVar7 = 0;
          goto LAB_1018b0ae8;
        }
        break;
      }
      iVar3 = (int)*(undefined8 *)(uVar4 + lVar5);
      func_0x000107c30b1c();
      if (iVar3 == 4) goto LAB_1018b0a60;
      func_0x000107c61170(uVar4);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar9);
  }
  lVar6 = 0;
  uVar7 = 1;
LAB_1018b0ae8:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = lVar6;
  return auVar11;
}



/* Entry: 1018b0b04; end: 1018b0b5f;  */

void FUN_1018b0b04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100400450(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018b0b60; end: 1018b0bef;  */

long FUN_1018b0b60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1018b0bf0; end: 1018b0cbb;  */

undefined8 * FUN_1018b0bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar4 = param_2[2];
  param_1[2] = uVar4;
  lVar3 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  if (lVar3 == 0) {
    lVar3 = param_2[3];
    uVar4 = param_2[6];
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[3] = lVar3;
    param_1[6] = uVar4;
    param_1[5] = uVar5;
    param_1[7] = param_2[7];
  }
  else {
    uVar5 = param_2[4];
    uVar1 = param_2[5];
    param_1[3] = lVar3;
    param_1[4] = uVar5;
    uVar4 = param_2[6];
    uVar2 = param_2[7];
    param_1[5] = uVar1;
    param_1[6] = uVar4;
    param_1[7] = uVar2;
    func_0x000107c61434(lVar3);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar2);
  }
  param_1[8] = param_2[8];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1018b0cbc; end: 1018b0e57;  */

undefined8 * FUN_1018b0cbc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  plVar3 = param_1 + 3;
  lVar4 = *plVar3;
  plVar6 = param_2 + 3;
  lVar1 = *plVar6;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      uVar2 = param_2[4];
      lVar1 = *plVar6;
      uVar7 = param_2[6];
      uVar5 = param_2[5];
      param_1[7] = param_2[7];
      param_1[4] = uVar2;
      *plVar3 = lVar1;
      param_1[6] = uVar7;
      param_1[5] = uVar5;
    }
    else {
      param_1[3] = lVar1;
      uVar2 = param_2[4];
      param_1[4] = uVar2;
      uVar5 = param_2[5];
      param_1[5] = uVar5;
      uVar7 = param_2[6];
      param_1[6] = uVar7;
      uVar8 = param_2[7];
      param_1[7] = uVar8;
      func_0x000107c61434();
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
    }
  }
  else if (lVar1 == 0) {
    FUN_1018b0e58(plVar3);
    uVar2 = param_2[7];
    lVar1 = *plVar6;
    uVar7 = param_2[6];
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    *plVar3 = lVar1;
    param_1[6] = uVar7;
    param_1[5] = uVar5;
    param_1[7] = uVar2;
  }
  else {
    param_1[3] = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(lVar4);
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
    uVar2 = param_1[5];
    param_1[5] = param_2[5];
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
  }
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1018b0e58; end: 1018b0e8b;  */

undefined8 FUN_1018b0e58(undefined8 param_1)

{
  (*(code *)(undefined *)0x1018baba0)();
  return param_1;
}



/* Entry: 1018b0e8c; end: 1018b0f73;  */

undefined8 * FUN_1018b0e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  plVar2 = param_1 + 3;
  if (*plVar2 != 0) {
    if (param_2[3] != 0) {
      param_1[3] = param_2[3];
      func_0x000107c6142c();
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      func_0x000107c6142c(uVar1);
      goto LAB_1018b0f50;
    }
    FUN_1018b0e58(plVar2);
  }
  lVar3 = param_2[3];
  uVar4 = param_2[6];
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  *plVar2 = lVar3;
  param_1[6] = uVar4;
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
LAB_1018b0f50:
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018b0f74; end: 1018b101b;  */

int FUN_1018b0f74(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


