/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10153c08c; end: 10153c0a7;  */

void FUN_10153c08c(void)

{
  FUN_10153c0a8();
  return;
}



/* Entry: 10153c0a8; end: 10153c113;  */

void FUN_10153c0a8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_40);
  uStack_41 = param_3;
  func_0x00010008a7c8(&uStack_38,&uStack_41);
  func_0x000107c61574(uStack_40);
  func_0x000100083b20(param_1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 10153c114; end: 10153c12f;  */

void FUN_10153c114(void)

{
  FUN_10153c0a8();
  return;
}



/* Entry: 10153c130; end: 10153c3c3;  */

void FUN_10153c130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db39f0,&UNK_10d95dd80);
  puVar1 = &UNK_1103dcc18;
  func_0x000107c613fc(&UNK_1103dcc18,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_10153c3c4,puVar1);
  return;
}



/* Entry: 10153c3c4; end: 10153c3f7;  */

void FUN_10153c3c4(void)

{
  long unaff_x20;
  
  func_0x00010153c234(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10153c3f8; end: 10153c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10153c3f8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  FUN_10153c4a8(param_4,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  func_0x000101541530(param_8,unaff_x20 + _DAT_112db39f8,&SUB_103ddeef8);
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  return unaff_x20;
}



/* Entry: 10153c4a8; end: 10153c4bf;  */

undefined8 * FUN_10153c4a8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10153c4c0; end: 10153c547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10153c4c0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x0001015414f4(unaff_x20 + _DAT_112db39f8,&SUB_103ddeef8);
  return;
}



/* Entry: 10153c548; end: 10153e8a3;  */

/* WARNING: Removing unreachable block (ram,0x00010153ccfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10153c548(void)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  undefined8 ****ppppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar28;
  long extraout_x8_02;
  long extraout_x8_03;
  byte bVar29;
  undefined8 ***pppuVar30;
  undefined *puVar31;
  undefined8 ****ppppuVar32;
  byte bVar33;
  uint uVar34;
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
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  byte bVar35;
  byte extraout_w14;
  byte bVar36;
  byte extraout_w14_00;
  byte extraout_w15;
  byte bVar37;
  byte extraout_w15_00;
  uint uVar38;
  long unaff_x20;
  ulong uVar39;
  undefined8 uVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  byte *pbVar44;
  undefined8 ***pppuVar45;
  long lVar46;
  undefined8 ***pppuVar47;
  undefined8 ****ppppuVar48;
  ulong uVar49;
  undefined8 ***pppuVar50;
  undefined8 uVar51;
  double dVar52;
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  long alStack_1270 [14];
  undefined1 auStack_1200 [8];
  long alStack_11f8 [4];
  byte abStack_11d8 [8];
  long alStack_11d0 [10];
  byte abStack_1180 [8];
  long alStack_1178 [2];
  undefined8 uStack_1168;
  long alStack_1160 [10];
  long lStack_1110;
  undefined8 uStack_1108;
  long alStack_1100 [2];
  byte abStack_10f0 [8];
  long lStack_10e8;
  undefined8 **ppuStack_10e0;
  long lStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  uint uStack_10b4;
  undefined8 uStack_10b0;
  undefined4 uStack_10a4;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined4 uStack_1074;
  undefined8 uStack_1070;
  undefined8 ***pppuStack_1068;
  undefined8 ***pppuStack_1060;
  ulong uStack_1058;
  undefined8 ***pppuStack_1050;
  undefined8 **ppuStack_1048;
  undefined8 **ppuStack_1040;
  undefined8 **ppuStack_1038;
  undefined8 ***pppuStack_1030;
  undefined8 **ppuStack_1028;
  undefined8 ***pppuStack_1020;
  undefined8 ***pppuStack_1018;
  undefined8 **ppuStack_1010;
  undefined8 **ppuStack_1008;
  undefined8 **ppuStack_1000;
  undefined8 **ppuStack_ff8;
  long lStack_ff0;
  undefined8 **ppuStack_fe8;
  long lStack_fe0;
  undefined8 **ppuStack_fd8;
  undefined8 ***pppuStack_fd0;
  undefined8 ***pppuStack_fc8;
  undefined8 **ppuStack_fc0;
  undefined8 **ppuStack_fb8;
  long lStack_fb0;
  undefined8 **ppuStack_fa8;
  undefined *puStack_fa0;
  ulong uStack_f98;
  undefined8 **ppuStack_f90;
  long lStack_f88;
  undefined8 **ppuStack_f80;
  undefined8 **ppuStack_f78;
  undefined8 **ppuStack_f70;
  undefined8 **ppuStack_f68;
  long lStack_f60;
  long lStack_f58;
  undefined8 **ppuStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 *puStack_f38;
  ulong auStack_f28 [2];
  undefined8 **ppuStack_f18;
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
  undefined1 uStack_e70;
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
  undefined1 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 uStack_d88;
  undefined7 uStack_d87;
  undefined1 uStack_d80;
  undefined7 uStack_d7f;
  undefined1 uStack_d78;
  undefined1 uStack_d77;
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
  undefined1 uStack_d20;
  undefined8 ***pppuStack_d10;
  undefined8 **ppuStack_d08;
  undefined8 **ppuStack_d00;
  undefined1 auStack_b98 [192];
  undefined1 auStack_ad8 [48];
  undefined1 auStack_aa8 [160];
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
  undefined1 uStack_968;
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
  undefined1 uStack_890;
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
  undefined1 uStack_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined8 uStack_79f;
  undefined8 uStack_770;
  ulong uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 **appuStack_740 [6];
  undefined8 ***pppuStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
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
  undefined1 uStack_658;
  undefined8 uStack_650;
  undefined1 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_600 [48];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
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
  undefined1 uStack_500;
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
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_43f;
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
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 uStack_390;
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
  undefined1 uStack_2e0;
  undefined8 ***pppuStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  long lStack_2b8;
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
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined8 ***pppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
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
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  long lStack_a8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = 0x112db3a00;
  uStack_f48 = extraout_x8;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112db39a8;
  ppuStack_ff8 = (undefined8 ***)((long)&ppuStack_10e0 - extraout_x8_00);
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  pppuVar30 = (undefined8 ***)
              (((long)&ppuStack_10e0 - extraout_x8_00) -
              (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  ppuStack_fe8 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = (long)pppuVar30 - extraout_x12;
  lVar13 = 0;
  lStack_f60 = lVar28;
  func_0x0001046d90b0();
  ppuStack_f68 = *(undefined8 ***)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuStack_f68[8]);
  puVar31 = (undefined *)(lVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_fa0 = puVar31;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)(puVar31 + -extraout_x12_00);
  ppuStack_f70 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)((long)pppuVar30 - extraout_x12_01);
  puVar14 = (undefined8 *)0x112d3bc20;
  ppuStack_f50 = pppuVar30;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar14[-1] + 0x40));
  pppuVar30 = (undefined8 ***)((long)pppuVar30 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  ppuStack_fc0 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppuVar32 = (undefined8 ****)((long)pppuVar30 - extraout_x12_02);
  pppuStack_fc8 = ppppuVar32;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppuVar32 = (undefined8 ****)((long)ppppuVar32 - extraout_x12_03);
  pppuStack_fd0 = ppppuVar32;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)ppppuVar32 - extraout_x12_04;
  lStack_ff0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)(lVar13 - extraout_x12_05);
  ppuStack_1000 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)((long)pppuVar30 - extraout_x12_06);
  ppuStack_fa8 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)pppuVar30 - extraout_x12_07;
  lStack_fb0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)(lVar13 - extraout_x12_08);
  ppuStack_fb8 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar30 = (undefined8 ***)((long)pppuVar30 - extraout_x12_09);
  ppuStack_fd8 = pppuVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = (long)pppuVar30 - extraout_x12_10;
  lStack_fe0 = lVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar28 - extraout_x12_11;
  lStack_f88 = lVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar28 - extraout_x12_12;
  lStack_f58 = lVar28;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar15 = *puVar14;
  puStack_f38 = puVar14;
  func_0x000107c61174(uVar15);
  uVar16 = 0xd000000000000016;
  func_0x0001000a9a18(0xd000000000000016,0x800000010efb2bf0);
  uStack_f40 = uVar16;
  func_0x000107c61170(uVar15);
  ppppuVar32 = (undefined8 ****)(unaff_x20 + _DAT_112db39f8);
  pppuVar30 = ppppuVar32[2];
  pppuVar47 = ppppuVar32[3];
  pppuVar17 = (undefined8 ***)0x0;
  func_0x000103ddeef8();
  uVar49 = *(ulong *)((long)ppppuVar32 + (long)*(int *)(pppuVar17 + 6));
  ppuStack_f78 = pppuVar17;
  func_0x000107c61434(pppuVar47);
  func_0x000100083b20(&pppuStack_2d0);
  ppuVar7 = ppuStack_2c8;
  pppuVar17 = pppuStack_2d0;
  pppuVar45 = pppuStack_2d0;
  func_0x000107c614f0(pppuStack_2d0);
  pppuStack_2d0 = (undefined8 ***)0xd000000000000042;
  ppuStack_2c8 = (undefined8 **)0x800000010efb2c10;
  ppuStack_2c0 = (undefined8 **)((ulong)ppuStack_2c0 & 0xffffffffffffff00);
  (**(code **)((long)ppuVar7 + 8))
            (&pppuStack_d10,&pppuStack_2d0,&UNK_1107383c8,&PTR_DAT_11304a4b0,pppuVar45,ppuVar7);
  func_0x000107c615e8(pppuVar17);
  uVar41 = (ulong)pppuStack_d10 & 0xff;
  func_0x000100083b20(&pppuStack_2d0);
  ppuVar7 = ppuStack_2c8;
  pppuVar17 = pppuStack_2d0;
  pppuVar45 = pppuStack_2d0;
  func_0x000107c614f0(pppuStack_2d0);
  pppuStack_2d0 = (undefined8 ****)0xd00000000000003f;
  ppuStack_2c8 = (undefined8 ***)0x800000010efb2c60;
  ppuStack_2c0 = (undefined8 **)((ulong)ppuStack_2c0 & 0xffffffffffffff00);
  (**(code **)((long)ppuVar7 + 8))
            (&pppuStack_d10,&pppuStack_2d0,&UNK_1107383c8,&PTR_DAT_11304a4b0,pppuVar45,ppuVar7);
  func_0x000107c615e8(pppuVar17);
  uVar39 = (ulong)pppuStack_d10 & 0xff;
  uVar16 = 0;
  func_0x000103e04860();
  uVar15 = uVar16;
  func_0x000107c610f8();
  lVar13 = 0;
  uStack_f98 = uVar49;
  ppuStack_f90 = pppuVar30;
  ppuStack_f80 = pppuVar47;
  func_0x000103e044dc(0,0,pppuVar30,pppuVar47,uVar49,uVar41,uVar39,uVar15);
  pppuVar47 = ppppuVar32[1];
  if ((ulong)pppuVar47 >> 0x3c < 0xf) {
    ppppuVar48 = (undefined8 ****)*ppppuVar32;
    uVar34 = (uint)((ulong)pppuVar47 >> 0x20);
    uVar38 = uVar34 >> 0x1e;
    lVar43 = (long)ppppuVar48 >> 0x20;
    if (1 < uVar34 >> 0x1e) {
      if (uVar38 == 2) {
        if (ppppuVar48[2] != ppppuVar48[3]) goto LAB_10153cb30;
      }
      else {
LAB_10153ca6c:
        func_0x0001000b44c0(ppppuVar48,pppuVar47);
      }
      goto LAB_10153ca8c;
    }
    if (uVar38 == 0) {
      if (((ulong)pppuVar47 & 0xff000000000000) == 0) goto LAB_10153ca6c;
    }
    else {
      if ((int)ppppuVar48 == lVar43) goto LAB_10153ca8c;
LAB_10153cb30:
      FUN_100de78a0(ppppuVar48,pppuVar47);
    }
    lStack_2b0 = 0;
    ppuStack_2c8 = (undefined8 **)0x0;
    pppuStack_2d0 = (undefined8 ***)0x0;
    lStack_2b8 = 0;
    ppuStack_2c0 = (undefined8 **)0x0;
    ppppuVar20 = ppppuVar48;
    pppuVar17 = pppuVar47;
    func_0x00010006c00c();
    FUN_10155ed14();
    pppuStack_1030 = ppppuVar32;
    pppuStack_d10 = ppppuVar20;
    ppuStack_d08 = pppuVar17;
    ppuStack_d00 = pppuVar30;
    if (uVar38 == 2) {
      pppuVar30 = ppppuVar48[2];
      pppuVar17 = ppppuVar48[3];
      func_0x000107c5ec30();
      ppppuVar18 = ppppuVar20;
      ppppuVar32 = ppppuVar20;
      if (ppppuVar20 != (undefined8 ****)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8((long)pppuVar30,(long)ppppuVar18)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7d0);
          (*pcVar11)();
        }
        ppppuVar32 = (undefined8 ****)(((long)pppuVar30 - (long)ppppuVar18) + (long)ppppuVar20);
      }
      ppppuVar20 = (undefined8 ****)((long)pppuVar17 - (long)pppuVar30);
      if (SBORROW8((long)pppuVar17,(long)pppuVar30)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7cc);
        (*pcVar11)();
      }
      func_0x000107c5ec38();
      ppppuVar2 = ppppuVar18;
      if ((long)ppppuVar20 <= (long)ppppuVar18) {
        ppppuVar2 = ppppuVar20;
      }
      lVar43 = 0;
      if (ppppuVar32 != (undefined8 ****)0x0) {
        lVar43 = (long)ppppuVar2 + (long)ppppuVar32;
      }
      FUN_10153ec4c();
LAB_10153ccd4:
      func_0x00010006ae80(ppppuVar32,lVar43,&pppuStack_2d0,0,100,0,&UNK_1103dd178,ppppuVar18);
      func_0x0001000b44c0(ppppuVar48,pppuVar47);
    }
    else {
      if (uVar38 != 1) {
        uStack_708._0_6_ = SUB86(pppuVar47,0);
        lVar43 = (long)&pppuStack_710 + ((ulong)pppuVar47 >> 0x30 & 0xff);
        pppuStack_710 = ppppuVar48;
        FUN_10153ec4c();
        ppppuVar32 = &pppuStack_710;
        ppppuVar18 = ppppuVar20;
        goto LAB_10153ccd4;
      }
      lVar46 = (long)(int)ppppuVar48;
      if (lVar43 < lVar46) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7c8);
        (*pcVar11)();
      }
      func_0x000107c5ec30();
      if (ppppuVar20 == (undefined8 ****)0x0) {
        func_0x000107c5ec38();
        lVar43 = 0;
        lVar42 = 0;
      }
      else {
        ppppuVar32 = ppppuVar20;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar46,(long)ppppuVar32)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7d4);
          (*pcVar11)();
        }
        lVar42 = (lVar46 - (long)ppppuVar32) + (long)ppppuVar20;
        func_0x000107c5ec38();
        ppppuVar20 = ppppuVar32;
        if (lVar42 == 0) {
          lVar43 = 0;
        }
        else {
          if (lVar43 - lVar46 <= (long)ppppuVar32) {
            ppppuVar32 = (undefined8 ****)(lVar43 - lVar46);
          }
          lVar43 = (long)ppppuVar32 + lVar42;
        }
      }
      FUN_10153ec4c();
      func_0x00010006ae80(lVar42,lVar43,&pppuStack_2d0,0,100,0,&UNK_1103dd178,ppppuVar20);
      func_0x0001000b44c0(ppppuVar48,pppuVar47);
    }
    ppppuVar32 = &pppuStack_2d0;
    FUN_101541480(ppppuVar32,0x112d49548,&UNK_10d90fde0);
    pppuStack_1018 = pppuStack_d10;
    ppuStack_1010 = ppuStack_d00;
    pppuStack_2d0 = pppuStack_d10;
    ppuStack_1008 = ppuStack_d08;
    ppuStack_2c8 = ppuStack_d08;
    ppuStack_2c0 = ppuStack_d00;
    FUN_10153ec4c();
    puVar31 = &UNK_1103dd178;
    pppuVar30 = (undefined8 ***)0x1;
    func_0x000104582ddc(1,&UNK_1103dd178,ppppuVar32);
    lVar43 = *(long *)(unaff_x20 + 0x40);
    pppuStack_1020 = ppppuVar48;
    if (lVar43 == 0) {
      func_0x000107c6142c(puVar31);
    }
    else {
      func_0x000107c5fadc();
      ppuStack_1028 = pppuVar30;
      func_0x000107c6142c(puVar31);
      pppuVar30 = (undefined8 ***)ppuStack_f90;
      func_0x000107c5fadc(ppuStack_f90,ppuStack_f80);
      plVar1 = (long *)((long)pppuStack_1030 + (long)*(int *)((long)ppuStack_f78 + 0x6c));
      lStack_248 = plVar1[0x11];
      lStack_250 = plVar1[0x10];
      lStack_238 = plVar1[0x13];
      lStack_240 = plVar1[0x12];
      lStack_230 = plVar1[0x14];
      uStack_228 = (undefined1)plVar1[0x15];
      uStack_21f = *(undefined8 *)((long)plVar1 + 0xb1);
      uStack_227 = (undefined7)*(undefined8 *)((long)plVar1 + 0xa9);
      uStack_220 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0xa9) >> 0x38);
      lStack_268 = plVar1[0xd];
      lStack_270 = plVar1[0xc];
      lStack_258 = plVar1[0xf];
      lStack_260 = plVar1[0xe];
      lStack_288 = plVar1[9];
      lStack_290 = plVar1[8];
      lStack_278 = plVar1[0xb];
      lStack_280 = plVar1[10];
      ppuStack_2c8 = (undefined8 **)plVar1[1];
      pppuStack_2d0 = (undefined8 ***)*plVar1;
      lStack_2b8 = plVar1[3];
      ppuStack_2c0 = (undefined8 **)plVar1[2];
      lStack_2a8 = plVar1[5];
      lStack_2b0 = plVar1[4];
      lStack_298 = plVar1[7];
      lStack_2a0 = plVar1[6];
      iVar12 = (int)&pppuStack_2d0;
      ppuStack_1038 = pppuVar30;
      FUN_101541310();
      if (iVar12 != 1) {
        lStack_e8 = lStack_248;
        lStack_f0 = lStack_250;
        lStack_d8 = lStack_238;
        lStack_e0 = lStack_240;
        uStack_c8 = uStack_228;
        lStack_d0 = lStack_230;
        uStack_bf = uStack_21f;
        uStack_c7 = uStack_227;
        uStack_c0 = uStack_220;
        lStack_128 = lStack_288;
        lStack_130 = lStack_290;
        lStack_118 = lStack_278;
        lStack_120 = lStack_280;
        lStack_108 = lStack_268;
        lStack_110 = lStack_270;
        lStack_f8 = lStack_258;
        lStack_100 = lStack_260;
        ppuStack_168 = ppuStack_2c8;
        pppuStack_170 = pppuStack_2d0;
        lStack_158 = lStack_2b8;
        ppuStack_160 = ppuStack_2c0;
        lStack_148 = lStack_2a8;
        lStack_150 = lStack_2b0;
        lStack_138 = lStack_298;
        lStack_140 = lStack_2a0;
        func_0x0001047b5e44(0);
        func_0x000107c610f8();
        func_0x0001047b45c0(&pppuStack_170);
        func_0x0001047b4100(auStack_b98);
      }
      uVar15 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c6142c(0xe000000000000000);
      if (((undefined8 *)((long)pppuStack_1030 + (long)*(int *)(ppuStack_f78 + 0xe)))[1] == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)((long)pppuStack_1030 + (long)*(int *)(ppuStack_f78 + 0xe));
        func_0x000107c5fadc(uVar19);
      }
      ppuVar8 = ppuStack_1028;
      ppuVar7 = ppuStack_1038;
      func_0x000107c51f74(lVar43);
      func_0x000107c61170(ppuVar8);
      func_0x000107c61170(ppuVar7);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar19);
    }
    pppuVar30 = (undefined8 ***)ppuStack_1008;
    ppuVar7 = ppuStack_1010;
    ppppuVar32 = (undefined8 ****)pppuStack_1018;
    ppppuVar48 = (undefined8 ****)pppuStack_1018;
    func_0x00010155ce20(pppuStack_1018,ppuStack_1008,ppuStack_1010);
    ppppuVar20 = ppppuVar32;
    pppuVar17 = pppuVar30;
    func_0x00010155caac(ppppuVar32,pppuVar30,ppuVar7);
    ppppuVar18 = ppppuVar48;
    FUN_10153ec8c(ppppuVar48,ppppuVar20,pppuVar17,lVar13);
    func_0x000107c6142c(ppppuVar48);
    if (((ulong)ppppuVar18 & 1) == 0) {
      FUN_10153e8a4(uStack_f48);
      func_0x00010006c090(ppppuVar32,pppuVar30);
      func_0x000107c61574(ppuVar7);
      func_0x0001000b44c0(pppuStack_1020,pppuVar47);
      goto LAB_10153cab0;
    }
    pppuVar17 = *(undefined8 ****)(unaff_x20 + 0x68);
    FUN_10155c9ec(ppppuVar32,pppuVar30,ppuVar7);
    ppppuVar48 = (undefined8 ****)pppuStack_1020;
    uVar34 = (uint)((ulong)pppuVar30 >> 0x20);
    ppuStack_1048 = pppuVar47;
    ppuStack_1028 = pppuVar17;
    if (1 < uVar34 >> 0x1e) {
      if (uVar34 >> 0x1e == 2) {
        pppuVar47 = ppppuVar32[2];
        pppuVar45 = ppppuVar32[3];
        goto LAB_10153d098;
      }
LAB_10153d0a0:
      if (pppuVar17[2] != (undefined8 **)0x0) {
        func_0x000107c4be2c();
      }
      uVar15 = 1;
      lVar43 = lStack_f58;
LAB_10153d1b8:
      func_0x00010006c090(ppppuVar32,pppuVar30);
      pppuVar30 = (undefined8 ***)0x0;
      func_0x000107c5eec8();
      pppuStack_1050 = (undefined8 ***)pppuVar30[-1];
      pppuVar17 = (undefined8 ***)pppuStack_1050[7];
      ppuStack_1038 = pppuVar30;
      (*(code *)pppuVar17)(lVar43,uVar15,1);
      uVar40 = *(undefined8 *)(lVar13 + _DAT_113011258);
      uVar3 = *(undefined1 *)(lVar13 + _DAT_113011260);
      uVar15 = *(undefined8 *)(lVar13 + _DAT_113011250);
      uVar19 = ((undefined8 *)(lVar13 + _DAT_113011250))[1];
      uVar4 = *(undefined1 *)(lVar13 + _DAT_113011268);
      func_0x000107c610f8(uVar16);
      func_0x000107c61434(uVar19);
      pppuVar47 = (undefined8 ***)0x0;
      func_0x000103e044dc(0,0,uVar15,uVar19,uVar40,uVar3,uVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      ppppuVar32 = (undefined8 ****)pppuStack_1018;
      pppuVar30 = (undefined8 ***)ppuStack_1008;
      ppuStack_f18 = pppuVar47;
      func_0x00010155ca5c(pppuStack_1018,ppuStack_1008,ppuStack_1010);
      puVar14 = puStack_f38;
      uVar34 = (uint)((ulong)pppuVar30 >> 0x20);
      ppuStack_1040 = pppuVar17;
      if (uVar34 >> 0x1e < 2) {
        if (uVar34 >> 0x1e == 0) {
          if (((ulong)pppuVar30 & 0xff000000000000) == 0) goto LAB_10153d31c;
          uVar39 = (ulong)ppppuVar32 >> 8;
          uVar41 = (ulong)ppppuVar32 >> 0x10;
          uVar49 = (ulong)ppppuVar32 >> 0x18;
          uVar23 = (ulong)ppppuVar32 >> 0x20;
          uVar24 = (ulong)ppppuVar32 >> 0x28;
          uVar25 = (ulong)ppppuVar32 >> 0x30;
          uVar26 = (ulong)ppppuVar32 >> 0x38;
          bVar27 = (byte)((ulong)pppuVar30 >> 8);
          bVar29 = (byte)((ulong)pppuVar30 >> 0x10);
          bVar33 = (byte)((ulong)pppuVar30 >> 0x18);
          bVar35 = (byte)((ulong)pppuVar30 >> 0x28);
          ppppuVar20 = ppppuVar32;
          pppuVar17 = pppuVar30;
          bVar37 = extraout_w15_00;
          bVar36 = extraout_w14_00;
        }
        else {
          pppuVar17 = (undefined8 ***)(long)(int)ppppuVar32;
          pppuVar45 = (undefined8 ***)((long)ppppuVar32 >> 0x20);
LAB_10153d314:
          if (pppuVar17 == pppuVar45) goto LAB_10153d31c;
          if ((ulong)pppuVar30 >> 0x3e == 2) {
            pppuVar17 = ppppuVar32[2];
            ppppuVar20 = ppppuVar32;
            func_0x000107c5ec30();
            if (ppppuVar20 == (undefined8 ****)0x0) {
              func_0x000107c5ec38();
LAB_10153e804:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e808);
              (*pcVar11)();
            }
            ppppuVar18 = ppppuVar20;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pppuVar17,(long)ppppuVar18)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7e4);
              (*pcVar11)();
            }
            pbVar44 = (byte *)(((long)pppuVar17 - (long)ppppuVar18) + (long)ppppuVar20);
            func_0x000107c5ec38();
            if (pbVar44 == (byte *)0x0) goto LAB_10153e804;
          }
          else {
            lVar13 = (long)(int)ppppuVar32;
            if ((long)ppppuVar32 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7e0);
              (*pcVar11)();
            }
            ppppuVar20 = ppppuVar32;
            func_0x000107c5ec30();
            if (ppppuVar20 == (undefined8 ****)0x0) {
              func_0x000107c5ec38();
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e820);
              (*pcVar11)();
            }
            ppppuVar18 = ppppuVar20;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar13,(long)ppppuVar18)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7ec);
              (*pcVar11)();
            }
            pbVar44 = (byte *)((lVar13 - (long)ppppuVar18) + (long)ppppuVar20);
            func_0x000107c5ec38();
            if (pbVar44 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e828);
              (*pcVar11)();
            }
          }
          ppppuVar20 = (undefined8 ****)(ulong)*pbVar44;
          uVar39 = (ulong)pbVar44[1];
          uVar41 = (ulong)pbVar44[2];
          uVar49 = (ulong)pbVar44[3];
          uVar23 = (ulong)pbVar44[4];
          uVar24 = (ulong)pbVar44[5];
          uVar25 = (ulong)pbVar44[6];
          uVar26 = (ulong)pbVar44[7];
          pppuVar17 = (undefined8 ***)(ulong)pbVar44[8];
          bVar27 = pbVar44[9];
          bVar29 = pbVar44[10];
          bVar33 = pbVar44[0xb];
          uVar34 = (uint)pbVar44[0xc];
          bVar35 = pbVar44[0xd];
          bVar36 = pbVar44[0xe];
          bVar37 = pbVar44[0xf];
        }
        *(byte *)(lVar28 + -9) = bVar37;
        *(byte *)(lVar28 + -10) = bVar36;
        *(byte *)(lVar28 + -0xb) = bVar35;
        *(char *)(lVar28 + -0xc) = (char)uVar34;
        *(byte *)(lVar28 + -0xd) = bVar33;
        *(byte *)(lVar28 + -0xe) = bVar29;
        *(byte *)(lVar28 + -0xf) = bVar27;
        *(char *)(lVar28 + -0x10) = (char)pppuVar17;
        lVar13 = lStack_f88;
        func_0x000107c5eebc(lStack_f88,ppppuVar20,uVar39,uVar41,uVar49,uVar23,uVar24,uVar25,uVar26);
        uVar15 = 0;
      }
      else {
        if (uVar34 >> 0x1e == 2) {
          pppuVar17 = ppppuVar32[2];
          pppuVar45 = ppppuVar32[3];
          goto LAB_10153d314;
        }
LAB_10153d31c:
        if ((undefined8 **)ppuStack_1028[2] != (undefined8 **)0x0) {
          func_0x000107c4be2c();
        }
        uVar15 = 1;
        lVar13 = lStack_f88;
      }
      ppuStack_1028 = pppuVar47;
      func_0x000107c61170(pppuVar47);
      func_0x00010006c090(ppppuVar32,pppuVar30);
      (*(code *)ppuStack_1040)(lVar13,uVar15,1,ppuStack_1038);
      pppuVar30 = (undefined8 ***)ppuStack_1008;
      ppuVar7 = ppuStack_1010;
      ppppuVar32 = (undefined8 ****)pppuStack_1018;
      ppppuVar20 = (undefined8 ****)pppuStack_1018;
      pppuVar47 = (undefined8 ***)ppuStack_1008;
      func_0x00010155caac(pppuStack_1018,ppuStack_1008,ppuStack_1010);
      FUN_10155d568(auStack_ad8,ppppuVar32,pppuVar30,ppuVar7);
      func_0x00010155c624(ppppuVar20,pppuVar47,auStack_ad8);
      FUN_101541480(auStack_ad8,0x112db3a10,&UNK_10d95dd98);
      ppppuVar18 = ppppuVar32;
      func_0x00010155d6c4(ppppuVar32,pppuVar30,ppuVar7);
      uStack_1058 = (ulong)(((uint)pppuVar30 & 0xff) == 1 && ppppuVar18 != (undefined8 ****)0x0);
      if ((int)ppppuVar20 == 7) {
        lVar43 = 0;
        func_0x00010477ea9c();
        ppuVar7 = ppuStack_ff8;
        (**(code **)(*(long *)(lVar43 + -8) + 0x38))(ppuStack_ff8,1,1,lVar43);
        uStack_e60 = 0;
        uStack_e68 = 0;
        uStack_e58 = 1;
        uStack_e48 = 0;
        uStack_e50 = 0;
        FUN_101541034(&uStack_5a0);
        ppuVar8 = ppuStack_f80;
        uStack_3c8 = uStack_538;
        uStack_3d0 = uStack_540;
        uStack_3b8 = uStack_528;
        uStack_3c0 = uStack_530;
        uStack_3a8 = uStack_518;
        uStack_3b0 = uStack_520;
        uStack_3a0 = CONCAT71(uStack_3a0._1_7_,(undefined1)uStack_510);
        uStack_408 = uStack_578;
        uStack_410 = uStack_580;
        uStack_3f8 = uStack_568;
        uStack_400 = uStack_570;
        uStack_3e8 = uStack_558;
        uStack_3f0 = uStack_560;
        uStack_3d8 = uStack_548;
        uStack_3e0 = uStack_550;
        uStack_428 = uStack_598;
        uStack_430 = uStack_5a0;
        uStack_418 = uStack_588;
        uStack_420 = uStack_590;
        uStack_d7f = 0;
        uStack_d78 = 0;
        uStack_d80 = 0;
        uStack_d98 = 0;
        uStack_da0 = 0;
        uStack_d88 = 0;
        uStack_d87 = 0;
        uStack_d90 = 0;
        uStack_db8 = 0;
        uStack_dc0 = 0;
        uStack_da8 = 0;
        uStack_db0 = 0;
        uStack_d77 = 1;
        uStack_708 = 0;
        pppuStack_710 = (undefined8 ****)0x0;
        uStack_6f8 = 0;
        uStack_700 = 0;
        uStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6b8 = 0;
        uStack_6c0 = 0;
        uStack_6a8 = 0;
        uStack_6b0 = 0;
        uStack_698 = 0;
        uStack_6a0 = 0;
        uStack_688 = 0;
        uStack_690 = 0;
        uStack_678 = 0;
        uStack_680 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_660 = 0;
        uStack_658 = 1;
        uStack_650 = 0;
        uStack_648 = 1;
        uStack_640 = 0;
        uStack_638 = 1;
        func_0x000107c61438(ppuStack_f80,2);
        *(undefined8 *)(lVar28 + -0x10) = 0;
        *(undefined8 *)(lVar28 + -0x18) = 0;
        *(undefined1 *)(lVar28 + -0x20) = 0;
        *(undefined8 *)(lVar28 + -0x28) = 0;
        *(undefined1 *)(lVar28 + -0x30) = 0;
        *(undefined8 *****)(lVar28 + -0x38) = &pppuStack_710;
        *(undefined8 *)(lVar28 + -0x48) = 0;
        *(undefined8 *)(lVar28 + -0x40) = 0xf000000000000000;
        *(undefined8 *)(lVar28 + -0x58) = 0;
        *(undefined8 **)(lVar28 + -0x50) = &uStack_dc0;
        *(undefined8 *)(lVar28 + -0x60) = 0;
        *(undefined8 *)(lVar28 + -0x68) = 0;
        *(undefined8 *)(lVar28 + -0x70) = 0;
        *(undefined8 *)(lVar28 + -0x78) = 0;
        *(undefined1 *)(lVar28 + -0x80) = 1;
        *(undefined8 *)(lVar28 + -0x88) = 0;
        *(undefined8 *)(lVar28 + -0x90) = 0;
        *(undefined8 *)(lVar28 + -0x98) = 0;
        *(undefined8 *)(lVar28 + -0xa8) = 0;
        *(undefined8 *)(lVar28 + -0xa0) = 2;
        *(undefined8 **)(lVar28 + -0xb8) = &uStack_430;
        *(undefined8 **)(lVar28 + -0xb0) = &uStack_430;
        *(undefined8 *)(lVar28 + -0xc0) = 0;
        *(undefined8 *)(lVar28 + -200) = 0;
        *(undefined8 *)(lVar28 + -0xe8) = 0;
        *(undefined8 *)(lVar28 + -0xf0) = 0;
        *(undefined8 *)(lVar28 + -0x108) = 0;
        *(undefined8 *)(lVar28 + -0x110) = 0;
        *(undefined8 *)(lVar28 + -0xd8) = 3;
        *(undefined8 **)(lVar28 + -0xd0) = &uStack_e68;
        *(undefined8 *)(lVar28 + -0xe0) = 0;
        *(undefined2 *)(lVar28 + -0xf8) = 0;
        *(undefined8 ***)(lVar28 + -0x100) = ppuVar7;
        func_0x0001046d9184(puStack_fa0,0,0,0,7,uStack_f98,ppuStack_f90,ppuVar8,0,0);
        ppuVar10 = ppuStack_f78;
        ppuVar8 = ppuStack_1000;
        dVar52 = *(double *)((long)pppuStack_1030 + (long)*(int *)((long)ppuStack_f78 + 0x7c));
        dVar54 = *(double *)((long)pppuStack_1030 + (long)*(int *)((long)ppuStack_f78 + 0x54));
        dVar55 = *(double *)((long)pppuStack_1030 + (long)*(int *)(ppuStack_f78 + 0xb));
        uVar15 = *(undefined8 *)((long)pppuStack_1030 + (long)*(int *)((long)ppuStack_f78 + 0x5c));
        func_0x0001015411f0(lStack_f58,ppuStack_1000,0x112d3bc20,&UNK_10d904ef0);
        ppuVar7 = ppuStack_1038;
        pppuVar30 = pppuStack_1050;
        pppuVar17 = (undefined8 ***)pppuStack_1050[6];
        lVar43 = 1;
        pppuVar47 = (undefined8 ***)ppuVar8;
        (*(code *)pppuVar17)(ppuVar8,1,ppuStack_1038);
        if ((int)pppuVar47 == 1) {
          FUN_101541480(ppuVar8,0x112d3bc20,&UNK_10d904ef0);
          ppuStack_f50 = (undefined8 ***)0x0;
          lStack_f60 = 0;
        }
        else {
          func_0x000107c5eeac();
          lStack_f60 = lVar43;
          ppuStack_f50 = pppuVar47;
          (*(code *)pppuVar30[1])(ppuVar8,ppuVar7);
        }
        lVar43 = lStack_ff0;
        ppuStack_f70 = pppuStack_1030[4];
        pppuVar47 = (undefined8 ***)pppuStack_1030[5];
        func_0x0001015411f0(lVar13,lStack_ff0,0x112d3bc20,&UNK_10d904ef0);
        lVar46 = 1;
        lVar13 = lVar43;
        (*(code *)pppuVar17)(lVar43,1,ppuVar7);
        ppuStack_fa8 = pppuVar47;
        func_0x000107c61434();
        if ((int)lVar13 == 1) {
          FUN_101541480(lVar43,0x112d3bc20,&UNK_10d904ef0);
          pppuVar47 = (undefined8 ***)0x0;
          lStack_fb0 = 0;
        }
        else {
          func_0x000107c5eeac();
          lStack_fb0 = lVar46;
          (*(code *)pppuVar30[1])(lVar43,ppuVar7);
        }
        pppuVar17 = pppuStack_1030;
        ppuVar8 = ppuStack_1040;
        ppuStack_fb8 = pppuStack_1030[6];
        ppuStack_fd8 = pppuStack_1030[7];
        (*(code *)ppuStack_1040)(pppuStack_fd0,1,1,ppuVar7);
        (*(code *)ppuVar8)(pppuStack_fc8,1,1,ppuVar7);
        (*(code *)ppuVar8)(ppuStack_fc0,1,1,ppuVar7);
        pppuVar30 = (undefined8 ***)0x112db3a18;
        func_0x0001000285a8(0x112db3a18,&UNK_10d95dda0);
        bVar27 = *(byte *)(ppuStack_f68 + 10);
        func_0x000107c613fc();
        pppuVar30[3] = (undefined8 **)0x2;
        pppuVar30[2] = (undefined8 **)0x1;
        ppuStack_f68 = pppuVar30;
        FUN_101541068(puStack_fa0,
                      (long)pppuVar30 +
                      ((ulong)bVar27 + 0x20 & ((ulong)bVar27 ^ 0xffffffffffffffff)));
        func_0x0001015410ac(&uStack_380);
        uStack_488 = uStack_318;
        uStack_490 = uStack_320;
        uStack_478 = uStack_308;
        uStack_480 = uStack_310;
        uStack_468 = uStack_2f8;
        uStack_470 = uStack_300;
        uStack_458 = uStack_2e8;
        uStack_460 = uStack_2f0;
        uStack_4c8 = uStack_358;
        uStack_4d0 = uStack_360;
        uStack_4b8 = uStack_348;
        uStack_4c0 = uStack_350;
        uStack_4a8 = uStack_338;
        uStack_4b0 = uStack_340;
        uStack_498 = uStack_328;
        uStack_4a0 = uStack_330;
        uStack_4e8 = uStack_378;
        uStack_4f0 = uStack_380;
        uStack_4d8 = uStack_368;
        uStack_4e0 = uStack_370;
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x34));
        uStack_f08 = puVar14[1];
        uStack_f10 = *puVar14;
        uStack_ef8 = puVar14[3];
        uStack_f00 = puVar14[2];
        uStack_ef0 = puVar14[4];
        func_0x000107c610b4(&pppuStack_2d0,(long)pppuVar17 + (long)*(int *)(ppuVar10 + 7),0x160);
        plVar1 = (long *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x3c));
        lStack_fe0 = *plVar1;
        ppuStack_1000 = (undefined8 **)plVar1[1];
        lStack_ff0 = *(long *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 8));
        lVar13 = ((long *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 8)))[1];
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x44));
        ppuStack_ff8 = (undefined8 **)*puVar14;
        uVar19 = puVar14[1];
        uVar16 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 9));
        uVar40 = ((undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 9)))[1];
        lVar43 = 0;
        func_0x000100b91fbc();
        ppuVar8 = ppuStack_fe8;
        (**(code **)(*(long *)(lVar43 + -8) + 0x38))(ppuStack_fe8,1,1,lVar43);
        func_0x0001015410d0(&uStack_a08);
        ppuVar9 = ppuStack_fd8;
        uStack_8b8 = uStack_990;
        uStack_8c0 = uStack_998;
        uStack_8a8 = uStack_980;
        uStack_8b0 = uStack_988;
        uStack_898 = uStack_970;
        uStack_8a0 = uStack_978;
        uStack_8f8 = uStack_9d0;
        uStack_900 = uStack_9d8;
        uStack_8e8 = uStack_9c0;
        uStack_8f0 = uStack_9c8;
        uStack_890 = uStack_968;
        uStack_8d8 = uStack_9b0;
        uStack_8e0 = uStack_9b8;
        uStack_8c8 = uStack_9a0;
        uStack_8d0 = uStack_9a8;
        uStack_928 = uStack_a00;
        uStack_930 = uStack_a08;
        uVar53 = *(undefined4 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 0xd));
        uStack_918 = uStack_9f0;
        uStack_920 = uStack_9f8;
        uStack_908 = uStack_9e0;
        uStack_910 = uStack_9e8;
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x6c));
        uStack_7c8 = puVar14[0x11];
        uStack_7d0 = puVar14[0x10];
        uStack_7b8 = puVar14[0x13];
        uStack_7c0 = puVar14[0x12];
        uStack_7b0 = puVar14[0x14];
        uStack_7a8 = (undefined1)puVar14[0x15];
        uStack_79f = *(undefined8 *)((long)puVar14 + 0xb1);
        uStack_7a7 = (undefined7)*(undefined8 *)((long)puVar14 + 0xa9);
        uStack_7a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 0xa9) >> 0x38);
        uStack_808 = puVar14[9];
        uStack_810 = puVar14[8];
        uStack_7f8 = puVar14[0xb];
        uStack_800 = puVar14[10];
        uStack_7e8 = puVar14[0xd];
        uStack_7f0 = puVar14[0xc];
        uStack_7d8 = puVar14[0xf];
        uStack_7e0 = puVar14[0xe];
        uStack_848 = puVar14[1];
        uStack_850 = *puVar14;
        uStack_838 = puVar14[3];
        uStack_840 = puVar14[2];
        uStack_828 = puVar14[5];
        uStack_830 = puVar14[4];
        uStack_818 = puVar14[7];
        uStack_820 = puVar14[6];
        uVar3 = *(undefined1 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 0xc));
        uVar51 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x74));
        func_0x000107c61434(ppuStack_fd8);
        func_0x0001015411f0(&uStack_f10,&pppuStack_d10,0x112db3a20,&UNK_10dce2ac0);
        func_0x0001015411f0(&pppuStack_2d0,&pppuStack_d10,0x112db3a28,&UNK_10d95ddb0);
        func_0x000107c61434(uVar19);
        ppuVar7 = ppuStack_1000;
        func_0x000107c61434(ppuStack_1000);
        func_0x000107c61434(lVar13);
        FUN_100de78a0(uVar16,uVar40);
        *(undefined1 *)(lVar28 + -0x28) = 2;
        uVar39 = uStack_1058;
        *(undefined8 *)(lVar28 + -0x48) = uVar51;
        *(ulong *)(lVar28 + -0x40) = uVar39;
        *(undefined8 *)(lVar28 + -0x78) = 3;
        *(undefined1 *)(lVar28 + -0x88) = uVar3;
        *(undefined8 **)(lVar28 + -0x98) = &uStack_850;
        *(undefined8 **)(lVar28 + -0x38) = &uStack_930;
        *(undefined8 **)(lVar28 + -0x30) = &uStack_930;
        *(undefined8 ***)(lVar28 + -0xb0) = ppuVar8;
        *(undefined8 **)(lVar28 + -0xa8) = &uStack_930;
        *(undefined8 *)(lVar28 + -0xc0) = uVar16;
        *(undefined8 *)(lVar28 + -0xb8) = uVar40;
        *(undefined8 *)(lVar28 + -200) = uVar19;
        ppuVar8 = ppuStack_ff8;
        *(long *)(lVar28 + -0xd8) = lVar13;
        *(undefined8 ***)(lVar28 + -0xd0) = ppuVar8;
        lVar13 = lStack_ff0;
        *(undefined8 ***)(lVar28 + -0xe8) = ppuVar7;
        *(long *)(lVar28 + -0xe0) = lVar13;
        *(long *)(lVar28 + -0xf0) = lStack_fe0;
        *(undefined8 *)(lVar28 + -0x100) = 0xf000000000000000;
        *(undefined8 *****)(lVar28 + -0x110) = &pppuStack_2d0;
        *(undefined8 **)(lVar28 + -0x118) = &uStack_f10;
        *(undefined8 **)(lVar28 + -0x128) = &uStack_4f0;
        ppuVar7 = ppuStack_f68;
        *(undefined8 *)(lVar28 + -0x150) = 7;
        *(undefined8 ***)(lVar28 + -0x148) = ppuVar7;
        *(undefined8 ***)(lVar28 + -0x158) = ppuStack_fc0;
        *(undefined8 ****)(lVar28 + -0x160) = pppuStack_fc8;
        *(undefined8 ****)(lVar28 + -0x168) = pppuStack_fd0;
        *(undefined8 ***)(lVar28 + -0x180) = ppuVar9;
        *(undefined8 ***)(lVar28 + -0x188) = ppuStack_fb8;
        *(long *)(lVar28 + -400) = lStack_fb0;
        *(undefined1 *)(lVar28 + -0x120) = 1;
        *(undefined8 *)(lVar28 + -0x70) = 1;
        *(undefined8 *)(lVar28 + -0x68) = 0;
        *(undefined8 *)(lVar28 + -0x90) = 0;
        *(undefined1 *)(lVar28 + -0x10) = 0;
        *(undefined8 *)(lVar28 + -0x18) = 0;
        *(undefined8 *)(lVar28 + -0x20) = 0;
        *(undefined8 *)(lVar28 + -0x58) = 0;
        *(undefined8 *)(lVar28 + -0x50) = 0;
        *(undefined8 *)(lVar28 + -0x60) = 0;
        *(undefined8 *)(lVar28 + -0x80) = 0;
        *(undefined1 *)(lVar28 + -0xa0) = 0;
        *(undefined1 *)(lVar28 + -0xf8) = 0;
        *(undefined8 *)(lVar28 + -0x108) = 0;
        *(undefined8 *)(lVar28 + -0x130) = 0;
        *(undefined8 *)(lVar28 + -0x138) = 0;
        *(undefined8 *)(lVar28 + -0x140) = 0;
        *(undefined8 *)(lVar28 + -0x170) = 0;
        *(undefined8 *)(lVar28 + -0x178) = 0;
        func_0x0001046ca7e0(uStack_f48,dVar52,dVar52 + dVar54,dVar52 + dVar55,uVar15,uVar53,
                            uStack_f98,ppuStack_f90,ppuStack_f80,ppuStack_f50,lStack_f60,
                            ppuStack_f70,ppuStack_fa8,pppuVar47);
        func_0x00010006c090(pppuStack_1018,ppuStack_1008);
        func_0x000107c61574(ppuStack_1010);
        func_0x0001000b44c0(pppuStack_1020,ppuStack_1048);
        func_0x0001015414f4(puStack_fa0,&SUB_1046d90b0);
LAB_10153e780:
        FUN_101541480(lStack_f88,0x112d3bc20,&UNK_10d904ef0);
        FUN_101541480(lStack_f58,0x112d3bc20,&UNK_10d904ef0);
        func_0x000107c61170(ppuStack_1028);
        ppppuVar32 = &pppuStack_d10;
        goto LAB_10153cabc;
      }
      pppuStack_fd0 = ppppuVar20;
      if (((int)ppppuVar20 != 0x17) && (*(long *)(unaff_x20 + 0x40) != 0)) {
        func_0x000107c4be2c();
      }
      func_0x00010155ce20(ppppuVar32,ppuStack_1008,ppuVar7);
      ppuStack_fc0 = ppppuVar32[2];
      puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar13 = lStack_f60;
      if ((undefined8 ***)ppuStack_fc0 != (undefined8 ***)0x0) {
        pppuVar30 = (undefined8 ***)0x0;
        ppppuVar20 = ppppuVar32 + 6;
        pppuStack_fc8 = ppppuVar32;
        do {
          if (pppuStack_fc8[2] <= pppuVar30) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7c4);
            (*pcVar11)();
          }
          pppuVar47 = ppppuVar20[-2];
          pppuVar17 = ppppuVar20[-1];
          pppuVar50 = *ppppuVar20;
          uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
          lVar13 = *(long *)(unaff_x20 + 0x30);
          puStack_fa0 = puVar31;
          func_0x0001000a8868(unaff_x20 + 0x10,uVar15);
          pcVar11 = *(code **)(lVar13 + 8);
          func_0x00010006c00c(pppuVar47,pppuVar17);
          func_0x000107c6157c(pppuVar50);
          *(undefined8 *)(lVar28 + -0x10) = uVar15;
          *(long *)(lVar28 + -8) = lVar13;
          pppuVar45 = pppuVar47;
          (*pcVar11)(pppuVar47,pppuVar17,pppuVar50,pppuStack_1018,ppuStack_1008,ppuStack_1010,
                     ppuStack_1028,lStack_f58);
          if (pppuVar45 == (undefined8 ***)0x0) {
            func_0x00010006c090(pppuVar47,pppuVar17);
            func_0x000107c61574(pppuVar50);
            puVar31 = puStack_fa0;
            puVar14 = puStack_f38;
            ppppuVar48 = (undefined8 ****)pppuStack_1020;
            lVar13 = lStack_f60;
          }
          else {
            func_0x000107c61174();
            ppuVar7 = ppuStack_f70;
            func_0x0001047c15e8(ppuStack_f70);
            func_0x00010006c090(pppuVar47,pppuVar17);
            func_0x000107c61170(pppuVar45);
            func_0x000107c61574(pppuVar50);
            func_0x000101541530(ppuVar7,ppuStack_f50,&SUB_1046d90b0);
            puVar31 = puStack_fa0;
            puVar21 = puStack_fa0;
            func_0x000107c61558();
            puVar22 = puVar31;
            if (((ulong)puVar21 & 1) == 0) {
              puVar22 = (undefined *)0x0;
              FUN_1015407a8(0,*(long *)(puVar31 + 0x10) + 1,1,puVar31,0x112db3a18,&UNK_10d95dda0,
                            &SUB_1046d90b0);
            }
            puVar14 = puStack_f38;
            lVar13 = lStack_f60;
            ppppuVar48 = (undefined8 ****)pppuStack_1020;
            uVar39 = *(ulong *)(puVar22 + 0x10);
            puVar31 = puVar22;
            if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar39) {
              puVar31 = (undefined *)(ulong)(1 < *(ulong *)(puVar22 + 0x18));
              FUN_1015407a8(puVar31,uVar39 + 1,1,puVar22,0x112db3a18,&UNK_10d95dda0,&SUB_1046d90b0);
            }
            *(ulong *)(puVar31 + 0x10) = uVar39 + 1;
            func_0x000101541530(ppuStack_f50,
                                puVar31 + (long)ppuStack_f68[9] * uVar39 +
                                          ((ulong)*(byte *)(ppuStack_f68 + 10) + 0x20 &
                                          ((ulong)*(byte *)(ppuStack_f68 + 10) ^ 0xffffffffffffffff)
                                          ),&SUB_1046d90b0);
          }
          pppuVar30 = (undefined8 ***)((long)pppuVar30 + 1);
          ppppuVar20 = ppppuVar20 + 3;
        } while ((undefined8 ***)ppuStack_fc0 != pppuVar30);
      }
      func_0x000107c6142c();
      ppuVar8 = ppuStack_1008;
      ppuVar7 = ppuStack_1010;
      ppppuVar32 = (undefined8 ****)pppuStack_1018;
      if (*(long *)(puVar31 + 0x10) != 0) {
        pppuVar30 = (undefined8 ***)ppuStack_1008;
        puStack_fa0 = puVar31;
        FUN_10153ed38(auStack_aa8,pppuStack_fd0,unaff_x20,pppuStack_1018,ppuStack_1008,ppuStack_1010
                      ,&ppuStack_f18);
        ppppuVar48 = ppppuVar32;
        FUN_10155d0c8(ppppuVar32,ppuVar8,ppuVar7);
        lVar43 = lStack_f58;
        if (((ulong)ppppuVar48 & 1) == 0) {
          func_0x0001015410d0(&uStack_dc0);
        }
        else {
          FUN_10155cea0(&uStack_a08,ppppuVar32,ppuVar8,ppuVar7);
          func_0x00010153f658(&uStack_dc0,&uStack_a08,ppuStack_1028);
          func_0x0001015412dc(&uStack_a08);
        }
        ppuVar10 = ppuStack_f78;
        uStack_518 = uStack_d38;
        uStack_520 = uStack_d40;
        uStack_508 = uStack_d28;
        uStack_510 = uStack_d30;
        uStack_500 = uStack_d20;
        uStack_548 = uStack_d68;
        uStack_550 = uStack_d70;
        uStack_538 = uStack_d58;
        uStack_540 = uStack_d60;
        uStack_528 = uStack_d48;
        uStack_530 = uStack_d50;
        uStack_598 = uStack_db8;
        uStack_5a0 = uStack_dc0;
        uStack_588 = uStack_da8;
        uStack_590 = uStack_db0;
        uStack_578 = uStack_d98;
        uStack_580 = uStack_da0;
        uStack_570 = uStack_d90;
        ppppuVar48 = ppppuVar32;
        FUN_10155d928(ppppuVar32,ppuVar8,ppuVar7);
        if (((ulong)ppppuVar48 & 1) == 0) {
          func_0x0001015410d0(&uStack_e68);
        }
        else {
          FUN_10155d704(&uStack_930,ppppuVar32,ppuVar8,ppuVar7);
          func_0x00010153f658(&uStack_e68,&uStack_930,ppuStack_1028);
          func_0x0001015412dc(&uStack_930);
        }
        uStack_3a8 = uStack_de0;
        uStack_3b0 = uStack_de8;
        uStack_398 = uStack_dd0;
        uStack_3a0 = uStack_dd8;
        uStack_390 = uStack_dc8;
        uStack_3e8 = uStack_e20;
        uStack_3f0 = uStack_e28;
        uStack_3d8 = uStack_e10;
        uStack_3e0 = uStack_e18;
        uStack_3c8 = uStack_e00;
        uStack_3d0 = uStack_e08;
        uStack_3b8 = uStack_df0;
        uStack_3c0 = uStack_df8;
        uStack_428 = uStack_e60;
        uStack_430 = uStack_e68;
        uStack_418 = uStack_e50;
        uStack_420 = uStack_e58;
        uStack_408 = uStack_e40;
        uStack_410 = uStack_e48;
        uStack_3f8 = uStack_e30;
        uStack_400 = uStack_e38;
        ppppuVar48 = ppppuVar32;
        FUN_10155defc(ppppuVar32,ppuVar8,ppuVar7);
        if (((ulong)ppppuVar48 & 1) == 0) {
          func_0x0001015410d0(&uStack_f10);
        }
        else {
          FUN_10155dcd4(&uStack_850,ppppuVar32,ppuVar8,ppuVar7);
          func_0x00010153f658(&uStack_f10,&uStack_850,ppuStack_1028);
          func_0x0001015412dc(&uStack_850);
        }
        uStack_2f8 = uStack_e88;
        uStack_300 = uStack_e90;
        uStack_2e8 = uStack_e78;
        uStack_2f0 = uStack_e80;
        uStack_2e0 = uStack_e70;
        uStack_338 = uStack_ec8;
        uStack_340 = uStack_ed0;
        uStack_328 = uStack_eb8;
        uStack_330 = uStack_ec0;
        uStack_318 = uStack_ea8;
        uStack_320 = uStack_eb0;
        uStack_308 = uStack_e98;
        uStack_310 = uStack_ea0;
        uStack_378 = uStack_f08;
        uStack_380 = uStack_f10;
        uStack_368 = uStack_ef8;
        uStack_370 = uStack_f00;
        uStack_358 = uStack_ee8;
        uStack_360 = uStack_ef0;
        uStack_348 = uStack_ed8;
        uStack_350 = uStack_ee0;
        ppppuVar48 = ppppuVar32;
        pppuVar47 = (undefined8 ***)ppuVar8;
        FUN_10155d568(&uStack_770,ppppuVar32,ppuVar8,ppuVar7);
        uStack_628 = uStack_768;
        uStack_630 = uStack_770;
        uStack_618 = uStack_758;
        uStack_620 = uStack_760;
        uStack_608 = uStack_748;
        uStack_610 = uStack_750;
        if (uStack_768 >> 0x3c < 0xf) {
          func_0x00010154126c(&uStack_630,auStack_600);
          pppuVar17 = (undefined8 ***)ppuVar7;
          func_0x00010155d5e4(appuStack_740,ppppuVar32,ppuVar8);
          ppppuVar48 = (undefined8 ****)appuStack_740;
          pppuVar47 = (undefined8 ***)ppuStack_1028;
          func_0x00010153fbc4();
          ppuStack_f70 = pppuVar30;
          ppuStack_f68 = pppuVar17;
          ppuStack_f50 = pppuVar47;
          func_0x0001015412a8(appuStack_740);
          FUN_101541480(&uStack_770,0x112db3a10,&UNK_10d95dd98);
        }
        else {
          func_0x000104041e50();
          if (((ulong)ppppuVar48 & 1) == 0) {
            ppppuVar48 = (undefined8 ****)0x0;
            ppuStack_f50 = (undefined8 ***)0x0;
          }
          else {
            func_0x000104041e40();
            ppuStack_f50 = pppuVar47;
          }
          ppuStack_f70 = (undefined8 ***)0x0;
          ppuStack_f68 = (undefined8 ***)0x0;
          ppppuVar32 = (undefined8 ****)pppuStack_1018;
        }
        lVar46 = lStack_fe0;
        ppppuVar20 = ppppuVar32;
        FUN_10155e510(ppppuVar32,ppuVar8,ppuVar7);
        if (((ulong)ppppuVar20 & 1) == 0) {
          uVar34 = 2;
        }
        else {
          FUN_10155e2e8(&pppuStack_710,ppppuVar32,ppuVar8,ppuVar7);
          func_0x000101541238(&pppuStack_710);
          bVar5 = 4 < uStack_6c8;
          if ((char)uStack_6c0 != '\x01') {
            bVar5 = uStack_6c8 == 5;
          }
          uVar34 = (uint)bVar5;
        }
        ppuVar8 = ppuStack_fd8;
        lStack_fe0 = CONCAT44(lStack_fe0._4_4_,uVar34);
        dVar52 = *(double *)((long)pppuStack_1030 + (long)*(int *)((long)ppuVar10 + 0x7c));
        dVar54 = *(double *)((long)pppuStack_1030 + (long)*(int *)(ppuVar10 + 10));
        dVar55 = *(double *)((long)pppuStack_1030 + (long)*(int *)(ppuVar10 + 0xb));
        uVar15 = *(undefined8 *)((long)pppuStack_1030 + (long)*(int *)((long)ppuVar10 + 0x5c));
        func_0x0001015411f0(lVar43,lVar46,0x112d3bc20,&UNK_10d904ef0);
        ppuVar7 = ppuStack_1038;
        pppuVar30 = pppuStack_1050;
        pppuVar45 = (undefined8 ***)pppuStack_1050[6];
        pppuVar17 = (undefined8 ***)0x1;
        lVar43 = lVar46;
        (*(code *)pppuVar45)(lVar46,1,ppuStack_1038);
        pppuVar47 = (undefined8 ***)ppuStack_f80;
        func_0x000107c61434();
        if ((int)lVar43 == 1) {
          FUN_101541480(lVar46,0x112d3bc20,&UNK_10d904ef0);
          ppuStack_f78 = (undefined8 ***)0x0;
          ppuStack_fc0 = (undefined8 ***)0x0;
        }
        else {
          func_0x000107c5eeac();
          ppuStack_fc0 = pppuVar17;
          ppuStack_f78 = pppuVar47;
          (*(code *)pppuVar30[1])(lVar46,ppuVar7);
        }
        pppuStack_fc8 = (undefined8 ***)pppuStack_1030[4];
        pppuVar30 = (undefined8 ***)pppuStack_1030[5];
        func_0x0001015411f0(lStack_f88,ppuVar8,0x112d3bc20,&UNK_10d904ef0);
        lVar43 = 1;
        pppuVar47 = (undefined8 ***)ppuVar8;
        (*(code *)pppuVar45)(ppuVar8,1,ppuVar7);
        ppuStack_fd8 = pppuVar30;
        func_0x000107c61434();
        if ((int)pppuVar47 == 1) {
          FUN_101541480(ppuVar8,0x112d3bc20,&UNK_10d904ef0);
          lStack_ff0 = 0;
          ppuStack_fe8 = (undefined8 ***)0x0;
        }
        else {
          func_0x000107c5eeac();
          lStack_ff0 = lVar43;
          ppuStack_fe8 = pppuVar30;
          (*(code *)pppuStack_1050[1])(ppuVar8,ppuVar7);
        }
        pppuVar17 = pppuStack_1030;
        ppuStack_ff8 = pppuStack_1030[6];
        pppuVar30 = (undefined8 ***)pppuStack_1030[7];
        ppuStack_1038 = pppuStack_1030[8];
        pppuVar47 = (undefined8 ***)pppuStack_1030[9];
        func_0x0001015411f0((long)pppuStack_1030 + (long)*(int *)((long)ppuVar10 + 0x24),
                            ppuStack_fb8,0x112d3bc20,&UNK_10d904ef0);
        func_0x0001015411f0((long)pppuVar17 + (long)*(int *)(ppuVar10 + 5),lStack_fb0,0x112d3bc20,
                            &UNK_10d904ef0);
        func_0x0001015411f0((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x2c),ppuStack_fa8,
                            0x112d3bc20,&UNK_10d904ef0);
        ppuVar8 = ppuStack_1008;
        ppuVar7 = ppuStack_1010;
        pppuVar45 = pppuStack_1018;
        ppppuVar32 = (undefined8 ****)pppuStack_1018;
        func_0x00010155cda0(pppuStack_1018,ppuStack_1008,ppuStack_1010);
        ppppuVar20 = (undefined8 ****)pppuVar45;
        pppuStack_1050 = ppppuVar32;
        func_0x00010155cde0(pppuVar45,ppuVar8,ppuVar7);
        ppppuVar32 = (undefined8 ****)pppuVar45;
        pppuStack_1060 = ppppuVar20;
        func_0x00010155ce60(pppuVar45,ppuVar8,ppuVar7);
        ppuStack_1040 = pppuVar47;
        func_0x000107c61434(pppuVar47);
        ppuStack_1000 = pppuVar30;
        func_0x000107c61434(pppuVar30);
        ppppuVar20 = ppppuVar32;
        FUN_1015410f0();
        pppuStack_1068 = ppppuVar20;
        func_0x000107c6142c(ppppuVar32);
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x34));
        uStack_5c8 = puVar14[1];
        uStack_5d0 = *puVar14;
        uStack_5b8 = puVar14[3];
        uStack_5c0 = puVar14[2];
        uStack_5b0 = puVar14[4];
        func_0x000107c610b4(&pppuStack_2d0,(long)pppuVar17 + (long)*(int *)(ppuVar10 + 7),0x160);
        ppppuVar32 = (undefined8 ****)pppuVar45;
        func_0x00010155d4f0(pppuVar45,ppuVar8,ppuVar7);
        uStack_1074 = SUB84(ppppuVar32,0);
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x3c));
        uStack_1080 = *puVar14;
        uStack_1070 = puVar14[1];
        uStack_10a0 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 8));
        uStack_1088 = ((undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 8)))[1];
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x44));
        uStack_10b0 = *puVar14;
        uVar16 = puVar14[1];
        uStack_1090 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 9));
        uStack_1098 = ((undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 9)))[1];
        func_0x0001015411f0((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 100),lVar13,
                            0x112db39a8,&UNK_10d95dd90);
        uVar53 = *(undefined4 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 0xd));
        ppppuVar32 = (undefined8 ****)pppuVar45;
        func_0x00010155d4b4(pppuVar45,ppuVar8,ppuVar7);
        uStack_10a4 = SUB84(ppppuVar32,0);
        puVar14 = (undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x6c));
        uStack_468 = puVar14[0x11];
        uStack_470 = puVar14[0x10];
        uStack_458 = puVar14[0x13];
        uStack_460 = puVar14[0x12];
        uStack_450 = puVar14[0x14];
        uStack_448 = (undefined1)puVar14[0x15];
        uStack_43f = *(undefined8 *)((long)puVar14 + 0xb1);
        uStack_447 = (undefined7)*(undefined8 *)((long)puVar14 + 0xa9);
        uStack_440 = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 0xa9) >> 0x38);
        uStack_4a8 = puVar14[9];
        uStack_4b0 = puVar14[8];
        uStack_498 = puVar14[0xb];
        uStack_4a0 = puVar14[10];
        uStack_488 = puVar14[0xd];
        uStack_490 = puVar14[0xc];
        uStack_478 = puVar14[0xf];
        uStack_480 = puVar14[0xe];
        uStack_4e8 = puVar14[1];
        uStack_4f0 = *puVar14;
        uStack_4d8 = puVar14[3];
        uStack_4e0 = puVar14[2];
        uStack_4c8 = puVar14[5];
        uStack_4d0 = puVar14[4];
        uStack_4b8 = puVar14[7];
        uStack_4c0 = puVar14[6];
        uStack_10b4 = (uint)*(byte *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 0xc));
        ppppuVar32 = (undefined8 ****)pppuVar45;
        func_0x00010155d52c(pppuVar45,ppuVar8,ppuVar7);
        if (0x17 < uStack_f98) {
          auStack_f28[0] = uStack_f98;
          func_0x0001015411f0(&uStack_5d0,&pppuStack_d10,0x112db3a20,&UNK_10dce2ac0);
          func_0x0001015411f0(&pppuStack_2d0,&pppuStack_d10,0x112db3a28,&UNK_10d95ddb0);
          func_0x000107c61434(uVar16);
          func_0x000107c61434(uStack_1070);
          func_0x000107c61434(uStack_1088);
          FUN_100de78a0(uStack_1090,uStack_1098);
          func_0x000107c60614(&UNK_1107a1dc0,auStack_f28,&UNK_1107a1dc0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e8a4);
          (*pcVar11)();
        }
        uStack_10c0 = *(undefined8 *)(&UNK_10d95def8 + uStack_f98 * 8);
        uStack_10c8 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)(ppuVar10 + 0xf));
        uStack_10d0 = *(undefined8 *)((long)pppuVar17 + (long)*(int *)((long)ppuVar10 + 0x74));
        ppppuVar20 = (undefined8 ****)pppuVar45;
        FUN_10155e938(pppuVar45,ppuVar8,ppuVar7);
        lStack_10d8 = (long)(int)ppppuVar32;
        ppppuVar32 = (undefined8 ****)pppuVar45;
        pppuStack_1030 = ppppuVar20;
        func_0x00010155d688(pppuVar45,ppuVar8,ppuVar7);
        pppuVar30 = pppuStack_1020;
        ppuVar7 = ppuStack_1048;
        FUN_100de78a0(pppuStack_1020,ppuStack_1048);
        func_0x0001015411f0(&uStack_5d0,&pppuStack_d10,0x112db3a20,&UNK_10dce2ac0);
        func_0x0001015411f0(&pppuStack_2d0,&pppuStack_d10,0x112db3a28,&UNK_10d95ddb0);
        func_0x000107c61434(uVar16);
        uVar6 = uStack_1070;
        func_0x000107c61434(uStack_1070);
        uVar51 = uStack_1088;
        func_0x000107c61434(uStack_1088);
        uVar40 = uStack_1090;
        uVar19 = uStack_1098;
        FUN_100de78a0(uStack_1090,uStack_1098);
        *(byte *)(lVar28 + -0x10) = (byte)ppppuVar32 & 1;
        *(char *)(lVar28 + -0x28) = (char)lStack_fe0;
        *(undefined8 *)(lVar28 + -0x48) = uStack_10d0;
        *(undefined8 ***)(lVar28 + -0x50) = ppuStack_f70;
        *(undefined8 ***)(lVar28 + -0x58) = ppuStack_f68;
        *(undefined8 ***)(lVar28 + -0x60) = ppuStack_f50;
        *(undefined8 *****)(lVar28 + -0x68) = ppppuVar48;
        *(undefined8 *)(lVar28 + -0x70) = uStack_10c8;
        *(undefined8 *)(lVar28 + -0x78) = uStack_10c0;
        *(long *)(lVar28 + -0x80) = lStack_10d8;
        *(char *)(lVar28 + -0x88) = (char)uStack_10b4;
        *(undefined8 *)(lVar28 + -0xc0) = uVar40;
        *(undefined8 *)(lVar28 + -0xb8) = uVar19;
        *(undefined8 *)(lVar28 + -200) = uVar16;
        uVar16 = uStack_10b0;
        *(undefined8 *)(lVar28 + -0xd8) = uVar51;
        *(undefined8 *)(lVar28 + -0xd0) = uVar16;
        *(undefined8 *)(lVar28 + -0xe0) = uStack_10a0;
        *(undefined8 *)(lVar28 + -0x18) = 0;
        *(undefined8 ****)(lVar28 + -0x20) = pppuStack_1030;
        *(undefined8 **)(lVar28 + -0x30) = &uStack_380;
        *(undefined8 **)(lVar28 + -0x38) = &uStack_430;
        *(ulong *)(lVar28 + -0x40) = uStack_1058;
        *(undefined8 **)(lVar28 + -0x98) = &uStack_4f0;
        *(undefined8 *)(lVar28 + -0x90) = 0;
        *(byte *)(lVar28 + -0xa0) = (byte)uStack_10a4 & 1;
        *(undefined8 **)(lVar28 + -0xa8) = &uStack_5a0;
        *(long *)(lVar28 + -0xb0) = lStack_f60;
        *(undefined8 *)(lVar28 + -0xe8) = uVar6;
        *(undefined8 *)(lVar28 + -0xf0) = uStack_1080;
        *(byte *)(lVar28 + -0xf8) = (byte)uStack_1074 & 1;
        *(undefined8 ****)(lVar28 + -0x108) = pppuVar30;
        *(undefined8 ***)(lVar28 + -0x100) = ppuVar7;
        *(undefined8 *****)(lVar28 + -0x110) = &pppuStack_2d0;
        *(undefined8 **)(lVar28 + -0x118) = &uStack_5d0;
        *(undefined1 *)(lVar28 + -0x120) = 1;
        *(undefined1 **)(lVar28 + -0x128) = auStack_aa8;
        *(undefined8 ****)(lVar28 + -0x130) = pppuStack_1068;
        *(undefined8 ****)(lVar28 + -0x138) = pppuStack_1060;
        *(undefined8 ****)(lVar28 + -0x140) = pppuStack_1050;
        *(undefined **)(lVar28 + -0x148) = puStack_fa0;
        *(undefined8 ****)(lVar28 + -0x150) = pppuStack_fd0;
        *(undefined8 ***)(lVar28 + -0x158) = ppuStack_fa8;
        *(long *)(lVar28 + -0x160) = lStack_fb0;
        *(undefined8 ***)(lVar28 + -0x168) = ppuStack_fb8;
        *(undefined8 ***)(lVar28 + -0x170) = ppuStack_1040;
        *(undefined8 ***)(lVar28 + -0x178) = ppuStack_1038;
        *(undefined8 ***)(lVar28 + -0x180) = ppuStack_1000;
        *(undefined8 ***)(lVar28 + -0x188) = ppuStack_ff8;
        *(long *)(lVar28 + -400) = lStack_ff0;
        func_0x0001046ca7e0(uStack_f48,dVar52,dVar52 + dVar54,dVar52 + dVar55,uVar15,uVar53,
                            uStack_f98,ppuStack_f90,ppuStack_f80,ppuStack_f78,ppuStack_fc0,
                            pppuStack_fc8,ppuStack_fd8,ppuStack_fe8);
        func_0x00010006c090(pppuVar45,ppuStack_1008);
        func_0x000107c61574(ppuStack_1010);
        func_0x0001000b44c0(pppuVar30,ppuVar7);
        goto LAB_10153e780;
      }
      func_0x000107c6142c(puVar31);
      FUN_10153e8a4(uStack_f48);
      func_0x00010006c090(pppuStack_1018,ppuStack_1008);
      func_0x000107c61574(ppuStack_1010);
      func_0x0001000b44c0(ppppuVar48,ppuStack_1048);
      FUN_101541480(lStack_f88,0x112d3bc20,&UNK_10d904ef0);
      FUN_101541480(lStack_f58,0x112d3bc20,&UNK_10d904ef0);
      func_0x000107c61170(ppuStack_1028);
      func_0x000107c61428(puVar14,&pppuStack_2d0,0,0);
      uVar15 = *puVar14;
      goto LAB_10153cad4;
    }
    if (uVar34 >> 0x1e == 0) {
      if (((ulong)pppuVar30 & 0xff000000000000) == 0) goto LAB_10153d0a0;
      uVar39 = (ulong)ppppuVar32 >> 8;
      uVar41 = (ulong)ppppuVar32 >> 0x10;
      uVar49 = (ulong)ppppuVar32 >> 0x18;
      uVar23 = (ulong)ppppuVar32 >> 0x20;
      uVar24 = (ulong)ppppuVar32 >> 0x28;
      uVar25 = (ulong)ppppuVar32 >> 0x30;
      uVar26 = (ulong)ppppuVar32 >> 0x38;
      bVar27 = (byte)((ulong)pppuVar30 >> 8);
      bVar29 = (byte)((ulong)pppuVar30 >> 0x10);
      bVar33 = (byte)((ulong)pppuVar30 >> 0x18);
      bVar35 = (byte)((ulong)pppuVar30 >> 0x28);
      ppppuVar20 = ppppuVar32;
      pppuVar47 = pppuVar30;
      bVar37 = extraout_w15;
      bVar36 = extraout_w14;
LAB_10153d180:
      *(byte *)(lVar28 + -9) = bVar37;
      *(byte *)(lVar28 + -10) = bVar36;
      *(byte *)(lVar28 + -0xb) = bVar35;
      *(char *)(lVar28 + -0xc) = (char)uVar34;
      *(byte *)(lVar28 + -0xd) = bVar33;
      *(byte *)(lVar28 + -0xe) = bVar29;
      *(byte *)(lVar28 + -0xf) = bVar27;
      *(char *)(lVar28 + -0x10) = (char)pppuVar47;
      lVar43 = lStack_f58;
      func_0x000107c5eebc(lStack_f58,ppppuVar20,uVar39,uVar41,uVar49,uVar23,uVar24,uVar25,uVar26);
      uVar15 = 0;
      goto LAB_10153d1b8;
    }
    pppuVar47 = (undefined8 ***)(long)(int)ppppuVar32;
    pppuVar45 = (undefined8 ***)((long)ppppuVar32 >> 0x20);
LAB_10153d098:
    if (pppuVar47 == pppuVar45) goto LAB_10153d0a0;
    if ((ulong)pppuVar30 >> 0x3e != 2) {
      lVar43 = (long)(int)ppppuVar32;
      if ((long)ppppuVar32 >> 0x20 < lVar43) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7d8);
        (*pcVar11)();
      }
      ppppuVar20 = ppppuVar32;
      func_0x000107c5ec30();
      if (ppppuVar20 == (undefined8 ****)0x0) {
        func_0x000107c5ec38();
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e814);
        (*pcVar11)();
      }
      ppppuVar18 = ppppuVar20;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar43,(long)ppppuVar18)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7e8);
        (*pcVar11)();
      }
      pbVar44 = (byte *)((lVar43 - (long)ppppuVar18) + (long)ppppuVar20);
      func_0x000107c5ec38();
      if (pbVar44 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e824);
        (*pcVar11)();
      }
LAB_10153d140:
      ppppuVar20 = (undefined8 ****)(ulong)*pbVar44;
      uVar39 = (ulong)pbVar44[1];
      uVar41 = (ulong)pbVar44[2];
      uVar49 = (ulong)pbVar44[3];
      uVar23 = (ulong)pbVar44[4];
      uVar24 = (ulong)pbVar44[5];
      uVar25 = (ulong)pbVar44[6];
      uVar26 = (ulong)pbVar44[7];
      pppuVar47 = (undefined8 ***)(ulong)pbVar44[8];
      bVar27 = pbVar44[9];
      bVar29 = pbVar44[10];
      bVar33 = pbVar44[0xb];
      uVar34 = (uint)pbVar44[0xc];
      bVar35 = pbVar44[0xd];
      bVar36 = pbVar44[0xe];
      bVar37 = pbVar44[0xf];
      goto LAB_10153d180;
    }
    pppuVar47 = ppppuVar32[2];
    ppppuVar20 = ppppuVar32;
    func_0x000107c5ec30();
    if (ppppuVar20 != (undefined8 ****)0x0) {
      ppppuVar18 = ppppuVar20;
      func_0x000107c5ec3c();
      if (SBORROW8((long)pppuVar47,(long)ppppuVar18)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7dc);
        (*pcVar11)();
      }
      pbVar44 = (byte *)(((long)pppuVar47 - (long)ppppuVar18) + (long)ppppuVar20);
      func_0x000107c5ec38();
      if (pbVar44 == (byte *)0x0) goto LAB_10153e7f8;
      goto LAB_10153d140;
    }
  }
  else {
LAB_10153ca8c:
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      func_0x000107c4be2c();
    }
    FUN_10153e8a4(uStack_f48);
LAB_10153cab0:
    func_0x000107c61170(lVar13);
    ppppuVar32 = &pppuStack_2d0;
LAB_10153cabc:
    puVar14 = puStack_f38;
    func_0x000107c61428(puStack_f38,ppppuVar32,0,0);
    uVar15 = *puVar14;
LAB_10153cad4:
    func_0x000107c61174(uVar15);
    func_0x0001000aa0a8(uStack_f40);
    func_0x000107c61170(uVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return;
    }
    func_0x000107c60e78();
  }
  func_0x000107c5ec38();
LAB_10153e7f8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10153e7fc);
  (*pcVar11)();
}



/* Entry: 10153e8a4; end: 10153ec4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10153e8a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long alStack_920 [14];
  undefined1 auStack_8b0 [8];
  long alStack_8a8 [4];
  undefined1 auStack_888 [8];
  long alStack_880 [10];
  undefined1 auStack_830 [8];
  long alStack_828 [2];
  undefined1 auStack_818 [8];
  long alStack_810 [11];
  undefined1 auStack_7b8 [8];
  undefined8 auStack_7b0 [2];
  undefined1 auStack_7a0 [16];
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 auStack_780 [352];
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
  undefined1 auStack_550 [352];
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
  undefined1 uStack_350;
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
  undefined8 uStack_28f;
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
  undefined1 uStack_138;
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
  undefined8 uStack_7f;
  
  lVar4 = 0x112db39a8;
  uStack_788 = param_1;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_790 - extraout_x8;
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar5 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  lVar4 = unaff_x20 + _DAT_112db39f8;
  uStack_790 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = 0;
  func_0x000107c5eec8();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar3);
  (*pcVar8)(lVar6,1,1,lVar3);
  (*pcVar8)(lVar5,1,1,lVar3);
  FUN_1015410ac(&uStack_278);
  uStack_5b8 = uStack_210;
  uStack_5c0 = uStack_218;
  uStack_5a8 = uStack_200;
  uStack_5b0 = uStack_208;
  uStack_598 = uStack_1f0;
  uStack_5a0 = uStack_1f8;
  uStack_588 = uStack_1e0;
  uStack_590 = uStack_1e8;
  uStack_5f8 = uStack_250;
  uStack_600 = uStack_258;
  uStack_5e8 = uStack_240;
  uStack_5f0 = uStack_248;
  uStack_5d8 = uStack_230;
  uStack_5e0 = uStack_238;
  uStack_5c8 = uStack_220;
  uStack_5d0 = uStack_228;
  uStack_618 = uStack_270;
  uStack_620 = uStack_278;
  uStack_608 = uStack_260;
  uStack_610 = uStack_268;
  lVar3 = 0;
  func_0x000103ddeef8();
  puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar3 + 0x34));
  uStack_578 = puVar1[1];
  uStack_580 = *puVar1;
  uStack_568 = puVar1[3];
  uStack_570 = puVar1[2];
  uStack_560 = puVar1[4];
  func_0x000107c610b4(auStack_550,lVar4 + *(int *)(lVar3 + 0x38),0x160);
  lVar4 = 0;
  func_0x000100b91fbc();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar9,1,1,lVar4);
  func_0x0001015410d0(&uStack_1d8);
  uStack_368 = uStack_150;
  uStack_370 = uStack_158;
  uStack_358 = uStack_140;
  uStack_360 = uStack_148;
  uStack_350 = uStack_138;
  uStack_3a8 = uStack_190;
  uStack_3b0 = uStack_198;
  uStack_398 = uStack_180;
  uStack_3a0 = uStack_188;
  uStack_378 = uStack_160;
  uStack_380 = uStack_168;
  uStack_388 = uStack_170;
  uStack_390 = uStack_178;
  uStack_3e8 = uStack_1d0;
  uStack_3f0 = uStack_1d8;
  uStack_3d8 = uStack_1c0;
  uStack_3e0 = uStack_1c8;
  uStack_3c8 = uStack_1b0;
  uStack_3d0 = uStack_1b8;
  uStack_3b8 = uStack_1a0;
  uStack_3c0 = uStack_1a8;
  FUN_1015415ac(&uStack_130);
  uStack_2b8 = uStack_a8;
  uStack_2c0 = uStack_b0;
  uStack_2a8 = uStack_98;
  uStack_2b0 = uStack_a0;
  uStack_2a0 = uStack_90;
  uStack_28f = uStack_7f;
  uStack_2f8 = uStack_e8;
  uStack_300 = uStack_f0;
  uStack_2e8 = uStack_d8;
  uStack_2f0 = uStack_e0;
  uStack_2d8 = uStack_c8;
  uStack_2e0 = uStack_d0;
  uStack_2c8 = uStack_b8;
  uStack_2d0 = uStack_c0;
  uStack_338 = uStack_128;
  uStack_340 = uStack_130;
  uStack_328 = uStack_118;
  uStack_330 = uStack_120;
  uStack_318 = uStack_108;
  uStack_320 = uStack_110;
  uStack_308 = uStack_f8;
  uStack_310 = uStack_100;
  func_0x000107c61434(uVar2);
  FUN_1015411f0(&uStack_580,auStack_780,0x112db3a20,&UNK_10dce2ac0);
  FUN_1015411f0(auStack_550,auStack_780,0x112db3a28,&UNK_10d95ddb0);
  *(undefined1 *)(lVar7 + -0x10) = 0;
  *(undefined8 *)(lVar7 + -0x18) = 0;
  *(undefined8 *)(lVar7 + -0x20) = 0;
  *(undefined1 *)(lVar7 + -0x28) = 2;
  *(undefined8 **)(lVar7 + -0x38) = &uStack_3f0;
  *(undefined8 **)(lVar7 + -0x30) = &uStack_3f0;
  *(undefined8 *)(lVar7 + -0x40) = 0;
  *(undefined8 *)(lVar7 + -0x58) = 0;
  *(undefined8 *)(lVar7 + -0x60) = 0;
  *(undefined8 *)(lVar7 + -0x48) = 0;
  *(undefined8 *)(lVar7 + -0x50) = 0;
  *(undefined8 *)(lVar7 + -0x68) = 0;
  *(undefined8 *)(lVar7 + -0x70) = 0;
  *(undefined8 *)(lVar7 + -0x80) = 0;
  *(undefined8 *)(lVar7 + -0x78) = 3;
  *(undefined1 *)(lVar7 + -0x88) = 0;
  *(undefined8 **)(lVar7 + -0x98) = &uStack_340;
  *(undefined8 *)(lVar7 + -0x90) = 0;
  *(undefined1 *)(lVar7 + -0xa0) = 0;
  *(long *)(lVar7 + -0xb0) = lVar9;
  *(undefined8 **)(lVar7 + -0xa8) = &uStack_3f0;
  *(undefined8 *)(lVar7 + -0xc0) = 0;
  *(undefined8 *)(lVar7 + -0xb8) = 0xf000000000000000;
  *(undefined8 *)(lVar7 + -0xd8) = 0;
  *(undefined8 *)(lVar7 + -0xe0) = 0;
  *(undefined8 *)(lVar7 + -200) = 0;
  *(undefined8 *)(lVar7 + -0xd0) = 0;
  *(undefined8 *)(lVar7 + -0xe8) = 0;
  *(undefined8 *)(lVar7 + -0xf0) = 0;
  *(undefined1 *)(lVar7 + -0xf8) = 0;
  *(undefined8 *)(lVar7 + -0x108) = 0;
  *(undefined8 *)(lVar7 + -0x100) = 0xf000000000000000;
  *(undefined8 **)(lVar7 + -0x118) = &uStack_580;
  *(undefined1 **)(lVar7 + -0x110) = auStack_550;
  *(undefined1 *)(lVar7 + -0x120) = 0;
  *(undefined8 **)(lVar7 + -0x128) = &uStack_620;
  *(undefined8 *)(lVar7 + -0x130) = 0;
  *(undefined8 *)(lVar7 + -0x138) = 0;
  *(undefined8 *)(lVar7 + -0x140) = 0;
  *(undefined8 *)(lVar7 + -0x148) = 0;
  *(undefined8 *)(lVar7 + -0x188) = 0;
  *(undefined8 *)(lVar7 + -400) = 0;
  *(undefined8 *)(lVar7 + -0x178) = 0;
  *(undefined8 *)(lVar7 + -0x180) = 0;
  *(long *)(lVar7 + -0x158) = lVar5;
  *(undefined8 *)(lVar7 + -0x150) = 0x17;
  *(long *)(lVar7 + -0x168) = lVar7;
  *(long *)(lVar7 + -0x160) = lVar6;
  *(undefined8 *)(lVar7 + -0x170) = 0;
  func_0x0001046ca7e0(uStack_788,0,0,0,0,0,10,uStack_790,uVar2,0,0,0,0,0);
  return;
}



/* Entry: 10153ec4c; end: 10153ec8b;  */

void FUN_10153ec4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db3a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95e8e0;
  func_0x000107c61520(&DAT_10d95e8e0,&UNK_1103dd178);
  puRam0000000112db3a08 = puVar1;
  return;
}



/* Entry: 10153ec8c; end: 10153ed37;  */

undefined8 FUN_10153ec8c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000103559d2c(param_2,param_3);
  uVar2 = 1;
  lVar1 = 6;
  func_0x000103559d2c(6,1);
  if ((param_2 != lVar1) && (*(long *)(param_1 + 0x10) != 1)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar2 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x40);
    }
    else {
      lVar1 = 7;
      func_0x000103559d2c(7,1);
      if (param_2 == lVar1) {
        return 1;
      }
      lVar1 = *(long *)(unaff_x20 + 0x40);
    }
    if (lVar1 != 0) {
      func_0x000107c4be2c();
    }
  }
  return uVar2;
}



/* Entry: 10153ed38; end: 1015402af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10153ed38(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  ulong extraout_x13;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [232];
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
  
  lVar3 = 0;
  uStack_210 = param_4;
  uStack_208 = param_5;
  lStack_200 = param_6;
  puStack_1f8 = param_7;
  func_0x000100b91fbc();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)&uStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112db3b70;
  lStack_218 = lVar11;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar12 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  if (param_2 != 5) {
    FUN_1015410ac(&uStack_108);
    goto LAB_10153f0ac;
  }
  uStack_220 = extraout_x13;
  FUN_10155caec(auStack_1f0,uStack_210,uStack_208,lStack_200);
  lVar1 = param_3 + _DAT_112db39f8;
  lVar4 = 0;
  lStack_200 = param_3;
  func_0x000103ddeef8();
  uStack_208 = *(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x4c));
  iVar2 = *(int *)(lVar4 + 100);
  (**(code **)(lVar8 + 0x38))(lVar12,1,1,lVar3);
  lVar7 = (long)*(int *)(lVar7 + 0x30);
  FUN_1015411f0(lVar1 + iVar2,lVar11,0x112db39a8,&UNK_10d95dd90);
  FUN_1015411f0(lVar12,lVar11 + lVar7,0x112db39a8,&UNK_10d95dd90);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar8 = lVar11;
  (*pcVar9)(lVar11,1,lVar3);
  if ((int)lVar8 == 1) {
    FUN_101541480(lVar12,0x112db39a8,&UNK_10d95dd90);
    lVar7 = lVar11 + lVar7;
    (*pcVar9)(lVar7,1,lVar3);
    if ((int)lVar7 != 1) {
LAB_10153efcc:
      FUN_101541480(lVar11,0x112db3b70,&UNK_10d95def0);
      uVar10 = (uint)lVar11;
      goto LAB_10153efe4;
    }
    FUN_101541480(lVar11,0x112db39a8,&UNK_10d95dd90);
LAB_10153f070:
    uVar10 = 0;
  }
  else {
    FUN_1015411f0(lVar11,uStack_220,0x112db39a8,&UNK_10d95dd90);
    lVar8 = lVar11 + lVar7;
    (*pcVar9)(lVar8,1,lVar3);
    lVar3 = lStack_218;
    if ((int)lVar8 == 1) {
      FUN_101541480(lVar12,0x112db39a8,&UNK_10d95dd90);
      func_0x0001015414f4(uStack_220,&SUB_100b91fbc);
      goto LAB_10153efcc;
    }
    func_0x000101541530(lVar11 + lVar7,lStack_218,&SUB_100b91fbc);
    uVar5 = uStack_220;
    func_0x000104841c50(uStack_220,lVar3);
    func_0x0001015414f4(lVar3,&SUB_100b91fbc);
    FUN_101541480(lVar12,0x112db39a8,&UNK_10d95dd90);
    func_0x0001015414f4(uStack_220,&SUB_100b91fbc);
    FUN_101541480(lVar11,0x112db39a8,&UNK_10d95dd90);
    uVar10 = (uint)lVar11;
    if ((uVar5 & 1) != 0) goto LAB_10153f070;
LAB_10153efe4:
    func_0x000104041e90();
  }
  uVar6 = *puStack_1f8;
  func_0x000107c61174(uVar6);
  func_0x00010153f0f4(&uStack_108,auStack_1f0,uStack_208,uVar10 & 1,uVar6);
  func_0x000107c61170(uVar6);
  func_0x0001015414c0(auStack_1f0);
LAB_10153f0ac:
  param_1[0xd] = uStack_a0;
  param_1[0xc] = uStack_a8;
  param_1[0xf] = uStack_90;
  param_1[0xe] = uStack_98;
  param_1[0x11] = uStack_80;
  param_1[0x10] = uStack_88;
  param_1[0x13] = uStack_70;
  param_1[0x12] = uStack_78;
  param_1[5] = uStack_e0;
  param_1[4] = uStack_e8;
  param_1[7] = uStack_d0;
  param_1[6] = uStack_d8;
  param_1[9] = uStack_c0;
  param_1[8] = uStack_c8;
  param_1[0xb] = uStack_b0;
  param_1[10] = uStack_b8;
  param_1[1] = uStack_100;
  *param_1 = uStack_108;
  param_1[3] = uStack_f0;
  param_1[2] = uStack_f8;
  return;
}



/* Entry: 1015402b0; end: 1015402cf;  */

void FUN_1015402b0(void)

{
  FUN_10153c548();
  return;
}



/* Entry: 1015402d0; end: 10154032b;  */

void FUN_1015402d0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001047c7534();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112db3b68;
  plVar5 = (long *)&UNK_10d95dee8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10154032c; end: 10154078b;  */

undefined * FUN_10154032c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101540434);
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
    puVar3 = (undefined *)0x112db3b30;
    func_0x0001000285a8(0x112db3b30,&UNK_10d95deb0);
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
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11079ca70);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10154078c; end: 1015407a7;  */

undefined * FUN_10154078c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = (undefined *)0x112db3b58;
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101540920);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001000285a8(0x112db3b58,&UNK_10d95ded8);
    lVar5 = 0;
    (*(code *)&UNK_104723a94)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101540918);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10154091c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
    puVar6 = puVar4;
  }
  lVar5 = 0;
  (*(code *)&UNK_104723a94)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = puVar6 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar4))
    {
      func_0x000107c61414(puVar4,puVar1,uVar9);
    }
    else if (puVar6 != param_4) {
      func_0x000107c61410(puVar4,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 1015407a8; end: 10154091f;  */

undefined *
FUN_1015407a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101540920);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001000285a8(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101540918);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10154091c);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      func_0x000107c61414(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      func_0x000107c61410(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 101540920; end: 101540c6f;  */

undefined * FUN_101540920(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101540a44);
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
    puVar3 = (undefined *)0x112db3b60;
    func_0x0001000285a8(0x112db3b60,&UNK_10d95dee0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11079e2c0);
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



/* Entry: 101540c70; end: 101540d97;  */

ulong FUN_101540c70(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101540d98);
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
  FUN_101540ebc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101540d94);
      (*pcVar1)();
    }
    FUN_101540f3c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101540d98; end: 101540ebb;  */

undefined * FUN_101540d98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101540ebc);
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
    puVar3 = (undefined *)0x112db3b50;
    func_0x0001000285a8(0x112db3b50,&UNK_10d95ded0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1107a1740);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101540ebc; end: 101540f3b;  */

undefined * FUN_101540ebc(undefined *param_1,undefined *param_2)

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
    FUN_1015402d0();
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



/* Entry: 101540f3c; end: 101541033;  */

long FUN_101540f3c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101541030);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101541034);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001047c7534(0);
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
      func_0x0001047c7534(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10154102c);
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



/* Entry: 101541034; end: 101541067;  */

void FUN_101541034(undefined8 *param_1)

{
  *param_1 = 2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
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
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  return;
}



/* Entry: 101541068; end: 1015410ab;  */

undefined8 FUN_101541068(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001046d90b0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1015410ac; end: 1015410ef;  */

void FUN_1015410ac(undefined8 *param_1)

{
  param_1[1] = 1;
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



/* Entry: 1015410f0; end: 1015411ef;  */

undefined * FUN_1015410f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = 0;
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar3 = uVar10;
    if (uVar10 <= uVar11) {
      uVar3 = uVar11;
    }
    puVar9 = (ulong *)(param_1 + 0x28 + uVar10 * 0x20);
    do {
      if (uVar11 == uVar10) {
        return puVar8;
      }
      uVar10 = uVar10 + 1;
      if (uVar3 + 1 == uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1015411f0);
        (*pcVar5)();
      }
      uVar2 = puVar9[-1];
      uVar4 = *puVar9;
      puVar9 = puVar9 + 4;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    func_0x000107c61434(uVar4);
    puVar6 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar3 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar3 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
    *(ulong *)(puVar8 + uVar3 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puVar8 + uVar3 * 0x10 + 0x28) = uVar4;
  } while( true );
}



/* Entry: 1015411f0; end: 10154130f;  */

undefined8 FUN_1015411f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101541310; end: 101541343;  */

int FUN_101541310(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x58)) {
    iVar1 = (*(byte *)(param_1 + 0x58) + 0x7ffffffe & 0x7fffffff) + 1;
  }
  return iVar1;
}



/* Entry: 101541344; end: 10154137b;  */

void FUN_101541344(undefined8 param_1)

{
  if (lRam0000000112db3a58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6477a4);
  return;
}



/* Entry: 10154137c; end: 10154145f;  */

void FUN_10154137c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_68 = &UNK_10d95de58;
  puStack_60 = &UNK_10d95de70;
  puStack_58 = &UNK_10d95de88;
  puStack_50 = &UNK_10d95de88;
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_30 = puStack_38;
  func_0x000103ddeef8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 101541460; end: 10154147f;  */

void FUN_101541460(void)

{
  return;
}



/* Entry: 101541480; end: 101541573;  */

undefined8 FUN_101541480(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101541574; end: 101541577;  */

void FUN_101541574(void)

{
  return;
}



/* Entry: 101541578; end: 1015415ab;  */

undefined8 FUN_101541578(undefined8 param_1)

{
  FUN_1016669a8();
  return param_1;
}



/* Entry: 1015415ac; end: 1015415d7;  */

void FUN_1015415ac(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  return;
}



/* Entry: 1015415d8; end: 10154169f;  */

void FUN_1015415d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db3b78,&UNK_10d95dfe0);
  puVar1 = &UNK_1103dcc78;
  func_0x000107c613fc(&UNK_1103dcc78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1015417fc,puVar1);
  return;
}



/* Entry: 1015416a0; end: 1015417fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015416a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000103ddeef8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000100083b20(&uStack_61);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(auStack_a0);
  func_0x000100083b20(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100083b20(&uStack_a8);
  lVar2 = 0;
  FUN_10154535c();
  lVar1 = lVar2;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a7780;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined1 *)(lVar1 + 0x40) = uStack_61;
  *(undefined8 *)(lVar1 + 0x50) = uStack_70;
  *(undefined **)(lVar1 + 0x58) = puVar3;
  *(undefined8 *)(lVar1 + 0x38) = uStack_78;
  FUN_101542d38(auStack_a0,lVar1 + 0x10);
  func_0x0001015452c4(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1 + _DAT_112db3b80
                      ,&SUB_103ddeef8);
  *(undefined8 *)(lVar1 + 0x48) = uStack_a8;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103dcc90;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015417fc; end: 10154180b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015417fc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000103ddeef8(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000100083b20(&uStack_61);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(auStack_a0);
  func_0x000100083b20(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100083b20(&uStack_a8);
  lVar2 = 0;
  FUN_10154535c();
  lVar1 = lVar2;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a7780;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined1 *)(lVar1 + 0x40) = uStack_61;
  *(undefined8 *)(lVar1 + 0x50) = uStack_70;
  *(undefined **)(lVar1 + 0x58) = puVar3;
  *(undefined8 *)(lVar1 + 0x38) = uStack_78;
  FUN_101542d38(auStack_a0,lVar1 + 0x10);
  func_0x0001015452c4(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1 + _DAT_112db3b80
                      ,&SUB_103ddeef8);
  *(undefined8 *)(lVar1 + 0x48) = uStack_a8;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103dcc90;
  *param_1 = lVar1;
  return;
}



/* Entry: 10154180c; end: 1015418b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10154180c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a7780;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined1 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined **)(unaff_x20 + 0x58) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  FUN_101542d38(param_4,unaff_x20 + 0x10);
  func_0x0001015452c4(param_5,unaff_x20 + _DAT_112db3b80,&SUB_103ddeef8);
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  return unaff_x20;
}



/* Entry: 1015418b4; end: 1015429f3;  */

/* WARNING: Removing unreachable block (ram,0x000101542740) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1015418b4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar26;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar27;
  undefined1 *puVar28;
  byte bVar29;
  ulong uVar30;
  byte bVar31;
  uint uVar32;
  long extraout_x12;
  long extraout_x12_00;
  byte bVar33;
  byte extraout_w14;
  byte bVar34;
  byte extraout_w15;
  byte bVar35;
  long unaff_x20;
  long lVar36;
  code *pcVar37;
  long lVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  byte *pbVar43;
  undefined8 uVar44;
  long lVar45;
  ulong uVar46;
  float fVar47;
  double dVar48;
  undefined8 uVar49;
  ulong auStack_870 [3];
  byte abStack_858 [8];
  long alStack_850 [13];
  double dStack_7e8;
  undefined1 auStack_7e0 [8];
  ulong auStack_7d8 [9];
  byte abStack_790 [8];
  ulong uStack_788;
  byte abStack_780 [8];
  ulong uStack_778;
  undefined8 uStack_770;
  undefined auStack_760 [8];
  undefined8 uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  undefined1 *puStack_720;
  ulong uStack_718;
  undefined1 *puStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  undefined4 uStack_6e4;
  ulong uStack_6e0;
  ulong uStack_6d8;
  long lStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  ulong uStack_6a8;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  long lStack_678;
  long lStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_580;
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
  undefined1 auStack_528 [48];
  undefined1 auStack_4f8 [40];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
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
  undefined1 auStack_458 [40];
  undefined1 auStack_430 [152];
  undefined1 auStack_398 [152];
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [80];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
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
  long lStack_140;
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
  
  lVar10 = 0x112d3bc20;
  uStack_6a0 = param_8;
  uStack_668 = param_4;
  uStack_660 = param_5;
  uStack_658 = param_6;
  uStack_640 = param_7;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db3a00;
  puStack_698 = auStack_760 + -extraout_x8;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)(auStack_760 + -extraout_x8) - extraout_x8_00;
  lVar10 = 0;
  lStack_678 = lVar25;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar25 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  func_0x000100b91fbc();
  uStack_688 = *(long *)(lVar10 + -8);
  uStack_680 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_688 + 0x40));
  lVar26 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db3b70;
  lStack_6b0 = lVar26;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  uStack_690 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar46 = lVar26 - extraout_x8_03;
  lVar10 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar30 = uVar46 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  uStack_6a8 = uVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = uVar30 - extraout_x12;
  lVar10 = 0;
  func_0x000107c5eec8();
  lVar26 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar45 = lVar38 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar45 - extraout_x12_00;
  lVar36 = *(long *)(unaff_x20 + 0x38);
  uStack_650 = param_1;
  uStack_648 = param_2;
  FUN_10156a4c4(param_1,param_2,param_3);
  uVar32 = (uint)(param_2 >> 0x20);
  lStack_6d0 = lVar25;
  if (uVar32 >> 0x1e < 2) {
    if (uVar32 >> 0x1e != 0) {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_101541bcc;
      goto LAB_101541b70;
    }
    if ((param_2 & 0xff000000000000) == 0) {
LAB_101541bcc:
      if (*(long *)(lVar36 + 0x10) != 0) {
        func_0x000107c4be2c();
      }
      func_0x00010006c090(param_1,param_2);
      return 0;
    }
    uVar14 = param_1 >> 8;
    uVar15 = param_1 >> 0x10;
    uVar18 = param_1 >> 0x18;
    uVar20 = param_1 >> 0x20;
    uVar21 = param_1 >> 0x28;
    uVar22 = param_1 >> 0x30;
    uVar23 = param_1 >> 0x38;
    bVar24 = (byte)(param_2 >> 8);
    bVar29 = (byte)(param_2 >> 0x10);
    bVar31 = (byte)(param_2 >> 0x18);
    bVar33 = (byte)(param_2 >> 0x28);
    uVar30 = param_1;
    uVar13 = param_2;
    bVar35 = extraout_w15;
    bVar34 = extraout_w14;
  }
  else {
    if ((uVar32 >> 0x1e != 2) || (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)))
    goto LAB_101541bcc;
LAB_101541b70:
    lStack_670 = lVar10;
    if (param_2 >> 0x3e == 2) {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar30 = param_1;
      func_0x000107c5ec30();
      if (uVar30 == 0) {
        func_0x000107c5ec38();
LAB_1015429e0:
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429e4);
        (*pcVar37)();
      }
      uVar13 = uVar30;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar10,uVar13)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429d4);
        (*pcVar37)();
      }
      pbVar43 = (byte *)((lVar10 - uVar13) + uVar30);
      func_0x000107c5ec38();
      if (pbVar43 == (byte *)0x0) goto LAB_1015429e0;
    }
    else {
      lVar10 = (long)(int)param_1;
      if ((long)param_1 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429d0);
        (*pcVar37)();
      }
      uVar30 = param_1;
      func_0x000107c5ec30();
      if (uVar30 == 0) {
        func_0x000107c5ec38();
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429f0);
        (*pcVar37)();
      }
      uVar13 = uVar30;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar10,uVar13)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429d8);
        (*pcVar37)();
      }
      pbVar43 = (byte *)((lVar10 - uVar13) + uVar30);
      func_0x000107c5ec38();
      if (pbVar43 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1015429f4);
        (*pcVar37)();
      }
    }
    uVar30 = (ulong)*pbVar43;
    uVar14 = (ulong)pbVar43[1];
    uVar15 = (ulong)pbVar43[2];
    uVar18 = (ulong)pbVar43[3];
    uVar20 = (ulong)pbVar43[4];
    uVar21 = (ulong)pbVar43[5];
    uVar22 = (ulong)pbVar43[6];
    uVar23 = (ulong)pbVar43[7];
    uVar13 = (ulong)pbVar43[8];
    bVar24 = pbVar43[9];
    bVar29 = pbVar43[10];
    bVar31 = pbVar43[0xb];
    uVar32 = (uint)pbVar43[0xc];
    bVar33 = pbVar43[0xd];
    bVar34 = pbVar43[0xe];
    bVar35 = pbVar43[0xf];
    lVar10 = lStack_670;
  }
  uStack_6c8 = uVar46;
  *(byte *)(lVar27 + -9) = bVar35;
  *(byte *)(lVar27 + -10) = bVar34;
  *(byte *)(lVar27 + -0xb) = bVar33;
  *(char *)(lVar27 + -0xc) = (char)uVar32;
  *(byte *)(lVar27 + -0xd) = bVar31;
  *(byte *)(lVar27 + -0xe) = bVar29;
  *(byte *)(lVar27 + -0xf) = bVar24;
  *(char *)(lVar27 + -0x10) = (char)uVar13;
  func_0x000107c5eebc(lVar45,uVar30,uVar14,uVar15,uVar18,uVar20,uVar21,uVar22,uVar23);
  func_0x00010006c090(param_1,param_2);
  (**(code **)(lVar26 + 0x20))(lVar27,lVar45,lVar10);
  uVar30 = uStack_650;
  uVar46 = uStack_648;
  uStack_6b8 = param_3;
  FUN_10156a534(uStack_650,uStack_648,param_3);
  FUN_10155d568(auStack_528,uStack_668,uStack_660,uStack_658);
  func_0x00010155c624(uVar30,uVar46,auStack_528);
  func_0x0001015451a0(auStack_528,0x112db3a10,&UNK_10d95dd98);
  uStack_6c0 = uVar30;
  if (((int)uVar30 == 0x17) && (*(long *)(unaff_x20 + 0x48) != 0)) {
    func_0x000107c4be2c();
  }
  lVar25 = unaff_x20 + _DAT_112db3b80;
  lVar36 = 0;
  func_0x000103ddeef8();
  uVar13 = uStack_680;
  uVar46 = uStack_688;
  iVar1 = *(int *)(lVar36 + 100);
  uStack_6d8 = lVar36;
  (**(code **)(uStack_688 + 0x38))(lVar38,1,1,uStack_680);
  uVar30 = uStack_6c8;
  lVar36 = (long)*(int *)(uStack_690 + 0x30);
  uStack_690 = lVar25;
  FUN_101543234(lVar25 + iVar1,uStack_6c8,0x112db39a8,&UNK_10d95dd90);
  FUN_101543234(lVar38,uVar30 + lVar36,0x112db39a8,&UNK_10d95dd90);
  pcVar37 = *(code **)(uVar46 + 0x30);
  uVar14 = uVar30;
  (*pcVar37)(uVar30,1,uVar13);
  uVar46 = uStack_6a8;
  lStack_670 = lVar10;
  if ((int)uVar14 == 1) {
    func_0x0001015451a0(lVar38,0x112db39a8,&UNK_10d95dd90);
    lVar36 = uVar30 + lVar36;
    (*pcVar37)(lVar36,1,uVar13);
    uVar42 = uStack_6b8;
    if ((int)lVar36 != 1) {
LAB_101541ea0:
      uVar42 = uStack_6b8;
      func_0x0001015451a0(uVar30,0x112db3b70,&UNK_10d95def0);
      goto LAB_101541ebc;
    }
    func_0x0001015451a0(uVar30,0x112db39a8,&UNK_10d95dd90);
    uVar46 = uStack_648;
LAB_101541ffc:
    uVar13 = uStack_650;
    uVar14 = uStack_650;
    uVar30 = uVar46;
    func_0x00010156a574(uStack_650,uVar46,uVar42);
    uStack_680 = uVar14;
  }
  else {
    FUN_101543234(uVar30,uStack_6a8,0x112db39a8,&UNK_10d95dd90);
    lVar10 = uVar30 + lVar36;
    (*pcVar37)(lVar10,1,uVar13);
    lVar25 = lStack_6b0;
    if ((int)lVar10 == 1) {
      func_0x0001015451a0(lVar38,0x112db39a8,&UNK_10d95dd90);
      func_0x000101545308(uVar46,&SUB_100b91fbc);
      goto LAB_101541ea0;
    }
    func_0x0001015452c4(uVar30 + lVar36,lStack_6b0,&SUB_100b91fbc);
    uVar13 = uVar46;
    func_0x000104841c50(uVar46,lVar25);
    func_0x000101545308(lVar25,&SUB_100b91fbc);
    func_0x0001015451a0(lVar38,0x112db39a8,&UNK_10d95dd90);
    func_0x000101545308(uVar46,&SUB_100b91fbc);
    func_0x0001015451a0(uVar30,0x112db39a8,&UNK_10d95dd90);
    uVar46 = uStack_648;
    uVar42 = uStack_6b8;
    if ((uVar13 & 1) != 0) goto LAB_101541ffc;
LAB_101541ebc:
    uVar46 = uStack_648;
    func_0x000104041e90();
    uVar13 = uStack_650;
    if ((uVar30 & 1) == 0) goto LAB_101541ffc;
    uVar30 = uStack_650;
    uVar14 = uVar46;
    func_0x00010156a574(uStack_650,uVar46,uVar42);
    lVar10 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 4;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar10 + 0x38) = PTR___sSSN_11034da80;
    lVar25 = lVar10;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar10 + 0x20) = 0xbfa3ef;
    *(undefined8 *)(lVar10 + 0x28) = 0xa300000000000000;
    *(undefined **)(lVar10 + 0x60) = puVar2;
    *(long *)(lVar10 + 0x68) = lVar25;
    *(long *)(lVar10 + 0x40) = lVar25;
    *(ulong *)(lVar10 + 0x48) = uVar30;
    *(ulong *)(lVar10 + 0x50) = uVar14;
    func_0x000107c61434(uVar14);
    uVar15 = 0x2064414b53204025;
    uVar30 = 0xec0000004025207c;
    func_0x000107c5fb00(0x2064414b53204025,0xec0000004025207c,lVar10);
    uStack_680 = uVar15;
    func_0x000107c6142c(uVar14);
  }
  uVar14 = uVar13;
  uVar15 = uVar46;
  func_0x00010156a5c0(uVar13,uVar46,uVar42);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  uStack_650 = uVar14;
  func_0x0001000a8868(unaff_x20 + 0x10,uVar17);
  uVar14 = uVar13;
  (**(code **)(lVar10 + 8))(uVar13,uVar46,uVar42,uStack_640,uStack_6c0,uVar17,lVar10);
  if (uVar14 == 0) {
    (**(code **)(lVar26 + 8))(lVar27,lStack_670);
    func_0x000107c6142c(uVar30);
    func_0x000107c6142c(uVar15);
    return 0;
  }
  uVar39 = *(undefined8 *)(uStack_690 + (long)*(int *)(uStack_6d8 + 0x30));
  lVar10 = uStack_690 + (long)*(int *)(uStack_6d8 + 0x38);
  bVar24 = *(byte *)(lVar10 + 0x48);
  uStack_640 = uVar15;
  FUN_101542f6c();
  puVar2 = puStack_698;
  uVar17 = uStack_6a0;
  if (*(long *)(uVar14 + _DAT_113091068) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(uVar14 + _DAT_113091068) + _DAT_1130905e0);
  }
  puStack_698 = (undefined *)uVar39;
  FUN_10155c950(uVar39,(int)lVar10 != 1 & bVar24,uVar16);
  uVar15 = uVar13;
  FUN_10156aa08(uVar13,uVar46,uVar42);
  uStack_6a0 = CONCAT44(uStack_6a0._4_4_,(int)uVar15);
  uVar15 = uVar13;
  uVar18 = uVar46;
  func_0x00010156aa80(uVar13,uVar46,uVar42);
  if (((uint)uVar18 & 0xff) == 1) {
    uStack_6a8 = *(ulong *)(&UNK_10d95e100 + uVar15 * 8);
  }
  else {
    uStack_6a8 = 3;
  }
  uStack_688 = uVar30;
  FUN_1015429f4(auStack_4f8,uVar13,uVar46,uVar42);
  uVar30 = uVar13;
  uVar15 = uVar46;
  FUN_101542f84(&uStack_4d0,uVar13,uVar46,uVar42);
  uStack_558 = uStack_488;
  uStack_560 = uStack_490;
  uStack_548 = uStack_478;
  uStack_550 = uStack_480;
  uStack_538 = uStack_468;
  uStack_540 = uStack_470;
  uStack_530 = uStack_460;
  uStack_598 = uStack_4c8;
  uStack_5a0 = uStack_4d0;
  uStack_588 = uStack_4b8;
  uStack_590 = uStack_4c0;
  uStack_578 = uStack_4a8;
  lStack_580 = lStack_4b0;
  uStack_568 = uStack_498;
  uStack_570 = uStack_4a0;
  lVar10 = lStack_4b0;
  func_0x000107c5eeac();
  fVar47 = (float)lVar10;
  lStack_6b0 = *(undefined8 *)(uStack_690 + 0x10);
  uStack_6c8 = *(undefined8 *)(uStack_690 + 0x18);
  uStack_6e0 = uVar15;
  uStack_6d8 = uVar30;
  func_0x000107c61434();
  func_0x000107c61174();
  lVar10 = lStack_678;
  uStack_690 = uVar14;
  func_0x0001048264d8(lStack_678);
  lVar25 = 0;
  func_0x00010477ea9c();
  (**(code **)(*(long *)(lVar25 + -8) + 0x38))(lVar10,0,1,lVar25);
  uVar30 = uVar13;
  FUN_10156a88c(uVar13,uVar46,uVar42);
  uStack_6e4 = (undefined4)uVar30;
  FUN_10156a8c8(auStack_458,uVar13,uVar46,uVar42);
  puVar19 = &UNK_10d904ef0;
  FUN_101543234(uVar17,puVar2,0x112d3bc20,&UNK_10d904ef0);
  lVar10 = lStack_670;
  lVar25 = 1;
  puVar40 = puVar2;
  (**(code **)(lVar26 + 0x30))(puVar2,1,lStack_670);
  if ((int)puVar40 == 1) {
    func_0x0001015451a0(puVar2,0x112d3bc20,&UNK_10d904ef0);
    puVar40 = (undefined *)0x0;
    lVar25 = 0;
  }
  else {
    func_0x000107c5eeac();
    (**(code **)(lVar26 + 8))(puVar2,lVar10);
  }
  puVar11 = auStack_458;
  FUN_10154327c(puVar11,(uint)uVar39 & 1);
  if (puVar11 == (undefined1 *)0x0) {
LAB_101542424:
    func_0x000107c6142c(lVar25);
    FUN_101543608(auStack_458);
  }
  else {
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar28 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar28 = puVar11;
      if (-1 < (long)puVar11) {
        puVar28 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    if (puVar28 != (undefined1 *)0x0) {
      lVar10 = *(long *)(unaff_x20 + 0x58);
      puVar28 = puVar11;
      FUN_101542b74();
      func_0x000107c6142c(puVar11);
      puVar11 = puVar28;
      func_0x000107c5fc48(puVar28,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar28);
      if (lVar25 == 0) {
        puVar40 = (undefined *)0x0;
      }
      else {
        func_0x000107c5fadc(puVar40,lVar25);
      }
      puVar19 = puVar40;
      func_0x000107c441a4();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar40);
      if (lVar10 != 0) {
        lVar36 = 0x112db3b98;
        func_0x0001000285a8(0x112db3b98,&UNK_10dd2eef0);
        func_0x000107c613fc();
        fVar47 = 1.4013e-45;
        *(undefined8 *)(lVar36 + 0x18) = 2;
        *(undefined8 *)(lVar36 + 0x10) = 1;
        func_0x000107c6142c(lVar25);
        FUN_101543608(auStack_458);
        uVar16 = *(undefined8 *)(lVar10 + _DAT_11308f2f8);
        uVar41 = *(undefined8 *)(lVar10 + _DAT_11308f300);
        uVar49 = *(undefined8 *)(lVar10 + _DAT_11308f308);
        uVar17 = *(undefined8 *)(lVar10 + _DAT_11308f2f0);
        uVar39 = ((undefined8 *)(lVar10 + _DAT_11308f2f0))[1];
        uVar44 = *(undefined8 *)(lVar10 + _DAT_11308f310);
        func_0x000107c61434(uVar39);
        func_0x000107c61170(lVar10);
        *(undefined8 *)(lVar36 + 0x20) = uVar17;
        *(undefined8 *)(lVar36 + 0x28) = uVar39;
        *(undefined8 *)(lVar36 + 0x30) = uVar16;
        *(undefined8 *)(lVar36 + 0x38) = uVar41;
        *(undefined8 *)(lVar36 + 0x40) = uVar49;
        *(undefined8 *)(lVar36 + 0x48) = uVar44;
        uVar46 = uStack_648;
        goto LAB_101542478;
      }
      goto LAB_101542424;
    }
    func_0x000107c6142c(lVar25);
    FUN_101543608(auStack_458);
    func_0x000107c6142c(puVar11);
  }
  lVar36 = 0;
LAB_101542478:
  uVar30 = uVar13;
  uVar14 = uVar46;
  uVar17 = uVar42;
  FUN_10156a98c(uVar13,uVar46,uVar42);
  uStack_6f0 = uVar14;
  func_0x00010006c090(uVar17,puVar19);
  uVar14 = uVar13;
  func_0x00010156aa44(uVar13,uVar46,uVar42);
  uStack_708 = uVar14;
  func_0x00010403f6e4();
  if ((uVar14 & 1) == 0) {
    uVar14 = uVar13;
    uVar15 = uVar46;
    FUN_10156aca4(uVar13,uVar46,uVar42);
    uStack_700 = uVar15;
    uStack_6f8 = uVar14;
  }
  else {
    uStack_700 = 0x800000010efb2ca0;
    uStack_6f8 = 0xd000000000000010;
  }
  FUN_10154363c(auStack_430,uVar13,uVar46,uVar42);
  FUN_1015438f8(auStack_398,uVar13,uVar46,uVar42);
  uVar14 = uVar13;
  FUN_10156b168(uVar13,uVar46,uVar42);
  uStack_648 = uVar30;
  if ((uVar14 & 1) == 0) {
    uStack_728 = 0;
    puStack_720 = (undefined1 *)0x0;
    uStack_718 = 2;
    puStack_710 = (undefined1 *)0x0;
  }
  else {
    uVar30 = uVar13;
    uVar14 = uVar46;
    FUN_10156b03c(auStack_300,uVar13,uVar46,uVar42);
    func_0x0001015c621c();
    if ((uVar30 & 1) == 0) {
      uStack_718 = 1;
      puStack_710 = (undefined1 *)0x0;
    }
    else {
      FUN_1015c613c(auStack_290);
      puVar11 = auStack_290;
      FUN_101543c68();
      uVar30 = 0;
      uStack_718 = uVar14;
      puStack_710 = puVar11;
      func_0x000101545290();
    }
    FUN_1015c6368();
    if ((uVar30 & 1) == 0) {
      func_0x00010154525c(auStack_300);
      uStack_728 = 1;
      puStack_720 = (undefined1 *)0x0;
    }
    else {
      FUN_1015c62e8(auStack_260);
      puVar11 = auStack_260;
      FUN_101543c68();
      uStack_728 = uVar14;
      puStack_720 = puVar11;
      func_0x00010154525c(auStack_300);
      func_0x000101545290(auStack_260);
    }
  }
  FUN_10156b2dc(uVar13,uVar46,uVar42);
  func_0x00010006c090();
  uVar30 = uVar13;
  uVar14 = uVar46;
  FUN_10156b358(uVar13,uVar46,uVar42);
  func_0x000107c6142c(uVar14);
  uVar30 = uVar30 & 0xffffffffffff;
  if ((uVar14 & 0x2000000000000000) != 0) {
    uVar30 = uVar14 >> 0x38 & 0xf;
  }
  if (uVar30 == 0) {
    uStack_738 = 0;
    uStack_730 = 0;
  }
  else {
    uVar30 = uVar13;
    uVar14 = uVar46;
    FUN_10156b358(uVar13,uVar46,uVar42);
    uStack_738 = uVar14;
    uStack_730 = uVar30;
  }
  uVar14 = uVar13;
  uVar15 = uVar46;
  func_0x00010156b3a8(uVar13,uVar46,uVar42);
  uVar30 = uVar13;
  uVar18 = uVar46;
  uStack_748 = uVar15;
  uStack_740 = uVar14;
  func_0x00010156b3f8(uVar13,uVar46,uVar42);
  if (((uint)uVar18 & 0xff) != 1) {
    uVar30 = 0;
  }
  uStack_750 = uVar30;
  FUN_101543d64(auStack_230,&uStack_4d0);
  if (lStack_4b0 == 1) {
    uStack_758 = 0;
    uVar42 = 0xf000000000000000;
  }
  else {
    uStack_1d8 = uStack_4c8;
    uStack_1e0 = uStack_4d0;
    uStack_1c8 = uStack_4b8;
    uStack_1d0 = uStack_4c0;
    uStack_1a0 = uStack_490;
    uStack_1a8 = uStack_498;
    uStack_190 = uStack_480;
    uStack_198 = uStack_488;
    uStack_180 = uStack_470;
    uStack_188 = uStack_478;
    uStack_170 = uStack_460;
    uStack_178 = uStack_468;
    uStack_1b0 = uStack_4a0;
    uStack_1b8 = uStack_4a8;
    lStack_1c0 = lStack_4b0;
    uStack_128 = uStack_568;
    uStack_130 = uStack_570;
    uStack_138 = uStack_578;
    lStack_140 = lStack_580;
    uStack_148 = uStack_588;
    uStack_150 = uStack_590;
    uStack_158 = uStack_598;
    uStack_160 = uStack_5a0;
    uStack_f0 = uStack_530;
    uStack_f8 = uStack_538;
    uStack_100 = uStack_540;
    uStack_108 = uStack_548;
    uStack_110 = uStack_550;
    uStack_118 = uStack_558;
    uStack_120 = uStack_560;
    puVar12 = &uStack_160;
    func_0x0001015451e0(puVar12,&uStack_618);
    FUN_10154521c();
    func_0x000100075890(&uStack_618,0,0,&UNK_1103ddcf0,PTR___s10Foundation4DataVN_110350ae0,puVar12,
                        &PTR_DAT_110789f58);
    func_0x0001015451a0(&uStack_4d0,0x112db3b88,&UNK_10d95e000);
    uStack_758 = uStack_618;
    uVar42 = uStack_610;
  }
  uVar17 = uStack_6b8;
  FUN_10156b438(&uStack_1e0,uVar13,uVar46,uStack_6b8);
  FUN_101544264(&uStack_160,&uStack_1e0);
  func_0x00010154516c(&uStack_1e0);
  uVar14 = uVar13;
  FUN_10156b6e4(uVar13,uVar46,uVar17);
  uVar30 = uVar13;
  uVar15 = uVar46;
  func_0x00010156b720(uVar13,uVar46,uVar17);
  if (((uint)uVar15 & 0xff) != 1) {
    uVar30 = 0;
  }
  uVar39 = uStack_668;
  FUN_10155d688(uStack_668,uStack_660,uStack_658);
  uVar15 = uVar13;
  uVar18 = uVar46;
  func_0x00010156b760(uVar13,uVar46,uVar17);
  func_0x000107c6142c(uVar18);
  uVar15 = uVar15 & 0xffffffffffff;
  if ((uVar18 & 0x2000000000000000) != 0) {
    uVar15 = uVar18 >> 0x38 & 0xf;
  }
  if (uVar15 == 0) {
    uVar13 = 0;
    uVar46 = 0;
  }
  else {
    func_0x00010156b760(uVar13,uVar46,uVar17);
  }
  uVar9 = uStack_640;
  uVar8 = uStack_650;
  uVar7 = uStack_680;
  uVar6 = uStack_690;
  uVar17 = uStack_6a0;
  uVar5 = uStack_6a8;
  lVar25 = lStack_6b0;
  uVar4 = uStack_6c8;
  lVar10 = lStack_6d0;
  uVar23 = uStack_6d8;
  uVar22 = uStack_6e0;
  uVar3 = uStack_6e4;
  uVar21 = uStack_6f0;
  uVar20 = uStack_6f8;
  uVar18 = uStack_700;
  puVar28 = puStack_710;
  uVar15 = uStack_718;
  dVar48 = (double)(long)uStack_708;
  *(ulong *)(lVar27 + -0x18) = uVar13;
  *(ulong *)(lVar27 + -0x10) = uVar46;
  *(ulong *)(lVar27 + -0x28) = uVar30;
  *(undefined8 *)(lVar27 + -0x40) = uVar42;
  *(undefined8 **)(lVar27 + -0x38) = &uStack_160;
  *(undefined8 *)(lVar27 + -0x48) = uStack_758;
  *(byte *)(lVar27 + -0x20) = (byte)uVar39 & 1;
  *(byte *)(lVar27 + -0x30) = (byte)uVar14 & 1;
  *(undefined1 **)(lVar27 + -0x50) = auStack_230;
  *(ulong *)(lVar27 + -0x58) = uStack_750;
  *(ulong *)(lVar27 + -0x60) = uStack_748;
  *(ulong *)(lVar27 + -0x68) = uStack_740;
  *(ulong *)(lVar27 + -0x70) = uStack_738;
  *(ulong *)(lVar27 + -0x78) = uStack_730;
  *(undefined1 *)(lVar27 + -0x80) = 0;
  *(double *)(lVar27 + -0x88) = (double)fVar47;
  *(ulong *)(lVar27 + -0x90) = uStack_728;
  puVar11 = puStack_720;
  *(ulong *)(lVar27 + -0xa0) = uVar15;
  *(undefined1 **)(lVar27 + -0x98) = puVar11;
  *(undefined1 **)(lVar27 + -0xb0) = auStack_398;
  *(undefined1 **)(lVar27 + -0xa8) = puVar28;
  *(ulong *)(lVar27 + -0xc0) = uVar18;
  *(undefined1 **)(lVar27 + -0xb8) = auStack_430;
  *(undefined1 **)(lVar27 + -0xd0) = auStack_4f8;
  *(ulong *)(lVar27 + -200) = uVar20;
  *(ulong *)(lVar27 + -0xe0) = uVar21;
  *(ulong *)(lVar27 + -0xd8) = uVar5;
  uVar30 = uStack_648;
  *(long *)(lVar27 + -0xf0) = lVar36;
  *(ulong *)(lVar27 + -0xe8) = uVar30;
  *(byte *)(lVar27 + -0xf7) = (byte)uVar17 & 1;
  *(byte *)(lVar27 + -0xf8) = (byte)uVar3 & 1;
  lVar36 = lStack_678;
  *(ulong *)(lVar27 + -0x108) = uVar9;
  *(long *)(lVar27 + -0x100) = lVar36;
  *(ulong *)(lVar27 + -0x110) = uVar8;
  func_0x0001046d9184(lVar10,dVar48,uVar23,uVar22,uStack_6c0,puStack_698,lVar25,uVar4,uVar7,
                      uStack_688);
  func_0x0001047c6864(0);
  func_0x000107c610f8();
  func_0x0001047c2b40(lVar10);
  func_0x0001015451a0(&uStack_4d0,0x112db3b88,&UNK_10d95e000);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar26 + 8))(lVar27,lStack_670);
  return lVar10;
}



/* Entry: 1015429f4; end: 101542b73;  */

void FUN_1015429f4(ulong *param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uStack_128;
  byte bStack_120;
  undefined1 auStack_e8 [16];
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_a8 [32];
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  
  uVar1 = param_2;
  FUN_10156ab9c();
  if ((uVar1 & 1) == 0) {
    puVar5 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    puStack_80 = (undefined1 *)0x0;
    puVar8 = (undefined1 *)0x1;
    uVar1 = 0;
  }
  else {
    FUN_10156aac0(&uStack_128,param_2,param_3,param_4);
    func_0x0001015457cc(&uStack_128);
    puVar5 = (undefined1 *)(ulong)bStack_120;
    uVar2 = uStack_128;
    FUN_1015f73f8();
    uVar1 = uVar2;
    func_0x00010403f824();
    puVar3 = puVar5;
    puVar6 = puVar5;
    func_0x000107c6142c();
    uVar1 = uVar1 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      puVar6 = param_3;
      FUN_10156aac0(auStack_e8,param_2,param_3,param_4);
      func_0x000107c61434(puStack_d0);
      puVar3 = auStack_e8;
      func_0x0001015457cc();
      puVar5 = puStack_d8;
      puVar8 = puStack_d0;
    }
    else {
      func_0x00010403f824();
      puVar5 = puVar3;
      puVar8 = puVar6;
    }
    func_0x00010403f834();
    puVar4 = puVar6;
    puVar7 = puVar6;
    func_0x000107c6142c();
    uVar1 = (ulong)puVar3 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      FUN_10156aac0(auStack_a8,param_2,param_3,param_4);
      func_0x000107c61434(puStack_80);
      func_0x0001015457cc(auStack_a8);
    }
    else {
      func_0x00010403f834();
      puStack_88 = puVar4;
      puStack_80 = puVar7;
    }
    uVar1 = 0;
    if (0xfffffffeffffffff < uVar2 - 0x80000000) {
      uVar1 = uVar2 & 0xffffffff;
    }
  }
  *param_1 = uVar1;
  param_1[1] = (ulong)puVar5;
  param_1[2] = (ulong)puVar8;
  param_1[3] = (ulong)puStack_88;
  param_1[4] = (ulong)puStack_80;
  return;
}



/* Entry: 101542b74; end: 101542d37;  */

undefined * FUN_101542b74(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101542d38);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001047c7534(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000101542dd0(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x0001047c7534(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 101542d38; end: 101542d4f;  */

undefined8 * FUN_101542d38(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101542d50; end: 101542daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101542d50(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000101545308(unaff_x20 + _DAT_112db3b80,&SUB_103ddeef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101542db0; end: 101542f6b;  */

void FUN_101542db0(void)

{
  FUN_1015418b4();
  return;
}



/* Entry: 101542f6c; end: 101542f83;  */

int FUN_101542f6c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x138);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101542f84; end: 101543233;  */

void FUN_101542f84(double *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
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
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar1 = param_2;
  dVar4 = param_3;
  dVar11 = param_4;
  func_0x00010403fe20();
  if (((ulong)dVar1 & 1) == 0) {
    dVar1 = param_2;
    FUN_10156b568(param_2,param_3,param_4);
    if (((ulong)dVar1 & 1) != 0) {
      FUN_10156b438(&dStack_190,param_2,param_3,param_4);
      goto LAB_1015431f8;
    }
    dVar7 = 0.0;
    dStack_188 = 0.0;
    dVar11 = 4.94065645841247e-324;
    dVar1 = 0.0;
    dVar4 = 0.0;
    dVar2 = 0.0;
    dVar5 = 0.0;
  }
  else {
    func_0x00010360efc0();
    dStack_190 = dVar1;
    dStack_188 = dVar4;
    dStack_180 = dVar11;
    func_0x00010360cfe4();
    dStack_b0 = dVar1;
    dStack_a8 = dVar4;
    dStack_a0 = dVar11;
    func_0x00010360e198(2,1);
    func_0x00010360e0bc(2,1);
    dVar1 = dStack_b0;
    func_0x00010360d000(dStack_b0,dStack_a8,dStack_a0);
    func_0x00010403ff20();
    dStack_b0 = (double)(ulong)(dVar1 == 4.94065645841247e-324);
    dStack_a8 = (double)CONCAT71(dStack_a8._1_7_,1);
    dStack_a0 = 0.0;
    uStack_98 = 1;
    uStack_90 = 0;
    uStack_88 = 1;
    uStack_80 = 0;
    uStack_78 = 1;
    uStack_68 = 0xc000000000000000;
    uStack_70 = 0;
    func_0x00010360ce18(&dStack_b0);
    dVar11 = dStack_180;
    dVar4 = dStack_188;
    dVar1 = dStack_190;
    dVar2 = 0.0;
    dVar5 = 0.0;
    dVar7 = 0.0;
    dVar12 = dStack_190;
    FUN_1015457a0();
    func_0x0001015a0b68();
    dVar3 = dVar2;
    dVar6 = dVar5;
    dVar8 = dVar7;
    FUN_1015a0164();
    dStack_190 = dVar3;
    dStack_188 = dVar6;
    dStack_180 = dVar8;
    FUN_1015a05a4(2000,0,0xc000000000000000);
    FUN_1015a0514(2000,0,0xc000000000000000);
    FUN_1015a0180(dStack_190,dStack_188,dStack_180);
    func_0x00010403ff60();
    dVar3 = dVar12;
    func_0x00010403ffa0();
    uVar9 = (ulong)(uint)(float)dVar12;
    if (dVar12 != (double)(float)dVar12) {
      uVar9 = 0;
    }
    uVar10 = (ulong)(uint)(float)dVar3 << 0x20;
    if (dVar3 != (double)(float)dVar3) {
      uVar10 = 0;
    }
    func_0x000100cb4ea8(0,0,0xf000000000000000);
    dStack_188 = -2.0;
    dStack_190 = 0.0;
    dStack_170 = -2.0;
    dStack_178 = 0.0;
    dStack_160 = 0.0;
    dStack_168 = 0.0;
    dStack_150 = 0.0;
    dStack_158 = 0.0;
    dStack_140 = 0.0;
    dStack_148 = 0.0;
    dStack_130 = 0.0;
    dStack_138 = 0.0;
    dStack_120 = 0.0;
    dStack_128 = 0.0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0xf000000000000000;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0xf000000000000000;
    dStack_180 = (double)(uVar10 | uVar9);
    FUN_10159ff14(&dStack_190);
    FUN_1015457a0(0,0,0);
    dStack_188 = -2.0;
  }
  dStack_190 = 0.0;
  dStack_148 = 0.0;
  dStack_150 = 0.0;
  dStack_120 = 0.0;
  dStack_140 = 0.0;
  dStack_138 = 0.0;
  dStack_130 = 0.0;
  dStack_128 = 0.0;
  dStack_158 = dVar7;
  dStack_170 = dVar11;
  dStack_180 = dVar1;
  dStack_178 = dVar4;
  dStack_168 = dVar2;
  dStack_160 = dVar5;
LAB_1015431f8:
  param_1[1] = dStack_188;
  *param_1 = dStack_190;
  param_1[3] = dStack_178;
  param_1[2] = dStack_180;
  param_1[4] = dStack_170;
  param_1[6] = dStack_160;
  param_1[5] = dStack_168;
  param_1[7] = dStack_158;
  param_1[9] = dStack_148;
  param_1[8] = dStack_150;
  param_1[0xb] = dStack_138;
  param_1[10] = dStack_140;
  param_1[0xd] = dStack_128;
  param_1[0xc] = dStack_130;
  param_1[0xe] = dStack_120;
  return;
}



/* Entry: 101543234; end: 10154327b;  */

undefined8 FUN_101543234(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10154327c; end: 101543607;  */

undefined * FUN_10154327c(ulong *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_a0 [16];
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar12 = *(long *)(param_1[2] + 0x10);
  puStack_c0 = (undefined *)0x0;
  if (lVar12 != 0) {
    puVar14 = (undefined8 *)(param_1[2] + 0x58);
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      iVar4 = *(int *)(puVar14 + -7);
      iVar5 = *(int *)((long)puVar14 + -0x34);
      uVar13 = puVar14[-6];
      uVar2 = puVar14[-5];
      iVar6 = *(int *)(puVar14 + -4);
      lVar17 = puVar14[-3];
      cVar7 = *(char *)(puVar14 + -2);
      uVar1 = puVar14[-1];
      uVar3 = *puVar14;
      if ((*(byte *)((long)puVar14 + -0xf) & 1) == 0) {
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uVar15 = uStack_80 & 0xffffffffffff;
        if ((uStack_78 & 0x2000000000000000) != 0) {
          uVar15 = uStack_78 >> 0x38 & 0xf;
        }
        if (uVar15 == 0) {
          func_0x000107c61434(uVar2);
          func_0x00010006c00c(uVar1,uVar3);
          uVar13 = 0;
          uVar15 = 0;
          goto joined_r0x000101543430;
        }
        uStack_88 = param_1[1];
        uStack_90 = *param_1;
        func_0x000107c61434(uVar2);
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000100402194(&uStack_80,auStack_a0);
        func_0x000107c5fb78(uVar13,uVar2);
        uVar13 = uStack_90;
        uVar15 = uStack_88;
        if (cVar7 != '\x01') goto LAB_101543434;
LAB_1015433fc:
        uVar16 = *(undefined8 *)(&UNK_10d95e120 + lVar17 * 8);
      }
      else {
        func_0x000107c61434(uVar2);
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000107c61434(uVar2);
        uVar15 = uVar2;
joined_r0x000101543430:
        if (cVar7 == '\x01') goto LAB_1015433fc;
LAB_101543434:
        uVar16 = 2;
      }
      uVar10 = 0;
      func_0x0001047c7534(0);
      func_0x000107c610f8();
      func_0x0001047c6b64((double)iVar6,uVar13,uVar15,(long)iVar5,(long)iVar4,uVar16,uVar10);
      func_0x000107c61174();
      if (lVar17 == 1) {
        puVar9 = puStack_c8;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puStack_c8 < 0)) ||
           (puVar9 = puStack_c8, ((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_c8 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_c8) {
              puVar8 = puStack_c8;
            }
            func_0x000107c60480(puVar8);
          }
          puVar9 = (undefined *)0x0;
          FUN_101540c70(0,puVar8 + 1,1,puStack_c8);
        }
        uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar11 + 0x10);
        lVar17 = uVar15 + 1;
        puStack_c8 = puVar9;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar15) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_101540c70(puVar8,lVar17,1,puVar9);
          puStack_c8 = puVar8;
LAB_10154352c:
          uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        }
      }
      else {
        puVar9 = puStack_c0;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puStack_c0 < 0)) ||
           (puVar9 = puStack_c0, ((ulong)puStack_c0 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_c0 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_c0) {
              puVar8 = puStack_c0;
            }
            func_0x000107c60480(puVar8);
          }
          puVar9 = (undefined *)0x0;
          FUN_101540c70(0,puVar8 + 1,1,puStack_c0);
        }
        uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar11 + 0x10);
        lVar17 = uVar15 + 1;
        puStack_c0 = puVar9;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar15) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_101540c70(puVar8,lVar17,1,puVar9);
          puStack_c0 = puVar8;
          goto LAB_10154352c;
        }
      }
      puVar14 = puVar14 + 8;
      *(long *)(uVar11 + 0x10) = lVar17;
      *(ulong *)(uVar11 + uVar15 * 8 + 0x20) = uVar13;
      func_0x000107c6142c(uVar2);
      func_0x00010006c090(uVar1,uVar3);
      func_0x000107c61170(uVar13);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if ((ulong)puStack_c8 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_c8) {
        puVar9 = puStack_c8;
      }
      func_0x000107c60480();
    }
    if (puVar9 != (undefined *)0x0) {
      if ((ulong)puStack_c0 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_c0) {
          puVar9 = puStack_c0;
        }
        func_0x000107c60480();
      }
      if ((puVar9 == (undefined *)0x0) || ((param_2 & 1) != 0)) {
        func_0x000107c6142c(puStack_c0);
        return puStack_c8;
      }
    }
    func_0x000107c6142c(puStack_c8);
  }
  return puStack_c0;
}



/* Entry: 101543608; end: 10154363b;  */

undefined8 FUN_101543608(undefined8 param_1)

{
  (*(code *)(undefined *)0x10162e3ac)();
  return param_1;
}



/* Entry: 10154363c; end: 1015438f7;  */

void FUN_10154363c(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_238;
  undefined7 uStack_237;
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
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined1 aauStack_1a0 [2] [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
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
  undefined1 uStack_90;
  
  uVar6 = param_2;
  FUN_10156aec4();
  if ((uVar6 & 1) != 0) {
    FUN_10156ad74(aauStack_1a0,param_2,param_3,param_4);
    func_0x00010350a104();
    if (((param_2 & 1) != 0) && (func_0x00010350a050(), (param_2 & 1) != 0)) {
      FUN_101545768(uStack_158,uStack_150,uStack_148,uStack_140,uStack_138,uStack_130);
      uVar6 = uStack_130 >> 0x3c;
      uVar1 = 0;
      if (uVar6 < 0xf) {
        uVar1 = uStack_158;
      }
      uVar7 = 0;
      if (uVar6 < 0xf) {
        uVar7 = uStack_138;
      }
      uVar2 = 0xc000000000000000;
      if (uVar6 < 0xf) {
        uVar2 = uStack_130;
      }
      uVar3 = 0;
      if (uVar6 < 0xf) {
        uVar3 = uStack_150;
      }
      uVar4 = 0;
      if (uVar6 < 0xf) {
        uVar4 = uStack_148;
      }
      uVar5 = 0;
      if (uVar6 < 0xf) {
        uVar5 = uStack_140;
      }
      func_0x00010006c090(uVar7,uVar2);
      FUN_101545768(uStack_158,uStack_150,uStack_148,uStack_140,uStack_138,uStack_130);
      func_0x00010006c090(uVar7,uVar2);
      FUN_101545768(uStack_158,uStack_150,uStack_148,uStack_140,uStack_138,uStack_130);
      func_0x00010006c090(uVar7,uVar2);
      FUN_101545768(uStack_158,uStack_150,uStack_148,uStack_140,uStack_138,uStack_130);
      func_0x00010006c090(uVar7,uVar2);
      uVar6 = uStack_160;
      uVar7 = uStack_168;
      uVar9 = uStack_170;
      uVar10 = uStack_178;
      if (0xe < uStack_160 >> 0x3c) {
        func_0x00010006c090(0,0xc000000000000000);
        uVar6 = 0xc000000000000000;
        uVar7 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      func_0x000101545784(uStack_178,uStack_170,uStack_168,uStack_160);
      func_0x00010006c090(uVar7,uVar6);
      FUN_101545734(aauStack_1a0);
      uStack_238 = 1;
      auVar8 = NEON_ext(aauStack_1a0[0],aauStack_1a0[0],8,1);
      uStack_228 = auVar8._8_8_;
      uStack_230 = auVar8._0_8_;
      uStack_218 = 1;
      uStack_208 = 1;
      uStack_1f8 = 1;
      uStack_1e8 = 1;
      uStack_1e0 = 1;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 1;
      uStack_1b0 = 0;
      uStack_1a8 = 1;
      uStack_220 = uVar1;
      uStack_210 = uVar3;
      uStack_200 = uVar4;
      uStack_1f0 = uVar5;
      uStack_1d0 = uVar10;
      uStack_1c8 = uVar9;
      FUN_101545730(&uStack_238);
      uStack_c0 = CONCAT71(uStack_1d7,uStack_1d8);
      uStack_b8 = uStack_1d0;
      uStack_a8 = uStack_1c0;
      uStack_b0 = uStack_1c8;
      uStack_a0 = CONCAT71(uStack_1b7,uStack_1b8);
      uStack_98 = uStack_1b0;
      uStack_90 = uStack_1a8;
      uStack_100 = CONCAT71(uStack_217,uStack_218);
      uStack_f8 = uStack_210;
      uStack_e8 = uStack_200;
      uStack_f0 = CONCAT71(uStack_207,uStack_208);
      uStack_e0 = CONCAT71(uStack_1f7,uStack_1f8);
      uStack_d8 = uStack_1f0;
      uStack_c8 = uStack_1e0;
      uStack_d0 = CONCAT71(uStack_1e7,uStack_1e8);
      uStack_120 = CONCAT71(uStack_237,uStack_238);
      uStack_118 = uStack_230;
      uStack_108 = uStack_220;
      uStack_110 = uStack_228;
      goto LAB_1015437c4;
    }
    FUN_101545734(aauStack_1a0);
  }
  FUN_101541034(&uStack_120);
LAB_1015437c4:
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[0x11] = uStack_98;
  param_1[0x10] = uStack_a0;
  *(undefined1 *)(param_1 + 0x12) = uStack_90;
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



/* Entry: 1015438f8; end: 101543c67;  */

void FUN_1015438f8(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined1 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  double dStack_2b0;
  double dStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  double dStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [16];
  float fStack_210;
  ulong uStack_208;
  ulong uStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  float fStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  float fStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  float fStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
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
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined1 uStack_90;
  
  uVar4 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  FUN_10156a60c();
  uVar1 = uVar4;
  func_0x000101607aa4();
  func_0x00010006c090(uVar4,uVar2);
  func_0x000107c61574(uVar3);
  if ((uVar1 & 1) != 0) {
    FUN_10156a60c(param_2,param_3);
    func_0x000101607930(auStack_220);
    func_0x00010006c090(param_2,param_3);
    func_0x000107c61574();
    FUN_10161ee88();
    if (((((param_4 & 1) != 0) && (FUN_10161ef68(), (param_4 & 1) != 0)) &&
        (func_0x00010161eff8(), (param_4 & 1) != 0)) && (func_0x00010161f088(), (param_4 & 1) != 0))
    {
      uVar4 = uStack_1d0 >> 0x3c;
      dVar7 = 0.0;
      if (uVar4 < 0xf) {
        dVar7 = (double)fStack_1e0;
      }
      uVar2 = 0;
      if (uVar4 < 0xf) {
        uVar2 = uStack_1d8;
      }
      uVar1 = 0xc000000000000000;
      if (uVar4 < 0xf) {
        uVar1 = uStack_1d0;
      }
      FUN_100cb4e8c();
      func_0x00010006c090(uVar2,uVar1);
      uVar4 = uStack_1b8 >> 0x3c;
      dVar8 = 0.0;
      if (uVar4 < 0xf) {
        dVar8 = (double)fStack_1c8;
      }
      uVar2 = 0;
      if (uVar4 < 0xf) {
        uVar2 = uStack_1c0;
      }
      uVar1 = 0xc000000000000000;
      if (uVar4 < 0xf) {
        uVar1 = uStack_1b8;
      }
      FUN_100cb4e8c();
      func_0x00010006c090(uVar2,uVar1);
      uVar4 = uStack_1e8 >> 0x3c;
      dVar9 = 0.0;
      if (uVar4 < 0xf) {
        dVar9 = (double)fStack_1f8;
      }
      uVar2 = 0;
      if (uVar4 < 0xf) {
        uVar2 = uStack_1f0;
      }
      uVar1 = 0xc000000000000000;
      if (uVar4 < 0xf) {
        uVar1 = uStack_1e8;
      }
      FUN_100cb4e8c();
      func_0x00010006c090(uVar2,uVar1);
      uVar4 = uStack_200 >> 0x3c;
      dVar10 = 0.0;
      if (uVar4 < 0xf) {
        dVar10 = (double)fStack_210;
      }
      uVar1 = 0;
      if (uVar4 < 0xf) {
        uVar1 = uStack_208;
      }
      uVar3 = 0xc000000000000000;
      if (uVar4 < 0xf) {
        uVar3 = uStack_200;
      }
      FUN_100cb4e8c();
      func_0x00010006c090(uVar1,uVar3);
      func_0x00010161f118();
      if ((uVar1 & 1) == 0) {
        dVar5 = 0.0;
        uVar6 = 1;
      }
      else {
        uVar4 = uStack_188 >> 0x3c;
        dVar5 = 0.0;
        if (uVar4 < 0xf) {
          dVar5 = (double)fStack_198;
        }
        uVar1 = 0;
        if (uVar4 < 0xf) {
          uVar1 = uStack_190;
        }
        uVar3 = 0xc000000000000000;
        if (uVar4 < 0xf) {
          uVar3 = uStack_188;
        }
        FUN_100cb4e8c();
        func_0x00010006c090(uVar1,uVar3);
        uVar6 = 0;
      }
      func_0x00010161f1a8();
      if ((uVar1 & 1) == 0) {
        FUN_1015456fc(auStack_220);
        uStack_228 = 1;
LAB_101543bb8:
        dStack_230 = 0.0;
      }
      else {
        FUN_100cb4e8c(uStack_138,uStack_130,uStack_128);
        FUN_1015456fc(auStack_220);
        if (0xe < uStack_128 >> 0x3c) {
          func_0x00010006c090(0,0xc000000000000000);
          uStack_228 = 0;
          goto LAB_101543bb8;
        }
        func_0x000100cb4ea8(uStack_138,uStack_130,uStack_128);
        uStack_228 = 0;
        dStack_230 = (double)(float)uStack_138;
      }
      uStack_2b8 = 1;
      uStack_298 = 0xff;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_26f = 0;
      uStack_268 = 0;
      uStack_277 = 0;
      uStack_270 = 0;
      uStack_260 = 1;
      uStack_258 = 0;
      dStack_2b0 = dVar9;
      dStack_2a8 = dVar10;
      dStack_250 = dVar7;
      dStack_248 = dVar8;
      dStack_240 = dVar5;
      uStack_238 = uVar6;
      FUN_101545730(&uStack_2b8);
      dStack_b8 = dStack_250;
      uStack_c0 = CONCAT71(uStack_257,uStack_258);
      dStack_a8 = dStack_240;
      dStack_b0 = dStack_248;
      dStack_98 = dStack_230;
      uStack_a0 = CONCAT71(uStack_237,uStack_238);
      uStack_90 = uStack_228;
      uStack_f8 = uStack_290;
      uStack_100 = uStack_298;
      uStack_e8 = uStack_280;
      uStack_f0 = uStack_288;
      uStack_d8 = CONCAT71(uStack_26f,uStack_270);
      uStack_e0 = CONCAT71(uStack_277,uStack_278);
      uStack_c8 = uStack_260;
      uStack_d0 = CONCAT71(uStack_267,uStack_268);
      dStack_118 = dStack_2b0;
      uStack_120 = CONCAT71(uStack_2b7,uStack_2b8);
      uStack_108 = uStack_2a0;
      dStack_110 = dStack_2a8;
      goto LAB_101543b00;
    }
    FUN_1015456fc(auStack_220);
  }
  FUN_101541034(&uStack_120);
LAB_101543b00:
  param_1[0xd] = dStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = dStack_a8;
  param_1[0xe] = dStack_b0;
  param_1[0x11] = dStack_98;
  param_1[0x10] = uStack_a0;
  *(undefined1 *)(param_1 + 0x12) = uStack_90;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[1] = dStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = dStack_110;
  return;
}



/* Entry: 101543c68; end: 101543d63;  */

undefined1  [16] FUN_101543c68(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  plVar2 = param_1;
  FUN_1015c6434();
  if (((ulong)plVar2 & 1) == 0) {
    dVar7 = 0.0;
    lVar3 = 1;
  }
  else {
    uVar5 = (ulong)param_1[5] >> 0x3c;
    dVar7 = 0.0;
    if (uVar5 < 0xf) {
      dVar7 = (double)(float)param_1[3];
    }
    lVar3 = 0;
    if (uVar5 < 0xf) {
      lVar3 = param_1[4];
    }
    uVar1 = 0xc000000000000000;
    if (uVar5 < 0xf) {
      uVar1 = param_1[5];
    }
    lVar6 = *(long *)(*param_1 + 0x10);
    if (lVar6 == 0) {
      FUN_100cb4e8c();
      func_0x00010006c090(lVar3,uVar1);
      lVar3 = 0;
    }
    else {
      puVar4 = (undefined8 *)(*param_1 + 0x20);
      uVar8 = *puVar4;
      uVar9 = puVar4[lVar6 * 3 + -3];
      FUN_100cb4e8c();
      func_0x00010006c090(lVar3,uVar1);
      lVar3 = 0x112db3c80;
      func_0x0001000285a8(0x112db3c80,&UNK_10d95e0f0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      *(double *)(lVar3 + 0x28) = (double)(float)((ulong)uVar8 >> 0x20);
      *(double *)(lVar3 + 0x20) = (double)(float)uVar8;
      *(double *)(lVar3 + 0x38) = (double)(float)((ulong)uVar9 >> 0x20);
      *(double *)(lVar3 + 0x30) = (double)(float)uVar9;
    }
  }
  auVar10._8_8_ = lVar3;
  auVar10._0_8_ = dVar7;
  return auVar10;
}



/* Entry: 101543d64; end: 101544207;  */

void FUN_101543d64(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_f0;
  
  uVar13 = param_2[4];
  if (uVar13 != 1) {
    uVar8 = param_2[9];
    uVar6 = param_2[10];
    uVar9 = param_2[7];
    uVar14 = param_2[8];
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    uVar20 = param_2[3];
    uVar17 = param_2[2];
    uVar15 = param_2[7];
    uVar19 = param_2[6];
    uVar16 = param_2[5];
    func_0x00010006c00c(*param_2,param_2[1]);
    func_0x0001015455a8(uVar3,uVar5,uVar13);
    func_0x0001015455a8(uVar2,uVar4,uVar9);
    FUN_1015456a4();
    FUN_101571b04();
    if ((uVar14 & 1) != 0) {
      uVar7 = uVar13;
      uVar18 = uVar17;
      uVar9 = uVar20;
      if (uVar13 == 0) {
        func_0x00010360efc0();
        uVar7 = uVar6;
        uVar18 = uVar14;
        uVar9 = uVar8;
      }
      func_0x0001015455a8(uVar17,uVar20,uVar13);
      uVar6 = uVar18;
      uVar14 = uVar7;
      func_0x00010360d0a4(uVar18,uVar9);
      func_0x00010006c090(uVar18);
      func_0x000107c61574();
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar13;
        uVar18 = uVar17;
        uVar8 = uVar20;
        if (uVar13 == 0) {
          func_0x00010360efc0();
          uVar6 = uVar14;
          uVar18 = uVar7;
          uVar8 = uVar9;
        }
        func_0x0001015455a8(uVar17,uVar20,uVar13);
        uVar14 = uVar18;
        uVar9 = uVar8;
        uVar7 = uVar6;
        func_0x00010360cf24();
        func_0x00010006c090(uVar18,uVar8);
        func_0x000107c61574(uVar6);
        uVar6 = uVar14;
        uVar8 = uVar9;
        uVar18 = uVar7;
        func_0x00010360e07c();
        func_0x00010006c090(uVar14);
        func_0x000107c61574();
        if (((uint)uVar8 & 0xff) == 1) {
          uStack_f0 = *(undefined8 *)(&UNK_10d95e190 + uVar6 * 8);
        }
        else {
          uStack_f0 = 0;
        }
        uVar6 = uVar13;
        uVar14 = uVar17;
        uVar8 = uVar20;
        if (uVar13 == 0) {
          func_0x00010360efc0();
          uVar6 = uVar18;
          uVar14 = uVar7;
          uVar8 = uVar9;
        }
        func_0x0001015455a8(uVar17,uVar20,uVar13);
        uVar17 = uVar14;
        uVar9 = uVar8;
        uVar7 = uVar6;
        func_0x00010360cf24();
        func_0x00010006c090(uVar14,uVar8);
        func_0x000107c61574(uVar6);
        uVar13 = uVar17;
        uVar8 = uVar9;
        uVar6 = uVar7;
        func_0x00010360e158();
        func_0x00010006c090(uVar17);
        func_0x000107c61574();
        if (((uint)uVar8 & 0xff) != 1) {
          uVar13 = 0;
        }
        uVar14 = uVar15;
        uVar17 = uVar16;
        uVar8 = uVar19;
        if (uVar15 == 0) {
          func_0x0001015a0b68();
          uVar14 = uVar6;
          uVar17 = uVar7;
          uVar8 = uVar9;
        }
        func_0x0001015455a8(uVar16,uVar19,uVar15);
        uVar6 = uVar17;
        uVar9 = uVar8;
        uVar7 = uVar14;
        FUN_1015a00a4();
        func_0x00010006c090(uVar17,uVar8);
        func_0x000107c61574(uVar14);
        uVar14 = uVar6;
        uVar8 = uVar9;
        uVar15 = uVar7;
        FUN_1015a04a4(uVar6,uVar9,uVar7);
        func_0x00010006c090(uVar8,uVar15);
        uVar15 = uVar6;
        uVar8 = uVar9;
        uVar16 = uVar7;
        FUN_1015a0534(uVar6,uVar9,uVar7);
        func_0x00010006c090(uVar8,uVar16);
        uVar16 = uVar6;
        func_0x0001015a06b8(uVar6,uVar9,uVar7);
        bVar1 = (uVar16 & 1) == 0;
        if (bVar1) {
          uVar16 = 0;
        }
        else {
          uVar16 = uVar6;
          uVar8 = uVar9;
          uVar17 = uVar7;
          func_0x0001015a0648(uVar6,uVar9,uVar7);
          func_0x00010006c090(uVar8,uVar17);
        }
        uVar18 = (ulong)bVar1;
        uVar17 = uVar6;
        func_0x0001015a089c(uVar6,uVar9,uVar7);
        if ((uVar17 & 1) == 0) {
          func_0x00010006c090(uVar6,uVar9);
          func_0x000107c61574(uVar7);
          func_0x0001015451a0(param_2,0x112db3b88,&UNK_10d95e000);
          uVar17 = 0;
          uVar12 = 0;
          uVar11 = 1;
        }
        else {
          uVar17 = uVar6;
          uVar8 = uVar9;
          uVar10 = uVar7;
          func_0x0001015a082c();
          func_0x00010006c090(uVar6,uVar9);
          func_0x000107c61574(uVar7);
          func_0x0001015451a0(param_2,0x112db3b88,&UNK_10d95e000);
          func_0x00010006c090(uVar8,uVar10);
          uVar11 = 0;
          uVar12 = 0;
        }
        goto LAB_101543ef4;
      }
    }
    func_0x0001015451a0(param_2,0x112db3b88,&UNK_10d95e000);
  }
  uStack_f0 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar11 = 0;
  uVar18 = 0;
  uVar12 = 1;
LAB_101543ef4:
  *param_1 = uStack_f0;
  param_1[1] = uVar13;
  param_1[2] = uVar14;
  param_1[3] = 0;
  param_1[4] = uVar15;
  param_1[5] = 0;
  param_1[6] = uVar16;
  param_1[7] = uVar18;
  param_1[8] = uVar17;
  *(undefined1 *)(param_1 + 9) = uVar11;
  *(undefined1 *)((long)param_1 + 0x49) = uVar12;
  return;
}



/* Entry: 101544208; end: 101544263;  */

undefined1  [16] FUN_101544208(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  func_0x000101545670();
  if ((char)param_1[1] == '\x01') {
    uVar1 = *(undefined8 *)(&UNK_10d95e138 + *param_1 * 8);
  }
  else {
    uVar1 = 0;
  }
  if ((char)param_1[5] == '\x01') {
    lVar2 = param_1[4];
  }
  else {
    lVar2 = 0;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101544264; end: 10154516b;  */

void FUN_101544264(ulong *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 uVar16;
  long *plStack_610;
  ulong uStack_608;
  undefined4 uStack_600;
  uint uStack_5fc;
  long *plStack_5f8;
  uint uStack_5ec;
  long *plStack_5e8;
  uint uStack_5dc;
  long lStack_5d8;
  ulong uStack_5d0;
  uint uStack_5c4;
  long *plStack_5c0;
  uint uStack_5b4;
  long *plStack_5b0;
  long *plStack_5a8;
  ulong uStack_5a0;
  uint uStack_598;
  uint uStack_594;
  long *plStack_590;
  uint uStack_584;
  long *plStack_580;
  uint uStack_574;
  long lStack_570;
  uint uStack_564;
  long *plStack_560;
  uint uStack_554;
  long *plStack_550;
  uint uStack_544;
  long *plStack_540;
  ulong uStack_538;
  uint uStack_530;
  uint uStack_52c;
  long *plStack_528;
  uint uStack_51c;
  long *plStack_518;
  uint uStack_50c;
  long *plStack_508;
  long *plStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  uint uStack_4e4;
  long lStack_4e0;
  long lStack_4d8;
  uint uStack_4d0;
  uint uStack_4cc;
  long lStack_4c8;
  long lStack_4c0;
  byte bStack_4b8;
  long alStack_480 [2];
  long lStack_470;
  byte bStack_468;
  long alStack_440 [4];
  long lStack_420;
  byte bStack_418;
  long lStack_400;
  char cStack_3f8;
  long alStack_3d0 [8];
  ulong uStack_390;
  byte bStack_388;
  long lStack_370;
  byte bStack_368;
  long alStack_340 [2];
  long *plStack_330;
  byte bStack_328;
  long alStack_310 [4];
  ulong uStack_2f0;
  byte bStack_2e8;
  long alStack_2d0 [10];
  long alStack_280 [6];
  ulong uStack_250;
  byte bStack_248;
  long alStack_220 [4];
  long lStack_200;
  byte bStack_1f8;
  long alStack_1e0 [8];
  undefined1 auStack_1a0 [40];
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 auStack_160 [40];
  ulong uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 auStack_120 [160];
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  plVar12 = (long *)param_2[2];
  plVar9 = (long *)param_2[3];
  plVar13 = (long *)param_2[4];
  plStack_500 = param_2;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
  }
  else {
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    func_0x0001015455a8(plVar12,plVar9,plVar13);
    param_4 = plVar13;
    param_2 = plVar12;
    param_3 = plVar9;
  }
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  func_0x0001015455a8(plVar12,plVar9,plVar13);
  plVar2 = param_4;
  func_0x00010360d3dc(&lStack_4c0,param_2,param_3);
  func_0x00010006c090(param_2);
  func_0x000107c61574(param_4);
  plVar14 = &lStack_4c0;
  func_0x00010154543c(plVar14);
  lStack_4c8 = lStack_4c0;
  uStack_4cc = (uint)bStack_4b8;
  plVar8 = plVar13;
  plVar4 = plVar12;
  plVar6 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar8 = plVar2;
    plVar4 = plVar14;
    plVar6 = param_3;
  }
  plVar2 = plVar8;
  func_0x00010360d3dc(alStack_480,plVar4,plVar6);
  func_0x00010006c090(plVar4);
  func_0x000107c61574(plVar8);
  plVar14 = alStack_480;
  func_0x00010154543c(plVar14);
  uStack_4d0 = (uint)bStack_468;
  lStack_4d8 = lStack_470;
  plVar8 = plVar13;
  plVar4 = plVar12;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar8 = plVar2;
    plVar4 = plVar14;
    plVar5 = plVar6;
  }
  plVar2 = plVar8;
  func_0x00010360d3dc(alStack_440,plVar4,plVar5);
  func_0x00010006c090(plVar4);
  func_0x000107c61574(plVar8);
  plVar14 = alStack_440;
  func_0x00010154543c(plVar14);
  lStack_4e0 = lStack_420;
  uStack_4e4 = (uint)bStack_418;
  plVar8 = plVar13;
  plVar4 = plVar12;
  plVar6 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar8 = plVar2;
    plVar4 = plVar14;
    plVar6 = plVar5;
  }
  plVar2 = plVar8;
  func_0x00010360d33c(&lStack_400,plVar4,plVar6);
  func_0x00010006c090(plVar4);
  func_0x000107c61574(plVar8);
  plVar14 = &lStack_400;
  func_0x000101545470();
  if (cStack_3f8 == '\x01') {
    uStack_4f8 = *(ulong *)(&UNK_10d95e158 + lStack_400 * 8);
  }
  else {
    uStack_4f8 = 0;
  }
  plVar8 = plVar13;
  plVar4 = plVar12;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar8 = plVar2;
    plVar4 = plVar14;
    plVar5 = plVar6;
  }
  plVar14 = plVar4;
  plVar6 = plVar5;
  plVar3 = plVar8;
  func_0x00010360cf24();
  func_0x00010006c090(plVar4,plVar5);
  func_0x000107c61574(plVar8);
  plVar2 = plVar14;
  plVar8 = plVar6;
  plVar4 = plVar3;
  func_0x00010360e07c();
  func_0x00010006c090(plVar14);
  func_0x000107c61574();
  if (((uint)plVar8 & 0xff) == 1) {
    uStack_4f0 = *(ulong *)(&UNK_10d95e190 + (long)plVar2 * 8);
  }
  else {
    uStack_4f0 = 0;
  }
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar8 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar3;
    plVar2 = plVar4;
    plVar8 = plVar6;
  }
  plVar4 = plVar14;
  plVar6 = plVar8;
  plVar5 = plVar2;
  func_0x00010360cf24();
  func_0x00010006c090(plVar14,plVar8);
  func_0x000107c61574(plVar2);
  plVar14 = plVar4;
  plVar2 = plVar6;
  plVar8 = plVar5;
  func_0x00010360e274();
  uStack_50c = (uint)plVar2;
  plStack_508 = plVar14;
  func_0x00010006c090(plVar4);
  func_0x000107c61574();
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar4 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar5;
    plVar2 = plVar8;
    plVar4 = plVar6;
  }
  plVar8 = plVar14;
  plVar6 = plVar4;
  plVar5 = plVar2;
  func_0x00010360cf24();
  func_0x00010006c090(plVar14,plVar4);
  func_0x000107c61574(plVar2);
  plVar14 = plVar8;
  plVar2 = plVar6;
  plVar4 = plVar5;
  func_0x00010360e234();
  uStack_51c = (uint)plVar2;
  plStack_518 = plVar14;
  func_0x00010006c090(plVar8);
  func_0x000107c61574();
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar8 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar5;
    plVar2 = plVar4;
    plVar8 = plVar6;
  }
  plVar4 = plVar14;
  plVar6 = plVar8;
  plVar5 = plVar2;
  func_0x00010360da88();
  uStack_52c = (uint)plVar6;
  plVar6 = plVar5;
  plVar3 = param_5;
  plStack_528 = plVar4;
  func_0x00010006c090(plVar14,plVar8);
  func_0x000107c61574(plVar2);
  func_0x00010006c090(plVar5);
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar8 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar5;
    plVar2 = plVar6;
    plVar8 = param_5;
  }
  plVar4 = plVar2;
  func_0x00010360d144(alStack_3d0,plVar14,plVar8);
  func_0x00010006c090(plVar14);
  func_0x000107c61574(plVar2);
  plVar14 = alStack_3d0;
  func_0x0001015454a4();
  uStack_530 = (uint)bStack_388;
  uStack_538 = uStack_390;
  plVar2 = plVar12;
  plVar6 = plVar13;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar6 = plVar4;
    plVar5 = plVar8;
  }
  plVar14 = plVar2;
  plVar8 = plVar5;
  plVar4 = plVar6;
  func_0x00010360db90();
  uStack_544 = (uint)plVar8;
  plVar8 = plVar4;
  plVar7 = plVar3;
  plStack_540 = plVar14;
  func_0x00010006c090(plVar2,plVar5);
  func_0x000107c61574(plVar6);
  func_0x00010006c090();
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar6 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar4;
    plVar2 = plVar8;
    plVar6 = plVar3;
  }
  plVar8 = plVar14;
  plVar4 = plVar6;
  plVar5 = plVar2;
  func_0x00010360dc14();
  uStack_554 = (uint)plVar4;
  plVar4 = plVar5;
  plVar3 = plVar7;
  plStack_550 = plVar8;
  func_0x00010006c090(plVar14,plVar6);
  func_0x000107c61574(plVar2);
  func_0x00010006c090();
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar8 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar5;
    plVar2 = plVar4;
    plVar8 = plVar7;
  }
  plVar4 = plVar14;
  plVar6 = plVar8;
  plVar5 = plVar2;
  func_0x00010360db0c();
  uStack_564 = (uint)plVar6;
  plVar6 = plVar5;
  plVar7 = plVar3;
  plStack_560 = plVar4;
  func_0x00010006c090(plVar14,plVar8);
  func_0x000107c61574(plVar2);
  func_0x00010006c090(plVar5);
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar8 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar5;
    plVar2 = plVar6;
    plVar8 = plVar3;
  }
  plVar4 = plVar2;
  func_0x00010360dd1c(&lStack_370,plVar14,plVar8);
  func_0x00010006c090(plVar14);
  func_0x000107c61574(plVar2);
  plVar14 = &lStack_370;
  func_0x0001015454d8(plVar14);
  lStack_570 = lStack_370;
  uStack_574 = (uint)bStack_368;
  plVar2 = plVar12;
  plVar6 = plVar13;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar6 = plVar4;
    plVar5 = plVar8;
  }
  plVar8 = plVar6;
  func_0x00010360dd1c(alStack_340,plVar2,plVar5);
  func_0x00010006c090(plVar2);
  func_0x000107c61574(plVar6);
  plVar14 = alStack_340;
  func_0x0001015454d8();
  plStack_580 = plStack_330;
  uStack_584 = (uint)bStack_328;
  func_0x0001040440e8();
  uStack_594 = (uint)plVar5;
  plVar2 = plVar12;
  plVar4 = plVar13;
  plVar6 = plVar9;
  plStack_590 = plVar14;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar4 = plVar8;
    plVar6 = plVar5;
  }
  plVar8 = plVar4;
  func_0x00010360d924(alStack_310,plVar2,plVar6);
  func_0x00010006c090(plVar2);
  func_0x000107c61574(plVar4);
  plVar14 = alStack_310;
  func_0x00010154550c();
  uStack_598 = (uint)bStack_2e8;
  uStack_5a0 = uStack_2f0;
  plVar2 = plVar12;
  plVar4 = plVar13;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar4 = plVar8;
    plVar5 = plVar6;
  }
  plVar14 = plVar2;
  plVar8 = plVar5;
  plVar6 = plVar4;
  func_0x00010360d744();
  uStack_5b4 = (uint)plVar8;
  plVar8 = plVar6;
  plVar3 = plVar7;
  plStack_5b0 = plVar14;
  func_0x00010006c090(plVar2,plVar5);
  func_0x000107c61574(plVar4);
  func_0x00010006c090(plVar6);
  plVar14 = plVar12;
  plVar2 = plVar13;
  plVar4 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar14 = plVar6;
    plVar2 = plVar8;
    plVar4 = plVar7;
  }
  plVar8 = plVar2;
  func_0x00010360cc70(alStack_2d0,plVar14,plVar4);
  func_0x00010006c090(plVar14);
  func_0x000107c61574(plVar2);
  plVar14 = alStack_2d0;
  FUN_101544208();
  plVar2 = plVar12;
  plVar6 = plVar13;
  plVar5 = plVar9;
  plStack_5c0 = plVar14;
  plStack_5a8 = plVar4;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar6 = plVar8;
    plVar5 = plVar4;
  }
  plVar8 = plVar6;
  func_0x00010360d540(alStack_280,plVar2,plVar5);
  func_0x00010006c090(plVar2);
  func_0x000107c61574(plVar6);
  plVar14 = alStack_280;
  func_0x000101545540(plVar14);
  uStack_5c4 = (uint)bStack_248;
  uStack_5d0 = uStack_250;
  plVar2 = plVar12;
  plVar4 = plVar13;
  plVar6 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar4 = plVar8;
    plVar6 = plVar5;
  }
  plVar8 = plVar4;
  func_0x00010360d7c0(alStack_220,plVar2,plVar6);
  func_0x00010006c090(plVar2);
  func_0x000107c61574(plVar4);
  plVar14 = alStack_220;
  func_0x000101545574();
  lStack_5d8 = lStack_200;
  uStack_5dc = (uint)bStack_1f8;
  plVar2 = plVar12;
  plVar4 = plVar13;
  plVar5 = plVar9;
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar2 = plVar14;
    plVar4 = plVar8;
    plVar5 = plVar6;
  }
  plVar14 = plVar2;
  plVar8 = plVar5;
  plVar6 = plVar4;
  func_0x00010360dc98();
  uStack_5ec = (uint)plVar8;
  plVar8 = plVar6;
  plVar7 = plVar3;
  plStack_5e8 = plVar14;
  func_0x00010006c090(plVar2,plVar5);
  func_0x000107c61574(plVar4);
  func_0x00010006c090();
  if (plVar13 == (long *)0x0) {
    func_0x00010360efc0();
    plVar12 = plVar6;
    plVar13 = plVar8;
    plVar9 = plVar3;
  }
  plVar14 = plVar12;
  plVar2 = plVar9;
  plVar8 = plVar13;
  func_0x00010360ddc8();
  uStack_5fc = (uint)plVar2;
  plVar2 = plVar8;
  plStack_5f8 = plVar14;
  func_0x00010006c090(plVar12,plVar9);
  func_0x000107c61574(plVar13);
  func_0x00010006c090();
  plVar12 = (long *)plStack_500[5];
  plVar9 = (long *)plStack_500[6];
  plVar14 = (long *)plStack_500[7];
  plVar13 = plVar14;
  plVar4 = plVar12;
  plVar6 = plVar9;
  if (plVar14 == (long *)0x0) {
    func_0x0001015a0b68();
    plVar13 = plVar2;
    plVar4 = plVar8;
    plVar6 = plVar7;
  }
  func_0x0001015455a8(plVar12,plVar9,plVar14);
  func_0x0001015455a8(plVar12,plVar9,plVar14);
  func_0x0001015455a8(plVar12,plVar9,plVar14);
  plVar5 = plVar4;
  plVar3 = plVar6;
  plVar7 = plVar13;
  FUN_1015a00a4();
  func_0x00010006c090(plVar4,plVar6);
  func_0x000107c61574(plVar13);
  plVar4 = plVar5;
  plVar2 = plVar3;
  plVar8 = plVar7;
  FUN_1015a0744(alStack_1e0);
  FUN_1015c610c();
  plVar13 = alStack_1e0;
  func_0x0001015455d4(plVar13);
  if (((ulong)plVar4 & 1) == 0) {
    uStack_600 = 1;
    plStack_500 = (long *)0x0;
  }
  else {
    FUN_1015a0744(auStack_1a0,plVar5,plVar3,plVar7);
    plVar2 = plStack_168;
    FUN_100cb4e8c(plStack_178,plStack_170);
    func_0x0001015455d4(auStack_1a0);
    if ((ulong)plStack_168 >> 0x3c < 0xf) {
      plVar13 = plStack_178;
      func_0x000100cb4ea8(plStack_178);
    }
    else {
      plVar13 = (long *)0x0;
      plVar8 = (long *)0xc000000000000000;
      func_0x00010006c090(0);
      plStack_178 = (long *)0x0;
      plStack_170 = plVar8;
      plStack_168 = plVar2;
    }
    uStack_600 = 0;
    plVar2 = plStack_170;
    plVar8 = plStack_168;
    plStack_500 = plStack_178;
  }
  plVar4 = plVar14;
  plVar15 = plVar12;
  plVar6 = plVar9;
  if (plVar14 == (long *)0x0) {
    func_0x0001015a0b68();
    plVar4 = plVar8;
    plVar15 = plVar13;
    plVar6 = plVar2;
  }
  plVar13 = plVar4;
  FUN_1015a03c8(auStack_160,plVar15,plVar6);
  func_0x00010006c090(plVar15);
  func_0x000107c61574();
  func_0x0001015a0b4c();
  if (((ulong)plVar4 & 1) == 0) {
    uStack_608 = 0;
    uVar16 = 1;
  }
  else {
    uVar11 = (ulong)plStack_128 >> 0x3c;
    uStack_608 = 0;
    if (uVar11 < 0xf) {
      uStack_608 = uStack_138;
    }
    plVar4 = (long *)0x0;
    if (uVar11 < 0xf) {
      plVar4 = plStack_130;
    }
    plVar6 = (long *)0xc000000000000000;
    if (uVar11 < 0xf) {
      plVar6 = plStack_128;
    }
    FUN_100cb4e8c();
    func_0x00010006c090();
    uVar16 = 0;
    plVar13 = plStack_128;
  }
  func_0x000104044140();
  plStack_610 = plVar4;
  if (plVar14 == (long *)0x0) {
    plVar9 = plVar6;
    func_0x0001015a0b68();
    plVar12 = plVar4;
    plVar14 = plVar13;
  }
  FUN_1015a0274(auStack_120,plVar12,plVar9,plVar14);
  func_0x00010006c090(plVar12,plVar9);
  func_0x000107c61574();
  FUN_1015a0a90();
  func_0x00010006c090(plVar5,plVar3);
  func_0x000107c61574(plVar7);
  func_0x000101545608(auStack_160);
  if (((ulong)plVar14 & 1) == 0) {
    func_0x00010154563c(auStack_120);
    uStack_80 = 0;
    uVar10 = 1;
  }
  else {
    FUN_100cb4e8c(uStack_80,uStack_78,uStack_70);
    func_0x00010154563c(auStack_120);
    if (uStack_70 >> 0x3c < 0xf) {
      func_0x000100cb4ea8(uStack_80,uStack_78,uStack_70);
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      uStack_80 = 0;
    }
    uVar10 = 0;
  }
  param_1[0x16] = (ulong)plStack_500;
  *(char *)(param_1 + 0x17) = (char)uStack_600;
  param_1[0x1a] = uStack_80;
  *(undefined1 *)(param_1 + 0x1b) = uVar10;
  param_1[3] = uStack_4f8;
  param_1[7] = (ulong)plStack_5c0;
  if ((uStack_5fc & 0xff) != 1) {
    plStack_5f8 = (long *)0x0;
  }
  if ((uStack_5ec & 0xff) != 1) {
    plStack_5e8 = (long *)0x0;
  }
  if (uStack_5c4 != 1) {
    uStack_5d0 = 0;
  }
  if (3 < (long)plStack_5b0 - 1U && (uStack_5b4 & 0xff) != 1) {
    plStack_5b0 = (long *)0x0;
  }
  if (uStack_598 != 1) {
    uStack_5a0 = 0;
  }
  if (uStack_584 != 1) {
    plStack_580 = (long *)0x0;
  }
  if ((uStack_594 & 0xff) != 1) {
    plStack_580 = plStack_590;
  }
  if ((uStack_554 & 0xff) != 1) {
    plStack_550 = (long *)0x0;
  }
  if ((uStack_544 & 0xff) != 1) {
    plStack_540 = (long *)0x0;
  }
  if (uStack_530 != 1) {
    uStack_538 = 0;
  }
  if ((uStack_52c & 0xff) != 1) {
    plStack_528 = (long *)0x0;
  }
  if ((uStack_51c & 0xff) != 1) {
    plStack_518 = (long *)0x0;
  }
  pplVar1 = (long **)&uStack_608;
  if (((uint)plVar6 & 0xff) != 1) {
    pplVar1 = &plStack_610;
    uVar16 = (char)plVar6;
  }
  uVar11 = (ulong)*pplVar1;
  param_1[1] = (ulong)(uStack_4d0 == 1 && lStack_4d8 == 1);
  param_1[2] = (ulong)(uStack_4e4 == 1 && lStack_4e0 != 0);
  param_1[5] = (ulong)((uStack_50c & 0xff) == 1 && plStack_508 != (long *)0x0);
  param_1[6] = (ulong)plStack_518;
  *param_1 = (ulong)(uStack_4cc == 1 && lStack_4c8 != 0);
  param_1[4] = uStack_4f0;
  param_1[8] = (ulong)plStack_5a8;
  param_1[9] = uStack_5d0;
  param_1[10] = (ulong)plStack_528;
  param_1[0xb] = uStack_538;
  param_1[0xc] = (ulong)plStack_540;
  param_1[0xd] = (ulong)plStack_550;
  param_1[0xe] = (ulong)((uStack_564 & 0xff) == 1 && plStack_560 != (long *)0x0);
  param_1[0xf] = (ulong)(uStack_5dc == 1 && lStack_5d8 != 0);
  param_1[0x10] = (ulong)plStack_5e8;
  param_1[0x11] = (ulong)(uStack_574 == 1 && lStack_570 != 0);
  param_1[0x12] = (ulong)plStack_580;
  param_1[0x13] = uStack_5a0;
  param_1[0x14] = (ulong)plStack_5b0;
  param_1[0x15] = (ulong)plStack_5f8;
  param_1[0x18] = uVar11;
  *(undefined1 *)(param_1 + 0x19) = uVar16;
  return;
}



/* Entry: 10154516c; end: 10154521b;  */

undefined8 FUN_10154516c(undefined8 param_1)

{
  (*(code *)(undefined *)0x101572a2c)();
  return param_1;
}



/* Entry: 10154521c; end: 10154525b;  */

void FUN_10154521c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db3b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95fbc8;
  func_0x000107c61520(&DAT_10d95fbc8,&UNK_1103ddcf0);
  puRam0000000112db3b90 = puVar1;
  return;
}



/* Entry: 10154525c; end: 101545343;  */

undefined8 FUN_10154525c(undefined8 param_1)

{
  FUN_1015c84bc();
  return param_1;
}



/* Entry: 101545344; end: 10154535b;  */

undefined1  [16] FUN_101545344(void)

{
  return ZEXT816(0x1103dccb0);
}



/* Entry: 10154535c; end: 101545393;  */

void FUN_10154535c(undefined8 param_1)

{
  if (lRam0000000112db3bc8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e647828);
  return;
}



/* Entry: 101545394; end: 1015456a3;  */

void FUN_101545394(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = PTR___sBoWV_11034d678 + 0x40;
  puStack_58 = &UNK_10d95e0a8;
  puStack_48 = &UNK_10d95e0c0;
  puStack_40 = &UNK_10d95e0d8;
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_50;
  func_0x000103ddeef8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 1015456a4; end: 1015456fb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015456a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return;
}



/* Entry: 1015456fc; end: 10154572f;  */

undefined8 FUN_1015456fc(undefined8 param_1)

{
  (*(code *)(undefined *)0x101620b34)();
  return param_1;
}



/* Entry: 101545730; end: 101545733;  */

void FUN_101545730(void)

{
  return;
}



/* Entry: 101545734; end: 101545767;  */

undefined8 FUN_101545734(undefined8 param_1)

{
  (*(code *)&DAT_10350be1c)();
  return param_1;
}



/* Entry: 101545768; end: 10154579f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101545768(void)

{
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (0xe < in_x5 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x4);
  return;
}



/* Entry: 1015457a0; end: 1015457ff;  */

void FUN_1015457a0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 101545800; end: 1015458bb;  */

void FUN_101545800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db3c88,&UNK_10d95e1f0);
  puVar1 = &UNK_1103dccd0;
  func_0x000107c613fc(&UNK_1103dccd0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1015459e8,puVar1);
  return;
}



/* Entry: 1015458bc; end: 1015459e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015458bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000103de4634();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_61);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(lVar3);
  func_0x000100083b20(&uStack_80);
  lVar2 = 0;
  FUN_1015539b4();
  lVar1 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x10) = uStack_61;
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  func_0x000101554754(lVar3,lVar1 + _DAT_112db3c90,&SUB_103de4634);
  *(undefined8 *)(lVar1 + 0x18) = uStack_80;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103dcce8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015459e8; end: 1015459f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015459e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000103de4634(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_61);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(lVar3);
  func_0x000100083b20(&uStack_80);
  lVar2 = 0;
  FUN_1015539b4();
  lVar1 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x10) = uStack_61;
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  func_0x000101554754(lVar3,lVar1 + _DAT_112db3c90,&SUB_103de4634);
  *(undefined8 *)(lVar1 + 0x18) = uStack_80;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103dcce8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015459f8; end: 101545a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1015459f8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x000101554754(param_4,unaff_x20 + _DAT_112db3c90,&SUB_103de4634);
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  return unaff_x20;
}



/* Entry: 101545a74; end: 101549c63;  */

/* WARNING: Removing unreachable block (ram,0x00010154696c) */
/* WARNING: Removing unreachable block (ram,0x000101548700) */
/* WARNING: Removing unreachable block (ram,0x000101549a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101545a74(ulong *param_1,ulong ***param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined7 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong ***pppuVar16;
  long ****pppplVar17;
  uint uVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  long ****pppplVar22;
  long lVar23;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long ***ppplVar24;
  long extraout_x8_10;
  long extraout_x8_11;
  long ***ppplVar25;
  long extraout_x8_12;
  ulong **ppuVar26;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  ulong ***pppuVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
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
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long unaff_x20;
  undefined8 *puVar33;
  long ***ppplVar34;
  long ***ppplVar35;
  long ***ppplVar36;
  ulong **ppuVar37;
  code *pcVar38;
  long ***ppplVar39;
  ulong uVar40;
  undefined1 uVar41;
  long ***ppplVar42;
  long lVar43;
  code *pcVar44;
  long ***ppplVar45;
  undefined8 uVar46;
  long **pplVar47;
  long ***ppplVar48;
  long ***ppplVar49;
  ulong **ppuStack_25a0;
  long alStack_2598 [15];
  code *pcStack_2520;
  long alStack_2518 [2];
  code *pcStack_2508;
  long alStack_2500 [2];
  code *pcStack_24f0;
  long alStack_24e8 [2];
  ulong *puStack_24d8;
  long alStack_24d0 [3];
  ulong ***pppuStack_24b8;
  long alStack_24b0 [4];
  long lStack_2490;
  ulong ***pppuStack_2488;
  long lStack_2480;
  long lStack_2478;
  long lStack_2470;
  long lStack_2468;
  long lStack_2460;
  long ***ppplStack_2458;
  ulong **ppuStack_2450;
  long ***ppplStack_2448;
  ulong **ppuStack_2440;
  ulong **ppuStack_2438;
  ulong **ppuStack_2430;
  ulong **ppuStack_2428;
  long lStack_2420;
  long lStack_2418;
  long lStack_2410;
  long lStack_2408;
  long ***ppplStack_2400;
  long lStack_23f8;
  undefined *puVar50;
  ulong **ppuStack_23d0;
  ulong **ppuStack_23b0;
  ulong **ppuStack_23a8;
  ulong **ppuStack_23a0;
  ulong **ppuStack_2398;
  ulong **ppuStack_2390;
  ulong **ppuStack_2388;
  ulong **ppuStack_2380;
  ulong **ppuStack_2378;
  long ***ppplStack_2370;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  ulong **ppuStack_2100;
  ulong **ppuStack_20f8;
  ulong **ppuStack_20f0;
  ulong **ppuStack_20e8;
  ulong **ppuStack_20e0;
  ulong **ppuStack_20d8;
  ulong **ppuStack_20d0;
  ulong **ppuStack_20c8;
  ulong **ppuStack_20c0;
  ulong **ppuStack_20b8;
  ulong **ppuStack_20b0;
  ulong **ppuStack_20a8;
  ulong **ppuStack_20a0;
  ulong **ppuStack_2098;
  ulong **ppuStack_2090;
  ulong **ppuStack_2088;
  ulong **ppuStack_2080;
  ulong **ppuStack_2078;
  ulong **ppuStack_2070;
  ulong **ppuStack_2068;
  ulong **ppuStack_2060;
  ulong **ppuStack_2058;
  ulong **ppuStack_2050;
  ulong **ppuStack_2048;
  ulong **ppuStack_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  ulong **ppuStack_1ea0;
  ulong **ppuStack_1e98;
  ulong **ppuStack_1e90;
  ulong **ppuStack_1e88;
  ulong **ppuStack_1e80;
  ulong **ppuStack_1e78;
  ulong **ppuStack_1e70;
  ulong **ppuStack_1e68;
  ulong **ppuStack_1e60;
  ulong **ppuStack_1e58;
  ulong **ppuStack_1e50;
  ulong **ppuStack_1e48;
  ulong **ppuStack_1e40;
  ulong **ppuStack_1e38;
  ulong **ppuStack_1e30;
  ulong **ppuStack_1e28;
  ulong **ppuStack_1e20;
  ulong **ppuStack_1e18;
  ulong **ppuStack_1e10;
  ulong **ppuStack_1e08;
  ulong **ppuStack_1e00;
  ulong **ppuStack_1df8;
  ulong **ppuStack_1df0;
  ulong **ppuStack_1de8;
  ulong **ppuStack_1de0;
  undefined8 uStack_1dd8;
  undefined8 uStack_1dd0;
  undefined8 uStack_1dc8;
  undefined8 uStack_1dc0;
  undefined8 uStack_1db8;
  undefined8 uStack_1db0;
  ulong **ppuStack_1c40;
  ulong **ppuStack_1c38;
  ulong **ppuStack_1c30;
  ulong **ppuStack_1c28;
  ulong **ppuStack_1c20;
  ulong **ppuStack_1c18;
  ulong **ppuStack_1c10;
  ulong **ppuStack_1c08;
  ulong **ppuStack_1c00;
  ulong **ppuStack_1bf8;
  ulong **ppuStack_1bf0;
  ulong **ppuStack_1be8;
  ulong **ppuStack_1be0;
  ulong **ppuStack_1bd8;
  ulong **ppuStack_1bd0;
  ulong **ppuStack_1bc8;
  ulong **ppuStack_1bc0;
  ulong **ppuStack_1bb8;
  ulong **ppuStack_1bb0;
  ulong **ppuStack_1ba8;
  ulong **ppuStack_1ba0;
  ulong **ppuStack_1b98;
  ulong **ppuStack_1b90;
  ulong **ppuStack_1b88;
  ulong **ppuStack_1b80;
  undefined1 uStack_1b78;
  undefined7 uStack_1b77;
  undefined1 uStack_1b70;
  undefined7 uStack_1b6f;
  undefined1 uStack_1b68;
  undefined7 uStack_1b67;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  long ***ppplStack_1780;
  ulong **ppuStack_1778;
  ulong **ppuStack_1770;
  ulong **ppuStack_1768;
  ulong **ppuStack_1760;
  ulong **ppuStack_1758;
  ulong **ppuStack_1750;
  ulong **ppuStack_1748;
  ulong **ppuStack_1740;
  ulong **ppuStack_1738;
  ulong **ppuStack_1730;
  ulong **ppuStack_1728;
  ulong **ppuStack_1720;
  ulong **ppuStack_1718;
  ulong **ppuStack_1710;
  ulong **ppuStack_1708;
  ulong **ppuStack_1700;
  ulong **ppuStack_16f8;
  ulong **ppuStack_16f0;
  ulong **ppuStack_16e8;
  ulong **ppuStack_16e0;
  ulong **ppuStack_16d8;
  ulong **ppuStack_16d0;
  ulong **ppuStack_16c8;
  ulong **ppuStack_16c0;
  undefined1 uStack_16b8;
  undefined7 uStack_16b7;
  undefined1 uStack_16b0;
  undefined7 uStack_16af;
  undefined1 uStack_16a8;
  undefined7 uStack_16a7;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  ulong **ppuStack_1688;
  ulong **ppuStack_1680;
  ulong **ppuStack_1678;
  ulong **ppuStack_1670;
  ulong **ppuStack_1668;
  ulong **ppuStack_1660;
  ulong **ppuStack_1658;
  ulong **ppuStack_1650;
  ulong **ppuStack_1648;
  ulong **ppuStack_1640;
  ulong **ppuStack_1638;
  ulong **ppuStack_1630;
  ulong **ppuStack_1628;
  ulong **ppuStack_1620;
  ulong **ppuStack_1618;
  ulong **ppuStack_1610;
  ulong **ppuStack_1608;
  ulong **ppuStack_1600;
  ulong **ppuStack_15f8;
  ulong **ppuStack_15f0;
  ulong **ppuStack_15e8;
  ulong **ppuStack_15e0;
  ulong **ppuStack_15d8;
  ulong **ppuStack_15d0;
  ulong **ppuStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined1 auStack_1520 [608];
  ulong **ppuStack_12c0;
  ulong **ppuStack_12b8;
  ulong **ppuStack_12b0;
  ulong **ppuStack_12a8;
  ulong **ppuStack_12a0;
  ulong **ppuStack_1298;
  ulong **ppuStack_1290;
  ulong **ppuStack_1288;
  ulong **ppuStack_1280;
  ulong **ppuStack_1278;
  ulong **ppuStack_1270;
  ulong **ppuStack_1268;
  ulong **ppuStack_1260;
  ulong **ppuStack_1258;
  ulong **ppuStack_1250;
  ulong **ppuStack_1248;
  ulong **ppuStack_1240;
  ulong **ppuStack_1238;
  ulong **ppuStack_1230;
  ulong **ppuStack_1228;
  ulong **ppuStack_1220;
  ulong **ppuStack_1218;
  ulong **ppuStack_1210;
  ulong **ppuStack_1208;
  ulong **ppuStack_1200;
  undefined1 uStack_11f8;
  undefined7 uStack_11f7;
  undefined1 uStack_11f0;
  undefined8 uStack_11ef;
  ulong **ppuStack_11e0;
  ulong **ppuStack_11d8;
  ulong **ppuStack_11d0;
  ulong **ppuStack_11c8;
  ulong **ppuStack_11c0;
  ulong **ppuStack_11b8;
  ulong **ppuStack_11b0;
  ulong **ppuStack_11a8;
  ulong **ppuStack_11a0;
  ulong **ppuStack_1198;
  ulong **ppuStack_1190;
  ulong **ppuStack_1188;
  ulong **ppuStack_1180;
  ulong **ppuStack_1178;
  ulong **ppuStack_1170;
  ulong **ppuStack_1168;
  ulong **ppuStack_1160;
  ulong **ppuStack_1158;
  ulong **ppuStack_1150;
  ulong **ppuStack_1148;
  ulong **ppuStack_1140;
  ulong **ppuStack_1138;
  ulong **ppuStack_1130;
  ulong **ppuStack_1128;
  ulong **ppuStack_1120;
  undefined1 uStack_1118;
  undefined7 uStack_1117;
  undefined1 uStack_1110;
  undefined8 uStack_110f;
  ulong **ppuStack_1100;
  ulong **ppuStack_10f8;
  ulong **ppuStack_10f0;
  ulong **ppuStack_10e8;
  ulong **ppuStack_10e0;
  ulong **ppuStack_10d8;
  ulong **ppuStack_10d0;
  ulong **ppuStack_10c8;
  ulong **ppuStack_10c0;
  ulong **ppuStack_10b8;
  ulong **ppuStack_10b0;
  ulong **ppuStack_10a8;
  ulong **ppuStack_10a0;
  ulong **ppuStack_1098;
  ulong **ppuStack_1090;
  ulong **ppuStack_1088;
  ulong **ppuStack_1080;
  ulong **ppuStack_1078;
  ulong **ppuStack_1070;
  ulong **ppuStack_1068;
  ulong **ppuStack_1060;
  ulong **ppuStack_1058;
  ulong **ppuStack_1050;
  ulong **ppuStack_1048;
  ulong **ppuStack_1040;
  undefined1 uStack_1038;
  undefined7 uStack_1037;
  undefined1 uStack_1030;
  undefined8 uStack_102f;
  ulong **ppuStack_1020;
  ulong **ppuStack_1018;
  ulong **ppuStack_1010;
  ulong **ppuStack_1008;
  ulong **ppuStack_1000;
  ulong **ppuStack_ff8;
  ulong **ppuStack_ff0;
  ulong **ppuStack_fe8;
  ulong **ppuStack_fe0;
  ulong **ppuStack_fd8;
  ulong **ppuStack_fd0;
  ulong **ppuStack_fc8;
  ulong **ppuStack_fc0;
  ulong **ppuStack_fb8;
  ulong **ppuStack_fb0;
  ulong **ppuStack_fa8;
  ulong **ppuStack_fa0;
  ulong **ppuStack_f98;
  ulong **ppuStack_f90;
  ulong **ppuStack_f88;
  ulong **ppuStack_f80;
  ulong **ppuStack_f78;
  ulong **ppuStack_f70;
  ulong **ppuStack_f68;
  ulong **ppuStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  ulong **ppuStack_db0;
  ulong **ppuStack_da8;
  ulong **ppuStack_da0;
  ulong **ppuStack_d98;
  ulong **ppuStack_d90;
  ulong **ppuStack_d88;
  ulong **ppuStack_d80;
  ulong **ppuStack_d78;
  ulong **ppuStack_d70;
  ulong **ppuStack_d68;
  ulong **ppuStack_d60;
  ulong **ppuStack_d58;
  ulong **ppuStack_d50;
  ulong **ppuStack_d48;
  ulong **ppuStack_d40;
  ulong **ppuStack_d38;
  ulong **ppuStack_d30;
  ulong **ppuStack_d28;
  ulong **ppuStack_d20;
  ulong **ppuStack_d18;
  ulong **ppuStack_d10;
  ulong **ppuStack_d08;
  ulong **ppuStack_d00;
  ulong **ppuStack_cf8;
  ulong **ppuStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined1 auStack_cb0 [24];
  ulong uStack_c98;
  undefined8 uStack_c90;
  ulong uStack_c88;
  ulong **ppuStack_a50;
  ulong **ppuStack_a48;
  ulong **ppuStack_a40;
  ulong **ppuStack_a38;
  ulong **ppuStack_a30;
  ulong **ppuStack_a28;
  ulong **ppuStack_a20;
  ulong **ppuStack_a18;
  ulong **ppuStack_a10;
  ulong **ppuStack_a08;
  ulong **ppuStack_a00;
  ulong **ppuStack_9f8;
  ulong **ppuStack_9f0;
  ulong **ppuStack_9e8;
  ulong **ppuStack_9e0;
  ulong **ppuStack_9d8;
  ulong **ppuStack_9d0;
  ulong **ppuStack_9c8;
  ulong **ppuStack_9c0;
  ulong **ppuStack_9b8;
  ulong **ppuStack_9b0;
  ulong **ppuStack_9a8;
  ulong **ppuStack_9a0;
  ulong **ppuStack_998;
  ulong **ppuStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  ulong **ppuStack_7f0;
  ulong **ppuStack_7e8;
  ulong **ppuStack_7e0;
  ulong **ppuStack_7d8;
  ulong **ppuStack_7d0;
  ulong **ppuStack_7c8;
  ulong **ppuStack_7c0;
  ulong **ppuStack_7b8;
  ulong **ppuStack_7b0;
  ulong **ppuStack_7a8;
  ulong **ppuStack_7a0;
  ulong **ppuStack_798;
  ulong **ppuStack_790;
  ulong **ppuStack_788;
  ulong **ppuStack_780;
  ulong **ppuStack_778;
  ulong **ppuStack_770;
  ulong **ppuStack_768;
  ulong **ppuStack_760;
  ulong **ppuStack_758;
  ulong **ppuStack_750;
  ulong **ppuStack_748;
  ulong **ppuStack_740;
  ulong **ppuStack_738;
  ulong **ppuStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 auStack_588 [608];
  ulong **ppuStack_328;
  ulong **ppuStack_320;
  ulong **ppuStack_318;
  ulong **ppuStack_310;
  ulong **ppuStack_308;
  ulong **ppuStack_300;
  ulong **ppuStack_2f8;
  ulong **ppuStack_2f0;
  ulong **ppuStack_2e8;
  ulong **ppuStack_2e0;
  ulong **ppuStack_2d8;
  ulong **ppuStack_2d0;
  ulong **ppuStack_2c8;
  ulong **ppuStack_2c0;
  ulong **ppuStack_2b8;
  ulong **ppuStack_2b0;
  ulong **ppuStack_2a8;
  ulong **ppuStack_2a0;
  ulong **ppuStack_298;
  ulong **ppuStack_290;
  ulong **ppuStack_288;
  ulong **ppuStack_280;
  ulong **ppuStack_278;
  ulong **ppuStack_270;
  ulong **ppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong **ppuStack_230;
  ulong **ppuStack_228;
  ulong **ppuStack_220;
  ulong **ppuStack_218;
  ulong **ppuStack_210;
  ulong **ppuStack_208;
  ulong **ppuStack_200;
  ulong **ppuStack_1f8;
  ulong **ppuStack_1f0;
  ulong **ppuStack_1e8;
  ulong **ppuStack_1e0;
  ulong **ppuStack_1d8;
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  ulong **ppuStack_1c0;
  ulong **ppuStack_1b8;
  ulong **ppuStack_1b0;
  ulong **ppuStack_1a8;
  ulong **ppuStack_1a0;
  ulong **ppuStack_198;
  ulong **ppuStack_190;
  ulong **ppuStack_188;
  ulong **ppuStack_180;
  ulong **ppuStack_178;
  ulong **ppuStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
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
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = 0;
  ppplStack_2400 = (long ***)param_2;
  func_0x000104760f24();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar33 = (undefined8 *)((long)&ppuStack_25a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = (undefined *)0x0;
  func_0x000104750be8();
  lVar19 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)puVar33 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3c98;
  alStack_2598[1] = lVar20;
  func_0x0001000285a8(0x112db3c98,&UNK_10dd33f00);
  alStack_24b0[0] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_01;
  lVar11 = 0;
  alStack_24b0[2] = lVar20;
  func_0x00010475cf44();
  lVar21 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3ca0;
  alStack_2598[2] = lVar20;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  alStack_24b0[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pppplVar22 = (long ****)(lVar20 - extraout_x8_03);
  lVar12 = 0;
  pppuStack_2488 = (ulong ***)pppplVar22;
  func_0x00010471853c();
  lVar23 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar20 = (long)pppplVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3ca8;
  alStack_2598[3] = lVar20;
  func_0x0001000285a8(0x112db3ca8,&UNK_10dd33f10);
  alStack_24b0[3] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_05;
  lVar13 = 0;
  alStack_2598[0xe] = lVar20;
  func_0x00010470fbcc();
  lVar43 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar43 + 0x40));
  lVar20 = lVar20 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3cb0;
  alStack_2598[4] = lVar20;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_2490 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_07;
  lVar14 = 0;
  lStack_2470 = lVar20;
  func_0x000100b91fbc();
  alStack_24d0[2] = *(long *)(lVar14 + -8);
  alStack_2598[0xd] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_24d0[2] + 0x40));
  lVar20 = lVar20 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3b70;
  alStack_2598[0] = lVar20;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  alStack_24d0[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppplVar24 = (long ***)(lVar20 - extraout_x8_09);
  lVar14 = 0;
  ppuStack_2440 = (ulong **)ppplVar24;
  func_0x000103de4634();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar20 = (long)ppplVar24 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db39a8;
  alStack_24d0[0] = lVar20;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[9] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar27 = (ulong ***)(lVar20 - extraout_x12);
  ppplStack_2458 = (long ***)pppuVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppplVar25 = (long ***)((long)pppuVar27 - extraout_x12_00);
  ppplVar24 = (long ***)0x0;
  ppuStack_2450 = (ulong **)ppplVar25;
  func_0x000104739264();
  pplVar47 = ppplVar24[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(pplVar47[8]);
  ppuVar26 = (ulong **)((long)ppplVar25 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0));
  lVar14 = 0x112db3cb8;
  ppuStack_25a0 = ppuVar26;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  alStack_2598[0xc] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pppplVar22 = (long ****)((long)ppuVar26 - extraout_x8_13);
  lVar14 = 0x112db3cc0;
  pppuStack_24b8 = (ulong ***)pppplVar22;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar28 = (long)pppplVar22 - (extraout_x8_14 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[6] = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar28 - extraout_x12_01;
  alStack_2500[1] = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - extraout_x12_02;
  alStack_2518[1] = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - extraout_x12_03;
  lVar14 = 0x112db3cc8;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar28 = lVar29 - (extraout_x8_15 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[7] = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = uVar28 - extraout_x12_04;
  lStack_2468 = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_05;
  alStack_2500[0] = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_06;
  lVar14 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar28 = lVar30 - (extraout_x8_16 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[8] = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar28 - extraout_x12_07;
  lStack_2460 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_08;
  alStack_24e8[0] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_09;
  lVar14 = 0x112db3cd8;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar28 = lVar20 - (extraout_x8_17 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[10] = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar27 = (ulong ***)(uVar28 - extraout_x12_10);
  ppplStack_2448 = (long ***)pppuVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = (long)pppuVar27 - extraout_x12_11;
  alStack_24e8[1] = lVar31;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar31 - extraout_x12_12;
  lVar14 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar28 = lVar31 - (extraout_x8_18 + 0xfU & 0xfffffffffffffff0);
  alStack_2598[5] = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar28 - extraout_x12_13;
  alStack_2598[0xb] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_14;
  alStack_2518[0] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_15;
  pcStack_2520 = (code *)pplVar47[7];
  puStack_24d8 = (ulong *)pplVar47;
  ppuStack_2430 = (ulong **)ppplVar24;
  (*pcStack_2520)(lVar14,1,1,ppplVar24);
  pcStack_24f0 = *(code **)(lVar43 + 0x38);
  lStack_2480 = lVar43;
  lStack_2478 = lVar13;
  (*pcStack_24f0)(lVar31,1,1,lVar13);
  FUN_101551a34(auStack_588);
  func_0x000107c610b4(auStack_cb0,auStack_588,0x260);
  pcStack_2508 = *(code **)(lVar23 + 0x38);
  (*pcStack_2508)(lVar20,1,1,lVar12);
  func_0x000101551a9c(&ppuStack_328);
  pcVar44 = *(code **)(lVar21 + 0x38);
  (*pcVar44)(lVar30,1,1,lVar11);
  pcVar38 = *(code **)(lVar19 + 0x38);
  ppuStack_2390 = (ulong **)0x1;
  ppuStack_2380 = (ulong **)0x1;
  puVar50 = puVar10;
  (*pcVar38)(lVar29);
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  ppuStack_178 = (ulong **)param_1[0x17];
  ppuStack_180 = (ulong **)param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  ppuStack_188 = (ulong **)param_1[0x15];
  ppuStack_190 = (ulong **)param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  ppuStack_170 = (ulong **)param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  ppuStack_1b8 = (ulong **)param_1[0xf];
  ppuStack_1c0 = (ulong **)param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  ppuStack_1c8 = (ulong **)param_1[0xd];
  ppuStack_1d0 = (ulong **)param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  ppuStack_1a8 = (ulong **)param_1[0x11];
  ppuStack_1b0 = (ulong **)param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  ppuStack_198 = (ulong **)param_1[0x13];
  ppuStack_1a0 = (ulong **)param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  ppuStack_1f8 = (ulong **)param_1[7];
  ppuStack_200 = (ulong **)param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  ppuStack_208 = (ulong **)param_1[5];
  ppuStack_210 = (ulong **)param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  ppuStack_1e8 = (ulong **)param_1[9];
  ppuStack_1f0 = (ulong **)param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  ppuStack_1d8 = (ulong **)param_1[0xb];
  ppuStack_1e0 = (ulong **)param_1[10];
  ppuStack_228 = (ulong **)param_1[1];
  ppuStack_230 = (ulong **)*param_1;
  ppuStack_218 = (ulong **)param_1[3];
  ppuStack_220 = (ulong **)param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  iVar7 = (int)&ppuStack_230;
  func_0x000101551ac8();
  if (iVar7 == 1) {
LAB_10154638c:
    func_0x0001015545c8(lVar29,0x112db3cc0,&UNK_10d95e220);
    func_0x0001015545c8(lVar30,0x112db3cc8,&UNK_10d98e570);
    func_0x0001015545c8(lVar20,0x112db3cd0,&UNK_10d95e230);
    func_0x0001015545c8(lVar31,0x112db3cd8,&UNK_10dd317d0);
code_r0x000101546400:
    func_0x0001015545c8(lVar14,0x112db3ce0,&UNK_10d95e240);
    puVar33 = (undefined8 *)0x0;
    goto LAB_101549c1c;
  }
  puVar15 = &uStack_150;
  lStack_2420 = lVar30;
  lStack_2418 = lVar20;
  lStack_2410 = lVar14;
  lStack_2408 = lVar29;
  lStack_23f8 = lVar31;
  func_0x000101551adc();
  uVar41 = uStack_1b68;
  uVar6 = uStack_1b6f;
  uStack_1b6f = (undefined7)uStack_15f;
  uStack_1b68 = (undefined1)((ulong)uStack_15f >> 0x38);
  switch((ulong)puVar15 & 0xffffffff) {
  case 0:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    pppuVar27 = &ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if ((int)pppuVar27 == 0) {
      pppplVar22 = &ppplStack_1780;
      func_0x000101553998();
      pppuVar27 = (ulong ***)*pppplVar22;
      ppuStack_2390 = (ulong **)pppplVar22[1];
      ppuStack_2380 = (ulong **)pppplVar22[2];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      FUN_1015d5f0c();
    }
    lVar13 = lStack_23f8;
    lVar14 = lStack_2410;
    lVar20 = lStack_2418;
    lVar31 = lStack_2420;
    pppuVar16 = pppuVar27;
    FUN_101553580(pppuVar27,ppuStack_2390,ppuStack_2380);
    func_0x000107c6142c(pppuVar27);
    func_0x00010006c090(ppuStack_2390,ppuStack_2380);
    if (pppuVar16 != (ulong ***)0x0) {
      ppplStack_2400 = (long ***)0x0;
      ppuStack_23d0 = (ulong **)0x0;
      uStack_ce8 = uStack_260;
      ppuStack_cf0 = ppuStack_268;
      uStack_cd8 = uStack_250;
      uStack_ce0 = uStack_258;
      uStack_cc8 = uStack_240;
      uStack_cd0 = uStack_248;
      uStack_cc0 = uStack_238;
      ppuStack_d28 = ppuStack_2a0;
      ppuStack_d30 = ppuStack_2a8;
      ppuStack_d18 = ppuStack_290;
      ppuStack_d20 = ppuStack_298;
      ppuStack_d08 = ppuStack_280;
      ppuStack_d10 = ppuStack_288;
      ppuStack_cf8 = ppuStack_270;
      ppuStack_d00 = ppuStack_278;
      ppuStack_d68 = ppuStack_2e0;
      ppuStack_d70 = ppuStack_2e8;
      ppuStack_d58 = ppuStack_2d0;
      ppuStack_d60 = ppuStack_2d8;
      ppuStack_d48 = ppuStack_2c0;
      ppuStack_d50 = ppuStack_2c8;
      ppuStack_d38 = ppuStack_2b0;
      ppuStack_d40 = ppuStack_2b8;
      ppuStack_da8 = ppuStack_320;
      ppuStack_db0 = ppuStack_328;
      ppuStack_d98 = ppuStack_310;
      ppuStack_da0 = ppuStack_318;
      ppplStack_2370 = (long ***)0xf000000000000000;
      uVar46 = 9;
      ppplStack_2458 = (long ***)pppuVar16;
      goto code_r0x0001015498e4;
    }
code_r0x000101548c6c:
    func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
    func_0x0001015545c8(lVar31,0x112db3cc8,&UNK_10d98e570);
    func_0x0001015545c8(lVar20,0x112db3cd0,&UNK_10d95e230);
code_r0x0001015493ec:
    func_0x0001015545c8(lVar13,0x112db3cd8,&UNK_10dd317d0);
    goto code_r0x000101546400;
  default:
    lVar14 = lStack_2410;
    lVar20 = lStack_2418;
    lVar29 = lStack_2408;
    lVar30 = lStack_2420;
    lVar31 = lStack_23f8;
    uStack_1b6f = uVar6;
    uStack_1b68 = uVar41;
    goto LAB_10154638c;
  case 2:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    pppuVar27 = &ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if ((int)pppuVar27 == 2) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553990();
      pppuVar27 = (ulong ***)*pppplVar22;
      ppuStack_2390 = (ulong **)pppplVar22[1];
      ppuStack_2380 = (ulong **)pppplVar22[2];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      func_0x0001035838dc();
    }
    lVar14 = lStack_2410;
    lVar29 = alStack_2518[0];
    lVar20 = alStack_2598[0xc];
    lVar30 = alStack_2598[0xb];
    func_0x000101549c64(alStack_2518[0],pppuVar27,ppuStack_2390,ppuStack_2380,ppplStack_2400);
    func_0x00010006c090(pppuVar27,ppuStack_2390);
    func_0x000107c61574(ppuStack_2380);
    func_0x0001015545c8(lVar14,0x112db3ce0,&UNK_10d95e240);
    func_0x000101554364(lVar29,lVar14,0x112db3ce0,&UNK_10d95e240);
    ppuVar26 = ppuStack_2430;
    (*pcStack_2520)(lVar30,1,1,ppuStack_2430);
    pppplVar22 = (long ****)pppuStack_24b8;
    lVar20 = (long)*(int *)(lVar20 + 0x30);
    func_0x000101554514(lVar14,pppuStack_24b8,0x112db3ce0,&UNK_10d95e240);
    func_0x000101554514(lVar30,(long)pppplVar22 + lVar20,0x112db3ce0,&UNK_10d95e240);
    pcVar38 = (code *)puStack_24d8[6];
    pppplVar17 = pppplVar22;
    (*pcVar38)(pppplVar22,1,ppuVar26);
    lVar29 = alStack_2598[5];
    if ((int)pppplVar17 == 1) {
      func_0x0001015545c8(lVar30,0x112db3ce0,&UNK_10d95e240);
      lVar20 = (long)pppplVar22 + lVar20;
      (*pcVar38)(lVar20,1,ppuStack_2430);
      lVar13 = lStack_23f8;
      if ((int)lVar20 == 1) {
        uVar46 = 0x112db3ce0;
        puVar50 = &UNK_10d95e240;
        lVar31 = lStack_2420;
        lVar20 = lStack_2418;
code_r0x000101548c68:
        func_0x0001015545c8(pppplVar22,uVar46,puVar50);
        goto code_r0x000101548c6c;
      }
code_r0x000101547904:
      lVar20 = lStack_2418;
      lVar31 = lStack_2420;
      func_0x0001015545c8(pppplVar22,0x112db3cb8,&UNK_10dd33f20);
    }
    else {
      func_0x000101554514(pppplVar22,alStack_2598[5],0x112db3ce0,&UNK_10d95e240);
      lVar31 = (long)pppplVar22 + lVar20;
      (*pcVar38)(lVar31,1,ppuStack_2430);
      lVar13 = lStack_23f8;
      ppuVar26 = ppuStack_25a0;
      if ((int)lVar31 == 1) {
        func_0x0001015545c8(lVar30,0x112db3ce0,&UNK_10d95e240);
        func_0x0001015543dc(lVar29,&SUB_104739264);
        goto code_r0x000101547904;
      }
      func_0x000101554754((long)pppplVar22 + lVar20,ppuStack_25a0,&SUB_104739264);
      uVar28 = lVar29;
      func_0x0001047392e4(lVar29,ppuVar26);
      func_0x0001015543dc(ppuVar26,&SUB_104739264);
      func_0x0001015545c8(lVar30,0x112db3ce0,&UNK_10d95e240);
      func_0x0001015543dc(lVar29,&SUB_104739264);
      func_0x0001015545c8(pppplVar22,0x112db3ce0,&UNK_10d95e240);
      lVar31 = lStack_2420;
      lVar20 = lStack_2418;
      if ((uVar28 & 1) != 0) goto code_r0x000101548c6c;
    }
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppplStack_2370 = (long ***)0xf000000000000000;
    uVar46 = 6;
    goto code_r0x0001015498e4;
  case 3:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    ppplStack_2370 = (long ***)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if ((int)ppplStack_2370 == 3) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553990();
      ppplStack_2370 = *pppplVar22;
      ppuStack_2390 = (ulong **)pppplVar22[1];
      ppuStack_2380 = (ulong **)pppplVar22[2];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      func_0x00010358abb8();
    }
    ppuVar26 = ppuStack_2450;
    ppplVar24 = ppplStack_2458;
    lVar14 = alStack_24d0[0];
    lVar29 = alStack_2598[0xd];
    FUN_10155394c(unaff_x20 + _DAT_112db3c90,alStack_24d0[0]);
    func_0x000101554364(lVar14,ppuVar26,0x112db39a8,&UNK_10d95dd90);
    lVar20 = alStack_24d0[2];
    (**(code **)(alStack_24d0[2] + 0x38))(ppplVar24,1,1,lVar29);
    ppuVar37 = ppuStack_2440;
    lVar14 = (long)*(int *)(alStack_24d0[1] + 0x30);
    func_0x000101554514(ppuVar26,ppuStack_2440,0x112db39a8,&UNK_10d95dd90);
    func_0x000101554514(ppplVar24,(long)ppuVar37 + lVar14,0x112db39a8,&UNK_10d95dd90);
    pcVar38 = *(code **)(lVar20 + 0x30);
    ppplVar25 = (long ***)ppuVar37;
    (*pcVar38)(ppuVar37,1,lVar29);
    lVar20 = alStack_2598[9];
    if ((int)ppplVar25 == 1) {
      func_0x0001015545c8(ppplVar24,0x112db39a8,&UNK_10d95dd90);
      ppplVar24 = (long ***)ppuStack_2440;
      func_0x0001015545c8(ppuVar26,0x112db39a8,&UNK_10d95dd90);
      lVar14 = (long)ppplVar24 + lVar14;
      (*pcVar38)(lVar14,1,lVar29);
      lVar30 = lStack_2470;
      if ((int)lVar14 == 1) {
        func_0x0001015545c8(ppplVar24,0x112db39a8,&UNK_10d95dd90);
        uVar18 = 0;
      }
      else {
code_r0x0001015475c0:
        lVar30 = lStack_2470;
        func_0x0001015545c8(ppplVar24,0x112db3b70,&UNK_10d95def0);
        uVar18 = 1;
      }
    }
    else {
      func_0x000101554514(ppuVar37,alStack_2598[9],0x112db39a8,&UNK_10d95dd90);
      lVar30 = (long)ppuVar37 + lVar14;
      (*pcVar38)(lVar30,1,lVar29);
      lVar29 = alStack_2598[0];
      if ((int)lVar30 == 1) {
        func_0x0001015545c8(ppplStack_2458,0x112db39a8,&UNK_10d95dd90);
        ppplVar24 = (long ***)ppuStack_2440;
        func_0x0001015545c8(ppuStack_2450,0x112db39a8,&UNK_10d95dd90);
        func_0x0001015543dc(lVar20,&SUB_100b91fbc);
        goto code_r0x0001015475c0;
      }
      func_0x000101554754((long)ppuVar37 + lVar14,alStack_2598[0],&SUB_100b91fbc);
      lVar14 = lVar20;
      func_0x000104841c50(lVar20,lVar29);
      func_0x0001015543dc(lVar29,&SUB_100b91fbc);
      func_0x0001015545c8(ppplStack_2458,0x112db39a8,&UNK_10d95dd90);
      func_0x0001015545c8(ppuStack_2450,0x112db39a8,&UNK_10d95dd90);
      func_0x0001015543dc(lVar20,&SUB_100b91fbc);
      func_0x0001015545c8(ppuVar37,0x112db39a8,&UNK_10d95dd90);
      uVar18 = (uint)lVar14 ^ 1;
      lVar30 = lStack_2470;
    }
    lVar20 = lStack_23f8;
    lVar31 = lStack_2420;
    lVar14 = alStack_24e8[1];
    func_0x00010154a754(alStack_24e8[1],ppplStack_2370,ppuStack_2390,ppuStack_2380,ppplStack_2400,
                        uVar18 & 1);
    func_0x00010006c090(ppplStack_2370,ppuStack_2390);
    func_0x000107c61574(ppuStack_2380);
    func_0x0001015545c8(lVar20,0x112db3cd8,&UNK_10dd317d0);
    func_0x000101554364(lVar14,lVar20,0x112db3cd8,&UNK_10dd317d0);
    ppplVar24 = ppplStack_2448;
    lVar29 = lStack_2478;
    (*pcStack_24f0)(ppplStack_2448,1,1,lStack_2478);
    lVar14 = (long)*(int *)(lStack_2490 + 0x30);
    func_0x000101554514(lVar20,lVar30,0x112db3cd8,&UNK_10dd317d0);
    func_0x000101554514(ppplVar24,lVar30 + lVar14,0x112db3cd8,&UNK_10dd317d0);
    pcVar38 = *(code **)(lStack_2480 + 0x30);
    lVar11 = lVar30;
    (*pcVar38)(lVar30,1,lVar29);
    lVar20 = alStack_2598[10];
    if ((int)lVar11 == 1) {
      func_0x0001015545c8(ppplVar24,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lVar30 + lVar14;
      (*pcVar38)(lVar14,1,lVar29);
      if ((int)lVar14 == 1) {
        uVar46 = 0x112db3cd8;
        puVar50 = &UNK_10dd317d0;
        lVar20 = lStack_2418;
code_r0x0001015490f4:
        lVar14 = lStack_2410;
        func_0x0001015545c8(lVar30,uVar46,puVar50);
        goto code_r0x0001015490fc;
      }
code_r0x0001015491c0:
      lVar14 = lStack_2410;
      lVar20 = lStack_2418;
      func_0x0001015545c8(lVar30,0x112db3cb0,&UNK_10d95e210);
    }
    else {
      func_0x000101554514(lVar30,alStack_2598[10],0x112db3cd8,&UNK_10dd317d0);
      lVar11 = lVar30 + lVar14;
      (*pcVar38)(lVar11,1,lVar29);
      lVar29 = alStack_2598[4];
      if ((int)lVar11 == 1) {
        func_0x0001015545c8(ppplStack_2448,0x112db3cd8,&UNK_10dd317d0);
        func_0x0001015543dc(lVar20,&SUB_10470fbcc);
        goto code_r0x0001015491c0;
      }
      func_0x000101554754(lVar30 + lVar14,alStack_2598[4],&SUB_10470fbcc);
      uVar28 = lVar20;
      func_0x00010470fc4c(lVar20,lVar29);
      func_0x0001015543dc(lVar29,&SUB_10470fbcc);
      func_0x0001015545c8(ppplStack_2448,0x112db3cd8,&UNK_10dd317d0);
      func_0x0001015543dc(lVar20,&SUB_10470fbcc);
      func_0x0001015545c8(lVar30,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lStack_2410;
      lVar20 = lStack_2418;
      if ((uVar28 & 1) != 0) goto code_r0x0001015490fc;
    }
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    uVar46 = 1;
    goto code_r0x000101549274;
  case 4:
    ppuStack_1138 = ppuStack_188;
    ppuStack_1140 = ppuStack_190;
    ppuStack_1128 = ppuStack_178;
    ppuStack_1130 = ppuStack_180;
    uStack_1118 = uStack_168;
    ppuStack_1120 = ppuStack_170;
    uStack_110f = uStack_15f;
    uStack_1117 = uStack_167;
    uStack_1110 = uStack_160;
    ppuStack_1178 = ppuStack_1c8;
    ppuStack_1180 = ppuStack_1d0;
    ppuStack_1168 = ppuStack_1b8;
    ppuStack_1170 = ppuStack_1c0;
    ppuStack_1158 = ppuStack_1a8;
    ppuStack_1160 = ppuStack_1b0;
    ppuStack_1148 = ppuStack_198;
    ppuStack_1150 = ppuStack_1a0;
    ppuStack_11b8 = ppuStack_208;
    ppuStack_11c0 = ppuStack_210;
    ppuStack_11a8 = ppuStack_1f8;
    ppuStack_11b0 = ppuStack_200;
    ppuStack_1198 = ppuStack_1e8;
    ppuStack_11a0 = ppuStack_1f0;
    ppuStack_1188 = ppuStack_1d8;
    ppuStack_1190 = ppuStack_1e0;
    ppuStack_11d8 = ppuStack_228;
    ppuStack_11e0 = ppuStack_230;
    ppuStack_11c8 = ppuStack_218;
    ppuStack_11d0 = ppuStack_220;
    ppuStack_1058 = ppuStack_188;
    ppuStack_1060 = ppuStack_190;
    ppuStack_1048 = ppuStack_178;
    ppuStack_1050 = ppuStack_180;
    uStack_1038 = uStack_168;
    ppuStack_1040 = ppuStack_170;
    uStack_102f = uStack_15f;
    uStack_1037 = uStack_167;
    uStack_1030 = uStack_160;
    ppuStack_1098 = ppuStack_1c8;
    ppuStack_10a0 = ppuStack_1d0;
    ppuStack_1088 = ppuStack_1b8;
    ppuStack_1090 = ppuStack_1c0;
    ppuStack_1078 = ppuStack_1a8;
    ppuStack_1080 = ppuStack_1b0;
    ppuStack_1068 = ppuStack_198;
    ppuStack_1070 = ppuStack_1a0;
    ppuStack_10d8 = ppuStack_208;
    ppuStack_10e0 = ppuStack_210;
    ppuStack_10c8 = ppuStack_1f8;
    ppuStack_10d0 = ppuStack_200;
    ppuStack_10b8 = ppuStack_1e8;
    ppuStack_10c0 = ppuStack_1f0;
    ppuStack_10a8 = ppuStack_1d8;
    ppuStack_10b0 = ppuStack_1e0;
    ppuStack_10f8 = ppuStack_228;
    ppuStack_1100 = ppuStack_230;
    ppuStack_10e8 = ppuStack_218;
    ppuStack_10f0 = ppuStack_220;
    pppuVar27 = &ppuStack_11e0;
    uStack_1b6f = uVar6;
    uStack_1b68 = uVar41;
    func_0x000101551adc();
    if ((int)pppuVar27 == 4) {
      pppuVar16 = &ppuStack_1100;
      func_0x000101553948();
      pppuVar27 = (ulong ***)*pppuVar16;
      ppuStack_2390 = pppuVar16[1];
      ppuStack_2380 = pppuVar16[2];
      func_0x000101554514(&ppuStack_230,&ppplStack_1780,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      FUN_101642e4c();
    }
    lVar13 = lStack_23f8;
    func_0x00010154ae28(&ppuStack_a50,pppuVar27,ppuStack_2390,ppuStack_2380,ppplStack_2400);
    func_0x00010006c090(pppuVar27,ppuStack_2390);
    func_0x000107c61574(ppuStack_2380);
    FUN_10155389c(&ppuStack_a50,auStack_cb0);
    func_0x000107c610b4(&ppuStack_1020,auStack_cb0,0x260);
    func_0x000107c610b4(&ppplStack_1780,auStack_cb0,0x260);
    func_0x000107c610b4(auStack_1520,auStack_588,0x260);
    iVar7 = (int)&ppplStack_1780;
    func_0x0001015538ec();
    lVar20 = lStack_2418;
    lVar31 = lStack_2420;
    if (iVar7 == 1) {
      iVar7 = (int)auStack_1520;
      func_0x0001015538ec();
      lVar14 = lStack_2410;
      if (iVar7 == 1) {
        func_0x000107c610b4(&ppuStack_1c40,&ppplStack_1780,0x260);
        func_0x000101554514(&ppuStack_1020,&ppuStack_7f0,0x112db3ce8,&UNK_10d98ff60);
        pppplVar22 = (long ****)&ppuStack_1c40;
        uVar46 = 0x112db3ce8;
        puVar50 = &UNK_10d98ff60;
        goto code_r0x000101548c68;
      }
code_r0x000101547e64:
      lVar14 = lStack_2410;
      func_0x000107c610b4(&ppuStack_1c40,&ppplStack_1780,0x4c0);
      func_0x000101554514(&ppuStack_1020,&ppuStack_7f0,0x112db3ce8,&UNK_10d98ff60);
      func_0x0001015545c8(&ppuStack_1c40,0x112db3d20,&UNK_10dd318e0);
    }
    else {
      func_0x000107c610b4(&ppuStack_1ea0,&ppplStack_1780,0x260);
      iVar7 = (int)auStack_1520;
      func_0x0001015538ec();
      lVar14 = lStack_2410;
      if (iVar7 == 1) goto code_r0x000101547e64;
      func_0x000107c610b4(&ppuStack_2100,auStack_1520,0x260);
      func_0x000107c610b4(&ppuStack_1c40,auStack_1520,0x260);
      func_0x000107c610b4(&ppuStack_7f0,&ppuStack_1ea0,0x260);
      func_0x000101554514(&ppuStack_1020,&uStack_2360,0x112db3ce8,&UNK_10d98ff60);
      pppuVar27 = &ppuStack_7f0;
      func_0x0001047a6970(pppuVar27,&ppuStack_1c40);
      func_0x0001015545c8(&ppuStack_2100,0x112db3ce8,&UNK_10d98ff60);
      func_0x0001015545c8(&ppplStack_1780,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)pppuVar27 & 1) != 0) goto code_r0x000101548c6c;
    }
    iVar7 = (int)auStack_cb0;
    func_0x0001015538ec();
    if (iVar7 == 1) {
      uStack_c90 = 0;
      uStack_c88 = 0xb000000000000000;
      uVar28 = 0;
code_r0x000101548e84:
      func_0x00010155392c(uVar28,uStack_c90,uStack_c88);
      func_0x000104041e50();
      if ((uVar28 & 1) == 0) {
        ppplStack_2400 = (long ***)0x0;
        ppuStack_23d0 = (ulong **)0x0;
        ppplStack_2458 = (long ***)0x0;
        uStack_ce8 = uStack_260;
        ppuStack_cf0 = ppuStack_268;
        uStack_cd8 = uStack_250;
        uStack_ce0 = uStack_258;
        uStack_cc8 = uStack_240;
        uStack_cd0 = uStack_248;
        uStack_cc0 = uStack_238;
        ppuStack_d28 = ppuStack_2a0;
        ppuStack_d30 = ppuStack_2a8;
        ppuStack_d18 = ppuStack_290;
        ppuStack_d20 = ppuStack_298;
        ppuStack_d08 = ppuStack_280;
        ppuStack_d10 = ppuStack_288;
        ppuStack_cf8 = ppuStack_270;
        ppuStack_d00 = ppuStack_278;
        ppuStack_d68 = ppuStack_2e0;
        ppuStack_d70 = ppuStack_2e8;
        ppuStack_d58 = ppuStack_2d0;
        ppuStack_d60 = ppuStack_2d8;
        ppuStack_d48 = ppuStack_2c0;
        ppuStack_d50 = ppuStack_2c8;
        ppuStack_d38 = ppuStack_2b0;
        ppuStack_d40 = ppuStack_2b8;
        ppuStack_da8 = ppuStack_320;
        ppuStack_db0 = ppuStack_328;
        ppuStack_d98 = ppuStack_310;
        ppuStack_da0 = ppuStack_318;
        ppplStack_2370 = (long ***)0xf000000000000000;
        uVar46 = 3;
        goto code_r0x0001015498e4;
      }
    }
    else {
      func_0x000101553910(uStack_c98,uStack_c90,uStack_c88);
      uVar28 = uStack_c98;
      if (uStack_c88 >> 0x3c == 0xb) goto code_r0x000101548e84;
      func_0x00010155392c(uStack_c98,uStack_c90,uStack_c88);
      func_0x00010155392c(0,0,0xb000000000000000);
    }
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppplStack_2370 = (long ***)0xf000000000000000;
    uVar46 = 0x15;
    goto code_r0x0001015498e4;
  case 5:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    iVar7 = (int)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if (iVar7 == 5) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553898();
      ppplVar45 = pppplVar22[0x17];
      ppplVar34 = pppplVar22[0x16];
      ppplVar24 = pppplVar22[0x18];
      ppplVar35 = pppplVar22[5];
      ppplVar42 = pppplVar22[4];
      uVar41 = *(undefined1 *)(pppplVar22 + 3);
      ppplVar25 = *pppplVar22;
      ppplVar39 = pppplVar22[2];
      ppplVar36 = pppplVar22[1];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
      ppuStack_1e58 = (ulong **)pppplVar22[0xf];
      ppuStack_1e60 = (ulong **)pppplVar22[0xe];
      ppuStack_1e48 = (ulong **)pppplVar22[0x11];
      ppuStack_1e50 = (ulong **)pppplVar22[0x10];
      ppuStack_1e38 = (ulong **)pppplVar22[0x13];
      ppuStack_1e40 = (ulong **)pppplVar22[0x12];
      ppuStack_1e28 = (ulong **)pppplVar22[0x15];
      ppuStack_1e30 = (ulong **)pppplVar22[0x14];
      ppuStack_1e98 = (ulong **)pppplVar22[7];
      ppuStack_1ea0 = (ulong **)pppplVar22[6];
      ppuStack_1e88 = (ulong **)pppplVar22[9];
      ppuStack_1e90 = (ulong **)pppplVar22[8];
      ppuStack_1e78 = (ulong **)pppplVar22[0xb];
      ppuStack_1e80 = (ulong **)pppplVar22[10];
      ppuStack_1e68 = (ulong **)pppplVar22[0xd];
      ppuStack_1e70 = (ulong **)pppplVar22[0xc];
      ppuStack_990 = (ulong **)ppplVar24;
      ppuStack_1020 = (ulong **)ppplVar25;
      ppuStack_1018 = (ulong **)ppplVar36;
      ppuStack_1010 = (ulong **)ppplVar39;
      ppuStack_1000 = (ulong **)ppplVar42;
      ppuStack_ff8 = (ulong **)ppplVar35;
      ppuStack_9a0 = (ulong **)ppplVar34;
      ppuStack_998 = (ulong **)ppplVar45;
    }
    else {
      FUN_1015d9114(&ppuStack_a50);
      ppuStack_1e58 = ppuStack_9d8;
      ppuStack_1e60 = ppuStack_9e0;
      ppuStack_1e48 = ppuStack_9c8;
      ppuStack_1e50 = ppuStack_9d0;
      ppuStack_1e38 = ppuStack_9b8;
      ppuStack_1e40 = ppuStack_9c0;
      ppuStack_1e28 = ppuStack_9a8;
      ppuStack_1e30 = ppuStack_9b0;
      ppuStack_1e98 = ppuStack_a18;
      ppuStack_1ea0 = ppuStack_a20;
      ppuStack_1e88 = ppuStack_a08;
      ppuStack_1e90 = ppuStack_a10;
      ppuStack_1e78 = ppuStack_9f8;
      ppuStack_1e80 = ppuStack_a00;
      ppuStack_1e68 = ppuStack_9e8;
      ppuStack_1e70 = ppuStack_9f0;
      ppuStack_1020 = ppuStack_a50;
      ppuStack_1018 = ppuStack_a48;
      ppuStack_1010 = ppuStack_a40;
      ppuStack_1000 = ppuStack_a30;
      ppuStack_ff8 = ppuStack_a28;
      uVar41 = ppuStack_a38._0_1_;
    }
    lVar20 = lStack_2418;
    lVar11 = lStack_2460;
    lVar14 = alStack_24e8[0];
    lVar30 = alStack_2598[0xe];
    ppuStack_f98 = ppuStack_1e48;
    ppuStack_fa0 = ppuStack_1e50;
    ppuStack_f88 = ppuStack_1e38;
    ppuStack_f90 = ppuStack_1e40;
    ppuStack_fe8 = ppuStack_1e98;
    ppuStack_ff0 = ppuStack_1ea0;
    ppuStack_fd8 = ppuStack_1e88;
    ppuStack_fe0 = ppuStack_1e90;
    ppuStack_fc8 = ppuStack_1e78;
    ppuStack_fd0 = ppuStack_1e80;
    ppuStack_1008 = (ulong **)CONCAT71(ppuStack_1008._1_7_,uVar41);
    ppuStack_fa8 = ppuStack_1e58;
    ppuStack_fb0 = ppuStack_1e60;
    ppuStack_fb8 = ppuStack_1e68;
    ppuStack_fc0 = ppuStack_1e70;
    ppuStack_f78 = ppuStack_1e28;
    ppuStack_f80 = ppuStack_1e30;
    ppuStack_758 = ppuStack_1e38;
    ppuStack_760 = ppuStack_1e40;
    ppuStack_768 = ppuStack_1e48;
    ppuStack_770 = ppuStack_1e50;
    ppuStack_778 = ppuStack_1e58;
    ppuStack_780 = ppuStack_1e60;
    ppuStack_788 = ppuStack_1e68;
    ppuStack_790 = ppuStack_1e70;
    ppuStack_798 = ppuStack_1e78;
    ppuStack_7a0 = ppuStack_1e80;
    ppuStack_7a8 = ppuStack_1e88;
    ppuStack_7b0 = ppuStack_1e90;
    ppuStack_7b8 = ppuStack_1e98;
    ppuStack_7c0 = ppuStack_1ea0;
    ppuStack_7d8 = ppuStack_1008;
    ppuStack_748 = ppuStack_1e28;
    ppuStack_750 = ppuStack_1e30;
    ppuStack_f70 = ppuStack_9a0;
    ppuStack_f68 = ppuStack_998;
    ppuStack_f60 = ppuStack_990;
    ppuStack_7f0 = ppuStack_1020;
    ppuStack_7e8 = ppuStack_1018;
    ppuStack_7e0 = ppuStack_1010;
    ppuStack_7d0 = ppuStack_1000;
    ppuStack_7c8 = ppuStack_ff8;
    ppuStack_740 = ppuStack_9a0;
    ppuStack_738 = ppuStack_998;
    ppuStack_730 = ppuStack_990;
    func_0x00010154c090(alStack_24e8[0],&ppuStack_7f0,ppplStack_2400);
    FUN_101553864(&ppuStack_1020);
    func_0x0001015545c8(lVar20,0x112db3cd0,&UNK_10d95e230);
    func_0x000101554364(lVar14,lVar20,0x112db3cd0,&UNK_10d95e230);
    (*pcStack_2508)(lVar11,1,1,lVar12);
    lVar14 = (long)*(int *)(alStack_24b0[3] + 0x30);
    func_0x000101554514(lVar20,lVar30,0x112db3cd0,&UNK_10d95e230);
    func_0x000101554514(lVar11,lVar30 + lVar14,0x112db3cd0,&UNK_10d95e230);
    pcVar38 = *(code **)(lVar23 + 0x30);
    lVar13 = lVar30;
    (*pcVar38)(lVar30,1,lVar12);
    lVar31 = lStack_2420;
    lVar29 = alStack_2598[8];
    if ((int)lVar13 != 1) {
      func_0x000101554514(lVar30,alStack_2598[8],0x112db3cd0,&UNK_10d95e230);
      lVar11 = lVar30 + lVar14;
      (*pcVar38)(lVar11,1,lVar12);
      lVar12 = alStack_2598[3];
      if ((int)lVar11 == 1) {
        func_0x0001015545c8(lStack_2460,0x112db3cd0,&UNK_10d95e230);
        func_0x0001015543dc(lVar29,&SUB_10471853c);
        goto code_r0x000101548188;
      }
      func_0x000101554754(lVar30 + lVar14,alStack_2598[3],&SUB_10471853c);
      uVar28 = lVar29;
      func_0x0001047185c4(lVar29,lVar12);
      func_0x0001015543dc(lVar12,&SUB_10471853c);
      func_0x0001015545c8(lStack_2460,0x112db3cd0,&UNK_10d95e230);
      func_0x0001015543dc(lVar29,&SUB_10471853c);
      func_0x0001015545c8(lVar30,0x112db3cd0,&UNK_10d95e230);
      lVar14 = lStack_2410;
      if ((uVar28 & 1) == 0) goto code_r0x0001015481a0;
code_r0x0001015490fc:
      func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
      func_0x0001015545c8(lVar31,0x112db3cc8,&UNK_10d98e570);
      func_0x0001015545c8(lVar20,0x112db3cd0,&UNK_10d95e230);
      lVar13 = lStack_23f8;
      goto code_r0x0001015493ec;
    }
    func_0x0001015545c8(lVar11,0x112db3cd0,&UNK_10d95e230);
    lVar14 = lVar30 + lVar14;
    (*pcVar38)(lVar14,1,lVar12);
    if ((int)lVar14 == 1) {
      uVar46 = 0x112db3cd0;
      puVar50 = &UNK_10d95e230;
      goto code_r0x0001015490f4;
    }
code_r0x000101548188:
    lVar14 = lStack_2410;
    func_0x0001015545c8(lVar30,0x112db3ca8,&UNK_10dd33f10);
code_r0x0001015481a0:
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    uVar46 = 10;
code_r0x000101549274:
    ppplStack_2370 = (long ***)0xf000000000000000;
    ppuStack_2378 = (ulong **)0x1;
    ppuStack_2380 = (ulong **)0x0;
    ppuStack_2388 = (ulong **)0x0;
    ppuStack_2390 = (ulong **)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    puVar50 = (undefined *)0x0;
    ppplStack_2400 = (long ***)0x0;
    ppuStack_2430 = (ulong **)0x0;
    ppuStack_2440 = (ulong **)0x0;
    ppplStack_2448 = (long ***)0x0;
    ppuStack_2450 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    pppuVar27 = (ulong ***)0x1;
    ppuStack_23a8 = (ulong **)0x0;
    ppuStack_23b0 = (ulong **)0x0;
    ppuStack_2398 = (ulong **)0x0;
    ppuStack_23a0 = (ulong **)0x0;
    lVar13 = lStack_23f8;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d80 = ppuStack_2f8;
    ppuStack_d78 = ppuStack_2f0;
    break;
  case 6:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    iVar7 = (int)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if (iVar7 == 6) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553860();
      ppplVar24 = *pppplVar22;
      ppplVar36 = pppplVar22[1];
      ppplVar25 = pppplVar22[2];
      ppplVar35 = pppplVar22[3];
      ppplVar42 = pppplVar22[4];
      ppplVar39 = pppplVar22[5];
      ppuStack_2380 = (ulong **)0x112db3cf0;
      puVar50 = &UNK_10d95e250;
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0);
    }
    else {
      ppplVar24 = (long ***)0x0;
      ppplVar25 = (long ***)0x0;
      ppplVar42 = (long ***)0x0;
      ppplVar39 = (long ***)0xc000000000000000;
      ppplVar36 = (long ***)0xe000000000000000;
      ppplVar35 = (long ***)0xe000000000000000;
    }
    pppuVar16 = &ppuStack_7f0;
    pppuVar27 = (ulong ***)ppplStack_2400;
    ppuStack_7f0 = (ulong **)ppplVar24;
    ppuStack_7e8 = (ulong **)ppplVar36;
    ppuStack_7e0 = (ulong **)ppplVar25;
    ppuStack_7d8 = (ulong **)ppplVar35;
    ppuStack_7d0 = (ulong **)ppplVar42;
    ppuStack_7c8 = (ulong **)ppplVar39;
    FUN_10154c540();
    func_0x000107c6142c(ppplVar35);
    func_0x000107c6142c(ppplVar36);
    func_0x00010006c090(ppplVar42,ppplVar39);
    if (pppuVar27 == (ulong ***)0x1) {
code_r0x000101547acc:
      func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
      func_0x0001015545c8(lStack_2420,0x112db3cc8,&UNK_10d98e570);
      func_0x0001015545c8(lStack_2418,0x112db3cd0,&UNK_10d95e230);
      lVar13 = lStack_23f8;
code_r0x000101548b0c:
      func_0x0001015545c8(lVar13,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lStack_2410;
      goto code_r0x000101546400;
    }
    func_0x000107c61434(puVar50);
    func_0x000107c61434(pppuVar27);
    ppuStack_2450 = ppuStack_2380;
    ppplStack_2448 = (long ***)pppuVar16;
    FUN_10155382c(pppuVar16,pppuVar27,ppuStack_2380,puVar50);
    FUN_10155382c(0,1,0,0);
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppuStack_2430 = (ulong **)0x0;
    ppuStack_2440 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppuStack_2388 = (ulong **)0x0;
    ppuStack_2390 = (ulong **)0x0;
    ppuStack_2378 = (ulong **)0x1;
    ppuStack_2380 = (ulong **)0x0;
    ppplStack_2370 = (long ***)0xf000000000000000;
    uVar46 = 0xd;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d78 = ppuStack_2f0;
    ppuStack_d80 = ppuStack_2f8;
    ppuStack_23a8 = (ulong **)0x0;
    ppuStack_23b0 = (ulong **)0x0;
    ppuStack_2398 = (ulong **)0x0;
    ppuStack_23a0 = (ulong **)0x0;
    lVar14 = lStack_2410;
    lVar31 = lStack_2420;
    lVar20 = lStack_2418;
    lVar13 = lStack_23f8;
    break;
  case 7:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    iVar7 = (int)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if (iVar7 == 7) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553828();
      ppplVar24 = pppplVar22[7];
      ppplVar35 = pppplVar22[8];
      ppplVar25 = pppplVar22[4];
      ppplVar39 = pppplVar22[5];
      uVar41 = *(undefined1 *)(pppplVar22 + 6);
      ppplVar42 = pppplVar22[2];
      ppplVar34 = pppplVar22[3];
      ppplVar36 = *pppplVar22;
      ppplVar45 = pppplVar22[1];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      ppplVar36 = (long ***)0x0;
      ppplVar42 = (long ***)0x0;
      ppplVar25 = (long ***)0x0;
      ppplVar39 = (long ***)0x0;
      ppplVar24 = (long ***)0x0;
      ppplVar35 = (long ***)0xc000000000000000;
      uVar41 = 0xff;
      ppplVar45 = (long ***)0xe000000000000000;
      ppplVar34 = (long ***)0xe000000000000000;
    }
    ppuStack_ff0 = (ulong **)CONCAT71(ppuStack_ff0._1_7_,uVar41);
    ppuStack_1e70 = ppuStack_ff0;
    ppuStack_1ea0 = (ulong **)ppplVar36;
    ppuStack_1e98 = (ulong **)ppplVar45;
    ppuStack_1e90 = (ulong **)ppplVar42;
    ppuStack_1e88 = (ulong **)ppplVar34;
    ppuStack_1e80 = (ulong **)ppplVar25;
    ppuStack_1e78 = (ulong **)ppplVar39;
    ppuStack_1e68 = (ulong **)ppplVar24;
    ppuStack_1e60 = (ulong **)ppplVar35;
    ppuStack_1020 = (ulong **)ppplVar36;
    ppuStack_1018 = (ulong **)ppplVar45;
    ppuStack_1010 = (ulong **)ppplVar42;
    ppuStack_1008 = (ulong **)ppplVar34;
    ppuStack_1000 = (ulong **)ppplVar25;
    ppuStack_ff8 = (ulong **)ppplVar39;
    ppuStack_fe8 = (ulong **)ppplVar24;
    ppuStack_fe0 = (ulong **)ppplVar35;
    func_0x00010154c5d0(&ppuStack_2100,&ppuStack_1ea0,ppplStack_2400);
    ppuStack_2388 = ppuStack_20e8;
    ppuStack_2390 = ppuStack_20f0;
    ppuStack_2378 = ppuStack_20f8;
    ppuStack_2380 = ppuStack_2100;
    ppuStack_23a8 = ppuStack_20c8;
    ppuStack_23b0 = ppuStack_20d0;
    ppuStack_2398 = ppuStack_20d8;
    ppuStack_23a0 = ppuStack_20e0;
    FUN_1015537f4(&ppuStack_1020);
    ppuStack_7e8 = ppuStack_20f8;
    ppuStack_7f0 = ppuStack_2100;
    ppuStack_7d8 = ppuStack_20e8;
    ppuStack_7e0 = ppuStack_20f0;
    ppuStack_7c8 = ppuStack_20d8;
    ppuStack_7d0 = ppuStack_20e0;
    ppuStack_7b8 = ppuStack_20c8;
    ppuStack_7c0 = ppuStack_20d0;
    ppuStack_7a8 = (ulong **)0x1;
    ppuStack_7b0 = (ulong **)0x0;
    ppuStack_798 = (ulong **)0x0;
    ppuStack_7a0 = (ulong **)0x0;
    ppuStack_788 = (ulong **)0x0;
    ppuStack_790 = (ulong **)0x0;
    ppuStack_778 = (ulong **)0x0;
    ppuStack_780 = (ulong **)0x0;
    if ((long ***)ppuStack_20f8 == (long ***)0x1) {
      func_0x0001015545c8(&ppuStack_7f0,0x112db3d10,&UNK_10dd33dc0);
      goto code_r0x000101547acc;
    }
    ppuStack_a08 = (ulong **)0x1;
    ppuStack_a10 = (ulong **)0x0;
    ppuStack_9f8 = (ulong **)0x0;
    ppuStack_a00 = (ulong **)0x0;
    ppuStack_9e8 = (ulong **)0x0;
    ppuStack_9f0 = (ulong **)0x0;
    ppuStack_9d8 = (ulong **)0x0;
    ppuStack_9e0 = (ulong **)0x0;
    ppuStack_a48 = ppuStack_20f8;
    ppuStack_a50 = ppuStack_2100;
    ppuStack_a38 = ppuStack_20e8;
    ppuStack_a40 = ppuStack_20f0;
    ppuStack_a28 = ppuStack_20d8;
    ppuStack_a30 = ppuStack_20e0;
    ppuStack_a18 = ppuStack_20c8;
    ppuStack_a20 = ppuStack_20d0;
    func_0x000101554514(&ppuStack_2100,&uStack_2360,0x112db3d10,&UNK_10dd33dc0);
    func_0x0001015545c8(&ppuStack_a50,0x112db3d18,&UNK_10d95e270);
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppuStack_2430 = (ulong **)0x0;
    ppplStack_2448 = (long ***)0x0;
    ppuStack_2440 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    ppuStack_2450 = (ulong **)0x0;
    puVar50 = (undefined *)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppplStack_2370 = (long ***)0xf000000000000000;
    pppuVar27 = (ulong ***)0x1;
    uVar46 = 0xe;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d78 = ppuStack_2f0;
    ppuStack_d80 = ppuStack_2f8;
    lVar14 = lStack_2410;
    lVar31 = lStack_2420;
    lVar20 = lStack_2418;
    lVar13 = lStack_23f8;
    break;
  case 8:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    iVar7 = (int)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if (iVar7 == 8) {
      pppplVar22 = &ppplStack_1780;
      FUN_1015537f0();
      ppplVar24 = *pppplVar22;
      ppplVar42 = pppplVar22[1];
      ppplVar25 = pppplVar22[2];
      ppplVar36 = pppplVar22[3];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      ppplVar24 = (long ***)0x0;
      ppplVar25 = (long ***)0x0;
      ppplVar36 = (long ***)0xc000000000000000;
      ppplVar42 = (long ***)0xe000000000000000;
    }
    lVar13 = lStack_23f8;
    lVar20 = lStack_2418;
    lVar31 = lStack_2420;
    func_0x00010006c090(ppplVar25,ppplVar36);
    uVar28 = (ulong)ppplVar24 & 0xffffffffffff;
    if (((ulong)ppplVar42 & 0x2000000000000000) != 0) {
      uVar28 = (ulong)ppplVar42 >> 0x38 & 0xf;
    }
    if (uVar28 == 0) {
      func_0x000107c6142c(ppplVar42);
      func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
      func_0x0001015545c8(lVar31,0x112db3cc8,&UNK_10d98e570);
      func_0x0001015545c8(lVar20,0x112db3cd0,&UNK_10d95e230);
      goto code_r0x000101548b0c;
    }
    ppplStack_2448 = (long ***)0x0;
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    ppuStack_2450 = (ulong **)0x0;
    puVar50 = (undefined *)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppuStack_2388 = (ulong **)0x0;
    ppuStack_2390 = (ulong **)0x0;
    ppuStack_2378 = (ulong **)0x1;
    ppuStack_2380 = (ulong **)0x0;
    ppplStack_2370 = (long ***)0xf000000000000000;
    pppuVar27 = (ulong ***)0x1;
    uVar46 = 0xf;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d78 = ppuStack_2f0;
    ppuStack_d80 = ppuStack_2f8;
    ppuStack_23a8 = (ulong **)0x0;
    ppuStack_23b0 = (ulong **)0x0;
    ppuStack_2398 = (ulong **)0x0;
    ppuStack_23a0 = (ulong **)0x0;
    lVar14 = lStack_2410;
    ppuStack_2440 = (ulong **)ppplVar42;
    ppuStack_2430 = (ulong **)ppplVar24;
    break;
  case 9:
    ppuStack_1138 = ppuStack_188;
    ppuStack_1140 = ppuStack_190;
    ppuStack_1128 = ppuStack_178;
    ppuStack_1130 = ppuStack_180;
    uStack_1118 = uStack_168;
    ppuStack_1120 = ppuStack_170;
    uStack_110f = uStack_15f;
    uStack_1117 = uStack_167;
    uStack_1110 = uStack_160;
    ppuStack_1178 = ppuStack_1c8;
    ppuStack_1180 = ppuStack_1d0;
    ppuStack_1168 = ppuStack_1b8;
    ppuStack_1170 = ppuStack_1c0;
    ppuStack_1158 = ppuStack_1a8;
    ppuStack_1160 = ppuStack_1b0;
    ppuStack_1148 = ppuStack_198;
    ppuStack_1150 = ppuStack_1a0;
    ppuStack_11b8 = ppuStack_208;
    ppuStack_11c0 = ppuStack_210;
    ppuStack_11a8 = ppuStack_1f8;
    ppuStack_11b0 = ppuStack_200;
    ppuStack_1198 = ppuStack_1e8;
    ppuStack_11a0 = ppuStack_1f0;
    ppuStack_1188 = ppuStack_1d8;
    ppuStack_1190 = ppuStack_1e0;
    ppuStack_11d8 = ppuStack_228;
    ppuStack_11e0 = ppuStack_230;
    ppuStack_11c8 = ppuStack_218;
    ppuStack_11d0 = ppuStack_220;
    ppuStack_1058 = ppuStack_188;
    ppuStack_1060 = ppuStack_190;
    ppuStack_1048 = ppuStack_178;
    ppuStack_1050 = ppuStack_180;
    uStack_1038 = uStack_168;
    ppuStack_1040 = ppuStack_170;
    uStack_102f = uStack_15f;
    uStack_1037 = uStack_167;
    uStack_1030 = uStack_160;
    ppuStack_1098 = ppuStack_1c8;
    ppuStack_10a0 = ppuStack_1d0;
    ppuStack_1088 = ppuStack_1b8;
    ppuStack_1090 = ppuStack_1c0;
    ppuStack_1078 = ppuStack_1a8;
    ppuStack_1080 = ppuStack_1b0;
    ppuStack_1068 = ppuStack_198;
    ppuStack_1070 = ppuStack_1a0;
    ppuStack_10d8 = ppuStack_208;
    ppuStack_10e0 = ppuStack_210;
    ppuStack_10c8 = ppuStack_1f8;
    ppuStack_10d0 = ppuStack_200;
    ppuStack_10b8 = ppuStack_1e8;
    ppuStack_10c0 = ppuStack_1f0;
    ppuStack_10a8 = ppuStack_1d8;
    ppuStack_10b0 = ppuStack_1e0;
    ppuStack_10f8 = ppuStack_228;
    ppuStack_1100 = ppuStack_230;
    ppuStack_10e8 = ppuStack_218;
    ppuStack_10f0 = ppuStack_220;
    iVar7 = (int)&ppuStack_11e0;
    uStack_1b6f = uVar6;
    uStack_1b68 = uVar41;
    func_0x000101551adc();
    if (iVar7 == 9) {
      pppuVar16 = &ppuStack_1100;
      func_0x0001015537b0();
      pppuVar27 = (ulong ***)*pppuVar16;
      pppplVar22 = (long ****)pppuVar16[1];
      ppuVar26 = pppuVar16[2];
      ppuStack_16d8 = ppuStack_188;
      ppuStack_16e0 = ppuStack_190;
      ppuStack_16c8 = ppuStack_178;
      ppuStack_16d0 = ppuStack_180;
      uStack_16b8 = uStack_168;
      ppuStack_16c0 = ppuStack_170;
      uStack_16af = (undefined7)uStack_15f;
      uStack_16a8 = (undefined1)((ulong)uStack_15f >> 0x38);
      uStack_16b7 = uStack_167;
      uStack_16b0 = uStack_160;
      ppuStack_1718 = ppuStack_1c8;
      ppuStack_1720 = ppuStack_1d0;
      ppuStack_1708 = ppuStack_1b8;
      ppuStack_1710 = ppuStack_1c0;
      ppuStack_16f8 = ppuStack_1a8;
      ppuStack_1700 = ppuStack_1b0;
      ppuStack_16e8 = ppuStack_198;
      ppuStack_16f0 = ppuStack_1a0;
      ppuStack_1758 = ppuStack_208;
      ppuStack_1760 = ppuStack_210;
      ppuStack_1748 = ppuStack_1f8;
      ppuStack_1750 = ppuStack_200;
      ppuStack_1738 = ppuStack_1e8;
      ppuStack_1740 = ppuStack_1f0;
      ppuStack_1728 = ppuStack_1d8;
      ppuStack_1730 = ppuStack_1e0;
      ppuStack_1778 = ppuStack_228;
      ppplStack_1780 = (long ***)ppuStack_230;
      ppuStack_1768 = ppuStack_218;
      ppuStack_1770 = ppuStack_220;
      func_0x000101554514(&ppuStack_230,&ppuStack_1c40,0x112db3cf0,&UNK_10d95e250);
      FUN_1015537b4(&ppplStack_1780,&ppuStack_1c40);
    }
    else {
      ppuVar26 = (ulong **)0x112db3cf0;
      pppuVar27 = &ppuStack_230;
      pppplVar22 = &ppplStack_1780;
      func_0x000101554514(pppuVar27,pppplVar22,0x112db3cf0,&UNK_10d95e250);
      FUN_1015dfe6c();
    }
    func_0x00010154c6e8(&ppuStack_a50,pppuVar27,pppplVar22,ppuVar26,ppplStack_2400);
    uStack_f58 = uStack_988;
    ppuStack_f60 = ppuStack_990;
    uStack_f48 = uStack_978;
    uStack_f50 = uStack_980;
    uStack_f38 = uStack_968;
    uStack_f40 = uStack_970;
    uStack_f30 = uStack_960;
    ppuStack_f98 = ppuStack_9c8;
    ppuStack_fa0 = ppuStack_9d0;
    ppuStack_f88 = ppuStack_9b8;
    ppuStack_f90 = ppuStack_9c0;
    ppuStack_f78 = ppuStack_9a8;
    ppuStack_f80 = ppuStack_9b0;
    ppuStack_f68 = ppuStack_998;
    ppuStack_f70 = ppuStack_9a0;
    ppuStack_fd8 = ppuStack_a08;
    ppuStack_fe0 = ppuStack_a10;
    ppuStack_fc8 = ppuStack_9f8;
    ppuStack_fd0 = ppuStack_a00;
    ppuStack_fb8 = ppuStack_9e8;
    ppuStack_fc0 = ppuStack_9f0;
    ppuStack_fa8 = ppuStack_9d8;
    ppuStack_fb0 = ppuStack_9e0;
    ppuStack_1018 = ppuStack_a48;
    ppuStack_1020 = ppuStack_a50;
    ppuStack_1008 = ppuStack_a38;
    ppuStack_1010 = ppuStack_a40;
    ppuStack_ff8 = ppuStack_a28;
    ppuStack_1000 = ppuStack_a30;
    ppuStack_fe8 = ppuStack_a18;
    ppuStack_ff0 = ppuStack_a20;
    func_0x00010006c090(pppuVar27,pppplVar22);
    func_0x000107c61574(ppuVar26);
    ppuStack_1218 = ppuStack_1138;
    ppuStack_1220 = ppuStack_1140;
    ppuStack_1208 = ppuStack_1128;
    ppuStack_1210 = ppuStack_1130;
    uStack_11f8 = uStack_1118;
    ppuStack_1200 = ppuStack_1120;
    uStack_11ef = uStack_110f;
    uStack_11f7 = uStack_1117;
    uStack_11f0 = uStack_1110;
    ppuStack_1258 = ppuStack_1178;
    ppuStack_1260 = ppuStack_1180;
    ppuStack_1248 = ppuStack_1168;
    ppuStack_1250 = ppuStack_1170;
    ppuStack_1238 = ppuStack_1158;
    ppuStack_1240 = ppuStack_1160;
    ppuStack_1228 = ppuStack_1148;
    ppuStack_1230 = ppuStack_1150;
    ppuStack_1298 = ppuStack_11b8;
    ppuStack_12a0 = ppuStack_11c0;
    ppuStack_1288 = ppuStack_11a8;
    ppuStack_1290 = ppuStack_11b0;
    ppuStack_1278 = ppuStack_1198;
    ppuStack_1280 = ppuStack_11a0;
    ppuStack_1268 = ppuStack_1188;
    ppuStack_1270 = ppuStack_1190;
    ppuStack_12b8 = ppuStack_11d8;
    ppuStack_12c0 = ppuStack_11e0;
    ppuStack_12a8 = ppuStack_11c8;
    ppuStack_12b0 = ppuStack_11d0;
    iVar7 = (int)&ppuStack_11e0;
    func_0x000101551adc();
    if (iVar7 == 9) {
      pppuVar27 = &ppuStack_12c0;
      func_0x0001015537b0();
      ppuVar26 = pppuVar27[1];
      ppuVar37 = pppuVar27[2];
      pppuVar16 = (ulong ***)*pppuVar27;
    }
    else {
      ppuVar26 = (ulong **)0x112db3cf0;
      ppuVar37 = (ulong **)&UNK_10d95e250;
      pppuVar27 = &ppuStack_230;
      func_0x0001015545c8();
      FUN_1015dfe6c();
      pppuVar16 = pppuVar27;
    }
    lVar13 = lStack_23f8;
    lVar20 = lStack_2418;
    ppplStack_1780 = (long ***)pppuVar16;
    ppuStack_1778 = ppuVar26;
    ppuStack_1770 = ppuVar37;
    FUN_101553758();
    func_0x000100075890(&ppuStack_1c40,0,0,&UNK_1103e5558,PTR___s10Foundation4DataVN_110350ae0,
                        pppuVar27,&PTR_DAT_110789f58);
    func_0x00010006c090(pppuVar16,ppuVar26);
    func_0x000107c61574(ppuVar37);
    ppuVar37 = ppuStack_1c38;
    ppuVar26 = ppuStack_1c40;
    ppuStack_23d0 = ppuStack_1c40;
    ppplStack_2370 = (long ***)ppuStack_1c38;
    iVar7 = (int)&ppuStack_1688;
    uStack_16b8 = (undefined1)uStack_988;
    uStack_16b7 = (undefined7)((ulong)uStack_988 >> 8);
    ppuStack_16c0 = ppuStack_990;
    uStack_16a8 = (undefined1)uStack_978;
    uStack_16a7 = (undefined7)((ulong)uStack_978 >> 8);
    uStack_16b0 = (undefined1)uStack_980;
    uStack_16af = (undefined7)((ulong)uStack_980 >> 8);
    uStack_1698 = uStack_968;
    uStack_16a0 = uStack_970;
    ppuStack_16f8 = ppuStack_9c8;
    ppuStack_1700 = ppuStack_9d0;
    ppuStack_16e8 = ppuStack_9b8;
    ppuStack_16f0 = ppuStack_9c0;
    ppuStack_16d8 = ppuStack_9a8;
    ppuStack_16e0 = ppuStack_9b0;
    ppuStack_16c8 = ppuStack_998;
    ppuStack_16d0 = ppuStack_9a0;
    ppuStack_1738 = ppuStack_a08;
    ppuStack_1740 = ppuStack_a10;
    ppuStack_1728 = ppuStack_9f8;
    ppuStack_1730 = ppuStack_a00;
    ppuStack_1718 = ppuStack_9e8;
    ppuStack_1720 = ppuStack_9f0;
    ppuStack_1708 = ppuStack_9d8;
    ppuStack_1710 = ppuStack_9e0;
    ppuStack_1778 = ppuStack_a48;
    ppplStack_1780 = (long ***)ppuStack_a50;
    ppuStack_1768 = ppuStack_a38;
    ppuStack_1770 = ppuStack_a40;
    ppuStack_1758 = ppuStack_a28;
    ppuStack_1760 = ppuStack_a30;
    ppuStack_1748 = ppuStack_a18;
    ppuStack_1750 = ppuStack_a20;
    uStack_15b0 = uStack_250;
    uStack_15b8 = uStack_258;
    uStack_15a0 = uStack_240;
    uStack_15a8 = uStack_248;
    ppuStack_15f0 = ppuStack_290;
    ppuStack_15f8 = ppuStack_298;
    ppuStack_15e0 = ppuStack_280;
    ppuStack_15e8 = ppuStack_288;
    ppuStack_15d0 = ppuStack_270;
    ppuStack_15d8 = ppuStack_278;
    uStack_15c0 = uStack_260;
    ppuStack_15c8 = ppuStack_268;
    ppuStack_1630 = ppuStack_2d0;
    ppuStack_1638 = ppuStack_2d8;
    ppuStack_1620 = ppuStack_2c0;
    ppuStack_1628 = ppuStack_2c8;
    ppuStack_1610 = ppuStack_2b0;
    ppuStack_1618 = ppuStack_2b8;
    ppuStack_1600 = ppuStack_2a0;
    ppuStack_1608 = ppuStack_2a8;
    ppuStack_1670 = ppuStack_310;
    ppuStack_1678 = ppuStack_318;
    ppuStack_1660 = ppuStack_300;
    ppuStack_1668 = ppuStack_308;
    ppuStack_1650 = ppuStack_2f0;
    ppuStack_1658 = ppuStack_2f8;
    ppuStack_1640 = ppuStack_2e0;
    ppuStack_1648 = ppuStack_2e8;
    uStack_1690 = uStack_960;
    uStack_1598 = uStack_238;
    ppuStack_1680 = ppuStack_320;
    ppuStack_1688 = ppuStack_328;
    iVar8 = (int)&ppplStack_1780;
    func_0x000101553798();
    lVar14 = lStack_2410;
    lVar31 = lStack_2420;
    if (iVar8 == 1) {
      func_0x000101553798();
      if (iVar7 == 1) {
        func_0x0001000b44c0(ppuVar26,ppuVar37);
        uVar46 = 0x112db3d00;
        puVar50 = &UNK_10d95e258;
        pppplVar22 = &ppplStack_1780;
        goto code_r0x000101548c68;
      }
code_r0x000101548d5c:
      func_0x000107c610b4(&ppuStack_1c40,&ppplStack_1780,0x1f0);
      func_0x000101554514(&ppuStack_a50,&ppuStack_7f0,0x112db3d00,&UNK_10d95e258);
      func_0x0001015545c8(&ppuStack_1c40,0x112db3d08,&UNK_10d95e260);
    }
    else {
      uStack_1dd8 = CONCAT71(uStack_16b7,uStack_16b8);
      uStack_1dc8 = CONCAT71(uStack_16a7,uStack_16a8);
      uStack_1dd0 = CONCAT71(uStack_16af,uStack_16b0);
      ppuStack_1de0 = ppuStack_16c0;
      uStack_1db8 = uStack_1698;
      uStack_1dc0 = uStack_16a0;
      uStack_1db0 = uStack_1690;
      ppuStack_1e18 = ppuStack_16f8;
      ppuStack_1e20 = ppuStack_1700;
      ppuStack_1e08 = ppuStack_16e8;
      ppuStack_1e10 = ppuStack_16f0;
      ppuStack_1df8 = ppuStack_16d8;
      ppuStack_1e00 = ppuStack_16e0;
      ppuStack_1de8 = ppuStack_16c8;
      ppuStack_1df0 = ppuStack_16d0;
      ppuStack_1e58 = ppuStack_1738;
      ppuStack_1e60 = ppuStack_1740;
      ppuStack_1e48 = ppuStack_1728;
      ppuStack_1e50 = ppuStack_1730;
      ppuStack_1e38 = ppuStack_1718;
      ppuStack_1e40 = ppuStack_1720;
      ppuStack_1e28 = ppuStack_1708;
      ppuStack_1e30 = ppuStack_1710;
      ppuStack_1e98 = ppuStack_1778;
      ppuStack_1ea0 = (ulong **)ppplStack_1780;
      ppuStack_1e88 = ppuStack_1768;
      ppuStack_1e90 = ppuStack_1770;
      ppuStack_1e78 = ppuStack_1758;
      ppuStack_1e80 = ppuStack_1760;
      ppuStack_1e68 = ppuStack_1748;
      ppuStack_1e70 = ppuStack_1750;
      func_0x000101553798();
      if (iVar7 == 1) goto code_r0x000101548d5c;
      uStack_2038 = uStack_15c0;
      ppuStack_2040 = ppuStack_15c8;
      uStack_2028 = uStack_15b0;
      uStack_2030 = uStack_15b8;
      uStack_2018 = uStack_15a0;
      uStack_2020 = uStack_15a8;
      ppuStack_2078 = ppuStack_1600;
      ppuStack_2080 = ppuStack_1608;
      ppuStack_2068 = ppuStack_15f0;
      ppuStack_2070 = ppuStack_15f8;
      ppuStack_2058 = ppuStack_15e0;
      ppuStack_2060 = ppuStack_15e8;
      ppuStack_2048 = ppuStack_15d0;
      ppuStack_2050 = ppuStack_15d8;
      ppuStack_20b8 = ppuStack_1640;
      ppuStack_20c0 = ppuStack_1648;
      ppuStack_20a8 = ppuStack_1630;
      ppuStack_20b0 = ppuStack_1638;
      ppuStack_2098 = ppuStack_1620;
      ppuStack_20a0 = ppuStack_1628;
      ppuStack_2088 = ppuStack_1610;
      ppuStack_2090 = ppuStack_1618;
      ppuStack_20f8 = ppuStack_1680;
      ppuStack_2100 = ppuStack_1688;
      ppuStack_20e8 = ppuStack_1670;
      ppuStack_20f0 = ppuStack_1678;
      ppuStack_20d8 = ppuStack_1660;
      ppuStack_20e0 = ppuStack_1668;
      ppuStack_20c8 = ppuStack_1650;
      ppuStack_20d0 = ppuStack_1658;
      uStack_1b78 = (undefined1)uStack_15c0;
      uStack_1b77 = (undefined7)((ulong)uStack_15c0 >> 8);
      ppuStack_1b80 = ppuStack_15c8;
      uStack_1b68 = (undefined1)uStack_15b0;
      uStack_1b67 = (undefined7)((ulong)uStack_15b0 >> 8);
      uStack_1b70 = (undefined1)uStack_15b8;
      uStack_1b6f = (undefined7)((ulong)uStack_15b8 >> 8);
      uStack_1b58 = uStack_15a0;
      uStack_1b60 = uStack_15a8;
      ppuStack_1bb8 = ppuStack_1600;
      ppuStack_1bc0 = ppuStack_1608;
      ppuStack_1ba8 = ppuStack_15f0;
      ppuStack_1bb0 = ppuStack_15f8;
      ppuStack_1b98 = ppuStack_15e0;
      ppuStack_1ba0 = ppuStack_15e8;
      ppuStack_1b88 = ppuStack_15d0;
      ppuStack_1b90 = ppuStack_15d8;
      ppuStack_1bf8 = ppuStack_1640;
      ppuStack_1c00 = ppuStack_1648;
      ppuStack_1be8 = ppuStack_1630;
      ppuStack_1bf0 = ppuStack_1638;
      ppuStack_1bd8 = ppuStack_1620;
      ppuStack_1be0 = ppuStack_1628;
      ppuStack_1bc8 = ppuStack_1610;
      ppuStack_1bd0 = ppuStack_1618;
      ppuStack_1c38 = ppuStack_1680;
      ppuStack_1c40 = ppuStack_1688;
      ppuStack_1c28 = ppuStack_1670;
      ppuStack_1c30 = ppuStack_1678;
      uStack_2010 = uStack_1598;
      uStack_1b50 = uStack_1598;
      ppuStack_1c18 = ppuStack_1660;
      ppuStack_1c20 = ppuStack_1668;
      ppuStack_1c08 = ppuStack_1650;
      ppuStack_1c10 = ppuStack_1658;
      uStack_728 = uStack_1dd8;
      ppuStack_730 = ppuStack_1de0;
      uStack_718 = uStack_1dc8;
      uStack_720 = uStack_1dd0;
      uStack_708 = uStack_1db8;
      uStack_710 = uStack_1dc0;
      uStack_700 = uStack_1db0;
      ppuStack_768 = ppuStack_1e18;
      ppuStack_770 = ppuStack_1e20;
      ppuStack_758 = ppuStack_1e08;
      ppuStack_760 = ppuStack_1e10;
      ppuStack_748 = ppuStack_1df8;
      ppuStack_750 = ppuStack_1e00;
      ppuStack_738 = ppuStack_1de8;
      ppuStack_740 = ppuStack_1df0;
      ppuStack_7a8 = ppuStack_1e58;
      ppuStack_7b0 = ppuStack_1e60;
      ppuStack_798 = ppuStack_1e48;
      ppuStack_7a0 = ppuStack_1e50;
      ppuStack_788 = ppuStack_1e38;
      ppuStack_790 = ppuStack_1e40;
      ppuStack_778 = ppuStack_1e28;
      ppuStack_780 = ppuStack_1e30;
      ppuStack_7e8 = ppuStack_1e98;
      ppuStack_7f0 = ppuStack_1ea0;
      ppuStack_7d8 = ppuStack_1e88;
      ppuStack_7e0 = ppuStack_1e90;
      ppuStack_7c8 = ppuStack_1e78;
      ppuStack_7d0 = ppuStack_1e80;
      ppuStack_7b8 = ppuStack_1e68;
      ppuStack_7c0 = ppuStack_1e70;
      func_0x000101554514(&ppuStack_a50,&uStack_2360,0x112db3d00,&UNK_10d95e258);
      func_0x000101554514(&ppuStack_a50,&uStack_2360,0x112db3d00,&UNK_10d95e258);
      pppuVar27 = &ppuStack_7f0;
      func_0x00010473ef08(pppuVar27,&ppuStack_1c40);
      func_0x0001015545c8(&ppuStack_a50,0x112db3d00,&UNK_10d95e258);
      func_0x0001015545c8(&ppuStack_2100,0x112db3d00,&UNK_10d95e258);
      func_0x0001015545c8(&ppplStack_1780,0x112db3d00,&UNK_10d95e258);
      if (((ulong)pppuVar27 & 1) != 0) {
        func_0x0001015545c8(&ppuStack_a50,0x112db3d00,&UNK_10d95e258);
        func_0x0001000b44c0(ppuVar26,ppuVar37);
        goto code_r0x000101548c6c;
      }
    }
    ppplStack_2400 = (long ***)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_f58;
    ppuStack_cf0 = ppuStack_f60;
    uStack_cd8 = uStack_f48;
    uStack_ce0 = uStack_f50;
    uStack_cc8 = uStack_f38;
    uStack_cd0 = uStack_f40;
    uStack_cc0 = uStack_f30;
    ppuStack_d28 = ppuStack_f98;
    ppuStack_d30 = ppuStack_fa0;
    ppuStack_d18 = ppuStack_f88;
    ppuStack_d20 = ppuStack_f90;
    ppuStack_d08 = ppuStack_f78;
    ppuStack_d10 = ppuStack_f80;
    ppuStack_cf8 = ppuStack_f68;
    ppuStack_d00 = ppuStack_f70;
    ppuStack_d68 = ppuStack_fd8;
    ppuStack_d70 = ppuStack_fe0;
    ppuStack_d58 = ppuStack_fc8;
    ppuStack_d60 = ppuStack_fd0;
    ppuStack_d48 = ppuStack_fb8;
    ppuStack_d50 = ppuStack_fc0;
    ppuStack_d38 = ppuStack_fa8;
    ppuStack_d40 = ppuStack_fb0;
    ppuStack_da8 = ppuStack_1018;
    ppuStack_db0 = ppuStack_1020;
    ppuStack_d98 = ppuStack_1008;
    ppuStack_da0 = ppuStack_1010;
    uVar46 = 0x10;
    ppuStack_308 = ppuStack_1000;
    ppuStack_300 = ppuStack_ff8;
    ppuStack_2f8 = ppuStack_ff0;
    ppuStack_2f0 = ppuStack_fe8;
    goto code_r0x0001015498e4;
  case 10:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    iVar7 = (int)&ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if (iVar7 == 10) {
      pppplVar22 = &ppplStack_1780;
      FUN_101553754();
      ppplVar24 = pppplVar22[0xc];
      ppplVar25 = pppplVar22[0xd];
      ppplVar35 = pppplVar22[9];
      ppplVar42 = pppplVar22[8];
      ppplVar48 = pppplVar22[0xb];
      ppplVar34 = pppplVar22[10];
      ppplVar39 = pppplVar22[5];
      ppplVar36 = pppplVar22[4];
      ppplVar49 = pppplVar22[7];
      ppplVar45 = pppplVar22[6];
      ppuStack_2438 = (ulong **)pppplVar22[1];
      ppuStack_2440 = (ulong **)*pppplVar22;
      ppuStack_2428 = (ulong **)pppplVar22[3];
      ppuStack_2430 = (ulong **)pppplVar22[2];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
      ppuStack_a50 = ppuStack_2440;
      ppuStack_a48 = ppuStack_2438;
      ppuStack_a40 = ppuStack_2430;
      ppuStack_a38 = ppuStack_2428;
    }
    else {
      ppplVar24 = (long ***)0x0;
      ppplVar25 = (long ***)0x0;
      ppuStack_a48 = (ulong **)0xc000000000000000;
      ppuStack_a50 = (ulong **)0x0;
      ppplVar36 = (long ***)0x0;
      ppplVar39 = (long ***)0x0;
      ppplVar45 = (long ***)0x0;
      ppplVar49 = (long ***)0x0;
      ppplVar42 = (long ***)0x0;
      ppplVar35 = (long ***)0x0;
      ppplVar34 = (long ***)0x0;
      ppplVar48 = (long ***)0x0;
      ppuStack_a40 = ppuStack_a50;
      ppuStack_a38 = ppuStack_a48;
    }
    lVar13 = lStack_23f8;
    lVar31 = lStack_2420;
    lVar12 = lStack_2468;
    lVar14 = alStack_2500[0];
    ppuStack_a30 = (ulong **)ppplVar36;
    ppuStack_a28 = (ulong **)ppplVar39;
    ppuStack_a20 = (ulong **)ppplVar45;
    ppuStack_a18 = (ulong **)ppplVar49;
    ppuStack_a10 = (ulong **)ppplVar42;
    ppuStack_a08 = (ulong **)ppplVar35;
    ppuStack_a00 = (ulong **)ppplVar34;
    ppuStack_9f8 = (ulong **)ppplVar48;
    ppuStack_9f0 = (ulong **)ppplVar24;
    ppuStack_9e8 = (ulong **)ppplVar25;
    ppuStack_7f0 = ppuStack_a50;
    ppuStack_7e8 = ppuStack_a48;
    ppuStack_7e0 = ppuStack_a40;
    ppuStack_7d8 = ppuStack_a38;
    ppuStack_7d0 = (ulong **)ppplVar36;
    ppuStack_7c8 = (ulong **)ppplVar39;
    ppuStack_7c0 = (ulong **)ppplVar45;
    ppuStack_7b8 = (ulong **)ppplVar49;
    ppuStack_7b0 = (ulong **)ppplVar42;
    ppuStack_7a8 = (ulong **)ppplVar35;
    ppuStack_7a0 = (ulong **)ppplVar34;
    ppuStack_798 = (ulong **)ppplVar48;
    ppuStack_790 = (ulong **)ppplVar24;
    ppuStack_788 = (ulong **)ppplVar25;
    func_0x00010154cfe0(alStack_2500[0],&ppuStack_7f0,ppplStack_2400);
    FUN_101553720(&ppuStack_a50);
    func_0x0001015545c8(lVar31,0x112db3cc8,&UNK_10d98e570);
    func_0x000101554364(lVar14,lVar31,0x112db3cc8,&UNK_10d98e570);
    (*pcVar44)(lVar12,1,1,lVar11);
    pppplVar22 = (long ****)pppuStack_2488;
    lVar29 = (long)*(int *)(alStack_24b0[1] + 0x30);
    func_0x000101554514(lVar31,pppuStack_2488,0x112db3cc8,&UNK_10d98e570);
    func_0x000101554514(lVar12,(long)pppplVar22 + lVar29,0x112db3cc8,&UNK_10d98e570);
    pcVar38 = *(code **)(lVar21 + 0x30);
    pppplVar17 = pppplVar22;
    (*pcVar38)(pppplVar22,1,lVar11);
    lVar14 = lStack_2410;
    lVar20 = lStack_2418;
    lVar30 = alStack_2598[7];
    if ((int)pppplVar17 == 1) {
      func_0x0001015545c8(lVar12,0x112db3cc8,&UNK_10d98e570);
      lVar29 = (long)pppplVar22 + lVar29;
      (*pcVar38)(lVar29,1,lVar11);
      if ((int)lVar29 == 1) {
        uVar46 = 0x112db3cc8;
        puVar50 = &UNK_10d98e570;
        goto code_r0x000101548c68;
      }
code_r0x000101548440:
      func_0x0001015545c8(pppplVar22,0x112db3ca0,&UNK_10d95e200);
    }
    else {
      func_0x000101554514(pppplVar22,alStack_2598[7],0x112db3cc8,&UNK_10d98e570);
      lVar12 = (long)pppplVar22 + lVar29;
      (*pcVar38)(lVar12,1,lVar11);
      lVar11 = alStack_2598[2];
      if ((int)lVar12 == 1) {
        func_0x0001015545c8(lStack_2468,0x112db3cc8,&UNK_10d98e570);
        func_0x0001015543dc(lVar30,&SUB_10475cf44);
        lVar13 = lStack_23f8;
        goto code_r0x000101548440;
      }
      func_0x000101554754((long)pppplVar22 + lVar29,alStack_2598[2],&SUB_10475cf44);
      uVar28 = lVar30;
      func_0x00010475cfc4(lVar30,lVar11);
      func_0x0001015543dc(lVar11,&SUB_10475cf44);
      func_0x0001015545c8(lStack_2468,0x112db3cc8,&UNK_10d98e570);
      func_0x0001015543dc(lVar30,&SUB_10475cf44);
      lVar14 = lStack_2410;
      func_0x0001015545c8(pppplVar22,0x112db3cc8,&UNK_10d98e570);
      lVar13 = lStack_23f8;
      if ((uVar28 & 1) != 0) goto code_r0x000101548c6c;
    }
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppplStack_2370 = (long ***)0xf000000000000000;
    uVar46 = 0x11;
    goto code_r0x0001015498e4;
  case 0xc:
    ppuStack_1b98 = ppuStack_188;
    ppuStack_1ba0 = ppuStack_190;
    ppuStack_1b88 = ppuStack_178;
    ppuStack_1b90 = ppuStack_180;
    uStack_1b78 = uStack_168;
    ppuStack_1b80 = ppuStack_170;
    uStack_1b77 = uStack_167;
    uStack_1b70 = uStack_160;
    ppuStack_1bd8 = ppuStack_1c8;
    ppuStack_1be0 = ppuStack_1d0;
    ppuStack_1bc8 = ppuStack_1b8;
    ppuStack_1bd0 = ppuStack_1c0;
    ppuStack_1bb8 = ppuStack_1a8;
    ppuStack_1bc0 = ppuStack_1b0;
    ppuStack_1ba8 = ppuStack_198;
    ppuStack_1bb0 = ppuStack_1a0;
    ppuStack_1c18 = ppuStack_208;
    ppuStack_1c20 = ppuStack_210;
    ppuStack_1c08 = ppuStack_1f8;
    ppuStack_1c10 = ppuStack_200;
    ppuStack_1bf8 = ppuStack_1e8;
    ppuStack_1c00 = ppuStack_1f0;
    ppuStack_1be8 = ppuStack_1d8;
    ppuStack_1bf0 = ppuStack_1e0;
    ppuStack_1c38 = ppuStack_228;
    ppuStack_1c40 = ppuStack_230;
    ppuStack_1c28 = ppuStack_218;
    ppuStack_1c30 = ppuStack_220;
    ppuStack_16d8 = ppuStack_188;
    ppuStack_16e0 = ppuStack_190;
    ppuStack_16c8 = ppuStack_178;
    ppuStack_16d0 = ppuStack_180;
    uStack_16b8 = uStack_168;
    ppuStack_16c0 = ppuStack_170;
    uStack_16b7 = uStack_167;
    uStack_16b0 = uStack_160;
    ppuStack_1718 = ppuStack_1c8;
    ppuStack_1720 = ppuStack_1d0;
    ppuStack_1708 = ppuStack_1b8;
    ppuStack_1710 = ppuStack_1c0;
    ppuStack_16f8 = ppuStack_1a8;
    ppuStack_1700 = ppuStack_1b0;
    ppuStack_16e8 = ppuStack_198;
    ppuStack_16f0 = ppuStack_1a0;
    ppuStack_1758 = ppuStack_208;
    ppuStack_1760 = ppuStack_210;
    ppuStack_1748 = ppuStack_1f8;
    ppuStack_1750 = ppuStack_200;
    ppuStack_1738 = ppuStack_1e8;
    ppuStack_1740 = ppuStack_1f0;
    ppuStack_1728 = ppuStack_1d8;
    ppuStack_1730 = ppuStack_1e0;
    ppuStack_1778 = ppuStack_228;
    ppplStack_1780 = (long ***)ppuStack_230;
    ppuStack_1768 = ppuStack_218;
    ppuStack_1770 = ppuStack_220;
    pppuVar27 = &ppuStack_1c40;
    uStack_16af = uStack_1b6f;
    uStack_16a8 = uStack_1b68;
    func_0x000101551adc();
    if ((int)pppuVar27 == 0xc) {
      pppplVar22 = &ppplStack_1780;
      FUN_10155371c();
      pppuVar27 = (ulong ***)*pppplVar22;
      ppuStack_2390 = (ulong **)pppplVar22[1];
      ppuStack_2380 = (ulong **)pppplVar22[2];
      func_0x000101554514(&ppuStack_230,&ppuStack_7f0,0x112db3cf0,&UNK_10d95e250);
    }
    else {
      FUN_101603e54();
    }
    lVar13 = lStack_23f8;
    lVar14 = lStack_2410;
    lVar20 = lStack_2418;
    lVar31 = lStack_2420;
    pppuVar16 = pppuVar27;
    FUN_10155c728();
    ppplStack_2400 = (long ***)pppuVar16;
    func_0x000107c6142c(pppuVar27);
    func_0x00010006c090(ppuStack_2390,ppuStack_2380);
    ppuStack_23d0 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppplStack_2370 = (long ***)0xf000000000000000;
    uVar46 = 0x13;
code_r0x0001015498e4:
    ppuStack_2378 = (ulong **)0x1;
    ppuStack_2380 = (ulong **)0x0;
    ppuStack_2388 = (ulong **)0x0;
    ppuStack_2390 = (ulong **)0x0;
    puVar50 = (undefined *)0x0;
    ppuStack_2430 = (ulong **)0x0;
    ppuStack_2440 = (ulong **)0x0;
    ppplStack_2448 = (long ***)0x0;
    ppuStack_2450 = (ulong **)0x0;
    pppuVar27 = (ulong ***)0x1;
    ppuStack_23a8 = (ulong **)0x0;
    ppuStack_23b0 = (ulong **)0x0;
    ppuStack_2398 = (ulong **)0x0;
    ppuStack_23a0 = (ulong **)0x0;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d80 = ppuStack_2f8;
    ppuStack_d78 = ppuStack_2f0;
    break;
  case 0xd:
    uStack_1b6f = uVar6;
    uStack_1b68 = uVar41;
    FUN_1015cadc8(&ppuStack_1c40);
    pppplVar22 = &ppplStack_1780;
    func_0x000107c610b4(pppplVar22,param_1,0x150);
    FUN_10153befc();
    func_0x000100075890(&ppuStack_7f0,0,0,&UNK_1103e3f30,PTR___s10Foundation4DataVN_110350ae0,
                        pppplVar22,&PTR_DAT_110789f58);
    ppuVar37 = ppuStack_7e8;
    ppuVar26 = ppuStack_7f0;
    lVar31 = lStack_2408;
    lVar30 = alStack_24b0[2];
    lVar14 = alStack_2518[1];
    func_0x00010154d278(alStack_2518[1],&ppuStack_1c40,ppplStack_2400,ppuStack_7f0,ppuStack_7e8);
    func_0x0001000b44c0(ppuVar26,ppuVar37);
    FUN_101551ae4(&ppuStack_1c40);
    func_0x0001015545c8(lVar31,0x112db3cc0,&UNK_10d95e220);
    func_0x000101554364(lVar14,lVar31,0x112db3cc0,&UNK_10d95e220);
    lVar29 = alStack_2500[1];
    (*pcVar38)(alStack_2500[1],1,1,puVar10);
    lVar20 = (long)*(int *)(alStack_24b0[0] + 0x30);
    func_0x000101554514(lVar31,lVar30,0x112db3cc0,&UNK_10d95e220);
    func_0x000101554514(lVar29,lVar30 + lVar20,0x112db3cc0,&UNK_10d95e220);
    pcVar38 = *(code **)(lVar19 + 0x30);
    lVar11 = lVar30;
    (*pcVar38)(lVar30,1,puVar10);
    lVar31 = lStack_2420;
    lVar14 = alStack_2598[6];
    if ((int)lVar11 == 1) {
      func_0x0001015545c8(lVar29,0x112db3cc0,&UNK_10d95e220);
      lVar20 = lVar30 + lVar20;
      (*pcVar38)(lVar20,1,puVar10);
      lVar13 = lStack_23f8;
      lVar14 = lStack_2410;
      if ((int)lVar20 == 1) {
        func_0x0001015545c8(lVar30,0x112db3cc0,&UNK_10d95e220);
code_r0x000101549390:
        func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
        func_0x0001015545c8(lVar31,0x112db3cc8,&UNK_10d98e570);
        func_0x0001015545c8(lStack_2418,0x112db3cd0,&UNK_10d95e230);
        goto code_r0x0001015493ec;
      }
code_r0x0001015488cc:
      lVar14 = lStack_2410;
      func_0x0001015545c8(lVar30,0x112db3c98,&UNK_10dd33f00);
    }
    else {
      func_0x000101554514(lVar30,alStack_2598[6],0x112db3cc0,&UNK_10d95e220);
      lVar11 = lVar30 + lVar20;
      (*pcVar38)(lVar11,1,puVar10);
      lVar13 = lStack_23f8;
      lVar12 = alStack_2598[1];
      if ((int)lVar11 == 1) {
        func_0x0001015545c8(lVar29,0x112db3cc0,&UNK_10d95e220);
        func_0x0001015543dc(lVar14,&SUB_104750be8);
        goto code_r0x0001015488cc;
      }
      func_0x000101554754(lVar30 + lVar20,alStack_2598[1],&SUB_104750be8);
      uVar28 = lVar14;
      func_0x000104750c20(lVar14,lVar12);
      func_0x0001015543dc(lVar12,&SUB_104750be8);
      func_0x0001015545c8(lVar29,0x112db3cc0,&UNK_10d95e220);
      func_0x0001015543dc(lVar14,&SUB_104750be8);
      func_0x0001015545c8(lVar30,0x112db3cc0,&UNK_10d95e220);
      lVar14 = lStack_2410;
      if ((uVar28 & 1) != 0) goto code_r0x000101549390;
    }
    ppplStack_2400 = (long ***)0x0;
    ppuStack_23d0 = (ulong **)0x0;
    ppuStack_2430 = (ulong **)0x0;
    ppplStack_2448 = (long ***)0x0;
    ppuStack_2440 = (ulong **)0x0;
    ppplStack_2458 = (long ***)0x0;
    ppuStack_2450 = (ulong **)0x0;
    puVar50 = (undefined *)0x0;
    uStack_ce8 = uStack_260;
    ppuStack_cf0 = ppuStack_268;
    uStack_cd8 = uStack_250;
    uStack_ce0 = uStack_258;
    uStack_cc8 = uStack_240;
    uStack_cd0 = uStack_248;
    uStack_cc0 = uStack_238;
    ppuStack_d28 = ppuStack_2a0;
    ppuStack_d30 = ppuStack_2a8;
    ppuStack_d18 = ppuStack_290;
    ppuStack_d20 = ppuStack_298;
    ppuStack_d08 = ppuStack_280;
    ppuStack_d10 = ppuStack_288;
    ppuStack_cf8 = ppuStack_270;
    ppuStack_d00 = ppuStack_278;
    ppuStack_d68 = ppuStack_2e0;
    ppuStack_d70 = ppuStack_2e8;
    ppuStack_d58 = ppuStack_2d0;
    ppuStack_d60 = ppuStack_2d8;
    ppuStack_d48 = ppuStack_2c0;
    ppuStack_d50 = ppuStack_2c8;
    ppuStack_d38 = ppuStack_2b0;
    ppuStack_d40 = ppuStack_2b8;
    ppuStack_da8 = ppuStack_320;
    ppuStack_db0 = ppuStack_328;
    ppuStack_d98 = ppuStack_310;
    ppuStack_da0 = ppuStack_318;
    ppuStack_2388 = (ulong **)0x0;
    ppuStack_2390 = (ulong **)0x0;
    ppuStack_2378 = (ulong **)0x1;
    ppuStack_2380 = (ulong **)0x0;
    ppplStack_2370 = (long ***)0xf000000000000000;
    pppuVar27 = (ulong ***)0x1;
    uVar46 = 0x14;
    ppuStack_d88 = ppuStack_300;
    ppuStack_d90 = ppuStack_308;
    ppuStack_d78 = ppuStack_2f0;
    ppuStack_d80 = ppuStack_2f8;
    ppuStack_23a8 = (ulong **)0x0;
    ppuStack_23b0 = (ulong **)0x0;
    ppuStack_2398 = (ulong **)0x0;
    ppuStack_23a0 = (ulong **)0x0;
    lVar20 = lStack_2418;
  }
  func_0x000101554514(lVar14,(long)puVar33 + (long)*(int *)(lVar9 + 0x14),0x112db3ce0,&UNK_10d95e240
                     );
  func_0x000101554514(lVar13,(long)puVar33 + (long)*(int *)(lVar9 + 0x18),0x112db3cd8,&UNK_10dd317d0
                     );
  func_0x000107c610b4(&ppplStack_1780,auStack_cb0,0x260);
  func_0x000101554514(lVar20,(long)puVar33 + (long)*(int *)(lVar9 + 0x20),0x112db3cd0,&UNK_10d95e230
                     );
  func_0x000101554514(lVar31,(long)puVar33 + (long)*(int *)(lVar9 + 0x38),0x112db3cc8,&UNK_10d98e570
                     );
  func_0x000101554514(lStack_2408,(long)puVar33 + (long)*(int *)(lVar9 + 0x40),0x112db3cc0,
                      &UNK_10d95e220);
  uVar28 = param_1[0x27];
  uVar5 = param_1[0x28];
  uVar40 = param_1[0x29];
  uVar32 = uVar40 >> 0x3c;
  lVar14 = 0;
  if (uVar32 < 0xf) {
    lVar14 = (long)(int)uVar28;
  }
  uVar3 = 0;
  if (uVar32 < 0xf) {
    uVar3 = uVar5;
  }
  uVar4 = 0xc000000000000000;
  if (uVar32 < 0xf) {
    uVar4 = uVar40;
  }
  func_0x000101554514(&ppplStack_1780,&ppuStack_1020,0x112db3ce8,&UNK_10d98ff60);
  FUN_100cb4f08(uVar28,uVar5,uVar40);
  func_0x00010006c090(uVar3,uVar4);
  pppuVar16 = &ppuStack_1020;
  func_0x000107c610b4(pppuVar16,param_1,0x150);
  FUN_10153befc();
  func_0x000100075890(&uStack_2360,0,0,&UNK_1103e3f30,PTR___s10Foundation4DataVN_110350ae0,pppuVar16
                      ,&PTR_DAT_110789f58);
  *puVar33 = ppplStack_2458;
  func_0x000107c610b4((long)puVar33 + (long)*(int *)(lVar9 + 0x1c),&ppplStack_1780,0x260);
  plVar1 = (long *)((long)puVar33 + (long)*(int *)(lVar9 + 0x24));
  *plVar1 = (long)ppplStack_2448;
  plVar1[1] = (long)pppuVar27;
  plVar1[2] = (long)ppuStack_2450;
  plVar1[3] = (long)puVar50;
  puVar2 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x28));
  puVar2[1] = ppuStack_2378;
  *puVar2 = ppuStack_2380;
  puVar2[3] = ppuStack_2388;
  puVar2[2] = ppuStack_2390;
  puVar2[5] = ppuStack_2398;
  puVar2[4] = ppuStack_23a0;
  puVar2[7] = ppuStack_23a8;
  puVar2[6] = ppuStack_23b0;
  puVar2 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x2c));
  *puVar2 = ppuStack_2430;
  puVar2[1] = ppuStack_2440;
  puVar2 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x30));
  puVar2[0x19] = uStack_ce8;
  puVar2[0x18] = ppuStack_cf0;
  puVar2[0x1b] = uStack_cd8;
  puVar2[0x1a] = uStack_ce0;
  puVar2[0x1d] = uStack_cc8;
  puVar2[0x1c] = uStack_cd0;
  puVar2[0x1e] = uStack_cc0;
  puVar2[0x11] = ppuStack_d28;
  puVar2[0x10] = ppuStack_d30;
  puVar2[0x13] = ppuStack_d18;
  puVar2[0x12] = ppuStack_d20;
  puVar2[0x15] = ppuStack_d08;
  puVar2[0x14] = ppuStack_d10;
  puVar2[0x17] = ppuStack_cf8;
  puVar2[0x16] = ppuStack_d00;
  puVar2[9] = ppuStack_d68;
  puVar2[8] = ppuStack_d70;
  puVar2[0xb] = ppuStack_d58;
  puVar2[10] = ppuStack_d60;
  puVar2[0xd] = ppuStack_d48;
  puVar2[0xc] = ppuStack_d50;
  puVar2[0xf] = ppuStack_d38;
  puVar2[0xe] = ppuStack_d40;
  puVar2[1] = ppuStack_da8;
  *puVar2 = ppuStack_db0;
  puVar2[3] = ppuStack_d98;
  puVar2[2] = ppuStack_da0;
  puVar2[5] = ppuStack_d88;
  puVar2[4] = ppuStack_d90;
  puVar2[7] = ppuStack_d78;
  puVar2[6] = ppuStack_d80;
  puVar2 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x34));
  *puVar2 = ppuStack_23d0;
  puVar2[1] = ppplStack_2370;
  *(long ****)((long)puVar33 + (long)*(int *)(lVar9 + 0x3c)) = ppplStack_2400;
  *(undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x44)) = uVar46;
  *(long *)((long)puVar33 + (long)*(int *)(lVar9 + 0x48)) = lVar14;
  puVar2 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar9 + 0x4c));
  puVar2[1] = uStack_2358;
  *puVar2 = uStack_2360;
  func_0x0001048264b8(0);
  func_0x000107c610f8();
  func_0x000104822c20(puVar33);
  func_0x0001015545c8(lStack_2408,0x112db3cc0,&UNK_10d95e220);
  func_0x0001015545c8(lStack_2420,0x112db3cc8,&UNK_10d98e570);
  func_0x0001015545c8(lStack_2418,0x112db3cd0,&UNK_10d95e230);
  func_0x0001015545c8(lStack_23f8,0x112db3cd8,&UNK_10dd317d0);
  func_0x0001015545c8(lStack_2410,0x112db3ce0,&UNK_10d95e240);
LAB_101549c1c:
  func_0x0001015545c8(auStack_cb0,0x112db3ce8,&UNK_10d98ff60);
  return puVar33;
}



/* Entry: 101549c64; end: 10154ae27;  */

void FUN_101549c64(long *param_1,float param_2,long *param_3,long *param_4,long param_5,
                  long *param_6)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 extraout_x13;
  long *extraout_x14;
  long *extraout_x15;
  long unaff_x20;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_220;
  code *pcStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined1 auStack_198 [40];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [104];
  undefined1 auStack_d0 [96];
  
  plVar4 = (long *)0x0;
  func_0x000107c5ede0();
  lStack_1a8 = plVar4[-1];
  plStack_1b0 = plVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1a8 + 0x40));
  plVar5 = (long *)((long)&uStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar4 = (long *)0x112d7e680;
  plStack_1c8 = plVar5;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  plStack_1b8 = plVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar4[-1] + 0x40));
  lVar21 = (long)plVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar21 - extraout_x12;
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar5 = (long *)((((lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00) -
                    extraout_x12_01) - extraout_x12_02);
  plVar4 = plVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)plVar5 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar20 - extraout_x12_04;
  if (param_5 == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      func_0x000107c4be2c();
    }
LAB_101549fe4:
    lVar16 = 0;
    func_0x000104739264();
                    /* WARNING: Could not recover jumptable at 0x00010154a024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(param_1,1,1,lVar16);
    return;
  }
  plVar5 = param_3;
  plVar12 = param_4;
  uStack_208 = extraout_x13;
  lStack_200 = lVar21;
  plStack_1f8 = extraout_x15;
  plStack_1f0 = extraout_x14;
  plStack_1d0 = plVar4;
  plStack_1c0 = param_6;
  func_0x000103583548(param_3,param_4,param_5);
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6142c(plVar12);
  uVar2 = (ulong)plVar5 & 0xffffffffffff;
  if (((ulong)plVar12 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)plVar12 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      func_0x000107c4be2c();
    }
    func_0x000101553b38(param_3,param_4,param_5);
    goto LAB_101549fe4;
  }
  plStack_1e8 = param_1;
  plStack_1e0 = param_3;
  plStack_1d8 = param_4;
  func_0x000103583548(param_3,param_4,param_5);
  func_0x000107c5edd0(lVar16);
  func_0x000107c6142c(param_4);
  lVar6 = lStack_1a8;
  plVar5 = plStack_1b0;
  pcStack_218 = *(code **)(lStack_1a8 + 0x38);
  (*pcStack_218)(lVar20,1,1,plStack_1b0);
  lVar21 = (long)(int)plStack_1b8[6];
  func_0x000101554514(lVar16,lVar18,0x112d36580,&UNK_10d9016d0);
  func_0x000101554514(lVar20,lVar18 + lVar21,0x112d36580,&UNK_10d9016d0);
  pcVar17 = *(code **)(lVar6 + 0x30);
  lVar6 = lVar18;
  (*pcVar17)(lVar18,1,plVar5);
  plVar4 = plStack_1d0;
  pcStack_210 = pcVar17;
  if ((int)lVar6 == 1) {
    func_0x0001015545c8(lVar20,0x112d36580,&UNK_10d9016d0);
    func_0x0001015545c8(lVar16,0x112d36580,&UNK_10d9016d0);
    lVar21 = lVar18 + lVar21;
    (*pcVar17)(lVar21,1,plVar5);
    plVar4 = plStack_1e0;
    if ((int)lVar21 != 1) {
LAB_10154a0a4:
      plVar5 = plStack_1c0;
      plVar4 = plStack_1e0;
      func_0x0001015545c8(lVar18,0x112d7e680,&UNK_10d95e350);
      goto LAB_10154a0c4;
    }
    func_0x0001015545c8(lVar18,0x112d36580,&UNK_10d9016d0);
LAB_10154a3a0:
    lVar16 = *(long *)(unaff_x20 + 0x18);
    plVar12 = plStack_1e8;
    plVar11 = plStack_1d8;
joined_r0x00010154a678:
    if (lVar16 != 0) {
      func_0x000107c4be2c();
    }
    func_0x000101553b38(plVar4,plVar11,param_5);
    lVar16 = 0;
    func_0x000104739264();
    pcVar17 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
    uVar15 = 1;
  }
  else {
    func_0x000101554514(lVar18,plStack_1d0,0x112d36580,&UNK_10d9016d0);
    lVar6 = lVar18 + lVar21;
    (*pcVar17)(lVar6,1,plVar5);
    lVar3 = lStack_1a8;
    plVar12 = plStack_1c8;
    if ((int)lVar6 == 1) {
      func_0x0001015545c8(lVar20,0x112d36580,&UNK_10d9016d0);
      func_0x0001015545c8(lVar16,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lStack_1a8 + 8))(plVar4,plVar5);
      goto LAB_10154a0a4;
    }
    plVar11 = plStack_1c8;
    (**(code **)(lStack_1a8 + 0x20))(plStack_1c8,lVar18 + lVar21,plVar5);
    FUN_101553b98();
    plVar19 = plVar4;
    func_0x000107c5fab8(plVar4,plVar12,plVar5,plVar11);
    uStack_220._4_4_ = (uint)plVar19;
    pcVar17 = *(code **)(lVar3 + 8);
    (*pcVar17)(plVar12,plVar5);
    func_0x0001015545c8(lVar20,0x112d36580,&UNK_10d9016d0);
    func_0x0001015545c8(lVar16,0x112d36580,&UNK_10d9016d0);
    (*pcVar17)(plVar4,plVar5);
    func_0x0001015545c8(lVar18,0x112d36580,&UNK_10d9016d0);
    plVar4 = plStack_1e0;
    plVar5 = plStack_1c0;
    if ((uStack_220._4_4_ & 1) != 0) goto LAB_10154a3a0;
LAB_10154a0c4:
    plVar11 = plStack_1d8;
    plVar12 = plStack_1e8;
    plVar19 = plVar4;
    plVar7 = plStack_1d8;
    func_0x00010358343c(plVar4,plStack_1d8,param_5);
    if (((uint)plVar7 & 0xff) == 1) {
      if ((long)plVar19 < 2) {
        if (plVar19 != (long *)0x0) {
LAB_10154a45c:
          plVar5 = plVar4;
          plVar7 = plVar11;
          func_0x0001035833f0(plVar4,plVar11,param_5);
          func_0x000107c6142c(plVar7);
          uVar2 = (ulong)plVar5 & 0xffffffffffff;
          if (((ulong)plVar7 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)plVar7 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            lVar16 = *(long *)(unaff_x20 + 0x18);
            goto joined_r0x00010154a678;
          }
          plStack_1d0 = plVar19;
          func_0x0001035833f0(plVar4,plVar11,param_5);
          plVar19 = plStack_1f0;
          func_0x000107c5edd0(plStack_1f0);
          func_0x000107c6142c(plVar11);
          plVar11 = plStack_1b0;
          plVar5 = plStack_1f8;
          (*pcStack_218)(plStack_1f8,1,1,plStack_1b0);
          lVar18 = lStack_200;
          lVar16 = plStack_1b8[6];
          func_0x000101554514(plVar19,lStack_200,0x112d36580,&UNK_10d9016d0);
          plStack_1b8 = (long *)(long)(int)lVar16;
          func_0x000101554514(plVar5,lVar18 + (int)lVar16,0x112d36580,&UNK_10d9016d0);
          pcVar17 = pcStack_210;
          lVar16 = lVar18;
          (*pcStack_210)(lVar18,1,plVar11);
          if ((int)lVar16 == 1) {
            func_0x0001015545c8(plVar5,0x112d36580,&UNK_10d9016d0);
            func_0x0001015545c8(plVar19,0x112d36580,&UNK_10d9016d0);
            lVar16 = lVar18 + (long)plStack_1b8;
            (*pcVar17)(lVar16,1,plVar11);
            if ((int)lVar16 != 1) {
LAB_10154a650:
              plVar5 = plStack_1c0;
              func_0x0001015545c8(lVar18,0x112d7e680,&UNK_10d95e350);
              plVar11 = plStack_1d8;
              plVar19 = plStack_1d0;
              goto LAB_10154a0f8;
            }
            func_0x0001015545c8(lVar18,0x112d36580,&UNK_10d9016d0);
          }
          else {
            func_0x000101554514(lVar18,uStack_208,0x112d36580,&UNK_10d9016d0);
            plVar19 = plStack_1b8;
            lVar16 = lVar18 + (long)plStack_1b8;
            (*pcVar17)(lVar16,1,plVar11);
            lVar20 = lStack_1a8;
            plVar5 = plStack_1c8;
            if ((int)lVar16 == 1) {
              func_0x0001015545c8(plStack_1f8,0x112d36580,&UNK_10d9016d0);
              func_0x0001015545c8(plStack_1f0,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lStack_1a8 + 8))(uStack_208,plVar11);
              goto LAB_10154a650;
            }
            plVar4 = plStack_1c8;
            (**(code **)(lStack_1a8 + 0x20))(plStack_1c8,lVar18 + (long)plVar19,plVar11);
            FUN_101553b98();
            uVar15 = uStack_208;
            func_0x000107c5fab8(uStack_208,plVar5,plVar11,plVar4);
            plVar4 = plStack_1e0;
            plStack_1b8 = (long *)CONCAT44(plStack_1b8._4_4_,(int)uVar15);
            pcVar17 = *(code **)(lVar20 + 8);
            (*pcVar17)(plVar5,plVar11);
            func_0x0001015545c8(plStack_1f8,0x112d36580,&UNK_10d9016d0);
            func_0x0001015545c8(plStack_1f0,0x112d36580,&UNK_10d9016d0);
            (*pcVar17)(uStack_208,plVar11);
            func_0x0001015545c8(lVar18,0x112d36580,&UNK_10d9016d0);
            plVar11 = plStack_1d8;
            plVar19 = plStack_1d0;
            plVar5 = plStack_1c0;
            if (((ulong)plStack_1b8 & 1) == 0) goto LAB_10154a0f8;
          }
          lVar16 = *(long *)(unaff_x20 + 0x18);
          plVar11 = plStack_1d8;
          goto joined_r0x00010154a678;
        }
      }
      else {
        if (plVar19 != (long *)0x2) goto LAB_10154a45c;
        plVar19 = plVar4;
        plVar7 = plVar11;
        func_0x0001035833a4(plVar4,plVar11,param_5);
        func_0x000107c6142c(plVar7);
        uVar2 = (ulong)plVar19 & 0xffffffffffff;
        if (((ulong)plVar7 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)plVar7 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          lVar16 = *(long *)(unaff_x20 + 0x18);
          goto joined_r0x00010154a678;
        }
        plVar19 = (long *)0x2;
      }
    }
    else {
      plVar19 = (long *)0x0;
    }
LAB_10154a0f8:
    func_0x00010154dbc8(unaff_x20,plVar4,plVar11,param_5,plVar5);
    plVar7 = plVar4;
    plVar13 = plVar11;
    lStack_1a8 = unaff_x20;
    func_0x000103583548(plVar4,plVar11,param_5);
    plVar8 = plVar4;
    plVar14 = plVar11;
    plStack_1b8 = plVar13;
    plStack_1b0 = plVar7;
    func_0x000103583594(plVar4,plVar11,param_5);
    plVar7 = plVar4;
    plVar13 = plVar11;
    plStack_1d0 = plVar14;
    plStack_1c8 = plVar8;
    func_0x0001035833a4(plVar4,plVar11,param_5);
    plVar8 = plVar4;
    plVar14 = plVar11;
    plStack_1e0 = plVar13;
    plStack_1d8 = plVar7;
    func_0x0001035833f0(plVar4,plVar11,param_5);
    plStack_1f0 = plVar14;
    plStack_1e8 = plVar8;
    func_0x00010358347c(auStack_198,plVar4,plVar11,param_5);
    FUN_10155c10c(&lStack_170,auStack_198,plVar19 != (long *)0x2,plVar5);
    func_0x000101553ad0(auStack_198);
    plVar5 = plVar4;
    plVar8 = plVar11;
    func_0x0001035835e0(plVar4,plVar11,param_5);
    plVar7 = plVar4;
    plVar13 = plVar11;
    plStack_1f8 = plVar8;
    plStack_1c0 = plVar5;
    func_0x00010358362c(plVar4,plVar11,param_5);
    func_0x0001035836ac(auStack_138,plVar4,plVar11,param_5);
    lVar16 = 0;
    func_0x000104739264();
    FUN_10154e030((long)plVar12 + (long)*(int *)(lVar16 + 0x34),auStack_138);
    func_0x000101553b04(auStack_138);
    func_0x0001035837d0(auStack_d0,plVar4,plVar11,param_5);
    FUN_10155187c(auStack_d0);
    puVar9 = auStack_d0;
    FUN_101551908();
    puVar10 = auStack_d0;
    func_0x000101551990();
    func_0x000101553b38(plVar4,plVar11,param_5);
    func_0x000101553b64(auStack_d0);
    plVar12[10] = lStack_168;
    plVar12[9] = lStack_170;
    *plVar12 = (long)plStack_1b0;
    plVar12[1] = (long)plStack_1b8;
    plVar12[2] = (long)plStack_1c8;
    plVar12[3] = (long)plStack_1d0;
    plVar12[4] = (long)plStack_1d8;
    plVar12[5] = (long)plStack_1e0;
    plVar12[6] = (long)plStack_1e8;
    plVar12[7] = (long)plStack_1f0;
    plVar12[8] = (long)plVar19;
    plVar12[0xc] = lStack_158;
    plVar12[0xb] = lStack_160;
    plVar12[0xe] = lStack_148;
    plVar12[0xd] = lStack_150;
    plVar12[0xf] = lStack_140;
    plVar12[0x10] = (long)plStack_1c0;
    plVar12[0x11] = (long)plStack_1f8;
    plVar12[0x12] = (ulong)(((uint)plVar13 & 0xff) == 1 && plVar7 != (long *)0x0);
    plVar12[0x13] = lStack_1a8;
    pdVar1 = (double *)((long)plVar12 + (long)*(int *)(lVar16 + 0x38));
    *pdVar1 = (double)param_2;
    pdVar1[1] = (double)puVar9;
    pdVar1[2] = (double)puVar10;
    *(undefined1 *)(pdVar1 + 3) = 0;
    pcVar17 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
    uVar15 = 0;
  }
  (*pcVar17)(plVar12,uVar15,1,lVar16);
  return;
}



/* Entry: 10154ae28; end: 10154c53f;  */

/* WARNING: Removing unreachable block (ram,0x00010154b820) */

void FUN_10154ae28(undefined8 param_1,byte ******param_2,byte ****param_3,undefined *param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  double dVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  byte ******ppppppbVar18;
  byte ******ppppppbVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  byte ****ppppbVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte ****ppppbVar27;
  byte ****ppppbVar28;
  byte ******ppppppbVar29;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar30;
  byte ******ppppppbVar31;
  byte *****pppppbVar32;
  long lVar33;
  long lVar34;
  byte *****pppppbVar35;
  long lVar36;
  long alStack_ce0 [2];
  byte abStack_cd0 [8];
  long lStack_cc8;
  byte abStack_cc0 [8];
  long alStack_cb8 [4];
  double dStack_c98;
  ulong uStack_c90;
  double dStack_c88;
  undefined2 auStack_c80 [4];
  ulong auStack_c78 [8];
  byte abStack_c38 [8];
  long lStack_c30;
  byte abStack_c28 [8];
  long alStack_c20 [2];
  byte abStack_c10 [8];
  long lStack_c08;
  byte abStack_c00 [8];
  long alStack_bf8 [3];
  byte ****ppppbStack_be0;
  byte *****pppppbStack_bd8;
  byte ***pppbStack_bd0;
  byte *****pppppbStack_bc8;
  byte ***pppbStack_bc0;
  byte *****pppppbStack_bb8;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined8 uStack_ba8;
  long lStack_ba0;
  undefined4 uStack_b94;
  byte *****pppppbStack_b90;
  undefined8 uStack_b88;
  ulong uStack_b80;
  undefined8 uStack_b78;
  ulong uStack_b70;
  undefined8 uStack_b68;
  ulong uStack_b60;
  ulong uStack_b58;
  uint uStack_b4c;
  double dStack_b48;
  ulong uStack_b40;
  double dStack_b38;
  undefined *puStack_b30;
  ulong uStack_b28;
  ulong uStack_b20;
  byte *****pppppbStack_b18;
  byte *****pppppbStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  byte *****pppppbStack_ad0;
  ulong uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  ulong uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined2 uStack_a68;
  undefined6 uStack_a66;
  undefined2 uStack_a60;
  undefined8 uStack_a5e;
  byte *****pppppbStack_870;
  ulong uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  ulong uStack_850;
  undefined5 uStack_848;
  undefined3 uStack_843;
  undefined5 uStack_840;
  undefined3 uStack_83b;
  undefined4 uStack_838;
  undefined1 uStack_834;
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
  byte *****pppppbStack_7a0;
  ulong uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  ulong uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_72e;
  undefined8 uStack_718;
  undefined8 uStack_710;
  ulong uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [328];
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 auStack_568 [24];
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  byte ****ppppbStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  byte *****pppppbStack_4e0;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  undefined5 uStack_4b8;
  undefined3 uStack_4b3;
  undefined5 uStack_4b0;
  undefined8 uStack_4ab;
  undefined1 auStack_4a0 [40];
  undefined1 auStack_478 [48];
  undefined1 auStack_448 [56];
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e0 [40];
  byte *****pppppbStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  byte *****pppppbStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_31e;
  byte *****pppppbStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined5 uStack_2e8;
  undefined3 uStack_2e3;
  undefined5 uStack_2e0;
  ulong uStack_2db;
  byte *****pppppbStack_2d0;
  ulong uStack_2c8;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined2 uStack_256;
  undefined1 uStack_254;
  byte ****ppppbVar26;
  
  uVar9 = 0;
  uStack_b00 = param_5;
  func_0x000107c5ede0();
  uStack_b20 = *(ulong *)(uVar9 - 8);
  uStack_af8 = uVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_b20 + 0x40));
  lVar34 = (long)&ppppbStack_be0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar33 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar33 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = 0x112d36580;
  pppppbStack_b18 = (byte *****)(lVar34 - extraout_x8_00);
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
  uVar9 = (long)(lVar34 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = uVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar36 = lVar30 - extraout_x12_00;
  ppppppbVar29 = param_2;
  ppppbVar23 = param_3;
  FUN_101641710(&uStack_718,param_2,param_3,param_4);
  uStack_3f8 = uStack_700;
  uStack_400 = uStack_708;
  uStack_408 = uStack_710;
  uStack_410 = uStack_718;
  uStack_3f0 = uStack_6f8;
  if (uStack_708 >> 0x3c < 0xf) {
    func_0x000101553efc(&uStack_410,auStack_3e0);
    func_0x000101553efc(auStack_3e0,&pppppbStack_3b8);
    func_0x00010006c00c(uStack_3b0,uStack_3a8);
    func_0x0001015545c8(&uStack_718,0x112db3e28,&UNK_10d95e380);
    uVar9 = uStack_3b0;
    uVar21 = uStack_3a8;
    ppppppbVar31 = (byte ******)pppppbStack_3b8;
    if (uStack_3a8 >> 0x3c == 0xb) {
LAB_10154b1f8:
      func_0x00010155392c(pppppbStack_3b8,uStack_3b0,uStack_3a8);
      goto LAB_10154b208;
    }
  }
  else {
    func_0x000104041e50();
    if (((ulong)ppppppbVar29 & 1) == 0) {
      ppppppbVar29 = param_2;
      FUN_1016415c4(param_2,param_3,param_4);
      if (((ulong)ppppppbVar29 & 1) == 0) {
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          func_0x000107c4be2c();
        }
        uStack_3b0 = 0;
        pppppbStack_3b8 = (byte *****)0x0;
        uStack_3a8 = 0xb000000000000000;
        goto LAB_10154b1f8;
      }
      FUN_1016414e0(&pppppbStack_3b8,param_2,param_3,param_4);
      uVar21 = (ulong)pppppbStack_3b8 & 0xffffffffffff;
      if ((uStack_3b0 & 0x2000000000000000) != 0) {
        uVar21 = uStack_3b0 >> 0x38 & 0xf;
      }
      if (uVar21 == 0) {
        lVar33 = *(long *)(unaff_x20 + 0x18);
joined_r0x00010154b294:
        if (lVar33 != 0) {
          func_0x000107c4be2c();
        }
        FUN_101553ec8(&pppppbStack_3b8);
LAB_10154b208:
        FUN_101551a34(&pppppbStack_2d0);
LAB_10154be84:
        func_0x000107c610b4(param_1,&pppppbStack_2d0,0x260);
        return;
      }
      pppppbStack_b10 = pppppbStack_3b8;
      uStack_b08 = uStack_3b0;
      puStack_b30 = param_4;
      func_0x000107c5edd0(lVar36);
      uVar10 = uStack_af8;
      uVar21 = uStack_b20;
      (**(code **)(uStack_b20 + 0x38))(lVar30,1,1,uStack_af8);
      ppppppbVar29 = (byte ******)pppppbStack_b18;
      iVar2 = *(int *)(lVar33 + 0x30);
      func_0x000101554514(lVar36,pppppbStack_b18,0x112d36580,&UNK_10d9016d0);
      uStack_b28 = (long)iVar2;
      func_0x000101554514(lVar30,(byte *)((long)ppppppbVar29 + (long)iVar2),0x112d36580,
                          &UNK_10d9016d0);
      pcVar6 = *(code **)(uVar21 + 0x30);
      ppppppbVar31 = ppppppbVar29;
      (*pcVar6)(ppppppbVar29,1,uVar10);
      if ((int)ppppppbVar31 == 1) {
        func_0x0001015545c8(lVar30,0x112d36580,&UNK_10d9016d0);
        ppppppbVar29 = (byte ******)pppppbStack_b18;
        func_0x0001015545c8(lVar36,0x112d36580,&UNK_10d9016d0);
        pbVar20 = (byte *)((long)ppppppbVar29 + uStack_b28);
        (*pcVar6)(pbVar20,1,uStack_af8);
        if ((int)pbVar20 == 1) {
          func_0x0001015545c8(ppppppbVar29,0x112d36580,&UNK_10d9016d0);
LAB_10154c00c:
          lVar33 = *(long *)(unaff_x20 + 0x18);
          goto joined_r0x00010154b294;
        }
LAB_10154bf28:
        func_0x0001015545c8(ppppppbVar29,0x112d7e680,&UNK_10d95e350);
      }
      else {
        func_0x000101554514(ppppppbVar29,uVar9,0x112d36580,&UNK_10d9016d0);
        uVar21 = uStack_b28;
        pbVar20 = (byte *)((long)ppppppbVar29 + uStack_b28);
        (*pcVar6)(pbVar20,1,uStack_af8);
        uVar11 = uStack_af8;
        uVar10 = uStack_b20;
        if ((int)pbVar20 == 1) {
          func_0x0001015545c8(lVar30,0x112d36580,&UNK_10d9016d0);
          func_0x0001015545c8(lVar36,0x112d36580,&UNK_10d9016d0);
          (**(code **)(uStack_b20 + 8))(uVar9,uStack_af8);
          goto LAB_10154bf28;
        }
        lVar33 = lVar34;
        (**(code **)(uStack_b20 + 0x20))(lVar34,(byte *)((long)ppppppbVar29 + uVar21),uStack_af8);
        FUN_101553b98();
        uVar21 = uVar9;
        func_0x000107c5fab8(uVar9,lVar34,uVar11,lVar33);
        pcVar6 = *(code **)(uVar10 + 8);
        (*pcVar6)(lVar34,uVar11);
        func_0x0001015545c8(lVar30,0x112d36580,&UNK_10d9016d0);
        func_0x0001015545c8(lVar36,0x112d36580,&UNK_10d9016d0);
        (*pcVar6)(uVar9,uVar11);
        func_0x0001015545c8(ppppppbVar29,0x112d36580,&UNK_10d9016d0);
        if ((uVar21 & 1) != 0) goto LAB_10154c00c;
      }
      param_4 = puStack_b30;
      func_0x000107c61434(uStack_b08);
      FUN_101553ec8(&pppppbStack_3b8);
      ppppppbVar31 = (byte ******)0x0;
      uStack_b28 = 0xb000000000000000;
      uStack_b20 = 0;
      puStack_b30 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_10154b45c;
    }
    func_0x000104041e30();
    ppppbVar27 = (byte ****)((ulong)ppppppbVar29 & 0xffffffffffff);
    ppppbVar28 = (byte ****)((ulong)ppppbVar23 >> 0x38 & 0xf);
    ppppbVar26 = ppppbVar27;
    if (((ulong)ppppbVar23 & 0x2000000000000000) != 0) {
      ppppbVar26 = ppppbVar28;
    }
    if (ppppbVar26 == (byte ****)0x0) {
      func_0x000107c6142c(ppppbVar23);
LAB_10154b408:
      ppppppbVar31 = (byte ******)0x0;
    }
    else {
      if (((ulong)ppppbVar23 >> 0x3c & 1) == 0) {
        if (((ulong)ppppbVar23 >> 0x3d & 1) == 0) {
          if (((ulong)ppppppbVar29 >> 0x3c & 1) == 0) {
            ppppbVar27 = ppppbVar23;
            func_0x000107c60358();
          }
          else {
            ppppppbVar29 = (byte ******)(((ulong)ppppbVar23 & 0xfffffffffffffff) + 0x20);
          }
          if (*(byte *)ppppppbVar29 == 0x2b) {
            if ((long)ppppbVar27 < 1) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10154c08c);
              (*pcVar6)();
            }
            lVar33 = (long)ppppbVar27 - 1;
            if (lVar33 == 0) goto LAB_10154b3ec;
            ppppppbVar31 = (byte ******)0x0;
            do {
              ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1);
              if (((9 < *(byte *)ppppppbVar29 - 0x30) ||
                  (lVar30 = (long)ppppppbVar31 * 10,
                  SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar30 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*(byte *)ppppppbVar29 - 0x30),
                 ppppppbVar31 = (byte ******)(lVar30 + uVar9), SCARRY8(lVar30,uVar9)))
              goto LAB_10154b3ec;
              uVar22 = 0;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
          }
          else if (*(byte *)ppppppbVar29 == 0x2d) {
            if ((long)ppppbVar27 < 1) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10154c084);
              (*pcVar6)();
            }
            lVar33 = (long)ppppbVar27 - 1;
            if (lVar33 == 0) {
LAB_10154b3ec:
              ppppppbVar31 = (byte ******)0x0;
              uVar22 = 1;
            }
            else {
              ppppppbVar31 = (byte ******)0x0;
              do {
                ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1);
                if (((9 < *(byte *)ppppppbVar29 - 0x30) ||
                    (lVar30 = (long)ppppppbVar31 * 10,
                    SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar30 >> 0x3f)) ||
                   (uVar9 = (ulong)(byte)(*(byte *)ppppppbVar29 - 0x30),
                   ppppppbVar31 = (byte ******)(lVar30 - uVar9), SBORROW8(lVar30,uVar9)))
                goto LAB_10154b3ec;
                uVar22 = 0;
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
          }
          else {
            if (ppppbVar27 == (byte ****)0x0) goto LAB_10154b3ec;
            if (ppppppbVar29 == (byte ******)0x0) {
              uVar22 = 0;
              ppppppbVar31 = (byte ******)0x0;
            }
            else {
              ppppppbVar31 = (byte ******)0x0;
              do {
                if (((9 < *(byte *)ppppppbVar29 - 0x30) ||
                    (lVar33 = (long)ppppppbVar31 * 10,
                    SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar33 >> 0x3f)) ||
                   (uVar9 = (ulong)(byte)(*(byte *)ppppppbVar29 - 0x30),
                   ppppppbVar31 = (byte ******)(lVar33 + uVar9), SCARRY8(lVar33,uVar9)))
                goto LAB_10154b3ec;
                uVar22 = 0;
                ppppbVar27 = (byte ****)((long)ppppbVar27 - 1);
                ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1);
              } while (ppppbVar27 != (byte ****)0x0);
            }
          }
        }
        else {
          pppppbStack_2d0 = (byte *****)ppppppbVar29;
          uStack_2c8 = (ulong)ppppbVar23 & 0xffffffffffffff;
          uVar22 = (uint)ppppppbVar29 & 0xff;
          if (uVar22 == 0x2b) {
            if (ppppbVar28 == (byte ****)0x0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10154c090);
              (*pcVar6)();
            }
            lVar33 = (long)ppppbVar28 - 1;
            if (lVar33 == 0) goto LAB_10154b3ec;
            ppppppbVar31 = (byte ******)0x0;
            pbVar20 = (byte *)((ulong)&pppppbStack_2d0 | 1);
            do {
              if (((9 < *pbVar20 - 0x30) ||
                  (lVar30 = (long)ppppppbVar31 * 10,
                  SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar30 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar20 - 0x30),
                 ppppppbVar31 = (byte ******)(lVar30 + uVar9), SCARRY8(lVar30,uVar9)))
              goto LAB_10154b3ec;
              uVar22 = 0;
              lVar33 = lVar33 + -1;
              pbVar20 = pbVar20 + 1;
            } while (lVar33 != 0);
          }
          else if (uVar22 == 0x2d) {
            if (ppppbVar28 == (byte ****)0x0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10154c088);
              (*pcVar6)();
            }
            lVar33 = (long)ppppbVar28 - 1;
            if (lVar33 == 0) goto LAB_10154b3ec;
            ppppppbVar31 = (byte ******)0x0;
            pbVar20 = (byte *)((ulong)&pppppbStack_2d0 | 1);
            do {
              if (((9 < *pbVar20 - 0x30) ||
                  (lVar30 = (long)ppppppbVar31 * 10,
                  SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar30 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar20 - 0x30),
                 ppppppbVar31 = (byte ******)(lVar30 - uVar9), SBORROW8(lVar30,uVar9)))
              goto LAB_10154b3ec;
              uVar22 = 0;
              lVar33 = lVar33 + -1;
              pbVar20 = pbVar20 + 1;
            } while (lVar33 != 0);
          }
          else {
            if (ppppbVar28 == (byte ****)0x0) goto LAB_10154b3ec;
            ppppppbVar31 = (byte ******)0x0;
            ppppppbVar29 = &pppppbStack_2d0;
            do {
              if (((9 < *(byte *)ppppppbVar29 - 0x30) ||
                  (lVar33 = (long)ppppppbVar31 * 10,
                  SUB168(SEXT816((long)ppppppbVar31) * SEXT816(10),8) != lVar33 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*(byte *)ppppppbVar29 - 0x30),
                 ppppppbVar31 = (byte ******)(lVar33 + uVar9), SCARRY8(lVar33,uVar9)))
              goto LAB_10154b3ec;
              uVar22 = 0;
              ppppbVar28 = (byte ****)((long)ppppbVar28 - 1);
              ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1);
            } while (ppppbVar28 != (byte ****)0x0);
          }
        }
      }
      else {
        ppppbVar26 = ppppbVar23;
        FUN_100edba6c();
        uVar22 = (uint)ppppbVar26;
        ppppppbVar31 = ppppppbVar29;
      }
      func_0x000107c6142c(ppppbVar23);
      if ((uVar22 & 0xff) == 1) goto LAB_10154b408;
    }
    uVar9 = 0;
    uVar21 = 0xf000000000000000;
  }
  func_0x000101553910(ppppppbVar31,uVar9,uVar21);
  uStack_b28 = uVar21;
  uStack_b20 = uVar9;
  func_0x00010155392c(ppppppbVar31,uVar9,uVar21);
  func_0x00010155392c(0,0,0xb000000000000000);
  puStack_b30 = (undefined *)0x0;
  pppppbStack_b10 = (byte *****)0x0;
  uStack_b08 = 1;
LAB_10154b45c:
  ppppppbVar29 = param_2;
  FUN_101641980(param_2,param_3,param_4);
  if (((ulong)ppppppbVar29 & 1) == 0) {
    func_0x000101553d74(&pppppbStack_7a0);
  }
  else {
    FUN_1016417ac(auStack_6f0,param_2,param_3,param_4);
    func_0x00010154eb94(&pppppbStack_ad0);
    FUN_101553e90(auStack_6f0);
    uStack_288 = uStack_a88;
    uStack_290 = uStack_a90;
    uStack_278 = uStack_a78;
    uStack_280 = uStack_a80;
    uStack_268 = uStack_a68;
    uStack_270 = uStack_a70;
    uStack_25e = (undefined6)uStack_a5e;
    uStack_258 = (undefined2)((ulong)uStack_a5e >> 0x30);
    uStack_266 = uStack_a66;
    uStack_260 = uStack_a60;
    uStack_2c8 = uStack_ac8;
    pppppbStack_2d0 = pppppbStack_ad0;
    uStack_2b8 = uStack_ab8;
    uStack_2c0 = uStack_ac0;
    uStack_2a8 = uStack_aa8;
    uStack_2b0 = uStack_ab0;
    uStack_298 = uStack_a98;
    uStack_2a0 = uStack_aa0;
    FUN_101553ec4(&pppppbStack_2d0);
    uStack_758 = uStack_288;
    uStack_760 = uStack_290;
    uStack_748 = uStack_278;
    uStack_750 = uStack_280;
    uStack_740 = uStack_270;
    uStack_72e = CONCAT26(uStack_258,uStack_25e);
    uStack_798 = uStack_2c8;
    pppppbStack_7a0 = pppppbStack_2d0;
    uStack_788 = uStack_2b8;
    uStack_790 = uStack_2c0;
    uStack_778 = uStack_2a8;
    uStack_780 = uStack_2b0;
    uStack_768 = uStack_298;
    uStack_770 = uStack_2a0;
  }
  uStack_348 = uStack_758;
  uStack_350 = uStack_760;
  uStack_338 = uStack_748;
  uStack_340 = uStack_750;
  uStack_330 = uStack_740;
  uStack_31e = uStack_72e;
  uStack_388 = uStack_798;
  pppppbStack_390 = pppppbStack_7a0;
  uStack_378 = uStack_788;
  uStack_380 = uStack_790;
  uStack_368 = uStack_778;
  uStack_370 = uStack_780;
  uStack_358 = uStack_768;
  uStack_360 = uStack_770;
  ppppppbVar29 = param_2;
  func_0x00010154eec4(&uStack_5a8,param_2,param_3,param_4);
  uStack_7d8 = uStack_5a0;
  uStack_7e0 = uStack_5a8;
  uStack_7c8 = uStack_590;
  uStack_7d0 = uStack_598;
  uStack_7b8 = uStack_580;
  uStack_7c0 = uStack_588;
  uStack_7a8 = uStack_570;
  uStack_7b0 = uStack_578;
  func_0x0001040440a8();
  if (((ulong)ppppppbVar29 & 1) == 0) {
    uStack_818 = uStack_7d8;
    uStack_820 = uStack_7e0;
    uStack_808 = uStack_7c8;
    uStack_810 = uStack_7d0;
    uStack_7f8 = uStack_7b8;
    uStack_800 = uStack_7c0;
    uStack_7e8 = uStack_7a8;
    uStack_7f0 = uStack_7b0;
  }
  else {
    func_0x00010404b710(0);
    func_0x00010404afa4(&uStack_820);
    func_0x0001015545c8(&uStack_5a8,0x112db3e20,&UNK_10d95e378);
  }
  ppppppbVar29 = param_2;
  func_0x0001016420c8(param_2,param_3,param_4);
  bVar7 = ((ulong)ppppppbVar29 & 1) == 0;
  if (bVar7) {
    dStack_b38 = 0.0;
  }
  else {
    ppppppbVar29 = param_2;
    ppppbVar23 = param_3;
    puVar15 = param_4;
    func_0x000101642054(param_2,param_3,param_4);
    func_0x00010006c090(ppppbVar23,puVar15);
    dStack_b38 = (double)(int)ppppppbVar29;
  }
  uStack_b40 = (ulong)bVar7;
  ppppppbVar29 = param_2;
  FUN_101642018(param_2,param_3,param_4);
  bVar7 = (int)ppppppbVar29 < 1;
  pppppbStack_b18 = (byte *****)ppppppbVar31;
  if (bVar7) {
    dStack_b48 = 0.0;
  }
  else {
    ppppppbVar29 = param_2;
    FUN_101642018(param_2,param_3,param_4);
    dStack_b48 = (double)(int)ppppppbVar29;
  }
  uStack_b4c = (uint)bVar7;
  FUN_101642158(auStack_568,param_2,param_3,param_4);
  uVar9 = uStack_548;
  FUN_101553d98(uStack_550,uStack_548,uStack_540,uStack_538,uStack_530,uStack_528);
  FUN_101553de4(auStack_568);
  bVar7 = uStack_548 != 0;
  uStack_b58 = 0;
  if (bVar7) {
    uStack_b58 = uStack_550;
  }
  uVar21 = 0xe000000000000000;
  if (bVar7) {
    uVar21 = uStack_548;
  }
  uStack_af8 = 0;
  if (bVar7) {
    uStack_af8 = uStack_540;
  }
  uStack_b00 = 0xe000000000000000;
  if (bVar7) {
    uStack_b00 = uStack_538;
  }
  uVar12 = 0;
  if (bVar7) {
    uVar12 = uStack_530;
  }
  uVar1 = 0xc000000000000000;
  if (uStack_548 != 0) {
    uVar1 = uStack_528;
  }
  uVar10 = 0;
  func_0x00010404b710();
  func_0x00010404b0a0();
  uVar11 = uVar9;
  uVar24 = uVar9;
  func_0x000107c6142c();
  uVar10 = uVar10 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar10 = uVar9 >> 0x38 & 0xf;
  }
  uStack_b68 = uVar12;
  if (uVar10 == 0) {
    uVar11 = uVar21;
    func_0x000107c61434();
    uStack_b60 = uVar21;
  }
  else {
    func_0x00010404b0a0();
    uStack_b60 = uVar24;
    uStack_b58 = uVar11;
  }
  func_0x000104043db8();
  uVar10 = uVar24;
  uVar25 = uVar24;
  func_0x000107c6142c();
  uVar9 = uVar11 & 0xffffffffffff;
  if ((uVar24 & 0x2000000000000000) != 0) {
    uVar9 = uVar24 >> 0x38 & 0xf;
  }
  if (uVar9 == 0) {
    uVar9 = uStack_b00;
    func_0x000107c61434();
    uStack_b80 = uVar9;
  }
  else {
    func_0x000104043db8();
    uStack_b80 = uVar25;
    uStack_af8 = uVar10;
  }
  ppppppbVar29 = param_2;
  FUN_1016424d8(&ppppbStack_520,param_2,param_3,param_4);
  uStack_2c8 = uStack_518;
  pppppbStack_2d0 = (byte *****)ppppbStack_520;
  uStack_2b8 = uStack_508;
  uStack_2c0 = uStack_510;
  uStack_2a8 = uStack_4f8;
  uStack_2b0 = uStack_500;
  uStack_298 = uStack_4e8;
  uStack_2a0 = uStack_4f0;
  FUN_101553e18();
  func_0x000100075890(&pppppbStack_ad0,0,0,&UNK_1103ed890,PTR___s10Foundation4DataVN_110350ae0,
                      ppppppbVar29,&PTR_DAT_110789f58);
  uStack_ba8 = 0;
  uStack_b78 = uVar1;
  uStack_b70 = uVar21;
  FUN_101553e58(&ppppbStack_520);
  uVar12 = 0;
  ppppppbVar29 = (byte ******)pppppbStack_ad0;
  func_0x000107c5ee24(0,pppppbStack_ad0,uStack_ac8);
  pppppbStack_b90 = (byte *****)ppppppbVar29;
  uStack_b88 = uVar12;
  func_0x00010006c090(pppppbStack_ad0,uStack_ac8);
  ppppppbVar29 = param_2;
  ppppbVar23 = param_3;
  puVar15 = param_4;
  FUN_1016426fc(param_2,param_3,param_4);
  func_0x00010006c090(ppppbVar23,puVar15);
  func_0x000100083b20(&pppppbStack_2d0);
  pppppbVar32 = pppppbStack_2d0;
  pppppbVar35 = pppppbStack_2d0;
  func_0x000107c42600();
  func_0x000107c615e8(pppppbVar32);
  if ((((ulong)pppppbVar35 & 1) == 0) && (((ulong)ppppppbVar29 >> 0x20 & 1) == 0)) {
    uStack_868 = 0;
    pppppbStack_870 = (byte *****)0x0;
    uStack_858 = 0;
    uStack_860 = 0;
    uStack_840 = 0;
    uStack_83b = 0;
    uStack_850 = 0x3000000000000000;
    uStack_848 = 0;
    uStack_843 = 0;
    uStack_838 = 0xfefefefe;
    uStack_834 = 6;
  }
  else {
    func_0x000100083b20(&pppppbStack_2d0);
    pppppbVar32 = pppppbStack_2d0;
    pppppbVar35 = pppppbStack_2d0;
    func_0x000107c42608(pppppbStack_2d0);
    func_0x000107c615e8(pppppbVar32);
    FUN_10154f0ac(&pppppbStack_4e0,pppppbVar35,param_2,param_3,param_4);
    uStack_868 = uStack_4d8;
    pppppbStack_870 = pppppbStack_4e0;
    uStack_858 = uStack_4c8;
    uStack_860 = uStack_4d0;
    uStack_848 = uStack_4b8;
    uStack_850 = uStack_4c0;
    uStack_83b = (undefined3)uStack_4ab;
    uStack_838 = (undefined4)((ulong)uStack_4ab >> 0x18);
    uStack_834 = (undefined1)((ulong)uStack_4ab >> 0x38);
    uStack_843 = uStack_4b3;
    uStack_840 = uStack_4b0;
  }
  uStack_2e8 = uStack_848;
  uStack_2f0 = uStack_850;
  uStack_2db = CONCAT17(uStack_834,CONCAT43(uStack_838,uStack_83b));
  uStack_2e3 = uStack_843;
  uStack_2e0 = uStack_840;
  uStack_308 = uStack_868;
  pppppbStack_310 = pppppbStack_870;
  uStack_2f8 = uStack_858;
  uStack_300 = uStack_860;
  if ((((uStack_850 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((uStack_2db >> 0x18 & 0xfefefefefe) == 0x6fefefefe)) {
    uStack_2c8 = uStack_868;
    pppppbStack_2d0 = pppppbStack_870;
    uStack_2b8 = uStack_858;
    uStack_2c0 = uStack_860;
    uStack_2b0 = uStack_850;
    uStack_2a0 = CONCAT35(uStack_83b,uStack_840);
    uStack_2a8 = CONCAT35(uStack_843,uStack_848);
    uStack_298._0_5_ = CONCAT14(uStack_834,uStack_838);
    func_0x000101554514(&pppppbStack_870,&pppppbStack_ad0,0x112db3e10,&UNK_10dbce5f0);
    ppppppbVar29 = &pppppbStack_2d0;
    func_0x0001015545c8(ppppppbVar29,0x112db3e10,&UNK_10dbce5f0);
    func_0x000104043dc8();
    if (((int)ppppppbVar29 == 0) &&
       (ppppppbVar29 = param_2, ppppbVar23 = param_3, FUN_10164176c(param_2,param_3,param_4),
       ((uint)ppppbVar23 & 0xff) != 1)) {
      ppppppbVar29 = (byte ******)0x0;
    }
  }
  else {
    uStack_2c8 = uStack_868;
    pppppbStack_2d0 = pppppbStack_870;
    uStack_2b8 = uStack_858;
    uStack_2c0 = uStack_860;
    uStack_2b0 = uStack_850;
    uStack_2a0 = CONCAT35(uStack_83b,uStack_840);
    uStack_2a8 = CONCAT35(uStack_843,uStack_848);
    uStack_298._0_5_ = CONCAT14(uStack_834,uStack_838);
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_260 = 0;
    uStack_25e = 0;
    uStack_270 = 0x3000000000000000;
    uStack_268 = 0;
    uStack_266 = 0;
    uStack_258 = 0xfefe;
    uStack_256 = 0xfefe;
    uStack_254 = 6;
    func_0x000101554514(&pppppbStack_870,&pppppbStack_ad0,0x112db3e10,&UNK_10dbce5f0);
    func_0x0001015545c8(&pppppbStack_2d0,0x112db3e18,&UNK_10d95e370);
    ppppppbVar29 = (byte ******)0x1;
  }
  ppppppbVar31 = ppppppbVar29;
  func_0x000104043e08();
  uVar8 = SUB84(ppppppbVar31,0);
  if (((ulong)ppppppbVar31 & 1) == 0) {
    ppppppbVar31 = param_2;
    func_0x000101642620(param_2,param_3,param_4);
    uVar8 = SUB84(ppppppbVar31,0);
  }
  else {
    func_0x000104043e08();
  }
  ppppppbVar31 = param_2;
  uStack_b94 = uVar8;
  func_0x000101642aa8(param_2,param_3,param_4);
  pppppbVar32 = (byte *****)0x0;
  pppppbVar35 = ppppppbVar31[2];
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar33 = (long)pppppbVar32 * 0x30;
    do {
      lVar30 = lVar33;
      if (pppppbVar35 == pppppbVar32) {
        func_0x000107c6142c(ppppppbVar31);
        ppppppbVar31 = param_2;
        FUN_101641698(param_2,param_3,param_4);
        ppppppbVar16 = param_2;
        func_0x0001016416d4(param_2,param_3,param_4);
        lStack_ba0 = CONCAT44(lStack_ba0._4_4_,(int)ppppppbVar16);
        ppppppbVar16 = param_2;
        FUN_101641b84(param_2,param_3,param_4);
        uStack_ba8 = CONCAT44(uStack_ba8._4_4_,(int)ppppppbVar16);
        ppppppbVar16 = param_2;
        ppppbVar23 = param_3;
        puVar13 = param_4;
        FUN_101641bc0(param_2,param_3,param_4);
        uStack_bac = SUB84(ppppppbVar16,0);
        func_0x00010006c090(ppppbVar23,puVar13);
        ppppppbVar16 = param_2;
        FUN_101641c30(param_2,param_3,param_4);
        uStack_bb0 = SUB84(ppppppbVar16,0);
        ppppppbVar16 = param_2;
        ppppbVar23 = param_3;
        FUN_101641ef4(param_2,param_3,param_4);
        ppppppbVar17 = param_2;
        ppppbVar26 = param_3;
        pppbStack_bc0 = (byte ***)ppppbVar23;
        pppppbStack_bb8 = (byte *****)ppppppbVar16;
        FUN_101641f44(auStack_4a0,param_2,param_3,param_4);
        FUN_10154f9fc();
        pppbStack_bd0 = (byte ***)ppppbVar26;
        pppppbStack_bc8 = (byte *****)ppppppbVar17;
        func_0x000101553ad0(auStack_4a0);
        ppppppbVar16 = param_2;
        ppppbVar23 = param_3;
        FUN_10164224c(param_2,param_3,param_4);
        ppppppbVar17 = param_2;
        ppppbStack_be0 = ppppbVar23;
        pppppbStack_bd8 = (byte *****)ppppppbVar16;
        FUN_1016425e4(param_2,param_3,param_4);
        ppppppbVar16 = param_2;
        ppppbVar23 = param_3;
        func_0x00010164265c(param_2,param_3,param_4);
        ppppppbVar18 = param_2;
        FUN_1016427b0(param_2,param_3,param_4);
        FUN_10154fb30(auStack_478,param_2,param_3,param_4);
        ppppppbVar19 = param_2;
        func_0x000101642a6c(param_2,param_3,param_4);
        func_0x00010154fcc0(auStack_448,param_2,param_3,param_4);
        lVar33 = *(long *)(puVar15 + 0x10);
        func_0x000107c6142c(uStack_b00);
        func_0x000107c6142c(uStack_b70);
        func_0x00010006c090(uStack_b68,uStack_b78);
        if (lVar33 == 0) {
          func_0x000107c6142c(puVar15);
          puVar15 = (undefined *)0x0;
        }
        uVar5 = uStack_af8;
        pppppbVar35 = pppppbStack_b18;
        uVar25 = uStack_b20;
        uVar24 = uStack_b28;
        puVar13 = puStack_b30;
        uVar11 = uStack_b40;
        dVar4 = dStack_b48;
        uVar22 = uStack_b4c;
        uVar10 = uStack_b58;
        uVar21 = uStack_b60;
        uVar9 = uStack_b80;
        uVar12 = uStack_b88;
        uVar8 = uStack_b94;
        *(byte *******)(lVar36 + -0x40) = ppppppbVar16;
        *(byte *****)(lVar36 + -0x38) = ppppbVar23;
        *(undefined8 *)(lVar36 + -0x68) = uVar12;
        *(byte ******)(lVar36 + -0x60) = pppppbStack_b90;
        *(undefined1 **)(lVar36 + -0x18) = auStack_448;
        *(undefined **)(lVar36 + -0x10) = puVar15;
        *(byte *)(lVar36 + -0x20) = (byte)ppppppbVar19 & 1;
        *(undefined1 **)(lVar36 + -0x28) = auStack_478;
        *(byte *)(lVar36 + -0x30) = (byte)ppppppbVar18 & 1;
        *(byte *)(lVar36 + -0x48) = (byte)uVar8 & 1;
        *(byte *******)(lVar36 + -0x50) = &pppppbStack_310;
        *(byte *)(lVar36 + -0x58) = (byte)ppppppbVar17 & 1;
        *(byte *****)(lVar36 + -0x70) = ppppbStack_be0;
        pppppbVar32 = pppppbStack_bd8;
        *(ulong *)(lVar36 + -0x80) = uVar9;
        *(byte ******)(lVar36 + -0x78) = pppppbVar32;
        *(ulong *)(lVar36 + -0x90) = uVar21;
        *(ulong *)(lVar36 + -0x88) = uVar5;
        *(ulong *)(lVar36 + -0x98) = uVar10;
        *(short *)(lVar36 + -0xa0) = (short)uVar22;
        *(ulong *)(lVar36 + -0xb0) = uVar11;
        *(double *)(lVar36 + -0xa8) = dVar4;
        *(double *)(lVar36 + -0xb8) = dStack_b38;
        *(byte ****)(lVar36 + -0xc0) = pppbStack_bd0;
        *(byte ******)(lVar36 + -200) = pppppbStack_bc8;
        *(byte ****)(lVar36 + -0xd0) = pppbStack_bc0;
        *(byte ******)(lVar36 + -0xd8) = pppppbStack_bb8;
        *(byte *)(lVar36 + -0xe0) = (byte)uStack_bb0 & 1;
        *(undefined8 **)(lVar36 + -0xe8) = &uStack_820;
        bVar3 = (byte)uStack_ba8;
        uVar22 = (uint)lStack_ba0 & 1;
        *(byte *)(lVar36 + -0xef) = (byte)uStack_bac & 1;
        *(byte *)(lVar36 + -0xf0) = bVar3 & 1;
        *(byte *******)(lVar36 + -0xf8) = &pppppbStack_390;
        *(byte *******)(lVar36 + -0x100) = ppppppbVar29;
        func_0x0001047a6718(&pppppbStack_ad0,pppppbStack_b10,uStack_b08,puVar13,pppppbVar35,uVar25,
                            uVar24,(uint)ppppppbVar31 & 1,uVar22);
        FUN_101553e8c(&pppppbStack_ad0);
        func_0x000107c610b4(&pppppbStack_2d0,&pppppbStack_ad0,0x260);
        goto LAB_10154be84;
      }
      if (ppppppbVar31[2] <= pppppbVar32) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10154c044);
        (*pcVar6)();
      }
      pppppbVar32 = (byte *****)((long)pppppbVar32 + 1);
      uVar21 = *(ulong *)((long)ppppppbVar31 + lVar30 + 0x30);
      uVar10 = *(ulong *)((long)ppppppbVar31 + lVar30 + 0x38);
      uVar9 = uVar21 & 0xffffffffffff;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar9 = uVar10 >> 0x38 & 0xf;
      }
      lVar33 = lVar30 + 0x30;
    } while (uVar9 == 0);
    lStack_ba0 = *(long *)((long)ppppppbVar31 + lVar30 + 0x20);
    if (4 < lStack_ba0 - 1U && *(byte *)((long)ppppppbVar31 + lVar30 + 0x28) != 1) {
      lStack_ba0 = 0;
    }
    func_0x000107c61434(uVar10);
    puVar13 = puVar15;
    func_0x000107c61558();
    puVar14 = puVar15;
    if (((ulong)puVar13 & 1) == 0) {
      puVar14 = (undefined *)0x0;
      func_0x000101540670(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
    }
    uVar9 = *(ulong *)(puVar14 + 0x10);
    puVar15 = puVar14;
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar9) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      func_0x000101540670(puVar15,uVar9 + 1,1,puVar14);
    }
    *(ulong *)(puVar15 + 0x10) = uVar9 + 1;
    *(long *)(puVar15 + uVar9 * 0x18 + 0x20) = lStack_ba0;
    *(ulong *)(puVar15 + uVar9 * 0x18 + 0x28) = uVar21;
    *(ulong *)(puVar15 + uVar9 * 0x18 + 0x30) = uVar10;
  } while( true );
}



/* Entry: 10154c540; end: 10154c5cf;  */

ulong FUN_10154c540(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = uVar3 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      func_0x000107c4be2c(*(long *)(unaff_x20 + 0x18),param_2,0x18,*(undefined1 *)(unaff_x20 + 0x10)
                          ,param_2);
    }
    uVar3 = 0;
  }
  else {
    uVar2 = param_1[3];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
  }
  return uVar3;
}



/* Entry: 10154c5d0; end: 10154e02f;  */

void FUN_10154c5d0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long unaff_x20;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_2;
  uVar5 = param_2[1];
  uVar8 = uVar6 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar8 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      func_0x000107c4be2c(*(long *)(unaff_x20 + 0x18),param_3,0x19,*(undefined1 *)(unaff_x20 + 0x10)
                          ,param_3);
    }
    uVar6 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 0;
    uVar7 = 0;
    uVar5 = 1;
  }
  else {
    uVar8 = param_2[4];
    uVar7 = param_2[5];
    if ((char)param_2[6] == '\x01') {
      func_0x000101554418(uVar8,uVar7);
      uVar3 = 0xe000000000000000;
      uVar2 = 0;
      uVar1 = uVar8;
    }
    else if ((char)param_2[6] == -1) {
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0xe000000000000000;
      uVar7 = 0xe000000000000000;
    }
    else {
      func_0x00010155442c(uVar8,uVar7);
      uVar1 = 0;
      uVar2 = uVar8;
      uVar3 = uVar7;
      uVar7 = 0xe000000000000000;
    }
    uVar8 = param_2[2];
    uVar4 = param_2[3];
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar4);
  }
  *param_1 = uVar6;
  param_1[1] = uVar5;
  param_1[2] = uVar8;
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar7;
  return;
}



/* Entry: 10154e030; end: 10154e4b7;  */

void FUN_10154e030(ulong param_1,ulong *param_2)

{
  ulong *puVar1;
  double *pdVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  uint uStack_104;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  byte bStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  byte bStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&uStack_120 - extraout_x8;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar21 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_a0);
  uVar20 = uStack_a0;
  uVar12 = CONCAT71(uStack_97,uStack_98);
  uVar18 = uStack_a0;
  func_0x000107c614f0(uStack_a0);
  uVar7 = 0;
  func_0x00010403c628(0xd000000000000014,0x800000010efb2ce0,uVar18,uVar12);
  func_0x000107c615e8();
  if ((((uVar7 & 1) != 0) && ((param_2[2] & 1) != 0)) && (func_0x000103594a28(), (uVar20 & 1) != 0))
  {
    uVar7 = param_2[5];
    uVar18 = param_2[6];
    uVar20 = param_2[7];
    uVar14 = param_2[8];
    uVar19 = param_2[9];
    uStack_f8 = param_1;
    if (uVar20 == 0) {
      func_0x00010368c4b8(&uStack_f0);
      uStack_110 = uStack_d0;
      uStack_118 = uStack_d8;
      uStack_120 = uStack_e0;
      uStack_100 = uStack_f0;
      uStack_104 = (uint)bStack_e8;
    }
    else {
      uStack_104 = (uint)uVar18;
      uStack_120 = uVar20;
      uStack_118 = uVar14;
      uStack_110 = uVar19;
      uStack_100 = uVar7;
    }
    func_0x000101541428(uVar7,uVar18,uVar20,uVar14,uVar19);
    func_0x000101541428(uVar7,uVar18,uVar20,uVar14,uVar19);
    func_0x000107c6142c(uStack_120);
    func_0x00010006c090(uStack_118,uStack_110);
    uVar8 = uStack_100;
    func_0x00010368d128(uStack_100,uStack_104);
    uVar9 = 0x16;
    uVar11 = 1;
    uStack_100 = uVar19;
    func_0x00010368d128();
    if (uVar8 == uVar9) {
      uVar19 = uStack_100;
      if (uVar20 == 0) {
        func_0x00010368c4b8(&uStack_c8);
        uVar18 = (ulong)bStack_c0;
        uVar7 = uStack_c8;
        uVar20 = uStack_b8;
        uVar19 = uStack_a8;
        uVar14 = uStack_b0;
      }
      param_1 = uStack_f8;
      uStack_98 = (undefined1)uVar18;
      uStack_a0 = uVar7;
      uStack_90 = uVar20;
      uStack_88 = uVar14;
      uStack_80 = uVar19;
      FUN_10154f9fc();
      uStack_100 = uVar9;
      func_0x000107c6142c(uVar20);
      func_0x00010006c090();
      if (uVar11 != 0) {
        func_0x00010403f954();
        uVar20 = uVar19;
        func_0x000107c6142c(uVar19);
        uVar7 = uVar14 & 0xffffffffffff;
        if ((uVar19 & 0x2000000000000000) != 0) {
          uVar7 = uVar19 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) {
          func_0x000107c6142c(uVar11);
          func_0x00010403f954();
          uVar11 = uVar20;
        }
        func_0x000107c5edd0(lVar17);
        func_0x000107c6142c(uVar11);
        lVar10 = lVar17;
        (**(code **)(lVar21 + 0x30))(lVar17,1,lVar6);
        if ((int)lVar10 != 1) {
          (**(code **)(lVar21 + 0x20))(lVar16,lVar17,lVar6);
          uVar14 = param_1;
          (**(code **)(lVar21 + 0x10))(param_1,lVar16,lVar6);
          uVar20 = *param_2;
          uVar18 = param_2[1];
          uVar7 = uVar20 & 0xffffffffffff;
          if ((uVar18 & 0x2000000000000000) != 0) {
            uVar7 = uVar18 >> 0x38 & 0xf;
          }
          if (uVar7 == 0) {
            uVar18 = 0xea00000000005455;
            uVar20 = 0x4f20544920595254;
          }
          else {
            uVar14 = uVar18;
            func_0x000107c61434();
          }
          func_0x000103594ae8();
          (**(code **)(lVar21 + 8))(lVar16,lVar6);
          if ((uVar14 & 1) == 0) {
            uVar15 = 1;
            dVar22 = 0.0;
          }
          else {
            uVar14 = param_2[0xc] >> 0x3c;
            uVar7 = 0;
            if (uVar14 < 0xf) {
              uVar7 = param_2[10];
            }
            uVar19 = 0;
            if (uVar14 < 0xf) {
              uVar19 = param_2[0xb];
            }
            uVar8 = 0xc000000000000000;
            if (uVar14 < 0xf) {
              uVar8 = param_2[0xc];
            }
            FUN_100cb4f08();
            func_0x00010006c090(uVar19,uVar8);
            uVar15 = 0;
            dVar22 = (double)(long)uVar7 / 1000.0;
          }
          uVar3 = *(undefined1 *)((long)param_2 + 0x11);
          uVar4 = *(undefined1 *)((long)param_2 + 0x12);
          uVar5 = *(undefined1 *)((long)param_2 + 0x13);
          lVar6 = 0;
          func_0x000104742f28();
          puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x14));
          *puVar1 = uVar20;
          puVar1[1] = uVar18;
          *(undefined1 *)(param_1 + (long)*(int *)(lVar6 + 0x18)) = uVar3;
          *(undefined1 *)(param_1 + (long)*(int *)(lVar6 + 0x1c)) = uVar4;
          pdVar2 = (double *)(param_1 + (long)*(int *)(lVar6 + 0x20));
          *pdVar2 = dVar22;
          *(undefined1 *)(pdVar2 + 1) = uVar15;
          *(undefined1 *)(param_1 + (long)*(int *)(lVar6 + 0x24)) = uVar5;
          pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
          uVar12 = 0;
          goto LAB_10154e354;
        }
        func_0x0001015545c8(lVar17,0x112d36580,&UNK_10d9016d0);
      }
    }
    else {
      FUN_101553bdc(uVar7,uVar18,uVar20,uVar14,uStack_100);
      param_1 = uStack_f8;
    }
  }
  lVar6 = 0;
  func_0x000104742f28();
  pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar12 = 1;
LAB_10154e354:
  (*pcVar13)(param_1,uVar12,1,lVar6);
  return;
}



/* Entry: 10154e4b8; end: 10154e5b7;  */

ulong FUN_10154e4b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [32];
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  
  uVar1 = param_1;
  func_0x00010358a824(auStack_e8);
  func_0x000103591b48();
  FUN_101553c98(auStack_e8);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0x100000000;
  }
  else {
    func_0x00010358a824(auStack_b0,param_1,param_2,param_3);
    FUN_100cb4f08(uStack_90,uStack_88,uStack_80);
    FUN_101553c98(auStack_b0);
    if (uStack_80 >> 0x3c < 0xf) {
      FUN_101553ccc(uStack_90,uStack_88,uStack_80);
      uVar1 = uStack_90 & 0xffffffff;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      uVar1 = 0;
    }
  }
  func_0x00010358a824(auStack_78,param_1,param_2,param_3);
  func_0x000107c61434(uStack_70);
  FUN_101553c98(auStack_78);
  return uVar1;
}



/* Entry: 10154e5b8; end: 10154f0ab;  */

undefined * FUN_10154e5b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 auStack_330 [22];
  long alStack_280 [4];
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined1 auStack_210 [184];
  undefined *puStack_158;
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
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = 0;
  func_0x000107c5ef64();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar11 = (long)alStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d48c78;
  lStack_250 = lVar11;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar7 = 0x112d48c80;
  lStack_258 = lVar11;
  func_0x0001000285a8(0x112d48c80,&UNK_10d910e50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_01;
  lVar7 = 0;
  lStack_260 = lVar11;
  func_0x000107c5ec74();
  alStack_280[2] = *(long *)(lVar7 + -8);
  alStack_280[3] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_280[2] + 0x40));
  lVar11 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x00010470ee30();
  lStack_230 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_230 + 0x40));
  puVar15 = (undefined8 *)(lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  func_0x000100083b20(&uStack_150);
  uVar8 = uStack_150;
  func_0x000107c614f0(uStack_150);
  uVar9 = 0xd000000000000023;
  func_0x00010403c628(0xd000000000000023,0x800000010efb2d30,uVar8,uStack_148);
  func_0x000107c615e8(uStack_150);
  if (((uVar9 & 1) == 0) || (lVar14 = *(long *)(param_1 + 0x10), lVar14 == 0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1015528dc(0,lVar14,0);
    puVar18 = (undefined8 *)(param_1 + 0x20);
    puVar13 = puStack_158;
    puVar16 = puVar15;
    alStack_280[0] = lVar19;
    alStack_280[1] = lVar6;
    lStack_238 = lVar7;
    puStack_228 = puVar15;
    do {
      uStack_c8 = puVar18[0x11];
      uStack_d0 = puVar18[0x10];
      lStack_b8 = puVar18[0x13];
      uStack_c0 = puVar18[0x12];
      uStack_a8 = puVar18[0x15];
      uStack_b0 = puVar18[0x14];
      uStack_a0 = puVar18[0x16];
      uStack_108 = puVar18[9];
      uStack_110 = puVar18[8];
      uStack_f8 = puVar18[0xb];
      uStack_100 = puVar18[10];
      uStack_e8 = puVar18[0xd];
      uStack_f0 = puVar18[0xc];
      uStack_d8 = puVar18[0xf];
      uStack_e0 = puVar18[0xe];
      uStack_148 = puVar18[1];
      uStack_150 = *puVar18;
      uStack_138 = puVar18[3];
      uStack_140 = puVar18[2];
      uStack_128 = puVar18[5];
      uStack_130 = puVar18[4];
      uStack_118 = puVar18[7];
      uStack_120 = puVar18[6];
      puVar10 = &uStack_150;
      puStack_220 = puVar13;
      FUN_101553ce8(puVar10,auStack_210);
      func_0x0001035928fc();
      lVar5 = lStack_260;
      iVar4 = *(int *)(lVar7 + 0x18);
      lStack_218 = lVar14;
      if (((ulong)puVar10 & 1) == 0) {
        lVar7 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))((long)puVar16 + (long)iVar4,1,1,lVar7);
      }
      else {
        lStack_240 = (long)iVar4;
        (**(code **)(lVar19 + 0x38))(lStack_260,1,1,lVar6);
        lVar19 = 0;
        func_0x000107c5efa8();
        lVar7 = lStack_258;
        (**(code **)(*(long *)(lVar19 + -8) + 0x38))(lStack_258,1,1,lVar19);
        *(undefined1 *)(puVar15 + -1) = 1;
        puVar15[-2] = 0;
        *(undefined1 *)(puVar15 + -3) = 1;
        puVar15[-4] = 0;
        *(undefined1 *)(puVar15 + -5) = 1;
        puVar15[-6] = 0;
        *(undefined1 *)(puVar15 + -7) = 1;
        puVar15[-8] = 0;
        *(undefined1 *)(puVar15 + -9) = 1;
        puVar15[-10] = 0;
        *(undefined1 *)(puVar15 + -0xb) = 1;
        puVar15[-0xc] = 0;
        *(undefined1 *)(puVar15 + -0xd) = 1;
        puVar15[-0xe] = 0;
        *(undefined1 *)(puVar15 + -0xf) = 1;
        puVar15[-0x10] = 0;
        *(undefined1 *)(puVar15 + -0x11) = 1;
        puVar15[-0x12] = 0;
        *(undefined1 *)(puVar15 + -0x13) = 1;
        puVar15[-0x14] = 0;
        *(undefined1 *)(puVar15 + -0x15) = 1;
        puVar15[-0x16] = 0;
        func_0x000107c5ec70(lVar11,lVar5,lVar7,0,1,0,1,0,1);
        uVar9 = uStack_a0;
        uVar2 = uStack_a8;
        uVar8 = uStack_b0;
        lVar7 = lStack_b8;
        uVar20 = uStack_a0 >> 0x3c;
        lStack_248 = 0;
        if (uVar20 < 0xf) {
          lStack_248 = (long)(int)lStack_b8;
        }
        uVar1 = 0;
        if (uVar20 < 0xf) {
          uVar1 = uStack_a8;
        }
        uVar3 = 0xc000000000000000;
        if (uVar20 < 0xf) {
          uVar3 = uStack_a0;
        }
        func_0x000100cb4f24(lStack_b8,uStack_b0,uStack_a8,uStack_a0);
        func_0x000100cb4f24(lVar7,uVar8,uVar2,uVar9);
        func_0x000100cb4f24(lVar7,uVar8,uVar2,uVar9);
        func_0x00010006c090(uVar1,uVar3);
        func_0x000107c5ec58(lStack_248,0);
        if (uVar20 < 0xf) {
          FUN_101553d58(lVar7,uVar8,uVar2,uVar9);
          func_0x000107c5ec60(lVar7 >> 0x20,0);
          FUN_101553d58(lVar7,uVar8,uVar2,uVar9);
          lVar7 = (long)(int)uVar8;
        }
        else {
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c5ec60(0,0);
          func_0x00010006c090(0,0xc000000000000000);
          lVar7 = 0;
        }
        func_0x000107c5ec48(lVar7,0);
        lVar7 = lStack_250;
        func_0x000107c5ef54(lStack_250);
        func_0x000107c5ef48((long)puStack_228 + lStack_240,lVar11);
        lVar6 = alStack_280[1];
        lVar19 = alStack_280[0];
        (**(code **)(alStack_280[0] + 8))(lVar7,alStack_280[1]);
        (**(code **)(alStack_280[2] + 8))(lVar11,alStack_280[3]);
      }
      uVar9 = uStack_f8;
      uVar8 = uStack_100;
      uVar20 = uStack_f8;
      func_0x000107c61434();
      func_0x00010359285c();
      if ((uVar20 & 1) == 0) {
        dVar17 = 0.0;
        uVar12 = 1;
      }
      else {
        uVar20 = uStack_c0 >> 0x3c;
        dVar17 = 0.0;
        if (uVar20 < 0xf) {
          dVar17 = (double)(float)uStack_d0;
        }
        uVar2 = 0;
        if (uVar20 < 0xf) {
          uVar2 = uStack_c8;
        }
        uVar3 = 0xc000000000000000;
        if (uVar20 < 0xf) {
          uVar3 = uStack_c0;
        }
        func_0x000100cb4f08();
        func_0x00010006c090(uVar2,uVar3);
        uVar12 = 0;
      }
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      uStack_78 = uStack_148;
      uStack_80 = uStack_150;
      func_0x000100402194(&uStack_80,auStack_210);
      func_0x000100402194(&uStack_90,auStack_210);
      func_0x000101553d24(&uStack_150);
      puVar16 = puStack_228;
      *puStack_228 = uVar8;
      puVar16[1] = uVar9;
      puVar16[2] = dVar17;
      *(undefined1 *)(puVar16 + 3) = uVar12;
      lVar7 = lStack_238;
      puVar10 = (undefined8 *)((long)puVar16 + (long)*(int *)(lStack_238 + 0x1c));
      puVar10[1] = uStack_78;
      *puVar10 = uStack_80;
      puVar10 = (undefined8 *)((long)puVar16 + (long)*(int *)(lStack_238 + 0x20));
      puVar10[1] = uStack_88;
      *puVar10 = uStack_90;
      puStack_158 = puStack_220;
      uVar9 = *(ulong *)(puStack_220 + 0x10);
      if (*(ulong *)(puStack_220 + 0x18) >> 1 <= uVar9) {
        FUN_1015528dc(1 < *(ulong *)(puStack_220 + 0x18),uVar9 + 1,1);
      }
      puVar13 = puStack_158;
      *(ulong *)(puStack_158 + 0x10) = uVar9 + 1;
      func_0x000101554754(puVar16,puStack_158 +
                                  *(long *)(lStack_230 + 0x48) * uVar9 +
                                  ((ulong)*(byte *)(lStack_230 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lStack_230 + 0x50) ^ 0xffffffffffffffff)),
                          &SUB_10470ee30);
      puVar18 = puVar18 + 0x17;
      lVar14 = lStack_218 + -1;
    } while (lVar14 != 0);
  }
  return puVar13;
}



/* Entry: 10154f0ac; end: 10154f9fb;  */

/* WARNING: Removing unreachable block (ram,0x00010154f8d4) */

void FUN_10154f0ac(undefined8 *param_1,ulong param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  long lStack_370;
  ulong uStack_368;
  ulong uStack_360;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_290;
  undefined1 auStack_280 [32];
  ulong uStack_260;
  ulong uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
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
  undefined *puStack_90;
  undefined *puStack_88;
  
  uVar5 = 0;
  puStack_3b0 = param_1;
  func_0x000107c5fb10();
  lVar19 = *(long *)(uVar5 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)&uStack_3e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined *)(lVar20 - extraout_x8_00);
  func_0x00010164229c(auStack_280,param_3,param_4,param_5);
  if (((uStack_260 & uStack_228 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((param_2 & 1) != 0) {
      puStack_3c0 = param_3;
      puStack_3b8 = param_4;
      func_0x0001016426ac(param_3,param_4,param_5);
      uVar17 = (ulong)param_3 & 0xffffffffffff;
      if (((ulong)param_4 & 0x2000000000000000) != 0) {
        uVar17 = (ulong)param_4 >> 0x38 & 0xf;
      }
      if ((uVar17 == 0) && (puVar11 = param_3, func_0x000104043ec8(), ((ulong)puVar11 & 1) != 0)) {
        puStack_3c8 = param_5;
        FUN_1016414e0(&lStack_190,puStack_3c0,puStack_3b8,param_5);
        func_0x000107c61434(uStack_188);
        FUN_101553ec8(&lStack_190);
        func_0x000107c5edd0(puVar14,lStack_190,uStack_188);
        func_0x000107c6142c(uStack_188);
        lVar6 = 0;
        func_0x000107c5ede0();
        lVar15 = *(long *)(lVar6 + -8);
        puVar11 = (undefined *)0x1;
        param_3 = puVar14;
        (**(code **)(lVar15 + 0x30))(puVar14,1,lVar6);
        if ((int)param_3 == 1) {
          func_0x0001015545c8(puVar14,0x112d36580,&UNK_10d9016d0);
        }
        else {
          func_0x000107c5edbc();
          (**(code **)(lVar15 + 8))(puVar14,lVar6);
          if (puVar11 != (undefined *)0x0) {
            func_0x000107c6142c(param_4);
            param_5 = puStack_3c8;
            param_4 = puVar11;
            goto LAB_10154f794;
          }
        }
        func_0x000107c6142c(param_4);
        param_3 = (undefined *)0x0;
        param_5 = puStack_3c8;
        param_4 = (undefined *)0xe000000000000000;
      }
LAB_10154f794:
      uVar17 = (ulong)param_3 & 0xffffffffffff;
      if (((ulong)param_4 & 0x2000000000000000) != 0) {
        uVar17 = (ulong)param_4 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        puVar14 = puStack_3c0;
        puVar11 = puStack_3b8;
        puStack_398 = param_3;
        func_0x00010164265c(puStack_3c0,puStack_3b8,param_5);
        puVar7 = puVar11;
        puVar12 = puVar11;
        func_0x000107c6142c();
        uVar17 = (ulong)puVar14 & 0xffffffffffff;
        if (((ulong)puVar11 & 0x2000000000000000) != 0) {
          uVar17 = (ulong)puVar11 >> 0x38 & 0xf;
        }
        if (uVar17 != 0) {
LAB_10154f7dc:
          puVar14 = puStack_3c0;
          puVar7 = puStack_3b8;
          puVar12 = param_5;
          FUN_1016426fc(puStack_3c0,puStack_3b8,param_5);
          func_0x00010006c090(puVar7,puVar12);
          uStack_360 = 0;
          uVar17 = 0x8000000000;
          puStack_210 = (undefined *)((ulong)puVar14 & 0x101010101);
          uStack_368 = uVar5;
          puVar14 = puStack_398;
          goto LAB_10154f9b8;
        }
        func_0x000104043f08();
        puStack_380 = puVar7;
        puStack_378 = puVar12;
        func_0x000107c5fb04(lVar20);
        FUN_100e8b654();
        uVar17 = 0;
        lVar6 = lVar20;
        func_0x000107c60214(lVar20,0,PTR___sSSN_11034da80,puVar7);
        (**(code **)(lVar19 + 8))(lVar20,uVar5);
        func_0x000107c6142c(puVar12);
        if (uVar17 >> 0x3c < 0xf) {
          uVar8 = 0;
          func_0x000107c5eb24();
          func_0x000107c613fc();
          func_0x000107c5eb20();
          uVar9 = 0x112d550a0;
          func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
          uVar10 = uVar9;
          FUN_101553f38();
          func_0x000107c5eb1c(&puStack_380,uVar9,lVar6,uVar17,uVar9,uVar10);
          func_0x000107c61574(uVar8);
          puVar14 = puStack_380;
          if (*(long *)(puStack_380 + 0x10) != 0) {
            func_0x000107c61434(puStack_380);
            puVar11 = puStack_398;
            puVar7 = param_4;
            func_0x000100029284();
            if (((ulong)puVar7 & 1) != 0) {
              puVar1 = (ulong *)(*(long *)(puVar14 + 0x38) + (long)puVar11 * 0x10);
              uVar3 = *puVar1;
              uVar5 = puVar1[1];
              func_0x000107c61434(uVar5);
              func_0x000107c6142c(puVar14);
              func_0x0001000b44c0(lVar6,uVar17);
              func_0x000107c6142c(uVar5);
              func_0x000107c6142c(puVar14);
              uVar17 = uVar3 & 0xffffffffffff;
              if ((uVar5 & 0x2000000000000000) != 0) {
                uVar17 = uVar5 >> 0x38 & 0xf;
              }
              puVar11 = param_5;
              if (uVar17 != 0) goto LAB_10154f7dc;
              goto LAB_10154f994;
            }
            func_0x000107c6142c(puVar14);
          }
          func_0x0001000b44c0(lVar6,uVar17);
          func_0x000107c6142c(puVar14);
        }
      }
LAB_10154f994:
      func_0x000107c6142c(param_4);
    }
  }
  else {
    if ((uStack_228 >> 0x3d & 1) != 0) {
      puStack_3c8 = param_5;
      FUN_101642410(&puStack_220,param_3,param_4,param_5);
      lVar6 = *(long *)(puStack_220 + 0x10);
      param_5 = puStack_220;
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar6 != 0) {
        puStack_290 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_3c0 = param_3;
        puStack_3b8 = param_4;
        func_0x000101552914(0,lVar6,0);
        puVar16 = (undefined8 *)(puStack_220 + 0x28);
        do {
          puVar14 = puStack_290;
          lStack_190 = puVar16[-1];
          uStack_188 = *puVar16;
          uStack_178 = puVar16[2];
          uStack_180 = puVar16[1];
          uStack_168 = puVar16[4];
          uStack_170 = puVar16[3];
          uStack_160 = puVar16[5];
          uStack_3a0 = puVar16[6];
          uStack_148 = puVar16[8];
          uStack_150 = puVar16[7];
          uStack_138 = puVar16[10];
          uStack_140 = puVar16[9];
          uStack_128 = puVar16[0xc];
          uStack_130 = puVar16[0xb];
          uStack_120 = puVar16[0xd];
          uStack_118 = puVar16[0xe];
          uStack_108 = puVar16[0x10];
          uStack_110 = puVar16[0xf];
          uStack_f8 = puVar16[0x12];
          uStack_100 = puVar16[0x11];
          uStack_e8 = puVar16[0x14];
          uStack_f0 = puVar16[0x13];
          uStack_e0 = puVar16[0x15];
          uStack_d8 = puVar16[0x16];
          uStack_c8 = puVar16[0x18];
          uStack_d0 = puVar16[0x17];
          uStack_b8 = puVar16[0x1a];
          uStack_c0 = puVar16[0x19];
          uStack_a8 = puVar16[0x1c];
          uStack_b0 = puVar16[0x1b];
          uStack_158 = uStack_3a0;
          if (*(long *)(lStack_190 + 0x10) == 0) {
            puStack_398 = (undefined *)0x0;
            uStack_3a8 = 0xe000000000000000;
          }
          else {
            puStack_398 = *(undefined **)(lStack_190 + 0x20);
            uStack_3a8 = *(undefined8 *)(lStack_190 + 0x28);
            func_0x000107c61434();
          }
          puStack_90 = (undefined *)puVar16[4];
          puStack_88 = (undefined *)puVar16[5];
          uStack_a0 = *puVar16;
          uStack_98 = puVar16[1];
          func_0x000101553fa0(&lStack_190,&puStack_380);
          func_0x000100402194(&puStack_90,&puStack_380);
          func_0x000100402194(&uStack_a0,&puStack_380);
          FUN_10164e244(&puStack_1f8);
          uVar17 = uStack_1e8;
          uVar9 = uStack_1f0;
          puVar11 = puStack_1f8;
          uVar5 = uStack_1e8;
          func_0x000107c61434();
          FUN_10164e358();
          uVar4 = uStack_1b0;
          uVar18 = uStack_1b8;
          uVar3 = uStack_1c0;
          if ((uVar5 & 1) == 0) {
            uVar18 = 0;
          }
          else {
            FUN_100cb4f08(uStack_1c0,uStack_1b8,uStack_1b0);
            uVar13 = uVar4 >> 0x3c;
            uVar5 = 0;
            if (uVar13 < 0xf) {
              uVar5 = uVar18;
            }
            uVar2 = 0xc000000000000000;
            if (uVar13 < 0xf) {
              uVar2 = uVar4;
            }
            uVar18 = 0;
            if (uVar13 < 0xf) {
              uVar18 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
            }
            func_0x00010006c090(uVar5,uVar2);
          }
          func_0x00010164e3f8();
          dVar22 = 0.0;
          if ((uVar5 & 1) != 0) {
            uVar5 = uStack_198 >> 0x3c;
            dVar22 = 0.0;
            if (uVar5 < 0xf) {
              dVar22 = (double)(float)uStack_1a8;
            }
            uVar10 = 0;
            if (uVar5 < 0xf) {
              uVar10 = uStack_1a0;
            }
            uVar3 = 0xc000000000000000;
            if (uVar5 < 0xf) {
              uVar3 = uStack_198;
            }
            FUN_100cb4f08();
            func_0x00010006c090(uVar10,uVar3);
          }
          func_0x000101553fdc(&puStack_1f8);
          func_0x000101554010(&lStack_190);
          uStack_388 = uStack_98;
          uStack_390 = uStack_a0;
          puStack_378 = puStack_88;
          puStack_380 = puStack_90;
          param_5 = *(undefined **)(puVar14 + 0x10);
          uVar10 = uStack_1e0;
          uVar8 = uStack_1d8;
          puStack_290 = puVar14;
          if ((undefined *)(*(ulong *)(puVar14 + 0x18) >> 1) <= param_5) {
            uStack_3d8 = uStack_1d8;
            uStack_3e0 = uStack_1e0;
            func_0x000101552914(1 < *(ulong *)(puVar14 + 0x18),param_5 + 1,1);
            uVar10 = uStack_3e0;
            uVar8 = uStack_3d8;
          }
          auVar21._8_8_ = uVar8;
          auVar21._0_8_ = uVar10;
          auVar21 = NEON_scvtf(auVar21,8);
          *(undefined **)(puStack_290 + 0x10) = param_5 + 1;
          *(ulong *)(puStack_290 + (long)param_5 * 0x70 + 0x20) =
               uStack_3a0 & ((long)uStack_3a0 >> 0x3f ^ 0xffffffffffffffffU);
          *(undefined **)(puStack_290 + (long)param_5 * 0x70 + 0x30) = puStack_378;
          *(undefined **)(puStack_290 + (long)param_5 * 0x70 + 0x28) = puStack_380;
          *(undefined **)(puStack_290 + (long)param_5 * 0x70 + 0x38) = puStack_398;
          *(undefined8 *)(puStack_290 + (long)param_5 * 0x70 + 0x40) = uStack_3a8;
          *(undefined8 *)(puStack_290 + (long)param_5 * 0x70 + 0x50) = uStack_388;
          *(undefined8 *)(puStack_290 + (long)param_5 * 0x70 + 0x48) = uStack_390;
          *(ulong *)(puStack_290 + (long)param_5 * 0x70 + 0x58) =
               (ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU);
          *(undefined8 *)(puStack_290 + (long)param_5 * 0x70 + 0x60) = uVar9;
          *(ulong *)(puStack_290 + (long)param_5 * 0x70 + 0x68) = uVar17;
          *(ulong *)(puStack_290 + (long)param_5 * 0x70 + 0x70) = uVar18;
          *(double *)(puStack_290 + (long)param_5 * 0x70 + 0x78) = dVar22;
          *(long *)(puStack_290 + (long)param_5 * 0x70 + 0x88) = auVar21._8_8_;
          *(long *)(puStack_290 + (long)param_5 * 0x70 + 0x80) = auVar21._0_8_;
          puVar16 = puVar16 + 0x1e;
          lVar6 = lVar6 + -1;
          param_4 = puStack_3b8;
          puVar14 = puStack_290;
          param_3 = puStack_3c0;
        } while (lVar6 != 0);
      }
      puVar11 = puStack_3c8;
      FUN_1016426fc(param_3,param_4);
      func_0x0001015545c8(auStack_280,0x112db3e40,&UNK_10d973530);
      func_0x00010006c090(param_4,puVar11);
      func_0x00010006c00c(puStack_218,puStack_210);
      func_0x000101554044(&puStack_220);
      uStack_360 = 0;
      uStack_368 = (ulong)param_3 & 0x101010101;
      uVar17 = 0x4000000000;
      param_4 = puStack_218;
      goto LAB_10154f9b8;
    }
    FUN_101642310(&puStack_380,param_3,param_4,param_5);
    lVar6 = *(long *)(lStack_370 + 0x10);
    if (lVar6 != 0) {
      puStack_1f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_3c0 = param_3;
      puStack_3b8 = param_4;
      func_0x000101552930(0,lVar6,0);
      puVar16 = (undefined8 *)(lStack_370 + 0x30);
      do {
        puVar14 = puStack_1f8;
        uVar9 = puVar16[-2];
        uVar10 = puVar16[-1];
        uVar8 = *puVar16;
        func_0x00010006c00c(uVar9,uVar10);
        func_0x000107c6157c(uVar8);
        FUN_101551c78(&lStack_190,uVar9,uVar10,uVar8);
        func_0x00010006c090(uVar9,uVar10);
        func_0x000107c61574(uVar8);
        uVar5 = *(ulong *)(puVar14 + 0x10);
        puStack_1f8 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar5) {
          func_0x000101552930(1 < *(ulong *)(puVar14 + 0x18),uVar5 + 1,1);
        }
        puVar14 = puStack_1f8;
        puVar16 = puVar16 + 3;
        *(ulong *)(puStack_1f8 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x48) = uStack_168;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x40) = uStack_170;
        *(ulong *)(puStack_1f8 + uVar5 * 0xc0 + 0x58) = uStack_158;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x50) = uStack_160;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x28) = uStack_188;
        *(long *)(puStack_1f8 + uVar5 * 0xc0 + 0x20) = lStack_190;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x38) = uStack_178;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x30) = uStack_180;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x88) = uStack_128;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x80) = uStack_130;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x98) = uStack_118;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x90) = uStack_120;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x68) = uStack_148;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x60) = uStack_150;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x78) = uStack_138;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0x70) = uStack_140;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 200) = uStack_e8;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xc0) = uStack_f0;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xd8) = uStack_d8;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xd0) = uStack_e0;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xa8) = uStack_108;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xa0) = uStack_110;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xb8) = uStack_f8;
        *(undefined8 *)(puStack_1f8 + uVar5 * 0xc0 + 0xb0) = uStack_100;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar11 = puStack_3c0;
      puVar7 = puStack_3b8;
      FUN_1016426fc(puStack_3c0,puStack_3b8,param_5);
      func_0x0001015545c8(auStack_280,0x112db3e40,&UNK_10d973530);
      func_0x00010006c090(puVar7,param_5);
      func_0x000107c61434(puStack_378);
      func_0x00010006c00c(uStack_368,uStack_360);
      func_0x000107c61434(puStack_338);
      func_0x000101554078(&puStack_380);
      uVar17 = (ulong)puVar11 & 0x101010101;
      uStack_360 = uStack_360 & 0xcfffffffffffffff;
      puStack_210 = puVar14;
      param_5 = puStack_340;
      puVar11 = puStack_338;
      puVar14 = puStack_380;
      param_4 = puStack_378;
      goto LAB_10154f9b8;
    }
    func_0x000101554078(&puStack_380);
    func_0x0001015545c8(auStack_280,0x112db3e40,&UNK_10d973530);
  }
  uStack_368 = 0;
  param_4 = (undefined *)0x0;
  puVar14 = (undefined *)0x0;
  uVar17 = 0x6fefefefe;
  uStack_360 = 0x3000000000000000;
  puStack_210 = (undefined *)0x0;
  param_5 = (undefined *)0x0;
  puVar11 = (undefined *)0x0;
LAB_10154f9b8:
  *puStack_3b0 = puVar14;
  puStack_3b0[1] = param_4;
  puStack_3b0[2] = puStack_210;
  puStack_3b0[3] = uStack_368;
  puStack_3b0[4] = uStack_360;
  puStack_3b0[5] = param_5;
  puStack_3b0[6] = puVar11;
  *(char *)((long)puStack_3b0 + 0x3c) = (char)(uVar17 >> 0x20);
  *(int *)(puStack_3b0 + 7) = (int)uVar17;
  return;
}



/* Entry: 10154f9fc; end: 10154fb2f;  */

undefined1  [16] FUN_10154f9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 *puVar10;
  long unaff_x20;
  undefined1 auVar11 [16];
  
  lVar7 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar7 != 0) {
    puVar10 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x30);
    do {
      if (*(char *)(puVar10 + -1) != '\x01') {
        if (1 < puVar10[-2] - 3) goto LAB_10154fa68;
LAB_10154fa8c:
        uVar1 = *puVar10;
        uVar4 = puVar10[1];
        uVar2 = puVar10[2];
        uVar5 = puVar10[3];
        uVar3 = puVar10[4];
        uVar6 = puVar10[5];
        func_0x00010006c00c(uVar1,uVar4);
        func_0x00010006c00c(uVar2,uVar5);
        func_0x00010006c00c(uVar3,uVar6);
        func_0x000107c5fb04(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        uVar8 = uVar1;
        uVar9 = uVar4;
        func_0x000107c5faf0(uVar1,uVar4,
                            &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x00010006c090(uVar1,uVar4);
        func_0x00010006c090(uVar2,uVar5);
        func_0x00010006c090(uVar3,uVar6);
        goto LAB_10154fb14;
      }
      if (2 < (ulong)puVar10[-2]) goto LAB_10154fa8c;
LAB_10154fa68:
      puVar10 = puVar10 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar8 = 0;
  uVar9 = 0;
LAB_10154fb14:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar8;
  return auVar11;
}



/* Entry: 10154fb30; end: 1015517db;  */

void FUN_10154fb30(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_1b8 [48];
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_d8 [80];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar4 = param_2;
  FUN_101642918();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    lVar10 = 0;
    uVar9 = 0;
    lVar8 = 0;
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    FUN_1016427ec(auStack_1b8,param_2,param_3,param_4);
    func_0x000101554608(uStack_188,lStack_180,uStack_178,uStack_170);
    func_0x0001015540e0(auStack_1b8);
    bVar3 = lStack_180 != 0;
    uVar5 = 0;
    if (bVar3) {
      uVar5 = uStack_188;
    }
    lVar10 = -0x2000000000000000;
    if (bVar3) {
      lVar10 = lStack_180;
    }
    uVar9 = 0;
    if (bVar3) {
      uVar9 = uStack_178;
    }
    uVar6 = 0xc000000000000000;
    if (bVar3) {
      uVar6 = uStack_170;
    }
    func_0x00010006c090(uVar9,uVar6);
    FUN_1016427ec(auStack_148,param_2,param_3,param_4);
    func_0x000101554608(uStack_138,lStack_130,uStack_128,uStack_120);
    func_0x0001015540e0(auStack_148);
    bVar3 = lStack_130 != 0;
    uVar9 = 0;
    if (bVar3) {
      uVar9 = uStack_138;
    }
    lVar8 = -0x2000000000000000;
    if (bVar3) {
      lVar8 = lStack_130;
    }
    uVar6 = 0;
    if (bVar3) {
      uVar6 = uStack_128;
    }
    uVar1 = 0xc000000000000000;
    if (bVar3) {
      uVar1 = uStack_120;
    }
    func_0x00010006c090(uVar6,uVar1);
    FUN_1016427ec(auStack_d8,param_2,param_3,param_4);
    func_0x000101554608(uStack_88,lStack_80,uStack_78,uStack_70);
    func_0x0001015540e0(auStack_d8);
    bVar3 = lStack_80 != 0;
    uVar6 = 0;
    if (bVar3) {
      uVar6 = uStack_88;
    }
    lVar7 = -0x2000000000000000;
    if (bVar3) {
      lVar7 = lStack_80;
    }
    uVar1 = 0;
    if (bVar3) {
      uVar1 = uStack_78;
    }
    uVar2 = 0xc000000000000000;
    if (bVar3) {
      uVar2 = uStack_70;
    }
    func_0x00010006c090(uVar1,uVar2);
  }
  *param_1 = uVar5;
  param_1[1] = lVar10;
  param_1[2] = uVar9;
  param_1[3] = lVar8;
  param_1[4] = uVar6;
  param_1[5] = lVar7;
  return;
}



/* Entry: 1015517dc; end: 10155187b;  */

undefined8 FUN_1015517dc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 auStack_90 [6];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uVar1 = param_1;
  FUN_1015df634();
  if ((uVar1 & 1) == 0) {
    auStack_90[0] = 0;
  }
  else {
    FUN_1015df594(auStack_90,param_1,param_2,param_3);
    FUN_101554560(auStack_90);
    FUN_1015df594(auStack_60,param_1,param_2,param_3);
    func_0x000107c61434(uStack_48);
    FUN_101554560(auStack_60);
  }
  return auStack_90[0];
}



/* Entry: 10155187c; end: 101551907;  */

void FUN_10155187c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010403f454();
  if ((uVar3 & 0xff) == 0) {
    func_0x00010359058c();
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20) >> 0x3c;
      uVar1 = 0;
      if (uVar3 < 0xf) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar2 = 0xc000000000000000;
      if (uVar3 < 0xf) {
        uVar2 = *(ulong *)(param_1 + 0x20);
      }
      FUN_100cb4f08();
      func_0x00010006c090(uVar1,uVar2);
    }
  }
  else {
    func_0x00010403f32c(0);
    func_0x00010403db9c();
  }
  return;
}



/* Entry: 101551908; end: 101551a33;  */

void FUN_101551908(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010403f494();
  if ((uVar3 & 0xff) == 0) {
    func_0x00010359062c();
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x38) >> 0x3c;
      uVar1 = 0;
      if (uVar3 < 0xf) {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
      }
      uVar2 = 0xc000000000000000;
      if (uVar3 < 0xf) {
        uVar2 = *(ulong *)(param_1 + 0x38);
      }
      FUN_100cb4f08();
      func_0x00010006c090(uVar1,uVar2);
    }
  }
  else {
    func_0x00010403f32c(0);
    func_0x00010403db04();
  }
  return;
}



/* Entry: 101551a34; end: 101551ae3;  */

void FUN_101551a34(undefined8 *param_1)

{
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
  param_1[0x18] = 1;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x4b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  return;
}



/* Entry: 101551ae4; end: 101551b17;  */

undefined8 FUN_101551ae4(undefined8 param_1)

{
  FUN_1015eefa0();
  return param_1;
}



/* Entry: 101551b18; end: 101551b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101551b18(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001015543dc(unaff_x20 + _DAT_112db3c90,&SUB_103de4634);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101551b68; end: 101551b87;  */

void FUN_101551b68(void)

{
  FUN_101545a74();
  return;
}



/* Entry: 101551b88; end: 101551c77;  */

undefined8 FUN_101551b88(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  
  func_0x00010165fb20();
  if ((((param_1 & 1) == 0) || (func_0x00010165fbc0(), (param_1 & 1) == 0)) ||
     (func_0x00010165fc64(), (param_1 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 200);
    lVar7 = *(long *)(unaff_x20 + 0xd0);
    bVar9 = lVar7 != 0;
    uVar6 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar10 = 0;
    if (bVar9) {
      uVar10 = uVar5;
    }
    lVar1 = -0x2000000000000000;
    if (bVar9) {
      lVar1 = lVar7;
    }
    uVar2 = 0;
    if (bVar9) {
      uVar2 = uVar6;
    }
    uVar3 = 0xc000000000000000;
    if (bVar9) {
      uVar3 = uVar8;
    }
    func_0x000107c61434(lVar1);
    func_0x000101554608(uVar5,lVar7,uVar6,uVar8);
    func_0x000107c6142c(lVar1);
    func_0x00010006c090(uVar2,uVar3);
    uVar11 = *(ulong *)(unaff_x20 + 0xf8) >> 0x3c;
    uVar5 = 0;
    if (uVar11 < 0xf) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
    }
    uVar4 = 0xc000000000000000;
    if (uVar11 < 0xf) {
      uVar4 = *(ulong *)(unaff_x20 + 0xf8);
    }
    FUN_100cb4f08();
    func_0x00010006c090(uVar5,uVar4);
  }
  return uVar10;
}



/* Entry: 101551c78; end: 101552207;  */

void FUN_101551c78(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_998;
  undefined1 auStack_990 [240];
  undefined1 auStack_8a0 [104];
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  undefined1 auStack_800 [80];
  long lStack_7b0;
  undefined1 auStack_710 [208];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined1 auStack_620 [56];
  ulong uStack_5e8;
  undefined1 auStack_530 [40];
  ulong uStack_508;
  ulong uStack_500;
  ulong auStack_440 [30];
  undefined1 auStack_350 [24];
  ulong uStack_338;
  ulong uStack_330;
  undefined *puStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined *apuStack_170 [8];
  ulong uStack_130;
  ulong uStack_128;
  long alStack_80 [2];
  
  FUN_10164e4e4(auStack_990);
  FUN_10164e244(auStack_8a0);
  func_0x000101554010(auStack_990);
  FUN_1015524b4(&uStack_838);
  uVar12 = param_2;
  FUN_10164e6c0(param_2,param_3,param_4);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar19 = *(ulong *)(uVar12 + 0x10);
  if (uVar19 == 0) {
    func_0x000107c6142c(uVar12);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_170[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101552a08(0,uVar19,0);
    uVar20 = 0;
    do {
      puVar14 = apuStack_170[0];
      if (*(ulong *)(uVar12 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x101552208);
        (*pcVar11)();
      }
      puVar13 = (undefined8 *)(uVar12 + 0x20 + uVar20 * 0x28);
      uVar1 = *puVar13;
      uVar5 = puVar13[1];
      lVar16 = puVar13[2];
      uVar6 = puVar13[3];
      uVar15 = puVar13[4];
      lVar17 = *(long *)(lVar16 + 0x10);
      if (lVar17 == 0) {
        func_0x000107c61434();
        func_0x000107c61434(lVar16);
        func_0x00010006c00c(uVar6,uVar15);
        puVar21 = puVar18;
      }
      else {
        func_0x000107c61434();
        func_0x000107c61434(lVar16);
        func_0x00010006c00c(uVar6,uVar15);
        puStack_260 = puVar18;
        func_0x000101552a24(0,lVar17,0);
        puVar13 = (undefined8 *)(lVar16 + 0x40);
        puVar21 = puStack_260;
        do {
          uVar2 = puVar13[-4];
          uVar7 = puVar13[-3];
          uVar10 = *(undefined1 *)(puVar13 + -2);
          uVar3 = puVar13[-1];
          uVar8 = *puVar13;
          uVar4 = *(ulong *)(puVar21 + 0x10);
          uVar9 = *(ulong *)(puVar21 + 0x18);
          puStack_260 = puVar21;
          func_0x000107c61434(uVar7);
          func_0x000107c61434(uVar8);
          if (uVar9 >> 1 <= uVar4) {
            func_0x000101552a24(1 < uVar9,uVar4 + 1,1);
            puVar21 = puStack_260;
          }
          puVar13 = puVar13 + 7;
          *(ulong *)(puVar21 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puVar21 + uVar4 * 0x28 + 0x20) = uVar2;
          *(undefined8 *)(puVar21 + uVar4 * 0x28 + 0x28) = uVar7;
          puVar21[uVar4 * 0x28 + 0x30] = uVar10;
          *(undefined8 *)(puVar21 + uVar4 * 0x28 + 0x38) = uVar3;
          *(undefined8 *)(puVar21 + uVar4 * 0x28 + 0x40) = uVar8;
          lVar17 = lVar17 + -1;
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (lVar17 != 0);
      }
      func_0x000107c6142c(lVar16);
      func_0x00010006c090(uVar6,uVar15);
      uVar4 = *(ulong *)(puVar14 + 0x10);
      apuStack_170[0] = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar4) {
        func_0x000101552a08(1 < *(ulong *)(puVar14 + 0x18),uVar4 + 1,1);
      }
      puVar14 = apuStack_170[0];
      uVar20 = uVar20 + 1;
      *(ulong *)(apuStack_170[0] + 0x10) = uVar4 + 1;
      *(undefined8 *)(apuStack_170[0] + uVar4 * 0x18 + 0x20) = uVar1;
      *(undefined8 *)(apuStack_170[0] + uVar4 * 0x18 + 0x28) = uVar5;
      *(undefined **)(apuStack_170[0] + uVar4 * 0x18 + 0x30) = puVar21;
    } while (uVar20 != uVar19);
    func_0x000107c6142c(uVar12);
  }
  FUN_10164e4e4(auStack_800,param_2,param_3,param_4);
  alStack_80[0] = lStack_7b0;
  func_0x000107c61434(lStack_7b0);
  func_0x000101554010(auStack_800);
  lVar16 = *(long *)(lStack_7b0 + 0x10);
  if (lVar16 == 0) {
    func_0x0001015545c8(alStack_80,0x112db3e48,&UNK_10d95e3a0);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_170[0] = puVar18;
    func_0x0001015529ec(0,lVar16,0);
    puVar13 = (undefined8 *)(lStack_7b0 + 0x28);
    puVar18 = apuStack_170[0];
    do {
      uVar1 = puVar13[-1];
      uVar5 = *puVar13;
      uVar12 = *(ulong *)(puVar18 + 0x10);
      uVar19 = *(ulong *)(puVar18 + 0x18);
      apuStack_170[0] = puVar18;
      func_0x000107c61434(uVar5);
      if (uVar19 >> 1 <= uVar12) {
        func_0x0001015529ec(1 < uVar19,uVar12 + 1,1);
        puVar18 = apuStack_170[0];
      }
      puVar13 = puVar13 + 4;
      *(ulong *)(puVar18 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puVar18 + uVar12 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar18 + uVar12 * 0x10 + 0x28) = uVar5;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    func_0x0001015545c8(alStack_80,0x112db3e48,&UNK_10d95e3a0);
  }
  FUN_10164e4e4(auStack_710,param_2,param_3,param_4);
  uStack_998 = uStack_630;
  func_0x000100cb4f24(uStack_640,uStack_638,uStack_630,uStack_628);
  func_0x000101554010(auStack_710);
  if (uStack_628 >> 0x3c < 0xf) {
    dVar22 = (double)(float)uStack_640;
    dVar23 = (double)(float)((ulong)uStack_640 >> 0x20);
    uVar12 = uStack_628;
  }
  else {
    uStack_638 = 0;
    uStack_998 = 0;
    dVar22 = 0.0;
    dVar23 = 0.0;
    uVar12 = 0xc000000000000000;
  }
  FUN_10164e4e4(auStack_620,param_2,param_3,param_4);
  func_0x000101554010(auStack_620);
  FUN_10164e4e4(auStack_530,param_2,param_3,param_4);
  func_0x000107c61434(uStack_500);
  func_0x000101554010(auStack_530);
  FUN_10164e4e4(auStack_440,param_2,param_3,param_4);
  func_0x000107c61434(auStack_440[0]);
  func_0x000101554010(auStack_440);
  uVar19 = param_2;
  uVar20 = param_3;
  FUN_10164e498(param_2,param_3,param_4);
  FUN_10164e4e4(auStack_350,param_2,param_3,param_4);
  func_0x000107c61434(uStack_330);
  func_0x000101554010(auStack_350);
  FUN_10164e4e4(&puStack_260,param_2,param_3,param_4);
  func_0x000107c61434(uStack_250);
  func_0x000101554010(&puStack_260);
  FUN_10164e4e4(apuStack_170,param_2,param_3,param_4);
  func_0x000101553fdc(auStack_8a0);
  func_0x00010006c090(uStack_998,uVar12);
  func_0x000107c61434(uStack_128);
  func_0x000101554010(apuStack_170);
  *param_1 = uStack_5e8 & ((long)uStack_5e8 >> 0x3f ^ 0xffffffffffffffffU);
  param_1[1] = uStack_508;
  param_1[2] = uStack_500;
  param_1[3] = auStack_440[0];
  param_1[4] = uVar19;
  param_1[5] = uVar20;
  param_1[6] = uStack_338;
  param_1[7] = uStack_330;
  param_1[8] = uStack_258;
  param_1[9] = uStack_250;
  param_1[0xb] = uStack_830;
  param_1[10] = uStack_838;
  param_1[0xd] = uStack_820;
  param_1[0xc] = uStack_828;
  param_1[0xf] = uStack_810;
  param_1[0xe] = uStack_818;
  param_1[0x10] = uStack_808;
  param_1[0x11] = (ulong)puVar14;
  param_1[0x12] = (ulong)puVar18;
  param_1[0x13] = (ulong)dVar22;
  param_1[0x14] = (ulong)dVar23;
  param_1[0x15] = (ulong)((uint)uStack_638 & ((int)(uint)uStack_638 >> 0x1f ^ 0xffffffffU));
  param_1[0x16] = uStack_130;
  param_1[0x17] = uStack_128;
  return;
}



/* Entry: 101552208; end: 1015524b3;  */

long FUN_101552208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_100 [48];
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
  
  lVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  func_0x000107c61434(lVar3);
  lVar13 = lVar1;
  func_0x000107c5fb5c(lVar1,lVar3);
  if (0 < lVar13) {
    lVar13 = unaff_x20[2];
    uVar16 = *(ulong *)(lVar13 + 0x10);
    if (uVar16 != 0) {
      uVar17 = 0;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar2 = uVar17;
        if (uVar17 <= uVar16) {
          uVar2 = uVar16;
        }
        puVar14 = (undefined8 *)(lVar13 + 0x20 + uVar17 * 0x30);
        do {
          uVar12 = param_3;
          if (uVar16 == uVar17) {
            lVar15 = *(long *)(puVar6 + 0x10);
            func_0x000107c6142c(puVar6);
            if (lVar15 != 0) {
              uVar17 = 0;
              puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
              do {
                uVar2 = uVar17;
                if (uVar17 <= uVar16) {
                  uVar2 = uVar16;
                }
                puVar14 = (undefined8 *)(lVar13 + 0x20 + uVar17 * 0x30);
                do {
                  uVar11 = uVar12;
                  if (uVar16 == uVar17) {
                    return lVar1;
                  }
                  uVar17 = uVar17 + 1;
                  if (uVar2 + 1 == uVar17) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1015524b4);
                    (*pcVar4)();
                  }
                  uStack_c8 = puVar14[1];
                  uStack_d0 = *puVar14;
                  uStack_b8 = puVar14[3];
                  uStack_c0 = puVar14[2];
                  uStack_a8 = puVar14[5];
                  uStack_b0 = puVar14[4];
                  puVar7 = &uStack_d0;
                  puVar10 = auStack_100;
                  func_0x000101554148();
                  FUN_1015525ac();
                  uVar12 = uVar11;
                  func_0x000101554184(&uStack_d0);
                  puVar14 = puVar14 + 6;
                } while (puVar10 == (undefined1 *)0x0);
                puVar8 = puVar6;
                func_0x000107c61558();
                puVar5 = puVar6;
                if (((ulong)puVar8 & 1) == 0) {
                  puVar5 = (undefined *)0x0;
                  uVar12 = 1;
                  func_0x000101540558(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
                }
                uVar2 = *(ulong *)(puVar5 + 0x10);
                puVar6 = puVar5;
                if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
                  puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
                  uVar12 = 1;
                  func_0x000101540558(puVar6,uVar2 + 1,1,puVar5);
                }
                *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
                *(undefined8 **)(puVar6 + uVar2 * 0x18 + 0x20) = puVar7;
                *(undefined1 **)(puVar6 + uVar2 * 0x18 + 0x28) = puVar10;
                puVar6[uVar2 * 0x18 + 0x30] = (byte)uVar11 & 1;
              } while( true );
            }
            goto LAB_10155246c;
          }
          uVar17 = uVar17 + 1;
          if (uVar2 + 1 == uVar17) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1015524b0);
            (*pcVar4)();
          }
          uStack_98 = puVar14[1];
          uStack_a0 = *puVar14;
          uStack_88 = puVar14[3];
          uStack_90 = puVar14[2];
          uStack_78 = puVar14[5];
          uStack_80 = puVar14[4];
          puVar7 = &uStack_a0;
          puVar9 = &uStack_d0;
          func_0x000101554148();
          FUN_1015525ac();
          param_3 = uVar12;
          func_0x000101554184(&uStack_a0);
          puVar14 = puVar14 + 6;
        } while (puVar9 == (undefined8 *)0x0);
        puVar8 = puVar6;
        func_0x000107c61558();
        puVar5 = puVar6;
        if (((ulong)puVar8 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          param_3 = 1;
          func_0x000101540558(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar2 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          param_3 = 1;
          func_0x000101540558(puVar6,uVar2 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        *(undefined8 **)(puVar6 + uVar2 * 0x18 + 0x20) = puVar7;
        *(undefined8 **)(puVar6 + uVar2 * 0x18 + 0x28) = puVar9;
        puVar6[uVar2 * 0x18 + 0x30] = (byte)uVar12 & 1;
      } while( true );
    }
  }
LAB_10155246c:
  func_0x000107c6142c(lVar3);
  return 0;
}



/* Entry: 1015524b4; end: 1015525ab;  */

void FUN_1015524b4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar6 = uVar7;
  func_0x000107c61434();
  FUN_10164e358();
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar3 = unaff_x20[7];
    uVar9 = unaff_x20[8];
    uVar8 = unaff_x20[9];
    FUN_100cb4f08(uVar3,uVar9,uVar8);
    uVar5 = uVar8 >> 0x3c;
    uVar6 = 0;
    if (uVar5 < 0xf) {
      uVar6 = uVar9;
    }
    uVar1 = 0xc000000000000000;
    if (uVar5 < 0xf) {
      uVar1 = uVar8;
    }
    uVar9 = 0;
    if (uVar5 < 0xf) {
      uVar9 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    }
    func_0x00010006c090(uVar6,uVar1);
  }
  func_0x00010164e3f8();
  dVar11 = 0.0;
  if ((uVar6 & 1) != 0) {
    uVar6 = unaff_x20[0xc] >> 0x3c;
    dVar11 = 0.0;
    if (uVar6 < 0xf) {
      dVar11 = (double)(float)unaff_x20[10];
    }
    uVar3 = 0;
    if (uVar6 < 0xf) {
      uVar3 = unaff_x20[0xb];
    }
    uVar5 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar5 = unaff_x20[0xc];
    }
    FUN_100cb4f08();
    func_0x00010006c090(uVar3,uVar5);
  }
  *param_1 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  param_1[4] = (ulong)dVar11;
  auVar10 = NEON_scvtf(*(undefined1 (*) [16])(unaff_x20 + 3),8);
  param_1[6] = auVar10._8_8_;
  param_1[5] = auVar10._0_8_;
  return;
}



/* Entry: 1015525ac; end: 1015528db;  */

long FUN_1015525ac(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_270 [88];
  long alStack_218 [7];
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_170 [24];
  long lStack_158;
  undefined8 uStack_150;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_100 [7];
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
  
  lVar6 = *unaff_x20;
  if ((char)unaff_x20[1] != '\x01' || lVar6 == 0) {
    return 0;
  }
  lVar10 = unaff_x20[2];
  uVar11 = *(ulong *)(lVar10 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar15 = 0;
LAB_10155261c:
    lVar14 = 0;
    if (uVar15 <= uVar11) {
      lVar14 = uVar11 - uVar15;
    }
    plVar13 = (long *)(lVar10 + 0x20 + uVar15 * 0x58);
    uVar15 = uVar15 + 1;
    do {
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1015528dc);
        (*pcVar5)();
      }
      lStack_b8 = plVar13[1];
      lStack_c0 = *plVar13;
      lStack_a8 = plVar13[3];
      lStack_b0 = plVar13[2];
      lStack_98 = plVar13[5];
      lStack_a0 = plVar13[4];
      lStack_88 = plVar13[7];
      lStack_90 = plVar13[6];
      lStack_78 = plVar13[9];
      lStack_80 = plVar13[8];
      lStack_70 = plVar13[10];
      func_0x0001015541b8(&lStack_c0,auStack_270);
      func_0x000101674acc(alStack_218);
      lVar2 = alStack_218[0];
      lStack_c8 = alStack_218[0];
      func_0x000107c61434(alStack_218[0]);
      func_0x0001015541f4(alStack_218);
      lVar12 = *(long *)(lVar2 + 0x10);
      func_0x0001015545c8(&lStack_c8,0x112d38270,&UNK_10d905a20);
      lVar4 = lStack_b8;
      lVar2 = lStack_c0;
      if (lVar12 != 0) {
        func_0x000107c61434(lStack_b8);
        lVar12 = lVar2;
        func_0x000107c5fb5c(lVar2,lVar4);
        if (0 < lVar12) goto LAB_1015526ec;
        func_0x000107c6142c(lVar4);
      }
      func_0x000101554228(&lStack_c0);
      lVar14 = lVar14 + -1;
      plVar13 = plVar13 + 0xb;
      uVar15 = uVar15 + 1;
      if (uVar15 - uVar11 == 1) goto LAB_10155287c;
    } while( true );
  }
  lVar10 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
joined_r0x00010155289c:
  if (lVar10 == 0) {
    func_0x000107c6142c(puVar9);
    return 0;
  }
  return lVar6;
LAB_1015526ec:
  func_0x000101674acc(auStack_1e0);
  uVar3 = uStack_1d0;
  lVar14 = lStack_1d8;
  func_0x000107c61434(uStack_1d0);
  func_0x0001015541f4(auStack_1e0);
  func_0x000107c5fb5c(lVar14,uVar3);
  func_0x000107c6142c(uVar3);
  if (lVar14 < 1) {
    uStack_2a0 = 0;
    uStack_298 = 0;
  }
  else {
    func_0x000101674acc(auStack_1a8);
    uStack_2a0 = uStack_198;
    uStack_298 = uStack_1a0;
    func_0x000107c61434();
    func_0x0001015541f4(auStack_1a8);
  }
  func_0x000101674acc(auStack_170);
  uVar3 = uStack_150;
  lVar14 = lStack_158;
  func_0x000107c61434(uStack_150);
  func_0x0001015541f4(auStack_170);
  func_0x000107c5fb5c(lVar14,uVar3);
  func_0x000107c6142c(uVar3);
  if (lVar14 < 1) {
    uStack_2b0 = 0;
    uStack_2a8 = 0;
  }
  else {
    func_0x000101674acc(auStack_138);
    uStack_2b0 = uStack_118;
    uStack_2a8 = uStack_120;
    func_0x000107c61434();
    func_0x0001015541f4(auStack_138);
  }
  func_0x000101674acc(auStack_100);
  uVar3 = auStack_100[0];
  func_0x000107c61434(auStack_100[0]);
  func_0x0001015541f4(auStack_100);
  func_0x000101554228(&lStack_c0);
  puVar7 = puVar9;
  func_0x000107c61558();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    FUN_101540d98(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar1 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    FUN_101540d98(puVar9,uVar1 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar9 + uVar1 * 0x38 + 0x20) = uVar3;
  *(undefined8 *)(puVar9 + uVar1 * 0x38 + 0x28) = uStack_298;
  *(undefined8 *)(puVar9 + uVar1 * 0x38 + 0x30) = uStack_2a0;
  *(undefined8 *)(puVar9 + uVar1 * 0x38 + 0x38) = uStack_2a8;
  *(undefined8 *)(puVar9 + uVar1 * 0x38 + 0x40) = uStack_2b0;
  *(long *)(puVar9 + uVar1 * 0x38 + 0x48) = lVar2;
  *(long *)(puVar9 + uVar1 * 0x38 + 0x50) = lVar4;
  if (uVar15 == uVar11) goto LAB_10155287c;
  goto LAB_10155261c;
LAB_10155287c:
  lVar10 = *(long *)(puVar9 + 0x10);
  goto joined_r0x00010155289c;
}



/* Entry: 1015528dc; end: 101552a3f;  */

void FUN_1015528dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101552a40();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101552a40; end: 101552bbb;  */

undefined * FUN_101552a40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101552bbc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112db3e00;
    func_0x0001000285a8(0x112db3e00,&UNK_10d95e360);
    lVar5 = 0;
    func_0x00010470ee30();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101552bb4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101552bb8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x00010470ee30();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 101552bbc; end: 101553127;  */

undefined * FUN_101552bbc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101552cc4);
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
    puVar3 = (undefined *)0x112db3e30;
    func_0x0001000285a8(0x112db3e30,&UNK_10d95e390);
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
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1107a1450);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101553128; end: 10155323f;  */

undefined *
FUN_101553128(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_2;
  if ((param_3 & 1) != 0) {
    uVar3 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar3 < (long)param_2) {
      if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101553240);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar3 <= (long)param_2) {
        uVar3 = param_2;
      }
    }
  }
  uVar4 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar3 <= (long)uVar4) {
    uVar3 = uVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar3 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar2 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar4;
    *(long *)(param_5 + 0x18) = ((long)(puVar2 + -0x20) / 0x18) * 2;
    puVar2 = param_5;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar4,param_7);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar4 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}


